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
bool bLocal_45=0;
int iLocal_46=0;
int iLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
var uLocal_52[12]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_53[12];
int iLocal_54=0;
bool bLocal_55=0;
int iLocal_56=0;
var uLocal_57=0;
bool bLocal_58=0;
int iLocal_59[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_60=0;
bool bLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
struct<7> Local_70={
0, 0, 1097859072, 1500, 45, 1103626240, 5 
};
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
var uLocal_81=16;
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
var uLocal_245=0;
int iLocal_246=0;
int iLocal_247=0;
struct<3> Local_248={
0, 0, 0 
};
int iLocal_249=0;
int iLocal_250=0;
int iLocal_251=0;
struct<76> Local_252={
10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 
};
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
var uLocal_263[3]={
0, 0, 0 
};
var uLocal_264[3]={
0, 0, 0 
};
int iLocal_265[3]={
0, 0, 0 
};
float fLocal_266=0f;
bool bLocal_267=0;
int iLocal_268=0;
int iLocal_269=0;
struct<13> Local_270[10];
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
int iLocal_289=0;
int iLocal_290=0;
var uLocal_291=0;
bool bLocal_292=0;
int iLocal_293=0;
bool bLocal_294=0;
int iLocal_295=0;
var uLocal_296[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_297[20]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
bool bLocal_298=0;
int iLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
struct<3> Local_305={
0, 0, 0 
};
int iLocal_306=0;
struct<41> Local_307={
3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 
};
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
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
fLocal_266=0f;
bLocal_267=true;
Local_305={
1683.682f, 2518.867f, 44.5651f 
};
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_89(0);
}
uLocal_247=PLAYER::PLAYER_PED_ID();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
}
while (true){
if(ENTITY::IS_ENTITY_DEAD(uLocal_247, 0)){
func_89(0);
}
func_88();
Local_248={
ENTITY::GET_ENTITY_COORDS(iLocal_247, 1) 
};
switch (iLocal_246){
case 0:
func_86();
iLocal_246=1;
break;
case 1:
if(!Global_32172){
func_85();
func_84();
func_83();
func_81();
iLocal_246=2;
}
break;
case 2:
if((((func_80() && func_79()) && func_78()) && func_77()) && func_76()){
iLocal_246=3;
}
break;
case 3:
func_70();
wait(0);
func_69();
wait(0);
func_66();
func_65();
iLocal_246=4;
break;
case 4:
if(!Global_32172){
if(Global_97609){
func_89(0);
}
func_34();
func_33();
func_30();
func_29();
func_27();
func_5();
func_4();
}elseif(func_1(0)){
func_89(1);
}
break;
}
wait(0);
}}

int func_1(bool bParam0){
if(bParam0){
if(func_3()){
return 1;
}}
if(func_2(14)){
return 1;
}
return 0;
}


bool func_2(int iParam0){
return Global_43257==iParam0;
}

int func_3(){
if(Global_112593){
return 1;
}
if(!func_2(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0){
return 1;
}
return 0;
}


void func_4(){
int iVar0;
bool bVar1;
bVar1=false;
if(iLocal_51==1){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[0]=1;
}}else{
iLocal_59[0]=0;
}}}elseif(iLocal_51==2){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[1]=1;
}}else{
iLocal_59[1]=0;
}}}elseif(iLocal_51==3){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[2]=1;
}}else{
iLocal_59[2]=0;
}}}elseif(iLocal_51==4){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[3]=1;
}}else{
iLocal_59[3]=0;
}}}elseif(iLocal_51==5){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[4]=1;
}}else{
iLocal_59[4]=0;
}}}elseif(iLocal_51==6){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[5]=1;
}}else{
iLocal_59[5]=0;
}}}elseif(iLocal_51==7){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[6]=1;
}}else{
iLocal_59[6]=0;
}}}elseif(iLocal_51==8){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[7]=1;
}}else{
iLocal_59[7]=0;
}}}elseif(iLocal_51==9){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[8]=1;
}}else{
iLocal_59[8]=0;
}}}elseif(iLocal_51==10){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0)){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
iLocal_59[9]=1;
}}else{
iLocal_59[9]=0;
}}}
iLocal_51++;
if(iLocal_51 > 10){
iLocal_51=0;
}else{
iVar0=0;
while (iVar0 < 10){
if(iLocal_59[iVar0]){
bVar1=true;
}
iVar0++;
}
if(!bVar1){
if(!bLocal_55){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
}}}}


void func_5(){
struct<3> Var0;
switch (iLocal_50){
case 0:
STREAMING::REQUEST_MODEL(joaat("police3"));
STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
if(STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))){
iLocal_50++;
}
break;
case 1:
iLocal_66=VEHICLE::CREATE_VEHICLE(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1, 0);
iLocal_68=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_66, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
func_26(&iLocal_68);
iLocal_50++;
break;
case 2:
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))){
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_68, 0)){
TASK::TASK_COMBAT_PED(iLocal_68, PLAYER::PLAYER_PED_ID(), 0, 16);
}
if(!func_14(&uLocal_72)){
func_11(&uLocal_72);
}
iLocal_50++;
}
break;
case 3:
if(func_14(&uLocal_72)){
if(func_8(&uLocal_72) > 15f){
iLocal_67=VEHICLE::CREATE_VEHICLE(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1, 0);
iLocal_69=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_67, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
func_26(&iLocal_69);
TASK::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_50++;
}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264)){
func_6();
iLocal_50=0;
}}}
break;
case 4:
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264)){
func_6();
iLocal_50=0;
}}
break;
}}


void func_6(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_66)){
VEHICLE::DELETE_VEHICLE(&iLocal_66);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_68)){
PED::DELETE_PED(&iLocal_68);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_67)){
VEHICLE::DELETE_VEHICLE(&iLocal_67);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_69)){
PED::DELETE_PED(&iLocal_69);
}}

int func_7(struct<3> Param0, struct<3> Param1, float fParam2){
if(vdist2(Param0, Param1) < (fParam2 * fParam2)){
if(((ENTITY::DOES_ENTITY_EXIST(iLocal_66) && ENTITY::DOES_ENTITY_EXIST(iLocal_68)) && ENTITY::DOES_ENTITY_EXIST(iLocal_67)) && ENTITY::DOES_ENTITY_EXIST(iLocal_69)){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_66) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_66)){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_68) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_68)){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_67) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_67)){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_69) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_69)){
return 1;
}}}}}}elseif(vdist2(Param0, Param1) > 62500f){
return 1;
}
return 0;
}


