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
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
float fLocal_46=0f;
var uLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
int iLocal_50=0;
struct<3> Local_51[16];
float fLocal_52[16]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
struct<3> Local_53={
0, 0, 0 
};
struct<3> Local_54={
0, 0, 0 
};
struct<3> Local_55={
0, 0, 0 
};
struct<3> Local_56={
0, 0, 0 
};
float fLocal_57=0f;
struct<3> Local_58={
0, 0, 0 
};
struct<3> Local_59={
0, 0, 0 
};
float fLocal_60=0f;
struct<3> Local_61={
0, 0, 0 
};
struct<3> Local_62={
0, 0, 0 
};
float fLocal_63=0f;
struct<3> Local_64={
0, 0, 0 
};
struct<3> Local_65={
0, 0, 0 
};
float fLocal_66=0f;
struct<3> Local_67={
0, 0, 0 
};
struct<3> Local_68={
0, 0, 0 
};
float fLocal_69=0f;
struct<3> Local_70={
0, 0, 0 
};
struct<3> Local_71={
0, 0, 0 
};
float fLocal_72=0f;
struct<3> Local_73={
0, 0, 0 
};
struct<3> Local_74={
0, 0, 0 
};
float fLocal_75=0f;
bool bLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
bool bLocal_79=0;
int iLocal_80=0;
bool bLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
bool bLocal_84=0;
int iLocal_85=0;
float fLocal_86=0f;
float fLocal_87=0f;
float fLocal_88=0f;
float fLocal_89=0f;
var uLocal_90=0;
int iLocal_91=0;
var uLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
var uLocal_97[2]={
0, 0 
};
int iLocal_98[16]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
var uLocal_102[4]={
0, 0, 0, 0 
};
int iLocal_103[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_104=0;
var uLocal_105[16]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
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
var uLocal_132=8;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=4;
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
var uLocal_151=4;
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
var uLocal_166=4;
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
var uLocal_181=4;
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
var uLocal_196=4;
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
var uLocal_211=4;
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
var uLocal_226=4;
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
var uLocal_241=4;
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
int iLocal_260=0;
char[] cLocal_261[8]=0;
char* sLocal_262=NULL;
char* sLocal_263=NULL;
char* sLocal_264=NULL;
char* sLocal_265=NULL;
char* sLocal_266=NULL;
char* sLocal_267=NULL;
char* sLocal_268=NULL;
char* sLocal_269=NULL;
var uLocal_270=0;
var uLocal_271=16;
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
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
int iLocal_436=0;
var uLocal_437=0;
var uLocal_438=5;
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
var uLocal_454=5;
var uLocal_455=0;
var uLocal_456=0;
var uLocal_457=0;
var uLocal_458=0;
var uLocal_459=0;
#endregion

void __EntryFunction__(){
int iVar0;
int iVar1;
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
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
fLocal_46=-1f;
Local_53={
-1109.213f, 4914.744f, 216.101f 
};
Local_54={
-1034.6f, 4918.6f, 205.9f 
};
Local_55={
-1066.963f, 4873.13f, 207.3281f 
};
Local_56={
-1112.946f, 4986.957f, 241.133f 
};
fLocal_57=72.3125f;
Local_58={
-1138.386f, 4872.04f, 207.5488f 
};
Local_59={
-1091.959f, 4983.27f, 241.1698f 
};
fLocal_60=57.8125f;
Local_61={
-1171.648f, 4888.658f, 211.0756f 
};
Local_62={
-1137.907f, 4926.572f, 240.999f 
};
fLocal_63=17.9375f;
Local_64={
-1177.981f, 4903.231f, 212.477f 
};
Local_65={
-1153.398f, 4902.631f, 241.155f 
};
fLocal_66=17.9375f;
Local_67={
-1175.693f, 4904.839f, 207.5207f 
};
Local_68={
-1142.08f, 4985.32f, 241.2887f 
};
fLocal_69=36.375f;
Local_70={
-1106.212f, 4860.086f, 206.1207f 
};
Local_71={
-1105.016f, 4873.854f, 241.1453f 
};
fLocal_72=11.5625f;
Local_73={
-1044.268f, 4916.587f, 209.8365f 
};
Local_74={
-1063.605f, 4972.88f, 241.1299f 
};
fLocal_75=12.875f;
iLocal_96=4;
cLocal_261="REPLAY_TMG";
sLocal_262="CMN_TDIED";
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(26)){
func_194();
}
if(MISC::GET_IS_PLAYER_IN_ANIMAL_FORM()){
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
wait(0);
if(BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_77){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
switch (iLocal_50){
case 0:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(Global_113648.f_24997.f_5 >=iLocal_96 && !func_193()){
iLocal_50=2;
}
func_190();
func_187();
}
break;
case 1:
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(timera() > 2000){
if(iLocal_91==1){
func_186();
}elseif(iLocal_91==2){
func_159();
}
}
if(timera() > 1300){
if(iLocal_93 < 3){
func_158();
}else{
func_157();
}
}
if(iLocal_78){
func_144(26, 1);
iLocal_78=0;
iLocal_50=0;
}}
break;
case 2:
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_116();
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[9 /*31*/], 0, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[10 /*31*/], 0, 0, 1);
break;
case 4:
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iLocal_50=3;
break;
}
bLocal_79=false;
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
iVar0=0;
while (iVar0 < iLocal_98){
if(PED::IS_PED_INJURED(iLocal_98[iVar0])){
if(HUD::DOES_BLIP_EXIST(uLocal_105[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_105[iVar0]));
}
}
else{
if(TASK::IS_PED_IN_WRITHE(iLocal_98[iVar0])){
if(HUD::DOES_BLIP_EXIST(uLocal_105[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_105[iVar0]));
}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(iLocal_98[iVar0], PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0)){
if(!func_115()){
if(iLocal_95 < MISC::GET_GAME_TIMER()){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar1==0){
func_100(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
}
elseif(iVar1==1){
func_99(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
}
elseif(iVar1==2){
func_99(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
}
iLocal_95=(MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6000));
}}}
bLocal_79=true;
}
iVar0++;
}
if(!bLocal_79){
func_63();
}
break;
case 3:
if(!iLocal_77){
uLocal_109=func_62();
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_109)){
break;
}
func_61(&uLocal_114, 0);
iLocal_77=1;
}
if(func_32(&uLocal_114, &uLocal_120, &uLocal_109, cLocal_261, sLocal_262, &bLocal_76, 78)){
iLocal_94=0;
PED::REMOVE_RELATIONSHIP_GROUP(uLocal_270);
TASK::REMOVE_COVER_POINT(uLocal_108);
iVar0=0;
while (iVar0 < iLocal_98){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[iVar0])){
PED::DELETE_PED(&(iLocal_98[iVar0]));
}
iVar0++;
}
iVar0=0;
while (iVar0 < iLocal_103){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_103[iVar0])){
OBJECT::DELETE_OBJECT(&(iLocal_103[iVar0]));
}
iVar0++;
}
if(CAM::DOES_CAM_EXIST(uLocal_106)){
CAM::SET_CAM_ACTIVE(uLocal_106, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_101)){
OBJECT::DELETE_OBJECT(&uLocal_101);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_101)){
OBJECT::DELETE_OBJECT(&uLocal_101);
}
if(bLocal_76){
func_11();
func_3(0);
func_1(1);
iLocal_77=0;
iLocal_50=2;
}
else{
iLocal_77=0;
func_194();
}}
break;
}}elseif(bLocal_81){
}else{
func_194();
}}}


void func_1(bool bParam0){
if(bParam0){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
MISC::PAUSE_DEATH_ARREST_RESTART(1);
MISC::SET_FADE_OUT_AFTER_DEATH(0);
func_2(1);
Global_95939=1;
}else{
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
MISC::PAUSE_DEATH_ARREST_RESTART(0);
MISC::SET_FADE_OUT_AFTER_DEATH(1);
func_2(0);
Global_95939=0;
}}


void func_2(bool bParam0){
if((Global_43257==9 || Global_43257==10) || Global_43257==5){
Global_112297=bParam0;
if(bParam0){
}}else{
if(bParam0){
}
Global_112297=0;
}}


