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
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=-1;
var uLocal_96=0;
var uLocal_97=0;
var uLocal_98=0;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
float fLocal_103=0f;
float fLocal_104=0f;
float fLocal_105=0f;
float fLocal_106=0f;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=0;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
int iLocal_116=0;
int iLocal_117=0;
int iLocal_118=0;
int iLocal_119=0;
struct<365> Local_120={
7200000, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0 
};
var uLocal_121=0;
struct<10> Local_122={
0, 0, 1065353216, 1065353216, 1, 0, 0, 0, 0, -1 
};
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=-1;
var uLocal_132=-1;
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
var uLocal_145[2]={
0, 0 
};
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
bool bLocal_149=0;
struct<2> Local_150[3];
int iLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155=0;
int iLocal_156=0;
int iLocal_157=0;
int iLocal_158=0;
struct<598> Local_159={
0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 3, 0, 0, 0, -1082130432, 0, 12, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1 
};
struct<10> Local_160[4];
struct<3> Local_161={
0, 0, 0 
};
struct<3> Local_162={
0, 0, 0 
};
struct<3> Local_163={
0, 0, 0 
};
struct<3> Local_164={
0, 0, 0 
};
bool bLocal_165=0;
var uLocal_166=16;
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
bool bLocal_331=0;
struct<21> Local_332={
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
fLocal_103=3f;
fLocal_104=0f;
fLocal_105=2f;
fLocal_106=100f;
iLocal_116=-1;
iLocal_117=-1;
iLocal_118=-1;
iLocal_119=-1;
iLocal_157=-1;
iLocal_158=-1;
Local_161={
-5f, -5f, 0f 
};
Local_162={
5f, -5f, 0f 
};
Local_163={
5f, 5f, 0f 
};
Local_164={
-5f, 5f, 0f 
};
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_2566(PLAYER::PLAYER_ID(), 0, 1)){
if(!func_2491(ScriptParam_332)){
func_2411(0, 1);
func_2331(0);
}}else{
func_2331(0);
}}else{
func_2411(0, 1);
func_2331(0);
}
bLocal_331=func_2330();
while (true){
func_2329();
if(func_2319(1)){
func_2411(0, 1);
func_2331(0);
}
if(func_2314()){
func_2411(0, 1);
func_2331(1);
}
func_2310();
func_2298();
switch (func_2297(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_2296()==1){
if((((func_2330() && !func_2295()) && !func_2294(2)) && !func_2293()) && func_2292() > 1){
func_2254(0);
if(iLocal_155==2 || iLocal_155==3){
if(func_2252()){
func_2251(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
func_2250();
}
}}elseif(func_2252()){
func_2251(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
func_2250();
}}elseif(func_2296()==3){
func_2251(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
}
break;
case 1:
if(func_2296()==1){
func_518();
}elseif(func_2296()==3){
func_2251(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
}
break;
case 3:
func_2331(0);
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_517()){
func_516(3);
}
switch (func_2296()){
case 0:
if(func_474()){
func_516(1);
}
break;
case 1:
func_43();
func_1();
break;
case 3:
break;
}}}}


void func_1(){
bool bVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4[3];
int iVar5;
int iVar6;
bool bVar7;
int iVar8[3];
bool bVar9;
bool bVar10;
int iVar11;
bVar7=true;
bVar9=true;
bVar10=false;
bVar0=false;
while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0)){
iVar5=bVar0;
bVar3=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
iVar6=PLAYER::GET_PLAYER_PED(bVar3);
bVar1=bVar3;
MISC::SET_BIT(&uLocal_147, bVar0);
if(func_2566(bVar3, 0, 1)){
if(Local_160[bVar0 /*10*/] !=3){
bVar9=false;
}
MISC::SET_BIT(&uLocal_146, bVar1);
if(ENTITY::IS_ENTITY_DEAD(iVar6, 0)){
MISC::SET_BIT(&uLocal_148, bVar1);
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[0])){
if(func_39(0, PLAYER::GET_PLAYER_PED(bVar3))){
bVar4[0]=bVar3;
iVar8[0]=1;
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[0])){
if(func_39(1, PLAYER::GET_PLAYER_PED(bVar3))){
bVar4[1]=bVar3;
iVar8[1]=1;
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[0])){
if(func_39(2, PLAYER::GET_PLAYER_PED(bVar3))){
bVar4[2]=bVar3;
iVar8[2]=1;
}}
if(!bVar10){
if(func_38(iVar5, 14)){
if(!MISC::IS_BIT_SET(Local_159.f_587, 0)){
if(func_37(10) || !func_35()){
bVar10=true;
}else{
MISC::SET_BIT(&(Local_159.f_587), false);
}
}}elseif(func_38(iVar5, 15)){
if(!MISC::IS_BIT_SET(Local_159.f_587, 1)){
if(func_37(11) || !func_35()){
bVar10=true;
}else{
MISC::SET_BIT(&(Local_159.f_587), true);
}
}}elseif(func_38(iVar5, 16)){
if(!MISC::IS_BIT_SET(Local_159.f_587, 2)){
if(func_37(12) || !func_35()){
bVar10=true;
}else{
MISC::SET_BIT(&(Local_159.f_587), 2);
}
}}}
if(!func_38(iVar5, 0)){
bVar7=false;
}
if(!func_37(6)){
if(func_38(iVar5, 2)){
func_34(6);
}}
if(!func_2294(5)){
if(func_38(iVar5, 17) && Local_160[bVar0 /*10*/].f_7 !=func_33()){
func_25(Local_160[bVar0 /*10*/].f_7);
func_24(5);
}}
if(!func_23(0)){
if(func_38(iVar5, 8)){
func_34(19);
func_22(0);
}}
if(!func_23(1)){
if(func_38(iVar5, 9)){
func_34(20);
func_22(1);
}}
if(!func_23(2)){
if(func_38(iVar5, 10)){
func_34(21);
func_22(2);
}}
if(!func_37(9)){
if(func_38(iVar5, 4)){
func_34(9);
}}
if(!func_37(18)){
if(func_38(iVar5, 7)){
iVar11=func_13();
if(iVar11 > -1){
Local_159.f_592=iVar11;
func_34(18);
}}}
if(!func_37(22)){
if(func_38(iVar5, 12)){
func_34(22);
}}
if(!func_2294(0)){
if(func_38(iVar5, 13)){
func_24(0);
}}
if(!func_2294(6)){
if(func_38(iVar5, 18)){
func_24(6);
}}
if(func_12()){
bVar2=false;
bVar2=false;
while (bVar2 < 3){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_500[bVar2 /*6*/])){
if(!MISC::IS_BIT_SET(Local_159.f_550, bVar2)){
if(MISC::IS_BIT_SET(Local_160[bVar0 /*10*/].f_8, bVar2)){
MISC::SET_BIT(&(Local_159.f_550), bVar2);
}}
}
bVar2++;
}}
if(func_11()){
bVar2=false;
bVar2=false;
while (bVar2 < func_9()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_500[bVar2 /*6*/])){
if(!MISC::IS_BIT_SET(Local_159.f_551, bVar2)){
if(func_8(bVar2)==3){
if(MISC::IS_BIT_SET(Local_160[bVar0 /*10*/].f_9, bVar2)){
MISC::SET_BIT(&(Local_159.f_551), bVar2);
}}}
}
bVar2++;
}}}}
bVar0++;
}
if(bVar4[0] !=Local_159.f_31[0]){
Local_159.f_31[0]=bVar4[0];
}
if(bVar4[1] !=Local_159.f_31[1]){
Local_159.f_31[1]=bVar4[1];
}
if(bVar4[2] !=Local_159.f_31[2]){
Local_159.f_31[2]=bVar4[2];
}
if(iVar8[0]){
if(!func_37(10)){
func_3();
func_34(10);
}
if(!func_37(13)){
func_34(13);
}}elseif(func_37(13)){
func_2(13);
}
if(iVar8[1]){
if(!func_37(11)){
func_3();
func_34(11);
}
if(!func_37(14)){
func_34(14);
}}elseif(func_37(14)){
func_2(14);
}
if(iVar8[2]){
if(!func_37(12)){
func_3();
func_34(12);
}
if(!func_37(15)){
func_34(15);
}}elseif(func_37(15)){
func_2(15);
}
if(bVar10){
func_34(17);
}
if(bVar9){
if(!func_37(16)){
func_34(16);
}}
if(bVar7){
if(!func_37(0)){
func_34(0);
}}elseif(func_37(0)){
func_2(0);
}}


void func_2(bool bParam0){
MISC::CLEAR_BIT(&(Local_159.f_1), bParam0);
}


void func_3(){
if(func_6()){
if(!func_5(&(Local_159.f_585))){
func_4(&(Local_159.f_585), 0, 0);
}}}


void func_4(var uParam0, bool bParam1, bool bParam2){
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


bool func_5(var uParam0){
return uParam0->f_1;
}

int func_6(){
int iVar0;
iVar0=func_7();
if(func_2292()==1 && !func_2293()){
iVar0=3;
}
if(iVar0==2 || iVar0==3){
return 1;
}elseif(Global_262145.f_16705 > 0){
return 1;
}
return 0;
}

int func_7(){
var uVar0;
uVar0=Local_159.f_594;
return uVar0;
}

int func_8(bool bParam0){
return Local_159.f_500[bParam0 /*6*/].f_5;
}

int func_9(){
int iVar0;
iVar0=0;
switch (func_10()){
case 12:
if(func_37(8)){
iVar0=1;
}else{
iVar0=2;
}
break;
case 5:
case 6:
iVar0=2;
break;
case 11:
iVar0=3;
break;
}
return iVar0;
}

int func_10(){
return Local_159.f_7;
}


bool func_11(){
return func_10()==6;
}


bool func_12(){
return func_10()==11;
}

int func_13(){
bool bVar0;
bVar0=false;
while (bVar0 < func_21()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[bVar0])){
if(func_19(Local_159.f_35[bVar0])){
if(!func_15(NETWORK::NET_TO_VEH(Local_159.f_35[bVar0]), Local_159.f_54, 350f)){
if(func_14(bVar0)){
return bVar0;
}}}}
bVar0++;
}
return -1;
}

int func_14(bool bParam0){
switch (bParam0){
case 0:
return func_37(13);
case 1:
return func_37(14);
case 2:
return func_37(15);
default:
}
return 0;
}

int func_15(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
Var0={
func_17(iParam1) 
};
if(!func_16(Var0, 0f, 0f, 0f, 0)){
return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var0, 1) <=fParam2;
}
return 0;
}


bool func_16(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


Vector3 func__17(int iParam0){
struct<3> Var0;
Var0={
0f, 0f, 0f 
};
if(!func_18(iParam0)){
return Var0;
}
switch (iParam0){
case 1:
Var0={
50.9205f, -2560.01f, 6f 
};
break;
case 2:
Var0={
-1074.852f, -1257.452f, 5.6938f 
};
break;
case 3:
Var0={
901.936f, -1019.425f, 34.9666f 
};
break;
case 4:
Var0={
253.9006f, -1955.933f, 22.9477f 
};
break;
case 5:
Var0={
-426.279f, 180.9043f, 80.6855f 
};
break;
case 6:
Var0={
-1050.36f, -2023.939f, 12.1616f 
};
break;
case 7:
Var0={
-1275.378f, -815.4295f, 17.1148f 
};
break;
case 8:
Var0={
-883.2906f, -2730.542f, 12.8285f 
};
break;
case 9:
Var0={
269.6765f, -3016.279f, 5.7176f 
};
break;
case 10:
Var0={
1561.402f, -2138.697f, 77.5275f 
};
break;
case 11:
Var0={
-303.7892f, -2698.39f, 6.0003f 
};
break;
case 12:
Var0={
507.2061f, -649.5859f, 24.7512f 
};
break;
case 13:
Var0={
-525.8206f, -1775.87f, 21.3501f 
};
break;
case 14:
Var0={
-291.6372f, -1352.556f, 31.3146f 
};
break;
case 15:
Var0={
348.6436f, 324.428f, 104.3185f 
};
break;
case 16:
Var0={
922.0838f, -1561.299f, 29.7475f 
};
break;
case 17:
Var0={
763.7448f, -885.2086f, 25.0869f 
};
break;
case 18:
Var0={
1043.884f, -2172.603f, 30.471f 
};
break;
case 19:
Var0={
1001.659f, -2511.88f, 28.302f 
};
break;
case 20:
Var0={
-263.138f, 194.3424f, 85.184f 
};
break;
case 21:
Var0={
547.8112f, -1942.514f, 23.9851f 
};
break;
case 22:
Var0={
88.9678f, -2216.882f, 6.0613f 
};
break;
}
return Var0;
}

int func_18(int iParam0){
if(iParam0 < 1 || iParam0 > 22){
return 0;
}
return 1;
}

int func_19(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_20(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_20(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}else{
return 1;
}
return 0;
}

int func_21(){
switch (Local_159.f_583){
case 0:
case 2:
case 3:
case 4:
return 1;
case 1:
case 5:
return 2;
case 6:
case 7:
return 3;
default:
}
return 1;
}


void func_22(bool bParam0){
switch (bParam0){
case 0:
if(!func_37(23)){
func_34(23);
}
break;
case 1:
if(!func_37(24)){
func_34(24);
}
break;
case 2:
if(!func_37(25)){
func_34(25);
}
break;
}}

int func_23(bool bParam0){
switch (bParam0){
case 0:
return func_37(19);
case 1:
return func_37(20);
case 2:
return func_37(21);
default:
}
return 0;
}


void func_24(bool bParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
MISC::SET_BIT(&(Local_159.f_2), iParam0);
}


void func_25(var uParam0){
func_26(func_29(1, 0), func_28(), uParam0);
}


void func_26(int iParam0, int iParam1, var uParam2){
struct<6> Var0;
Var0.f_0=-1592445355;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_3=uParam2;
func_27(&(Var0.f_4), &(Var0.f_5));
if(!iParam0==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, iParam0);
}}


void func_27(var uParam0, var uParam1){
*uParam0=Global_1923597.f_9;
*uParam1=Global_1923597.f_10;
}

int func_28(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35;
}

int func_29(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
bool bVar2;
bVar1=false;
while (bVar1 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_2566(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_30(bVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


bool func_30(bool bParam0, int iParam1){
bool bVar0;
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_31(-1, 0)==8;
}else{
bVar0=Global_1853910[bParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_31(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_32();
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

int func_32(){
return Global_1574918;
}

int func_33(){
return -1;
}


void func_34(bool bParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
MISC::SET_BIT(&(Local_159.f_1), iParam0);
}


bool func_35(){
return func_36(func_10());
}

int func_36(int iParam0){
if((((((iParam0==2 || iParam0==0) || iParam0==3) || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==1){
return 1;
}
return 0;
}


bool func_37(int iParam0){
return MISC::IS_BIT_SET(Local_159.f_1, iParam0);
}


bool func_38(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Local_160[iParam0 /*10*/].f_2, iParam1);
}

int func_39(bool bParam0, int iParam1){
if(func_41(bParam0)){
if(iParam1==VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_40(bParam0), -1, 0)){
return 1;
}}
return 0;
}

int func_40(bool bParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_35[bParam0])){
uVar0=NETWORK::NET_TO_VEH(Local_159.f_35[bParam0]);
}
return uVar0;
}

int func_41(bool bParam0){
if(ENTITY::DOES_ENTITY_EXIST(func_42(bParam0)) && !ENTITY::IS_ENTITY_DEAD(func_42(bParam0), 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(func_40(bParam0), 0)){
return 1;
}}
return 0;
}


var func__42(bool bParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_35[bParam0])){
uVar0=NETWORK::NET_TO_ENT(Local_159.f_35[bParam0]);
}
return uVar0;
}


void func_43(){
bool bVar0;
func_462();
func_449();
func_445();
func_428();
func_402();
func_384();
func_382();
func_377();
func_376();
func_375();
switch (func_374()){
case 0:
if(func_346()){
if((func_279() && func_215()) && func_194()){
Local_159.f_597=NETWORK::GET_CLOUD_TIME_AS_INT();
func_193(1);
STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_159.f_8), &(Local_159.f_9));
}}
break;
case 1:
if(func_192()==0){
if(!func_5(&(Local_159.f_3))){
func_4(&(Local_159.f_3), 0, 0);
}elseif(func_189(&(Local_159.f_3), func_190(), 0)){
func_188(1);
}elseif(func_189(&(Local_159.f_3), 600000, 0)){
if(!func_37(3)){
func_34(3);
}}
bVar0=false;
while (bVar0 < func_21()){
if(func_37(1)){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[bVar0])){
if(!func_41(bVar0) && !func_187(bVar0)){
if(func_192() !=4){
func_188(4);
if(Local_159.f_61==-1){
Local_159.f_61=bVar0;
}}}
}}
bVar0++;
}
if(func_37(16) && func_192()==0){
func_188(6);
}
if(func_37(17) && func_192()==0){
func_188(5);
}}else{
func_193(2);
}
func_44();
break;
case 2:
if(func_37(0)){
func_193(3);
}
break;
case 3:
func_516(3);
break;
}}


void func_44(){
bool bVar0;
struct<31> Var1;
struct<3> Var2;
float fVar3;
int iVar4;
if(!func_35()){
return;
}
Var1.f_4=1125515264;
Var1.f_5=1;
Var1.f_6=1;
Var1.f_8=1082130432;
Var1.f_9=1176255488;
Var1.f_10=1;
Var1.f_13=1;
Var1.f_15=2;
Var1.f_22=2;
Var1.f_25=1;
Var1.f_26=1;
Var1.f_29=1123024896;
Var1.f_30=1;
bVar0=false;
while (bVar0 < func_21()){
if(MISC::IS_BIT_SET(Local_159.f_587, bVar0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(func_40(bVar0), 0)){
if(Local_159.f_591==-1 || Local_159.f_591==bVar0){
if(Local_159.f_591==-1){
Local_159.f_591=bVar0;
Local_159.f_588={
ENTITY::GET_ENTITY_COORDS(func_40(bVar0), 1) 
};
}
Var1.f_0=10f;
Var1.f_1=0;
Var1.f_4=100f;
Var1.f_5=0;
Var1.f_6=1;
Var1.f_12=1;
Var1.f_3=0;
Var2={
0f, 0f, 0f 
};
fVar3=0f;
iVar4=ENTITY::GET_ENTITY_MODEL(func_40(bVar0));
if(func_45(Local_159.f_588, 0f, 0f, 0f, iVar4, 0, &Var2, &fVar3, &Var1)){
ENTITY::SET_ENTITY_COORDS(func_40(bVar0), Var2, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(func_40(bVar0), fVar3);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(func_40(bVar0), 1084227584);
Local_159.f_591=-1;
MISC::CLEAR_BIT(&(Local_159.f_587), bVar0);
}}}}
bVar0++;
}}

int func_45(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, float fParam5, var uParam6){
bool bVar0;
int iVar1;
float fVar2;
float fVar3;
float fVar4;
struct<61> Var5;
struct<61> Var6;
bVar0=false;
if(uParam6->f_14){
if(uParam6->f_25){
uParam6->f_25=0;
}}
if(!func_184()){
return 0;
}
if(func_183() && !Global_2635559.f_680==MISC::GET_FRAME_COUNT()){
if(!Global_2635559.f_676==0){
Global_2635559.f_676=0;
func_182();
func_181();
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_675){
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) < func_180(0)){
return 0;
}else{
Global_2635559.f_676=0;
}}}else{
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_677) > 30000){
Global_2635559.f_676=0;
}
if(!Global_2635559.f_676==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_679) > func_180(1)){
Global_2635559.f_676=0;
}}}
if(uParam6->f_6){
if(func_173(Param0)){
if(func_172(&Param0, 1)){
}}}
if(!Global_2635559.f_676==0){
if(vdist(Global_2635559.f_695, Param0) > 50f){
return 0;
}
if(Global_2635559.f_698 !=iParam2){
return 0;
}}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
if(Global_2635559.f_676==0){
Global_2635559.f_682=0;
Global_2635559.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_675=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_695={
Param0 
};
Global_2635559.f_698=iParam2;
Global_2635559.f_681=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_171();
func_182();
if(!uParam6->f_27 || (((((((((func_170(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2793046.f_936) && !Global_2793046.f_925) && !Global_2793046.f_933) && !Global_2793046.f_937) && !Global_2793046.f_954) && !Global_2793046.f_966) && !Global_2793046.f_938) && !Global_2793046.f_988)){
func_151(Param0, iParam2);
}
if(func_136(Param0)){
func_151(Param0, iParam2);
}
Global_2635559.f_676=2;
}
switch (Global_2635559.f_676){
case 2:
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f))){
Global_2635559.f_683={
Param0 
};
Global_2635559.f_686=0f;
if(Global_2793046.f_936){
fVar2=10f;
fVar3=5f;
fVar4=5f;
}else{
fVar2=4f;
fVar3=1f;
fVar4=1f;
}
if(((uParam6->f_3 && func_130(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_128(Param0, *fParam5, iParam2, PLAYER::PLAYER_ID(), 0)){
Global_2635559.f_683={
Param0 
};
Global_2635559.f_686=*fParam5;
}else{
Var5.f_6=1082130432;
Var5.f_7=1176255488;
Var5.f_8=1;
Var5.f_10=1;
Var5.f_13=1;
Var5.f_15=1;
Var5.f_16=1;
Var5.f_31=1;
Var5.f_34=joaat("tailgater");
Var5.f_38=2;
Var5.f_45=2;
Var5.f_49=1123024896;
Var5.f_53=999;
Var5.f_54=1176256410;
Var5.f_55=1;
Var5.f_56=1;
Var5.f_57=1;
Var5.f_9=iParam3;
Var5.f_3=7f;
Var5.f_10=uParam6->f_5;
Var5.f_4=*uParam6;
Var5.f_13=uParam6->f_1;
Var5.f_14=uParam6->f_2;
Var5.f_5=uParam6->f_4;
Var5.f_15=uParam6->f_6;
Var5.f_11=uParam6->f_7;
Var5.f_6=uParam6->f_8;
Var5.f_7=uParam6->f_9;
Var5.f_16=uParam6->f_10;
Var5.f_17=uParam6->f_11;
Var5={
Param1 
};
Var5.f_12=1;
Var5.f_34=iParam2;
Var5.f_31=uParam6->f_13;
if(uParam6->f_32 && Global_2635559.f_682 > 0){
Var5.f_30=0;
Var5.f_29=1;
}else{
Var5.f_30=uParam6->f_30;
Var5.f_29=uParam6->f_31;
}
Var5.f_48=uParam6->f_14;
Var5.f_56=uParam6->f_25;
Var5.f_57=uParam6->f_26;
Var5.f_49=uParam6->f_29;
Var5.f_59=uParam6->f_33;
Var5.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var5.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var5.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
func_72(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var5);
}
func_70(Global_2635559.f_683, Global_2635559.f_686, iParam2, &(Global_2635559.f_673));
Global_2635559.f_671=0;
Global_2635559.f_672=0;
Global_2635559.f_682++;
Global_2635559.f_678=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_677=NETWORK::GET_NETWORK_TIME_ACCURATE();
Global_2635559.f_676=3;
}
break;
case 3:
if(Global_2635559.f_671){
if(Global_2635559.f_673==Global_2635559.f_674){
if(Global_2635559.f_672){
if(uParam6->f_12 && !uParam6->f_11){
if(func_69(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 1036831949)){
Global_2635559.f_676=4;
Global_2635559.f_700=NETWORK::GET_NETWORK_TIME_ACCURATE();
}else{
bVar0=true;
}
}
else{
bVar0=true;
}}else{
func_67(Global_2635559.f_683, 0);
func_66(-1);
}}else{
Global_2635559.f_671=0;
Global_2635559.f_672=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_678) > 3000){
func_66(-1);
}
break;
case 4:
if(uParam6->f_12 && !uParam6->f_11){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_700) < 10000){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_699)){
if(NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635559.f_699)){
if(!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635559.f_699)){
if(func_65(Global_2635559.f_683, Global_2635559.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_47(Global_2635559.f_683, Global_2635559.f_686, iParam2, 1, 0, 0, 0, 1, 0)){
func_67(Global_2635559.f_683, 0);
func_66(-1);
}else{
bVar0=true;
}}else{
func_67(Global_2635559.f_683, 0);
func_66(-1);
}
}}else{
func_66(-1);
}}else{
func_66(1);
}}else{
bVar0=true;
}
break;
case 5:
Global_2635559.f_683={
Param0 
};
Global_2635559.f_686=0f;
Var6.f_6=1082130432;
Var6.f_7=1176255488;
Var6.f_8=1;
Var6.f_10=1;
Var6.f_13=1;
Var6.f_15=1;
Var6.f_16=1;
Var6.f_31=1;
Var6.f_34=joaat("tailgater");
Var6.f_38=2;
Var6.f_45=2;
Var6.f_49=1123024896;
Var6.f_53=999;
Var6.f_54=1176256410;
Var6.f_55=1;
Var6.f_56=1;
Var6.f_57=1;
Var6.f_9=iParam3;
Var6.f_3=3.5f;
Var6.f_10=uParam6->f_5;
Var6.f_4=*uParam6;
Var6.f_12=1;
Var6.f_13=0;
Var6.f_15=uParam6->f_6;
Var6.f_11=uParam6->f_7;
Var6.f_6=uParam6->f_8;
Var6.f_7=uParam6->f_9;
Var6={
Param1 
};
Var6.f_34=iParam2;
Var6.f_31=uParam6->f_13;
Var6.f_30=1;
Var6.f_48=uParam6->f_14;
Var6.f_56=uParam6->f_25;
Var6.f_57=uParam6->f_26;
Var6.f_30=uParam6->f_30;
Var6.f_29=uParam6->f_31;
Var6.f_59=uParam6->f_33;
Var6.f_60=uParam6->f_34;
iVar1=0;
while (iVar1 < 2){
Var6.f_38[iVar1 /*3*/]={
uParam6->f_15[iVar1 /*3*/] 
};
Var6.f_45[iVar1]=uParam6->f_22[iVar1];
iVar1++;
}
Var6.f_49=uParam6->f_29;
func_72(&(Global_2635559.f_683), &(Global_2635559.f_686), &Var6);
Global_2635559.f_676=6;
break;
case 6:
bVar0=true;
break;
}
Global_2635559.f_695={
Param0 
};
Global_2635559.f_698=iParam2;
Global_2635559.f_679=NETWORK::GET_NETWORK_TIME_ACCURATE();
if(bVar0){
Global_2635559.f_516=0;
*uParam4={
Global_2635559.f_683 
};
*fParam5=Global_2635559.f_686;
func_46(1);
return 1;
}
return 0;
}


void func_46(bool bParam0){
Global_2635559.f_676=0;
func_171();
func_182();
if(bParam0){
func_181();
}}

int func_47(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
bool bVar1;
float fVar2;
int iVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam7==0){
if(func_2566(bVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_64(bVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_59(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
fVar2=0.1f;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0)){
iVar4=ENTITY::GET_ENTITY_MODEL(iVar3);
Var5={
ENTITY::GET_ENTITY_COORDS(iVar3, 0) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(iVar3);
if(func_58(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_48(func_57(bVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_48(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_56(iParam3, 1008981770)){
func_49(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_49(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_55(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_50(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
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


void func_50(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_53(iParam0);
if(iVar0 !=0){
func_51(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_51(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_52(iParam0, &Global_1577994);
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


void func_52(int iParam0, var uParam1){
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

int func_53(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_54(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_54(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


void func_55(var uParam0, struct<3> Param1){
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


float func_56(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_50(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}


Vector3 func__57(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_58(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_48(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_49(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_49(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_59(bool bParam0){
if(func_63(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764203={
func_62(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_60(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_60(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_61(bParam0);
if(!iVar0==func_33()){
if(iVar0==func_61(bParam1)){
return 1;
}}
return 0;
}

int func_61(bool bParam0){
if(bParam0 !=func_33()){
return Global_1894573[bParam0 /*608*/].f_10;
}
return func_33();
}
struct<13> func_62(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_63(bool bParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_62(bParam0) 
};
Global_2764216={
func_62(bParam1) 
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

int func_64(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}

int func_65(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar1=iVar0;
if(func_2566(bVar1, 0, 1) && func_2566(bParam3, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_48(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_48(func_57(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_48(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_2566(bVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(func_48(func_57(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_66(int iParam0){
if(Global_2635559.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_681) < 30000){
if(iParam0==-1 || (iParam0 > -1 && Global_2635559.f_682 < iParam0)){
Global_2635559.f_676=2;
}else{
Global_2635559.f_676=5;
}}else{
Global_2635559.f_676=5;
}}


void func_67(struct<3> Param0, int iParam1){
struct<3> Var0;
if(iParam1==0 && func_68(Param0, 0.01f)){
return;
}
if(iParam1 < 30 && vmag(Param0) > 0f){
Var0={
Global_2635559.f_2737[iParam1 /*3*/] 
};
Global_2635559.f_2737[iParam1 /*3*/]={
Param0 
};
func_67(Var0, iParam1 + 1);
}}

int func_68(struct<3> Param0, float fParam1){
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

int func_69(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
float fVar4;
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return 0;
}else{
func_182();
iVar3=0;
while (iVar3 < 3){
if(Global_2635559.f_687[iVar3]==-1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_49(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
if(bParam3){
fVar4=MISC::ABSF((Var0.f_2 - Var1.f_2));
Var0.f_2=(Var0.f_2 + ((fVar4 * 0.5f) - 2f));
Var1.f_2=(Var1.f_2 + (fVar4 * 0.5f));
}
Global_2635559.f_687[iVar3]=NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var1, fParam4);
Global_2635559.f_691[iVar3]=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_699=Global_2635559.f_687[iVar3];
return 1;
}
iVar3++;
}}
return 0;
}


void func_70(struct<3> Param0, var uParam1, int iParam2, var uParam3){
struct<8> Var0;
*uParam3=func_71(&Param0, &uParam1, &iParam2);
Var0.f_0=1556360603;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0 
};
Var0.f_5=uParam1;
Var0.f_6=iParam2;
Var0.f_7=*uParam3;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_29(1, 1));
}

int func_71(var uParam0, var uParam1, var uParam2){
char cVar0[64];
int iVar1;
StringCopy(&cVar0, "", 64);
StringIntConCat(&cVar0, round(*uParam0), 64);
StringIntConCat(&cVar0, round(uParam0->f_1), 64);
StringIntConCat(&cVar0, round(uParam0->f_2), 64);
StringIntConCat(&cVar0, round(*uParam1), 64);
StringIntConCat(&cVar0, *uParam2, 64);
iVar1=MISC::GET_HASH_KEY(&cVar0);
return iVar1;
}


void func_72(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_123(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_73(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_73(var uParam0, var uParam1, var uParam2){
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
if(func_119(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_114(uParam0, 1)){
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
if(func_53(uParam2->f_34) !=0){
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
if(!func_107(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_104(Var1)){
Var1={
func_99(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_98(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_94(Var1, uParam2)){
if((uParam2->f_48 && !func_114(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_93(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_119(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_92(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_130(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_130(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_47(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_82(Var1, uParam2->f_54, &fVar23);
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
func_81(Var1, fVar2, iVar14);
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
if(func_94(Var1, uParam2)){
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
func_79(0, uParam2);
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
func_78(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
if(func_119(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_114(&Var27, bVar29)){
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
func_74(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar6;
}
return 0;
}


void func_74(var uParam0, var uParam1, var uParam2, struct<3> Param3){
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
if(!func_75(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
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

int func_75(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4){
if(func_77(Param0, fParam1, bParam2, iParam3, 0) || func_76(Param0, bParam2, iParam4)){
return 1;
}
return 0;
}

int func_76(struct<3> Param0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam1==iVar0 || iParam2==1){
bVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_48(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_2566(bVar2, 0, 1) && func_2566(bParam1, 0, 1)){
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

int func_77(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4){
int iVar0;
bool bVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam2==iVar0 || iParam3==1){
bVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_2566(bVar1, 0, 1) && func_2566(bParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(bParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_2566(bVar1, 0, 1) && func_2566(bParam2, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_57(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_2566(bVar1, 0, 1)){
if(vdist(func_57(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}


void func_78(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_99(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_104(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_79(int iParam0, var uParam1){
if(!func_94(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_80(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_79(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_79(iParam0 + 1, uParam1);
}}


void func_80(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_81(struct<3> Param0, float fParam1, int iParam2){
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
func_81(Var0, uVar1, iParam2 + 1);
}}}

int func_82(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
int iVar2;
bool bVar3;
float fVar4;
float fVar5;
fVar4=99999.9f;
iVar0=0;
while (iVar0 < 32){
bVar3=iVar0;
if(func_83(bVar3)){
Var1={
func_57(bVar3) 
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

int func_83(bool bParam0){
if(func_2566(bParam0, 0, 1)){
if(!func_90(bParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_87(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_84(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_87(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_59(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_85(iParam0, bVar0, iParam1, bVar1) || !func_85(iParam1, bVar1, iParam0, bVar0)){
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

int func_85(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_2566(iVar1, 1, 1) || func_30(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_86(iVar1)){
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


var func__86(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_87(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_88(bParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[bParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_88(int iParam0){
return func_89(iParam0);
}


var func__89(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_90(bool bParam0){
if(func_30(bParam0, 0)){
return 1;
}
if(func_91()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_91(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_92(struct<3> Param0, float fParam1, int iParam2){
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
if(func_58(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
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
if(func_58(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_93(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
if(func_65(Param0, fParam1, iParam2, bParam3, iParam4) || func_128(Param0, fParam1, iParam2, bParam3, iParam5)){
return 1;
}
return 0;
}

int func_94(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_97(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_95(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
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

int func_95(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_96(&Param1, &Param2);
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


void func_96(var uParam0, var uParam1){
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


bool func_97(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
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

int func_98(struct<3> Param0, float fParam1){
int iVar0;
if(func_87(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_48(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_48(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_48(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_48(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_48(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}


Vector3 func__99(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
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
if(!func_102(Param0, *uParam1, Param4)){
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
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_101(Param0)){
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
fVar10=func_100(iParam7, 3.5f);
}else{
fVar10=func_100(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_102(Param0, *uParam1, Param4)){
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
fVar10=func_100(iParam7, 3.5f);
}else{
fVar10=func_100(iParam7, 1.5f);
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


float func_100(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_50(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_101(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_102(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_55(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_103(Var1, Var0) >=0f){
return 1;
}
return 0;
}


float func_103(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_104(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_106(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_105(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_105(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_105(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_106(struct<2> Param0, var uParam1){
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

int func_107(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_113(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_112(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
if(func_108(Var1, &uVar0) || func_113(Var1)){
Var1={
*uParam0 
};
func_112(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_108(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_111()){
return 0;
}
iVar1=func_110();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_109(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_109(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_97(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_95(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_110(){
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


bool func_111(){
return Global_1950108.f_528;
}


void func_112(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
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
func_55(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_55(&Var0, 0f, 0f, fParam5);
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

int func_113(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=vdist(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}


bool func_114(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_97(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_95(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
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
func_115(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}


Vector3 func__115(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_112(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_118(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_116(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_97(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_95(Var1, Param1, Param2, 0, 0)){
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


void func_116(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
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
func_117(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_103(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_103(Var2, Var1) >=0f){
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
func_117(0f, 0f, 1f, Var0) 
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
func_117(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_103(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_103(Var2, Var11) >=0f){
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


Vector3 func__117(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_118(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
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

int func_119(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_173(Param0)){
if(func_122(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_120(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_68(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_112(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_120(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_108(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_121(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_108(Var2, &uVar1) || func_113(Var2)){
Var2={
*uParam0 
};
func_121(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}


void func_121(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_115(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_115(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_115(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_112(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_118(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_116(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_109(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
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
func_121(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_122(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_121(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_123(var uParam0, var uParam1, var uParam2){
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
if(func_119(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_114(uParam0, 1)){
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
func_126(*uParam0);
}elseif(uParam2->f_29){
func_125();
}else{
func_124();
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
if((uParam2->f_12 && !func_93(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_119(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_92(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_130(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_130(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_47(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_82(Var3, uParam2->f_54, &fVar12);
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
func_81(Var3, fVar4, iVar5);
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
func_79(0, uParam2);
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


void func_124(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_125(){
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


void func_126(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_127(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_127(struct<3> Param0, float fParam1, float fParam2){
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

int func_128(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!bParam3==iVar0 || iParam4==1){
bVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_129(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_58(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_2566(bVar2, 0, 1) && func_2566(bParam3, 0, 1)){
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

int func_129(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_56(iParam1, 1008981770);
fVar1=func_56(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_130(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_135(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_131(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}

int func_131(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
bool bVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_2566(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_132(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_2566(bVar1, 1, 1)){
if(!func_30(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_64(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_132(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_132(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__132(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_134() && Global_1853910[iVar0 /*862*/].f_832) && !func_133(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_57(bParam0);
}

int func_133(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


bool func_134(){
return Global_2683864.f_19;
}

int func_135(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_2566(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_64(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_59(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_57(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_136(struct<3> Param0){
int iVar0;
if(Global_2793046.f_936 && func_137(Param0, &iVar0)){
return 1;
}
return 0;
}

int func_137(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
*iParam1=-1;
iVar2=func_150(Param0, 0);
if(!iVar2==-1){
iVar0=83;
while (iVar0 <=87){
iVar1=iVar0;
if(func_138(iVar1)){
if(func_150(Global_1950108.f_542[iVar0 /*3*/], 0)==iVar2){
*iParam1=iVar0 + 1000;
return 1;
}}
iVar0++;
}}
return 0;
}

int func_138(int iParam0){
int iVar0;
int iVar1;
iVar0=func_149(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_293==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_33()){
if(Global_1853910[iVar1 /*862*/].f_267.f_293==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
if(func_148(PLAYER::PLAYER_ID(), 0) || (func_145(PLAYER::PLAYER_ID()) && func_143(func_144(PLAYER::PLAYER_ID()))==12)){
return 1;
}
if(func_142(PLAYER::PLAYER_ID()) || (func_145(PLAYER::PLAYER_ID()) && func_143(func_144(PLAYER::PLAYER_ID()))==8)){
return 1;
}
if(func_141(PLAYER::PLAYER_ID()) || (func_145(PLAYER::PLAYER_ID()) && func_143(func_144(PLAYER::PLAYER_ID()))==5)){
return 1;
}
if(func_140(PLAYER::PLAYER_ID()) || (func_145(PLAYER::PLAYER_ID()) && func_143(func_144(PLAYER::PLAYER_ID()))==10)){
return 1;
}
if(func_139(PLAYER::PLAYER_ID()) || (func_145(PLAYER::PLAYER_ID()) && func_143(func_144(PLAYER::PLAYER_ID()))==6)){
return 1;
}
return 0;
}

int func_139(bool bParam0){
if(bParam0 !=func_33()){
if(func_2566(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_143(Global_2657589[bParam0 /*466*/].f_321.f_7)==6;
}}}
return 0;
}

int func_140(bool bParam0){
if(bParam0 !=func_33()){
if(func_2566(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_143(Global_2657589[bParam0 /*466*/].f_321.f_7)==10;
}}}
return 0;
}

int func_141(bool bParam0){
if(bParam0 !=func_33()){
if(func_2566(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_33()){
return func_143(Global_2657589[bParam0 /*466*/].f_321.f_7)==5;
}}}
return 0;
}

int func_142(bool bParam0){
if(bParam0 !=func_33()){
if(func_2566(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_33()){
return func_143(Global_2657589[bParam0 /*466*/].f_321.f_7)==8;
}}}
return 0;
}

int func_143(int iParam0){
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

int func_144(bool bParam0){
if(bParam0 !=func_33() && func_2566(bParam0, 1, 1)){
return Global_2657589[bParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_145(bool bParam0){
if(bParam0 !=func_33() && func_2566(bParam0, 1, 1)){
if(func_147(bParam0) && !func_146(bParam0)){
return 1;
}}
return 0;
}

int func_146(bool bParam0){
if(bParam0 !=func_33() && func_2566(bParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321, 4);
}
return 0;
}

int func_147(bool bParam0){
if(bParam0 !=func_33() && func_2566(bParam0, 1, 1)){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321, 3);
}
return 0;
}

int func_148(bool bParam0, bool bParam1){
int iVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("terbyte")){
return 1;
}}}
if(bParam0 !=func_33()){
if(func_2566(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[bParam0 /*466*/].f_321.f_10 !=func_33()){
return func_143(Global_2657589[bParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_149(int iParam0){
switch (iParam0){
case 83:
return 1;
break;
case 84:
return 2;
break;
case 85:
return 3;
break;
case 86:
return 4;
break;
case 87:
return 5;
break;
}
return 0;
}

int func_150(struct<3> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1 || iParam1==0){
if(func_109(Param0, &(Global_2640505[iVar0 /*17*/]), 0.1f, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_151(struct<3> Param0, int iParam1){
int iVar0;
int iVar1;
int iVar2[3];
int iVar3[3];
if(Global_2635559.f_45.f_319){
return;
}
if(!func_169()){
if(iParam1==0){
}
iVar1=func_168(Param0);
if(iVar1 > -1){
func_181();
switch (iVar1){
case 0:
func_167(-1139.678f, -2694.165f, 12.949f, 283.4298f);
func_167(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
func_167(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
func_167(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
func_167(-1110.51f, -2693.236f, 12.9595f, 298.84f);
func_167(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
func_167(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
func_167(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
func_167(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
break;
case 1:
func_167(-1411.731f, -533.6462f, 30.2703f, 215.116f);
func_167(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
func_167(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
func_167(-1438.8f, -584.4678f, 29.595f, 118.1207f);
break;
case 2:
func_167(-780.5905f, 292.8159f, 84.673f, 97.2697f);
func_167(-788.6147f, 291.8073f, 84.72f, 97.7348f);
func_167(-765.572f, 294.4459f, 84.5182f, 93.9327f);
func_167(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
break;
case 3:
func_167(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
func_167(-647.239f, 49.2068f, 40.7135f, 355.9723f);
func_167(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
func_167(-610.5603f, 5.1258f, 41.2404f, 98.696f);
break;
case 4:
func_167(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
func_167(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
func_167(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
func_167(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
break;
case 5:
func_167(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
func_167(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
func_167(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
func_167(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
break;
case 6:
func_167(-58.1347f, -573.486f, 36.5789f, 341.8442f);
func_167(-64.227f, -590.2214f, 35.1654f, 338.972f);
func_167(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
func_167(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
break;
case 7:
func_167(-232.1917f, -978.1431f, 28.166f, 160.2115f);
func_167(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
func_167(-251.993f, -998.3963f, 28.3747f, 249.3297f);
func_167(-262.222f, -994.5226f, 29.23f, 249.4673f);
break;
case 8:
func_167(151.624f, -1309.343f, 28.2023f, 243.201f);
func_167(152.7886f, -1305.608f, 28.2023f, 243.9973f);
func_167(145.8017f, -1287.19f, 28.312f, 120.6275f);
func_167(142.8935f, -1282.286f, 28.3156f, 120.3024f);
break;
case 9:
func_167(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
func_167(-2322.187f, 277.638f, 168.4671f, 23.4249f);
func_167(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
func_167(-2314.396f, 290.9f, 168.4671f, 114.3983f);
func_167(-2316.81f, 296.424f, 168.4671f, 113.6228f);
func_167(-2318.572f, 299.2423f, 168.4671f, 293.83f);
func_167(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
func_167(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
func_167(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
func_167(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
func_167(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
func_167(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
break;
case 10:
func_165(78);
break;
case 11:
func_165(79);
break;
case 12:
func_165(82);
break;
case 13:
func_165(81);
break;
case 14:
func_165(73);
break;
case 15:
func_167(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_167(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_167(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_167(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 16:
func_165(75);
break;
case 17:
func_165(76);
break;
case 18:
func_165(77);
break;
case 19:
func_167(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
func_167(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
func_167(-931.6637f, 703.693f, 151.369f, 87.7447f);
func_167(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
break;
case 20:
func_165(80);
break;
case 21:
case 25:
func_165(87);
break;
case 22:
case 26:
func_165(88);
break;
case 23:
case 27:
func_165(89);
break;
case 24:
case 28:
func_165(90);
break;
case 29:
case 30:
if(func_164(iParam1)){
func_165(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33);
}
break;
case 31:
func_167(-352.53f, -1836.742f, 21.924f, 274.8f);
func_167(-336.412f, -1837.341f, 22.497f, 264.6f);
func_167(-320.707f, -1840.342f, 23.195f, 257.4f);
func_167(-304.646f, -1843.295f, 24.219f, 261.599f);
func_167(-288.991f, -1844.123f, 25.228f, 269.599f);
func_167(-273.031f, -1842.69f, 26.27f, 278.199f);
func_167(-361.271f, -1814.526f, 21.63f, 96.399f);
func_167(-343.939f, -1813.331f, 22.368f, 87.999f);
func_167(-326.881f, -1814.914f, 23.106f, 78.799f);
func_167(-310.941f, -1818.223f, 23.957f, 78.799f);
func_167(-294.16f, -1820.207f, 25.092f, 89.199f);
func_167(-277.392f, -1819.237f, 26.283f, 100.199f);
func_167(-257.213f, -1838.977f, 27.318f, 285.799f);
func_167(-261.286f, -1815.615f, 27.439f, 110.399f);
func_167(-246.086f, -1808.691f, 28.576f, 117.398f);
func_167(-231.901f, -1800.767f, 28.619f, 119.398f);
func_167(-199.77f, -1989.34f, 26.62f, 180.997f);
func_167(-201.159f, -1971.41f, 26.62f, 190.798f);
func_167(-205.571f, -1954.537f, 26.62f, 199.998f);
func_167(-197.879f, -1940.822f, 26.62f, 114.998f);
func_167(-141.311f, -1967.41f, 21.805f, 91.997f);
func_167(-141.145f, -1977.861f, 21.813f, 91.997f);
func_167(-140.565f, -1988.289f, 21.815f, 91.997f);
func_167(-145.045f, -2032.168f, 21.956f, 73.597f);
func_167(-147.923f, -2041.781f, 21.956f, 73.597f);
func_167(-185.791f, -1948.005f, 26.62f, 18.596f);
func_167(-181.155f, -1965.422f, 26.62f, 8.196f);
func_167(-179.172f, -1984.332f, 26.62f, 1.396f);
func_167(-225.88f, -1824.637f, 28.897f, 299.596f);
func_167(-211.722f, -1816.401f, 28.859f, 300.796f);
func_167(-217.99f, -1792.624f, 28.649f, 119.196f);
func_167(-203.828f, -1784.264f, 28.678f, 119.996f);
func_167(-194.254f, -2018.756f, 26.62f, 75f);
func_167(-186.956f, -2031.369f, 26.62f, 338f);
func_167(-194.916f, -2047.94f, 26.62f, 329.8f);
func_167(-205.565f, -2064.553f, 26.62f, 320.2f);
func_167(-218.606f, -2077.97f, 26.62f, 311.2f);
func_167(-233.372f, -2089.601f, 26.62f, 304f);
func_167(-207.822f, -2002.11f, 26.62f, 173.799f);
func_167(-207.567f, -2027.579f, 26.62f, 158.599f);
func_167(-215.235f, -2042.272f, 26.62f, 148.999f);
func_167(-227.643f, -2058.498f, 26.62f, 138.799f);
func_167(-242.977f, -2071.452f, 26.62f, 125.798f);
func_167(-256.624f, -2087.982f, 26.62f, 204.198f);
func_167(-249.549f, -2098.767f, 26.62f, 294.198f);
func_167(-228.998f, -2048.889f, 26.62f, 141.198f);
func_167(-176.963f, -2009.239f, 24.519f, 261.597f);
func_167(-195.128f, -1806.447f, 28.814f, 299.997f);
func_167(-180.02f, -1797.414f, 28.797f, 299.997f);
func_167(-165.796f, -1787.672f, 28.788f, 304.597f);
func_167(-188.124f, -1774.765f, 28.711f, 123.197f);
func_167(-417.428f, -1836.374f, 19.238f, 121.797f);
func_167(-430.967f, -1844.844f, 18.468f, 121.797f);
func_167(-444.94f, -1853.739f, 17.786f, 121.797f);
break;
}}elseif(func_161(Param0, &iVar2, &iVar3) || (func_137(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)))){
func_181();
iVar0=0;
while (iVar0 < iVar2){
if(iVar2[iVar0] > 1000){
iVar2[iVar0]=(iVar2[iVar0] - 1000);
iVar3[iVar0]=1;
}
if(iVar2[iVar0] >=83 && iVar2[iVar0] <=87){
Global_2635559.f_516=1;
}
if(!iVar3[iVar0] && func_160(iVar2[iVar0], -1)){
if(func_164(iParam1)){
func_165(iVar2[iVar0]);
}}elseif(iVar3[iVar0]){
if(((func_159(PLAYER::PLAYER_PED_ID()) || func_158(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)){
if(func_157(iParam1)){
func_156(iVar2[iVar0]);
}
elseif(func_155(iParam1)){
func_154(iVar2[iVar0]);
func_156(iVar2[iVar0]);
}
else{
func_154(iVar2[iVar0]);
func_156(iVar2[iVar0]);
}}else{
func_152(iVar2[iVar0], iParam1);
}}else{
func_165(iVar2[iVar0]);
}
iVar0++;
}}}}


void func_152(int iParam0, int iParam1){
switch (iParam0){
case 23:
func_167(434.1898f, 6535.824f, 27.0084f, 66.9998f);
func_167(434.9146f, 6539.661f, 26.9691f, 66.9998f);
func_167(435.1928f, 6543.298f, 26.889f, 66.9998f);
func_167(429.8495f, 6506.581f, 27.1807f, 59.7997f);
func_167(429.8463f, 6511.11f, 27.0717f, 60.9997f);
func_167(434.2748f, 6581.816f, 26.1303f, 85.1993f);
func_167(443.1016f, 6580.717f, 26.0739f, 85.1993f);
func_167(451.9748f, 6579.937f, 26.0319f, 85.1993f);
break;
case 26:
func_167(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
func_167(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
func_167(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
func_167(-142.1459f, 6342.532f, 30.49f, 44.7982f);
func_167(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
func_167(-151.1909f, 6358.461f, 30.4907f, 223.398f);
func_167(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
func_167(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
break;
case 24:
func_167(60.7522f, 6465.807f, 30.3941f, 213.3973f);
func_167(57.4131f, 6462.55f, 30.3663f, 213.3973f);
func_167(48.0438f, 6452.668f, 30.3245f, 213.3973f);
func_167(40.6765f, 6445.235f, 30.3475f, 213.3973f);
func_167(37.8298f, 6442.521f, 30.3489f, 213.3973f);
func_167(35.0212f, 6439.866f, 30.3332f, 213.3973f);
func_167(32.1837f, 6437.21f, 30.2991f, 213.3973f);
func_167(29.4732f, 6434.526f, 30.3702f, 213.3973f);
break;
case 25:
func_167(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
func_167(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
func_167(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
func_167(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
func_167(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
func_167(-360.983f, 6130.575f, 30.4401f, 45.7965f);
func_167(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
func_167(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
break;
case 22:
func_167(45.2181f, 6341.107f, 30.2296f, 14.3964f);
func_167(41.6057f, 6339.476f, 30.2306f, 14.3964f);
func_167(39.2508f, 6359.469f, 30.2398f, 207.3965f);
func_167(36.3203f, 6356.893f, 30.2398f, 207.3965f);
func_167(51.6043f, 6365.022f, 30.2399f, 33.5965f);
func_167(65.6465f, 6380.626f, 30.2398f, 212.9964f);
func_167(24.8587f, 6366.36f, 30.2286f, 32.7965f);
func_167(19.6254f, 6360.736f, 30.2305f, 32.7965f);
break;
case 28:
func_167(94.0245f, 181.2181f, 103.5566f, 160.3953f);
func_167(91.0039f, 182.2811f, 103.6179f, 160.3953f);
func_167(68.365f, 148.2105f, 103.5812f, 339.9951f);
func_167(62.2104f, 150.5185f, 103.6101f, 339.9951f);
func_167(69.5198f, 186.4278f, 103.9415f, 69.7949f);
func_167(62.59f, 189.0833f, 103.9981f, 69.7949f);
func_167(55.6095f, 191.8089f, 104.2827f, 69.7949f);
func_167(154.7309f, 182.1333f, 104.6903f, 160.1945f);
break;
case 31:
func_167(322.4916f, -714.5293f, 28.1574f, 158.5941f);
func_167(329.5591f, -694.4284f, 28.1656f, 158.5941f);
func_167(324.565f, -684.3934f, 28.3133f, 247.194f);
func_167(326.4054f, -679.9403f, 28.3192f, 247.194f);
func_167(297.1177f, -804.3891f, 28.4859f, 160.594f);
func_167(288.5461f, -814.6994f, 28.1563f, 163.194f);
func_167(286.0127f, -821.7357f, 28.3093f, 163.194f);
func_167(283.6725f, -828.9533f, 28.1247f, 158.994f);
break;
case 29:
func_167(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
func_167(-1454.819f, -359.998f, 42.7885f, 311.3925f);
func_167(-1462.675f, -360.1352f, 42.9255f, 223.392f);
func_167(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
func_167(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
func_167(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
func_167(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
func_167(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
break;
case 30:
func_167(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
func_167(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
func_167(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
func_167(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
func_167(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
func_167(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
func_167(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
func_167(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
break;
case 27:
func_167(1414.237f, -1656.344f, 60.2449f, 332.7893f);
func_167(1416.668f, -1659.933f, 60.6982f, 332.7893f);
func_167(1419.327f, -1663.972f, 61.2382f, 332.7893f);
func_167(1421.557f, -1667.367f, 61.7479f, 332.7893f);
func_167(1423.744f, -1670.853f, 62.3125f, 332.7893f);
func_167(1412.157f, -1652.746f, 59.9105f, 332.7893f);
func_167(1426.201f, -1673.598f, 62.7133f, 330.1893f);
func_167(1435.804f, -1694.73f, 65.0743f, 352.5892f);
break;
case 33:
func_167(2810.787f, 4435.92f, 47.5295f, 20.7996f);
func_167(2808.413f, 4443.922f, 47.3732f, 14.7995f);
func_167(2806.298f, 4451.786f, 47.1865f, 15.3995f);
func_167(2803.925f, 4459.858f, 46.9823f, 15.3995f);
func_167(2801.756f, 4467.755f, 46.8147f, 15.3995f);
func_167(2893.563f, 4430.258f, 47.338f, 105.9994f);
func_167(2903.725f, 4425.854f, 47.3523f, 23.1992f);
func_167(2907.076f, 4418.059f, 47.6301f, 23.1992f);
break;
case 36:
func_167(1680.448f, 4821.131f, 41.0599f, 186.399f);
func_167(1679.76f, 4829.447f, 40.9167f, 186.399f);
func_167(1678.668f, 4838.03f, 41.0221f, 187.7989f);
func_167(1677.612f, 4846.028f, 41.0452f, 187.7989f);
func_167(1675.851f, 4860.434f, 41.0901f, 187.7989f);
func_167(1674.843f, 4868.343f, 41.0684f, 187.7989f);
func_167(1673.543f, 4875.752f, 41.0684f, 186.7986f);
func_167(1672.525f, 4884.972f, 41.0478f, 186.7986f);
break;
case 34:
func_167(422.863f, 3583.901f, 32.2386f, 313.5986f);
func_167(426.6211f, 3583.208f, 32.2386f, 313.5986f);
func_167(430.466f, 3582.042f, 32.2386f, 313.5986f);
func_167(434.2751f, 3580.881f, 32.2386f, 313.5986f);
func_167(438.1525f, 3579.911f, 32.2386f, 313.5986f);
func_167(442.0173f, 3578.948f, 32.2386f, 313.5986f);
func_167(420.2694f, 3572.995f, 32.2385f, 353.7984f);
func_167(424.4825f, 3572.1f, 32.2386f, 348.1984f);
break;
case 35:
func_167(627.005f, 2726.019f, 40.7692f, 4.3984f);
func_167(620.9771f, 2725.759f, 40.7897f, 4.3984f);
func_167(614.8536f, 2725.355f, 40.8321f, 4.3984f);
func_167(611.1158f, 2737.387f, 40.9734f, 185.3984f);
func_167(598.9713f, 2736.261f, 41.0602f, 186.5986f);
func_167(592.6151f, 2735.886f, 41.0602f, 186.5986f);
func_167(586.0421f, 2735.9f, 41.0535f, 186.5986f);
func_167(627.4468f, 2742.742f, 40.8963f, 183.5979f);
break;
case 32:
func_167(214.3318f, 2492.26f, 53.9736f, 312.7978f);
func_167(213.9953f, 2496.666f, 53.8128f, 312.7978f);
func_167(213.7524f, 2501.251f, 53.5958f, 312.7978f);
func_167(213.6645f, 2505.908f, 53.3477f, 312.7978f);
func_167(213.4478f, 2510.734f, 53.1055f, 312.7978f);
func_167(212.9148f, 2515.268f, 52.9376f, 312.7978f);
func_167(211.5983f, 2519.216f, 52.6753f, 312.7978f);
func_167(210.1288f, 2523.187f, 52.3493f, 312.7978f);
break;
case 38:
func_167(153.6785f, -2476.192f, 4.9877f, 178.4004f);
func_167(150.9209f, -2516.979f, 4.9909f, 179.9999f);
func_167(150.9499f, -2524.965f, 4.9905f, 179.9999f);
func_167(153.866f, -2467.242f, 4.9877f, 178.4004f);
func_167(150.8115f, -2533.139f, 4.9895f, 180.0004f);
func_167(153.8647f, -2433.386f, 5.2336f, 170.2002f);
func_167(142.7427f, -2536.147f, 5f, 205.0002f);
func_167(138.8267f, -2535.865f, 5f, 205.0002f);
break;
case 41:
func_167(-341.4255f, -2734.451f, 5.0413f, 314.8f);
func_167(-334.0134f, -2741.43f, 5.0269f, 314.8f);
func_167(-329.7832f, -2745.604f, 5.0196f, 314.8f);
func_167(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
func_167(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
func_167(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
func_167(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
func_167(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
break;
case 39:
func_167(1143.73f, -3105.091f, 4.8989f, 146.1979f);
func_167(1140.009f, -3104.954f, 4.8985f, 146.1979f);
func_167(1136.267f, -3104.69f, 4.8969f, 146.1979f);
func_167(1132.732f, -3104.277f, 4.8944f, 146.1979f);
func_167(1128.724f, -3104.54f, 4.896f, 146.1979f);
func_167(1125.106f, -3104.057f, 4.8942f, 146.1979f);
func_167(1117.8f, -3103.674f, 4.8922f, 146.1979f);
func_167(1114.015f, -3103.448f, 4.8931f, 146.1979f);
break;
case 40:
func_167(653.1188f, -2700.255f, 5.2101f, 24.7971f);
func_167(656.1305f, -2707.245f, 5.214f, 24.7971f);
func_167(659.3307f, -2714.378f, 5.2188f, 22.7968f);
func_167(662.2627f, -2722.228f, 5.2188f, 19.1968f);
func_167(649.2115f, -2728.359f, 5.1124f, 20.5967f);
func_167(646.2606f, -2720.833f, 5.1103f, 21.3967f);
func_167(643.4582f, -2713.846f, 5.1099f, 21.3967f);
func_167(640.3513f, -2706.571f, 5.108f, 21.3967f);
break;
case 37:
func_167(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
func_167(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
func_167(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
func_167(-238.214f, -2614.847f, 5.0502f, 271.5953f);
func_167(-238.013f, -2630.961f, 5.0331f, 271.3949f);
func_167(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
func_167(-253.401f, -2631.108f, 5.0319f, 272.195f);
func_167(-245.5563f, -2631.06f, 5.0323f, 272.195f);
break;
case 83:
func_167(-1190.795f, -3371.393f, 12.945f, 348.399f);
func_167(-1185.634f, -3373.893f, 12.945f, 348.399f);
func_167(-1114.818f, -3414.185f, 12.945f, 314.199f);
func_167(-1110.976f, -3416.37f, 12.945f, 314.199f);
func_167(-1098.621f, -3460.792f, 12.9453f, 329.799f);
func_167(-1093.31f, -3463.464f, 12.9453f, 329.799f);
func_167(-1089.433f, -3443.234f, 12.945f, 329.799f);
func_167(-1084.271f, -3446.31f, 12.945f, 329.799f);
func_167(-1093.808f, -3452.407f, 12.9451f, 329.799f);
func_167(-1088.383f, -3455.466f, 12.9451f, 329.799f);
func_167(-1118.474f, -3411.385f, 12.9451f, 313.199f);
func_167(-1181.003f, -3375.658f, 12.945f, 346.799f);
func_167(-1212.071f, -3382.283f, 12.9451f, 328.999f);
func_167(-1217.708f, -3378.623f, 12.9451f, 328.999f);
func_167(-1216.986f, -3390.396f, 12.9452f, 328.999f);
func_167(-1222.566f, -3386.707f, 12.9452f, 328.999f);
func_167(-1222.06f, -3398.882f, 12.9452f, 328.999f);
func_167(-1227.698f, -3394.946f, 12.9451f, 328.999f);
func_167(-1097.517f, -3472.086f, 12.9453f, 328.999f);
func_167(-1102.951f, -3468.619f, 12.9452f, 328.999f);
func_167(-1227.253f, -3407.38f, 12.9452f, 328.999f);
func_167(-1232.836f, -3403.572f, 12.9452f, 328.999f);
break;
case 84:
func_167(-1364.879f, -3285.201f, 12.945f, 330.2f);
func_167(-1359.229f, -3288.52f, 12.945f, 330.2f);
func_167(-1369.636f, -3293.617f, 12.945f, 330.2f);
func_167(-1363.881f, -3296.796f, 12.945f, 330.2f);
func_167(-1432.898f, -3247.702f, 12.945f, 330.2f);
func_167(-1437.282f, -3255.429f, 12.945f, 330.2f);
func_167(-1441.623f, -3262.969f, 12.945f, 330.2f);
func_167(-1443.954f, -3251.006f, 12.945f, 330.2f);
func_167(-1374.159f, -3301.61f, 12.945f, 330.2f);
func_167(-1368.508f, -3304.924f, 12.945f, 330.2f);
func_167(-1359.905f, -3276.118f, 12.9448f, 330.4f);
func_167(-1354.228f, -3279.63f, 12.9448f, 330.4f);
func_167(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
func_167(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
func_167(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
func_167(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
func_167(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
func_167(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
func_167(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
func_167(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
func_167(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
func_167(-1444.064f, -3273.751f, 12.945f, 330.7996f);
break;
case 85:
func_167(-2060.105f, 3186.159f, 31.81f, 329.599f);
func_167(-2065.521f, 3189.007f, 31.81f, 150.199f);
func_167(-2055.006f, 3194.989f, 31.81f, 329.599f);
func_167(-2060.471f, 3197.816f, 31.81f, 150.199f);
func_167(-2049.611f, 3204.032f, 31.81f, 329.599f);
func_167(-2055.048f, 3206.958f, 31.81f, 150.199f);
func_167(-2049.627f, 3216.253f, 31.81f, 150.199f);
func_167(-2039.024f, 3222.121f, 31.81f, 329.599f);
func_167(-2044.17f, 3213.208f, 31.81f, 329.599f);
func_167(-2044.672f, 3224.638f, 31.81f, 150.199f);
func_167(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
func_167(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
func_167(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
func_167(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
func_167(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
func_167(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
func_167(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
func_167(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
func_167(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
func_167(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
func_167(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
func_167(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
break;
case 86:
func_167(-1843.828f, 3085.094f, 31.81f, 165.8f);
func_167(-1828.571f, 3084.114f, 31.841f, 329.2f);
func_167(-1823.414f, 3092.762f, 31.843f, 330f);
func_167(-1819.045f, 3100.435f, 31.845f, 330f);
func_167(-1833.313f, 3075.722f, 31.838f, 330f);
func_167(-1847.648f, 3076.8f, 31.835f, 165.8f);
func_167(-1838.479f, 3078.576f, 31.863f, 150.599f);
func_167(-1833.605f, 3086.784f, 31.863f, 150.599f);
func_167(-1828.424f, 3095.617f, 31.863f, 150.599f);
func_167(-1823.95f, 3102.821f, 31.862f, 150.599f);
func_167(-1819.284f, 3110.67f, 31.8615f, 150.2f);
func_167(-1814.545f, 3108.229f, 31.8476f, 330.6f);
func_167(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
func_167(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
func_167(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
func_167(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
func_167(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
func_167(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
func_167(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
func_167(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
func_167(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
func_167(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
break;
case 87:
func_167(-2538.561f, 3303.172f, 31.814f, 296.999f);
func_167(-2530.309f, 3307.445f, 31.816f, 296.999f);
func_167(-2521.733f, 3311.833f, 31.817f, 296.999f);
func_167(-2512.881f, 3316.428f, 31.819f, 296.999f);
func_167(-2502.952f, 3321.518f, 31.821f, 296.999f);
func_167(-2542.613f, 3310.728f, 31.814f, 296.999f);
func_167(-2534.195f, 3314.753f, 31.815f, 296.999f);
func_167(-2525.635f, 3318.97f, 31.817f, 296.999f);
func_167(-2516.674f, 3323.545f, 31.819f, 296.999f);
func_167(-2507.153f, 3328.454f, 31.82f, 296.999f);
func_167(-2547.689f, 3298.791f, 31.812f, 296.999f);
func_167(-2551.261f, 3306.304f, 31.8123f, 296.999f);
func_167(-2497.446f, 3333.296f, 31.821f, 296.999f);
func_167(-2494.089f, 3326.065f, 31.8218f, 296.999f);
func_167(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
func_167(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
func_167(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
func_167(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
func_167(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
func_167(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
func_167(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
func_167(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
break;
case 89:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(1284.416f, 2890.299f, 45.0276f, 336.3999f);
func_167(1273.248f, 2901.428f, 45.0426f, 338.3999f);
func_167(1262.945f, 2911.535f, 43.2959f, 341.9999f);
func_167(1272.094f, 2873.387f, 45.3443f, 328.5991f);
func_167(1259.785f, 2892.217f, 45.1126f, 339.9999f);
func_167(1231.279f, 2910.881f, 43.3085f, 12f);
func_167(1306.515f, 2839.475f, 46.8947f, 132.3996f);
func_167(1307.453f, 2825.276f, 45.1566f, 127.1998f);
func_167(1257.029f, 2872.157f, 45.9766f, 338.5992f);
func_167(1225.764f, 2930.095f, 41.6173f, 14.7999f);
}else{
func_167(1265.123f, 2836.949f, 47.1021f, 119.9996f);
func_167(1258.145f, 2831.643f, 46.4503f, 135.7993f);
func_167(1240.847f, 2828.721f, 46.4388f, 39.5992f);
func_167(1236.877f, 2835.49f, 46.3491f, 22.9991f);
func_167(1235.697f, 2843.403f, 46.0231f, 2.7991f);
func_167(1237.686f, 2850.607f, 45.5261f, 335.5991f);
func_167(1241.126f, 2858.816f, 45.0176f, 339.7991f);
func_167(1249.715f, 2810.588f, 47.2648f, 255.1992f);
func_167(1257.696f, 2808.609f, 47.014f, 266.1992f);
func_167(1265.577f, 2808.353f, 46.7598f, 277.199f);
func_167(1273.808f, 2808.484f, 46.3872f, 263.999f);
func_167(1282.535f, 2807.134f, 45.9705f, 250.7989f);
func_167(1290.168f, 2803.745f, 45.8005f, 238.7988f);
func_167(1296.445f, 2798.777f, 46.0903f, 228.9988f);
func_167(1302.041f, 2792.33f, 45.957f, 221.7987f);
func_167(1251.389f, 2825.818f, 45.9856f, 119.1982f);
func_167(1285.48f, 2819.238f, 45.044f, 228.3993f);
func_167(1293.023f, 2814.164f, 44.8859f, 233.399f);
func_167(1242.18f, 2814.153f, 47.7108f, 227.3991f);
func_167(1236.362f, 2819.623f, 47.6845f, 224.399f);
func_167(1231.532f, 2825.855f, 47.4649f, 210.5992f);
func_167(1228.177f, 2833.423f, 47.3171f, 197.5993f);
func_167(1243.095f, 2866.749f, 44.6219f, 353.7992f);
func_167(1307.346f, 2785.787f, 46.1136f, 219.9997f);
func_167(1300.752f, 2808.224f, 44.5688f, 228.9997f);
func_167(1306.571f, 2802.468f, 44.6275f, 224.1992f);
func_167(1244.465f, 2875.697f, 44.5839f, 353.7992f);
func_167(1312.441f, 2795.427f, 45.2701f, 218.5991f);
}
break;
case 90:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(14.4916f, 2660.726f, 79.0178f, 310.1999f);
func_167(3.855f, 2672.388f, 78.437f, 319.2f);
func_167(-7.057f, 2682.247f, 77.472f, 319.2f);
func_167(-14.041f, 2663.43f, 77.4221f, 319.2f);
func_167(41.8086f, 2597.059f, 81.3524f, 301.9997f);
func_167(60.2273f, 2609.745f, 79.5672f, 305.9998f);
func_167(34.0188f, 2659.723f, 78.9894f, 314.2f);
func_167(29.4879f, 2675.34f, 76.0202f, 314.2f);
func_167(19.0088f, 2686.16f, 75.6897f, 314.2f);
func_167(7.6101f, 2697.113f, 76.2923f, 314.2f);
}else{
func_167(50.6405f, 2633.902f, 79.4503f, 305.1998f);
func_167(46.2894f, 2639.951f, 79.9122f, 305.1998f);
func_167(55.3668f, 2627.773f, 79.6363f, 305.1998f);
func_167(59.9522f, 2620.408f, 80.0499f, 305.1998f);
func_167(42.1486f, 2646.073f, 80.108f, 305.1998f);
func_167(68.1481f, 2630.07f, 77.0725f, 305.1998f);
func_167(62.6048f, 2637.014f, 76.1722f, 305.1998f);
func_167(57.3543f, 2643.56f, 75.5301f, 305.1998f);
func_167(52.611f, 2649.698f, 76.1354f, 305.1998f);
func_167(74.5845f, 2640.475f, 72.602f, 305.1998f);
func_167(68.5462f, 2646.784f, 71.6298f, 305.1998f);
func_167(62.426f, 2652.977f, 71.7029f, 305.1998f);
func_167(79.5597f, 2650.835f, 68.668f, 305.1998f);
func_167(72.6035f, 2656.857f, 67.3294f, 305.1998f);
func_167(83.4156f, 2660.237f, 64.3198f, 305.1998f);
func_167(102.851f, 2688.009f, 51.732f, 224f);
func_167(109.815f, 2681.012f, 51.112f, 224f);
func_167(116.355f, 2674.26f, 50.529f, 224f);
func_167(125.138f, 2665.98f, 49.8f, 224f);
func_167(132.228f, 2659.865f, 49.26f, 228.4f);
func_167(139.354f, 2653.536f, 48.737f, 228.4f);
func_167(88.512f, 2702.995f, 53.042f, 224.199f);
func_167(81.565f, 2710.357f, 53.67f, 224.199f);
func_167(75.156f, 2716.981f, 54.223f, 224.199f);
func_167(68.442f, 2723.806f, 54.775f, 226.199f);
func_167(61.449f, 2730.606f, 55.308f, 226.199f);
func_167(53.702f, 2738.167f, 55.855f, 226.199f);
func_167(91.2443f, 2667.262f, 59.9931f, 314.599f);
}
break;
case 91:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(2772.011f, 3889.062f, 42.94f, 145.4f);
func_167(2785.592f, 3880.409f, 43.695f, 146.199f);
func_167(2788.387f, 3898.107f, 45.364f, 140.999f);
func_167(2801.558f, 3912.485f, 44.931f, 131.999f);
func_167(2805.531f, 3892.253f, 47.01f, 106.399f);
func_167(2824.791f, 3894.787f, 47.4293f, 105.3989f);
func_167(2761.739f, 3945.948f, 44.59f, 135.398f);
func_167(2814.589f, 3930.404f, 44.816f, 134.9978f);
func_167(2747.627f, 3930.92f, 43.8497f, 138.3978f);
func_167(2796.312f, 3928.316f, 42.6106f, 134.5979f);
}else{
func_167(2730.174f, 3890.294f, 42.435f, 54.6f);
func_167(2714.633f, 3918.283f, 42.938f, 16f);
func_167(2716.533f, 3910.15f, 42.699f, 19.6f);
func_167(2757.499f, 3874.045f, 42.724f, 64.8f);
func_167(2747.99f, 3878.676f, 42.561f, 62.8f);
func_167(2738.337f, 3884.314f, 42.614f, 57.2f);
func_167(2711.836f, 3926.255f, 42.931f, 21.6f);
func_167(2707.586f, 3934.558f, 42.984f, 27.6f);
func_167(2702.361f, 3943.039f, 42.951f, 30.6f);
func_167(2696.696f, 3951.317f, 43.012f, 34.8f);
func_167(2766.778f, 3868.911f, 42.822f, 59.8f);
func_167(2775.397f, 3863.697f, 43.204f, 54.2f);
func_167(2738.841f, 3869.927f, 42.492f, 242.799f);
func_167(2746.49f, 3865.861f, 42.808f, 239.599f);
func_167(2754.829f, 3861.039f, 42.906f, 240.799f);
func_167(2762.616f, 3856.316f, 42.895f, 240.799f);
func_167(2770.463f, 3851.383f, 43.216f, 233.199f);
func_167(2778.129f, 3844.914f, 43.26f, 229.199f);
func_167(2785.341f, 3837.918f, 43.141f, 224.999f);
func_167(2730.65f, 3875.186f, 42.437f, 231.999f);
func_167(2724.14f, 3880.885f, 42.469f, 224.599f);
func_167(2718.541f, 3887.508f, 42.614f, 217.399f);
func_167(2783.246f, 3857.409f, 43.175f, 45.199f);
func_167(2790.716f, 3850.631f, 43.125f, 45.199f);
func_167(2690.655f, 3959.246f, 43.255f, 40.199f);
func_167(2797.912f, 3842.523f, 43.166f, 40.199f);
func_167(2791.836f, 3830.845f, 43.14f, 221.999f);
func_167(2712.952f, 3894.566f, 42.484f, 14.799f);
}
break;
case 92:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(3374.661f, 5559.709f, 12.3726f, 138.7999f);
func_167(3366.365f, 5569.449f, 13.9704f, 112.8f);
func_167(3358.493f, 5581.463f, 16.1783f, 112.8f);
func_167(3356.705f, 5595.363f, 15.4029f, 112.8f);
func_167(3336.662f, 5552.357f, 19.491f, 249.6f);
func_167(3336.791f, 5567.825f, 20.432f, 249.6f);
func_167(3335.259f, 5599.046f, 22.4606f, 249.6f);
func_167(3336.811f, 5613.029f, 22.2159f, 249.6f);
func_167(3354.696f, 5609.699f, 15.9453f, 111.3999f);
func_167(3354.006f, 5624.206f, 16.018f, 111.3999f);
}else{
func_167(3372.053f, 5506.134f, 20.8174f, 99.5999f);
func_167(3374.923f, 5520.177f, 20.3207f, 86f);
func_167(3350.643f, 5490.432f, 18.8423f, 139.9997f);
func_167(3364.189f, 5502.98f, 19.648f, 125.7999f);
func_167(3354.101f, 5484.773f, 19.619f, 116.399f);
func_167(3365.919f, 5519.949f, 18.8008f, 102.9988f);
func_167(3341.889f, 5506.809f, 19.584f, 161.199f);
func_167(3338.581f, 5497.709f, 19.376f, 161.199f);
func_167(3335.674f, 5489.348f, 19.542f, 161.199f);
func_167(3332.019f, 5479.563f, 19.738f, 150.998f);
func_167(3327.404f, 5470.857f, 19.302f, 159.398f);
func_167(3323.903f, 5461.49f, 18.492f, 156.398f);
func_167(3320.016f, 5452.957f, 17.834f, 153.198f);
func_167(3315.782f, 5444.61f, 17.115f, 150.798f);
func_167(3335.451f, 5455.723f, 18.2323f, 162.1979f);
func_167(3338.788f, 5464.803f, 18.8631f, 163.7977f);
func_167(3362.476f, 5488.211f, 20.4432f, 108.5979f);
func_167(3371.259f, 5491.274f, 21.5286f, 104.9989f);
func_167(3342.201f, 5517.014f, 19.642f, 170.199f);
func_167(3343.267f, 5526.085f, 18.902f, 175.598f);
func_167(3343.531f, 5536.075f, 18.217f, 178.598f);
func_167(3357.257f, 5496.71f, 18.9729f, 132.5977f);
func_167(3342.346f, 5473.345f, 19.1235f, 159.3987f);
func_167(3347.236f, 5480.447f, 19.4672f, 131.199f);
func_167(3357.623f, 5516.9f, 16.9016f, 118.7991f);
func_167(3361.366f, 5545.886f, 15.5532f, 118.7991f);
func_167(3352.612f, 5541.013f, 16.3238f, 131.999f);
func_167(3343.349f, 5546.494f, 17.8738f, 173.9988f);
}
break;
case 93:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(43.848f, 6845.657f, 13.379f, 247.2f);
func_167(50.379f, 6861.146f, 15.105f, 247.2f);
func_167(32.501f, 6871.777f, 13.3283f, 247.2f);
func_167(38.437f, 6885.796f, 13.3627f, 247.2f);
func_167(55.806f, 6875.081f, 14.824f, 247.2f);
func_167(11.616f, 6877.079f, 11.466f, 247.2f);
func_167(18.954f, 6891.633f, 11.37f, 247.2f);
func_167(26.68f, 6907.587f, 11.869f, 247.2f);
func_167(7.479f, 6907.895f, 12.024f, 247.2f);
func_167(44.9981f, 6901.352f, 11.9426f, 247.2f);
}else{
func_167(35.591f, 6836.608f, 13.288f, 274.4f);
func_167(36.028f, 6830.135f, 13.801f, 270.8f);
func_167(35.114f, 6823.884f, 14.527f, 260.8f);
func_167(48.779f, 6838.693f, 14.337f, 273.6f);
func_167(56.738f, 6821.8f, 15.244f, 244.8f);
func_167(48.377f, 6825.895f, 14.656f, 249.8f);
func_167(49.11f, 6831.439f, 13.991f, 274.8f);
func_167(53.544f, 6818.275f, 16.342f, 243f);
func_167(46.162f, 6821.945f, 15.483f, 249.8f);
func_167(60.129f, 6836.8f, 15.605f, 269.6f);
func_167(40.88f, 6802.952f, 20.113f, 242.6f);
func_167(48.203f, 6799.134f, 20.897f, 244.4f);
func_167(70.449f, 6809.271f, 16.846f, 243f);
func_167(61.436f, 6814.266f, 16.71f, 244.2f);
func_167(56.142f, 6793.458f, 19.806f, 242.6f);
func_167(65.759f, 6791.12f, 18.433f, 276.4f);
func_167(77.305f, 6805.391f, 18.558f, 245.6f);
func_167(85.893f, 6800.243f, 18.535f, 249.8f);
func_167(56.85f, 6780.582f, 18.822f, 297.999f);
func_167(65.636f, 6784.669f, 18.789f, 293.799f);
func_167(74.121f, 6788.498f, 18.739f, 293.799f);
func_167(97.779f, 6796.32f, 19.02f, 276.799f);
func_167(106.76f, 6796.983f, 18.914f, 272.599f);
func_167(112.387f, 6802.858f, 18.994f, 210.599f);
func_167(117.58f, 6802.644f, 18.663f, 209.399f);
func_167(122.481f, 6802.693f, 18.468f, 209.399f);
func_167(127.182f, 6802.686f, 18.218f, 209.399f);
func_167(132.429f, 6801.882f, 17.949f, 209.399f);
}
break;
case 94:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
func_167(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
func_167(-2232.397f, 2274.252f, 31.602f, 296.7993f);
func_167(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
func_167(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
func_167(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
func_167(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
func_167(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
func_167(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
func_167(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
}else{
func_167(-2239.671f, 2390.292f, 10.756f, 189.2002f);
func_167(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
func_167(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
func_167(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
func_167(-2238.044f, 2372.67f, 15.07f, 187.4004f);
func_167(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
func_167(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
func_167(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
func_167(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
func_167(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
func_167(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
func_167(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
func_167(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
func_167(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
func_167(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
func_167(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
func_167(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
func_167(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
func_167(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
func_167(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
func_167(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
func_167(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
func_167(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
func_167(-2255.106f, 2285.415f, 31.617f, 130.3999f);
func_167(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
func_167(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
func_167(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
func_167(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
}
break;
case 95:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(4.0332f, 3378.618f, 41.0822f, 247.1989f);
func_167(38.819f, 3321.2f, 37.0283f, 203.999f);
func_167(26.877f, 3309.062f, 37.93f, 191.9991f);
func_167(15.6727f, 3297.846f, 39.0535f, 191.9991f);
func_167(-24.2865f, 3367.527f, 41.4783f, 264.399f);
func_167(-23.1279f, 3352.254f, 40.52f, 280.399f);
func_167(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
func_167(97.4844f, 3335.385f, 34.6164f, 7.9981f);
func_167(20.409f, 3370.839f, 38.8393f, 235.799f);
func_167(48.457f, 3336.586f, 35.8912f, 270.3979f);
}else{
func_167(25.9869f, 3349.706f, 36.0366f, 273.9994f);
func_167(25.0176f, 3356.915f, 36.4258f, 276.9998f);
func_167(36.2443f, 3351.358f, 36.2386f, 272.5997f);
func_167(35.9352f, 3358.816f, 37.0033f, 276.7998f);
func_167(25.9651f, 3342.673f, 36.2157f, 270.7997f);
func_167(30.027f, 3292.351f, 38.604f, 140.199f);
func_167(49.1614f, 3358.589f, 35.9759f, 263.5988f);
func_167(48.288f, 3352.494f, 35.5841f, 261.1988f);
func_167(23.897f, 3283.152f, 39.381f, 145.399f);
func_167(60.9182f, 3356.21f, 35.8814f, 255.3988f);
func_167(18.723f, 3274.025f, 40.054f, 155.799f);
func_167(59.0177f, 3350.004f, 35.3204f, 255.7989f);
func_167(36.958f, 3298.847f, 38.001f, 127.799f);
func_167(54.165f, 3311.582f, 36.517f, 303.799f);
func_167(61.607f, 3317.105f, 35.916f, 306.999f);
func_167(68.994f, 3323.129f, 35.364f, 308.199f);
func_167(76.266f, 3329.467f, 34.805f, 311.399f);
func_167(82.757f, 3335.915f, 34.344f, 316.598f);
func_167(46.5977f, 3306.196f, 37.1628f, 304.9976f);
func_167(14.664f, 3263.688f, 40.931f, 160.398f);
func_167(50.8234f, 3324.118f, 36.2129f, 305.1976f);
func_167(11.7852f, 3256.101f, 41.7031f, 159.198f);
func_167(89.575f, 3343.311f, 33.932f, 318.398f);
func_167(58.4154f, 3329.423f, 35.6197f, 305.5979f);
func_167(65.3201f, 3334.253f, 35.1903f, 306.5977f);
func_167(72.1063f, 3339.793f, 34.8449f, 308.5977f);
func_167(95.6614f, 3349.917f, 33.696f, 316.1977f);
func_167(85.4387f, 3353.183f, 33.8047f, 317.9978f);
}
break;
case 96:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(2135.708f, 1757.503f, 102.073f, 40.999f);
func_167(2148.674f, 1764.557f, 102.75f, 40.999f);
func_167(2160.511f, 1771.173f, 104.149f, 40.999f);
func_167(2172.842f, 1777.391f, 105.369f, 40.999f);
func_167(2127.938f, 1736.353f, 100.835f, 222.199f);
func_167(2141.682f, 1739.865f, 99.833f, 222.199f);
func_167(2152.786f, 1747.776f, 99.785f, 222.199f);
func_167(2166.356f, 1754.682f, 100.07f, 220.399f);
func_167(2090.66f, 1701.805f, 101.681f, 243.199f);
func_167(2066.149f, 1716.735f, 102.112f, 228.2f);
}else{
func_167(2073.044f, 1725.935f, 102.5096f, 225.2f);
func_167(2077.24f, 1730.299f, 102.5247f, 225.2f);
func_167(2081.68f, 1734.742f, 102.5588f, 225.2f);
func_167(2086.052f, 1739.045f, 102.6618f, 225.2f);
func_167(2090.55f, 1743.53f, 102.6058f, 225.2f);
func_167(2095.295f, 1748.274f, 102.3022f, 225.2f);
func_167(2101.779f, 1721.807f, 101.927f, 225.2f);
func_167(2107.08f, 1727.001f, 101.932f, 225.2f);
func_167(2095.867f, 1716.475f, 101.925f, 225.2f);
func_167(2112.387f, 1732.492f, 101.849f, 225.2f);
func_167(2089.718f, 1710.779f, 101.978f, 225.2f);
func_167(2111.639f, 1717.132f, 100.855f, 225.2f);
func_167(2117.297f, 1722.655f, 100.704f, 225.2f);
func_167(2105.821f, 1711.672f, 101.065f, 225.2f);
func_167(2098.759f, 1704.866f, 101.209f, 225.2f);
func_167(2121.208f, 1713.145f, 99.65f, 225.2f);
func_167(2115.34f, 1707.542f, 99.829f, 225.2f);
func_167(2109.211f, 1702.247f, 100.079f, 225.2f);
func_167(2124.167f, 1704.036f, 98.584f, 225.2f);
func_167(2118.181f, 1698.253f, 98.645f, 225.2f);
func_167(2127.253f, 1694.878f, 97.078f, 225.2f);
func_167(2117.786f, 1738.219f, 101.839f, 225.2f);
func_167(2122.34f, 1728.011f, 100.627f, 225.2f);
func_167(2126.288f, 1718.542f, 99.501f, 225.2f);
func_167(2129.762f, 1709.847f, 98.352f, 225.2f);
func_167(2132.765f, 1700.777f, 96.999f, 225.2f);
func_167(2120.399f, 1689.165f, 97.388f, 225.2f);
func_167(2098.994f, 1747.929f, 102.2403f, 225.2f);
}
break;
case 97:
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_59==0){
func_167(1871.691f, 358.5369f, 162.1067f, 153.1979f);
func_167(1858.966f, 351.2935f, 161.7614f, 166.598f);
func_167(1873.611f, 342.6637f, 161.6936f, 142.998f);
func_167(1887.645f, 343.1557f, 162.1659f, 138.5979f);
func_167(1888.644f, 328.0839f, 161.7489f, 139.398f);
func_167(1898.596f, 315.2232f, 161.4418f, 173.7979f);
func_167(1896.729f, 266.5388f, 161.1619f, 113.5978f);
func_167(1900.167f, 281.3884f, 161.7807f, 115.197f);
func_167(1856.286f, 294.624f, 161.442f, 167.9966f);
func_167(1868.622f, 309.7907f, 162.6084f, 155.1968f);
}else{
func_167(1856.378f, 255.9146f, 162.7158f, 147.6202f);
func_167(1837.279f, 227.3696f, 165.2592f, 164.3995f);
func_167(1835.192f, 219.3931f, 167.5468f, 169.9994f);
func_167(1833.557f, 211.859f, 169.864f, 169.9994f);
func_167(1839.534f, 194.4053f, 171.3841f, 172.9989f);
func_167(1838.289f, 185.8157f, 171.2585f, 174.1989f);
func_167(1837.478f, 177.0607f, 170.7063f, 174.1989f);
func_167(1840.463f, 202.6959f, 170.8702f, 174.1989f);
func_167(1836.296f, 168.7307f, 170.5786f, 174.1989f);
func_167(1835.412f, 159.3162f, 170.4163f, 171.1989f);
func_167(1826.91f, 214.9648f, 172.2502f, 18.7986f);
func_167(1823.805f, 223.0288f, 172.0794f, 21.7986f);
func_167(1820.599f, 231.144f, 172.2987f, 21.7986f);
func_167(1817.245f, 239.1232f, 172.0878f, 21.7986f);
func_167(1814.089f, 247.0423f, 171.7386f, 24.9986f);
func_167(1810.879f, 255.6553f, 171.7517f, 19.3986f);
func_167(1807.729f, 265.4899f, 172.2307f, 15.1986f);
func_167(1823.147f, 197.3122f, 172.235f, 192.3984f);
func_167(1824.641f, 184.4241f, 171.5948f, 183.3985f);
func_167(1825.019f, 171.2314f, 170.5843f, 183.3985f);
func_167(1824.748f, 162.8998f, 170.4961f, 173.1985f);
func_167(1817.345f, 214.6964f, 172.5223f, 203.9982f);
func_167(1813.466f, 222.3717f, 172.3316f, 200.9982f);
func_167(1809.114f, 230.8225f, 172.346f, 205.1983f);
func_167(1805.594f, 239.3896f, 172.0033f, 197.9984f);
func_167(1802.515f, 247.4269f, 171.8964f, 197.9984f);
func_167(1833.982f, 150.4025f, 170.411f, 163.7985f);
func_167(1823.079f, 154.5105f, 170.8194f, 163.7985f);
}
break;
case 123:
case 124:
case 125:
func_153(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
func_153(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
func_153(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
func_153(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
func_153(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
func_153(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
func_153(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
func_153(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
func_153(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
func_153(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
func_153(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
func_153(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
func_153(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
func_153(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
func_153(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
func_153(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
func_153(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
func_153(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
func_153(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
func_153(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
func_153(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
func_153(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
func_153(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
func_153(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
func_153(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
func_153(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
func_153(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
func_153(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
func_153(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
func_153(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
func_153(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
func_153(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
break;
default:
break;
}}


void func_153(struct<3> Param0, float fParam1, int iParam2, bool bParam3){
struct<2> Var0;
struct<2> Var1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
if(!iParam2==0){
func_50(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
fVar2=(Var1.f_1 - Var0.f_1);
if(bParam3){
fVar2=(fVar2 * -1f);
}
fVar2=(fVar2 * 0.5f);
Var3={
0f, fVar2, 0f 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var3) 
};
func_167(Var4, fParam1);
}else{
func_167(Param0, fParam1);
}}


void func_154(int iParam0){
switch (iParam0){
case 83:
func_167(-1133.454f, -3371.672f, 12.945f, 329.799f);
func_167(-1119.748f, -3379.991f, 12.945f, 329.799f);
func_167(-1147.602f, -3363.505f, 12.945f, 329.799f);
func_167(-1161.988f, -3354.852f, 12.945f, 329.799f);
func_167(-1116.563f, -3358.99f, 12.945f, 329.799f);
func_167(-1131.23f, -3350.104f, 12.945f, 329.799f);
func_167(-1145.252f, -3341.608f, 12.945f, 329.799f);
func_167(-1115.202f, -3339.265f, 12.945f, 329.799f);
func_167(-1129.559f, -3330.697f, 12.945f, 329.799f);
func_167(-1114.664f, -3320.954f, 12.945f, 329.799f);
func_167(-1199.923f, -3369.502f, 12.945f, 350.399f);
func_167(-1212.069f, -3363.568f, 12.945f, 350.399f);
func_167(-1223.637f, -3356.694f, 12.945f, 350.399f);
func_167(-1102.284f, -3420.613f, 12.945f, 354.599f);
func_167(-1091.131f, -3427.396f, 12.945f, 354.599f);
func_167(-1079.372f, -3434.306f, 12.945f, 354.599f);
func_167(-1067.498f, -3441.878f, 13.114f, 354.599f);
func_167(-1055.714f, -3448.819f, 12.977f, 354.599f);
func_167(-1043.37f, -3455.796f, 13.146f, 354.599f);
func_167(-1017.023f, -3382.777f, 12.8401f, 330.6f);
func_167(-1010.608f, -3386.103f, 12.8401f, 330.6f);
func_167(-1004.658f, -3389.823f, 12.8401f, 330.6f);
func_167(-998.3798f, -3393.644f, 12.8401f, 330.6f);
func_167(-991.5242f, -3397.297f, 12.8401f, 330.6f);
func_167(-985.0826f, -3401.247f, 12.8401f, 330.6f);
func_167(-978.2733f, -3405.031f, 12.8401f, 330.6f);
func_167(-971.724f, -3409.109f, 12.8401f, 330.6f);
func_167(-964.4719f, -3413.202f, 13.1463f, 330.6f);
func_167(-1022.94f, -3392.372f, 12.8401f, 330.6f);
func_167(-1016.219f, -3395.82f, 12.8401f, 330.6f);
func_167(-1009.873f, -3399.143f, 12.8401f, 330.6f);
func_167(-1003.436f, -3402.982f, 12.8401f, 330.6f);
func_167(-997.0872f, -3406.928f, 12.8401f, 330.6f);
func_167(-990.2305f, -3410.548f, 12.8401f, 330.6f);
func_167(-983.4429f, -3414.093f, 12.8401f, 330.6f);
func_167(-976.8809f, -3417.846f, 12.8401f, 330.6f);
func_167(-969.4039f, -3421.727f, 13.1463f, 330.6f);
func_167(-1028.251f, -3401.834f, 12.8401f, 330.6f);
func_167(-1021.631f, -3405.433f, 12.8401f, 330.6f);
func_167(-1015.209f, -3408.563f, 12.8401f, 330.6f);
func_167(-1008.81f, -3412.484f, 12.8401f, 330.6f);
func_167(-1002.277f, -3415.987f, 12.8401f, 330.6f);
func_167(-995.7023f, -3419.97f, 12.8401f, 330.6f);
func_167(-989.1453f, -3423.988f, 12.8401f, 330.6f);
func_167(-982.6298f, -3427.981f, 12.8401f, 330.6f);
func_167(-974.9305f, -3431.833f, 13.1463f, 330.6f);
break;
case 84:
func_167(-1356.991f, -3242.228f, 12.945f, 330f);
func_167(-1369.313f, -3234.758f, 12.945f, 330f);
func_167(-1381.751f, -3227.408f, 12.945f, 330f);
func_167(-1394.302f, -3220.021f, 12.945f, 330f);
func_167(-1354.339f, -3223.129f, 12.945f, 330f);
func_167(-1366.302f, -3215.809f, 12.945f, 330f);
func_167(-1378.492f, -3208.645f, 12.945f, 330f);
func_167(-1350.322f, -3203.405f, 12.945f, 330f);
func_167(-1362.684f, -3196.451f, 12.945f, 330f);
func_167(-1347.089f, -3182.69f, 12.945f, 330f);
func_167(-1452.642f, -3222.367f, 12.945f, 347.799f);
func_167(-1464.229f, -3215.108f, 12.945f, 347.799f);
func_167(-1476.133f, -3207.652f, 12.945f, 347.799f);
func_167(-1488.295f, -3200.033f, 12.945f, 347.799f);
func_167(-1336.877f, -3272.344f, 12.945f, 8.199f);
func_167(-1323.381f, -3279.614f, 12.945f, 8.199f);
func_167(-1309.671f, -3287.749f, 12.945f, 8.199f);
func_167(-1296.963f, -3294.511f, 12.945f, 8.199f);
func_167(-1501.978f, -3193.849f, 12.945f, 350.599f);
func_167(-1344.716f, -3288.333f, 12.9445f, 331.2f);
func_167(-1338.141f, -3290.335f, 12.9445f, 331.2f);
func_167(-1331.473f, -3294.178f, 12.9445f, 331.2f);
func_167(-1324.921f, -3297.998f, 12.9445f, 331.2f);
func_167(-1318.129f, -3301.957f, 12.9445f, 331.2f);
func_167(-1350.466f, -3294.226f, 12.9445f, 331.2f);
func_167(-1343.482f, -3297.576f, 12.9445f, 331.2f);
func_167(-1336.398f, -3302.456f, 12.9445f, 331.2f);
func_167(-1329.82f, -3306.82f, 12.945f, 331.2f);
func_167(-1322.761f, -3310.353f, 12.945f, 331.2f);
func_167(-1316.587f, -3314.556f, 12.945f, 331.2f);
func_167(-1326.538f, -3318.499f, 12.945f, 331.2f);
func_167(-1335.74f, -3313.678f, 12.945f, 331.2f);
func_167(-1350.848f, -3302.619f, 12.9446f, 331.2f);
func_167(-1357.961f, -3306.886f, 12.945f, 331.2f);
func_167(-1335.202f, -3322.428f, 12.9452f, 331.2f);
func_167(-1351.401f, -3311.566f, 12.9452f, 331.2f);
func_167(-1344.255f, -3305.965f, 12.9451f, 331.2f);
func_167(-1299.832f, -3305.573f, 12.945f, 331.2f);
func_167(-1293.414f, -3309.413f, 12.945f, 331.2f);
func_167(-1286.835f, -3313.157f, 12.945f, 331.2f);
func_167(-1303.988f, -3313.1f, 12.945f, 331.2f);
func_167(-1297.402f, -3316.699f, 12.945f, 331.2f);
func_167(-1290.969f, -3320.519f, 12.945f, 331.2f);
func_167(-1308.27f, -3320.612f, 12.945f, 331.2f);
func_167(-1301.968f, -3324.714f, 12.945f, 331.2f);
func_167(-1295.483f, -3328.422f, 12.945f, 331.2f);
break;
case 85:
func_167(-2039.992f, 3132.191f, 31.81f, 149.399f);
func_167(-2025.075f, 3128.63f, 31.81f, 197.599f);
func_167(-2049.589f, 3142.464f, 31.81f, 109.199f);
func_167(-2088.648f, 3081.327f, 31.81f, 150.599f);
func_167(-2070.669f, 3111.575f, 31.81f, 123.399f);
func_167(-2053.385f, 3109.703f, 31.81f, 150.599f);
func_167(-2044.448f, 3094.012f, 31.81f, 181.799f);
func_167(-2071.825f, 3093.477f, 31.81f, 150.599f);
func_167(-2060.579f, 3085.924f, 31.81f, 150.599f);
func_167(-2062.712f, 3066.073f, 31.81f, 150.599f);
func_167(-2094.385f, 3190.445f, 31.81f, 117.799f);
func_167(-2083.056f, 3182.885f, 31.81f, 117.799f);
func_167(-2071.578f, 3175.554f, 31.81f, 117.799f);
func_167(-2120.249f, 3173.97f, 31.81f, 25.199f);
func_167(-2067.547f, 3146.325f, 31.81f, 14.998f);
func_167(-2080.506f, 3154.591f, 31.81f, 15.798f);
func_167(-2093.278f, 3159.793f, 31.81f, 14.798f);
func_167(-2106.614f, 3167.605f, 31.81f, 21.198f);
func_167(-2106.347f, 3196.902f, 31.81f, 117.799f);
func_167(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
func_167(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
func_167(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
func_167(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
func_167(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
func_167(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
func_167(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
func_167(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
func_167(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
func_167(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
func_167(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
func_167(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
func_167(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
func_167(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
func_167(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
func_167(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
func_167(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
func_167(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
func_167(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
func_167(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
func_167(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
func_167(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
func_167(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
func_167(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
func_167(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
func_167(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
func_167(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
break;
case 86:
func_167(-1885.187f, 3095.344f, 31.81f, 150.2f);
func_167(-1898.637f, 3072.816f, 31.811f, 150.2f);
func_167(-1886.469f, 3065.78f, 31.811f, 150.2f);
func_167(-1874.621f, 3058.437f, 31.81f, 150.2f);
func_167(-1862.818f, 3051.244f, 31.81f, 150.2f);
func_167(-1915.317f, 3041.652f, 31.811f, 150.2f);
func_167(-1896.724f, 2997.848f, 31.81f, 150.2f);
func_167(-1932.975f, 3011.781f, 31.81f, 150.2f);
func_167(-1875.668f, 3034.438f, 31.811f, 150.2f);
func_167(-1886.144f, 3016.285f, 31.81f, 150.2f);
func_167(-1913.706f, 3104.196f, 31.81f, 118.599f);
func_167(-1925.44f, 3112.236f, 31.81f, 118.599f);
func_167(-1938.08f, 3119.383f, 31.81f, 118.599f);
func_167(-1927.822f, 3072.679f, 31.81f, 13.399f);
func_167(-1940.575f, 3079.031f, 31.81f, 13.399f);
func_167(-1953.344f, 3084.888f, 31.81f, 13.399f);
func_167(-1965.91f, 3091.929f, 31.81f, 13.399f);
func_167(-1978.86f, 3100.029f, 31.81f, 13.399f);
func_167(-1950.928f, 3126.457f, 31.81f, 118.999f);
func_167(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
func_167(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
func_167(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
func_167(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
func_167(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
func_167(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
func_167(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
func_167(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
func_167(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
func_167(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
func_167(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
func_167(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
func_167(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
func_167(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
func_167(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
func_167(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
func_167(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
func_167(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
func_167(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
func_167(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
func_167(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
func_167(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
func_167(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
func_167(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
func_167(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
func_167(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
func_167(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
break;
case 87:
func_167(-2484.323f, 3249.294f, 31.828f, 151f);
func_167(-2495.313f, 3255.746f, 31.828f, 151f);
func_167(-2472.644f, 3242.684f, 31.828f, 151f);
func_167(-2506.313f, 3262.27f, 31.823f, 151f);
func_167(-2461.494f, 3235.93f, 31.828f, 151f);
func_167(-2505.602f, 3238.049f, 31.828f, 151f);
func_167(-2481.937f, 3224.8f, 31.828f, 151f);
func_167(-2516.813f, 3244.266f, 31.823f, 151f);
func_167(-2470.03f, 3217.899f, 31.828f, 151f);
func_167(-2493.933f, 3231.308f, 31.828f, 151f);
func_167(-2443.467f, 3227.753f, 31.828f, 175.8f);
func_167(-2431.365f, 3220.9f, 31.828f, 175.8f);
func_167(-2419.883f, 3214.708f, 31.828f, 175.8f);
func_167(-2501.903f, 3272.865f, 31.822f, 123.999f);
func_167(-2513.555f, 3280.176f, 31.817f, 123.999f);
func_167(-2524.776f, 3287.276f, 31.973f, 123.999f);
func_167(-2407.718f, 3208.055f, 31.827f, 176.199f);
func_167(-2395.689f, 3201.125f, 31.827f, 176.199f);
func_167(-2383.498f, 3194.211f, 31.833f, 176.199f);
func_167(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
func_167(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
func_167(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
func_167(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
func_167(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
func_167(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
func_167(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
func_167(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
func_167(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
func_167(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
func_167(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
func_167(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
func_167(-2383.986f, 3223.995f, 31.986f, 150.5996f);
func_167(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
func_167(-2370.524f, 3215.946f, 32.002f, 150.5996f);
func_167(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
func_167(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
func_167(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
func_167(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
func_167(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
func_167(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
func_167(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
func_167(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
func_167(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
func_167(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
func_167(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
func_167(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
break;
default:
break;
}}

int func_155(int iParam0){
switch (iParam0){
case joaat("microlight"):
case joaat("havok"):
case joaat("seabreeze"):
case joaat("rogue"):
case joaat("pyro"):
case joaat("buzzard"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("volatus"):
case joaat("cuban800"):
case joaat("besra"):
case joaat("duster"):
case joaat("stunt"):
case joaat("velum"):
case joaat("velum2"):
case joaat("vestra"):
case joaat("lazer"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("starling"):
case joaat("conada"):
return 1;
default:
}
return 0;
}


void func_156(int iParam0){
switch (iParam0){
case 83:
case 84:
func_167(-947.712f, -3367.704f, 12.944f, 60f);
func_167(-904.692f, -3293.072f, 12.944f, 60f);
func_167(-863.71f, -3221.978f, 12.944f, 60f);
func_167(-966.418f, -3162.773f, 12.944f, 60f);
func_167(-1007.435f, -3233.93f, 12.944f, 60f);
func_167(-1050.455f, -3308.559f, 12.944f, 60f);
func_167(-1145.673f, -3253.456f, 12.944f, 60f);
func_167(-1098.386f, -3181.428f, 12.944f, 60f);
func_167(-1060.474f, -3108.903f, 12.944f, 60f);
func_167(-1155.391f, -3053.632f, 12.944f, 60f);
func_167(-1196.114f, -3125.146f, 12.948f, 60f);
func_167(-1235.552f, -3201.86f, 12.944f, 60f);
func_167(-1344.446f, -3139.177f, 12.944f, 60f);
func_167(-1301.308f, -3064.341f, 12.944f, 60f);
func_167(-1260.135f, -2992.912f, 12.944f, 60f);
func_167(-1364.244f, -2932.9f, 12.98f, 60f);
func_167(-1405.284f, -3004.108f, 12.96f, 60f);
func_167(-1448.29f, -3078.72f, 12.95f, 60f);
func_167(-1535.732f, -3028.318f, 12.945f, 60f);
func_167(-1492.639f, -2953.558f, 12.945f, 60f);
func_167(-1451.506f, -2882.2f, 12.944f, 60f);
func_167(-1553.927f, -2823.12f, 13.002f, 60f);
func_167(-1595.097f, -2894.571f, 12.944f, 60f);
func_167(-1637.836f, -2968.714f, 12.945f, 60f);
func_167(-1740.971f, -2911.484f, 12.944f, 330f);
func_167(-1696.293f, -2833.978f, 12.944f, 330f);
func_167(-1651.502f, -2756.273f, 12.945f, 330f);
func_167(-1588.258f, -2647.575f, 12.944f, 330f);
func_167(-1536.862f, -2681.378f, 12.945f, 330f);
func_167(-1529.025f, -2544.485f, 12.944f, 330f);
break;
case 85:
case 86:
case 87:
func_167(-1970.422f, 2825.696f, 31.81f, 60.4f);
func_167(-2033.307f, 2855.526f, 31.83f, 60.4f);
func_167(-2091.018f, 2888.691f, 31.81f, 60.4f);
func_167(-2206.717f, 2955.363f, 31.81f, 60.4f);
func_167(-2268.817f, 2990.846f, 31.81f, 60.4f);
func_167(-2324.039f, 3023.154f, 31.811f, 60.4f);
func_167(-2435.806f, 3087.705f, 31.824f, 60.4f);
func_167(-2543.753f, 3149.909f, 31.821f, 60.4f);
func_167(-1944.848f, 2898.798f, 31.81f, 125.398f);
func_167(-1978.705f, 2924.367f, 31.846f, 151.999f);
func_167(-2064.849f, 2955.153f, 31.867f, 151.199f);
func_167(-2106.165f, 2980.687f, 31.81f, 104.599f);
func_167(-2302.367f, 3088.676f, 31.814f, 150.598f);
func_167(-2152.113f, 2924.162f, 31.81f, 60.198f);
func_167(-2488.232f, 3118.146f, 31.822f, 59.798f);
func_167(-2277.922f, 3133.756f, 31.811f, 120.598f);
func_167(-2604.776f, 3185.186f, 31.812f, 59.998f);
func_167(-2608.107f, 3305.049f, 31.812f, 60.198f);
func_167(-2718.936f, 3323.203f, 31.81f, 201.198f);
func_167(-2658.718f, 3216.499f, 31.812f, 59.998f);
func_167(-2380.372f, 3055.341f, 31.826f, 60.4f);
func_167(-2790.616f, 3286.24f, 31.812f, 240.397f);
func_167(-2770.946f, 3322.605f, 31.812f, 240.397f);
func_167(-2678.805f, 3339.186f, 31.812f, 199.597f);
func_167(-2743.882f, 3224.094f, 31.81f, 303.397f);
func_167(-2701.354f, 3203.092f, 31.994f, 328.397f);
func_167(-2249.816f, 2944.609f, 31.937f, 330.196f);
func_167(-2586.579f, 3137.286f, 31.935f, 330.196f);
func_167(-2134.76f, 2878.728f, 31.81f, 330.196f);
func_167(-1949.075f, 2861.21f, 31.811f, 58.798f);
break;
default:
break;
}}

int func_157(int iParam0){
switch (iParam0){
case joaat("hydra"):
case joaat("dodo"):
case joaat("mammatus"):
case joaat("annihilator"):
case joaat("tula"):
case joaat("hunter"):
case joaat("mogul"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("shamal"):
case joaat("savage"):
case joaat("luxor"):
case joaat("luxor2"):
case joaat("nimbus"):
case joaat("swift"):
case joaat("swift2"):
case joaat("valkyrie"):
case joaat("titan"):
case joaat("skylift"):
case joaat("miljet"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("alkonost"):
return 1;
default:
}
return 0;
}

int func_158(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f){
return 1;
}
return 0;
}

int func_159(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(vdist(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f){
return 1;
}
return 0;
}

int func_160(int iParam0, int iParam1){
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

int func_161(struct<2> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
iVar2=0;
fVar3=50f;
iVar0=1;
while (iVar0 <=130){
if(iVar2 < *uParam2){
iVar1=0;
iVar1=0;
while (iVar1 < 2){
if(vdist(Param0.f_0, Param0.f_1, 0f, Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312228[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3){
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=0;
iVar2++;
iVar1=99;
}
iVar1++;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 162){
fVar3=50f;
if(iVar0 >=83 && iVar0 <=87){
if(func_138(iVar0)){
fVar3=300f;
}else{
fVar3=0f;
}}
if(iVar0 >=89 && iVar0 <=97){
if(func_162(iVar0)){
fVar3=75f;
}else{
fVar3=0f;
}}
if(iVar0 >=123 && iVar0 <=125){
fVar3=150f;
}
if(iVar2 < *uParam2){
fVar4=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950108.f_542[iVar0 /*3*/], Global_1950108.f_542[iVar0 /*3*/].f_1, 0f);
if(fVar4 < fVar3){
(*uParam2)[iVar2]=iVar0;
(*uParam3)[iVar2]=1;
iVar2++;
}}
iVar0++;
}
if(iVar2 > 0){
return 1;
}
return 0;
}

int func_162(int iParam0){
int iVar0;
int iVar1;
iVar0=func_163(iParam0);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_300==iVar0){
return 1;
}
iVar1=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
if(iVar1 !=func_33()){
if(Global_1853910[iVar1 /*862*/].f_267.f_300==iVar0){
return 1;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7==iParam0){
return 1;
}
return 0;
}

int func_163(int iParam0){
switch (iParam0){
case 89:
return 1;
break;
case 90:
return 2;
break;
case 91:
return 3;
break;
case 92:
return 4;
break;
case 93:
return 5;
break;
case 94:
return 6;
break;
case 95:
return 7;
break;
case 96:
return 8;
break;
case 97:
return 9;
break;
}
return 0;
}

int func_164(int iParam0){
if((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 1;
}
return 0;
}


void func_165(int iParam0){
switch (iParam0){
case 78:
func_167(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
func_167(-612.8933f, 692.116f, 148.7577f, 79.1005f);
func_167(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
func_167(-639.3558f, 696.9992f, 150.5134f, 77.481f);
break;
case 79:
func_167(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_167(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_167(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_167(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 82:
func_167(382.9244f, 443.8122f, 142.9934f, 78.3408f);
func_167(391.2023f, 442.4812f, 142.5089f, 82.2125f);
func_167(400.1477f, 441.0816f, 142.0776f, 83.4259f);
func_167(414.2964f, 439.2628f, 141.5056f, 80.8689f);
break;
case 81:
func_167(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
func_167(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
func_167(-1283.894f, 467.2136f, 95.4036f, 95.058f);
func_167(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
break;
case 73:
func_167(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
func_167(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
func_167(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
func_167(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
break;
case 75:
func_167(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
func_167(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_167(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_167(-668.575f, 668.7567f, 149.4004f, 69.8844f);
break;
case 76:
func_167(-668.575f, 668.7567f, 149.4004f, 69.8844f);
func_167(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
func_167(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
func_167(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
break;
case 77:
func_167(128.4334f, 578.7522f, 182.2934f, 106.5458f);
func_167(97.7791f, 576.8907f, 181.5599f, 91.3539f);
func_167(83.5896f, 576.4791f, 181.0832f, 89.7262f);
func_167(69.9599f, 575.9902f, 180.5019f, 91.4926f);
break;
case 80:
func_167(-872.1293f, 698.7591f, 148.5084f, 339.673f);
func_167(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
func_167(-907.3458f, 695.8158f, 150.396f, 270.6491f);
func_167(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
break;
case 87:
if(func_166()){
func_167(-1608.297f, -556.875f, 33.406f, 310f);
func_167(-1616.095f, -563.402f, 33.049f, 309.4f);
func_167(-1560.29f, -531.69f, 34.576f, 35.3994f);
func_167(-1555.303f, -538.781f, 34.044f, 35.3994f);
}else{
func_167(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
func_167(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
func_167(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
func_167(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
func_167(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
func_167(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
func_167(-1611.769f, -601.588f, 31.2908f, 50.7362f);
func_167(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
}
break;
case 88:
if(func_166()){
func_167(-1402.362f, -511.396f, 30.888f, 35.4f);
func_167(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
func_167(-1407.634f, -503.839f, 31.35f, 35.4f);
func_167(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
}else{
func_167(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
func_167(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
func_167(-1346.236f, -523.9114f, 30.6f, 124.7302f);
func_167(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
func_167(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
func_167(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
func_167(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
func_167(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
}
break;
case 89:
if(func_166()){
func_167(-102.737f, -597.379f, 35.053f, 160.999f);
func_167(-97.793f, -589.568f, 35.082f, 134.799f);
func_167(-110.357f, -619.402f, 35.055f, 160.599f);
func_167(-112.561f, -627.723f, 35.046f, 165.399f);
}else{
func_167(-108.2604f, -613.6386f, 35.055f, 160.8063f);
func_167(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
func_167(-112.84f, -629.6357f, 35.0662f, 174.9843f);
func_167(-98.7403f, -590.3209f, 35.075f, 139.7632f);
func_167(-98.3748f, -612.642f, 35.137f, 161.1124f);
func_167(-92.595f, -595.4065f, 35.1888f, 161.3083f);
func_167(-104.4742f, -630.1472f, 35.1396f, 161.184f);
func_167(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
}
break;
case 90:
if(func_166()){
func_167(-59.349f, -779.238f, 43.134f, 228.398f);
func_167(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
func_167(-65.212f, -772.66f, 43.151f, 219.398f);
func_167(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
}else{
func_167(-59.684f, -779.4568f, 43.114f, 228.7591f);
func_167(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
func_167(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
func_167(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
func_167(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
func_167(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
func_167(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
func_167(-9.239f, -773.0505f, 43.0788f, 318.0367f);
}
break;
case 91:
func_167(246.5035f, -1798.749f, 26.1131f, 212.5996f);
func_167(247.8968f, -1797.017f, 26.1131f, 212.5996f);
func_167(249.3848f, -1795.374f, 26.1131f, 212.5996f);
func_167(250.8498f, -1793.695f, 26.1131f, 212.5996f);
func_167(262.9285f, -1784.205f, 26.1131f, 164.5991f);
func_167(266.8129f, -1787.476f, 26.1131f, 164.5991f);
func_167(264.814f, -1785.801f, 26.1131f, 164.5991f);
func_167(269.0069f, -1789.16f, 26.1131f, 164.5991f);
break;
case 92:
func_167(-1464.5f, -927.9f, 9f, 296.7991f);
func_167(-1466f, -926.1f, 9f, 296.7991f);
func_167(-1467.9f, -924.7f, 9f, 296.7991f);
func_167(-1469.7f, -923.7f, 9f, 296.7991f);
func_167(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
func_167(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
func_167(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
func_167(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
break;
case 93:
func_167(30.0784f, -1024.16f, 28.4469f, 234.5994f);
func_167(29.1695f, -1026.719f, 28.4453f, 234.5994f);
func_167(28.2538f, -1029.296f, 28.4421f, 234.5994f);
func_167(27.3737f, -1031.767f, 28.3937f, 234.5994f);
func_167(32.6932f, -1017.063f, 28.4531f, 234.5994f);
func_167(33.672f, -1014.399f, 28.4552f, 234.5994f);
func_167(37.488f, -1014.344f, 28.4781f, 175.5986f);
func_167(39.4909f, -1015.097f, 28.484f, 175.5986f);
break;
case 94:
func_167(45.0033f, 2784.392f, 56.8782f, 103.5999f);
func_167(43.316f, 2785.903f, 56.8782f, 103.5999f);
func_167(41.6126f, 2787.36f, 56.8782f, 103.5999f);
func_167(39.9584f, 2788.773f, 56.8782f, 103.5999f);
func_167(35.2347f, 2792.135f, 56.8781f, 208.7997f);
func_167(33.7771f, 2790.379f, 56.8781f, 208.7997f);
func_167(30.7578f, 2786.8f, 56.8781f, 208.7997f);
func_167(29.3121f, 2785.045f, 56.8745f, 208.7997f);
break;
case 95:
func_167(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
func_167(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
func_167(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
func_167(-337.675f, 6074.252f, 30.2727f, 152.9999f);
func_167(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
func_167(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
func_167(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
func_167(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
break;
case 96:
func_167(1738.422f, 3716.779f, 33.0787f, 6.9999f);
func_167(1736.207f, 3715.989f, 33.094f, 6.9999f);
func_167(1748.442f, 3714.17f, 33.0889f, 39.399f);
func_167(1750.475f, 3715.007f, 33.1067f, 39.399f);
func_167(1747.18f, 3721.102f, 33.007f, 95.199f);
func_167(1746.413f, 3723.255f, 32.9738f, 95.199f);
func_167(1740.67f, 3717.613f, 33.0616f, 8.199f);
func_167(1733.937f, 3715.08f, 33.1236f, 8.199f);
break;
case 97:
func_167(947.9371f, -1452.737f, 30.143f, 331.5991f);
func_167(950.2141f, -1452.826f, 30.1364f, 331.5991f);
func_167(952.4588f, -1452.882f, 30.129f, 331.5991f);
func_167(954.6608f, -1452.869f, 30.1303f, 331.5991f);
func_167(935.1006f, -1452.701f, 30.1907f, 316.999f);
func_167(932.5459f, -1452.579f, 30.2194f, 316.999f);
func_167(929.9319f, -1452.567f, 30.2647f, 316.999f);
func_167(927.4857f, -1452.446f, 30.3167f, 316.999f);
break;
case 98:
func_167(186.6051f, 306.8702f, 104.389f, 162.3999f);
func_167(184.3881f, 306.7666f, 104.3845f, 162.3999f);
func_167(182.1681f, 306.6823f, 104.375f, 162.3999f);
func_167(183.3219f, 296.2871f, 104.3707f, 350.7995f);
func_167(180.9933f, 296.3411f, 104.3704f, 350.7995f);
func_167(178.6569f, 296.4709f, 104.3701f, 350.7995f);
func_167(195.1475f, 304.4284f, 104.4644f, 77.3989f);
func_167(195.0814f, 301.8218f, 104.5287f, 77.3989f);
break;
case 99:
func_167(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
func_167(-33.3895f, -199.7716f, 51.355f, 5.3995f);
func_167(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
func_167(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
func_167(-17.9628f, -206.2525f, 51.3702f, 29.399f);
func_167(-14.8043f, -207.5648f, 51.4707f, 29.399f);
func_167(-11.8482f, -208.6405f, 51.5633f, 29.399f);
func_167(-9.1304f, -209.4894f, 51.6472f, 29.399f);
break;
case 100:
func_167(2478.52f, 4082.137f, 36.8208f, 227.5999f);
func_167(2477.557f, 4079.946f, 36.8014f, 227.5999f);
func_167(2465.123f, 4081.35f, 37.0655f, 167.4f);
func_167(2463.017f, 4082.271f, 37.0653f, 167.4f);
func_167(2467.7f, 4080.332f, 37.0649f, 167.4f);
func_167(2469.587f, 4079.538f, 37.061f, 167.4f);
func_167(2481.354f, 4088.553f, 36.9131f, 209.4f);
func_167(2482.442f, 4091.023f, 36.9472f, 209.4f);
break;
case 101:
func_167(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
func_167(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
func_167(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
func_167(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
func_167(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
func_167(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
func_167(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
func_167(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
break;
case 102:
func_167(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
func_167(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
func_167(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
func_167(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
func_167(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
func_167(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
func_167(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
func_167(-1127.039f, -1564.395f, 3.292f, 168.9988f);
break;
default:
break;
}}


bool func_166(){
return Global_2683864.f_17;
}


void func_167(struct<3> Param0, float fParam1){
if(Global_2635559.f_1754 < 101){
if(vmag(Param0) <=0.01f){
return;
}
Global_2635559.f_1755[Global_2635559.f_1754 /*4*/]={
Param0 
};
Global_2635559.f_1755[Global_2635559.f_1754 /*4*/].f_3=fParam1;
Global_2635559.f_1754++;
}}

int func_168(struct<3> Param0){
int iVar0;
if(vdist(Global_2635559.f_2904, Param0) < Global_2635559.f_2912){
return Global_2635559.f_2907;
}
Global_2635559.f_2904={
Param0 
};
iVar0=0;
while (iVar0 < 32){
if(Param0.f_2 <=0f){
Param0.f_2=((Global_2642883[iVar0 /*7*/].f_2 + Global_2642883[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_105(Param0, &(Global_2642883[iVar0 /*7*/]))){
Global_2635559.f_2907=iVar0;
return iVar0;
}
iVar0++;
}
Global_2635559.f_2907=-1;
return -1;
}

int func_169(){
if(MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2684801.f_6436){
return 0;
}
return 0;
}

int func_170(struct<2> Param0, var uParam1, bool bParam2, float fParam3){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=0;
iVar0=83;
while (iVar0 <=84 + 1){
if(bParam2){
if(func_138(iVar0)){
fVar1=fParam3;
}else{
fVar1=0f;
}}else{
fVar1=fParam3;
}
fVar2=vdist(Param0.f_0, Param0.f_1, 0f, Global_1950108.f_542[iVar0 /*3*/], Global_1950108.f_542[iVar0 /*3*/].f_1, 0f);
if(fVar2 < fVar1){
iVar3++;
}
iVar0++;
}
if(iVar3 > 0){
return 1;
}
return 0;
}


void func_171(){
int iVar0;
iVar0=0;
while (iVar0 < 30){
Global_2635559.f_2737[iVar0 /*3*/]={
0f, 0f, 0f 
};
iVar0++;
}}

int func_172(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
Var1={
*uParam0 
};
iVar0=0;
while (iVar0 < 2){
if(Var1.f_2 <=0f){
Var1.f_2=((Global_2642839[iVar0 /*7*/].f_2 + Global_2642839[iVar0 /*7*/].f_3.f_2) * 0.5f);
}
if(func_105(Var1, &(Global_2642839[iVar0 /*7*/]))){
if(bParam1){
func_116(&Var1, Global_2642839[iVar0 /*7*/], Global_2642839[iVar0 /*7*/].f_3, Global_2642839[iVar0 /*7*/].f_6, 1036831949, 0);
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

int func_173(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_177(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_176(Param0, 1008981770)){
if(!func_122(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_122(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_175(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_174(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_122(&Var1, 0, 0, 0, 1)){
if(!func_122(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__174(var uParam0){
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

int func_175(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_109(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_176(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_109(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_177(bool bParam0, bool bParam1){
if(func_179() !=0){
return func_178(bParam0) !=0;
}
return func_87(bParam0, bParam1, 0);
}

int func_178(bool bParam0){
if(func_2566(bParam0, 0, 1)){
return Global_2657589[bParam0 /*466*/].f_1;
}
return 0;
}

int func_179(){
return Global_32163;
}

int func_180(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}


void func_181(){
int iVar0;
struct<4> Var1;
iVar0=0;
while (iVar0 < 101){
Global_2635559.f_1755[iVar0 /*4*/]={
Var1 
};
iVar0++;
}
Global_2635559.f_1754=0;
}


void func_182(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_691[iVar0])){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_691[iVar0]){
if(!Global_2635559.f_687[iVar0]==-1){
if(NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635559.f_687[iVar0])){
NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635559.f_687[iVar0]);
Global_2635559.f_687[iVar0]=-1;
}else{
Global_2635559.f_687[iVar0]=-1;
}}}}elseif(!Global_2635559.f_687[iVar0]==-1){
Global_2635559.f_687[iVar0]=-1;
}
iVar0++;
}}

int func_183(){
if(!Global_2635559.f_606==0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_611) < func_180(0)){
return 1;
}
return 0;
}

int func_184(){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE()==5){
return 0;
}}
if(Global_2635559.f_517==MISC::GET_FRAME_COUNT()){
return 0;
}
if(!func_186(PLAYER::PLAYER_ID()) && !func_185(0)){
return 0;
}
return 1;
}


bool func_185(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_186(bool bParam0){
if(bParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, bParam0);
}
return 1;
}

int func_187(bool bParam0){
switch (bParam0){
case 0:
return func_37(23);
case 1:
return func_37(24);
case 2:
return func_37(25);
default:
}
return 0;
}


void func_188(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_159.f_6=iParam0;
}

int func_189(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_4(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}

int func_190(){
return func_191();
}


var func__191(){
return Global_262145.f_15567;
}

int func_192(){
return Local_159.f_6;
}


void func_193(int iParam0){
if(!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
return;
}
Local_159.f_5=iParam0;
}

int func_194(){
bool bVar0;
if(!func_214()){
return 1;
}
if(!func_213()){
return 1;
}
bVar0=false;
while (bVar0 < func_212()){
if(!func_195(bVar0, 1)){
return 0;
}
bVar0++;
}
return 1;
}

int func_195(bool bParam0, bool bParam1){
var uVar0;
var uVar1;
if(func_210(func_211(bParam0))){
if(!func_209(bParam0)){
if(func_208(bParam0)){
uVar0=func_207(bParam0);
uVar1=func_206(bParam0);
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uVar0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uVar0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_205(uVar0)){
if(func_204(&(Local_159.f_401[bParam0 /*8*/]), uVar0, 26, func_211(bParam0), uVar1, 1, 1, 1)){
MISC::CLEAR_BIT(&(Local_159.f_548), bParam0);
Local_159.f_401[bParam0 /*8*/].f_1={
0f, 0f, 0f 
};
Local_159.f_401[bParam0 /*8*/].f_4=0f;
func_203(&(Local_159.f_401[bParam0 /*8*/].f_6));
}
}}}}elseif(bParam1){
if(func_200(&(Local_159.f_401[bParam0 /*8*/]), 26, func_211(bParam0), func_202(bParam0), func_201(bParam0), 1, 1, 1)){
MISC::CLEAR_BIT(&(Local_159.f_548), bParam0);
Local_159.f_401[bParam0 /*8*/].f_1={
0f, 0f, 0f 
};
Local_159.f_401[bParam0 /*8*/].f_4=0f;
func_203(&(Local_159.f_401[bParam0 /*8*/].f_6));
func_196(func_199(bParam0), 75);
}}}else{
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_211(bParam0));
return 1;
}}
return 0;
}


void func_196(int iParam0, int iParam1){
var uVar0;
int iVar1;
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
uVar0=func_198(-1);
WEAPON::GIVE_WEAPON_TO_PED(iParam0, uVar0, 9999999, 0, 1);
iVar1=3;
PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
PED::SET_PED_CONFIG_FLAG(iParam0, 42, 0);
PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, 1);
PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 146, 1);
PED::SET_PED_ACCURACY(iParam0, iParam1);
func_197(iParam0);
PED::SET_PED_KEEP_TASK(iParam0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837211);
}


void func_197(int iParam0){
float fVar0;
int iVar1;
int iVar2;
fVar0=1f;
iVar2=Global_1949957;
if(Global_1949955==1){
iVar2=3;
}
if(iVar2==2){
PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_16708);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, 0);
fVar0=Global_262145.f_16709;
}elseif(iVar2==3){
PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_16712);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, 0);
PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
fVar0=Global_262145.f_16713;
}
iVar1=round((100f + (100f * fVar0)));
if(ENTITY::GET_ENTITY_HEALTH(iParam0) > iVar1){
ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
ENTITY::SET_ENTITY_HEALTH(iParam0, iVar1, 0);
}}

int func_198(int iParam0){
int iVar0;
int iVar1;
iVar0=joaat("weapon_pistol");
if(func_10()==12){
iVar0=joaat("weapon_microsmg");
}
if(func_10()==13){
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
if(iVar1 > 500){
iVar0=joaat("weapon_microsmg");
}}
if(func_10()==13){
iVar0=joaat("weapon_microsmg");
}elseif(func_10()==6){
switch (func_212()){
case 4:
iVar0=joaat("weapon_pistol");
break;
case 6:
if((iParam0 % 2)==0){
iVar0=joaat("weapon_pistol");
}else{
iVar0=joaat("weapon_microsmg");
}
break;
case 8:
if((iParam0 % 2)==0){
iVar0=joaat("weapon_microsmg");
}else{
iVar0=joaat("weapon_assaultrifle");
}
break;
}}
return iVar0;
}

int func_199(bool bParam0){
if(func_209(bParam0)){
return NETWORK::NET_TO_PED(Local_159.f_401[bParam0 /*8*/]);
}
return 0;
}

int func_200(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
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


float func_201(bool bParam0){
switch (func_10()){
case 9:
switch (Local_159.f_385){
case 0:
switch (bParam0){
case 0:
return 173.599f;
case 1:
return 12.199f;
case 2:
return 130.399f;
case 3:
return 310.999f;
case 4:
return 228.598f;
case 5:
return 199.997f;
case 6:
return 173.398f;
case 7:
return 196.994f;
case 8:
return 162.399f;
case 9:
return 134.799f;
default:
}
break;
case 1:
switch (bParam0){
case 0:
return 259.599f;
case 1:
return 210.799f;
case 2:
return 264.798f;
case 3:
return 289.189f;
case 4:
return 30.994f;
case 5:
return 74.593f;
case 6:
return 332.592f;
case 7:
return 233.191f;
case 8:
return 177.588f;
case 9:
return 166.187f;
default:
}
break;
case 2:
switch (bParam0){
case 0:
return 221.9998f;
case 1:
return 286.398f;
case 2:
return 115.597f;
case 3:
return 64.9988f;
case 4:
return 56.797f;
case 5:
return 171.7995f;
case 6:
return 113.395f;
case 7:
return 1.4f;
case 8:
return 23.597f;
case 9:
return 34.2f;
default:
}
break;
case 3:
switch (bParam0){
case 0:
return 272.797f;
case 1:
return 270.4f;
case 2:
return 198.797f;
case 3:
return 26.597f;
case 4:
return 151.1986f;
case 5:
return 312.7979f;
case 6:
return 288.194f;
case 7:
return 338.594f;
case 8:
return 153.993f;
case 9:
return 288.593f;
default:
}
break;
case 4:
switch (bParam0){
case 0:
return 213.399f;
case 1:
return 43.798f;
case 2:
return 104.798f;
case 3:
return 149.397f;
case 4:
return 282.398f;
case 5:
return 192.393f;
case 6:
return 3.193f;
case 7:
return 173.199f;
case 8:
return 102.998f;
case 9:
return 160.998f;
default:
}
break;
}
break;
case 13:
switch (Local_159.f_395[0]){
case 0:
switch (bParam0){
case 0:
return 226.197f;
case 1:
return 69.999f;
case 2:
return 57.6f;
case 3:
return 325.999f;
case 4:
return 138.995f;
case 5:
return 26.994f;
case 6:
return 324.193f;
case 7:
return 112.592f;
case 8:
return 312.19f;
default:
}
break;
case 1:
switch (bParam0){
case 0:
return 183.597f;
case 1:
return 80.797f;
case 2:
return 216.796f;
case 3:
return 167.996f;
case 4:
return 152.395f;
case 5:
return 290.792f;
case 6:
return 314.794f;
case 7:
return 165.592f;
case 8:
return 71.392f;
default:
}
break;
case 2:
switch (bParam0){
case 0:
return 180.5975f;
case 1:
return 36.797f;
case 2:
return 259.5967f;
case 3:
return 130.3964f;
case 4:
return 182.4457f;
case 5:
return 59.8454f;
case 6:
return 66.0453f;
case 7:
return 64.0452f;
case 8:
return 319.8442f;
default:
}
break;
case 3:
switch (bParam0){
case 0:
return 123.3997f;
case 1:
return 142.1995f;
case 2:
return 136.5994f;
case 3:
return 99.396f;
case 4:
return 61.3977f;
case 5:
return 30.1976f;
case 6:
return 79.197f;
case 7:
return 180.7967f;
case 8:
return 38.5959f;
default:
}
break;
case 4:
switch (bParam0){
case 0:
return 234.4485f;
case 1:
return 312.6486f;
case 2:
return 330f;
case 3:
return 55.0465f;
case 4:
return 265.0478f;
case 5:
return 349.595f;
case 6:
return 23.395f;
case 7:
return 286.995f;
case 8:
return 359.8465f;
default:
}
break;
}
break;
}
return 0f;
}


Vector3 func__202(bool bParam0){
switch (func_10()){
case 9:
switch (Local_159.f_385){
case 0:
switch (bParam0){
case 0:
return 1686.565f, 3283.567f, 40.147f;
case 1:
return 1686.705f, 3282.48f, 40.146f;
case 2:
return 1707.38f, 3285.957f, 40.143f;
case 3:
return 1706.214f, 3284.945f, 40.132f;
case 4:
return 1705.706f, 3290.164f, 44.399f;
case 5:
return 1689.609f, 3277.303f, 40.076f;
case 6:
return 1700.036f, 3286.393f, 47.922f;
case 7:
return 1698.173f, 3288.865f, 40.147f;
case 8:
return 1720.138f, 3285.192f, 43.149f;
case 9:
return 1685.802f, 3278.66f, 40.056f;
default:
}
break;
case 1:
switch (bParam0){
case 0:
return -22.418f, 3038.632f, 39.986f;
case 1:
return 0.953f, 3048.67f, 39.686f;
case 2:
return -30.788f, 3049.856f, 39.595f;
case 3:
return -25.003f, 3034.537f, 43.501f;
case 4:
return 1.45f, 3047.88f, 39.67f;
case 5:
return -29.428f, 3049.529f, 39.711f;
case 6:
return -26.525f, 3041.971f, 39.986f;
case 7:
return -17.376f, 3034.479f, 39.974f;
case 8:
return -34.036f, 3030.758f, 40.036f;
case 9:
return -34.53f, 3017.445f, 39.653f;
default:
}
break;
case 2:
switch (bParam0){
case 0:
return -2119.472f, 2615.53f, -0.0022f;
case 1:
return -2077.927f, 2604.631f, 1.035f;
case 2:
return -2080.564f, 2603.516f, 1.035f;
case 3:
return -2086.792f, 2625.189f, 2.089f;
case 4:
return -2085.976f, 2616.372f, 0.2f;
case 5:
return -2097.881f, 2637.023f, 1.9161f;
case 6:
return -2082.671f, 2609.676f, 2.089f;
case 7:
return -2097.82f, 2635.863f, 1.8648f;
case 8:
return -2090.961f, 2638.719f, 2.089f;
case 9:
return -2118.675f, 2614.615f, 0.2f;
default:
}
break;
case 3:
switch (bParam0){
case 0:
return 201.773f, 2444.678f, 59.483f;
case 1:
return 201.069f, 2434.979f, 59.47f;
case 2:
return 194.641f, 2457.049f, 54.709f;
case 3:
return 195.564f, 2455.865f, 54.782f;
case 4:
return 225.521f, 2447.133f, 56.33f;
case 5:
return 225.092f, 2446.452f, 56.4106f;
case 6:
return 202.803f, 2444.631f, 62.421f;
case 7:
return 205.382f, 2477.153f, 54.631f;
case 8:
return 211.588f, 2463.634f, 54.958f;
case 9:
return 216.219f, 2470.21f, 54.765f;
default:
}
break;
case 4:
switch (bParam0){
case 0:
return 2108.241f, 2923.977f, 56.432f;
case 1:
return 2109.137f, 2922.911f, 56.43f;
case 2:
return 2137.334f, 2901.555f, 56.268f;
case 3:
return 2112.013f, 2923.713f, 49.932f;
case 4:
return 2130.445f, 2917.955f, 46.663f;
case 5:
return 2136.251f, 2897.009f, 46.331f;
case 6:
return 2136.553f, 2895.294f, 46.241f;
case 7:
return 2122.212f, 2887.214f, 46.196f;
case 8:
return 2108.959f, 2908.356f, 46.703f;
case 9:
return 2139.324f, 2899.315f, 56.267f;
default:
}
break;
}
break;
case 13:
switch (Local_159.f_395[0]){
case 0:
switch (bParam0){
case 0:
return -106.011f, -2711.141f, 4.997f;
case 1:
return -104.058f, -2711.94f, 4.996f;
case 2:
return -92.315f, -2759.717f, 5.087f;
case 3:
return -93.367f, -2759.866f, 5.087f;
case 4:
return -77.449f, -2671.311f, 5.009f;
case 5:
return -78.053f, -2672.953f, 5.012f;
case 6:
return -100.601f, -2688.139f, 5.001f;
case 7:
return -93.626f, -2773.771f, 5.087f;
case 8:
return -96.429f, -2697.867f, 5.013f;
default:
}
break;
case 1:
switch (bParam0){
case 0:
return 884.089f, -2599.981f, 9.116f;
case 1:
return 892.923f, -2618.841f, 4.759f;
case 2:
return 891.161f, -2617.305f, 4.792f;
case 3:
return 885.512f, -2603.554f, 5.107f;
case 4:
return 892.079f, -2626.937f, 2.397f;
case 5:
return 898.665f, -2600.539f, 9.116f;
case 6:
return 891.064f, -2627.698f, 2.174f;
case 7:
return 876.353f, -2629.129f, 2.067f;
case 8:
return 900.892f, -2600.36f, 9.116f;
default:
}
break;
case 2:
switch (bParam0){
case 0:
return -501.2358f, -2811.832f, 5.0004f;
case 1:
return -517.3156f, -2820.241f, 5.0004f;
case 2:
return -518.6866f, -2819.406f, 5.0004f;
case 3:
return -522.037f, -2794.314f, 5.0004f;
case 4:
return -524.2614f, -2801.131f, 5.0004f;
case 5:
return -524.0466f, -2802.697f, 5.0004f;
case 6:
return -511.3055f, -2808.841f, 5.0004f;
case 7:
return -494.5088f, -2834.58f, 5.0004f;
case 8:
return -526.2589f, -2803.069f, 5.0004f;
default:
}
break;
case 3:
switch (bParam0){
case 0:
return -707.134f, -1311.777f, 8.5508f;
case 1:
return -696.8458f, -1318.922f, 7.2005f;
case 2:
return -700.508f, -1316.76f, 4.1019f;
case 3:
return -687.0558f, -1335.441f, 4.1019f;
case 4:
return -707.6573f, -1353.54f, 0.6002f;
case 5:
return -708.6399f, -1354.614f, 0.6002f;
case 6:
return -694.9748f, -1331.552f, 4.1019f;
case 7:
return -695.9897f, -1330.669f, 4.1019f;
case 8:
return -704.4351f, -1358.116f, 4.1022f;
default:
}
break;
case 4:
switch (bParam0){
case 0:
return -456.904f, -2269.351f, 7.5208f;
case 1:
return -457.1874f, -2271.031f, 7.5208f;
case 2:
return -451.85f, -2266.866f, 6.608f;
case 3:
return -426.7677f, -2265.777f, 6.6082f;
case 4:
return -454.2534f, -2268.414f, 6.6082f;
case 5:
return -460.84f, -2262.911f, 7.521f;
case 6:
return -430.938f, -2273.629f, 6.608f;
case 7:
return -432.033f, -2273.013f, 6.608f;
case 8:
return -442.2232f, -2264.978f, 6.6082f;
default:
}
break;
}
break;
}
return 0f, 0f, 0f;
}


void func_203(var uParam0){
uParam0->f_1=0;
}

int func_204(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7){
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0)){
return 0;
}
*uParam0=NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
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

int func_205(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
}
return 0;
}

int func_206(bool bParam0){
switch (func_10()){
case 13:
switch (bParam0){
case 9:
return -1;
case 10:
return 0;
default:
}
break;
case 12:
if(!func_37(8)){
switch (bParam0){
case 0:
case 2:
return -1;
case 1:
case 3:
return 0;
default:
}}else{
switch (bParam0){
case 0:
return -1;
case 1:
return 0;
case 2:
return 1;
case 3:
return 2;
}
default:
}
break;
case 5:
switch (bParam0){
case 0:
case 2:
return -1;
case 1:
case 3:
return 0;
default:
}
break;
case 6:
switch (func_212()){
case 4:
switch (bParam0){
case 0:
case 2:
return -1;
case 1:
case 3:
return 0;
default:
}
break;
case 6:
switch (bParam0){
case 0:
case 3:
return -1;
case 1:
case 4:
return 0;
case 2:
case 5:
return 1;
default:
}
break;
case 8:
switch (bParam0){
case 0:
case 4:
return -1;
case 1:
case 5:
return 0;
case 2:
case 6:
return 1;
case 3:
case 7:
return 2;
default:
}
break;
}
break;
case 11:
switch (bParam0){
case 0:
case 4:
case 8:
return -1;
case 1:
case 5:
case 9:
return 0;
case 2:
case 6:
case 10:
return 1;
case 3:
case 7:
case 11:
return 2;
default:
}
break;
}
return -1;
}

int func_207(bool bParam0){
switch (func_10()){
case 12:
if(!func_37(8)){
switch (bParam0){
case 0:
case 1:
return Local_159.f_500[0 /*6*/];
case 2:
case 3:
return Local_159.f_500[1 /*6*/];
default:
}}else{
return Local_159.f_500[0 /*6*/];
}
break;
case 5:
switch (bParam0){
case 0:
case 1:
return Local_159.f_500[0 /*6*/];
case 2:
case 3:
return Local_159.f_500[1 /*6*/];
default:
}
break;
case 11:
switch (bParam0){
case 0:
case 1:
case 2:
case 3:
return Local_159.f_500[0 /*6*/];
case 4:
case 5:
case 6:
case 7:
return Local_159.f_500[1 /*6*/];
case 8:
case 9:
case 10:
case 11:
return Local_159.f_500[2 /*6*/];
default:
}
break;
case 6:
switch (func_212()){
case 4:
switch (bParam0){
case 0:
case 1:
return Local_159.f_500[0 /*6*/];
case 2:
case 3:
return Local_159.f_500[1 /*6*/];
break;
}
break;
case 6:
switch (bParam0){
case 0:
case 1:
case 2:
return Local_159.f_500[0 /*6*/];
case 3:
case 4:
case 5:
return Local_159.f_500[1 /*6*/];
break;
}
break;
case 8:
switch (bParam0){
case 0:
case 1:
case 2:
case 3:
return Local_159.f_500[0 /*6*/];
case 4:
case 5:
case 6:
case 7:
return Local_159.f_500[1 /*6*/];
break;
}
break;
}
break;
}
return -1;
}

int func_208(bool bParam0){
switch (func_10()){
case 13:
if(bParam0==9 || bParam0==10){
return 1;
}
break;
case 12:
case 5:
case 11:
case 6:
return 1;
}
return 0;
}


bool func_209(bool bParam0){
return NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[bParam0 /*8*/]);
}


bool func_210(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_211(bool bParam0){
switch (func_10()){
case 9:
switch (Local_159.f_385){
case 0:
if(bParam0==6){
return joaat("g_f_y_lost_01");
}
return joaat("g_m_y_lost_01");
case 1:
return joaat("g_m_y_azteca_01");
case 2:
return joaat("g_m_y_lost_01");
case 3:
return joaat("g_m_m_chigoon_02");
case 4:
return joaat("g_m_y_lost_01");
default:
}
break;
case 13:
switch (Local_159.f_395[0]){
case 0:
switch (bParam0){
case 0:
return joaat("g_m_m_armgoon_01");
case 1:
return joaat("g_m_m_armgoon_01");
case 2:
return joaat("g_m_m_armgoon_01");
case 3:
return joaat("g_m_m_armgoon_01");
case 4:
return joaat("g_m_m_armgoon_01");
case 5:
return joaat("g_m_m_armgoon_01");
case 6:
return joaat("g_m_m_armgoon_01");
case 7:
return joaat("g_m_m_armgoon_01");
case 8:
return joaat("g_m_m_armgoon_01");
default:
}
break;
case 1:
switch (bParam0){
case 0:
return joaat("g_m_y_mexgoon_02");
case 1:
return joaat("g_m_y_mexgoon_02");
case 2:
return joaat("g_m_y_mexgoon_02");
case 3:
return joaat("g_m_y_mexgoon_02");
case 4:
return joaat("g_m_y_mexgoon_02");
case 5:
return joaat("g_m_y_mexgoon_02");
case 6:
return joaat("g_m_y_mexgoon_02");
case 7:
return joaat("g_m_y_mexgoon_02");
case 8:
return joaat("g_m_y_mexgoon_02");
default:
}
break;
case 2:
switch (bParam0){
case 0:
return joaat("g_m_m_armgoon_01");
case 1:
return joaat("g_m_m_armgoon_01");
case 2:
return joaat("g_m_m_armboss_01");
case 3:
return joaat("g_m_m_armgoon_01");
case 4:
return joaat("g_m_m_armgoon_01");
case 5:
return joaat("g_m_m_armgoon_01");
case 6:
return joaat("g_m_m_armgoon_01");
case 7:
return joaat("g_m_m_armgoon_01");
case 8:
return joaat("g_m_m_armgoon_01");
default:
}
break;
case 3:
switch (bParam0){
case 0:
return joaat("g_m_y_korean_01");
case 1:
return joaat("g_m_y_korean_01");
case 2:
return joaat("g_m_y_korean_01");
case 3:
return joaat("g_m_y_korean_01");
case 4:
return joaat("g_m_y_korean_01");
case 5:
return joaat("g_m_y_korean_01");
case 6:
return joaat("g_m_y_korean_01");
case 7:
return joaat("g_m_y_korean_01");
case 8:
return joaat("g_m_y_korean_01");
default:
}
break;
case 4:
switch (bParam0){
case 0:
return joaat("g_m_y_korean_01");
case 1:
return joaat("g_m_y_korean_01");
case 2:
return joaat("g_m_y_korean_01");
case 3:
return joaat("g_m_y_korean_01");
case 4:
return joaat("g_m_y_korean_01");
case 5:
return joaat("g_m_y_korean_01");
case 6:
return joaat("g_m_y_korean_01");
case 7:
return joaat("g_m_y_korean_01");
case 8:
return joaat("g_m_y_korean_01");
default:
}
break;
}
break;
case 5:
case 6:
return Local_159.f_547;
break;
case 11:
return joaat("s_m_y_blackops_01");
break;
}
return joaat("g_m_m_armgoon_01");
}

int func_212(){
switch (func_10()){
case 13:
return 9;
case 12:
return 4;
case 5:
return 4;
case 9:
return 10;
case 11:
return 12;
case 6:
switch (round(Local_159.f_545)){
case 0:
case 1:
case 2:
return 4;
case 3:
case 4:
return 6;
case 5:
case 6:
return 8;
default:
}
break;
}
return 0;
}

int func_213(){
switch (func_10()){
case 13:
case 9:
return 1;
default:
}
return 0;
}

int func_214(){
if(((((func_10()==13 || func_10()==12) || func_10()==5) || func_10()==9) || func_10()==11) || func_10()==6){
return 1;
}
return 0;
}

int func_215(){
int iVar0;
iVar0=0;
while (iVar0 < func_278()){
if(func_216(iVar0)){
}
iVar0++;
}
iVar0=0;
while (iVar0 < func_278()){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_42[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}

int func_216(int iParam0){
struct<3> Var0;
var uVar1;
if(func_274()){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_42[iParam0])){
if(func_210(func_273(iParam0))){
Var0={
func_272(iParam0) 
};
uVar1=func_270(iParam0);
if(NETWORK::CAN_REGISTER_MISSION_PEDS(func_221(168, -1, -1, -1) + 1)){
if(func_219()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_39[0])){
if(func_204(&(Local_159.f_42[iParam0]), Local_159.f_39[0], 26, func_273(iParam0), func_218(iParam0), 1, 1, 1)){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 0);
PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 3, 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 229, 1);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 128, 0);
PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 0);
PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 398, 1);
PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 512, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), Global_1837208);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), -1);
if(func_217()){
PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
}}
}}elseif(func_200(&(Local_159.f_42[iParam0]), 26, func_273(iParam0), Var0, uVar1, 1, 1, 1)){
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 0);
PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_159.f_42[iParam0]), 1);
}}}}else{
return 1;
}}else{
return 1;
}
return 0;
}


bool func_217(){
return func_10()==12;
}

int func_218(int iParam0){
if(iParam0==1){
return 0;
}
return -1;
}

int func_219(){
if(func_220()){
return 0;
}
return 1;
}


bool func_220(){
return func_10()==9;
}

int func_221(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 167:
return func_269(iParam1);
case 168:
return 12;
case 170:
return 4;
case 171:
return 0;
case 172:
return 0;
case 173:
return 4;
case 178:
case 188:
return func_265(iParam1, iParam2, iParam3);
case 225:
case 226:
return func_260(iParam1, iParam2, iParam3, 0);
case 227:
return 0;
case 229:
case 230:
return func_255(iParam1, iParam2, iParam3, 0);
case 233:
return func_250(iParam1, iParam2, iParam3, 0);
case 190:
return 20;
case 191:
return 4;
case 192:
return func_241(iParam1, iParam2);
case 179:
return 0;
case 183:
return 15;
case 182:
return 20;
case 185:
return 21;
case 186:
return 36;
case 180:
return 10;
case 193:
return 10;
case 194:
return 0;
case 197:
return 12;
case 199:
return 6;
case 195:
return 15;
case 201:
return 0;
case 198:
return 18;
case 205:
return 1;
case 207:
return 24;
case 208:
return 14;
case 209:
return 11;
case 210:
return 0;
case 214:
return 12;
case 215:
return 20;
case 216:
return 20;
case 217:
return func_240();
case 218:
return func_239();
case 219:
return 0;
case 220:
return 0;
case 221:
return 0;
case 237:
case 250:
return func_238(iParam1, iParam2, iParam3);
case 238:
case 249:
return func_237(iParam1, iParam2);
case 239:
return 6;
case 240:
return 11;
case 241:
return 14;
case 242:
return 14;
case 244:
return 9;
case 248:
return 10;
case 243:
return func_232(iParam1, iParam2, 0, -1);
case 158:
return func_227(iParam1, iParam2, 0, -1);
case 181:
return func_222(iParam1, iParam2, 0, -1);
default:
}
return 0;
}

int func_222(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
switch (iParam0){
case 2:
iVar0 +=6;
break;
}
if(!bParam2){
if(func_226(iParam0, iParam1)){
iVar0=(iVar0 + func_223(iParam0, iParam1));
}}
return iVar0;
}

int func_223(int iParam0, var uParam1){
if(func_226(iParam0, uParam1)){
return (func_225(iParam0, uParam1) + func_224(iParam0, uParam1));
}
return 0;
}

int func_224(int iParam0, var uParam1){
switch (iParam0){
case 2:
return 2;
default:
}
return 0;
}

int func_225(int iParam0, int iParam1){
switch (iParam0){
case 2:
return 2;
default:
}
return 0;
}


bool func_226(int iParam0, int iParam1){
return func_225(iParam0, iParam1) > 0;
}

int func_227(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
switch (iParam0){
case 0:
iVar0 +=6;
break;
case 24:
iVar0 +=2;
break;
case 10:
switch (iParam1){
case 30:
iVar0 +=12;
break;
case 31:
case 32:
iVar0 +=10;
break;
}
break;
case 33:
switch (iParam1){
case 88:
iVar0 +=10;
break;
case 89:
iVar0 +=9;
break;
case 90:
iVar0 +=10;
break;
}
break;
case 36:
iVar0 +=9;
break;
case 43:
iVar0 +=6;
break;
case 38:
iVar0 +=6;
break;
case 40:
iVar0 +=6;
break;
case 8:
iVar0 +=16;
break;
case 16:
iVar0 +=14;
break;
case 35:
iVar0 +=13;
break;
case 4:
iVar0 +=32;
break;
case 45:
iVar0 +=2;
break;
case 46:
iVar0 +=9;
break;
case 9:
iVar0 +=15;
break;
case 14:
iVar0 +=16;
break;
case 17:
iVar0 +=14;
break;
case 47:
iVar0 +=13;
break;
case 11:
iVar0 +=11;
break;
case 18:
iVar0 +=24;
break;
case 6:
iVar0 +=14;
break;
case 48:
iVar0 +=15;
break;
case 44:
iVar0 +=9;
break;
case 21:
iVar0 +=20;
break;
case 22:
iVar0 +=14;
break;
case 7:
iVar0 +=22;
break;
case 15:
iVar0 +=10;
break;
case 2:
iVar0 +=2;
break;
case 34:
iVar0 +=18;
break;
case 27:
iVar0 +=16;
break;
case 26:
iVar0 +=10;
break;
case 23:
iVar0 +=10;
break;
case 31:
iVar0 +=20;
break;
case 3:
iVar0 +=14;
break;
case 12:
iVar0 +=7;
break;
case 41:
iVar0 +=10;
break;
case 49:
iVar0 +=30;
break;
case 19:
iVar0 +=15;
break;
case 5:
iVar0 +=7;
break;
case 30:
iVar0++;
break;
case 13:
iVar0 +=20;
break;
case 29:
iVar0 +=9;
break;
case 50:
iVar0 +=24;
break;
case 20:
iVar0 +=26;
break;
case 32:
iVar0 +=30;
break;
case 28:
iVar0 +=3;
break;
case 42:
iVar0 +=13;
break;
case 52:
iVar0 +=12;
break;
case 39:
iVar0 +=5;
break;
case 37:
iVar0 +=6;
break;
case 25:
iVar0 +=6;
break;
case 51:
iVar0 +=20;
break;
}
if(!bParam2){
if(func_231(iParam0, iParam1)){
iVar0=(iVar0 + func_228(iParam0, iParam1));
}}
return iVar0;
}

int func_228(int iParam0, int iParam1){
if(func_231(iParam0, iParam1)){
return (func_230(iParam0, iParam1) + func_229(iParam0, iParam1));
}
return 0;
}

int func_229(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 13:
case 18:
case 34:
case 49:
case 48:
case 7:
case 16:
case 5:
case 26:
case 22:
case 25:
case 11:
case 17:
case 14:
return 2;
case 6:
case 50:
case 47:
return 4;
case 27:
return 2;
default:
}
return 0;
}

int func_230(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 13:
case 18:
case 34:
case 27:
case 49:
case 48:
case 6:
case 50:
case 7:
case 16:
case 47:
case 5:
case 25:
case 26:
case 22:
case 11:
case 17:
case 14:
return 2;
default:
}
return 0;
}


bool func_231(int iParam0, int iParam1){
return func_230(iParam0, iParam1) > 0;
}

int func_232(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
switch (iParam0){
case 13:
iVar0 +=8;
break;
case 1:
switch (iParam1){
case 2:
iVar0 +=10;
break;
case 3:
iVar0 +=10;
break;
case 4:
iVar0 +=14;
break;
case 5:
iVar0 +=10;
break;
}
break;
case 15:
iVar0 +=20;
break;
case 14:
iVar0 +=19;
break;
case 11:
switch (iParam1){
case 35:
iVar0 +=6;
break;
case 36:
iVar0 +=7;
break;
case 37:
iVar0 +=17;
break;
}
break;
case 6:
iVar0 +=8;
break;
case 5:
iVar0 +=11;
break;
case 0:
iVar0 +=12;
break;
case 10:
switch (iParam1){
case 31:
iVar0++;
break;
case 32:
iVar0 +=7;
break;
case 33:
iVar0 +=2;
break;
case 34:
iVar0++;
break;
}
break;
case 12:
iVar0 +=30;
break;
case 9:
switch (iParam1){
case 28:
iVar0 +=10;
break;
case 29:
iVar0 +=8;
break;
case 30:
iVar0 +=9;
break;
}
break;
case 3:
iVar0 +=19;
break;
case 4:
switch (iParam1){
case 12:
iVar0 +=12;
break;
case 13:
iVar0 +=14;
break;
case 14:
iVar0 +=12;
break;
}
break;
case 2:
iVar0 +=12;
break;
case 8:
iVar0 +=7;
break;
case 7:
iVar0++;
break;
}
if(!bParam2){
if(func_236(iParam0, iParam1)){
iVar0=(iVar0 + func_233(iParam0, iParam1));
}}
return iVar0;
}

int func_233(int iParam0, int iParam1){
if(func_236(iParam0, iParam1)){
return (func_235(iParam0, iParam1) + func_234(iParam0, iParam1));
}
return 0;
}

int func_234(int iParam0, int iParam1){
switch (iParam0){
case 4:
case 9:
case 8:
return 2;
default:
}
switch (iParam1){
case 37:
return 2;
default:
}
return 0;
}

int func_235(int iParam0, int iParam1){
switch (iParam0){
case 4:
case 9:
case 8:
return 2;
default:
}
switch (iParam1){
case 37:
return 2;
default:
}
return 0;
}


bool func_236(int iParam0, int iParam1){
return func_235(iParam0, iParam1) > 0;
}

int func_237(int iParam0, int iParam1){
switch (iParam0){
case 0:
return 14;
case 1:
return 7;
case 2:
return 27;
case 3:
return 3;
case 4:
return 8;
case 5:
switch (iParam1){
case 0:
case 2:
return 11;
case 1:
return 9;
default:
}
break;
}
return 0;
}

int func_238(int iParam0, int iParam1, int iParam2){
int iVar0;
switch (iParam0){
case 0:
switch (iParam1){
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
iVar0 +=19;
break;
}
break;
case 11:
switch (iParam1){
case 77:
case 78:
case 79:
iVar0 +=2;
break;
}
break;
case 9:
switch (iParam1){
case 71:
case 72:
case 73:
iVar0 +=9;
break;
}
break;
case 12:
switch (iParam1){
case 80:
case 81:
case 82:
iVar0 +=3;
break;
}
break;
case 22:
iVar0 +=8;
break;
case 15:
iVar0++;
break;
case 23:
iVar0 +=3;
break;
case 20:
iVar0 +=12;
break;
case 18:
iVar0 +=20;
break;
case 17:
iVar0 +=9;
break;
case 19:
iVar0++;
break;
case 3:
iVar0 +=5;
break;
case 14:
iVar0++;
break;
case 10:
iVar0 +=17;
break;
case 4:
iVar0 +=3;
break;
case 1:
iVar0 +=30;
break;
case 2:
iVar0 +=4;
break;
case 5:
iVar0 +=16;
break;
}
return iVar0;
}

int func_239(){
int iVar0;
iVar0=32;
return iVar0;
}

int func_240(){
int iVar0;
iVar0=8;
return iVar0;
}

int func_241(int iParam0, int iParam1){
int iVar0;
switch (iParam0){
case 20:
iVar0 +=2;
break;
case 0:
switch (iParam1){
case 1:
iVar0 +=16;
break;
case 2:
iVar0 +=14;
break;
case 3:
iVar0 +=13;
break;
case 4:
iVar0 +=12;
break;
case 5:
iVar0 +=12;
break;
case 6:
iVar0 +=12;
break;
}
break;
case 1:
switch (iParam1){
case 7:
iVar0 +=12;
break;
case 8:
iVar0 +=12;
break;
case 9:
iVar0 +=12;
break;
case 10:
iVar0 +=12;
break;
case 11:
iVar0 +=12;
break;
case 12:
iVar0 +=12;
break;
}
break;
case 2:
switch (iParam1){
case 13:
iVar0 +=17;
break;
case 14:
iVar0 +=12;
break;
case 15:
iVar0 +=13;
break;
case 16:
iVar0 +=14;
break;
case 17:
iVar0 +=12;
break;
case 18:
iVar0 +=14;
break;
}
break;
case 4:
switch (iParam1){
case 19:
iVar0 +=14;
break;
case 20:
iVar0 +=14;
break;
case 21:
iVar0 +=14;
break;
case 22:
iVar0 +=14;
break;
case 23:
iVar0 +=14;
break;
case 24:
iVar0 +=14;
break;
}
break;
case 6:
switch (iParam1){
case 25:
iVar0 +=4;
break;
case 26:
iVar0 +=4;
break;
case 27:
iVar0 +=4;
break;
case 28:
iVar0 +=4;
break;
case 29:
iVar0 +=4;
break;
case 30:
iVar0 +=4;
break;
}
break;
case 5:
switch (iParam1){
case 31:
iVar0 +=13;
break;
case 32:
iVar0 +=13;
break;
case 33:
iVar0 +=13;
break;
case 34:
iVar0 +=13;
break;
case 35:
iVar0 +=13;
break;
case 36:
iVar0 +=13;
break;
}
break;
case 9:
switch (iParam1){
case 68:
iVar0=iVar0;
break;
case 69:
iVar0=iVar0;
break;
case 70:
iVar0=iVar0;
break;
case 71:
iVar0=iVar0;
break;
case 72:
iVar0=iVar0;
break;
case 73:
iVar0=iVar0;
break;
}
break;
case 3:
switch (iParam1){
case 74:
iVar0 +=10;
break;
case 75:
iVar0 +=10;
break;
case 76:
iVar0 +=10;
break;
case 77:
iVar0 +=10;
break;
}
break;
case 10:
switch (iParam1){
case 78:
iVar0 +=3;
break;
case 79:
iVar0 +=3;
break;
case 80:
iVar0 +=3;
break;
case 81:
iVar0 +=3;
break;
case 82:
iVar0 +=5;
break;
case 83:
iVar0 +=3;
break;
case 84:
iVar0 +=3;
break;
}
break;
case 7:
iVar0 +=8;
break;
case 8:
switch (iParam1){
case 62:
iVar0 +=8;
break;
case 63:
iVar0 +=8;
break;
case 64:
iVar0 +=8;
break;
case 65:
iVar0 +=8;
break;
case 66:
iVar0 +=8;
break;
case 67:
iVar0 +=8;
break;
}
break;
case 11:
switch (iParam1){
case 85:
iVar0 +=3;
break;
case 86:
iVar0 +=3;
break;
case 87:
iVar0 +=3;
break;
case 88:
iVar0 +=3;
break;
case 89:
iVar0 +=3;
break;
}
break;
case 12:
switch (iParam1){
case 90:
iVar0 +=2;
break;
case 91:
iVar0 +=2;
break;
case 92:
iVar0 +=2;
break;
case 93:
iVar0 +=2;
break;
case 94:
iVar0 +=2;
break;
}
break;
case 13:
switch (iParam1){
case 37:
iVar0 +=18;
break;
}
break;
case 14:
switch (iParam1){
case 38:
iVar0 +=8;
break;
case 39:
iVar0 +=8;
break;
case 40:
iVar0 +=8;
break;
case 41:
iVar0 +=8;
break;
}
break;
case 15:
iVar0=iVar0;
break;
case 16:
iVar0=iVar0;
break;
case 17:
iVar0=iVar0;
break;
case 18:
iVar0=iVar0;
break;
case 19:
iVar0=iVar0;
break;
default:
iVar0=iVar0;
break;
}
if(iParam0==12 || iParam0==9){
iVar0=(iVar0 + func_242(iParam0, func_247() + 1));
}
return iVar0;
}

int func_242(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(func_246(iParam0)){
iVar0=1;
}else{
if(iVar0==0){
iVar0=iParam1;
iVar1=func_245(iParam0, iParam1);
iVar2=func_244(iParam0);
if(iVar0 > iVar1){
iVar0=iVar1;
}elseif(iVar0 < iVar2){
iVar0=iVar2;
}}
if(func_243(iParam0)){
if(iVar0 > Global_262145.f_18384){
iVar0=Global_262145.f_18384;
}}else{
if(iVar0 < Global_262145.f_18383){
iVar0=Global_262145.f_18383;
}
if(iVar0 > Global_262145.f_18382){
iVar0=Global_262145.f_18382;
}}}
return iVar0;
}

int func_243(int iParam0){
switch (iParam0){
case 14:
case 32:
case 0:
case 2:
case 4:
case 18:
case 6:
case 5:
case 10:
case 12:
case 13:
return 0;
default:
}
return 1;
}

int func_244(int iParam0){
switch (iParam0){
case 5:
return Global_262145.f_18421;
case 10:
return Global_262145.f_18446;
default:
}
return 1;
}

int func_245(int iParam0, int iParam1){
if(func_243(iParam0)){
if(iParam1 >=Global_262145.f_18385){
return 2;
}
return 1;
}
switch (iParam0){
case 5:
return Global_262145.f_18422;
case 10:
return Global_262145.f_18447;
default:
}
return 8;
}

int func_246(int iParam0){
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

int func_247(){
if(func_249()==func_33()){
return 0;
}
return func_248(func_249());
}

int func_248(int iParam0){
if(func_61(iParam0)==func_33()){
return 0;
}
return Global_1894573[iParam0 /*608*/].f_10.f_19;
}


bool func_249(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

int func_250(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
case 1:
iVar0 +=14;
break;
case 2:
iVar0 +=12;
break;
case 3:
iVar0 +=23;
break;
case 4:
iVar0 +=20;
break;
case 5:
iVar0 +=5;
break;
case 8:
iVar0 +=11;
break;
case 6:
iVar0 +=7;
break;
case 12:
iVar0 +=8;
break;
case 7:
iVar0 +=18;
break;
case 9:
iVar0=iVar0;
break;
case 11:
iVar0 +=12;
break;
case 13:
iVar0++;
break;
case 10:
iVar0 +=16;
break;
}
if(!bParam3){
if(func_254(iParam0)){
iVar0=(iVar0 + func_251(iParam0, iParam1));
}}
return iVar0;
}

int func_251(int iParam0, var uParam1){
if(func_254(iParam0)){
return (func_253(iParam0) + func_252(iParam0, uParam1));
}
return 0;
}

int func_252(int iParam0, var uParam1){
switch (iParam0){
case 0:
return 6;
case 2:
case 12:
case 1:
case 11:
case 10:
return 2;
case 8:
return 4;
default:
}
return 0;
}

int func_253(int iParam0){
switch (iParam0){
case 0:
case 2:
case 8:
case 1:
case 12:
case 10:
case 11:
case 13:
return 2;
default:
}
return 0;
}


bool func_254(int iParam0){
return func_253(iParam0) > 0;
}

int func_255(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
switch (iParam0){
case 12:
iVar0 +=16;
break;
case 11:
iVar0 +=21;
break;
case 1:
iVar0 +=4;
break;
case 14:
iVar0 +=15;
break;
case 7:
iVar0 +=10;
break;
case 2:
iVar0 +=15;
break;
case 4:
iVar0 +=9;
break;
case 10:
iVar0 +=20;
break;
case 3:
iVar0 +=7;
break;
case 8:
iVar0 +=2;
break;
case 5:
iVar0 +=10;
break;
case 9:
switch (iParam1){
case 7:
iVar0 +=17;
break;
default:
iVar0 +=16;
break;
}
break;
case 0:
if(iParam2 >=3){
iVar0 +=2;
}else{
iVar0++;
}
break;
case 23:
iVar0=(iVar0 + iParam2);
break;
case 20:
iVar0 +=10;
break;
case 22:
iVar0=(iVar0 + (5 * iParam2));
break;
case 25:
iVar0=(iVar0 + iParam2);
break;
case 24:
iVar0=(iVar0 + (3 * iParam2));
break;
case 26:
iVar0 +=2;
break;
}
if(!bParam3){
if(func_259(iParam0)){
iVar0=(iVar0 + func_256(iParam0, iParam1));
}}
return iVar0;
}

int func_256(int iParam0, int iParam1){
if(func_259(iParam0)){
return (func_258(iParam0) + func_257(iParam0, iParam1));
}
return 0;
}

int func_257(int iParam0, int iParam1){
switch (iParam0){
case 11:
case 14:
case 2:
case 10:
case 5:
return 2;
case 1:
case 0:
return 4;
case 4:
return 1;
case 12:
switch (iParam1){
case 2:
return 2;
default:
}
break;
case 21:
return 2;
case 17:
return 4;
}
return 0;
}

int func_258(int iParam0){
switch (iParam0){
case 12:
case 11:
case 1:
case 2:
case 14:
case 4:
case 10:
case 7:
case 3:
case 8:
case 0:
case 5:
return 2;
case 21:
case 16:
case 17:
return 2;
default:
}
return 0;
}


bool func_259(int iParam0){
return func_258(iParam0) > 0;
}

int func_260(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
case 1:
switch (iParam1){
case 0:
iVar0 +=18;
break;
case 1:
iVar0 +=18;
break;
case 2:
iVar0 +=18;
break;
}
break;
case 2:
if(iParam2 >=4){
iVar0=(iVar0 + iParam2 + 2);
}else{
iVar0 +=5;
}
break;
case 3:
switch (iParam1){
case 9:
iVar0 +=4;
break;
case 10:
iVar0 +=4;
break;
case 11:
iVar0 +=4;
break;
case 12:
iVar0 +=4;
break;
}
break;
case 4:
switch (iParam1){
case 13:
iVar0 +=20;
break;
case 14:
iVar0 +=20;
break;
case 15:
iVar0 +=20;
break;
}
break;
case 5:
iVar0 +=12;
break;
case 6:
switch (iParam1){
case 19:
iVar0 +=24;
break;
case 20:
iVar0 +=24;
break;
case 21:
iVar0 +=24;
break;
}
break;
case 7:
switch (iParam1){
case 22:
iVar0 +=12;
break;
case 23:
iVar0 +=12;
break;
case 24:
iVar0 +=12;
break;
}
break;
case 8:
switch (iParam1){
case 25:
iVar0 +=16;
break;
case 26:
iVar0 +=15;
break;
}
break;
case 9:
switch (iParam1){
case 27:
iVar0 +=25;
break;
case 28:
iVar0 +=25;
break;
}
break;
case 10:
switch (iParam1){
case 29:
iVar0 +=15;
break;
case 30:
iVar0 +=15;
break;
case 31:
iVar0 +=15;
break;
}
break;
case 11:
switch (iParam1){
case 32:
iVar0 +=12;
break;
case 33:
iVar0 +=12;
break;
case 34:
iVar0 +=12;
break;
}
break;
case 12:
iVar0=iVar0;
break;
case 13:
switch (iParam1){
case 35:
iVar0 +=22;
break;
case 36:
iVar0 +=22;
break;
case 37:
iVar0 +=22;
break;
}
break;
case 14:
iVar0 +=16;
break;
case 15:
iVar0=iVar0;
break;
case 16:
iVar0=iVar0;
break;
case 17:
iVar0=iVar0;
break;
case 18:
iVar0=iVar0;
break;
case 19:
iVar0=iVar0;
break;
case 20:
iVar0 +=22;
break;
}
if(!bParam3){
if(func_264(iParam0)){
iVar0=(iVar0 + func_261(iParam0));
}}
return iVar0;
}

int func_261(int iParam0){
if(func_264(iParam0)){
return (func_263(iParam0) + func_262(iParam0));
}
return 0;
}

int func_262(int iParam0){
switch (iParam0){
case 1:
case 2:
case 4:
case 6:
case 7:
case 9:
case 12:
case 13:
case 17:
case 11:
return 2;
case 15:
case 16:
case 19:
return 3;
case 10:
case 8:
case 5:
return 4;
default:
}
return 0;
}

int func_263(int iParam0){
switch (iParam0){
case 1:
case 2:
case 4:
case 5:
case 6:
case 7:
case 9:
case 10:
case 11:
case 12:
case 13:
case 15:
case 16:
case 17:
case 19:
case 8:
return 2;
default:
}
return 0;
}


bool func_264(int iParam0){
return func_263(iParam0) > 0;
}

int func_265(int iParam0, int iParam1, var uParam2){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
case 1:
iVar0 +=5;
break;
case 7:
iVar0 +=6;
break;
case 8:
iVar0=iVar0;
break;
case 5:
iVar0=iVar0;
break;
case 11:
iVar0 +=6;
break;
case 2:
iVar0 +=10;
break;
case 12:
iVar0 +=11;
break;
case 13:
iVar0 +=10;
break;
case 4:
switch (iParam1){
case 1:
iVar0 +=12;
break;
case 2:
iVar0 +=12;
break;
case 3:
iVar0 +=12;
break;
}
break;
case 6:
switch (iParam1){
case 18:
iVar0 +=8;
break;
case 19:
iVar0 +=8;
break;
case 20:
iVar0 +=8;
break;
}
break;
case 10:
switch (iParam1){
case 21:
iVar0 +=14;
break;
case 22:
iVar0 +=14;
break;
case 23:
iVar0 +=14;
break;
}
break;
case 9:
switch (iParam1){
case 27:
iVar0 +=14;
break;
case 28:
iVar0 +=14;
break;
case 29:
iVar0 +=14;
break;
}
break;
case 3:
switch (iParam1){
case 30:
iVar0 +=3;
break;
case 31:
iVar0 +=3;
break;
case 32:
iVar0 +=3;
break;
}
break;
case 14:
switch (iParam1){
case 36:
iVar0 +=18;
break;
case 37:
iVar0 +=18;
break;
case 38:
iVar0 +=18;
break;
}
break;
case 17:
switch (iParam1){
case 42:
iVar0 +=10;
break;
case 43:
iVar0 +=10;
break;
case 44:
iVar0 +=10;
break;
}
break;
case 15:
switch (iParam1){
case 45:
iVar0 +=17;
break;
case 46:
iVar0 +=17;
break;
case 47:
iVar0 +=17;
break;
}
break;
case 16:
switch (iParam1){
case 48:
iVar0 +=11;
break;
case 49:
iVar0 +=11;
break;
case 50:
iVar0 +=11;
break;
}
break;
}
iVar0=(iVar0 + func_266(iParam0));
return iVar0;
}

int func_266(int iParam0){
if(func_268(iParam0)){
if(func_267(iParam0)){
return 4;
}
return 2;
}
return 0;
}

int func_267(int iParam0){
switch (iParam0){
case 7:
case 2:
case 9:
case 4:
case 17:
case 15:
case 16:
case 8:
case 10:
return 1;
default:
}
return 0;
}

int func_268(int iParam0){
switch (iParam0){
case 7:
case 2:
case 9:
case 4:
case 17:
case 15:
case 16:
case 8:
case 10:
return 1;
default:
}
return 0;
}

int func_269(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 5;
case 4:
return 12;
case 5:
return 4;
case 6:
return 4;
case 7:
return 2;
case 8:
return 12;
case 9:
return 12;
case 10:
return 9;
case 11:
return 8;
case 12:
return 7;
case 13:
return 5;
case 14:
return 12;
case 15:
return 13;
case 16:
return 5;
case 17:
return 15;
case 19:
return 4;
case 18:
return 11;
default:
}
return 8;
}


float func_270(int iParam0){
if(func_271()){
switch (iParam0){
case 0:
switch (Local_159.f_395[0]){
case 0:
return 138.3995f;
case 1:
return 143.5995f;
case 2:
return 72.3994f;
case 3:
return 133.7989f;
case 4:
return 242.1995f;
default:
}
break;
case 1:
switch (Local_159.f_395[0]){
case 0:
return 138.3995f;
case 1:
return 143.5995f;
case 2:
return 72.3994f;
case 3:
return 133.7989f;
case 4:
return 242.1995f;
default:
}
break;
}}
if(func_217()){
switch (iParam0){
case 0:
switch (Local_159.f_395[0]){
case 0:
return 29.2012f;
case 1:
return 293.3999f;
case 2:
return 144.6493f;
case 3:
return 305.7995f;
case 4:
return 265.1998f;
default:
}
break;
case 1:
switch (Local_159.f_395[0]){
case 0:
return 29.2012f;
case 1:
return 293.3999f;
case 2:
return 144.6493f;
case 3:
return 305.7995f;
case 4:
return 265.1998f;
default:
}
break;
}}
return 124.5999f;
}


bool func_271(){
return func_10()==13;
}


Vector3 func__272(int iParam0){
if(func_271()){
switch (iParam0){
case 0:
switch (Local_159.f_395[0]){
case 0:
return 1158.124f, -4352.054f, 0.2f;
case 1:
return 2568.467f, -3494.837f, 0.2f;
case 2:
return -2046.004f, -4112.687f, 0.2f;
case 3:
return -2804.802f, -2614.12f, 0.2f;
case 4:
return -414.3029f, -4404.976f, 0.2f;
default:
}
break;
case 1:
switch (Local_159.f_395[0]){
case 0:
return 1157.04f, -4351.059f, 0.2f;
case 1:
return 2567.951f, -3493.595f, 0.2f;
case 2:
return -2045.257f, -4111.685f, 0.2f;
case 3:
return -2804.355f, -2612.158f, 0.2f;
case 4:
return -412.17f, -4408.401f, 0.2f;
default:
}
break;
}}
if(func_217()){
switch (iParam0){
case 0:
switch (Local_159.f_395[0]){
case 0:
return -3017.04f, -1744.734f, 0.2f;
case 1:
return 362.1313f, -4237.417f, 0.2f;
case 2:
return -1186.682f, -4125.632f, 0.2f;
case 3:
return 3186.52f, -3343.655f, 0.2f;
case 4:
return 2227.898f, -4272.729f, 0.2f;
default:
}
break;
case 1:
switch (Local_159.f_395[0]){
case 0:
return -3016.528f, -1745.616f, 0.2f;
case 1:
return 362.1313f, -4237.417f, 0.2f;
case 2:
return -1187.493f, -4126.532f, 0.2f;
case 3:
return 3186.269f, -3345.155f, 0.2f;
case 4:
return 2228.611f, -4273.838f, 0.2f;
default:
}
break;
}}
return 1678.634f, 2307.834f, 74.3844f;
}

int func_273(int iParam0){
switch (func_10()){
case 12:
case 13:
if(iParam0==0){
return joaat("a_m_y_beach_03");
}else{
return joaat("a_m_y_busicas_01");
}
break;
case 9:
switch (Local_159.f_385){
case 0:
if(iParam0==6){
return joaat("g_f_y_lost_01");
}
return joaat("g_m_y_lost_01");
case 1:
return joaat("g_m_y_azteca_01");
case 2:
return joaat("g_m_y_lost_01");
case 3:
return joaat("g_m_m_chigoon_02");
case 4:
return joaat("g_m_y_lost_01");
default:
}
break;
}
return joaat("g_m_y_strpunk_01");
}

int func_274(){
if(func_276() || func_275()){
return 1;
}
return 0;
}


bool func_275(){
return func_10()==8;
}


bool func_276(){
return func_277(func_10());
}

int func_277(int iParam0){
if(iParam0==12 || iParam0==13){
return 1;
}
return 0;
}

int func_278(){
switch (func_10()){
case 13:
return 2;
case 12:
return 2;
default:
}
return 0;
}

int func_279(){
struct<3> Var0;
struct<3> Var1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Var0={
func_17(Local_159.f_54) 
};
}
if(!func_345()){
func_34(2);
return 1;
}
if(!func_37(2)){
if(func_345() || func_344(Var0, &Var1, &uVar2, &uVar3, 1, 1, 1)){
iVar4=0;
while (iVar4 < func_343()){
if(func_210(func_342(iVar4)) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_39[iVar4])){
if(func_345()){
Var1={
func_341(iVar4) 
};
uVar2=func_338(iVar4);
}
if(NETWORK::CAN_REGISTER_MISSION_VEHICLES(func_284(168, -1, 1, -1, -1, -1) + 1)){
if(func_281(&(Local_159.f_39[iVar4]), func_342(iVar4), Var1, uVar2, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_ENT(Local_159.f_39[iVar4]), "MPBitset")){
iVar5=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_ENT(Local_159.f_39[iVar4]), "MPBitset");
}
MISC::SET_BIT(&iVar5, 10);
MISC::SET_BIT(&iVar5, 11);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_159.f_39[iVar4]), "MPBitset", iVar5);
}
if(func_276()){
VEHICLE::SET_BOAT_ANCHOR(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]), 1);
}
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]), 0, 0);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_ENT(Local_159.f_39[iVar4]), 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_159.f_39[iVar4]), 1);
VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]), 0);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_159.f_39[iVar4]), 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]), 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]), 1);
VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]), 0);
func_280(NETWORK::NET_TO_VEH(Local_159.f_39[iVar4]));
}}}
iVar4++;
}
iVar4=0;
while (iVar4 < func_343()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_39[iVar4])){
func_34(2);
}
iVar4++;
}}}
return func_37(2);
}


void func_280(int iParam0){
if(!Global_262145.f_4712){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
}}

int func_281(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_282(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_282(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_283(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_283(bool bParam0, struct<3> Param1, int iParam2){
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

int func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5){
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 157:
return 4;
case 167:
return func_337(iParam1);
case 170:
return 2;
case 171:
return 0;
case 172:
return 5;
case 173:
return 14;
case 168:
return 8;
case 178:
case 188:
return func_334(iParam1, iParam3, iParam4);
case 225:
case 226:
return func_329(iParam1, iParam3, iParam4, 0, 0);
case 227:
return 0;
case 229:
case 230:
return func_316(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
case 233:
return func_306(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, 0, 0);
return 6;
case 190:
return 18;
case 191:
return 0;
case 192:
return func_305(iParam1, iParam3);
case 179:
return 0;
case 183:
return 5;
case 182:
return 14;
case 185:
return 24;
case 186:
return 13;
case 180:
return 6;
case 193:
return 6;
case 194:
return 0;
case 197:
return 4;
case 199:
return 0;
case 195:
return 20;
case 201:
return 0;
case 198:
return 8;
case 205:
return 1;
case 207:
return 8;
case 208:
return 2;
case 209:
return 6;
case 210:
return 0;
case 214:
return 5;
case 215:
return 11;
case 216:
return 8;
case 217:
return 24;
case 218:
return 23;
case 219:
return 1;
case 220:
return 4;
case 221:
return 4;
case 237:
case 250:
return func_303(iParam1, iParam3, iParam4);
case 238:
case 249:
return func_302(iParam1);
case 239:
return 4;
case 240:
return 11;
case 241:
return 3;
case 242:
return 5;
case 244:
return 4;
case 248:
return 1;
case 243:
return func_296(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
case 158:
return func_289(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
case 181:
return func_285(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(bParam5), 0, -1, 0, 0);
default:
}
return 0;
}

int func_285(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
}
if(!bParam5){
iVar0=(iVar0 + func_288(iParam0, -1));
}
if(!bParam6){
if(func_287(0, iParam1) !=-1){
iVar0=(iVar0 + func_286(func_248(iParam2) + 1, iParam0, iParam2));
}}
if(!bParam3){
if(func_226(iParam0, iParam1)){
iVar0=(iVar0 + func_225(iParam0, iParam1));
}}
return iVar0;
}

int func_286(var uParam0, int iParam1, int iParam2){
switch (iParam1){
case 2:
return 3;
default:
}
return 1;
}

int func_287(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
default:
}
break;
}
return -1;
}

int func_288(int iParam0, int iParam1){
switch (iParam0){
case 2:
return 0;
default:
}
return 0;
}

int func_289(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
switch (iParam0){
case 0:
iVar0++;
break;
case 24:
iVar0++;
break;
case 10:
switch (iParam1){
case 30:
iVar0 +=4;
break;
case 31:
case 32:
iVar0 +=3;
break;
}
break;
case 33:
switch (iParam1){
case 89:
iVar0++;
break;
case 90:
iVar0 +=2;
break;
}
break;
case 36:
iVar0 +=2;
break;
case 37:
iVar0 +=2;
break;
case 38:
iVar0++;
break;
case 8:
iVar0 +=7;
break;
case 13:
switch (iParam1){
case 38:
iVar0 +=3;
break;
case 39:
iVar0 +=3;
break;
case 40:
iVar0 +=4;
break;
}
break;
case 16:
iVar0 +=12;
break;
case 35:
iVar0 +=4;
break;
case 4:
iVar0 +=16;
break;
case 46:
iVar0++;
break;
case 9:
iVar0 +=7;
break;
case 14:
iVar0 +=7;
break;
case 17:
iVar0 +=7;
break;
case 47:
iVar0 +=2;
break;
case 11:
iVar0 +=3;
break;
case 18:
iVar0 +=4;
break;
case 6:
iVar0 +=11;
break;
case 48:
iVar0 +=2;
break;
case 44:
iVar0 +=2;
break;
case 21:
iVar0 +=8;
break;
case 22:
iVar0 +=3;
break;
case 7:
iVar0 +=7;
break;
case 15:
iVar0++;
break;
case 2:
iVar0++;
break;
case 34:
iVar0 +=5;
break;
case 27:
iVar0 +=9;
break;
case 26:
iVar0 +=3;
break;
case 31:
iVar0++;
break;
case 3:
iVar0 +=21;
break;
case 12:
iVar0 +=20;
break;
case 41:
iVar0 +=11;
break;
case 49:
iVar0 +=3;
break;
case 29:
iVar0++;
break;
case 5:
iVar0 +=3;
break;
case 50:
iVar0 +=4;
break;
case 23:
iVar0 +=4;
break;
case 20:
iVar0 +=3;
break;
case 32:
iVar0=iVar0;
break;
case 51:
iVar0 +=4;
break;
case 52:
iVar0 +=6;
break;
case 39:
iVar0 +=2;
break;
case 40:
iVar0++;
break;
case 25:
iVar0 +=3;
break;
}
if(!bParam5){
iVar0=(iVar0 + func_295(iParam0, -1));
}
if(!bParam6){
if(func_294(0, iParam1) !=-1){
iVar0=(iVar0 + func_290(func_248(iParam2) + 1, iParam0, iParam2));
}}
if(!bParam3){
if(func_231(iParam0, iParam1)){
iVar0=(iVar0 + func_230(iParam0, iParam1));
}}
return iVar0;
}

int func_290(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
switch (iParam1){
case 43:
return 3;
case 17:
case 18:
case 15:
return 2;
case 12:
case 13:
if(iParam2 !=func_33()){
if(func_292(iParam2, 1)){
Var0={
func_291(iParam2) 
};
}}else{
return 4;
}
if(Var0.f_1==4){
return 4;
}else{
return 2;
}
break;
case 53:
if(iParam0==1){
}
break;
}
return 1;
}


Vector3 func__291(int iParam0){
return Global_1894573[iParam0 /*608*/].f_10.f_305;
}


bool func_292(bool bParam0, bool bParam1){
if(!bParam1){
if(func_293(bParam0)){
return 0;
}}
return Global_1894573[bParam0 /*608*/].f_10 !=func_33();
}

int func_293(bool bParam0){
if(bParam0 !=func_33()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_33()){
return Global_1894573[bParam0 /*608*/].f_10==bParam0;
}}
return 0;
}

int func_294(int iParam0, int iParam1){
switch (iParam1){
case 96:
case 97:
case 98:
case 108:
case 109:
case 110:
case 118:
case 119:
case 120:
case 105:
case 106:
case 107:
return 0;
case 66:
case 67:
case 68:
case 30:
case 31:
case 32:
case 121:
case 122:
case 123:
return 1;
case 93:
case 94:
case 95:
return 3;
case 0:
case 1:
case 2:
case 3:
case 4:
return 1;
case 116:
case 117:
return 2;
case 20:
return 9;
case 21:
return 5;
case 27:
case 28:
case 29:
return 7;
case 114:
case 115:
return iParam0;
case 46:
case 47:
case 48:
switch (iParam0){
case 0:
return 2;
case 1:
return 3;
case 2:
return 4;
case 3:
return 5;
default:
}
break;
case 38:
case 39:
case 40:
switch (iParam0){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
case 3:
return 6;
default:
}
break;
case 41:
case 42:
switch (iParam0){
case 0:
return 5;
case 1:
return 6;
default:
}
break;
case 49:
case 50:
switch (iParam0){
case 0:
return 7;
case 1:
return 8;
default:
}
break;
case 33:
case 34:
case 35:
switch (iParam0){
case 0:
case 1:
return 3;
default:
}
break;
case 51:
case 52:
switch (iParam0){
case 0:
return 1;
case 1:
return 2;
default:
}
break;
case 43:
case 44:
case 45:
switch (iParam0){
case 0:
return 1;
case 1:
return 2;
default:
}
break;
case 36:
case 37:
switch (iParam0){
case 0:
return 20;
case 1:
return 21;
case 2:
return 22;
case 3:
return 23;
default:
}
break;
case 17:
case 18:
case 19:
return 3;
case 131:
return 4;
}
return -1;
}

int func_295(int iParam0, int iParam1){
switch (iParam0){
case 53:
return 0;
default:
}
return 0;
}

int func_296(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
switch (iParam0){
case 13:
iVar0 +=4;
break;
case 1:
iVar0 +=10;
break;
case 15:
iVar0 +=21;
break;
case 14:
iVar0 +=2;
break;
case 11:
switch (iParam1){
case 35:
iVar0 +=4;
break;
case 36:
iVar0 +=5;
break;
case 37:
iVar0 +=5;
break;
}
break;
case 5:
iVar0 +=3;
break;
case 6:
iVar0 +=2;
break;
case 0:
switch (iParam1){
case 0:
iVar0 +=5;
break;
case 1:
iVar0 +=5;
break;
}
break;
case 10:
switch (iParam1){
case 31:
iVar0 +=2;
break;
case 32:
iVar0++;
break;
case 33:
iVar0 +=2;
break;
case 34:
iVar0 +=2;
break;
}
break;
case 12:
iVar0 +=3;
break;
case 9:
switch (iParam1){
case 28:
switch (iParam4){
case 0:
iVar0 +=3;
break;
case 1:
iVar0 +=4;
break;
case 2:
iVar0 +=3;
break;
}
break;
case 29:
switch (iParam4){
case 0:
iVar0 +=4;
break;
case 1:
iVar0 +=3;
break;
case 2:
iVar0 +=3;
break;
}
break;
case 30:
switch (iParam4){
case 0:
iVar0 +=3;
break;
case 1:
iVar0 +=3;
break;
case 2:
iVar0 +=3;
break;
}
break;
}
break;
case 3:
iVar0 +=6;
break;
case 4:
switch (iParam1){
case 12:
iVar0 +=7;
break;
case 13:
iVar0 +=10;
break;
case 14:
iVar0 +=8;
break;
}
break;
case 2:
iVar0 +=3;
break;
case 8:
iVar0=iVar0;
break;
case 7:
iVar0++;
break;
}
if(!bParam5){
if(func_301(iParam0)){
iVar0=(iVar0 + func_300(iParam0, iParam2));
}
iVar0=(iVar0 + func_299(iParam0, -1));
}
if(!bParam6){
if(func_298(0, iParam1) !=-1){
iVar0=(iVar0 + func_297(func_248(iParam2) + 1, iParam0));
}}
if(!bParam3){
if(func_236(iParam0, iParam1)){
iVar0=(iVar0 + func_235(iParam0, iParam1));
}}
return iVar0;
}

int func_297(int iParam0, int iParam1){
switch (iParam1){
case 6:
if(iParam0==1){
return 1;
}else{
return 2;
}
break;
}
return 1;
}

int func_298(int iParam0, int iParam1){
switch (iParam1){
case 46:
case 47:
case 48:
switch (iParam0){
case 0:
return 20;
default:
}
break;
case 35:
case 36:
case 37:
return 0;
case 2:
case 3:
case 4:
case 5:
return 0;
case 28:
case 29:
case 30:
return 0;
case 18:
case 19:
case 20:
case 21:
switch (iParam0){
case 0:
return 2;
case 1:
return 3;
default:
}
break;
case 31:
case 32:
case 33:
case 34:
return 0;
case 38:
case 39:
case 40:
return 0;
case 12:
return 6;
case 13:
return 9;
case 14:
return 7;
case 22:
case 23:
case 24:
return 0;
case 25:
case 26:
case 27:
return 0;
}
return -1;
}

int func_299(int iParam0, int iParam1){
switch (iParam0){
case 16:
return 0;
default:
}
return 0;
}

int func_300(int iParam0, int iParam1){
switch (iParam0){
case 14:
case 5:
case 0:
case 3:
case 2:
return 0;
case 6:
if(func_248(iParam1) + 1==1){
return 1;
}else{
return 2;
}
break;
}
return 1;
}

int func_301(int iParam0){
return 0;
}

int func_302(int iParam0){
switch (iParam0){
case 0:
return 5;
case 1:
return 4;
case 2:
return 6;
case 3:
return 1;
case 4:
return 3;
case 5:
return 4;
default:
}
return 0;
}

int func_303(int iParam0, int iParam1, int iParam2){
int iVar0;
switch (iParam0){
case 12:
switch (iParam1){
case 80:
iVar0++;
break;
case 81:
iVar0++;
break;
case 82:
iVar0++;
break;
}
break;
case 22:
iVar0 +=4;
break;
case 18:
iVar0 +=4;
break;
case 9:
switch (iParam1){
case 71:
case 72:
case 73:
iVar0 +=3;
break;
}
break;
case 11:
switch (iParam1){
case 77:
case 78:
case 79:
iVar0 +=2;
break;
}
break;
case 15:
iVar0++;
break;
case 23:
iVar0++;
break;
case 20:
iVar0 +=4;
break;
case 17:
iVar0++;
break;
case 19:
iVar0++;
break;
case 16:
iVar0++;
break;
case 3:
iVar0 +=8;
break;
case 14:
iVar0++;
break;
case 10:
iVar0 +=8;
break;
case 4:
case 24:
case 2:
iVar0++;
break;
case 1:
iVar0 +=5;
break;
case 5:
iVar0 +=3;
break;
case 0:
iVar0 +=3;
break;
}
if(func_304(iParam0)){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_304(int iParam0){
return 1;
}

int func_305(int iParam0, int iParam1){
int iVar0;
switch (iParam0){
case 20:
iVar0=iVar0;
break;
case 0:
switch (iParam1){
case 1:
iVar0 +=7;
break;
case 2:
iVar0 +=6;
break;
case 3:
iVar0 +=4;
break;
case 4:
iVar0 +=2;
break;
case 5:
iVar0 +=3;
break;
case 6:
iVar0 +=2;
break;
}
break;
case 1:
switch (iParam1){
case 7:
iVar0 +=4;
break;
case 8:
iVar0 +=4;
break;
case 9:
iVar0 +=2;
break;
case 10:
iVar0 +=2;
break;
case 11:
iVar0 +=2;
break;
case 12:
iVar0 +=4;
break;
}
break;
case 2:
switch (iParam1){
case 13:
iVar0 +=2;
break;
case 14:
iVar0 +=4;
break;
case 15:
iVar0 +=6;
break;
case 16:
iVar0 +=3;
break;
case 17:
iVar0 +=3;
break;
case 18:
iVar0 +=2;
break;
}
break;
case 4:
switch (iParam1){
case 19:
iVar0 +=5;
break;
case 20:
iVar0 +=4;
break;
case 21:
iVar0 +=6;
break;
case 22:
iVar0 +=2;
break;
case 23:
iVar0 +=4;
break;
case 24:
iVar0 +=5;
break;
}
break;
case 6:
switch (iParam1){
case 19:
iVar0 +=5;
break;
case 20:
iVar0 +=4;
break;
case 21:
iVar0 +=6;
break;
case 22:
iVar0 +=2;
break;
case 23:
iVar0 +=4;
break;
case 24:
iVar0 +=5;
break;
}
break;
case 5:
switch (iParam1){
case 31:
iVar0 +=5;
break;
case 32:
iVar0 +=2;
break;
case 33:
iVar0 +=3;
break;
case 34:
iVar0 +=5;
break;
case 35:
iVar0 +=5;
break;
case 36:
iVar0 +=5;
break;
}
break;
case 9:
switch (iParam1){
case 68:
iVar0=iVar0;
break;
case 69:
iVar0=iVar0;
break;
case 70:
iVar0=iVar0;
break;
case 71:
iVar0=iVar0;
break;
case 72:
iVar0=iVar0;
break;
case 73:
iVar0=iVar0;
break;
}
break;
case 3:
switch (iParam1){
case 74:
iVar0++;
break;
case 75:
iVar0++;
break;
case 76:
iVar0++;
break;
case 77:
iVar0++;
break;
}
break;
case 10:
switch (iParam1){
case 78:
iVar0=iVar0;
break;
case 79:
iVar0=iVar0;
break;
case 80:
iVar0=iVar0;
break;
case 81:
iVar0=iVar0;
break;
case 82:
iVar0=iVar0;
break;
case 83:
iVar0=iVar0;
break;
case 84:
iVar0=iVar0;
break;
}
break;
case 7:
iVar0 +=4;
break;
case 8:
switch (iParam1){
case 62:
iVar0 +=6;
break;
case 63:
iVar0 +=6;
break;
case 64:
iVar0 +=6;
break;
case 65:
iVar0 +=6;
break;
case 66:
iVar0 +=6;
break;
case 67:
iVar0 +=6;
break;
}
break;
case 11:
switch (iParam1){
case 85:
iVar0=iVar0;
break;
case 86:
iVar0=iVar0;
break;
case 87:
iVar0=iVar0;
break;
case 88:
iVar0=iVar0;
break;
case 89:
iVar0=iVar0;
break;
}
break;
case 12:
switch (iParam1){
case 90:
iVar0 +=2;
break;
case 91:
iVar0 +=2;
break;
case 92:
iVar0 +=2;
break;
case 93:
iVar0 +=2;
break;
case 94:
iVar0 +=2;
break;
}
break;
case 13:
switch (iParam1){
case 37:
iVar0 +=3;
break;
}
break;
case 14:
switch (iParam1){
case 38:
iVar0 +=4;
break;
case 39:
iVar0 +=4;
break;
case 40:
iVar0 +=4;
break;
case 41:
iVar0 +=4;
break;
}
break;
case 15:
iVar0=iVar0;
break;
case 16:
iVar0=iVar0;
break;
case 17:
iVar0=iVar0;
break;
case 18:
iVar0=iVar0;
break;
case 19:
iVar0=iVar0;
break;
default:
iVar0=iVar0;
break;
}
if((func_243(iParam0) && iParam0 !=7) || iParam0==12){
iVar0=(iVar0 + func_242(iParam0, func_247() + 1));
}
return iVar0;
}

int func_306(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
case 1:
iVar0 +=5;
break;
case 2:
iVar0 +=2;
break;
case 3:
iVar0++;
break;
case 4:
iVar0 +=3;
break;
case 5:
iVar0 +=2;
break;
case 8:
iVar0 +=3;
break;
case 6:
iVar0++;
break;
case 12:
iVar0 +=2;
break;
case 7:
iVar0 +=6;
break;
case 9:
iVar0=iVar0;
break;
case 11:
iVar0=iVar0;
break;
case 13:
iVar0 +=2;
break;
case 10:
iVar0 +=4;
break;
}
if(!bParam5){
if(func_315(iParam0)){
if(iParam3 !=func_33()){
iVar0=(iVar0 + func_312(iParam0, func_248(iParam3) + 1, iParam3, -1, iParam2));
}}
if(iParam3 !=func_33()){
iVar0=(iVar0 + func_309(iParam0, func_248(iParam3) + 1));
}}
if(!bParam6){
if(func_308(0, iParam1) !=-1){
if(iParam3 !=func_33()){
iVar0=(iVar0 + func_307(func_248(iParam3) + 1, iParam0));
}}}
if(!bParam4){
if(func_254(iParam0)){
iVar0=(iVar0 + func_253(iParam0));
}}
return iVar0;
}

int func_307(var uParam0, int iParam1){
return 2;
}

int func_308(int iParam0, int iParam1){
switch (iParam1){
case 136:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
}
break;
}
return -1;
}

int func_309(int iParam0, int iParam1){
var uVar0;
switch (iParam0){
case 0:
return 0;
case 8:
if(iParam1 > 4){
return 4;
}
return iParam1;
case 1:
uVar0=func_310(5329, -1, 0);
if(MISC::IS_BIT_SET(uVar0, 7)){
if(iParam1 > 4){
return 4;
}
return iParam1;
}else{
return 0;
}
break;
}
return 0;
}

int func_310(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_311(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_311(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_32();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_312(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
if(iParam4 > 0){
return iParam4;
}
switch (iParam0){
case 5:
case 7:
case 6:
case 4:
case 10:
iVar0=1;
break;
case 8:
iVar0=2;
break;
case 3:
case 2:
iVar0=4;
break;
default:
if(func_315(iParam0)){
iVar0=2;
}else{
iVar0=1;
}
break;
}
if(iVar0 > func_314(iParam0)){
iVar0=func_314(iParam0);
}elseif(iVar0 < func_313(iParam0)){
iVar0=func_313(iParam0);
}
return iVar0;
}

int func_313(int iParam0){
return 1;
}

int func_314(int iParam0){
return 4;
}

int func_315(int iParam0){
switch (iParam0){
case 3:
case 2:
case 4:
case 5:
case 6:
case 7:
case 10:
return 1;
default:
}
return 0;
}

int func_316(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
int iVar0;
switch (iParam0){
case 11:
iVar0 +=9;
break;
case 1:
iVar0=iVar0;
break;
case 7:
iVar0 +=10;
break;
case 2:
iVar0 +=12;
break;
case 4:
iVar0 +=10;
break;
case 8:
iVar0++;
break;
case 5:
iVar0 +=2;
break;
case 12:
switch (iParam1){
case 0:
iVar0++;
break;
case 1:
iVar0++;
break;
case 2:
iVar0=iVar0;
break;
}
break;
case 14:
switch (iParam1){
case 3:
iVar0 +=4;
break;
case 4:
iVar0 +=2;
break;
case 5:
iVar0 +=5;
break;
}
break;
case 3:
if(iParam2 >=4){
iVar0 +=10;
}elseif(iParam2==3){
iVar0 +=8;
}elseif(iParam2==2){
iVar0 +=7;
}elseif(iParam2==1){
iVar0 +=6;
}
break;
case 10:
switch (iParam1){
case 34:
iVar0++;
break;
}
break;
case 9:
switch (iParam1){
case 6:
iVar0++;
break;
case 7:
iVar0 +=4;
break;
case 8:
iVar0 +=2;
break;
}
break;
case 0:
if(iParam2 >=3){
iVar0 +=2;
}else{
iVar0++;
}
break;
case 23:
iVar0=(iVar0 + iParam2);
break;
case 20:
iVar0 +=5;
break;
case 22:
iVar0=(iVar0 + (5 * iParam2));
break;
case 25:
iVar0=(iVar0 + iParam2);
break;
case 24:
iVar0=(iVar0 + (3 * iParam2));
break;
case 16:
iVar0=(iVar0 + (5 * iParam2));
break;
case 17:
iVar0 +=5;
break;
case 26:
iVar0++;
break;
}
if(!bParam5){
if(func_328(iParam0)){
if(iParam3 !=func_33()){
iVar0=(iVar0 + func_321(iParam0, func_248(iParam3) + 1, iParam3, -1, iParam2));
}}
if(iParam3 !=func_33()){
iVar0=(iVar0 + func_320(iParam0, func_248(iParam3) + 1));
}}
if(!bParam6){
if(func_319(0, iParam1) !=-1){
if(iParam3 !=func_33()){
iVar0=(iVar0 + func_317(func_248(iParam3) + 1, iParam0));
}}}
if(!bParam4){
if(func_259(iParam0)){
iVar0=(iVar0 + func_258(iParam0));
}}
return iVar0;
}

int func_317(int iParam0, int iParam1){
switch (iParam0){
case 1:
if(func_318(iParam1)){
return 1;
}else{
return 1;
}
break;
case 2:
if(func_318(iParam1)){
return 1;
}else{
return 1;
}
break;
case 3:
if(func_318(iParam1)){
return 2;
}else{
return 2;
}
break;
case 4:
if(func_318(iParam1)){
return 2;
}else{
return 2;
}
break;
case 5:
if(func_318(iParam1)){
return 2;
}else{
return 2;
}
break;
case 6:
if(func_318(iParam1)){
return 2;
}else{
return 2;
}
break;
case 7:
if(func_318(iParam1)){
return 2;
}else{
return 2;
}
break;
case 8:
if(func_318(iParam1)){
return 2;
}else{
return 2;
}
break;
}
return 1;
}

int func_318(int iParam0){
switch (iParam0){
case 12:
return 1;
default:
}
return 0;
}

int func_319(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
}
break;
case 1:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
}
break;
case 2:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
default:
}
break;
case 19:
switch (iParam0){
case 0:
return 12;
case 1:
return 12;
case 2:
return 13;
case 3:
return 13;
default:
}
break;
case 20:
switch (iParam0){
case 0:
return 12;
case 1:
return 12;
case 2:
return 13;
case 3:
return 13;
default:
}
break;
case 21:
switch (iParam0){
case 0:
return 12;
case 1:
return 12;
case 2:
return 13;
case 3:
return 13;
default:
}
break;
case 6:
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 2;
case 3:
return 2;
default:
}
break;
case 7:
switch (iParam0){
case 0:
return 4;
case 1:
return 4;
case 2:
return 5;
case 3:
return 5;
default:
}
break;
case 8:
switch (iParam0){
case 0:
return 2;
case 1:
return 2;
case 2:
return 3;
case 3:
return 3;
default:
}
break;
case 48:
case 49:
case 50:
switch (iParam0){
case 0:
return 2;
case 1:
return 2;
case 2:
return 3;
case 3:
return 3;
default:
}
break;
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
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
default:
}
break;
case 28:
case 29:
case 30:
switch (iParam0){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
case 3:
return 9;
default:
}
break;
case 43:
case 44:
case 45:
case 46:
case 47:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 1;
case 3:
return 1;
default:
}
break;
case 40:
case 41:
case 42:
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
default:
}
break;
}
return -1;
}

int func_320(int iParam0, int iParam1){
switch (iParam0){
case 1:
if(iParam1 > 4){
return 2;
}
return 1;
case 14:
if(iParam1 > 3){
return 2;
}
return 1;
case 7:
if(iParam1 > 4){
return 4;
}
return iParam1;
case 2:
case 4:
case 3:
if(iParam1 > 4){
return 4;
}
return iParam1;
case 10:
if(iParam1 > 4){
return 2;
}
return 1;
case 9:
return 1;
case 0:
if(iParam1 > 1){
return 2;
}
return 1;
case 8:
if(iParam1 > 3){
return 2;
}
return 1;
case 5:
if(iParam1 > 2){
return 2;
}
return 1;
case 13:
if(iParam1 > 4){
return 4;
}
return iParam1;
case 11:
if(iParam1 > 2){
return 2;
}
return 1;
default:
}
return ceil((IntToFloat(iParam1) / 2f));
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
if(iParam4 > 0){
return iParam4;
}
if(func_327(iParam0)){
iVar1=func_326(iParam3);
switch (iParam0){
case 21:
iVar0=1;
break;
case 23:
switch (iVar1){
case 1:
iVar0=1;
break;
case 2:
iVar0=2;
break;
case 3:
iVar0=2;
break;
}
break;
case 15:
switch (iVar1){
case 1:
iVar0=3;
break;
case 2:
iVar0=6;
break;
case 3:
iVar0=8;
break;
}
break;
case 20:
case 24:
case 22:
case 16:
case 17:
switch (iVar1){
case 1:
iVar0=1;
break;
case 2:
iVar0=2;
break;
case 3:
iVar0=3;
break;
}
break;
case 25:
switch (iVar1){
case 1:
iVar0=2;
break;
case 2:
iVar0=3;
break;
case 3:
iVar0=3;
break;
}
break;
}
return iVar0;
}elseif(func_325(iParam0)){
iVar0=1;
return iVar0;
}else{
iVar0=iParam1;
if(iVar0 > func_324(iParam2)){
iVar0=func_324(iParam2);
}}
if(iVar0 > func_323(iParam0)){
iVar0=func_323(iParam0);
}elseif(iVar0 < func_322(iParam0)){
iVar0=func_322(iParam0);
}
return iVar0;
}

int func_322(int iParam0){
switch (iParam0){
case 15:
return 3;
default:
}
return 1;
}

int func_323(int iParam0){
if(!func_327(iParam0)){
if(func_328(iParam0)){
if(func_318(iParam0)){
return 2;
}
return 3;
}}else{
switch (iParam0){
case 21:
return 1;
case 23:
return 2;
case 15:
return 9;
default:}
return 3;
}
return 4;
}

int func_324(int iParam0){
if(iParam0==func_33() || Global_1853910[iParam0 /*862*/].f_267.f_293==0){
return 50;
}
return (50 - Global_1853910[iParam0 /*862*/].f_267.f_293.f_3);
}

int func_325(int iParam0){
switch (iParam0){
case 26:
return 1;
default:
}
return 0;
}

int func_326(int iParam0){
if(iParam0 > 25){
return 3;
}elseif(iParam0 > 10){
return 2;
}
return 1;
}

int func_327(int iParam0){
switch (iParam0){
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
return 1;
default:
}
return 0;
}

int func_328(int iParam0){
if(func_327(iParam0) || func_325(iParam0)){
return 1;
}
return 0;
}

int func_329(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
case 1:
switch (iParam1){
case 0:
iVar0 +=3;
break;
case 1:
iVar0 +=3;
break;
case 2:
iVar0 +=3;
break;
}
break;
case 2:
if(iParam2 >=4){
iVar0=(iVar0 + iParam2 + 2);
}else{
iVar0 +=5;
}
break;
case 3:
switch (iParam1){
case 9:
iVar0 +=3;
break;
case 10:
iVar0 +=3;
break;
case 11:
iVar0 +=2;
break;
case 12:
iVar0 +=2;
break;
}
break;
case 4:
switch (iParam1){
case 14:
iVar0 +=2;
break;
case 15:
iVar0 +=4;
break;
case 13:
iVar0 +=2;
break;
}
break;
case 5:
iVar0 +=4;
break;
case 6:
switch (iParam1){
case 19:
iVar0 +=5;
break;
case 20:
iVar0 +=5;
break;
case 21:
iVar0 +=5;
break;
}
break;
case 7:
switch (iParam1){
case 22:
iVar0 +=4;
break;
case 23:
iVar0 +=3;
break;
case 24:
iVar0 +=3;
break;
}
if(func_332(iParam0, func_247() + 1, -1, iParam2)==1){
iVar0++;
}
break;
case 8:
switch (iParam1){
case 25:
iVar0 +=5;
break;
case 26:
iVar0 +=5;
break;
}
break;
case 9:
switch (iParam1){
case 27:
iVar0 +=2;
break;
case 28:
iVar0 +=2;
break;
}
break;
case 10:
switch (iParam1){
case 29:
iVar0 +=4;
break;
case 30:
iVar0 +=4;
break;
case 31:
iVar0 +=4;
break;
}
break;
case 11:
switch (iParam1){
case 32:
iVar0 +=2;
break;
case 33:
iVar0 +=2;
break;
case 34:
iVar0 +=2;
break;
}
break;
case 12:
iVar0=iVar0;
break;
case 13:
switch (iParam1){
case 35:
iVar0 +=3;
break;
case 36:
iVar0 +=3;
break;
case 37:
iVar0 +=2;
break;
}
break;
case 14:
iVar0 +=8;
break;
case 15:
iVar0=iVar0;
break;
case 16:
iVar0=iVar0;
break;
case 17:
iVar0=iVar0;
break;
case 19:
iVar0=iVar0;
break;
case 18:
iVar0=(iVar0 + iParam2);
break;
case 20:
iVar0 +=5;
break;
}
if(!bParam4){
if(func_331(iParam0)){
iVar0=(iVar0 + func_332(iParam0, func_247() + 1, -1, iParam2));
}
iVar0=(iVar0 + func_330(iParam0, func_247() + 1));
}
if(!bParam3){
if(func_264(iParam0)){
iVar0=(iVar0 + func_263(iParam0));
}}
return iVar0;
}

int func_330(int iParam0, int iParam1){
switch (iParam0){
case 2:
if(iParam1==1){
return 1;
}
return floor((IntToFloat(iParam1) / 1.5f));
case 5:
if(iParam1==1){
return 1;
}
return floor((IntToFloat(iParam1) / 2f));
default:
}
return 0;
}

int func_331(int iParam0){
switch (iParam0){
case 0:
case 3:
case 6:
case 7:
case 10:
case 11:
case 12:
case 14:
case 15:
case 16:
case 17:
case 19:
case 18:
return 1;
default:
}
return 0;
}

int func_332(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam3 > 0){
return iParam3;
}
if(func_333(iParam0)){
if(iParam2 <=Global_262145.f_21683){
iVar0=1;
if(iParam0==15){
iVar0=2;
}}elseif(iParam2 <=Global_262145.f_21684){
iVar0=2;
if(iParam0==18){
iVar0=1;
}}else{
iVar0=3;
if(iParam0==18){
iVar0=2;
}elseif(iParam0==19 || iParam0==2){
iVar0=4;
}}}elseif(iParam0==8){
if(iParam1 < 4){
iVar0=1;
}else{
iVar0=2;
}}elseif(iParam0==0 || iParam0==20){
iVar0=1;
}elseif(func_331(iParam0)){
if(iParam1 < Global_262145.f_21643){
iVar0=1;
}else{
iVar0=2;
}}else{
iVar0=iParam1;
}
if(iVar0==0){
iVar0=1;
}
return iVar0;
}

int func_333(int iParam0){
switch (iParam0){
case 14:
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

int func_334(int iParam0, int iParam1, int iParam2){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
case 1:
iVar0=iVar0;
break;
case 7:
iVar0=iVar0;
break;
case 8:
iVar0=iVar0;
break;
case 5:
iVar0=iVar0;
break;
case 11:
iVar0 +=3;
break;
case 13:
iVar0=iVar0;
break;
case 4:
switch (iParam1){
case 1:
iVar0 +=2;
break;
case 2:
iVar0 +=2;
break;
case 3:
iVar0 +=2;
break;
}
break;
case 6:
switch (iParam1){
case 18:
iVar0 +=2;
break;
case 19:
iVar0 +=2;
break;
case 20:
iVar0 +=2;
break;
}
break;
case 10:
switch (iParam1){
case 21:
iVar0 +=7;
break;
case 22:
iVar0 +=7;
break;
case 23:
iVar0 +=7;
break;
}
break;
case 9:
switch (iParam1){
case 27:
iVar0=iVar0;
break;
case 28:
iVar0=iVar0;
break;
case 29:
iVar0=iVar0;
break;
}
break;
case 3:
switch (iParam1){
case 30:
iVar0 +=2;
break;
case 31:
iVar0 +=2;
break;
case 32:
iVar0 +=2;
break;
}
break;
case 14:
switch (iParam1){
case 36:
iVar0 +=7;
break;
case 37:
iVar0 +=7;
break;
case 38:
iVar0 +=7;
break;
}
break;
case 2:
switch (iParam1){
case 39:
iVar0 +=4;
break;
case 40:
iVar0 +=4;
break;
case 41:
iVar0 +=6;
break;
}
break;
case 17:
switch (iParam1){
case 42:
iVar0 +=2;
break;
case 43:
iVar0 +=2;
break;
case 44:
iVar0 +=2;
break;
}
break;
case 15:
switch (iParam1){
case 45:
iVar0 +=6;
break;
case 46:
iVar0 +=6;
break;
case 47:
iVar0 +=6;
break;
}
break;
case 16:
switch (iParam1){
case 48:
iVar0 +=2;
break;
case 49:
iVar0 +=2;
break;
case 50:
iVar0 +=2;
break;
}
break;
case 12:
iVar0 +=11;
break;
}
iVar0=(iVar0 + func_336(iParam0, func_247() + 1, iParam2));
iVar0=(iVar0 + func_335(iParam0));
return iVar0;
}

int func_335(int iParam0){
if(func_268(iParam0)){
return 2;
}
return 0;
}

int func_336(int iParam0, var uParam1, int iParam2){
int iVar0;
if(iVar0==0){
if(iParam0==8){
iVar0=iParam2;
}else{
iVar0=1;
}}
if(iVar0==0){
iVar0=1;
}
return iVar0;
}

int func_337(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return 1;
case 2:
return 0;
case 3:
return 3;
case 4:
return 8;
case 5:
return 3;
case 6:
return 1;
case 7:
return 1;
case 8:
return 6;
case 9:
return 6;
case 10:
return 3;
case 11:
return 3;
case 12:
return 2;
case 13:
return 1;
case 14:
return 3;
case 15:
return 5;
case 16:
return 6;
case 17:
return 2;
case 19:
return 4;
case 18:
return 5;
default:
}
return 2;
}


float func_338(int iParam0){
if(func_220()){
switch (Local_159.f_385){
case 0:
if(iParam0==0){
return 126f;
}
return 261.598f;
case 1:
if(iParam0==0){
return 73.595f;
}
return 210.799f;
case 2:
if(iParam0==0){
return 0f;
}
return 34.2f;
case 3:
if(iParam0==0){
return 133.398f;
}
return 341.5993f;
case 4:
if(iParam0==0){
return 270.399f;
}
return 133.6f;
}
default:
}
if(func_339()){
return 100.5717f;
}
if(func_217()){
switch (Local_159.f_385){
case 0:
return 5.6f;
case 1:
return 293.3999f;
case 2:
return 144.6493f;
case 3:
return 305.7995f;
case 4:
return 265.1998f;
}
default:
}
if(func_271()){
switch (Local_159.f_385){
case 0:
return 1.2f;
case 1:
return 46.2f;
case 2:
return 273.199f;
case 3:
return 64.2f;
case 4:
return 2f;
}
default:
}
return 114.2482f;
}


bool func_339(){
return func_340(func_10());
}

int func_340(int iParam0){
if((((iParam0==8 || iParam0==7) || iParam0==9) || iParam0==10) || iParam0==11){
return 1;
}
return 0;
}


Vector3 func__341(int iParam0){
switch (func_10()){
case 12:
switch (Local_159.f_385){
case 0:
return -3018.016f, -1737.731f, 1.125f;
case 1:
return 369.5443f, -4234.714f, 0f;
case 2:
return -1190.621f, -4129.769f, 0f;
case 3:
return 3191.532f, -3339.914f, 0.75f;
case 4:
return 2233.975f, -4274.487f, 0f;
default:
}
break;
case 13:
switch (Local_159.f_385){
case 0:
return 1154.318f, -4355.971f, 0f;
case 1:
return 2564.08f, -3499.01f, -0.1876f;
case 2:
return -2051.98f, -4110.346f, 0f;
case 3:
return -2808.998f, -2617.194f, 0.9375f;
case 4:
return -407.7797f, -4408.372f, 0f;
default:
}
break;
case 9:
switch (Local_159.f_385){
case 0:
if(iParam0==0){
return 1704.879f, 3286.602f, 40.148f;
}
return 1689.943f, 3276.071f, 40.045f;
case 1:
if(iParam0==0){
return -25.427f, 3043.566f, 40.003f;
}
return -0.217f, 3046.414f, 39.661f;
case 2:
if(iParam0==0){
return -2095.506f, 2637.109f, 1.9348f;
}
return -2117.166f, 2616.247f, 0.0221f;
case 3:
if(iParam0==0){
return 212.767f, 2467.536f, 54.686f;
}
return 223.4591f, 2448.032f, 56.2378f;
case 4:
if(iParam0==0){
return 2121.68f, 2889.23f, 46.279f;
}
return 2110.948f, 2907.49f, 46.652f;
default:
}
break;
}
return -1193.289f, -2245.799f, 12.9446f;
}

int func_342(int iParam0){
switch (func_10()){
case 12:
case 13:
return joaat("marquis");
case 9:
switch (Local_159.f_385){
case 0:
if(iParam0==0){
return joaat("gburrito");
}
return joaat("daemon");
case 1:
if(iParam0==0){
return joaat("sadler");
}
return joaat("phoenix");
case 2:
return joaat("gburrito");
case 3:
return joaat("bison");
case 4:
return joaat("gburrito");
default:
}
break;
}
return joaat("marquis");
}

int func_343(){
switch (func_10()){
case 12:
return 1;
case 13:
return 1;
case 9:
return 2;
default:
}
return 0;
}

int func_344(struct<3> Param0, var uParam1, float fParam2, var uParam3, int iParam4, int iParam5, bool bParam6){
int iVar0;
while (true){
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam4, uParam1, uParam2, uParam3, 1, 1077936128, 0)){
if(func_130(*uParam1, 10f, 1f, 1f, 5f, iParam5, bParam6, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
return 1;
}}
iParam4++;
iVar0++;
if(iVar0 > 75){
*uParam1={
Param0 
};
return 0;
}}
return 0;
}

int func_345(){
if(func_276()){
return 1;
}
if(func_220()){
return 1;
}
return 0;
}

int func_346(){
bool bVar0;
if(func_37(1)){
return 1;
}
bVar0=false;
while (bVar0 < func_21()){
if(func_351(bVar0)){
}
bVar0++;
}
bVar0=false;
while (bVar0 < func_21()){
if(!ENTITY::DOES_ENTITY_EXIST(func_40(bVar0))){
return 0;
}
bVar0++;
}
if(func_339()){
if(func_350()==2){
func_347();
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_53)){
return 0;
}}}
func_34(1);
return 1;
}

int func_347(){
struct<3> Var0;
var uVar1;
int iVar2;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_53)){
if(func_210(joaat("buzzard"))){
Var0={
func_349() 
};
uVar1=func_348();
if(func_281(&(Local_159.f_53), joaat("buzzard"), Var0, uVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_159.f_53), 1, 1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_159.f_53), "MPBitset")){
iVar2=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_159.f_53), "MPBitset");
}
MISC::SET_BIT(&iVar2, 10);
MISC::SET_BIT(&iVar2, 11);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_159.f_53), "MPBitset", iVar2);
}
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_159.f_53), 0, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_159.f_53), 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_159.f_53), 1);
VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_159.f_53), 0);
}}}
return 0;
}


float func_348(){
switch (Local_159.f_395[0]){
case 0:
return 291.9019f;
case 1:
return 38.8973f;
case 2:
return 170.3048f;
case 3:
return 104.1791f;
case 4:
return 6.7766f;
case 5:
return 290.7564f;
case 6:
return 81.0553f;
case 7:
return 210.7148f;
case 8:
return 48.5395f;
case 9:
return 172.8551f;
case 10:
return 227.376f;
case 11:
return 109.6783f;
default:
}
return 0f;
}


Vector3 func__349(){
switch (Local_159.f_395[0]){
case 0:
return -1249.752f, -2863.093f, 12.9449f;
case 1:
return -1365.395f, -2587.993f, 12.9449f;
case 2:
return -924.1804f, -3067.145f, 12.9444f;
case 3:
return -975.8615f, -3410.342f, 12.8401f;
case 4:
return -1819.134f, -3186.567f, 12.9444f;
case 5:
return -1902.047f, -3139.103f, 12.9444f;
case 6:
return -1163.066f, -2256.789f, 12.9446f;
case 7:
return -1694.218f, -2741.422f, 14.2526f;
case 8:
return -999.9483f, -2950.592f, 12.9545f;
case 9:
return -1115.896f, -2946.971f, 12.9451f;
case 10:
return -1299.238f, -2136.711f, 12.9248f;
case 11:
return -1266.912f, -2471.362f, 12.9452f;
default:
}
return 0f, 0f, 0f;
}

int func_350(){
return Local_159.f_583;
}

int func_351(bool bParam0){
struct<31> Var0;
struct<3> Var1;
int iVar2;
bool bVar3;
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[bParam0])){
if(func_367(bParam0, &(Local_159.f_25), &(Local_159.f_28))){
if(func_276()){
Local_159.f_10[bParam0 /*3*/]={
Local_159.f_25 
};
Local_159.f_20[bParam0]=Local_159.f_28;
MISC::SET_BIT(&(Local_159.f_24), bParam0);
}elseif(!func_16(Local_159.f_10[bParam0 /*3*/], 0f, 0f, 0f, 0)){
if(bParam0==0 || (bParam0 > 0 && MISC::IS_BIT_SET(Local_159.f_24, (bParam0 - 1)))){
if(!MISC::IS_BIT_SET(Local_159.f_24, bParam0)){
if(func_210(func_366())){
Var0.f_4=1125515264;
Var0.f_5=1;
Var0.f_6=1;
Var0.f_8=1082130432;
Var0.f_9=1176255488;
Var0.f_10=1;
Var0.f_13=1;
Var0.f_15=2;
Var0.f_22=2;
Var0.f_25=1;
Var0.f_26=1;
Var0.f_29=1123024896;
Var0.f_30=1;
Var0.f_0=0f;
Var0.f_1=0;
Var0.f_4=200f;
Var0.f_5=0;
if(!func_339()){
Var0.f_6=1;
}else{
Var0.f_6=0;
}
Var0.f_12=1;
Var0.f_3=1;
Var1={
func_364(Local_159.f_25, Local_159.f_28, 20f) 
};
if(func_45(Local_159.f_25, Var1, func_366(), 0, &(Local_159.f_10[bParam0 /*3*/]), &(Local_159.f_20[bParam0]), &Var0)){
MISC::SET_BIT(&(Local_159.f_24), bParam0);
}
}}}}}
if(func_210(func_366())){
if(NETWORK::CAN_REGISTER_MISSION_VEHICLES(func_284(168, -1, 1, -1, -1, -1))){
if(MISC::IS_BIT_SET(Local_159.f_24, bParam0)){
if(func_281(&(Local_159.f_35[bParam0]), func_366(), Local_159.f_10[bParam0 /*3*/], Local_159.f_20[bParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_159.f_35[bParam0]), 1, 1);
MISC::CLEAR_AREA_OF_VEHICLES(Local_159.f_10[bParam0 /*3*/], 20f, 0, 0, 0, 0, 0, 0, 0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(func_40(bParam0), "MPBitset")){
iVar2=DECORATOR::DECOR_GET_INT(func_40(bParam0), "MPBitset");
}
MISC::SET_BIT(&iVar2, 10);
MISC::SET_BIT(&iVar2, 11);
DECORATOR::DECOR_SET_INT(func_40(bParam0), "MPBitset", iVar2);
}
if(!func_6()){
func_361(func_40(bParam0), bParam0, -1292453789, 0, 0);
}
if(func_276()){
VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(func_40(bParam0), 1);
VEHICLE::SET_BOAT_ANCHOR(func_40(bParam0), 1);
ENTITY::SET_ENTITY_MAX_HEALTH(func_40(bParam0), Global_262145.f_15573);
ENTITY::SET_ENTITY_HEALTH(func_40(bParam0), Global_262145.f_15573, 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(func_40(bParam0), 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(func_40(bParam0), 0);
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(func_40(bParam0), 1);
if(func_360()){
VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), func_359());
}elseif(func_217()){
VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), Global_262145.f_15583);
}elseif(func_271()){
VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), Global_262145.f_15584);
}
}
elseif(func_339()){
if(func_366()==joaat("cuban800")){
VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 132, 64);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 111, 156);
}else{
VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 7, 7);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 7, 7);
}
ENTITY::SET_ENTITY_MAX_HEALTH(func_40(bParam0), Global_262145.f_15568);
ENTITY::SET_ENTITY_HEALTH(func_40(bParam0), Global_262145.f_15568, 0);
VEHICLE::SET_VEHICLE_CAN_BREAK(func_40(bParam0), 0);
bVar3=func_358();
Local_159.f_386=func_357(bVar3);
Local_159.f_387=func_356(bVar3);
Local_159.f_388=func_355(bVar3);
}
else{
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(func_40(bParam0), to_float(Global_262145.f_15572));
VEHICLE::SET_VEHICLE_BODY_HEALTH(func_40(bParam0), to_float(Global_262145.f_15572));
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_40(bParam0), to_float(Global_262145.f_15572));
VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 17, 12);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 1, 156);
if(func_354()){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_40(bParam0), 0);
}
}
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(func_40(bParam0), 0, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(func_40(bParam0), 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(func_40(bParam0), 1);
VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(func_40(bParam0), 0);
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(func_40(bParam0), 0);
if(!func_339()){
VEHICLE::SET_VEHICLE_STRONG(func_40(bParam0), 1);
}
VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(func_40(bParam0), 0);
if(func_352()){
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(func_40(bParam0), 0.08f);
}
else{
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(func_40(bParam0), 0.2f);
}
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_159.f_35[bParam0]), 1);
func_280(func_40(bParam0));
Local_159.f_25={
0f, 0f, 0f 
};
Local_159.f_29=0;
return 1;
}}}}}else{
return 1;
}
return 0;
}

int func_352(){
var uVar0;
var uVar1;
var uVar2;
if(func_276()){
if(Global_262145.f_15757){
return 0;
}
uVar0=func_353();
if(MISC::IS_BIT_SET(uVar0, 0)){
return 1;
}}elseif(func_339()){
if(Global_262145.f_15755){
return 0;
}
uVar1=func_353();
if(MISC::IS_BIT_SET(uVar1, 2)){
return 1;
}}else{
if(Global_262145.f_15756){
return 0;
}
uVar2=func_353();
if(MISC::IS_BIT_SET(uVar2, 4)){
return 1;
}}
return 0;
}


var func__353(){
return Global_2851557[func_32()];
}

int func_354(){
var uVar0;
if(Global_262145.f_15759){
return 0;
}
if(!func_339() && !func_276()){
uVar0=func_353();
if(MISC::IS_BIT_SET(uVar0, 5)){
return 1;
}}
return 0;
}


var func__355(bool bParam0){
if(bParam0){
return Global_262145.f_15588;
}
return Global_262145.f_15570;
}


var func__356(bool bParam0){
if(bParam0){
return Global_262145.f_15589;
}
return Global_262145.f_15571;
}


var func__357(bool bParam0){
if(bParam0){
return Global_262145.f_15587;
}
return Global_262145.f_15569;
}

int func_358(){
var uVar0;
if(Global_262145.f_15758){
return 0;
}
if(func_339()){
uVar0=func_353();
if(MISC::IS_BIT_SET(uVar0, 3)){
return 1;
}}
return 0;
}


float func_359(){
if(func_276()){
return Global_262145.f_15586;
}
return 0f;
}

int func_360(){
var uVar0;
if(Global_262145.f_15760){
return 0;
}
if(func_276()){
uVar0=func_353();
if(MISC::IS_BIT_SET(uVar0, 1)){
return 1;
}}
return 0;
}


void func_361(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3)){
iVar0=func_28();
func_363(bParam1, &iVar0);
DECORATOR::DECOR_SET_INT(iParam0, "ContrabandOwner", iVar0);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "ContrabandDeliveryType", iParam2);
}
func_362(iParam2);
if(iParam2==-81613951){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ExportVehicle", 3)){
iVar1=iParam3;
iVar1=(iVar1 + iParam4);
DECORATOR::DECOR_SET_INT(iParam0, "ExportVehicle", iVar1);
}}}}


void func_362(int iParam0){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_463 !=iParam0){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_463=iParam0;
}}


void func_363(int iParam0, int iParam1){
bool bVar0;
if(iParam0 >=0 && iParam0 < 8){
bVar0=(24 + iParam0);
MISC::SET_BIT(iParam1, bVar0);
}}


Vector3 func__364(struct<3> Param0, float fParam1, float fParam2){
struct<3> Var0;
Var0={
0f, 1f, 0f 
};
func_365(Var0, fParam1);
Var0.f_0=(Var0.f_0 * fParam2);
Var0.f_1=(Var0.f_1 * fParam2);
Var0.f_2=(Var0.f_2 * fParam2);
Var0={
Var0 + Param0 
};
return Var0;
}


Vector3 func__365(struct<3> Param0, float fParam1){
struct<3> Var0;
float fVar1;
float fVar2;
fVar1=sin(fParam1);
fVar2=cos(fParam1);
Var0.f_0=((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
Var0.f_1=((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
Var0.f_2=Param0.f_2;
return Var0;
}

int func_366(){
if(func_339()){
switch (func_350()){
case 0:
case 1:
case 7:
return joaat("cuban800");
case 2:
return joaat("titan");
}
default:
}
if(func_276()){
return joaat("tug");
}
return joaat("brickade");
}

int func_367(int iParam0, var uParam1, var uParam2){
struct<31> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
bool bVar4;
if(func_35()){
if(iParam0==0 || (iParam0 > 0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[(iParam0 - 1)]))){
if(!func_133(*uParam1)){
return 1;
}
Var0.f_4=1125515264;
Var0.f_5=1;
Var0.f_6=1;
Var0.f_8=1082130432;
Var0.f_9=1176255488;
Var0.f_10=1;
Var0.f_13=1;
Var0.f_15=2;
Var0.f_22=2;
Var0.f_25=1;
Var0.f_26=1;
Var0.f_29=1123024896;
Var0.f_30=1;
Var0.f_0=0f;
Var0.f_1=0;
Var0.f_4=200f;
Var0.f_6=1;
Var0.f_5=0;
Var0.f_12=1;
Var0.f_3=1;
Var2={
func_373(iParam0, Local_159.f_29) 
};
fVar3=func_372(iParam0, Local_159.f_29);
Var1={
func_364(Var2, fVar3, 20f) 
};
if(func_45(Var2, Var1, func_366(), 0, &Var2, &fVar3, &Var0)){
*uParam1={
Var2 
};
*uParam2=fVar3;
Local_159.f_10[iParam0 /*3*/]={
*uParam1 
};
Local_159.f_20[iParam0]=*uParam2;
return 1;
}else{
if(Global_2635559.f_682 > 1){
if(Global_2635559.f_676 > 2){
bVar4=true;
}}
if(!func_133(Global_2635559.f_683)){
if(Global_2635559.f_676 > 2){
if(!func_16(Global_2635559.f_683, Var2, 0)){
bVar4=true;
}}}
if(bVar4){
Global_2635559.f_676=0;
func_182();
func_181();
Local_159.f_29++;
if(Local_159.f_29 > 2){
*uParam1={
func_373(iParam0, 0) 
};
*uParam2=func_372(iParam0, 0);
Local_159.f_10[iParam0 /*3*/]={
*uParam1 
};
Local_159.f_20[iParam0]=*uParam2;
return 1;
}}}}}elseif(func_339()){
*uParam1={
func_371(iParam0) 
};
*uParam2=func_370(iParam0);
return 1;
}else{
*uParam1={
func_369() 
};
*uParam2=func_368();
return 1;
}
return 0;
}


float func_368(){
if(func_217()){
switch (Local_159.f_395[0]){
case 0:
return 110.1267f;
case 1:
return 93.7369f;
case 2:
return 179.0316f;
case 3:
return 0.3224f;
case 4:
return 183.994f;
}
default:
}
if(func_271()){
switch (Local_159.f_395[0]){
case 0:
return 175.892f;
case 1:
return 248.6986f;
case 2:
return 133.4317f;
case 3:
return 137.4506f;
case 4:
return 167.3423f;
}
default:
}
return 0f;
}


Vector3 func__369(){
if(func_217()){
switch (Local_159.f_395[0]){
case 0:
return -808.96f, -1507.267f, 0f;
case 1:
return 87.946f, -2274.033f, 0f;
case 2:
return 421.2115f, -2759.854f, 0f;
case 3:
return 774.3229f, -2884.722f, 0f;
case 4:
return 623.0291f, -3248.27f, 0f;
}
default:
}
if(func_271()){
switch (Local_159.f_395[0]){
case 0:
return -114.8788f, -2777.618f, 0f;
case 1:
return 880.7318f, -2652.588f, 0f;
case 2:
return -570.7896f, -2778.848f, 0f;
case 3:
return -720.5604f, -1347.188f, 0f;
case 4:
return -485.6249f, -2277.072f, 0f;
}
default:
}
return 0f, 0f, 0f;
}


float func_370(int iParam0){
switch (Local_159.f_583){
case 0:
case 1:
case 7:
switch (Local_159.f_395[iParam0]){
case 0:
return 103.3978f;
case 1:
return 125.9975f;
case 2:
return 91.5969f;
case 3:
return 132.3964f;
case 4:
return 191.7962f;
case 5:
return 15.1962f;
case 6:
return 290.1954f;
case 7:
return 100.995f;
case 8:
return 48.3939f;
case 9:
return 104.9941f;
case 10:
return 12.7939f;
case 11:
return 109.3935f;
case 12:
return 63.1932f;
case 13:
return 296.993f;
case 14:
return 130.9911f;
case 15:
return 306.3914f;
case 16:
return 9.3913f;
case 17:
return 307.7906f;
case 18:
return 305.589f;
case 19:
return 330.3874f;
case 20:
return 117.6098f;
case 21:
return 131.1266f;
case 22:
return 192.5231f;
case 23:
return 125.385f;
case 24:
return 195.3724f;
case 25:
return 86.6037f;
case 26:
return 317.811f;
case 27:
return 303.5216f;
case 28:
return 242.0844f;
case 29:
return 99.0054f;
default:
}
break;
case 2:
switch (Local_159.f_395[iParam0]){
case 0:
return 329.1949f;
case 1:
return 60.5958f;
case 2:
return 107.7927f;
case 3:
return 61.1982f;
case 4:
return 330.5976f;
case 5:
return 330.5976f;
case 6:
return 109.1921f;
case 7:
return 213.3918f;
case 8:
return 114.7918f;
case 9:
return 195.191f;
case 10:
return 158.391f;
case 11:
return 87.1908f;
default:
}
break;
}
return 0f;
}


Vector3 func__371(int iParam0){
switch (Local_159.f_583){
case 0:
case 1:
case 7:
switch (Local_159.f_395[iParam0]){
case 0:
return -968.1948f, -2889.675f, 12.9599f;
case 1:
return -960.1045f, -3067.625f, 12.9444f;
case 2:
return -1067.529f, -3154.738f, 13.0472f;
case 3:
return -930.1005f, -3121.037f, 12.9444f;
case 4:
return -1086.102f, -2977.599f, 12.9449f;
case 5:
return -1708.297f, -2959.572f, 12.9448f;
case 6:
return -1227.573f, -2346.825f, 12.9451f;
case 7:
return -1101.446f, -2400.557f, 12.9451f;
case 8:
return -1025.158f, -2429.9f, 12.9445f;
case 9:
return -979.2667f, -2373.14f, 12.9445f;
case 10:
return -1070.736f, -2478.907f, 12.9446f;
case 11:
return -1297.445f, -2437.89f, 12.9451f;
case 12:
return -1291.242f, -2303.709f, 13.0883f;
case 13:
return -1097.962f, -3434.013f, 12.9451f;
case 14:
return -1114.178f, -2966.988f, 12.9448f;
case 15:
return -1730.189f, -2946f, 12.9443f;
case 16:
return -1677.477f, -3094.124f, 12.9447f;
case 17:
return -1412.524f, -3248.308f, 12.9449f;
case 18:
return -1514.502f, -3199.309f, 12.9449f;
case 19:
return -1602.308f, -3134.281f, 12.9449f;
case 20:
return -1275.201f, -2842.465f, 12.9476f;
case 21:
return -1257.471f, -2804.208f, 12.9502f;
case 22:
return -1387.523f, -2721.518f, 12.9449f;
case 23:
return -1306.913f, -2766.759f, 12.9449f;
case 24:
return -1441.124f, -2764.755f, 12.9449f;
case 25:
return -1396.843f, -2642.261f, 12.9449f;
case 26:
return -1305.934f, -3319.571f, 12.945f;
case 27:
return -1180.561f, -3380.75f, 12.945f;
case 28:
return -1749.98f, -2842.727f, 14.1329f;
case 29:
return -1503.618f, -2733.548f, 12.9449f;
default:
}
break;
case 2:
switch (Local_159.f_395[iParam0]){
case 0:
return -1230.741f, -2878.474f, 12.9451f;
case 1:
return -1399.54f, -2559.158f, 12.9451f;
case 2:
return -939.5087f, -3095.118f, 12.9444f;
case 3:
return -1003.699f, -3407.047f, 12.8401f;
case 4:
return -1825.004f, -3158.986f, 12.9444f;
case 5:
return -1870.778f, -3132.809f, 12.9444f;
case 6:
return -1204.345f, -2252.822f, 12.9445f;
case 7:
return -1710.99f, -2776.27f, 14.1329f;
case 8:
return -1000.948f, -2915.138f, 12.9488f;
case 9:
return -1085.086f, -2930.166f, 12.9456f;
case 10:
return -1256.457f, -2150.702f, 12.9248f;
case 11:
return -1300.874f, -2478.351f, 12.9452f;
default:
}
break;
}
return 0f, 0f, 0f;
}


float func_372(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
switch (Local_159.f_54){
case 1:
return 208.6f;
case 2:
return 299.4024f;
case 3:
return 0.3993f;
case 4:
return 48f;
case 5:
return 0f;
case 6:
return 315.1989f;
case 7:
return 218.9982f;
case 8:
return 331.6f;
case 9:
return 86.546f;
case 10:
return 151.6492f;
case 11:
return 315.3995f;
case 12:
return 169.0126f;
case 13:
return 233.9757f;
case 14:
return 270.3038f;
case 15:
return 164.4331f;
case 16:
return 89.2575f;
case 17:
return 1.5266f;
case 18:
return 170.6689f;
case 19:
return 351.747f;
case 20:
return 285.2916f;
case 21:
return 306.6468f;
case 22:
return 269.4978f;
default:
}
break;
case 1:
switch (Local_159.f_54){
case 1:
return 270.0406f;
case 2:
return 29.429f;
case 3:
return 270.2136f;
case 4:
return 312.7653f;
case 5:
return 279.422f;
case 6:
return 44.2798f;
case 7:
return 126.2662f;
case 8:
return 59.3633f;
case 9:
return 44.3454f;
case 10:
return 255.4957f;
case 11:
return 316.404f;
case 12:
return 174.7817f;
case 13:
return 54.306f;
case 14:
return 180.0455f;
case 15:
return 344.4206f;
case 16:
return 89.1443f;
case 17:
return 91.5654f;
case 18:
return 355.3597f;
case 19:
return 267.6826f;
case 20:
return 354.9587f;
case 21:
return 124.9008f;
case 22:
return 270.1882f;
default:
}
break;
case 2:
switch (Local_159.f_54){
case 1:
return 241.2394f;
case 2:
return 30.5329f;
case 3:
return 268.7542f;
case 4:
return 235.685f;
case 5:
return 263.4533f;
case 6:
return 21.6045f;
case 7:
return 38.3122f;
case 8:
return 60.0909f;
case 9:
return 359.511f;
case 10:
return 14.6433f;
case 11:
return 315.3233f;
case 12:
return 172.1901f;
case 13:
return 320.4538f;
case 14:
return 179.2461f;
case 15:
return 250.3752f;
case 16:
return 0.2447f;
case 17:
return 261.7306f;
case 18:
return 52.3126f;
case 19:
return 267.7954f;
case 20:
return 89.242f;
case 21:
return 44.0817f;
case 22:
return 268.8879f;
default:
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
switch (Local_159.f_54){
case 1:
return 209.6f;
case 2:
return 298.7994f;
case 3:
return 92.9994f;
case 4:
return 324.2342f;
case 5:
return 3.1991f;
case 6:
return 315.3998f;
case 7:
return 215.5996f;
case 8:
return 330f;
case 9:
return 89.5971f;
case 10:
return 169.649f;
case 11:
return 315.3995f;
case 12:
return 173.9054f;
case 13:
return 234.8527f;
case 14:
return 359.4676f;
case 15:
return 165.2123f;
case 16:
return 88.0328f;
case 17:
return 269.7469f;
case 18:
return 81.7539f;
case 19:
return 350.7536f;
case 20:
return 271.8376f;
case 21:
return 295.806f;
case 22:
return 268.5489f;
default:
}
break;
case 1:
switch (Local_159.f_54){
case 1:
return 266.5706f;
case 2:
return 34.6929f;
case 3:
return 270.4595f;
case 4:
return 314.1925f;
case 5:
return 262.1631f;
case 6:
return 44.2599f;
case 7:
return 129.1114f;
case 8:
return 59.3746f;
case 9:
return 90.6921f;
case 10:
return 239.9254f;
case 11:
return 314.6845f;
case 12:
return 175.8269f;
case 13:
return 54.2188f;
case 14:
return 179.6606f;
case 15:
return 341.9566f;
case 16:
return 90.6128f;
case 17:
return 89.2581f;
case 18:
return 355.3481f;
case 19:
return 266.7427f;
case 20:
return 356.4481f;
case 21:
return 136.6899f;
case 22:
return 270.2851f;
default:
}
break;
case 2:
switch (Local_159.f_54){
case 1:
return 245.33f;
case 2:
return 31.3559f;
case 3:
return 269.2654f;
case 4:
return 235.3301f;
case 5:
return 270.3575f;
case 6:
return 9.4474f;
case 7:
return 38.199f;
case 8:
return 60.6946f;
case 9:
return 359.8666f;
case 10:
return 8.8486f;
case 11:
return 322.7813f;
case 12:
return 171.8957f;
case 13:
return 313.731f;
case 14:
return 179.9229f;
case 15:
return 248.6389f;
case 16:
return 358.9486f;
case 17:
return 269.3399f;
case 18:
return 51.0447f;
case 19:
return 266.7723f;
case 20:
return 89.7738f;
case 21:
return 25.4218f;
case 22:
return 269.0639f;
default:
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
switch (Local_159.f_54){
case 1:
return 209.1995f;
case 2:
return 302.7997f;
case 3:
return 92.9994f;
case 4:
return 325.1249f;
case 5:
return 357.3996f;
case 6:
return 135.1994f;
case 7:
return 308.5542f;
case 8:
return 330f;
case 9:
return 88.5975f;
case 10:
return 200.4493f;
case 11:
return 315.3995f;
case 12:
return 83.0145f;
case 13:
return 245.6889f;
case 14:
return 359.5525f;
case 15:
return 250.3085f;
case 16:
return 180.3578f;
case 17:
return 275.278f;
case 18:
return 82.4021f;
case 19:
return 89.672f;
case 20:
return 175.7747f;
case 21:
return 298.8189f;
case 22:
return 272.5778f;
default:
}
break;
case 1:
switch (Local_159.f_54){
case 1:
return 239.8358f;
case 2:
return 47.7028f;
case 3:
return 269.296f;
case 4:
return 317.4547f;
case 5:
return 261.8835f;
case 6:
return 45.2661f;
case 7:
return 131.5014f;
case 8:
return 59.3505f;
case 9:
return 43.3622f;
case 10:
return 242.5756f;
case 11:
return 314.2681f;
case 12:
return 176.731f;
case 13:
return 55.0103f;
case 14:
return 200.8372f;
case 15:
return 68.8202f;
case 16:
return 47.4361f;
case 17:
return 89.1401f;
case 18:
return 354.0209f;
case 19:
return 266.7281f;
case 20:
return 356.1704f;
case 21:
return 144.1817f;
case 22:
return 270.3809f;
default:
}
break;
case 2:
switch (Local_159.f_54){
case 1:
return 259.1305f;
case 2:
return 32.29f;
case 3:
return 269.3044f;
case 4:
return 233.7558f;
case 5:
return 274.4951f;
case 6:
return 354.4731f;
case 7:
return 36.0818f;
case 8:
return 60.2114f;
case 9:
return 359.9043f;
case 10:
return 14.0337f;
case 11:
return 335.3627f;
case 12:
return 172.7723f;
case 13:
return 305.7141f;
case 14:
return 90.7033f;
case 15:
return 253.9543f;
case 16:
return 1.6254f;
case 17:
return 265.4617f;
case 18:
return 48.5508f;
case 19:
return 264.2763f;
case 20:
return 88.9135f;
case 21:
return 32.2909f;
case 22:
return 180.6358f;
default:
}
break;
}
break;
}
return 269.4978f;
}


Vector3 func__373(int iParam0, int iParam1){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
switch (Local_159.f_54){
case 1:
return 75.566f, -2540.649f, 5f;
case 2:
return -1078.262f, -1239.851f, 4.1434f;
case 3:
return 883.4796f, -1017.313f, 31.3352f;
case 4:
return 257.9049f, -1957.535f, 22.0042f;
case 5:
return -439.4763f, 178.6946f, 74.2514f;
case 6:
return -1100.738f, -2038.471f, 12.2665f;
case 7:
return -1280.453f, -829.5875f, 16.0992f;
case 8:
return -869.777f, -2705.146f, 12.9452f;
case 9:
return 282.588f, -2994.094f, 4.6682f;
case 10:
return 1544.658f, -2177.76f, 76.3443f;
case 11:
return -338.8323f, -2704.073f, 5.028f;
case 12:
return 517.5385f, -645.653f, 23.7512f;
case 13:
return -551.9077f, -1766.713f, 20.7291f;
case 14:
return -299.124f, -1326.529f, 30.3017f;
case 15:
return 346.8094f, 337.0167f, 104.1991f;
case 16:
return 900.0145f, -1572.714f, 29.8542f;
case 17:
return 786.6585f, -900.3587f, 24.0527f;
case 18:
return 1049.079f, -2171.625f, 30.6872f;
case 19:
return 981.4014f, -2510.991f, 27.302f;
case 20:
return -264.0942f, 188.8373f, 84.1883f;
case 21:
return 557.2414f, -1960.689f, 23.8062f;
case 22:
return 101.8777f, -2230.142f, 5.0333f;
default:
}
break;
case 1:
switch (Local_159.f_54){
case 1:
return 66.5896f, -2544.517f, 5f;
case 2:
return -1025.685f, -1317.374f, 4.984f;
case 3:
return 909.1116f, -1092.301f, 31.3332f;
case 4:
return 270.9639f, -1956.482f, 22.4214f;
case 5:
return -446.1908f, 223.8166f, 82.006f;
case 6:
return -1054.04f, -2049.198f, 12.216f;
case 7:
return -1311.915f, -790.1375f, 16.9507f;
case 8:
return -848.2803f, -2706.428f, 12.9445f;
case 9:
return 267.5522f, -3048.199f, 5.04f;
case 10:
return 1519.344f, -2185.571f, 76.5866f;
case 11:
return -300.4395f, -2638.489f, 5.0418f;
case 12:
return 515.6205f, -679.5475f, 24.2445f;
case 13:
return -564.9694f, -1732.855f, 21.3362f;
case 14:
return -333.6444f, -1376.203f, 30.2957f;
case 15:
return 369.0242f, 300.1814f, 102.4281f;
case 16:
return 980.7197f, -1538.239f, 29.5977f;
case 17:
return 799.59f, -918.3593f, 24.6337f;
case 18:
return 1061.246f, -2198.076f, 29.6956f;
case 19:
return 951.1177f, -2544.439f, 27.3027f;
case 20:
return -216.3499f, 203.5424f, 82.6981f;
case 21:
return 570.9869f, -1900.998f, 23.8006f;
case 22:
return 131.1389f, -2187.469f, 4.953f;
default:
}
break;
case 2:
switch (Local_159.f_54){
case 1:
return 17.2971f, -2548.397f, 5.0366f;
case 2:
return -1111.007f, -1241.691f, 1.4219f;
case 3:
return 853.504f, -1092.164f, 26.9982f;
case 4:
return 253.4216f, -1991.415f, 19.226f;
case 5:
return -420.191f, 230.0672f, 82.4149f;
case 6:
return -1083.174f, -2010.841f, 12.1633f;
case 7:
return -1311.055f, -773.2202f, 18.8163f;
case 8:
return -836.7797f, -2704.234f, 12.8121f;
case 9:
return 304.8296f, -2998.689f, 4.9774f;
case 10:
return 1565.06f, -2074.245f, 76.0599f;
case 11:
return -337.0353f, -2676.035f, 5.0441f;
case 12:
return 465.3821f, -656.4695f, 26.7156f;
case 13:
return -606.8765f, -1729.371f, 22.3962f;
case 14:
return -346.9227f, -1404.342f, 29.197f;
case 15:
return 385.7742f, 253.9456f, 101.9867f;
case 16:
return 965.1168f, -1534.567f, 29.7544f;
case 17:
return 753.7557f, -956.1052f, 23.8429f;
case 18:
return 1079.304f, -2155.766f, 30.762f;
case 19:
return 973.3874f, -2493.156f, 27.302f;
case 20:
return -275.7711f, 133.0159f, 67.5569f;
case 21:
return 479.9522f, -1965.064f, 23.6035f;
case 22:
return 207.8649f, -2236.68f, 5.3571f;
default:
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
switch (Local_159.f_54){
case 1:
return 80.18f, -2534.817f, 5f;
case 2:
return -1077.115f, -1242.028f, 4.2154f;
case 3:
return 917.6459f, -993.7324f, 35.4143f;
case 4:
return 256.9997f, -1973.177f, 20.8855f;
case 5:
return -404.2649f, 199.9949f, 81.7681f;
case 6:
return -1090.594f, -2049.731f, 12.271f;
case 7:
return -1271.107f, -848.6555f, 12.0146f;
case 8:
return -892.0394f, -2739.922f, 12.8285f;
case 9:
return 262.0403f, -2999.025f, 4.7474f;
case 10:
return 1548.647f, -2141.337f, 76.448f;
case 11:
return -330.3534f, -2695.275f, 5.0115f;
case 12:
return 518.8716f, -629.5131f, 23.7529f;
case 13:
return -543.8981f, -1763.519f, 20.6171f;
case 14:
return -263.9384f, -1369.898f, 30.3f;
case 15:
return 348.4588f, 354.0681f, 104.0595f;
case 16:
return 927.0326f, -1579.571f, 29.4263f;
case 17:
return 754.1151f, -872.9401f, 24.0701f;
case 18:
return 1095.888f, -2175.671f, 30.3221f;
case 19:
return 979.4924f, -2527.655f, 27.302f;
case 20:
return -248.7708f, 180.1573f, 76.8737f;
case 21:
return 536.7711f, -1974.162f, 23.8071f;
case 22:
return 115.9594f, -2230.136f, 5.0333f;
default:
}
break;
case 1:
switch (Local_159.f_54){
case 1:
return 51.1315f, -2544.015f, 5.002f;
case 2:
return -1013.461f, -1320.874f, 4.8685f;
case 3:
return 891.0043f, -1092.538f, 29.375f;
case 4:
return 283.8082f, -1944.086f, 23.3962f;
case 5:
return -460.6299f, 227.2324f, 82.1805f;
case 6:
return -1043.421f, -2060.035f, 12.2542f;
case 7:
return -1323.81f, -799.6187f, 16.7538f;
case 8:
return -836.1172f, -2713.632f, 12.9445f;
case 9:
return 276.9312f, -3041.241f, 4.843f;
case 10:
return 1501.615f, -2179.107f, 76.9969f;
case 11:
return -312.4042f, -2651.017f, 5.0429f;
case 12:
return 514.2888f, -695.7411f, 24.1667f;
case 13:
return -576.8483f, -1724.337f, 21.7285f;
case 14:
return -339.4656f, -1376.456f, 30.3116f;
case 15:
return 364.1374f, 283.0252f, 102.3552f;
case 16:
return 992.5272f, -1533.687f, 29.745f;
case 17:
return 816.9606f, -918.3287f, 24.7227f;
case 18:
return 1059.176f, -2216.868f, 29.3004f;
case 19:
return 933.7609f, -2543.49f, 27.3027f;
case 20:
return -217.0926f, 174.9504f, 75.4322f;
case 21:
return 582.6407f, -1890.364f, 24.2265f;
case 22:
return 145.7482f, -2187.39f, 4.953f;
default:
}
break;
case 2:
switch (Local_159.f_54){
case 1:
return 29.7453f, -2554.565f, 5f;
case 2:
return -1119.537f, -1227.846f, 1.4313f;
case 3:
return 836.6307f, -1092.544f, 27.0783f;
case 4:
return 265.7728f, -1999.919f, 18.8226f;
case 5:
return -393.0742f, 227.925f, 82.7333f;
case 6:
return -1088.037f, -1993.077f, 12.1576f;
case 7:
return -1325.427f, -757.1539f, 19.367f;
case 8:
return -815.2336f, -2711.911f, 12.812f;
case 9:
return 304.6926f, -3012.622f, 4.9702f;
case 10:
return 1568.957f, -2095.701f, 76.5195f;
case 11:
return -348.3641f, -2688.345f, 5.0425f;
case 12:
return 467.2889f, -640.745f, 27.4996f;
case 13:
return -617.1298f, -1740.959f, 22.6394f;
case 14:
return -352.1258f, -1404.453f, 28.9612f;
case 15:
return 368.8197f, 259.9216f, 101.9686f;
case 16:
return 975.7991f, -1520.66f, 29.9604f;
case 17:
return 751.5151f, -965.7788f, 23.8412f;
case 18:
return 1082.607f, -2150.683f, 30.5369f;
case 19:
return 956.5896f, -2492.579f, 27.302f;
case 20:
return -257.9995f, 133.273f, 68.2289f;
case 21:
return 475.7105f, -1978.248f, 23.6205f;
case 22:
return 192.1165f, -2236.279f, 4.8551f;
default:
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
switch (Local_159.f_54){
case 1:
return 89.799f, -2530.924f, 5f;
case 2:
return -1071.393f, -1252.443f, 4.7051f;
case 3:
return 899.5668f, -994.5377f, 33.1194f;
case 4:
return 241.0012f, -1996.41f, 18.6848f;
case 5:
return -447.0587f, 178.2333f, 74.2037f;
case 6:
return -1062.537f, -2009.48f, 12.1616f;
case 7:
return -1285.753f, -813.0154f, 16.3218f;
case 8:
return -887.17f, -2742.64f, 12.8285f;
case 9:
return 270.8913f, -2989.357f, 4.7132f;
case 10:
return 1534.311f, -2158.243f, 76.6882f;
case 11:
return -321.6567f, -2686.351f, 5.0111f;
case 12:
return 503.5738f, -624.4263f, 23.8131f;
case 13:
return -515.0387f, -1766.265f, 20.374f;
case 14:
return -263.8943f, -1385.979f, 30.3057f;
case 15:
return 339.818f, 313.7482f, 103.4573f;
case 16:
return 922.7253f, -1538.224f, 29.8691f;
case 17:
return 753.661f, -861.8409f, 24.2223f;
case 18:
return 1096.373f, -2168.761f, 30.2795f;
case 19:
return 1024.333f, -2504.33f, 27.3434f;
case 20:
return -233.9646f, 210.537f, 84.1244f;
case 21:
return 538.3644f, -1984.858f, 23.751f;
case 22:
return 131.7841f, -2230.233f, 5.0333f;
default:
}
break;
case 1:
switch (Local_159.f_54){
case 1:
return 35.9444f, -2539.717f, 5.0024f;
case 2:
return -1007.394f, -1317.224f, 4.9067f;
case 3:
return 876.8945f, -1092.53f, 28.2771f;
case 4:
return 295.9134f, -1932.292f, 24.3064f;
case 5:
return -455.1007f, 234.6203f, 82.0244f;
case 6:
return -1031.724f, -2072.077f, 12.5716f;
case 7:
return -1335.552f, -809.8959f, 16.4896f;
case 8:
return -821.3975f, -2722.354f, 12.9444f;
case 9:
return 283.6107f, -3053.823f, 4.9867f;
case 10:
return 1499.083f, -2185.737f, 76.7263f;
case 11:
return -324.779f, -2663.592f, 5.0445f;
case 12:
return 512.3986f, -721.838f, 23.8624f;
case 13:
return -591.0884f, -1714.103f, 22.3323f;
case 14:
return -346.9976f, -1370.863f, 30.3182f;
case 15:
return 377.8062f, 288.2171f, 102.1705f;
case 16:
return 996.5148f, -1543.246f, 29.8335f;
case 17:
return 835.5129f, -918.463f, 24.7448f;
case 18:
return 1046.311f, -2211.777f, 29.1671f;
case 19:
return 913.9238f, -2542.353f, 27.3173f;
case 20:
return -218.8107f, 151.816f, 70.3569f;
case 21:
return 593.3129f, -1876.054f, 24.006f;
case 22:
return 163.7395f, -2187.274f, 4.9529f;
default:
}
break;
case 2:
switch (Local_159.f_54){
case 1:
return 42.259f, -2558.294f, 5f;
case 2:
return -1128.897f, -1212.134f, 1.3396f;
case 3:
return 819.2865f, -1093.124f, 27.5717f;
case 4:
return 277.0835f, -2007.957f, 18.7094f;
case 5:
return -375.8415f, 228.6617f, 83.2295f;
case 6:
return -1087.756f, -1975.791f, 12.1524f;
case 7:
return -1341.878f, -751.0708f, 21.4101f;
case 8:
return -808.8249f, -2701.321f, 12.812f;
case 9:
return 304.6487f, -3030.21f, 4.9632f;
case 10:
return 1572.752f, -2073.607f, 75.9901f;
case 11:
return -357.2827f, -2703.429f, 5.0408f;
case 12:
return 470.1857f, -620.3571f, 27.4997f;
case 13:
return -629.9596f, -1751.494f, 22.941f;
case 14:
return -312.814f, -1415.919f, 30.0626f;
case 15:
return 352.8829f, 266.151f, 101.9626f;
case 16:
return 975.6237f, -1502.637f, 30.2482f;
case 17:
return 751.2968f, -971.9805f, 23.8482f;
case 18:
return 1083.86f, -2143.323f, 30.7745f;
case 19:
return 935.8514f, -2489.557f, 27.3192f;
case 20:
return -302.9154f, 133.8862f, 66.9406f;
case 21:
return 489.8722f, -1992.808f, 23.9485f;
case 22:
return 182.5244f, -2221.961f, 4.9515f;
default:
}
break;
}
break;
}
return 131.7841f, -2230.233f, 5.0333f;
}

int func_374(){
return Local_159.f_5;
}


void func_375(){
if(func_249()==func_33() && func_192()==0){
func_188(2);
}}


void func_376(){
bool bVar0;
int iVar1;
bVar0=false;
while (bVar0 < func_21()){
if(func_187(bVar0)){
iVar1++;
}
bVar0++;
}
if(Local_159.f_596 !=iVar1){
Local_159.f_596=iVar1;
}}


void func_377(){
bool bVar0;
if(func_6()){
if(!func_2294(3)){
if(func_5(&(Local_159.f_585)) && func_189(&(Local_159.f_585), func_381(), 0)){
bVar0=false;
while (bVar0 < func_21()){
func_361(func_40(bVar0), bVar0, -1292453789, 0, 0);
bVar0++;
}
func_378();
func_24(3);
}}}}


void func_378(){
struct<14> Var0;
Var0.f_2=-239271415;
Var0.f_10=PLAYER::PLAYER_ID();
Var0.f_11=func_249();
func_379(Var0, func_380(1));
}


void func_379(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_380(int iParam0){
var uVar0;
int iVar1;
bool bVar2;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(func_2566(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
iVar1++;
}
return uVar0;
}

int func_381(){
int iVar0;
iVar0=func_7();
if(func_2292()==1 && !func_2293()){
iVar0=3;
}
switch (iVar0){
case 2:
return Global_262145.f_16704;
case 3:
return Global_262145.f_16703;
default:
}
return Global_262145.f_16705;
}


void func_382(){
struct<3> Var0;
Var0={
func_17(Local_159.f_54) 
};
if(!func_133(Var0)){
func_383(&(Local_159.f_579), Var0, 1, 1103626240);
}}


void func_383(var uParam0, struct<3> Param1, int iParam2, int iParam3){
if(*uParam0==-1 || !MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0)){
*uParam0=MISC::ADD_POP_MULTIPLIER_AREA(Param1 - Vector(iParam3, iParam3, iParam3), Param1 + Vector(iParam3, iParam3, iParam3), 1f, 0.25f, iParam2, 1);
}}


void func_384(){
if(func_214() && func_401()){
if(!func_400()){
if(func_398()){
func_4(&(Local_159.f_519), 0, 0);
}}elseif(func_396()){
if(!func_5(&(Local_159.f_521))){
if(func_394() && func_390()){
func_203(&(Local_159.f_519));
func_4(&(Local_159.f_521), 0, 0);
func_388();
if(func_387()){
if(!func_11() && !func_386()){
Local_159.f_592=MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
}}}}}elseif(func_385()){
func_394();
func_390();
func_388();
if(func_387()){
if(!func_11() && !func_386()){
Local_159.f_592=MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
}}}}}

int func_385(){
if(func_12()){
return 1;
}
return 0;
}


bool func_386(){
return func_10()==5;
}

int func_387(){
switch (func_350()){
case 1:
case 5:
case 6:
case 7:
return 1;
default:
}
return 0;
}


void func_388(){
int iVar0;
if(func_401()){
switch (func_10()){
case 12:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iVar0 < func_389()){
if(!func_37(8)){
func_34(8);
}}elseif(func_37(8)){
func_2(8);
}
break;
}}}

int func_389(){
switch (Local_159.f_594){
case 1:
case 4:
return Global_262145.f_16726;
case 2:
return Global_262145.f_16725;
case 3:
return Global_262145.f_16724;
default:
}
return Global_262145.f_16724;
}

int func_390(){
bool bVar0;
bVar0=false;
while (bVar0 < func_212()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[bVar0 /*8*/])){
if((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_159.f_401[bVar0 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_159.f_401[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_159.f_401[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_205(Local_159.f_401[bVar0 /*8*/])){
if(!func_11() && !func_386()){
NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_159.f_401[bVar0 /*8*/]), 1, 1);
func_393(&(Local_159.f_401[bVar0 /*8*/]));
}else{
func_392(&(Local_159.f_401[bVar0 /*8*/]));
}
func_391(bVar0, 1);
}}}
bVar0++;
}
bVar0=false;
bVar0=false;
while (bVar0 < func_212()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[bVar0 /*8*/])){
return 0;
}
bVar0++;
}
return 1;
}


void func_391(bool bParam0, int iParam1){
Local_159.f_401[bParam0 /*8*/].f_5=iParam1;
}


void func_392(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}


void func_393(var uParam0){
int iVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
if(!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0)){
}}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
iVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::DELETE_ENTITY(&iVar0);
}}

int func_394(){
bool bVar0;
bVar0=false;
while (bVar0 < func_9()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_500[bVar0 /*6*/])){
if((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_159.f_500[bVar0 /*6*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_159.f_500[bVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_159.f_500[bVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_205(Local_159.f_500[bVar0 /*6*/])){
if(!func_11() && !func_386()){
NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_159.f_500[bVar0 /*6*/]), 1, 1);
}
func_392(&(Local_159.f_500[bVar0 /*6*/]));
func_203(&(Local_159.f_572[bVar0 /*2*/]));
func_395(bVar0, 1);
}}}
bVar0++;
}
bVar0=false;
bVar0=false;
while (bVar0 < func_9()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_500[bVar0 /*6*/])){
return 0;
}
bVar0++;
}
return 1;
}


void func_395(bool bParam0, int iParam1){
Local_159.f_500[bParam0 /*6*/].f_5=iParam1;
}

int func_396(){
if(func_5(&(Local_159.f_519))){
if(func_189(&(Local_159.f_519), func_397(), 0)){
return 1;
}}
return 0;
}

int func_397(){
if(Local_159.f_7==6){
return 5000;
}
return 10000;
}

int func_398(){
int iVar0;
iVar0=0;
switch (func_10()){
case 12:
if(func_37(8)){
if(Local_159.f_500[0 /*6*/].f_5==4 || func_399()){
iVar0=1;
}}elseif((Local_159.f_500[0 /*6*/].f_5==4 && Local_159.f_500[1 /*6*/].f_5==4) || func_399()){
iVar0=1;
}
break;
case 5:
if((Local_159.f_500[0 /*6*/].f_5==4 && Local_159.f_500[1 /*6*/].f_5==4) || func_399()){
iVar0=1;
}
break;
case 6:
if(Local_159.f_57 > 0){
if(func_399()){
iVar0=1;
}}
break;
case 11:
break;
}
return iVar0;
}

int func_399(){
int iVar0;
iVar0=0;
while (iVar0 < func_212()){
if(Local_159.f_401[iVar0 /*8*/].f_5 !=18){
return 0;
}
iVar0++;
}
return 1;
}


bool func_400(){
return func_5(&(Local_159.f_519));
}

int func_401(){
if(((func_10()==12 || func_10()==5) || func_10()==11) || func_10()==6){
return 1;
}
return 0;
}


void func_402(){
bool bVar0;
bool bVar1;
if(func_401()){
bVar0=false;
while (bVar0 < func_9()){
switch (func_8(bVar0)){
case 0:
break;
case 1:
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_500[bVar0 /*6*/])){
if(func_423()){
if(func_5(&(Local_159.f_521))){
func_203(&(Local_159.f_521));
}
if(func_210(func_422())){
if(func_405(bVar0, func_422())){
func_395(bVar0, 2);
}}
}}
break;
case 2:
if(func_214()){
bVar1=false;
while (bVar1 < func_212()){
if(func_195(bVar1, 0)){
}
bVar1++;
}}
if(func_403(bVar0)){
func_395(bVar0, 3);
}
break;
case 3:
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_500[bVar0 /*6*/])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_159.f_500[bVar0 /*6*/]), 0) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_159.f_500[bVar0 /*6*/]), 0)){
func_395(bVar0, 4);
}}
break;
case 4:
break;
case 5:
break;
}
bVar0++;
}}}

int func_403(bool bParam0){
int iVar0;
int iVar1;
iVar0=1;
switch (func_10()){
case 12:
if(func_37(8)){
iVar1=0;
while (iVar1 < func_212()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[iVar1 /*8*/])){
if(!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_159.f_401[iVar1 /*8*/]))){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[iVar1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}
}
else{
iVar0=0;
}}else{
iVar0=0;
}
iVar1++;
}}elseif(bParam0==0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[1 /*8*/])){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[0 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) && !func_404(NETWORK::NET_TO_PED(Local_159.f_401[1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[3 /*8*/])){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[2 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) && !func_404(NETWORK::NET_TO_PED(Local_159.f_401[3 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}
break;
case 5:
iVar1=0;
while (iVar1 < func_212()){
if(bParam0==0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[1 /*8*/])){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[0 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[3 /*8*/])){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[2 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[3 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}
iVar1++;
}
break;
case 6:
switch (func_212()){
case 4:
if(bParam0==0){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[1 /*8*/])){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[0 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}
}
else{
iVar0=0;
}}elseif(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[3 /*8*/])){
if(!func_404(NETWORK::NET_TO_PED(Local_159.f_401[2 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[3 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}
break;
case 6:
if(bParam0==0){
if((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[2 /*8*/])){
if((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[0 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[2 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}
}
else{
iVar0=0;
}}elseif((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[3 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[4 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[5 /*8*/])){
if((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[3 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[4 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[5 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}
break;
case 8:
if(bParam0==0){
if(((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[2 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[3 /*8*/])){
if(((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[0 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[2 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[3 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}
}
else{
iVar0=0;
}}elseif(((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[5 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[6 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[7 /*8*/])){
if(((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[4 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[5 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[6 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[7 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}
break;
}
break;
case 11:
if(bParam0==0){
if(((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[2 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[3 /*8*/])){
if(((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[0 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[1 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[2 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[3 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}}elseif(bParam0==1){
if(((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[5 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[6 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[7 /*8*/])){
if(((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[4 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[5 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[6 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[7 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}}elseif(bParam0==2){
if(((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[8 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[9 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[10 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[11 /*8*/])){
if(((!func_404(NETWORK::NET_TO_PED(Local_159.f_401[8 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[9 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[10 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)) || !func_404(NETWORK::NET_TO_PED(Local_159.f_401[11 /*8*/]), NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 0)){
iVar0=0;
}}else{
iVar0=0;
}}
break;
}
return iVar0;
}

int func_404(int iParam0, int iParam1, int iParam2){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam1)){
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2)){
return 1;
}}}
return 0;
}

int func_405(bool bParam0, int iParam1){
float fVar0;
bool bVar1;
float fVar2;
struct<3> Var3;
struct<31> Var4;
struct<3> Var5;
struct<3> Var6;
float fVar7;
int iVar8;
var uVar9;
bool bVar10;
float fVar11;
struct<31> Var12;
struct<3> Var13;
switch (func_10()){
case 12:
if(Local_159.f_523==-1){
if(Local_159.f_523.f_6==-1 || Local_159.f_523.f_6==bParam0){
Local_159.f_523.f_6=bParam0;
if(func_133(Local_159.f_523.f_7)){
if(func_133(Local_159.f_523.f_13)){
Local_159.f_523.f_13={
ENTITY::GET_ENTITY_FORWARD_VECTOR(func_40(0)) 
};
}
elseif(func_37(8)){
if(Local_120.f_361 > 5){
if(Local_120.f_363==1){
Local_120.f_363=0;
}}
func_421(func_40(0), &(Local_159.f_523.f_7), &(Local_159.f_523.f_10));
if(func_130(Local_159.f_523.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_120.f_363, Local_120.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
Local_159.f_523.f_7.f_2=func_420();
}else{
Local_159.f_523.f_7={
0f, 0f, 0f 
};
if(Local_120.f_361 < 5){
Local_120.f_361++;
}else{
Local_120.f_362++;
}}
}
else{
if(Local_120.f_361 >=5){
if(Local_120.f_363==1){
Local_120.f_363=0;
}
if(Local_120.f_362 >=5){
if(!func_37(8)){
func_34(8);
Local_159.f_523.f_7={
0f, 0f, 0f 
};
Local_120.f_361=0;
Local_120.f_362=0;
}}else{
func_417(func_40(0), &(Local_159.f_523.f_7), &(Local_159.f_523.f_10), 1);
}}else{
func_417(func_40(0), &(Local_159.f_523.f_7), &(Local_159.f_523.f_10), 0);
}
if(WATER::TEST_PROBE_AGAINST_WATER(Local_159.f_523.f_7 + Vector(2f, 0f, 0f), Local_159.f_523.f_7 - Vector(10f, 0f, 0f), &(Local_159.f_523.f_7))){
if(func_130(Local_159.f_523.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_120.f_363, Local_120.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
if(func_416(Local_159.f_523.f_7)){
}
else{
Local_159.f_523.f_7={
0f, 0f, 0f 
};
if(Local_120.f_361 < 5){
Local_120.f_361++;
}
else{
Local_120.f_362++;
}
}}else{
Local_159.f_523.f_7={
0f, 0f, 0f 
};
if(Local_120.f_361 < 5){
Local_120.f_361++;
}
else{
Local_120.f_362++;
}}}else{
Local_159.f_523.f_7={
0f, 0f, 0f 
};
if(Local_120.f_361 < 5){
Local_120.f_361++;
}else{
Local_120.f_362++;
}}
}}elseif(func_281(&(Local_159.f_500[bParam0 /*6*/]), iParam1, Local_159.f_523.f_7, Local_159.f_523.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
func_415(bParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
Local_159.f_523.f_6=-1;
Local_159.f_523.f_7={
0f, 0f, 0f 
};
Local_159.f_523.f_10=0f;
Local_159.f_523.f_12=0;
Local_159.f_523.f_11=0;
Local_120.f_361=0;
Local_120.f_363=1;
func_4(&(Local_159.f_572[bParam0 /*2*/]), 0, 0);
if(func_37(8)){
Local_159.f_545=(Local_159.f_545 + 1f);
}
else{
Local_159.f_545=(Local_159.f_545 + 0.5f);
}
return 1;
}}}
break;
case 5:
if(Local_159.f_523==-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[Local_159.f_592])){
if(func_19(Local_159.f_35[Local_159.f_592])){
if(Local_159.f_523.f_6==-1 || Local_159.f_523.f_6==bParam0){
Local_159.f_523.f_6=bParam0;
if(func_133(Local_159.f_523.f_7)){
if(func_133(Local_159.f_523.f_13)){
Local_159.f_523.f_13={
ENTITY::GET_ENTITY_FORWARD_VECTOR(NETWORK::NET_TO_VEH(Local_159.f_35[Local_159.f_592])) 
};
}else{
if((Local_159.f_523.f_13.f_2 >=0f && Local_159.f_523.f_13.f_2 < 90f) || (Local_159.f_523.f_13.f_2 >=270f && Local_159.f_523.f_13.f_2 < 360f)){
fVar0=220f;
}
else{
fVar0=120f;
}
bVar1=true;
if(MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_159.f_35[Local_159.f_592]), 1), Local_159.f_523.f_13, fVar0, &(Local_159.f_523.f_7))){
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(Local_159.f_523.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_159.f_35[Local_159.f_592]), 0), 1);
Var3={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_159.f_35[Local_159.f_592]), Local_159.f_523.f_7) 
};
if(fVar2 > 290f){
bVar1=false;
}
if(!func_130(Local_159.f_523.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0)){
bVar1=false;
}
if(MISC::ABSF(Var3.f_0) > 100f){
bVar1=false;
}
if(!bVar1){
Local_159.f_523.f_7={
0f, 0f, 0f 
};
}
else{
Local_159.f_523.f_10=func_414(Local_159.f_523.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_159.f_35[Local_159.f_592]), 1));
}
}
else{
func_413(&(Local_159.f_523.f_13));
}}}
if(!func_133(Local_159.f_523.f_7)){
if(func_281(&(Local_159.f_500[bParam0 /*6*/]), iParam1, Local_159.f_523.f_7, Local_159.f_523.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
func_415(bParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
Local_159.f_523.f_6=-1;
Local_159.f_523.f_7={
0f, 0f, 0f 
};
Local_159.f_523.f_10=0f;
Local_159.f_523.f_12=0;
Local_159.f_523.f_11=0;
Local_159.f_545=(Local_159.f_545 + 1f);
return 1;
}}
}}}}
break;
case 11:
if(Local_159.f_523==-1){
if(Local_159.f_523.f_6==-1 || Local_159.f_523.f_6==bParam0){
Local_159.f_523.f_6=bParam0;
if(func_133(Local_159.f_523.f_7)){
if(func_133(Local_159.f_523.f_16)){
Local_159.f_523.f_16={
func_412(11, Local_159.f_552[bParam0], Local_159.f_385, 0) 
};
Local_159.f_523.f_16.f_2=(Local_159.f_523.f_16.f_2 + 50f);
}
if(!func_133(Local_159.f_523.f_16)){
Var4.f_4=1125515264;
Var4.f_5=1;
Var4.f_6=1;
Var4.f_8=1082130432;
Var4.f_9=1176255488;
Var4.f_10=1;
Var4.f_13=1;
Var4.f_15=2;
Var4.f_22=2;
Var4.f_25=1;
Var4.f_26=1;
Var4.f_29=1123024896;
Var4.f_30=1;
Var4.f_0=0f;
Var4.f_1=1;
Var4.f_4=50f;
Var4.f_5=0;
Var4.f_6=1;
Var4.f_12=1;
Var4.f_3=1;
Var6={
Local_159.f_523.f_16 
};
Var5={
Local_159.f_523.f_16 
};
if(func_45(Local_159.f_523.f_16, Var5, iParam1, 0, &Var6, &(Local_159.f_523.f_10), &Var4)){
Local_159.f_523.f_7={
Var6 
};
}
}}elseif(func_281(&(Local_159.f_500[bParam0 /*6*/]), iParam1, Local_159.f_523.f_7, Local_159.f_523.f_10, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0)){
func_415(bParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
Local_159.f_523.f_6=-1;
Local_159.f_523.f_16={
0f, 0f, 0f 
};
Local_159.f_523.f_7={
0f, 0f, 0f 
};
Local_159.f_523.f_10=0f;
Local_159.f_523.f_12=0;
Local_159.f_523.f_11=0;
Local_120.f_361=0;
VEHICLE::MODIFY_VEHICLE_TOP_SPEED(NETWORK::NET_TO_VEH(Local_159.f_500[bParam0 /*6*/]), 30f);
Local_159.f_545=(Local_159.f_545 + 1f);
return 1;
}}}
break;
case 6:
if(Local_159.f_523==-1){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[Local_159.f_592])){
if(func_19(Local_159.f_35[Local_159.f_592])){
if(Local_159.f_523.f_6==-1 || Local_159.f_523.f_6==bParam0){
Local_159.f_523.f_6=bParam0;
if(Local_120.f_361 < 50){
if(func_133(Local_159.f_523.f_7)){
iVar8=func_411(Local_159.f_592);
fVar7=func_410(iVar8);
if(func_133(Local_159.f_523.f_13)){
if(iVar8 >=0){
Local_159.f_523.f_13={
func_409(iVar8) 
};
uVar9=func_408(iVar8);
Local_159.f_523.f_19={
0f, 0f, uVar9 
};
}
}
if(!func_133(Local_159.f_523.f_13)){
bVar10=true;
if(MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_159.f_35[Local_159.f_592]), 1), Local_159.f_523.f_13, fVar7, &(Local_159.f_523.f_7))){
fVar11=MISC::GET_DISTANCE_BETWEEN_COORDS(Local_159.f_523.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_159.f_35[Local_159.f_592]), 0), 1);
if(fVar11 > 300f){
bVar10=false;
}
if(!func_130(Local_159.f_523.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
bVar10=false;
}
if(!bVar10){
Local_159.f_523.f_7={
0f, 0f, 0f 
};
Local_159.f_523.f_13={
0f, 0f, 0f 
};
Local_120.f_361++;
}else{
Local_159.f_523.f_10=func_414(Local_159.f_523.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_159.f_35[Local_159.f_592]), 1));
}
}
else{
Local_120.f_361++;
func_413(&(Local_159.f_523.f_19));
Local_159.f_523.f_13={
func_407(Local_159.f_523.f_19) 
};
}
}}}else{
if(func_133(Local_159.f_523.f_16)){
Local_159.f_523.f_16={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_159.f_35[Local_159.f_592]), 0) 
};
}
if(!func_133(Local_159.f_523.f_16)){
Var12.f_4=1125515264;
Var12.f_5=1;
Var12.f_6=1;
Var12.f_8=1082130432;
Var12.f_9=1176255488;
Var12.f_10=1;
Var12.f_13=1;
Var12.f_15=2;
Var12.f_22=2;
Var12.f_25=1;
Var12.f_26=1;
Var12.f_29=1123024896;
Var12.f_30=1;
if(func_406(Local_159.f_523.f_16, -1190.658f, -2196.359f, 12.1951f, 50f, 0)){
Local_159.f_523.f_16={
-962.3659f, -2148.924f, 7.879f 
};
Var12.f_0=0f;
Var12.f_1=0;
Var12.f_4=75f;
Var12.f_5=1;
Var12.f_6=1;
Var12.f_12=0;
Var12.f_3=0;
}
else{
Var12.f_0=100f;
Var12.f_1=0;
Var12.f_4=250f;
Var12.f_5=0;
Var12.f_6=1;
Var12.f_12=0;
Var12.f_3=0;
}
Var13={
Local_159.f_523.f_16 
};
if(func_45(Local_159.f_523.f_16, Var13, iParam1, 0, &(Local_159.f_523.f_7), &(Local_159.f_523.f_10), &Var12)){
}}}
if(!func_133(Local_159.f_523.f_7)){
if(func_281(&(Local_159.f_500[bParam0 /*6*/]), iParam1, Local_159.f_523.f_7, Local_159.f_523.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
func_415(bParam0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
Local_159.f_523.f_6=-1;
Local_159.f_523.f_7={
0f, 0f, 0f 
};
Local_159.f_523.f_13={
0f, 0f, 0f 
};
Local_159.f_523.f_10=0f;
Local_159.f_523.f_12=0;
Local_159.f_523.f_11=0;
Local_159.f_545=(Local_159.f_545 + 1f);
Local_120.f_361=0;
MISC::CLEAR_BIT(&(Local_159.f_551), bParam0);
return 1;
}}
}}}}
break;
}
return 0;
}

int func_406(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


Vector3 func__407(struct<3> Param0){
return (-sin(Param0.f_2) * cos(Param0.f_0)), (cos(Param0.f_2) * cos(Param0.f_0)), sin(Param0.f_0);
}


float func_408(int iParam0){
float fVar0;
switch (iParam0){
case 0:
fVar0=317.5908f;
break;
case 1:
fVar0=65.8782f;
break;
case 2:
fVar0=79.6437f;
break;
case 3:
fVar0=339.162f;
break;
case 4:
fVar0=300.5366f;
break;
case 5:
fVar0=26.3732f;
break;
case 6:
fVar0=12.9312f;
break;
case 7:
fVar0=306.5281f;
break;
case 8:
fVar0=70.6314f;
break;
case 9:
fVar0=199.4232f;
break;
case 10:
fVar0=232.5371f;
break;
case 11:
fVar0=217.9965f;
break;
case 12:
fVar0=97.8555f;
break;
case 13:
fVar0=254.7614f;
break;
case 14:
fVar0=149.1127f;
break;
case 15:
fVar0=299.9396f;
break;
case 16:
fVar0=143.5423f;
break;
case 17:
fVar0=153.6289f;
break;
case 18:
fVar0=327.4365f;
break;
case 19:
fVar0=0f;
break;
}
return fVar0;
}


Vector3 func__409(int iParam0){
var uVar0;
struct<3> Var1;
uVar0=func_408(iParam0);
Var1={
func_407(0f, 0f, uVar0) 
};
return Var1;
}


float func_410(int iParam0){
float fVar0;
fVar0=225f;
switch (iParam0){
case 16:
fVar0=150f;
break;
case 19:
fVar0=150f;
break;
}
return fVar0;
}


bool func_411(bool bParam0){
bool bVar0;
bool bVar1;
float fVar2;
float fVar3;
struct<3> Var4;
struct<3> Var5;
bVar1=-1;
fVar2=1E+10f;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[bParam0])){
Var4={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_159.f_35[bParam0]), 0) 
};
bVar0=false;
while (bVar0 < 20){
Var5={
func_412(func_10(), bVar0, Local_159.f_385, bParam0) 
};
if(!func_133(Var5)){
fVar3=vdist2(Var4, Var5);
if(fVar3 < fVar2){
fVar2=fVar3;
bVar1=bVar0;
}}
bVar0++;
}}
return bVar1;
}


Vector3 func__412(int iParam0, bool bParam1, int iParam2, bool bParam3){
struct<3> Var0;
Var0={
0f, 0f, 0f 
};
switch (iParam0){
case 2:
switch (iParam2){
case 0:
switch (bParam1){
case 0:
Var0={
-1299.452f, 262.6427f, 62.4118f 
};
break;
case 1:
Var0={
-695.6533f, 40.4916f, 42.2066f 
};
break;
case 2:
Var0={
-423.2495f, -333.4061f, 32.1091f 
};
break;
case 3:
Var0={
-811.9092f, -954.7036f, 14.3921f 
};
break;
case 4:
Var0={
-1398.584f, -458.2471f, 33.4826f 
};
break;
}
break;
case 1:
switch (bParam1){
case 0:
Var0={
-369.0282f, -119.8091f, 37.7011f 
};
break;
case 1:
Var0={
191.6113f, 295.0079f, 104.5737f 
};
break;
case 2:
Var0={
46.4537f, -100.893f, 55.2574f 
};
break;
case 3:
Var0={
274.1785f, 6.6766f, 78.2459f 
};
break;
case 4:
Var0={
-23.201f, -715.1903f, 31.3893f 
};
break;
}
break;
case 2:
switch (bParam1){
case 0:
Var0={
-585.7718f, -754.8728f, 28.487f 
};
break;
case 1:
Var0={
-944.804f, -1526.43f, 4.0691f 
};
break;
case 2:
Var0={
-1192.996f, -730.683f, 19.8283f 
};
break;
case 3:
Var0={
132.2173f, -1060.27f, 28.1924f 
};
break;
case 4:
Var0={
-832.2669f, -1267.991f, 4.0004f 
};
break;
}
break;
case 3:
switch (bParam1){
case 0:
Var0={
332.3376f, -1258.746f, 30.6282f 
};
break;
case 1:
Var0={
1249.714f, -344.7008f, 68.0822f 
};
break;
case 2:
Var0={
1240.689f, -1096.686f, 37.5253f 
};
break;
case 3:
Var0={
1212.722f, -1764.765f, 39.0275f 
};
break;
case 4:
Var0={
1108.78f, -781.7119f, 57.2627f 
};
break;
}
break;
case 4:
switch (bParam1){
case 0:
Var0={
186.5039f, -1675.689f, 28.5411f 
};
break;
case 1:
Var0={
-146.6724f, -1421.555f, 29.8175f 
};
break;
case 2:
Var0={
444.3614f, -1754.799f, 27.8588f 
};
break;
case 3:
Var0={
-297.4062f, -2219.247f, 8.3765f 
};
break;
case 4:
Var0={
585.7614f, -2808.511f, 5.0589f 
};
break;
}
break;
}
break;
case 10:
switch (iParam2){
case 0:
switch (bParam1){
case 0:
Var0={
-449.1798f, 1587.87f, 358.0182f 
};
break;
case 1:
Var0={
-3225.118f, 1286.525f, 4.4326f 
};
break;
case 2:
Var0={
-1586.618f, 5206.799f, 3.0067f 
};
break;
case 3:
Var0={
1310.94f, 4324.869f, 37.0952f 
};
break;
case 4:
Var0={
-2113.739f, 2836.921f, 31.8098f 
};
break;
}
break;
case 1:
switch (bParam1){
case 0:
Var0={
3809.724f, 4462.729f, 3.2886f 
};
break;
case 1:
Var0={
2482.591f, 1592.293f, 31.7203f 
};
break;
case 2:
Var0={
1233.033f, 1915.367f, 76.9579f 
};
break;
case 3:
Var0={
891.9604f, 3580.195f, 32.3722f 
};
break;
case 4:
Var0={
3521.939f, 3726.971f, 35.4464f 
};
break;
}
break;
case 2:
switch (bParam1){
case 0:
Var0={
2580.501f, 493.3184f, 107.4995f 
};
break;
case 1:
Var0={
358.391f, 939.3512f, 204.4465f 
};
break;
case 2:
Var0={
410.5613f, 2988.301f, 39.5277f 
};
break;
case 3:
Var0={
2718.154f, 4314.578f, 45.8063f 
};
break;
case 4:
Var0={
1681.848f, 2514.129f, 44.5649f 
};
break;
}
break;
case 3:
switch (bParam1){
case 0:
Var0={
1883.553f, -1038.177f, 77.9114f 
};
break;
case 1:
Var0={
532.6779f, -175.9999f, 53.5182f 
};
break;
case 2:
Var0={
-1370.041f, 145.2471f, 55.1749f 
};
break;
case 3:
Var0={
-1843.174f, -1222.625f, 12.0172f 
};
break;
case 4:
Var0={
496.9435f, -3309.341f, 5.0699f 
};
break;
}
break;
case 4:
switch (bParam1){
case 0:
Var0={
737.5259f, 1298.149f, 359.296f 
};
break;
case 1:
Var0={
855.9249f, -2342.031f, 29.3313f 
};
break;
case 2:
Var0={
2311.147f, -2101.435f, 4.7593f 
};
break;
case 3:
Var0={
2332.73f, 2582.851f, 45.6677f 
};
break;
case 4:
Var0={
2525.849f, -381.3248f, 91.9928f 
};
break;
}
break;
}
break;
case 1:
switch (iParam2){
case 0:
switch (bParam1){
case 0:
Var0={
-707.0764f, -120.0074f, 36.5922f 
};
break;
case 1:
Var0={
-1696.003f, -443.9459f, 40.2671f 
};
break;
case 2:
Var0={
-789.0488f, -402.33f, 34.9388f 
};
break;
case 3:
Var0={
-754.5149f, -1061.631f, 10.95f 
};
break;
case 4:
Var0={
-1674.866f, 404.3879f, 87.9936f 
};
break;
}
break;
case 1:
switch (bParam1){
case 0:
Var0={
133.3449f, -372.5482f, 42.257f 
};
break;
case 1:
Var0={
932.5692f, -4.6969f, 77.7649f 
};
break;
case 2:
Var0={
-133.423f, -26.4075f, 57.1028f 
};
break;
case 3:
Var0={
50.0543f, -913.4272f, 28.8183f 
};
break;
case 4:
Var0={
225.4608f, -29.0171f, 68.7371f 
};
break;
}
break;
case 2:
switch (bParam1){
case 0:
Var0={
-299.8723f, -617.105f, 32.4082f 
};
break;
case 1:
Var0={
-549.9492f, -902.8572f, 22.8788f 
};
break;
case 2:
Var0={
-15.4556f, -1087.453f, 25.6721f 
};
break;
case 3:
Var0={
-1039.15f, -1592.79f, 3.8447f 
};
break;
case 4:
Var0={
-871.0274f, -224.0974f, 38.4019f 
};
break;
}
break;
case 3:
switch (bParam1){
case 0:
Var0={
318.3301f, -179.1691f, 56.6632f 
};
break;
case 1:
Var0={
164.1423f, -1282.765f, 28.2341f 
};
break;
case 2:
Var0={
1189.492f, -1382.987f, 34.1077f 
};
break;
case 3:
Var0={
1002.124f, -1856.855f, 29.8898f 
};
break;
case 4:
Var0={
1153.555f, -469.6292f, 65.5486f 
};
break;
}
break;
case 4:
switch (bParam1){
case 0:
Var0={
234.9748f, -1772.652f, 27.6514f 
};
break;
case 1:
Var0={
429.9525f, -1519.895f, 28.3023f 
};
break;
case 2:
Var0={
64.8993f, -1416.897f, 28.3117f 
};
break;
case 3:
Var0={
-692.3597f, -2287.157f, 11.9528f 
};
break;
case 4:
Var0={
662.7217f, -2672.821f, 5.0812f 
};
break;
}
break;
}
break;
case 9:
switch (func_350()){
case 0:
switch (iParam2){
case 0:
Var0={
1700.735f, 3275.532f, 40.1501f 
};
break;
case 1:
Var0={
-12.182f, 3040.162f, 39.806f 
};
break;
case 2:
Var0={
-2106.702f, 2623.127f, 0.1216f 
};
break;
case 3:
Var0={
214.3879f, 2455.856f, 55.6948f 
};
break;
case 4:
Var0={
2124.389f, 2907.424f, 46.5752f 
};
break;
}
break;
case 1:
case 7:
switch (bParam3){
case 0:
switch (iParam2){
case 0:
Var0={
1700.735f, 3275.532f, 40.1501f 
};
break;
case 1:
Var0={
-12.182f, 3040.162f, 39.806f 
};
break;
case 2:
Var0={
-2106.702f, 2623.127f, 0.1216f 
};
break;
case 3:
Var0={
214.3879f, 2455.856f, 55.6948f 
};
break;
case 4:
Var0={
2124.389f, 2907.424f, 46.5752f 
};
break;
}
break;
case 1:
switch (iParam2){
case 0:
Var0={
1717.141f, 3263.154f, 40.1444f 
};
break;
case 1:
Var0={
-3.0926f, 3021.231f, 39.6635f 
};
break;
case 2:
Var0={
-2116.218f, 2673.74f, 1.8178f 
};
break;
case 3:
Var0={
217.964f, 2436.037f, 57.85f 
};
break;
case 4:
Var0={
2101.716f, 2916.395f, 46.8035f 
};
break;
}
break;
case 2:
switch (iParam2){
case 0:
Var0={
1693.036f, 3244.896f, 39.8872f 
};
break;
case 1:
Var0={
22.1065f, 3048.683f, 39.9493f 
};
break;
case 2:
Var0={
-2108.359f, 2643.392f, 2.1806f 
};
break;
case 3:
Var0={
229.8819f, 2455.856f, 54.7963f 
};
break;
case 4:
Var0={
2137.322f, 2873.328f, 45.837f 
};
break;
}
break;
}
break;
case 2:
switch (iParam2){
case 0:
Var0={
1693.036f, 3244.896f, 39.8872f 
};
break;
case 1:
Var0={
22.1065f, 3048.683f, 39.9493f 
};
break;
case 2:
Var0={
-2108.359f, 2643.392f, 2.1806f 
};
break;
case 3:
Var0={
229.8819f, 2455.856f, 54.7963f 
};
break;
case 4:
Var0={
2137.322f, 2873.328f, 45.837f 
};
break;
}
break;
}
break;
case 8:
case 7:
case 11:
switch (iParam2){
case 0:
switch (bParam1){
case 0:
Var0={
-670.0045f, 849.1271f, 224.0524f 
};
break;
case 1:
Var0={
-400.403f, 876.396f, 230.2865f 
};
break;
case 2:
Var0={
-874.7065f, -25.0867f, 40.7714f 
};
break;
case 3:
Var0={
-537.2419f, 615.7321f, 136.7603f 
};
break;
case 4:
Var0={
-2174.372f, -408.0548f, 12.2911f 
};
break;
case 5:
Var0={
-1554.388f, 840.493f, 181.9932f 
};
break;
case 6:
Var0={
-1940.993f, 1787.986f, 172.0708f 
};
break;
case 7:
Var0={
-3015.475f, 91.9937f, 10.6141f 
};
break;
case 8:
Var0={
-3174.391f, 1108.541f, 19.8395f 
};
break;
case 9:
Var0={
-1731.302f, -194.1319f, 57.2888f 
};
break;
case 10:
Var0={
-2198.402f, 4260.813f, 47.0475f 
};
break;
case 11:
Var0={
-187.4784f, 1554.445f, 321.2434f 
};
break;
case 12:
Var0={
-2015.946f, 597.9245f, 116.7153f 
};
break;
case 13:
Var0={
163.7828f, 474.4106f, 141.2679f 
};
break;
case 14:
Var0={
-1609.788f, -816.7905f, 9.0389f 
};
break;
case 15:
Var0={
-36.5543f, 3023.273f, 39.906f 
};
break;
case 16:
Var0={
-2817.479f, 2320.174f, 1.6076f 
};
break;
case 17:
Var0={
-220.7927f, 3662.056f, 63.4125f 
};
break;
case 18:
Var0={
-2512.163f, 3610.042f, 12.7256f 
};
break;
case 19:
Var0={
-1603.872f, 3092.417f, 31.5661f 
};
break;
}
break;
case 1:
switch (bParam1){
case 0:
Var0={
-381.3748f, 282.9188f, 83.8448f 
};
break;
case 1:
Var0={
-106.229f, 909.09f, 235.2054f 
};
break;
case 2:
Var0={
-59.7287f, 1958.52f, 189.1861f 
};
break;
case 3:
Var0={
1101.413f, 2122.263f, 52.4739f 
};
break;
case 4:
Var0={
1213.987f, 2655.706f, 36.81f 
};
break;
case 5:
Var0={
-1513.631f, 1495.125f, 114.6609f 
};
break;
case 6:
Var0={
659.1781f, 603.3151f, 128.0561f 
};
break;
case 7:
Var0={
79.8783f, -432.2236f, 36.553f 
};
break;
case 8:
Var0={
-285.1832f, 2546.966f, 73.0644f 
};
break;
case 9:
Var0={
-1549.607f, 118.4193f, 55.6403f 
};
break;
case 10:
Var0={
-512.8932f, 1184.815f, 323.9306f 
};
break;
case 11:
Var0={
2447.034f, 1583.661f, 31.7203f 
};
break;
case 12:
Var0={
2695.286f, 2768.691f, 36.883f 
};
break;
case 13:
Var0={
2100.727f, 2332.267f, 93.2854f 
};
break;
case 14:
Var0={
-877.3867f, -38.4123f, 37.7636f 
};
break;
case 15:
Var0={
1458.147f, 1113.403f, 113.334f 
};
break;
case 16:
Var0={
-1161.019f, 933.2432f, 196.7478f 
};
break;
case 17:
Var0={
770.8779f, -233.7807f, 65.1145f 
};
break;
case 18:
Var0={
2178.225f, 3314.676f, 45.0137f 
};
break;
case 19:
Var0={
705.1279f, 3121.097f, 42.8557f 
};
break;
}
break;
case 2:
switch (bParam1){
case 0:
Var0={
56.9063f, 3715.503f, 38.7549f 
};
break;
case 1:
Var0={
982.8329f, 3587.869f, 32.5401f 
};
break;
case 2:
Var0={
1941.305f, 3826.197f, 30.91f 
};
break;
case 3:
Var0={
2932.435f, 4307.926f, 49.8501f 
};
break;
case 4:
Var0={
-2093.322f, 2623.675f, 0.1029f 
};
break;
case 5:
Var0={
-1911.57f, 2047.298f, 139.7377f 
};
break;
case 6:
Var0={
741.1844f, 2568.981f, 74.6179f 
};
break;
case 7:
Var0={
2333.234f, 2553.385f, 45.6677f 
};
break;
case 8:
Var0={
-299.0912f, 2834.353f, 56.3827f 
};
break;
case 9:
Var0={
-2821.048f, 1423.333f, 99.8296f 
};
break;
case 10:
Var0={
1800.979f, 4611.315f, 36.1828f 
};
break;
case 11:
Var0={
2615.021f, 3263.901f, 54.2129f 
};
break;
case 12:
Var0={
1735.609f, 3039.561f, 60.1301f 
};
break;
case 13:
Var0={
1337.261f, 4372.085f, 43.3327f 
};
break;
case 14:
Var0={
787.413f, 4199.005f, 42.0116f 
};
break;
case 15:
Var0={
519.8339f, 3076.235f, 39.2289f 
};
break;
case 16:
Var0={
1373.727f, 2172.662f, 96.7173f 
};
break;
case 17:
Var0={
2484.979f, 4118.685f, 37.0647f 
};
break;
case 18:
Var0={
2378.74f, 5052.728f, 45.4446f 
};
break;
case 19:
Var0={
-255.3838f, 2194.551f, 128.7711f 
};
break;
}
break;
case 3:
switch (bParam1){
case 0:
Var0={
1518.801f, 785.9623f, 76.4403f 
};
break;
case 1:
Var0={
1581.077f, 2165.04f, 78.3579f 
};
break;
case 2:
Var0={
2527.621f, 2632.557f, 36.9449f 
};
break;
case 3:
Var0={
2709.996f, 4145.588f, 42.7586f 
};
break;
case 4:
Var0={
1080.862f, -693.2229f, 56.9129f 
};
break;
case 5:
Var0={
2126.975f, 4795.901f, 40.1411f 
};
break;
case 6:
Var0={
714.4439f, 4174.895f, 39.7092f 
};
break;
case 7:
Var0={
-200.5495f, 3661.389f, 50.7431f 
};
break;
case 8:
Var0={
-589.3684f, 5303.475f, 69.2145f 
};
break;
case 9:
Var0={
-1150.776f, 4924.217f, 220.44f 
};
break;
case 10:
Var0={
381.9156f, 3559.266f, 32.7679f 
};
break;
case 11:
Var0={
1752.881f, 3322.908f, 40.1889f 
};
break;
case 12:
Var0={
1422.619f, 4382.753f, 42.9035f 
};
break;
case 13:
Var0={
1830.393f, 3834.776f, 32.322f 
};
break;
case 14:
Var0={
1054.493f, 2669.53f, 38.5525f 
};
break;
case 15:
Var0={
2719.419f, 3510.76f, 60.526f 
};
break;
case 16:
Var0={
-691.6814f, 5774.155f, 16.331f 
};
break;
case 17:
Var0={
1123.888f, 3589.888f, 30.4069f 
};
break;
case 18:
Var0={
-89.1929f, 6132.037f, 29.3863f 
};
break;
case 19:
Var0={
357.4159f, 4442.63f, 61.914f 
};
break;
}
break;
case 4:
switch (bParam1){
case 0:
Var0={
-2531.017f, 2329.048f, 32.0599f 
};
break;
case 1:
Var0={
-1114.902f, 2707.805f, 22.8413f 
};
break;
case 2:
Var0={
182.5478f, 3056.533f, 42.0161f 
};
break;
case 3:
Var0={
1563.959f, 3572.568f, 32.76f 
};
break;
case 4:
Var0={
2530.204f, 4207.563f, 39.0731f 
};
break;
case 5:
Var0={
-1602.434f, 235.0285f, 58.3189f 
};
break;
case 6:
Var0={
-65.4509f, 1895.882f, 195.0575f 
};
break;
case 7:
Var0={
667.8909f, 1279.831f, 359.296f 
};
break;
case 8:
Var0={
2674.628f, 1453.696f, 23.5008f 
};
break;
case 9:
Var0={
2941.702f, 2781.825f, 38.5054f 
};
break;
case 10:
Var0={
892.1917f, 3649.88f, 31.8108f 
};
break;
case 11:
Var0={
1336.44f, 2751.43f, 50.5583f 
};
break;
case 12:
Var0={
2382.11f, 3051.253f, 47.1529f 
};
break;
case 13:
Var0={
1945.158f, 4623.212f, 39.4508f 
};
break;
case 14:
Var0={
-221.1028f, 1006.303f, 231.3454f 
};
break;
case 15:
Var0={
-682.4611f, 535.6774f, 109.7483f 
};
break;
case 16:
Var0={
1215.716f, 1871.846f, 77.9239f 
};
break;
case 17:
Var0={
2962.188f, 3482.686f, 70.3452f 
};
break;
case 18:
Var0={
2131.371f, 1937.693f, 92.7868f 
};
break;
case 19:
Var0={
-3196.841f, 1307.077f, 22.8526f 
};
break;
}
break;
}
break;
case 12:
switch (iParam2){
case 0:
Var0={
-3006.451f, -1739.208f, 0.375f 
};
break;
case 1:
Var0={
362.5889f, -4226.308f, 0f 
};
break;
case 2:
Var0={
-1197.301f, -4122.952f, 0f 
};
break;
case 3:
Var0={
3183.194f, -3334.239f, 0.7499f 
};
break;
case 4:
Var0={
2231.863f, -4262.798f, 0f 
};
break;
}
break;
case 13:
switch (iParam2){
case 0:
Var0={
1141.957f, -4341.856f, 0f 
};
break;
case 1:
Var0={
2548.961f, -3486.992f, 0.375f 
};
break;
case 2:
Var0={
-2044.753f, -4092.995f, 0f 
};
break;
case 3:
Var0={
-2793.705f, -2629.224f, 0.75f 
};
break;
case 4:
Var0={
-401.409f, -4391.101f, 0f 
};
break;
}
break;
default:
switch (bParam3){
case 0:
switch (bParam1){
case 0:
Var0={
-1143.777f, -2223.181f, 12.1958f 
};
break;
case 1:
Var0={
-815.8469f, -771.4702f, 20.0395f 
};
break;
case 2:
Var0={
-247.3628f, -252.8104f, 35.519f 
};
break;
case 3:
Var0={
-20.1711f, -196.9198f, 51.3703f 
};
break;
case 4:
Var0={
-1206.244f, 332.5545f, 69.9894f 
};
break;
case 5:
Var0={
-737.7712f, -271.9272f, 35.9486f 
};
break;
case 6:
Var0={
-10.6554f, -1032.781f, 27.9804f 
};
break;
case 7:
Var0={
203.926f, -1469.377f, 28.1446f 
};
break;
case 8:
Var0={
1242.214f, -3156.207f, 4.5283f 
};
break;
case 9:
Var0={
-3157.448f, 1127.872f, 19.844f 
};
break;
case 10:
Var0={
-1805.809f, -406.731f, 43.6066f 
};
break;
case 11:
Var0={
-2091.808f, -295.2459f, 12.0469f 
};
break;
case 12:
Var0={
1499.64f, -1888.19f, 70.8845f 
};
break;
case 13:
Var0={
521.9511f, -2731.876f, 5.0571f 
};
break;
case 14:
Var0={
620.4022f, 193.6013f, 97.381f 
};
break;
case 15:
Var0={
-2190.606f, -414.4555f, 12.1441f 
};
break;
case 16:
Var0={
2528.09f, -311.8917f, 91.9929f 
};
break;
case 17:
Var0={
1475.093f, 1140.771f, 113.3343f 
};
break;
case 18:
Var0={
-164.1015f, 976.5763f, 234.9009f 
};
break;
case 19:
Var0={
-125.636f, -2244.66f, 6.8117f 
};
break;
}
break;
case 1:
switch (bParam1){
case 0:
Var0={
-1133.386f, -2229.273f, 12.1957f 
};
break;
case 1:
Var0={
-834.9979f, -771.7531f, 20.0186f 
};
break;
case 2:
Var0={
-242.6335f, -240.8987f, 35.519f 
};
break;
case 3:
Var0={
1.871f, -202.816f, 51.742f 
};
break;
case 4:
Var0={
-1208.844f, 340.3609f, 70.0006f 
};
break;
case 5:
Var0={
-727.7335f, -287.528f, 35.9482f 
};
break;
case 6:
Var0={
-28.01f, -1030.556f, 27.8435f 
};
break;
case 7:
Var0={
190.617f, -1454.129f, 28.1416f 
};
break;
case 8:
Var0={
1242.088f, -3148.675f, 4.5282f 
};
break;
case 9:
Var0={
-3170.323f, 1126.011f, 19.9681f 
};
break;
case 10:
Var0={
-1792.41f, -394.6852f, 44.0166f 
};
break;
case 11:
Var0={
-2104.064f, -294.0901f, 12.0469f 
};
break;
case 12:
Var0={
1458.824f, -1937.281f, 70.3057f 
};
break;
case 13:
Var0={
529.5776f, -2736.348f, 5.0569f 
};
break;
case 14:
Var0={
602.5372f, 147.507f, 97.0363f 
};
break;
case 15:
Var0={
-2189.286f, -384.7161f, 12.3121f 
};
break;
case 16:
Var0={
2490.019f, -332.8641f, 91.9927f 
};
break;
case 17:
Var0={
1481.655f, 1140.735f, 113.3343f 
};
break;
case 18:
Var0={
-130.6895f, 1005.831f, 234.732f 
};
break;
case 19:
Var0={
-125.1937f, -2249.124f, 6.8117f 
};
break;
}
break;
case 2:
switch (bParam1){
case 0:
Var0={
-1190.658f, -2196.359f, 12.1951f 
};
break;
case 1:
Var0={
-810.0179f, -747.1166f, 22.3082f 
};
break;
case 2:
Var0={
-243.9944f, -218.211f, 35.519f 
};
break;
case 3:
Var0={
-47.888f, -188.9245f, 51.1469f 
};
break;
case 4:
Var0={
-1194.665f, 323.0352f, 69.7224f 
};
break;
case 5:
Var0={
-703.6254f, -299.056f, 35.6984f 
};
break;
case 6:
Var0={
-20.652f, -1017.787f, 27.9166f 
};
break;
case 7:
Var0={
182.8745f, -1485.711f, 28.1416f 
};
break;
case 8:
Var0={
1242.467f, -3142.34f, 4.5282f 
};
break;
case 9:
Var0={
-3183.809f, 1088.898f, 19.8407f 
};
break;
case 10:
Var0={
-1784.578f, -378.8281f, 43.9675f 
};
break;
case 11:
Var0={
-2077.491f, -336.0633f, 12.1576f 
};
break;
case 12:
Var0={
1484.176f, -1923.298f, 70.2404f 
};
break;
case 13:
Var0={
492.0316f, -2718.325f, 5.0576f 
};
break;
case 14:
Var0={
611.6172f, 168.9255f, 97.2794f 
};
break;
case 15:
Var0={
-2205.85f, -370.1107f, 12.283f 
};
break;
case 16:
Var0={
2527.898f, -307.077f, 91.9929f 
};
break;
case 17:
Var0={
1497.473f, 1130.526f, 113.3343f 
};
break;
case 18:
Var0={
-105.4721f, 1004.142f, 234.7601f 
};
break;
case 19:
Var0={
-125.1227f, -2253.726f, 6.8117f 
};
break;
}
break;
}
break;
}
return Var0;
}


void func_413(var uParam0){
Local_159.f_523.f_12++;
if(Local_159.f_523.f_12 < 5){
switch (Local_159.f_523.f_12){
case 1:
case 2:
*uParam0={
*uParam0 + Vector(10f, 0f, 0f) 
};
break;
case 3:
*uParam0={
*uParam0 - Vector(30f, 0f, 0f) 
};
break;
case 4:
*uParam0={
*uParam0 - Vector(10f, 0f, 0f) 
};
break;
}
if(uParam0->f_2 > 360f){
uParam0->f_2=(uParam0->f_2 - 360f);
}}else{
Local_159.f_523.f_12=0;
*uParam0={
*uParam0 + Vector(20f, 0f, 0f) 
};
}}


float func_414(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}


void func_415(int iParam0){
int iVar0;
iVar0=NETWORK::NET_TO_VEH(Local_159.f_500[iParam0 /*6*/]);
if(!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0))){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 0);
}
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar0, 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 1, 1, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iVar0, 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, 1);
if(func_386() || func_11()){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("huntley")){
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iVar0, 0);
}}elseif(func_12() || (func_217() && func_37(8))){
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar0);
ENTITY::SET_ENTITY_DYNAMIC(iVar0, 1);
PHYSICS::ACTIVATE_PHYSICS(iVar0);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, 1);
if(func_37(8)){
VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("vehicle_weapon_space_rocket"), iVar0, 0);
VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("weapon_vehicle_rocket"), iVar0, 0);
}}}

int func_416(struct<3> Param0){
float fVar0;
struct<3> Var1;
Var1={
Param0 + Vector(100f, 0f, 0f) 
};
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar0, 0, 0)){
if(Param0.f_2 > fVar0){
return 1;
}}
return 0;
}


void func_417(int iParam0, var uParam1, var uParam2, bool bParam3){
struct<3> Var0;
if(bParam3){
*uParam1={
func_418(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 50f, (50f * 1.5f), 10f) 
};
}else{
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, 120f, 0f) 
};
*uParam1={
func_418(Var0, 25f, 50f, 10f) 
};
}
*uParam2=func_414(*uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1));
}


Vector3 func__418(struct<3> Param0, float fParam1, float fParam2, float fParam3){
struct<3> Var0;
float fVar1;
Var0={
MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f 
};
fVar1=(fParam3 / 2f);
Var0={
func_419(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) 
};
Var0.f_2=MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
return Param0 + Var0;
}


Vector3 func__419(struct<3> Param0, float fParam1){
float fVar0;
if(fParam1==0f){
return 0f, 0f, 0f;
}
fVar0=vmag(Param0);
if(fVar0 !=0f){
return Param0 * FtoV((fParam1 / fVar0));
}
return 0f, 0f, 0f;
}


float func_420(){
if(func_12()){
return 75f;
}
return 75f;
}


void func_421(int iParam0, var uParam1, var uParam2){
struct<3> Var0;
float fVar1;
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fVar1=func_420();
*uParam1={
func_418(Var0, 100f, 200f, fVar1) 
};
uParam1->f_2=fVar1;
*uParam2=func_414(*uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1));
}

int func_422(){
switch (func_10()){
case 12:
if(func_37(8)){
return joaat("buzzard");
}else{
return joaat("seashark");
}
break;
case 5:
case 6:
return Local_159.f_546;
break;
case 11:
if(Local_159.f_545 <=1f){
return joaat("buzzard");
}else{
return joaat("valkyrie");
}
break;
}
return 0;
}

int func_423(){
if(func_192() !=0){
return 0;
}
if(((func_217() || func_386()) || func_12()) || func_11()){
if(Local_159.f_545 >=IntToFloat(func_427())){
return 0;
}}
if(func_5(&(Local_159.f_521))){
if(!func_189(&(Local_159.f_521), 3000, 0)){
return 0;
}}
if(func_426()){
if(func_37(9)){
return 1;
}}
if(func_37(18)){
if(func_386()){
if(func_5(&(Local_159.f_519))){
return 0;
}}
return 1;
}
if(func_12()){
if(Local_159.f_545 < 3f){
return 1;
}}
if(func_11()){
if(func_5(&(Local_159.f_519))){
return 0;
}
if(Local_159.f_57 >=func_424()){
if(func_387()){
if(!func_2294(1)){
Local_159.f_592=MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
func_24(1);
}}
return 1;
}}
return 0;
}

int func_424(){
switch (Local_159.f_583){
case 0:
return func_425();
break;
case 1:
return func_425() * 2;
break;
case 2:
return func_425();
break;
case 3:
return func_425();
break;
case 4:
return func_425();
break;
case 5:
return func_425() * 2;
break;
case 6:
case 7:
return func_425() * 3;
break;
}
return -1;
}

int func_425(){
switch (func_10()){
case 8:
case 11:
case 7:
if(Global_1949955 <=4){
return 3;
}elseif(Global_1949955 <=9){
return 6;
}else{
return 10;
}
break;
case 1:
case 2:
case 10:
return 5;
}
return 1;
}

int func_426(){
if((func_37(10) || func_37(11)) || func_37(12)){
return 1;
}
return 0;
}

int func_427(){
int iVar0;
int iVar1;
iVar0=0;
iVar1=Global_1949957;
if(Global_1949955==1){
iVar1=3;
}
if(func_217()){
switch (iVar1){
case 1:
case 4:
iVar0=Global_262145.f_16723;
break;
case 2:
iVar0=Global_262145.f_16722;
break;
case 3:
iVar0=Global_262145.f_16721;
break;
default:
iVar0=Global_262145.f_16723;
break;
}}
if(func_386()){
switch (iVar1){
case 1:
case 4:
iVar0=Global_262145.f_16720 * 2;
if(iVar0 > 6){
iVar0=6;
}
break;
case 2:
iVar0=Global_262145.f_16719 * 2;
if(iVar0 > 6){
iVar0=6;
}
break;
case 3:
iVar0=Global_262145.f_16718 * 2;
if(iVar0 > 6){
iVar0=6;
}
break;
default:
iVar0=6;
break;
}}
if(func_12()){
switch (iVar1){
case 1:
case 4:
iVar0=Global_262145.f_16702;
if(iVar0 > 3){
iVar0=3;
}
break;
case 2:
iVar0=Global_262145.f_16701;
if(iVar0 > 3){
iVar0=3;
}
break;
case 3:
iVar0=Global_262145.f_16700;
if(iVar0 > 3){
iVar0=3;
}
break;
default:
iVar0=3;
break;
}}
if(func_11()){
switch (iVar1){
case 1:
case 4:
iVar0=Global_262145.f_16717 * 2;
if(iVar0 > 6){
iVar0=6;
}
break;
case 2:
iVar0=Global_262145.f_16716 * 2;
if(iVar0 > 6){
iVar0=6;
}
break;
case 3:
iVar0=Global_262145.f_16715 * 2;
if(iVar0 > 6){
iVar0=6;
}
break;
default:
iVar0=6;
break;
}}
return iVar0;
}


void func_428(){
bool bVar0;
var uVar1;
bool bVar2;
if(func_214()){
bVar2=false;
while (bVar2 < func_212()){
func_443(bVar2);
switch (func_442(bVar2)){
case 0:
break;
case 1:
if(func_209(bVar2)){
func_391(bVar2, 2);
}
break;
case 2:
if(func_209(bVar2)){
switch (func_10()){
case 13:
case 9:
if(!ENTITY::IS_ENTITY_DEAD(func_441(bVar2), 0)){
if(func_37(6)){
func_391(bVar2, func_440(bVar2));
}}else{
if(!func_37(6)){
func_34(6);
}
func_391(bVar2, 18);
}
break;
case 12:
if(!ENTITY::IS_ENTITY_DEAD(func_199(bVar2), 0)){
func_391(bVar2, func_440(bVar2));
}else{
func_391(bVar2, 18);
}
break;
case 5:
case 6:
if(!ENTITY::IS_ENTITY_DEAD(func_199(bVar2), 0)){
func_391(bVar2, func_440(bVar2));
}else{
func_391(bVar2, 18);
}
break;
case 11:
if(!ENTITY::IS_ENTITY_DEAD(func_199(bVar2), 0)){
if(MISC::IS_BIT_SET(Local_159.f_550, func_439(bVar2))){
func_391(bVar2, func_440(bVar2));
}}else{
func_391(bVar2, 18);
}
break;
}}
break;
case 6:
if(func_209(bVar2)){
if(ENTITY::IS_ENTITY_DEAD(func_441(bVar2), 0)){
func_391(bVar2, 18);
}
else{
if(func_217() || func_386()){
func_433(bVar2);
}
if(MISC::IS_BIT_SET(Local_159.f_549, bVar2)){
func_391(bVar2, 14);
}
if(func_12()){
if(func_432()==func_424() || func_374() > 1){
func_391(bVar2, 12);
}}
}}
break;
case 9:
if(func_209(bVar2)){
if(ENTITY::IS_ENTITY_DEAD(func_441(bVar2), 0)){
func_391(bVar2, 18);
}
else{
if(func_217() || func_386()){
func_433(bVar2);
}
if(func_12()){
if(func_431()){
func_391(bVar2, 13);
}}
if(MISC::IS_BIT_SET(Local_159.f_549, bVar2)){
func_391(bVar2, 14);
}
}}
break;
case 8:
if(func_209(bVar2)){
if(ENTITY::IS_ENTITY_DEAD(func_441(bVar2), 0)){
func_391(bVar2, 18);
}
else{
if((func_217() || func_386()) || func_12()){
func_433(bVar2);
}
if(func_12()){
if(func_432()==func_424() || func_374() > 1){
func_391(bVar2, 13);
}elseif(func_430(bVar2)){
if(func_429(bVar2, &uVar1, 1132068864)){
Local_159.f_592=uVar1;
func_391(bVar2, 9);
}}}
if(func_11()){
bVar0=func_439(bVar2);
if(bVar0 > -1){
if(MISC::IS_BIT_SET(Local_159.f_551, bVar0)){
if(PED::IS_PED_IN_ANY_VEHICLE(func_199(bVar2), 0)){
func_391(bVar2, 17);
}
}}}
}}
break;
case 12:
break;
case 13:
break;
case 17:
if(func_11()){
if(func_209(bVar2)){
if(!ENTITY::IS_ENTITY_DEAD(func_441(bVar2), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(func_199(bVar2), 0)){
func_391(bVar2, 8);
}}
}}
break;
case 14:
if(func_209(bVar2)){
if(ENTITY::IS_ENTITY_DEAD(func_441(bVar2), 0)){
func_391(bVar2, 18);
}
else{
if(func_374() > 1){
func_391(bVar2, 10);
}
func_433(bVar2);
}}
break;
case 15:
break;
case 16:
break;
case 18:
break;
case 19:
break;
}
bVar2++;
}}}

int func_429(bool bParam0, var uParam1, float fParam2){
float fVar0;
int iVar1;
fVar0=(fParam2 * fParam2);
iVar1=0;
while (iVar1 < func_21()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[iVar1])){
if(func_19(Local_159.f_35[iVar1])){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_159.f_35[iVar1]), -1, 0) !=0){
if(vdist2(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_159.f_401[bParam0 /*8*/]), 0), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_159.f_35[iVar1]), 1)) <=fVar0){
*uParam1=iVar1;
return 1;
}}}}
iVar1++;
}
return 0;
}

int func_430(bool bParam0){
if(func_12()){
switch (bParam0){
case 0:
case 4:
case 8:
return 1;
}
default:
}
return 0;
}


bool func_431(){
return func_432()==func_424();
}

int func_432(){
return Local_159.f_57;
}


void func_433(bool bParam0){
float fVar0;
float fVar1;
bool bVar2;
int iVar3;
struct<3> Var4;
float fVar5;
float fVar6;
fVar0=func_438();
fVar1=func_437();
iVar3=func_436(bParam0, &bVar2);
if(ENTITY::DOES_ENTITY_EXIST(iVar3)){
if(!MISC::IS_BIT_SET(Local_159.f_548, bParam0)){
if(func_435(func_441(bParam0), iVar3, 1) > fVar0){
MISC::SET_BIT(&(Local_159.f_548), bParam0);
}elseif(func_435(func_441(bParam0), iVar3, 1) > fVar1){
if(!func_5(&(Local_159.f_401[bParam0 /*8*/].f_6))){
func_4(&(Local_159.f_401[bParam0 /*8*/].f_6), 0, 0);
}elseif(func_189(&(Local_159.f_401[bParam0 /*8*/].f_6), func_434(), 0)){
MISC::SET_BIT(&(Local_159.f_548), bParam0);
}}elseif(func_5(&(Local_159.f_401[bParam0 /*8*/].f_6))){
func_203(&(Local_159.f_401[bParam0 /*8*/].f_6));
}}
if(func_386()){
if(!MISC::IS_BIT_SET(Local_159.f_548, bParam0)){
if(!MISC::IS_BIT_SET(Local_159.f_549, bParam0)){
if(Local_159.f_72[bVar2] >=0){
Var4={
func_412(func_10(), Local_159.f_72[bVar2], Local_159.f_385, bVar2) 
};
fVar5=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_441(bParam0), 0), Var4, 1);
if(fVar5 < 100f){
MISC::SET_BIT(&(Local_159.f_549), bParam0);
}}}}}elseif(func_12()){
if(!MISC::IS_BIT_SET(Local_159.f_548, bParam0)){
if(!MISC::IS_BIT_SET(Local_159.f_549, bParam0)){
if(func_432()==(func_424() - 1)){
if(Local_159.f_72[bVar2] >=0){
Var4={
func_412(func_10(), Local_159.f_72[bVar2], Local_159.f_385, bVar2) 
};
fVar6=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_441(bParam0), 0), Var4, 1);
if(fVar6 < 100f){
MISC::SET_BIT(&(Local_159.f_549), bParam0);
}
}}}}}}}

int func_434(){
if(func_12()){
return 100000;
}
return 10000;
}


float func_435(int iParam0, int iParam1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
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

int func_436(bool bParam0, var uParam1){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar1=9999.99f;
iVar3=-1;
if(func_387()){
iVar0=0;
while (iVar0 < func_21()){
if(ENTITY::DOES_ENTITY_EXIST(func_40(iVar0))){
fVar2=func_435(NETWORK::NET_TO_PED(Local_159.f_401[bParam0 /*8*/]), func_40(iVar0), 1);
if(fVar2 < fVar1){
fVar1=fVar2;
iVar3=func_40(iVar0);
*uParam1=iVar0;
}}
iVar0++;
}}else{
iVar3=func_40(0);
*uParam1=0;
}
return iVar3;
}


float func_437(){
if(func_12()){
return 1000f;
}
return 200f;
}


float func_438(){
if(func_12()){
return 2000f;
}
return 400f;
}

int func_439(bool bParam0){
switch (func_10()){
case 11:
switch (bParam0){
case 0:
case 1:
case 2:
case 3:
return 0;
case 4:
case 5:
case 6:
case 7:
return 1;
case 8:
case 9:
case 10:
case 11:
return 2;
default:
}
break;
case 6:
switch (func_212()){
case 4:
switch (bParam0){
case 0:
case 1:
return 0;
case 2:
case 3:
return 1;
break;
}
break;
case 6:
switch (bParam0){
case 0:
case 1:
case 2:
return 0;
case 3:
case 4:
case 5:
return 1;
break;
}
break;
case 8:
switch (bParam0){
case 0:
case 1:
case 2:
case 3:
return 0;
case 4:
case 5:
case 6:
case 7:
return 1;
break;
}
break;
}
break;
}
return -1;
}

int func_440(bool bParam0){
var uVar0;
switch (func_10()){
case 13:
case 9:
case 6:
return 8;
case 12:
if(func_37(8)){
switch (bParam0){
case 0:
return 9;
case 1:
case 2:
case 3:
return 8;
default:
}}else{
switch (bParam0){
case 0:
case 2:
return 6;
case 1:
case 3:
return 8;
}
default:
}
break;
case 5:
switch (bParam0){
case 0:
case 2:
return 6;
case 1:
case 3:
return 8;
default:
}
break;
case 11:
switch (bParam0){
case 0:
case 4:
case 8:
if(func_429(bParam0, &uVar0, 600f)){
Local_159.f_592=uVar0;
return 9;
}else{
return 8;
}
break;
case 1:
case 2:
case 3:
case 5:
case 6:
case 7:
case 9:
case 10:
case 11:
return 8;
}
break;
}
return 2;
}

int func_441(bool bParam0){
if(func_209(bParam0)){
return NETWORK::NET_TO_ENT(Local_159.f_401[bParam0 /*8*/]);
}
return 0;
}

int func_442(bool bParam0){
return Local_159.f_401[bParam0 /*8*/].f_5;
}


void func_443(bool bParam0){
if(!func_11()){
return;
}
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_401[bParam0 /*8*/])){
if(func_444(Local_159.f_401[bParam0 /*8*/])){
if(!MISC::IS_BIT_SET(Local_159.f_498, bParam0)){
MISC::SET_BIT(&(Local_159.f_498), bParam0);
Local_159.f_499++;
}}elseif(MISC::IS_BIT_SET(Local_159.f_498, bParam0)){
MISC::CLEAR_BIT(&(Local_159.f_498), bParam0);
}}elseif(MISC::IS_BIT_SET(Local_159.f_498, bParam0)){
MISC::CLEAR_BIT(&(Local_159.f_498), bParam0);
}}

int func_444(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}


void func_445(){
bool bVar0;
bVar0=false;
while (bVar0 < func_21()){
if(func_41(bVar0)){
if(!func_37(17)){
if(func_276()){
if(func_447(bVar0)){
if(!ENTITY::IS_ENTITY_IN_WATER(func_40(bVar0))){
if(!func_5(&(Local_159.f_563[bVar0 /*2*/]))){
func_4(&(Local_159.f_563[bVar0 /*2*/]), 0, 0);
}elseif(func_189(&(Local_159.f_563[bVar0 /*2*/]), func_446(), 0)){
func_34(17);
}
}
elseif(func_5(&(Local_159.f_563[bVar0 /*2*/]))){
func_203(&(Local_159.f_563[bVar0 /*2*/]));
}}}}}
bVar0++;
}}

int func_446(){
return 120000;
}

int func_447(bool bParam0){
if(func_448(func_40(bParam0), Local_159.f_10[bParam0 /*3*/], 1) > 10f){
return 1;
}
if(func_435(PLAYER::PLAYER_PED_ID(), func_40(bParam0), 1) < 100f){
return 1;
}
switch (bParam0){
case 0:
if(func_37(10)){
return 1;
}
break;
case 1:
if(func_37(11)){
return 1;
}
break;
case 2:
if(func_37(12)){
return 1;
}
break;
}
return 0;
}


float func_448(int iParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}else{
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
}
return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}


void func_449(){
int iVar0;
bool bVar1;
int iVar2;
if(func_387()){
bVar1=false;
while (bVar1 < func_21()){
if(ENTITY::DOES_ENTITY_EXIST(func_40(bVar1)) && !func_187(bVar1)){
func_450(func_40(bVar1), bVar1, &iVar0);
if(Local_159.f_72[bVar1] !=iVar0){
Local_159.f_72[bVar1]=iVar0;
}
iVar0=0;
}
bVar1++;
}}elseif(ENTITY::DOES_ENTITY_EXIST(func_40(0))){
func_450(func_40(0), 0, &iVar2);
if(Local_159.f_72[0] !=iVar2){
Local_159.f_72[0]=iVar2;
}}}


void func_450(int iParam0, bool bParam1, var uParam2){
bool bVar0;
int iVar1;
struct<3> Var2;
float fVar3;
float fVar4;
int iVar5;
fVar4=1E+07f;
if(!func_431()){
if(func_461()){
iVar1=func_460(bParam1);
if(iVar1 < 10){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar1 /*30*/][bParam1])){
iVar5=NETWORK::NET_TO_ENT(Local_159.f_76[iVar1 /*30*/][bParam1]);
}}}else{
iVar5=iParam0;
}
if(func_459()){
if(Local_159.f_68[bParam1] !=-1){
if(iVar1 >=4){
Local_159.f_68[bParam1]=-1;
}}}
bVar0=false;
while (bVar0 < 20){
if(MISC::IS_BIT_SET(Local_159.f_62[bParam1], bVar0) && !func_458(bVar0, bParam1)){
Var2={
func_412(func_10(), bVar0, Local_159.f_385, bParam1) 
};
fVar3=MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(iParam0, 0), 1);
if(fVar3 < fVar4){
fVar4=fVar3;
*uParam2=bVar0;
}}
bVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5, 0)){
if(func_220()){
if(func_23(bParam1)){
func_22(bParam1);
}}elseif(func_454(func_412(func_10(), *uParam2, Local_159.f_385, bParam1), iVar5, 1)){
func_453(*uParam2, bParam1);
if(func_461() && !func_339()){
AUDIO::PLAY_SOUND_FROM_COORD(-1, "Drop_Package", func_452(bParam1, 0), "DLC_Exec_Land_Multiple_Sounds", 1, 0, 0);
}
if(func_387()){
if(func_460(bParam1)==func_451()){
func_22(bParam1);
}}elseif(func_431()){
func_22(bParam1);
}}}}}

int func_451(){
return (func_424() / func_21());
}


Vector3 func__452(bool bParam0, bool bParam1){
struct<3> Var0;
if(func_41(bParam0)){
Var0={
ENTITY::GET_ENTITY_COORDS(func_42(bParam0), 1) 
};
}
if(bParam1){
Var0={
Var0 + Vector(0f, 5f, 5f) 
};
}
return Var0;
}


void func_453(bool bParam0, bool bParam1){
int iVar0;
if(func_387()){
if(bParam1==0){
Local_159.f_58++;
}elseif(bParam1==1){
Local_159.f_59++;
}else{
Local_159.f_60++;
}}
Local_159.f_57++;
if(func_339()){
iVar0=0;
while (iVar0 < func_21()){
MISC::CLEAR_BIT(&(Local_159.f_62[iVar0]), bParam0);
iVar0++;
}}else{
MISC::CLEAR_BIT(&(Local_159.f_62[bParam1]), bParam0);
}}

int func_454(struct<3> Param0, int iParam1, bool bParam2){
if(ENTITY::IS_ENTITY_AT_COORD(iParam1, Param0, func_455(bParam2, 0), 0, 1, 0)){
return 1;
}
return 0;
}


Vector3 func__455(bool bParam0, bool bParam1){
if(func_339()){
if(func_220()){
if(bParam1){
return (150f * 4f), (150f * 4f), (150f * 1.5f);
}else{
return (150f * 1.5f), (150f * 1.5f), (150f * 1.5f);
}}else{
return (150f / 2f), (150f / 2f), (150f * 1.5f);
}}elseif(func_457() || func_456()){
if(bParam0){
return (20f * 1.5f), (20f * 1.5f), 3f;
}else{
return (20f * 1.2f), (20f * 1.2f), 3f;
}}
if(func_276()){
return (3f * 3f), (3f * 3f), (3f * 1.5f);
}
return 3f, 3f, 3f;
}


bool func_456(){
return func_10()==2;
}


bool func_457(){
return func_10()==1;
}

int func_458(bool bParam0, int iParam1){
int iVar0;
if(iParam1==-1){
iVar0=0;
while (iVar0 < 3){
if(bParam0==Local_159.f_68[iVar0]){
return 1;
}
iVar0++;
}}elseif(bParam0==Local_159.f_68[iParam1]){
return 1;
}
return 0;
}


bool func_459(){
return func_10()==10;
}

int func_460(bool bParam0){
if(func_387()){
switch (bParam0){
case 0:
return Local_159.f_58;
case 1:
return Local_159.f_59;
case 2:
return Local_159.f_60;
default:}}else{
return Local_159.f_57;
}
return 0;
}

int func_461(){
if((func_339() || (func_457() && func_432() < (func_424() - 1))) || (func_456() && func_432() < (func_424() - 1))){
return 1;
}
return 0;
}


void func_462(){
bool bVar0;
int iVar1;
bool bVar2;
if(func_461()){
if(func_472()){
bVar0=false;
while (bVar0 < func_21()){
iVar1=(26 + bVar0);
bVar2=iVar1;
if(func_37(bVar2)){
if(Local_159.f_377[bVar0] < 10){
switch (Local_159.f_381[bVar0]){
case 0:
Local_159.f_381[bVar0]++;
break;
case 1:
if(MISC::IS_BIT_SET(Local_159.f_593, bVar0)){
if(func_41(bVar0) && func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_42(bVar0), func_471()), func_470(bVar0), bVar0)){
Local_159.f_377[bVar0]++;
func_2(bVar2);
Local_159.f_381[bVar0]=0;
MISC::CLEAR_BIT(&(Local_159.f_593), bVar0);
}}else{
func_2(bVar2);
}
break;
}
}}
bVar0++;
}}}
func_463();
}


void func_463(){
struct<3> Var0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar5=0;
while (iVar5 < func_21()){
iVar4=0;
while (iVar4 < 10){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar4 /*30*/][iVar5]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_76[iVar4 /*30*/][iVar5])){
if(func_205(Local_159.f_76[iVar4 /*30*/][iVar5])){
ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_ENT(Local_159.f_76[iVar4 /*30*/][iVar5]), 0, 0f, 0f, 10f, 0, 0, 1, 0);
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_159.f_76[iVar4 /*30*/][iVar5]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_159.f_76[iVar4 /*30*/][iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar4 /*30*/].f_4[iVar5]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_76[iVar4 /*30*/].f_4[iVar5])){
iVar2=NETWORK::NET_TO_OBJ(Local_159.f_76[iVar4 /*30*/][iVar5]);
iVar3=NETWORK::NET_TO_OBJ(Local_159.f_76[iVar4 /*30*/].f_4[iVar5]);
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_159.f_76[iVar4 /*30*/].f_4[iVar5]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_159.f_76[iVar4 /*30*/].f_4[iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
if(func_205(Local_159.f_76[iVar4 /*30*/][iVar5]) && func_205(Local_159.f_76[iVar4 /*30*/].f_4[iVar5])){
if(!MISC::IS_BIT_SET(Local_159.f_76[iVar4 /*30*/].f_12[iVar5], 2) && !MISC::IS_BIT_SET(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 2)){
if(MISC::IS_BIT_SET(Local_159.f_76[iVar4 /*30*/].f_12[iVar5], 1) || MISC::IS_BIT_SET(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 1)){
if(ENTITY::DOES_ENTITY_EXIST(iVar3)){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3)){
MISC::SET_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 2);
func_393(&(Local_159.f_76[iVar4 /*30*/].f_4[iVar5]));
func_393(&(Local_159.f_76[iVar4 /*30*/][iVar5]));
MISC::CLEAR_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), false);
MISC::CLEAR_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), true);
MISC::CLEAR_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 2);
}
}
}}
if(!MISC::IS_BIT_SET(Local_159.f_76[iVar4 /*30*/].f_12[iVar5], 1) && !MISC::IS_BIT_SET(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 1)){
if(MISC::IS_BIT_SET(Local_159.f_76[iVar4 /*30*/].f_12[iVar5], 0) || MISC::IS_BIT_SET(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iVar3)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3)){
MISC::SET_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), true);
}
}
}}
if(!MISC::IS_BIT_SET(Local_159.f_76[iVar4 /*30*/].f_12[iVar5], 0)){
if(func_464(iVar4, iVar5, iVar2)){
ENTITY::PLAY_ENTITY_ANIM(iVar3, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&(Local_159.f_76[iVar4 /*30*/].f_12[iVar5]), false);
AUDIO::PLAY_SOUND_FROM_ENTITY(Local_120.f_360, "Parachute_Land", iVar3, "DLC_Exec_Air_Drop_Sounds", 0, 0);
}
else{
PHYSICS::SET_DAMPING(iVar2, 2, 0.0245f);
}}}
}}
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
Var0={
ENTITY::GET_ENTITY_COORDS(iVar2, 1) 
};
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, 0, 0)){
if(Var0.f_2 < fVar1 && !ENTITY::IS_ENTITY_IN_WATER(iVar2)){
if(func_205(Local_159.f_76[iVar4 /*30*/][iVar5])){
ENTITY::SET_ENTITY_COORDS(iVar2, Var0.f_0, Var0.f_1, fVar1, 1, 0, 0, 1);
}}
}}
if(func_35()){
if(!func_5(&(Local_159.f_76[iVar4 /*30*/].f_23[iVar5 /*2*/]))){
func_4(&(Local_159.f_76[iVar4 /*30*/].f_23[iVar5 /*2*/]), 0, 0);
}
elseif(func_189(&(Local_159.f_76[iVar4 /*30*/].f_23[iVar5 /*2*/]), 30000, 0)){
func_392(&(Local_159.f_76[iVar4 /*30*/][iVar5]));
}}}}
iVar4++;
}
iVar5++;
}}

int func_464(int iParam0, int iParam1, int iParam2){
if(!ENTITY::DOES_ENTITY_EXIST(iParam2)){
return 0;
}
if(func_189(&(Local_159.f_76[iParam0 /*30*/].f_16[iParam1 /*2*/]), 3000, 0)){
if(!ENTITY::IS_ENTITY_IN_AIR(iParam2)){
return 1;
}}
if(ENTITY::IS_ENTITY_IN_WATER(iParam2)){
return 1;
}
if(func_465(iParam2)){
return 1;
}
return 0;
}

int func_465(int iParam0){
float fVar0;
fVar0=ENTITY::GET_ENTITY_PITCH(iParam0);
if(fVar0 > 10f || fVar0 < -10f){
return 1;
}
fVar0=ENTITY::GET_ENTITY_ROLL(iParam0);
if(fVar0 > 10f || fVar0 < -10f){
return 1;
}
return 0;
}

int func_466(struct<3> Param0, float fParam1, bool bParam2){
struct<3> Var0;
struct<3> Var1;
int iVar2;
iVar2=Local_159.f_377[bParam2];
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar2 /*30*/][bParam2])){
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
Local_159.f_76[iVar2 /*30*/][bParam2]=NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed_incar"), Param0 + Var0, 0, func_469()));
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), fParam1);
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_159.f_76[iVar2 /*30*/][bParam2], 1);
ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 1);
OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 1);
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 0);
PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]));
ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 0f, 0f, -0.2f);
OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 1, 0);
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 1200);
if(func_5(&(Local_159.f_76[iVar2 /*30*/].f_23[bParam2 /*2*/]))){
func_203(&(Local_159.f_76[iVar2 /*30*/].f_23[bParam2 /*2*/]));
}}}
if(func_339()){
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar2 /*30*/][bParam2])){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar2 /*30*/].f_4[bParam2])){
Var1={
ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 1) 
};
if(func_467(&(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]), func_468(), Var1 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]), NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/][bParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]), 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]), 0);
ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]));
ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_159.f_76[iVar2 /*30*/].f_4[bParam2]), 1200);
func_203(&(Local_159.f_76[iVar2 /*30*/].f_16[bParam2 /*2*/]));
}}}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar2 /*30*/][bParam2]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar2 /*30*/].f_4[bParam2])){
return 1;
}}}elseif(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_159.f_76[iVar2 /*30*/][bParam2])){
return 1;
}
return 0;
}

int func_467(var uParam0, var uParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9){
if(!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
return 0;
}
if(bParam7){
*uParam0=NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(uParam1, Param2, iParam4, bParam3, iParam5));
}else{
*uParam0=NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(uParam1, Param2, iParam4, bParam3, iParam5));
}
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), iParam6);
if(bParam8){
NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), 1);
}
if(bParam9){
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), 0, 0);
}
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0))){
if(bParam3){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_468(){
return joaat("p_cargo_chute_s");
}

int func_469(){
if(func_35()){
return joaat("ex_prop_adv_case_sm");
}elseif(func_339()){
return joaat("ex_prop_adv_case_sm_flash");
}
return joaat("prop_drug_package");
}


float func_470(bool bParam0){
float fVar0;
if(func_41(bParam0)){
fVar0=ENTITY::GET_ENTITY_HEADING(func_42(bParam0));
}
return fVar0;
}


Vector3 func__471(){
if(!func_339()){
return 0f, -6f, -0.32f;
}
if(func_350()==2){
return 0f, 0f, -5f;
}
return 0f, 0f, -2f;
}

int func_472(){
STREAMING::REQUEST_MODEL(func_469());
STREAMING::REQUEST_MODEL(func_468());
STREAMING::REQUEST_ANIM_DICT(func_473());
if((STREAMING::HAS_MODEL_LOADED(func_469()) && STREAMING::HAS_MODEL_LOADED(func_468())) && STREAMING::HAS_ANIM_DICT_LOADED(func_473())){
return 1;
}
return 0;
}


char* func_473(){
return "P_cargo_chute_S";
}

int func_474(){
func_515();
func_514();
if((((func_500() && func_498()) && func_494()) && func_492()) && func_490()){
func_488();
func_487();
if(func_479()){
if(func_478()){
func_477();
if(func_387()){
Local_159.f_592=MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
}
Local_159.f_30=PLAYER::PLAYER_ID();
if(func_476()){
Local_159.f_556=Global_262145.f_15580;
}
func_475();
return 1;
}}}
return 0;
}


void func_475(){
int iVar0;
iVar0=0;
while (iVar0 < func_21()){
if(func_35()){
Local_159.f_10[iVar0 /*3*/]={
func_373(iVar0, 0) 
};
Local_159.f_20[iVar0]=func_372(iVar0, 0);
}elseif(func_339()){
Local_159.f_10[iVar0 /*3*/]={
func_371(iVar0) 
};
Local_159.f_20[iVar0]=func_370(iVar0);
}else{
Local_159.f_10[iVar0 /*3*/]={
func_369() 
};
Local_159.f_20[iVar0]=func_368();
}
if(!func_130(Local_159.f_10[iVar0 /*3*/], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
MISC::CLEAR_AREA(Local_159.f_10[iVar0 /*3*/], 4f, 1, 0, 0, 1);
}
iVar0++;
}}


bool func_476(){
return func_10()==3;
}


void func_477(){
int iVar0;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_386()){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
switch (iVar0){
case 0:
Local_159.f_546=joaat("schafter2");
Local_159.f_547=joaat("g_m_m_armgoon_01");
break;
case 1:
Local_159.f_546=joaat("huntley");
Local_159.f_547=joaat("g_m_m_mexboss_01");
break;
case 2:
Local_159.f_546=joaat("kuruma");
Local_159.f_547=joaat("g_m_y_korean_01");
break;
}}elseif(func_11()){
Local_159.f_546=joaat("huntley");
Local_159.f_547=joaat("g_m_m_mexboss_01");
}}}

int func_478(){
int iVar0;
if(!func_12()){
return 1;
}
if(Local_159.f_552[0]==-1){
Local_159.f_552[0]=MISC::GET_RANDOM_INT_IN_RANGE(0, func_425());
}
if(Local_159.f_552[1]==-1){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, func_425());
if(iVar0 !=Local_159.f_552[0]){
Local_159.f_552[1]=iVar0;
}}
if(Local_159.f_552[2]==-1){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, func_425());
if(iVar0 !=Local_159.f_552[0] && iVar0 !=Local_159.f_552[1]){
Local_159.f_552[2]=iVar0;
}}
if((Local_159.f_552[0] !=-1 && Local_159.f_552[1] !=-1) && Local_159.f_552[2] !=-1){
return 1;
}
return 0;
}


bool func_479(){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
if(((!func_339() && !func_457()) && !func_456()) && !func_276()){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
iVar2=1;
if(func_486(iVar0)){
return 0;
}
bVar1=(iVar0 + Local_159.f_66);
}elseif((func_275() || func_485()) && func_424() < 20){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
iVar2=1;
bVar1=iVar0;
}else{
bVar1=(iVar0 + Local_159.f_66);
}
if(bVar1 >=20){
bVar1=false;
}
if(func_276()){
bVar1=false;
}
if(func_459()){
if(Local_159.f_583==1){
if(Local_159.f_68[1]==-1){
Local_159.f_68[1]=((func_424() / 2) - 1);
}
if(Local_159.f_68[0]==-1){
Local_159.f_68[0]=((func_424() / 2) - 1);
}}elseif(Local_159.f_68[0]==-1){
Local_159.f_68[0]=(func_424() - 1);
}}
if(func_481(bVar1)){
if(Local_159.f_66 < func_424()){
if(!MISC::IS_BIT_SET(Local_159.f_62[0], bVar1)){
Local_159.f_66++;
if(iVar2 || bVar1 < func_480()){
iVar3=0;
iVar3=0;
while (iVar3 < func_21()){
MISC::SET_BIT(&(Local_159.f_62[iVar3]), bVar1);
MISC::SET_BIT(&(Local_159.f_67), bVar1);
iVar3++;
}}
if((!func_457() && !func_339()) && !func_456()){
return 1;
}}}}
return Local_159.f_66==func_424();
}

int func_480(){
if((func_275() || func_485()) || func_12()){
if(Global_1949955 <=4){
return 3;
}elseif(Global_1949955 <=9){
return 6;
}else{
return 20;
}}
return 5;
}

int func_481(bool bParam0){
float fVar0;
struct<3> Var1;
bool bVar2;
if(func_482()){
Var1={
func_17(Local_159.f_54) 
};
bVar2=false;
while (bVar2 < func_21()){
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(func_412(func_10(), bParam0, Local_159.f_385, bVar2), Var1, 1);
if(fVar0 >=IntToFloat(Global_262145.f_15979)){
return 1;
}
bVar2++;
}}else{
return 1;
}
return 0;
}

int func_482(){
if((((func_484() || func_476()) || func_386()) || func_11()) || func_483()){
return 1;
}
return 0;
}


bool func_483(){
return func_10()==4;
}


bool func_484(){
return func_10()==0;
}


bool func_485(){
return func_10()==7;
}

int func_486(int iParam0){
switch (iParam0){
case 0:
return Global_262145.f_15709;
case 1:
return Global_262145.f_15710;
case 2:
return Global_262145.f_15711;
case 3:
return Global_262145.f_15712;
case 4:
return Global_262145.f_15713;
case 5:
return Global_262145.f_15714;
case 6:
return Global_262145.f_15715;
case 7:
return Global_262145.f_15716;
case 8:
return Global_262145.f_15717;
case 9:
return Global_262145.f_15718;
case 10:
return Global_262145.f_15719;
case 11:
return Global_262145.f_15720;
case 12:
return Global_262145.f_15721;
case 13:
return Global_262145.f_15722;
case 14:
return Global_262145.f_15723;
case 15:
return Global_262145.f_15724;
case 16:
return Global_262145.f_15725;
case 17:
return Global_262145.f_15726;
case 18:
return Global_262145.f_15727;
case 19:
return Global_262145.f_15728;
default:
}
return 0;
}


void func_487(){
if(func_217()){
switch (Local_159.f_395[0]){
case 0:
Local_159.f_580={
-1419.803f, -1540.264f, 2.0909f 
};
break;
case 1:
Local_159.f_580={
-141.5667f, -2711.081f, 6.0002f 
};
break;
case 2:
Local_159.f_580={
215.8467f, -3336.942f, 5.7982f 
};
break;
case 3:
Local_159.f_580={
1294.194f, -3217.033f, 5.9059f 
};
break;
case 4:
Local_159.f_580={
982.3854f, -3343.457f, 6.0958f 
};
break;
}}
if(func_271()){
switch (Local_159.f_395[0]){
case 0:
Local_159.f_580={
133.834f, -3336.725f, 6.0218f 
};
break;
case 1:
Local_159.f_580={
1293.464f, -3126.078f, 5.906f 
};
break;
case 2:
Local_159.f_580={
-761.9681f, -2840.404f, 13.9415f 
};
break;
case 3:
Local_159.f_580={
-1331.282f, -1693.366f, 2.1151f 
};
break;
case 4:
Local_159.f_580={
-587.2385f, -2362.541f, 13.8282f 
};
break;
}}}


void func_488(){
int iVar0;
int iVar1;
if(Local_159.f_389==-1 && func_456()){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
if(func_489(iVar0, 7500, 10000)){
iVar1=1;
}elseif(func_489(iVar0, 5000, 7500)){
iVar1=2;
}elseif(func_489(iVar0, 2500, 5000)){
iVar1=3;
}else{
iVar1=4;
}
Local_159.f_389=iVar1;
}}

int func_489(int iParam0, int iParam1, int iParam2){
if(iParam0 >=iParam1 && iParam0 < iParam2){
return 1;
}
return 0;
}

int func_490(){
int iVar0;
if(!func_37(30)){
if((func_457() || func_456()) || func_339()){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
if(func_491(iVar0)){
return 0;
}
Local_159.f_385=iVar0;
func_34(30);
}elseif(func_276()){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
if(func_491(iVar0)){
return 0;
}
Local_159.f_385=iVar0;
Local_159.f_395[0]=iVar0;
func_34(30);
}else{
func_34(30);
return 1;
}}
return func_37(30);
}

int func_491(int iParam0){
switch (func_10()){
case 11:
switch (iParam0){
case 0:
return Global_262145.f_15681;
case 1:
return Global_262145.f_15682;
case 2:
return Global_262145.f_15683;
case 3:
return Global_262145.f_15684;
case 4:
return Global_262145.f_15685;
default:
}
break;
case 9:
switch (iParam0){
case 0:
return Global_262145.f_15687;
case 1:
return Global_262145.f_15688;
case 2:
return Global_262145.f_15689;
case 3:
return Global_262145.f_15690;
case 4:
return Global_262145.f_15691;
default:
}
break;
case 8:
switch (iParam0){
case 0:
return Global_262145.f_15693;
case 1:
return Global_262145.f_15694;
case 2:
return Global_262145.f_15695;
case 3:
return Global_262145.f_15696;
case 4:
return Global_262145.f_15697;
default:
}
break;
case 10:
switch (iParam0){
case 0:
return Global_262145.f_15700;
case 1:
return Global_262145.f_15701;
case 2:
return Global_262145.f_15702;
case 3:
return Global_262145.f_15703;
case 4:
return Global_262145.f_15704;
default:
}
break;
case 1:
switch (iParam0){
case 0:
return Global_262145.f_15730;
case 1:
return Global_262145.f_15731;
case 2:
return Global_262145.f_15732;
case 3:
return Global_262145.f_15733;
case 4:
return Global_262145.f_15734;
default:
}
break;
case 2:
switch (iParam0){
case 0:
return Global_262145.f_15749;
case 1:
return Global_262145.f_15750;
case 2:
return Global_262145.f_15751;
case 3:
return Global_262145.f_15752;
case 4:
return Global_262145.f_15753;
default:
}
break;
case 12:
switch (iParam0){
case 0:
return Global_262145.f_15737;
case 1:
return Global_262145.f_15738;
case 2:
return Global_262145.f_15739;
case 3:
return Global_262145.f_15740;
case 4:
return Global_262145.f_15741;
default:
}
break;
case 13:
switch (iParam0){
case 0:
return Global_262145.f_15743;
case 1:
return Global_262145.f_15744;
case 2:
return Global_262145.f_15745;
case 3:
return Global_262145.f_15746;
case 4:
return Global_262145.f_15747;
default:
}
break;
}
return 0;
}

int func_492(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!func_37(29)){
iVar3=func_493(PLAYER::PLAYER_ID());
if(func_339()){
switch (func_350()){
case 0:
iVar0=iVar3 * 3;
break;
case 1:
iVar0=iVar3 * 3;
iVar1=iVar0 + 1;
if(iVar0==iVar1){
return 0;
}
break;
case 7:
iVar0=iVar3 * 3;
iVar1=iVar0 + 1;
iVar2=iVar1 + 1;
if((iVar0==iVar1 || iVar0==iVar2) || iVar1==iVar2){
return 0;
}
break;
case 2:
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
break;
}}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}
Local_159.f_395[0]=iVar0;
Local_159.f_395[1]=iVar1;
Local_159.f_395[2]=iVar2;
func_34(29);
}
return func_37(29);
}

int func_493(bool bParam0){
int iVar0;
int iVar1;
iVar0=bParam0;
iVar1=0;
while (iVar1 < Global_262145.f_12841){
if(Global_1923597.f_11.f_132[iVar1]==iVar0){
return iVar1;
}
iVar1++;
}
return -1;
}

int func_494(){
var uVar0;
var uVar1;
if(Local_159.f_583==-1){
uVar1=func_497(func_10(), &uVar0);
func_496(uVar1);
func_495(uVar0);
return 1;
}else{
return 1;
}
return 0;
}


void func_495(var uParam0){
Local_159.f_584=uParam0;
}


void func_496(var uParam0){
Local_159.f_583=uParam0;
}

int func_497(int iParam0, var uParam1){
int iVar0;
iVar0=Global_1949955;
switch (iParam0){
case 8:
case 7:
case 9:
case 10:
case 11:
if(iVar0 >=1 && iVar0 < Global_262145.f_15574){
*uParam1=iVar0;
return 0;
}elseif(iVar0 >=Global_262145.f_15574 && iVar0 < Global_262145.f_15575){
*uParam1=iVar0;
return 0;
}
*uParam1=iVar0;
if(iParam0==9){
return 7;
}
return 2;
case 12:
case 13:
*uParam1=iVar0;
return 3;
default:
}
if(iVar0 >=1 && iVar0 < Global_262145.f_15576){
*uParam1=iVar0;
return 4;
}elseif(iVar0 >=Global_262145.f_15576 && iVar0 < Global_262145.f_15577){
*uParam1=iVar0;
return 5;
}
*uParam1=iVar0;
return 6;
*uParam1=1;
return -1;
}

int func_498(){
if(Local_159.f_54==-1){
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_183==-1){
Local_159.f_54=Local_120.f_102;
}else{
Local_159.f_54=Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_183;
}
Local_159.f_55=func_2292();
Local_159.f_56=func_499(Local_159.f_54);
if(Local_159.f_55 <=0){
Local_159.f_55=1;
func_24(2);
}}else{
return 1;
}
return 0;
}

int func_499(int iParam0){
int iVar0;
if(func_18(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(iParam0==Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/].f_1;
}
iVar0++;
}}
return 0;
}

int func_500(){
int iVar0;
if(func_10()==14){
if(func_2293()){
iVar0=func_513();
}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
}
if((((!func_511(iVar0) && !func_510(iVar0)) && !func_506(iVar0)) && func_505(iVar0)) && func_504(iVar0)){
Local_159.f_7=iVar0;
func_503(iVar0);
func_501(iVar0);
}}else{
return 1;
}
return 0;
}


void func_501(int iParam0){
Global_2793046.f_5225.f_368=func_502(iParam0);
}

int func_502(int iParam0){
if(func_36(iParam0)){
return 0;
}elseif(func_340(iParam0)){
return 1;
}elseif(func_277(iParam0)){
return 2;
}
return -1;
}


void func_503(int iParam0){
if(Global_2793046.f_5225.f_348[0]==14){
Global_2793046.f_5225.f_348[0]=iParam0;
return;
}else{
Global_2793046.f_5225.f_348[7]=Global_2793046.f_5225.f_348[6];
Global_2793046.f_5225.f_348[6]=Global_2793046.f_5225.f_348[5];
Global_2793046.f_5225.f_348[5]=Global_2793046.f_5225.f_348[4];
Global_2793046.f_5225.f_348[4]=Global_2793046.f_5225.f_348[3];
Global_2793046.f_5225.f_348[3]=Global_2793046.f_5225.f_348[2];
Global_2793046.f_5225.f_348[2]=Global_2793046.f_5225.f_348[1];
Global_2793046.f_5225.f_348[1]=Global_2793046.f_5225.f_348[0];
Global_2793046.f_5225.f_348[0]=iParam0;
}}


bool func_504(int iParam0){
return Global_2793046.f_5225.f_368 !=func_502(iParam0);
}

int func_505(int iParam0){
switch (iParam0){
case 1:
case 2:
case 10:
return Global_1949955 >=5;
default:
}
return 1;
}

int func_506(int iParam0){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0))){
bVar2=PLAYER::INT_TO_PLAYERINDEX(bVar0);
if(func_293(bVar2)){
if(func_509(bVar2)==168){
iVar1=func_507(bVar2);
if(iParam0==iVar1){
return 1;
}}}}
bVar0++;
}
return 0;
}

int func_507(bool bParam0){
if(func_508(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_508(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_509(bool bParam0){
if(func_508(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_510(int iParam0){
switch (iParam0){
case 0:
if(Global_262145.f_15706){
return 1;
}
break;
case 1:
if(Global_262145.f_15729){
return 1;
}
break;
case 2:
if(Global_262145.f_15748){
return 1;
}
break;
case 3:
if(Global_262145.f_15735){
return 1;
}
break;
case 4:
if(Global_262145.f_15754){
return 1;
}
break;
case 5:
if(Global_262145.f_15705){
return 1;
}
break;
case 6:
if(Global_262145.f_15707){
return 1;
}
break;
case 7:
if(Global_262145.f_15698){
return 1;
}
break;
case 8:
if(Global_262145.f_15692){
return 1;
}
break;
case 9:
if(Global_262145.f_15686){
return 1;
}
break;
case 10:
if(Global_262145.f_15699){
return 1;
}
break;
case 11:
if(Global_262145.f_15680){
return 1;
}
break;
case 12:
if(Global_262145.f_15736){
return 1;
}
break;
case 13:
if(Global_262145.f_15742){
return 1;
}
break;
}
return 0;
}

int func_511(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_512()){
if(Global_2793046.f_5225.f_348[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_512(){
return Global_262145.f_16085;
}

int func_513(){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
switch (iVar0){
case 0:
return 0;
case 1:
return 5;
case 2:
return 6;
case 3:
return 3;
case 4:
return 4;
case 5:
return 9;
case 6:
return 12;
case 7:
return 13;
default:
}
return 0;
}


void func_514(){
if(Local_159.f_595==-1){
Local_159.f_595=Global_1949955;
}}


void func_515(){
if(Local_159.f_594==-1){
Local_159.f_594=Global_1949957;
}}


void func_516(int iParam0){
Local_159.f_0=iParam0;
}

int func_517(){
if(Global_2793046.f_5225.f_42){
Global_2793046.f_5225.f_42=0;
return 1;
}
return 0;
}


void func_518(){
func_2244();
func_2238();
func_2233();
func_2231();
func_2230();
func_2229();
switch (func_374()){
case 0:
break;
case 1:
if(!func_2228(2)){
func_2206(168, 1, Local_159.f_7, 0);
func_2204();
func_2203(1);
if(func_339()){
func_2202();
}
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(210.93f, -2022.58f, 17.65f, 6f, joaat("prop_fnclink_03gate1"), 0)){
OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 210.93f, -2022.58f, 17.65f, 1, 1f, 0);
}
func_2201(2);
}elseif(!func_2228(3)){
if(func_189(&(Local_159.f_3), 10000, 0)){
func_2200();
func_2201(3);
}}
if(func_2199(PLAYER::PLAYER_ID()) && !func_2228(15)){
Global_1950108.f_3431=1;
func_2201(15);
}else{
if(Global_1950108.f_3431==1 || !func_2228(15)){
func_2201(15);
Global_1950108.f_3431=0;
}
if(!func_2193() && !func_2192()){
if(func_192()==0){
if(Global_2672505.f_4.f_10 || func_431()){
if(!func_2228(4)){
func_2087(-1, 0, 0, -1, 0, 0);
func_2201(4);
}
func_1984(&(Global_1645402.f_534), &Global_1645402, 28, &(Global_1645402.f_1), &(Global_1645402.f_117), -1, 0, 0);
func_1855();
if(!Global_1950108.f_528){
func_1807(0);
func_1766(0);
func_1723();
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
func_1717();
func_1714();
func_1712();
func_1711();
func_1702();
func_1694();
func_1691();
if(func_220()){
func_1690();
}elseif(((((func_485() || func_275()) || func_459()) || func_12()) || func_456()) || func_457()){
func_1677();
}
if(bLocal_149 > -1){
if(bLocal_149==NETWORK::PARTICIPANT_ID_TO_INT()){
}}
}}}else{
func_1676(24);
func_1669();
}}
break;
case 2:
if(func_276()){
if(!func_5(&(Local_120.f_364))){
func_4(&(Local_120.f_364), 0, 0);
}}
if(func_192() !=6){
if(!MISC::IS_BIT_SET(Global_1947724.f_3, 4)){
MISC::SET_BIT(&(Global_1947724.f_3), 4);
}}
func_1668();
func_1667();
func_1665();
func_1663();
if(func_917()){
func_897(0);
func_894();
func_885();
func_1807(1);
func_1766(1);
func_533();
func_528(Local_159.f_54);
func_521();
}
func_519();
break;
case 3:
break;
}}


void func_519(){
bool bVar0;
bVar0=false;
while (bVar0 < func_21()){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_159.f_35[bVar0])){
if(ENTITY::DOES_ENTITY_EXIST(func_42(bVar0))){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(bVar0))){
if(!ENTITY::IS_ENTITY_DEAD(func_42(bVar0), 0)){
func_520(func_40(bVar0));
}}}}
bVar0++;
}}


void func_520(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandOwner")){
DECORATOR::DECOR_REMOVE(iParam0, "ContrabandOwner");
}}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "ContrabandDeliveryType")){
DECORATOR::DECOR_REMOVE(iParam0, "ContrabandDeliveryType");
}}}


void func_521(){
if(!func_527(19)){
if(func_526()){
if(func_527(0)){
if(func_192()==6){
func_523(func_525(1));
}else{
func_523(func_525(0));
}
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
}}
func_522(19);
}}


void func_522(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(uLocal_145[iVar0]), iVar1);
}


void func_523(int iParam0){
if(!func_527(iParam0)){
AUDIO::TRIGGER_MUSIC_EVENT(func_524(iParam0));
func_522(iParam0);
}}


char* func_524(int iParam0){
switch (iParam0){
case 1:
return "EXEC1_AIR_CLEAR_START";
case 2:
return "EXEC1_AIR_CLEAR_LAND";
case 3:
return "EXEC1_AIR_CLEAR_SHOOTOUT";
case 36:
return "EXEC1_AIR_CLEAR_LEFT_AREA";
case 4:
return "EXEC1_AIR_CLEAR_STOP";
case 5:
return "EXEC1_AIR_CLEAR_FAIL";
case 6:
return "EXEC1_SEA_ATTACK_START";
case 25:
return "EXEC1_SEA_ATTACK_FIGHT";
case 7:
return "EXEC1_SEA_ATTACK_STOP";
case 8:
return "EXEC1_SEA_ATTACK_FAIL";
case 9:
return "EXEC1_SEA_DEFEND_START";
case 10:
return "EXEC1_SEA_DEFEND_DELIVER";
case 11:
return "EXEC1_SEA_DEFEND_STOP";
case 12:
return "EXEC1_SEA_DEFEND_FAIL";
case 13:
return "EXEC1_DELIVERING_START";
case 14:
return "EXEC1_STING_WANTED_SMA";
case 15:
return "EXEC1_DELIVERING_SMA";
case 16:
return "EXEC1_MP_MUSIC_STOP";
case 17:
return "EXEC1_STING_FAIL";
case 18:
return "EXEC1_MP_MUSIC_FAIL";
case 20:
return "EXEC1_AIR_ATTACK_START";
case 21:
return "EXEC1_AIR_ATTACK_ENEMIES";
case 22:
return "EXEC1_AIR_ATTACK_DELIVERING";
case 23:
return "EXEC1_AIR_ATTACK_STOP";
case 24:
return "EXEC1_AIR_ATTACK_FAIL";
case 26:
return "EXEC1_LAND_ATTACK_START";
case 27:
return "EXEC1_LAND_ATTACK_HOSTILE";
case 28:
return "EXEC1_LAND_ATTACK_LOST";
case 29:
return "EXEC1_LAND_ATTACK_STOP";
case 30:
return "EXEC1_LAND_DEFEND_START";
case 31:
return "EXEC1_LAND_DEFEND_ENEMIES";
case 32:
return "EXEC1_LAND_DEFEND_STOP";
case 33:
return "EXEC1_AIR_FLY_LOW_START";
case 34:
return "EXEC1_AIR_FLY_LOW_WANTED";
case 35:
return "EXEC1_AIR_FLY_LOW_FLYING";
default:
}
return "";
}

int func_525(bool bParam0){
if(bParam0){
switch (func_10()){
case 9:
return 4;
case 12:
return 7;
case 13:
return 11;
case 2:
return 16;
case 3:
return 16;
case 4:
return 16;
case 0:
return 16;
case 11:
return 23;
case 5:
return 29;
case 6:
return 32;
case 1:
return 16;
case 7:
return 16;
default:}}else{
switch (func_10()){
case 9:
return 5;
case 12:
return 8;
case 13:
return 12;
case 2:
return 17;
case 3:
return 18;
case 4:
return 18;
case 0:
return 18;
case 11:
return 24;
case 5:
return 18;
case 6:
return 18;
case 1:
return 18;
case 7:
return 16;
}
default:
}
return 4;
}

int func_526(){
if(func_10()==8 || func_10()==10){
return 0;
}
return 1;
}


bool func_527(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(uLocal_145[iVar0], iVar1);
}


void func_528(int iParam0){
int iVar0;
if(func_18(iParam0)){
if(!func_2228(7)){
if(func_192()==6){
if(func_2330()){
if(func_532(iParam0)){
iVar0=func_531(iParam0);
Global_2793046.f_5225.f_369[iVar0]=NETWORK::GET_CLOUD_TIME_AS_INT();
func_529(func_530(iVar0), Global_2793046.f_5225.f_369[iVar0], -1, 1, 0);
func_2201(7);
}}}}}}


void func_529(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_311(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_530(int iParam0){
switch (iParam0){
case 0:
return 3659;
case 1:
return 3782;
case 2:
return 3783;
case 3:
return 3784;
case 4:
return 3785;
default:
}
return 3659;
}

int func_531(int iParam0){
int iVar0;
if(func_18(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_532(int iParam0){
int iVar0;
if(func_18(iParam0)){
iVar0=0;
while (iVar0 <=4){
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_116[iVar0 /*3*/]==iParam0){
return 1;
}
iVar0++;
}}
return 0;
}


void func_533(){
bool bVar0;
struct<14> Var1;
if(!func_2228(1)){
if(func_2566(PLAYER::PLAYER_ID(), 1, 1)){
if(func_192() !=0){
bVar0=PLAYER::PLAYER_ID();
if(func_192()==6){
bLocal_165=true;
Local_122.f_7=func_2292();
if(func_2330() && Global_2851551[func_32()]==0){
func_884(42);
}
if(func_476()){
Local_122.f_0=Local_159.f_556;
Local_122.f_6=1;
}}
Local_122.f_5=func_2293();
Local_122.f_9=Local_159.f_594;
func_640(168, bLocal_165, &Local_122, 0);
if(bLocal_165){
func_638(1, bVar0);
Var1.f_2=-264618765;
Var1.f_10=bVar0;
if(func_2330()){
func_379(Var1, func_29(0, 1));
}}else{
func_637();
func_638(1, func_33());
}
func_2411(bLocal_165, 0);
func_2201(1);
}}}else{
if(!func_2294(0)){
if(func_2330()){
if(!func_38(NETWORK::PARTICIPANT_ID(), 13)){
if(bLocal_165){
func_2254(2);
}elseif(func_192()==4){
func_2254(1);
}else{
Global_2793046.f_5225.f_386=0;
func_636(13);
}
if(iLocal_155==2){
Global_2793046.f_5225.f_386=0;
func_636(13);
}
if(iLocal_155==3){
Global_2793046.f_5225.f_386=0;
func_636(13);
}
if(func_2294(2)){
Global_2793046.f_5225.f_386=0;
func_636(13);
}}}elseif(func_249()==func_33()){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_24(0);
}}}
if(Global_2672505.f_4.f_10){
if((!func_2193() && !func_2192()) && !func_635(168)){
if(!func_2228(26)){
if(func_633()){
switch (func_192()){
case 2:
HUD::CLEAR_HELP(1);
break;
case 3:
HUD::CLEAR_HELP(1);
func_573(2, func_192());
break;
case 1:
HUD::CLEAR_HELP(1);
func_573(2, func_192());
break;
case 4:
case 5:
HUD::CLEAR_HELP(1);
func_573(2, func_192());
break;
case 6:
HUD::CLEAR_HELP(1);
func_573(1, 0);
break;
}
func_2201(26);
}}}}}
if(func_534(&uLocal_136, 1, 0) && func_2294(0)){
func_636(0);
}}

int func_534(var uParam0, bool bParam1, int iParam2){
bool bVar0;
func_572(29);
if((*uParam0 > 0 && !func_571()) && func_562(PLAYER::PLAYER_ID()) !=0){
if(!func_560()){
func_559();
}}
switch (*uParam0){
case 0:
if(!func_5(&(uParam0->f_3))){
func_4(&(uParam0->f_3), 0, 0);
}elseif(func_189(&(uParam0->f_3), 1000, 0)){
MISC::SET_BIT(&(Global_1947724.f_3), 2);
if(bParam1){
MISC::SET_BIT(&(Global_2793046.f_4687), false);
func_4(&(uParam0->f_5), 0, 0);
}
func_4(&(uParam0->f_1), 0, 0);
func_558(uParam0, 1);
}
break;
case 1:
if(func_5(&(uParam0->f_5))){
if(func_189(&(uParam0->f_5), 3000, 0)){
bVar0=true;
}}else{
bVar0=true;
}
if(bVar0){
func_547(iParam2);
func_558(uParam0, 2);
}
break;
case 2:
func_547(0);
if(func_189(&(uParam0->f_1), 15000, 0)){
if(func_535(func_536(0))){
HUD::CLEAR_HELP(1);
}
func_558(uParam0, 3);
}
break;
case 3:
if(func_189(&(uParam0->f_1), 23500, 0)){
MISC::CLEAR_BIT(&(Global_2793046.f_4687), true);
MISC::CLEAR_BIT(&(Global_1947724.f_3), 2);
func_558(uParam0, 4);
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


bool func_535(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


char* func_536(int iParam0){
if(((func_545(PLAYER::PLAYER_ID()) || func_544(PLAYER::PLAYER_ID())) || func_540()) || iParam0){
if(func_544(PLAYER::PLAYER_ID())){
return "BG_LBD_HELP";
}
return "BG_LBD_HELPW";
}
if(func_537(func_539())){
return "GB_LBD_HELP";
}
return "GB_LBD_HELPW";
}

int func_537(int iParam0){
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
return func_538(iParam0, 0);
return 0;
}

int func_538(int iParam0, int iParam1){
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

int func_539(){
return Global_1923597;
}


bool func_540(){
return (func_543() && func_541(func_28()));
}


bool func_541(int iParam0){
return func_542(iParam0, 1);
}

int func_542(bool bParam0, int iParam1){
if(bParam0 !=func_33()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_33()){
if(Global_1894573[bParam0 /*608*/].f_10==bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}


bool func_543(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148;
}


bool func_544(bool bParam0){
return func_538(func_509(bParam0), 0);
}


bool func_545(bool bParam0){
return func_546(func_509(bParam0));
}

int func_546(int iParam0){
switch (iParam0){
case 179:
case 180:
case 148:
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148 && func_542(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_35, 1)){
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


void func_547(int iParam0){
if(MISC::IS_BIT_SET(Global_2793046.f_4687, 0)){
if(((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2793046.f_848, 2)) && func_2566(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !CAM::IS_SCREEN_FADED_OUT()) && !func_557(PLAYER::PLAYER_ID(), 22)) && func_562(PLAYER::PLAYER_ID()) !=0) && !func_555(func_556())) && !func_545(PLAYER::PLAYER_ID())) && !func_554(func_509(PLAYER::PLAYER_ID()))) && !func_553(func_509(PLAYER::PLAYER_ID()))){
MISC::SET_BIT(&(Global_2793046.f_4687), true);
func_552(func_536(iParam0), -1);
func_548(1);
MISC::CLEAR_BIT(&(Global_2793046.f_4687), false);
}}}


void func_548(int iParam0){
char* sVar0;
sVar0="GTAO_Boss_Goons_FM_Soundset";
if(func_549(1)){
sVar0="GTAO_Biker_FM_Soundset";
}
if(iParam0 && !func_571()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
}}


bool func_549(bool bParam0){
return func_550(PLAYER::PLAYER_ID(), bParam0);
}

int func_550(bool bParam0, bool bParam1){
return func_551(bParam0, bParam1, 1);
}

int func_551(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_33()){
return 0;
}
if(!bParam1){
if(func_542(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_33() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}


void func_552(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_553(int iParam0){
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

int func_554(int iParam0){
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

int func_555(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}

int func_556(){
var uVar0;
uVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(MISC::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT")){
return 159;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST")){
return 157;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH")){
return 148;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS")){
return 164;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER")){
return 142;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB")){
return 152;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING")){
return 163;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY")){
return 155;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS")){
return 160;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR")){
return 153;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT")){
return 162;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP")){
return 154;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER")){
return 166;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY")){
return 167;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL")){
return 168;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND")){
return 169;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT")){
return 170;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT")){
return 171;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE")){
return 172;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS")){
return 173;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT")){
return 178;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY")){
return 192;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST")){
return 179;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS")){
return 180;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL")){
return 182;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT")){
return 183;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS")){
return 185;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING")){
return 186;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P")){
return 189;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL")){
return 190;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND")){
return 191;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY")){
return 192;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN")){
return 193;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP")){
return 194;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER")){
return 197;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER")){
return 198;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES")){
return 195;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY")){
return 199;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN")){
return 200;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND")){
return 201;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF")){
return 205;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS")){
return 207;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS")){
return 208;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE")){
return 209;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER")){
return 210;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED")){
return 214;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED")){
return 215;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT")){
return 216;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER")){
return 217;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED")){
return 218;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY")){
return 219;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING")){
return 221;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP")){
return 220;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING")){
return 225;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND")){
return 227;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER")){
return 229;
}elseif(MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS")){
return 233;
}
return 0;
}


bool func_557(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_10.f_4, iParam1);
}


void func_558(var uParam0, int iParam1){
*uParam0=iParam1;
}


void func_559(){
Global_2696213=1;
}

int func_560(){
if(((((((func_509(PLAYER::PLAYER_ID())==170 || func_509(PLAYER::PLAYER_ID())==219) || func_509(PLAYER::PLAYER_ID())==221) || func_509(PLAYER::PLAYER_ID())==220) || func_509(PLAYER::PLAYER_ID())==216) || func_509(PLAYER::PLAYER_ID())==215) || func_509(PLAYER::PLAYER_ID())==214) || func_509(PLAYER::PLAYER_ID())==218){
return 1;
}
if(func_561(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_561(bool bParam0){
int iVar0;
if(bParam0 !=func_33()){
if(func_2566(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
iVar0=func_143(Global_2657589[bParam0 /*466*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_562(bool bParam0){
int iVar0;
bool bVar1;
bool bVar2;
var uVar3;
bool bVar4;
iVar0=2;
bVar1=((func_570(bParam0) && !func_569(bParam0)) && !MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 8));
bVar2=func_568(bParam0);
uVar3=func_567();
bVar4=func_2193();
if((bVar1 && (func_566(bParam0) || func_565(bParam0))) || bVar4){
iVar0=0;
}elseif(uVar3 || ((!bVar2 && !func_564(bParam0)) && !func_563(bParam0))){
iVar0=2;
}else{
iVar0=3;
}
if(Global_2793046.f_5225.f_220 !=iVar0){
Global_2793046.f_5225.f_220=iVar0;
}
return iVar0;
}


bool func_563(int iParam0){
return func_557(iParam0, 19);
}

int func_564(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return func_557(bParam0, 9);
}
return 0;
}

int func_565(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}

int func_566(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}


bool func_567(){
return Global_1574582;
}


bool func_568(bool bParam0){
return func_557(bParam0, 20);
}


bool func_569(int iParam0){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 2);
}

int func_570(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}


bool func_571(){
return Global_2672505.f_2514[0 /*80*/].f_1 !=0;
}


void func_572(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
}


void func_573(bool bParam0, int iParam1){
char* sVar0;
char* sVar1;
int iVar2;
if(func_633() || bParam0==2){
if(!func_632(bParam0)){
switch (bParam0){
case 0:
sVar0="GB_SELL_BM_01";
if(func_339()){
if(func_387()){
sVar1="GB_SELL_BM_06b";
}
else{
sVar1="GB_SELL_BM_06";
}}elseif(func_276()){
sVar1="GB_SELL_BM_07";
}elseif(func_387()){
sVar1="GB_SELL_BM_02b";
}else{
sVar1="GB_SELL_BM_02";
}
iVar2=86;
func_631(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
func_630(bParam0);
break;
case 1:
sVar0="EXEC_SOLD";
sVar1="GB_SELL_BM_03";
iVar2=87;
func_631(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
func_630(bParam0);
break;
case 2:
sVar0="BIGM_CLOST";
iVar2=89;
if(func_2330()){
if(func_2293()){
if(iLocal_157 > 1){
sVar1="GB_SELL_BM_10p";
}else{
sVar1="GB_SELL_BM_10";
}
if(iLocal_158 > 0){
func_629("GB_SELL_TICK_1", iLocal_158, func_2292());
}else{
func_624("GB_SELL_TICK_3", 0);
}
}
else{
if(iParam1==4){
if(iLocal_157 > 1){
sVar1="GB_SELL_BM_08p";
}else{
sVar1="GB_SELL_BM_08";
}}elseif(iParam1==1 || iParam1==5){
if(iLocal_157 > 1){
sVar1="GB_SELL_BM_09p";
}else{
sVar1="GB_SELL_BM_09";
}}else{
sVar1="GB_SELL_BM_04";
}
if(iLocal_158 > 0){
func_629("GB_SELL_TICK_1", iLocal_158, func_2292());
}else{
func_624("GB_SELL_TICK_2", 0);
}
}
if(iLocal_157 > -1){
func_574(iVar2, iLocal_157, sVar1, sVar0, 1, -1, -1082130432, 2, 0);
}}else{
sVar1="GB_SELL_BM_04";
func_631(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
}
func_630(bParam0);
break;
}}}}

int func_574(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
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
func_623(iParam0, &Var0, iParam1, sParam2, sParam3);
Var0.f_71=iParam4;
Var0.f_6=iParam5;
Var0.f_7=iParam6;
Var0.f_72=iParam7;
if(iParam8 !=0){
func_621(&(Var0.f_69), iParam8);
}
return func_575(&Var0);
}

int func_575(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2836){
return 0;
}}
func_589(uParam0, uParam0->f_17);
func_586(uParam0);
if(func_134()){
func_586(uParam0);
}
if(func_585(uParam0->f_1)){
func_578();
if(Global_2672505.f_2514[0 /*80*/].f_2==0){
Global_2672505.f_2514[0 /*80*/]={
*uParam0 
};
if(func_577(uParam0->f_69, 8192)){
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
func_578();
}
return 1;
}else{
if(uParam0->f_1==1){
func_621(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_577(uParam0->f_69, 128)){
if(func_576(Global_2672505.f_2514[iVar0 /*80*/].f_1)){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_621(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_576(int iParam0){
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


bool func_577(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_578(){
bool bVar0;
if(Global_2672505.f_2837){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_579();
if(bVar0){
Global_78827=0;
}}


void func_579(){
Global_2672505.f_2838=0;
Global_2672505.f_2838.f_582=0;
func_583(&(Global_2672505.f_2838.f_1));
Global_2672505.f_2838.f_1.f_1=0;
func_580(&(Global_2672505.f_2838.f_1), 1);
}


void func_580(var uParam0, int iParam1){
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
if(CAM::IS_SCREEN_FADED_OUT() && !func_582(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_581(0);
}


void func_581(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_582(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_583(var uParam0){
func_584(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_584(var uParam0){
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

int func_585(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_586(var uParam0){
if(func_588(uParam0->f_1)){
uParam0->f_72=func_587();
}}

int func_587(){
return 21;
}

int func_588(int iParam0){
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


void func_589(var uParam0, bool bParam1){
if(func_588(uParam0->f_1)){
uParam0->f_73=1;
}
if(bParam1==func_33() || !func_2566(bParam1, 0, 1)){
return;
}
if(func_576(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_590(bParam1, -2, 0, 0, 0);
}}}

int func_590(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(func_90(bParam0) && !bParam4){
if(bParam2){
return 0;
}else{
return 1;
}}
if(iParam1==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if(iVar0 > -1 && iVar0 < 4){
if(Global_4718592.f_108449[iVar0] !=-1){
iParam1=iVar0;
}}}
if(((func_90(PLAYER::PLAYER_ID()) || (func_620() && func_619())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
uVar1=func_618();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_2566(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_616(iParam1, bParam0, 0);
}else{
return func_602(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_602(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_616(iParam1, bParam0, 0);
}else{
return func_591(0, -1, 0);
}}else{
return func_591(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_616(iParam1, bParam0, 0);
}else{
return func_602(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_602(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_591(bool bParam0, int iParam1, bool bParam2){
return func_592(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_592(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_601() || (func_600() && func_598())) && Global_1665699.f_1){
if(bParam1){
return func_597(iParam2, iVar0);
}else{
return func_597(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_84(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_596(1);
}else{
return func_596(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_593(iVar0, iParam2, 1, 4);
}else{
return func_593(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_596(1);
}
return func_596(0);
}

int func_593(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_595(iParam0, iParam1, iParam3);
if(func_594(Global_4718592.f_113724, 1)){
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

int func_594(int iParam0, bool bParam1){
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

int func_595(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_84(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_596(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_597(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_595(iParam1, iParam0, 4);
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

int func_598(){
if(func_599()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_599(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_600(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_601(){
if(func_599() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_602(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
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
if(func_608()){
iVar3=func_607(bParam0);
if(!iVar3==-1){
return func_605(iVar3);
}}
if((func_604(iParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_84(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_596(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_603(1);
}else{
return func_592(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_596(1);
}else{
return func_592(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_607(bParam0);
if(!iVar4==-1){
return func_605(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_603(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_604(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(bParam1)==-1){
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

int func_605(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_606(iParam0);
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


var func__606(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_607(bool bParam0){
if(!bParam0==func_33()){
if(func_292(bParam0, 1)){
return Global_2648605.f_818.f_11[func_61(bParam0)];
}}
return -1;
}

int func_608(){
if((((((func_166() || func_615()) || func_134()) || func_614()) || func_613()) || func_611()) || func_609()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_609(){
return func_610(Global_4718592.f_113724);
}

int func_610(int iParam0){
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

int func_611(){
return func_612(Global_4718592.f_113724);
}

int func_612(int iParam0){
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


var func__613(){
return Global_2683864.f_24;
}


var func__614(){
return Global_2683864.f_21;
}


var func__615(){
return Global_2683864.f_18;
}

int func_616(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_608()){
iVar2=func_607(iParam1);
if(!iVar2==-1){
return func_605(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_33()){
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
iVar0=func_592(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_617(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_84(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_603(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_617(int iParam0){
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


var func__618(){
return Global_2621446.f_2;
}


var func__619(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__620(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


void func_621(var uParam0, int iParam1){
func_622(uParam0, iParam1);
}


void func_622(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_623(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_33();
uParam1->f_18=func_33();
uParam1->f_19=func_33();
uParam1->f_20=func_33();
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

int func_624(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_625(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_625(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_628() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_30(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_626(iParam2);
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

int func_626(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_627(iVar0);
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


void func_627(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_628(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_629(char* sParam0, int iParam1, int iParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_625(4, sParam0, 1, "", iParam1, iParam2, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_630(bool bParam0){
MISC::SET_BIT(&(Local_120.f_2), bParam0);
}

int func_631(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
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
func_623(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_621(&(Var0.f_69), iParam7);
}
return func_575(&Var0);
}


bool func_632(int iParam0){
return MISC::IS_BIT_SET(Local_120.f_2, iParam0);
}

int func_633(){
if((func_2566(PLAYER::PLAYER_ID(), 1, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_634()){
return 1;
}
return 0;
}


bool func_634(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}

int func_635(int iParam0){
if(!func_2330() && !func_292(PLAYER::PLAYER_ID(), 1)){
if(!func_564(PLAYER::PLAYER_ID())){
if(func_2193()){
return 1;
}}}
switch (iParam0){
case 148:
break;
case 151:
break;
case 152:
break;
}
return 0;
}


void func_636(bool bParam0){
MISC::SET_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), iParam0);
}


void func_637(){
if(func_5(&(Global_2765974.f_140))){
func_203(&(Global_2765974.f_140));
}
func_4(&(Global_2765974.f_140), 1, 0);
}


void func_638(int iParam0, bool bParam1){
int iVar0;
if(bParam1 !=func_33()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam1)){
if(bParam1==PLAYER::PLAYER_ID()){
iVar0=1;
}elseif(func_639(bParam1, PLAYER::PLAYER_ID())){
iVar0=1;
}}}
if(iParam0 || iVar0){
if(func_2566(PLAYER::PLAYER_ID(), 1, 1)){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
Global_2793046.f_5225.f_388=NETWORK::GET_CLOUD_TIME_AS_INT();
}}}

int func_639(bool bParam0, bool bParam1){
int iVar0;
if(bParam0 !=func_33() && bParam1 !=func_33()){
iVar0=func_61(bParam0);
if(iVar0 !=func_33()){
return iVar0==func_61(bParam1);
}}
return 0;
}


void func_640(int iParam0, bool bParam1, var uParam2, bool bParam3){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
var uVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
int iVar9;
int iVar10;
func_882(iParam0, &fVar2, &fVar3);
if(uParam2->f_6==0){
iVar1=(iVar1 + uParam2->f_1);
iVar0=(iVar0 + *uParam2);
}
if(bParam1){
iVar1=(iVar1 + func_881(iParam0, uParam2->f_13, bParam3));
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
iVar0=(iVar0 + func_880(iParam0, bParam3));
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
if(func_878(iParam0)){
if(bParam1){
if(Global_262145.f_24468){
if(func_877(PLAYER::PLAYER_ID()) <=0){
func_876();
}}elseif(func_877(PLAYER::PLAYER_ID()) > 0){
func_875();
}else{
func_876();
}}else{
func_874();
}}
func_861(iParam0, bParam1, uParam2, &iVar0, &uVar4);
func_858(iParam0, uParam2, &iVar0, &iVar5);
func_836(iParam0, uParam2, &iVar0, &iVar5);
func_833(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
func_826(iParam0, uParam2, &iVar0, &iVar5);
if(iParam0==168){
Global_2793046.f_5225.f_387=uVar4;
}else{
Global_2793046.f_5225.f_387=iVar5;
}
bVar8=func_28();
if(bVar8 !=func_33() && iParam0 !=148){
if(func_292(PLAYER::PLAYER_ID(), 0)){
if(!func_824(PLAYER::PLAYER_ID(), bVar8, 1)){
func_815(&iVar0, 1);
}}}
func_810(iParam0, &iVar9, &iVar10);
iVar1=(iVar1 + iVar9);
iVar0=(iVar0 + iVar10);
if(iVar1 > 0){
Global_1947733.f_10=iVar1;
func_809();
func_764(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
}
if(iVar0 > 0){
Global_1947733.f_9=iVar0;
func_738(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
func_737(iParam0, iVar0);
if(func_736(iParam0)){
if(func_735(iParam0) > -1){
func_734(func_735(iParam0), iVar0);
}}
Global_2696875=iVar0;
func_733(&Global_2694992, 0, 0);
}
if(func_564(PLAYER::PLAYER_ID()) || func_568(PLAYER::PLAYER_ID())){
func_724(iParam0);
}
if(func_546(iParam0)){
Global_1947751.f_13=iVar0;
Global_1947751.f_14=iVar1;
}
if(func_554(iParam0)){
Global_1947807.f_13=iVar0;
Global_1947807.f_14=iVar1;
}
if(((func_723(iParam0) || iParam0==297) || iParam0==296) || iParam0==298){
Global_1947870.f_12=iVar0;
Global_1947870.f_13=iVar1;
}
if(func_722(iParam0)){
Global_1947917.f_12=iVar0;
Global_1947917.f_13=iVar1;
}
if(func_721(iParam0)){
Global_1947971.f_12=iVar0;
Global_1947971.f_13=iVar1;
}
if(func_553(iParam0)){
if(func_720(iParam0)){
Global_1948053.f_12=iVar0;
Global_1948053.f_13=iVar1;
}elseif(((func_717(iParam0) || iParam0==299) || iParam0==300) || iParam0==301){
Global_1948107.f_12=iVar0;
Global_1948107.f_13=iVar1;
}}
if(func_716(iParam0)){
Global_1948194.f_12=iVar0;
Global_1948194.f_13=iVar1;
}
if(func_715(iParam0)){
Global_1948269.f_16=iVar0;
Global_1948269.f_17=iVar1;
}
if(func_714(iParam0)){
Global_1948357.f_16=iVar0;
Global_1948357.f_17=iVar1;
}
if(func_713(iParam0) || func_712(iParam0)){
Global_1948491.f_15=iVar0;
Global_1948491.f_16=iVar1;
}
func_641(bParam1, iParam0);
}


void func_641(bool bParam0, int iParam1){
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
if(func_711(iVar0) && !func_651(iVar0)){
func_642(iVar0);
}}
if(bVar1){
if(func_711(1) && !func_651(1)){
func_642(1);
}}}}


void func_642(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 < 11){
func_646(func_647(func_648(iParam0)), 1, -1);
func_643(12, func_645(func_648(iParam0)), "UNLOCK_DESC_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
}}


void func_643(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10){
int iVar0;
iVar0=func_644(&Global_1662547);
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

int func_644(var uParam0){
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


char* func_645(int iParam0){
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


void func_646(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_32();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_647(int iParam0){
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

int func_648(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 >=0 && iVar0 < 11){
if(func_649()){
return Global_262145.f_31795[iVar0];
}else{
return Global_262145.f_31783[iVar0];
}}
return -1;
}


bool func_649(){
return func_650(PLAYER::PLAYER_ID());
}

int func_650(bool bParam0){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(bParam0))==joaat("mp_f_freemode_01")){
return 1;
}
return 0;
}

int func_651(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar1=-99;
iVar2=-1;
iVar0=func_648(iParam0);
if(iVar0==-1){
return 1;
}
if(func_649()){
iVar3=func_710(iVar0);
if(iVar3 !=-1){
iVar1=func_706(joaat("mp_f_freemode_01"), iVar0, func_710(iVar0), 4);
}
iVar2=func_705(iVar0, 4);
if((func_704(func_647(iVar0), -1) || (iVar2 !=-1 && func_698(iVar2, -1))) || (iVar1 !=-99 && func_652(joaat("mp_f_freemode_01"), func_710(iVar0), iVar1))){
return 1;
}}else{
iVar4=func_710(iVar0);
if(iVar4 !=-1){
iVar1=func_706(joaat("mp_m_freemode_01"), iVar0, func_710(iVar0), 3);
}
iVar2=func_705(iVar0, 3);
if((func_704(func_647(iVar0), -1) || (iVar2 !=-1 && func_698(iVar2, -1))) || (iVar1 !=-99 && func_652(joaat("mp_m_freemode_01"), func_710(iVar0), iVar1))){
return 1;
}}
return 0;
}


var func__652(int iParam0, int iParam1, int iParam2){
Global_78341[1 /*14*/]={
func_653(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}
struct<14> func_653(int iParam0, int iParam1, int iParam2, int iParam3){
func_697();
if(iParam0==joaat("mp_m_freemode_01")){
func_681(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_654(iParam1, iParam2, iParam3);
}
return Global_78341[0 /*14*/];
}


void func_654(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_680(iParam1, iParam2);
break;
case 11:
func_679(iParam1, iParam2);
break;
case 8:
func_678(iParam1, iParam2);
break;
case 9:
func_677(iParam1, iParam2);
break;
case 3:
func_676(iParam1, iParam2);
break;
case 4:
func_675(iParam1, iParam2);
break;
case 6:
func_674(iParam1, iParam2);
break;
case 1:
func_673(iParam1, iParam2);
break;
case 7:
func_672(iParam1, iParam2);
break;
case 10:
func_671(iParam1, iParam2);
break;
case 14:
func_670(iParam1, iParam2);
break;
case 12:
func_669(iParam1, iParam2);
break;
case 5:
func_668(iParam1, iParam2);
break;
case 0:
func_665(iParam1, iParam2);
break;
case 13:
func_655(iParam1);
break;
}}


void func_655(int iParam0){
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_656(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_664(iParam8);
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
if(func_663(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_661(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_661(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_661(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_661(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_661(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_661(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_660(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_660(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_660(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_663(14)){
return;
}
iVar0=func_310(func_659(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
iVar0=func_310(func_658(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(iVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_657(iParam1, uParam0->f_2, &iVar1)){
iVar0=func_310(iVar1, Global_78338, 0);
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


bool func_657(int iParam0, int iParam1, var uParam2){
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

int func_658(int iParam0, int iParam1){
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

int func_659(int iParam0, int iParam1){
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

int func_660(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
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

int func_661(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_662(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
iVar3=func_310(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(iVar3, uVar1);
}
return 0;
}


bool func_662(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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


bool func_663(int iParam0){
return Global_43257==iParam0;
}

int func_664(int iParam0){
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


void func_665(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=4;
func_666(iVar0, iParam0, 0, iParam1);
}


void func_666(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_656(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_656(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_656(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_656(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_667(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_656(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_667(int iParam0){
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


void func_668(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_669(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_670(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
}}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_671(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_672(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 55, iParam1);
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_673(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 26, iParam1);
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_674(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_675(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_676(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 16, iParam1);
return;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_677(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 36, iParam1);
return;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_678(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 136, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_698(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_698(87, -1)){
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_679(int iParam0, int iParam1){
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
if(func_698(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_296940.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_24));
}elseif(iParam0==9){
if(func_698(87, -1)){
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
func_666(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_680(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_681(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_696(iParam1, iParam2);
break;
case 11:
func_695(iParam1, iParam2);
break;
case 8:
func_694(iParam1, iParam2);
break;
case 9:
func_693(iParam1, iParam2);
break;
case 3:
func_692(iParam1, iParam2);
break;
case 4:
func_691(iParam1, iParam2);
break;
case 6:
func_690(iParam1, iParam2);
break;
case 1:
func_689(iParam1, iParam2);
break;
case 7:
func_688(iParam1, iParam2);
break;
case 10:
func_687(iParam1, iParam2);
break;
case 14:
func_686(iParam1, iParam2);
break;
case 12:
func_685(iParam1, iParam2);
break;
case 5:
func_684(iParam1, iParam2);
break;
case 0:
func_683(iParam1, iParam2);
break;
case 13:
func_682(iParam1);
break;
}}


void func_682(int iParam0){
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_683(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=3;
func_666(iVar0, iParam0, 0, iParam1);
}


void func_684(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_685(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_686(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_21));
}}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_687(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_688(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 92, iParam1);
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_689(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 26, iParam1);
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
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_690(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_17));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_691(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_15));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_692(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_693(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_694(int iParam0, int iParam1){
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
if(func_698(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_698(87, -1)){
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
func_666(iVar7, iParam0, 241, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_695(int iParam0, int iParam1){
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
if(func_698(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_296940.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_16));
}elseif(iParam0==28){
if(func_698(87, -1)){
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
func_666(iVar7, iParam0, 237, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_696(int iParam0, int iParam1){
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
func_666(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_656(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_697(){
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

int func_698(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_701(iParam0)==14192){
return 0;
}
uVar0=func_700(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_699(iVar1));
}

int func_699(int iParam0){
return (iParam0 % 32);
}

int func_700(var uParam0, int iParam1){
int iVar0;
iVar0=func_310(func_701(uParam0), iParam1, 0);
return iVar0;
}

int func_701(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_703(iVar0);
if((func_179()==0 || func_702()==0) || (func_179()==999 && func_702()==999)){
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

int func_702(){
return Global_32164;
}

int func_703(int iParam0){
return (iParam0 / 32);
}


bool func_704(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_32();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_705(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}

int func_706(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_709(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_708(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_667(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_707(iParam0, func_667(iParam2)) + iVar4);
}}
return -99;
}

int func_707(int iParam0, int iParam1){
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

int func_708(int iParam0){
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

int func_709(int iParam0){
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

int func_710(int iParam0){
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

int func_711(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 < 11){
if(func_649()){
if(Global_262145.f_31795[iVar0] !=-1){
return 1;
}}elseif(Global_262145.f_31783[iVar0] !=-1){
return 1;
}}
return 0;
}

int func_712(int iParam0){
switch (iParam0){
case 264:
return 1;
default:
}
return 0;
}

int func_713(int iParam0){
switch (iParam0){
case 271:
return 1;
default:
}
return 0;
}

int func_714(int iParam0){
switch (iParam0){
case 256:
return 1;
default:
}
return 0;
}

int func_715(int iParam0){
switch (iParam0){
case 158:
return 1;
default:
}
return 0;
}

int func_716(int iParam0){
switch (iParam0){
case 243:
return 1;
default:
}
return 0;
}

int func_717(int iParam0){
if(((((((((iParam0==250 || iParam0==238) || iParam0==242) || iParam0==244) || iParam0==248) || iParam0==241) || iParam0==239) || iParam0==240) || iParam0==249) || (iParam0==237 && func_718(func_719(PLAYER::PLAYER_ID())))){
return 1;
}
return 0;
}

int func_718(int iParam0){
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

int func_719(bool bParam0){
if(func_509(bParam0)==237 || func_509(bParam0)==250){
return func_507(bParam0);
}
return -1;
}

int func_720(int iParam0){
if(iParam0==237){
return 1;
}
return 0;
}

int func_721(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_722(int iParam0){
switch (iParam0){
case 229:
case 230:
return 1;
default:
}
return 0;
}

int func_723(int iParam0){
switch (iParam0){
case 225:
case 226:
case 227:
return 1;
default:
}
return 0;
}


void func_724(int iParam0){
if(func_732(PLAYER::PLAYER_ID()) && func_731()){
if(func_730(iParam0)){
func_727(12554, -1);
}elseif(func_726(iParam0)){
func_727(12556, -1);
}elseif(func_538(iParam0, 1)){
func_727(12557, -1);
}elseif(func_725(iParam0)){
func_727(12558, -1);
}}}

int func_725(int iParam0){
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

int func_726(int iParam0){
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


void func_727(int iParam0, int iParam1){
int iVar0;
iVar0=func_310(iParam0, func_311(iParam1), 0);
iVar0++;
if(!func_729(iParam0)){
func_529(iParam0, iVar0, iParam1, 1, 0);
}else{
func_728(iParam0, iVar0, iParam1, 1);
}}


void func_728(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_311(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_311(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_311(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_311(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_311(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_311(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_311(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_311(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_311(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_311(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_311(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_311(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_311(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_311(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_311(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_311(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_311(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_311(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_311(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_311(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_311(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_311(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_311(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_311(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_311(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_311(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_311(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_311(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_311(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_311(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_311(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_311(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_311(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_311(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_311(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_311(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_311(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_311(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_311(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_311(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_311(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_311(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_311(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_311(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_311(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_311(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_311(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_311(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_311(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_311(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_311(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_311(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_311(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_311(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_311(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_311(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_311(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_311(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_311(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_311(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_311(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_311(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_311(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_311(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_311(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_311(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_311(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_311(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_311(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_311(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_311(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_311(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_311(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_311(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_311(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_311(iParam2)]=iParam1;
break;
default:
break;
}}

int func_729(int iParam0){
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

int func_730(int iParam0){
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


bool func_731(){
return func_541(PLAYER::PLAYER_ID());
}

int func_732(bool bParam0){
if(bParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_267.f_133, 14);
}


void func_733(var uParam0, bool bParam1, bool bParam2){
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


void func_734(int iParam0, int iParam1){
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

int func_735(int iParam0){
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

int func_736(int iParam0){
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


void func_737(int iParam0, int iParam1){
if(func_732(PLAYER::PLAYER_ID()) && func_731()){
if(func_730(iParam0) && iParam1 > 0){
func_529(12555, (func_310(12555, -1, 0) + iParam1), -1, 1, 0);
}}}


void func_738(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5){
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
bVar6=func_249();
if(bVar6 !=func_33()){
func_763(bVar6, &uVar0, &uVar1);
}
bVar7=!func_762(1);
bVar8=func_762(0);
Var9.f_1=-1;
switch (iParam0){
case 168:
if(func_731()){
if(!func_761()){
MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, uParam3);
}}elseif(func_761()){
func_749(-856006867, iParam1, &iVar4, 0, 1, 0);
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
if(func_731()){
if(!func_761()){
Var9={
func_748() 
};
MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_747(Var9.f_0)), func_746(Var9.f_0), iParam4);
}}elseif(func_761()){
func_749(-856006867, iParam1, &iVar4, 0, 1, 0);
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
if(func_2330()){
if(!func_761()){
MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_747(func_745(PLAYER::PLAYER_ID()))), 5, iParam4);
}}elseif(func_761()){
func_749(-856006867, iParam1, &iVar4, 0, 1, 0);
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
if(func_2330()){
if(!func_761()){
iVar2=func_741(uParam5->f_16, iParam4);
iVar3=iParam1;
if(iVar2 > 0){
iVar3=(iVar3 - iVar2);
}
if(iParam2 > 0){
iVar3=(iVar3 - iParam2);
}
MONEY::NETWORK_EARN_FROM_SMUGGLER_WORK(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
}}else{
if(func_761()){
func_749(463142405, iParam1, &iVar4, 0, 1, 0);
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
if(func_761()){
func_749(1407278493, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(iParam1);
}
break;
case 237:
if(func_2330()){
if(!func_761()){
MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
}}else{
if(func_761()){
func_749(-856006867, iParam1, &iVar4, 0, 1, 0);
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
if(func_761()){
func_749(-961034881, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
Global_4535172[iVar4 /*85*/]=1781827765;
}else{
MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1, 1781827765);
}
break;
case 249:
if(func_761()){
func_749(1135468152, iParam1, &iVar4, 0, 1, 0);
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
if(func_761()){
func_749(-634726636, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
}
break;
case 243:
if(func_761()){
func_749(1698417709, iParam1, &iVar4, 0, 1, 0);
Global_4535172[iVar4 /*85*/].f_6=uVar0;
Global_4535172[iVar4 /*85*/].f_7=uVar1;
Global_4535172[iVar4 /*85*/].f_8=bVar7;
}else{
MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(iParam1);
}
break;
case 158:
if(uParam5->f_22){
if(func_761()){
func_749(1668610896, iParam1, &iVar4, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
}}elseif(func_761()){
func_749(-2032529561, iParam1, &iVar4, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
}
break;
default:
if(func_761()){
func_749(-856006867, iParam1, &iVar4, 0, 1, 0);
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
if(func_549(1)){
sVar10="GBMR_SELLTICK2";
}elseif(func_740(bVar6)){
sVar10="GBMR_SELLTICK1";
}
func_739(sVar10, iParam1, 0);
}}

int func_739(char* sParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=-1;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
if(bParam2){
func_625(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}else{
func_625(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}

int func_740(bool bParam0){
if(bParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_267.f_31, 26);
}

int func_741(int iParam0, int iParam1){
float fVar0;
float fVar1;
fVar0=func_744(iParam0, iParam1);
fVar1=(to_float(func_742(iParam0, iParam1)) * fVar0);
return round(fVar1);
}

int func_742(int iParam0, int iParam1){
return (func_743(iParam0) * iParam1);
}

int func_743(int iParam0){
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


float func_744(int iParam0, int iParam1){
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

int func_745(bool bParam0){
if(bParam0==func_33()){
return 0;
}
return Global_1853910[bParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_746(int iParam0){
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


char* func_747(int iParam0){
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


struct<2> func_748(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_194;
}


void func_749(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_761()){
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
func_750(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_750(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_750(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_750(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_750(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_761()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_32()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_757(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_756(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_751(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_751(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_752(iParam0);
}}


void func_752(int iParam0){
bool bVar0;
bVar0=false;
if(!func_761()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_755(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_753(&(Global_4535172[iParam0 /*85*/]));
}}


void func_753(var uParam0){
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
func_754(&(uParam0->f_14));
func_754(&(uParam0->f_14.f_13));
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


void func_754(var uParam0){
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

int func_755(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_756(int iParam0, int iParam1){
Global_2697015=iParam1;
Global_2697014=iParam0;
}

int func_757(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_761()){
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
func_758(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_758(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_760(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_759();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_759(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__760(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_761(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


bool func_762(bool bParam0){
return func_292(PLAYER::PLAYER_ID(), bParam0);
}


void func_763(bool bParam0, var uParam1, var uParam2){
*uParam1=Global_1894573[bParam0 /*608*/].f_10.f_8[0];
*uParam2=Global_1894573[bParam0 /*608*/].f_10.f_8[1];
}

int func_764(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_765(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_765(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
int iVar0;
int iVar1;
iVar0=func_775(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
iVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_771(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
}}}else{
func_766(iParam1, iVar0, sParam8, iParam10);
}
return iVar0;
}


void func_766(int iParam0, int iParam1, char* sParam2, int iParam3){
struct<3> Var0;
Var0={
func_769(iParam0, 1) 
};
if(iParam0==func_768(PLAYER::PLAYER_PED_ID())){
func_767(1);
}
func_771(Var0, iParam1, 0, sParam2, iParam3);
}


void func_767(int iParam0){
Global_2672505.f_1682=iParam0;
}

int func_768(int iParam0){
return iParam0;
}


Vector3 func__769(int iParam0, bool bParam1){
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
if(iParam0==func_770(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
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
}}
}else{
}