float func_8(var uParam0){
if(func_14(uParam0)){
if(func_10(uParam0)){
return uParam0->f_2;
}else{
return (func_9(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


float func_9(bool bParam0){
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


bool func_10(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


void func_11(var uParam0){
if(!func_14(uParam0)){
func_12(uParam0);
}}


void func_12(var uParam0){
func_13(uParam0, 0f);
}


void func_13(var uParam0, float fParam1){
uParam0->f_1=(func_9(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
MISC::SET_BIT(uParam0, 1);
MISC::CLEAR_BIT(uParam0, 2);
uParam0->f_2=0f;
}


bool func_14(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_15(struct<3> Param0, int iParam1, int iParam2, bool bParam3){
struct<3> Var0[15];
struct<3> Var1[15];
float fVar2[15];
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar5=0;
switch (iParam1){
case 1:
Var0[0 /*3*/]={
-1332.211f, 100.4608f, 40.38437f 
};
Var1[0 /*3*/]={
-1094.238f, 148.4274f, 73f 
};
fVar2[0]=171.25f;
Var0[1 /*3*/]={
-999.7344f, -110.2231f, 25.25706f 
};
Var1[1 /*3*/]={
-1149.494f, 109.2558f, 73f 
};
fVar2[1]=132f;
Var0[2 /*3*/]={
-1035.113f, -84.95885f, 28.2746f 
};
Var1[2 /*3*/]={
-1261.103f, 50.08148f, 73f 
};
fVar2[2]=132f;
iVar3=3;
break;
case 2:
Var0[0 /*3*/]={
-804.3439f, -3346.5f, 10f 
};
Var1[0 /*3*/]={
-1816.954f, -2768.893f, IntToFloat((250 + iParam2)) 
};
fVar2[0]=247f;
Var0[1 /*3*/]={
-1911.488f, -2934.197f, 10f 
};
Var1[1 /*3*/]={
-968.6236f, -3477.748f, IntToFloat((250 + iParam2)) 
};
fVar2[1]=149f;
Var0[2 /*3*/]={
-844.9433f, -2802.785f, 10f 
};
Var1[2 /*3*/]={
-1011.081f, -3086.904f, IntToFloat((250 + iParam2)) 
};
fVar2[2]=185.5f;
Var0[3 /*3*/]={
-1021.086f, -2952.277f, 10f 
};
Var1[3 /*3*/]={
-1599.008f, -2616.271f, IntToFloat((250 + iParam2)) 
};
fVar2[3]=250f;
Var0[4 /*3*/]={
-1027.136f, -2436.457f, 10f 
};
Var1[4 /*3*/]={
-1392.61f, -2226.763f, IntToFloat((250 + iParam2)) 
};
fVar2[4]=193.5f;
Var0[5 /*3*/]={
-1497.549f, -2408.712f, 10f 
};
Var1[5 /*3*/]={
-1136.917f, -2617.955f, IntToFloat((250 + iParam2)) 
};
fVar2[5]=234.5f;
Var0[6 /*3*/]={
-982.7924f, -2831.709f, 12.93313f 
};
Var1[6 /*3*/]={
-966.4677f, -2803.458f, 16.68313f 
};
fVar2[6]=16f;
Var0[7 /*3*/]={
-1110.083f, -3496.806f, 12f 
};
Var1[7 /*3*/]={
-1955.298f, -3010.431f, IntToFloat((250 + iParam2)) 
};
fVar2[7]=80f;
Var0[8 /*3*/]={
-1886.899f, -3193.024f, 12f 
};
Var1[8 /*3*/]={
-1836.143f, -3105.268f, IntToFloat((250 + iParam2)) 
};
fVar2[8]=142f;
Var0[9 /*3*/]={
-1134.337f, -3535.648f, 12f 
};
Var1[9 /*3*/]={
-1259.649f, -3463.486f, IntToFloat((250 + iParam2)) 
};
fVar2[9]=30.75f;
Var0[10 /*3*/]={
-969.1279f, -3463.899f, 12f 
};
Var1[10 /*3*/]={
-896.3734f, -3505.715f, IntToFloat((250 + iParam2)) 
};
fVar2[10]=150f;
Var0[11 /*3*/]={
-1369.491f, -2173.579f, 10f 
};
Var1[11 /*3*/]={
-1685.626f, -2720.364f, IntToFloat((250 + iParam2)) 
};
fVar2[11]=29.25f;
Var0[12 /*3*/]={
-1010.926f, -3550.943f, 10f 
};
Var1[12 /*3*/]={
-1110.198f, -3493.617f, IntToFloat((250 + iParam2)) 
};
fVar2[12]=43f;
iVar3=13;
break;
case 3:
Var0[0 /*3*/]={
-1773.944f, 3287.334f, 30f 
};
Var1[0 /*3*/]={
-2029.776f, 2845.083f, IntToFloat((250 + iParam2)) 
};
fVar2[0]=255f;
Var0[1 /*3*/]={
-2725.889f, 3291.099f, 30f 
};
Var1[1 /*3*/]={
-2009.182f, 2879.835f, IntToFloat((250 + iParam2)) 
};
fVar2[1]=180f;
Var0[2 /*3*/]={
-2442.026f, 3326.699f, 30f 
};
Var1[2 /*3*/]={
-2033.928f, 3089.049f, IntToFloat((250 + iParam2)) 
};
fVar2[2]=205f;
Var0[3 /*3*/]={
-1917.165f, 3374.209f, 30f 
};
Var1[3 /*3*/]={
-2016.791f, 3195.058f, IntToFloat((250 + iParam2)) 
};
fVar2[3]=86.25f;
Var0[4 /*3*/]={
-2192.753f, 3373.278f, 30f 
};
Var1[4 /*3*/]={
-2191.544f, 3150.417f, IntToFloat((250 + iParam2)) 
};
fVar2[4]=150.5f;
Var0[5 /*3*/]={
-2077.663f, 3344.514f, 30f 
};
Var1[5 /*3*/]={
-2191.544f, 3150.417f, IntToFloat((250 + iParam2)) 
};
fVar2[5]=140.5f;
Var0[6 /*3*/]={
-2861.755f, 3352.661f, 30f 
};
Var1[6 /*3*/]={
-2715.871f, 3269.916f, IntToFloat((250 + iParam2)) 
};
fVar2[6]=90f;
Var0[7 /*3*/]={
-2005.574f, 3364.533f, 30f 
};
Var1[7 /*3*/]={
-1977.569f, 3330.888f, IntToFloat((250 + iParam2)) 
};
fVar2[7]=100f;
Var0[8 /*3*/]={
-1682.235f, 3004.285f, 30f 
};
Var1[8 /*3*/]={
-1942.747f, 2947.441f, IntToFloat((250 + iParam2)) 
};
fVar2[8]=248.75f;
Var0[9 /*3*/]={
-2393.295f, 2936.406f, 31.6801f 
};
Var1[9 /*3*/]={
-2453.037f, 3006.863f, 52.31003f 
};
fVar2[9]=128f;
Var0[10 /*3*/]={
-2347.185f, 3023.83f, 31.56573f 
};
Var1[10 /*3*/]={
-2517.33f, 2989.063f, 49.95644f 
};
fVar2[10]=140f;
Var0[11 /*3*/]={
-2259.922f, 3358.04f, 29.99972f 
};
Var1[11 /*3*/]={
-2299.772f, 3385.79f, 38.06014f 
};
fVar2[11]=16f;
Var0[12 /*3*/]={
-2476.309f, 3363.914f, 31.67933f 
};
Var1[12 /*3*/]={
-2431.981f, 3287.669f, 39.97826f 
};
fVar2[12]=214.25f;
Var0[13 /*3*/]={
-2103.081f, 2797.783f, 29.37864f 
};
Var1[13 /*3*/]={
-2096.821f, 2874.423f, 57.80989f 
};
fVar2[13]=65.75f;
if(bParam3){
iVar6=iParam2;
}else{
iVar6=0;
}
Var1[9 /*3*/].f_2=(Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
Var1[10 /*3*/].f_2=(Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
Var1[11 /*3*/].f_2=(Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
Var1[12 /*3*/].f_2=(Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
Var1[13 /*3*/].f_2=(Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
iVar3=14;
break;
case 4:
Var0[0 /*3*/]={
1541.607f, 2527.555f, 40f 
};
Var1[0 /*3*/]={
1815.575f, 2535.06f, IntToFloat((150 + iParam2)) 
};
fVar2[0]=114f;
Var0[1 /*3*/]={
1788.879f, 2445.727f, 40f 
};
Var1[1 /*3*/]={
1716.96f, 2502.957f, IntToFloat((150 + iParam2)) 
};
fVar2[1]=88.5f;
Var0[2 /*3*/]={
1601.157f, 2436.244f, 40f 
};
Var1[2 /*3*/]={
1650.078f, 2515.923f, IntToFloat((150 + iParam2)) 
};
fVar2[2]=133.25f;
Var0[3 /*3*/]={
1706.331f, 2407.597f, 40f 
};
Var1[3 /*3*/]={
1698.555f, 2460.208f, IntToFloat((150 + iParam2)) 
};
fVar2[3]=104.5f;
Var0[4 /*3*/]={
1712.452f, 2756.218f, 40f 
};
Var1[4 /*3*/]={
1718.848f, 2589.162f, IntToFloat((150 + iParam2)) 
};
fVar2[4]=121.75f;
Var0[5 /*3*/]={
1830.228f, 2661.24f, 40f 
};
Var1[5 /*3*/]={
1774.812f, 2679.419f, IntToFloat((150 + iParam2)) 
};
fVar2[5]=84.5f;
Var0[6 /*3*/]={
1559.05f, 2632.22f, 40f 
};
Var1[6 /*3*/]={
1657.208f, 2595.484f, IntToFloat((150 + iParam2)) 
};
fVar2[6]=103.75f;
Var0[7 /*3*/]={
1612.021f, 2716.869f, 40f 
};
Var1[7 /*3*/]={
1657.165f, 2669.721f, IntToFloat((150 + iParam2)) 
};
fVar2[7]=104.25f;
Var0[8 /*3*/]={
1809.872f, 2729.827f, 40f 
};
Var1[8 /*3*/]={
1789.855f, 2705.037f, IntToFloat((150 + iParam2)) 
};
fVar2[8]=91f;
Var0[9 /*3*/]={
1818.789f, 2605.948f, 40f 
};
Var1[9 /*3*/]={
1783.114f, 2606.783f, IntToFloat((150 + iParam2)) 
};
fVar2[9]=51.25f;
iVar3=10;
break;
case 5:
Var0[0 /*3*/]={
3411.002f, 3663.185f, 20f 
};
Var1[0 /*3*/]={
3615.583f, 3626.194f, IntToFloat((40 + iParam2)) 
};
fVar2[0]=45.75f;
Var0[1 /*3*/]={
3426.66f, 3733.078f, 20f 
};
Var1[1 /*3*/]={
3643.801f, 3694.362f, IntToFloat((40 + iParam2)) 
};
fVar2[1]=99f;
Var0[2 /*3*/]={
3446.036f, 3795.688f, 20f 
};
Var1[2 /*3*/]={
3650.914f, 3766.152f, IntToFloat((40 + iParam2)) 
};
fVar2[2]=81.5f;
iVar3=3;
break;
case 6:
Var0[0 /*3*/]={
526.053f, -3391.497f, -10f 
};
Var1[0 /*3*/]={
523.2289f, -3118.678f, IntToFloat((10 + iParam2)) 
};
fVar2[0]=120f;
Var0[1 /*3*/]={
459.4397f, -3199.99f, 4.819676f 
};
Var1[1 /*3*/]={
593.8928f, -3199.998f, 30.06926f 
};
fVar2[1]=170f;
Var0[2 /*3*/]={
552.8467f, -3111.054f, 4.819394f 
};
Var1[2 /*3*/]={
585.3137f, -3111.844f, 17.56923f 
};
fVar2[2]=12.5f;
Var0[3 /*3*/]={
598.4666f, -3140.147f, 4.819257f 
};
Var1[3 /*3*/]={
597.4973f, -3117.063f, 17.31926f 
};
fVar2[3]=9.75f;
iVar3=4;
break;
case 7:
Var0[0 /*3*/]={
-1108.55f, -570.8798f, 20f 
};
Var1[0 /*3*/]={
-1187.811f, -477.5037f, IntToFloat((50 + iParam2)) 
};
fVar2[0]=162f;
Var0[1 /*3*/]={
-1201.378f, -485.9673f, 20f 
};
Var1[1 /*3*/]={
-1215.796f, -464.8281f, IntToFloat((50 + iParam2)) 
};
fVar2[1]=124f;
Var0[2 /*3*/]={
-985.6311f, -525.4233f, 20f 
};
Var1[2 /*3*/]={
-1013.393f, -475.2057f, IntToFloat((50 + iParam2)) 
};
fVar2[2]=55f;
Var0[3 /*3*/]={
-1055.849f, -477.8226f, 20f 
};
Var1[3 /*3*/]={
-1073.333f, -498.717f, IntToFloat((50 + iParam2)) 
};
fVar2[3]=142f;
iVar3=4;
break;
case 8:
Var0[0 /*3*/]={
461.5684f, -984.572f, 29.43951f 
};
Var1[0 /*3*/]={
471.17f, -984.4292f, 40.14212f 
};
fVar2[0]=7.75f;
Var0[1 /*3*/]={
457.3404f, -984.756f, 34.43951f 
};
Var1[1 /*3*/]={
457.2084f, -993.7189f, 29.38958f 
};
fVar2[1]=14.75f;
Var0[2 /*3*/]={
477.6227f, -986.6f, 40.00819f 
};
Var1[2 /*3*/]={
424.8687f, -986.3279f, 48.71241f 
};
fVar2[2]=31.5f;
Var0[3 /*3*/]={
474.3889f, -974.4613f, 39.55761f 
};
Var1[3 /*3*/]={
474.0358f, -1021.972f, 49.10033f 
};
fVar2[3]=30.5f;
Var0[4 /*3*/]={
442.1768f, -974.1888f, 29.68951f 
};
Var1[4 /*3*/]={
442.1855f, -979.8635f, 33.43951f 
};
fVar2[4]=6.75f;
iVar3=5;
break;
}
iVar4=0;
while (iVar4 < iVar3){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1)){
return 1;
}
iVar4++;
}
return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8){
int iVar0;
bool bVar1;
iVar0=PLAYER::PLAYER_PED_ID();
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(!func_25(*uParam2, 1)){
if(func_24(iParam0, uParam2)){
*uParam3=1;
return 1;
}}
if(!func_25(*uParam2, 2)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
*uParam3=2;
return 1;
}}
if(!func_25(*uParam2, 4)){
if(func_22(iVar0, iParam0, uParam2, bParam5)){
*uParam3=4;
return 1;
}}
if(!func_25(*uParam2, 8)){
if(func_21(iVar0, iParam0, uParam2)){
*uParam3=8;
return 1;
}}
bVar1=!func_25(*uParam2, 128);
if(bParam4){
if(func_17(iParam0, iParam1, 1, bParam6, bVar1, 1)){
*uParam3=32;
return 1;
}}elseif(!func_25(*uParam2, 16)){
if(func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8)){
*uParam3=16;
return 1;
}}}elseif(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1)){
*uParam3=16;
return 1;
}}
return 0;
}

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
var uVar0;
var uVar1;
if(bParam3){
if(!bLocal_45){
iLocal_46=ENTITY::GET_ENTITY_HEALTH(iParam0);
bLocal_45=true;
}
iLocal_47=ENTITY::GET_ENTITY_HEALTH(iParam0);
iLocal_48=(iLocal_46 - iLocal_47);
uVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_DEAD(uVar0, 0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1)){
if(IntToFloat(iLocal_48) > 100f){
return 1;
}}}
if(bLocal_45){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
if(IntToFloat(iLocal_48) > 100f){
return 1;
}}}}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}
if(!bParam3){
uVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_DEAD(uVar1, 0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1)){
return 1;
}}}
if(bParam4){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(PED::IS_PED_BEING_JACKED(iParam0)){
if(PED::GET_PEDS_JACKER(iParam0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}}}
if(bParam5){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0)){
if(PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID())){
return 1;
}}}}
if(PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID())){
if(PED::WAS_PED_KILLED_BY_STEALTH(iParam0)){
return 1;
}}
if(func_20(PLAYER::PLAYER_PED_ID(), iParam0)){
return 1;
}
if(bParam2){
if(PED::IS_PED_RAGDOLL(iParam0) && func_18(iParam0, 1) < 1.5f){
return 1;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0))){
return 1;
}}elseif(ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0)){
return 1;
}
if(!ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}}}
return 0;
}