void func_3(bool bParam0){
if(bParam0){
func_10();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_9(0)){
func_4(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_4(int iParam0){
if(func_8()){
return;
}
if(Global_20584){
if(func_7()){
func_6(1, 1);
}else{
func_6(0, 0);
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
if(!func_5()){
Global_20383.f_1=3;
}}

int func_5(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_9(0)){
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


bool func_7(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_8(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_9(int iParam0){
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


void func_10(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_11(){
func_22();
func_14(0, 1);
func_12(0, 1);
}


void func_12(int iParam0, int iParam1){
if(iParam0==1){
func_14(0, 0);
GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
MISC::SET_BIT(&iLocal_48, 1);
func_13(1, 2, 0);
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(2);
}else{
if(MISC::IS_BIT_SET(iLocal_48, 1) || iParam1){
GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
func_13(0, 2, 1);
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
}
MISC::CLEAR_BIT(&iLocal_48, true);
}}


void func_13(int iParam0, int iParam1, int iParam2){
if(iParam0==1){
MISC::SET_BIT(&iLocal_48, 2);
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam1==1){
MISC::SET_TIME_SCALE(0.2f);
}else{
MISC::SET_TIME_SCALE(0.075f);
}}}else{
if(MISC::IS_BIT_SET(iLocal_48, 2) || iParam2){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::SET_TIME_SCALE(1f);
}}
MISC::CLEAR_BIT(&iLocal_48, 2);
}}


void func_14(int iParam0, int iParam1){
char* sVar0;
switch (func_15()){
case 0:
sVar0="DeathFailMichaelIn";
break;
case 1:
sVar0="DeathFailFranklinIn";
break;
case 2:
sVar0="DeathFailTrevorIn";
break;
}
if(iParam0==1){
if(!MISC::IS_BIT_SET(iLocal_48, 0) || iParam1){
GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, 0);
MISC::SET_BIT(&iLocal_48, 0);
func_13(1, 1, 0);
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
}}else{
if(MISC::IS_BIT_SET(iLocal_48, 0) || iParam1){
GRAPHICS::ANIMPOSTFX_STOP(sVar0);
func_13(0, 1, 1);
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
}
MISC::CLEAR_BIT(&iLocal_48, false);
}}

int func_15(){
func_16();
return Global_113648.f_2365.f_539.f_4321;
}


void func_16(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_20(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_19(PLAYER::PLAYER_PED_ID());
if(func_18(iVar0) && (!func_17(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_18(Global_113648.f_2365.f_539.f_4321)){
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


bool func_17(int iParam0){
return Global_43257==iParam0;
}


bool func_18(int iParam0){
return iParam0 < 3;
}

int func_19(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_20(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_20(int iParam0){
if(func_18(iParam0)){
return func_21(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__21(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_22(){
iLocal_48=0;
iLocal_49=0;
func_23(0, 1, 1, 0, 0, 0, 0);
func_3(1);
}


void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_31(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_5()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_30(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_31(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_30(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID(), 0)) && !func_24()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_24(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_25(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_26(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_26(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_27();
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

int func_27(){
return Global_1574918;
}

int func_28(int iParam0){
if(func_25(iParam0, 0)){
return 1;
}
if(func_29()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_29(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_30(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_31(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}

int func_32(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6){
switch (*uParam0){
case 0:
*uParam0=1;
AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
func_60(&(uParam0->f_1));
func_22();
func_59(uParam1, (0.15f * 0.075f), 0.5f);
SCRIPT::SET_NO_LOADING_SCREEN(1);
break;
case 1:
if(func_57() || CAM::IS_SCREEN_FADED_OUT()){
*uParam0=2;
}
if(!func_56(uParam0->f_4, 4)){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
func_54(&(uParam0->f_4), 4);
}}
if(IntToFloat(timera()) > (1500f * 0.2f)){
if(!func_56(uParam0->f_4, 2)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
func_54(&(uParam0->f_4), 2);
}
func_33(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
}
break;
case 2:
if(func_33(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1)){
func_14(0, 1);
func_12(0, 1);
func_22();
if(*iParam5){
MISC::IGNORE_NEXT_RESTART(1);
}elseif(!uParam0->f_5){
func_2(0);
}
SCRIPT::SET_NO_LOADING_SCREEN(0);
MISC::PAUSE_DEATH_ARREST_RESTART(0);
*uParam0=3;
}
break;
case 3:
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
func_14(0, 1);
func_12(0, 1);
AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
SCRIPT::SET_NO_LOADING_SCREEN(0);
return 1;
}
break;
case 4:
SCRIPT::SET_NO_LOADING_SCREEN(0);
return 1;
break;
}
return 0;
}

int func_33(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9){
switch (*uParam1){
case 0:
if(!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(2500);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}
if(bParam9){
SCRIPT::SET_NO_LOADING_SCREEN(1);
}
MISC::SET_TIME_SCALE(0.2f);
if(func_53(iParam5, 4)){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0, -1)){
*uParam1=1;
}}else{
*uParam1=1;
}
break;
case 1:
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_52(sParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
if(func_53(iParam5, 32)){
if(!uParam1->f_136){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam1->f_136=1;
}}
if(!func_53(iParam5, 1)){
PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
}
func_51(&(uParam1->f_10), 0, 1, 1, 1);
func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
if(func_53(iParam5, 4)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
}
if(func_53(iParam5, 8)){
switch (func_15()){
case 0:
GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, 0);
break;
case 1:
GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, 0);
break;
case 2:
GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, 0);
break;
}}
if(!func_49(&(uParam1->f_1))){
func_48(&(uParam1->f_1));
}
if(func_53(iParam5, 2)){
if(!func_49(&(uParam1->f_4))){
func_48(&(uParam1->f_4));
}}
*uParam1=2;
break;
case 2:
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
if(func_53(iParam5, 32)){
if(!uParam1->f_136){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam1->f_136=1;
}}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
func_46(uParam0, 0, 0);
if(!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >=uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT())){
func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
uParam1->f_138=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(!func_53(iParam5, 1)){
PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
}
func_37(&(uParam1->f_10));
*uParam1=3;
return 0;
}elseif(PAD::IS_CONTROL_JUST_RELEASED(2, 202)){
uParam1->f_138=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(!func_53(iParam5, 1)){
PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
}
func_37(&(uParam1->f_10));
*uParam1=3;
return 0;
}}
if(func_53(iParam5, 2)){
if(func_44(&(uParam1->f_4)) >=fParam8){
uParam1->f_138=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
if(!func_53(iParam5, 1)){
PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
}
func_37(&(uParam1->f_10));
*uParam1=3;
return 0;
}}
break;
case 3:
func_46(uParam0, 0, 0);
MISC::SET_TIME_SCALE(1f);
if(uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())))){
CAM::DO_SCREEN_FADE_IN(2500);
}
if(func_53(iParam5, 64) && uParam1->f_138){
CAM::DO_SCREEN_FADE_OUT(500);
}
func_34(&(uParam1->f_4));
if(bParam9){
SCRIPT::SET_NO_LOADING_SCREEN(0);
}
*uParam1=4;
break;
case 4:
if(func_44(&(uParam1->f_4)) <=0.1f){
func_46(uParam0, 0, 0);
}else{
*uParam4=uParam1->f_138;
return 1;
}
break;
}
return 0;
}


void func_34(var uParam0){
func_35(uParam0, 0f);
}


void func_35(var uParam0, float fParam1){
uParam0->f_1=(func_36(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


float func_36(bool bParam0){
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


void func_37(var uParam0){
if(*uParam0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}
uParam0->f_1=0;
uParam0->f_123=0;
}


void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
bool bVar4;
int iVar5;
int iVar6;
bool bVar7;
float fVar8;
if(((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING()){
if(!bParam3){
return;
}}
if(!func_43(uParam0)){
return;
}
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(uParam2);
if(!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(2))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_53(uParam0->f_1, 4096));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar5=0;
iVar6=0;
while (iVar6 < uParam0->f_123){
switch (uParam0->f_2[iVar6 /*15*/].f_2){
case 0:
bVar4=true;
break;
case 1:
bVar4=PAD::IS_USING_KEYBOARD_AND_MOUSE(2);
break;
case 2:
bVar4=!PAD::IS_USING_KEYBOARD_AND_MOUSE(2);
break;
default:
bVar4=false;
break;
}
if(bVar4){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
iVar5++;
bVar7=false;
while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14){
uVar0=uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
uVar1=uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
iVar2=MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
if(!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, bVar7)){
uVar3=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(uVar0, uVar1, iVar2);
}
else{
uVar3=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(uVar0, uVar1, iVar2);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uVar3)){
func_42(uVar3);
}
bVar7++;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/])){
func_52(uParam0->f_2[iVar6 /*15*/]);
}
if(MISC::IS_PC_VERSION()){
if(func_53(uParam0->f_1, 4096)){
if(uParam0->f_2[iVar6 /*15*/].f_1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar6++;
}
fVar8=func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_40(&(uParam0->f_1), 256);
func_39(&(uParam0->f_1), 128);
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}


void func_39(var uParam0, int iParam1){
*uParam0=(*uParam0 - (*uParam0 && iParam1));
}


void func_40(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


float func_41(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_42(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

int func_43(var uParam0){
if(*uParam0 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_40(&(uParam0->f_1), 1);
return 1;
}}
return 0;
}


float func_44(var uParam0){
if(func_49(uParam0)){
if(func_45(uParam0)){
return uParam0->f_2;
}else{
return (func_36(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


bool func_45(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2){
if(!func_49(&(uParam0->f_2))){
func_34(&(uParam0->f_2));
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
if(!bParam2){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
}elseif(bParam2){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
}
if(bParam1){
if(PAD::IS_CONTROL_PRESSED(2, 201)){
return 0;
}}
if(uParam0->f_1==-1){
return 1;
}
if(func_44(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1){
func_47(&(uParam0->f_2));
return 0;
}
return 1;
}


void func_47(var uParam0){
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
}


void func_48(var uParam0){
if(!func_49(uParam0)){
func_34(uParam0);
}}


bool func_49(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
if(*uParam0==0){
return 0;
}
iVar0=0;
if(iParam5==1){
iVar0=1;
}
iVar1=uParam0->f_123;
if(iVar1 < 8){
uParam0->f_2[iVar1 /*15*/]=sParam1;
uParam0->f_2[iVar1 /*15*/].f_1=iVar0;
uParam0->f_2[iVar1 /*15*/].f_2=iParam6;
uParam0->f_2[iVar1 /*15*/].f_12=0;
uParam0->f_2[iVar1 /*15*/].f_13=0;
uParam0->f_2[iVar1 /*15*/].f_14=0;
uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/]=iParam2;
uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1=iParam3;
if(iParam4==1){
MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
}
uParam0->f_2[iVar1 /*15*/].f_14++;
uParam0->f_123++;
return 1;
}
return 0;
}


void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
if(*uParam0==0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
}
uParam0->f_1=0;
uParam0->f_123=0;
if(bParam1){
func_40(&(uParam0->f_1), 32);
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_40(&(uParam0->f_1), 1);
if(bParam2){
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
}}
if(MISC::IS_PC_VERSION()){
if(bParam3){
func_40(&(uParam0->f_1), 4096);
}}
if(bParam4){
func_40(&(uParam0->f_1), 8192);
}}


void func_52(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


bool func_53(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_54(var uParam0, int iParam1){
func_55(uParam0, iParam1);
}


void func_55(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_56(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}

int func_57(){
if(!MISC::IS_BIT_SET(iLocal_48, 0) && !MISC::IS_BIT_SET(iLocal_48, 1)){
settimera(0);
func_14(1, 0);
}
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
HUD::CLEAR_PRINTS();
}
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PED::SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME();
if(IntToFloat(timera()) > (1500f * 0.2f)){
if(!MISC::IS_BIT_SET(iLocal_48, 1)){
func_12(1, 0);
settimerb(0);
}elseif(IntToFloat(timerb()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(1500);
}}elseif(iLocal_49==0){
iLocal_49=MISC::GET_GAME_TIMER() + 1000;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
func_13(0, 2, 1);
func_23(1, 1, 1, 0, 0, 0, 0);
func_3(1);
HUD::SET_FRONTEND_ACTIVE(0);
HUD::SET_PAUSE_MENU_ACTIVE(0);
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
func_14(0, 0);
func_58(0);
}elseif(MISC::GET_GAME_TIMER() < iLocal_49){
return 1;
}}}
return 0;
}


void func_58(int iParam0){
int iVar0;
iVar0=0;
if(iVar0==0){
if(iParam0==1){
if(!MISC::IS_BIT_SET(iLocal_48, 3)){
MISC::SET_GAME_PAUSED(1);
MISC::SET_BIT(&iLocal_48, 3);
}}elseif(MISC::IS_BIT_SET(iLocal_48, 3)){
MISC::SET_GAME_PAUSED(0);
MISC::CLEAR_BIT(&iLocal_48, 3);
}}}


void func_59(var uParam0, float fParam1, float fParam2){
if(func_49(&(uParam0->f_1))){
func_47(&(uParam0->f_1));
}
if(func_49(&(uParam0->f_4))){
func_47(&(uParam0->f_4));
}
func_37(&(uParam0->f_10));
uParam0->f_134=fParam1;
uParam0->f_135=fParam2;
uParam0->f_137=1;
uParam0->f_136=0;
*uParam0=0;
}


void func_60(var uParam0){
if(!func_49(uParam0)){
func_48(uParam0);
}else{
func_34(uParam0);
}}


void func_61(var uParam0, int iParam1){
*uParam0=0;
uParam0->f_4=0;
uParam0->f_5=iParam1;
AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1);
}


var func__62(){
return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}


void func_63(){
if(!iLocal_80){
AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
Global_113648.f_24997.f_5=1000;
AUDIO::UNLOCK_MISSION_NEWS_STORY(64);
Global_113648.f_20566.f_472=54;
uLocal_259=GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
func_98(1);
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_259)){
wait(0);
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
func_52("CULT_PASS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!func_97()){
wait(0);
}
func_96();
settimera(0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
iLocal_80=1;
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_259, 255, 255, 255, 255, 0);
if(!iLocal_82){
if(timera() > 9500){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_259, "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_82=1;
}}
if(timera() > 10000){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_259)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_259);
func_98(0);
}
while (MISC::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), Local_53, 1) < 209f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
wait(0);
}
func_64(18);
func_194();
}}


void func_64(int iParam0){
char cVar0[64];
if(iParam0==-1){
iParam0=func_93();
}
if(iParam0==-1){
return;
}
if(func_92()){
func_70(iParam0);
HUD::SET_MISSION_NAME(0, 0);
Global_113639=MISC::GET_GAME_TIMER();
func_69(30000);
StringCopy(&cVar0, func_68(Global_113637, 1), 64);
if(func_67(Global_113637) > 0){
StringConCat(&cVar0, " Variation ", 64);
StringIntConCat(&cVar0, Global_113636, 64);
}
STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113634, (MISC::GET_GAME_TIMER() - Global_113635), 0);
}elseif(MISC::IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3){
MISC::CLEAR_BIT(&Global_113644, false);
}
func_66(&Global_32223);
Global_113638=0;
func_65(-1);
}


void func_65(int iParam0){
Global_113637=iParam0;
}


void func_66(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
}

int func_67(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 1:
iVar0=5;
break;
case 5:
iVar0=2;
break;
case 9:
iVar0=10;
break;
case 11:
iVar0=4;
break;
case 13:
iVar0=4;
break;
case 15:
iVar0=2;
break;
case 17:
iVar0=2;
break;
case 22:
iVar0=2;
break;
case 23:
iVar0=2;
break;
case 25:
iVar0=3;
break;
case 26:
iVar0=2;
break;
case 27:
iVar0=2;
break;
case 29:
iVar0=3;
break;
}
return iVar0;
}


char* func_68(int iParam0, bool bParam1){
switch (iParam0){
case 0:
return "RE_ACCIDENT";
break;
case 1:
return "RE_ATMROBBERY";
break;
case 2:
return "RE_BUSTOUR";
break;
case 3:
return "RE_DOMESTIC";
break;
case 4:
return "RE_GETAWAYDRIVER";
break;
case 5:
return "RE_SHOPROBBERY";
break;
case 6:
return "RE_SNATCHED";
break;
case 7:
return "RE_LURED";
break;
case 8:
return "RE_BIKETHIEFSTAMP";
break;
case 9:
return "RE_SECURITYVAN";
break;
case 10:
return "RE_PAPARAZZI";
break;
case 11:
return "RE_CHASETHIEVES";
break;
case 12:
return "RE_DEALGONEWRONG";
break;
case 13:
return "RE_HITCHLIFT";
break;
case 14:
return "RE_STAG";
break;
case 15:
return "RE_ARREST";
break;
case 16:
return "RE_CRASHRESCUE";
break;
case 17:
return "RE_CARTHEFT";
break;
case 18:
return "RE_CULTSHOOTOUT";
break;
case 19:
return "RE_GANGFIGHT";
break;
case 20:
return "RE_GANGINTIMIDATION";
break;
case 21:
return "RE_PRISONVANBREAK";
break;
case 22:
return "RE_PRISONERLIFT";
break;
case 23:
return "RE_ABANDONEDCAR";
break;
case 24:
return "RE_BURIAL";
break;
case 25:
return "RE_MUGGING";
break;
case 26:
return "RE_BIKETHIEF";
break;
case 27:
return "RE_DRUNKDRIVER";
break;
case 28:
return "RE_HOMELANDSECURITY";
break;
case 29:
return "RE_BORDERPATROL";
break;
case 30:
return "RE_SIMEONYETARIAN";
break;
case 31:
return "RE_DUEL";
break;
case 32:
return "RE_SEAPLANE";
break;
case 33:
return "RE_MONKEYPHOTO";
break;
case -1:
return "RE_NONE";
break;
}
if(!bParam1){}
return "UNKNOWN";
}


void func_69(int iParam0){
Global_43808=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_70(int iParam0){
func_71(iParam0, 0, func_91(iParam0));
}


void func_71(int iParam0, int iParam1, int iParam2){
var uVar0;
struct<16> Var1;
uVar0=func_90();
func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
func_80(iParam0, &uVar0);
Var1={
func_72(&uVar0) 
};
}
struct<16> func_72(var uParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, "", 64);
iVar1=func_79(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_78(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_77(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, " ", 64);
iVar1=func_76(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, "/", 64);
iVar1=func_75(*uParam0);
if(iVar1 < 9){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1 + 1, 64);
StringConCat(&Var0, "/", 64);
StringIntConCat(&Var0, func_73(*uParam0), 64);
return Var0;
}

int func_73(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_74(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_75(var uParam0){
return uParam0 & 15;
}

int func_76(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_77(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_78(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_79(int iParam0){
return shift_right(iParam0, 9) & 31;
}


void func_80(int iParam0, var uParam1){
Global_113648.f_24997.f_43[iParam0]=*uParam1;
}


void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_73(*uParam0);
iVar1=func_75(*uParam0);
iVar2=func_76(*uParam0);
iVar3=func_79(*uParam0);
iVar4=func_78(*uParam0);
iVar5=func_77(*uParam0);
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
iVar6=func_89(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_89(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_88(uParam0, iParam1);
func_87(uParam0, iParam2);
func_86(uParam0, iParam3);
func_85(uParam0, iParam5);
func_84(uParam0, iParam4);
func_83(uParam0, iParam6);
}


void func_83(var uParam0, int iParam1){
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


void func_84(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_75(*uParam0);
iVar1=func_73(*uParam0);
if(iParam1 < 1 || iParam1 > func_89(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}


void func_85(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_86(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_87(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_88(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_89(int iParam0, int iParam1){
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


var func__90(){
var uVar0;
func_88(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_87(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_86(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_84(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_85(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_83(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}

int func_91(int iParam0){
int iVar0;
switch (iParam0){
case 23:
iVar0=30;
break;
case 0:
iVar0=30;
break;
case 15:
iVar0=30;
break;
case 1:
iVar0=200;
break;
case 26:
iVar0=30;
break;
case 8:
iVar0=30;
break;
case 29:
iVar0=30;
break;
case 24:
iVar0=30;
break;
case 2:
iVar0=0;
break;
case 17:
iVar0=30;
break;
case 11:
iVar0=30;
break;
case 16:
iVar0=30;
break;
case 18:
iVar0=30;
break;
case 12:
iVar0=120;
break;
case 3:
iVar0=60;
break;
case 27:
iVar0=60;
break;
case 19:
iVar0=30;
break;
case 20:
iVar0=30;
break;
case 4:
iVar0=60;
break;
case 28:
iVar0=30;
break;
case 13:
iVar0=35;
break;
case 7:
iVar0=30;
break;
case 25:
iVar0=40;
break;
case 10:
iVar0=30;
break;
case 22:
iVar0=30;
break;
case 21:
iVar0=30;
break;
case 5:
iVar0=30;
break;
case 30:
iVar0=60;
break;
case 9:
iVar0=60;
break;
case 6:
iVar0=40;
break;
case 14:
iVar0=40;
break;
}
return iVar0;
}

int func_92(){
if((Global_113637==func_93() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113638){
return 1;
}
return 0;
}

int func_93(){
struct<16> Var0;
var uVar1;
StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
uVar1=func_94(Var0);
return uVar1;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15){
switch (MISC::GET_HASH_KEY(&cParam0)){
case joaat("re_abandonedcar"):
return 23;
break;
case joaat("re_accident"):
return 0;
break;
case joaat("re_arrests"):
return 15;
break;
case joaat("re_atmrobbery"):
return 1;
break;
case joaat("re_bikethief"):
return 26;
break;
case joaat("re_border"):
return 29;
break;
case joaat("re_burials"):
return 24;
break;
case joaat("re_bus_tours"):
return 2;
break;
case joaat("re_cartheft"):
return 17;
break;
case joaat("re_chasethieves"):
return 11;
break;
case joaat("re_crashrescue"):
return 16;
break;
case joaat("re_cultshootout"):
return 18;
break;
case joaat("re_dealgonewrong"):
return 12;
break;
case joaat("re_domestic"):
return 3;
break;
case joaat("re_drunkdriver"):
return 27;
break;
case joaat("re_gang_intimidation"):
return 20;
break;
case joaat("re_gangfight"):
return 19;
break;
case joaat("re_getaway_driver"):
return 4;
break;
case joaat("re_hitch_lift"):
return 13;
break;
case joaat("re_homeland_security"):
return 28;
break;
case joaat("re_lured"):
return 7;
break;
case joaat("re_muggings"):
return 25;
break;
case joaat("re_paparazzi"):
return 10;
break;
case joaat("re_prisonerlift"):
return 22;
break;
case joaat("re_prisonvanbreak"):
return 21;
break;
case joaat("re_securityvan"):
return 9;
break;
case joaat("re_shoprobbery"):
return 5;
break;
case joaat("re_snatched"):
return 6;
break;
case joaat("re_stag_do"):
return 14;
break;
case joaat("re_yetarian"):
return 30;
break;
case joaat("re_duel"):
return 31;
break;
case joaat("re_seaplane"):
return 32;
break;
case joaat("re_monkey"):
return 33;
break;
}
return -1;
}


Vector3 func__95(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_96(){
Global_32402=0;
Global_32403=0;
Global_32405=0;
Global_32406=0;
Global_32407=0;
}

int func_97(){
return 1;
}


void func_98(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}


void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2){
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
func_113();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_112(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_111();
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
func_110();
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
if(func_109()){
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
if(func_5()){
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
func_108();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_107();
func_102();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_113();
}
return 0;
}


void func_102(){
if(!func_103()){
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

int func_103(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_106()){
return 0;
}
if(func_104(PLAYER::PLAYER_ID())){
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


bool func_104(int iParam0){
return func_105(iParam0, 20);
}


var func__105(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_106(){
return -1;
}


void func_107(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_108(){
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

int func_109(){
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


void func_110(){
if(func_17(14)){
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
Global_20383=func_15();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


void func_111(){
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


bool func_112(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_113(){
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


void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21179={
*uParam0 
};
Global_7569=iParam1;
StringCopy(&Global_21795, sParam2, 24);
Global_22714=uParam5;
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

int func_115(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_116(){
int iVar0;
int iVar1;
iVar0=0;
switch (iLocal_94){
case 0:
MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 20f);
if(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
}
STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
STREAMING::REQUEST_MODEL(joaat("a_m_y_acult_02"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
while ((((((!func_143() || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood03a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood04a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01"))){
wait(0);
}
uLocal_436=func_136(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_436)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436, "Trevors_weapon", 0, 0, 0);
}
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_clip_01")), 0);
if(func_143() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
CUTSCENE::START_CUTSCENE(0);
}
wait(0);
if(!bLocal_76 && Global_113648.f_24997.f_5 !=1000){
func_135();
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[0])){
PED::DELETE_PED(&(iLocal_98[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])){
PED::DELETE_PED(&(iLocal_98[1]));
}
if(CAM::DOES_CAM_EXIST(uLocal_106)){
CAM::SET_CAM_ACTIVE(uLocal_106, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_101)){
OBJECT::DELETE_OBJECT(&iLocal_101);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_101)){
OBJECT::DELETE_OBJECT(&iLocal_101);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
if(HUD::DOES_BLIP_EXIST(uLocal_104)){
HUD::REMOVE_BLIP(&uLocal_104);
}
func_23(1, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
HUD::CLEAR_HELP(1);
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
}
MISC::CLEAR_AREA(Local_53, 100f, 1, 0, 0, 0);
PED::ADD_SCENARIO_BLOCKING_AREA(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
uLocal_108=TASK::ADD_COVER_POINT(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_01"));
while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_01"))){
wait(0);
}
iLocal_94=6;
break;
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
break;
case 6:
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0)){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_98[11])){
iLocal_98[11]=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CULT_MASTER", 0));
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_98[12])){
iLocal_98[12]=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("REAR_CULT", 0));
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_98[13])){
iLocal_98[13]=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LEFT_OLD_CULT", 0));
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_98[14])){
iLocal_98[14]=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CARBINE_CULT", 0));
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0)){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_98[15])){
iLocal_98[15]=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("SHOTGUN_CULT", 0));
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0)){
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 188.9369f);
TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_108, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0)){
WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_436, PLAYER::PLAYER_PED_ID());
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1065353216);
func_23(0, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
Local_51[0 /*3*/]={
-1044.632f, 4918.149f, 211.3315f 
};
fLocal_52[0]=254.8275f;
Local_51[1 /*3*/]={
-1054.92f, 4915.155f, 210.8241f 
};
fLocal_52[1]=270.2025f;
Local_51[2 /*3*/]={
-1051.859f, 4903.902f, 209.6199f 
};
fLocal_52[2]=299.8404f;
Local_51[3 /*3*/]={
-1068.246f, 4899.532f, 213.2755f 
};
fLocal_52[3]=298.4257f;
Local_51[4 /*3*/]={
-1083.322f, 4899.532f, 213.2755f 
};
fLocal_52[4]=283.5311f;
Local_51[5 /*3*/]={
-1084.058f, 4933.805f, 228.2246f 
};
fLocal_52[5]=87.5233f;
Local_51[6 /*3*/]={
-1081.976f, 4937.339f, 232.3275f 
};
fLocal_52[6]=109.6546f;
Local_51[7 /*3*/]={
-1092.075f, 4939.958f, 217.3385f 
};
fLocal_52[7]=210.2433f;
Local_51[8 /*3*/]={
-1101.798f, 4930.33f, 217.3544f 
};
fLocal_52[8]=203.732f;
Local_51[9 /*3*/]={
-1070.675f, 4869.301f, 220.2917f 
};
fLocal_52[9]=39.1109f;
Local_51[10 /*3*/]={
-1115.703f, 4878.439f, 225.8085f 
};
fLocal_52[10]=25.8472f;
PED::ADD_RELATIONSHIP_GROUP("rghCult", &uLocal_270);
iVar1=0;
while (iVar1 < iLocal_98){
if(((iVar1==0 || iVar1==5) || iVar1==6) || iVar1==10){
iLocal_98[iVar1]=PED::CREATE_PED(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 0);
PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 2);
PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
PED::SET_PED_ACCURACY(iLocal_98[iVar1], 5);
PED::SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
PED::SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
ENTITY::SET_ENTITY_HEALTH(iLocal_98[iVar1], 150, 0);
PED::SET_PED_SHOOT_RATE(iLocal_98[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
TASK::TASK_COMBAT_PED(iLocal_98[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
}elseif(iVar1==2){
iLocal_98[iVar1]=PED::CREATE_PED(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 50, 1);
PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 2);
PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 1);
PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
PED::SET_PED_ACCURACY(iLocal_98[iVar1], 5);
PED::SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
PED::SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
PED::SET_PED_SHOOT_RATE(iLocal_98[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
TASK::TASK_COMBAT_PED(iLocal_98[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
}elseif(iVar1 > 10 && iVar1 < 20){
if(((((!PED::IS_PED_INJURED(iLocal_98[iVar1]) && !PED::IS_PED_INJURED(iLocal_98[11])) && !PED::IS_PED_INJURED(iLocal_98[12])) && !PED::IS_PED_INJURED(iLocal_98[13])) && !PED::IS_PED_INJURED(iLocal_98[14])) && !PED::IS_PED_INJURED(iLocal_98[15])){
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[11], joaat("weapon_pistol"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[12], joaat("weapon_assaultrifle"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[13], joaat("weapon_assaultrifle"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[14], joaat("weapon_carbinerifle"), -1, 1, 1);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 0, 1);
PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 3);
PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 0);
PED::SET_PED_ACCURACY(iLocal_98[iVar1], 0);
WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_98[iVar1], 1f, 1f);
TASK::OPEN_SEQUENCE_TASK(&uLocal_107);
TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.33f, 4924.412f, 221.6576f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6000, 0);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_107);
TASK::TASK_PERFORM_SEQUENCE(iLocal_98[15], uLocal_107);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_107);
TASK::OPEN_SEQUENCE_TASK(&uLocal_107);
TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.279f, 4932.933f, 222.541f, PLAYER::PLAYER_PED_ID(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, 0);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_107);
TASK::TASK_PERFORM_SEQUENCE(iLocal_98[14], uLocal_107);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_107);
TASK::OPEN_SEQUENCE_TASK(&uLocal_107);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2500, 0);
TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.175f, 4926.073f, 221.3447f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500, 0);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_107);
TASK::TASK_PERFORM_SEQUENCE(iLocal_98[13], uLocal_107);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_107);
TASK::OPEN_SEQUENCE_TASK(&uLocal_107);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.962f, 4922.196f, 221.309f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5500, 0);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_107);
TASK::TASK_PERFORM_SEQUENCE(iLocal_98[12], uLocal_107);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_107);
TASK::OPEN_SEQUENCE_TASK(&uLocal_107);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 10000, 0);
TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.475f, 4916.061f, 220.5658f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::CLOSE_SEQUENCE_TASK(uLocal_107);
TASK::TASK_PERFORM_SEQUENCE(iLocal_98[11], uLocal_107);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_107);
PED::SET_PED_KEEP_TASK(iLocal_98[iVar1], 1);
PED::SET_PED_RESET_FLAG(iLocal_98[iVar1], 156, 1);
}}else{
iLocal_98[iVar1]=PED::CREATE_PED(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("weapon_pistol"), -1, 1, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 50, 1);
PED::SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 2);
PED::SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 0);
PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
PED::SET_PED_COMBAT_RANGE(iLocal_98[iVar1], 1);
PED::SET_PED_ACCURACY(iLocal_98[iVar1], 5);
PED::SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
PED::SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
PED::SET_PED_SHOOT_RATE(iLocal_98[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
TASK::TASK_COMBAT_PED(iLocal_98[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_98[iVar1], uLocal_270);
ENTITY::SET_ENTITY_HEADING(iLocal_98[iVar1], func_134(ENTITY::GET_ENTITY_COORDS(iLocal_98[iVar1], 1), func_95(PLAYER::PLAYER_ID())));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[iVar1], 1);
PED::SET_PED_CONFIG_FLAG(iLocal_98[iVar1], 42, 1);
uLocal_105[iVar1]=func_132(iLocal_98[iVar1], 1, 145);
iVar1++;
}
func_99(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
func_99(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
MISC::SET_BIT(&iVar0, 1);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 4);
if(!bLocal_76){
uLocal_102[0]=OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
uLocal_102[1]=OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
uLocal_102[2]=OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
uLocal_102[3]=OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
}
uLocal_102[0]=uLocal_102[0];
uLocal_102[1]=uLocal_102[1];
uLocal_102[2]=uLocal_102[2];
uLocal_102[3]=uLocal_102[3];
iLocal_103[0]=OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
iLocal_103[1]=OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
iLocal_103[2]=OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
iLocal_103[3]=OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
iLocal_103[4]=OBJECT::CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
iLocal_103[5]=OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
if(func_131() < 50){
PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, 1, 0);
}
if(func_130() !=18){
func_128(18);
}
if(!func_92()){
func_117(0);
}
func_1(1);
bLocal_76=false;
iLocal_50=4;
}
break;
}}

int func_117(int iParam0){
if(func_122()){
Global_113638=1;
Global_113635=MISC::GET_GAME_TIMER();
if(func_121(Global_113637)){
func_118(0);
}
HUD::SET_MISSION_NAME(1, "RE_TITLE");
if(iParam0 && func_121(Global_113637)){
HUD::FLASH_MINIMAP_DISPLAY();
}
return 1;
}
return 0;
}


void func_118(int iParam0){
switch (iParam0){
case 0:
if(Global_113648.f_24997.f_2 < 3){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_119(func_120(iParam0), -1);
Global_113648.f_24997.f_2++;
MISC::SET_BIT(&Global_113644, 0);
}}
break;
case 1:
if(!MISC::IS_BIT_SET(Global_113644, 1)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_119(func_120(iParam0), -1);
Global_113648.f_24997.f_3++;
MISC::SET_BIT(&Global_113644, 1);
}}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_113644, 2)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_119(func_120(iParam0), -1);
Global_113648.f_24997.f_4++;
MISC::SET_BIT(&Global_113644, 2);
}}
break;
}}


void func_119(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


char* func_120(int iParam0){
char* sVar0;
sVar0="";
switch (iParam0){
case 0:
sVar0="AM_H_REFS";
break;
case 1:
sVar0="RE_FLASHBLIP";
break;
case 2:
sVar0="RE_HANDOVER";
break;
}
return sVar0;
}

int func_121(int iParam0){
switch (iParam0){
case 29:
case 30:
case 2:
case 18:
return 0;
break;
}
return 1;
}

int func_122(){
switch (func_123(&Global_32223, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD())){
case 1:
return 1;
break;
case 0:
return 1;
break;
}
return 0;
}

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98159.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_127(0)){
return 0;
}
Global_43221++;
*uParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23131.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43257=iParam2;
Global_43219=*uParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43218 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43219==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_125(iParam2)){
return 0;
}
if(Global_43218==8){
return 0;
}
Global_43221++;
*uParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218++;
if(iParam4 !=0){
func_124(uParam0, iParam4);
}}
return 2;
}


void func_124(var uParam0, int iParam1){
int iVar0;
if(Global_43218==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43218){
if(Global_43224[iVar0 /*4*/]==*uParam0){
Global_43224[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}


bool func_125(int iParam0){
return func_126(iParam0, Global_43257);
}

int func_126(int iParam0, int iParam1){
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

int func_127(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_125(iParam0)){
return 0;
}
return 1;
}


void func_128(int iParam0){
if(iParam0==-1){
iParam0=func_93();
}
if(iParam0==-1){
return;
}
func_65(iParam0);
MISC::SET_SCRIPT_HIGH_PRIO(0);
MISC::SET_RANDOM_EVENT_FLAG(1);
Global_113634=0;
func_129();
}


void func_129(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}}

int func_130(){
return Global_113637;
}

int func_131(){
var uVar0;
switch (func_15()){
case 0:
STATS::STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
break;
}
return uVar0;
}


var func__132(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_133(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2028[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_41(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_41(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_41(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


var func__134(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}


void func_135(){
Global_32403=1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
struct<3> Var5;
int iVar6;
int iVar7;
int iVar8;
iVar0=0;
iVar2=iParam1;
if(!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0)){
iVar0=1;
}
if(iVar2==joaat("weapon_unarmed")){
return 0;
}
iVar3=0;
if(iParam2==1){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar3=WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
}
if(iVar3==-1){
iVar4=WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
if(iVar4 > 0){
iVar3=iVar4;
}else{
WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
}}}
Var5={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(10f, 0f, 0f) 
};
if(bParam3){
Var5={
iParam4, iParam5, iParam6 
};
}
while (func_140(iVar2, iVar6) !=0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_140(iVar2, iVar6))){
if(func_139(func_140(iVar2, iVar6))){
iVar7=WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(func_140(iVar2, iVar6));
}}}
iVar6++;
}
uVar1=WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, iVar0, 1065353216, iVar7, iParam7, iParam8);
while (func_140(iVar2, iVar8) !=0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_140(iVar2, iVar8))){
WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uVar1, func_140(iVar2, iVar8));
func_137(uVar1, func_140(iVar2, iVar8));
}}
iVar8++;
}
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, 0)){
WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(uVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
}}
return uVar1;
}


void func_137(var uParam0, int iParam1){
int iVar0;
iVar0=func_138(iParam1);
if(iVar0 !=0){
WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(uParam0, iVar0);
}}

int func_138(int iParam0){
switch (iParam0){
case joaat("component_pistol_mk2_camo"):
return joaat("component_pistol_mk2_camo_slide");
break;
case joaat("component_pistol_mk2_camo_02"):
return joaat("component_pistol_mk2_camo_02_slide");
break;
case joaat("component_pistol_mk2_camo_03"):
return joaat("component_pistol_mk2_camo_03_slide");
break;
case joaat("component_pistol_mk2_camo_04"):
return joaat("component_pistol_mk2_camo_04_slide");
break;
case joaat("component_pistol_mk2_camo_05"):
return joaat("component_pistol_mk2_camo_05_slide");
break;
case joaat("component_pistol_mk2_camo_06"):
return joaat("component_pistol_mk2_camo_06_slide");
break;
case joaat("component_pistol_mk2_camo_07"):
return joaat("component_pistol_mk2_camo_07_slide");
break;
case joaat("component_pistol_mk2_camo_08"):
return joaat("component_pistol_mk2_camo_08_slide");
break;
case joaat("component_pistol_mk2_camo_09"):
return joaat("component_pistol_mk2_camo_09_slide");
break;
case joaat("component_pistol_mk2_camo_10"):
return joaat("component_pistol_mk2_camo_10_slide");
break;
case joaat("component_pistol_mk2_camo_ind_01"):
return joaat("component_pistol_mk2_camo_ind_01_slide");
break;
case joaat("component_snspistol_mk2_camo"):
return joaat("component_snspistol_mk2_camo_slide");
break;
case joaat("component_snspistol_mk2_camo_02"):
return joaat("component_snspistol_mk2_camo_02_slide");
break;
case joaat("component_snspistol_mk2_camo_03"):
return joaat("component_snspistol_mk2_camo_03_slide");
break;
case joaat("component_snspistol_mk2_camo_04"):
return joaat("component_snspistol_mk2_camo_04_slide");
break;
case joaat("component_snspistol_mk2_camo_05"):
return joaat("component_snspistol_mk2_camo_05_slide");
break;
case joaat("component_snspistol_mk2_camo_06"):
return joaat("component_snspistol_mk2_camo_06_slide");
break;
case joaat("component_snspistol_mk2_camo_07"):
return joaat("component_snspistol_mk2_camo_07_slide");
break;
case joaat("component_snspistol_mk2_camo_08"):
return joaat("component_snspistol_mk2_camo_08_slide");
break;
case joaat("component_snspistol_mk2_camo_09"):
return joaat("component_snspistol_mk2_camo_09_slide");
break;
case joaat("component_snspistol_mk2_camo_10"):
return joaat("component_snspistol_mk2_camo_10_slide");
break;
case joaat("component_snspistol_mk2_camo_ind_01"):
return joaat("component_snspistol_mk2_camo_ind_01_slide");
break;
case joaat("component_pistol_mk2_varmod_xm3"):
return joaat("component_pistol_mk2_varmod_xm3_slide");
break;
}
return 0;
}

int func_139(int iParam0){
if((((((((((((((((((((((((((((((((((((iParam0==joaat("component_pistol_varmod_luxe") || iParam0==joaat("component_combatpistol_varmod_lowrider")) || iParam0==joaat("component_appistol_varmod_luxe")) || iParam0==joaat("component_microsmg_varmod_luxe")) || iParam0==joaat("component_smg_varmod_luxe")) || iParam0==joaat("component_assaultrifle_varmod_luxe")) || iParam0==joaat("component_carbinerifle_varmod_luxe")) || iParam0==joaat("component_advancedrifle_varmod_luxe")) || iParam0==joaat("component_mg_varmod_lowrider")) || iParam0==joaat("component_combatmg_varmod_lowrider")) || iParam0==joaat("component_pumpshotgun_varmod_lowrider")) || iParam0==joaat("component_sniperrifle_varmod_luxe")) || iParam0==joaat("component_assaultsmg_varmod_lowrider")) || iParam0==joaat("component_pistol50_varmod_luxe")) || iParam0==joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0==joaat("component_bullpuprifle_varmod_low")) || iParam0==joaat("component_snspistol_varmod_lowrider")) || iParam0==joaat("component_specialcarbine_varmod_lowrider")) || iParam0==joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0==joaat("component_knuckle_varmod_pimp")) || iParam0==joaat("component_knuckle_varmod_ballas")) || iParam0==joaat("component_knuckle_varmod_dollar")) || iParam0==joaat("component_knuckle_varmod_diamond")) || iParam0==joaat("component_knuckle_varmod_hate")) || iParam0==joaat("component_knuckle_varmod_love")) || iParam0==joaat("component_knuckle_varmod_player")) || iParam0==joaat("component_knuckle_varmod_king")) || iParam0==joaat("component_knuckle_varmod_vagos")) || iParam0==joaat("component_switchblade_varmod_var1")) || iParam0==joaat("component_switchblade_varmod_var2")) || iParam0==joaat("component_revolver_varmod_boss")) || iParam0==joaat("component_revolver_varmod_goon")) || iParam0==joaat("component_gunrun_mk2_upgrade")) || iParam0==joaat("component_appistol_varmod_security")) || iParam0==joaat("component_pumpshotgun_varmod_security")) || iParam0==joaat("component_microsmg_varmod_security")) || iParam0==joaat("component_pumpshotgun_varmod_xm3")){
return 1;
}
return 0;
}

int func_140(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
struct<4> Var5;
iVar0=0;
switch (iParam0){
case joaat("weapon_pistol"):
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
}
break;
case joaat("weapon_smg"):
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
case 0:
iVar0=joaat("component_minigun_clip_01");
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
case 0:
iVar0=joaat("component_sawnoffshotgun_varmod_luxe");
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
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
switch (iParam1){
case 0:
iVar0=joaat("component_switchblade_varmod_var1");
break;
case 1:
iVar0=joaat("component_switchblade_varmod_var2");
break;
}
break;
case joaat("weapon_revolver"):
switch (iParam1){
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
switch (iParam1){
case 0:
iVar0=joaat("component_minismg_clip_01");
break;
case 1:
iVar0=joaat("component_minismg_clip_02");
break;
}
break;
case joaat("weapon_bat"):
switch (iParam1){
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
default:
if(iParam0 !=0){
iVar1=func_142(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_141(Var5.f_3)){
if(iVar3==iParam1){
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

int func_141(int iParam0){
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

int func_142(int iParam0, var uParam1){
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


bool func_143(){
bool bVar0;
bVar0=CUTSCENE::HAS_CUTSCENE_LOADED();
if(!Global_78557){
if(!bVar0){
Global_78557=1;
}}
return bVar0;
}

int func_144(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1){
if(func_17(14) && !func_156(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32414 !=0 && !Global_78558){
return 0;
}
if(func_155(&Global_4542597)){
if(func_153(&Global_4542597, iParam0)){
return 0;
}
if(func_146(&Global_4542597, iParam0)){
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

int func_146(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_17(14) && !func_156(iParam1)){
return 0;
}
if(func_153(uParam0, iParam1)){
return 0;
}
if(func_152(uParam0) < 0f){
func_151(uParam0, 0);
}
func_149(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_147(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_147(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_17(14) && !func_156(iParam1)){
return 0;
}
if(func_153(uParam0, iParam1)){
return 0;
}
if(func_152(uParam0) < 0f){
func_151(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_148(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_148(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_149(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_150(uParam0, iVar0);
iVar0++;
}
func_151(uParam0, (Global_4542596 - 0.5f));
}


void func_150(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_151(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_152(var uParam0){
return uParam0->f_80;
}


bool func_153(var uParam0, int iParam1){
return func_154(uParam0, iParam1) !=-1;
}

int func_154(var uParam0, int iParam1){
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


bool func_155(var uParam0){
return uParam0->f_79==1;
}

int func_156(int iParam0){
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


void func_157(){
if(fLocal_87 > 0f){
fLocal_87=(fLocal_87 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
}else{
fLocal_87=0f;
}
if(fLocal_87 >=0f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41953[10 /*31*/], fLocal_87, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[10 /*31*/], 4, 0, 1);
}
if(fLocal_86 < 0f){
fLocal_86=(fLocal_86 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
}else{
fLocal_86=0f;
}
if(fLocal_86 <=0f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41953[9 /*31*/], fLocal_86, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[9 /*31*/], 4, 0, 1);
}}


void func_158(){
if(fLocal_87 < 1f){
fLocal_87=(fLocal_87 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
}else{
fLocal_87=1f;
}
if(fLocal_87 <=1f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41953[10 /*31*/], fLocal_87, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[10 /*31*/], 4, 0, 1);
}
if(fLocal_86 > -1f){
fLocal_86=(fLocal_86 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
}else{
fLocal_86=-1f;
}
if(fLocal_86 >=-1f){
OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41953[9 /*31*/], fLocal_86, 0, 1);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41953[9 /*31*/], 4, 0, 1);
}}


void func_159(){
switch (iLocal_93){
case 0:
STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
if((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))){
if(Global_113648.f_24997.f_5 < 2){
if(Global_113648.f_24997.f_5==0){
sLocal_269="ACULT_HI";
}else{
sLocal_269="ACULT_LEAVE5";
}
sLocal_263="cult_p5_guard";
sLocal_265="cult_p5_trv";
sLocal_266="cult_p5_victim_01";
sLocal_267="cult_p5_victim_02";
sLocal_268="cult_p5_cam";
fLocal_89=0.75f;
fLocal_88=0.999f;
}elseif(Global_113648.f_24997.f_5 >=2){
sLocal_269="ACULT_CAPT";
sLocal_263="cult_p7_guard_01";
sLocal_264="cult_p7_guard_02";
sLocal_265="cult_p7_trv";
sLocal_266="cult_p7_victim_01";
sLocal_267="cult_p7_victim_02";
sLocal_268="cult_p7_cam";
fLocal_89=0.98f;
fLocal_88=0.98f;
STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
if(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
}}
if(HUD::DOES_BLIP_EXIST(uLocal_104)){
HUD::REMOVE_BLIP(&uLocal_104);
}
func_23(1, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
HUD::CLEAR_HELP(1);
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
if(func_185()){
func_184(0);
}
func_182();
wait(0);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uLocal_99=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_99, 0)){
if(VEHICLE::IS_VEHICLE_STOPPED(uLocal_99)){
iLocal_93++;
}}}else{
uLocal_99=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!PED::IS_PED_INJURED(uLocal_97[0]) && !PED::IS_PED_INJURED(uLocal_97[1])){
TASK::CLEAR_PED_TASKS(uLocal_97[0]);
PED::REMOVE_PED_FROM_GROUP(uLocal_97[0]);
TASK::CLEAR_PED_TASKS(uLocal_97[1]);
PED::REMOVE_PED_FROM_GROUP(uLocal_97[1]);
}
iLocal_93++;
}}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(uLocal_99)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_99)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_99, 1, 0);
}
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_99, Local_54, 13f, 13f, 13f, 0, 1, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_99, 0)){
ENTITY::SET_ENTITY_HEADING(iLocal_99, 149.8882f);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_99, 1084227584);
}}}
MISC::CLEAR_AREA(Local_54, 12f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
if(!PED::IS_PED_INJURED(uLocal_97[0]) && !PED::IS_PED_INJURED(uLocal_97[1])){
ENTITY::SET_ENTITY_COORDS(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_97[0], 128.2065f);
ENTITY::SET_ENTITY_COORDS(uLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_97[1], 128.2065f);
}
iLocal_98[0]=PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
if(Global_113648.f_24997.f_5 >=2){
iLocal_98[1]=PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
}
func_99(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], 1);
iLocal_101=WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_101, iLocal_98[0], PED::GET_PED_BONE_INDEX(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1, 0);
if(Global_113648.f_24997.f_5 < 2){
uLocal_100=OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_53, 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}elseif(Global_113648.f_24997.f_5 >=2){
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
}
uLocal_106=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
uLocal_92=PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[0], uLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
if(Global_113648.f_24997.f_5 >=2){
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[1], uLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
}
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_106, uLocal_92, sLocal_268, "random@altruist_cult");
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
if(!PED::IS_PED_INJURED(uLocal_97[0]) && !PED::IS_PED_INJURED(uLocal_97[1])){
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_97[0], uLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_97[1], uLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
}
iLocal_93++;
break;
case 2:
if(!PED::IS_PED_INJURED(uLocal_97[0])){
if(PED::IS_PED_MALE(uLocal_97[0])){
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
}else{
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
}}
if(!PED::IS_PED_INJURED(uLocal_97[1])){
if(PED::IS_PED_MALE(uLocal_97[1])){
func_180(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
}else{
func_180(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_92) > fLocal_89){
iLocal_93++;
}
break;
case 3:
if(!PED::IS_PED_INJURED(uLocal_97[0])){
if(PED::IS_PED_MALE(uLocal_97[0])){
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
}else{
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
}}
if(!PED::IS_PED_INJURED(uLocal_97[1])){
if(PED::IS_PED_MALE(uLocal_97[1])){
func_180(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
}else{
func_180(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_92) > fLocal_88){
iLocal_93++;
}
break;
case 4:
if(Global_113648.f_24997.f_5 < 2){
func_135();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[0])){
PED::DELETE_PED(&(iLocal_98[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])){
PED::DELETE_PED(&(iLocal_98[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_100)){
OBJECT::DELETE_OBJECT(&iLocal_100);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_101)){
OBJECT::DELETE_OBJECT(&iLocal_101);
}
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
CAM::SET_CAM_ACTIVE(uLocal_106, 0);
func_23(0, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
func_160(func_15(), 1, 2000, 0, 0);
}
AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
Global_113648.f_24997.f_5 +=2;
iLocal_78=1;
break;
}}


void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_179(iParam0)==3){
return;
}
if(func_179(iParam0)==4){
return;
}
func_161(func_179(iParam0), 1, iParam1, iParam2, 0);
if(bParam3){
iVar0=0;
if(bParam4){
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_random_peds");
break;
case 1:
iVar1=joaat("sp1_money_made_from_random_peds");
break;
case 2:
iVar1=joaat("sp2_money_made_from_random_peds");
break;
default:
return;
}}else{
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_missions");
break;
case 1:
iVar1=joaat("sp1_money_made_from_missions");
break;
case 2:
iVar1=joaat("sp2_money_made_from_missions");
break;
default:
return;
}}
STATS::STAT_GET_INT(iVar1, &iVar0, -1);
iVar0=(iVar0 + iParam2);
STATS::STAT_SET_INT(iVar1, iVar0, 1);
}}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_178();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_177(99, 1);
func_176(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_174(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_171(5)){
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
func_176(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_171(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_176(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_176(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
func_176(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_176(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_176(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_171(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_176(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_176(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_176(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_176(joaat("sp2_money_spent_car_mods"), iParam3);
break;
}
func_170(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_177(95, iParam3);
break;
case 1:
func_177(97, iParam3);
break;
case 2:
func_177(96, iParam3);
break;
}
func_177(98, iParam3);
break;
}
iVar2=iParam0;
iParam3=floor((fVar0 * to_float(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_164(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_164(bVar1);
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
func_176(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_176(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_176(joaat("sp2_total_cash_earned"), iParam3);
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
func_163(iParam0);
if(Global_43257==15){
func_162(0);
}
return 1;
}


void func_162(bool bParam0){
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


void func_163(int iParam0){
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


void func_164(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_169(129, 0, -1);
return;
}
if(bParam0==9){
func_169(135, 0, -1);
return;
}
if(bParam0==10){
func_169(136, 0, -1);
return;
}
if(bParam0==11){
func_169(137, 0, -1);
return;
}
if(bParam0==12){
func_167(8272, 0, -1, 1, 0);
return;
}
if(bParam0==13){
func_167(8273, 0, -1, 1, 0);
return;
}
if(bParam0==14){
func_167(8274, 0, -1, 1, 0);
return;
}
if(bParam0==15){
func_167(8275, 0, -1, 1, 0);
return;
}
if(bParam0==16){
func_167(8276, 0, -1, 1, 0);
return;
}
if(bParam0==17){
func_167(8277, 0, -1, 1, 0);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113648.f_20566.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113648.f_20566.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_166() /*5568*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_166() /*5568*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_165(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
}}


char* func_165(bool bParam0){
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

int func_166(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_168(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_168(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_27();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


void func_169(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_27();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_170(int iParam0){
func_177(93, iParam0);
func_177(29, iParam0);
func_177(30, iParam0);
}

int func_171(int iParam0){
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
return func_173(129, -1);
}
if(iParam0==9){
return func_173(135, -1);
}
if(iParam0==10){
return func_173(136, -1);
}
if(iParam0==11){
return func_173(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_172(8272, -1, 0);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_172(8273, -1, 0);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_172(8274, -1, 0);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_172(8275, -1, 0);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_172(8276, -1, 0);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_172(8277, -1, 0);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_166() /*5568*/].f_681.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
iVar0=Global_2805029[iParam0 /*3*/][func_168(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__173(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_27();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_174(bool bParam0){
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
func_175(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_144(27, 1);
return 1;
}

int func_175(int iParam0, int iParam1){
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


void func_176(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, 1);
}


void func_177(int iParam0, int iParam1){
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


void func_178(){
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

int func_179(int iParam0){
return Global_2028[iParam0 /*29*/].f_17;
}


void func_180(var uParam0, char* sParam1, char* sParam2, int iParam3){
AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam0, sParam1, sParam2, func_181(iParam3), 0);
}

int func_181(int iParam0){
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


void func_182(){
Global_20591=0;
func_183();
}


void func_183(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
}}


void func_184(int iParam0){
Global_22736=iParam0;
}

int func_185(){
if(Global_22736==1){
return 1;
}
return 0;
}


void func_186(){
switch (iLocal_93){
case 0:
STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
if((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle"))){
if(Global_113648.f_24997.f_5==0){
sLocal_269="ACULT_HI";
sLocal_263="cult_p2_guard";
sLocal_265="cult_p2_trv";
sLocal_266="cult_p2_victim";
sLocal_268="cult_p2_cam";
fLocal_89=0.8f;
fLocal_88=0.968f;
}elseif(Global_113648.f_24997.f_5==1){
sLocal_269="ACULT_LEAVE3";
sLocal_263="cult_p4_guard";
sLocal_265="cult_p4_trv";
sLocal_266="cult_p4_victim";
sLocal_268="cult_p4_cam";
fLocal_89=0.77f;
fLocal_88=0.999f;
}elseif(Global_113648.f_24997.f_5==2){
sLocal_269="ACULT_LEAVE3";
sLocal_263="cult_p4_guard";
sLocal_265="cult_p4_trv";
sLocal_266="cult_p4_victim";
sLocal_268="cult_p4_cam";
fLocal_89=0.77f;
fLocal_88=0.999f;
}elseif(Global_113648.f_24997.f_5 >=3){
sLocal_269="ACULT_CAPT";
sLocal_263="cult_p7_guard_01";
sLocal_264="cult_p7_guard_02";
sLocal_265="cult_p7_trv";
sLocal_266="cult_p7_victim_01";
sLocal_268="cult_p7_cam";
fLocal_89=0.98f;
fLocal_88=0.98f;
STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
if(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
}}
if(HUD::DOES_BLIP_EXIST(uLocal_104)){
HUD::REMOVE_BLIP(&uLocal_104);
}
func_23(1, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
HUD::CLEAR_HELP(1);
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
if(func_185()){
func_184(0);
}
func_182();
wait(0);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_99=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99, 0)){
if(VEHICLE::IS_VEHICLE_STOPPED(iLocal_99)){
iLocal_93++;
}}}else{
iLocal_99=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!PED::IS_PED_INJURED(uLocal_97[0])){
TASK::CLEAR_PED_TASKS(uLocal_97[0]);
PED::REMOVE_PED_FROM_GROUP(uLocal_97[0]);
}
iLocal_93++;
}}
break;
case 1:
if(ENTITY::DOES_ENTITY_EXIST(iLocal_99)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_99)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_99, 1, 0);
}
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_99, Local_54, 13f, 13f, 13f, 0, 1, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_99, 0)){
ENTITY::SET_ENTITY_HEADING(iLocal_99, 149.8882f);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_99, 1084227584);
}}}
MISC::CLEAR_AREA(Local_54, 12f, 1, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
if(!PED::IS_PED_INJURED(uLocal_97[0])){
ENTITY::SET_ENTITY_COORDS(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(uLocal_97[0], 128.2065f);
}
iLocal_98[0]=PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
if(Global_113648.f_24997.f_5 >=3){
iLocal_98[1]=PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
}
func_99(&uLocal_271, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
if(Global_113648.f_24997.f_5 !=1 && Global_113648.f_24997.f_5 !=2){
func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
}
settimerb(0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], 1);
iLocal_100=OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_53, 1, 1, 0);
iLocal_101=WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_101, iLocal_98[0], PED::GET_PED_BONE_INDEX(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1, 0);
if(Global_113648.f_24997.f_5 < 3){
if(Global_113648.f_24997.f_5==0){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}else{
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_100, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}}elseif(Global_113648.f_24997.f_5 >=3){
WEAPON::GIVE_WEAPON_TO_PED(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
}
uLocal_106=CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
uLocal_92=PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[0], uLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
if(Global_113648.f_24997.f_5 >=3){
TASK::TASK_SYNCHRONIZED_SCENE(iLocal_98[1], uLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
}
CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_106, uLocal_92, sLocal_268, "random@altruist_cult");
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
if(!PED::IS_PED_INJURED(uLocal_97[0])){
TASK::TASK_SYNCHRONIZED_SCENE(uLocal_97[0], uLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
}
iLocal_93++;
break;
case 2:
if(!PED::IS_PED_INJURED(uLocal_97[0])){
if(PED::IS_PED_MALE(uLocal_97[0])){
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
}else{
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
}}
if(timerb() > 2000 && timerb() < 2100){
if(Global_113648.f_24997.f_5==1 || Global_113648.f_24997.f_5==2){
if(!func_115()){
func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
}}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_92) > fLocal_89){
iLocal_93++;
}
break;
case 3:
if(!PED::IS_PED_INJURED(uLocal_97[0])){
if(PED::IS_PED_MALE(uLocal_97[0])){
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
}else{
func_180(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
}}
if(Global_113648.f_24997.f_5==1 || Global_113648.f_24997.f_5==2){
if((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_92) > 0.9742857f && !iLocal_85) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE()==4){
GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
iLocal_85=1;
}}
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_92) > fLocal_88){
iLocal_93++;
}
break;
case 4:
if(Global_113648.f_24997.f_5 < 3){
if(Global_113648.f_24997.f_5 !=1 && Global_113648.f_24997.f_5 !=2){
func_135();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[0])){
PED::DELETE_PED(&(iLocal_98[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])){
PED::DELETE_PED(&(iLocal_98[1]));
}}else{
settimerb(0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[0])){
ENTITY::SET_ENTITY_VISIBLE(iLocal_98[0], 0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])){
ENTITY::SET_ENTITY_VISIBLE(iLocal_98[1], 0, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_97[0])){
ENTITY::SET_ENTITY_VISIBLE(uLocal_97[0], 0, 0);
}
iLocal_93++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_100)){
OBJECT::DELETE_OBJECT(&iLocal_100);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_101)){
OBJECT::DELETE_OBJECT(&iLocal_101);
}
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if(Global_113648.f_24997.f_5==0){
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), 0, 0, 0);
PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, 0, 1, 0);
}
if(MISC::ARE_STRINGS_EQUAL(sLocal_268, "cult_p4_cam")){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}else{
CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
}
CAM::SET_CAM_ACTIVE(uLocal_106, 0);
func_23(0, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
func_160(func_15(), 1, 1000, 0, 0);
}
if(Global_113648.f_24997.f_5 !=1 && Global_113648.f_24997.f_5 !=2){
AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
Global_113648.f_24997.f_5++;
iLocal_78=1;
}
break;
case 5:
if(!func_115() || timerb() > 7000){
func_135();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[0])){
PED::DELETE_PED(&(iLocal_98[0]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_98[1])){
PED::DELETE_PED(&(iLocal_98[1]));
}
AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
Global_113648.f_24997.f_5++;
iLocal_78=1;
}
break;
}}


void func_187(){
if(func_189()){
if(func_15()==2){
if(PED::DOES_GROUP_EXIST(func_188())){
PED::GET_GROUP_SIZE(func_188(), &uLocal_90, &iLocal_91);
if(iLocal_91==1){
uLocal_97[0]=PED::GET_PED_AS_GROUP_MEMBER(func_188(), 0);
if(ENTITY::IS_ENTITY_AT_COORD(uLocal_97[0], Local_54, 5f, 5f, 5f, 0, 1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)){
VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
}
}
settimera(0);
iLocal_50=1;
}}elseif(iLocal_91==2){
uLocal_97[0]=PED::GET_PED_AS_GROUP_MEMBER(func_188(), 0);
uLocal_97[1]=PED::GET_PED_AS_GROUP_MEMBER(func_188(), 1);
if(ENTITY::IS_ENTITY_AT_COORD(uLocal_97[0], Local_54, 5f, 5f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_97[1], Local_54, 5f, 5f, 5f, 0, 1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)){
VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
}
}
settimera(0);
iLocal_50=1;
}}}}}}


var func__188(){
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}


bool func_189(){
return Global_32402;
}


void func_190(){
if(func_193()){
if(iLocal_260==0){
iLocal_260=PED::ADD_SCENARIO_BLOCKING_AREA(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
}
while (MISC::GET_DISTANCE_BETWEEN_COORDS(func_95(PLAYER::PLAYER_ID()), Local_53, 1) < 209f){
wait(0);
}}
if(func_15()==0 || func_15()==1){
if(PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, joaat("player")) !=5){
if(func_192()){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, joaat("player"));
}elseif(func_191()){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, joaat("player"));
}}}elseif(func_15()==2){
if(PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, joaat("player")) !=5){
if(func_192()){
if(PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, joaat("player"));
}}elseif(func_191()){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, joaat("player"));
}elseif(PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, joaat("player")) !=1){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, joaat("player"));
}}}
if(func_192()){
if(iLocal_83){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 3)){
AUDIO::TRIGGER_MUSIC_EVENT("AC_START");
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_41953[9 /*31*/].f_2, 6f, Global_41953[9 /*31*/].f_5, 0)){
OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_41953[9 /*31*/].f_5, Global_41953[9 /*31*/].f_2, 0, 0f, 0);
}
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_41953[10 /*31*/].f_2, 6f, Global_41953[10 /*31*/].f_5, 0)){
OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_41953[10 /*31*/].f_5, Global_41953[10 /*31*/].f_2, 0, 0f, 0);
}
bLocal_84=true;
iLocal_83=0;
}}elseif(!iLocal_83){
if(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING()){
AUDIO::TRIGGER_MUSIC_EVENT("AC_END");
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
if(!bLocal_84){
func_157();
}
iLocal_83=1;
}}

int func_191(){
if((((((MISC::IS_BULLET_IN_ANGLED_AREA(Local_55, Local_56, fLocal_57, 1) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_58, Local_59, fLocal_60, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_61, Local_62, fLocal_63, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_64, Local_65, fLocal_66, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_67, Local_68, fLocal_69, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_70, Local_71, fLocal_72, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_73, Local_74, fLocal_75, 1)){
return 1;
}
return 0;
}

int func_192(){
if((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_55, Local_56, fLocal_57, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_58, Local_59, fLocal_60, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_61, Local_62, fLocal_63, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_64, Local_65, fLocal_66, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_67, Local_68, fLocal_69, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_70, Local_71, fLocal_72, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_73, Local_74, fLocal_75, 0, 1, 0)){
return 1;
}
return 0;
}

int func_193(){
if(Global_113648.f_24997.f_5==1000){
return 1;
}
return 0;
}


void func_194(){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2017343592, joaat("player"));
if(Global_113648.f_24997.f_5 >=iLocal_96 && Global_113648.f_24997.f_5 !=1000){
if(bLocal_76){
func_1(1);
func_11();
func_3(0);
iLocal_50=3;
}else{
func_195(&uLocal_109);
Global_95938=0;
Global_95939=0;
Global_95940=0;
func_14(0, 1);
func_12(0, 1);
func_2(0);
MISC::SET_FADE_OUT_AFTER_DEATH(1);
MISC::PAUSE_DEATH_ARREST_RESTART(0);
MISC::IGNORE_NEXT_RESTART(0);
func_3(0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
MISC::CLEAR_WEATHER_TYPE_PERSIST();
iLocal_83=0;
func_96();
Global_113648.f_24997.f_5=(iLocal_96 - 1);
SCRIPT::TERMINATE_THIS_THREAD();
}}else{
PED::REMOVE_SCENARIO_BLOCKING_AREAS();
func_195(&uLocal_109);
Global_95938=0;
Global_95939=0;
Global_95940=0;
func_14(0, 1);
func_12(0, 1);
func_2(0);
MISC::SET_FADE_OUT_AFTER_DEATH(1);
MISC::PAUSE_DEATH_ARREST_RESTART(0);
MISC::IGNORE_NEXT_RESTART(0);
func_3(0);
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_259)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_259);
func_98(0);
}
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
MISC::CLEAR_WEATHER_TYPE_PERSIST();
iLocal_83=0;
SCRIPT::TERMINATE_THIS_THREAD();
}}


void func_195(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}}