float func_18(int iParam0, int iParam1){
return func_19(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}


float func_19(int iParam0, int iParam1, int iParam2){
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

int func_20(int iParam0, int iParam1){
int iVar0;
WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
if(iVar0==joaat("weapon_petrolcan")){
if(PED::IS_PED_SHOOTING(iParam0)){
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f){
if(PED::IS_PED_FACING_PED(iParam0, iParam1, 180f)){
return 1;
}}}}
return 0;
}

int func_21(int iParam0, int iParam1, var uParam2){
if(WEAPON::IS_PED_ARMED(uParam0, 4)){
if(PED::IS_PED_SHOOTING(uParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0)){
if(ENTITY::IS_ENTITY_AT_COORD(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0)){
return 1;
}}}
return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3){
struct<3> Var0;
int iVar1;
iVar1=0;
if(!ENTITY::IS_ENTITY_DEAD(uParam1, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
}
if(MISC::IS_BULLET_IN_AREA(Var0, 4f, 1)){
return 1;
}
if(MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, to_float(uParam2->f_6), 1, 1)){
return 1;
}
if(WEAPON::IS_PED_ARMED(uParam0, 2)){
if(PED::IS_PED_SHOOTING(uParam0)){
if(ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0)){
if(PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17)){
return 1;
}}}else{
if(PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0)){
iVar1=PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
}
if(PED::IS_PED_PLANTING_BOMB(iParam0) || func_23(iVar1)){
if(ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0)){
if(PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17)){
return 1;
}}}}}
if(bParam3){
if(MISC::IS_PROJECTILE_IN_AREA((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0)){
return 1;
}}
return 0;
}

int func_23(int iParam0){
int iVar0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) !=0){
if(WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1)){
if(iVar0==joaat("weapon_stickybomb")){
if(func_19(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f){
if(PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uVar1)){
if((ENTITY::IS_ENTITY_A_VEHICLE(uVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uVar1)==iParam0) || (ENTITY::IS_ENTITY_A_PED(uVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar1)==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0))){
if((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69))){
return 1;
}}}
}}}}}}
return 0;
}

int func_24(int iParam0, var uParam1){
if(!ENTITY::IS_ENTITY_DEAD(uParam0, 0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f)){
if(func_18(iParam0, 1) < uParam1->f_2){
if(uParam1->f_1==0){
uParam1->f_1=MISC::GET_GAME_TIMER();
}
elseif((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3){
return 1;
}}}}}}
return 0;
}


bool func_25(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_26(int iParam0){
WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 0f);
PED::SET_PED_KEEP_TASK(*iParam0, 1);
PED::SET_PED_ACCURACY(*iParam0, 100);
PED::SET_PED_COMBAT_RANGE(*iParam0, 2);
PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, 0);
PED::SET_PED_SEEING_RANGE(*iParam0, 1000f);
PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
}


void func_27(){
struct<3> Var0;
struct<3> Var1;
if(bLocal_294){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_289, 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_289)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_289, 101, "PrisonHeli", 1);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_290, 0)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_290, 0f, 4f, -2f) 
};
TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_290, Var0);
}
if(bLocal_292){
if(!func_28()){
bLocal_292=false;
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_289, 0, 0);
}}elseif(func_28()){
bLocal_292=true;
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_289, 1, 0);
}
if(bLocal_292){
Var1={
ENTITY::GET_ENTITY_COORDS(iLocal_289, 1) 
};
if(vdist2(Local_248, Var1) < 90000f){
if(!iLocal_293){
iLocal_293=1;
}}}}elseif(HUD::DOES_BLIP_EXIST(uLocal_291)){
HUD::REMOVE_BLIP(&uLocal_291);
}}}

int func_28(){
if(CLOCK::GET_CLOCK_HOURS() >=20 || CLOCK::GET_CLOCK_HOURS() < 6){
return 1;
}
return 0;
}


void func_29(){
int iVar0;
struct<3> Var1;
if(!Local_307.f_18[0]){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(!bLocal_58){
if(vdist2(Var1, Local_305) < 5625f){
iLocal_306=1;
}}}
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(Local_307.f_27[iVar0])){
if(!Local_307.f_18[iVar0]){
if(func_16(Local_307.f_27[iVar0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || iLocal_306){
TASK::TASK_COMBAT_PED(Local_307.f_27[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_307.f_18[iVar0]=1;
}}
if(!Local_307.f_18[iVar0]){
if(!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_307.f_27[iVar0])){
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
}}}elseif(HUD::DOES_BLIP_EXIST(Local_307.f_36[iVar0])){
HUD::REMOVE_BLIP(&(Local_307.f_36[iVar0]));
}
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
if(ENTITY::DOES_ENTITY_EXIST(Local_307.f_31[iVar0])){
if(PED::IS_PED_INJURED(Local_307.f_31[iVar0])){
if(HUD::DOES_BLIP_EXIST(Local_307.f_40[iVar0])){
HUD::REMOVE_BLIP(&(Local_307.f_40[iVar0]));
}}}
iVar0++;
}
if(!Local_307.f_22[0]){
if(!PED::IS_PED_INJURED(Local_307.f_31[0])){
if((func_16(Local_307.f_31[0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || Local_307.f_18[1]==1) || iLocal_306){
TASK::CLEAR_PED_TASKS(Local_307.f_31[0]);
TASK::TASK_COMBAT_PED(Local_307.f_31[0], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_307.f_22[0]=1;
}}}
if(!Local_307.f_22[1]){
if(!PED::IS_PED_INJURED(Local_307.f_31[1])){
if((func_16(Local_307.f_31[1], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[1]==1) || iLocal_306){
TASK::CLEAR_PED_TASKS(Local_307.f_31[1]);
TASK::TASK_COMBAT_PED(Local_307.f_31[1], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_307.f_22[1]=1;
}}}
if(!Local_307.f_22[2]){
if(!PED::IS_PED_INJURED(Local_307.f_31[2])){
if((func_16(Local_307.f_31[2], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2]==1) || iLocal_306){
TASK::CLEAR_PED_TASKS(Local_307.f_31[2]);
TASK::TASK_COMBAT_PED(Local_307.f_31[2], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_307.f_22[2]=1;
}}}
if(!Local_307.f_22[3]){
if(!PED::IS_PED_INJURED(Local_307.f_31[3])){
if((func_16(Local_307.f_31[3], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2]==1) || iLocal_306){
TASK::CLEAR_PED_TASKS(Local_307.f_31[3]);
TASK::TASK_COMBAT_PED(Local_307.f_31[3], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_307.f_22[3]=1;
}}}
if(!PED::IS_PED_INJURED(Local_307.f_27[1])){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_307.f_27[1])){
if(!Local_307.f_22[0]){
if(!PED::IS_PED_INJURED(Local_307.f_31[0])){
TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[0], Local_307.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
}}
if(!Local_307.f_22[1]){
if(!PED::IS_PED_INJURED(Local_307.f_31[1])){
TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[1], Local_307.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
}}}}
if(!PED::IS_PED_INJURED(Local_307.f_27[2])){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_307.f_27[2])){
if(!Local_307.f_22[2]){
if(!PED::IS_PED_INJURED(Local_307.f_31[2])){
TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[2], Local_307.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
}}
if(!Local_307.f_22[3]){
if(!PED::IS_PED_INJURED(Local_307.f_31[3])){
TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[3], Local_307.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
}}}}}


void func_30(){
int iVar0;
struct<3> Var1;
iLocal_269++;
if(iLocal_269 >=30){
if(!bLocal_58){
if(func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 100, 0)){
iVar0=0;
while (iVar0 < 10){
if(ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_252.f_64[iVar0])){
if(PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) !=-1){
if(PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 10);
iLocal_268=1;
}
}
elseif(PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 10);
iLocal_268=1;
}
else{
PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 100);
iLocal_268=1;
}}
iVar0++;
}}else{
iLocal_268=0;
}}
iLocal_269=0;
}
iVar0=0;
while (iVar0 < 10){
if(ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_252.f_64[iVar0])){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0)){
PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
}
if((((func_16(Local_252.f_64[iVar0], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || MISC::IS_BULLET_IN_AREA(Local_252[iVar0 /*3*/], 20f, 1)) || MISC::IS_SNIPER_BULLET_IN_AREA(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_64[iVar0]))){
if(!func_2(5)){
if(PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(bLocal_61){
func_31(iVar0);
}}else{
func_31(iVar0);
}}}elseif(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if(!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_252.f_64[iVar0])){
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
Local_252.f_53[iVar0]=0;
}}}elseif(HUD::DOES_BLIP_EXIST(Local_252.f_75[iVar0])){
HUD::REMOVE_BLIP(&(Local_252.f_75[iVar0]));
}
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(((ENTITY::DOES_ENTITY_EXIST(uLocal_264[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_264[iVar0], 0)) && ENTITY::DOES_ENTITY_EXIST(uLocal_263[iVar0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_263[iVar0], 0)){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_264[iVar0], 0f, 3.5f, -2f) 
};
TASK::TASK_VEHICLE_AIM_AT_COORD(uLocal_264[iVar0], Var1);
VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_263[iVar0], 0, 0, 0);
if(iLocal_265[iVar0]){
if(!func_28()){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_263[iVar0], 0)){
iLocal_265[iVar0]=0;
VEHICLE::SET_VEHICLE_SEARCHLIGHT(uLocal_263[iVar0], 0, 0);
}}}elseif(func_28()){
if(!ENTITY::IS_ENTITY_DEAD(uLocal_263[iVar0], 0)){
iLocal_265[iVar0]=1;
VEHICLE::SET_VEHICLE_SEARCHLIGHT(uLocal_263[iVar0], 1, 0);
}}}
iVar0++;
}
if(fLocal_266 > 20f){
bLocal_267=false;
}elseif(fLocal_266 < -20f){
bLocal_267=true;
}
if(bLocal_267){
fLocal_266=(fLocal_266 + 0.25f);
}else{
fLocal_266=(fLocal_266 - 0.25f);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[0])){
ENTITY::SET_ENTITY_HEADING(uLocal_263[0], (53f + fLocal_266));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[1])){
ENTITY::SET_ENTITY_HEADING(uLocal_263[1], (13f + fLocal_266));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[2])){
ENTITY::SET_ENTITY_HEADING(uLocal_263[2], (250f + fLocal_266));
}}


void func_31(int iParam0){
if(!Local_252.f_53[iParam0]){
TASK::TASK_SHOOT_AT_ENTITY(Local_252.f_64[iParam0], PLAYER::PLAYER_PED_ID(), -1, 0);
PED::SET_PED_SEEING_RANGE(Local_252.f_64[iParam0], 1000f);
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_252.f_64[iParam0]);
Local_252.f_53[iParam0]=1;
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}}}

int func_32(var uParam0){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(*uParam0, 1) 
};
}
if(vdist2(Var0, Var1) < 100f){
return 1;
}
return 0;
}


void func_33(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >=2 || func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, 150, 0)){
if(AUDIO::PREPARE_ALARM("PRISON_ALARMS")){
AUDIO::START_ALARM("PRISON_ALARMS", 0);
}}else{
AUDIO::STOP_ALARM("PRISON_ALARMS", 0);
}}}


void func_34(){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0)){
func_63(&Local_70, 2);
}else{
func_61(&Local_70, 2);
}}
if(iLocal_49 > 20){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(func_15(Var0, 4, 150, 0)){
func_60(4, 1);
if(!func_14(&uLocal_78)){
func_11(&uLocal_78);
}
if(!bLocal_60){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_68) && !ENTITY::IS_ENTITY_DEAD(iLocal_68, 0)){
func_59(&uLocal_81, 8, iLocal_68, "TANNOY", 0, 1);
if(func_37(&uLocal_81, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0)){
bLocal_58=true;
bLocal_60=true;
}
}}}else{
func_60(4, 0);
if(func_14(&uLocal_78)){
func_12(&uLocal_78);
}
bLocal_58=false;
}}else{
func_60(4, 0);
if(func_14(&uLocal_78)){
func_12(&uLocal_78);
}
bLocal_58=false;
}
if(bLocal_58){
if(func_14(&uLocal_78)){
if(func_8(&uLocal_78) > 10f){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
bLocal_61=true;
bLocal_58=false;
func_60(4, 0);
}}}}
if(!bLocal_55){
if(bLocal_60){
if(!func_36()){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
bLocal_55=true;
}}}elseif(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
bLocal_55=true;
}}
if(!bLocal_58){
if(func_15(Var0, 4, 100, 0)){
if(!bLocal_55){
if(bLocal_60){
if(!func_36()){
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
bLocal_55=true;
}
}
else{
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
bLocal_55=true;
}}
func_35();
}}
iLocal_49=0;
}}
iLocal_49++;
}


void func_35(){
int iVar0;
if(!iLocal_54){
iVar0=0;
while (iVar0 < 12){
uLocal_52[iVar0]=PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
iVar0++;
}
iLocal_54=1;
}}

int func_36(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2){
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
func_57();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_56(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_55();
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
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
func_48();
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
if(func_47()){
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
if(func_46()){
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
func_45();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_44();
func_39();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_57();
}
return 0;
}


void func_39(){
if(!func_40()){
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

int func_40(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_43()){
return 0;
}
if(func_41(PLAYER::PLAYER_ID())){
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


bool func_41(int iParam0){
return func_42(iParam0, 20);
}


var func__42(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_43(){
return -1;
}


void func_44(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_45(){
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

int func_46(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_47(){
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


void func_48(){
if(func_2(14)){
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
Global_20383=func_49();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__49(){
func_50();
return Global_113648.f_2365.f_539.f_4321;
}


void func_50(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_53(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_52(PLAYER::PLAYER_PED_ID());
if(func_51(iVar0) && (!func_2(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_51(Global_113648.f_2365.f_539.f_4321)){
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


bool func_51(int iParam0){
return iParam0 < 3;
}

int func_52(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_53(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_53(int iParam0){
if(func_51(iParam0)){
return func_54(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__54(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_55(){
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


bool func_56(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_57(){
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


void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
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


void func_59(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=uParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(uParam2)){
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


void func_60(int iParam0, int iParam1){
MISC::SET_BIT(&Global_32323, iParam0);
StringCopy(&(Global_32324[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
Global_32379[iParam0]=iParam1;
}


void func_61(var uParam0, int iParam1){
func_62(uParam0, iParam1);
}


void func_62(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_63(var uParam0, int iParam1){
func_64(uParam0, iParam1);
}


void func_64(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_65(){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
}


void func_66(){
func_68();
func_67();
}


void func_67(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_307.f_27[iVar0], 0)){
WEAPON::GIVE_WEAPON_TO_PED(Local_307.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
ENTITY::SET_ENTITY_LOD_DIST(Local_307.f_27[iVar0], 1000);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_307.f_27[iVar0], -183807561);
PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_307.f_27[iVar0], 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_307.f_27[iVar0], 1);
if(!PED::IS_PED_INJURED(Local_307.f_27[iVar0])){
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
}}
iVar0++;
}}


void func_68(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
iVar0=0;
while (iVar0 < 3){
if(!ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0])){
Local_307.f_27[iVar0]=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_307[iVar0 /*3*/], Local_307.f_10[iVar0], 1, 1);
wait(0);
}
iVar0++;
}
Var1={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[1 /*3*/], Local_307.f_10[1], -2f, 0f, 0f) 
};
Var2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[1 /*3*/], Local_307.f_10[1], -1f, 0f, 0f) 
};
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[2 /*3*/], Local_307.f_10[2], 1f, 0f, 0f) 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[2 /*3*/], Local_307.f_10[2], -1f, 0f, 0f) 
};
Local_307.f_31[0]=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var1, Local_307.f_10[1], 1, 1);
Local_307.f_31[1]=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var2, Local_307.f_10[1], 1, 1);
Local_307.f_31[2]=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var3, Local_307.f_10[2], 1, 1);
Local_307.f_31[3]=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var4, Local_307.f_10[2], 1, 1);
iVar0=0;
while (iVar0 < 4){
if(ENTITY::DOES_ENTITY_EXIST(Local_307.f_31[iVar0])){
WEAPON::GIVE_WEAPON_TO_PED(Local_307.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
ENTITY::SET_ENTITY_LOD_DIST(Local_307.f_31[iVar0], 500);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_307.f_31[iVar0], -183807561);
PED::SET_PED_STEERS_AROUND_PEDS(Local_307.f_31[iVar0], 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_307.f_31[iVar0], 1);
}
iVar0++;
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
}


void func_69(){
if(bLocal_294){
iLocal_289=VEHICLE::CREATE_VEHICLE(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_289, 1, 1, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_289);
ENTITY::SET_ENTITY_VELOCITY(iLocal_289, 0f, 0f, 10f);
ENTITY::SET_ENTITY_LOD_DIST(iLocal_289, 500);
if(func_28()){
bLocal_292=true;
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_289, 1, 0);
}
iLocal_290=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
PED::SET_PED_INTO_VEHICLE(iLocal_290, iLocal_289, -1);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_289, 0)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_289, 101, "PrisonHeli", 1);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
}}


void func_70(){
func_75();
func_74();
func_73();
func_72();
func_71();
}


void func_71(){
Local_270[0 /*13*/][0 /*3*/]={
1827.69f, 2474.181f, 61.7202f 
};
Local_270[0 /*13*/][1 /*3*/]={
1826.054f, 2478.934f, 61.7157f 
};
Local_270[0 /*13*/][2 /*3*/]={
1820.909f, 2477.528f, 61.7153f 
};
Local_270[0 /*13*/][3 /*3*/]={
1822.585f, 2472.122f, 61.7167f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_01");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[1 /*13*/][0 /*3*/]={
1764.729f, 2409.139f, 61.7533f 
};
Local_270[1 /*13*/][1 /*3*/]={
1763.129f, 2413.976f, 61.7328f 
};
Local_270[1 /*13*/][2 /*3*/]={
1758.079f, 2411.984f, 61.7403f 
};
Local_270[1 /*13*/][3 /*3*/]={
1760.213f, 2406.827f, 61.7419f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_02");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[2 /*13*/][0 /*3*/]={
1658.829f, 2390.888f, 61.7462f 
};
Local_270[2 /*13*/][1 /*3*/]={
1662.521f, 2394.692f, 61.7532f 
};
Local_270[2 /*13*/][2 /*3*/]={
1658.854f, 2398.062f, 61.7573f 
};
Local_270[2 /*13*/][3 /*3*/]={
1655.15f, 2394.705f, 61.7429f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_03");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[3 /*13*/][0 /*3*/]={
1537.28f, 2468.338f, 61.7497f 
};
Local_270[3 /*13*/][1 /*3*/]={
1542.189f, 2465.756f, 61.7247f 
};
Local_270[3 /*13*/][2 /*3*/]={
1543.899f, 2470.971f, 61.7482f 
};
Local_270[3 /*13*/][3 /*3*/]={
1539.14f, 2473.264f, 61.7359f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_04");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[4 /*13*/][0 /*3*/]={
1535.098f, 2581.919f, 61.7312f 
};
Local_270[4 /*13*/][1 /*3*/]={
1535.124f, 2581.101f, 61.7002f 
};
Local_270[4 /*13*/][2 /*3*/]={
1538.325f, 2585.722f, 61.7251f 
};
Local_270[4 /*13*/][3 /*3*/]={
1534.679f, 2589.268f, 61.7123f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_05");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[5 /*13*/][0 /*3*/]={
1566.921f, 2682.525f, 61.7716f 
};
Local_270[5 /*13*/][1 /*3*/]={
1567.927f, 2677.463f, 61.7741f 
};
Local_270[5 /*13*/][2 /*3*/]={
1572.574f, 2678.193f, 61.7702f 
};
Local_270[5 /*13*/][3 /*3*/]={
1572.359f, 2683.086f, 61.7664f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_06");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[6 /*13*/][0 /*3*/]={
1648.104f, 2761.528f, 61.9103f 
};
Local_270[6 /*13*/][1 /*3*/]={
1646.051f, 2756.671f, 61.9091f 
};
Local_270[6 /*13*/][2 /*3*/]={
1651.533f, 2754.668f, 61.9021f 
};
Local_270[6 /*13*/][3 /*3*/]={
1653.125f, 2759.327f, 61.9056f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_07");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[7 /*13*/][0 /*3*/]={
1774.523f, 2766.559f, 61.9143f 
};
Local_270[7 /*13*/][1 /*3*/]={
1769.768f, 2763.816f, 61.9248f 
};
Local_270[7 /*13*/][2 /*3*/]={
1772.442f, 2759.139f, 61.9193f 
};
Local_270[7 /*13*/][3 /*3*/]={
1776.893f, 2762.356f, 61.9258f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_08");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
Local_270[9 /*13*/][0 /*3*/]={
1824.288f, 2625.042f, 61.9749f 
};
Local_270[9 /*13*/][1 /*3*/]={
1820.524f, 2621.49f, 61.9951f 
};
Local_270[9 /*13*/][2 /*3*/]={
1820.414f, 2621.544f, 61.9908f 
};
Local_270[9 /*13*/][3 /*3*/]={
1823.45f, 2617.477f, 61.9829f 
};
TASK::OPEN_PATROL_ROUTE("miss_Tower_10");
TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
TASK::ADD_PATROL_ROUTE_LINK(0, 1);
TASK::ADD_PATROL_ROUTE_LINK(1, 2);
TASK::ADD_PATROL_ROUTE_LINK(2, 3);
TASK::ADD_PATROL_ROUTE_LINK(3, 0);
TASK::CLOSE_PATROL_ROUTE();
TASK::CREATE_PATROL_ROUTE();
}


void func_72(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_252.f_64[iVar0], 0)){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_252.f_64[iVar0], -183807561);
PED::SET_PED_CONFIG_FLAG(Local_252.f_64[iVar0], 132, 1);
PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_252.f_64[iVar0], 300f, 10);
PED::SET_PED_SEEING_RANGE(Local_252.f_64[iVar0], 1000f);
PED::SET_PED_ID_RANGE(Local_252.f_64[iVar0], 1000f);
PED::SET_PED_HEARING_RANGE(Local_252.f_64[iVar0], 1000f);
PED::SET_PED_COMBAT_ABILITY(Local_252.f_64[iVar0], 2);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_252.f_64[iVar0], 13, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_252.f_64[iVar0], 0, 0);
PED::SET_PED_TARGET_LOSS_RESPONSE(Local_252.f_64[iVar0], 1);
PED::SET_PED_COMBAT_MOVEMENT(Local_252.f_64[iVar0], 1);
TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_252.f_64[iVar0], 0f);
PED::SET_PED_KEEP_TASK(Local_252.f_64[iVar0], 1);
PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 20);
PED::SET_PED_COMBAT_RANGE(Local_252.f_64[iVar0], 2);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_252.f_64[iVar0], 23, 0);
WEAPON::GIVE_WEAPON_TO_PED(Local_252.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
ENTITY::SET_ENTITY_LOD_DIST(Local_252.f_64[iVar0], 1000);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_252.f_64[iVar0], 1);
PED::SET_PED_SEEING_RANGE(Local_252.f_64[iVar0], 1000f);
if(!PED::IS_PED_INJURED(Local_252.f_64[iVar0])){
if(iVar0==0){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
}elseif(iVar0==1){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
}elseif(iVar0==2){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
}elseif(iVar0==3){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
}elseif(iVar0==4){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
}elseif(iVar0==5){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
}elseif(iVar0==6){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
}elseif(iVar0==7){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
}elseif(iVar0==9){
TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
}else{
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
}}}
iVar0++;
}}


void func_73(){
int iVar0;
if(!CAM::IS_SPHERE_VISIBLE(1823.845f, 2621.267f, 57f, 0.5f)){
uLocal_263[0]=VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_263[0], 0)){
uLocal_264[0]=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_263[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_264[0], 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_264[0], iLocal_250);
ENTITY::SET_ENTITY_COLLISION(uLocal_263[0], 0, 0);
ENTITY::SET_ENTITY_VISIBLE(uLocal_263[0], 0, 0);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_263[0], 0);
ENTITY::FREEZE_ENTITY_POSITION(uLocal_263[0], 1);
}
wait(0);
}
if(!CAM::IS_SPHERE_VISIBLE(1761.418f, 2410.378f, 61f, 0.5f)){
uLocal_263[1]=VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_263[1], 0)){
uLocal_264[1]=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_263[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_264[1], 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_264[1], iLocal_250);
ENTITY::SET_ENTITY_COLLISION(uLocal_263[1], 0, 0);
ENTITY::SET_ENTITY_VISIBLE(uLocal_263[1], 0, 0);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_263[1], 0);
ENTITY::FREEZE_ENTITY_POSITION(uLocal_263[1], 1);
}
wait(0);
}
if(!CAM::IS_SPHERE_VISIBLE(1534.635f, 2585.162f, 61f, 0.5f)){
uLocal_263[2]=VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_263[2], 0)){
uLocal_264[2]=PED::CREATE_PED_INSIDE_VEHICLE(uLocal_263[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_264[2], 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_264[2], iLocal_250);
ENTITY::SET_ENTITY_COLLISION(uLocal_263[2], 0, 0);
ENTITY::SET_ENTITY_VISIBLE(uLocal_263[2], 0, 0);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_263[2], 0);
ENTITY::FREEZE_ENTITY_POSITION(uLocal_263[2], 1);
}
wait(0);
}
iVar0=0;
while (iVar0 < 3){
if((ENTITY::DOES_ENTITY_EXIST(uLocal_264[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_264[iVar0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_263[iVar0], 0)){
if(func_28()){
iLocal_265[iVar0]=1;
VEHICLE::SET_VEHICLE_SEARCHLIGHT(uLocal_263[iVar0], 1, 0);
}}
iVar0++;
}}


void func_74(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(!ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0])){
Local_252.f_64[iVar0]=PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_252[iVar0 /*3*/], Local_252.f_31[iVar0], 1, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
wait(0);
}
iVar0++;
}}


void func_75(){
Local_252[0 /*3*/]={
1827.69f, 2474.181f, 61.7202f 
};
Local_252[1 /*3*/]={
1764.729f, 2409.139f, 61.7533f 
};
Local_252[2 /*3*/]={
1658.829f, 2390.888f, 61.7462f 
};
Local_252[3 /*3*/]={
1537.28f, 2468.338f, 61.7497f 
};
Local_252[4 /*3*/]={
1530.493f, 2585.172f, 61.7001f 
};
Local_252[5 /*3*/]={
1566.921f, 2682.525f, 61.7716f 
};
Local_252[6 /*3*/]={
1648.104f, 2761.528f, 61.9103f 
};
Local_252[7 /*3*/]={
1774.523f, 2766.559f, 61.9143f 
};
Local_252[8 /*3*/]={
1852.475f, 2697.632f, 61.9547f 
};
Local_252[9 /*3*/]={
1824.288f, 2625.042f, 61.9749f 
};
Local_252.f_31[0]=248.9733f;
Local_252.f_31[1]=45.8793f;
Local_252.f_31[2]=186.3656f;
Local_252.f_31[3]=313.5206f;
Local_252.f_31[4]=95.9574f;
Local_252.f_31[5]=289.3531f;
Local_252.f_31[6]=13.7511f;
Local_252.f_31[7]=0f;
Local_252.f_31[8]=208.5786f;
Local_252.f_31[9]=280.9389f;
}

int func_76(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_307.f_14[iVar0])){
wait(0);
}
iVar0++;
}
return 1;
}

int func_77(){
if(bLocal_298){
if(!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_prisoner_01"))){
return 0;
}}
return 1;
}

int func_78(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_252.f_42[iVar0])){
return 0;
}
iVar0++;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("polmav"))){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01"))){
return 0;
}
return 1;
}

int func_79(){
if(bLocal_294){
if(!STREAMING::HAS_MODEL_LOADED(joaat("polmav"))){
return 0;
}
if(!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PrisonHeli")){
return 0;
}}
return 1;
}

int func_80(){
if(!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01"))){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01"))){
return 0;
}
if(!STREAMING::HAS_MODEL_LOADED(joaat("polmav"))){
return 0;
}
return 1;
}


void func_81(){
int iVar0;
func_82();
iVar0=0;
while (iVar0 < 3){
TASK::REQUEST_WAYPOINT_RECORDING(Local_307.f_14[iVar0]);
iVar0++;
}}


void func_82(){
Local_307[0 /*3*/]={
1768.628f, 2538.97f, 44.4054f 
};
Local_307[1 /*3*/]={
1633.613f, 2498.849f, 44.4117f 
};
Local_307[2 /*3*/]={
1622.61f, 2555.683f, 44.4051f 
};
Local_307.f_10[0]=0f;
Local_307.f_10[1]=0f;
Local_307.f_10[2]=198.4323f;
Local_307.f_14[0]="PatrolGuard02";
Local_307.f_14[1]="PatrolGuard03";
Local_307.f_14[2]="PatrolGuard04";
}


void func_83(){
int iVar0;
Local_252.f_42[0]="TowerGuard01";
Local_252.f_42[1]="TowerGuard02";
Local_252.f_42[2]="TowerGuard03";
Local_252.f_42[3]="TowerGuard04";
Local_252.f_42[4]="TowerGuard05";
Local_252.f_42[5]="TowerGuard06";
Local_252.f_42[6]="TowerGuard07";
Local_252.f_42[7]="TowerGuard08";
Local_252.f_42[8]="TowerGuard09";
Local_252.f_42[9]="TowerGuard10";
iVar0=0;
while (iVar0 < 10){
TASK::REQUEST_WAYPOINT_RECORDING(Local_252.f_42[iVar0]);
iVar0++;
}
STREAMING::REQUEST_MODEL(joaat("polmav"));
STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
}


void func_84(){
bLocal_294=false;
if(func_28()){
iLocal_295=(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
if(iLocal_295==0){
bLocal_294=true;
STREAMING::REQUEST_MODEL(joaat("polmav"));
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PrisonHeli");
}else{
bLocal_294=false;
}}}


void func_85(){
STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
STREAMING::REQUEST_MODEL(joaat("polmav"));
}


void func_86(){
iLocal_249=iLocal_249;
iLocal_249=0;
func_87();
func_34();
Local_70.f_4=75;
Local_70.f_6=15;
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
PED::ADD_RELATIONSHIP_GROUP("Prison_Guards", &iLocal_250);
PED::ADD_RELATIONSHIP_GROUP("Prison_Prisoners", &iLocal_251);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_250, iLocal_251);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_251, iLocal_250);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_250, joaat("COP"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_250);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("player"), iLocal_251);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_251, joaat("player"));
}


void func_87(){
Local_53[0 /*3*/]={
1809.816f, 2482.877f, 44.4744f 
};
Local_53[1 /*3*/]={
1755.823f, 2424.904f, 44.4319f 
};
Local_53[2 /*3*/]={
1661.2f, 2410.096f, 44.4265f 
};
Local_53[3 /*3*/]={
1555.966f, 2476.43f, 44.4042f 
};
Local_53[4 /*3*/]={
1549.141f, 2583.103f, 44.4225f 
};
Local_53[5 /*3*/]={
1581.156f, 2671.974f, 44.481f 
};
Local_53[6 /*3*/]={
1655.49f, 2743.69f, 44.4665f 
};
Local_53[7 /*3*/]={
1768.776f, 2748.527f, 44.4402f 
};
Local_53[8 /*3*/]={
1831.2f, 2696f, 44.4578f 
};
Local_53[9 /*3*/]={
1803.121f, 2617.781f, 44.5082f 
};
Local_53[10 /*3*/]={
1817.221f, 2608.387f, 44.6204f 
};
Local_53[11 /*3*/]={
1843.838f, 2608.361f, 44.6178f 
};
}


void func_88(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}}}
if(!iLocal_56){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0)){
if(PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), -183807561);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, joaat("player"));
iLocal_56=1;
}
if((MISC::IS_BULLET_IN_AREA(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID())) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))){
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), -183807561);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, joaat("player"));
iLocal_56=1;
}}}}}


void func_89(bool bParam0){
int iVar0;
func_95();
func_94();
func_93();
func_92();
func_91();
func_90();
AUDIO::STOP_ALARM("PRISON_ALARMS", 1);
if(iLocal_56){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), -183807561);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -183807561, joaat("player"));
}
iVar0=0;
while (iVar0 < 12){
if(PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_52[iVar0])){
PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_52[iVar0]);
}
iVar0++;
}
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
if(bParam0){
MISC::CLEAR_AREA(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_90(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_66)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_66);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_68)){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_68);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_67)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_67);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_69)){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_69);
}}


void func_91(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0])){
if(HUD::DOES_BLIP_EXIST(Local_307.f_36[iVar0])){
HUD::REMOVE_BLIP(&(Local_307.f_36[iVar0]));
}
if(ENTITY::IS_ENTITY_OCCLUDED(Local_307.f_27[iVar0])){
PED::DELETE_PED(&(Local_307.f_27[iVar0]));
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_307.f_27[iVar0]));
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
if(ENTITY::DOES_ENTITY_EXIST(Local_307.f_31[iVar0])){
if(HUD::DOES_BLIP_EXIST(Local_307.f_40[iVar0])){
HUD::REMOVE_BLIP(&(Local_307.f_40[iVar0]));
}
if(ENTITY::IS_ENTITY_OCCLUDED(Local_307.f_31[iVar0])){
PED::DELETE_PED(&(Local_307.f_31[iVar0]));
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_307.f_31[iVar0]));
}}
iVar0++;
}}


void func_92(){
if(HUD::DOES_BLIP_EXIST(uLocal_301)){
HUD::REMOVE_BLIP(&uLocal_301);
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_299)){
VEHICLE::DELETE_VEHICLE(&iLocal_299);
}}


void func_93(){
int iVar0;
iVar0=0;
while (iVar0 < 20){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_296[iVar0])){
if(HUD::DOES_BLIP_EXIST(uLocal_297[iVar0])){
HUD::REMOVE_BLIP(&(uLocal_297[iVar0]));
}
PED::DELETE_PED(&(uLocal_296[iVar0]));
}
iVar0++;
}}


void func_94(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_263[iVar0])){
VEHICLE::DELETE_VEHICLE(&(uLocal_263[iVar0]));
}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_264[iVar0])){
PED::DELETE_PED(&(uLocal_264[iVar0]));
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0])){
if(HUD::DOES_BLIP_EXIST(Local_252.f_75[iVar0])){
HUD::REMOVE_BLIP(&(Local_252.f_75[iVar0]));
}
if(ENTITY::IS_ENTITY_OCCLUDED(Local_252.f_64[iVar0])){
PED::DELETE_PED(&(Local_252.f_64[iVar0]));
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_252.f_64[iVar0]));
}}
iVar0++;
}}


void func_95(){
if(HUD::DOES_BLIP_EXIST(uLocal_291)){
HUD::REMOVE_BLIP(&uLocal_291);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_289)){
if(ENTITY::IS_ENTITY_OCCLUDED(iLocal_289)){
VEHICLE::DELETE_VEHICLE(&iLocal_289);
PED::DELETE_PED(&iLocal_290);
}else{
func_96(&iLocal_289, &iLocal_290);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
}}}


void func_96(var uParam0, var uParam1){
if(((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
if(ENTITY::IS_ENTITY_IN_AIR(*uParam0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
}}}}}