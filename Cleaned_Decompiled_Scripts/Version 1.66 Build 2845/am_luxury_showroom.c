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
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
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
int iLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=-1;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
var uLocal_93=0;
var uLocal_94=0;
var uLocal_95=0;
var uLocal_96=0;
float fLocal_97=0f;
float fLocal_98=0f;
float fLocal_99=0f;
float fLocal_100=0f;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
var uLocal_104=0;
var uLocal_105=0;
var uLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
float fLocal_110=0f;
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
var uLocal_133=32;
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
struct<1286> Local_166={
0, 0, 0, -1, -1, 0, 2, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 
};
var uLocal_167=12;
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
var uLocal_180=12;
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
var uLocal_193=12;
var uLocal_194=4;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=4;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=4;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=4;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=0;
var uLocal_217=0;
var uLocal_218=4;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uLocal_224=4;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
var uLocal_230=4;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=4;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
var uLocal_242=4;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=4;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=4;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=4;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=12;
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
var uLocal_303=12;
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
var uLocal_316=12;
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
var uLocal_329=-1;
var uLocal_330=0;
var uLocal_331=1;
var uLocal_332=0;
var uLocal_333=12;
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
fLocal_30=80f;
fLocal_31=140f;
fLocal_32=180f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_86=-1;
fLocal_97=3f;
fLocal_98=0f;
fLocal_99=2f;
fLocal_100=100f;
fLocal_110=0.5f;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_835();
}else{
func_832();
}
while (true){
func_831();
if(func_819()){
func_832();
}
func_1();
}}


void func_1(){
switch (Local_166.f_9){
case 0:
func_811();
break;
case 1:
func_796();
break;
case 2:
func_777();
break;
case 3:
func_756();
break;
case 4:
func_56();
break;
}
func_11(&(Local_166.f_1285), &(Local_166.f_1274), Local_166.f_9 > 1);
func_2();
}


void func_2(){
if(Local_166.f_9==1 && !func_3(1)){
Local_166.f_1=(Local_166.f_1 + 1 % 3);
}}

int func_3(bool bParam0){
struct<3> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
float fVar7;
func_9(func_10(), &Var0, &Var1, &uVar2);
if(func_8(Var0) || func_8(Var1)){
return 0;
}
if(!func_7(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(bParam0){
iVar3=func_6(func_10());
if(iVar3 < 0 || iVar3 >=2){
return 0;
}
if(!func_7(Local_166.f_6[iVar3])){
return 0;
}
Var4={
ENTITY::GET_ENTITY_COORDS(Local_166.f_6[iVar3], 1) 
};
Var5={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
fVar6=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
fVar7=func_5(Var5, Var4);
if(func_4(fVar7, fVar6, 50f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, uVar2, 0, 1, 1)){
return 1;
}}else{
return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, uVar2, 0, 1, 1);
}
return 0;
}

int func_4(float fParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
fVar1=(fParam1 - fParam2);
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
fVar0=(fParam1 + fParam2);
if(fVar0 >=360f){
fVar0=(fVar0 - 360f);
}
if(fVar0 < 0f){
fVar0=(fVar0 + 360f);
}
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}


float func_5(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_6(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
case 2:
return 1;
break;
}
return 0;
}

int func_7(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_8(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_9(int iParam0, var uParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
*uParam1={
-796.5573f, -234.6412f, 35.94032f 
};
*uParam2={
-792.6026f, -241.4741f, 39.50642f 
};
*uParam3=3f;
break;
case 1:
*uParam1={
-792.1209f, -242.4434f, 35.93293f 
};
*uParam2={
-789.0962f, -247.5213f, 39.44004f 
};
*uParam3=3f;
break;
case 2:
*uParam1={
-786.5422f, -248.4348f, 35.99127f 
};
*uParam2={
-780.4202f, -245.9356f, 39.44004f 
};
*uParam3=3f;
break;
}}

int func_10(){
return Local_166.f_1;
}


void func_11(var uParam0, var uParam1, bool bParam2){
func_12(uParam0, &(uParam0->f_1), &(uParam0->f_14), &(uParam0->f_27), &(uParam0->f_100), &(uParam0->f_137), &(uParam0->f_167), uParam1, bParam2);
}


void func_12(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8){
struct<3> Var0;
int iVar1;
struct<4> Var2;
struct<3> Var3;
char cVar4[24];
int iVar5;
int iVar6;
struct<2> Var7;
char cVar8[16];
int iVar9;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return;
}
if(func_55() !=0 || uParam8){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD", 0);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD2", 0);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD3", 0);
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD4", 0);
if((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD4")) && uParam0->f_164 <=0f){
uParam0->f_164=(500f / 1000f);
PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), uParam1);
func_54(uParam2, uParam1);
iVar1=0;
while (iVar1 < 12){
if((*uParam2)[iVar1] !=(*uParam1)[iVar1]){
uParam0->f_150[iVar1]=1;
(*uParam2)[iVar1]=(*uParam1)[iVar1];
}
if(func_7((*uParam1)[iVar1])){
if(func_53((*uParam1)[iVar1], 1)){
iVar5=func_51((*uParam1)[iVar1]);
if(func_50(iVar5, 1, 0)){
if(func_48(iVar5)){
}else{
iVar6=ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar1]);
if(iVar6==joaat("slamtruck") && !func_53((*uParam1)[iVar1], 1)){
}else{
Var0={
ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar1], 1) 
};
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam1)[iVar1], 0) && vdist(func_47(PLAYER::PLAYER_ID()), Var0) <=15f){
StringCopy(&Var7, "MP_CAR_STATS_", 16);
if(iVar1 < 9){
StringConCat(&Var7, "0", 16);
}
StringIntConCat(&Var7, iVar1 + 1, 16);
func_46(iVar6, &(Var0.f_2));
if(func_45(uParam6[iVar1], &Var7) && uParam0->f_150[iVar1]){
*(uParam4[iVar1 /*3*/])={
Var0 
};
(*uParam5)[iVar1]=func_39(iVar6);
StringCopy(&Var2, "", 32);
StringCopy(&Var3, "", 24);
StringCopy(&cVar4, "", 24);
func_38((*uParam1)[iVar1], &Var3, &cVar4);
StringCopy(&Var2, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar6), 32);
func_35((*uParam1)[iVar1], uParam3[iVar1 /*6*/]);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_VEHICLE_INFOR_AND_STATS");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_TWO_STRINGS");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_32(iVar6, 1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(!func_53((*uParam1)[iVar1], 1)){
if(func_31(iVar6, -1)){
func_25(iVar6);
}else{
func_24("CMRC_COMINGSOON");
}}else{
func_24("");
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&cVar4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&Var3);
func_24("FMMC_VEHST_0");
func_24("FMMC_VEHST_1");
func_24("FMMC_VEHST_2");
func_24("FMMC_VEHST_3");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round((*uParam3[iVar1 /*6*/])[0]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round((*uParam3[iVar1 /*6*/])[1]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round((*uParam3[iVar1 /*6*/])[2]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round((*uParam3[iVar1 /*6*/])[3]));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(func_53((*uParam1)[iVar1], 1)){
if(func_50(iVar5, 1, 0)){
StringCopy(&cVar8, "", 16);
StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iVar5), 32);
func_16(iVar5, &cVar8);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_PLAYER_NAME");
func_15(&Var2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(!func_14(&cVar8)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_CREW_NAME");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&cVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}
uParam0->f_150[iVar1]=0;
}
}
(*uParam2)[iVar1]=(*uParam1)[iVar1];
}}
iVar1++;
iVar1=0;
while (iVar1 < 12){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam6)[iVar1])){
Var0={
*(uParam4[iVar1 /*3*/]) 
};
Var0.f_2=(Var0.f_2 + ((*uParam5)[iVar1] + 1.3f));
uParam7->f_6={
func_13(Var0, CAM::GET_FINAL_RENDERED_CAM_COORD()) 
};
if(vdist(func_47(PLAYER::PLAYER_ID()), Var0) <=15f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && vdist(func_47(PLAYER::PLAYER_ID()), Var0) < 3.5f){
}
else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam6)[iVar1], Var0, uParam7->f_6, *uParam7, uParam7->f_3, uParam7->f_9);
}
}}
iVar1++;
}
uParam0->f_164=(uParam0->f_164 - MISC::GET_FRAME_TIME());
Jump @1121;
//curOff=1052 uParam0->f_164=0f;
iVar9=0;
while (iVar9 < 12){
uParam0->f_150[iVar9]=1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam6)[iVar9])){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam6[iVar9]);
}
iVar9++;
}
uParam0->f_166=0;
uParam0->f_165=0;
}


Vector3 func__13(struct<2> Param0, var uParam1, struct<3> Param2){
struct<3> Var0;
if(func_8(Param2)){
return 0f, 0f, 0f;
}
Var0.f_2=(180f - MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1)));
Var0.f_0=0f;
Var0.f_1=0f;
return Var0;
}

int func_14(char[4] cParam0){
if(MISC::IS_STRING_NULL(cParam0)){
return 1;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING(cParam0) <=0){
return 1;
}
return 0;
}


void func_15(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


void func_16(int iParam0, char[4] cParam1){
struct<13> Var0;
struct<35> Var1;
StringCopy(cParam1, "", 16);
Var0={
func_23(iParam0) 
};
if(func_22()){
if(func_21(Var0)){
if(!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return;
}}}elseif(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return;
}
if(func_20(&Var0)){
Var1={
func_18(iParam0) 
};
func_17(&Var1, cParam1);
}}


void func_17(var uParam0, char* sParam1){
NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}
struct<35> func_18(int iParam0){
struct<13> Var0;
struct<35> Var1;
if(func_19(iParam0)){
return Global_1575092[PLAYER::PLAYER_ID() /*35*/];
}
Var0={
func_23(iParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
return Var1;
}

int func_19(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}
return 0;
}

int func_20(var uParam0){
if(PLAYER::IS_PLAYER_ONLINE()){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return 1;
}}
return 0;
}


bool func_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_22(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}
struct<13> func_23(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}


void func_24(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_25(int iParam0){
int iVar0;
int iVar1;
switch (iParam0){
case joaat("omnisegt"):
case joaat("torero2"):
case joaat("corsita"):
case joaat("lm87"):
case joaat("sm722"):
func_24("LEGEND_WEB");
return;
break;
case joaat("ruiner4"):
case joaat("vigero2"):
case joaat("greenwood"):
case joaat("rhinehart"):
case joaat("kanjosj"):
func_24("SOUTHERN_WEB");
return;
break;
case joaat("nero2"):
func_24("BENNY_WEB");
return;
break;
case joaat("baller"):
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING("");
return;
break;
}
if(!STREAMING::IS_MODEL_VALID(iParam0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING("");
return;
}
iVar0=func_29(iParam0);
iVar1=func_26(iVar0);
switch (iVar1){
case 10:
func_24("LEGEND_WEB");
break;
case 16:
func_24("SOUTHERN_WEB");
break;
case 12:
func_24("WARSTOCK_WEB");
break;
case 26:
func_24("BENNY_WEB");
break;
default:
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING("");
break;
}}

int func_26(int iParam0){
int iVar0;
if(iParam0==-1){
return -1;
}
if((((iParam0==8 || iParam0==9) || iParam0==23) || iParam0==26) || iParam0==28){
return -1;
}
iVar0=0;
while (iVar0 < 190){
if(func_27(10, iVar0 + 3)==iParam0){
return 10;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 255){
if(func_27(16, iVar0 + 3)==iParam0){
return 16;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 160){
if(func_27(12, iVar0 + 3)==iParam0){
return 12;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 37){
if(func_27(11, iVar0 + 3)==iParam0){
return 11;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 28){
if(func_27(13, iVar0 + 3)==iParam0){
return 13;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
if(func_27(15, iVar0 + 3)==iParam0){
return 15;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 32){
if(func_27(26, iVar0 + 3 + 12)==iParam0){
return 26;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 22){
if(func_27(29, iVar0 + 3 + 17)==iParam0){
return 29;
}
iVar0++;
}
return -1;
}

int func_27(int iParam0, int iParam1){
int iVar0;
iVar0=(iParam1 - 3);
if(!func_28(iParam0, iVar0)){
return -1;
}
switch (iParam0){
case 10:
switch (iVar0){
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
return 46;
case 14:
return 70;
case 15:
return 71;
case 16:
return 72;
case 17:
return 56;
case 18:
return 50;
case 19:
return 44;
case 20:
return 47;
case 21:
return 73;
case 22:
return 74;
case 23:
return 75;
case 24:
return 76;
case 25:
return 55;
case 26:
return 95;
case 27:
return 96;
case 28:
return 97;
case 29:
return 98;
case 30:
return 77;
case 32:
return 45;
case 33:
return 49;
case 34:
return 48;
case 35:
return 109;
case 36:
return 111;
case 37:
return 114;
case 38:
return 112;
case 39:
return 115;
case 40:
return 116;
case 41:
return 110;
case 42:
return 117;
case 43:
return 118;
case 44:
return 119;
case 45:
return 120;
case 46:
return 121;
case 47:
return 165;
case 48:
return 166;
case 49:
return 169;
case 50:
return 172;
case 51:
return 182;
case 52:
return 220;
case 53:
return 221;
case 55:
return 222;
case 57:
return 216;
case 58:
return 214;
case 59:
return 223;
case 60:
return 225;
case 61:
return 218;
case 62:
return 219;
case 63:
return 235;
case 64:
return 236;
case 65:
return 238;
case 66:
return 239;
case 67:
return 242;
case 68:
return 233;
case 69:
return 234;
case 70:
return 240;
case 71:
return 241;
case 72:
return 248;
case 73:
return 261;
case 74:
return 262;
case 75:
return 263;
case 76:
return 259;
case 77:
return 260;
case 78:
return 264;
case 79:
return 265;
case 80:
return 266;
case 81:
return 267;
case 82:
return 279;
case 83:
return 280;
case 84:
return 281;
case 85:
return 292;
case 86:
return 293;
case 87:
return 294;
case 88:
return 312;
case 89:
return 313;
case 90:
return 319;
case 91:
return 320;
case 92:
return 321;
case 93:
return 322;
case 94:
return 325;
case 95:
return 326;
case 96:
return 327;
case 97:
return 328;
case 98:
return 352;
case 99:
return 355;
case 100:
return 353;
case 101:
return 367;
case 102:
return 368;
case 103:
return 372;
case 104:
return 373;
case 105:
return 374;
case 106:
return 375;
case 107:
return 376;
case 108:
return 377;
case 109:
return 378;
case 110:
return 379;
case 111:
return 383;
case 112:
return 382;
case 113:
return 384;
case 114:
return 386;
case 115:
return 391;
case 116:
return 393;
case 117:
return 394;
case 118:
return 397;
case 119:
return 396;
case 120:
return 398;
case 121:
return 405;
case 122:
return 411;
case 123:
return 412;
case 124:
return 443;
case 125:
return 444;
case 126:
return 445;
case 127:
return 446;
case 128:
if(!Global_262145.f_25834){
return 447;
}
return -1;
break;
case 129:
return 448;
case 130:
if(Global_262145.f_25834){
return 447;
}
return -1;
break;
case 131:
return 459;
case 132:
return 460;
case 133:
return 461;
case 134:
return 462;
case 135:
return 463;
case 136:
return 470;
case 137:
return 474;
case 138:
return 475;
case 139:
return 476;
case 140:
return 477;
case 141:
return 478;
case 142:
return 479;
case 143:
return 499;
case 144:
return 489;
case 145:
return 490;
case 146:
return 491;
case 147:
return 492;
case 148:
return 493;
case 149:
return 494;
case 150:
return 495;
case 151:
return 515;
case 152:
return 512;
case 153:
return 513;
case 154:
return 514;
case 155:
return 519;
case 156:
return 543;
case 157:
return 537;
case 158:
return 540;
case 159:
return 542;
case 160:
return 538;
case 161:
return 548;
case 162:
return 550;
case 163:
return 551;
case 164:
return -1;
case 165:
return -1;
case 166:
return -1;
case 167:
return 554;
case 168:
return 555;
case 169:
return 556;
case 170:
return 557;
case 171:
return 558;
case 172:
return 559;
case 173:
return 560;
case 174:
return 561;
case 175:
return 562;
case 176:
return 563;
case 177:
return 564;
case 178:
return 570;
case 179:
return 571;
case 180:
return 572;
case 181:
return 573;
case 182:
return 569;
case 183:
return 574;
case 184:
return 591;
case 185:
return 585;
case 186:
return 597;
case 187:
return 595;
case 188:
return 592;
case 189:
return 594;
case 190:
return -1;
}
break;
case 11:
switch (iVar0){
case 0:
return 13;
case 1:
return 10;
case 2:
return 12;
case 3:
return 14;
case 4:
return 11;
case 5:
return 15;
case 12:
return 16;
case 13:
return 78;
case 14:
return 79;
case 15:
return 18;
case 16:
return 80;
case 17:
return 113;
case 18:
return 162;
case 19:
return 163;
case 20:
return 199;
case 21:
return 164;
case 22:
return 188;
case 23:
return 215;
case 24:
return 217;
case 25:
return 243;
case 26:
return 244;
case 27:
return 253;
case 28:
return 257;
case 29:
return 350;
case 30:
return 351;
case 31:
return 349;
case 32:
return 342;
case 33:
return 338;
case 34:
return 401;
case 35:
return 413;
case 36:
return 582;
case 37:
return -1;
default:
}
break;
case 12:
switch (iVar0){
case 0:
return 17;
case 2:
return 22;
case 4:
return 19;
case 5:
return 20;
case 7:
return 21;
case 14:
return 82;
case 15:
return 85;
case 17:
return 84;
case 18:
return 83;
case 21:
return 86;
case 24:
return 87;
case 25:
return 81;
case 26:
return 148;
case 27:
return 160;
case 28:
return 171;
case 29:
return 187;
case 30:
return 177;
case 31:
return 178;
case 32:
return 179;
case 33:
return 183;
case 34:
return 185;
case 35:
return 186;
case 36:
return 192;
case 37:
return 184;
case 38:
return 200;
case 39:
return 205;
case 40:
return 237;
case 41:
return 254;
case 42:
return 256;
case 43:
return 304;
case 44:
return 305;
case 45:
return 306;
case 46:
return 307;
case 47:
return 308;
case 48:
return 309;
case 49:
return 310;
case 50:
return 311;
case 51:
return 323;
case 52:
return 323;
case 53:
return 323;
case 54:
return 323;
case 55:
return 323;
case 56:
return 323;
case 57:
return 323;
case 58:
return 323;
case 59:
return 323;
case 60:
return 324;
case 61:
return 329;
case 62:
return 330;
case 63:
return 331;
case 64:
return 332;
case 65:
return 333;
case 66:
return 334;
case 67:
return 335;
case 68:
return 336;
case 69:
return 337;
case 70:
return 339;
case 71:
return 340;
case 72:
return 341;
case 73:
return 343;
case 74:
return 344;
case 75:
return 345;
case 76:
return 346;
case 77:
return 347;
case 78:
return 348;
case 79:
return 356;
case 80:
return 357;
case 81:
return 357;
case 82:
return 357;
case 83:
return 357;
case 84:
return 357;
case 85:
return 357;
case 86:
return 357;
case 87:
return 357;
case 88:
return 358;
case 89:
return 359;
case 90:
return 360;
case 91:
return 361;
case 92:
return 362;
case 93:
return 363;
case 94:
return 364;
case 95:
return 365;
case 96:
return 366;
case 97:
return 400;
case 98:
return 402;
case 99:
return 402;
case 100:
return 402;
case 101:
return 402;
case 102:
return 402;
case 103:
return 402;
case 104:
return 402;
case 105:
return 402;
case 106:
return 402;
case 107:
return 402;
case 108:
return 403;
case 109:
return 404;
case 110:
return 406;
case 111:
return 407;
case 112:
return 408;
case 113:
return 409;
case 114:
return 480;
case 115:
return 481;
case 116:
return 482;
case 117:
return 483;
case 118:
return 484;
case 119:
return 485;
case 120:
return 486;
case 121:
return 487;
case 122:
return 488;
case 135:
return 518;
case 136:
return 518;
case 137:
return 518;
case 138:
return 518;
case 139:
return 518;
case 140:
return 518;
case 141:
return 518;
case 142:
return 518;
case 143:
return 518;
case 144:
return 518;
case 145:
return 523;
case 146:
return 524;
case 148:
return 525;
case 149:
return 526;
case 150:
return 527;
case 152:
return 528;
case 153:
return 529;
case 154:
return 530;
case 155:
return 531;
case 156:
return 532;
case 157:
return -1;
case 158:
return 583;
case 159:
return 450;
case 160:
return -1;
default:
}
break;
case 13:
switch (iVar0){
case 0:
return 24;
case 1:
return 25;
case 2:
return 102;
case 3:
return 27;
case 4:
return 32;
case 5:
return 29;
case 6:
return 30;
case 8:
return 173;
case 11:
return 224;
case 14:
return 201;
case 16:
return 245;
case 17:
return 245;
case 18:
return 245;
case 19:
return 245;
case 20:
return 245;
case 21:
return 245;
case 22:
return 245;
case 23:
return 245;
case 24:
return 245;
case 25:
return 245;
case 26:
return 258;
case 27:
return 533;
case 28:
return -1;
default:
}
break;
case 15:
switch (iVar0){
case 0:
return 33;
case 1:
return 34;
case 2:
return 35;
case 3:
return 36;
case 4:
return 37;
case 5:
return 38;
case 9:
return -1;
default:
}
break;
case 16:
switch (iVar0){
case 0:
return 39;
case 1:
return 40;
case 2:
return 41;
case 3:
return 42;
case 4:
return 43;
case 5:
return 44;
case 6:
return 45;
case 7:
return 46;
case 8:
return 47;
case 9:
return 48;
case 10:
return 49;
case 11:
return 50;
case 12:
return 51;
case 13:
return 52;
case 14:
return 53;
case 15:
return 54;
case 16:
return 55;
case 17:
return 56;
case 18:
return 57;
case 19:
return 58;
case 20:
return 59;
case 21:
return 60;
case 22:
return 61;
case 23:
return 62;
case 24:
return 63;
case 25:
return 64;
case 26:
return 65;
case 27:
return 66;
case 28:
return 67;
case 29:
return 68;
case 30:
return 69;
case 35:
return 89;
case 36:
return 90;
case 37:
return 91;
case 38:
return 92;
case 39:
return 93;
case 40:
return 94;
case 41:
return 88;
case 42:
return 99;
case 43:
return 100;
case 44:
return 101;
case 45:
return 103;
case 46:
return 104;
case 47:
return 105;
case 48:
return 106;
case 49:
return 108;
case 50:
return 107;
case 51:
return 139;
case 52:
return 128;
case 53:
return 129;
case 54:
return 130;
case 55:
return 131;
case 56:
return 132;
case 57:
return 133;
case 58:
return 134;
case 59:
return 135;
case 60:
return 136;
case 61:
return 137;
case 62:
return 138;
case 63:
return 140;
case 64:
return 141;
case 65:
return 142;
case 66:
return 122;
case 67:
return 123;
case 68:
return 124;
case 69:
return 125;
case 70:
return 126;
case 71:
return 127;
case 72:
return 143;
case 73:
return 144;
case 74:
return 145;
case 75:
return 146;
case 76:
return 147;
case 77:
return 149;
case 78:
return 150;
case 79:
return 151;
case 80:
return 152;
case 81:
return 153;
case 82:
return 154;
case 83:
return 155;
case 84:
return 156;
case 85:
return 157;
case 86:
return 158;
case 87:
return 159;
case 88:
return 161;
case 89:
return 168;
case 90:
return 167;
case 91:
return 170;
case 92:
return 189;
case 93:
return 190;
case 94:
return 191;
case 95:
return 193;
case 96:
return 194;
case 97:
return 195;
case 98:
return 196;
case 99:
return 197;
case 100:
return 198;
case 101:
return 174;
case 102:
return 175;
case 103:
return 176;
case 104:
return 180;
case 105:
return 181;
case 106:
return 204;
case 107:
return 202;
case 108:
return 203;
case 109:
return 206;
case 110:
return 207;
case 111:
return 208;
case 112:
return 209;
case 113:
return 211;
case 114:
return 210;
case 115:
return 213;
case 116:
return 212;
case 117:
return 231;
case 118:
return 232;
case 119:
return 246;
case 120:
return 255;
case 121:
return 268;
case 122:
return 269;
case 123:
return 270;
case 124:
return 271;
case 125:
return 272;
case 126:
return 273;
case 127:
return 274;
case 128:
return 275;
case 129:
return 276;
case 130:
return 277;
case 131:
return 278;
case 132:
return 282;
case 134:
return 283;
case 135:
return 284;
case 136:
return 285;
case 137:
return 286;
case 138:
return 287;
case 139:
return 288;
case 140:
return 289;
case 141:
return 290;
case 142:
return 291;
case 143:
return 295;
case 144:
return 296;
case 145:
return 297;
case 146:
return 298;
case 147:
return 299;
case 148:
return 300;
case 149:
return 301;
case 150:
return 302;
case 151:
return 303;
case 152:
return 354;
case 153:
return 370;
case 154:
return 371;
case 155:
return 380;
case 156:
return 381;
case 157:
return 369;
case 158:
return 385;
case 159:
return 387;
case 160:
return 388;
case 161:
return 389;
case 162:
return 390;
case 163:
return 392;
case 164:
return 399;
case 165:
return 395;
case 166:
return 415;
case 167:
return 416;
case 168:
return 417;
case 169:
return 418;
case 170:
return 424;
case 171:
return 419;
case 172:
return 420;
case 173:
return 421;
case 174:
return 423;
case 175:
return 422;
case 176:
return 414;
case 177:
return 410;
case 178:
return 458;
case 184:
return 441;
case 185:
return 442;
case 186:
return 449;
default:
}
switch (iVar0){
case 187:
return 464;
case 188:
return 465;
case 189:
return 466;
case 190:
return 467;
case 191:
return 468;
case 192:
return 440;
case 193:
return 469;
case 194:
return 471;
case 195:
return 472;
case 196:
return 473;
case 197:
return 503;
case 198:
return 504;
case 199:
return 502;
case 200:
return 497;
case 201:
return 498;
case 202:
return 501;
case 203:
return 500;
case 204:
return 505;
case 205:
return 496;
case 207:
return 507;
case 213:
return 506;
case 214:
return 509;
case 218:
return 511;
case 219:
return 510;
case 220:
return 520;
case 221:
return 521;
case 222:
return 522;
case 223:
return 534;
case 224:
return 535;
case 225:
return 536;
case 226:
return 541;
case 227:
return 539;
case 228:
return 546;
case 229:
return 545;
case 230:
return 544;
case 231:
return 547;
case 232:
return 549;
case 233:
return 552;
case 234:
return -1;
case 235:
return -1;
case 236:
return 565;
case 237:
return 566;
case 238:
return 567;
case 239:
return 568;
case 240:
return 575;
case 241:
return 576;
case 242:
return 577;
case 243:
return 578;
case 244:
return 579;
case 245:
return 580;
case 246:
return 581;
case 247:
return 586;
case 248:
return 587;
case 249:
return 588;
case 250:
return 598;
case 251:
return 593;
case 252:
return 596;
case 253:
return 589;
case 254:
return 590;
case 255:
return -1;
default:
}
break;
case 26:
switch ((iVar0 - 12)){
case 0:
return 221;
case 1:
return 229;
case 2:
return 228;
case 4:
if(!Global_262145.f_14737){
return 227;
}else{
return 227;
}
break;
case 5:
return 226;
case 6:
return 230;
case 3:
return 135;
case 7:
return 251;
case 8:
return 250;
case 9:
return 249;
case 13:
return 210;
case 14:
return 252;
break;
case 11:
return 247;
case 12:
return 49;
case 15:
return 314;
case 16:
return 315;
case 17:
return 316;
case 18:
return 317;
case 19:
return 95;
case 20:
if(!Global_262145.f_19140){
return -1;
}else{
return 48;
}
break;
case 21:
return 318;
case 22:
return 516;
case 23:
return 300;
case 24:
return 145;
case 25:
return 464;
case 26:
return 371;
case 27:
return 517;
case 28:
if(!Global_262145.f_33138){
return -1;
}else{
return 522;
}
break;
case 29:
if(!Global_262145.f_33140){
return -1;
}else{
return 370;
}
break;
case 30:
if(!Global_262145.f_33131){
return -1;
}else{
return 521;
}
break;
case 31:
if(!Global_262145.f_33139){
return -1;
}else{
return 569;
}
break;
case 32:
return -1;
}
break;
case 29:
switch ((iVar0 - 18)){
case 0:
return 425;
case 1:
return 426;
case 2:
return 427;
case 3:
return 428;
case 4:
return 429;
case 5:
return 430;
case 6:
return 431;
case 7:
return 432;
case 8:
return 433;
case 9:
return 434;
case 10:
return 435;
case 11:
return 436;
case 12:
return 437;
case 13:
return 438;
case 14:
return 439;
case 15:
return 211;
case 16:
return 145;
case 17:
return 210;
case 18:
return 122;
case 19:
return 440;
case 20:
return 389;
case 21:
return 278;
case 22:
return -1;
default:
}
break;
}
return -1;
}

int func_28(int iParam0, int iParam1){
if(iParam0==10){
if(iParam1 >=0 && iParam1 <=8){
return 1;
}elseif(Global_78558){
if(iParam1 >=14 && iParam1 < 190){
return 1;
}}elseif(!Global_78558){
if(iParam1 >=14 && iParam1 < 190){
return 1;
}}}elseif(iParam0==16){
if(iParam1 >=0 && iParam1 <=30){
return 1;
}elseif((Global_78558 && iParam1 >=35) && iParam1 < 255){
return 1;
}elseif((!Global_78558 && iParam1 >=35) && iParam1 < 255){
return 1;
}}elseif(iParam0==11){
if(iParam1 >=0 && iParam1 <=5){
return 1;
}elseif(iParam1 >=12 && iParam1 < 37){
return 1;
}}elseif(iParam0==12){
if((((iParam1==0 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==7){
return 1;
}elseif(Global_78558){
if((((iParam1==14 || iParam1==15) || iParam1==17) || iParam1==18) || (iParam1 >=21 && iParam1 < 160)){
if((iParam1==57 || iParam1==58) || iParam1==59){
return 0;
}
if((iParam1==85 || iParam1==86) || iParam1==87){
return 0;
}
if((iParam1==105 || iParam1==106) || iParam1==107){
return 0;
}
if((iParam1==142 || iParam1==143) || iParam1==144){
return 0;
}
return 1;
}}elseif(!Global_78558){
if((((iParam1==14 || iParam1==15) || iParam1==17) || iParam1==18) || (iParam1 >=21 && iParam1 < 160)){
if((iParam1==57 || iParam1==58) || iParam1==59){
return 0;
}
if((iParam1==85 || iParam1==86) || iParam1==87){
return 0;
}
if((iParam1==105 || iParam1==106) || iParam1==107){
return 0;
}
if((iParam1==142 || iParam1==143) || iParam1==144){
return 0;
}
return 1;
}}}elseif(iParam0==13){
if((((iParam1 >=0 && iParam1 <=6) || iParam1==8) || iParam1==11) || iParam1==14){
return 1;
}elseif(iParam1 >=16 && iParam1 < 28){
if((iParam1==23 || iParam1==24) || iParam1==25){
return 0;
}
return 1;
}}elseif(iParam0==15){
if(iParam1 >=0 && iParam1 <=5){
return 1;
}}elseif(iParam0==26){
if(iParam1==10){
return 0;
}
if(iParam1 >=0 && iParam1 < 32){
return 1;
}
if(iParam1 >=12 && iParam1 <=44){
return 1;
}}elseif(iParam0==29){
if(Global_78558){
return 1;
}}
return 0;
}

int func_29(int iParam0){
switch (iParam0){
case joaat("ztype"):
return 0;
case joaat("stinger"):
return 1;
case joaat("jb700"):
return 2;
case joaat("cheetah"):
return 3;
case joaat("entityxf"):
return 4;
case joaat("adder"):
return 5;
case joaat("monroe"):
return 6;
case joaat("cogcabrio"):
return 7;
case joaat("shamal"):
return 10;
case joaat("stunt"):
return 11;
case joaat("cuban800"):
return 12;
case joaat("duster"):
return 13;
case joaat("luxor"):
return 14;
case joaat("frogger"):
return 15;
case joaat("maverick"):
return 16;
case joaat("rhino"):
return 17;
case joaat("titan"):
return 18;
case joaat("cargobob"):
return 19;
case joaat("buzzard"):
return 20;
case joaat("crusader"):
return 21;
case joaat("barracks"):
return 22;
case joaat("marquis"):
return 24;
case joaat("jetmax"):
return 25;
case joaat("squalo"):
return 27;
case joaat("tropic"):
return 29;
case joaat("seashark"):
return 30;
case joaat("submersible"):
return 31;
case joaat("suntrap"):
return 32;
case joaat("tug"):
return 258;
case joaat("bmx"):
return 33;
case joaat("scorcher"):
return 34;
case joaat("tribike"):
return 35;
case joaat("tribike2"):
return 36;
case joaat("tribike3"):
return 37;
case joaat("cruiser"):
return 38;
case joaat("schwarzer"):
return 39;
case joaat("zion"):
return 40;
case joaat("gauntlet"):
return 41;
case joaat("vigero"):
return 42;
case joaat("issi2"):
return 43;
case joaat("infernus"):
return 44;
case joaat("surano"):
return 45;
case joaat("vacca"):
return 46;
case joaat("ninef"):
return 47;
case joaat("comet2"):
return 48;
case joaat("banshee"):
return 49;
case joaat("feltzer2"):
return 50;
case joaat("bfinjection"):
return 51;
case joaat("sandking"):
return 52;
case joaat("fugitive"):
return 53;
case joaat("dilettante"):
return 54;
case joaat("superd"):
return 55;
case joaat("exemplar"):
return 56;
case joaat("baller2"):
return 57;
case joaat("cavalcade"):
return 58;
case joaat("rocoto"):
return 59;
case joaat("felon"):
return 60;
case joaat("oracle2"):
return 61;
case joaat("bati"):
return 62;
case joaat("akuma"):
return 63;
case joaat("ruffian"):
return 64;
case joaat("vader"):
return 65;
case joaat("blazer"):
return 66;
case joaat("pcj"):
return 67;
case joaat("sanchez"):
return 68;
case joaat("faggio2"):
return 69;
case joaat("airbus"):
return 82;
case joaat("annihilator"):
return 78;
case joaat("bati2"):
return 94;
case joaat("bison"):
return 89;
case joaat("bullet"):
return 70;
case joaat("bus"):
return 83;
case joaat("carbonizzare"):
return 71;
case joaat("coach"):
return 84;
case joaat("coquette"):
return 72;
case joaat("double"):
return 90;
case joaat("dump"):
return 81;
case joaat("felon2"):
return 91;
case joaat("hexer"):
return 92;
case joaat("journey"):
return 85;
case joaat("mammatus"):
return 79;
case joaat("mule"):
return 86;
case joaat("ninef2"):
return 73;
case joaat("rapidgt"):
return 74;
case joaat("rapidgt2"):
return 75;
case joaat("rentalbus"):
return 87;
case joaat("stingergt"):
return 76;
case joaat("stretch"):
return 88;
case joaat("velum"):
return 80;
case joaat("voltic"):
return 77;
case joaat("zion2"):
return 93;
case joaat("elegy2"):
return 95;
case joaat("khamelion"):
return 96;
case joaat("hotknife"):
return 97;
case joaat("carbonrs"):
return 98;
case joaat("bodhi2"):
return 103;
case joaat("dune"):
return 104;
case joaat("rebel"):
return 105;
case joaat("sadler"):
return 106;
case joaat("sanchez2"):
return 107;
case joaat("sandking2"):
return 108;
case joaat("asea"):
return 128;
case joaat("asterope"):
return 129;
case joaat("bobcatxl"):
return 130;
case joaat("cavalcade2"):
return 131;
case joaat("granger"):
return 132;
case joaat("ingot"):
return 133;
case joaat("intruder"):
return 134;
case joaat("minivan"):
return 135;
case joaat("premier"):
return 136;
case joaat("radi"):
return 137;
case joaat("rancherxl"):
return 138;
case joaat("ratloader"):
return 139;
case joaat("stanier"):
return 140;
case joaat("stratum"):
return 141;
case joaat("washington"):
return 142;
case joaat("dominator"):
return 122;
case joaat("f620"):
return 123;
case joaat("fusilade"):
return 124;
case joaat("penumbra"):
return 125;
case joaat("sentinel"):
return 126;
case joaat("sentinel2"):
return 127;
case joaat("picador"):
return 150;
case joaat("regina"):
return 151;
case joaat("surfer"):
return 152;
case joaat("youga"):
return 153;
case joaat("blazer3"):
return 154;
case joaat("rebel2"):
return 155;
case joaat("primo"):
return 156;
case joaat("buffalo"):
return 157;
case joaat("buffalo2"):
return 158;
case joaat("tailgater"):
return 159;
default:
}
if(iParam0==joaat("bifta")){
return 99;
}elseif(iParam0==joaat("kalahari")){
return 100;
}elseif(iParam0==joaat("paradise")){
return 101;
}elseif(iParam0==joaat("speeder")){
return 102;
}elseif(iParam0==joaat("ROOSEVELT") || iParam0==joaat("btype")){
return 109;
}elseif(iParam0==joaat("jester")){
return 111;
}elseif(iParam0==joaat("massacro")){
return 114;
}elseif(iParam0==joaat("turismor")){
return 112;
}elseif(iParam0==joaat("zentorno")){
return 115;
}elseif(iParam0==joaat("huntley")){
return 116;
}elseif(iParam0==joaat("alpha")){
return 110;
}elseif(iParam0==joaat("vestra")){
return 113;
}elseif(iParam0==joaat("coquette")){
return 117;
}elseif(iParam0==joaat("banshee")){
return 118;
}elseif(iParam0==joaat("stinger")){
return 119;
}elseif(iParam0==joaat("voltic")){
return 120;
}elseif(iParam0==joaat("thrust")){
return 121;
}elseif(iParam0==joaat("blade")){
return 143;
}elseif(iParam0==joaat("warrener")){
return 144;
}elseif(iParam0==joaat("glendale")){
return 145;
}elseif(iParam0==joaat("rhapsody")){
return 146;
}elseif(iParam0==joaat("panto")){
return 147;
}elseif(iParam0==joaat("dubsta3")){
return 148;
}elseif(iParam0==joaat("pigalle")){
return 149;
}elseif(iParam0==joaat("monster")){
return 160;
}elseif(iParam0==joaat("sovereign")){
return 161;
}elseif(iParam0==joaat("miljet")){
return 162;
}elseif(iParam0==joaat("besra")){
return 163;
}elseif(iParam0==joaat("swift")){
return 164;
}elseif(iParam0==joaat("coquette2")){
return 165;
}elseif(iParam0==joaat("coquette2")){
return 166;
}elseif(iParam0==joaat("innovation")){
return 167;
}elseif(iParam0==joaat("hakuchou")){
return 168;
}elseif(iParam0==joaat("furoregt")){
return 169;
}elseif(iParam0==joaat("kalahari")){
return 170;
}elseif(iParam0==joaat("valkyrie")){
return 187;
}elseif(iParam0==joaat("hydra")){
return 177;
}elseif(iParam0==joaat("savage")){
return 185;
}elseif(iParam0==joaat("enduro")){
return 174;
}elseif(iParam0==joaat("boxville4")){
return 171;
}elseif(iParam0==joaat("casco")){
return 172;
}elseif(iParam0==joaat("dinghy3")){
return 173;
}elseif(iParam0==joaat("gburrito2")){
return 175;
}elseif(iParam0==joaat("guardian")){
return 176;
}elseif(iParam0==joaat("insurgent")){
return 178;
}elseif(iParam0==joaat("mule3")){
return 183;
}elseif(iParam0==joaat("insurgent2")){
return 179;
}elseif(iParam0==joaat("lectro")){
return 182;
}elseif(iParam0==joaat("pbus")){
return 184;
}elseif(iParam0==joaat("technical")){
return 186;
}elseif(iParam0==joaat("velum2")){
return 188;
}elseif(iParam0==joaat("gresley")){
return 189;
}elseif(iParam0==joaat("jackal")){
return 190;
}elseif(iParam0==joaat("kuruma")){
return 180;
}elseif(iParam0==joaat("kuruma2")){
return 181;
}elseif(iParam0==joaat("landstalker")){
return 191;
}elseif(iParam0==joaat("mesa3")){
return 192;
}elseif(iParam0==joaat("nemesis")){
return 193;
}elseif(iParam0==joaat("oracle")){
return 194;
}elseif(iParam0==joaat("rumpo")){
return 195;
}elseif(iParam0==joaat("schafter2")){
return 196;
}elseif(iParam0==joaat("seminole")){
return 197;
}elseif(iParam0==joaat("surge")){
return 198;
}elseif(iParam0==joaat("dodo")){
return 199;
}elseif(iParam0==joaat("marshall")){
return 200;
}elseif(iParam0==joaat("submersible2")){
return 201;
}elseif(iParam0==joaat("blista2")){
return 202;
}elseif(iParam0==joaat("stalion")){
return 203;
}elseif(iParam0==joaat("dukes")){
return 204;
}elseif(iParam0==joaat("dukes2")){
return 205;
}elseif(iParam0==joaat("stalion2")){
return 206;
}elseif(iParam0==joaat("dominator2")){
return 207;
}elseif(iParam0==joaat("gauntlet2")){
return 208;
}elseif(iParam0==joaat("buffalo3")){
return 209;
}elseif(iParam0==joaat("slamvan")){
return 210;
}elseif(iParam0==joaat("ratloader2")){
return 211;
}elseif(iParam0==joaat("jester2")){
return 212;
}elseif(iParam0==joaat("massacro2")){
return 213;
}elseif(iParam0==joaat("feltzer3")){
return 214;
}elseif(iParam0==joaat("luxor2")){
return 215;
}elseif(iParam0==joaat("osiris")){
return 216;
}elseif(iParam0==joaat("swift2")){
return 217;
}elseif(iParam0==joaat("virgo")){
return 218;
}elseif(iParam0==joaat("windsor")){
return 219;
}elseif(iParam0==joaat("brawler")){
return 220;
}elseif(iParam0==joaat("chino")){
return 221;
}elseif(iParam0==joaat("coquette3")){
return 222;
}elseif(iParam0==joaat("t20")){
return 223;
}elseif(iParam0==joaat("toro")){
return 224;
}elseif(iParam0==joaat("vindicator")){
return 225;
}elseif(iParam0==joaat("primo")){
return 229;
}elseif(iParam0==joaat("moonbeam")){
return 228;
}elseif(iParam0==joaat("faction")){
return 227;
}elseif(iParam0==joaat("buccaneer")){
return 226;
}elseif(iParam0==joaat("voodoo2")){
return 230;
}elseif(iParam0==joaat("btype2")){
return 231;
}elseif(iParam0==joaat("lurcher")){
return 232;
}elseif(iParam0==joaat("minivan")){
return 135;
}elseif(iParam0==joaat("virgo3")){
return 251;
}elseif(iParam0==joaat("tornado")){
return 250;
}elseif(iParam0==joaat("sabregt")){
return 249;
}elseif(iParam0==joaat("slamvan")){
return 210;
}elseif(iParam0==joaat("faction")){
return 252;
}elseif(iParam0==joaat("baller3") || iParam0==joaat("baller5")){
return 233;
}elseif(iParam0==joaat("baller4") || iParam0==joaat("baller6")){
return 234;
}elseif(iParam0==joaat("cog55")){
return 235;
}elseif(iParam0==joaat("cognoscenti")){
return 236;
}elseif(iParam0==joaat("limo2")){
return 237;
}elseif(iParam0==joaat("mamba")){
return 238;
}elseif(iParam0==joaat("nightshade")){
return 239;
}elseif(iParam0==joaat("schafter3") || iParam0==joaat("schafter5")){
return 240;
}elseif(iParam0==joaat("schafter4") || iParam0==joaat("schafter6")){
return 241;
}elseif(iParam0==joaat("verlierer2")){
return 242;
}elseif(iParam0==joaat("supervolito")){
return 243;
}elseif(iParam0==joaat("supervolito2")){
return 244;
}elseif(iParam0==Global_75654){
return 245;
}elseif(iParam0==joaat("tampa")){
return 246;
}elseif(iParam0==joaat("sultan")){
return 247;
}elseif(iParam0==joaat("banshee")){
return 49;
}elseif(iParam0==joaat("ROOSEVELT2") || iParam0==joaat("btype3")){
return 248;
}elseif(iParam0==joaat("volatus")){
return 253;
}elseif(iParam0==joaat("cargobob2")){
return 254;
}elseif(iParam0==joaat("rumpo3")){
return 255;
}elseif(iParam0==joaat("brickade")){
return 256;
}elseif(iParam0==joaat("nimbus")){
return 257;
}elseif(iParam0==joaat("windsor2")){
return 259;
}elseif(iParam0==joaat("prototipo")){
return 260;
}elseif(iParam0==joaat("fmj")){
return 261;
}elseif(iParam0==joaat("bestiagts")){
return 262;
}elseif(iParam0==joaat("xls") || iParam0==joaat("xls2")){
return 263;
}elseif(iParam0==joaat("seven70")){
return 264;
}elseif(iParam0==joaat("pfister811")){
return 265;
}elseif(iParam0==joaat("reaper")){
return 266;
}elseif(iParam0==joaat("le7b")){
return 267;
}elseif(iParam0==joaat("omnis")){
return 268;
}elseif(iParam0==joaat("tropos")){
return 269;
}elseif(iParam0==joaat("brioso")){
return 270;
}elseif(iParam0==joaat("trophytruck")){
return 271;
}elseif(iParam0==joaat("trophytruck2")){
return 272;
}elseif(iParam0==joaat("contender")){
return 273;
}elseif(iParam0==joaat("cliffhanger")){
return 274;
}elseif(iParam0==joaat("bf400")){
return 275;
}elseif(iParam0==joaat("tyrus")){
return 279;
}elseif(iParam0==joaat("lynx")){
return 280;
}elseif(iParam0==joaat("sheava")){
return 281;
}elseif(iParam0==joaat("rallytruck")){
return 276;
}elseif(iParam0==joaat("tampa2")){
return 277;
}elseif(iParam0==joaat("gargoyle")){
return 278;
}elseif(iParam0==joaat("bagger")){
return 282;
}elseif(iParam0==joaat("esskey")){
return 283;
}elseif(iParam0==joaat("nightblade")){
return 284;
}elseif(iParam0==joaat("defiler")){
return 285;
}elseif(iParam0==joaat("avarus")){
return 286;
}elseif(iParam0==joaat("zombiea")){
return 287;
}elseif(iParam0==joaat("zombieb")){
return 288;
}elseif(iParam0==joaat("chimera")){
return 289;
}elseif(iParam0==joaat("daemon2")){
return 290;
}elseif(iParam0==joaat("ratbike")){
return 291;
}elseif(iParam0==joaat("shotaro")){
return 292;
}elseif(iParam0==joaat("raptor")){
return 293;
}elseif(iParam0==joaat("hakuchou2")){
return 294;
}elseif(iParam0==joaat("blazer4")){
return 296;
}elseif(iParam0==joaat("sanctus")){
return 297;
}elseif(iParam0==joaat("vortex")){
return 295;
}elseif(iParam0==joaat("manchez")){
return 298;
}elseif(iParam0==joaat("tornado6")){
return 299;
}elseif(iParam0==joaat("youga2")){
return 300;
}elseif(iParam0==joaat("wolfsbane")){
return 301;
}elseif(iParam0==joaat("faggio3")){
return 302;
}elseif(iParam0==joaat("faggio")){
return 303;
}elseif(iParam0==joaat("dune5")){
return 304;
}elseif(iParam0==joaat("phantom2")){
return 305;
}elseif(iParam0==joaat("technical2")){
return 306;
}elseif(iParam0==joaat("blazer5")){
return 307;
}elseif(iParam0==joaat("boxville5")){
return 308;
}elseif(iParam0==joaat("wastelander")){
return 309;
}elseif(iParam0==joaat("ruiner2")){
return 310;
}elseif(iParam0==joaat("voltic2")){
return 311;
}elseif(iParam0==joaat("penetrator")){
return 312;
}elseif(iParam0==joaat("tempesta")){
return 313;
}elseif(iParam0==joaat("italigtb")){
return 314;
}elseif(iParam0==joaat("nero")){
return 315;
}elseif(iParam0==joaat("diablous")){
return 316;
}elseif(iParam0==joaat("fcr")){
return 317;
}elseif(iParam0==joaat("specter")){
return 318;
}elseif(iParam0==joaat("gp1")){
return 319;
}elseif(iParam0==joaat("infernus2")){
return 320;
}elseif(iParam0==joaat("ruston")){
return 321;
}elseif(iParam0==joaat("turismo2")){
return 322;
}elseif(iParam0==Global_75654){
return 245;
}elseif(iParam0==Global_75656){
return 324;
}elseif(iParam0==joaat("cheetah2")){
return 325;
}elseif(iParam0==joaat("torero")){
return 326;
}elseif(iParam0==joaat("vagner")){
return 327;
}elseif(iParam0==joaat("xa21")){
return 328;
}elseif(iParam0==joaat("apc")){
return 329;
}elseif(iParam0==joaat("dune3")){
return 330;
}elseif(iParam0==joaat("halftrack")){
return 331;
}elseif(iParam0==joaat("oppressor")){
return 332;
}elseif(iParam0==joaat("tampa3")){
return 333;
}elseif(iParam0==joaat("trailersmall2")){
return 334;
}elseif(iParam0==joaat("ardent")){
return 335;
}elseif(iParam0==joaat("nightshark")){
return 336;
}elseif(iParam0==joaat("lazer")){
return 337;
}elseif(iParam0==joaat("microlight")){
return 338;
}elseif(iParam0==joaat("mogul")){
return 339;
}elseif(iParam0==joaat("rogue")){
return 340;
}elseif(iParam0==joaat("starling")){
return 341;
}elseif(iParam0==joaat("seabreeze")){
return 342;
}elseif(iParam0==joaat("tula")){
return 343;
}elseif(iParam0==joaat("pyro")){
return 344;
}elseif(iParam0==joaat("molotok")){
return 345;
}elseif(iParam0==joaat("nokota")){
return 346;
}elseif(iParam0==joaat("bombushka")){
return 347;
}elseif(iParam0==joaat("hunter")){
return 348;
}elseif(iParam0==joaat("havok")){
return 349;
}elseif(iParam0==joaat("howard")){
return 350;
}elseif(iParam0==joaat("alphaz1")){
return 351;
}elseif(iParam0==joaat("cyclone")){
return 352;
}elseif(iParam0==joaat("visione")){
return 353;
}elseif(iParam0==joaat("retinue")){
return 354;
}elseif(iParam0==joaat("rapidgt3")){
return 355;
}elseif(iParam0==joaat("vigilante")){
return 356;
}elseif(iParam0==joaat("deluxo")){
return 358;
}elseif(iParam0==joaat("stromberg")){
return 359;
}elseif(iParam0==joaat("riot2")){
return 360;
}elseif(iParam0==joaat("chernobog")){
return 361;
}elseif(iParam0==joaat("khanjali")){
return 362;
}elseif(iParam0==joaat("akula")){
return 363;
}elseif(iParam0==joaat("thruster")){
return 364;
}elseif(iParam0==joaat("barrage")){
return 365;
}elseif(iParam0==joaat("volatol")){
return 366;
}elseif(iParam0==joaat("comet4")){
return 367;
}elseif(iParam0==joaat("neon")){
return 368;
}elseif(iParam0==joaat("streiter")){
return 369;
}elseif(iParam0==joaat("sentinel3")){
return 370;
}elseif(iParam0==joaat("yosemite")){
return 371;
}elseif(iParam0==joaat("sc1")){
return 372;
}elseif(iParam0==joaat("autarch")){
return 373;
}elseif(iParam0==joaat("gt500")){
return 374;
}elseif(iParam0==joaat("hustler")){
return 375;
}elseif(iParam0==joaat("revolter")){
return 376;
}elseif(iParam0==joaat("pariah")){
return 377;
}elseif(iParam0==joaat("raiden")){
return 378;
}elseif(iParam0==joaat("savestra")){
return 379;
}elseif(iParam0==joaat("riata")){
return 380;
}elseif(iParam0==joaat("hermes")){
return 381;
}elseif(iParam0==joaat("comet5")){
return 382;
}elseif(iParam0==joaat("z190")){
return 383;
}elseif(iParam0==joaat("viseris")){
return 384;
}elseif(iParam0==joaat("kamacho")){
return 385;
}elseif(iParam0==joaat("gb200")){
return 386;
}elseif(iParam0==joaat("fagaloa")){
return 387;
}elseif(iParam0==joaat("ellie")){
return 388;
}elseif(iParam0==joaat("issi3")){
return 389;
}elseif(iParam0==joaat("michelli")){
return 390;
}elseif(iParam0==joaat("flashgt")){
return 391;
}elseif(iParam0==joaat("hotring")){
return 392;
}elseif(iParam0==joaat("tezeract")){
return 393;
}elseif(iParam0==joaat("tyrant")){
return 394;
}elseif(iParam0==joaat("dominator3")){
return 395;
}elseif(iParam0==joaat("taipan")){
return 396;
}elseif(iParam0==joaat("entity2")){
return 397;
}elseif(iParam0==joaat("jester3")){
return 398;
}elseif(iParam0==joaat("cheburek")){
return 399;
}elseif(iParam0==joaat("caracara")){
return 400;
}elseif(iParam0==joaat("seasparrow")){
return 401;
}elseif(iParam0==joaat("mule4")){
return 403;
}elseif(iParam0==joaat("pounder2")){
return 404;
}elseif(iParam0==joaat("swinger")){
return 405;
}elseif(iParam0==joaat("menacer")){
return 406;
}elseif(iParam0==joaat("scramjet")){
return 407;
}elseif(iParam0==joaat("strikeforce")){
return 408;
}elseif(iParam0==joaat("oppressor2")){
return 409;
}elseif(iParam0==joaat("patriot2")){
return 410;
}elseif(iParam0==joaat("stafford")){
return 411;
}elseif(iParam0==joaat("freecrawler")){
return 412;
}elseif(iParam0==joaat("futo")){
return 415;
}elseif(iParam0==joaat("ruiner")){
return 416;
}elseif(iParam0==joaat("romero")){
return 417;
}elseif(iParam0==joaat("prairie")){
return 418;
}elseif(iParam0==joaat("baller")){
return 419;
}elseif(iParam0==joaat("serrano")){
return 420;
}elseif(iParam0==joaat("bjxl")){
return 421;
}elseif(iParam0==joaat("habanero")){
return 422;
}elseif(iParam0==joaat("fq2")){
return 423;
}elseif(iParam0==joaat("patriot")){
return 424;
}elseif(iParam0==joaat("blimp3")){
return 413;
}elseif(iParam0==joaat("pbus2")){
return 414;
}elseif(iParam0==joaat("cerberus")){
return 425;
}elseif(iParam0==joaat("cerberus2")){
return 426;
}elseif(iParam0==joaat("cerberus3")){
return 427;
}elseif(iParam0==joaat("brutus")){
return 428;
}elseif(iParam0==joaat("brutus2")){
return 429;
}elseif(iParam0==joaat("brutus3")){
return 430;
}elseif(iParam0==joaat("scarab")){
return 431;
}elseif(iParam0==joaat("scarab2")){
return 432;
}elseif(iParam0==joaat("scarab3")){
return 433;
}elseif(iParam0==joaat("imperator")){
return 434;
}elseif(iParam0==joaat("imperator2")){
return 435;
}elseif(iParam0==joaat("imperator3")){
return 436;
}elseif(iParam0==joaat("zr380")){
return 437;
}elseif(iParam0==joaat("zr3802")){
return 438;
}elseif(iParam0==joaat("zr3803")){
return 439;
}elseif(iParam0==joaat("impaler")){
return 440;
}elseif(iParam0==joaat("taxi")){
return 450;
}elseif(iParam0==joaat("bulldozer")){
return 451;
}elseif(iParam0==joaat("speedo2")){
return 452;
}elseif(iParam0==joaat("trash2")){
return 453;
}elseif(iParam0==joaat("barracks2")){
return 454;
}elseif(iParam0==joaat("mixer")){
return 455;
}elseif(iParam0==joaat("dune2")){
return 456;
}elseif(iParam0==joaat("tractor")){
return 457;
}elseif(iParam0==joaat("blista3")){
return 458;
}elseif(iParam0==joaat("vamos")){
return 441;
}elseif(iParam0==joaat("tulip")){
return 442;
}elseif(iParam0==joaat("deveste")){
return 443;
}elseif(iParam0==joaat("schlagen")){
return 444;
}elseif(iParam0==joaat("toros")){
return 445;
}elseif(iParam0==joaat("deviant")){
return 446;
}elseif(iParam0==joaat("clique")){
return 447;
}elseif(iParam0==joaat("italigto")){
return 448;
}elseif(iParam0==joaat("rcbandito")){
return 449;
}elseif(iParam0==joaat("thrax")){
return 459;
}elseif(iParam0==joaat("drafter")){
return 460;
}elseif(iParam0==joaat("locust")){
return 461;
}elseif(iParam0==joaat("novak")){
return 462;
}elseif(iParam0==joaat("zorrusso")){
return 463;
}elseif(iParam0==joaat("gauntlet3")){
return 464;
}elseif(iParam0==joaat("issi7")){
return 465;
}elseif(iParam0==joaat("zion3")){
return 466;
}elseif(iParam0==joaat("nebula")){
return 467;
}elseif(iParam0==joaat("hellion")){
return 468;
}elseif(iParam0==joaat("dynasty")){
return 469;
}elseif(iParam0==joaat("rrocket")){
return 470;
}elseif(iParam0==joaat("peyote2")){
return 471;
}elseif(iParam0==joaat("gauntlet4")){
return 472;
}elseif(iParam0==joaat("caracara2")){
return 473;
}elseif(iParam0==joaat("jugular")){
return 474;
}elseif(iParam0==joaat("s80")){
return 475;
}elseif(iParam0==joaat("krieger")){
return 476;
}elseif(iParam0==joaat("emerus")){
return 477;
}elseif(iParam0==joaat("neo")){
return 478;
}elseif(iParam0==joaat("paragon")){
return 479;
}elseif(iParam0==joaat("firetruk")){
return 480;
}elseif(iParam0==joaat("burrito2")){
return 481;
}elseif(iParam0==joaat("boxville")){
return 482;
}elseif(iParam0==joaat("stockade")){
return 483;
}elseif(iParam0==joaat("lguard")){
return 484;
}elseif(iParam0==joaat("blazer2")){
return 485;
}elseif(iParam0==joaat("jb7002")){
return 488;
}elseif(iParam0==joaat("zhaba")){
return 486;
}elseif(iParam0==joaat("minitank")){
return 487;
}elseif(iParam0==joaat("stryder")){
return 489;
}elseif(iParam0==joaat("vstr")){
return 490;
}elseif(iParam0==joaat("formula")){
return 491;
}elseif(iParam0==joaat("imorgon")){
return 492;
}elseif(iParam0==joaat("formula2")){
return 493;
}elseif(iParam0==joaat("furia")){
return 494;
}elseif(iParam0==joaat("rebla")){
return 495;
}elseif(iParam0==joaat("vagrant")){
return 496;
}elseif(iParam0==joaat("retinue2")){
return 497;
}elseif(iParam0==joaat("yosemite2")){
return 498;
}elseif(iParam0==joaat("komoda")){
return 499;
}elseif(iParam0==joaat("sultan2")){
return 500;
}elseif(iParam0==joaat("sugoi")){
return 501;
}elseif(iParam0==joaat("everon")){
return 502;
}elseif(iParam0==joaat("asbo")){
return 503;
}elseif(iParam0==joaat("kanjo")){
return 504;
}elseif(iParam0==joaat("outlaw")){
return 505;
}elseif(iParam0==joaat("club")){
return 506;
}elseif(iParam0==joaat("dukes3")){
return 507;
}elseif(iParam0==joaat("yosemite3")){
return 508;
}elseif(iParam0==joaat("penumbra2")){
return 509;
}elseif(iParam0==joaat("landstalker2")){
return 510;
}elseif(iParam0==joaat("seminole2")){
return 511;
}elseif(iParam0==joaat("tigon")){
return 512;
}elseif(iParam0==joaat("openwheel1")){
return 513;
}elseif(iParam0==joaat("openwheel2")){
return 514;
}elseif(iParam0==joaat("coquette4")){
return 515;
}elseif(iParam0==joaat("peyote")){
return 517;
}elseif(iParam0==joaat("manana")){
return 516;
}elseif(iParam0==func_30()){
return 518;
}elseif(iParam0==joaat("italirsx")){
return 519;
}elseif(iParam0==joaat("slamtruck")){
return 520;
}elseif(iParam0==joaat("brioso2")){
return 521;
}elseif(iParam0==joaat("weevil")){
return 522;
}elseif(iParam0==joaat("alkonost")){
return 523;
}elseif(iParam0==joaat("annihilator2")){
return 524;
}elseif(iParam0==joaat("dinghy5")){
return 525;
}elseif(iParam0==joaat("manchez2")){
return 526;
}elseif(iParam0==joaat("patrolboat")){
return 527;
}elseif(iParam0==joaat("squaddie")){
return 528;
}elseif(iParam0==joaat("toreador")){
return 529;
}elseif(iParam0==joaat("verus")){
return 530;
}elseif(iParam0==joaat("vetir")){
return 531;
}elseif(iParam0==joaat("winky")){
return 532;
}elseif(iParam0==joaat("longfin")){
return 533;
}elseif(iParam0==joaat("veto")){
return 534;
}elseif(iParam0==joaat("veto2")){
return 535;
}elseif(iParam0==joaat("calico")){
return 536;
}elseif(iParam0==joaat("comet6")){
return 537;
}elseif(iParam0==joaat("cypher")){
return 538;
}elseif(iParam0==joaat("dominator7")){
return 539;
}elseif(iParam0==joaat("jester4")){
return 540;
}elseif(iParam0==joaat("remus")){
return 541;
}elseif(iParam0==joaat("vectre")){
return 542;
}elseif(iParam0==joaat("zr350")){
return 543;
}elseif(iParam0==joaat("warrener2")){
return 544;
}elseif(iParam0==joaat("rt3000")){
return 545;
}elseif(iParam0==joaat("futo2")){
return 546;
}elseif(iParam0==joaat("sultan3")){
return 547;
}elseif(iParam0==joaat("tailgater2")){
return 548;
}elseif(iParam0==joaat("dominator8")){
return 549;
}elseif(iParam0==joaat("euros")){
return 550;
}elseif(iParam0==joaat("growler")){
return 551;
}elseif(iParam0==joaat("previon")){
return 552;
}elseif(iParam0==joaat("comet7")){
return 554;
}elseif(iParam0==joaat("shinobi")){
return 555;
}elseif(iParam0==joaat("reever")){
return 556;
}elseif(iParam0==joaat("baller7")){
return 557;
}elseif(iParam0==joaat("cinquemila")){
return 558;
}elseif(iParam0==joaat("jubilee")){
return 559;
}elseif(iParam0==joaat("astron")){
return 560;
}elseif(iParam0==joaat("deity")){
return 561;
}elseif(iParam0==joaat("zeno")){
return 562;
}elseif(iParam0==joaat("champion")){
return 563;
}elseif(iParam0==joaat("ignus")){
return 564;
}elseif(iParam0==joaat("buffalo4")){
return 565;
}elseif(iParam0==joaat("granger2")){
return 566;
}elseif(iParam0==joaat("iwagen")){
return 567;
}elseif(iParam0==joaat("patriot3")){
return 568;
}elseif(iParam0==joaat("tenf")){
return 569;
}elseif(iParam0==joaat("brickade2")){
return 583;
}elseif(iParam0==joaat("manchez3")){
return 584;
}elseif(iParam0==joaat("journey2")){
return 589;
}elseif(iParam0==joaat("panthere")){
return 585;
}elseif(iParam0==joaat("tahoma")){
return 586;
}elseif(iParam0==joaat("tulip2")){
return 587;
}elseif(iParam0==joaat("everon2")){
return 588;
}elseif(iParam0==joaat("eudora")){
return 598;
}elseif(iParam0==joaat("broadway")){
return 597;
}elseif(iParam0==joaat("issi8")){
return 593;
}elseif(iParam0==joaat("boor")){
return 596;
}elseif(iParam0==joaat("powersurge")){
return 595;
}elseif(iParam0==joaat("virtue")){
return 591;
}elseif(iParam0==joaat("r300")){
return 592;
}elseif(iParam0==joaat("entity3")){
return 594;
}elseif(iParam0==joaat("surfer3")){
return 590;
}
return -1;
}

int func_30(){
return joaat("kosatka");
}

int func_31(int iParam0, int iParam1){
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


char* func_32(int iParam0, bool bParam1){
if(VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0)){
return func_34(iParam0, bParam1);
}
if(VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)){
return func_33(iParam0, bParam1);
}
switch (iParam0){
case joaat("khamelion"):
return "HIJAK";
break;
case joaat("issi2"):
case joaat("issi7"):
return "WEENY";
break;
case joaat("elegy2"):
case joaat("hellion"):
return "ANNIS";
break;
case joaat("romero"):
return "CHARIOT";
break;
case joaat("baller"):
case joaat("baller2"):
case joaat("baller3"):
case joaat("baller4"):
case joaat("baller5"):
case joaat("baller6"):
if(bParam1){
return "GALLIVAN";
}else{
return "GALIVANTER";
}
break;
case joaat("surfer"):
case joaat("surfer2"):
case joaat("dune"):
case joaat("bfinjection"):
return "BF";
break;
case joaat("feltzer2"):
case joaat("dubsta"):
case joaat("surano"):
case joaat("schwarzer"):
case joaat("schafter2"):
case joaat("serrano"):
case joaat("dubsta2"):
case joaat("feltzer3"):
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}
break;
case joaat("sentinel"):
case joaat("sentinel2"):
case joaat("zion"):
case joaat("zion2"):
case joaat("zion3"):
case joaat("oracle"):
case joaat("oracle2"):
if(bParam1){
return "UBERMACH";
}else{
return "UBERMACHT";
}
break;
case joaat("ztype"):
case joaat("adder"):
case joaat("thrax"):
return "TRUFFADE";
break;
case joaat("jb700"):
case joaat("rapidgt"):
case joaat("rapidgt2"):
case joaat("exemplar"):
case joaat("massacro"):
case joaat("massacro2"):
if(bParam1){
return "DEWBAUCH";
}else{
return "DEWBAUCHEE";
}
break;
case joaat("tailgater"):
case joaat("ninef"):
case joaat("ninef2"):
case joaat("rocoto"):
case joaat("drafter"):
return "OBEY";
break;
case joaat("picador"):
case joaat("surge"):
case joaat("fugitive"):
case joaat("marshall"):
return "CHEVAL";
break;
case joaat("mower"):
if(bParam1){
return "JACKSHP";
}else{
return "JACKSHEEPE";
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
case joaat("burrito"):
case joaat("burrito2"):
case joaat("premier"):
case joaat("voodoo2"):
case joaat("sabregt"):
case joaat("rancherxl"):
case joaat("vigero"):
case joaat("asea"):
case joaat("asea2"):
case joaat("granger"):
case joaat("pranger"):
case joaat("sheriff"):
case joaat("sheriff2"):
case joaat("gburrito"):
case joaat("gburrito2"):
case joaat("stalion"):
return "DECLASSE";
break;
case joaat("buccaneer"):
case joaat("cavalcade"):
case joaat("cavalcade2"):
case joaat("emperor"):
case joaat("emperor2"):
case joaat("manana"):
case joaat("primo"):
case joaat("washington"):
case joaat("virgo"):
return "ALBANY";
break;
case joaat("banshee"):
case joaat("bison"):
case joaat("gresley"):
case joaat("youga"):
case joaat("gauntlet"):
case joaat("buffalo"):
case joaat("buffalo2"):
case joaat("ratloader"):
case joaat("dloader"):
case joaat("ratloader2"):
case joaat("rumpo"):
case joaat("banshee2"):
case joaat("gauntlet3"):
return "BRAVADO";
break;
case joaat("stinger"):
case joaat("stingergt"):
case joaat("cheetah"):
case joaat("carbonizzare"):
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}
break;
case joaat("coquette"):
case joaat("coquette3"):
if(bParam1){
return "INVERTO";
}else{
return "Invetero";
}
break;
case joaat("radi"):
case joaat("sadler"):
case joaat("dominator"):
case joaat("sandking"):
case joaat("sandking2"):
case joaat("police"):
case joaat("police3"):
case joaat("policet"):
case joaat("benson"):
case joaat("bullet"):
case joaat("minivan"):
case joaat("speedo"):
case joaat("speedo2"):
case joaat("peyote"):
case joaat("towtruck"):
case joaat("towtruck2"):
case joaat("bobcatxl"):
case joaat("stanier"):
case joaat("hotknife"):
case joaat("slamvan"):
case joaat("guardian"):
case joaat("chino"):
case joaat("caracara2"):
return "VAPID";
break;
case joaat("tiptruck"):
case joaat("taco"):
case joaat("utillitruck"):
case joaat("utillitruck2"):
case joaat("utillitruck3"):
case joaat("camper"):
case joaat("riot"):
case joaat("tourbus"):
case joaat("ambulance"):
case joaat("stockade"):
case joaat("boxville"):
case joaat("pony"):
return "BRUTE";
break;
case joaat("prairie"):
return "BOLLOKAN";
break;
case joaat("jackal"):
case joaat("f620"):
case joaat("locust"):
return "OCELOT";
break;
case joaat("mesa"):
case joaat("mesa3"):
case joaat("bodhi2"):
case joaat("seminole"):
case joaat("crusader"):
return "CANIS";
break;
case joaat("entityxf"):
return "OVERFLOD";
break;
case joaat("monroe"):
case joaat("infernus"):
case joaat("bati"):
case joaat("bati2"):
case joaat("vacca"):
case joaat("ruffian"):
case joaat("faggio2"):
case joaat("osiris"):
case joaat("zorrusso"):
return "PEGASSI";
break;
case joaat("phoenix"):
case joaat("ruiner"):
case joaat("dukes"):
case joaat("dukes2"):
return "IMPONTE";
break;
case joaat("bjxl"):
case joaat("rebel"):
case joaat("rebel2"):
case joaat("asterope"):
case joaat("intruder"):
case joaat("futo"):
case joaat("sultan"):
case joaat("dilettante"):
case joaat("dilettante2"):
case joaat("kuruma"):
case joaat("kuruma2"):
case joaat("sultanrs"):
return "KARIN";
break;
case joaat("penumbra"):
case joaat("sanchez"):
case joaat("sanchez2"):
case joaat("mule"):
return "MAIBATSU";
break;
case joaat("blista"):
case joaat("blista2"):
case joaat("blista3"):
case joaat("double"):
case joaat("jester"):
case joaat("jester2"):
case joaat("enduro"):
case joaat("vindicator"):
case joaat("akuma"):
return "DINKA";
break;
case joaat("fq2"):
return "FATHOM";
break;
case joaat("voltic"):
case joaat("brawler"):
return "COIL";
break;
}
switch (iParam0){
case joaat("felon"):
case joaat("felon2"):
case joaat("casco"):
case joaat("novak"):
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}
break;
case joaat("comet2"):
return "PFISTER";
break;
case joaat("fusilade"):
return "SCHYSTER";
break;
case joaat("stretch"):
case joaat("regina"):
case joaat("landstalker"):
if(bParam1){
return "DUNDREAR";
}else{
return "DUNDREARY";
}
break;
case joaat("handler"):
case joaat("bulldozer"):
case joaat("docktug"):
case joaat("cutter"):
case joaat("mixer"):
case joaat("mixer2"):
case joaat("barracks"):
case joaat("barracks2"):
case joaat("biff"):
case joaat("forklift"):
case joaat("ripley"):
case joaat("airtug"):
case joaat("dump"):
case joaat("insurgent2"):
case joaat("insurgent"):
return "HVY";
break;
case joaat("packer"):
case joaat("flatbed"):
case joaat("tiptruck2"):
case joaat("pounder"):
case joaat("firetruk"):
return "MTL";
break;
case joaat("tractor"):
case joaat("tractor2"):
return "STANLEY";
break;
case joaat("hauler"):
case joaat("phantom"):
case joaat("trash"):
return "JOBUILT";
break;
case joaat("patriot"):
return "MAMMOTH";
break;
case joaat("journey"):
case joaat("stratum"):
if(bParam1){
return "ZIRCONIU";
}else{
return "ZIRCONIUM";
}
break;
case joaat("vader"):
case joaat("pcj"):
return "SHITZU";
break;
case joaat("bagger"):
case joaat("daemon"):
case joaat("sovereign"):
if(bParam1){
return "WESTERN";
}else{
return "WESTERNMOTORCYCLE";
}
break;
case joaat("blazer"):
case joaat("caddy"):
case joaat("carbonrs"):
case joaat("blazer3"):
case joaat("blazer2"):
return "NAGASAKI";
break;
case joaat("nemesis"):
case joaat("lectro"):
if(bParam1){
return "PRINCIPL";
}else{
return "PRINCIPE";
}
break;
case joaat("hexer"):
return "LCC";
break;
case joaat("bmx"):
case joaat("cruiser"):
case joaat("scorcher"):
if(!bParam1){
return "Ped";
}
break;
case joaat("tribike"):
case joaat("tribike2"):
case joaat("tribike3"):
if(!bParam1){
return "TriCycles";
}
break;
case joaat("cogcabrio"):
case joaat("superd"):
case joaat("windsor"):
return "ENUS";
break;
case joaat("habanero"):
if(bParam1){
return "EMPEROR";
}else{
return "EMPORER";
}
break;
case joaat("ingot"):
case joaat("nebula"):
return "VULCAR";
break;
case joaat("t20"):
return "PROGEN";
break;
}
if(iParam0==joaat("bifta")){
return "BF";
}elseif(iParam0==joaat("kalahari")){
return "CANIS";
}elseif(iParam0==joaat("paradise")){
return "BRAVADO";
}
if(iParam0==joaat("btype")){
return "ALBANY";
}
if(iParam0==joaat("zentorno")){
return "PEGASSI";
}elseif(iParam0==joaat("jester")){
return "DINKA";
}elseif(iParam0==joaat("massacro")){
if(bParam1){
return "DEWBAUCH";
}else{
return "DEWBAUCHEE";
}}elseif(iParam0==joaat("turismor")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}elseif(iParam0==joaat("huntley")){
return "ENUS";
}elseif(iParam0==joaat("alpha")){
return "ALBANY";
}elseif(iParam0==joaat("thrust")){
return "DINKA";
}elseif(iParam0==joaat("sovereign")){
return "DINKA";
}
if(iParam0==joaat("thrust")){
return "DINKA";
}
if(iParam0==joaat("blade") || iParam0==joaat("monster")){
return "VAPID";
}
if(iParam0==joaat("warrener")){
return "VULCAR";
}
if((iParam0==joaat("glendale") || iParam0==joaat("panto")) || iParam0==joaat("dubsta3")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if(iParam0==joaat("rhapsody")){
return "DECLASSE";
}
if(iParam0==joaat("pigalle")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("coquette2")){
if(bParam1){
return "INVERTO";
}else{
return "Invetero";
}}
if(iParam0==joaat("innovation")){
return "LCC";
}
if(iParam0==joaat("hakuchou")){
return "SHITZU";
}
if(iParam0==joaat("furoregt")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("ratloader2")){
return "BRAVADO";
}elseif(iParam0==joaat("slamvan")){
return "VAPID";
}elseif(iParam0==joaat("jester2")){
return "DINKA";
}elseif(iParam0==joaat("massacro2")){
if(bParam1){
return "DEWBAUCH";
}else{
return "DEWBAUCHEE";
}}
if(iParam0==joaat("windsor")){
return "ENUS";
}elseif(iParam0==joaat("chino") || iParam0==joaat("chino2")){
return "VAPID";
}elseif(iParam0==joaat("vindicator")){
return "DINKA";
}elseif(iParam0==joaat("virgo")){
return "ALBANY";
}elseif(iParam0==joaat("swift2") || iParam0==joaat("luxor2")){
return "BUCKING";
}elseif(iParam0==joaat("feltzer3")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}elseif(iParam0==joaat("t20")){
return "PROGEN";
}elseif(iParam0==joaat("osiris")){
return "PEGASSI";
}elseif(iParam0==joaat("coquette3")){
if(bParam1){
return "INVERTO";
}else{
return "Invetero";
}}elseif(iParam0==joaat("toro")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}elseif(iParam0==joaat("brawler")){
return "COIL";
}
if(iParam0==joaat("primo2") || iParam0==joaat("buccaneer2")){
return "ALBANY";
}elseif(iParam0==joaat("faction") || iParam0==joaat("faction2")){
return "WILLARD";
}elseif((iParam0==joaat("moonbeam2") || iParam0==joaat("voodoo")) || iParam0==joaat("moonbeam")){
return "DECLASSE";
}elseif(iParam0==joaat("chino2") || iParam0==joaat("dukes2")){
return "VAPID";
}
if(iParam0==joaat("faction3")){
return "WILLARD";
}
if((iParam0==joaat("sabregt2") || iParam0==joaat("tornado5")) || iParam0==joaat("virgo")){
return "DECLASSE";
}
if(iParam0==joaat("virgo2") || iParam0==joaat("virgo3")){
if(bParam1){
return "DUNDREAR";
}else{
return "DUNDREARY";
}}
if(iParam0==joaat("slamvan3") || iParam0==joaat("minivan2")){
return "VAPID";
}
if(iParam0==joaat("lurcher") || iParam0==joaat("btype2")){
return "ALBANY";
}
if(iParam0==joaat("mamba") || iParam0==joaat("tampa")){
return "DECLASSE";
}
if(((iParam0==joaat("cognoscenti") || iParam0==joaat("cog55")) || iParam0==joaat("cog552")) || iParam0==joaat("cognoscenti2")){
return "ENUS";
}
if(iParam0==joaat("verlierer2")){
return "BRAVADO";
}
if(((iParam0==joaat("schafter4") || iParam0==joaat("schafter3")) || iParam0==joaat("schafter5")) || iParam0==joaat("schafter6")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if(((iParam0==joaat("baller3") || iParam0==joaat("baller4")) || iParam0==joaat("baller5")) || iParam0==joaat("baller6")){
if(bParam1){
return "GALLIVAN";
}else{
return "GALIVANTER";
}}
if(iParam0==joaat("nightshade")){
return "IMPONTE";
}
if(iParam0==joaat("btype3")){
return "ALBANY";
}
if(iParam0==joaat("pfister811")){
return "PFISTER";
}
if(iParam0==joaat("seven70")){
if(bParam1){
return "DEWBAUCH";
}else{
return "DEWBAUCHEE";
}}
if(iParam0==joaat("rumpo3")){
return "BRAVADO";
}
if(iParam0==joaat("bestiagts")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if(iParam0==joaat("prototipo")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if(iParam0==joaat("xls") || iParam0==joaat("xls2")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if(iParam0==joaat("fmj")){
return "VAPID";
}
if(iParam0==joaat("windsor2")){
return "ENUS";
}
if(iParam0==joaat("reaper")){
return "PEGASSI";
}
if(((iParam0==joaat("contender") || iParam0==joaat("trophytruck")) || iParam0==joaat("trophytruck2")) || iParam0==joaat("dominator2")){
return "VAPID";
}
if(iParam0==joaat("bf400")){
return "NAGASAKI";
}
if(iParam0==joaat("cliffhanger") || iParam0==joaat("gargoyle")){
if(bParam1){
return "WESTERN";
}else{
return "WESTERNMOTORCYCLE";
}}
if(iParam0==joaat("buffalo3") || iParam0==joaat("gauntlet2")){
return "BRAVADO";
}
if(iParam0==joaat("omnis")){
return "OBEY";
}
if(iParam0==joaat("le7b")){
return "ANNIS";
}
if(iParam0==joaat("tropos")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("tampa2") || iParam0==joaat("stalion2")){
return "DECLASSE";
}
if(iParam0==joaat("brioso")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if(iParam0==joaat("tyrus")){
return "PROGEN";
}
if(iParam0==joaat("lynx")){
return "OCELOT";
}
if(iParam0==joaat("sheava")){
if(bParam1){
return "EMPEROR";
}else{
return "EMPORER";
}}
if(iParam0==joaat("rallytruck")){
return "MTL";
}
if(iParam0==joaat("tornado6")){
return "DECLASSE";
}
if(iParam0==joaat("avarus") || iParam0==joaat("sanctus")){
return "LCC";
}
if((iParam0==joaat("chimera") || iParam0==joaat("shotaro")) || iParam0==joaat("blazer4")){
return "NAGASAKI";
}
if(iParam0==joaat("defiler") || iParam0==joaat("hakuchou2")){
return "SHITZU";
}
if(((((iParam0==joaat("nightblade") || iParam0==joaat("zombiea")) || iParam0==joaat("zombieb")) || iParam0==joaat("daemon2")) || iParam0==joaat("ratbike")) || iParam0==joaat("wolfsbane")){
if(bParam1){
return "WESTERN";
}else{
return "WESTERNMOTORCYCLE";
}}
if(iParam0==joaat("youga2")){
return "BRAVADO";
}
if(((iParam0==joaat("esskey") || iParam0==joaat("vortex")) || iParam0==joaat("faggio3")) || iParam0==joaat("faggio")){
return "PEGASSI";
}
if(iParam0==joaat("raptor")){
return "BF";
}
if(iParam0==joaat("manchez")){
return "MAIBATSU";
}
if(iParam0==joaat("blazer5")){
return "NAGASAKI";
}
if(iParam0==joaat("comet3")){
return "PFISTER";
}
if(iParam0==joaat("diablous") || iParam0==joaat("diablous2")){
if(bParam1){
return "PRINCIPL";
}else{
return "PRINCIPE";
}}
if((iParam0==joaat("fcr") || iParam0==joaat("fcr2")) || iParam0==joaat("tempesta")){
return "PEGASSI";
}
if(iParam0==joaat("nero") || iParam0==joaat("nero2")){
return "TRUFFADE";
}
if(iParam0==joaat("penetrator")){
return "OCELOT";
}
if(iParam0==joaat("ruiner2")){
return "IMPONTE";
}
if(iParam0==joaat("technical2")){
return "KARIN";
}
if(iParam0==joaat("phantom2")){
return "JOBUILT";
}
if(iParam0==joaat("voltic2")){
return "COIL";
}
if(iParam0==joaat("wastelander")){
return "MTL";
}
if(iParam0==joaat("italigtb") || iParam0==joaat("italigtb2")){
return "PROGEN";
}
if(iParam0==joaat("dune5") || iParam0==joaat("dune4")){
return "BF";
}
if(iParam0==joaat("elegy") || iParam0==joaat("elegy2")){
return "ANNIS";
}
if(iParam0==joaat("specter") || iParam0==joaat("specter2")){
if(bParam1){
return "DEWBAUCH";
}else{
return "DEWBAUCHEE";
}}
if(iParam0==joaat("gp1")){
return "PROGEN";
}
if(iParam0==joaat("infernus2")){
return "PEGASSI";
}
if(iParam0==joaat("ruston")){
return "HIJAK";
}
if(iParam0==joaat("turismo2")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if(iParam0==joaat("dukes2")){
return "IMPONTE";
}
if(iParam0==joaat("ardent") || iParam0==joaat("xa21")){
return "OCELOT";
}
if(iParam0==joaat("cheetah2")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if((iParam0==joaat("insurgent3") || iParam0==joaat("nightshark")) || iParam0==joaat("apc")){
return "HVY";
}
if(iParam0==joaat("technical3")){
return "KARIN";
}
if(iParam0==joaat("halftrack") || iParam0==joaat("bison3")){
return "BRAVADO";
}
if(iParam0==joaat("torero") || iParam0==joaat("oppressor")){
return "PEGASSI";
}
if(iParam0==joaat("dune3")){
return "BF";
}
if(iParam0==joaat("tampa3")){
return "DECLASSE";
}
if(iParam0==joaat("vagner") || iParam0==joaat("rapidgt3")){
if(bParam1){
return "DEWBAUCH";
}else{
return "DEWBAUCHEE";
}}
if(iParam0==joaat("cyclone")){
return "COIL";
}
if((iParam0==joaat("retinue") || iParam0==joaat("hustler")) || iParam0==joaat("riata")){
return "VAPID";
}
if(iParam0==joaat("visione") || iParam0==joaat("vigilante")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if(iParam0==joaat("z190")){
return "KARIN";
}
if(iParam0==joaat("avenger") || iParam0==joaat("thruster")){
return "MAMMOTH";
}
if(iParam0==joaat("deluxo")){
return "IMPONTE";
}
if(iParam0==joaat("stromberg") || iParam0==joaat("pariah")){
return "OCELOT";
}
if(iParam0==joaat("hermes")){
return "ALBANY";
}
if((iParam0==joaat("sentinel3") || iParam0==joaat("sc1")) || iParam0==joaat("revolter")){
if(bParam1){
return "UBERMACH";
}else{
return "UBERMACHT";
}}
if(iParam0==joaat("savestra")){
return "ANNIS";
}
if(iParam0==joaat("yosemite")){
return "DECLASSE";
}
if(iParam0==joaat("raiden")){
return "COIL";
}
if((iParam0==joaat("neon") || iParam0==joaat("comet4")) || iParam0==joaat("comet5")){
return "PFISTER";
}
if(iParam0==joaat("streiter")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if(iParam0==joaat("kamacho")){
return "CANIS";
}
if(iParam0==joaat("gt500")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if(iParam0==joaat("viseris")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("barrage")){
return "HVY";
}
if((iParam0==joaat("autarch") || iParam0==joaat("tyrant")) || iParam0==joaat("entity2")){
return "OVERFLOD";
}
if(iParam0==joaat("issi3")){
return "WEENY";
}
if((((iParam0==joaat("gb200") || iParam0==joaat("ellie")) || iParam0==joaat("flashgt")) || iParam0==joaat("caracara")) || iParam0==joaat("dominator3")){
return "VAPID";
}
if(iParam0==joaat("fagaloa")){
return "VULCAR";
}
if(iParam0==joaat("michelli")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("hotring")){
return "DECLASSE";
}
if(iParam0==joaat("tezeract")){
return "PEGASSI";
}
if(iParam0==joaat("jester3")){
return "DINKA";
}
if(iParam0==joaat("taipan")){
return "CHEVAL";
}
if(iParam0==joaat("cheburek")){
return "RUNE";
}
if(iParam0==joaat("swinger")){
return "OCELOT";
}
if(iParam0==joaat("freecrawler")){
return "CANIS";
}
if(iParam0==joaat("mule4")){
return "MAIBATSU";
}
if(iParam0==joaat("pounder2")){
return "MTL";
}
if(iParam0==joaat("speedo4")){
return "VAPID";
}
if(iParam0==joaat("patriot2")){
return "MAMMOTH";
}
if(iParam0==joaat("oppressor2")){
return "PEGASSI";
}
if(iParam0==joaat("stafford")){
return "ENUS";
}
if(iParam0==joaat("menacer")){
return "HVY";
}
if(iParam0==joaat("scramjet")){
return "DECLASSE";
}
if((iParam0==joaat("monster3") || iParam0==joaat("monster4")) || iParam0==joaat("monster5")){
return "BRAVADO";
}
if((iParam0==joaat("scarab") || iParam0==joaat("scarab2")) || iParam0==joaat("scarab3")){
return "HVY";
}
if((iParam0==joaat("issi4") || iParam0==joaat("issi5")) || iParam0==joaat("issi6")){
return "WEENY";
}
if(iParam0==joaat("toros")){
return "PEGASSI";
}
if((((((((((iParam0==joaat("clique") || iParam0==joaat("imperator")) || iParam0==joaat("imperator2")) || iParam0==joaat("imperator3")) || iParam0==joaat("dominator4")) || iParam0==joaat("dominator5")) || iParam0==joaat("dominator6")) || iParam0==joaat("slamvan4")) || iParam0==joaat("slamvan5")) || iParam0==joaat("slamvan6")) || iParam0==joaat("slamvan2")){
return "VAPID";
}
if(iParam0==joaat("deveste")){
if(bParam1){
return "PRINCIPL";
}else{
return "PRINCIPE";
}}
if((((((((iParam0==joaat("impaler") || iParam0==joaat("impaler2")) || iParam0==joaat("impaler3")) || iParam0==joaat("impaler4")) || iParam0==joaat("vamos")) || iParam0==joaat("tulip")) || iParam0==joaat("brutus")) || iParam0==joaat("brutus2")) || iParam0==joaat("brutus3")){
return "DECLASSE";
}
if(iParam0==joaat("deviant")){
return "SCHYSTER";
}
if(iParam0==joaat("schlagen")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if(iParam0==joaat("italigto")){
if(bParam1){
return "GROTTI";
}else{
return "Grotti_2";
}}
if((iParam0==joaat("cerberus") || iParam0==joaat("cerberus2")) || iParam0==joaat("cerberus3")){
return "MTL";
}
if((iParam0==joaat("deathbike") || iParam0==joaat("deathbike2")) || iParam0==joaat("deathbike3")){
if(bParam1){
return "WESTERN";
}else{
return "WESTERNMOTORCYCLE";
}}
if((iParam0==joaat("bruiser") || iParam0==joaat("bruiser2")) || iParam0==joaat("bruiser3")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if((iParam0==joaat("zr380") || iParam0==joaat("zr3802")) || iParam0==joaat("zr3803")){
return "ANNIS";
}
if(iParam0==joaat("caracara2") || iParam0==joaat("peyote2")){
return "VAPID";
}
if(iParam0==joaat("drafter")){
return "OBEY";
}
if(iParam0==joaat("dynasty") || iParam0==joaat("issi7")){
return "WEENY";
}
if(iParam0==joaat("gauntlet3") || iParam0==joaat("gauntlet4")){
return "BRAVADO";
}
if(iParam0==joaat("hellion") || iParam0==joaat("s80")){
return "ANNIS";
}
if(iParam0==joaat("krieger")){
if(bParam1){
return "BENEFAC";
}else{
return "BENEFACTOR";
}}
if(iParam0==joaat("locust") || iParam0==joaat("jugular")){
return "OCELOT";
}
if(iParam0==joaat("nebula")){
return "VULCAR";
}
if(iParam0==joaat("novak")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("paragon") || iParam0==joaat("paragon2")){
return "ENUS";
}
if(iParam0==joaat("thrax")){
return "TRUFFADE";
}
if(iParam0==joaat("zion3")){
if(bParam1){
return "UBERMACH";
}else{
return "UBERMACHT";
}}
if(iParam0==joaat("emerus")){
return "PROGEN";
}
if(iParam0==joaat("neo")){
return "VYSSER";
}
if(iParam0==joaat("rrocket")){
if(bParam1){
return "WESTERN";
}else{
return "WESTERNMOTORCYCLE";
}}
if(iParam0==joaat("burrito") || iParam0==joaat("burrito2")){
return "DECLASSE";
}
if(iParam0==joaat("formula")){
return "PROGEN";
}
if(iParam0==joaat("everon")){
return "KARIN";
}
if(iParam0==joaat("imorgon")){
return "OVERFLOD";
}
if(iParam0==joaat("kanjo")){
return "DINKA";
}
if(iParam0==joaat("komoda")){
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}}
if(iParam0==joaat("rebla")){
if(bParam1){
return "UBERMACH";
}else{
return "UBERMACHT";
}}
if(iParam0==joaat("sugoi")){
return "DINKA";
}
if(iParam0==joaat("sultan2")){
return "KARIN";
}
if(iParam0==joaat("vstr")){
return "ALBANY";
}
if(iParam0==joaat("zhaba")){
return "RUNE";
}
if(!bParam1){
if(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "GALLIVAN")){
return "GALIVANTER";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "BENEFAC")){
return "BENEFACTOR";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "UBERMACH")){
return "UBERMACHT";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "DEWBAUCH")){
return "DEWBAUCHEE";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "JACKSHP")){
return "JACKSHEEPE";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "GROTTI")){
return "Grotti_2";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "INVERTO")){
return "Invetero";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "LAMPADA")){
return "LAMPADATI";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "DUNDREAR")){
return "DUNDREARY";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "ZIRCONIU")){
return "ZIRCONIUM";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "WESTERN")){
return "WESTERNMOTORCYCLE";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "PRINCIPL")){
return "PRINCIPE";
}elseif(MISC::ARE_STRINGS_EQUAL(get_make_name_from_vehicle_model(iParam0), "EMPEROR")){
return "EMPORER";
}else{
return get_make_name_from_vehicle_model(iParam0);
}}else{
return get_make_name_from_vehicle_model(iParam0);
}
return "";
}


char* func_33(int iParam0, bool bParam1){
switch (iParam0){
case joaat("frogger"):
case joaat("frogger2"):
return "MAIBATSU";
case joaat("maverick"):
case joaat("polmav"):
case joaat("luxor"):
case joaat("shamal"):
if(bParam1){
return "BUCKING";
}else{
return "BUCKINGHAM";
}
break;
case joaat("cargobob"):
case joaat("annihilator"):
case joaat("cuban800"):
case joaat("duster"):
case joaat("stunt"):
return "WESTERN";
break;
case joaat("buzzard"):
case joaat("buzzard2"):
return "NAGASAKI";
break;
case joaat("mammatus"):
case joaat("velum"):
case joaat("velum2"):
case joaat("lazer"):
return "JOBUILT";
break;
}
if(iParam0==joaat("vestra")){
if(bParam1){
return "BUCKING";
}else{
return "BUCKINGHAM";
}}
if(((((iParam0==joaat("miljet") || iParam0==joaat("swift")) || iParam0==joaat("swift2")) || iParam0==joaat("luxor2")) || iParam0==joaat("supervolito")) || iParam0==joaat("supervolito2")){
if(bParam1){
return "BUCKING";
}else{
return "BUCKINGHAM";
}}
if(iParam0==joaat("besra")){
return "WESTERN";
}
if(iParam0==joaat("hydra") || iParam0==joaat("thruster")){
return "MAMMOTH";
}
if(iParam0==joaat("volatus") || iParam0==joaat("nimbus")){
if(bParam1){
return "BUCKING";
}else{
return "BUCKINGHAM";
}}
return "";
}


char* func_34(int iParam0, bool bParam1){
switch (iParam0){
case joaat("squalo"):
case joaat("tropic"):
if(bParam1){
return "BUCKING";
}else{
return "BUCKINGHAM";
}
break;
case joaat("jetmax"):
case joaat("suntrap"):
return "OCELOT";
break;
case joaat("dinghy"):
if(!bParam1){
return "OCELOT";
}
break;
case joaat("seashark2"):
if(bParam1){
return "SPEEDOPH";
}else{
return "SPEEDOPHILE";
}
break;
case joaat("seashark3"):
if(bParam1){
return "SPEEDOPH";
}else{
return "SPEEDOPHILE";
}
break;
case joaat("seashark"):
if(bParam1){
return "SPEEDOPH";
}else{
return "SPEEDOPHILE";
}
break;
case joaat("toro"):
if(bParam1){
return "LAMPADA";
}else{
return "LAMPADATI";
}
break;
}
if(iParam0==joaat("speeder") || iParam0==joaat("speeder2")){
if(bParam1){
return "PEGASSI";
}else{
return "PEGASSI";
}}
return "";
}


void func_35(int iParam0, var uParam1){
int iVar0;
float fVar1;
int iVar2;
float fVar3;
int iVar4;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar1=1f;
iVar2=ENTITY::GET_ENTITY_MODEL(iParam0);
if(func_37(iVar2)){
fVar1=0.5f;
}else{
fVar1=1f;
}
(*uParam1)[0]=VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0);
(*uParam1)[2]=(VEHICLE::GET_VEHICLE_MAX_BRAKING(iParam0) * fVar1);
(*uParam1)[1]=(VEHICLE::GET_VEHICLE_ACCELERATION(iParam0) * fVar1);
if(iVar2==joaat("voltic")){
(*uParam1)[1]=(VEHICLE::GET_VEHICLE_ACCELERATION(iParam0) * 2f);
}
if(iVar2==joaat("tezeract")){
(*uParam1)[1]=(VEHICLE::GET_VEHICLE_ACCELERATION(iParam0) * 2.6753f);
}
if(iVar2==joaat("jester3")){
(*uParam1)[0]=(VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9890084f);
}
if(iVar2==joaat("freecrawler")){
(*uParam1)[0]=(VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9788762f);
}
if(iVar2==joaat("swinger")){
(*uParam1)[0]=(VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9650553f);
}
if(iVar2==joaat("menacer")){
(*uParam1)[0]=(VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9730466f);
}
if(iVar2==joaat("speedo4")){
(*uParam1)[0]=(VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0) * 0.9426523f);
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar2) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar2)){
fVar3=(VEHICLE::GET_FLYING_VEHICLE_MODEL_AGILITY(iVar2) * fVar1);
}elseif(VEHICLE::IS_THIS_MODEL_A_BOAT(iVar2)){
fVar3=(VEHICLE::GET_BOAT_VEHICLE_MODEL_AGILITY(iVar2) * fVar1);
}else{
fVar3=(VEHICLE::GET_VEHICLE_MAX_TRACTION(iParam0) * fVar1);
}
(*uParam1)[3]=fVar3;
if(iVar2==joaat("t20")){
(*uParam1)[1]=((*uParam1)[1] - 0.05f);
}elseif(iVar2==joaat("vindicator")){
(*uParam1)[1]=((*uParam1)[1] - 0.02f);
}
iVar4=func_36(VEHICLE::GET_VEHICLE_CLASS(iParam0));
iVar0=0;
iVar0=0;
while (iVar0 <=3){
(*uParam1)[iVar0]=(((*uParam1)[iVar0] / Global_1585970[iVar4 /*5*/][iVar0]) * 100f);
if((*uParam1)[iVar0] > 100f){
(*uParam1)[iVar0]=100f;
}
iVar0++;
}}}

int func_36(int iParam0){
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
case 17:
case 18:
case 19:
case 20:
case 22:
return 0;
break;
case 14:
return 3;
break;
case 15:
return 1;
break;
case 16:
return 2;
break;
}
return -1;
}

int func_37(int iParam0){
if(iParam0==joaat("bmx")){
return 1;
}
if(iParam0==joaat("cruiser")){
return 1;
}
if(iParam0==joaat("scorcher")){
return 1;
}
if((iParam0==joaat("tribike") || iParam0==joaat("tribike2")) || iParam0==joaat("tribike3")){
return 1;
}
if(iParam0==joaat("fixter")){
return 1;
}
return 0;
}


void func_38(int iParam0, char* sParam1, char* sParam2){
StringCopy(sParam1, func_32(ENTITY::GET_ENTITY_MODEL(iParam0), 0), 24);
StringCopy(sParam2, "MPCarHUD", 24);
if(MISC::ARE_STRINGS_EQUAL(sParam1, "LCC")){
StringCopy(sParam2, "MPCarHUD2", 24);
}
if(MISC::ARE_STRINGS_EQUAL(sParam1, "Grotti_2")){
StringCopy(sParam2, "MPCarHUD2", 24);
}
if(MISC::ARE_STRINGS_EQUAL(sParam1, "PROGEN")){
StringCopy(sParam2, "MPCarHUD2", 24);
}
if(MISC::ARE_STRINGS_EQUAL(sParam1, "RUNE")){
StringCopy(sParam2, "MPCarHUD2", 24);
}
if(MISC::ARE_STRINGS_EQUAL(sParam1, "VYSSER")){
StringCopy(sParam2, "MPCarHUD3", 24);
}
if(MISC::ARE_STRINGS_EQUAL(sParam1, "maxwell")){
StringCopy(sParam2, "MPCarHUD4", 24);
}}


float func_39(int iParam0){
struct<3> Var0;
struct<3> Var1;
func_40(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
return MISC::ABSF((Var0.f_2 - Var1.f_2));
}


void func_40(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_43(iParam0);
if(iVar0 !=0){
func_41(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_41(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_42(iParam0, &Global_1577994);
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


void func_42(int iParam0, var uParam1){
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

int func_43(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_44(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_44(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


bool func_45(var uParam0, char* sParam1){
if(*uParam0==0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam1);
}
return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0);
}


void func_46(int iParam0, var uParam1){
switch (iParam0){
case joaat("buccaneer2"):
*uParam1=(*uParam1 + 0.35f);
break;
case joaat("warrener2"):
*uParam1=(*uParam1 + 0.3f);
break;
case joaat("jester"):
*uParam1=(*uParam1 + 0.095f);
break;
case joaat("italigto"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("novak"):
*uParam1=(*uParam1 - 0.45f);
break;
case joaat("ruiner4"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("casco"):
*uParam1=(*uParam1 + 0.25f);
break;
case joaat("baller"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("baller2"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("baller3"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("baller4"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("baller5"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("baller6"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("baller7"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("banshee"):
*uParam1=(*uParam1 - 0.2f);
break;
case joaat("brioso2"):
*uParam1=(*uParam1 - 0.2f);
break;
case joaat("buffalo4"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("cognoscenti"):
*uParam1=(*uParam1 - 0.2f);
break;
case joaat("cognoscenti2"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("dubsta"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("dubsta2"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("dukes3"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("dynasty"):
*uParam1=(*uParam1 - 0.3f);
break;
case joaat("fagaloa"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("feltzer3"):
*uParam1=(*uParam1 + 0.25f);
break;
case joaat("greenwood"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("hellion"):
*uParam1=(*uParam1 - 0.35f);
break;
case joaat("hermes"):
*uParam1=(*uParam1 + 0.15f);
break;
case joaat("impaler"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("kanjo"):
*uParam1=(*uParam1 - 0.45f);
break;
case joaat("landstalker2"):
*uParam1=(*uParam1 - 0.55f);
break;
case joaat("mesa"):
*uParam1=(*uParam1 - 0.05f);
break;
case joaat("michelli"):
*uParam1=(*uParam1 - 0.3f);
break;
case joaat("nebula"):
*uParam1=(*uParam1 - 0.2f);
break;
case joaat("omnis"):
*uParam1=(*uParam1 - 0.45f);
break;
case joaat("penumbra2"):
*uParam1=(*uParam1 - 0.35f);
break;
case joaat("peyote2"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("picador"):
*uParam1=(*uParam1 - 0.25f);
break;
case joaat("remus"):
*uParam1=(*uParam1 - 0.35f);
break;
case joaat("schwarzer"):
*uParam1=(*uParam1 + 0.2f);
break;
case joaat("seminole2"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("sentinel"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("speedo"):
*uParam1=(*uParam1 - 0.45f);
break;
case joaat("sultan2"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("tornado2"):
*uParam1=(*uParam1 - 0.25f);
break;
case joaat("veto2"):
*uParam1=(*uParam1 + 0.15f);
break;
case joaat("corsita"):
*uParam1=(*uParam1 - 0.3f);
break;
case joaat("imorgon"):
*uParam1=(*uParam1 - 0.3f);
break;
case joaat("jester4"):
*uParam1=(*uParam1 + 0.15f);
break;
case joaat("lm87"):
*uParam1=(*uParam1 + 0.15f);
break;
case joaat("nero"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("omnisegt"):
*uParam1=(*uParam1 - 0.45f);
break;
case joaat("openwheel1"):
*uParam1=(*uParam1 + 0.25f);
break;
case joaat("pariah"):
*uParam1=(*uParam1 - 0.05f);
break;
case joaat("pfister811"):
*uParam1=(*uParam1 + 0.15f);
break;
case joaat("s80"):
*uParam1=(*uParam1 + 0.25f);
break;
case joaat("tezeract"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("turismor"):
*uParam1=(*uParam1 + 0.25f);
break;
case joaat("zentorno"):
*uParam1=(*uParam1 - 0.15f);
break;
case joaat("gauntlet4"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("turismo2"):
*uParam1=(*uParam1 - 0.2f);
break;
case joaat("comet2"):
*uParam1=(*uParam1 - 0.1f);
break;
case joaat("tailgater2"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("patriot3"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("monroe"):
*uParam1=(*uParam1 + 0.4f);
break;
case joaat("everon"):
*uParam1=(*uParam1 - 0.95f);
break;
case joaat("comet4"):
*uParam1=(*uParam1 - 0.35f);
break;
case joaat("penetrator"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("autarch"):
*uParam1=(*uParam1 - 0.6f);
break;
case joaat("brioso"):
*uParam1=(*uParam1 + 0.1f);
break;
case joaat("formula"):
*uParam1=(*uParam1 + 0.1f);
break;
}}


Vector3 func__47(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_48(int iParam0){
if(iParam0 !=func_49()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 9);
}
return 0;
}

int func_49(){
return -1;
}

int func_50(int iParam0, bool bParam1, bool bParam2){
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

int func_51(int iParam0){
int iVar0;
if(!func_53(iParam0, 1)){
return func_49();
}
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
return func_52(iVar0, 0, 1, 0);
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
int iVar1;
if(bParam2){
iVar1=0;
while (iVar1 < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_50(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))){
if(iParam0==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0)){
return iVar0;
}}
iVar1++;
}}elseif(func_50(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3))){
if(iParam0==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3)){
return iParam3;
}}
return func_49();
}

int func_53(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
return 1;
}}}
return 0;
}


void func_54(var uParam0, var uParam1){
int iVar0;
int iVar1;
var uVar2;
iVar0=0;
while (iVar0 < 12){
if((*uParam0)[iVar0]==(*uParam1)[iVar0]){
}else{
iVar1=iVar0 + 1;
while (iVar1 <=11){
if((*uParam0)[iVar1]==(*uParam1)[iVar0]){
uVar2=(*uParam1)[iVar1];
(*uParam1)[iVar1]=(*uParam1)[iVar0];
(*uParam1)[iVar0]=uVar2;
}
iVar1++;
}}
iVar0++;
}}

int func_55(){
return Global_1653913.f_68;
}


void func_56(){
bool bVar0;
if(!func_751() || !func_3(0)){
if(MISC::IS_BIT_SET(Local_166.f_0, 0)){
func_750();
func_749();
if(func_748("LUX_SRM_H_SOON")){
HUD::CLEAR_HELP(1);
}}
func_737();
func_736(&(Local_166.f_10), 0);
func_735(1);
return;
}
bVar0=MISC::IS_BIT_SET(Local_166.f_0, 0);
func_732(bVar0);
func_728();
if(MISC::IS_BIT_SET(Local_166.f_0, 0)){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
func_725();
func_709(func_724());
}
func_61(&(Local_166.f_10));
if(func_59(&(Local_166.f_10))){
func_57();
func_736(&(Local_166.f_10), 0);
}}


void func_57(){
if(MISC::IS_BIT_SET(Local_166.f_0, 0)){
MISC::CLEAR_BIT(&Local_166, false);
func_58();
func_735(3);
}else{
func_737();
func_735(1);
}}


void func_58(){
if(Local_166.f_2==0){
if(!MISC::IS_BIT_SET(Local_166.f_0, 6)){
MISC::SET_BIT(&Local_166, 6);
}}elseif(MISC::IS_BIT_SET(Local_166.f_0, 6)){
MISC::CLEAR_BIT(&Local_166, 6);
}}

int func_59(var uParam0){
if(uParam0->f_545==6){
return 1;
}
if(uParam0->f_545==5 && func_60(uParam0) !=1){
return 1;
}
return 0;
}

int func_60(var uParam0){
return uParam0->f_546;
}


void func_61(var uParam0){
func_62(uParam0, 1);
}


void func_62(var uParam0, bool bParam1){
if(func_708(uParam0, bParam1)){
func_707(uParam0, 5);
}
switch (uParam0->f_545){
case 0:
func_680(uParam0, bParam1);
break;
case 1:
func_678(uParam0);
break;
case 2:
func_623(uParam0);
break;
case 3:
func_501(uParam0);
break;
case 4:
func_79(uParam0);
break;
case 5:
if(func_60(uParam0)==1){
func_68(uParam0);
return;
}
func_65(uParam0);
func_63(uParam0, 1);
break;
case 6:
func_65(uParam0);
func_63(uParam0, 1);
break;
}}


void func_63(var uParam0, bool bParam1){
if(func_64(uParam0, iParam1)){
MISC::CLEAR_BIT(uParam0, iParam1);
}}


bool func_64(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}


void func_65(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_4)){
VEHICLE::DELETE_VEHICLE(&(uParam0->f_4));
}
if(uParam0->f_442.f_66 !=0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_442.f_66);
}
uParam0->f_1=-1;
uParam0->f_2=-1;
uParam0->f_3=0;
func_66(&(uParam0->f_442));
}


void func_66(var uParam0){
func_67(uParam0);
uParam0->f_78=-1;
uParam0->f_80=0f;
uParam0->f_97=1;
uParam0->f_98=0;
uParam0->f_99=132;
uParam0->f_81=0;
uParam0->f_81.f_1=0;
uParam0->f_81.f_2=0;
uParam0->f_81.f_3=0;
uParam0->f_81.f_4=0;
uParam0->f_81.f_5=0;
uParam0->f_81.f_6=0;
uParam0->f_81.f_7=0;
uParam0->f_81.f_8=0;
uParam0->f_81.f_9=0;
uParam0->f_81.f_10=0;
uParam0->f_81.f_11=0;
uParam0->f_81.f_12=0;
uParam0->f_95=0;
uParam0->f_94=0;
uParam0->f_96=-1;
}


void func_67(var uParam0){
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


void func_68(var uParam0){
set_warning_message_with_header("BRSCRWTEX", "BRDISTEX", 18, "BRSHETEX", false, -1, 0, 0, true, 0);
if(!HUD::IS_WARNING_MESSAGE_ACTIVE()){
return;
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202) || func_78()){
func_77(uParam0, 0);
}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
NETWORK::OPEN_COMMERCE_STORE("", "", 3);
func_69(0);
func_77(uParam0, 0);
}}


void func_69(bool bParam0){
if(bParam0){
func_76();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_75(0)){
func_70(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_70(int iParam0){
if(func_74()){
return;
}
if(Global_20584){
if(func_73()){
func_72(1, 1);
}else{
func_72(0, 0);
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
if(!func_71()){
Global_20383.f_1=3;
}}

int func_71(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_72(bool bParam0, bool bParam1){
if(bParam0){
if(func_75(0)){
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


bool func_73(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_74(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_75(int iParam0){
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


void func_76(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_77(var uParam0, int iParam1){
if(uParam0->f_546 !=iParam1){
uParam0->f_546=iParam1;
}}

int func_78(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
return 1;
}}
return 0;
}


void func_79(var uParam0){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
bool bVar5;
bool bVar6;
bool bVar7;
int iVar8;
int iVar9;
bool bVar10;
bool bVar11;
int iVar12;
int iVar13;
char* sVar14;
int iVar15;
bool bVar16;
char* sVar17;
char* sVar18;
bVar0=func_500(uParam0->f_442.f_66);
iVar1=0;
iVar2=func_499(uParam0->f_442.f_66, bVar0, -1, 0);
iVar3=func_498(uParam0->f_1);
bVar5=true;
bVar6=false;
bVar7=false;
iVar8=func_318(uParam0, uParam0->f_4, 0);
iVar4=func_318(uParam0, uParam0->f_4, 1);
if(iVar4==0){
bVar7=true;
}
while (func_261(uParam0, &iVar1, iVar8, Global_75865.f_66, iVar2, iVar3, uParam0->f_4) && func_258()){
return;
}
if(iVar1==2){
if(func_257()){
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEE(func_255(func_256()));
}
iVar9=uParam0->f_442.f_66;
if(uParam0->f_442.f_66==joaat("landstalker2")){
iVar9=MISC::GET_HASH_KEY(func_253(func_29(uParam0->f_442.f_66)));
}
bVar10=MONEY::NETWORK_GET_VC_BANK_BALANCE() >=false;
bVar11=MONEY::NETWORK_GET_VC_BANK_BALANCE() < iVar8;
MONEY::NETWORK_BUY_ITEM(iVar8, iVar9, 7, 1, bVar10, func_253(func_29(uParam0->f_442.f_66)), func_247(uParam0), 0, 0, bVar11);
if(func_257()){
func_243(func_256());
}
func_241(uParam0->f_442.f_66);
iVar12=func_240(2060, -1, 0);
iVar13=((iVar12 / 1000000) + 1 * 1000000);
if((iVar12 + iVar8) >=iVar13){
func_238((iVar13 / 1000000) + 1);
}
if(!func_215(uParam0->f_442.f_66, -1)){
func_210(1, 0, 0, 0, 0, 0, 0);
bVar5=false;
bVar6=true;
}
func_171(uParam0->f_4, uParam0->f_1, 1, bVar5, bVar6, 1, 1, 0, bVar7, -1, 0);
func_167(uParam0->f_2, uParam0->f_1, -1);
if(uParam0->f_1 !=-1){
Global_1586468[uParam0->f_1 /*142*/].f_140=iVar4;
}
func_166(uParam0->f_1);
if(uParam0->f_2 >=227 && uParam0->f_2 <=256){
func_165((uParam0->f_2 - 227));
}
func_141(uParam0->f_4, uParam0->f_1);
sVar14=func_140(uParam0->f_442.f_66);
iVar15=func_139(uParam0);
bVar16=false;
if(func_137(uParam0)){
bVar16=true;
}
if(bVar16){
sVar17=func_136(iVar15, 0);
sVar18=func_136(iVar15, 1);
}else{
sVar17=func_115(uParam0->f_442.f_66, sVar14, uParam0->f_2, 0);
sVar18=func_115(uParam0->f_442.f_66, sVar14, uParam0->f_2, 1);
}
func_90(iVar15, sVar17, 1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sVar14), -99, "", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0);
func_89(iVar15, sVar18, sVar14, "", Global_2793046.f_6903.f_1, -1, uParam0->f_1);
func_86(2060, (iVar12 + iVar8), -1, 1, 0);
func_80();
func_707(uParam0, 6);
}elseif(iVar1==3){
func_707(uParam0, 5);
}else{
iVar1=1;
}}


void func_80(){
if(!func_85(&(Global_2793046.f_6903.f_4))){
func_82(-35837372, 10, 0);
func_81(&(Global_2793046.f_6903.f_4), 0, 0);
}elseif(!MISC::IS_BIT_SET(Global_2793046.f_6903, 1)){
MISC::SET_BIT(&(Global_2793046.f_6903), true);
}}


void func_81(var uParam0, bool bParam1, bool bParam2){
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


void func_82(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_84(iParam1, iParam2)){
iVar0=func_83();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_83(){
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

int func_84(int iParam0, var uParam1){
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


bool func_85(var uParam0){
return uParam0->f_1;
}


void func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_87(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_87(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_88();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_88(){
return Global_1574918;
}


void func_89(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
iVar1=-1;
iVar2=-1;
iVar3=-1;
iVar0=0;
while (iVar0 < 39){
if(func_85(&(Global_2793046.f_2339[iVar0 /*44*/].f_41))){
if(MISC::ARE_STRINGS_EQUAL(&(Global_2793046.f_2339[iVar0 /*44*/]), sParam1)){
if(iParam6 !=-1){
if(iParam6==Global_2793046.f_2339[iVar0 /*44*/].f_40){
iVar1=iVar0;
bVar4=true;
}}}}
if(!func_85(&(Global_2793046.f_2339[iVar0 /*44*/].f_41))){
if(iVar2==-1){
iVar2=iVar0;
}}
if(bVar4){
iVar0=39;
}
iVar0++;
}
iVar3=iVar1;
if(iVar3==-1){
iVar3=iVar2;
}
if(iVar3 >=0){
Global_2793046.f_2339[iVar3 /*44*/].f_6=iParam0;
StringCopy(&(Global_2793046.f_2339[iVar3 /*44*/]), sParam1, 24);
StringCopy(&(Global_2793046.f_2339[iVar3 /*44*/].f_7), sParam2, 64);
StringCopy(&(Global_2793046.f_2339[iVar3 /*44*/].f_23), sParam3, 64);
Global_2793046.f_2339[iVar3 /*44*/].f_39=iParam5;
Global_2793046.f_2339[iVar3 /*44*/].f_40=iParam6;
func_81(&(Global_2793046.f_2339[iVar3 /*44*/].f_41), 1, 0);
Global_2793046.f_2339[iVar3 /*44*/].f_43=uParam4;
}}

int func_90(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16){
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
if(func_92(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0)==1){
if(bParam11==1){
Global_8960=iParam10;
Global_8863[3 /*6*/]={
func_91(iParam0) 
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


struct<4> func_91(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_92(int iParam0, char* sParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, var uParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_108();
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
if(func_107()==0){
func_105();
return 0;
}
func_104(Global_22792);
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
Global_113648.f_14143[Global_22792 /*104*/].f_32=uParam3;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_49=uParam6;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_66=iParam13;
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
Global_8959=4;
func_103(0);
func_103(2);
func_103(1);
}else{
func_108();
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
func_103(0);
Global_8959=0;
break;
case 1:
func_103(1);
Global_8959=1;
break;
case 2:
func_103(2);
Global_8959=2;
break;
case 3:
func_103(3);
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
func_108();
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
if(!func_102()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, 1);
}}}
if(!Global_20585){
if(Global_20383.f_1==6){
func_101(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_98(1);
func_101(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && iParam0==Global_1977527){
bVar1=true;
}
func_93(iParam0, sParam1, bVar1, func_97(PLAYER::PLAYER_ID()));
return 1;
}


void func_93(int iParam0, char* sParam1, bool bParam2, var uParam3){
if(!func_94()){
return;
}
STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, uParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2){
Global_1977527=-1;
}}

int func_94(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_49()){
return 0;
}
if(func_95(PLAYER::PLAYER_ID())){
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


bool func_95(int iParam0){
return func_96(iParam0, 20);
}


var func__96(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


var func__97(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}


void func_98(int iParam0){
bool bVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
bool bVar6;
bool bVar7;
bool bVar8;
bool bVar9;
Global_22793=0;
Global_8858=iParam0;
bVar0=false;
while (bVar0 < 9){
Global_8822[bVar0]=0;
bVar0++;
}
bVar0=false;
while (bVar0 < 9){
iVar1=0;
if(func_100(14)){
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(bVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[bVar0]==0){
Global_8786[bVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
bVar2=42;
Global_20588=1;
}else{
bVar2=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_24(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694521){
if(iVar1==14){
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8822[bVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8260[iVar1 /*15*/].f_11){
if(bVar0==Global_8260[iVar1 /*15*/].f_4){
if(Global_8822[bVar0]==0){
Global_8786[bVar0]=iVar1;
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
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78558){
bVar4=false;
bVar4=Global_4541031;
iVar5=0;
while (iVar5 < 12){
if(Global_4541032[iVar5 /*104*/].f_24 !=0){
if(Global_4541032[iVar5 /*104*/].f_28==0){
if(Global_4541032[iVar5 /*104*/].f_99[Global_20383]==1){
bVar4++;
}}
}
iVar5++;
}
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(bVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20383){
case 0:
bVar6=Global_44457;
break;
case 1:
bVar6=Global_44458;
break;
case 2:
bVar6=Global_44459;
break;
default:
break;
}
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(bVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_24(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8254, 6)){
bVar7=42;
}else{
bVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_24(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8254, 3)){
bVar8=42;
Global_20588=1;
}else{
bVar8=255;
Global_20588=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_24(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_24(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_24(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
bVar9=false;
bVar9=Global_1890001.f_1;
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(bVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_99(Global_20364, "SET_DATA_SLOT", to_float(true), to_float(bVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[bVar0]=1;
}}}
iVar1++;
}}
bVar0++;
}}


void func_99(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
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
func_24(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_24(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_24(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_24(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_24(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_100(int iParam0){
return Global_43257==iParam0;
}


void func_101(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


bool func_102(){
return Global_1575060;
}


void func_103(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113648.f_14053[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_104(int iParam0){
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


void func_105(){
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
if(!func_106(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
Global_22792=iVar2;
}
iVar2++;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
}

int func_106(struct<6> Param0, struct<6> Param1){
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

int func_107(){
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
if(!func_106(Global_113648.f_14143[iVar2 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)){
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


void func_108(){
if(func_100(14)){
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
Global_20383=func_109();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__109(){
func_110();
return Global_113648.f_2365.f_539.f_4321;
}


void func_110(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_113(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_112(PLAYER::PLAYER_PED_ID());
if(func_111(iVar0) && (!func_100(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_111(Global_113648.f_2365.f_539.f_4321)){
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


bool func_111(int iParam0){
return iParam0 < 3;
}

int func_112(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_113(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_113(int iParam0){
if(func_111(iParam0)){
return func_114(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__114(int iParam0){
return Global_2028[iParam0 /*29*/];
}


var func__115(int iParam0, char* sParam1, int iParam2, bool bParam3){
var uVar0;
bool bVar1;
bool bVar2;
if(!func_215(iParam0, -1)){
if(bParam3){
return "TXT_CAR_YOUC";
}else{
return "TXT_CAR_YOUD";
}}
bVar1=func_119(iParam2, func_132(14, -1), 14, -1);
if(!bVar1){
if((func_119(iParam2, func_132(15, -1), 15, -1) || func_119(iParam2, func_132(16, -1), 16, -1)) || func_119(iParam2, func_132(17, -1), 17, -1)){
bVar1=true;
}}
if(!bVar1){
if((iParam2==224 || iParam2==225) || iParam2==226){
bVar1=true;
}}
if((func_119(iParam2, func_132(18, -1), 18, -1) || func_119(iParam2, func_132(19, -1), 19, -1)) || func_119(iParam2, func_132(20, -1), 20, -1)){
bVar2=true;
}
if(!bVar2){
if(((iParam2==236 || iParam2==246) || iParam2==256) || iParam2==257){
bVar2=true;
}}
if(bParam3){
uVar0=func_118(iParam0, sParam1, iParam2, bVar1, bVar2);
}else{
uVar0=func_116(iParam0, sParam1, iParam2, bVar1, bVar2);
}
return uVar0;
}


char* func_116(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4){
char* sVar0;
if(func_117(iParam0) !=-1){
sVar0="DELVIRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELVIRLG";
}}elseif(iParam2==156){
sVar0="DELMIRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELMIRLG";
}}elseif(func_119(iParam2, func_132(12, -1), 12, -1)){
sVar0="DELHARL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELHARLG";
}}elseif(func_119(iParam2, func_132(13, -1), 13, -1)){
sVar0="DELFIRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELFIRLG";
}}elseif(bParam3){
sVar0="DELNCRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELNCRLG";
}}elseif(iParam2==223){
sVar0="DELMIRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELMIRLG";
}}elseif(bParam4){
sVar0="DELARRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELARRLG";
}}elseif(func_119(iParam2, func_132(21, -1), 21, -1)){
sVar0="DELCARL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELCARLG";
}}elseif(iParam2==278){
sVar0="DELSUB";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELSUBG";
}}elseif(func_119(iParam2, func_132(25, -1), 25, -1)){
sVar0="DEL_AS";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DEL_ASG";
}}elseif(func_119(iParam2, func_132(29, -1), 29, -1)){
sVar0="DELMSGRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELMSGRLG";
}}else{
sVar0="DELVIRL";
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="DELVIRLG";
}}
return sVar0;
}

int func_117(int iParam0){
int iVar0;
iVar0=iParam0;
switch (iVar0){
case joaat("technical2"):
return 0;
break;
case joaat("boxville5"):
return 1;
break;
case joaat("wastelander"):
return 2;
break;
case joaat("phantom2"):
return 3;
break;
case joaat("voltic2"):
return 4;
break;
case joaat("dune4"):
return 5;
break;
case joaat("dune5"):
return 5;
break;
case joaat("ruiner2"):
return 6;
break;
case joaat("blazer5"):
return 7;
break;
}
return -1;
}


char* func_118(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4){
char* sVar0;
if(func_117(iParam0) !=-1){
sVar0="DELSIRL";
}elseif(iParam2==156){
sVar0="TXT_TRUCK_GAR";
}elseif(func_119(iParam2, func_132(12, -1), 12, -1)){
sVar0="TXT_HANGAR_FLOR";
}elseif(func_119(iParam2, func_132(13, -1), 13, -1)){
sVar0="TXT_DBASE_STOR";
}elseif(bParam3){
sVar0="DELNCRL";
}elseif(iParam2==223){
sVar0="TXT_MOC2_GAR";
}elseif(bParam4){
sVar0="TXT_ARENA_STOR";
}elseif(func_119(iParam2, func_132(21, -1), 21, -1)){
sVar0="TXT_CASINO_STOR";
}elseif(iParam2==278){
sVar0="TXT_SUB_GAR";
}elseif(func_119(iParam2, func_132(25, -1), 25, -1)){
sVar0="TXT_AUTS_STOR";
}elseif(func_119(iParam2, func_132(26, -1), 26, -1)){
sVar0="TXT_FIXER_STOR";
}elseif(func_119(iParam2, func_132(29, -1), 29, -1)){
sVar0="TXT_MSG_STOR";
}else{
sVar0="TXT_CAR_STOR";
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
sVar0="TXT_CAR_STOB";
}
return sVar0;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if((iParam1 > 0 && iParam1 <=130) && func_131(iParam1)){
if(iParam0 >=0){
if(((iParam0 - func_129(iParam2)) >=0 && (iParam0 - func_129(iParam2)) < Global_1312228[iParam1 /*1951*/].f_33) && iParam0 < 415){
return 1;
}
if(Global_1312228[iParam1 /*1951*/].f_33==2 && iParam0==(10 + func_129(iParam2))){
return 1;
}
if((Global_1312228[iParam1 /*1951*/].f_33==6 && iParam0 >=(10 + func_129(iParam2))) && iParam0 <=(11 + func_129(iParam2))){
return 1;
}
if(Global_1312228[iParam1 /*1951*/].f_33==10){
if(func_128(iParam1, -1)){
}elseif(iParam0 >=(10 + func_129(iParam2)) && iParam0 <=(12 + func_129(iParam2))){
return 1;
}}
if((iParam2==11 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if((iParam2==12 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if((iParam2==13 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if((iParam2==14 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if((iParam2==15 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if((iParam2==16 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if((iParam2==17 && iParam0 >=func_129(iParam2)) && iParam0 < func_120(iParam2)){
return 1;
}
if(iParam2==18){
if((iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)) || iParam0==236){
return 1;
}}
if(iParam2==19){
if((iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)) || iParam0==246){
return 1;
}}
if(iParam2==20){
if((iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)) || iParam0==256){
return 1;
}}
if(iParam2==21){
if(iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)){
return 1;
}}
if(iParam2==22){
if(iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)){
return 1;
}}
if(iParam2==25){
if(iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)){
return 1;
}}
if(iParam2==26){
if(iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2)){
return 1;
}}
if(iParam2==29){
if(iParam3==-1 && (iParam0 >=func_129(iParam2) && iParam0 < func_120(iParam2))){
return 1;
}else{
iVar0=(func_129(iParam2) + iParam3 * 10);
iVar1=iVar0 + 10;
return (iParam0 >=iVar0 && iParam0 < iVar1);
}}}}
return 0;
}

int func_120(int iParam0){
int iVar0;
switch (iParam0){
case 8:
return 108;
break;
case 9:
return 128;
break;
case 10:
return 148;
break;
case 11:
return 156;
break;
case 6:
return 75;
break;
case 7:
return 88;
break;
case 5:
return -1;
break;
case 12:
return 179;
break;
case 13:
return 186;
break;
case 14:
return 192;
break;
case 15:
return 202;
break;
case 16:
return 212;
break;
case 17:
return 222;
break;
case 18:
return 236;
break;
case 19:
return 246;
break;
case 20:
return 256;
break;
case 21:
return 268;
break;
case 22:
return 278;
break;
case 23:
return 294;
break;
case 24:
return 307;
break;
case 25:
return 317;
break;
case 26:
return 337;
break;
case 27:
return 350;
break;
case 28:
return 363;
break;
case 29:
return 413;
break;
}
if(iParam0 >=1000){
iVar0=func_127(iParam0);
return func_126(iVar0);
}
return (func_121(iParam0, -1, 1) * iParam0 + 1);
}

int func_121(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(iParam1 >=1){
if(func_123(iParam1, 0, 0)){
return 20;
}elseif(func_122(iParam1)){
return 0;
}elseif(func_128(iParam1, -1)){
return 10;
}elseif(iParam1==115){
return 8;
}elseif(iParam1==116){
return 20;
}elseif(iParam1==117){
return 7;
}elseif(iParam1==118){
return 1;
}elseif((iParam1==119 || iParam1==120) || iParam1==121){
return 10;
}elseif(iParam1==122){
return 9;
}elseif(iParam1==123 || iParam1==124){
return 10;
}elseif(iParam1==125){
return 10;
}elseif(iParam1==126){
return 10;
}elseif(iParam1==127){
return 10;
}elseif(iParam1==128){
return 20;
}elseif(iParam1==129){
return 50;
}elseif(iParam1 <=130 && iParam1 > 0){
if(Global_1312228[iParam1 /*1951*/].f_33==2){
if(bParam2){
return 3;
}else{
return 2;
}}elseif(Global_1312228[iParam1 /*1951*/].f_33==6){
if(bParam2){
return 8;
}else{
return 6;
}}elseif(Global_1312228[iParam1 /*1951*/].f_33==10){
if(bParam2){
return 13;
}else{
return 10;
}}}}}
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 7:
case 23:
case 24:
case 27:
case 28:
return 13;
break;
case 5:
return 0;
break;
case 6:
return 10;
break;
case 8:
case 9:
case 10:
return 20;
break;
case 11:
return 8;
break;
case 12:
return 20;
break;
case 13:
return 7;
break;
case 14:
return 1;
break;
case 15:
case 16:
case 17:
return 10;
break;
case 18:
case 19:
case 20:
return 10;
break;
case 21:
return 10;
break;
case 22:
return 10;
break;
case 25:
return 10;
break;
case 26:
return 20;
break;
case 29:
return 50;
break;
}
return 0;
}

int func_122(int iParam0){
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

int func_123(int iParam0, bool bParam1, bool bParam2){
if(bParam2){
return func_124(PLAYER::PLAYER_ID(), 0);
}
if(bParam1){
if(func_124(PLAYER::PLAYER_ID(), 0)){
return 0;
}
switch (iParam0){
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 1;
break;
}}
switch (iParam0){
case 103:
case 106:
case 109:
case 112:
case 104:
case 107:
case 110:
case 113:
case 105:
case 108:
case 111:
case 114:
return 1;
break;
}
return 0;
}

int func_124(int iParam0, bool bParam1){
if(Global_1853746 !=func_49()){
if(!func_125(Global_1853746)){
return 0;
}
if(bParam1){
if(PLAYER::PLAYER_ID() !=Global_1853746){
if(MISC::IS_BIT_SET(Global_2657589[Global_1853746 /*466*/].f_199, 24) || func_48(Global_1853746)){
return 1;
}}}}
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 24);
}

int func_125(int iParam0){
if(iParam0 !=func_49()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_386, 2);
}
return 0;
}

int func_126(int iParam0){
switch (iParam0){
case 0:
return 157;
case 2:
return 224;
case 1:
return 227;
case 3:
return 279;
default:
}
return -1;
}

int func_127(int iParam0){
iParam0=(iParam0 - 1000);
if(iParam0 >=0 && iParam0 <=4){
return iParam0;
}
return -1;
}

int func_128(int iParam0, int iParam1){
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

int func_129(int iParam0){
int iVar0;
switch (iParam0){
case 8:
return 88;
break;
case 9:
return 108;
break;
case 10:
return 128;
break;
case 11:
return 148;
break;
case 6:
return 65;
break;
case 7:
return 75;
break;
case 5:
return -1;
break;
case 12:
return 159;
break;
case 13:
return 179;
break;
case 14:
return 191;
break;
case 15:
return 192;
break;
case 16:
return 202;
break;
case 17:
return 212;
break;
case 18:
return 227;
break;
case 19:
return 237;
break;
case 20:
return 247;
break;
case 21:
return 258;
break;
case 22:
return 268;
break;
case 23:
return 281;
break;
case 24:
return 294;
break;
case 25:
return 307;
break;
case 26:
return 317;
break;
case 27:
return 337;
break;
case 28:
return 350;
break;
case 29:
return 363;
break;
}
if(iParam0 >=1000){
iVar0=func_127(iParam0);
return func_130(iVar0);
}
return (func_121(iParam0, -1, 1) * iParam0);
}

int func_130(int iParam0){
switch (iParam0){
case 0:
return 156;
case 2:
return 223;
case 1:
return 224;
case 3:
return 278;
default:
}
return -1;
}

int func_131(int iParam0){
switch (iParam0){
case 86:
case 87:
case 88:
case 89:
case 90:
return 0;
break;
}
return 1;
}

int func_132(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=iParam1;
if(iParam1==-1){
iVar0=func_88();
}
if(iParam0==7 && !Global_262145.f_17451){
return 0;
}
if(iParam0 >=1000){
iVar1=func_127(iParam0);
if(iVar1==0 && func_240(5396, iParam1, 0) !=0){
return 1234;
}
if(func_135(-1) && iVar1==2){
return 1236;
}
if(func_134(PLAYER::PLAYER_ID()) && iVar1==1){
return 1237;
}
if(func_133(-1) && iVar1==3){
return 1238;
}}
if(iParam0==0){
return Global_1665644[iVar0];
}elseif(iParam0==99){
return Global_2851504[iVar0];
}elseif(iParam0 >=1){
if(iParam0 >=30){
return 0;
}
return Global_2851325[(iParam0 - 1) /*3*/][iVar0];
}
return 0;
}


bool func_133(int iParam0){
return func_240(9517, iParam0, 0) !=0;
}

int func_134(int iParam0){
if(iParam0 !=func_49()){
return Global_1853910[iParam0 /*862*/].f_267.f_353 !=0;
}
return 0;
}


bool func_135(int iParam0){
if(!Global_262145.f_24171){
return 0;
}
return func_240(7210, iParam0, 0) !=0;
}


char* func_136(int iParam0, bool bParam1){
switch (iParam0){
case 174:
if(bParam1){
return "DELVIRLG";
}else{
return "TXT_CAR_STOB";
}
break;
}
return "NULL";
}

int func_137(var uParam0){
int iVar0;
iVar0=func_138(uParam0);
if(iVar0==0){
return 0;
}
Call_Loc(iVar0);
return StackVal;
}


var func__138(var uParam0){
return uParam0->f_11;
}


var func__139(var uParam0){
return uParam0->f_549;
}


char* func_140(int iParam0){
char* sVar0;
if(STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
sVar0=func_253(func_29(iParam0));
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar0)){
sVar0=VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}
return sVar0;
}
return "";
}


void func_141(int iParam0, int iParam1){
func_164(iParam0);
func_142(iParam1);
}


void func_142(int iParam0){
if(iParam0 >=0 && iParam0 <=415){
MISC::SET_BIT(&(Global_1586468[iParam0 /*142*/].f_103), 2);
func_162(101, 1, -1, 1);
func_149(iParam0, &(Global_1586468[iParam0 /*142*/]), 1, -1, 0, 0);
if(!Global_1577984){
func_143(91, 3, 1);
Global_1577984=1;
}else{
func_143(91, 3, 0);
}}}


void func_143(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8939=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_108();
if(iParam1==4){
func_148(iParam0, 0, 1);
func_148(iParam0, 1, 1);
func_148(iParam0, 2, 1);
func_147(iParam0, 0, 1);
func_147(iParam0, 1, 1);
func_147(iParam0, 2, 1);
}else{
if(func_146(iParam0, iParam1)==1 && func_145(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_148(iParam0, iVar0, 1);
func_147(iParam0, iVar0, 1);
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
func_91(iParam0) 
};
Global_8929[iParam1]=1;
Global_8934[iParam1]=iParam0;
}elseif(iParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
func_91(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_144();
}}else{
Global_8863[1 /*6*/]={
func_91(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_144();
}}else{
Global_8863[1 /*6*/]={
func_91(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_144();
}}}}


void func_144(){
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

int func_145(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_146(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_12[iParam1];
}


void func_147(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_148(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_149(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5){
int iVar0;
int iVar1;
int iVar2;
if(bParam2){
if(!bParam4){
}
Global_2359296[func_161() /*5568*/].f_681.f_1275=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(!bParam4){}
iVar1=func_160(1411, iParam0);
func_159(iVar1, uParam1->f_138, iParam3);
if(!bParam4){}
iVar1=func_160(1412, iParam0);
func_159(iVar1, uParam1->f_139, iParam3);
if(!bParam4){}
if(func_158(iParam0)){}else{
iVar1=func_160(1413, iParam0);
func_159(iVar1, *uParam1, iParam3);
if(!bParam4){
}
iVar0=0;
while (iVar0 < 49){
if(iVar0 < 25){
iVar1=(func_160(1414, iParam0) + iVar0);
func_159(iVar1, uParam1->f_9[iVar0], iParam3);
}else{
iVar1=(func_157(iParam0) + (iVar0 - 25));
func_159(iVar1, uParam1->f_9[iVar0], iParam3);
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 2){
iVar1=(func_160(1439, iParam0) + iVar0);
func_159(iVar1, uParam1->f_59[iVar0], iParam3);
iVar0++;
}}
iVar1=func_160(1441, iParam0);
func_159(iVar1, uParam1->f_62, iParam3);
if(!bParam4){}
iVar1=func_160(1442, iParam0);
func_159(iVar1, uParam1->f_63, iParam3);
if(!bParam4){}
iVar1=func_160(1443, iParam0);
func_159(iVar1, uParam1->f_64, iParam3);
if(!bParam4){}
if(func_158(iParam0)){
if(!bParam4){
}}else{
iVar1=func_160(1444, iParam0);
func_159(iVar1, uParam1->f_65, iParam3);
if(!bParam4){
}}
iVar1=func_160(1445, iParam0);
func_159(iVar1, uParam1->f_67, iParam3);
if(func_158(iParam0)){
if(!bParam4){
}}else{
iVar1=func_160(1446, iParam0);
func_159(iVar1, uParam1->f_68, iParam3);
}
iVar1=func_160(1447, iParam0);
func_159(iVar1, uParam1->f_69, iParam3);
if(!bParam4){}
iVar1=func_160(1448, iParam0);
func_159(iVar1, uParam1->f_70, -1);
iVar1=func_160(1449, iParam0);
func_159(iVar1, uParam1->f_71, iParam3);
iVar1=func_160(1450, iParam0);
func_159(iVar1, uParam1->f_72, iParam3);
iVar1=func_160(1451, iParam0);
func_159(iVar1, uParam1->f_73, iParam3);
iVar1=func_160(1452, iParam0);
func_159(iVar1, uParam1->f_5, iParam3);
iVar1=func_160(1453, iParam0);
func_159(iVar1, uParam1->f_6, iParam3);
iVar1=func_160(1454, iParam0);
func_159(iVar1, uParam1->f_7, iParam3);
iVar1=func_160(1455, iParam0);
func_159(iVar1, uParam1->f_8, iParam3);
if(func_158(iParam0)){
if(!bParam4){
}}else{
iVar1=func_160(3880, iParam0);
func_159(iVar1, uParam1->f_74, iParam3);
iVar1=func_160(3881, iParam0);
func_159(iVar1, uParam1->f_75, iParam3);
iVar1=func_160(3882, iParam0);
func_159(iVar1, uParam1->f_76, iParam3);
iVar1=func_156(iParam0);
func_159(iVar1, uParam1->f_97, iParam3);
iVar1=func_155(iParam0);
func_159(iVar1, uParam1->f_99, iParam3);
iVar1=func_154(iParam0);
func_159(iVar1, uParam1->f_98, iParam3);
iVar1=func_153(iParam0, 0);
func_159(iVar1, uParam1->f_102, iParam3);
}
iVar2=Global_2359296[func_161() /*5568*/].f_681.f_1275;
if(bParam5){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
}
func_86(1629, iVar2, iParam3, 1, 0);
if(!bParam4){}
func_86(func_151(1, iParam0), uParam1->f_103, iParam3, 1, 0);
if(!bParam4){}
func_86(func_151(2, iParam0), uParam1->f_104, iParam3, 1, 0);
if(!bParam4){}
func_86(func_151(3, iParam0), uParam1->f_105, iParam3, 1, 0);
if(!bParam4){}
func_86(func_151(4, iParam0), uParam1->f_66, iParam3, 1, 0);
func_86(func_151(5, iParam0), uParam1->f_77, iParam3, 1, 0);
if(!bParam4){}
func_86(func_151(7, iParam0), uParam1->f_140, iParam3, 1, 0);
if(!func_158(iParam0)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1))){
func_150(func_151(6, iParam0), &(uParam1->f_1), iParam3);
if(!bParam4){
}}elseif(!bParam4){
}}
if(!bParam4){}
return 1;
}


void func_150(int iParam0, var uParam1, int iParam2){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_87(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
}}

int func_151(int iParam0, int iParam1){
if(iParam1 >=363){
return func_152(iParam0, iParam1);
}else{
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return 1630;
case 1:
return 1637;
case 2:
return 1644;
case 3:
return 1651;
case 4:
return 1658;
case 5:
return 1665;
case 6:
return 1672;
case 7:
return 1679;
case 8:
return 1686;
case 9:
return 1693;
case 10:
return 1700;
case 11:
return 1706;
case 12:
return 1712;
case 13:
return 1718;
case 14:
return 1797;
case 15:
return 1804;
case 16:
return 1811;
case 17:
return 1818;
case 18:
return 1825;
case 19:
return 1832;
case 20:
return 1839;
case 21:
return 1846;
case 22:
return 1853;
case 23:
return 1860;
case 24:
return 1866;
case 25:
return 1872;
case 26:
return 2167;
case 27:
return 2174;
case 28:
return 2181;
case 29:
return 2188;
case 30:
return 2195;
case 31:
return 2202;
case 32:
return 2209;
case 33:
return 2216;
case 34:
return 2223;
case 35:
return 2230;
case 36:
return 2237;
case 37:
return 2243;
case 38:
return 2249;
case 39:
return 2831;
case 40:
return 2838;
case 41:
return 2845;
case 42:
return 2852;
case 43:
return 2859;
case 44:
return 2866;
case 45:
return 2873;
case 46:
return 2880;
case 47:
return 2887;
case 48:
return 2894;
case 49:
return 2901;
case 50:
return 2907;
case 51:
return 2913;
case 52:
return 2955;
case 53:
return 2962;
case 54:
return 2969;
case 55:
return 2976;
case 56:
return 2983;
case 57:
return 2990;
case 58:
return 2997;
case 59:
return 3004;
case 60:
return 3011;
case 61:
return 3018;
case 62:
return 3025;
case 63:
return 3031;
case 64:
return 3037;
case 65:
return 3238;
case 66:
return 3246;
case 67:
return 3254;
case 68:
return 3262;
case 69:
return 3270;
case 70:
return 3278;
case 71:
return 3286;
case 72:
return 3294;
case 73:
return 3302;
case 74:
return 3310;
case 75:
return 3318;
case 76:
return 3326;
case 77:
return 3334;
case 78:
return 3342;
case 79:
return 3350;
case 80:
return 3358;
case 81:
return 3366;
case 82:
return 3374;
case 83:
return 3382;
case 84:
return 3390;
case 85:
return 3398;
case 86:
return 3405;
case 87:
return 3412;
default:
}
switch (iParam1){
case 88:
return 4034;
case 89:
return 4042;
case 90:
return 4050;
case 91:
return 4058;
case 92:
return 4066;
case 93:
return 4074;
case 94:
return 4082;
case 95:
return 4090;
case 96:
return 4098;
case 97:
return 4106;
case 98:
return 4114;
case 99:
return 4122;
case 100:
return 4130;
case 101:
return 4138;
case 102:
return 4146;
case 103:
return 4154;
case 104:
return 4162;
case 105:
return 4170;
case 106:
return 4178;
case 107:
return 4186;
case 108:
return 4194;
case 109:
return 4202;
case 110:
return 4210;
case 111:
return 4218;
case 112:
return 4226;
case 113:
return 4234;
case 114:
return 4242;
case 115:
return 4250;
case 116:
return 4258;
case 117:
return 4266;
case 118:
return 4274;
case 119:
return 4282;
case 120:
return 4290;
case 121:
return 4298;
case 122:
return 4306;
case 123:
return 4314;
case 124:
return 4322;
case 125:
return 4330;
case 126:
return 4338;
case 127:
return 4346;
case 128:
return 4354;
case 129:
return 4362;
case 130:
return 4370;
case 131:
return 4378;
case 132:
return 4386;
case 133:
return 4394;
case 134:
return 4402;
case 135:
return 4410;
case 136:
return 4418;
case 137:
return 4426;
case 138:
return 4434;
case 139:
return 4442;
case 140:
return 4450;
case 141:
return 4458;
case 142:
return 4466;
case 143:
return 4474;
case 144:
return 4482;
case 145:
return 4490;
case 146:
return 4498;
case 147:
return 4506;
case 148:
return 4514;
case 149:
return 4522;
case 150:
return 4530;
case 151:
return 4538;
case 152:
return 4546;
case 153:
return 4554;
case 154:
return 4562;
case 155:
return 4570;
case 156:
return 4578;
case 157:
return 4586;
case 158:
return 5479;
default:
}
switch (iParam1){
case 159:
return 5928;
case 160:
return 5935;
case 161:
return 5942;
case 162:
return 5949;
case 163:
return 5956;
case 164:
return 5963;
case 165:
return 5970;
case 166:
return 5977;
case 167:
return 5984;
case 168:
return 5991;
case 169:
return 5998;
case 170:
return 6005;
case 171:
return 6012;
case 172:
return 6019;
case 173:
return 6026;
case 174:
return 6033;
case 175:
return 6040;
case 176:
return 6047;
case 177:
return 6054;
case 178:
return 6061;
case 179:
return 6068;
case 180:
return 6075;
case 181:
return 6082;
case 182:
return 6089;
case 183:
return 6096;
default:
}
switch (iParam1){
case 184:
return 6173;
case 185:
return 6180;
case 186:
return 6187;
case 187:
return 6194;
case 188:
return 6201;
case 189:
return 6208;
case 190:
return 6215;
case 191:
return 6222;
case 192:
return 6229;
case 193:
return 6236;
default:
}
switch (iParam1){
case 194:
return 6570;
case 195:
return 6577;
case 196:
return 6584;
case 197:
return 6591;
case 198:
return 6598;
case 199:
return 6605;
case 200:
return 6612;
case 201:
return 6619;
case 202:
return 6626;
case 203:
return 6633;
case 204:
return 6640;
case 205:
return 6647;
case 206:
return 6654;
case 207:
return 6661;
case 208:
return 6668;
case 209:
return 6675;
case 210:
return 6682;
case 211:
return 6689;
case 212:
return 6696;
case 213:
return 6703;
case 214:
return 6710;
case 215:
return 6717;
case 216:
return 6724;
case 217:
return 6731;
case 218:
return 6738;
case 219:
return 6745;
case 220:
return 6752;
case 221:
return 6759;
case 222:
return 6766;
case 223:
return 6773;
case 224:
return 6780;
case 225:
return 6787;
case 226:
return 6794;
case 227:
return 6801;
case 228:
return 6808;
case 229:
return 6815;
case 230:
return 6822;
default:
}
switch (iParam1){
case 231:
return 7292;
case 232:
return 7299;
case 233:
return 7306;
case 234:
return 7313;
case 235:
return 7320;
case 236:
return 7327;
case 237:
return 7334;
case 238:
return 7341;
case 239:
return 7348;
case 240:
return 7355;
case 241:
return 7362;
case 242:
return 7369;
case 243:
return 7376;
case 244:
return 7383;
case 245:
return 7390;
case 246:
return 7397;
case 247:
return 7404;
case 248:
return 7411;
case 249:
return 7418;
case 250:
return 7425;
case 251:
return 7432;
case 252:
return 7439;
case 253:
return 7446;
case 254:
return 7453;
case 255:
return 7460;
case 256:
return 7467;
case 257:
return 7474;
case 258:
return 7481;
case 259:
return 7488;
case 260:
return 7495;
default:
}
switch (iParam1){
case 261:
return 8015;
case 262:
return 8022;
case 263:
return 8029;
case 264:
return 8036;
case 265:
return 8043;
case 266:
return 8050;
case 267:
return 8057;
case 268:
return 8064;
case 269:
return 8071;
case 270:
return 8078;
case 271:
return 8539;
case 272:
return 8546;
case 273:
return 8553;
case 274:
return 8560;
case 275:
return 8567;
case 276:
return 8574;
case 277:
return 8581;
case 278:
return 8588;
case 279:
return 8595;
case 280:
return 8602;
case 281:
return 8986;
case 282:
return 8993;
case 283:
return 9000;
case 284:
return 9007;
case 285:
return 9014;
case 286:
return 9021;
case 287:
return 9028;
case 288:
return 9035;
case 289:
return 9042;
case 290:
return 9049;
case 291:
return 9056;
case 292:
return 9062;
case 293:
return 9068;
case 294:
return 9074;
case 295:
return 9081;
case 296:
return 9088;
case 297:
return 9095;
case 298:
return 9102;
case 299:
return 9109;
case 300:
return 9116;
case 301:
return 9123;
case 302:
return 9130;
case 303:
return 9137;
case 304:
return 9144;
case 305:
return 9150;
case 306:
return 9156;
case 307:
return 9637;
case 308:
return 9644;
case 309:
return 9651;
case 310:
return 9658;
case 311:
return 9665;
case 312:
return 9672;
case 313:
return 9679;
case 314:
return 9686;
case 315:
return 9693;
case 316:
return 9700;
case 317:
return 9921;
case 318:
return 9928;
case 319:
return 9935;
case 320:
return 9942;
case 321:
return 9949;
case 322:
return 9956;
case 323:
return 9963;
case 324:
return 9970;
case 325:
return 9977;
case 326:
return 9984;
case 327:
return 9991;
case 328:
return 9998;
case 329:
return 10005;
case 330:
return 10012;
case 331:
return 10019;
case 332:
return 10026;
case 333:
return 10033;
case 334:
return 10040;
case 335:
return 10047;
case 336:
return 10054;
default:
}
switch (iParam1){
case 337:
return 10447;
case 338:
return 10454;
case 339:
return 10461;
case 340:
return 10468;
case 341:
return 10475;
case 342:
return 10482;
case 343:
return 10489;
case 344:
return 10496;
case 345:
return 10503;
case 346:
return 10510;
case 347:
return 10517;
case 348:
return 10523;
case 349:
return 10529;
case 350:
return 10535;
case 351:
return 10542;
case 352:
return 10549;
case 353:
return 10556;
case 354:
return 10563;
case 355:
return 10570;
case 356:
return 10577;
case 357:
return 10584;
case 358:
return 10591;
case 359:
return 10598;
case 360:
return 10605;
case 361:
return 10611;
case 362:
return 10617;
default:
}
break;
case 2:
switch (iParam1){
case 0:
return 1631;
case 1:
return 1638;
case 2:
return 1645;
case 3:
return 1652;
case 4:
return 1659;
case 5:
return 1666;
case 6:
return 1673;
case 7:
return 1680;
case 8:
return 1687;
case 9:
return 1694;
case 10:
return 1701;
case 11:
return 1707;
case 12:
return 1713;
case 13:
return 1719;
case 14:
return 1798;
case 15:
return 1805;
case 16:
return 1812;
case 17:
return 1819;
case 18:
return 1826;
case 19:
return 1833;
case 20:
return 1840;
case 21:
return 1847;
case 22:
return 1854;
case 23:
return 1861;
case 24:
return 1867;
case 25:
return 1873;
case 26:
return 2168;
case 27:
return 2175;
case 28:
return 2182;
case 29:
return 2189;
case 30:
return 2196;
case 31:
return 2203;
case 32:
return 2210;
case 33:
return 2217;
case 34:
return 2224;
case 35:
return 2231;
case 36:
return 2238;
case 37:
return 2244;
case 38:
return 2250;
case 39:
return 2832;
case 40:
return 2839;
case 41:
return 2846;
case 42:
return 2853;
case 43:
return 2860;
case 44:
return 2867;
case 45:
return 2874;
case 46:
return 2881;
case 47:
return 2888;
case 48:
return 2895;
case 49:
return 2902;
case 50:
return 2908;
case 51:
return 2914;
case 52:
return 2956;
case 53:
return 2963;
case 54:
return 2970;
case 55:
return 2977;
case 56:
return 2984;
case 57:
return 2991;
case 58:
return 2998;
case 59:
return 3005;
case 60:
return 3012;
case 61:
return 3019;
case 62:
return 3026;
case 63:
return 3032;
case 64:
return 3038;
case 65:
return 3239;
case 66:
return 3247;
case 67:
return 3255;
case 68:
return 3263;
case 69:
return 3271;
case 70:
return 3279;
case 71:
return 3287;
case 72:
return 3295;
case 73:
return 3303;
case 74:
return 3311;
case 75:
return 3319;
case 76:
return 3327;
case 77:
return 3335;
case 78:
return 3343;
case 79:
return 3351;
case 80:
return 3359;
case 81:
return 3367;
case 82:
return 3375;
case 83:
return 3383;
case 84:
return 3391;
case 85:
return 3399;
case 86:
return 3406;
case 87:
return 3413;
default:
}
switch (iParam1){
case 88:
return 4035;
case 89:
return 4043;
case 90:
return 4051;
case 91:
return 4059;
case 92:
return 4067;
case 93:
return 4075;
case 94:
return 4083;
case 95:
return 4091;
case 96:
return 4099;
case 97:
return 4107;
case 98:
return 4115;
case 99:
return 4123;
case 100:
return 4131;
case 101:
return 4139;
case 102:
return 4147;
case 103:
return 4155;
case 104:
return 4163;
case 105:
return 4171;
case 106:
return 4179;
case 107:
return 4187;
case 108:
return 4195;
case 109:
return 4203;
case 110:
return 4211;
case 111:
return 4219;
case 112:
return 4227;
case 113:
return 4235;
case 114:
return 4243;
case 115:
return 4251;
case 116:
return 4259;
case 117:
return 4267;
case 118:
return 4275;
case 119:
return 4283;
case 120:
return 4291;
case 121:
return 4299;
case 122:
return 4307;
case 123:
return 4315;
case 124:
return 4323;
case 125:
return 4331;
case 126:
return 4339;
case 127:
return 4347;
case 128:
return 4355;
case 129:
return 4363;
case 130:
return 4371;
case 131:
return 4379;
case 132:
return 4387;
case 133:
return 4395;
case 134:
return 4403;
case 135:
return 4411;
case 136:
return 4419;
case 137:
return 4427;
case 138:
return 4435;
case 139:
return 4443;
case 140:
return 4451;
case 141:
return 4459;
case 142:
return 4467;
case 143:
return 4475;
case 144:
return 4483;
case 145:
return 4491;
case 146:
return 4499;
case 147:
return 4507;
case 148:
return 4515;
case 149:
return 4523;
case 150:
return 4531;
case 151:
return 4539;
case 152:
return 4547;
case 153:
return 4555;
case 154:
return 4563;
case 155:
return 4571;
case 156:
return 4579;
case 157:
return 4587;
case 158:
return 5480;
default:
}
switch (iParam1){
case 159:
return 5929;
case 160:
return 5936;
case 161:
return 5943;
case 162:
return 5950;
case 163:
return 5957;
case 164:
return 5964;
case 165:
return 5971;
case 166:
return 5978;
case 167:
return 5985;
case 168:
return 5992;
case 169:
return 5999;
case 170:
return 6006;
case 171:
return 6013;
case 172:
return 6020;
case 173:
return 6027;
case 174:
return 6034;
case 175:
return 6041;
case 176:
return 6048;
case 177:
return 6055;
case 178:
return 6062;
case 179:
return 6069;
case 180:
return 6076;
case 181:
return 6083;
case 182:
return 6090;
case 183:
return 6097;
default:
}
switch (iParam1){
case 184:
return 6174;
case 185:
return 6181;
case 186:
return 6188;
case 187:
return 6195;
case 188:
return 6202;
case 189:
return 6209;
case 190:
return 6216;
case 191:
return 6223;
case 192:
return 6230;
case 193:
return 6237;
default:
}
switch (iParam1){
case 194:
return 6571;
case 195:
return 6578;
case 196:
return 6585;
case 197:
return 6592;
case 198:
return 6599;
case 199:
return 6606;
case 200:
return 6613;
case 201:
return 6620;
case 202:
return 6627;
case 203:
return 6634;
case 204:
return 6641;
case 205:
return 6648;
case 206:
return 6655;
case 207:
return 6662;
case 208:
return 6669;
case 209:
return 6676;
case 210:
return 6683;
case 211:
return 6690;
case 212:
return 6697;
case 213:
return 6704;
case 214:
return 6711;
case 215:
return 6718;
case 216:
return 6725;
case 217:
return 6732;
case 218:
return 6739;
case 219:
return 6746;
case 220:
return 6753;
case 221:
return 6760;
case 222:
return 6767;
case 223:
return 6774;
case 224:
return 6781;
case 225:
return 6788;
case 226:
return 6795;
case 227:
return 6802;
case 228:
return 6809;
case 229:
return 6816;
case 230:
return 6823;
default:
}
switch (iParam1){
case 231:
return 7293;
case 232:
return 7300;
case 233:
return 7307;
case 234:
return 7314;
case 235:
return 7321;
case 236:
return 7328;
case 237:
return 7335;
case 238:
return 7342;
case 239:
return 7349;
case 240:
return 7356;
case 241:
return 7363;
case 242:
return 7370;
case 243:
return 7377;
case 244:
return 7384;
case 245:
return 7391;
case 246:
return 7398;
case 247:
return 7405;
case 248:
return 7412;
case 249:
return 7419;
case 250:
return 7426;
case 251:
return 7433;
case 252:
return 7440;
case 253:
return 7447;
case 254:
return 7454;
case 255:
return 7461;
case 256:
return 7468;
case 257:
return 7475;
case 258:
return 7482;
case 259:
return 7489;
case 260:
return 7496;
default:
}
switch (iParam1){
case 261:
return 8016;
case 262:
return 8023;
case 263:
return 8030;
case 264:
return 8037;
case 265:
return 8044;
case 266:
return 8051;
case 267:
return 8058;
case 268:
return 8065;
case 269:
return 8072;
case 270:
return 8079;
case 271:
return 8540;
case 272:
return 8547;
case 273:
return 8554;
case 274:
return 8561;
case 275:
return 8568;
case 276:
return 8575;
case 277:
return 8582;
case 278:
return 8589;
case 279:
return 8596;
case 280:
return 8603;
case 281:
return 8987;
case 282:
return 8994;
case 283:
return 9001;
case 284:
return 9008;
case 285:
return 9015;
case 286:
return 9022;
case 287:
return 9029;
case 288:
return 9036;
case 289:
return 9043;
case 290:
return 9050;
case 291:
return 9057;
case 292:
return 9063;
case 293:
return 9069;
case 294:
return 9075;
case 295:
return 9082;
case 296:
return 9089;
case 297:
return 9096;
case 298:
return 9103;
case 299:
return 9110;
case 300:
return 9117;
case 301:
return 9124;
case 302:
return 9131;
case 303:
return 9138;
case 304:
return 9145;
case 305:
return 9151;
case 306:
return 9157;
case 307:
return 9638;
case 308:
return 9645;
case 309:
return 9652;
case 310:
return 9659;
case 311:
return 9666;
case 312:
return 9673;
case 313:
return 9680;
case 314:
return 9687;
case 315:
return 9694;
case 316:
return 9701;
case 317:
return 9922;
case 318:
return 9929;
case 319:
return 9936;
case 320:
return 9943;
case 321:
return 9950;
case 322:
return 9957;
case 323:
return 9964;
case 324:
return 9971;
case 325:
return 9978;
case 326:
return 9985;
case 327:
return 9992;
case 328:
return 9999;
case 329:
return 10006;
case 330:
return 10013;
case 331:
return 10020;
case 332:
return 10027;
case 333:
return 10034;
case 334:
return 10041;
case 335:
return 10048;
case 336:
return 10055;
default:
}
switch (iParam1){
case 337:
return 10448;
case 338:
return 10455;
case 339:
return 10462;
case 340:
return 10469;
case 341:
return 10476;
case 342:
return 10483;
case 343:
return 10490;
case 344:
return 10497;
case 345:
return 10504;
case 346:
return 10511;
case 347:
return 10518;
case 348:
return 10524;
case 349:
return 10530;
case 350:
return 10536;
case 351:
return 10543;
case 352:
return 10550;
case 353:
return 10557;
case 354:
return 10564;
case 355:
return 10571;
case 356:
return 10578;
case 357:
return 10585;
case 358:
return 10592;
case 359:
return 10599;
case 360:
return 10606;
case 361:
return 10612;
case 362:
return 10618;
default:
}
break;
case 3:
switch (iParam1){
case 0:
return 1632;
case 1:
return 1639;
case 2:
return 1646;
case 3:
return 1653;
case 4:
return 1660;
case 5:
return 1667;
case 6:
return 1674;
case 7:
return 1681;
case 8:
return 1688;
case 9:
return 1695;
case 10:
return 1702;
case 11:
return 1708;
case 12:
return 1714;
case 13:
return 1720;
case 14:
return 1799;
case 15:
return 1806;
case 16:
return 1813;
case 17:
return 1820;
case 18:
return 1827;
case 19:
return 1834;
case 20:
return 1841;
case 21:
return 1848;
case 22:
return 1855;
case 23:
return 1862;
case 24:
return 1868;
case 25:
return 1874;
case 26:
return 2169;
case 27:
return 2176;
case 28:
return 2183;
case 29:
return 2190;
case 30:
return 2197;
case 31:
return 2204;
case 32:
return 2211;
case 33:
return 2218;
case 34:
return 2225;
case 35:
return 2232;
case 36:
return 2239;
case 37:
return 2245;
case 38:
return 2251;
case 39:
return 2833;
case 40:
return 2840;
case 41:
return 2847;
case 42:
return 2854;
case 43:
return 2861;
case 44:
return 2868;
case 45:
return 2875;
case 46:
return 2882;
case 47:
return 2889;
case 48:
return 2896;
case 49:
return 2903;
case 50:
return 2909;
case 51:
return 2915;
case 52:
return 2957;
case 53:
return 2964;
case 54:
return 2971;
case 55:
return 2978;
case 56:
return 2985;
case 57:
return 2992;
case 58:
return 2999;
case 59:
return 3006;
case 60:
return 3013;
case 61:
return 3020;
case 62:
return 3027;
case 63:
return 3033;
case 64:
return 3039;
case 65:
return 3240;
case 66:
return 3248;
case 67:
return 3256;
case 68:
return 3264;
case 69:
return 3272;
case 70:
return 3280;
case 71:
return 3288;
case 72:
return 3296;
case 73:
return 3304;
case 74:
return 3312;
case 75:
return 3320;
case 76:
return 3328;
case 77:
return 3336;
case 78:
return 3344;
case 79:
return 3352;
case 80:
return 3360;
case 81:
return 3368;
case 82:
return 3376;
case 83:
return 3384;
case 84:
return 3392;
case 85:
return 3400;
case 86:
return 3407;
case 87:
return 3414;
default:
}
switch (iParam1){
case 88:
return 4036;
case 89:
return 4044;
case 90:
return 4052;
case 91:
return 4060;
case 92:
return 4068;
case 93:
return 4076;
case 94:
return 4084;
case 95:
return 4092;
case 96:
return 4100;
case 97:
return 4108;
case 98:
return 4116;
case 99:
return 4124;
case 100:
return 4132;
case 101:
return 4140;
case 102:
return 4148;
case 103:
return 4156;
case 104:
return 4164;
case 105:
return 4172;
case 106:
return 4180;
case 107:
return 4188;
case 108:
return 4196;
case 109:
return 4204;
case 110:
return 4212;
case 111:
return 4220;
case 112:
return 4228;
case 113:
return 4236;
case 114:
return 4244;
case 115:
return 4252;
case 116:
return 4260;
case 117:
return 4268;
case 118:
return 4276;
case 119:
return 4284;
case 120:
return 4292;
case 121:
return 4300;
case 122:
return 4308;
case 123:
return 4316;
case 124:
return 4324;
case 125:
return 4332;
case 126:
return 4340;
case 127:
return 4348;
case 128:
return 4356;
case 129:
return 4364;
case 130:
return 4372;
case 131:
return 4380;
case 132:
return 4388;
case 133:
return 4396;
case 134:
return 4404;
case 135:
return 4412;
case 136:
return 4420;
case 137:
return 4428;
case 138:
return 4436;
case 139:
return 4444;
case 140:
return 4452;
case 141:
return 4460;
case 142:
return 4468;
case 143:
return 4476;
case 144:
return 4484;
case 145:
return 4492;
case 146:
return 4500;
case 147:
return 4508;
case 148:
return 4516;
case 149:
return 4524;
case 150:
return 4532;
case 151:
return 4540;
case 152:
return 4548;
case 153:
return 4556;
case 154:
return 4564;
case 155:
return 4572;
case 156:
return 4580;
case 157:
return 4588;
case 158:
return 5481;
default:
}
switch (iParam1){
case 159:
return 5930;
case 160:
return 5937;
case 161:
return 5944;
case 162:
return 5951;
case 163:
return 5958;
case 164:
return 5965;
case 165:
return 5972;
case 166:
return 5979;
case 167:
return 5986;
case 168:
return 5993;
case 169:
return 6000;
case 170:
return 6007;
case 171:
return 6014;
case 172:
return 6021;
case 173:
return 6028;
case 174:
return 6035;
case 175:
return 6042;
case 176:
return 6049;
case 177:
return 6056;
case 178:
return 6063;
case 179:
return 6070;
case 180:
return 6077;
case 181:
return 6084;
case 182:
return 6091;
case 183:
return 6098;
default:
}
switch (iParam1){
case 184:
return 6175;
case 185:
return 6182;
case 186:
return 6189;
case 187:
return 6196;
case 188:
return 6203;
case 189:
return 6210;
case 190:
return 6217;
case 191:
return 6224;
case 192:
return 6231;
case 193:
return 6238;
default:
}
switch (iParam1){
case 194:
return 6572;
case 195:
return 6579;
case 196:
return 6586;
case 197:
return 6593;
case 198:
return 6600;
case 199:
return 6607;
case 200:
return 6614;
case 201:
return 6621;
case 202:
return 6628;
case 203:
return 6635;
case 204:
return 6642;
case 205:
return 6649;
case 206:
return 6656;
case 207:
return 6663;
case 208:
return 6670;
case 209:
return 6677;
case 210:
return 6684;
case 211:
return 6691;
case 212:
return 6698;
case 213:
return 6705;
case 214:
return 6712;
case 215:
return 6719;
case 216:
return 6726;
case 217:
return 6733;
case 218:
return 6740;
case 219:
return 6747;
case 220:
return 6754;
case 221:
return 6761;
case 222:
return 6768;
case 223:
return 6775;
case 224:
return 6782;
case 225:
return 6789;
case 226:
return 6796;
case 227:
return 6803;
case 228:
return 6810;
case 229:
return 6817;
case 230:
return 6824;
default:
}
switch (iParam1){
case 231:
return 7294;
case 232:
return 7301;
case 233:
return 7308;
case 234:
return 7315;
case 235:
return 7322;
case 236:
return 7329;
case 237:
return 7336;
case 238:
return 7343;
case 239:
return 7350;
case 240:
return 7357;
case 241:
return 7364;
case 242:
return 7371;
case 243:
return 7378;
case 244:
return 7385;
case 245:
return 7392;
case 246:
return 7399;
case 247:
return 7406;
case 248:
return 7413;
case 249:
return 7420;
case 250:
return 7427;
case 251:
return 7434;
case 252:
return 7441;
case 253:
return 7448;
case 254:
return 7455;
case 255:
return 7462;
case 256:
return 7469;
case 257:
return 7476;
case 258:
return 7483;
case 259:
return 7490;
case 260:
return 7497;
default:
}
switch (iParam1){
case 261:
return 8017;
case 262:
return 8024;
case 263:
return 8031;
case 264:
return 8038;
case 265:
return 8045;
case 266:
return 8052;
case 267:
return 8059;
case 268:
return 8066;
case 269:
return 8073;
case 270:
return 8080;
case 271:
return 8541;
case 272:
return 8548;
case 273:
return 8555;
case 274:
return 8562;
case 275:
return 8569;
case 276:
return 8576;
case 277:
return 8583;
case 278:
return 8590;
case 279:
return 8597;
case 280:
return 8604;
case 281:
return 8988;
case 282:
return 8995;
case 283:
return 9002;
case 284:
return 9009;
case 285:
return 9016;
case 286:
return 9023;
case 287:
return 9030;
case 288:
return 9037;
case 289:
return 9044;
case 290:
return 9051;
case 291:
return 9058;
case 292:
return 9064;
case 293:
return 9070;
case 294:
return 9076;
case 295:
return 9083;
case 296:
return 9090;
case 297:
return 9097;
case 298:
return 9104;
case 299:
return 9111;
case 300:
return 9118;
case 301:
return 9125;
case 302:
return 9132;
case 303:
return 9139;
case 304:
return 9146;
case 305:
return 9152;
case 306:
return 9158;
case 307:
return 9639;
case 308:
return 9646;
case 309:
return 9653;
case 310:
return 9660;
case 311:
return 9667;
case 312:
return 9674;
case 313:
return 9681;
case 314:
return 9688;
case 315:
return 9695;
case 316:
return 9702;
case 317:
return 9923;
case 318:
return 9930;
case 319:
return 9937;
case 320:
return 9944;
case 321:
return 9951;
case 322:
return 9958;
case 323:
return 9965;
case 324:
return 9972;
case 325:
return 9979;
case 326:
return 9986;
case 327:
return 9993;
case 328:
return 10000;
case 329:
return 10007;
case 330:
return 10014;
case 331:
return 10021;
case 332:
return 10028;
case 333:
return 10035;
case 334:
return 10042;
case 335:
return 10049;
case 336:
return 10056;
default:
}
switch (iParam1){
case 337:
return 10449;
case 338:
return 10456;
case 339:
return 10463;
case 340:
return 10470;
case 341:
return 10477;
case 342:
return 10484;
case 343:
return 10491;
case 344:
return 10498;
case 345:
return 10505;
case 346:
return 10512;
case 347:
return 10519;
case 348:
return 10525;
case 349:
return 10531;
case 350:
return 10537;
case 351:
return 10544;
case 352:
return 10551;
case 353:
return 10558;
case 354:
return 10565;
case 355:
return 10572;
case 356:
return 10579;
case 357:
return 10586;
case 358:
return 10593;
case 359:
return 10600;
case 360:
return 10607;
case 361:
return 10613;
case 362:
return 10619;
default:
}
break;
case 4:
switch (iParam1){
case 0:
return 1633;
case 1:
return 1640;
case 2:
return 1647;
case 3:
return 1654;
case 4:
return 1661;
case 5:
return 1668;
case 6:
return 1675;
case 7:
return 1682;
case 8:
return 1689;
case 9:
return 1696;
case 10:
return 1703;
case 11:
return 1709;
case 12:
return 1715;
case 13:
return 1721;
case 14:
return 1800;
case 15:
return 1807;
case 16:
return 1814;
case 17:
return 1821;
case 18:
return 1828;
case 19:
return 1835;
case 20:
return 1842;
case 21:
return 1849;
case 22:
return 1856;
case 23:
return 1863;
case 24:
return 1869;
case 25:
return 1875;
case 26:
return 2170;
case 27:
return 2177;
case 28:
return 2184;
case 29:
return 2191;
case 30:
return 2198;
case 31:
return 2205;
case 32:
return 2212;
case 33:
return 2219;
case 34:
return 2226;
case 35:
return 2233;
case 36:
return 2240;
case 37:
return 2246;
case 38:
return 2252;
case 39:
return 2834;
case 40:
return 2841;
case 41:
return 2848;
case 42:
return 2855;
case 43:
return 2862;
case 44:
return 2869;
case 45:
return 2876;
case 46:
return 2883;
case 47:
return 2890;
case 48:
return 2897;
case 49:
return 2904;
case 50:
return 2910;
case 51:
return 2916;
case 52:
return 2958;
case 53:
return 2965;
case 54:
return 2972;
case 55:
return 2979;
case 56:
return 2986;
case 57:
return 2993;
case 58:
return 3000;
case 59:
return 3007;
case 60:
return 3014;
case 61:
return 3021;
case 62:
return 3028;
case 63:
return 3034;
case 64:
return 3040;
case 65:
return 3241;
case 66:
return 3249;
case 67:
return 3257;
case 68:
return 3265;
case 69:
return 3273;
case 70:
return 3281;
case 71:
return 3289;
case 72:
return 3297;
case 73:
return 3305;
case 74:
return 3313;
case 75:
return 3321;
case 76:
return 3329;
case 77:
return 3337;
case 78:
return 3345;
case 79:
return 3353;
case 80:
return 3361;
case 81:
return 3369;
case 82:
return 3377;
case 83:
return 3385;
case 84:
return 3393;
case 85:
return 3401;
case 86:
return 3408;
case 87:
return 3415;
default:
}
switch (iParam1){
case 88:
return 4037;
case 89:
return 4045;
case 90:
return 4053;
case 91:
return 4061;
case 92:
return 4069;
case 93:
return 4077;
case 94:
return 4085;
case 95:
return 4093;
case 96:
return 4101;
case 97:
return 4109;
case 98:
return 4117;
case 99:
return 4125;
case 100:
return 4133;
case 101:
return 4141;
case 102:
return 4149;
case 103:
return 4157;
case 104:
return 4165;
case 105:
return 4173;
case 106:
return 4181;
case 107:
return 4189;
case 108:
return 4197;
case 109:
return 4205;
case 110:
return 4213;
case 111:
return 4221;
case 112:
return 4229;
case 113:
return 4237;
case 114:
return 4245;
case 115:
return 4253;
case 116:
return 4261;
case 117:
return 4269;
case 118:
return 4277;
case 119:
return 4285;
case 120:
return 4293;
case 121:
return 4301;
case 122:
return 4309;
case 123:
return 4317;
case 124:
return 4325;
case 125:
return 4333;
case 126:
return 4341;
case 127:
return 4349;
case 128:
return 4357;
case 129:
return 4365;
case 130:
return 4373;
case 131:
return 4381;
case 132:
return 4389;
case 133:
return 4397;
case 134:
return 4405;
case 135:
return 4413;
case 136:
return 4421;
case 137:
return 4429;
case 138:
return 4437;
case 139:
return 4445;
case 140:
return 4453;
case 141:
return 4461;
case 142:
return 4469;
case 143:
return 4477;
case 144:
return 4485;
case 145:
return 4493;
case 146:
return 4501;
case 147:
return 4509;
case 148:
return 4517;
case 149:
return 4525;
case 150:
return 4533;
case 151:
return 4541;
case 152:
return 4549;
case 153:
return 4557;
case 154:
return 4565;
case 155:
return 4573;
case 156:
return 4581;
case 157:
return 4589;
case 158:
return 5482;
default:
}
switch (iParam1){
case 159:
return 5931;
case 160:
return 5938;
case 161:
return 5945;
case 162:
return 5952;
case 163:
return 5959;
case 164:
return 5966;
case 165:
return 5973;
case 166:
return 5980;
case 167:
return 5987;
case 168:
return 5994;
case 169:
return 6001;
case 170:
return 6008;
case 171:
return 6015;
case 172:
return 6022;
case 173:
return 6029;
case 174:
return 6036;
case 175:
return 6043;
case 176:
return 6050;
case 177:
return 6057;
case 178:
return 6064;
case 179:
return 6071;
case 180:
return 6078;
case 181:
return 6085;
case 182:
return 6092;
case 183:
return 6099;
default:
}
switch (iParam1){
case 184:
return 6176;
case 185:
return 6183;
case 186:
return 6190;
case 187:
return 6197;
case 188:
return 6204;
case 189:
return 6211;
case 190:
return 6218;
case 191:
return 6225;
case 192:
return 6232;
case 193:
return 6239;
default:
}
switch (iParam1){
case 194:
return 6573;
case 195:
return 6580;
case 196:
return 6587;
case 197:
return 6594;
case 198:
return 6601;
case 199:
return 6608;
case 200:
return 6615;
case 201:
return 6622;
case 202:
return 6629;
case 203:
return 6636;
case 204:
return 6643;
case 205:
return 6650;
case 206:
return 6657;
case 207:
return 6664;
case 208:
return 6671;
case 209:
return 6678;
case 210:
return 6685;
case 211:
return 6692;
case 212:
return 6699;
case 213:
return 6706;
case 214:
return 6713;
case 215:
return 6720;
case 216:
return 6727;
case 217:
return 6734;
case 218:
return 6741;
case 219:
return 6748;
case 220:
return 6755;
case 221:
return 6762;
case 222:
return 6769;
case 223:
return 6776;
case 224:
return 6783;
case 225:
return 6790;
case 226:
return 6797;
case 227:
return 6804;
case 228:
return 6811;
case 229:
return 6818;
case 230:
return 6825;
default:
}
switch (iParam1){
case 231:
return 7295;
case 232:
return 7302;
case 233:
return 7309;
case 234:
return 7316;
case 235:
return 7323;
case 236:
return 7330;
case 237:
return 7337;
case 238:
return 7344;
case 239:
return 7351;
case 240:
return 7358;
case 241:
return 7365;
case 242:
return 7372;
case 243:
return 7379;
case 244:
return 7386;
case 245:
return 7393;
case 246:
return 7400;
case 247:
return 7407;
case 248:
return 7414;
case 249:
return 7421;
case 250:
return 7428;
case 251:
return 7435;
case 252:
return 7442;
case 253:
return 7449;
case 254:
return 7456;
case 255:
return 7463;
case 256:
return 7470;
case 257:
return 7477;
case 258:
return 7484;
case 259:
return 7491;
case 260:
return 7498;
default:
}
switch (iParam1){
case 261:
return 8018;
case 262:
return 8025;
case 263:
return 8032;
case 264:
return 8039;
case 265:
return 8046;
case 266:
return 8053;
case 267:
return 8060;
case 268:
return 8067;
case 269:
return 8074;
case 270:
return 8081;
case 271:
return 8542;
case 272:
return 8549;
case 273:
return 8556;
case 274:
return 8563;
case 275:
return 8570;
case 276:
return 8577;
case 277:
return 8584;
case 278:
return 8591;
case 279:
return 8598;
case 280:
return 8605;
case 281:
return 8989;
case 282:
return 8996;
case 283:
return 9003;
case 284:
return 9010;
case 285:
return 9017;
case 286:
return 9024;
case 287:
return 9031;
case 288:
return 9038;
case 289:
return 9045;
case 290:
return 9052;
case 291:
return 9059;
case 292:
return 9065;
case 293:
return 9071;
case 294:
return 9077;
case 295:
return 9084;
case 296:
return 9091;
case 297:
return 9098;
case 298:
return 9105;
case 299:
return 9112;
case 300:
return 9119;
case 301:
return 9126;
case 302:
return 9133;
case 303:
return 9140;
case 304:
return 9147;
case 305:
return 9153;
case 306:
return 9159;
case 307:
return 9640;
case 308:
return 9647;
case 309:
return 9654;
case 310:
return 9661;
case 311:
return 9668;
case 312:
return 9675;
case 313:
return 9682;
case 314:
return 9689;
case 315:
return 9696;
case 316:
return 9703;
case 317:
return 9924;
case 318:
return 9931;
case 319:
return 9938;
case 320:
return 9945;
case 321:
return 9952;
case 322:
return 9959;
case 323:
return 9966;
case 324:
return 9973;
case 325:
return 9980;
case 326:
return 9987;
case 327:
return 9994;
case 328:
return 10001;
case 329:
return 10008;
case 330:
return 10015;
case 331:
return 10022;
case 332:
return 10029;
case 333:
return 10036;
case 334:
return 10043;
case 335:
return 10050;
case 336:
return 10057;
default:
}
switch (iParam1){
case 337:
return 10450;
case 338:
return 10457;
case 339:
return 10464;
case 340:
return 10471;
case 341:
return 10478;
case 342:
return 10485;
case 343:
return 10492;
case 344:
return 10499;
case 345:
return 10506;
case 346:
return 10513;
case 347:
return 10520;
case 348:
return 10526;
case 349:
return 10532;
case 350:
return 10538;
case 351:
return 10545;
case 352:
return 10552;
case 353:
return 10559;
case 354:
return 10566;
case 355:
return 10573;
case 356:
return 10580;
case 357:
return 10587;
case 358:
return 10594;
case 359:
return 10601;
case 360:
return 10608;
case 361:
return 10614;
case 362:
return 10620;
default:
}
break;
case 5:
switch (iParam1){
case 0:
return 1634;
case 1:
return 1641;
case 2:
return 1648;
case 3:
return 1655;
case 4:
return 1662;
case 5:
return 1669;
case 6:
return 1676;
case 7:
return 1683;
case 8:
return 1690;
case 9:
return 1697;
case 10:
return 1704;
case 11:
return 1710;
case 12:
return 1716;
case 13:
return 1722;
case 14:
return 1801;
case 15:
return 1808;
case 16:
return 1815;
case 17:
return 1822;
case 18:
return 1829;
case 19:
return 1836;
case 20:
return 1843;
case 21:
return 1850;
case 22:
return 1857;
case 23:
return 1864;
case 24:
return 1870;
case 25:
return 1876;
case 26:
return 2171;
case 27:
return 2178;
case 28:
return 2185;
case 29:
return 2192;
case 30:
return 2199;
case 31:
return 2206;
case 32:
return 2213;
case 33:
return 2220;
case 34:
return 2227;
case 35:
return 2234;
case 36:
return 2241;
case 37:
return 2247;
case 38:
return 2253;
case 39:
return 2835;
case 40:
return 2842;
case 41:
return 2849;
case 42:
return 2856;
case 43:
return 2863;
case 44:
return 2870;
case 45:
return 2877;
case 46:
return 2884;
case 47:
return 2891;
case 48:
return 2898;
case 49:
return 2905;
case 50:
return 2911;
case 51:
return 2917;
case 52:
return 2959;
case 53:
return 2966;
case 54:
return 2973;
case 55:
return 2980;
case 56:
return 2987;
case 57:
return 2994;
case 58:
return 3001;
case 59:
return 3008;
case 60:
return 3015;
case 61:
return 3022;
case 62:
return 3029;
case 63:
return 3035;
case 64:
return 3041;
case 65:
return 3242;
case 66:
return 3250;
case 67:
return 3258;
case 68:
return 3266;
case 69:
return 3274;
case 70:
return 3282;
case 71:
return 3290;
case 72:
return 3298;
case 73:
return 3306;
case 74:
return 3314;
case 75:
return 3322;
case 76:
return 3330;
case 77:
return 3338;
case 78:
return 3346;
case 79:
return 3354;
case 80:
return 3362;
case 81:
return 3370;
case 82:
return 3378;
case 83:
return 3386;
case 84:
return 3394;
case 85:
return 3402;
case 86:
return 3409;
case 87:
return 3416;
default:
}
switch (iParam1){
case 88:
return 4038;
case 89:
return 4046;
case 90:
return 4054;
case 91:
return 4062;
case 92:
return 4070;
case 93:
return 4078;
case 94:
return 4086;
case 95:
return 4094;
case 96:
return 4102;
case 97:
return 4110;
case 98:
return 4118;
case 99:
return 4126;
case 100:
return 4134;
case 101:
return 4142;
case 102:
return 4150;
case 103:
return 4158;
case 104:
return 4166;
case 105:
return 4174;
case 106:
return 4182;
case 107:
return 4190;
case 108:
return 4198;
case 109:
return 4206;
case 110:
return 4214;
case 111:
return 4222;
case 112:
return 4230;
case 113:
return 4238;
case 114:
return 4246;
case 115:
return 4254;
case 116:
return 4262;
case 117:
return 4270;
case 118:
return 4278;
case 119:
return 4286;
case 120:
return 4294;
case 121:
return 4302;
case 122:
return 4310;
case 123:
return 4318;
case 124:
return 4326;
case 125:
return 4334;
case 126:
return 4342;
case 127:
return 4350;
case 128:
return 4358;
case 129:
return 4366;
case 130:
return 4374;
case 131:
return 4382;
case 132:
return 4390;
case 133:
return 4398;
case 134:
return 4406;
case 135:
return 4414;
case 136:
return 4422;
case 137:
return 4430;
case 138:
return 4438;
case 139:
return 4446;
case 140:
return 4454;
case 141:
return 4462;
case 142:
return 4470;
case 143:
return 4478;
case 144:
return 4486;
case 145:
return 4494;
case 146:
return 4502;
case 147:
return 4510;
case 148:
return 4518;
case 149:
return 4526;
case 150:
return 4534;
case 151:
return 4542;
case 152:
return 4550;
case 153:
return 4558;
case 154:
return 4566;
case 155:
return 4574;
case 156:
return 4582;
case 157:
return 4590;
case 158:
return 5483;
default:
}
switch (iParam1){
case 159:
return 5932;
case 160:
return 5939;
case 161:
return 5946;
case 162:
return 5953;
case 163:
return 5960;
case 164:
return 5967;
case 165:
return 5974;
case 166:
return 5981;
case 167:
return 5988;
case 168:
return 5995;
case 169:
return 6002;
case 170:
return 6009;
case 171:
return 6016;
case 172:
return 6023;
case 173:
return 6030;
case 174:
return 6037;
case 175:
return 6044;
case 176:
return 6051;
case 177:
return 6058;
case 178:
return 6065;
case 179:
return 6072;
case 180:
return 6079;
case 181:
return 6086;
case 182:
return 6093;
case 183:
return 6100;
default:
}
switch (iParam1){
case 184:
return 6177;
case 185:
return 6184;
case 186:
return 6191;
case 187:
return 6198;
case 188:
return 6205;
case 189:
return 6212;
case 190:
return 6219;
case 191:
return 6226;
case 192:
return 6233;
case 193:
return 6240;
default:
}
switch (iParam1){
case 194:
return 6574;
case 195:
return 6581;
case 196:
return 6588;
case 197:
return 6595;
case 198:
return 6602;
case 199:
return 6609;
case 200:
return 6616;
case 201:
return 6623;
case 202:
return 6630;
case 203:
return 6637;
case 204:
return 6644;
case 205:
return 6651;
case 206:
return 6658;
case 207:
return 6665;
case 208:
return 6672;
case 209:
return 6679;
case 210:
return 6686;
case 211:
return 6693;
case 212:
return 6700;
case 213:
return 6707;
case 214:
return 6714;
case 215:
return 6721;
case 216:
return 6728;
case 217:
return 6735;
case 218:
return 6742;
case 219:
return 6749;
case 220:
return 6756;
case 221:
return 6763;
case 222:
return 6770;
case 223:
return 6777;
case 224:
return 6784;
case 225:
return 6791;
case 226:
return 6798;
case 227:
return 6805;
case 228:
return 6812;
case 229:
return 6819;
case 230:
return 6826;
default:
}
switch (iParam1){
case 231:
return 7296;
case 232:
return 7303;
case 233:
return 7310;
case 234:
return 7317;
case 235:
return 7324;
case 236:
return 7331;
case 237:
return 7338;
case 238:
return 7345;
case 239:
return 7352;
case 240:
return 7359;
case 241:
return 7366;
case 242:
return 7373;
case 243:
return 7380;
case 244:
return 7387;
case 245:
return 7394;
case 246:
return 7401;
case 247:
return 7408;
case 248:
return 7415;
case 249:
return 7422;
case 250:
return 7429;
case 251:
return 7436;
case 252:
return 7443;
case 253:
return 7450;
case 254:
return 7457;
case 255:
return 7464;
case 256:
return 7471;
case 257:
return 7478;
case 258:
return 7485;
case 259:
return 7492;
case 260:
return 7499;
default:
}
switch (iParam1){
case 261:
return 8019;
case 262:
return 8026;
case 263:
return 8033;
case 264:
return 8040;
case 265:
return 8047;
case 266:
return 8054;
case 267:
return 8061;
case 268:
return 8068;
case 269:
return 8075;
case 270:
return 8082;
case 271:
return 8543;
case 272:
return 8550;
case 273:
return 8557;
case 274:
return 8564;
case 275:
return 8571;
case 276:
return 8578;
case 277:
return 8585;
case 278:
return 8592;
case 279:
return 8599;
case 280:
return 8606;
case 281:
return 8990;
case 282:
return 8997;
case 283:
return 9004;
case 284:
return 9011;
case 285:
return 9018;
case 286:
return 9025;
case 287:
return 9032;
case 288:
return 9039;
case 289:
return 9046;
case 290:
return 9053;
case 291:
return 9060;
case 292:
return 9066;
case 293:
return 9072;
case 294:
return 9078;
case 295:
return 9085;
case 296:
return 9092;
case 297:
return 9099;
case 298:
return 9106;
case 299:
return 9113;
case 300:
return 9120;
case 301:
return 9127;
case 302:
return 9134;
case 303:
return 9141;
case 304:
return 9148;
case 305:
return 9154;
case 306:
return 9160;
case 307:
return 9641;
case 308:
return 9648;
case 309:
return 9655;
case 310:
return 9662;
case 311:
return 9669;
case 312:
return 9676;
case 313:
return 9683;
case 314:
return 9690;
case 315:
return 9697;
case 316:
return 9704;
case 317:
return 9925;
case 318:
return 9932;
case 319:
return 9939;
case 320:
return 9946;
case 321:
return 9953;
case 322:
return 9960;
case 323:
return 9967;
case 324:
return 9974;
case 325:
return 9981;
case 326:
return 9988;
case 327:
return 9995;
case 328:
return 10002;
case 329:
return 10009;
case 330:
return 10016;
case 331:
return 10023;
case 332:
return 10030;
case 333:
return 10037;
case 334:
return 10044;
case 335:
return 10051;
case 336:
return 10058;
default:
}
switch (iParam1){
case 337:
return 10451;
case 338:
return 10458;
case 339:
return 10465;
case 340:
return 10472;
case 341:
return 10479;
case 342:
return 10486;
case 343:
return 10493;
case 344:
return 10500;
case 345:
return 10507;
case 346:
return 10514;
case 347:
return 10521;
case 348:
return 10527;
case 349:
return 10533;
case 350:
return 10539;
case 351:
return 10546;
case 352:
return 10553;
case 353:
return 10560;
case 354:
return 10567;
case 355:
return 10574;
case 356:
return 10581;
case 357:
return 10588;
case 358:
return 10595;
case 359:
return 10602;
case 360:
return 10609;
case 361:
return 10615;
case 362:
return 10621;
default:
}
break;
case 6:
switch (iParam1){
case 0:
return 1636;
case 1:
return 1643;
case 2:
return 1650;
case 3:
return 1657;
case 4:
return 1664;
case 5:
return 1671;
case 6:
return 1678;
case 7:
return 1685;
case 8:
return 1692;
case 9:
return 1699;
case 13:
return 1724;
case 14:
return 1803;
case 15:
return 1810;
case 16:
return 1817;
case 17:
return 1824;
case 18:
return 1831;
case 19:
return 1838;
case 20:
return 1845;
case 21:
return 1852;
case 22:
return 1859;
case 26:
return 2173;
case 27:
return 2180;
case 28:
return 2187;
case 29:
return 2194;
case 30:
return 2201;
case 31:
return 2208;
case 32:
return 2215;
case 33:
return 2222;
case 34:
return 2229;
case 35:
return 2236;
case 39:
return 2837;
case 40:
return 2844;
case 41:
return 2851;
case 42:
return 2858;
case 43:
return 2865;
case 44:
return 2872;
case 45:
return 2879;
case 46:
return 2886;
case 47:
return 2893;
case 48:
return 2900;
case 52:
return 2961;
case 53:
return 2968;
case 54:
return 2975;
case 55:
return 2982;
case 56:
return 2989;
case 57:
return 2996;
case 58:
return 3003;
case 59:
return 3010;
case 60:
return 3017;
case 61:
return 3024;
case 65:
return 3245;
case 66:
return 3253;
case 67:
return 3261;
case 68:
return 3269;
case 69:
return 3277;
case 70:
return 3285;
case 71:
return 3293;
case 72:
return 3301;
case 73:
return 3309;
case 74:
return 3317;
case 75:
return 3325;
case 76:
return 3333;
case 77:
return 3341;
case 78:
return 3349;
case 79:
return 3357;
case 80:
return 3365;
case 81:
return 3373;
case 82:
return 3381;
case 83:
return 3389;
case 84:
return 3397;
default:
}
switch (iParam1){
case 88:
return 4041;
case 89:
return 4049;
case 90:
return 4057;
case 91:
return 4065;
case 92:
return 4073;
case 93:
return 4081;
case 94:
return 4089;
case 95:
return 4097;
case 96:
return 4105;
case 97:
return 4113;
case 98:
return 4121;
case 99:
return 4129;
case 100:
return 4137;
case 101:
return 4145;
case 102:
return 4153;
case 103:
return 4161;
case 104:
return 4169;
case 105:
return 4177;
case 106:
return 4185;
case 107:
return 4193;
case 108:
return 4201;
case 109:
return 4209;
case 110:
return 4217;
case 111:
return 4225;
case 112:
return 4233;
case 113:
return 4241;
case 114:
return 4249;
case 115:
return 4257;
case 116:
return 4265;
case 117:
return 4273;
case 118:
return 4281;
case 119:
return 4289;
case 120:
return 4297;
case 121:
return 4305;
case 122:
return 4313;
case 123:
return 4321;
case 124:
return 4329;
case 125:
return 4337;
case 126:
return 4345;
case 127:
return 4353;
case 128:
return 4361;
case 129:
return 4369;
case 130:
return 4377;
case 131:
return 4385;
case 132:
return 4393;
case 133:
return 4401;
case 134:
return 4409;
case 135:
return 4417;
case 136:
return 4425;
case 137:
return 4433;
case 138:
return 4441;
case 139:
return 4449;
case 140:
return 4457;
case 141:
return 4465;
case 142:
return 4473;
case 143:
return 4481;
case 144:
return 4489;
case 145:
return 4497;
case 146:
return 4505;
case 147:
return 4513;
case 148:
return 4521;
case 149:
return 4529;
case 150:
return 4537;
case 151:
return 4545;
case 152:
return 4553;
case 153:
return 4561;
case 154:
return 4569;
case 155:
return 4577;
case 156:
return 4585;
case 157:
return 4593;
case 158:
return 5486;
default:
}
switch (iParam1){
case 159:
return 5934;
case 160:
return 5941;
case 161:
return 5948;
case 162:
return 5955;
case 163:
return 5962;
case 164:
return 5969;
case 165:
return 5976;
case 166:
return 5983;
case 167:
return 5990;
case 168:
return 5997;
case 169:
return 6004;
case 170:
return 6011;
case 171:
return 6018;
case 172:
return 6025;
case 173:
return 6032;
case 174:
return 6039;
case 175:
return 6046;
case 176:
return 6053;
case 177:
return 6060;
case 178:
return 6067;
case 179:
return 6074;
case 180:
return 6081;
case 181:
return 6088;
case 182:
return 6095;
case 183:
return 6102;
default:
}
switch (iParam1){
case 184:
return 6179;
case 185:
return 6186;
case 186:
return 6193;
case 187:
return 6200;
case 188:
return 6207;
case 189:
return 6214;
case 190:
return 6221;
case 191:
return 6228;
case 192:
return 6235;
case 193:
return 6242;
default:
}
switch (iParam1){
case 194:
return 6576;
case 195:
return 6583;
case 196:
return 6590;
case 197:
return 6597;
case 198:
return 6604;
case 199:
return 6611;
case 200:
return 6618;
case 201:
return 6625;
case 202:
return 6632;
case 203:
return 6639;
case 204:
return 6646;
case 205:
return 6653;
case 206:
return 6660;
case 207:
return 6667;
case 208:
return 6674;
case 209:
return 6681;
case 210:
return 6688;
case 211:
return 6695;
case 212:
return 6702;
case 213:
return 6709;
case 214:
return 6716;
case 215:
return 6723;
case 216:
return 6730;
case 217:
return 6737;
case 218:
return 6744;
case 219:
return 6751;
case 220:
return 6758;
case 221:
return 6765;
case 222:
return 6772;
case 223:
return 6779;
case 224:
return 6786;
case 225:
return 6793;
case 226:
return 6800;
case 227:
return 6807;
case 228:
return 6814;
case 229:
return 6821;
case 230:
return 6828;
default:
}
switch (iParam1){
case 231:
return 7298;
case 232:
return 7305;
case 233:
return 7312;
case 234:
return 7319;
case 235:
return 7326;
case 236:
return 7333;
case 237:
return 7340;
case 238:
return 7347;
case 239:
return 7354;
case 240:
return 7361;
case 241:
return 7368;
case 242:
return 7375;
case 243:
return 7382;
case 244:
return 7389;
case 245:
return 7396;
case 246:
return 7403;
case 247:
return 7410;
case 248:
return 7417;
case 249:
return 7424;
case 250:
return 7431;
case 251:
return 7438;
case 252:
return 7445;
case 253:
return 7452;
case 254:
return 7459;
case 255:
return 7466;
case 256:
return 7473;
case 257:
return 7480;
case 258:
return 7487;
case 259:
return 7494;
case 260:
return 7501;
default:
}
switch (iParam1){
case 261:
return 8021;
case 262:
return 8028;
case 263:
return 8035;
case 264:
return 8042;
case 265:
return 8049;
case 266:
return 8056;
case 267:
return 8063;
case 268:
return 8070;
case 269:
return 8077;
case 270:
return 8084;
case 271:
return 8545;
case 272:
return 8552;
case 273:
return 8559;
case 274:
return 8566;
case 275:
return 8573;
case 276:
return 8580;
case 277:
return 8587;
case 278:
return 8594;
case 279:
return 8601;
case 280:
return 8608;
case 281:
return 8992;
case 282:
return 8999;
case 283:
return 9006;
case 284:
return 9013;
case 285:
return 9020;
case 286:
return 9027;
case 287:
return 9034;
case 288:
return 9041;
case 289:
return 9048;
case 290:
return 9055;
case 294:
return 9080;
case 295:
return 9087;
case 296:
return 9094;
case 297:
return 9101;
case 298:
return 9108;
case 299:
return 9115;
case 300:
return 9122;
case 301:
return 9129;
case 302:
return 9136;
case 303:
return 9143;
case 307:
return 9643;
case 308:
return 9650;
case 309:
return 9657;
case 310:
return 9664;
case 311:
return 9671;
case 312:
return 9678;
case 313:
return 9685;
case 314:
return 9692;
case 315:
return 9699;
case 316:
return 9706;
case 317:
return 9927;
case 318:
return 9934;
case 319:
return 9941;
case 320:
return 9948;
case 321:
return 9955;
case 322:
return 9962;
case 323:
return 9969;
case 324:
return 9976;
case 325:
return 9983;
case 326:
return 9990;
case 327:
return 9997;
case 328:
return 10004;
case 329:
return 10011;
case 330:
return 10018;
case 331:
return 10025;
case 332:
return 10032;
case 333:
return 10039;
case 334:
return 10046;
case 335:
return 10053;
case 336:
return 10060;
default:
}
switch (iParam1){
case 337:
return 10453;
case 338:
return 10460;
case 339:
return 10467;
case 340:
return 10474;
case 341:
return 10481;
case 342:
return 10488;
case 343:
return 10495;
case 344:
return 10502;
case 345:
return 10509;
case 346:
return 10516;
case 350:
return 10541;
case 351:
return 10548;
case 352:
return 10555;
case 353:
return 10562;
case 354:
return 10569;
case 355:
return 10576;
case 356:
return 10583;
case 357:
return 10590;
case 358:
return 10597;
case 359:
return 10604;
default:
}
break;
case 7:
switch (iParam1){
case 0:
return 1635;
case 1:
return 1642;
case 2:
return 1649;
case 3:
return 1656;
case 4:
return 1663;
case 5:
return 1670;
case 6:
return 1677;
case 7:
return 1684;
case 8:
return 1691;
case 9:
return 1698;
case 10:
return 1705;
case 11:
return 1711;
case 12:
return 1717;
case 13:
return 1723;
case 14:
return 1802;
case 15:
return 1809;
case 16:
return 1816;
case 17:
return 1823;
case 18:
return 1830;
case 19:
return 1837;
case 20:
return 1844;
case 21:
return 1851;
case 22:
return 1858;
case 23:
return 1865;
case 24:
return 1871;
case 25:
return 1877;
case 26:
return 2172;
case 27:
return 2179;
case 28:
return 2186;
case 29:
return 2193;
case 30:
return 2200;
case 31:
return 2207;
case 32:
return 2214;
case 33:
return 2221;
case 34:
return 2228;
case 35:
return 2235;
case 36:
return 2242;
case 37:
return 2248;
case 38:
return 2254;
case 39:
return 2836;
case 40:
return 2843;
case 41:
return 2850;
case 42:
return 2857;
case 43:
return 2864;
case 44:
return 2871;
case 45:
return 2878;
case 46:
return 2885;
case 47:
return 2892;
case 48:
return 2899;
case 49:
return 2906;
case 50:
return 2912;
case 51:
return 2918;
case 52:
return 2960;
case 53:
return 2967;
case 54:
return 2974;
case 55:
return 2981;
case 56:
return 2988;
case 57:
return 2995;
case 58:
return 3002;
case 59:
return 3009;
case 60:
return 3016;
case 61:
return 3023;
case 62:
return 3030;
case 63:
return 3036;
case 64:
return 3042;
case 65:
return 3243;
case 66:
return 3251;
case 67:
return 3259;
case 68:
return 3267;
case 69:
return 3275;
case 70:
return 3283;
case 71:
return 3291;
case 72:
return 3299;
case 73:
return 3307;
case 74:
return 3315;
case 75:
return 3323;
case 76:
return 3331;
case 77:
return 3340;
case 78:
return 3348;
case 79:
return 3355;
case 80:
return 3363;
case 81:
return 3371;
case 82:
return 3379;
case 83:
return 3387;
case 84:
return 3395;
case 85:
return 3403;
case 86:
return 3410;
case 87:
return 3417;
default:
}
switch (iParam1){
case 88:
return 4039;
case 89:
return 4047;
case 90:
return 4055;
case 91:
return 4063;
case 92:
return 4071;
case 93:
return 4079;
case 94:
return 4087;
case 95:
return 4095;
case 96:
return 4103;
case 97:
return 4111;
case 98:
return 4119;
case 99:
return 4127;
case 100:
return 4136;
case 101:
return 4144;
case 102:
return 4151;
case 103:
return 4159;
case 104:
return 4167;
case 105:
return 4175;
case 106:
return 4183;
case 107:
return 4191;
case 108:
return 4199;
case 109:
return 4207;
case 110:
return 4215;
case 111:
return 4223;
case 112:
return 4231;
case 113:
return 4239;
case 114:
return 4247;
case 115:
return 4255;
case 116:
return 4263;
case 117:
return 4271;
case 118:
return 4279;
case 119:
return 4287;
case 120:
return 4296;
case 121:
return 4304;
case 122:
return 4311;
case 123:
return 4319;
case 124:
return 4327;
case 125:
return 4335;
case 126:
return 4343;
case 127:
return 4351;
case 128:
return 4359;
case 129:
return 4367;
case 130:
return 4375;
case 131:
return 4383;
case 132:
return 4391;
case 133:
return 4399;
case 134:
return 4407;
case 135:
return 4415;
case 136:
return 4423;
case 137:
return 4431;
case 138:
return 4439;
case 139:
return 4447;
case 140:
return 4456;
case 141:
return 4464;
case 142:
return 4471;
case 143:
return 4479;
case 144:
return 4487;
case 145:
return 4495;
case 146:
return 4503;
case 147:
return 4511;
case 148:
return 4519;
case 149:
return 4527;
case 150:
return 4535;
case 151:
return 4543;
case 152:
return 4551;
case 153:
return 4559;
case 154:
return 4567;
case 155:
return 4575;
case 156:
return 4583;
case 157:
return 4591;
case 158:
return 5484;
default:
}
switch (iParam1){
case 159:
return 5933;
case 160:
return 5940;
case 161:
return 5947;
case 162:
return 5954;
case 163:
return 5961;
case 164:
return 5968;
case 165:
return 5975;
case 166:
return 5982;
case 167:
return 5989;
case 168:
return 5996;
case 169:
return 6003;
case 170:
return 6010;
case 171:
return 6017;
case 172:
return 6024;
case 173:
return 6031;
case 174:
return 6038;
case 175:
return 6045;
case 176:
return 6052;
case 177:
return 6059;
case 178:
return 6066;
case 179:
return 6073;
case 180:
return 6080;
case 181:
return 6087;
case 182:
return 6094;
case 183:
return 6101;
default:
}
switch (iParam1){
case 184:
return 6178;
case 185:
return 6185;
case 186:
return 6192;
case 187:
return 6199;
case 188:
return 6206;
case 189:
return 6213;
case 190:
return 6220;
case 191:
return 6227;
case 192:
return 6234;
case 193:
return 6241;
default:
}
switch (iParam1){
case 194:
return 6575;
case 195:
return 6582;
case 196:
return 6589;
case 197:
return 6596;
case 198:
return 6603;
case 199:
return 6610;
case 200:
return 6617;
case 201:
return 6624;
case 202:
return 6631;
case 203:
return 6638;
case 204:
return 6645;
case 205:
return 6652;
case 206:
return 6659;
case 207:
return 6666;
case 208:
return 6673;
case 209:
return 6680;
case 210:
return 6687;
case 211:
return 6694;
case 212:
return 6701;
case 213:
return 6708;
case 214:
return 6715;
case 215:
return 6722;
case 216:
return 6729;
case 217:
return 6736;
case 218:
return 6743;
case 219:
return 6750;
case 220:
return 6757;
case 221:
return 6764;
case 222:
return 6771;
case 223:
return 6778;
case 224:
return 6785;
case 225:
return 6792;
case 226:
return 6799;
case 227:
return 6806;
case 228:
return 6813;
case 229:
return 6820;
case 230:
return 6827;
default:
}
switch (iParam1){
case 231:
return 7297;
case 232:
return 7304;
case 233:
return 7311;
case 234:
return 7318;
case 235:
return 7325;
case 236:
return 7332;
case 237:
return 7339;
case 238:
return 7346;
case 239:
return 7353;
case 240:
return 7360;
case 241:
return 7367;
case 242:
return 7374;
case 243:
return 7381;
case 244:
return 7388;
case 245:
return 7395;
case 246:
return 7402;
case 247:
return 7409;
case 248:
return 7416;
case 249:
return 7423;
case 250:
return 7430;
case 251:
return 7437;
case 252:
return 7444;
case 253:
return 7451;
case 254:
return 7458;
case 255:
return 7465;
case 256:
return 7472;
case 257:
return 7479;
case 258:
return 7486;
case 259:
return 7493;
case 260:
return 7500;
default:
}
switch (iParam1){
case 261:
return 8020;
case 262:
return 8027;
case 263:
return 8034;
case 264:
return 8041;
case 265:
return 8048;
case 266:
return 8055;
case 267:
return 8062;
case 268:
return 8069;
case 269:
return 8076;
case 270:
return 8083;
case 271:
return 8544;
case 272:
return 8551;
case 273:
return 8558;
case 274:
return 8565;
case 275:
return 8572;
case 276:
return 8579;
case 277:
return 8586;
case 278:
return 8593;
case 279:
return 8600;
case 280:
return 8607;
case 281:
return 8991;
case 282:
return 8998;
case 283:
return 9005;
case 284:
return 9012;
case 285:
return 9019;
case 286:
return 9026;
case 287:
return 9033;
case 288:
return 9040;
case 289:
return 9047;
case 290:
return 9054;
case 291:
return 9061;
case 292:
return 9067;
case 293:
return 9073;
case 294:
return 9079;
case 295:
return 9086;
case 296:
return 9093;
case 297:
return 9100;
case 298:
return 9107;
case 299:
return 9114;
case 300:
return 9121;
case 301:
return 9128;
case 302:
return 9135;
case 303:
return 9142;
case 304:
return 9149;
case 305:
return 9155;
case 306:
return 9161;
case 307:
return 9642;
case 308:
return 9649;
case 309:
return 9656;
case 310:
return 9663;
case 311:
return 9670;
case 312:
return 9677;
case 313:
return 9684;
case 314:
return 9691;
case 315:
return 9698;
case 316:
return 9705;
case 317:
return 9926;
case 318:
return 9933;
case 319:
return 9940;
case 320:
return 9947;
case 321:
return 9954;
case 322:
return 9961;
case 323:
return 9968;
case 324:
return 9975;
case 325:
return 9982;
case 326:
return 9989;
case 327:
return 9996;
case 328:
return 10003;
case 329:
return 10010;
case 330:
return 10017;
case 331:
return 10024;
case 332:
return 10031;
case 333:
return 10038;
case 334:
return 10045;
case 335:
return 10052;
case 336:
return 10059;
default:
}
switch (iParam1){
case 337:
return 10452;
case 338:
return 10459;
case 339:
return 10466;
case 340:
return 10473;
case 341:
return 10480;
case 342:
return 10487;
case 343:
return 10494;
case 344:
return 10501;
case 345:
return 10508;
case 346:
return 10515;
case 347:
return 10522;
case 348:
return 10528;
case 349:
return 10534;
case 350:
return 10540;
case 351:
return 10547;
case 352:
return 10554;
case 353:
return 10561;
case 354:
return 10568;
case 355:
return 10575;
case 356:
return 10582;
case 357:
return 10589;
case 358:
return 10596;
case 359:
return 10603;
case 360:
return 10610;
case 361:
return 10616;
case 362:
return 10622;
default:
}
break;
}}
return 1630;
}

int func_152(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 363:
return 11434;
case 364:
return 11441;
case 365:
return 11448;
case 366:
return 11455;
case 367:
return 11462;
case 368:
return 11469;
case 369:
return 11476;
case 370:
return 11483;
case 371:
return 11490;
case 372:
return 11497;
case 373:
return 11504;
case 374:
return 11511;
case 375:
return 11518;
case 376:
return 11525;
case 377:
return 11532;
case 378:
return 11539;
case 379:
return 11546;
case 380:
return 11553;
case 381:
return 11560;
case 382:
return 11567;
case 383:
return 11574;
case 384:
return 11581;
case 385:
return 11588;
case 386:
return 11595;
case 387:
return 11602;
case 388:
return 11609;
case 389:
return 11616;
case 390:
return 11623;
case 391:
return 11630;
case 392:
return 11637;
case 393:
return 11644;
case 394:
return 11651;
case 395:
return 11658;
case 396:
return 11665;
case 397:
return 11672;
case 398:
return 11679;
case 399:
return 11686;
case 400:
return 11693;
case 401:
return 11700;
case 402:
return 11707;
case 403:
return 11714;
case 404:
return 11721;
case 405:
return 11728;
case 406:
return 11735;
case 407:
return 11742;
case 408:
return 11749;
case 409:
return 11756;
case 410:
return 11763;
case 411:
return 11770;
case 412:
return 11777;
case 413:
return 11784;
case 414:
return 11791;
default:
}
break;
case 2:
switch (iParam1){
case 363:
return 11435;
case 364:
return 11442;
case 365:
return 11449;
case 366:
return 11456;
case 367:
return 11463;
case 368:
return 11470;
case 369:
return 11477;
case 370:
return 11484;
case 371:
return 11491;
case 372:
return 11498;
case 373:
return 11505;
case 374:
return 11512;
case 375:
return 11519;
case 376:
return 11526;
case 377:
return 11533;
case 378:
return 11540;
case 379:
return 11547;
case 380:
return 11554;
case 381:
return 11561;
case 382:
return 11568;
case 383:
return 11575;
case 384:
return 11582;
case 385:
return 11589;
case 386:
return 11596;
case 387:
return 11603;
case 388:
return 11610;
case 389:
return 11617;
case 390:
return 11624;
case 391:
return 11631;
case 392:
return 11638;
case 393:
return 11645;
case 394:
return 11652;
case 395:
return 11659;
case 396:
return 11666;
case 397:
return 11673;
case 398:
return 11680;
case 399:
return 11687;
case 400:
return 11694;
case 401:
return 11701;
case 402:
return 11708;
case 403:
return 11715;
case 404:
return 11722;
case 405:
return 11729;
case 406:
return 11736;
case 407:
return 11743;
case 408:
return 11750;
case 409:
return 11757;
case 410:
return 11764;
case 411:
return 11771;
case 412:
return 11778;
case 413:
return 11785;
case 414:
return 11792;
default:
}
break;
case 3:
switch (iParam1){
case 363:
return 11436;
case 364:
return 11443;
case 365:
return 11450;
case 366:
return 11457;
case 367:
return 11464;
case 368:
return 11471;
case 369:
return 11478;
case 370:
return 11485;
case 371:
return 11492;
case 372:
return 11499;
case 373:
return 11506;
case 374:
return 11513;
case 375:
return 11520;
case 376:
return 11527;
case 377:
return 11534;
case 378:
return 11541;
case 379:
return 11548;
case 380:
return 11555;
case 381:
return 11562;
case 382:
return 11569;
case 383:
return 11576;
case 384:
return 11583;
case 385:
return 11590;
case 386:
return 11597;
case 387:
return 11604;
case 388:
return 11611;
case 389:
return 11618;
case 390:
return 11625;
case 391:
return 11632;
case 392:
return 11639;
case 393:
return 11646;
case 394:
return 11653;
case 395:
return 11660;
case 396:
return 11667;
case 397:
return 11674;
case 398:
return 11681;
case 399:
return 11688;
case 400:
return 11695;
case 401:
return 11702;
case 402:
return 11709;
case 403:
return 11716;
case 404:
return 11723;
case 405:
return 11730;
case 406:
return 11737;
case 407:
return 11744;
case 408:
return 11751;
case 409:
return 11758;
case 410:
return 11765;
case 411:
return 11772;
case 412:
return 11779;
case 413:
return 11786;
case 414:
return 11793;
default:
}
break;
case 4:
switch (iParam1){
case 363:
return 11437;
case 364:
return 11444;
case 365:
return 11451;
case 366:
return 11458;
case 367:
return 11465;
case 368:
return 11472;
case 369:
return 11479;
case 370:
return 11486;
case 371:
return 11493;
case 372:
return 11500;
case 373:
return 11507;
case 374:
return 11514;
case 375:
return 11521;
case 376:
return 11528;
case 377:
return 11535;
case 378:
return 11542;
case 379:
return 11549;
case 380:
return 11556;
case 381:
return 11563;
case 382:
return 11570;
case 383:
return 11577;
case 384:
return 11584;
case 385:
return 11591;
case 386:
return 11598;
case 387:
return 11605;
case 388:
return 11612;
case 389:
return 11619;
case 390:
return 11626;
case 391:
return 11633;
case 392:
return 11640;
case 393:
return 11647;
case 394:
return 11654;
case 395:
return 11661;
case 396:
return 11668;
case 397:
return 11675;
case 398:
return 11682;
case 399:
return 11689;
case 400:
return 11696;
case 401:
return 11703;
case 402:
return 11710;
case 403:
return 11717;
case 404:
return 11724;
case 405:
return 11731;
case 406:
return 11738;
case 407:
return 11745;
case 408:
return 11752;
case 409:
return 11759;
case 410:
return 11766;
case 411:
return 11773;
case 412:
return 11780;
case 413:
return 11787;
case 414:
return 11794;
default:
}
break;
case 5:
switch (iParam1){
case 363:
return 11438;
case 364:
return 11445;
case 365:
return 11452;
case 366:
return 11459;
case 367:
return 11466;
case 368:
return 11473;
case 369:
return 11480;
case 370:
return 11487;
case 371:
return 11494;
case 372:
return 11501;
case 373:
return 11508;
case 374:
return 11515;
case 375:
return 11522;
case 376:
return 11529;
case 377:
return 11536;
case 378:
return 11543;
case 379:
return 11550;
case 380:
return 11557;
case 381:
return 11564;
case 382:
return 11571;
case 383:
return 11578;
case 384:
return 11585;
case 385:
return 11592;
case 386:
return 11599;
case 387:
return 11606;
case 388:
return 11613;
case 389:
return 11620;
case 390:
return 11627;
case 391:
return 11634;
case 392:
return 11641;
case 393:
return 11648;
case 394:
return 11655;
case 395:
return 11662;
case 396:
return 11669;
case 397:
return 11676;
case 398:
return 11683;
case 399:
return 11690;
case 400:
return 11697;
case 401:
return 11704;
case 402:
return 11711;
case 403:
return 11718;
case 404:
return 11725;
case 405:
return 11732;
case 406:
return 11739;
case 407:
return 11746;
case 408:
return 11753;
case 409:
return 11760;
case 410:
return 11767;
case 411:
return 11774;
case 412:
return 11781;
case 413:
return 11788;
case 414:
return 11795;
default:
}
break;
case 6:
switch (iParam1){
case 363:
return 11440;
case 364:
return 11447;
case 365:
return 11454;
case 366:
return 11461;
case 367:
return 11468;
case 368:
return 11475;
case 369:
return 11482;
case 370:
return 11489;
case 371:
return 11496;
case 372:
return 11503;
case 373:
return 11510;
case 374:
return 11517;
case 375:
return 11524;
case 376:
return 11531;
case 377:
return 11538;
case 378:
return 11545;
case 379:
return 11552;
case 380:
return 11559;
case 381:
return 11566;
case 382:
return 11573;
case 383:
return 11580;
case 384:
return 11587;
case 385:
return 11594;
case 386:
return 11601;
case 387:
return 11608;
case 388:
return 11615;
case 389:
return 11622;
case 390:
return 11629;
case 391:
return 11636;
case 392:
return 11643;
case 393:
return 11650;
case 394:
return 11657;
case 395:
return 11664;
case 396:
return 11671;
case 397:
return 11678;
case 398:
return 11685;
case 399:
return 11692;
case 400:
return 11699;
case 401:
return 11706;
case 402:
return 11713;
case 403:
return 11720;
case 404:
return 11727;
case 405:
return 11734;
case 406:
return 11741;
case 407:
return 11748;
case 408:
return 11755;
case 409:
return 11762;
case 410:
return 11769;
case 411:
return 11776;
case 412:
return 11783;
case 413:
return 11790;
case 414:
return 11797;
default:
}
break;
case 7:
switch (iParam1){
case 363:
return 11439;
case 364:
return 11446;
case 365:
return 11453;
case 366:
return 11460;
case 367:
return 11467;
case 368:
return 11474;
case 369:
return 11481;
case 370:
return 11488;
case 371:
return 11495;
case 372:
return 11502;
case 373:
return 11509;
case 374:
return 11516;
case 375:
return 11523;
case 376:
return 11530;
case 377:
return 11537;
case 378:
return 11544;
case 379:
return 11551;
case 380:
return 11558;
case 381:
return 11565;
case 382:
return 11572;
case 383:
return 11579;
case 384:
return 11586;
case 385:
return 11593;
case 386:
return 11600;
case 387:
return 11607;
case 388:
return 11614;
case 389:
return 11621;
case 390:
return 11628;
case 391:
return 11635;
case 392:
return 11642;
case 393:
return 11649;
case 394:
return 11656;
case 395:
return 11663;
case 396:
return 11670;
case 397:
return 11677;
case 398:
return 11684;
case 399:
return 11691;
case 400:
return 11698;
case 401:
return 11705;
case 402:
return 11712;
case 403:
return 11719;
case 404:
return 11726;
case 405:
return 11733;
case 406:
return 11740;
case 407:
return 11747;
case 408:
return 11754;
case 409:
return 11761;
case 410:
return 11768;
case 411:
return 11775;
case 412:
return 11782;
case 413:
return 11789;
case 414:
return 11796;
default:
}
break;
}
return 1630;
}

int func_153(int iParam0, bool bParam1){
if(iParam0 <=38){
if(iParam0 < 10){
if(bParam1){
return (4212 + iParam0);
}else{
return (31488 + iParam0);
}}elseif(iParam0 > 12 && iParam0 < 23){
if(bParam1){
return ((4212 + iParam0) - 3);
}else{
return ((31488 + iParam0) - 3);
}}elseif(iParam0 > 25 && iParam0 < 36){
if(bParam1){
return ((4212 + iParam0) - 6);
}else{
return ((31488 + iParam0) - 6);
}}}elseif(iParam0 > 38 && iParam0 < 49){
return ((6015 + iParam0) - 39);
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7252 + iParam0) - 52);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9310 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30134 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30134 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_120(11)){
return ((15084 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((15084 + iParam0) - 88);
}elseif(iParam0==158){
return 15361;
}elseif(iParam0 < 184){
return ((18036 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18953 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21942 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24535 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26319 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28039 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31488 + 30 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((34036 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36528 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36528 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return (41004 + (iParam0 - 363));
}
return 0;
}

int func_154(int iParam0){
if(iParam0 < 10){
return (7263 + iParam0);
}elseif(iParam0 > 12 && iParam0 < 23){
return (7263 + (iParam0 - 3));
}elseif(iParam0 > 25 && iParam0 < 36){
return (7263 + (iParam0 - 6));
}elseif(iParam0 > 38 && iParam0 < 49){
return (7263 + (iParam0 - 9));
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7263 + iParam0) - 12);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9330 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30154 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30154 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_120(11)){
return ((15154 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((15154 + iParam0) - 88);
}elseif(iParam0==158){
return 15362;
}elseif(iParam0 < 184){
return ((18061 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18963 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21979 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24565 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26329 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28049 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31528 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((34056 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36548 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36548 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return ((41056 + iParam0) - 363);
}
return 0;
}

int func_155(int iParam0){
if(iParam0 < 10){
return (5975 + iParam0);
}elseif(iParam0 > 12 && iParam0 < 23){
return (5975 + (iParam0 - 3));
}elseif(iParam0 > 25 && iParam0 < 36){
return (5975 + (iParam0 - 6));
}elseif(iParam0 > 38 && iParam0 < 49){
return (5975 + (iParam0 - 9));
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7242 + iParam0) - 52);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9290 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30114 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30114 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_120(11)){
return ((15014 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((15014 + iParam0) - 88);
}elseif(iParam0==158){
return 15360;
}elseif(iParam0 < 184){
return ((18011 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18943 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21905 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24505 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26309 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28029 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31478 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((34016 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36508 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36508 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return ((40952 + iParam0) - 363);
}
return 0;
}

int func_156(int iParam0){
if(iParam0 < 10){
return (5935 + iParam0);
}elseif(iParam0 > 12 && iParam0 < 23){
return (5935 + (iParam0 - 3));
}elseif(iParam0 > 25 && iParam0 < 36){
return (5935 + (iParam0 - 6));
}elseif(iParam0 > 38 && iParam0 < 49){
return (5935 + (iParam0 - 9));
}elseif(iParam0 > 51 && iParam0 < 62){
return ((7232 + iParam0) - 52);
}elseif(iParam0 > 64 && iParam0 < 85){
return ((9270 + iParam0) - 65);
}elseif(iParam0 >=281 && iParam0 < 291){
return ((30094 + iParam0) - 281);
}elseif(iParam0 >=294 && iParam0 < 304){
return (30094 + ((iParam0 - 281) - 3));
}elseif(iParam0 < func_120(11)){
return ((14944 + iParam0) - 88);
}elseif(iParam0 <=157){
return ((14944 + iParam0) - 88);
}elseif(iParam0==158){
return 15359;
}elseif(iParam0 < 184){
return ((17986 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18933 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21868 + iParam0) - 194);
}elseif(iParam0 < 261){
return ((24475 + iParam0) - 231);
}elseif(iParam0 < 271){
return ((26299 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28019 + iParam0) - 271);
}elseif(iParam0 > 306 && iParam0 < 317){
return ((31468 + iParam0) - 307);
}elseif(iParam0 >=317 && iParam0 < 337){
return ((33996 + iParam0) - 317);
}elseif(iParam0 >=337 && iParam0 < 347){
return ((36488 + iParam0) - 337);
}elseif(iParam0 >=350 && iParam0 < 360){
return (36488 + ((iParam0 - 337) - 3));
}elseif(iParam0 >=363 && iParam0 <=414){
return ((40900 + iParam0) - 363);
}
return 0;
}

int func_157(int iParam0){
int iVar0;
iVar0=(4424 - 4400);
if(iParam0 < 10){
return (4400 + (iParam0 * iVar0));
}elseif(iParam0 > 12 && iParam0 < 23){
return (4640 + ((iParam0 - 13) * iVar0));
}elseif(iParam0 > 25 && iParam0 < 36){
return (4880 + ((iParam0 - 26) * iVar0));
}elseif(iParam0 > 38 && iParam0 < 49){
return (5120 + ((iParam0 - 39) * iVar0));
}elseif(iParam0 > 51 && iParam0 < 62){
return (6414 + ((iParam0 - 52) * iVar0));
}elseif(iParam0 > 64 && iParam0 < 85){
return (7682 + ((iParam0 - 65) * iVar0));
}elseif(iParam0 >=281 && iParam0 < 291){
return (29534 + ((iParam0 - 281) * iVar0));
}elseif(iParam0 >=294 && iParam0 < 304){
return (29774 + ((iParam0 - 294) * iVar0));
}elseif(iParam0 < func_120(11)){
return (9554 + ((iParam0 - 88) * iVar0));
}elseif(iParam0 <=157){
return (9554 + ((iParam0 - 88) * iVar0));
}elseif(iParam0==158){
return 15282;
}elseif(iParam0 < 184){
return (16061 + ((iParam0 - 159) * iVar0));
}elseif(iParam0 < 194){
return (18163 + ((iParam0 - 184) * iVar0));
}elseif(iParam0 < 231){
return (19019 + ((iParam0 - 194) * iVar0));
}elseif(iParam0 < 261){
return (22195 + ((iParam0 - 231) * iVar0));
}elseif(iParam0 < 271){
return (25539 + ((iParam0 - 261) * iVar0));
}elseif(iParam0 < 281){
return (27259 + ((iParam0 - 271) * iVar0));
}elseif(iParam0 > 306 && iParam0 < 317){
return (31188 + ((iParam0 - 307) * iVar0));
}elseif(iParam0 >=317 && iParam0 < 337){
return (33436 + ((iParam0 - 317) * iVar0));
}elseif(iParam0 >=337 && iParam0 < 347){
return (35928 + ((iParam0 - 337) * iVar0));
}elseif(iParam0 >=350 && iParam0 < 360){
return (36168 + ((iParam0 - 350) * iVar0));
}elseif(iParam0 >=363 && iParam0 <=414){
return (39444 + ((iParam0 - 363) * iVar0));
}
return 0;
}

int func_158(int iParam0){
switch (iParam0){
case 10:
case 11:
case 12:
case 23:
case 24:
case 25:
case 36:
case 37:
case 38:
case 49:
case 50:
case 51:
case 62:
case 63:
case 64:
case 85:
case 86:
case 87:
case 291:
case 292:
case 293:
case 304:
case 305:
case 306:
case 347:
case 348:
case 349:
case 360:
case 361:
case 362:
return 1;
break;
}
return 0;
}


void func_159(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_88();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_160(int iParam0, int iParam1){
int iVar0;
if((iParam0==3880 || iParam0==3881) || iParam0==3882){
if(iParam1 < 10){
iVar0=(iParam0 + iParam1 * 3);
}elseif(iParam1 < 23){
if(iParam0==3880){
iVar0=(3910 + (iParam1 - 13) * 3);
}elseif(iParam0==3881){
iVar0=(3911 + (iParam1 - 13) * 3);
}elseif(iParam0==3882){
iVar0=(3912 + (iParam1 - 13) * 3);
}}elseif(iParam1 < 36){
if(iParam0==3880){
iVar0=(3946 + (iParam1 - 26) * 3);
}elseif(iParam0==3881){
iVar0=(3947 + (iParam1 - 26) * 3);
}elseif(iParam0==3882){
iVar0=(3948 + (iParam1 - 26) * 3);
}}elseif(iParam1 < 49){
if(iParam0==3880){
iVar0=(5855 + (iParam1 - 39) * 3);
}elseif(iParam0==3881){
iVar0=(5856 + (iParam1 - 39) * 3);
}elseif(iParam0==3882){
iVar0=(5857 + (iParam1 - 39) * 3);
}}elseif(iParam1 < 62){
if(iParam0==3880){
iVar0=(7149 + (iParam1 - 52) * 3);
}elseif(iParam0==3881){
iVar0=(7150 + (iParam1 - 52) * 3);
}elseif(iParam0==3882){
iVar0=(7151 + (iParam1 - 52) * 3);
}}elseif(iParam1 < 85){
if(iParam0==3880){
iVar0=(9107 + (iParam1 - 65) * 3);
}elseif(iParam0==3881){
iVar0=(9108 + (iParam1 - 65) * 3);
}elseif(iParam0==3882){
iVar0=(9109 + (iParam1 - 65) * 3);
}}elseif(iParam1 < func_120(11)){
if(iParam0==3880){
iVar0=(14384 + (iParam1 - 88) * 3);
}elseif(iParam0==3881){
iVar0=(14385 + (iParam1 - 88) * 3);
}elseif(iParam0==3882){
iVar0=(14386 + (iParam1 - 88) * 3);
}}elseif(iParam1 <=157){
if(iParam0==3880){
iVar0=(14384 + (iParam1 - 88) * 3);
}elseif(iParam0==3881){
iVar0=(14385 + (iParam1 - 88) * 3);
}elseif(iParam0==3882){
iVar0=(14386 + (iParam1 - 88) * 3);
}}elseif(iParam1==158){
if(iParam0==3880){
iVar0=15351;
}elseif(iParam0==3881){
iVar0=15352;
}elseif(iParam0==3882){
iVar0=15353;
}}elseif(iParam1 < 184){
if(iParam0==3880){
iVar0=(17786 + (iParam1 - 159) * 3);
}elseif(iParam0==3881){
iVar0=(17787 + (iParam1 - 159) * 3);
}elseif(iParam0==3882){
iVar0=(17788 + (iParam1 - 159) * 3);
}}elseif(iParam1 < 194){
if(iParam0==3880){
iVar0=(18853 + (iParam1 - 184) * 3);
}elseif(iParam0==3881){
iVar0=(18854 + (iParam1 - 184) * 3);
}elseif(iParam0==3882){
iVar0=(18855 + (iParam1 - 184) * 3);
}}elseif(iParam1 < 231){
if(iParam0==3880){
iVar0=(21572 + (iParam1 - 194) * 3);
}elseif(iParam0==3881){
iVar0=(21573 + (iParam1 - 194) * 3);
}elseif(iParam0==3882){
iVar0=(21574 + (iParam1 - 194) * 3);
}}elseif(iParam1 < 261){
if(iParam0==3880){
iVar0=(24265 + (iParam1 - 231) * 3);
}elseif(iParam0==3881){
iVar0=(24266 + (iParam1 - 231) * 3);
}elseif(iParam0==3882){
iVar0=(24267 + (iParam1 - 231) * 3);
}}elseif(iParam1 < 271){
if(iParam0==3880){
iVar0=(26229 + (iParam1 - 261) * 3);
}elseif(iParam0==3881){
iVar0=(26230 + (iParam1 - 261) * 3);
}elseif(iParam0==3882){
iVar0=(26231 + (iParam1 - 261) * 3);
}}elseif(iParam1 < 281){
if(iParam0==3880){
iVar0=(27949 + (iParam1 - 271) * 3);
}elseif(iParam0==3881){
iVar0=(27950 + (iParam1 - 271) * 3);
}elseif(iParam0==3882){
iVar0=(27951 + (iParam1 - 271) * 3);
}}elseif(iParam1 < 291){
if(iParam0==3880){
iVar0=(29474 + (iParam1 - 281) * 3);
}elseif(iParam0==3881){
iVar0=(29475 + (iParam1 - 281) * 3);
}elseif(iParam0==3882){
iVar0=(29476 + (iParam1 - 281) * 3);
}}elseif(iParam1 < 304){
if(iParam0==3880){
iVar0=(29504 + (iParam1 - 294) * 3);
}elseif(iParam0==3881){
iVar0=(29505 + (iParam1 - 294) * 3);
}elseif(iParam0==3882){
iVar0=(29506 + (iParam1 - 294) * 3);
}}elseif(iParam1 > 306 && iParam1 < 317){
if(iParam0==3880){
iVar0=(31158 + (iParam1 - 307) * 3);
}elseif(iParam0==3881){
iVar0=(31159 + (iParam1 - 307) * 3);
}elseif(iParam0==3882){
iVar0=(31160 + (iParam1 - 307) * 3);
}}elseif(iParam1 >=317 && iParam1 < 337){
if(iParam0==3880){
iVar0=(33376 + (iParam1 - 317) * 3);
}elseif(iParam0==3881){
iVar0=(33377 + (iParam1 - 317) * 3);
}elseif(iParam0==3882){
iVar0=(33378 + (iParam1 - 317) * 3);
}}elseif(iParam1 >=337 && iParam1 < 347){
if(iParam0==3880){
iVar0=(35868 + (iParam1 - 337) * 3);
}elseif(iParam0==3881){
iVar0=(35869 + (iParam1 - 337) * 3);
}elseif(iParam0==3882){
iVar0=(35870 + (iParam1 - 337) * 3);
}}elseif(iParam1 >=350 && iParam1 < 360){
if(iParam0==3880){
iVar0=(35898 + (iParam1 - 350) * 3);
}elseif(iParam0==3881){
iVar0=(35899 + (iParam1 - 350) * 3);
}elseif(iParam0==3882){
iVar0=(35900 + (iParam1 - 350) * 3);
}}elseif(iParam1 >=363 && iParam1 <=414){
if(iParam0==3880){
iVar0=(39288 + (iParam1 - 363) * 3);
}elseif(iParam0==3881){
iVar0=(39289 + (iParam1 - 363) * 3);
}elseif(iParam0==3882){
iVar0=(39290 + (iParam1 - 363) * 3);
}}}elseif(iParam1 < 10){
iVar0=(iParam0 + (iParam1 * (1456 - 1411)));
}elseif(iParam1 >=10 && iParam1 <=12){
iVar0=((iParam1 - 10) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=1861;
}elseif(iParam0==1412){
iVar0 +=1862;
}elseif(iParam0==1441){
iVar0 +=1863;
}elseif(iParam0==1442){
iVar0 +=1864;
}elseif(iParam0==1443){
iVar0 +=1865;
}elseif(iParam0==1445){
iVar0 +=1866;
}elseif(iParam0==1447){
iVar0 +=1867;
}elseif(iParam0==1448){
iVar0 +=1868;
}elseif(iParam0==1449){
iVar0 +=1869;
}elseif(iParam0==1450){
iVar0 +=1870;
}elseif(iParam0==1451){
iVar0 +=1871;
}elseif(iParam0==1452){
iVar0 +=1872;
}elseif(iParam0==1453){
iVar0 +=1873;
}elseif(iParam0==1454){
iVar0 +=1874;
}elseif(iParam0==1455){
iVar0 +=1875;
}}elseif(iParam1 < 23){
iVar0=(1906 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 13) * (1456 - 1411)));
}elseif(iParam1 >=23 && iParam1 <=25){
iVar0=((iParam1 - 23) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=2356;
}elseif(iParam0==1412){
iVar0 +=2357;
}elseif(iParam0==1441){
iVar0 +=2358;
}elseif(iParam0==1442){
iVar0 +=2359;
}elseif(iParam0==1443){
iVar0 +=2360;
}elseif(iParam0==1445){
iVar0 +=2361;
}elseif(iParam0==1447){
iVar0 +=2362;
}elseif(iParam0==1448){
iVar0 +=2363;
}elseif(iParam0==1449){
iVar0 +=2364;
}elseif(iParam0==1450){
iVar0 +=2365;
}elseif(iParam0==1451){
iVar0 +=2366;
}elseif(iParam0==1452){
iVar0 +=2367;
}elseif(iParam0==1453){
iVar0 +=2368;
}elseif(iParam0==1454){
iVar0 +=2369;
}elseif(iParam0==1455){
iVar0 +=2370;
}}elseif(iParam1 < 36){
iVar0=(2405 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 26) * (1456 - 1411)));
}elseif(iParam1 >=36 && iParam1 <=38){
iVar0=((iParam1 - 36) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=2855;
}elseif(iParam0==1412){
iVar0 +=2856;
}elseif(iParam0==1441){
iVar0 +=2857;
}elseif(iParam0==1442){
iVar0 +=2858;
}elseif(iParam0==1443){
iVar0 +=2859;
}elseif(iParam0==1445){
iVar0 +=2860;
}elseif(iParam0==1447){
iVar0 +=2861;
}elseif(iParam0==1448){
iVar0 +=2862;
}elseif(iParam0==1449){
iVar0 +=2863;
}elseif(iParam0==1450){
iVar0 +=2864;
}elseif(iParam0==1451){
iVar0 +=2865;
}elseif(iParam0==1452){
iVar0 +=2866;
}elseif(iParam0==1453){
iVar0 +=2867;
}elseif(iParam0==1454){
iVar0 +=2868;
}elseif(iParam0==1455){
iVar0 +=2869;
}}elseif(iParam1 < 49){
iVar0=(5360 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 39) * (1456 - 1411)));
}elseif(iParam1 >=49 && iParam1 <=51){
iVar0=((iParam1 - 49) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=5810;
}elseif(iParam0==1412){
iVar0 +=5811;
}elseif(iParam0==1441){
iVar0 +=5812;
}elseif(iParam0==1442){
iVar0 +=5813;
}elseif(iParam0==1443){
iVar0 +=5814;
}elseif(iParam0==1445){
iVar0 +=5815;
}elseif(iParam0==1447){
iVar0 +=5816;
}elseif(iParam0==1448){
iVar0 +=5817;
}elseif(iParam0==1449){
iVar0 +=5818;
}elseif(iParam0==1450){
iVar0 +=5819;
}elseif(iParam0==1451){
iVar0 +=5820;
}elseif(iParam0==1452){
iVar0 +=5821;
}elseif(iParam0==1453){
iVar0 +=5822;
}elseif(iParam0==1454){
iVar0 +=5823;
}elseif(iParam0==1455){
iVar0 +=5824;
}}elseif(iParam1 < 62){
iVar0=(6654 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 52) * (1456 - 1411)));
}elseif(iParam1 >=62 && iParam1 <=64){
iVar0=((iParam1 - 62) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=7104;
}elseif(iParam0==1412){
iVar0 +=7105;
}elseif(iParam0==1441){
iVar0 +=7106;
}elseif(iParam0==1442){
iVar0 +=7107;
}elseif(iParam0==1443){
iVar0 +=7108;
}elseif(iParam0==1445){
iVar0 +=7109;
}elseif(iParam0==1447){
iVar0 +=7110;
}elseif(iParam0==1448){
iVar0 +=7111;
}elseif(iParam0==1449){
iVar0 +=7112;
}elseif(iParam0==1450){
iVar0 +=7113;
}elseif(iParam0==1451){
iVar0 +=7114;
}elseif(iParam0==1452){
iVar0 +=7115;
}elseif(iParam0==1453){
iVar0 +=7116;
}elseif(iParam0==1454){
iVar0 +=7117;
}elseif(iParam0==1455){
iVar0 +=7118;
}}elseif(iParam1 < 85){
iVar0=(8162 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 65) * (1456 - 1411)));
}elseif(iParam1 >=85 && iParam1 <=87){
iVar0=((iParam1 - 85) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=9062;
}elseif(iParam0==1412){
iVar0 +=9063;
}elseif(iParam0==1441){
iVar0 +=9064;
}elseif(iParam0==1442){
iVar0 +=9065;
}elseif(iParam0==1443){
iVar0 +=9066;
}elseif(iParam0==1445){
iVar0 +=9067;
}elseif(iParam0==1447){
iVar0 +=9068;
}elseif(iParam0==1448){
iVar0 +=9069;
}elseif(iParam0==1449){
iVar0 +=9070;
}elseif(iParam0==1450){
iVar0 +=9071;
}elseif(iParam0==1451){
iVar0 +=9072;
}elseif(iParam0==1452){
iVar0 +=9073;
}elseif(iParam0==1453){
iVar0 +=9074;
}elseif(iParam0==1454){
iVar0 +=9075;
}elseif(iParam0==1455){
iVar0 +=9076;
}}elseif(iParam1 < func_120(11)){
iVar0=(11234 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - func_120(7)) * (1456 - 1411)));
}elseif(iParam1 <=157){
iVar0=(11234 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - func_120(7)) * (1456 - 1411)));
}elseif(iParam1==158){
iVar0=(15306 - 1411);
iVar0=(iVar0 + iParam0);
}elseif(iParam1 < 184){
iVar0=(16661 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 159) * (1456 - 1411)));
}elseif(iParam1 < 194){
iVar0=(18403 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 184) * (1456 - 1411)));
}elseif(iParam1 < 231){
iVar0=(19907 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 194) * (1456 - 1411)));
}elseif(iParam1 < 261){
iVar0=(22915 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 231) * (1456 - 1411)));
}elseif(iParam1 < 271){
iVar0=(25779 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 261) * (1456 - 1411)));
}elseif(iParam1 < 281){
iVar0=(27499 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 271) * (1456 - 1411)));
}elseif(iParam1 < 291){
iVar0=(28484 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 281) * (1456 - 1411)));
}elseif(iParam1 >=291 && iParam1 <=293){
iVar0=((iParam1 - 291) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=28934;
}elseif(iParam0==1412){
iVar0 +=28935;
}elseif(iParam0==1441){
iVar0 +=28936;
}elseif(iParam0==1442){
iVar0 +=28937;
}elseif(iParam0==1443){
iVar0 +=28938;
}elseif(iParam0==1445){
iVar0 +=28939;
}elseif(iParam0==1447){
iVar0 +=28940;
}elseif(iParam0==1448){
iVar0 +=28941;
}elseif(iParam0==1449){
iVar0 +=28942;
}elseif(iParam0==1450){
iVar0 +=28943;
}elseif(iParam0==1451){
iVar0 +=28944;
}elseif(iParam0==1452){
iVar0 +=28945;
}elseif(iParam0==1453){
iVar0 +=28946;
}elseif(iParam0==1454){
iVar0 +=28947;
}elseif(iParam0==1455){
iVar0 +=28948;
}}elseif(iParam1 < 304){
iVar0=(28979 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 294) * (1456 - 1411)));
}elseif(iParam1 >=304 && iParam1 <=306){
iVar0=((iParam1 - 304) * (1876 - 1861));
if(iParam0==1411){
iVar0 +=29429;
}elseif(iParam0==1412){
iVar0 +=29430;
}elseif(iParam0==1441){
iVar0 +=29431;
}elseif(iParam0==1442){
iVar0 +=29432;
}elseif(iParam0==1443){
iVar0 +=29433;
}elseif(iParam0==1445){
iVar0 +=29434;
}elseif(iParam0==1447){
iVar0 +=29435;
}elseif(iParam0==1448){
iVar0 +=29436;
}elseif(iParam0==1449){
iVar0 +=29437;
}elseif(iParam0==1450){
iVar0 +=29438;
}elseif(iParam0==1451){
iVar0 +=29439;
}elseif(iParam0==1452){
iVar0 +=29440;
}elseif(iParam0==1453){
iVar0 +=29441;
}elseif(iParam0==1454){
iVar0 +=29442;
}elseif(iParam0==1455){
iVar0 +=29443;
}}elseif(iParam1 > 306 && iParam1 < 317){
iVar0=(30708 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 307) * (1456 - 1411)));
}elseif(iParam1 >=317 && iParam1 < 337){
iVar0=(32476 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 317) * (1456 - 1411)));
}elseif(iParam1 < 347){
iVar0=(34878 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 337) * (1456 - 1411)));
}elseif(iParam1 >=347 && iParam1 <=349){
iVar0=((iParam1 - 347) * (1876 - 1861));
if(iParam0==1411){
iVar0=(iVar0 + 35328);
}elseif(iParam0==1412){
iVar0=(iVar0 + 35329);
}elseif(iParam0==1441){
iVar0=(iVar0 + 35330);
}elseif(iParam0==1442){
iVar0=(iVar0 + 35331);
}elseif(iParam0==1443){
iVar0=(iVar0 + 35332);
}elseif(iParam0==1445){
iVar0=(iVar0 + 35333);
}elseif(iParam0==1447){
iVar0=(iVar0 + 35334);
}elseif(iParam0==1448){
iVar0=(iVar0 + 35335);
}elseif(iParam0==1449){
iVar0=(iVar0 + 35336);
}elseif(iParam0==1450){
iVar0=(iVar0 + 35337);
}elseif(iParam0==1451){
iVar0=(iVar0 + 35338);
}elseif(iParam0==1452){
iVar0=(iVar0 + 35339);
}elseif(iParam0==1453){
iVar0=(iVar0 + 35340);
}elseif(iParam0==1454){
iVar0=(iVar0 + 35341);
}elseif(iParam0==1455){
iVar0=(iVar0 + 35342);
}}elseif(iParam1 < 360){
iVar0=(35373 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 350) * (1456 - 1411)));
}elseif(iParam1 >=360 && iParam1 <=362){
iVar0=((iParam1 - 360) * (1876 - 1861));
if(iParam0==1411){
iVar0=(iVar0 + 35823);
}elseif(iParam0==1412){
iVar0=(iVar0 + 35824);
}elseif(iParam0==1441){
iVar0=(iVar0 + 35825);
}elseif(iParam0==1442){
iVar0=(iVar0 + 35826);
}elseif(iParam0==1443){
iVar0=(iVar0 + 35827);
}elseif(iParam0==1445){
iVar0=(iVar0 + 35828);
}elseif(iParam0==1447){
iVar0=(iVar0 + 35829);
}elseif(iParam0==1448){
iVar0=(iVar0 + 35830);
}elseif(iParam0==1449){
iVar0=(iVar0 + 35831);
}elseif(iParam0==1450){
iVar0=(iVar0 + 35832);
}elseif(iParam0==1451){
iVar0=(iVar0 + 35833);
}elseif(iParam0==1452){
iVar0=(iVar0 + 35834);
}elseif(iParam0==1453){
iVar0=(iVar0 + 35835);
}elseif(iParam0==1454){
iVar0=(iVar0 + 35836);
}elseif(iParam0==1455){
iVar0=(iVar0 + 35837);
}}elseif(iParam1 >=363 && iParam1 <=414){
iVar0=(36948 - 1411);
iVar0=(iVar0 + iParam0);
iVar0=(iVar0 + ((iParam1 - 363) * (1456 - 1411)));
}
return iVar0;
}

int func_161(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_162(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_163()){
iVar0=Global_2848282[iParam0 /*3*/][func_87(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_163(){
return 1;
return 0;
}


void func_164(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
MISC::SET_BIT(&iVar0, 3);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}}}


void func_165(int iParam0){
if(iParam0 !=-1 && iParam0 < 30){
StringCopy(&(Global_2359296[func_161() /*5568*/].f_7.f_105[iParam0 /*16*/]), "", 64);
}}


void func_166(int iParam0){
MISC::SET_BIT(&(Global_1586468[iParam0 /*142*/].f_103), 10);
MISC::SET_BIT(&(Global_1586468[iParam0 /*142*/].f_103), 12);
func_149(iParam0, &(Global_1586468[iParam0 /*142*/]), 1, -1, 0, 0);
}


void func_167(int iParam0, int iParam1, int iParam2){
if(iParam0 < 0){
return;
}
iParam1++;
func_168(iParam0, iParam1, iParam2);
if(iParam0 >=415){
return;
}
if(iParam2==func_88() || iParam2==-1){
Global_1944416[iParam0]=iParam1;
}}


void func_168(int iParam0, int iParam1, int iParam2){
if(iParam1 <=255){
func_159(func_170(iParam0), iParam1, iParam2);
func_159(func_169(iParam0), 0, iParam2);
}else{
func_159(func_170(iParam0), 255, iParam2);
func_159(func_169(iParam0), (iParam1 - 255), iParam2);
}}

int func_169(int iParam0){
if(iParam0 < 261){
return (24625 + iParam0);
}elseif(iParam0 < 271){
return ((26349 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28069 + iParam0) - 271);
}elseif(iParam0 < 307){
return ((30200 + iParam0) - 281);
}elseif(iParam0 < 317){
return ((31548 + iParam0) - 307);
}elseif(iParam0 < 337){
return ((34096 + iParam0) - 317);
}elseif(iParam0 < 363){
return ((36594 + iParam0) - 337);
}elseif(iParam0 < 415){
return ((41160 + iParam0) - 363);
}
return (24625 + iParam0);
}

int func_170(int iParam0){
if(iParam0 < 158){
if(iParam0 <=38){
return (4036 + iParam0);
}elseif(iParam0 <=48){
return ((5905 + iParam0) - 39);
}elseif(iParam0 <=51){
return ((6025 + iParam0) - 49);
}elseif(iParam0 <=64){
return ((7199 + iParam0) - 52);
}elseif(iParam0 <=87){
return ((9207 + iParam0) - 65);
}else{
return ((14734 + iParam0) - 88);
}}elseif(iParam0==158){
return 15356;
}elseif(iParam0 < 261){
if(iParam0 < 184){
return ((17911 + iParam0) - 159);
}elseif(iParam0 < 194){
return ((18903 + iParam0) - 184);
}elseif(iParam0 < 231){
return ((21757 + iParam0) - 194);
}else{
return ((24595 + iParam0) - 231);
}}elseif(iParam0 < 271){
return ((26339 + iParam0) - 261);
}elseif(iParam0 < 281){
return ((28059 + iParam0) - 271);
}elseif(iParam0 < 307){
return ((30174 + iParam0) - 281);
}elseif(iParam0 < 317){
return ((31538 + iParam0) - 307);
}elseif(iParam0 < 337){
return ((34076 + iParam0) - 317);
}elseif(iParam0 < 363){
return ((36568 + iParam0) - 337);
}elseif(iParam0 < 415){
return ((41108 + iParam0) - 363);
}
return (4036 + iParam0);
}


void func_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10){
var uVar0;
var uVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_208();
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) !=0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
}
if(bParam5){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 12);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 15);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 8);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 9);
func_206();
func_204(iParam1, 1);
Global_1956097=1;
}
func_175(iParam0, &(Global_1586468[iParam1 /*142*/]), bParam5);
Global_1586468[iParam1 /*142*/].f_70=1;
if(bParam2){
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), true);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 6);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 7);
}
if(bParam3){
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), false);
}else{
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), false);
}
if(bParam4){
func_174(iParam1);
}
if(bParam6){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 15);
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
}
if(bParam7){
switch (iParam10){
case 0:
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 27);
break;
case 1:
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 28);
break;
}}
if(bParam8){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 13);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
if(MISC::IS_BIT_SET(uVar0, 3)){
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
}}}
if(VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >=0){
func_173(&iParam0, &(Global_1586468[iParam1 /*142*/].f_9), &(Global_1586468[iParam1 /*142*/].f_59));
if(func_172(iParam1, &uVar1)){
if(bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE()==iParam0){
Global_2359296[func_161() /*5568*/].f_593.f_86=iParam1 + 1;
}
MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 25);
MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 26);
}}
Global_2359296[func_161() /*5568*/].f_681.f_1275=NETWORK::GET_CLOUD_TIME_AS_INT();
func_149(iParam1, &(Global_1586468[iParam1 /*142*/]), 0, iParam9, 0, 0);
}}


bool func_172(int iParam0, var uParam1){
int iVar0;
*uParam1=-1;
iVar0=0;
if(iParam0 >=0 && iParam0 <=9){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=13 && iParam0 <=22){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=26 && iParam0 <=35){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=39 && iParam0 <=48){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if(iParam0 >=52 && iParam0 <=61){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if((iParam0 >=65 && iParam0 <=74) || (iParam0 >=75 && iParam0 <=84)){
*uParam1=(iParam0 - iVar0);
}
iVar0 +=3;
if((((iParam0 >=88 && iParam0 <=107) || (iParam0 >=108 && iParam0 <=127)) || (iParam0 >=128 && iParam0 <=147)) || (iParam0 >=148 && iParam0 <=155)){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
iVar0++;
iVar0 +=20;
if(iParam0 >=179 && iParam0 <=185){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
iVar0++;
iVar0++;
iVar0++;
if(iParam0 >=191 && iParam0 <=221){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
iVar0++;
iVar0++;
iVar0++;
if(iParam0 >=227 && iParam0 <=235){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
if(iParam0 >=237 && iParam0 <=245){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
if(iParam0 >=247 && iParam0 <=255){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
if(iParam0 >=258 && iParam0 <=267){
*uParam1=(iParam0 - iVar0);
}
iVar0++;
iVar0++;
if(*uParam1 >=212 || *uParam1==-1){
*uParam1=0;
return 0;
}
return *uParam1 !=-1;
}

int func_173(int iParam0, var uParam1, var uParam2){
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


void func_174(int iParam0){
Global_2359296[func_161() /*5568*/].f_681.f_2=iParam0;
}


void func_175(int iParam0, var uParam1, bool bParam2){
var uVar0;
func_66(uParam1);
if(bParam2){
uParam1->f_103=0;
uParam1->f_105=0;
StringCopy(&(uParam1->f_106), "", 64);
StringCopy(&(uParam1->f_122), "", 64);
uParam1->f_140=0;
uParam1->f_138=-1;
uParam1->f_139=-1;
uParam1->f_141=NETWORK::GET_CLOUD_TIME_AS_INT();
if(Global_262145.f_11091){
MISC::SET_BIT(&(uParam1->f_103), 22);
}}
if(func_203(iParam0, 0)){
func_202();
MISC::SET_BIT(&(uParam1->f_103), 3);
}
func_178(iParam0, uParam1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
if(MISC::IS_BIT_SET(uVar0, 3)){
MISC::SET_BIT(&(uParam1->f_103), 2);
}}}
if(MISC::IS_BIT_SET(uParam1->f_103, 8)){
if(!func_176(iParam0)){
}}elseif(func_176(iParam0)){
MISC::SET_BIT(&(uParam1->f_103), 8);
MISC::SET_BIT(&(uParam1->f_103), 9);
}}

int func_176(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_177(iParam0)){
return 1;
}}
return 0;
}

int func_177(int iParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(uVar0, 16);
}}}
return 0;
}


void func_178(int iParam0, var uParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_199(iParam0, uParam1);
MISC::CLEAR_BIT(&(uParam1->f_95), false);
if(MISC::IS_BIT_SET(uParam1->f_77, 11)){
MISC::SET_BIT(&(uParam1->f_95), false);
}
if(func_176(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), false);
}
if(func_197(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), false);
}
if(VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::GET_DRIFT_TYRES_SET(iParam0)){
uParam1->f_102=2;
}elseif(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0)){
uParam1->f_102=1;
}elseif(VEHICLE::GET_DRIFT_TYRES_SET(iParam0)){
uParam1->f_102=3;
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
uParam1->f_78=AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
uParam1->f_79=AUDIO::GET_VEHICLE_HORN_SOUND_INDEX(iParam0);
uParam1->f_80=VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam0, &(uParam1->f_97));
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam0, &(uParam1->f_99));
uParam1->f_98=VEHICLE::GET_VEHICLE_LIVERY2(iParam0);
iVar0=func_186(iParam0, &(uParam1->f_94), &(uParam1->f_96));
MISC::CLEAR_BIT(&(uParam1->f_95), 3);
if(!iVar0==func_49()){
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
MISC::SET_BIT(&(uParam1->f_95), true);
}else{
MISC::CLEAR_BIT(&(uParam1->f_95), true);
}
if(iVar0==PLAYER::PLAYER_ID()){
MISC::SET_BIT(&(uParam1->f_95), 2);
if(uParam1->f_94==1){
if(func_185(iParam0)){
MISC::SET_BIT(&(uParam1->f_95), 3);
}}}else{
MISC::CLEAR_BIT(&(uParam1->f_95), 2);
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2"))){
uParam1->f_99=func_179(func_182(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}}}


var func__179(int iParam0){
var uVar0;
int iVar1;
iVar1=func_181(iParam0);
func_180(iVar1, &uVar0);
return uVar0;
}


bool func_180(int iParam0, int iParam1){
*iParam1=-1;
switch (iParam0){
case 0:
*iParam1=4;
break;
case 1:
*iParam1=5;
break;
case 2:
*iParam1=6;
break;
case 3:
*iParam1=7;
break;
case 4:
*iParam1=111;
break;
case 5:
*iParam1=112;
break;
case 6:
*iParam1=107;
break;
case 7:
*iParam1=104;
break;
case 8:
*iParam1=98;
break;
case 9:
*iParam1=100;
break;
case 10:
*iParam1=102;
break;
case 11:
*iParam1=99;
break;
case 12:
*iParam1=105;
break;
case 13:
*iParam1=106;
break;
case 14:
*iParam1=37;
break;
case 15:
*iParam1=90;
break;
case 16:
*iParam1=88;
break;
case 17:
*iParam1=89;
break;
case 18:
*iParam1=91;
break;
case 19:
*iParam1=38;
break;
case 20:
*iParam1=138;
break;
case 21:
*iParam1=36;
break;
case 22:
*iParam1=27;
break;
case 23:
*iParam1=28;
break;
case 24:
*iParam1=29;
break;
case 25:
*iParam1=150;
break;
case 26:
*iParam1=30;
break;
case 27:
*iParam1=31;
break;
case 28:
*iParam1=32;
break;
case 29:
*iParam1=35;
break;
case 30:
*iParam1=135;
break;
case 31:
*iParam1=137;
break;
case 32:
*iParam1=136;
break;
case 33:
*iParam1=71;
break;
case 34:
*iParam1=145;
break;
case 35:
*iParam1=63;
break;
case 36:
*iParam1=64;
break;
case 37:
*iParam1=65;
break;
case 38:
*iParam1=66;
break;
case 39:
*iParam1=67;
break;
case 40:
*iParam1=68;
break;
case 41:
*iParam1=69;
break;
case 42:
*iParam1=73;
break;
case 43:
*iParam1=70;
break;
case 44:
*iParam1=74;
break;
case 45:
*iParam1=51;
break;
case 46:
*iParam1=53;
break;
case 47:
*iParam1=54;
break;
case 48:
*iParam1=92;
break;
}
return *iParam1 !=-1;
}

int func_181(int iParam0){
switch (iParam0){
case 0:
return 1;
case 1:
return 36;
case 2:
return 35;
case 3:
return 46;
case 4:
return 48;
case 5:
return 16;
case 6:
return 14;
case 7:
return 19;
case 8:
return 22;
case 9:
return 31;
case 10:
return 30;
case 11:
return 33;
case 12:
return 34;
default:
}
return 0;
}

int func_182(int iParam0, int iParam1, int iParam2){
if((iParam0==222 && iParam1==222) && iParam2==255){
return 0;
}
if((iParam0==2 && iParam1==21) && iParam2==255){
return 1;
}
if((iParam0==3 && iParam1==83) && iParam2==255){
return 2;
}
if((iParam0==0 && iParam1==255) && iParam2==140){
return 3;
}
if((iParam0==94 && iParam1==255) && iParam2==1){
return 4;
}
if((iParam0==255 && iParam1==255) && iParam2==0){
return 5;
}
if((iParam0==255 && iParam1==150) && iParam2==5){
return 6;
}
if((iParam0==255 && iParam1==62) && iParam2==0){
return 7;
}
if((iParam0==255 && iParam1==1) && iParam2==1){
return 8;
}
if((iParam0==255 && iParam1==50) && iParam2==100){
return 9;
}
if((iParam0==255 && iParam1==5) && iParam2==190){
return 10;
}
if((iParam0==35 && iParam1==1) && iParam2==255){
return 11;
}
if((iParam0==15 && iParam1==3) && iParam2==255){
return 12;
}
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_183()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_183(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_184() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_184(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_185(int iParam0){
if(Global_2793046.f_299==iParam0){
return 1;
}
return 0;
}

int func_186(int iParam0, var uParam1, var uParam2){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_53(iParam0, 1)){
*uParam1=1;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot")){
*uParam2=DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
}}
return func_51(iParam0);
}elseif(func_196(iParam0, 1)){
return func_195(iParam0, 1, 0);
}elseif(func_194(iParam0, 1)){
return func_193(iParam0, 1, 0);
}elseif(func_192(iParam0, 1)){
return func_191(iParam0, 1, 0);
}elseif(func_190(iParam0, 1)){
return func_189(iParam0, 1, 0);
}elseif(func_188(iParam0, 1)){
*uParam1=2;
return func_187(iParam0);
}elseif(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
*uParam1=3;
return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
}}}}
*uParam1=4;
return PLAYER::PLAYER_ID();
}

int func_187(int iParam0){
int iVar0;
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
return func_52(iVar0, 0, 1, 0);
}

int func_188(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player")){
return 1;
}}}
return 0;
}

int func_189(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_190(iParam0, 1)){
return func_49();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Support_Bike_Vehicle");
return func_52(iVar0, 0, bParam1, iParam2);
}
return func_49();
}

int func_190(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Support_Bike_Vehicle")){
return 1;
}}}
return 0;
}

int func_191(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_192(iParam0, 1)){
return func_49();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Acid_Lab");
return func_52(iVar0, 0, bParam1, iParam2);
}
return func_49();
}

int func_192(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Acid_Lab")){
return 1;
}}}
return 0;
}

int func_193(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_194(iParam0, 1)){
return func_49();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
return func_52(iVar0, 0, bParam1, iParam2);
}
return func_49();
}

int func_194(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck")){
return 1;
}}}
return 0;
}

int func_195(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_196(iParam0, 1)){
return func_49();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
return func_52(iVar0, 0, bParam1, iParam2);
}
return func_49();
}

int func_196(int iParam0, bool bParam1){
if(Global_78558){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck")){
return 1;
}}}
return 0;
}

int func_197(int iParam0){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==1 || iVar0==2){
if(iVar0==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar1=NETWORK::GET_NETWORK_TIME();
}else{
uVar1=MISC::GET_GAME_TIMER();
}
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uVar1, Global_1577913));
iVar3=20000;
if(Global_1836597){
iVar3=2000;
}
if(iVar2 > iVar3){
GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
func_198(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_198(int iParam0){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}}}
if(!MISC::IS_BIT_SET(uVar0, 16)){
MISC::SET_BIT(&uVar0, 16);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", uVar0);
}}


void func_199(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_67(uParam1);
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
if(uParam1->f_65==-1 && !func_201(uParam1->f_66)){
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
func_173(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_200(iVar0 + 1));
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

int func_200(int iParam0){
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

int func_201(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_202(){
int iVar0;
iVar0=0;
while (iVar0 < 415){
if(MISC::IS_BIT_SET(Global_1586468[iVar0 /*142*/].f_103, 3)){
MISC::CLEAR_BIT(&(Global_1586468[iVar0 /*142*/].f_103), 3);
}
iVar0++;
}}

int func_203(int iParam0, int iParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam1==0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1")){
return 1;
}}}elseif(iParam1==1){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec")){
return 1;
}}}}}
return 0;
}


void func_204(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
iVar0=0;
while (iVar0 < 39){
if(Global_2793046.f_2339[iVar0 /*44*/].f_40==iParam0){
func_204(iVar0, 0);
}
iVar0++;
}}else{
StringCopy(&(Global_2793046.f_2339[iParam0 /*44*/]), "", 24);
Global_2793046.f_2339[iParam0 /*44*/].f_6=138;
StringCopy(&(Global_2793046.f_2339[iParam0 /*44*/].f_7), "", 64);
StringCopy(&(Global_2793046.f_2339[iParam0 /*44*/].f_23), "", 64);
Global_2793046.f_2339[iParam0 /*44*/].f_39=-1;
Global_2793046.f_2339[iParam0 /*44*/].f_40=-1;
func_205(&(Global_2793046.f_2339[iParam0 /*44*/].f_41));
Global_2793046.f_2339[iParam0 /*44*/].f_43=0;
}}


void func_205(var uParam0){
uParam0->f_1=0;
}


void func_206(){
func_207(10);
}


void func_207(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_1836764.f_5[iVar0]), bVar1);
}


void func_208(){
Global_2672505.f_62.f_73=0;
func_209(25);
func_209(24);
}


void func_209(bool bParam0){
if(bParam0 < 32){
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_1, bParam0)){
MISC::CLEAR_BIT(&(Global_2672505.f_62.f_1), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2672505.f_62.f_2, (bParam0 - 32))){
MISC::CLEAR_BIT(&(Global_2672505.f_62.f_2), (bParam0 - 32));
}}


void func_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
if(func_214() < 0 && Global_1962819){
return;
}
if(func_213(35)){
bParam0=true;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_60, 3)){
bParam0=true;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_64, 3)){
bParam0=true;
bParam1=false;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_68, 3)){
bParam0=true;
bParam1=false;
}
if(MISC::IS_BIT_SET(Global_2672505.f_62.f_78, 3)){
bParam0=true;
}
if(bParam0){
func_212(2);
}else{
func_212(1);
}
if(bParam1){
func_212(11);
}
if(bParam2){
func_212(32);
if(bParam3){
if(func_214() >=0 && MISC::IS_BIT_SET(Global_1586468[func_214() /*142*/].f_103, 0)){
func_212(33);
}}else{
func_209(33);
}
if(func_214() >=0){
if(func_211(Global_1586468[func_214() /*142*/].f_66)){
func_212(40);
}}}elseif(bParam5){
func_212(37);
}
if(bParam4){
func_212(36);
}
if(func_213(36)){
if(func_213(2)){
func_209(36);
}}
if(bParam6){
func_212(38);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_2793046.f_436=NETWORK::GET_NETWORK_TIME();
}}

int func_211(int iParam0){
if(iParam0==joaat("trailersmall2")){
return 1;
}
return 0;
}


void func_212(bool bParam0){
if(bParam0 < 32){
if(!MISC::IS_BIT_SET(Global_2672505.f_62.f_1, bParam0)){
MISC::SET_BIT(&(Global_2672505.f_62.f_1), bParam0);
}}elseif(!MISC::IS_BIT_SET(Global_2672505.f_62.f_2, (bParam0 - 32))){
MISC::SET_BIT(&(Global_2672505.f_62.f_2), (bParam0 - 32));
}}


bool func_213(int iParam0){
if(iParam0 < 32){
return MISC::IS_BIT_SET(Global_2672505.f_62.f_1, iParam0);
}
return MISC::IS_BIT_SET(Global_2672505.f_62.f_2, (iParam0 - 32));
}

int func_214(){
if(Global_2359296[func_161() /*5568*/].f_681.f_2 >=415){
Global_2359296[func_161() /*5568*/].f_681.f_2=-1;
return -1;
}
return Global_2359296[func_161() /*5568*/].f_681.f_2;
}

int func_215(int iParam0, int iParam1){
if(func_132(0, iParam1) !=0 && func_236(iParam0, 0)){
return 1;
}elseif(func_132(6, iParam1) !=0 && func_236(iParam0, 6)){
return 1;
}elseif(func_132(8, iParam1) !=0 && func_236(iParam0, 8)){
return 1;
}elseif(func_132(11, iParam1) !=0 && func_236(iParam0, 11)){
return 1;
}elseif(iParam0==joaat("trailersmall2")){
return 1;
}elseif(iParam0==joaat("minitank")){
return 1;
}elseif(((func_240(5396, iParam1, 0) !=0 && func_235(15270, iParam1)==7) && !Global_262145.f_21081) && func_223(iParam0, 156)){
return 1;
}elseif(func_132(12, iParam1) !=0 && func_236(iParam0, 12)){
return 1;
}elseif(func_132(13, -1) !=0 && func_236(iParam0, 13)){
return 1;
}elseif(func_132(15, iParam1) !=0 && func_236(iParam0, 15)){
return 1;
}elseif(func_135(iParam1) && func_223(iParam0, 223)){
return 1;
}elseif(func_132(14, -1) !=0 && func_236(iParam0, 14)){
return 1;
}elseif(func_132(18, iParam1) !=0 && func_236(iParam0, 18)){
return 1;
}elseif(func_132(21, iParam1) !=0 && func_236(iParam0, 21)){
return 1;
}elseif((func_132(22, iParam1) !=0 && func_236(iParam0, 22)) && func_218()){
return 1;
}elseif(func_133(iParam1) && func_223(iParam0, 278)){
return 1;
}elseif((func_132(25, iParam1) !=0 && func_236(iParam0, 25)) && func_216(1)){
return 1;
}elseif(func_132(26, iParam1) !=0 && func_236(iParam0, 26)){
return 1;
}elseif(func_132(29, iParam1) !=0 && func_236(iParam0, 29)){
return 1;
}
return 0;
}


bool func_216(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_240(9618, -1, 0), 0);
}
return func_217(PLAYER::PLAYER_ID());
}

int func_217(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_240(9618, -1, 0), 0);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_1, 0);
}
return 0;
}


bool func_218(){
return (func_221(0) && func_219(0));
}

int func_219(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_240(8726, -1, 0), 4);
}
return func_220(PLAYER::PLAYER_ID());
}

int func_220(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_240(8726, -1, 0), 4);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1975258[iParam0 /*68*/].f_40, 4);
}
return 0;
}

int func_221(bool bParam0){
if(bParam0){
return func_222(27227, -1);
}
if(PLAYER::PLAYER_ID() !=func_49()){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_428.f_1, 2);
}
return 0;
}


bool func_222(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_88();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_223(int iParam0, int iParam1){
if(!func_234(iParam1) && !func_233(iParam0)){
if(func_232(iParam0, 0)){
if(iParam1==func_231(iParam0)){
return 1;
}else{
return 0;
}}elseif(func_230(iParam1)){
return 0;
}}
if(func_37(iParam0)){
if(!func_229(iParam1)){
return 0;
}}elseif(func_229(iParam1)){
return 0;
}
if(func_228(iParam1)){
if(!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))){
return 0;
}}
if(func_234(iParam1)){
if(!func_233(iParam0)){
return 0;
}elseif((func_117(iParam0) + func_129(11)) !=iParam1){
return 0;
}}
if(func_227(iParam1)){
if(!func_226(iParam0)){
return 0;
}}elseif(func_226(iParam0)){
return 0;
}
if(!func_225(iParam1, 1)){
if(func_224(iParam0)){
return 0;
}}
if(iParam1==223 && iParam0 !=joaat("oppressor2")){
return 0;
}
if((iParam1==278 && iParam0 !=joaat("toreador")) && iParam0 !=joaat("stromberg")){
return 0;
}
if((iParam0==joaat("cerberus") || iParam0==joaat("cerberus2")) || iParam0==joaat("cerberus3")){
if((iParam1 !=236 && iParam1 !=246) && iParam1 !=256){
return 0;
}}elseif((iParam1==236 || iParam1==246) || iParam1==256){
return 0;
}
return 1;
}

int func_224(int iParam0){
switch (iParam0){
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
return 1;
break;
}
return 0;
}

int func_225(int iParam0, bool bParam1){
if(iParam0 >=func_129(18) && iParam0 < func_120(20)){
return 1;
}
if(bParam1){
if((iParam0==236 || iParam0==246) || iParam0==256){
return 1;
}}
return 0;
}

int func_226(int iParam0){
switch (iParam0){
case joaat("buzzard"):
case joaat("savage"):
case joaat("valkyrie"):
case joaat("hydra"):
case joaat("cargobob"):
case joaat("cargobob2"):
case joaat("havok"):
case joaat("hunter"):
case joaat("volatus"):
case joaat("supervolito"):
case joaat("supervolito2"):
case joaat("swift"):
case joaat("swift2"):
case joaat("frogger"):
case joaat("maverick"):
case joaat("annihilator"):
case joaat("mogul"):
case joaat("rogue"):
case joaat("starling"):
case joaat("seabreeze"):
case joaat("microlight"):
case joaat("tula"):
case joaat("lazer"):
case joaat("pyro"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("howard"):
case joaat("bombushka"):
case joaat("alphaz1"):
case joaat("nimbus"):
case joaat("luxor2"):
case joaat("velum2"):
case joaat("dodo"):
case joaat("miljet"):
case joaat("besra"):
case joaat("vestra"):
case joaat("duster"):
case joaat("shamal"):
case joaat("cuban800"):
case joaat("luxor"):
case joaat("stunt"):
case joaat("mammatus"):
case joaat("titan"):
case joaat("velum"):
case joaat("akula"):
case joaat("volatol"):
case joaat("strikeforce"):
case joaat("seasparrow"):
case joaat("alkonost"):
case joaat("annihilator2"):
case joaat("conada"):
return 1;
default:
}
return 0;
}

int func_227(int iParam0){
if(iParam0 >=func_129(12) && iParam0 < func_120(12)){
return 1;
}
return 0;
}

int func_228(int iParam0){
if(iParam0 >=func_129(6) && iParam0 < func_120(6)){
return 1;
}
return 0;
}

int func_229(int iParam0){
switch (iParam0){
case 10:
case 11:
case 12:
case 23:
case 24:
case 25:
case 36:
case 37:
case 38:
case 49:
case 50:
case 51:
case 62:
case 63:
case 64:
case 85:
case 86:
case 87:
case 291:
case 292:
case 293:
case 304:
case 305:
case 306:
case 347:
case 348:
case 349:
case 360:
case 361:
case 362:
return 1;
break;
}
return 0;
}

int func_230(int iParam0){
switch (iParam0){
case 157:
case 158:
case 190:
case 188:
case 187:
case 186:
case 189:
case 222:
case 224:
case 225:
case 226:
case 257:
case 279:
return 1;
break;
}
if(iParam0 >=func_129(11) && iParam0 < func_120(11)){
return 1;
}
return 0;
}

int func_231(int iParam0){
if(func_233(iParam0)){
return (func_117(iParam0) + func_129(11));
}else{
switch (iParam0){
case joaat("trailersmall2"):
return 157;
break;
case joaat("hauler2"):
case joaat("phantom3"):
return 158;
break;
case joaat("avenger"):
return 190;
break;
case joaat("khanjali"):
return 188;
break;
case joaat("chernobog"):
return 187;
break;
case joaat("riot2"):
return 186;
break;
case joaat("thruster"):
return 189;
break;
case joaat("brickade2"):
return 413;
break;
case joaat("manchez3"):
return 414;
break;
}
if(iParam0==joaat("terbyte")){
return 222;
}elseif(iParam0==joaat("speedo4")){
return 224;
}elseif(iParam0==joaat("mule4")){
return 225;
}elseif(iParam0==joaat("pounder2")){
return 226;
}
if(iParam0==joaat("rcbandito")){
return 257;
}
if(iParam0==joaat("minitank")){
return 279;
}}
return -1;
}

int func_232(int iParam0, bool bParam1){
if(func_233(iParam0)){
return 1;
}
switch (iParam0){
case joaat("trailersmall2"):
case joaat("hauler2"):
case joaat("phantom3"):
if(!bParam1){
return 1;
}
break;
case joaat("avenger"):
case joaat("khanjali"):
case joaat("chernobog"):
case joaat("riot2"):
case joaat("thruster"):
case joaat("speedo4"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("terbyte"):
case joaat("rcbandito"):
case joaat("minitank"):
case joaat("brickade2"):
case joaat("manchez3"):
return 1;
break;
}
return 0;
}

int func_233(int iParam0){
switch (iParam0){
case joaat("technical2"):
case joaat("boxville5"):
case joaat("wastelander"):
case joaat("phantom2"):
case joaat("voltic2"):
case joaat("dune5"):
case joaat("ruiner2"):
case joaat("blazer5"):
return 1;
break;
}
return 0;
}

int func_234(int iParam0){
if(iParam0 >=func_129(11) && iParam0 < func_120(11)){
return 1;
}
return 0;
}

int func_235(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_88();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_236(int iParam0, int iParam1){
int iVar0;
if(iParam0==joaat("minitank")){
return 0;
}
if((((iParam0==joaat("thruster") || iParam0==joaat("khanjali")) || iParam0==joaat("riot2")) || iParam0==joaat("chernobog")) || iParam0==joaat("avenger")){
if(iParam1==13){
return 1;
}else{
return 0;
}}
if(iParam1 !=11){
if(func_233(iParam0)){
return 0;
}}
if((iParam0==joaat("cerberus") || iParam0==joaat("cerberus2")) || iParam0==joaat("cerberus3")){
if((iParam1==18 || iParam1==19) || iParam1==20){
return 1;
}else{
return 0;
}}
if(((((iParam0==joaat("bruiser") || iParam0==joaat("bruiser2")) || iParam0==joaat("bruiser3")) || iParam0==joaat("monster3")) || iParam0==joaat("monster4")) || iParam0==joaat("monster5")){
if((iParam1==18 || iParam1==19) || iParam1==20){
return 1;
}else{
return 0;
}}
if((iParam0==joaat("speedo4") || iParam0==joaat("mule4")) || iParam0==joaat("pounder2")){
if(((iParam1==14 || iParam1==15) || iParam1==16) || iParam1==17){
}else{
return 0;
}}
if(func_226(iParam0)){
if(iParam1==12){
return 1;
}else{
return 0;
}}elseif(iParam1==12){
return 0;
}
if(iParam0==func_237()){
if(iParam1==15){
return 1;
}else{
return 0;
}}
if(iParam1==6){
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 0;
}elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)){
return 1;
}else{
return 0;
}}elseif(iParam1==5){
return 0;
}elseif(((((((((((((((iParam1==8 || iParam1==9) || iParam1==10) || iParam1==13) || iParam1==14) || iParam1==15) || iParam1==16) || iParam1==17) || iParam1==18) || iParam1==19) || iParam1==20) || iParam1==21) || iParam1==22) || iParam1==25) || iParam1==26) || iParam1==29){
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 0;
}}elseif(iParam1==11){
iVar0=func_117(iParam0);
if(iVar0==-1){
return 0;
}}
return 1;
}

int func_237(){
return joaat("terbyte");
}


void func_238(var uParam0){
int iVar0;
iVar0=func_239(85);
Global_2645068[iVar0 /*83*/]=85;
Global_2645068[iVar0 /*83*/].f_17=uParam0;
StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_239(int iParam0){
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

int func_240(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_87(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_241(int iParam0){
bool bVar0;
int iVar1;
switch (iParam0){
case joaat("monster"):
func_242(3604, 1, -1);
break;
case joaat("sovereign"):
func_242(3605, 1, -1);
break;
case joaat("btype2"):
func_242(4326, 1, -1);
break;
case joaat("lurcher"):
func_242(4327, 1, -1);
break;
case joaat("tampa"):
func_242(109, 1, -1);
break;
case joaat("btype3"):
func_242(115, 1, -1);
break;
case joaat("sanctus"):
func_242(124, 1, -1);
break;
}
bVar0=func_117(iParam0);
if(bVar0 !=-1){
iVar1=func_240(5372, -1, 0);
MISC::SET_BIT(&iVar1, bVar0);
func_86(5372, iVar1, -1, 1, 0);
}}


void func_242(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_88();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_243(int iParam0){
bool bVar0;
bVar0=false;
if(!func_257()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_246(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_244(&(Global_4535172[iParam0 /*85*/]));
}}


void func_244(var uParam0){
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
func_245(&(uParam0->f_14));
func_245(&(uParam0->f_14.f_13));
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


void func_245(var uParam0){
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

int func_246(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}

int func_247(var uParam0){
if(func_251(PLAYER::PLAYER_ID())){
return 825583449;
}elseif(func_250(PLAYER::PLAYER_ID())){
return 1021990419;
}elseif(func_249()){
return -922984872;
}elseif(func_248(PLAYER::PLAYER_ID())){
return 728601621;
}
return 1098797251;
}

int func_248(int iParam0){
if(func_128(Global_1853910[iParam0 /*862*/].f_267.f_33, -1)){
return 1;
}
return 0;
}


bool func_249(){
return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_luxury_showroom")) > 0;
}

int func_250(int iParam0){
if(iParam0 !=func_49()){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_321.f_5, 25);
}
return 0;
}

int func_251(int iParam0){
if(iParam0 !=func_49()){
if(func_50(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_252(Global_2657589[iParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}

int func_252(int iParam0){
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


char* func_253(int iParam0){
int iVar0;
if(iParam0==-1){
return "";
}
if(iParam0==8){
return "";
}
iVar0=func_254(iParam0, -1);
if(iVar0==0){
return "";
}
switch (iParam0){
case 31:
return "SUBMERSIBLE";
case 68:
return "SANCHEZ";
case 105:
return "REBEL";
case 107:
return "SANCHEZ2";
case 117:
return "COQUETTE_TLESS";
case 118:
return "BANSHEE_TLESS";
case 119:
return "STINGER_TLESS";
case 120:
return "VOLTIC_HTOP";
case 154:
return "BLAZER3";
case 155:
return "REBEL2";
case 158:
return "BUFFALO2";
case 159:
return "TAILGATER";
case 166:
return "COQUETTE2_TLESS";
case 170:
return "KALAHARI_TLESS";
case 171:
return "BOXVILLE4";
case 173:
return "DINGHY3";
case 183:
return "MULE3";
case 191:
return "LANDSTALKER";
case 192:
return "MESA3";
case 194:
return "ORACLE1";
case 196:
return "SCHAFTER2";
case 207:
return "DOMINATOR2";
case 245:
return "BIG_YACHT";
case 254:
return "CARGOBOB2";
case 323:
return "BIG_TRUCK";
case 324:
return "BALLISTIC";
case 357:
return "BIG_PLANE";
case 402:
return "HACKER_TRUCK";
case 510:
return "LANDSTLKR2";
case 583:
return "BRICKADE2";
default:
}
return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

int func_254(int iParam0, int iParam1){
switch (iParam0){
case 0:
return joaat("ztype");
case 1:
return joaat("stinger");
case 2:
return joaat("jb700");
case 3:
return joaat("cheetah");
case 4:
return joaat("entityxf");
case 5:
return joaat("adder");
case 6:
return joaat("monroe");
case 7:
return joaat("cogcabrio");
case 10:
return joaat("shamal");
case 11:
return joaat("stunt");
case 12:
return joaat("cuban800");
case 13:
return joaat("duster");
case 14:
return joaat("luxor");
case 15:
return joaat("frogger");
case 16:
return joaat("maverick");
case 17:
return joaat("rhino");
case 18:
return joaat("titan");
case 19:
return joaat("cargobob");
case 20:
return joaat("buzzard");
case 21:
return joaat("crusader");
case 22:
return joaat("barracks");
case 24:
return joaat("marquis");
case 25:
return joaat("jetmax");
case 27:
return joaat("squalo");
case 29:
return joaat("tropic");
case 30:
return joaat("seashark");
case 31:
return joaat("submersible");
case 32:
return joaat("suntrap");
case 258:
return joaat("tug");
case 33:
return joaat("bmx");
case 34:
return joaat("scorcher");
case 35:
return joaat("tribike");
case 36:
return joaat("tribike2");
case 37:
return joaat("tribike3");
case 38:
return joaat("cruiser");
case 39:
return joaat("schwarzer");
case 40:
return joaat("zion");
case 41:
return joaat("gauntlet");
case 42:
return joaat("vigero");
case 43:
return joaat("issi2");
case 44:
return joaat("infernus");
case 45:
return joaat("surano");
case 46:
return joaat("vacca");
case 47:
return joaat("ninef");
case 48:
return joaat("comet2");
case 49:
return joaat("banshee");
case 50:
return joaat("feltzer2");
case 51:
return joaat("bfinjection");
case 52:
return joaat("sandking");
case 53:
return joaat("fugitive");
case 54:
return joaat("dilettante");
case 55:
return joaat("superd");
case 56:
return joaat("exemplar");
case 57:
return joaat("baller2");
case 58:
return joaat("cavalcade");
case 59:
return joaat("rocoto");
case 60:
return joaat("felon");
case 61:
return joaat("oracle2");
case 62:
return joaat("bati");
case 63:
return joaat("akuma");
case 64:
return joaat("ruffian");
case 65:
return joaat("vader");
case 66:
return joaat("blazer");
case 67:
return joaat("pcj");
case 68:
return joaat("sanchez");
case 69:
return joaat("faggio2");
case 70:
return joaat("bullet");
case 71:
return joaat("carbonizzare");
case 72:
return joaat("coquette");
case 73:
return joaat("ninef2");
case 74:
return joaat("rapidgt");
case 75:
return joaat("rapidgt2");
case 76:
return joaat("stingergt");
case 77:
return joaat("voltic");
case 78:
return joaat("annihilator");
case 79:
return joaat("mammatus");
case 80:
return joaat("velum");
case 81:
return joaat("dump");
case 82:
return joaat("airbus");
case 83:
return joaat("bus");
case 84:
return joaat("coach");
case 85:
return joaat("journey");
case 86:
return joaat("mule");
case 87:
return joaat("rentalbus");
case 88:
return joaat("stretch");
case 89:
return joaat("bison");
case 90:
return joaat("double");
case 91:
return joaat("felon2");
case 92:
return joaat("hexer");
case 93:
return joaat("zion2");
case 94:
return joaat("bati2");
case 95:
return joaat("elegy2");
case 96:
return joaat("khamelion");
case 97:
return joaat("hotknife");
case 98:
return joaat("carbonrs");
default:
}
switch (iParam0){
case 99:
return joaat("bifta");
case 100:
return joaat("kalahari");
case 101:
return joaat("paradise");
case 102:
return joaat("speeder");
case 103:
return joaat("bodhi2");
case 104:
return joaat("dune");
case 105:
return joaat("rebel");
case 106:
return joaat("sadler");
case 107:
return joaat("sanchez2");
case 108:
return joaat("sandking2");
case 109:
return joaat("btype");
case 111:
return joaat("jester");
case 114:
return joaat("massacro");
case 112:
return joaat("turismor");
case 115:
return joaat("zentorno");
case 116:
return joaat("huntley");
case 110:
return joaat("alpha");
case 113:
return joaat("vestra");
case 117:
return joaat("coquette");
case 118:
return joaat("banshee");
case 119:
return joaat("stinger");
case 120:
return joaat("voltic");
case 121:
return joaat("thrust");
case 128:
return joaat("asea");
case 129:
return joaat("asterope");
case 130:
return joaat("bobcatxl");
case 131:
return joaat("cavalcade2");
case 132:
return joaat("granger");
case 133:
return joaat("ingot");
case 134:
return joaat("intruder");
case 135:
return joaat("minivan");
case 136:
return joaat("premier");
case 137:
return joaat("radi");
case 138:
return joaat("rancherxl");
case 139:
return joaat("ratloader");
case 140:
return joaat("stanier");
case 141:
return joaat("stratum");
case 142:
return joaat("washington");
case 122:
return joaat("dominator");
case 123:
return joaat("f620");
case 124:
return joaat("fusilade");
case 125:
return joaat("penumbra");
case 126:
return joaat("sentinel");
case 127:
return joaat("sentinel2");
default:
}
switch (iParam0){
case 143:
return joaat("blade");
case 144:
return joaat("warrener");
case 145:
return joaat("glendale");
case 146:
return joaat("rhapsody");
case 147:
return joaat("panto");
case 148:
return joaat("dubsta3");
case 149:
return joaat("pigalle");
case 150:
return joaat("picador");
case 151:
return joaat("regina");
case 152:
return joaat("surfer");
case 153:
return joaat("youga");
case 154:
return joaat("blazer3");
case 155:
return joaat("rebel2");
case 156:
return joaat("primo");
case 157:
return joaat("buffalo");
case 158:
return joaat("buffalo2");
case 159:
return joaat("tailgater");
case 160:
return joaat("monster");
case 161:
return joaat("sovereign");
case 162:
return joaat("miljet");
case 163:
return joaat("besra");
case 164:
return joaat("swift");
case 165:
return joaat("coquette2");
case 166:
return joaat("coquette2");
case 167:
return joaat("innovation");
case 168:
return joaat("hakuchou");
case 169:
return joaat("furoregt");
case 170:
return joaat("kalahari");
case 187:
return joaat("valkyrie");
case 177:
return joaat("hydra");
case 185:
return joaat("savage");
case 174:
return joaat("enduro");
case 171:
return joaat("boxville4");
case 172:
return joaat("casco");
case 173:
return joaat("dinghy3");
case 175:
return joaat("gburrito2");
case 176:
return joaat("guardian");
case 178:
return joaat("insurgent");
case 179:
return joaat("insurgent2");
case 183:
return joaat("mule3");
case 180:
return joaat("kuruma");
case 181:
return joaat("kuruma2");
case 182:
return joaat("lectro");
case 184:
return joaat("pbus");
case 186:
return joaat("technical");
case 188:
return joaat("velum2");
case 189:
return joaat("gresley");
case 190:
return joaat("jackal");
case 191:
return joaat("landstalker");
case 192:
return joaat("mesa3");
case 193:
return joaat("nemesis");
case 194:
return joaat("oracle");
case 195:
return joaat("rumpo");
case 196:
return joaat("schafter2");
case 197:
return joaat("seminole");
case 198:
return joaat("surge");
case 199:
return joaat("dodo");
case 200:
return joaat("marshall");
case 201:
return joaat("submersible2");
case 202:
return joaat("blista2");
case 203:
return joaat("stalion");
case 204:
return joaat("dukes");
case 205:
return joaat("dukes2");
case 206:
return joaat("stalion2");
case 207:
return joaat("dominator2");
case 208:
return joaat("gauntlet2");
case 209:
return joaat("buffalo3");
case 210:
return joaat("slamvan");
case 211:
return joaat("ratloader2");
case 212:
return joaat("jester2");
case 213:
return joaat("massacro2");
case 214:
return joaat("feltzer3");
case 215:
return joaat("luxor2");
case 216:
return joaat("osiris");
case 217:
return joaat("swift2");
case 218:
return joaat("virgo");
case 219:
return joaat("windsor");
case 220:
return joaat("brawler");
case 221:
return joaat("chino");
case 222:
return joaat("coquette3");
case 223:
return joaat("t20");
case 224:
return joaat("toro");
case 225:
return joaat("vindicator");
case 229:
return joaat("primo");
case 228:
return joaat("moonbeam");
case 227:
return joaat("faction");
case 226:
return joaat("buccaneer");
case 230:
return joaat("voodoo2");
case 263:
if(iParam1==0){
return joaat("xls");
}elseif(iParam1==1){
return joaat("xls2");
}else{
return joaat("xls");
}
break;
case 264:
return joaat("seven70");
case 259:
return joaat("windsor2");
case 260:
return joaat("prototipo");
case 261:
return joaat("fmj");
case 262:
return joaat("bestiagts");
case 265:
return joaat("pfister811");
case 266:
return joaat("reaper");
case 231:
return joaat("btype2");
case 232:
return joaat("lurcher");
case 233:
if(iParam1==0){
return joaat("baller3");
}elseif(iParam1==1){
return joaat("baller5");
}else{
return joaat("baller3");
}
break;
case 234:
if(iParam1==0){
return joaat("baller4");
}elseif(iParam1==1){
return joaat("baller6");
}else{
return joaat("baller4");
}
break;
case 235:
if(iParam1==0){
return joaat("cog55");
}elseif(iParam1==1){
return joaat("cog552");
}else{
return joaat("cog55");
}
break;
case 236:
if(iParam1==0){
return joaat("cognoscenti");
}elseif(iParam1==1){
return joaat("cognoscenti2");
}else{
return joaat("cognoscenti");
}
break;
case 237:
return joaat("limo2");
case 238:
return joaat("mamba");
case 239:
return joaat("nightshade");
case 240:
if(iParam1==0){
return joaat("schafter3");
}elseif(iParam1==1){
return joaat("schafter5");
}else{
return joaat("schafter3");
}
break;
case 241:
if(iParam1==0){
return joaat("schafter4");
}elseif(iParam1==1){
return joaat("schafter6");
}else{
return joaat("schafter4");
}
break;
case 242:
return joaat("verlierer2");
case 243:
return joaat("supervolito");
case 244:
return joaat("supervolito2");
case 245:
return Global_75654;
case 251:
return joaat("virgo3");
case 250:
return joaat("tornado");
case 249:
return joaat("sabregt");
case 252:
return joaat("faction");
case 246:
return joaat("tampa");
case 247:
return joaat("sultan");
case 49:
return joaat("banshee");
case 248:
return joaat("btype3");
case 253:
return joaat("volatus");
case 254:
return joaat("cargobob2");
case 255:
return joaat("rumpo3");
case 256:
return joaat("brickade");
case 257:
return joaat("nimbus");
case 267:
return joaat("le7b");
case 268:
return joaat("omnis");
case 269:
return joaat("tropos");
case 270:
return joaat("brioso");
case 271:
return joaat("trophytruck");
case 272:
return joaat("trophytruck2");
case 273:
return joaat("contender");
case 274:
return joaat("cliffhanger");
case 275:
return joaat("bf400");
case 279:
return joaat("tyrus");
case 280:
return joaat("lynx");
case 281:
return joaat("sheava");
case 276:
return joaat("rallytruck");
case 277:
return joaat("tampa2");
case 278:
return joaat("gargoyle");
case 282:
return joaat("bagger");
case 283:
return joaat("esskey");
case 284:
return joaat("nightblade");
case 285:
return joaat("defiler");
case 286:
return joaat("avarus");
case 287:
return joaat("zombiea");
case 288:
return joaat("zombieb");
case 289:
return joaat("chimera");
case 290:
return joaat("daemon2");
case 291:
return joaat("ratbike");
case 292:
return joaat("shotaro");
case 293:
return joaat("raptor");
case 294:
return joaat("hakuchou2");
case 296:
return joaat("blazer4");
case 297:
return joaat("sanctus");
case 295:
return joaat("vortex");
case 298:
return joaat("manchez");
case 299:
return joaat("tornado6");
case 300:
return joaat("youga2");
case 301:
return joaat("wolfsbane");
case 302:
return joaat("faggio3");
case 303:
return joaat("faggio");
case 304:
return joaat("dune5");
case 305:
return joaat("phantom2");
case 306:
return joaat("technical2");
case 307:
return joaat("blazer5");
case 308:
return joaat("boxville5");
case 309:
return joaat("wastelander");
case 310:
return joaat("ruiner2");
case 311:
return joaat("voltic2");
case 312:
return joaat("penetrator");
case 313:
return joaat("tempesta");
case 314:
return joaat("italigtb");
case 315:
return joaat("nero");
case 316:
return joaat("diablous");
case 317:
return joaat("fcr");
case 318:
return joaat("specter");
case 319:
return joaat("gp1");
case 320:
return joaat("infernus2");
case 321:
return joaat("ruston");
case 322:
return joaat("turismo2");
}
switch (iParam0){
case 323:
return Global_75655;
case 324:
return Global_75656;
case 325:
return joaat("cheetah2");
case 326:
return joaat("torero");
case 327:
return joaat("vagner");
case 328:
return joaat("xa21");
case 329:
return joaat("apc");
case 330:
return joaat("dune3");
case 331:
return joaat("halftrack");
case 332:
return joaat("oppressor");
case 333:
return joaat("tampa3");
case 334:
return joaat("trailersmall2");
case 335:
return joaat("ardent");
case 336:
return joaat("nightshark");
case 337:
return joaat("lazer");
case 338:
return joaat("microlight");
case 339:
return joaat("mogul");
case 340:
return joaat("rogue");
case 341:
return joaat("starling");
case 342:
return joaat("seabreeze");
case 343:
return joaat("tula");
case 344:
return joaat("pyro");
case 345:
return joaat("molotok");
case 346:
return joaat("nokota");
case 347:
return joaat("bombushka");
case 348:
return joaat("hunter");
case 349:
return joaat("havok");
case 350:
return joaat("howard");
case 351:
return joaat("alphaz1");
case 352:
return joaat("cyclone");
case 353:
return joaat("visione");
case 354:
return joaat("retinue");
case 355:
return joaat("rapidgt3");
case 356:
return joaat("vigilante");
case 357:
return Global_75657;
case 358:
return joaat("deluxo");
case 359:
return joaat("stromberg");
case 360:
return joaat("riot2");
case 361:
return joaat("chernobog");
case 362:
return joaat("khanjali");
case 363:
return joaat("akula");
case 364:
return joaat("thruster");
case 365:
return joaat("barrage");
case 366:
return joaat("volatol");
case 367:
return joaat("comet4");
case 368:
return joaat("neon");
case 369:
return joaat("streiter");
case 370:
return joaat("sentinel3");
case 371:
return joaat("yosemite");
case 372:
return joaat("sc1");
case 373:
return joaat("autarch");
case 374:
return joaat("gt500");
case 375:
return joaat("hustler");
case 376:
return joaat("revolter");
case 377:
return joaat("pariah");
case 378:
return joaat("raiden");
case 379:
return joaat("savestra");
case 380:
return joaat("riata");
case 381:
return joaat("hermes");
case 382:
return joaat("comet5");
case 383:
return joaat("z190");
case 384:
return joaat("viseris");
case 385:
return joaat("kamacho");
case 386:
return joaat("gb200");
case 387:
return joaat("fagaloa");
case 388:
return joaat("ellie");
case 389:
return joaat("issi3");
case 390:
return joaat("michelli");
case 391:
return joaat("flashgt");
case 392:
return joaat("hotring");
case 393:
return joaat("tezeract");
case 394:
return joaat("tyrant");
case 395:
return joaat("dominator3");
case 396:
return joaat("taipan");
case 397:
return joaat("entity2");
case 398:
return joaat("jester3");
case 399:
return joaat("cheburek");
case 400:
return joaat("caracara");
case 401:
return joaat("seasparrow");
case 402:
return Global_75658;
case 403:
return joaat("mule4");
case 404:
return joaat("pounder2");
case 405:
return joaat("swinger");
case 406:
return joaat("menacer");
case 407:
return joaat("scramjet");
case 408:
return joaat("strikeforce");
case 409:
return joaat("oppressor2");
case 410:
return joaat("patriot2");
case 411:
return joaat("stafford");
case 412:
return joaat("freecrawler");
case 415:
return joaat("futo");
case 416:
return joaat("ruiner");
case 417:
return joaat("romero");
case 418:
return joaat("prairie");
case 419:
return joaat("baller");
case 420:
return joaat("serrano");
case 421:
return joaat("bjxl");
case 422:
return joaat("habanero");
case 423:
return joaat("fq2");
case 424:
return joaat("patriot");
case 413:
return joaat("blimp3");
case 414:
return joaat("pbus2");
case 425:
return joaat("cerberus");
case 426:
return joaat("cerberus2");
case 427:
return joaat("cerberus3");
case 428:
return joaat("brutus");
case 429:
return joaat("brutus2");
case 430:
return joaat("brutus3");
case 431:
return joaat("scarab");
case 432:
return joaat("scarab2");
case 433:
return joaat("scarab3");
case 434:
return joaat("imperator");
case 435:
return joaat("imperator2");
case 436:
return joaat("imperator3");
case 437:
return joaat("zr380");
case 438:
return joaat("zr3802");
case 439:
return joaat("zr3803");
case 440:
return joaat("impaler");
case 450:
return joaat("taxi");
case 451:
return joaat("bulldozer");
case 452:
return joaat("speedo2");
case 453:
return joaat("trash2");
case 454:
return joaat("barracks2");
case 455:
return joaat("mixer");
case 456:
return joaat("dune2");
case 457:
return joaat("tractor");
case 458:
return joaat("blista3");
case 441:
return joaat("vamos");
case 442:
return joaat("tulip");
case 443:
return joaat("deveste");
case 444:
return joaat("schlagen");
case 445:
return joaat("toros");
case 446:
return joaat("deviant");
case 447:
return joaat("clique");
case 448:
return joaat("italigto");
case 449:
return joaat("rcbandito");
case 459:
return joaat("thrax");
case 460:
return joaat("drafter");
case 461:
return joaat("locust");
case 462:
return joaat("novak");
case 463:
return joaat("zorrusso");
case 464:
return joaat("gauntlet3");
case 465:
return joaat("issi7");
case 466:
return joaat("zion3");
case 467:
return joaat("nebula");
case 468:
return joaat("hellion");
case 469:
return joaat("dynasty");
case 470:
return joaat("rrocket");
case 471:
return joaat("peyote2");
case 472:
return joaat("gauntlet4");
case 473:
return joaat("caracara2");
case 474:
return joaat("jugular");
case 475:
return joaat("s80");
case 476:
return joaat("krieger");
case 477:
return joaat("emerus");
case 478:
return joaat("neo");
case 479:
return joaat("paragon");
case 480:
return joaat("firetruk");
case 481:
return joaat("burrito2");
case 482:
return joaat("boxville");
case 483:
return joaat("stockade");
case 484:
return joaat("lguard");
case 485:
return joaat("blazer2");
case 486:
return joaat("zhaba");
case 487:
return joaat("minitank");
case 488:
return joaat("jb7002");
case 489:
return joaat("stryder");
case 490:
return joaat("vstr");
case 491:
return joaat("formula");
case 492:
return joaat("imorgon");
case 493:
return joaat("formula2");
case 494:
return joaat("furia");
case 495:
return joaat("rebla");
case 496:
return joaat("vagrant");
case 497:
return joaat("retinue2");
case 498:
return joaat("yosemite2");
case 499:
return joaat("komoda");
case 500:
return joaat("sultan2");
case 501:
return joaat("sugoi");
case 502:
return joaat("everon");
case 503:
return joaat("asbo");
case 504:
return joaat("kanjo");
case 505:
return joaat("outlaw");
default:
}
switch (iParam0){
case 506:
return joaat("club");
case 507:
return joaat("dukes3");
case 508:
return joaat("yosemite3");
case 509:
return joaat("penumbra2");
case 510:
return joaat("landstalker2");
case 511:
return joaat("seminole2");
case 512:
return joaat("tigon");
case 513:
return joaat("openwheel1");
case 514:
return joaat("openwheel2");
case 515:
return joaat("coquette4");
case 516:
return joaat("manana");
case 517:
return joaat("peyote");
case 518:
return func_30();
case 519:
return joaat("italirsx");
case 520:
return joaat("slamtruck");
case 521:
return joaat("brioso2");
case 522:
return joaat("weevil");
case 523:
return joaat("alkonost");
case 524:
return joaat("annihilator2");
case 525:
return joaat("dinghy5");
case 526:
return joaat("manchez2");
case 527:
return joaat("patrolboat");
case 528:
return joaat("squaddie");
case 529:
return joaat("toreador");
case 530:
return joaat("verus");
case 531:
return joaat("vetir");
case 532:
return joaat("winky");
case 533:
return joaat("longfin");
case 534:
return joaat("veto");
case 535:
return joaat("veto2");
case 543:
return joaat("zr350");
case 537:
return joaat("comet6");
case 540:
return joaat("jester4");
case 542:
return joaat("vectre");
case 538:
return joaat("cypher");
case 548:
return joaat("tailgater2");
case 550:
return joaat("euros");
case 551:
return joaat("growler");
case 536:
return joaat("calico");
case 541:
return joaat("remus");
case 539:
return joaat("dominator7");
case 546:
return joaat("futo2");
case 545:
return joaat("rt3000");
case 544:
return joaat("warrener2");
case 547:
return joaat("sultan3");
case 549:
return joaat("dominator8");
case 552:
return joaat("previon");
case 554:
return joaat("comet7");
case 555:
return joaat("shinobi");
case 556:
return joaat("reever");
case 557:
return joaat("baller7");
case 558:
return joaat("cinquemila");
case 559:
return joaat("jubilee");
case 560:
return joaat("astron");
case 561:
return joaat("deity");
case 562:
return joaat("zeno");
case 563:
return joaat("champion");
case 564:
return joaat("ignus");
case 565:
return joaat("buffalo4");
case 566:
return joaat("granger2");
case 567:
return joaat("iwagen");
case 568:
return joaat("patriot3");
case 553:
return joaat("supervolito2");
case 569:
return joaat("tenf");
case 570:
return joaat("sm722");
case 571:
return joaat("torero2");
case 572:
return joaat("corsita");
case 573:
return joaat("lm87");
case 574:
return joaat("omnisegt");
case 575:
return joaat("rhinehart");
case 576:
return joaat("postlude");
case 577:
return joaat("kanjosj");
case 578:
return joaat("vigero2");
case 579:
return joaat("ruiner4");
case 580:
return joaat("draugur");
case 581:
return joaat("greenwood");
case 582:
return joaat("conada");
case 583:
return joaat("brickade2");
case 584:
return joaat("manchez3");
case 585:
return joaat("panthere");
case 586:
return joaat("tahoma");
case 587:
return joaat("tulip2");
case 588:
return joaat("everon2");
case 589:
return joaat("journey2");
case 590:
return joaat("surfer3");
case 591:
return joaat("virtue");
case 592:
return joaat("r300");
case 593:
return joaat("issi8");
case 594:
return joaat("entity3");
case 595:
return joaat("powersurge");
case 596:
return joaat("boor");
case 597:
return joaat("broadway");
case 598:
return joaat("eudora");
default:
}
return 0;
}

int func_255(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_256(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_255(iVar0) !=2147483647){
if(func_246(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_257(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_258(){
if(Global_78558 && func_260()){
return 0;
}
if(!Global_78558 && func_259()){
return 0;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return 0;
}
return 1;
}


var func__259(){
return Global_75694;
}


var func__260(){
return Global_1935689;
}

int func_261(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
bool bVar7;
if(func_257()){
if(!func_258()){
uParam0->f_3=3;
}
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_88()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
uParam0->f_3=3;
}
switch (uParam0->f_3){
case 0:
uVar0=iParam2;
iVar2=0;
iVar3=0;
iVar4=uVar0;
if(MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0){
if(MONEY::NETWORK_GET_VC_BANK_BALANCE() >=iVar4){
iVar3=iVar4;
}else{
iVar3=(iVar4 - (iVar4 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
}
iVar4=(iVar4 - iVar3);
}
if(iVar4 > 0){
if(MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0){
if(MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >=iVar4){
iVar2=iVar4;
}
else{
iVar2=(iVar4 - (iVar4 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
}
iVar4=(iVar4 - iVar2);
}}
if(iVar4 > 0){
uParam0->f_3=3;
func_77(uParam0, 1);
return 0;
}
if(func_314(78225582, -1224924353, iParam4, -897111558, 1, iParam2, uParam3, 4, iParam5, 3)){
if(func_312(uParam0)){
if(func_314(78225582, -1224924353, iParam5, -897111558, 1, uVar0, uParam3, 4, 1479801209, 3)){
}
else{
uParam0->f_3=3;
return 1;
}}
if(func_269(uParam0->f_1, iParam6, 1, 0)){
if(func_264()){
if((iVar2 !=0 || iVar3 !=0) || uVar1){
HUD::USE_FAKE_MP_CASH(1);
HUD::CHANGE_FAKE_MP_CASH(-iVar2, -iVar3);
}
uParam0->f_3=1;
}
else{
uParam0->f_3=3;
}}else{
uParam0->f_3=3;
}}else{
uParam0->f_3=3;
}
break;
case 1:
iVar5=func_256();
if(iVar5 >=0 && iVar5 < 15){
if(func_263(iVar5)){
if(func_262(iVar5)==2){
uParam0->f_3=2;
}
else{
uParam0->f_3=3;
}}}else{
uParam0->f_3=3;
}
break;
case 2:
uParam0->f_3=0;
HUD::USE_FAKE_MP_CASH(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
*iParam1=2;
return 0;
break;
case 3:
func_243(func_256());
uParam0->f_3=0;
HUD::USE_FAKE_MP_CASH(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
*iParam1=3;
return 0;
break;
}
if(uParam0->f_3==3){
func_243(func_256());
uParam0->f_3=0;
HUD::USE_FAKE_MP_CASH(0);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
*iParam1=3;
return 0;
}
return 1;
}else{
bVar6=MONEY::NETWORK_GET_VC_BANK_BALANCE() >=false;
bVar7=MONEY::NETWORK_GET_VC_BANK_BALANCE() < iParam2;
if((bVar6 && MONEY::NETWORK_CAN_SPEND_MONEY(iParam2, 1, 0, 0, -1, 0)) || (bVar7 && MONEY::NETWORK_CAN_SPEND_MONEY(iParam2, 0, 1, 0, -1, 0))){
*iParam1=2;
return 0;
}else{
*iParam1=3;
func_77(uParam0, 1);
return 0;
}}
uParam0->f_3=0;
*iParam1=0;
return 0;
}

int func_262(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2;
}
return 0;
}

int func_263(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2 !=1;
}
return 0;
}

int func_264(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bVar0=false;
if(!func_257()){
bVar0=true;
}
iVar1=1;
iVar2=func_256();
if(iVar2==-1){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_88()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_268(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1)==1){
Global_4536674=1;
}
return 0;
}
if(Global_2695821){
if(Global_4535172[iVar2 /*85*/].f_66.f_6==1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6==-1303831698){
Global_4536675=1;
return 0;
}}}
iVar3=func_255(iVar2);
if(iVar3 !=2147483647){
if((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3)){
Global_4535172[iVar2 /*85*/].f_66.f_13=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=0;
Global_4535172[iVar2 /*85*/].f_66.f_14=MISC::GET_FRAME_COUNT();
if(bVar0){
Global_4535172[iVar2 /*85*/].f_66.f_8=1;
Global_4535172[iVar2 /*85*/].f_66.f_12=1;
}
Global_4535172[iVar2 /*85*/].f_66.f_18=0;
if(bVar0 || iVar1){
func_265(Global_4535172[iVar2 /*85*/], iVar2);
}
Global_4536659=1;
return 1;
}}
return 0;
}


void func_265(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_267(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_266();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_266(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__267(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_268(int iParam0, int iParam1, int iParam2){
if(iParam0==-433440095 || iParam0==1474183246){
switch (iParam1){
case 1940862352:
if(iParam2 >=10000){
return 1;
}else{
return 0;
}
break;
case -31156877:
case -327918414:
case 550898518:
case 835976347:
case 1347433368:
case -1100963799:
if(iParam2 >=1000){
return 1;
}else{
return 2;
}
break;
case 1982688246:
return 0;
break;
case 1718438689:
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
case -664597565:
case 599804707:
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
case 443347049:
case 403506509:
case -883876414:
case -1064150715:
case -1387253055:
case -716963152:
case 1138089938:
case -561012053:
case 1240683675:
case 1241904665:
case -494565059:
case 827308208:
case -1857685192:
case 1698417709:
case -2017925037:
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
case 1668610896:
case -2032529561:
return 1;
break;
case 1515774909:
case 1173654533:
case -899802304:
case -663944335:
case 1208553146:
case -613221010:
case -671062876:
case 291576838:
case -1276678868:
case 711665950:
case -407201236:
case -754024203:
case -1885444887:
case 1931729587:
case 1064954035:
case -180141073:
case 2131324797:
case 283351220:
case 1108628223:
case -876847842:
case 68030260:
return 2;
break;
default:
return 0;
break;
}
switch (iParam1){
case -319306689:
case -466527264:
case 1925965142:
case 592152676:
case 2035612943:
case 1568659720:
case -1224479447:
case 1220095570:
case 2050320631:
case 592672421:
case -842062976:
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
return 1;
break;
case 1775876058:
case -518651910:
return 2;
break;
}}elseif((iParam0==-1134853190 || iParam0==925407197) || iParam0==-1589378882){
return 0;
}
return 1;
}

int func_269(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
char* sVar3;
char* sVar4;
struct<4> Var5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bool bVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
var uVar17;
int iVar18;
int iVar19;
int iVar20;
int iVar21;
struct<4> Var22;
var uVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
bool bVar32;
int iVar33;
int iVar34;
int iVar35;
char* sVar36;
iVar10=func_311(ENTITY::GET_ENTITY_MODEL(iParam1));
if(((!Global_4540401 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <=0){
if(VEHICLE::GET_NUM_MOD_KITS(iParam1) <=0 && func_37(ENTITY::GET_ENTITY_MODEL(iParam1))){
func_307(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
if(!func_306(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6)){
return 0;
}
if(!func_306(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8)){
return 0;
}
if(!func_304(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_305(iVar0))){
return 0;
}
if(!func_306(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7)){
return 0;
}
if(!func_304(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_305(iVar1))){
return 0;
}}
return 1;
}
if(iParam0==-1){
iParam0=0;
}
bVar11=true;
if((((((((((((((iParam0==10 || iParam0==11) || iParam0==12) || iParam0==23) || iParam0==24) || iParam0==25) || iParam0==36) || iParam0==37) || iParam0==38) || iParam0==49) || iParam0==50) || iParam0==51) || iParam0==62) || iParam0==63) || iParam0==64){
bVar11=false;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar12=func_302(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar13=func_300(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar14=func_296(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar15=func_295(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar16=func_294(iParam1);
if(bVar11){
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_292(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_292(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47)){
return 0;
}
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48)){
return 0;
}}
if(bVar11){
uVar17=func_291(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
if(!func_289(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_290(uVar17), 10, iVar12)){
return 0;
}}
if(bVar11){
if(!func_288(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15)){
return 0;
}
if(!func_288(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15)){
return 0;
}}
if(!func_286(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1)){
return 0;
}
if(bVar11){
iVar18=0;
switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1)){
case 0:
iVar18=0;
break;
case 3:
iVar18=1;
break;
case 2:
iVar18=2;
break;
case 1:
iVar18=3;
break;
case 4:
iVar18=4;
break;
case 5:
iVar18=5;
break;
}
if(!func_293(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23)){
return 0;
}}
if(bVar11){
iVar19=0;
switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1)){
case 3:
iVar19=0;
break;
case 0:
iVar19=1;
break;
case 4:
iVar19=2;
break;
case 2:
iVar19=3;
break;
case 1:
iVar19=4;
break;
}
if(!func_293(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23)){
return 0;
}}
if(bVar11){
if(VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23)==0){
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23)){
return 0;
}}elseif(!func_293(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23)){
return 0;
}
if(VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24)==0){
if(!func_293(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23)){
return 0;
}}elseif(!func_293(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23)){
return 0;
}}
func_307(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
iVar20=func_285(iVar9);
if(!func_293(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23)){
return 0;
}
VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
if(bParam3){
while (func_284(iVar21, &Var22, &uVar23, &iVar24, &iVar25)){
if(iVar24==iVar6 && iVar25==iVar8){
Var5={
Var22 
};
}
iVar21++;
}}
if(!func_306(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6)){
return 0;
}
if(!func_306(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8)){
return 0;
}
if(!func_304(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_305(iVar0))){
return 0;
}
if(!func_306(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7)){
return 0;
}
if(!func_304(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_305(iVar1))){
return 0;
}
VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
switch (func_281(iVar26, iVar27, iVar28)){
case 1:
iVar29=3;
break;
case 2:
iVar29=4;
break;
case 3:
iVar29=5;
break;
case 4:
iVar29=6;
break;
case 5:
iVar29=11;
break;
case 6:
iVar29=7;
break;
case 7:
iVar29=10;
break;
case 8:
iVar29=8;
break;
case 9:
iVar29=12;
break;
case 10:
iVar29=13;
break;
case 11:
iVar29=-1;
break;
case 12:
iVar29=9;
break;
case 0:
if(func_226(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2"))){
iVar29=255;
break;
}
break;
}
if(bVar11){
if(!func_280(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12)){
return 0;
}}
iVar30=func_279(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2), (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0) || VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1)), VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3));
if(bVar11){
if(!func_278(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1)){
return 0;
}}
VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
iVar31=func_182(iVar26, iVar27, iVar28);
if(bVar11){
if(!func_278(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0)){
return 0;
}}
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1){
if(!func_293(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_277(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23)){
return 0;
}}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam1) > 1){
if(!func_293(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::GET_VEHICLE_LIVERY2(iParam1), 39, iVar14, func_277(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23)){
return 0;
}}
if(bVar11){
if(!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1)){
if(!func_276(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12)){
return 0;
}}}
if(bVar11){
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam1, &iVar35);
bVar32=false;
iVar33=0;
while (func_275(iVar33, &iVar34) && !bVar32){
if(iVar34==iVar35){
bVar32=true;
sVar36=func_274(iVar33);
}else{
iVar33++;
}}
if(bVar32){
func_273(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
}
VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam1, &iVar35);
bVar32=false;
iVar33=0;
while (func_180(iVar33, &iVar34) && !bVar32){
if(iVar34==iVar35){
bVar32=true;
sVar36=func_272(iVar33);
}else{
iVar33++;
}}
if(!bVar32){
if(iVar35==0){
sVar36="VEM_COLOUR_6_BLACK_t65_v3";
bVar32=true;
}elseif(iVar35==132){
sVar36="VEM_COLOUR_6_DEFAULT_t65_v3";
bVar32=true;
}}
if(bVar32){
func_273(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
}}
if(iParam2 && bVar11){
if(!func_271(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1))){
return 0;
}}elseif(bVar11){
if(!func_270(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v")){
return 0;
}}
return 1;
}
return 0;
}

int func_270(int iParam0, char* sParam1){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_271(int iParam0, char* sParam1, int iParam2){
char cVar0[64];
char cVar1[16];
char cVar2[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1)==-515263000){
return 1;
}
StringConCat(&cVar2, "VEM_INSURANCE_", 64);
StringConCat(&cVar2, &cVar1, 64);
switch (iParam2){
case joaat("dubsta2"):
case joaat("cavalcade2"):
case joaat("mesa2"):
case joaat("rapidgt2"):
case joaat("emperor2"):
case joaat("manana2"):
StringConCat(&cVar2, "2", 64);
break;
case joaat("mesa3"):
case joaat("emperor3"):
case joaat("burrito3"):
case joaat("mule3"):
StringConCat(&cVar2, "3", 64);
break;
case joaat("tornado4"):
StringConCat(&cVar2, "4", 64);
break;
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar2))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


char* func_272(int iParam0){
switch (iParam0){
case 0:
return "SILVER";
break;
case 1:
return "BLUE_SILVER";
break;
case 2:
return "ROLLED_STEEL";
break;
case 3:
return "SHADOW_SILVER";
break;
case 4:
return "WHITE";
break;
case 5:
return "FROST_WHITE";
break;
case 6:
return "CREAM";
break;
case 7:
return "SIENNA_BROWN";
break;
case 8:
return "SADDLE_BROWN";
break;
case 9:
return "MOSS_BROWN";
break;
case 10:
return "WOODBEECH_BROWN";
break;
case 11:
return "STRAW_BROWN";
break;
case 12:
return "SANDY_BROWN";
break;
case 13:
return "BLEECHED_BROWN";
break;
case 14:
return "GOLD";
break;
case 15:
return "BRONZE";
break;
case 16:
return "YELLOW";
break;
case 17:
return "RACE_YELLOW";
break;
case 18:
return "FLUR_YELLOW";
break;
case 19:
return "ORANGE";
break;
case 20:
return "BRIGHT_ORANGE";
break;
case 21:
return "SUNRISE_ORANGE";
break;
case 22:
return "RED";
break;
case 23:
return "TORINO_RED";
break;
case 24:
return "FORMULA_RED";
break;
case 25:
return "LAVA_RED";
break;
case 26:
return "BLAZE_RED";
break;
case 27:
return "GRACE_RED";
break;
case 28:
return "GARNET_RED";
break;
case 29:
return "CANDY_RED";
break;
case 30:
return "HOT PINK";
break;
case 31:
return "PINK";
break;
case 32:
return "SALMON_PINK";
break;
case 33:
return "PURPLE";
break;
case 34:
return "BRIGHT_PURPLE";
break;
case 35:
return "SAXON_BLUE";
break;
case 36:
return "BLUE";
break;
case 37:
return "MARINER_BLUE";
break;
case 38:
return "HARBOR_BLUE";
break;
case 39:
return "DIAMOND_BLUE";
break;
case 40:
return "SURF_BLUE";
break;
case 41:
return "NAUTICAL_BLUE";
break;
case 42:
return "RACING_BLUE";
break;
case 43:
return "ULTRA_BLUE";
break;
case 44:
return "LIGHT_BLUE";
break;
case 45:
return "SEA_GREEN";
break;
case 46:
return "BRIGHT_GREEN";
break;
case 47:
return "PETROL_GREEN";
break;
case 48:
return "LIME_GREEN";
break;
}
return "";
}

int func_273(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
StringCopy(&cVar1, "VEM_COLOUR_", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_", 64);
StringConCat(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam3, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


char* func_274(int iParam0){
switch (iParam0){
case 0:
return "BLACK";
break;
case 1:
return "GRAPHITE";
break;
case 2:
return "ANTHR_BLACK";
break;
case 3:
return "BLACK_STEEL";
break;
case 4:
return "DARK_SILVER";
break;
case 5:
return "BLUE_SILVER";
break;
case 6:
return "ROLLED_STEEL";
break;
case 7:
return "SHADOW_SILVER";
break;
case 8:
return "STONE_SILVER";
break;
case 9:
return "MIDNIGHT_SILVER";
break;
case 10:
return "CAST_IRON_SIL";
break;
case 11:
return "RED";
break;
case 12:
return "TORINO_RED";
break;
case 13:
return "LAVA_RED";
break;
case 14:
return "BLAZE_RED";
break;
case 15:
return "GRACE_RED";
break;
case 16:
return "GARNET_RED";
break;
case 17:
return "SUNSET_RED";
break;
case 18:
return "CABERNET_RED";
break;
case 19:
return "WINE_RED";
break;
case 20:
return "CANDY_RED";
break;
case 21:
return "PINK";
break;
case 22:
return "SALMON_PINK";
break;
case 23:
return "SUNRISE_ORANGE";
break;
case 24:
return "ORANGE";
break;
case 25:
return "BRIGHT_ORANGE";
break;
case 26:
return "BRONZE";
break;
case 27:
return "YELLOW";
break;
case 28:
return "RACE_YELLOW";
break;
case 29:
return "FLUR_YELLOW";
break;
case 30:
return "DARK_GREEN";
break;
case 31:
return "RACING_GREEN";
break;
case 32:
return "SEA_GREEN";
break;
case 33:
return "OLIVE_GREEN";
break;
case 34:
return "BRIGHT_GREEN";
break;
case 35:
return "PETROL_GREEN";
break;
case 36:
return "LIME_GREEN";
break;
case 37:
return "MIDNIGHT_BLUE";
break;
case 38:
return "GALAXY_BLUE";
break;
case 39:
return "DARK_BLUE";
break;
case 40:
return "SAXON_BLUE";
break;
case 41:
return "MARINER_BLUE";
break;
case 42:
return "HARBOR_BLUE";
break;
case 43:
return "DIAMOND_BLUE";
break;
case 44:
return "SURF_BLUE";
break;
case 45:
return "NAUTICAL_BLUE";
break;
case 46:
return "RACING_BLUE";
break;
case 47:
return "ULTRA_BLUE";
break;
case 48:
return "LIGHT_BLUE";
break;
case 49:
return "CHOCOLATE_BROWN";
break;
case 50:
return "BISON_BROWN";
break;
case 51:
return "CREEK_BROWN";
break;
case 52:
return "UMBER_BROWN";
break;
case 53:
return "MAPLE_BROWN";
break;
case 54:
return "BEECHWOOD_BROWN";
break;
case 55:
return "SIENNA_BROWN";
break;
case 56:
return "SADDLE_BROWN";
break;
case 57:
return "MOSS_BROWN";
break;
case 58:
return "WOODBEECH_BROWN";
break;
case 59:
return "STRAW_BROWN";
break;
case 60:
return "SANDY_BROWN";
break;
case 61:
return "BLEECHED_BROWN";
break;
case 62:
return "SPIN_PURPLE";
break;
case 63:
return "MIGHT_PURPLE";
break;
case 64:
return "BRIGHT_PURPLE";
break;
case 65:
return "CREAM";
break;
case 66:
return "WHITE";
break;
case 67:
return "FROST_WHITE";
break;
}
return "";
}


bool func_275(int iParam0, var uParam1){
*uParam1=-1;
switch (iParam0){
case 0:
*uParam1=0;
break;
case 1:
*uParam1=1;
break;
case 2:
*uParam1=11;
break;
case 3:
*uParam1=2;
break;
case 4:
*uParam1=3;
break;
case 5:
*uParam1=5;
break;
case 6:
*uParam1=6;
break;
case 7:
*uParam1=7;
break;
case 8:
*uParam1=8;
break;
case 9:
*uParam1=9;
break;
case 10:
*uParam1=10;
break;
case 11:
*uParam1=27;
break;
case 12:
*uParam1=28;
break;
case 13:
*uParam1=150;
break;
case 14:
*uParam1=30;
break;
case 15:
*uParam1=31;
break;
case 16:
*uParam1=32;
break;
case 17:
*uParam1=33;
break;
case 18:
*uParam1=34;
break;
case 19:
*uParam1=143;
break;
case 20:
*uParam1=35;
break;
case 21:
*uParam1=137;
break;
case 22:
*uParam1=136;
break;
case 23:
*uParam1=36;
break;
case 24:
*uParam1=38;
break;
case 25:
*uParam1=138;
break;
case 26:
*uParam1=90;
break;
case 27:
*uParam1=88;
break;
case 28:
*uParam1=89;
break;
case 29:
*uParam1=91;
break;
case 30:
*uParam1=49;
break;
case 31:
*uParam1=50;
break;
case 32:
*uParam1=51;
break;
case 33:
*uParam1=52;
break;
case 34:
*uParam1=53;
break;
case 35:
*uParam1=54;
break;
case 36:
*uParam1=92;
break;
case 37:
*uParam1=141;
break;
case 38:
*uParam1=61;
break;
case 39:
*uParam1=62;
break;
case 40:
*uParam1=63;
break;
case 41:
*uParam1=65;
break;
case 42:
*uParam1=66;
break;
case 43:
*uParam1=67;
break;
case 44:
*uParam1=68;
break;
case 45:
*uParam1=69;
break;
case 46:
*uParam1=73;
break;
case 47:
*uParam1=70;
break;
case 48:
*uParam1=74;
break;
case 49:
*uParam1=96;
break;
case 50:
*uParam1=101;
break;
case 51:
*uParam1=95;
break;
case 52:
*uParam1=94;
break;
case 53:
*uParam1=97;
break;
case 54:
*uParam1=103;
break;
case 55:
*uParam1=104;
break;
case 56:
*uParam1=98;
break;
case 57:
*uParam1=100;
break;
case 58:
*uParam1=102;
break;
case 59:
*uParam1=99;
break;
case 60:
*uParam1=105;
break;
case 61:
*uParam1=106;
break;
case 62:
*uParam1=72;
break;
case 63:
*uParam1=146;
break;
case 64:
*uParam1=145;
break;
case 65:
*uParam1=107;
break;
case 66:
*uParam1=111;
break;
case 67:
*uParam1=112;
break;
}
return *uParam1 !=-1;
}

int func_276(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam3, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam4, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_277(int iParam0){
switch (iParam0){
case joaat("windsor"):
return 1;
break;
}
return -1;
}

int func_278(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_", 64);
if(iParam3==0 && !bParam6){
StringConCat(&cVar1, "255", 64);
}else{
StringIntConCat(&cVar1, iParam3, 64);
}
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_279(bool bParam0, bool bParam1, bool bParam2){
if((bParam2 && bParam1) && bParam0){
return 7;
}elseif((bParam2 && bParam1) && !bParam0){
return 6;
}elseif((!bParam2 && bParam1) && bParam0){
return 5;
}elseif((bParam2 && !bParam1) && bParam0){
return 4;
}elseif((!bParam2 && bParam1) && !bParam0){
return 3;
}elseif((bParam2 && !bParam1) && !bParam0){
return 2;
}elseif((!bParam2 && !bParam1) && bParam0){
return 1;
}
return 0;
}

int func_280(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_", 64);
if(iParam3==-1){
StringConCat(&cVar1, "PAT", 64);
}else{
StringIntConCat(&cVar1, iParam3, 64);
}
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_281(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
var uVar7;
if((iParam0==255 && iParam1==255) && iParam2==255){
return 1;
}
if((iParam0==0 && iParam1==0) && iParam2==0){
return 11;
}
if((iParam0==255 && iParam1==127) && iParam2==0){
return 6;
}
if((iParam0==252 && iParam1==238) && iParam2==0){
return 4;
}
if((iParam0==0 && iParam1==174) && iParam2==239){
return 3;
}
if((iParam0==226 && iParam1==6) && iParam2==6){
return 8;
}
if((iParam0==20 && iParam1==20) && iParam2==20){
return 2;
}
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 12;
}
if((iParam0==1 && iParam1==1) && iParam2==1){
return 0;
}
if(func_283()){
HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
if((iParam0==iVar0 && iParam1==iVar1) && iParam2==iVar2){
return 5;
}
HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
if((iParam0==iVar0 && iParam1==iVar1) && iParam2==iVar2){
return 7;
}
if(((iParam0==114 && iParam1==204) && iParam2==114) || ((iParam0==102 && iParam1==152) && iParam2==104)){
return 7;
}}
if(func_282()){
HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
if((iParam0==iVar4 && iParam1==iVar5) && iParam2==iVar6){
return 9;
}
HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
if((iParam0==iVar4 && iParam1==iVar5) && iParam2==iVar6){
return 10;
}}
return 1;
}


bool func_282(){
return DLC::IS_DLC_PRESENT(1785846048);
}


bool func_283(){
return DLC::IS_DLC_PRESENT(42019760);
}


bool func_284(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4){
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

int func_285(int iParam0){
int iVar0;
iVar0=0;
switch (iParam0){
case 156:
iVar0=0;
break;
case 0:
iVar0=1;
break;
case 1:
iVar0=2;
break;
case 11:
iVar0=3;
break;
case 2:
iVar0=4;
break;
case 8:
iVar0=5;
break;
case 122:
iVar0=6;
break;
case 27:
iVar0=7;
break;
case 30:
iVar0=8;
break;
case 45:
iVar0=9;
break;
case 35:
iVar0=10;
break;
case 33:
iVar0=11;
break;
case 136:
iVar0=12;
break;
case 135:
iVar0=13;
break;
case 36:
iVar0=14;
break;
case 41:
iVar0=15;
break;
case 138:
iVar0=16;
break;
case 37:
iVar0=17;
break;
case 99:
iVar0=18;
break;
case 90:
iVar0=19;
break;
case 95:
iVar0=20;
break;
case 115:
iVar0=21;
break;
case 109:
iVar0=22;
break;
case 153:
iVar0=23;
break;
case 154:
iVar0=24;
break;
case 88:
iVar0=25;
break;
case 89:
iVar0=26;
break;
case 91:
iVar0=27;
break;
case 55:
iVar0=28;
break;
case 125:
iVar0=29;
break;
case 53:
iVar0=30;
break;
case 56:
iVar0=31;
break;
case 151:
iVar0=32;
break;
case 82:
iVar0=33;
break;
case 64:
iVar0=34;
break;
case 87:
iVar0=35;
break;
case 70:
iVar0=36;
break;
case 140:
iVar0=37;
break;
case 81:
iVar0=38;
break;
case 145:
iVar0=39;
break;
case 142:
iVar0=40;
break;
}
return iVar0;
}

int func_286(int iParam0, char* sParam1, int iParam2){
char cVar0[64];
int iVar1;
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
iVar1=func_287(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar1)){
return 1;
}
return func_314(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_287(int iParam0){
char cVar0[32];
StringCopy(&cVar0, "VEM_", 32);
switch (iParam0){
case -1:
StringConCat(&cVar0, "MWT_INVALID", 32);
break;
case 0:
StringConCat(&cVar0, "MWT_SPORT", 32);
break;
case 1:
StringConCat(&cVar0, "MWT_MUSCLE", 32);
break;
case 2:
StringConCat(&cVar0, "MWT_LOWRIDER", 32);
break;
case 3:
StringConCat(&cVar0, "MWT_SUV", 32);
break;
case 4:
StringConCat(&cVar0, "MWT_OFFROAD", 32);
break;
case 5:
StringConCat(&cVar0, "MWT_TUNER", 32);
break;
case 6:
StringConCat(&cVar0, "MWT_BIKE", 32);
break;
case 7:
StringConCat(&cVar0, "MWT_HIEND", 32);
break;
case 8:
StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
break;
case 9:
StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
break;
case 10:
StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
break;
case 11:
StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
break;
case 12:
StringConCat(&cVar0, "MWT_SUPERMOD5", 32);
break;
}
StringConCat(&cVar0, "_t", 32);
StringIntConCat(&cVar0, iParam0, 32);
StringConCat(&cVar0, "_v0", 32);
return MISC::GET_HASH_KEY(&cVar0);
}

int func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4){
char cVar0[64];
char cVar1[64];
int iVar2;
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, "VEM_", 64);
iVar2=VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
if(iVar2==-1 || (iParam3==24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))){
StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
}else{
StringConCat(&cVar1, "CMOD_WHE_0", 64);
}}else{
StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
}
StringConCat(&cVar1, "_t19_v", 64);
StringIntConCat(&cVar1, iParam4, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_289(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, "VEM_", 64);
StringConCat(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam3, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam4, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


char* func_290(var uParam0){
char* sVar0;
int iVar1;
sVar0="";
iVar1=uParam0;
switch (iVar1){
case 0:
sVar0="CMOD_HRN_0";
break;
case 1:
sVar0="HORN_INDI_1";
break;
case 2:
sVar0="HORN_INDI_2";
break;
case 3:
sVar0="HORN_INDI_3";
break;
case 4:
sVar0="HORN_INDI_4";
break;
case 5:
sVar0="HORN_HIPS1";
break;
case 6:
sVar0="HORN_HIPS2";
break;
case 7:
sVar0="HORN_HIPS3";
break;
case 8:
sVar0="HORN_HIPS4";
break;
case 9:
sVar0="HORN_CNOTE_C0";
break;
case 10:
sVar0="HORN_CNOTE_D0";
break;
case 11:
sVar0="HORN_CNOTE_E0";
break;
case 12:
sVar0="HORN_CNOTE_F0";
break;
case 13:
sVar0="HORN_CNOTE_G0";
break;
case 14:
sVar0="HORN_CNOTE_A0";
break;
case 15:
sVar0="HORN_CNOTE_B0";
break;
case 16:
sVar0="HORN_CNOTE_C1";
break;
case 17:
sVar0="HORN_CLAS1";
break;
case 18:
sVar0="HORN_CLAS2";
break;
case 19:
sVar0="HORN_CLAS3";
break;
case 20:
sVar0="HORN_CLAS4";
break;
case 21:
sVar0="HORN_CLAS5";
break;
case 22:
sVar0="HORN_CLAS6";
break;
case 23:
sVar0="HORN_CLAS7";
break;
case 24:
sVar0="HORN_LUXE1";
break;
case 25:
sVar0="HORN_LUXE2";
break;
case 26:
sVar0="HORN_LUXE3";
break;
case 30:
sVar0="HORN_LOWRDER1";
break;
case 31:
sVar0="HORN_LOWRDER2";
break;
case 34:
sVar0="HORN_HWEEN1";
break;
case 35:
sVar0="HORN_HWEEN2";
break;
case 38:
sVar0="HORN_XM15_1";
break;
case 39:
sVar0="HORN_XM15_2";
break;
case 40:
sVar0="HORN_XM15_3";
break;
case 46:
sVar0="CMOD_HRN_CLO";
break;
case 45:
sVar0="CMOD_HRN_COP";
break;
case 44:
sVar0="CMOD_HRN_TRK";
break;
case 47:
sVar0="CMOD_HRN_MUS1";
break;
case 48:
sVar0="CMOD_HRN_MUS2";
break;
case 49:
sVar0="CMOD_HRN_MUS3";
break;
case 50:
sVar0="CMOD_HRN_MUS4";
break;
case 51:
sVar0="CMOD_HRN_MUS5";
break;
case 52:
sVar0="CMOD_HRN_SAD";
break;
case 53:
sVar0="CMOD_AIRHORN_01";
break;
case 54:
sVar0="CMOD_AIRHORN_02";
break;
case 55:
sVar0="CMOD_AIRHORN_03";
break;
}
return sVar0;
}

int func_291(int iParam0){
switch (iParam0){
case joaat("indep_horn_1"):
return 1;
break;
case joaat("indep_horn_2"):
return 2;
break;
case joaat("indep_horn_3"):
return 3;
break;
case joaat("indep_horn_4"):
return 4;
break;
case joaat("hipster_horn_1"):
return 5;
break;
case joaat("hipster_horn_2"):
return 6;
break;
case joaat("hipster_horn_3"):
return 7;
break;
case joaat("hipster_horn_4"):
return 8;
break;
case joaat("dlc_busi2_c_major_notes_c0"):
return 9;
break;
case joaat("dlc_busi2_c_major_notes_d0"):
return 10;
break;
case joaat("dlc_busi2_c_major_notes_e0"):
return 11;
break;
case joaat("dlc_busi2_c_major_notes_f0"):
return 12;
break;
case joaat("dlc_busi2_c_major_notes_g0"):
return 13;
break;
case joaat("dlc_busi2_c_major_notes_a0"):
return 14;
break;
case joaat("dlc_busi2_c_major_notes_b0"):
return 15;
break;
case joaat("dlc_busi2_c_major_notes_c1"):
return 16;
break;
case joaat("musical_horn_business_1"):
return 17;
break;
case joaat("musical_horn_business_2"):
return 18;
break;
case joaat("musical_horn_business_3"):
return 19;
break;
case joaat("musical_horn_business_4"):
return 20;
break;
case joaat("musical_horn_business_5"):
return 21;
break;
case joaat("musical_horn_business_6"):
return 22;
break;
case joaat("musical_horn_business_7"):
return 23;
break;
case joaat("luxe_horn_2"):
return 24;
break;
case joaat("luxe_horn_1"):
return 25;
break;
case joaat("luxe_horn_3"):
return 26;
break;
case joaat("luxury_horn_2"):
return 27;
break;
case joaat("luxory_horn_1"):
return 28;
break;
case joaat("luxury_horn_3"):
return 29;
break;
case joaat("LOWRIDER_HORN_1"):
return 30;
break;
case joaat("LOWRIDER_HORN_2"):
return 31;
break;
case joaat("LOWRIDER_HORN_1_PREVIEW"):
return 32;
break;
case joaat("LOWRIDER_HORN_2_PREVIEW"):
return 33;
break;
case joaat("ORGAN_HORN_LOOP_01"):
return 34;
break;
case joaat("ORGAN_HORN_LOOP_02"):
return 35;
break;
case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
return 36;
break;
case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
return 37;
break;
case joaat("XM15_HORN_01"):
return 38;
break;
case joaat("XM15_HORN_02"):
return 39;
break;
case joaat("XM15_HORN_03"):
return 40;
break;
case joaat("XM15_HORN_01_PREVIEW"):
return 41;
break;
case joaat("XM15_HORN_02_PREVIEW"):
return 42;
break;
case joaat("XM15_HORN_03_PREVIEW"):
return 43;
break;
case joaat("HORN_CLOWN"):
return 46;
break;
case joaat("HORN_COP"):
return 45;
break;
case joaat("HORN_TRUCK"):
return 44;
break;
case joaat("HORN_MUSICAL_1"):
return 47;
break;
case joaat("HORN_MUSICAL_2"):
return 48;
break;
case joaat("HORN_MUSICAL_3"):
return 49;
break;
case joaat("HORN_MUSICAL_4"):
return 50;
break;
case joaat("HORN_MUSICAL_5"):
return 51;
break;
case joaat("HORN_SAD_TROMBONE"):
return 52;
break;
case joaat("dlc_aw_airhorn_01"):
return 53;
break;
case joaat("dlc_aw_airhorn_02"):
return 54;
break;
case joaat("dlc_aw_airhorn_03"):
return 55;
break;
case joaat("dlc_aw_airhorn_01_preview"):
return 56;
break;
case joaat("dlc_aw_airhorn_02_preview"):
return 57;
break;
case joaat("dlc_aw_airhorn_03_preview"):
return 58;
break;
}
return 0;
}

int func_292(bool bParam0){
if(bParam0){
return 1;
}
return 0;
}

int func_293(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
if(iParam8 !=23){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8)==0){
if((iParam8 >=0 && iParam8 < 64) && !MISC::IS_BIT_SET(Global_4540730[(iParam8 / 32)], (iParam8 % 32))){
return 1;
}}}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringCopy(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_", 64);
if(iParam4==33){
if(iParam3 < 0 || iParam3 > 3){
iParam3=0;
}}
StringIntConCat(&cVar1, iParam3, 64);
if(iParam6 !=-1){
StringConCat(&cVar1, "_n", 64);
StringIntConCat(&cVar1, iParam6, 64);
}
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_294(int iParam0){
int iVar0;
iVar0=-1;
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("revolter"):
case joaat("savestra"):
case joaat("comet4"):
case joaat("viseris"):
iVar0=1;
break;
case joaat("avenger"):
iVar0=2;
break;
}
return iVar0;
}

int func_295(int iParam0){
switch (iParam0){
case joaat("faction3"):
return 12;
break;
case joaat("diablous"):
return 4;
break;
case joaat("fcr"):
return 4;
break;
}
return func_311(iParam0);
}

int func_296(int iParam0){
switch (iParam0){
case joaat("btype2"):
return 9;
break;
case joaat("lurcher"):
return 8;
break;
case joaat("sultanrs"):
return 6;
break;
case joaat("banshee2"):
return 7;
break;
case joaat("btype3"):
return 5;
break;
case joaat("omnis"):
return 13;
break;
case joaat("bf400"):
return 14;
break;
case joaat("tropos"):
return 15;
break;
case joaat("brioso"):
return 16;
break;
case joaat("trophytruck"):
return 17;
break;
case joaat("trophytruck2"):
return 18;
break;
case joaat("cliffhanger"):
return 19;
break;
case joaat("tampa2"):
return 20;
break;
case joaat("gargoyle"):
return 21;
break;
case joaat("le7b"):
return 22;
break;
case joaat("lynx"):
return 24;
break;
case joaat("sheava"):
return 25;
break;
case joaat("diablous2"):
return 28;
break;
case joaat("fcr2"):
return 28;
break;
case joaat("italigtb2"):
return 27;
break;
case joaat("specter2"):
return 27;
break;
case joaat("nero2"):
return 27;
break;
case joaat("comet3"):
return 26;
break;
case joaat("elegy"):
return 26;
break;
case joaat("trailerlarge"):
return 32;
break;
case joaat("rcbandito"):
return 39;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
return 27;
break;
}
if(func_299(iParam0)){
return 33;
}elseif(func_298(iParam0)){
return 34;
}
if(func_297(iParam0)){
return 38;
}
return 3;
}

int func_297(int iParam0){
switch (iParam0){
case joaat("scarab"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("monster3"):
case joaat("dominator4"):
case joaat("impaler2"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("deathbike"):
case joaat("zr380"):
case joaat("slamvan4"):
case joaat("brutus"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("deathbike2"):
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
return 1;
default:
}
return 0;
}

int func_298(int iParam0){
switch (iParam0){
case joaat("hunter"):
case joaat("bombushka"):
case joaat("volatol"):
case joaat("akula"):
case joaat("khanjali"):
case joaat("strikeforce"):
case joaat("alkonost"):
case joaat("annihilator2"):
return 1;
break;
}
return 0;
}

int func_299(int iParam0){
switch (iParam0){
case joaat("havok"):
case joaat("microlight"):
case joaat("mogul"):
case joaat("rogue"):
case joaat("seabreeze"):
case joaat("tula"):
case joaat("pyro"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("starling"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("cuban800"):
case joaat("avenger"):
case joaat("thruster"):
case joaat("riot2"):
case joaat("chernobog"):
case joaat("volatol"):
case joaat("seasparrow"):
case joaat("seasparrow2"):
return 1;
break;
}
return 0;
}

int func_300(int iParam0){
switch (iParam0){
case joaat("virgo2"):
return 10;
break;
case joaat("slamvan3"):
return 11;
break;
}
switch (iParam0){
case joaat("sultanrs"):
return 6;
break;
case joaat("banshee2"):
return 7;
break;
}
switch (iParam0){
case joaat("btype3"):
return 5;
break;
}
switch (iParam0){
case joaat("faction3"):
return 3;
break;
case joaat("minivan2"):
return 3;
break;
case joaat("sabregt2"):
return 3;
break;
case joaat("slamvan3"):
return 3;
break;
case joaat("tornado5"):
return 3;
break;
case joaat("virgo2"):
return 3;
break;
}
switch (iParam0){
case joaat("diablous2"):
return 28;
break;
case joaat("fcr2"):
return 28;
break;
case joaat("italigtb2"):
return 27;
break;
case joaat("specter2"):
return 27;
break;
case joaat("nero2"):
return 27;
break;
case joaat("comet3"):
return 26;
break;
case joaat("elegy"):
return 26;
break;
case joaat("rcbandito"):
return 39;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
return 27;
break;
}
if(func_297(iParam0)){
return 38;
}
if(func_301(iParam0)){
return 38;
}
return 3;
}

int func_301(int iParam0){
switch (iParam0){
case joaat("deity"):
case joaat("granger2"):
case joaat("buffalo4"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("greenwood"):
case joaat("omnisegt"):
case joaat("virtue"):
case joaat("r300"):
return 1;
break;
}
return 0;
}

int func_302(int iParam0){
switch (iParam0){
case joaat("virgo2"):
return 10;
break;
case joaat("slamvan3"):
return 11;
break;
}
switch (iParam0){
case joaat("sultanrs"):
return 6;
break;
case joaat("banshee2"):
return 7;
break;
}
switch (iParam0){
case joaat("btype3"):
return 5;
break;
}
switch (iParam0){
case joaat("faction3"):
return 3;
break;
case joaat("minivan2"):
return 0;
break;
case joaat("sabregt2"):
return 0;
break;
case joaat("slamvan3"):
return 0;
break;
case joaat("tornado5"):
return 0;
break;
case joaat("virgo2"):
return 3;
break;
case joaat("virgo3"):
return 3;
break;
}
switch (iParam0){
case joaat("fcr"):
return 0;
break;
case joaat("diablous"):
return 0;
break;
case joaat("diablous2"):
return 28;
break;
case joaat("fcr2"):
return 28;
break;
case joaat("italigtb"):
return 3;
break;
case joaat("specter"):
return 3;
break;
case joaat("nero"):
return 3;
break;
case joaat("italigtb2"):
return 27;
break;
case joaat("specter2"):
return 27;
break;
case joaat("nero2"):
return 27;
break;
case joaat("comet3"):
return 26;
break;
case joaat("elegy"):
return 26;
break;
case joaat("youga3"):
return 27;
break;
case joaat("gauntlet5"):
return 27;
break;
case joaat("manana2"):
return 27;
break;
case joaat("peyote3"):
return 27;
break;
case joaat("yosemite3"):
return 27;
break;
case joaat("glendale2"):
return 27;
break;
}
switch (iParam0){
case joaat("apc"):
return 29;
break;
case joaat("halftrack"):
return 29;
break;
case joaat("trailersmall2"):
return 29;
break;
case joaat("deluxo"):
return 29;
break;
case joaat("stromberg"):
return 29;
break;
case joaat("caracara"):
return 29;
break;
case joaat("dune3"):
return 30;
break;
case joaat("insurgent3"):
return 30;
break;
case joaat("tampa3"):
return 30;
break;
case joaat("technical3"):
return 30;
break;
case joaat("oppressor"):
return 31;
break;
case joaat("oppressor2"):
return 31;
break;
case joaat("phantom3"):
return 32;
break;
case joaat("hauler2"):
return 32;
break;
case joaat("trailerlarge"):
return 32;
break;
case joaat("barrage"):
return 35;
break;
case joaat("mule4"):
return 37;
break;
case joaat("speedo4"):
return 36;
break;
case joaat("pounder2"):
return 36;
break;
case joaat("rcbandito"):
return 39;
break;
case joaat("minitank"):
return 36;
break;
case joaat("jb7002"):
return 36;
break;
}
if(func_299(iParam0)){
return 33;
}elseif(func_298(iParam0)){
return 34;
}elseif(func_297(iParam0)){
return 38;
}
switch (iParam0){
case joaat("vigilante"):
return 31;
break;
}
if(func_301(iParam0) || iParam0==joaat("brickade2")){
return 38;
}
if(func_303(iParam0)){
return 3;
}
if(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)){
return 4;
}
switch (iParam0){
case joaat("adder"):
return 3;
break;
case joaat("airbus"):
return 0;
break;
case joaat("akuma"):
return 4;
break;
case joaat("alpha"):
return 3;
break;
case joaat("annihilator"):
return 0;
break;
case joaat("asea"):
return 0;
break;
case joaat("asterope"):
return 0;
break;
case joaat("baller2"):
return 2;
break;
case joaat("banshee"):
return 3;
break;
case joaat("barracks"):
return 0;
break;
case joaat("bati"):
return 4;
break;
case joaat("bati2"):
return 4;
break;
case joaat("besra"):
return 0;
break;
case joaat("bfinjection"):
return 0;
break;
case joaat("bifta"):
return 0;
break;
case joaat("bison"):
return 2;
break;
case joaat("blade"):
return 3;
break;
case joaat("blazer"):
return 0;
break;
case joaat("blazer3"):
return 0;
break;
case joaat("bmx"):
return 0;
break;
case joaat("bobcatxl"):
return 2;
break;
case joaat("bodhi2"):
return 0;
break;
case joaat("btype"):
return 0;
break;
case joaat("buffalo"):
return 0;
break;
case joaat("buffalo2"):
return 1;
break;
case joaat("bullet"):
return 3;
break;
case joaat("bus"):
return 0;
break;
case joaat("buzzard"):
return 0;
break;
case joaat("carbonizzare"):
return 3;
break;
case joaat("carbonrs"):
return 3;
break;
case joaat("cavalcade"):
return 2;
break;
case joaat("cavalcade2"):
return 2;
break;
case joaat("cheetah"):
return 3;
break;
case joaat("coach"):
return 0;
break;
case joaat("cogcabrio"):
return 3;
break;
case joaat("comet2"):
return 3;
break;
case joaat("coquette"):
return 3;
break;
case joaat("coquette2"):
return 1;
break;
case joaat("cruiser"):
return 0;
break;
case joaat("crusader"):
return 0;
break;
case joaat("cuban800"):
return 0;
break;
case joaat("dilettante"):
return 0;
break;
case joaat("dilettante2"):
return 0;
break;
case joaat("dominator"):
return 1;
break;
case joaat("dominator2"):
return 1;
break;
case joaat("double"):
return 4;
break;
case joaat("dubsta3"):
return 3;
break;
case joaat("dump"):
return 0;
break;
case joaat("dune"):
return 0;
break;
case joaat("duster"):
return 0;
break;
case joaat("elegy2"):
return 3;
break;
case joaat("entityxf"):
return 3;
break;
case joaat("exemplar"):
return 3;
break;
case joaat("f620"):
return 1;
break;
case joaat("faggio2"):
return 4;
break;
case joaat("felon"):
return 0;
break;
case joaat("felon2"):
return 0;
break;
case joaat("feltzer2"):
return 3;
break;
case joaat("frogger"):
return 0;
break;
case joaat("frogger2"):
return 0;
break;
case joaat("fugitive"):
return 0;
break;
case joaat("fusilade"):
return 1;
break;
case joaat("gauntlet"):
return 0;
break;
case joaat("gauntlet2"):
return 0;
break;
case joaat("glendale"):
return 3;
break;
case joaat("granger"):
return 2;
break;
case joaat("gresley"):
return 2;
break;
case joaat("hexer"):
return 4;
break;
case joaat("hotknife"):
return 3;
break;
case joaat("huntley"):
return 1;
break;
case joaat("hydra"):
return 0;
break;
case joaat("infernus"):
return 3;
break;
case joaat("ingot"):
return 0;
break;
case joaat("intruder"):
return 0;
break;
case joaat("issi2"):
return 0;
break;
case joaat("jackal"):
return 1;
break;
case joaat("jb700"):
return 3;
break;
case joaat("jester"):
return 3;
break;
case joaat("jester2"):
return 3;
break;
case joaat("jetmax"):
return 0;
break;
case joaat("journey"):
return 0;
break;
case joaat("kalahari"):
return 0;
break;
case joaat("khamelion"):
return 3;
break;
case joaat("landstalker"):
return 2;
break;
case joaat("luxor"):
return 0;
break;
case joaat("mammatus"):
return 0;
break;
case joaat("marquis"):
return 0;
break;
case joaat("massacro"):
return 3;
break;
case joaat("massacro2"):
return 3;
break;
case joaat("maverick"):
return 0;
break;
case joaat("mesa"):
return 2;
break;
case joaat("mesa2"):
return 2;
break;
case joaat("mesa3"):
return 2;
break;
case joaat("miljet"):
return 0;
break;
case joaat("minivan"):
return 0;
break;
case joaat("monroe"):
return 3;
break;
case joaat("monster"):
return 0;
break;
case joaat("mule"):
return 0;
break;
case joaat("mule2"):
return 0;
break;
case joaat("mule3"):
return 0;
break;
}
switch (iParam0){
case joaat("nemesis"):
return 4;
break;
case joaat("ninef"):
return 3;
break;
case joaat("ninef2"):
return 3;
break;
case joaat("oracle"):
return 1;
break;
case joaat("oracle2"):
return 1;
break;
case joaat("panto"):
return 3;
break;
case joaat("paradise"):
return 0;
break;
case joaat("pcj"):
return 4;
break;
case joaat("penumbra"):
return 1;
break;
case joaat("picador"):
return 0;
break;
case joaat("pigalle"):
return 3;
break;
case joaat("premier"):
return 0;
break;
case joaat("primo"):
return 0;
break;
case joaat("radi"):
return 0;
break;
case joaat("rancherxl"):
return 2;
break;
case joaat("rancherxl2"):
return 2;
break;
case joaat("rapidgt"):
return 3;
break;
case joaat("ratloader"):
return 2;
break;
case joaat("ratloader2"):
return 2;
break;
case joaat("rebel"):
return 2;
break;
case joaat("rebel2"):
return 2;
break;
case joaat("regina"):
return 0;
break;
case joaat("rentalbus"):
return 0;
break;
case joaat("rhapsody"):
return 3;
break;
case joaat("rhino"):
return 0;
break;
case joaat("rocoto"):
return 2;
break;
case joaat("ruffian"):
return 4;
break;
case joaat("rumpo"):
return 0;
break;
case joaat("sadler"):
return 2;
break;
case joaat("sanchez"):
return 4;
break;
case joaat("sanchez2"):
return 4;
break;
case joaat("sandking"):
return 2;
break;
case joaat("sandking2"):
return 2;
break;
case joaat("schafter2"):
return 1;
break;
case joaat("schwarzer"):
return 1;
break;
case joaat("scorcher"):
return 0;
break;
case joaat("seashark"):
return 0;
break;
case joaat("seminole"):
return 2;
break;
case joaat("sentinel"):
return 1;
break;
case joaat("sentinel2"):
return 1;
break;
case joaat("shamal"):
return 0;
break;
case joaat("sovereign"):
return 4;
break;
case joaat("speeder"):
return 0;
break;
case joaat("squalo"):
return 0;
break;
case joaat("stanier"):
return 0;
break;
case joaat("stinger"):
return 3;
break;
case joaat("stingergt"):
return 3;
break;
case joaat("stratum"):
return 0;
break;
case joaat("stretch"):
return 0;
break;
case joaat("stunt"):
return 0;
break;
case joaat("suntrap"):
return 0;
break;
case joaat("superd"):
return 3;
break;
case joaat("surano"):
return 3;
break;
case joaat("surfer"):
return 0;
break;
case joaat("surge"):
return 0;
break;
case joaat("tailgater"):
return 0;
break;
case joaat("thrust"):
return 4;
break;
case joaat("titan"):
return 0;
break;
case joaat("tribike"):
return 4;
break;
case joaat("tribike2"):
return 4;
break;
case joaat("tribike3"):
return 4;
break;
case joaat("tropic"):
return 0;
break;
case joaat("turismor"):
return 3;
break;
case joaat("vacca"):
return 3;
break;
case joaat("vader"):
return 4;
break;
case joaat("valkyrie"):
return 0;
break;
case joaat("velum"):
return 0;
break;
case joaat("vestra"):
return 0;
break;
case joaat("vigero"):
return 1;
break;
case joaat("voltic"):
return 3;
break;
case joaat("warrener"):
return 3;
break;
case joaat("washington"):
return 0;
break;
case joaat("youga"):
return 2;
break;
case joaat("zentorno"):
return 3;
break;
case joaat("zion"):
return 1;
break;
case joaat("zion2"):
return 1;
break;
case joaat("ztype"):
return 3;
break;
case joaat("swift"):
return 0;
break;
case joaat("innovation"):
return 4;
break;
case joaat("hakuchou"):
return 4;
break;
case joaat("furoregt"):
return 0;
break;
case joaat("kuruma"):
return 3;
break;
case joaat("blista2"):
return 0;
break;
case joaat("blista3"):
return 0;
break;
case joaat("buffalo3"):
return 1;
break;
case joaat("dodo"):
return 0;
break;
case joaat("dominator"):
return 1;
break;
case joaat("dominator2"):
return 1;
break;
case joaat("dukes"):
return 1;
break;
case joaat("dukes2"):
return 0;
break;
case joaat("marshall"):
return 0;
break;
case joaat("stalion"):
return 0;
break;
case joaat("stalion2"):
return 0;
break;
case joaat("submersible"):
return 0;
break;
case joaat("submersible2"):
return 0;
break;
}
switch (iParam0){
case joaat("bagger"):
return 4;
break;
case joaat("baller"):
return 2;
break;
case joaat("bjxl"):
return 2;
break;
case joaat("blista"):
return 0;
break;
case joaat("blista2"):
return 0;
break;
case joaat("buccaneer"):
return 0;
break;
case joaat("daemon"):
return 4;
break;
case joaat("dloader"):
return 0;
break;
case joaat("fq2"):
return 0;
break;
case joaat("habanero"):
return 0;
break;
case joaat("manana"):
return 0;
break;
case joaat("patriot"):
return 2;
break;
case joaat("peyote"):
return 0;
break;
case joaat("phoenix"):
return 0;
break;
case joaat("prairie"):
return 0;
break;
case joaat("sabregt"):
return 0;
break;
case joaat("serrano"):
return 2;
break;
case joaat("speedo"):
return 0;
break;
case joaat("speedo2"):
return 0;
break;
case joaat("voodoo2"):
return 0;
break;
case joaat("romero"):
return 0;
break;
case joaat("surfer2"):
return 0;
break;
case joaat("emperor2"):
return 0;
break;
case joaat("dubsta2"):
return 2;
break;
case joaat("blazer2"):
return 0;
break;
case joaat("oracle2"):
return 1;
break;
case joaat("cavalcade2"):
return 2;
break;
case joaat("dubsta"):
return 2;
break;
case joaat("rapidgt2"):
return 1;
break;
case joaat("boxville4"):
return 0;
break;
case joaat("mesa"):
return 2;
break;
}
switch (iParam0){
case joaat("windsor"):
case joaat("osiris"):
case joaat("feltzer3"):
case joaat("virgo"):
return 3;
break;
case joaat("faction"):
case joaat("faction2"):
case joaat("moonbeam2"):
case joaat("moonbeam"):
return 3;
break;
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("primo2"):
case joaat("voodoo"):
return 0;
break;
case joaat("btype2"):
case joaat("lurcher"):
return 3;
break;
case joaat("omnis"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("bf400"):
case joaat("rallytruck"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("tyrus"):
case joaat("le7b"):
case joaat("lynx"):
case joaat("sheava"):
case joaat("ardent"):
case joaat("cheetah2"):
case joaat("torero"):
case joaat("vagner"):
case joaat("xa21"):
return 3;
break;
case joaat("contender"):
return 2;
break;
case joaat("tampa3"):
case joaat("apc"):
case joaat("halftrack"):
case joaat("dune3"):
case joaat("trailersmall2"):
case joaat("insurgent3"):
case joaat("technical3"):
case joaat("sentinel3"):
case joaat("riata"):
return 3;
break;
case joaat("gb200"):
case joaat("issi3"):
case joaat("swinger"):
case joaat("patriot2"):
case joaat("menacer"):
case joaat("freecrawler"):
case joaat("stafford"):
case joaat("scramjet"):
case joaat("terbyte"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("zr380"):
case joaat("brutus"):
case joaat("lguard"):
case joaat("blazer2"):
case joaat("firetruk"):
case joaat("burrito2"):
case joaat("boxville"):
case joaat("stockade"):
case joaat("asbo"):
case joaat("kanjo"):
case joaat("formula"):
case joaat("imorgon"):
case joaat("komoda"):
case joaat("manana2"):
case joaat("rebla"):
case joaat("sugoi"):
case joaat("youga3"):
case joaat("zhaba"):
case joaat("vstr"):
case joaat("everon"):
case joaat("sultan2"):
case joaat("jb7002"):
case joaat("outlaw"):
case joaat("stryder"):
case joaat("vagrant"):
case joaat("formula2"):
case joaat("furia"):
case joaat("yosemite2"):
case joaat("retinue2"):
case joaat("minitank"):
case joaat("gauntlet5"):
case joaat("club"):
case joaat("dukes3"):
case joaat("manchez2"):
case joaat("brioso2"):
case joaat("winky"):
case joaat("verus"):
case joaat("avisa"):
case joaat("longfin"):
case joaat("patrolboat"):
case joaat("seasparrow3"):
case joaat("slamtruck"):
case joaat("vetir"):
case joaat("italirsx"):
case joaat("toreador"):
case joaat("weevil"):
case joaat("dinghy5"):
case joaat("squaddie"):
case joaat("veto"):
case joaat("veto2"):
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
case joaat("penumbra2"):
case joaat("landstalker2"):
case joaat("seminole2"):
case joaat("tigon"):
case joaat("openwheel1"):
case joaat("coquette4"):
case joaat("openwheel2"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
case joaat("baller7"):
case joaat("astron"):
case joaat("comet7"):
case joaat("ignus"):
case joaat("youga4"):
case joaat("zeno"):
case joaat("cinquemila"):
case joaat("mule5"):
case joaat("iwagen"):
return 3;
break;
}
return 0;
}

int func_303(int iParam0){
switch (iParam0){
case joaat("adder"):
case joaat("banshee"):
case joaat("bullet"):
case joaat("carbonizzare"):
case joaat("carbonrs"):
case joaat("cheetah"):
case joaat("cogcabrio"):
case joaat("comet2"):
case joaat("coquette"):
case joaat("elegy2"):
case joaat("entityxf"):
case joaat("exemplar"):
case joaat("feltzer2"):
case joaat("hotknife"):
case joaat("infernus"):
case joaat("jb700"):
case joaat("khamelion"):
case joaat("monroe"):
case joaat("ninef"):
case joaat("ninef2"):
case joaat("rapidgt"):
case joaat("rapidgt2"):
case joaat("stinger"):
case joaat("stingergt"):
case joaat("superd"):
case joaat("surano"):
case joaat("vacca"):
case joaat("voltic"):
case joaat("ztype"):
case joaat("dubsta3"):
case joaat("blade"):
case joaat("glendale"):
case joaat("rhapsody"):
case joaat("warrener"):
case joaat("panto"):
case joaat("pigalle"):
case joaat("casco"):
case joaat("kuruma2"):
case joaat("lectro"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("technical"):
return 1;
break;
case joaat("windsor"):
case joaat("osiris"):
case joaat("feltzer3"):
case joaat("virgo"):
return 1;
break;
case joaat("faction"):
case joaat("faction2"):
case joaat("moonbeam"):
case joaat("moonbeam2"):
return 1;
break;
case joaat("faction3"):
case joaat("virgo2"):
return 1;
break;
case joaat("baller3"):
case joaat("baller4"):
case joaat("cognoscenti"):
case joaat("cog55"):
case joaat("limo2"):
case joaat("mamba"):
case joaat("nightshade"):
case joaat("schafter3"):
case joaat("schafter4"):
case joaat("verlierer2"):
return 1;
break;
case joaat("tampa"):
return 1;
break;
case joaat("banshee2"):
return 1;
break;
case joaat("bestiagts"):
case joaat("brickade"):
case joaat("fmj"):
case joaat("nimbus"):
case joaat("pfister811"):
case joaat("prototipo"):
case joaat("rumpo3"):
case joaat("seven70"):
case joaat("tug"):
case joaat("volatus"):
case joaat("windsor2"):
case joaat("xls"):
case joaat("xls2"):
case joaat("reaper"):
return 1;
break;
case joaat("omnis"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("bf400"):
case joaat("rallytruck"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("tyrus"):
case joaat("le7b"):
case joaat("lynx"):
case joaat("sheava"):
return 1;
break;
case joaat("avarus"):
case joaat("defiler"):
case joaat("nightblade"):
case joaat("zombiea"):
case joaat("zombieb"):
case joaat("chimera"):
case joaat("esskey"):
case joaat("ratbike"):
case joaat("hakuchou2"):
case joaat("daemon2"):
case joaat("shotaro"):
case joaat("raptor"):
case joaat("blazer4"):
case joaat("sanctus"):
case joaat("vortex"):
case joaat("manchez"):
case joaat("tornado6"):
case joaat("youga2"):
case joaat("wolfsbane"):
case joaat("faggio3"):
case joaat("faggio"):
return 1;
break;
case joaat("blazer5"):
case joaat("boxville5"):
case joaat("comet3"):
case joaat("diablous"):
case joaat("diablous2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("fcr"):
case joaat("fcr2"):
case joaat("italigtb"):
case joaat("nero"):
case joaat("penetrator"):
case joaat("phantom2"):
case joaat("ruiner2"):
case joaat("technical2"):
case joaat("tempesta"):
case joaat("voltic2"):
case joaat("wastelander"):
case joaat("elegy"):
case joaat("italigtb2"):
case joaat("nero2"):
case joaat("ruiner3"):
case joaat("specter"):
case joaat("specter2"):
return 1;
break;
case joaat("gp1"):
case joaat("ruston"):
case joaat("infernus2"):
case joaat("turismo2"):
return 1;
break;
case joaat("ardent"):
case joaat("vagner"):
case joaat("cheetah2"):
case joaat("nightshark"):
case joaat("torero"):
case joaat("xa21"):
case joaat("tampa3"):
case joaat("apc"):
case joaat("halftrack"):
case joaat("dune3"):
case joaat("trailersmall2"):
case joaat("insurgent3"):
case joaat("technical3"):
case joaat("phantom3"):
case joaat("hauler2"):
return 1;
break;
case joaat("cyclone"):
case joaat("rapidgt3"):
case joaat("retinue"):
case joaat("visione"):
case joaat("vigilante"):
return 1;
break;
case joaat("deluxo"):
case joaat("stromberg"):
case joaat("riot2"):
case joaat("chernobog"):
case joaat("khanjali"):
case joaat("akula"):
case joaat("thruster"):
case joaat("avenger"):
case joaat("barrage"):
case joaat("volatol"):
case joaat("comet4"):
case joaat("neon"):
case joaat("streiter"):
case joaat("sentinel3"):
case joaat("yosemite"):
case joaat("sc1"):
case joaat("autarch"):
case joaat("gt500"):
case joaat("hustler"):
case joaat("revolter"):
case joaat("pariah"):
case joaat("raiden"):
case joaat("savestra"):
case joaat("riata"):
case joaat("hermes"):
case joaat("comet5"):
case joaat("z190"):
case joaat("viseris"):
case joaat("kamacho"):
return 1;
break;
}
switch (iParam0){
case joaat("gb200"):
case joaat("issi3"):
case joaat("ellie"):
case joaat("fagaloa"):
case joaat("michelli"):
case joaat("flashgt"):
case joaat("hotring"):
case joaat("tezeract"):
case joaat("tyrant"):
case joaat("dominator3"):
case joaat("taipan"):
case joaat("entity2"):
case joaat("jester3"):
case joaat("cheburek"):
case joaat("caracara"):
case joaat("seasparrow"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("brutus"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("deathbike2"):
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
case joaat("rcbandito"):
case joaat("caracara2"):
case joaat("drafter"):
case joaat("dynasty"):
case joaat("gauntlet3"):
case joaat("gauntlet4"):
case joaat("hellion"):
case joaat("issi7"):
case joaat("krieger"):
case joaat("locust"):
case joaat("nebula"):
case joaat("neo"):
case joaat("novak"):
case joaat("s80"):
case joaat("thrax"):
case joaat("zion3"):
case joaat("zorrusso"):
case joaat("emerus"):
case joaat("peyote2"):
case joaat("rrocket"):
case joaat("jugular"):
case joaat("paragon"):
case joaat("paragon2"):
case joaat("slamvan2"):
case joaat("asbo"):
case joaat("kanjo"):
case joaat("formula"):
case joaat("imorgon"):
case joaat("komoda"):
case joaat("manana2"):
case joaat("rebla"):
case joaat("sugoi"):
case joaat("youga3"):
case joaat("zhaba"):
case joaat("vstr"):
case joaat("everon"):
case joaat("sultan2"):
case joaat("jb7002"):
case joaat("outlaw"):
case joaat("stryder"):
case joaat("vagrant"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("gauntlet5"):
case joaat("dukes3"):
case joaat("club"):
case joaat("peyote3"):
case joaat("glendale2"):
case joaat("penumbra2"):
case joaat("landstalker2"):
case joaat("seminole2"):
case joaat("tigon"):
case joaat("openwheel1"):
case joaat("coquette4"):
case joaat("openwheel2"):
case joaat("manchez2"):
case joaat("brioso2"):
case joaat("winky"):
case joaat("verus"):
case joaat("alkonost"):
case joaat("avisa"):
case joaat("longfin"):
case joaat("patrolboat"):
case joaat("seasparrow2"):
case joaat("seasparrow3"):
case joaat("slamtruck"):
case joaat("vetir"):
case joaat("kosatka"):
case joaat("italirsx"):
case joaat("toreador"):
case joaat("weevil"):
case joaat("dinghy5"):
case joaat("annihilator2"):
case joaat("squaddie"):
case joaat("veto"):
case joaat("veto2"):
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
case joaat("baller7"):
case joaat("astron"):
case joaat("buffalo4"):
case joaat("comet7"):
case joaat("deity"):
case joaat("granger2"):
case joaat("ignus"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("youga4"):
case joaat("zeno"):
case joaat("mule5"):
case joaat("champion"):
case joaat("iwagen"):
case joaat("reever"):
case joaat("shinobi"):
return 1;
break;
}
switch (iParam0){
case joaat("brioso3"):
case joaat("corsita"):
case joaat("draugur"):
case joaat("greenwood"):
case joaat("kanjosj"):
case joaat("lm87"):
case joaat("postlude"):
case joaat("rhinehart"):
case joaat("sm722"):
case joaat("tenf"):
case joaat("tenf2"):
case joaat("torero2"):
case joaat("vigero2"):
case joaat("weevil2"):
case joaat("ruiner4"):
case joaat("sentinel4"):
case joaat("conada"):
case joaat("omnisegt"):
case joaat("eudora"):
case joaat("surfer3"):
case joaat("journey2"):
case joaat("entity3"):
case joaat("panthere"):
case joaat("boor"):
case joaat("everon2"):
case joaat("tulip2"):
case joaat("issi8"):
case joaat("broadway"):
case joaat("tahoma"):
return 1;
break;
}
return 0;
}

int func_304(int iParam0, char* sParam1, int iParam2){
char cVar0[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iParam2)){
return 1;
}
return func_314(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_305(int iParam0){
char cVar0[32];
StringCopy(&cVar0, "VEM_", 32);
switch (iParam0){
case 0:
StringConCat(&cVar0, "MCT_METALLIC", 32);
break;
case 1:
StringConCat(&cVar0, "MCT_CLASSIC", 32);
break;
case 2:
StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
break;
case 3:
StringConCat(&cVar0, "MCT_MATTE", 32);
break;
case 4:
StringConCat(&cVar0, "MCT_METALS", 32);
break;
case 5:
StringConCat(&cVar0, "MCT_CHROME", 32);
break;
case 7:
StringConCat(&cVar0, "MCT_INVALID", 32);
iParam0=255;
break;
}
StringConCat(&cVar0, "_t", 32);
StringIntConCat(&cVar0, iParam0, 32);
StringConCat(&cVar0, "_v0", 32);
return MISC::GET_HASH_KEY(&cVar0);
}

int func_306(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
char cVar0[64];
char cVar1[64];
if(NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL()){
return 1;
}
StringCopy(&cVar0, sParam1, 64);
StringIntConCat(&cVar0, iParam0, 64);
StringConCat(&cVar1, "VEM_", 64);
if(iParam3==1){
StringConCat(&cVar1, "COLOUR_1_", 64);
}elseif(iParam3==2){
StringConCat(&cVar1, "COLOUR_2_", 64);
}elseif(iParam3==3){
StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
}
if(iParam6==5){
StringConCat(&cVar1, "MCT_CHROME_", 64);
}elseif(iParam6==1){
StringConCat(&cVar1, "MCT_CLASSIC_", 64);
}elseif(iParam6==0){
StringConCat(&cVar1, "MCT_METALLIC_", 64);
}elseif(iParam6==4){
StringConCat(&cVar1, "MCT_METALS_", 64);
}elseif(iParam6==3){
StringConCat(&cVar1, "MCT_MATTE_", 64);
}elseif(iParam6==2){
StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
}elseif(iParam6==7){
StringConCat(&cVar1, "MCT_NONE_", 64);
}
StringConCat(&cVar1, sParam2, 64);
StringConCat(&cVar1, "_t", 64);
StringIntConCat(&cVar1, iParam4, 64);
StringConCat(&cVar1, "_v", 64);
StringIntConCat(&cVar1, iParam5, 64);
if(iParam6==7){
StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
StringIntConCat(&cVar1, iParam7, 64);
}
if(!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&cVar1))){
return 1;
}
return func_314(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}


void func_307(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
var uVar9;
VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, uParam10);
StringCopy(sParam2, "", 16);
StringCopy(sParam5, "", 16);
StringCopy(sParam8, "", 16);
if(bParam11){
VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &uVar2);
VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
}
if(bParam11){
iVar3=0;
while (iVar3 !=7){
if(!func_308(iVar3)){
iVar5=VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
iVar4=0;
while (iVar4 < iVar5){
VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, uVar2);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
if(iVar6==*iParam3){
*iParam1=iVar3;
StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
iVar4=iVar5 + 1;
}
iVar4++;
}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
iVar3++;
}else{
iVar3=7;
}}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
*iParam1=7;
IntToString(sParam2, *iParam3, 16);
}
if(bParam11){
iVar4=0;
iVar5=VEHICLE::GET_NUM_MOD_COLORS(0, 1);
iVar4=0;
while (iVar4 < iVar5){
VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
if(iVar8==*iParam9){
StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
iVar4=iVar5 + 1;
}
iVar4++;
}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
IntToString(sParam8, *iParam9, 16);
*iParam7=7;
}else{
*iParam7=*iParam1;
}
if(bParam11){
iVar3=0;
while (iVar3 !=7){
if(!func_308(iVar3)){
iVar4=0;
iVar5=VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
iVar4=0;
while (iVar4 < iVar5){
VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
if(iVar7==*iParam6){
*iParam4=iVar3;
StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
iVar4=iVar5 + 1;
}
iVar4++;
}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
iVar3++;
}else{
iVar3=7;
}}}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
*iParam4=7;
IntToString(sParam5, *iParam6, 16);
}
VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *uParam10);
}

int func_308(int iParam0){
if(!func_310() && func_309(iParam0)){
return 1;
}
return 0;
}

int func_309(int iParam0){
switch (iParam0){
case 6:
return 1;
break;
}
return 0;
}

int func_310(){
return 0;
}

int func_311(int iParam0){
switch (iParam0){
case joaat("faction2"):
case joaat("moonbeam2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("primo2"):
case joaat("voodoo"):
case joaat("sultanrs"):
case joaat("banshee2"):
case joaat("btype3"):
case joaat("faction3"):
case joaat("minivan2"):
case joaat("sabregt2"):
case joaat("slamvan3"):
case joaat("tornado5"):
case joaat("virgo2"):
case joaat("diablous2"):
case joaat("fcr2"):
case joaat("italigtb2"):
case joaat("specter2"):
case joaat("nero2"):
case joaat("comet3"):
case joaat("elegy"):
case joaat("apc"):
case joaat("halftrack"):
case joaat("trailersmall2"):
case joaat("dune3"):
case joaat("insurgent3"):
case joaat("tampa3"):
case joaat("technical3"):
case joaat("oppressor"):
case joaat("trailerlarge"):
case joaat("hauler2"):
case joaat("phantom3"):
case joaat("bombushka"):
case joaat("hunter"):
case joaat("microlight"):
case joaat("rogue"):
case joaat("tula"):
case joaat("havok"):
case joaat("mogul"):
case joaat("starling"):
case joaat("seabreeze"):
case joaat("cyclone"):
case joaat("visione"):
case joaat("vigilante"):
case joaat("rapidgt3"):
case joaat("retinue"):
case joaat("alphaz1"):
case joaat("howard"):
case joaat("molotok"):
case joaat("nokota"):
case joaat("pyro"):
case joaat("cuban800"):
case joaat("akula"):
case joaat("volatol"):
case joaat("avenger"):
case joaat("barrage"):
case joaat("chernobog"):
case joaat("deluxo"):
case joaat("khanjali"):
case joaat("riot2"):
case joaat("stromberg"):
case joaat("thruster"):
case joaat("caracara"):
case joaat("seasparrow"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
case joaat("oppressor2"):
case joaat("strikeforce"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("zr380"):
case joaat("brutus"):
case joaat("rcbandito"):
case joaat("jb7002"):
case joaat("minitank"):
case joaat("formula"):
case joaat("formula2"):
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
case joaat("seasparrow2"):
case joaat("alkonost"):
case joaat("annihilator2"):
case joaat("sultan3"):
case joaat("buffalo4"):
case joaat("deity"):
case joaat("jubilee"):
case joaat("granger2"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("weevil2"):
case joaat("tenf2"):
case joaat("brioso3"):
case joaat("sentinel4"):
case joaat("manchez3"):
case joaat("brickade2"):
case joaat("eudora"):
case joaat("powersurge"):
case joaat("surfer3"):
case joaat("journey2"):
case joaat("panthere"):
case joaat("broadway"):
case joaat("issi8"):
return 3;
break;
}
if(func_297(iParam0)){
return 3;
}
if(func_301(iParam0)){
return 3;
}
return func_302(iParam0);
}

int func_312(var uParam0){
int iVar0;
iVar0=func_313(uParam0);
if(iVar0==0){
return 0;
}
Call_Loc(iVar0);
return StackVal;
}


var func__313(var uParam0){
return uParam0->f_10;
}

int func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
bool bVar0;
int iVar1;
struct<4> Var2;
bVar0=false;
if(!func_257()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_88()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
iVar1=func_256();
if(iVar1==-1){
if(!func_316(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)){
return 0;
}}
if(iVar1 !=-1){
if(iParam8 !=0 && func_315(iParam1)){
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

int func_315(int iParam0){
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

int func_316(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5){
bool bVar0;
int iVar1;
bool bVar2;
var uVar3;
bVar0=false;
if(!func_257()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_88()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
if(bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, uParam3, uParam4)){
*iParam0=func_317(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
return 1;
}
return 0;
}

int func_317(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_257()){
uParam0=iVar0 + 900;
}
Global_4535172[iVar0 /*85*/].f_66.f_2=1;
Global_4535172[iVar0 /*85*/].f_66.f_1=iParam5;
Global_4535172[iVar0 /*85*/].f_66.f_3=iParam1;
Global_4535172[iVar0 /*85*/].f_66.f_4=iParam2;
Global_4535172[iVar0 /*85*/].f_66.f_7=uParam3;
Global_4535172[iVar0 /*85*/].f_66.f_5=0;
Global_4535172[iVar0 /*85*/].f_66=uParam0;
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
func_265(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}

int func_318(var uParam0, int iParam1, bool bParam2){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
if(func_7(iParam1)){
bVar0=func_500(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar2=func_29(ENTITY::GET_ENTITY_MODEL(iParam1));
iVar1=func_409(-1, iVar2, bVar0);
if(iVar1 <=-1){
func_407(&iVar3, ENTITY::GET_ENTITY_MODEL(iParam1), bVar0, -1);
iVar1=iVar3;
}
if(!bParam2){
if(func_312(uParam0)){
Global_1585919=iParam1;
Global_1585918=func_302(ENTITY::GET_ENTITY_MODEL(iParam1));
if(func_405(iParam1)){
iVar1=(iVar1 + func_357(73, 0, 0, 0, 0, 0));
}
iVar1=(iVar1 + func_321(iParam1, 39, 0, 0, 0, 1));
}
if(func_319(uParam0) !=0f){
iVar1=ceil((IntToFloat(iVar1) * ((100f - MISC::ABSF(func_319(uParam0))) / 100f)));
}}
return iVar1;
}
return -1;
}


float func_319(var uParam0){
int iVar0;
iVar0=func_320(uParam0);
if(iVar0==0){
return 0f;
}
Call_Loc(iVar0);
return StackVal;
}


var func__320(var uParam0){
return uParam0->f_9;
}


bool func_321(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
int iVar4;
int iVar5;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_356(iParam0, iParam1, iParam2);
iVar0=0;
if(!bParam5){
if(func_226(ENTITY::GET_ENTITY_MODEL(iParam0))){
fVar2=Global_262145.f_4776;
}else{
fVar2=Global_262145.f_4773;
}}else{
fVar2=1f;
}
if(VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >=0){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0) !=-1 && !func_353(iParam0, 0, VEHICLE::GET_VEHICLE_MOD(iParam0, 0), 0)){
iVar1=func_357(func_346(0, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 0) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 3) !=-1){
iVar1=func_357(func_346(3, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 3) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 4) !=-1){
iVar1=func_357(func_346(4, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 4) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5) !=-1 && !func_353(iParam0, 5, VEHICLE::GET_VEHICLE_MOD(iParam0, 5), 0)){
iVar1=func_357(func_346(5, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 5) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 6) !=-1 && !func_353(iParam0, 6, VEHICLE::GET_VEHICLE_MOD(iParam0, 6), 0)){
iVar1=func_357(func_346(6, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 6) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 7) !=-1){
iVar1=func_357(func_346(7, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 7) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=-1){
iVar1=func_357(func_346(10, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 10) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 11) !=-1){
iVar1=func_357(func_346(11, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 11) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 12) !=-1){
iVar1=func_357(func_346(12, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 12) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 13) !=-1 && !func_353(iParam0, 13, VEHICLE::GET_VEHICLE_MOD(iParam0, 13), 0)){
iVar1=func_357(func_346(13, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 13) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 14) !=-1){
iVar3=func_291(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam0, 14, VEHICLE::GET_VEHICLE_MOD(iParam0, 14)));
iVar1=func_357(func_346(14, 0, 0), iVar3, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 15) !=-1){
iVar1=func_357(func_346(15, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 15) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 16) !=-1 && !func_353(iParam0, 16, VEHICLE::GET_VEHICLE_MOD(iParam0, 16), 0)){
iVar1=func_357(func_346(16, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 16) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 23) !=-1){
iVar1=func_332(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 23, VEHICLE::GET_VEHICLE_MOD(iParam0, 23)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 23) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 24) !=-1 && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
iVar1=func_332(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 24, VEHICLE::GET_VEHICLE_MOD(iParam0, 24)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 24) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 1) !=-1){
iVar1=func_357(func_346(1, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 1) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 2) !=-1){
iVar1=func_357(func_346(2, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 2) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 8) !=-1){
iVar1=func_357(func_346(8, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 8) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 9) !=-1 && !func_353(iParam0, 9, VEHICLE::GET_VEHICLE_MOD(iParam0, 9), 0)){
iVar4=VEHICLE::GET_VEHICLE_MOD(iParam0, 9);
if(((((Global_1585918==29 || Global_1585918==30) || Global_1585918==34) || Global_1585918==33) || Global_1585918==38) || Global_1585918==39){
iVar4 +=21;
}
iVar1=func_357(func_346(9, 0, 0), iVar4 + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18) && !func_353(iParam0, 18, 1, 0)){
iVar1=func_357(func_346(18, 0, 0), 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 22)){
switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(iParam0)){
case 255:
iVar5=1;
break;
case 0:
iVar5=2;
break;
case 1:
iVar5=3;
break;
case 2:
iVar5=4;
break;
case 3:
iVar5=5;
break;
case 4:
iVar5=6;
break;
case 5:
iVar5=7;
break;
case 6:
iVar5=8;
break;
case 7:
iVar5=9;
break;
case 8:
iVar5=10;
break;
case 9:
iVar5=11;
break;
case 10:
iVar5=12;
break;
case 11:
iVar5=13;
break;
case 12:
iVar5=14;
break;
case 13:
iVar5=15;
break;
}
iVar1=func_357(29, iVar5, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if((!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !func_353(iParam0, -1, -1, 1)) && !func_331(iParam1, iParam2)){
iVar1=func_357(58, 2, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if((VEHICLE::GET_DRIFT_TYRES_SET(iParam0) && !func_353(iParam0, -1, -1, 1)) && !func_331(iParam1, iParam2)){
iVar1=func_357(58, 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 25) !=-1){
iVar1=func_357(func_346(25, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 25) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 26) !=-1){
iVar1=func_357(func_346(26, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 26) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 27) !=-1){
iVar1=func_357(func_346(27, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 27) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 28) !=-1){
iVar1=func_357(func_346(28, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 28) + 1, 0, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 28, VEHICLE::GET_VEHICLE_MOD(iParam0, 28)), 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 29) !=-1){
iVar1=func_357(func_346(29, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 29) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 30) !=-1){
iVar1=func_357(func_346(30, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 30) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 31) !=-1){
iVar1=func_357(func_346(31, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 31) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 32) !=-1){
iVar1=func_357(func_346(32, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 32) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 33) !=-1){
iVar1=func_357(func_346(33, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 33) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 34) !=-1 && !func_353(iParam0, 34, VEHICLE::GET_VEHICLE_MOD(iParam0, 34), 0)){
iVar1=func_357(func_346(34, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 34) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 35) !=-1){
iVar1=func_357(func_346(35, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 35) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 36) !=-1){
iVar1=func_357(func_346(36, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 36) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 37) !=-1){
iVar1=func_357(func_346(37, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 37) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 38) > 0){
iVar1=func_357(func_346(38, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 38) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 39) !=-1){
iVar1=func_357(func_346(39, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 39) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 40) !=-1){
iVar1=func_357(func_346(40, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 40) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 41) !=-1){
iVar1=func_357(func_346(41, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 41) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 42) !=-1 && !func_353(iParam0, 42, VEHICLE::GET_VEHICLE_MOD(iParam0, 42), 0)){
iVar1=func_357(func_346(42, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 42) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 43) !=-1 && !func_353(iParam0, 43, VEHICLE::GET_VEHICLE_MOD(iParam0, 43), 0)){
iVar1=func_357(func_346(43, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 43) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 44) !=-1){
iVar1=func_357(func_346(44, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 44) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 45) !=-1){
iVar1=func_357(func_346(45, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 45) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 46) !=-1){
iVar1=func_357(func_346(46, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 46) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 47) !=-1){
iVar1=func_357(func_346(47, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 47) + 1, 0, 0, 0, 0);
iVar0=(iVar0 + iVar1);
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 48) !=-1 && !func_353(iParam0, 48, VEHICLE::GET_VEHICLE_MOD(iParam0, 48), 0)){
iVar1=func_357(func_346(48, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 48) + 1, 0, 0, 0, 1);
iVar0=(iVar0 + iVar1);
}}
if(func_330(iParam0)){
if(func_326(iParam0, bParam4, iParam3)){
}else{
iVar1=floor(to_float(func_325(iParam0, VEHICLE::GET_VEHICLE_LIVERY(iParam0))));
iVar0=(iVar0 + iVar1);
}}
if(func_324(iParam0) && VEHICLE::GET_VEHICLE_LIVERY2(iParam0) !=0){
iVar1=floor(to_float(func_322(iParam0, VEHICLE::GET_VEHICLE_LIVERY2(iParam0))));
iVar0=(iVar0 + iVar1);
}
bVar0=floor((to_float(iVar0) * fVar2));
}}
return bVar0;
}

int func_322(int iParam0, int iParam1){
int iVar0;
iVar0=12345;
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("tornado5"):
iVar0=floor(((to_float(Global_262145.f_12394) * func_323(iParam1, 1)) * Global_262145.f_15063));
break;
}
return iVar0;
}


float func_323(int iParam0, bool bParam1){
if((Global_1585918==38 || Global_1585918==39) && !bParam1){
return 1f;
}else{
switch (iParam0){
case 0:
return 1f;
break;
case 1:
return Global_262145.f_12395;
break;
case 2:
return Global_262145.f_12396;
break;
case 3:
return Global_262145.f_12397;
break;
case 4:
return Global_262145.f_12398;
break;
case 5:
return Global_262145.f_12399;
break;
case 6:
return Global_262145.f_12400;
break;
case 7:
return Global_262145.f_12401;
break;
case 8:
return Global_262145.f_12402;
break;
case 9:
return Global_262145.f_12403;
break;
case 10:
return Global_262145.f_12404;
break;
case 11:
return Global_262145.f_12405;
break;
case 12:
return Global_262145.f_12406;
break;
case 13:
return Global_262145.f_12407;
break;
case 14:
return Global_262145.f_12408;
break;
case 15:
return Global_262145.f_12409;
break;
case 16:
return Global_262145.f_12410;
break;
case 17:
return Global_262145.f_12411;
break;
case 18:
return Global_262145.f_12412;
break;
case 19:
return Global_262145.f_12413;
break;
case 20:
return Global_262145.f_12414;
break;
case 21:
return Global_262145.f_12415;
break;
case 22:
return Global_262145.f_12416;
break;
case 23:
return Global_262145.f_12417;
break;
case 24:
return Global_262145.f_12418;
break;
case 25:
return Global_262145.f_12419;
break;
case 26:
return Global_262145.f_12420;
break;
case 27:
return Global_262145.f_12421;
break;
case 28:
return Global_262145.f_12422;
break;
case 29:
return Global_262145.f_12423;
break;
case 30:
return Global_262145.f_12424;
break;
}}
return 1f;
}

int func_324(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1){
return 1;
}}
return 0;
}

int func_325(int iParam0, int iParam1){
int iVar0;
iVar0=(575 + (50 * iParam1));
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("bati2"):
iVar0=(575 + (50 * iParam1));
break;
case joaat("sanchez"):
iVar0=(575 + (50 * iParam1));
break;
case joaat("paradise"):
iVar0=(575 + (50 * iParam1));
break;
case joaat("windsor"):
if(iParam1==0){
iVar0=100;
if(Global_262145.f_11067 >=0){
iVar0=Global_262145.f_11067;
}}elseif(iParam1==1){
iVar0=100000;
if(Global_262145.f_11068 >=0){
iVar0=Global_262145.f_11068;
}}elseif(iParam1==2){
iVar0=90000;
if(Global_262145.f_11069 >=0){
iVar0=Global_262145.f_11069;
}}elseif(iParam1==3){
iVar0=80000;
if(Global_262145.f_11070 >=0){
iVar0=Global_262145.f_11070;
}}elseif(iParam1==4){
iVar0=75000;
if(Global_262145.f_11071 >=0){
iVar0=Global_262145.f_11071;
}}elseif(iParam1==5){
iVar0=70000;
if(Global_262145.f_11035 >=0){
iVar0=Global_262145.f_11035;
}}elseif(iParam1==6){
iVar0=60000;
if(Global_262145.f_11072 >=0){
iVar0=Global_262145.f_11072;
}}elseif(iParam1==7){
iVar0=55000;
if(Global_262145.f_11073 >=0){
iVar0=Global_262145.f_11073;
}}elseif(iParam1==8){
iVar0=50000;
if(Global_262145.f_11074 >=0){
iVar0=Global_262145.f_11074;
}}
break;
}
return floor((to_float(iVar0) * Global_296941.f_50));
}

int func_326(int iParam0, bool bParam1, var uParam2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("windsor") && (func_327() || uParam2)){
return 1;
}
if(bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("sanchez"):
case joaat("bati"):
case joaat("bati2"):
return 1;
break;
}}
return 0;
}


bool func_327(){
return (func_329() || func_328());
}

int func_328(){
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

int func_329(){
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

int func_330(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bati2") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sanchez")){
return 1;
}
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1){
return 1;
}}
return 0;
}

int func_331(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==12){
return 1;
}}
return 0;
}

int func_332(char* sParam0, int iParam1, int iParam2, bool bParam3){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((func_345(Global_1585920, Global_1585921) || func_344()) || func_343()){
return 0;
}
return func_334(sParam0, iParam1, iParam2, bParam3);
}
return func_333(sParam0, iParam1, iParam2, bParam3);
}

int func_333(char* sParam0, int iParam1, int iParam2, bool bParam3){
char cVar0[16];
int iVar1;
int iVar2;
StringCopy(&cVar0, sParam0, 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar0)){
if(iParam2 <=0 || iParam1==-1){
if(bParam3){
StringCopy(&cVar0, "DEFAULT_C", 16);
}else{
StringCopy(&cVar0, "DEFAULT_B", 16);
}}else{
switch (iParam1){
case 0:
StringCopy(&cVar0, "SPT_", 16);
break;
case 1:
StringCopy(&cVar0, "MUSC_", 16);
break;
case 2:
StringCopy(&cVar0, "LORIDE_", 16);
break;
case 3:
StringCopy(&cVar0, "SUV_", 16);
break;
case 4:
StringCopy(&cVar0, "OFFR_", 16);
break;
case 5:
StringCopy(&cVar0, "DRFT_", 16);
break;
case 6:
StringCopy(&cVar0, "BIKEW_", 16);
break;
case 7:
StringCopy(&cVar0, "HIEND_", 16);
break;
}
if(iParam2 < 10){
StringConCat(&cVar0, "0", 16);
}
StringIntConCat(&cVar0, iParam2, 16);
}}
iVar1=MISC::GET_HASH_KEY(&cVar0);
switch (iVar1){
case joaat("HIEND_01"):
return 3280;
break;
case joaat("HIEND_02"):
return 2890;
break;
case joaat("HIEND_03"):
return 2850;
break;
case joaat("HIEND_04"):
return 3750;
break;
case joaat("HIEND_05"):
return 3100;
break;
case joaat("HIEND_06"):
return 3490;
break;
case joaat("HIEND_07"):
return 2990;
break;
case joaat("HIEND_08"):
return 3050;
break;
case joaat("HIEND_09"):
return 3480;
break;
case joaat("HIEND_10"):
return 2530;
break;
case joaat("HIEND_11"):
return 2580;
break;
case joaat("HIEND_12"):
return 3350;
break;
case joaat("HIEND_13"):
return 2880;
break;
case joaat("HIEND_14"):
return 2700;
break;
case joaat("HIEND_15"):
return 3650;
break;
case joaat("HIEND_16"):
return 4290;
break;
case joaat("HIEND_17"):
return 4150;
break;
case joaat("HIEND_18"):
return 3900;
break;
case joaat("HIEND_19"):
return 4000;
break;
case joaat("HIEND_20"):
return 4200;
break;
case joaat("SPT_01"):
return 2100;
break;
case joaat("SPT_02"):
return 2280;
break;
case joaat("SPT_03"):
return 2450;
break;
case joaat("SPT_04"):
return 2390;
break;
case joaat("SPT_05"):
return 2300;
break;
case joaat("SPT_06"):
return 2550;
break;
case joaat("SPT_07"):
return 2080;
break;
case joaat("SPT_08"):
return 2150;
break;
case joaat("SPT_09"):
return 3260;
break;
case joaat("SPT_10"):
return 2810;
break;
case joaat("SPT_11"):
return 2200;
break;
case joaat("SPT_12"):
return 3250;
break;
case joaat("SPT_13"):
return 3000;
break;
case joaat("SPT_14"):
return 3280;
break;
case joaat("SPT_15"):
return 2900;
break;
case joaat("SPT_16"):
return 3050;
break;
case joaat("SPT_17"):
return 2490;
break;
case joaat("SPT_18"):
return 2100;
break;
case joaat("SPT_19"):
return 2660;
break;
case joaat("SPT_20"):
return 3250;
break;
case joaat("SPT_21"):
return 3550;
break;
case joaat("SPT_22"):
return 3380;
break;
case joaat("SPT_23"):
return 3280;
break;
case joaat("SPT_24"):
return 3100;
break;
case joaat("SPT_25"):
return 3400;
break;
case joaat("MUSC_01"):
return 1290;
break;
case joaat("MUSC_02"):
return 2450;
break;
case joaat("MUSC_03"):
return 1500;
break;
case joaat("MUSC_04"):
return 1620;
break;
case joaat("MUSC_05"):
return 1555;
break;
case joaat("MUSC_06"):
return 1700;
break;
case joaat("MUSC_07"):
return 1780;
break;
case joaat("MUSC_08"):
return 1800;
break;
case joaat("MUSC_09"):
return 1590;
break;
case joaat("MUSC_10"):
return 2380;
break;
case joaat("MUSC_11"):
return 1540;
break;
case joaat("MUSC_12"):
return 1580;
break;
case joaat("MUSC_13"):
return 1600;
break;
case joaat("MUSC_14"):
return 1590;
break;
case joaat("MUSC_15"):
return 1775;
break;
case joaat("MUSC_16"):
return 1540;
break;
case joaat("MUSC_17"):
return 1510;
break;
case joaat("MUSC_18"):
return 1820;
break;
case joaat("MUSC_19"):
return 1550;
break;
case joaat("MUSC_20"):
return 1875;
break;
case joaat("LORIDE_01"):
return 1980;
break;
case joaat("LORIDE_02"):
return 2150;
break;
case joaat("LORIDE_03"):
return 2200;
break;
case joaat("LORIDE_04"):
return 2050;
break;
case joaat("LORIDE_05"):
return 2190;
break;
case joaat("LORIDE_06"):
return 2220;
break;
case joaat("LORIDE_07"):
return 2290;
break;
case joaat("LORIDE_08"):
return 2600;
break;
case joaat("LORIDE_09"):
return 2550;
break;
case joaat("LORIDE_10"):
return 2330;
break;
case joaat("LORIDE_11"):
return 2380;
break;
case joaat("LORIDE_12"):
return 3000;
break;
case joaat("LORIDE_13"):
return 2450;
break;
case joaat("LORIDE_14"):
return 2500;
break;
case joaat("LORIDE_15"):
return 2850;
break;
case joaat("SUV_01"):
return 3180;
break;
case joaat("SUV_02"):
return 3200;
break;
case joaat("SUV_03"):
return 3050;
break;
case joaat("SUV_04"):
return 3220;
break;
case joaat("SUV_05"):
return 3000;
break;
case joaat("SUV_06"):
return 3450;
break;
case joaat("SUV_07"):
return 3490;
break;
case joaat("SUV_08"):
return 3100;
break;
case joaat("SUV_09"):
return 3150;
break;
case joaat("SUV_10"):
return 3200;
break;
case joaat("SUV_11"):
return 3090;
break;
case joaat("SUV_12"):
return 3300;
break;
case joaat("SUV_13"):
return 3100;
break;
case joaat("SUV_14"):
return 3600;
break;
case joaat("SUV_15"):
return 3250;
break;
case joaat("SUV_16"):
return 3150;
break;
case joaat("SUV_17"):
return 3380;
break;
case joaat("SUV_18"):
return 3190;
break;
case joaat("SUV_19"):
return 3375;
break;
case joaat("SUV_20"):
return 3085;
break;
case joaat("OFFR_01"):
return 1850;
break;
case joaat("OFFR_02"):
return 2050;
break;
case joaat("OFFR_03"):
return 1890;
break;
case joaat("OFFR_04"):
return 2100;
break;
case joaat("OFFR_05"):
return 2590;
break;
case joaat("OFFR_06"):
return 2190;
break;
case joaat("OFFR_07"):
return 2000;
break;
case joaat("OFFR_08"):
return 2200;
break;
case joaat("OFFR_09"):
return 1770;
break;
case joaat("OFFR_10"):
return 1800;
break;
case joaat("DRFT_01"):
return 2450;
break;
case joaat("DRFT_02"):
return 2500;
break;
case joaat("DRFT_03"):
return 2490;
break;
case joaat("DRFT_04"):
return 2600;
break;
case joaat("DRFT_05"):
return 2620;
break;
case joaat("DRFT_06"):
return 2700;
break;
case joaat("DRFT_07"):
return 2550;
break;
case joaat("DRFT_08"):
return 2770;
break;
case joaat("DRFT_09"):
return 2580;
break;
case joaat("DRFT_10"):
return 2820;
break;
case joaat("DRFT_11"):
return 2855;
break;
case joaat("DRFT_12"):
return 2890;
break;
case joaat("DRFT_13"):
return 2400;
break;
case joaat("DRFT_14"):
return 2490;
break;
case joaat("DRFT_15"):
return 2520;
break;
case joaat("DRFT_16"):
return 2550;
break;
case joaat("DRFT_17"):
return 2610;
break;
case joaat("DRFT_18"):
return 2660;
break;
case joaat("DRFT_19"):
return 2720;
break;
case joaat("DRFT_20"):
return 2490;
break;
case joaat("DRFT_21"):
return 2440;
break;
case joaat("DRFT_22"):
return 2500;
break;
case joaat("DRFT_23"):
return 2585;
break;
case joaat("DRFT_24"):
return 2840;
break;
case joaat("BIKEW_01"):
return 1780;
break;
case joaat("BIKEW_02"):
return 1800;
break;
case joaat("BIKEW_03"):
return 1820;
break;
case joaat("BIKEW_04"):
return 1850;
break;
case joaat("BIKEW_05"):
return 1750;
break;
case joaat("BIKEW_06"):
return 1690;
break;
case joaat("BIKEW_07"):
return 1890;
break;
case joaat("BIKEW_08"):
return 2180;
break;
case joaat("BIKEW_09"):
return 1890;
break;
case joaat("BIKEW_10"):
return 1950;
break;
case joaat("BIKEW_11"):
return 2500;
break;
case joaat("BIKEW_12"):
return 2600;
break;
case joaat("BIKEW_13"):
return 2550;
break;
case 905412411:
return 1500;
break;
case 3216303:
return 800;
break;
case joaat("SMOD_WHL1"):
return Global_262145.f_12617;
break;
case joaat("SMOD_WHL2"):
return Global_262145.f_12618;
break;
case joaat("SMOD_WHL3"):
return Global_262145.f_12619;
break;
case joaat("SMOD_WHL4"):
return Global_262145.f_12620;
break;
case joaat("SMOD_WHL5"):
return Global_262145.f_12621;
break;
case joaat("SMOD_WHL6"):
return Global_262145.f_12622;
break;
case joaat("SMOD_WHL7"):
return Global_262145.f_12623;
break;
case joaat("SMOD_WHL8"):
return Global_262145.f_12624;
break;
case joaat("SMOD_WHL9"):
return Global_262145.f_12625;
break;
case joaat("SMOD_WHL10"):
return Global_262145.f_12626;
break;
case joaat("SMOD_WHL11"):
return Global_262145.f_12627;
break;
case joaat("SMOD_WHL12"):
return Global_262145.f_12628;
break;
case joaat("SMOD_WHL13"):
return Global_262145.f_12629;
break;
case joaat("SMOD_WHL14"):
return Global_262145.f_12630;
break;
case joaat("SMOD_WHL15"):
return Global_262145.f_12631;
break;
case joaat("SMOD_WHL16"):
return Global_262145.f_12632;
break;
case joaat("SMOD_WHL17"):
return Global_262145.f_12633;
break;
case joaat("SMOD_WHL18"):
return Global_262145.f_12634;
break;
case joaat("SMOD_WHL19"):
return Global_262145.f_12635;
break;
case joaat("SMOD_WHL20"):
return Global_262145.f_12636;
break;
case joaat("SMOD_WHL21"):
return Global_262145.f_12637;
break;
case joaat("SMOD_WHL22"):
return Global_262145.f_12638;
break;
case joaat("SMOD_WHL23"):
return Global_262145.f_12639;
break;
case joaat("SMOD_WHL24"):
return Global_262145.f_12640;
break;
case joaat("SMOD_WHL25"):
return Global_262145.f_12641;
break;
case joaat("SMOD_WHL26"):
return Global_262145.f_12642;
break;
case joaat("SMOD_WHL27"):
return Global_262145.f_12643;
break;
case joaat("SMOD_WHL28"):
return Global_262145.f_12644;
break;
case joaat("SMOD_WHL29"):
return Global_262145.f_12645;
break;
case joaat("SMOD_WHL30"):
return Global_262145.f_12646;
break;
case joaat("SMOD_WHL31"):
return Global_262145.f_12647;
break;
}
iVar2=MISC::GET_HASH_KEY(&cVar0);
switch (iVar2){
case 1767168450:
return Global_262145.f_15039;
break;
case 1529298279:
return Global_262145.f_15040;
break;
case 82284777:
return Global_262145.f_15041;
break;
case 1984033692:
return Global_262145.f_15042;
break;
case 806086449:
return Global_262145.f_15043;
break;
case 568445661:
return Global_262145.f_15044;
break;
case -609304968:
return Global_262145.f_15045;
break;
case -1117945386:
return Global_262145.f_15046;
break;
case -693095305:
return Global_262145.f_15047;
break;
case 1904880212:
return Global_262145.f_15048;
break;
case -2142222368:
return Global_262145.f_15049;
break;
case -1911037073:
return Global_262145.f_15050;
break;
case 436992853:
return Global_262145.f_15051;
break;
case -1496050457:
return Global_262145.f_15052;
break;
case -1255296614:
return Global_262145.f_15053;
break;
case -756159206:
return Global_262145.f_15054;
break;
case joaat("FAM6_TATM_8"):
return Global_262145.f_15055;
break;
case -589758224:
return Global_262145.f_15056;
break;
case -64995458:
return Global_262145.f_15057;
break;
case 1950559910:
return Global_262145.f_15058;
break;
case -2123314943:
return 12345;
break;
case -1892752259:
return 12345;
break;
case 254436466:
return 12345;
break;
case -1654914857:
return 12345;
break;
case -896771273:
return 12345;
break;
case -659130485:
return 12345;
break;
case 1407806959:
return 12345;
break;
case -509736614:
return 12345;
break;
case -281860988:
return 12345;
break;
case 1909548443:
return 12345;
break;
case 1663518791:
return 12345;
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
switch (iParam1){
case 0:
StringCopy(&cVar0, "RWD_SPT_", 16);
break;
case 1:
StringCopy(&cVar0, "RWD_MUSC_", 16);
break;
case 2:
StringCopy(&cVar0, "RWD_LORIDE_", 16);
break;
case 3:
StringCopy(&cVar0, "RWD_SUV_", 16);
break;
case 4:
StringCopy(&cVar0, "RWD_OFFR_", 16);
break;
case 5:
StringCopy(&cVar0, "RWD_DRFT_", 16);
break;
case 6:
StringCopy(&cVar0, "RWD_BIKEW_", 16);
break;
case 7:
StringCopy(&cVar0, "RWD_HIEND_", 16);
break;
}
if(iParam1==0 && iParam2 > 25){
iParam2=(iParam2 - 25);
}elseif(iParam1==1 && iParam2 > 18){
iParam2=(iParam2 - 18);
}elseif(iParam1==2 && iParam2 > 15){
iParam2=(iParam2 - 15);
}elseif(iParam1==3 && iParam2 > 19){
iParam2=(iParam2 - 19);
}elseif(iParam1==4 && iParam2 > 10){
iParam2=(iParam2 - 10);
}elseif(iParam1==5 && iParam2 > 24){
iParam2=(iParam2 - 24);
}elseif(iParam1==6 && iParam2 > 13){
iParam2=(iParam2 - 13);
}elseif(iParam1==7 && iParam2 > 20){
iParam2=(iParam2 - 20);
}
if(iParam2 < 10){
StringConCat(&cVar0, "0", 16);
}
StringIntConCat(&cVar0, iParam2, 16);
iVar1=MISC::GET_HASH_KEY(&cVar0);
}
switch (iVar1){
case joaat("RWD_HIEND_01"):
return 67860;
break;
case joaat("RWD_HIEND_02"):
return 71150;
break;
case joaat("RWD_HIEND_03"):
return 75850;
break;
case joaat("RWD_HIEND_04"):
return 81725;
break;
case joaat("RWD_HIEND_05"):
return 72325;
break;
case joaat("RWD_HIEND_06"):
return 69975;
break;
case joaat("RWD_HIEND_07"):
return 70210;
break;
case joaat("RWD_HIEND_08"):
return 71855;
break;
case joaat("RWD_HIEND_09"):
return 74205;
break;
case joaat("RWD_HIEND_10"):
return 72090;
break;
case joaat("RWD_HIEND_11"):
return 72560;
break;
case joaat("RWD_HIEND_12"):
return 76320;
break;
case joaat("RWD_HIEND_13"):
return 73500;
break;
case joaat("RWD_HIEND_14"):
return 74910;
break;
case joaat("RWD_HIEND_15"):
return 82665;
break;
case joaat("RWD_HIEND_16"):
return 81020;
break;
case joaat("RWD_HIEND_17"):
return 82900;
break;
case joaat("RWD_HIEND_18"):
return 83135;
break;
case joaat("RWD_HIEND_19"):
return 83370;
break;
case joaat("RWD_HIEND_20"):
return 83605;
break;
case joaat("RWD_SPT_01"):
return 56580;
break;
case joaat("RWD_SPT_02"):
return 67155;
break;
case joaat("RWD_SPT_03"):
return 67625;
break;
case joaat("RWD_SPT_04"):
return 67390;
break;
case joaat("RWD_SPT_05"):
return 57755;
break;
case joaat("RWD_SPT_06"):
return 58460;
break;
case joaat("RWD_SPT_07"):
return 56110;
break;
case joaat("RWD_SPT_08"):
return 56815;
break;
case joaat("RWD_SPT_09"):
return 69270;
break;
case joaat("RWD_SPT_10"):
return 68330;
break;
case joaat("RWD_SPT_11"):
return 57050;
break;
case joaat("RWD_SPT_12"):
return 80315;
break;
case joaat("RWD_SPT_13"):
return 80080;
break;
case joaat("RWD_SPT_14"):
return 69505;
break;
case joaat("RWD_SPT_15"):
return 69035;
break;
case joaat("RWD_SPT_16"):
return 69740;
break;
case joaat("RWD_SPT_17"):
return 78435;
break;
case joaat("RWD_SPT_18"):
return 66215;
break;
case joaat("RWD_SPT_19"):
return 68095;
break;
case joaat("RWD_SPT_20"):
return 70445;
break;
case joaat("RWD_SPT_21"):
return 82430;
break;
case joaat("RWD_SPT_22"):
return 71385;
break;
case joaat("RWD_SPT_23"):
return 80785;
break;
case joaat("RWD_SPT_24"):
return 79610;
break;
case joaat("RWD_SPT_25"):
return 81960;
break;
case joaat("RWD_MUSC_01"):
return 50235;
break;
case joaat("RWD_MUSC_02"):
return 66450;
break;
case joaat("RWD_MUSC_03"):
return 58930;
break;
case joaat("RWD_MUSC_04"):
return 50705;
break;
case joaat("RWD_MUSC_05"):
return 62925;
break;
case joaat("RWD_MUSC_06"):
return 64570;
break;
case joaat("RWD_MUSC_07"):
return 77025;
break;
case joaat("RWD_MUSC_08"):
return 53290;
break;
case joaat("RWD_MUSC_09"):
return 62220;
break;
case joaat("RWD_MUSC_10"):
return 77965;
break;
case joaat("RWD_MUSC_11"):
return 51175;
break;
case joaat("RWD_MUSC_12"):
return 52585;
break;
case joaat("RWD_MUSC_13"):
return 63630;
break;
case joaat("RWD_MUSC_14"):
return 63865;
break;
case joaat("RWD_MUSC_15"):
return 75615;
break;
case joaat("RWD_MUSC_16"):
return 52115;
break;
case joaat("RWD_MUSC_17"):
return 59635;
break;
case joaat("RWD_MUSC_18"):
return 62850;
break;
case joaat("RWD_MUSC_19"):
return 65395;
break;
case joaat("RWD_MUSC_20"):
return 73735;
break;
case joaat("RWD_LORIDE_01"):
return 62455;
break;
case joaat("RWD_LORIDE_02"):
return 51880;
break;
case joaat("RWD_LORIDE_03"):
return 53055;
break;
case joaat("RWD_LORIDE_04"):
return 52350;
break;
case joaat("RWD_LORIDE_05"):
return 61280;
break;
case joaat("RWD_LORIDE_06"):
return 63395;
break;
case joaat("RWD_LORIDE_07"):
return 60105;
break;
case joaat("RWD_LORIDE_08"):
return 77260;
break;
case joaat("RWD_LORIDE_09"):
return 75380;
break;
case joaat("RWD_LORIDE_10"):
return 74675;
break;
case joaat("RWD_LORIDE_11"):
return 78200;
break;
case joaat("RWD_LORIDE_12"):
return 79140;
break;
case joaat("RWD_LORIDE_13"):
return 66685;
break;
case joaat("RWD_LORIDE_14"):
return 73970;
break;
case joaat("RWD_LORIDE_15"):
return 64100;
break;
case joaat("RWD_SUV_01"):
return 79845;
break;
case joaat("RWD_SUV_02"):
return 56345;
break;
case joaat("RWD_SUV_03"):
return 65980;
break;
case joaat("RWD_SUV_04"):
return 68800;
break;
case joaat("RWD_SUV_05"):
return 57520;
break;
case joaat("RWD_SUV_06"):
return 76790;
break;
case joaat("RWD_SUV_07"):
return 65745;
break;
case joaat("RWD_SUV_08"):
return 81490;
break;
case joaat("RWD_SUV_09"):
return 68565;
break;
case joaat("RWD_SUV_10"):
return 70915;
break;
case joaat("RWD_SUV_11"):
return 76555;
break;
case joaat("RWD_SUV_12"):
return 58225;
break;
case joaat("RWD_SUV_13"):
return 77495;
break;
case joaat("RWD_SUV_14"):
return 82195;
break;
case joaat("RWD_SUV_15"):
return 79375;
break;
case joaat("RWD_SUV_16"):
return 80550;
break;
case joaat("RWD_SUV_17"):
return 81255;
break;
case joaat("RWD_SUV_18"):
return 70680;
break;
case joaat("RWD_SUV_19"):
return 66920;
break;
case joaat("RWD_SUV_20"):
return 79375;
break;
case joaat("RWD_OFFR_01"):
return 55640;
break;
case joaat("RWD_OFFR_02"):
return 55405;
break;
case joaat("RWD_OFFR_03"):
return 58695;
break;
case joaat("RWD_OFFR_04"):
return 63160;
break;
case joaat("RWD_OFFR_05"):
return 52820;
break;
case joaat("RWD_OFFR_06"):
return 76085;
break;
case joaat("RWD_OFFR_07"):
return 72795;
break;
case joaat("RWD_OFFR_08"):
return 65040;
break;
case joaat("RWD_OFFR_09"):
return 53525;
break;
case joaat("RWD_OFFR_10"):
return 61750;
break;
case joaat("RWD_DRFT_01"):
return 65510;
break;
case joaat("RWD_DRFT_02"):
return 57990;
break;
case joaat("RWD_DRFT_03"):
return 54700;
break;
case joaat("RWD_DRFT_04"):
return 60340;
break;
case joaat("RWD_DRFT_05"):
return 54230;
break;
case joaat("RWD_DRFT_06"):
return 64335;
break;
case joaat("RWD_DRFT_07"):
return 74440;
break;
case joaat("RWD_DRFT_08"):
return 78905;
break;
case joaat("RWD_DRFT_09"):
return 61515;
break;
case joaat("RWD_DRFT_10"):
return 77730;
break;
case joaat("RWD_DRFT_11"):
return 65275;
break;
case joaat("RWD_DRFT_12"):
return 55170;
break;
case joaat("RWD_DRFT_13"):
return 59165;
break;
case joaat("RWD_DRFT_14"):
return 59870;
break;
case joaat("RWD_DRFT_15"):
return 53760;
break;
case joaat("RWD_DRFT_16"):
return 60810;
break;
case joaat("RWD_DRFT_17"):
return 64805;
break;
case joaat("RWD_DRFT_18"):
return 53995;
break;
case joaat("RWD_DRFT_19"):
return 54935;
break;
case joaat("RWD_DRFT_20"):
return 54465;
break;
case joaat("RWD_DRFT_21"):
return 51645;
break;
case joaat("RWD_DRFT_22"):
return 60575;
break;
case joaat("RWD_DRFT_23"):
return 75145;
break;
case joaat("RWD_DRFT_24"):
return 78670;
break;
case joaat("RWD_BIKEW_01"):
return 16980;
break;
case joaat("RWD_BIKEW_02"):
return 17137;
break;
case joaat("RWD_BIKEW_03"):
return 18625;
break;
case joaat("RWD_BIKEW_04"):
return 19095;
break;
case joaat("RWD_BIKEW_05"):
return 16823;
break;
case joaat("RWD_BIKEW_06"):
return 16667;
break;
case joaat("RWD_BIKEW_07"):
return 19800;
break;
case joaat("RWD_BIKEW_08"):
return 20897;
break;
case joaat("RWD_BIKEW_09"):
return 20348;
break;
case joaat("RWD_BIKEW_10"):
return 20662;
break;
case joaat("RWD_BIKEW_11"):
return 23873;
break;
case joaat("RWD_BIKEW_12"):
return 24422;
break;
case joaat("RWD_BIKEW_13"):
return 24343;
break;
case joaat("BIKEW_14"):
return Global_262145.f_17937;
break;
case joaat("BIKEW_15"):
return Global_262145.f_17938;
break;
case joaat("BIKEW_16"):
return Global_262145.f_17939;
break;
case joaat("BIKEW_17"):
return Global_262145.f_17940;
break;
case joaat("BIKEW_18"):
return Global_262145.f_17941;
break;
case joaat("BIKEW_19"):
return Global_262145.f_17942;
break;
case joaat("BIKEW_20"):
return Global_262145.f_17943;
break;
case joaat("BIKEW_21"):
return Global_262145.f_17944;
break;
case joaat("BIKEW_22"):
return Global_262145.f_17945;
break;
case joaat("BIKEW_23"):
return Global_262145.f_17946;
break;
case joaat("BIKEW_24"):
return Global_262145.f_17947;
break;
case joaat("BIKEW_25"):
return Global_262145.f_17948;
break;
case joaat("BIKEW_26"):
return Global_262145.f_17949;
break;
case joaat("BIKEW_27"):
return Global_262145.f_17950;
break;
case joaat("BIKEW_28"):
return Global_262145.f_17951;
break;
case joaat("BIKEW_29"):
return Global_262145.f_17952;
break;
case joaat("BIKEW_30"):
return Global_262145.f_17953;
break;
case joaat("BIKEW_31"):
return Global_262145.f_17954;
break;
case joaat("BIKEW_32"):
return Global_262145.f_17955;
break;
case joaat("BIKEW_33"):
return Global_262145.f_17956;
break;
case joaat("BIKEW_34"):
return Global_262145.f_17957;
break;
case joaat("BIKEW_35"):
return Global_262145.f_17958;
break;
case joaat("BIKEW_36"):
return Global_262145.f_17959;
break;
}
return 1500;
}

int func_334(char* sParam0, int iParam1, int iParam2, bool bParam3){
float fVar0;
bool bVar1;
char cVar2[16];
int iVar3;
int iVar4;
int iVar5;
int iVar6;
fVar0=-2f;
bVar1=false;
StringCopy(&cVar2, sParam0, 16);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar2)){
if(iParam2 <=0 || iParam1==-1){
if(bParam3){
StringCopy(&cVar2, "DEFAULT_C", 16);
}else{
StringCopy(&cVar2, "DEFAULT_B", 16);
}}else{
switch (iParam1){
case 0:
StringCopy(&cVar2, "SPT_", 16);
break;
case 1:
StringCopy(&cVar2, "MUSC_", 16);
break;
case 2:
StringCopy(&cVar2, "LORIDE_", 16);
break;
case 3:
StringCopy(&cVar2, "SUV_", 16);
break;
case 4:
StringCopy(&cVar2, "OFFR_", 16);
break;
case 5:
StringCopy(&cVar2, "DRFT_", 16);
break;
case 6:
StringCopy(&cVar2, "BIKEW_", 16);
break;
case 7:
StringCopy(&cVar2, "HIEND_", 16);
break;
case 8:
StringCopy(&cVar2, "SMOD_WHL", 16);
break;
case 9:
StringCopy(&cVar2, "SMOD_WHL", 16);
break;
case 10:
StringCopy(&cVar2, "SMOD_WHL", 16);
break;
case 11:
StringCopy(&cVar2, "SMOD_WHL", 16);
break;
case 12:
StringCopy(&cVar2, "SMOD_WHL", 16);
break;
}
if(((((iParam2 < 10 && iParam1 !=8) && iParam1 !=9) && iParam1 !=10) && iParam1 !=11) && iParam1 !=12){
StringConCat(&cVar2, "0", 16);
}
StringIntConCat(&cVar2, iParam2, 16);
}}
if((iParam1==6 && (iParam2 >=27 && iParam2 <=49)) && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_1585919))){
StringCopy(&cVar2, "BIKEW_", 16);
iVar3=(iParam2 - 13);
StringIntConCat(&cVar2, iVar3, 16);
}
iVar4=MISC::GET_HASH_KEY(&cVar2);
switch (iVar4){
case joaat("HIEND_01"):
fVar0=(8780f * Global_262145.f_2991);
break;
case joaat("HIEND_02"):
fVar0=(9990f * Global_262145.f_2991);
break;
case joaat("HIEND_03"):
fVar0=(14890f * Global_262145.f_2991);
break;
case joaat("HIEND_04"):
fVar0=(19600f * Global_262145.f_2991);
break;
case joaat("HIEND_05"):
fVar0=(10870f * Global_262145.f_2991);
break;
case joaat("HIEND_06"):
fVar0=(9620f * Global_262145.f_2991);
break;
case joaat("HIEND_07"):
fVar0=(9790f * Global_262145.f_2991);
break;
case joaat("HIEND_08"):
fVar0=(10260f * Global_262145.f_2991);
break;
case joaat("HIEND_09"):
fVar0=(13390f * Global_262145.f_2991);
break;
case joaat("HIEND_10"):
fVar0=(10660f * Global_262145.f_2991);
break;
case joaat("HIEND_11"):
fVar0=(10990f * Global_262145.f_2991);
break;
case joaat("HIEND_12"):
fVar0=(15000f * Global_262145.f_2991);
break;
case joaat("HIEND_13"):
fVar0=(12250f * Global_262145.f_2991);
break;
case joaat("HIEND_14"):
fVar0=(13690f * Global_262145.f_2991);
break;
case joaat("HIEND_15"):
fVar0=(20130f * Global_262145.f_2991);
break;
case joaat("HIEND_16"):
fVar0=(19240f * Global_262145.f_2991);
break;
case joaat("HIEND_17"):
fVar0=(21380f * Global_262145.f_2991);
break;
case joaat("HIEND_18"):
fVar0=(22100f * Global_262145.f_2991);
break;
case joaat("HIEND_19"):
fVar0=(23680f * Global_262145.f_2991);
break;
case joaat("HIEND_20"):
fVar0=(25000f * Global_262145.f_2991);
break;
case joaat("SPT_01"):
fVar0=(5530f * Global_262145.f_2992);
break;
case joaat("SPT_02"):
fVar0=(8120f * Global_262145.f_2992);
break;
case joaat("SPT_03"):
fVar0=(8620f * Global_262145.f_2992);
break;
case joaat("SPT_04"):
fVar0=(8430f * Global_262145.f_2992);
break;
case joaat("SPT_05"):
fVar0=(5980f * Global_262145.f_2992);
break;
case joaat("SPT_06"):
fVar0=(6000f * Global_262145.f_2992);
break;
case joaat("SPT_07"):
fVar0=(5240f * Global_262145.f_2992);
break;
case joaat("SPT_08"):
fVar0=(5750f * Global_262145.f_2992);
break;
case joaat("SPT_09"):
fVar0=(9380f * Global_262145.f_2992);
break;
case joaat("SPT_10"):
fVar0=(8990f * Global_262145.f_2992);
break;
case joaat("SPT_11"):
fVar0=(5840f * Global_262145.f_2992);
break;
case joaat("SPT_12"):
fVar0=(18690f * Global_262145.f_2992);
break;
case joaat("SPT_13"):
fVar0=(18440f * Global_262145.f_2992);
break;
case joaat("SPT_14"):
fVar0=(9430f * Global_262145.f_2992);
break;
case joaat("SPT_15"):
fVar0=(9210f * Global_262145.f_2992);
break;
case joaat("SPT_16"):
fVar0=(9570f * Global_262145.f_2992);
break;
case joaat("SPT_17"):
fVar0=(16850f * Global_262145.f_2992);
break;
case joaat("SPT_18"):
fVar0=(8000f * Global_262145.f_2992);
break;
case joaat("SPT_19"):
fVar0=(8850f * Global_262145.f_2992);
break;
case joaat("SPT_20"):
fVar0=(9860f * Global_262145.f_2992);
break;
case joaat("SPT_21"):
fVar0=(20000f * Global_262145.f_2992);
break;
case joaat("SPT_22"):
fVar0=(10000f * Global_262145.f_2992);
break;
case joaat("SPT_23"):
fVar0=(19210f * Global_262145.f_2992);
break;
case joaat("SPT_24"):
fVar0=(17600f * Global_262145.f_2992);
break;
case joaat("SPT_25"):
fVar0=(19850f * Global_262145.f_2992);
break;
case joaat("MUSC_01"):
fVar0=(3500f * Global_262145.f_2995);
break;
case joaat("MUSC_02"):
fVar0=(8000f * Global_262145.f_2995);
break;
case joaat("MUSC_03"):
fVar0=(6000f * Global_262145.f_2995);
break;
case joaat("MUSC_04"):
fVar0=(3740f * Global_262145.f_2995);
break;
case joaat("MUSC_05"):
fVar0=(7100f * Global_262145.f_2995);
break;
case joaat("MUSC_06"):
fVar0=(7900f * Global_262145.f_2995);
break;
case joaat("MUSC_07"):
fVar0=(15680f * Global_262145.f_2995);
break;
case joaat("MUSC_08"):
fVar0=(4800f * Global_262145.f_2995);
break;
case joaat("MUSC_09"):
fVar0=(6850f * Global_262145.f_2995);
break;
case joaat("MUSC_10"):
fVar0=(16580f * Global_262145.f_2995);
break;
case joaat("MUSC_11"):
fVar0=(3990f * Global_262145.f_2995);
break;
case joaat("MUSC_12"):
fVar0=(4510f * Global_262145.f_2995);
break;
case joaat("MUSC_13"):
fVar0=(7450f * Global_262145.f_2995);
break;
case joaat("MUSC_14"):
fVar0=(7650f * Global_262145.f_2995);
break;
case joaat("MUSC_15"):
fVar0=(14320f * Global_262145.f_2995);
break;
case joaat("MUSC_16"):
fVar0=(4350f * Global_262145.f_2995);
break;
case joaat("MUSC_17"):
fVar0=(6210f * Global_262145.f_2995);
break;
case joaat("MUSC_18"):
fVar0=(12580f * Global_262145.f_2995);
break;
case joaat("MUSC_19"):
fVar0=(15500f * Global_262145.f_2995);
break;
case joaat("MUSC_20"):
fVar0=(12580f * Global_262145.f_2995);
break;
case joaat("LORIDE_01"):
fVar0=(6900f * Global_262145.f_2993);
break;
case joaat("LORIDE_02"):
fVar0=(4300f * Global_262145.f_2993);
break;
case joaat("LORIDE_03"):
fVar0=(4750f * Global_262145.f_2993);
break;
case joaat("LORIDE_04"):
fVar0=(4480f * Global_262145.f_2993);
break;
case joaat("LORIDE_05"):
fVar0=(6690f * Global_262145.f_2993);
break;
case joaat("LORIDE_06"):
fVar0=(7250f * Global_262145.f_2993);
break;
case joaat("LORIDE_07"):
fVar0=(6230f * Global_262145.f_2993);
break;
case joaat("LORIDE_08"):
fVar0=(15800f * Global_262145.f_2993);
break;
case joaat("LORIDE_09"):
fVar0=(14210f * Global_262145.f_2993);
break;
case joaat("LORIDE_10"):
fVar0=(13500f * Global_262145.f_2993);
break;
case joaat("LORIDE_11"):
fVar0=(16580f * Global_262145.f_2993);
break;
case joaat("LORIDE_12"):
fVar0=(17000f * Global_262145.f_2993);
break;
case joaat("LORIDE_13"):
fVar0=(8000f * Global_262145.f_2993);
break;
case joaat("LORIDE_14"):
fVar0=(12780f * Global_262145.f_2993);
break;
case joaat("LORIDE_15"):
fVar0=(7650f * Global_262145.f_2993);
break;
case joaat("SUV_01"):
fVar0=(18100f * Global_262145.f_2994);
break;
case joaat("SUV_02"):
fVar0=(5360f * Global_262145.f_2994);
break;
case joaat("SUV_03"):
fVar0=(8000f * Global_262145.f_2994);
break;
case joaat("SUV_04"):
fVar0=(9150f * Global_262145.f_2994);
break;
case joaat("SUV_05"):
fVar0=(5890f * Global_262145.f_2994);
break;
case joaat("SUV_06"):
fVar0=(15400f * Global_262145.f_2994);
break;
case joaat("SUV_07"):
fVar0=(8000f * Global_262145.f_2994);
break;
case joaat("SUV_08"):
fVar0=(19600f * Global_262145.f_2994);
break;
case joaat("SUV_09"):
fVar0=(9130f * Global_262145.f_2994);
break;
case joaat("SUV_10"):
fVar0=(9980f * Global_262145.f_2994);
break;
case joaat("SUV_11"):
fVar0=(15230f * Global_262145.f_2994);
break;
case joaat("SUV_12"):
fVar0=(6000f * Global_262145.f_2994);
break;
case joaat("SUV_13"):
fVar0=(15990f * Global_262145.f_2994);
break;
case joaat("SUV_14"):
fVar0=(20000f * Global_262145.f_2994);
break;
case joaat("SUV_15"):
fVar0=(17560f * Global_262145.f_2994);
break;
case joaat("SUV_16"):
fVar0=(18750f * Global_262145.f_2994);
break;
case joaat("SUV_17"):
fVar0=(19820f * Global_262145.f_2994);
break;
case joaat("SUV_18"):
fVar0=(9890f * Global_262145.f_2994);
break;
case joaat("SUV_19"):
fVar0=(8100f * Global_262145.f_2994);
break;
case joaat("OFFR_01"):
fVar0=(5000f * Global_262145.f_2997);
break;
case joaat("OFFR_02"):
fVar0=(5000f * Global_262145.f_2997);
break;
case joaat("OFFR_03"):
fVar0=(6000f * Global_262145.f_2997);
break;
case joaat("OFFR_04"):
fVar0=(7240f * Global_262145.f_2997);
break;
case joaat("OFFR_05"):
fVar0=(4690f * Global_262145.f_2997);
break;
case joaat("OFFR_06"):
fVar0=(15000f * Global_262145.f_2997);
break;
case joaat("OFFR_07"):
fVar0=(11200f * Global_262145.f_2997);
break;
case joaat("OFFR_08"):
fVar0=(7930f * Global_262145.f_2997);
break;
case joaat("OFFR_09"):
fVar0=(4810f * Global_262145.f_2997);
break;
case joaat("OFFR_10"):
fVar0=(6810f * Global_262145.f_2997);
break;
case joaat("DRFT_01"):
fVar0=(8000f * Global_262145.f_2996);
break;
case joaat("DRFT_02"):
fVar0=(6000f * Global_262145.f_2996);
break;
case joaat("DRFT_03"):
fVar0=(4990f * Global_262145.f_2996);
break;
case joaat("DRFT_04"):
fVar0=(6300f * Global_262145.f_2996);
break;
case joaat("DRFT_05"):
fVar0=(4930f * Global_262145.f_2996);
break;
case joaat("DRFT_06"):
fVar0=(7850f * Global_262145.f_2996);
break;
case joaat("DRFT_07"):
fVar0=(13440f * Global_262145.f_2996);
break;
case joaat("DRFT_08"):
fVar0=(17000f * Global_262145.f_2996);
break;
case joaat("DRFT_09"):
fVar0=(6790f * Global_262145.f_2996);
break;
case joaat("DRFT_10"):
fVar0=(16480f * Global_262145.f_2996);
break;
case joaat("DRFT_11"):
fVar0=(8000f * Global_262145.f_2996);
break;
case joaat("DRFT_12"):
fVar0=(5000f * Global_262145.f_2996);
break;
case joaat("DRFT_13"):
fVar0=(6100f * Global_262145.f_2996);
break;
case joaat("DRFT_14"):
fVar0=(6230f * Global_262145.f_2996);
break;
case joaat("DRFT_15"):
fVar0=(4850f * Global_262145.f_2996);
break;
case joaat("DRFT_16"):
fVar0=(6350f * Global_262145.f_2996);
break;
case joaat("DRFT_17"):
fVar0=(7930f * Global_262145.f_2996);
break;
case joaat("DRFT_18"):
fVar0=(4920f * Global_262145.f_2996);
break;
case joaat("DRFT_19"):
fVar0=(5000f * Global_262145.f_2996);
break;
case joaat("DRFT_20"):
fVar0=(4980f * Global_262145.f_2996);
break;
case joaat("DRFT_21"):
fVar0=(4250f * Global_262145.f_2996);
break;
case joaat("DRFT_22"):
fVar0=(6330f * Global_262145.f_2996);
break;
case joaat("DRFT_23"):
fVar0=(14100f * Global_262145.f_2996);
break;
case joaat("DRFT_24"):
fVar0=(16890f * Global_262145.f_2996);
break;
case joaat("BIKEW_01"):
fVar0=(3780f * Global_262145.f_2998);
break;
case joaat("BIKEW_02"):
fVar0=(4000f * Global_262145.f_2998);
break;
case joaat("BIKEW_03"):
fVar0=(5120f * Global_262145.f_2998);
break;
case joaat("BIKEW_04"):
fVar0=(5870f * Global_262145.f_2998);
break;
case joaat("BIKEW_05"):
fVar0=(3500f * Global_262145.f_2998);
break;
case joaat("BIKEW_06"):
fVar0=(3380f * Global_262145.f_2998);
break;
case joaat("BIKEW_07"):
fVar0=(6120f * Global_262145.f_2998);
break;
case joaat("BIKEW_08"):
fVar0=(7000f * Global_262145.f_2998);
break;
case joaat("BIKEW_09"):
fVar0=(6550f * Global_262145.f_2998);
break;
case joaat("BIKEW_10"):
fVar0=(6830f * Global_262145.f_2998);
break;
case joaat("BIKEW_11"):
fVar0=(10250f * Global_262145.f_2998);
break;
case joaat("BIKEW_12"):
fVar0=(12000f * Global_262145.f_2998);
break;
case joaat("BIKEW_13"):
fVar0=(11370f * Global_262145.f_2998);
break;
case joaat("SMOD_WHL1"):
fVar0=to_float(Global_262145.f_12617);
break;
case joaat("SMOD_WHL2"):
fVar0=to_float(Global_262145.f_12618);
break;
case joaat("SMOD_WHL3"):
fVar0=to_float(Global_262145.f_12619);
break;
case joaat("SMOD_WHL4"):
fVar0=to_float(Global_262145.f_12620);
break;
case joaat("SMOD_WHL5"):
fVar0=to_float(Global_262145.f_12621);
break;
case joaat("SMOD_WHL6"):
fVar0=to_float(Global_262145.f_12622);
break;
case joaat("SMOD_WHL7"):
fVar0=to_float(Global_262145.f_12623);
break;
case joaat("SMOD_WHL8"):
fVar0=to_float(Global_262145.f_12624);
break;
case joaat("SMOD_WHL9"):
fVar0=to_float(Global_262145.f_12625);
break;
case joaat("SMOD_WHL10"):
fVar0=to_float(Global_262145.f_12626);
break;
case joaat("SMOD_WHL11"):
fVar0=to_float(Global_262145.f_12627);
break;
case joaat("SMOD_WHL12"):
fVar0=to_float(Global_262145.f_12628);
break;
case joaat("SMOD_WHL13"):
fVar0=to_float(Global_262145.f_12629);
break;
case joaat("SMOD_WHL14"):
fVar0=to_float(Global_262145.f_12630);
break;
case joaat("SMOD_WHL15"):
fVar0=to_float(Global_262145.f_12631);
break;
case joaat("SMOD_WHL16"):
fVar0=to_float(Global_262145.f_12632);
break;
case joaat("SMOD_WHL17"):
fVar0=to_float(Global_262145.f_12633);
break;
case joaat("SMOD_WHL18"):
fVar0=to_float(Global_262145.f_12634);
break;
case joaat("SMOD_WHL19"):
fVar0=to_float(Global_262145.f_12635);
break;
case joaat("SMOD_WHL20"):
fVar0=to_float(Global_262145.f_12636);
break;
case joaat("SMOD_WHL21"):
fVar0=to_float(Global_262145.f_12637);
break;
case joaat("SMOD_WHL22"):
fVar0=to_float(Global_262145.f_12638);
break;
case joaat("SMOD_WHL23"):
fVar0=to_float(Global_262145.f_12639);
break;
case joaat("SMOD_WHL24"):
fVar0=to_float(Global_262145.f_12640);
break;
case joaat("SMOD_WHL25"):
fVar0=to_float(Global_262145.f_12641);
break;
case joaat("SMOD_WHL26"):
fVar0=to_float(Global_262145.f_12642);
break;
case joaat("SMOD_WHL27"):
fVar0=to_float(Global_262145.f_12643);
break;
case joaat("SMOD_WHL28"):
fVar0=to_float(Global_262145.f_12644);
break;
case joaat("SMOD_WHL29"):
fVar0=to_float(Global_262145.f_12645);
break;
case joaat("SMOD_WHL30"):
fVar0=to_float(Global_262145.f_12646);
break;
case joaat("SMOD_WHL31"):
fVar0=to_float(Global_262145.f_12647);
break;
case 905412411:
switch (iParam1){
case 0:
fVar0=(3000f * Global_262145.f_3313);
break;
case 1:
fVar0=(3000f * Global_262145.f_3450);
break;
case 2:
fVar0=(3000f * Global_262145.f_3450);
break;
case 3:
fVar0=(3000f * Global_262145.f_3176);
break;
case 4:
fVar0=(3000f * Global_262145.f_3039);
break;
case 5:
fVar0=(3000f * Global_262145.f_3039);
break;
case 6:
fVar0=(3000f * Global_262145.f_3587);
break;
case 7:
fVar0=(3000f * Global_262145.f_3450);
break;
case 8:
fVar0=(3000f * Global_262145.f_3450);
break;
case 9:
fVar0=(3000f * Global_262145.f_3450);
break;
case 10:
fVar0=(3000f * Global_262145.f_3450);
break;
case 11:
fVar0=(3000f * Global_262145.f_3450);
break;
case 12:
fVar0=(3000f * Global_262145.f_3450);
break;
}
break;
case 3216303:
fVar0=(3000f * Global_262145.f_3587);
break;
}
iVar5=MISC::GET_HASH_KEY(&cVar2);
switch (iVar5){
case 1767168450:
fVar0=to_float(Global_262145.f_15039);
break;
case 1529298279:
fVar0=to_float(Global_262145.f_15040);
break;
case 82284777:
fVar0=to_float(Global_262145.f_15041);
break;
case 1984033692:
fVar0=to_float(Global_262145.f_15042);
break;
case 806086449:
fVar0=to_float(Global_262145.f_15043);
break;
case 568445661:
fVar0=to_float(Global_262145.f_15044);
break;
case -609304968:
fVar0=to_float(Global_262145.f_15045);
break;
case -1117945386:
fVar0=to_float(Global_262145.f_15046);
break;
case -693095305:
fVar0=to_float(Global_262145.f_15047);
break;
case 1904880212:
fVar0=to_float(Global_262145.f_15048);
break;
case -2142222368:
fVar0=to_float(Global_262145.f_15049);
break;
case -1911037073:
fVar0=to_float(Global_262145.f_15050);
break;
case 436992853:
fVar0=to_float(Global_262145.f_15051);
break;
case -1496050457:
fVar0=to_float(Global_262145.f_15052);
break;
case -1255296614:
fVar0=to_float(Global_262145.f_15053);
break;
case -756159206:
fVar0=to_float(Global_262145.f_15054);
break;
case joaat("FAM6_TATM_8"):
fVar0=to_float(Global_262145.f_15055);
break;
case -589758224:
fVar0=to_float(Global_262145.f_15056);
break;
case -64995458:
fVar0=to_float(Global_262145.f_15057);
break;
case 1950559910:
fVar0=to_float(Global_262145.f_15058);
break;
case -2123314943:
fVar0=to_float(Global_262145.f_15107);
break;
case -1892752259:
fVar0=to_float(Global_262145.f_15108);
break;
case 254436466:
fVar0=to_float(Global_262145.f_15109);
break;
case -1654914857:
fVar0=to_float(Global_262145.f_15110);
break;
case -896771273:
fVar0=to_float(Global_262145.f_15111);
break;
case -659130485:
fVar0=to_float(Global_262145.f_15112);
break;
case 1407806959:
fVar0=to_float(Global_262145.f_15113);
break;
case -509736614:
fVar0=to_float(Global_262145.f_15114);
break;
case -281860988:
fVar0=to_float(Global_262145.f_15115);
break;
case 1909548443:
fVar0=to_float(Global_262145.f_15116);
break;
case 1663518791:
fVar0=to_float(Global_262145.f_15117);
break;
case -1940801854:
fVar0=to_float(Global_262145.f_15039);
break;
case 2144247228:
fVar0=to_float(Global_262145.f_15040);
break;
case 1894055913:
fVar0=to_float(Global_262145.f_15041);
break;
case 1134732645:
fVar0=to_float(Global_262145.f_15042);
break;
case -1019272036:
fVar0=to_float(Global_262145.f_15043);
break;
case -1258682350:
fVar0=to_float(Global_262145.f_15044);
break;
case -1464045673:
fVar0=to_float(Global_262145.f_15045);
break;
case -1721741089:
fVar0=to_float(Global_262145.f_15046);
break;
case -706622987:
fVar0=to_float(Global_262145.f_15047);
break;
case 473211097:
fVar0=to_float(Global_262145.f_15048);
break;
case 260376442:
fVar0=to_float(Global_262145.f_15049);
break;
case -1226320327:
fVar0=to_float(Global_262145.f_15050);
break;
case -1594774963:
fVar0=to_float(Global_262145.f_15051);
break;
case 1418858899:
fVar0=to_float(Global_262145.f_15052);
break;
case -987532624:
fVar0=to_float(Global_262145.f_15053);
break;
case -762278522:
fVar0=to_float(Global_262145.f_15054);
break;
case 1120726529:
fVar0=to_float(Global_262145.f_15055);
break;
case -163752737:
fVar0=to_float(Global_262145.f_15056);
break;
case -531027689:
fVar0=to_float(Global_262145.f_15057);
break;
case 12086017:
fVar0=to_float(Global_262145.f_15058);
break;
case -150513761:
fVar0=to_float(Global_262145.f_15107);
break;
case 858247143:
fVar0=to_float(Global_262145.f_15108);
break;
case 540879378:
fVar0=to_float(Global_262145.f_15109);
break;
case -837155383:
fVar0=to_float(Global_262145.f_15110);
break;
case 1080511143:
fVar0=to_float(Global_262145.f_29279);
break;
case 841330212:
fVar0=to_float(Global_262145.f_29280);
break;
case 619746234:
fVar0=to_float(Global_262145.f_29281);
break;
case -362340704:
fVar0=to_float(Global_262145.f_29282);
break;
case 1016644354:
fVar0=to_float(Global_262145.f_29283);
break;
case 768124258:
fVar0=to_float(Global_262145.f_29284);
break;
case 522094606:
fVar0=to_float(Global_262145.f_29285);
break;
case -1530162314:
fVar0=to_float(Global_262145.f_29286);
break;
case 380172067:
fVar0=to_float(Global_262145.f_29287);
break;
case 490538355:
fVar0=to_float(Global_262145.f_29288);
break;
case 782247993:
fVar0=to_float(Global_262145.f_29289);
break;
case -1763215206:
fVar0=to_float(Global_262145.f_29290);
break;
case -2061216492:
fVar0=to_float(Global_262145.f_29291);
break;
case 1804313059:
fVar0=to_float(Global_262145.f_29292);
break;
case 1770233299:
fVar0=to_float(Global_262145.f_29293);
break;
case 293891914:
fVar0=to_float(Global_262145.f_29294);
break;
case -1015819466:
fVar0=to_float(Global_262145.f_29295);
break;
case -185027021:
fVar0=to_float(Global_262145.f_29296);
break;
case -1493362103:
fVar0=to_float(Global_262145.f_29297);
break;
case -691602980:
fVar0=to_float(Global_262145.f_29298);
break;
case 108190051:
fVar0=to_float(Global_262145.f_29299);
break;
case -618036527:
fVar0=to_float(Global_262145.f_29300);
break;
case -252531101:
fVar0=to_float(Global_262145.f_29301);
break;
case -1080177738:
fVar0=to_float(Global_262145.f_29302);
break;
case 1074308091:
fVar0=to_float(Global_262145.f_29303);
break;
case 1782052953:
fVar0=to_float(Global_262145.f_29304);
break;
case 1486804263:
fVar0=to_float(Global_262145.f_29305);
break;
case 1767536202:
fVar0=to_float(Global_262145.f_29306);
break;
case 1394493906:
fVar0=to_float(Global_262145.f_29307);
break;
case -2067190489:
fVar0=to_float(Global_262145.f_29308);
break;
case 1854013593:
fVar0=to_float(Global_262145.f_29309);
break;
case -1674355717:
fVar0=to_float(Global_262145.f_29310);
break;
case -900056928:
fVar0=to_float(Global_262145.f_29311);
break;
case -1196944068:
fVar0=to_float(Global_262145.f_29312);
break;
case 2017988817:
fVar0=to_float(Global_262145.f_29313);
break;
case -1925891413:
fVar0=to_float(Global_262145.f_29314);
break;
case -1669932754:
fVar0=to_float(Global_262145.f_29315);
break;
case -1854618826:
fVar0=to_float(Global_262145.f_29316);
break;
case -1489572166:
fVar0=to_float(Global_262145.f_29317);
break;
case -1277261823:
fVar0=to_float(Global_262145.f_29318);
break;
case -878856321:
fVar0=to_float(Global_262145.f_29319);
break;
case -663072456:
fVar0=to_float(Global_262145.f_29320);
break;
case -290423388:
fVar0=to_float(Global_262145.f_29321);
break;
case 51816048:
fVar0=to_float(Global_262145.f_29322);
break;
case -1151887349:
fVar0=to_float(Global_262145.f_29323);
break;
case 767634574:
fVar0=to_float(Global_262145.f_31322);
break;
case 454231858:
fVar0=to_float(Global_262145.f_31323);
break;
case 173041065:
fVar0=to_float(Global_262145.f_31324);
break;
case -142753788:
fVar0=to_float(Global_262145.f_31325);
break;
case 1691523764:
fVar0=to_float(Global_262145.f_31326);
break;
case 1381529024:
fVar0=to_float(Global_262145.f_31327);
break;
case 1096143803:
fVar0=to_float(Global_262145.f_31328);
break;
case 518295257:
fVar0=to_float(Global_262145.f_31329);
break;
case -1691580573:
fVar0=to_float(Global_262145.f_31330);
break;
case 1355144970:
fVar0=to_float(Global_262145.f_31331);
break;
case 1594653591:
fVar0=to_float(Global_262145.f_31332);
break;
case 550666016:
fVar0=to_float(Global_262145.f_31333);
break;
case -283862107:
fVar0=to_float(Global_262145.f_31334);
break;
case 1012413995:
fVar0=to_float(Global_262145.f_31335);
break;
case 178344638:
fVar0=to_float(Global_262145.f_31336);
break;
case -675484426:
fVar0=to_float(Global_262145.f_31337);
break;
case -1510274701:
fVar0=to_float(Global_262145.f_31338);
break;
case -15647842:
fVar0=to_float(Global_262145.f_31339);
break;
case -1049247640:
fVar0=to_float(Global_262145.f_31340);
break;
case 76892038:
fVar0=to_float(Global_262145.f_31341);
break;
case -231169331:
fVar0=to_float(Global_262145.f_31342);
break;
case 1059994807:
fVar0=to_float(Global_262145.f_31343);
break;
case 752261128:
fVar0=to_float(Global_262145.f_31344);
break;
case -984135413:
fVar0=to_float(Global_262145.f_31345);
break;
case -1153485605:
fVar0=to_float(Global_262145.f_31346);
break;
case -405500411:
fVar0=to_float(Global_262145.f_31347);
break;
case -678236798:
fVar0=to_float(Global_262145.f_31348);
break;
case 1804670324:
fVar0=to_float(Global_262145.f_31349);
break;
case 1615724270:
fVar0=to_float(Global_262145.f_31350);
break;
case 774249395:
fVar0=to_float(Global_262145.f_31351);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && fVar0==-2f){
switch (iParam1){
case 0:
StringCopy(&cVar2, "RWD_SPT_", 16);
break;
case 1:
StringCopy(&cVar2, "RWD_MUSC_", 16);
break;
case 2:
StringCopy(&cVar2, "RWD_LORIDE_", 16);
break;
case 3:
StringCopy(&cVar2, "RWD_SUV_", 16);
break;
case 4:
StringCopy(&cVar2, "RWD_OFFR_", 16);
break;
case 5:
StringCopy(&cVar2, "RWD_DRFT_", 16);
break;
case 6:
StringCopy(&cVar2, "RWD_BIKEW_", 16);
break;
case 7:
StringCopy(&cVar2, "RWD_HIEND_", 16);
break;
}
if(iParam1==0 && iParam2 > 25){
iParam2=(iParam2 - 25);
}elseif(iParam1==1 && iParam2 > 18){
iParam2=(iParam2 - 18);
}elseif(iParam1==2 && iParam2 > 15){
iParam2=(iParam2 - 15);
}elseif(iParam1==3 && iParam2 > 19){
iParam2=(iParam2 - 19);
}elseif(iParam1==4 && iParam2 > 10){
iParam2=(iParam2 - 10);
}elseif(iParam1==5 && iParam2 > 24){
iParam2=(iParam2 - 24);
}elseif(iParam1==6 && iParam2 > 13){
iParam2=(iParam2 - 13);
}elseif(iParam1==7 && iParam2 > 20){
iParam2=(iParam2 - 20);
}
if(iParam2 < 10){
StringConCat(&cVar2, "0", 16);
}
StringIntConCat(&cVar2, iParam2, 16);
if((iParam1==6 && iParam2 > 49) && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_1585919))){
StringCopy(&cVar2, "RWD_BIKEW_", 16);
iVar6=(iParam2 - 36);
StringIntConCat(&cVar2, iVar6, 16);
}
iVar4=MISC::GET_HASH_KEY(&cVar2);
}
switch (iVar4){
case joaat("RWD_HIEND_01"):
fVar0=67860f;
bVar1=true;
break;
case joaat("RWD_HIEND_02"):
fVar0=71150f;
bVar1=true;
break;
case joaat("RWD_HIEND_03"):
fVar0=75850f;
bVar1=true;
break;
case joaat("RWD_HIEND_04"):
fVar0=81725f;
bVar1=true;
break;
case joaat("RWD_HIEND_05"):
fVar0=72325f;
bVar1=true;
break;
case joaat("RWD_HIEND_06"):
fVar0=69975f;
bVar1=true;
break;
case joaat("RWD_HIEND_07"):
fVar0=70210f;
bVar1=true;
break;
case joaat("RWD_HIEND_08"):
fVar0=71855f;
bVar1=true;
break;
case joaat("RWD_HIEND_09"):
fVar0=74205f;
bVar1=true;
break;
case joaat("RWD_HIEND_10"):
fVar0=72090f;
bVar1=true;
break;
case joaat("RWD_HIEND_11"):
fVar0=72560f;
bVar1=true;
break;
case joaat("RWD_HIEND_12"):
fVar0=76320f;
bVar1=true;
break;
case joaat("RWD_HIEND_13"):
fVar0=73500f;
bVar1=true;
break;
case joaat("RWD_HIEND_14"):
fVar0=74910f;
bVar1=true;
break;
case joaat("RWD_HIEND_15"):
fVar0=82665f;
bVar1=true;
break;
case joaat("RWD_HIEND_16"):
fVar0=81020f;
bVar1=true;
break;
case joaat("RWD_HIEND_17"):
fVar0=82900f;
bVar1=true;
break;
case joaat("RWD_HIEND_18"):
fVar0=83135f;
bVar1=true;
break;
case joaat("RWD_HIEND_19"):
fVar0=83370f;
bVar1=true;
break;
case joaat("RWD_HIEND_20"):
fVar0=83605f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_SPT_01"):
fVar0=56580f;
bVar1=true;
break;
case joaat("RWD_SPT_02"):
fVar0=67155f;
bVar1=true;
break;
case joaat("RWD_SPT_03"):
fVar0=67625f;
bVar1=true;
break;
case joaat("RWD_SPT_04"):
fVar0=67390f;
bVar1=true;
break;
case joaat("RWD_SPT_05"):
fVar0=57755f;
bVar1=true;
break;
case joaat("RWD_SPT_06"):
fVar0=58460f;
bVar1=true;
break;
case joaat("RWD_SPT_07"):
fVar0=56110f;
bVar1=true;
break;
case joaat("RWD_SPT_08"):
fVar0=56815f;
bVar1=true;
break;
case joaat("RWD_SPT_09"):
fVar0=69270f;
bVar1=true;
break;
case joaat("RWD_SPT_10"):
fVar0=68330f;
bVar1=true;
break;
case joaat("RWD_SPT_11"):
fVar0=57050f;
bVar1=true;
break;
case joaat("RWD_SPT_12"):
fVar0=80315f;
bVar1=true;
break;
case joaat("RWD_SPT_13"):
fVar0=80080f;
bVar1=true;
break;
case joaat("RWD_SPT_14"):
fVar0=69505f;
bVar1=true;
break;
case joaat("RWD_SPT_15"):
fVar0=69035f;
bVar1=true;
break;
case joaat("RWD_SPT_16"):
fVar0=69740f;
bVar1=true;
break;
case joaat("RWD_SPT_17"):
fVar0=78435f;
bVar1=true;
break;
case joaat("RWD_SPT_18"):
fVar0=66215f;
bVar1=true;
break;
case joaat("RWD_SPT_19"):
fVar0=68095f;
bVar1=true;
break;
case joaat("RWD_SPT_20"):
fVar0=70445f;
bVar1=true;
break;
case joaat("RWD_SPT_21"):
fVar0=82430f;
bVar1=true;
break;
case joaat("RWD_SPT_22"):
fVar0=71385f;
bVar1=true;
break;
case joaat("RWD_SPT_23"):
fVar0=80785f;
bVar1=true;
break;
case joaat("RWD_SPT_24"):
fVar0=79610f;
bVar1=true;
break;
case joaat("RWD_SPT_25"):
fVar0=81960f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_MUSC_01"):
fVar0=50235f;
bVar1=true;
break;
case joaat("RWD_MUSC_02"):
fVar0=66450f;
bVar1=true;
break;
case joaat("RWD_MUSC_03"):
fVar0=58930f;
bVar1=true;
break;
case joaat("RWD_MUSC_04"):
fVar0=50705f;
bVar1=true;
break;
case joaat("RWD_MUSC_05"):
fVar0=62925f;
bVar1=true;
break;
case joaat("RWD_MUSC_06"):
fVar0=64570f;
bVar1=true;
break;
case joaat("RWD_MUSC_07"):
fVar0=77025f;
bVar1=true;
break;
case joaat("RWD_MUSC_08"):
fVar0=53290f;
bVar1=true;
break;
case joaat("RWD_MUSC_09"):
fVar0=62220f;
bVar1=true;
break;
case joaat("RWD_MUSC_10"):
fVar0=77965f;
bVar1=true;
break;
case joaat("RWD_MUSC_11"):
fVar0=51175f;
bVar1=true;
break;
case joaat("RWD_MUSC_12"):
fVar0=52585f;
bVar1=true;
break;
case joaat("RWD_MUSC_13"):
fVar0=63630f;
bVar1=true;
break;
case joaat("RWD_MUSC_14"):
fVar0=63865f;
bVar1=true;
break;
case joaat("RWD_MUSC_15"):
fVar0=75615f;
bVar1=true;
break;
case joaat("RWD_MUSC_16"):
fVar0=52115f;
bVar1=true;
break;
case joaat("RWD_MUSC_17"):
fVar0=59635f;
bVar1=true;
break;
case joaat("RWD_MUSC_18"):
fVar0=62850f;
bVar1=true;
break;
case joaat("RWD_MUSC_19"):
fVar0=65395f;
bVar1=true;
break;
case joaat("RWD_MUSC_20"):
fVar0=73735f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_LORIDE_01"):
fVar0=62455f;
bVar1=true;
break;
case joaat("RWD_LORIDE_02"):
fVar0=51880f;
bVar1=true;
break;
case joaat("RWD_LORIDE_03"):
fVar0=53055f;
bVar1=true;
break;
case joaat("RWD_LORIDE_04"):
fVar0=52350f;
bVar1=true;
break;
case joaat("RWD_LORIDE_05"):
fVar0=61280f;
bVar1=true;
break;
case joaat("RWD_LORIDE_06"):
fVar0=63395f;
bVar1=true;
break;
case joaat("RWD_LORIDE_07"):
fVar0=60105f;
bVar1=true;
break;
case joaat("RWD_LORIDE_08"):
fVar0=77260f;
bVar1=true;
break;
case joaat("RWD_LORIDE_09"):
fVar0=75380f;
bVar1=true;
break;
case joaat("RWD_LORIDE_10"):
fVar0=74675f;
bVar1=true;
break;
case joaat("RWD_LORIDE_11"):
fVar0=78200f;
bVar1=true;
break;
case joaat("RWD_LORIDE_12"):
fVar0=79140f;
bVar1=true;
break;
case joaat("RWD_LORIDE_13"):
fVar0=66685f;
bVar1=true;
break;
case joaat("RWD_LORIDE_14"):
fVar0=73970f;
bVar1=true;
break;
case joaat("RWD_LORIDE_15"):
fVar0=64100f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_SUV_01"):
fVar0=79845f;
bVar1=true;
break;
case joaat("RWD_SUV_02"):
fVar0=56345f;
bVar1=true;
break;
case joaat("RWD_SUV_03"):
fVar0=65980f;
bVar1=true;
break;
case joaat("RWD_SUV_04"):
fVar0=68800f;
bVar1=true;
break;
case joaat("RWD_SUV_05"):
fVar0=57520f;
bVar1=true;
break;
case joaat("RWD_SUV_06"):
fVar0=76790f;
bVar1=true;
break;
case joaat("RWD_SUV_07"):
fVar0=65745f;
bVar1=true;
break;
case joaat("RWD_SUV_08"):
fVar0=81490f;
bVar1=true;
break;
case joaat("RWD_SUV_09"):
fVar0=68565f;
bVar1=true;
break;
case joaat("RWD_SUV_10"):
fVar0=70915f;
bVar1=true;
break;
case joaat("RWD_SUV_11"):
fVar0=76555f;
bVar1=true;
break;
case joaat("RWD_SUV_12"):
fVar0=58225f;
bVar1=true;
break;
case joaat("RWD_SUV_13"):
fVar0=77495f;
bVar1=true;
break;
case joaat("RWD_SUV_14"):
fVar0=82195f;
bVar1=true;
break;
case joaat("RWD_SUV_15"):
fVar0=79375f;
bVar1=true;
break;
case joaat("RWD_SUV_16"):
fVar0=80550f;
bVar1=true;
break;
case joaat("RWD_SUV_17"):
fVar0=81255f;
bVar1=true;
break;
case joaat("RWD_SUV_18"):
fVar0=70680f;
bVar1=true;
break;
case joaat("RWD_SUV_19"):
fVar0=66920f;
bVar1=true;
break;
case joaat("RWD_SUV_20"):
fVar0=79375f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_OFFR_01"):
fVar0=55640f;
bVar1=true;
break;
case joaat("RWD_OFFR_02"):
fVar0=55405f;
bVar1=true;
break;
case joaat("RWD_OFFR_03"):
fVar0=58695f;
bVar1=true;
break;
case joaat("RWD_OFFR_04"):
fVar0=63160f;
bVar1=true;
break;
case joaat("RWD_OFFR_05"):
fVar0=52820f;
bVar1=true;
break;
case joaat("RWD_OFFR_06"):
fVar0=76085f;
bVar1=true;
break;
case joaat("RWD_OFFR_07"):
fVar0=72795f;
bVar1=true;
break;
case joaat("RWD_OFFR_08"):
fVar0=65040f;
bVar1=true;
break;
case joaat("RWD_OFFR_09"):
fVar0=53525f;
bVar1=true;
break;
case joaat("RWD_OFFR_10"):
fVar0=61750f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_DRFT_01"):
fVar0=65510f;
bVar1=true;
break;
case joaat("RWD_DRFT_02"):
fVar0=57990f;
bVar1=true;
break;
case joaat("RWD_DRFT_03"):
fVar0=54700f;
bVar1=true;
break;
case joaat("RWD_DRFT_04"):
fVar0=60340f;
bVar1=true;
break;
case joaat("RWD_DRFT_05"):
fVar0=54230f;
bVar1=true;
break;
case joaat("RWD_DRFT_06"):
fVar0=64335f;
bVar1=true;
break;
case joaat("RWD_DRFT_07"):
fVar0=74440f;
bVar1=true;
break;
case joaat("RWD_DRFT_08"):
fVar0=78905f;
bVar1=true;
break;
case joaat("RWD_DRFT_09"):
fVar0=61515f;
bVar1=true;
break;
case joaat("RWD_DRFT_10"):
fVar0=77730f;
bVar1=true;
break;
case joaat("RWD_DRFT_11"):
fVar0=65275f;
bVar1=true;
break;
case joaat("RWD_DRFT_12"):
fVar0=55170f;
bVar1=true;
break;
case joaat("RWD_DRFT_13"):
fVar0=59165f;
bVar1=true;
break;
case joaat("RWD_DRFT_14"):
fVar0=59870f;
bVar1=true;
break;
case joaat("RWD_DRFT_15"):
fVar0=53760f;
bVar1=true;
break;
case joaat("RWD_DRFT_16"):
fVar0=60810f;
bVar1=true;
break;
case joaat("RWD_DRFT_17"):
fVar0=64805f;
bVar1=true;
break;
case joaat("RWD_DRFT_18"):
fVar0=53995f;
bVar1=true;
break;
case joaat("RWD_DRFT_19"):
fVar0=54935f;
bVar1=true;
break;
case joaat("RWD_DRFT_20"):
fVar0=54465f;
bVar1=true;
break;
case joaat("RWD_DRFT_21"):
fVar0=51645f;
bVar1=true;
break;
case joaat("RWD_DRFT_22"):
fVar0=60575f;
bVar1=true;
break;
case joaat("RWD_DRFT_23"):
fVar0=75145f;
bVar1=true;
break;
case joaat("RWD_DRFT_24"):
fVar0=78670f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("RWD_BIKEW_01"):
fVar0=16980f;
bVar1=true;
break;
case joaat("RWD_BIKEW_02"):
fVar0=17137f;
bVar1=true;
break;
case joaat("RWD_BIKEW_03"):
fVar0=18625f;
bVar1=true;
break;
case joaat("RWD_BIKEW_04"):
fVar0=19095f;
bVar1=true;
break;
case joaat("RWD_BIKEW_05"):
fVar0=16823f;
bVar1=true;
break;
case joaat("RWD_BIKEW_06"):
fVar0=16667f;
bVar1=true;
break;
case joaat("RWD_BIKEW_07"):
fVar0=19800f;
bVar1=true;
break;
case joaat("RWD_BIKEW_08"):
fVar0=20897f;
bVar1=true;
break;
case joaat("RWD_BIKEW_09"):
fVar0=20348f;
bVar1=true;
break;
case joaat("RWD_BIKEW_10"):
fVar0=20662f;
bVar1=true;
break;
case joaat("RWD_BIKEW_11"):
fVar0=23873f;
bVar1=true;
break;
case joaat("RWD_BIKEW_12"):
fVar0=24422f;
bVar1=true;
break;
case joaat("RWD_BIKEW_13"):
fVar0=24343f;
bVar1=true;
break;
}
switch (iVar4){
case joaat("BIKEW_14"):
fVar0=to_float(Global_262145.f_17937);
bVar1=false;
break;
case joaat("BIKEW_15"):
fVar0=to_float(Global_262145.f_17938);
bVar1=false;
break;
case joaat("BIKEW_16"):
fVar0=to_float(Global_262145.f_17939);
bVar1=false;
break;
case joaat("BIKEW_17"):
fVar0=to_float(Global_262145.f_17940);
bVar1=false;
break;
case joaat("BIKEW_18"):
fVar0=to_float(Global_262145.f_17941);
bVar1=false;
break;
case joaat("BIKEW_19"):
fVar0=to_float(Global_262145.f_17942);
bVar1=false;
break;
case joaat("BIKEW_20"):
fVar0=to_float(Global_262145.f_17943);
bVar1=false;
break;
case joaat("BIKEW_21"):
fVar0=to_float(Global_262145.f_17944);
bVar1=false;
break;
case joaat("BIKEW_22"):
fVar0=to_float(Global_262145.f_17945);
bVar1=false;
break;
case joaat("BIKEW_23"):
fVar0=to_float(Global_262145.f_17946);
bVar1=false;
break;
case joaat("BIKEW_24"):
fVar0=to_float(Global_262145.f_17947);
bVar1=false;
break;
case joaat("BIKEW_25"):
fVar0=to_float(Global_262145.f_17948);
bVar1=false;
break;
case joaat("BIKEW_26"):
fVar0=to_float(Global_262145.f_17949);
bVar1=false;
break;
case joaat("BIKEW_27"):
fVar0=to_float(Global_262145.f_17950);
bVar1=false;
break;
case joaat("BIKEW_28"):
fVar0=to_float(Global_262145.f_17951);
bVar1=false;
break;
case joaat("BIKEW_29"):
fVar0=to_float(Global_262145.f_17952);
bVar1=false;
break;
case joaat("BIKEW_30"):
fVar0=to_float(Global_262145.f_17953);
bVar1=false;
break;
case joaat("BIKEW_31"):
fVar0=to_float(Global_262145.f_17954);
bVar1=false;
break;
case joaat("BIKEW_32"):
fVar0=to_float(Global_262145.f_17955);
bVar1=false;
break;
case joaat("BIKEW_33"):
fVar0=to_float(Global_262145.f_17956);
bVar1=false;
break;
case joaat("BIKEW_34"):
fVar0=to_float(Global_262145.f_17957);
bVar1=false;
break;
case joaat("BIKEW_35"):
fVar0=to_float(Global_262145.f_17958);
bVar1=false;
break;
case joaat("BIKEW_36"):
fVar0=to_float(Global_262145.f_17959);
bVar1=false;
break;
}
switch (iVar4){
case joaat("RWD_BIKEW_14"):
fVar0=to_float(Global_262145.f_17960);
bVar1=true;
break;
case joaat("RWD_BIKEW_15"):
fVar0=to_float(Global_262145.f_17961);
bVar1=true;
break;
case joaat("RWD_BIKEW_16"):
fVar0=to_float(Global_262145.f_17962);
bVar1=true;
break;
case joaat("RWD_BIKEW_17"):
fVar0=to_float(Global_262145.f_17963);
bVar1=true;
break;
case joaat("RWD_BIKEW_18"):
fVar0=to_float(Global_262145.f_17964);
bVar1=true;
break;
case joaat("RWD_BIKEW_19"):
fVar0=to_float(Global_262145.f_17965);
bVar1=true;
break;
case joaat("RWD_BIKEW_20"):
fVar0=to_float(Global_262145.f_17966);
bVar1=true;
break;
case joaat("RWD_BIKEW_21"):
fVar0=to_float(Global_262145.f_17967);
bVar1=true;
break;
case joaat("RWD_BIKEW_22"):
fVar0=to_float(Global_262145.f_17968);
bVar1=true;
break;
case joaat("RWD_BIKEW_23"):
fVar0=to_float(Global_262145.f_17969);
bVar1=true;
break;
case joaat("RWD_BIKEW_24"):
fVar0=to_float(Global_262145.f_17970);
bVar1=true;
break;
case joaat("RWD_BIKEW_25"):
fVar0=to_float(Global_262145.f_17971);
bVar1=true;
break;
case joaat("RWD_BIKEW_26"):
fVar0=to_float(Global_262145.f_17972);
bVar1=true;
break;
case joaat("RWD_BIKEW_27"):
fVar0=to_float(Global_262145.f_17973);
bVar1=true;
break;
case joaat("RWD_BIKEW_28"):
fVar0=to_float(Global_262145.f_17974);
bVar1=true;
break;
case joaat("RWD_BIKEW_29"):
fVar0=to_float(Global_262145.f_17975);
bVar1=true;
break;
case joaat("RWD_BIKEW_30"):
fVar0=to_float(Global_262145.f_17976);
bVar1=true;
break;
case joaat("RWD_BIKEW_31"):
fVar0=to_float(Global_262145.f_17977);
bVar1=true;
break;
case joaat("RWD_BIKEW_32"):
fVar0=to_float(Global_262145.f_17978);
bVar1=true;
break;
case joaat("RWD_BIKEW_33"):
fVar0=to_float(Global_262145.f_17979);
bVar1=true;
break;
case joaat("RWD_BIKEW_34"):
fVar0=to_float(Global_262145.f_17980);
bVar1=true;
break;
case joaat("RWD_BIKEW_35"):
fVar0=to_float(Global_262145.f_17981);
bVar1=true;
break;
case joaat("RWD_BIKEW_36"):
fVar0=to_float(Global_262145.f_17982);
bVar1=true;
break;
}
if(bVar1){
if(func_335(iVar4)){
fVar0=0f;
}
switch (iParam1){
case 0:
fVar0=(fVar0 * Global_262145.f_10537);
break;
case 1:
fVar0=(fVar0 * Global_262145.f_10535);
break;
case 2:
fVar0=(fVar0 * Global_262145.f_10534);
break;
case 3:
fVar0=(fVar0 * Global_262145.f_10538);
break;
case 4:
fVar0=(fVar0 * Global_262145.f_10536);
break;
case 5:
fVar0=(fVar0 * Global_262145.f_10539);
break;
case 6:
fVar0=(fVar0 * Global_262145.f_10546);
break;
case 7:
fVar0=(fVar0 * Global_262145.f_10533);
break;
case 8:
fVar0=(fVar0 * Global_262145.f_10540);
break;
case 9:
fVar0=(fVar0 * Global_262145.f_10541);
break;
case 10:
fVar0=(fVar0 * Global_262145.f_10542);
break;
case 11:
fVar0=(fVar0 * Global_262145.f_10543);
break;
case 12:
fVar0=(fVar0 * Global_262145.f_10544);
break;
}}
if(iParam2 !=0){
if(func_295(ENTITY::GET_ENTITY_MODEL(Global_1585919))==12){
fVar0=(fVar0 * Global_262145.f_15062);
}}
return floor((fVar0 * Global_296941.f_51));
}

int func_335(int iParam0){
switch (iParam0){
case joaat("RWD_HIEND_01"):
case joaat("RWD_HIEND_02"):
case joaat("RWD_HIEND_03"):
case joaat("RWD_HIEND_04"):
case joaat("RWD_HIEND_05"):
case joaat("RWD_HIEND_06"):
case joaat("RWD_HIEND_07"):
case joaat("RWD_HIEND_08"):
case joaat("RWD_HIEND_09"):
case joaat("RWD_HIEND_10"):
case joaat("RWD_HIEND_11"):
case joaat("RWD_HIEND_12"):
case joaat("RWD_HIEND_13"):
case joaat("RWD_HIEND_14"):
case joaat("RWD_HIEND_15"):
case joaat("RWD_HIEND_16"):
case joaat("RWD_HIEND_17"):
case joaat("RWD_HIEND_18"):
case joaat("RWD_HIEND_19"):
case joaat("RWD_HIEND_20"):
if(func_342(128, -1) >=func_341(128, 5, 0)){
return 1;
}else{
return 0;
}
break;
}
switch (iParam0){
case joaat("RWD_SPT_01"):
case joaat("RWD_SPT_02"):
case joaat("RWD_SPT_03"):
case joaat("RWD_SPT_04"):
case joaat("RWD_SPT_05"):
case joaat("RWD_SPT_06"):
case joaat("RWD_SPT_07"):
case joaat("RWD_SPT_08"):
case joaat("RWD_SPT_09"):
case joaat("RWD_SPT_10"):
case joaat("RWD_SPT_11"):
case joaat("RWD_SPT_12"):
case joaat("RWD_SPT_13"):
case joaat("RWD_SPT_14"):
case joaat("RWD_SPT_15"):
case joaat("RWD_SPT_16"):
case joaat("RWD_SPT_17"):
case joaat("RWD_SPT_18"):
case joaat("RWD_SPT_19"):
case joaat("RWD_SPT_20"):
case joaat("RWD_SPT_21"):
case joaat("RWD_SPT_22"):
case joaat("RWD_SPT_23"):
case joaat("RWD_SPT_24"):
case joaat("RWD_SPT_25"):
return func_336(134);
if(func_342(144, -1) >=func_341(144, 5, 0)){
return 1;
}else{
return 0;
}
break;
}
switch (iParam0){
case joaat("RWD_MUSC_01"):
case joaat("RWD_MUSC_02"):
case joaat("RWD_MUSC_03"):
case joaat("RWD_MUSC_04"):
case joaat("RWD_MUSC_05"):
case joaat("RWD_MUSC_06"):
case joaat("RWD_MUSC_07"):
case joaat("RWD_MUSC_08"):
case joaat("RWD_MUSC_09"):
case joaat("RWD_MUSC_10"):
case joaat("RWD_MUSC_11"):
case joaat("RWD_MUSC_12"):
case joaat("RWD_MUSC_13"):
case joaat("RWD_MUSC_14"):
case joaat("RWD_MUSC_15"):
case joaat("RWD_MUSC_16"):
case joaat("RWD_MUSC_17"):
case joaat("RWD_MUSC_18"):
case joaat("RWD_MUSC_19"):
case joaat("RWD_MUSC_20"):
if(func_342(144, -1) >=func_341(144, 5, 0)){
return 1;
}else{
return 0;
}
break;
}
switch (iParam0){
case joaat("RWD_LORIDE_01"):
case joaat("RWD_LORIDE_02"):
case joaat("RWD_LORIDE_03"):
case joaat("RWD_LORIDE_04"):
case joaat("RWD_LORIDE_05"):
case joaat("RWD_LORIDE_06"):
case joaat("RWD_LORIDE_07"):
case joaat("RWD_LORIDE_08"):
case joaat("RWD_LORIDE_09"):
case joaat("RWD_LORIDE_10"):
case joaat("RWD_LORIDE_11"):
case joaat("RWD_LORIDE_12"):
case joaat("RWD_LORIDE_13"):
case joaat("RWD_LORIDE_14"):
case joaat("RWD_LORIDE_15"):
return func_336(135);
break;
}
switch (iParam0){
case joaat("RWD_SUV_01"):
case joaat("RWD_SUV_02"):
case joaat("RWD_SUV_03"):
case joaat("RWD_SUV_04"):
case joaat("RWD_SUV_05"):
case joaat("RWD_SUV_06"):
case joaat("RWD_SUV_07"):
case joaat("RWD_SUV_08"):
case joaat("RWD_SUV_09"):
case joaat("RWD_SUV_10"):
case joaat("RWD_SUV_11"):
case joaat("RWD_SUV_12"):
case joaat("RWD_SUV_13"):
case joaat("RWD_SUV_14"):
case joaat("RWD_SUV_15"):
case joaat("RWD_SUV_16"):
case joaat("RWD_SUV_17"):
case joaat("RWD_SUV_18"):
case joaat("RWD_SUV_19"):
case joaat("RWD_SUV_20"):
if(func_342(143, -1) >=func_341(143, 5, 0)){
return 1;
}else{
return 0;
}
break;
}
switch (iParam0){
case joaat("RWD_OFFR_01"):
case joaat("RWD_OFFR_02"):
case joaat("RWD_OFFR_03"):
case joaat("RWD_OFFR_04"):
case joaat("RWD_OFFR_05"):
case joaat("RWD_OFFR_06"):
case joaat("RWD_OFFR_07"):
case joaat("RWD_OFFR_08"):
case joaat("RWD_OFFR_09"):
case joaat("RWD_OFFR_10"):
if(func_342(137, -1) >=func_341(137, 5, 0)){
return 1;
}else{
return 0;
}
break;
}
switch (iParam0){
case joaat("RWD_DRFT_01"):
case joaat("RWD_DRFT_02"):
case joaat("RWD_DRFT_03"):
case joaat("RWD_DRFT_04"):
case joaat("RWD_DRFT_05"):
case joaat("RWD_DRFT_06"):
case joaat("RWD_DRFT_07"):
case joaat("RWD_DRFT_08"):
case joaat("RWD_DRFT_09"):
case joaat("RWD_DRFT_10"):
case joaat("RWD_DRFT_11"):
case joaat("RWD_DRFT_12"):
case joaat("RWD_DRFT_13"):
case joaat("RWD_DRFT_14"):
case joaat("RWD_DRFT_15"):
case joaat("RWD_DRFT_16"):
case joaat("RWD_DRFT_17"):
case joaat("RWD_DRFT_18"):
case joaat("RWD_DRFT_19"):
case joaat("RWD_DRFT_20"):
case joaat("RWD_DRFT_21"):
case joaat("RWD_DRFT_22"):
case joaat("RWD_DRFT_23"):
case joaat("RWD_DRFT_24"):
return func_336(129);
break;
}
switch (iParam0){
case joaat("RWD_BIKEW_01"):
case joaat("RWD_BIKEW_02"):
case joaat("RWD_BIKEW_03"):
case joaat("RWD_BIKEW_04"):
case joaat("RWD_BIKEW_05"):
case joaat("RWD_BIKEW_06"):
case joaat("RWD_BIKEW_07"):
case joaat("RWD_BIKEW_08"):
case joaat("RWD_BIKEW_09"):
case joaat("RWD_BIKEW_10"):
case joaat("RWD_BIKEW_11"):
case joaat("RWD_BIKEW_12"):
case joaat("RWD_BIKEW_13"):
case joaat("RWD_BIKEW_14"):
case joaat("RWD_BIKEW_15"):
case joaat("RWD_BIKEW_16"):
case joaat("RWD_BIKEW_17"):
case joaat("RWD_BIKEW_18"):
case joaat("RWD_BIKEW_19"):
case joaat("RWD_BIKEW_20"):
case joaat("RWD_BIKEW_21"):
case joaat("RWD_BIKEW_22"):
case joaat("RWD_BIKEW_23"):
case joaat("RWD_BIKEW_24"):
case joaat("RWD_BIKEW_25"):
case joaat("RWD_BIKEW_26"):
case joaat("RWD_BIKEW_27"):
case joaat("RWD_BIKEW_28"):
case joaat("RWD_BIKEW_29"):
case joaat("RWD_BIKEW_30"):
case joaat("RWD_BIKEW_31"):
case joaat("RWD_BIKEW_32"):
case joaat("RWD_BIKEW_33"):
case joaat("RWD_BIKEW_34"):
case joaat("RWD_BIKEW_35"):
case joaat("RWD_BIKEW_36"):
return func_336(139);
break;
}
return 0;
}


var func__336(int iParam0){
var uVar0;
int iVar1;
uVar0=func_338(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_337(iVar1));
}

int func_337(int iParam0){
return (iParam0 % 32);
}

int func_338(var uParam0){
switch (func_339(uParam0)){
case 758:
return Global_1665596[func_87(-1)];
case 759:
return Global_1665602[func_87(-1)];
case 760:
return Global_1665608[func_87(-1)];
case 761:
return Global_1665614[func_87(-1)];
case 8735:
return Global_1665620[func_87(-1)];
default:
}
return 0;
}

int func_339(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_340(iVar0);
switch (iVar1){
case 0:
return 758;
break;
case 1:
return 759;
break;
case 2:
return 760;
break;
case 3:
return 761;
break;
case 4:
return 8735;
break;
}
return 14192;
}

int func_340(int iParam0){
return (iParam0 / 32);
}

int func_341(int iParam0, int iParam1, int iParam2){
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

int func_342(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2850194[iParam0 /*3*/][func_87(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__343(){
return MISC::IS_BIT_SET(Global_104164, 10);
}


var func__344(){
return MISC::IS_BIT_SET(Global_104164, 7);
}

int func_345(int iParam0, int iParam1){
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

int func_346(int iParam0, bool bParam1, int iParam2){
char cVar0[16];
int iVar1;
int iVar2;
iVar2=ENTITY::GET_ENTITY_MODEL(Global_1585919);
if(func_352(Global_1585919, iParam0) || iParam2){
if(bParam1){
StringCopy(&cVar0, VEHICLE::GET_MOD_SLOT_NAME(Global_1585919, iParam0), 16);
iVar1=MISC::GET_HASH_KEY(&cVar0);
switch (iVar1){
case -1142996965:
return 62;
case -786267131:
if(iVar2==joaat("growler") || iVar2==joaat("torero2")){
return 84;
}else{
return 63;
}
break;
case 2047401971:
return 23;
case -583254460:
return 24;
break;
case -1557868906:
return 51;
break;
case joaat("TOP_BODY"):
return 6;
break;
case joaat("TOP_BULL"):
return 7;
break;
case 444045983:
return 7;
break;
case joaat("TOP_CAGE"):
return 39;
break;
case -887059552:
return 11;
break;
case -38049987:
case 1778225044:
return 14;
break;
case -1378285605:
return 17;
break;
case 2084263172:
return 16;
break;
case joaat("TOP_BAGS"):
return 41;
break;
case -1811848757:
return 25;
break;
case joaat("TOP_MIR"):
return 32;
break;
case 1089414336:
return 65;
break;
case 324754559:
if((func_351(Global_1585920, Global_1585921) || Global_1585920==44) && func_350(Global_1585919)){
return 18;
}else{
return 8;
}
break;
case -364506077:
return 24;
break;
case joaat("TOP_MUDF"):
return 18;
break;
case -1328153013:
if(iVar2==joaat("barrage")){
return 23;
}elseif(iVar2==joaat("caracara2") || iVar2==joaat("zhaba")){
return 46;
}elseif(iVar2==joaat("youga3")){
return 82;
}else{
return 36;
break;
}
break;
case 1711851867:
if(iVar2==joaat("reever")){
return 46;
}else{
return 36;
}
break;
case joaat("TOP_OIL"):
if(iVar2==joaat("avarus")){
return 23;
}else{
return 36;
break;
}
break;
case 1021380400:
return 18;
break;
break;
case 1929454489:
if(iVar2==joaat("thrax")){
return 44;
}else{
return 36;
break;
}
break;
case joaat("TOP_LOUV"):
return 36;
break;
case -515734021:
return 95;
break;
case -847170429:
return 15;
break;
case joaat("TOP_DOORS"):
return 15;
break;
case -1319988377:
return 44;
break;
case joaat("TOP_STORAGEBOX"):
if(iVar2==joaat("manchez2")){
return 46;
}else{
return 35;
}
break;
case -633869763:
if((func_351(Global_1585920, Global_1585921) || Global_1585920==44) && func_350(Global_1585919)){
return 36;
break;
}elseif(iVar2==joaat("futo2")){
return 63;
}else{
return 8;
}
break;
case 1116843175:
if(((iVar2==joaat("previon") || iVar2==joaat("dominator7")) || iVar2==joaat("zr350")) || iVar2==joaat("buffalo4")){
return 23;
}else{
return 82;
}
break;
case -612083150:
return 36;
break;
case 681935561:
return 34;
break;
case 677414436:
return 35;
break;
case -2015951947:
return 19;
break;
case 627686920:
return 37;
break;
case -1393169939:
if(iVar2==joaat("granger2")){
return 44;
}
return 43;
break;
case -24975778:
return 45;
break;
case 371717010:
return 20;
break;
case -1242319852:
return 59;
break;
case -1595310795:
return 48;
break;
case 1621664729:
case joaat("TOP_TRUNK"):
return 52;
break;
case -1359192937:
return 93;
break;
case 420318180:
return 94;
break;
case 1030821149:
return 15;
break;
case -928664693:
case 136492537:
if(iVar2==joaat("formula") || iVar2==joaat("reever")){
return 23;
}else{
return 95;
}
break;
case joaat("TOP_PANN"):
if(iVar2==joaat("manchez2")){
return 40;
break;
}else{
return 80;
break;
}
break;
case joaat("TOP_ANTENNAR"):
return 40;
break;
case joaat("TOP_ANTENNA"):
return 46;
break;
case joaat("TOP_ARCHCOVER"):
if(iVar2==joaat("blazer4")){
return 40;
}elseif((iVar2==joaat("michelli") || iVar2==joaat("issi3")) || iVar2==joaat("s80")){
return 15;
}elseif(iVar2==joaat("cypher")){
return 79;
}elseif(iVar2==joaat("eudora")){
return 15;
}elseif(iVar2==joaat("r300")){
return 95;
}else{
return 44;
}
break;
case 740606462:
if(iVar2==joaat("blazer4")){
return 23;
}elseif(((iVar2==joaat("swinger") || iVar2==joaat("neo")) || iVar2==joaat("rrocket")) || iVar2==joaat("tailgater2")){
return 9;
}elseif((iVar2==joaat("futo2") || iVar2==joaat("rt3000")) || iVar2==joaat("postlude")){
return 84;
}elseif(iVar2==joaat("sentinel4")){
return 83;
}elseif(iVar2==joaat("previon")){
return 79;
}elseif(iVar2==joaat("remus")){
return 63;
}elseif(iVar2==joaat("kanjosj")){
return 77;
}else{
return 44;
}
break;
case joaat("TOP_ENGINE"):
if((iVar2==joaat("infernus2") || iVar2==joaat("turismo2")) || iVar2==joaat("cheetah2")){
return 15;
}elseif((iVar2==joaat("xa21") || iVar2==joaat("veto")) || iVar2==joaat("veto2")){
return 46;
}elseif((iVar2==joaat("impaler2") || iVar2==joaat("impaler3")) || iVar2==joaat("impaler4")){
return 95;
}else{
return 9;
}
break;
case joaat("TOP_SHIELD"):
return 8;
break;
case joaat("TOP_GRIP"):
return 9;
break;
case joaat("TOP_MUD"):
if(iVar2==joaat("nebula") || iVar2==joaat("zhaba")){
return 44;
}elseif(iVar2==joaat("dominator7") || iVar2==joaat("tailgater2")){
return 79;
}elseif(iVar2==joaat("calico")){
return 82;
}else{
return 95;
}
break;
case -1898453461:
return 95;
break;
case -548296914:
return 9;
break;
case -367413683:
return 9;
break;
case 1606301347:
return 8;
break;
case 1504062927:
return 8;
break;
case 1036090795:
if(iVar2==joaat("xa21")){
return 95;
}elseif(iVar2==joaat("viseris")){
return 23;
}elseif(iVar2==joaat("kanjosj")){
}elseif(iVar2==joaat("r300")){
return 76;
}elseif(iVar2==joaat("sentinel4")){
return 77;
}else{
return 40;
}
break;
case 2112821116:
if(((iVar2==joaat("neo") || iVar2==joaat("vstr")) || iVar2==joaat("gauntlet5")) || iVar2==joaat("jester4")){
return 95;
}elseif((((((((((((((((iVar2==joaat("zr350") || iVar2==joaat("comet6")) || iVar2==joaat("warrener2")) || iVar2==joaat("remus")) || iVar2==joaat("vectre")) || iVar2==joaat("cypher")) || iVar2==joaat("previon")) || iVar2==joaat("dominator8")) || iVar2==joaat("euros")) || iVar2==joaat("growler")) || iVar2==joaat("dominator7")) || iVar2==joaat("calico")) || iVar2==joaat("tailgater2")) || iVar2==joaat("sultan3")) || iVar2==joaat("kanjosj")) || iVar2==joaat("tenf2")) || iVar2==joaat("sentinel4")){
return 80;
}else{
return 23;
}
break;
case -1701477683:
if(iVar2==joaat("gauntlet5") || iVar2==joaat("youga3")){
return 76;
}elseif(((((((((((((iVar2==joaat("jester4") || iVar2==joaat("vectre")) || iVar2==joaat("zr350")) || iVar2==joaat("warrener2")) || iVar2==joaat("rt3000")) || iVar2==joaat("previon")) || iVar2==joaat("dominator8")) || iVar2==joaat("euros")) || iVar2==joaat("growler")) || iVar2==joaat("comet6")) || iVar2==joaat("corsita")) || iVar2==joaat("lm87")) || iVar2==joaat("postlude")) || iVar2==joaat("panthere")){
return 63;
}else{
return 23;
}
break;
case 240782238:
return 23;
case joaat("TOP_HL_CV"):
if((((((((((((((((((((((((((iVar2==joaat("comet4") || iVar2==joaat("jester3")) || iVar2==joaat("asbo")) || iVar2==joaat("gauntlet5")) || iVar2==joaat("club")) || iVar2==joaat("youga3")) || iVar2==joaat("manana2")) || iVar2==joaat("winky")) || iVar2==joaat("calico")) || iVar2==joaat("comet6")) || iVar2==joaat("warrener2")) || iVar2==joaat("remus")) || iVar2==joaat("sultan3")) || iVar2==joaat("rt3000")) || iVar2==joaat("vectre")) || iVar2==joaat("dominator8")) || iVar2==joaat("euros")) || iVar2==joaat("weevil2")) || iVar2==joaat("greenwood")) || iVar2==joaat("tenf2")) || iVar2==joaat("postlude")) || iVar2==joaat("picador")) || iVar2==joaat("brioso3")) || iVar2==joaat("sentinel4")) || iVar2==joaat("manchez3")) || iVar2==joaat("surfer3")) || iVar2==joaat("tulip2")){
return 14;
}else{
return 15;
}
break;
case -76109610:
return 81;
case 2125735303:
return 77;
case 1034757907:
return 83;
case joaat("TOP_SUNST"):
case -139298993:
if((((((((((iVar2==joaat("schlagen") || iVar2==joaat("issi7")) || iVar2==joaat("paragon")) || iVar2==joaat("paragon2")) || iVar2==joaat("imorgon")) || iVar2==joaat("yosemite2")) || iVar2==joaat("penumbra2")) || iVar2==joaat("brioso2")) || iVar2==joaat("baller7")) || iVar2==joaat("surfer3")) || iVar2==joaat("issi8")){
return 95;
}elseif(((iVar2==joaat("gauntlet5") || iVar2==joaat("club")) || iVar2==joaat("coquette4")) || iVar2==joaat("cinquemila")){
return 54;
}elseif(iVar2==joaat("yosemite3")){
return 68;
}elseif((((((((((((((((((((((((((((((iVar2==joaat("zr350") || iVar2==joaat("previon")) || iVar2==joaat("dominator7")) || iVar2==joaat("tailgater2")) || iVar2==joaat("warrener2")) || iVar2==joaat("comet6")) || iVar2==joaat("vectre")) || iVar2==joaat("remus")) || iVar2==joaat("jester4")) || iVar2==joaat("rt3000")) || iVar2==joaat("cypher")) || iVar2==joaat("dominator8")) || iVar2==joaat("futo2")) || iVar2==joaat("euros")) || iVar2==joaat("growler")) || iVar2==joaat("sultan3")) || iVar2==joaat("astron")) || iVar2==joaat("rhinehart")) || iVar2==joaat("corsita")) || iVar2==joaat("zentorno")) || iVar2==joaat("sentinel")) || iVar2==joaat("tenf2")) || iVar2==joaat("kanjosj")) || iVar2==joaat("weevil2")) || iVar2==joaat("postlude")) || iVar2==joaat("ruiner4")) || iVar2==joaat("picador")) || iVar2==joaat("sentinel4")) || iVar2==joaat("brioso3")) || iVar2==joaat("panthere")) || iVar2==joaat("virtue")){
return 45;
}elseif(iVar2==joaat("vigero2")){
}elseif(iVar2==joaat("eudora")){
return 9;
}else{
return 40;
}
break;
case joaat("TOP_SEC_LIGHT"):
case -378624469:
if((iVar2==joaat("patriot") || iVar2==joaat("winky")) || iVar2==joaat("granger2")){
return 40;
}elseif(iVar2==joaat("yosemite3")){
return 81;
}else{
return 95;
}
break;
case -394901172:
if(iVar2==joaat("warrener2") || iVar2==joaat("euros")){
return 81;
}else{
return 26;
}
break;
case joaat("TOP_WEAPONS"):
return 40;
break;
case -1815104796:
case 1061114913:
return 9;
break;
case joaat("TOP_RPNL"):
if(((VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("dominator3")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("freecrawler"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("gauntlet4"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("r300"))){
return 36;
break;
}else{
return 23;
}
break;
case joaat("TOP_DPLT"):
return 15;
break;
case joaat("TOP_HDLP"):
return 18;
break;
case joaat("TOP_RLP"):
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("dominator4"))){
return 66;
}else{
return 36;
break;
}
break;
case -1256307233:
if(iVar2==joaat("seminole2")){
return 46;
}else{
return 23;
}
break;
case -1066132610:
if((iVar2==joaat("jester4") || iVar2==joaat("tailgater2")) || iVar2==joaat("tenf2")){
return 63;
}
return 23;
break;
case joaat("TOP_WINP"):
if(iVar2==joaat("hellion")){
return 46;
}elseif(iVar2==joaat("gauntlet5")){
return 63;
}else{
return 9;
}
break;
case 1761027891:
return 46;
break;
case -1570793392:
return 80;
break;
case joaat("TOP_MINE"):
return 15;
break;
case joaat("TOP_SEAT"):
return 26;
break;
case 767048940:
case joaat("TOP_PWEAPON"):
if(((((((((((((((((((((((((((((((((iVar2==joaat("imperator") || iVar2==joaat("impaler2")) || iVar2==joaat("scarab")) || iVar2==joaat("slamvan4")) || iVar2==joaat("deathbike")) || iVar2==joaat("bruiser")) || iVar2==joaat("monster3")) || iVar2==joaat("dominator4")) || iVar2==joaat("issi4")) || iVar2==joaat("imperator2")) || iVar2==joaat("impaler3")) || iVar2==joaat("scarab2")) || iVar2==joaat("slamvan5")) || iVar2==joaat("deathbike2")) || iVar2==joaat("bruiser2")) || iVar2==joaat("monster4")) || iVar2==joaat("dominator5")) || iVar2==joaat("issi5")) || iVar2==joaat("imperator3")) || iVar2==joaat("impaler4")) || iVar2==joaat("scarab3")) || iVar2==joaat("slamvan6")) || iVar2==joaat("deathbike3")) || iVar2==joaat("bruiser3")) || iVar2==joaat("monster5")) || iVar2==joaat("dominator6")) || iVar2==joaat("issi6")) || iVar2==joaat("zr380")) || iVar2==joaat("zr3802")) || iVar2==joaat("zr3803")) || iVar2==joaat("brutus")) || iVar2==joaat("brutus2")) || iVar2==joaat("brutus3")) || func_301(iVar2)){
return 82;
}elseif(iVar2==joaat("yosemite3")){
return 84;
}else{
return 40;
}
break;
case joaat("TOP_COUNTERM"):
if(iVar2==joaat("oppressor2")){
return 23;
}else{
return 18;
break;
}
break;
case joaat("TOP_PBOMBS"):
return 15;
break;
case joaat("TOP_THRUST"):
case 210427144:
return 12;
break;
case joaat("TOP_SWEAPON"):
if((iVar2==joaat("barrage") || iVar2==joaat("mule4")) || iVar2==joaat("speedo4")){
return 46;
}elseif(iVar2==joaat("pounder2")){
return 8;
}elseif(((((((((((iVar2==joaat("imperator") || iVar2==joaat("cerberus")) || iVar2==joaat("zr380")) || iVar2==joaat("issi4")) || iVar2==joaat("imperator2")) || iVar2==joaat("cerberus2")) || iVar2==joaat("zr3802")) || iVar2==joaat("issi5")) || iVar2==joaat("imperator3")) || iVar2==joaat("cerberus3")) || iVar2==joaat("zr3803")) || iVar2==joaat("issi6")){
return 40;
}elseif(iVar2==joaat("jb7002")){
return 15;
}else{
return 9;
}
break;
case joaat("TOP_VISORS"):
case 926594805:
if(iVar2==joaat("swinger")){
return 44;
}elseif((iVar2==joaat("dynasty") || iVar2==joaat("youga3")) || iVar2==joaat("slamtruck")){
return 95;
}elseif(iVar2==joaat("yosemite3")){
return 68;
}elseif(iVar2==joaat("postlude") || iVar2==joaat("sentinel4")){
return 76;
}elseif(iVar2==joaat("broadway")){
return 9;
}else{
return 46;
}
break;
case -1752116744:
case -721496762:
if(iVar2==joaat("calico") || iVar2==joaat("comet6")){
return 79;
}else{
return 14;
}
break;
case 1721211011:
return 78;
break;
case 1332960557:
return 18;
break;
case -2121845261:
return 36;
break;
case 1066936971:
if(iVar2==joaat("comet6")){
return 83;
}else{
return 95;
}
break;
case 671246855:
return 9;
break;
case 324816886:
if(((((iVar2==joaat("youga3") || iVar2==joaat("comet6")) || iVar2==joaat("remus")) || iVar2==joaat("vectre")) || iVar2==joaat("sultan3")) || iVar2==joaat("tailgater2")){
return 81;
}elseif((iVar2==joaat("seminole2") || iVar2==joaat("growler")) || iVar2==joaat("broadway")){
return 40;
}elseif(iVar2==joaat("granger2")){
return 46;
}else{
return 9;
}
break;
case -325145171:
if(iVar2==joaat("weevil2")){
return 23;
}
return 80;
break;
case joaat("TOP_TAILFIN"):
return 9;
break;
case -593785970:
return 9;
break;
case 1823107432:
return 95;
break;
case -94310683:
return 9;
break;
case 84542568:
if(iVar2==joaat("warrener2") || iVar2==joaat("remus")){
return 82;
}
return 23;
break;
case -609392205:
if(iVar2==joaat("jester4")){
return 79;
}elseif((iVar2==joaat("cypher") || iVar2==joaat("kanjosj")) || iVar2==joaat("tenf2")){
return 81;
}elseif(iVar2==joaat("tenf") || iVar2==joaat("schwarzer")){
return 9;
}
return 40;
break;
case 1860205273:
if((iVar2==joaat("kanjosj") || iVar2==joaat("postlude")) || iVar2==joaat("sentinel4")){
return 78;
}
if(iVar2==joaat("r300")){
return 77;
}
break;
}}
if(iParam0==0){
return 46;
}elseif(iParam0==1){
if(iVar2==joaat("tampa3")){
return 18;
}else{
return 8;
}}elseif(iParam0==2){
if(func_349(Global_1585919)){
return 95;
}elseif((iVar2==joaat("tampa3") || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("dominator3"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("seminole2"))){
return 36;
}elseif(iVar2==joaat("manchez3")){
return 46;
}else{
return 8;
}}elseif(iParam0==3){
return 44;
}elseif(iParam0==4){
return 12;
}elseif(iParam0==5){
return 9;
}elseif(iParam0==6){
return 23;
}elseif(iParam0==7){
return 26;
}elseif(iParam0==8){
if(iVar2==joaat("xa21") || func_348(Global_1585919)){
return 95;
}
if(func_347(Global_1585919) || iVar2==joaat("rcbandito")){
return 95;
}else{
return 15;
}}elseif(iParam0==9){
if(((((iVar2==joaat("cheetah2") || iVar2==joaat("z190")) || iVar2==joaat("comet4")) || iVar2==joaat("pounder2")) || iVar2==joaat("dynasty")) || iVar2==joaat("gauntlet3")){
return 95;
}elseif(iVar2==joaat("schwarzer")){
return 9;
}elseif(iVar2==joaat("panthere")){
return 69;
}else{
return 15;
}}elseif(iParam0==10){
return 40;
}elseif(iParam0==11){
return 10;
}elseif(iParam0==12){
return 5;
}elseif(iParam0==13){
return 50;
}elseif(iParam0==14){
return 27;
}elseif(iParam0==15){
return 47;
}elseif(iParam0==16){
return 4;
}elseif(iParam0==18){
return 53;
}elseif(iParam0==20){
return 58;
}elseif(iParam0==22){
return 28;
}elseif(iParam0==23){
return 56;
}elseif(iParam0==24){
return 56;
}elseif(iParam0==25){
return 62;
}elseif(iParam0==26){
return 63;
}elseif(iParam0==27){
if(iVar2==joaat("kanjo")){
return 95;
}else{
return 91;
}}elseif(iParam0==28){
return 65;
}elseif(iParam0==29){
return 66;
}elseif(iParam0==30){
return 90;
}elseif(iParam0==31){
return 68;
}elseif(iParam0==32){
return 69;
}elseif(iParam0==33){
return 70;
}elseif(iParam0==34){
return 71;
}elseif(iParam0==35){
return 72;
}elseif(iParam0==36){
return 73;
}elseif(iParam0==37){
return 74;
}elseif(iParam0==38){
return 75;
}elseif(iParam0==39){
return 76;
}elseif(iParam0==40){
return 77;
}elseif(iParam0==41){
return 78;
}elseif(iParam0==42){
return 79;
}elseif(iParam0==43){
return 80;
}elseif(iParam0==44){
return 81;
}elseif(iParam0==45){
return 82;
}elseif(iParam0==46){
return 83;
}elseif(iParam0==47){
return 84;
}elseif(iParam0==48){
return 85;
}}
return 2;
}

int func_347(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(((((((((((((((((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("avarus") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("chimera")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("defiler")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("esskey")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("nightblade")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("ratbike")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sanctus")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("manchez")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("vortex")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("wolfsbane")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("hakuchou2")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("fcr2")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("diablous2")){
return 1;
}}
return 0;
}

int func_348(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("zr380"):
case joaat("issi4"):
case joaat("slamvan4"):
case joaat("bruiser"):
case joaat("brutus"):
case joaat("zr3802"):
case joaat("zr3803"):
case joaat("issi5"):
case joaat("slamvan5"):
case joaat("bruiser2"):
case joaat("brutus2"):
case joaat("issi6"):
case joaat("slamvan6"):
case joaat("bruiser3"):
case joaat("brutus3"):
case joaat("omnisegt"):
case joaat("virtue"):
return 1;
break;
}
return 0;
}

int func_349(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((((((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("ratbike") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("zombiea")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("daemon2")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("zombieb")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("faggio3")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("wolfsbane")){
return 1;
}}
return 0;
}

int func_350(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("nero2") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("elegy")){
return 1;
}}
return 0;
}

int func_351(int iParam0, int iParam1){
if(iParam0==45){
switch (iParam1){
case 6:
case 7:
case 8:
case 9:
return 1;
}
default:
}
return 0;
}

int func_352(int iParam0, int iParam1){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0)){
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
switch (iParam1){
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
return 1;
break;
default:
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0){
return 1;
}
break;
}}}
return 0;
}

int func_353(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(func_355(iVar0)){
if(iParam1==16){
return 1;
}}
switch (iVar0){
case joaat("insurgent3"):
switch (iParam1){
case 16:
return 1;
break;
case 5:
if(iParam2==0){
return 1;
}
break;
case 48:
if(iParam2==0 || iParam2 >=21){
return 1;
}
break;
}
if(bParam3){
return 1;
}
break;
case joaat("technical3"):
switch (iParam1){
case 5:
if(iParam2==0){
return 1;
}
break;
case 48:
if(iParam2==0 || iParam2 >=21){
return 1;
}
break;
}
if(bParam3){
return 1;
}
break;
case joaat("vagner"):
switch (iParam1){
case 0:
if(iParam2==0){
return 1;
}
break;
}
break;
case joaat("starling"):
switch (iParam1){
case 13:
return 1;
break;
}
break;
case joaat("omnis"):
switch (iParam1){
case 48:
if(func_327()){
return 1;
}
break;
}
break;
case joaat("apc"):
case joaat("halftrack"):
case joaat("nightshark"):
case joaat("riot2"):
case joaat("thruster"):
case joaat("khanjali"):
switch (iParam1){
case 48:
if(iParam2 >=21){
return 1;
}
break;
}
if(bParam3){
return 1;
}
break;
case joaat("molotok"):
case joaat("streiter"):
case joaat("comet4"):
case joaat("chernobog"):
case joaat("barrage"):
case joaat("avenger"):
case joaat("trailersmall2"):
case joaat("tampa3"):
case joaat("oppressor"):
case joaat("dune3"):
case joaat("ardent"):
case joaat("akula"):
case joaat("trailerlarge"):
case joaat("speedo4"):
case joaat("patriot"):
case joaat("patriot2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("oppressor2"):
case joaat("menacer"):
case joaat("revolter"):
switch (iParam1){
case 48:
if(iParam2 >=21){
return 1;
}
break;
}
break;
case joaat("swinger"):
switch (iParam1){
case 48:
if(iParam2 >=9){
return 1;
}
break;
}
break;
case joaat("stafford"):
switch (iParam1){
case 48:
if(iParam2==7){
return 1;
}
break;
}
break;
case joaat("clique"):
switch (iParam1){
case 48:
if(iParam2==10){
return 1;
}
break;
}
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
switch (iParam1){
case 42:
if(iParam2==3){
return 1;
}
break;
case 48:
if(iParam2==0){
return 1;
}
break;
}
if(bParam3){
return 1;
}
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
switch (iParam1){
case 42:
if(iParam2==3){
return 1;
}
break;
case 48:
if(iParam2==0){
return 1;
}
break;
}
break;
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
switch (iParam1){
case 42:
if(iParam2==3){
return 1;
}
break;
case 48:
if(iParam2==0){
return 1;
}
break;
}
break;
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
switch (iParam1){
case 42:
case 48:
if(iParam2==0){
return 1;
}
break;
}
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
switch (iParam1){
case 43:
case 48:
if(iParam2==0){
return 1;
}
break;
}
if(bParam3){
return 1;
}
break;
case joaat("dukes2"):
case joaat("veto"):
case joaat("veto2"):
if(bParam3){
return 1;
}
break;
case joaat("paragon2"):
switch (iParam1){
case 16:
return 1;
break;
}
if(bParam3){
return 1;
}
break;
case joaat("alkonost"):
switch (iParam1){
case 9:
if(iParam2==3){
return 1;
}
break;
}
break;
default:
break;
}
if(iParam1==48){
if(func_354(iParam0, MISC::GET_HASH_KEY(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iParam1, iParam2)), 85, iParam2)){
return 1;
}}
return 0;
}

int func_354(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iParam2){
case 85:
switch (iParam1){
case 577477981:
case 749122003:
case 1222502977:
case -617246990:
case -387700145:
case -81735992:
case 90628948:
case -1608542009:
case -1309590422:
case -801604532:
switch (iVar0){
case joaat("thruster"):
case joaat("molotok"):
case joaat("khanjali"):
case joaat("streiter"):
case joaat("riot2"):
case joaat("comet4"):
case joaat("chernobog"):
case joaat("barrage"):
case joaat("avenger"):
case joaat("trailersmall2"):
case joaat("technical3"):
case joaat("tampa3"):
case joaat("oppressor"):
case joaat("nightshark"):
case joaat("insurgent3"):
case joaat("halftrack"):
case joaat("dune3"):
case joaat("ardent"):
case joaat("apc"):
case joaat("akula"):
case joaat("trailerlarge"):
return 1;
break;
}
break;
case -83343524:
case 54941648:
case -586740910:
case 533434586:
case 293991503:
case 965854310:
case 877574624:
case 1579126157:
case 1222337273:
case -782235132:
switch (iVar0){
case joaat("thruster"):
case joaat("molotok"):
case joaat("khanjali"):
case joaat("streiter"):
case joaat("riot2"):
case joaat("comet4"):
case joaat("chernobog"):
case joaat("barrage"):
case joaat("avenger"):
case joaat("trailersmall2"):
case joaat("technical3"):
case joaat("tampa3"):
case joaat("oppressor"):
case joaat("nightshark"):
case joaat("insurgent3"):
case joaat("halftrack"):
case joaat("dune3"):
case joaat("ardent"):
case joaat("apc"):
case joaat("akula"):
case joaat("trailerlarge"):
case joaat("speedo4"):
case joaat("patriot"):
case joaat("patriot2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("oppressor2"):
case joaat("menacer"):
case joaat("revolter"):
return 1;
break;
}
break;
case 1249495339:
switch (iVar0){
case joaat("swinger"):
case joaat("stafford"):
return 1;
break;
}
break;
case 1555525030:
switch (iVar0){
case joaat("swinger"):
return 1;
break;
}
break;
case joaat("cliq_liv11"):
switch (iVar0){
case joaat("clique"):
return 1;
break;
}
break;
case -1474902239:
switch (iVar0){
case joaat("thrax"):
return 1;
break;
}
break;
case 2017168223:
switch (iVar0){
case joaat("paragon2"):
case joaat("paragon"):
return 1;
break;
}
break;
case -1846421212:
switch (iVar0){
case joaat("s80"):
return 1;
break;
}
break;
case -1960533885:
switch (iVar0){
case joaat("landstalker2"):
return 1;
break;
}
break;
case joaat("sem2_livery9"):
switch (iVar0){
case joaat("seminole2"):
return 1;
break;
}
break;
case joaat("rsx_livery11"):
switch (iVar0){
case joaat("italirsx"):
return 1;
break;
}
break;
case joaat("tord_liv11"):
switch (iVar0){
case joaat("toreador"):
return 1;
break;
}
break;
case joaat("WEEVIL_LIV13"):
switch (iVar0){
case joaat("weevil"):
return 1;
break;
}
break;
case -1555506789:
case -1332808665:
case 2126319748:
case -1521918572:
case -1289946821:
switch (iVar0){
case joaat("banshee"):
return 1;
break;
}
break;
case 1390307858:
case 1214240021:
case -216651133:
case -454914532:
case 261153656:
switch (iVar0){
case joaat("kuruma"):
return 1;
break;
}
break;
case -1586507921:
switch (iVar0){
case joaat("hotring"):
return 1;
break;
}
break;
case -455802500:
switch (iVar0){
case joaat("kanjo"):
return 1;
break;
}
break;
case 1321427924:
switch (iVar0){
case joaat("hermes"):
return 1;
break;
}
break;
case 1911869336:
switch (iVar0){
case joaat("toreador"):
return 1;
break;
}
break;
case -1009460454:
case -703365225:
case 866433728:
case 99540821:
case 254407115:
switch (iVar0){
case joaat("comet6"):
return 1;
break;
}
break;
case joaat("cyph_livery11"):
case joaat("cyph_livery12"):
case joaat("cyph_livery13"):
case joaat("cyph_livery14"):
case joaat("cyph_livery15"):
switch (iVar0){
case joaat("cypher"):
return 1;
break;
}
break;
case joaat("dom7_livery11"):
case joaat("dom7_livery12"):
case joaat("dom7_livery13"):
case joaat("dom7_livery14"):
case joaat("dom7_livery15"):
switch (iVar0){
case joaat("dominator7"):
return 1;
break;
}
break;
case joaat("vtc_liv11"):
case joaat("vtc_liv12"):
case joaat("vtc_liv13"):
case joaat("vtc_liv14"):
case joaat("vtc_liv15"):
switch (iVar0){
case joaat("vectre"):
return 1;
break;
}
break;
case joaat("growler_liv11"):
case joaat("growler_liv12"):
case joaat("growler_liv13"):
case joaat("growler_liv14"):
case joaat("growler_liv15"):
switch (iVar0){
case joaat("growler"):
return 1;
break;
}
break;
case joaat("prev_liv11"):
case joaat("prev_liv12"):
case joaat("prev_liv13"):
case joaat("prev_liv14"):
case joaat("prev_liv15"):
switch (iVar0){
case joaat("previon"):
return 1;
break;
}
break;
case joaat("sultan3_liv11"):
case joaat("sultan3_liv12"):
case joaat("sultan3_liv13"):
case joaat("sultan3_liv14"):
case joaat("sultan3_liv15"):
switch (iVar0){
case joaat("sultan3"):
return 1;
break;
}
break;
case -2082088836:
case -70301615:
case -1663639595:
case 2113880575:
if(func_310()){
return 1;
}
break;
case 1734393781:
case joaat("deity_livery12"):
case 829510980:
return 1;
break;
case 1997494044:
case -302934347:
case -1742687912:
case -704951532:
case -61098194:
case -1142858784:
case -1509143254:
case -782324795:
case 410035738:
case -628177972:
case -697115680:
case 79467689:
case -1236614045:
case 1359328429:
case 1509413193:
case 1929149600:
case 1103929411:
case -779567620:
case 49459550:
case -137585902:
case -71803846:
case 819514021:
case -1594565792:
case 1809857405:
case 536627832:
case -1486021920:
case 1875050784:
case 832806325:
case -1986706248:
case 1127615859:
case -188005150:
case 1037839754:
case 1908480299:
if(Global_262145.f_32572){
return 1;
}
break;
case -595936762:
case -1395498327:
case 336960868:
case 280244246:
case 1967609307:
case 591086547:
case 620848813:
case -850492530:
case -2022095717:
case 199240637:
case -1189691853:
if(Global_262145.f_32573){
return 1;
}
break;
case -1674766432:
if(iVar0==joaat("corsita")){
return 1;
}
break;
case 1777042989:
if(iVar0==joaat("vigero2")){
return 1;
}
break;
case 99909161:
if(iVar0==joaat("brickade2")){
return 1;
}
break;
case 1626138123:
if(iVar0==joaat("entity3")){
return 1;
}
break;
case -1695250561:
if(iVar0==joaat("r300")){
return 1;
}
break;
case -394685616:
if(iVar0==joaat("broadway")){
return 1;
}
break;
case 1237073796:
case 940678191:
if(iVar0==joaat("virtue")){
return 1;
}
break;
case -1573446395:
case -153439201:
if(iVar0==joaat("boor")){
return 1;
}
break;
}
break;
case 38:
switch (iParam1){
case 2090658975:
if(iVar0==joaat("stunt") && iParam3==2){
if(Global_262145.f_32572){
return 1;
}}
break;
case -309276274:
case -931586380:
if(Global_262145.f_32572){
return 1;
}
break;
}
break;
case 46:
switch (iParam1){
case 591086547:
if(Global_262145.f_32573){
return 1;
}
break;
}
break;
}
return 0;
}

int func_355(int iParam0){
switch (iParam0){
case joaat("pounder2"):
case joaat("mule4"):
case joaat("speedo4"):
case joaat("imperator"):
case joaat("deathbike"):
case joaat("cerberus"):
case joaat("bruiser"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("issi4"):
case joaat("imperator2"):
case joaat("deathbike2"):
case joaat("cerberus2"):
case joaat("bruiser2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("issi5"):
case joaat("imperator3"):
case joaat("deathbike3"):
case joaat("cerberus3"):
case joaat("bruiser3"):
case joaat("dominator6"):
case joaat("zr3803"):
case joaat("issi6"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
return 1;
break;
}
return 0;
}


void func_356(var uParam0, var uParam1, var uParam2){
Global_1585919=uParam0;
Global_1585920=uParam1;
Global_1585921=uParam2;
}

int func_357(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, int iParam5){
int iVar0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=func_360(iParam0, iParam1, iParam2, sParam3, bParam4, iParam5);
if((func_359() && !bParam4) && iVar0 > 0){
iVar0=ceil((IntToFloat(iVar0) * Global_262145.f_30991));
}
return iVar0;
}
return func_358(iParam0, iParam1, iParam2);
}

int func_358(int iParam0, int iParam1, int iParam2){
int iVar0;
switch (iParam0){
case 4:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 500;
break;
case 2:
return 1250;
break;
case 3:
return 2000;
break;
case 4:
return 3500;
break;
case 5:
return 5000;
break;
}
break;
case 5:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 2000;
break;
case 2:
return 2700;
break;
case 3:
return 3500;
break;
case 4:
return 5000;
break;
}
break;
case 7:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 5000;
break;
case 2:
return 6000;
break;
case 3:
return 7000;
break;
case 4:
return 8000;
break;
case 5:
return 9000;
break;
case 6:
return 1000;
break;
case 7:
return 1100;
break;
case 8:
return 1200;
break;
case 9:
return 1300;
break;
case 10:
return 1400;
break;
case 11:
return 1500;
break;
}
break;
case 39:
switch (iParam1){
case 0:
return 50;
break;
case 1:
return 3500;
break;
case 2:
return 3975;
break;
case 3:
return 4250;
break;
case 4:
return 5000;
break;
case 5:
return 5500;
break;
case 6:
return 5975;
break;
case 7:
return 6750;
break;
case 8:
return 7000;
break;
}
break;
case 13:
switch (iParam1){
case 0:
return 500;
break;
case 1:
return 500;
break;
}
break;
case 26:
if((Global_1585918==3 || Global_1585918==27) || Global_1585918==26){
switch (iParam1){
case 0:
return 800;
break;
case 1:
return 1500;
break;
case 2:
return 2500;
break;
case 3:
return 4000;
break;
case 4:
return 4800;
break;
case 5:
return 5500;
break;
case 6:
return 5800;
break;
case 7:
return 6000;
break;
case 8:
return 6200;
break;
case 9:
return 6200;
break;
case 10:
return 6250;
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return 450;
break;
case 1:
return 850;
break;
case 2:
return 1200;
break;
case 3:
return 1450;
break;
case 4:
return 2225;
break;
case 5:
return 2500;
break;
case 6:
return 2800;
break;
case 7:
return 3000;
break;
case 8:
return 3250;
break;
case 9:
return 3500;
break;
case 10:
return 3600;
break;
}}elseif(Global_1585918==0 || Global_1585918==28){
switch (iParam1){
case 0:
return 150;
break;
case 1:
return 325;
break;
case 2:
return 750;
break;
case 3:
return 875;
break;
case 4:
return 1000;
break;
case 5:
return 1200;
break;
case 6:
return 1450;
break;
case 7:
return 2225;
break;
case 8:
return 2500;
break;
case 9:
return 2800;
break;
case 10:
return 3000;
break;
}}else{
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 200;
break;
case 2:
return 350;
break;
case 3:
return 449;
break;
case 4:
return 625;
break;
case 5:
return 875;
break;
case 6:
return 1000;
break;
case 7:
return 1200;
break;
case 8:
return 1450;
break;
case 9:
return 2225;
break;
case 10:
return 2500;
break;
}}
break;
case 8:
if((Global_1585918==3 || Global_1585918==27) || Global_1585918==26){
switch (iParam1){
case 0:
return 1100;
break;
case 1:
return 2300;
break;
case 2:
return 3700;
break;
case 3:
return 5850;
break;
case 4:
return 7250;
break;
case 5:
return 7350;
break;
case 6:
return 7450;
break;
case 7:
return 7550;
break;
case 8:
return 7650;
break;
case 20:
return 1100;
break;
case 21:
return 2300;
break;
case 22:
return 3700;
break;
case 23:
return 5850;
break;
case 24:
return 7250;
break;
case 25:
return 7350;
break;
case 26:
return 7450;
break;
case 27:
return 7550;
break;
case 28:
return 7650;
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return 750;
break;
case 1:
return 1250;
break;
case 2:
return 1650;
break;
case 3:
return 1950;
break;
case 4:
return 2350;
break;
case 5:
return 2450;
break;
case 6:
return 2550;
break;
case 7:
return 2650;
break;
case 8:
return 2750;
break;
case 20:
return 750;
break;
case 21:
return 1250;
break;
case 22:
return 1650;
break;
case 23:
return 1950;
break;
case 24:
return 2350;
break;
case 25:
return 2450;
break;
case 26:
return 2550;
break;
case 27:
return 2650;
break;
case 28:
return 2750;
break;
}}elseif(Global_1585918==0 || Global_1585918==28){
switch (iParam1){
case 0:
return 250;
break;
case 1:
return 500;
break;
case 2:
return 750;
break;
case 3:
return 1000;
break;
case 4:
return 1300;
break;
case 5:
return 1400;
break;
case 6:
return 1500;
break;
case 7:
return 1600;
break;
case 8:
return 1700;
break;
case 20:
return 250;
break;
case 21:
return 500;
break;
case 22:
return 750;
break;
case 23:
return 1000;
break;
case 24:
return 1300;
break;
case 25:
return 1400;
break;
case 26:
return 1500;
break;
case 27:
return 1600;
break;
case 28:
return 1700;
break;
}}else{
switch (iParam1){
case 0:
return 149;
break;
case 1:
return 195;
break;
case 2:
return 250;
break;
case 3:
return 375;
break;
case 4:
return 500;
break;
case 5:
return 600;
break;
case 6:
return 700;
break;
case 7:
return 800;
break;
case 8:
return 900;
break;
case 20:
return 149;
break;
case 21:
return 195;
break;
case 22:
return 250;
break;
case 23:
return 375;
break;
case 24:
return 500;
break;
case 25:
return 600;
break;
case 26:
return 700;
break;
case 27:
return 800;
break;
case 28:
return 900;
break;
}}
break;
case 9:
switch (iParam1){
case 0:
return 350;
break;
case 1:
return 550;
break;
case 2:
return 675;
break;
case 3:
return 750;
break;
case 4:
return 1375;
break;
case 5:
return 2300;
break;
case 6:
return 2450;
break;
case 7:
return 2900;
break;
case 8:
return 3500;
break;
case 9:
return 4000;
break;
}
break;
case 10:
switch (iParam1){
case 0:
return 500;
break;
case 1:
return 900;
break;
case 2:
return 1250;
break;
case 3:
return 1800;
break;
case 4:
return 3350;
break;
}
break;
case 12:
switch (iParam1){
case 0:
return 130;
break;
case 1:
return 375;
break;
case 2:
return 899;
break;
case 3:
return 1499;
break;
case 4:
return 4770;
break;
case 5:
return 4870;
break;
}
break;
case 50:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 2950;
break;
case 2:
return 3250;
break;
case 3:
return 4000;
break;
}
break;
case 23:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 375;
break;
case 2:
return 670;
break;
case 3:
return 825;
break;
case 4:
return 1500;
break;
case 5:
return 1600;
break;
}
break;
case 27:
iVar0=iParam1;
switch (iVar0){
case 0:
return 50;
break;
case 1:
return 1500;
break;
case 2:
return 1500;
break;
case 3:
return 1500;
break;
case 4:
return 1500;
break;
case 5:
return 1500;
break;
case 6:
return 1500;
break;
case 7:
return 1500;
break;
case 8:
return 1500;
break;
case 9:
return 1500;
break;
case 10:
return 1500;
break;
case 11:
return 1500;
break;
case 12:
return 1500;
break;
case 13:
return 1500;
break;
case 14:
return 1500;
break;
case 15:
return 1500;
break;
case 16:
return 1500;
break;
case 17:
return 600;
break;
case 18:
return 700;
break;
case 19:
return 800;
break;
case 20:
return 1000;
break;
case 21:
return 1200;
break;
case 22:
return 1300;
break;
case 23:
return 1400;
break;
case 24:
return 1700;
break;
case 25:
return 2000;
break;
case 26:
return 2200;
break;
case 44:
return 60;
break;
case 45:
return 75;
break;
case 46:
return 150;
break;
case 47:
return 255;
break;
case 48:
return 300;
break;
case 49:
return 325;
break;
case 50:
return 375;
break;
case 51:
return 500;
break;
case 52:
return 600;
break;
}
break;
case 29:
if((Global_1585918==3 || Global_1585918==27) || Global_1585918==26){
switch (iParam1){
case 0:
return 300;
break;
case 1:
return 1450;
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return 200;
break;
case 1:
return 1000;
break;
}}elseif(Global_1585918==0 || Global_1585918==28){
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 300;
break;
}}else{
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 100;
break;
}}
break;
case 30:
if(iParam2==0){
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 1000;
break;
case 2:
return 1000;
break;
case 3:
return 1250;
break;
case 4:
return 1800;
break;
case 5:
return 2000;
break;
case 6:
return 2000;
break;
case 7:
return 3000;
break;
}}elseif(iParam2==1){
switch (iParam1){
case 0:
return 650;
break;
case 1:
return 650;
break;
case 2:
return 650;
break;
case 3:
return 650;
break;
case 4:
return 650;
break;
case 5:
return 650;
break;
case 6:
return 650;
break;
case 7:
return 650;
break;
case 8:
return 650;
break;
case 9:
return 650;
break;
case 10:
return 650;
break;
case 11:
return 650;
break;
case 12:
return 650;
break;
}}
break;
case 33:
switch (iParam1){
case 0:
return 50;
break;
case 1:
return 50;
break;
case 2:
return 50;
break;
case 3:
return 75;
break;
case 4:
return 150;
break;
case 10:
return 600;
break;
default:
return 600;
break;
}
break;
case 40:
if(ENTITY::GET_ENTITY_MODEL(Global_1585919)==joaat("dukes")){
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 350;
break;
default:
return 2500;
break;
}}else{
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 350;
break;
case 2:
return 575;
break;
case 3:
return 800;
break;
case 4:
return 975;
break;
case 5:
return 1200;
break;
default:
return 1500;
break;
}}
break;
case 44:
if((Global_1585918==3 || Global_1585918==27) || Global_1585918==26){
switch (iParam1){
case 0:
return 1250;
break;
case 1:
return 2750;
break;
case 2:
return 4000;
break;
case 3:
return 5250;
break;
case 4:
return 7000;
break;
case 5:
return 7350;
break;
case 6:
return 7600;
break;
case 7:
return 7900;
break;
case 8:
return 8300;
break;
case 9:
return 8500;
break;
case 10:
return 9000;
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return 1250;
break;
case 1:
return 1500;
break;
case 2:
return 2000;
break;
case 3:
return 2750;
break;
case 4:
return 3900;
break;
}}elseif(Global_1585918==0 || Global_1585918==28){
switch (iParam1){
case 0:
return 300;
break;
case 1:
return 415;
break;
case 2:
return 500;
break;
case 3:
return 750;
break;
case 4:
return 1000;
break;
}}else{
switch (iParam1){
case 0:
return 300;
break;
case 1:
return 415;
break;
case 2:
return 500;
break;
case 3:
return 750;
break;
case 4:
return 1000;
break;
case 5:
return 1250;
break;
}}
break;
case 46:
if((Global_1585918==3 || Global_1585918==27) || Global_1585918==26){
switch (iParam1){
case 0:
return 3000;
break;
case 1:
return 3750;
break;
case 2:
return 5000;
break;
case 3:
return 6500;
break;
case 4:
return 7000;
break;
case 5:
return 8000;
break;
case 6:
return 8500;
break;
case 7:
return 9000;
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return 500;
break;
case 1:
return 750;
break;
case 2:
return 950;
break;
case 3:
return 1300;
break;
case 4:
return 1750;
break;
case 5:
return 2000;
break;
case 6:
return 2500;
break;
case 7:
return 3000;
break;
}}elseif(Global_1585918==0 || Global_1585918==28){
switch (iParam1){
case 0:
return 150;
break;
case 1:
return 275;
break;
case 2:
return 350;
break;
case 3:
return 525;
break;
case 4:
return 750;
break;
case 5:
return 1000;
break;
case 6:
return 1250;
break;
case 7:
return 1500;
break;
}}else{
switch (iParam1){
case 0:
return 150;
break;
case 1:
return 275;
break;
case 2:
return 350;
break;
case 3:
return 525;
break;
case 4:
return 750;
break;
case 5:
return 1000;
break;
case 6:
return 1250;
break;
case 7:
return 1500;
break;
}}
break;
case 47:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 500;
break;
case 2:
return 1000;
break;
case 3:
return 1700;
break;
case 4:
return 2200;
break;
case 5:
return 2300;
break;
}
break;
case 53:
switch (iParam1){
case 0:
return 500;
break;
case 1:
return 2500;
break;
}
break;
case 58:
switch (iParam1){
case 2:
return 4000;
break;
case 10:
return 100;
break;
case 11:
return 2500;
break;
case 12:
return 2500;
break;
case 13:
return 2500;
break;
case 14:
return 2500;
break;
case 15:
return 2500;
break;
case 16:
return 2500;
break;
case 17:
return 2500;
break;
case 18:
return 2500;
break;
case 19:
return 2500;
break;
case 29:
return 1000;
break;
case 30:
return 1250;
break;
case 31:
return 1500;
break;
case 32:
return 1750;
break;
case 33:
return 1900;
break;
case 34:
return 2000;
break;
case 35:
return 2150;
break;
case 36:
return 2250;
break;
case 37:
return 2500;
break;
case 38:
return 2500;
break;
case 39:
return 2500;
break;
}
break;
case 56:
switch (iParam1){
case 0:
return 1500;
break;
case 1:
return 800;
break;
}
break;
case 57:
switch (iParam1){
case 0:
return 1500;
break;
case 1:
return 800;
break;
}
break;
case 60:
switch (iParam1){
case 0:
return 100;
break;
case 1:
return 200;
break;
case 2:
return 450;
break;
case 3:
return 700;
break;
case 4:
return 900;
break;
case 5:
return 900;
break;
}
break;
case 15:
switch (iParam1){
case 0:
return 150;
break;
case 1:
return 450;
break;
case 2:
return 750;
break;
case 3:
return 850;
break;
case 4:
return 950;
break;
case 5:
return 1000;
break;
case 6:
return 1050;
break;
case 7:
return 1100;
break;
case 8:
return 1150;
break;
case 9:
return 1200;
break;
case 10:
return 150;
break;
case 11:
return 450;
break;
case 12:
return 750;
break;
case 13:
return 850;
break;
case 14:
return 950;
break;
case 15:
return 1000;
break;
case 16:
return 1050;
break;
case 17:
return 1100;
break;
case 18:
return 1150;
break;
case 19:
return 1200;
break;
}
break;
}
return 350;
}

int func_359(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(PLAYER::PLAYER_ID()==func_49()){
return 0;
}
if(!func_251(PLAYER::PLAYER_ID())){
return 0;
}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 !=PLAYER::PLAYER_ID()){
return 0;
}
return 1;
}

int func_360(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, var uParam5){
float fVar0;
int iVar1;
int iVar2;
fVar0=1f;
if(bParam4){
fVar0=Global_262145.f_26654;
}
if((func_345(Global_1585920, Global_1585921) || func_344()) || func_343()){
return 0;
}
iVar1=ENTITY::GET_ENTITY_MODEL(Global_1585919);
switch (iParam0){
case 4:
if((((((((((((((((Global_1585918==3 || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==27) || Global_1585918==26) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_404(iParam1)));
break;
case 1:
return floor((to_float(7500) * func_404(iParam1)));
break;
case 2:
return floor((to_float(12000) * func_404(iParam1)));
break;
case 3:
return floor((to_float(20000) * func_404(iParam1)));
break;
case 4:
return floor((to_float(35000) * func_404(iParam1)));
break;
case 5:
return floor((to_float(50000) * func_404(iParam1)));
break;
}}elseif(Global_1585918==1){
switch (iParam1){
case 0:
return floor((to_float(650) * func_404(iParam1)));
break;
case 1:
return floor((to_float(6375) * func_404(iParam1)));
break;
case 2:
return floor((to_float(10625) * func_404(iParam1)));
break;
case 3:
return floor((to_float(17000) * func_404(iParam1)));
break;
case 4:
return floor((to_float(29750) * func_404(iParam1)));
break;
case 5:
return floor((to_float(42500) * func_404(iParam1)));
break;
}}elseif(Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(500) * func_404(iParam1)));
break;
case 1:
return floor((to_float(5250) * func_404(iParam1)));
break;
case 2:
return floor((to_float(8750) * func_404(iParam1)));
break;
case 3:
return floor((to_float(14000) * func_404(iParam1)));
break;
case 4:
return floor((to_float(24500) * func_404(iParam1)));
break;
case 5:
return floor((to_float(35000) * func_404(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(200) * func_404(iParam1)));
break;
case 1:
return floor((to_float(4500) * func_404(iParam1)));
break;
case 2:
return floor((to_float(7500) * func_404(iParam1)));
break;
case 3:
return floor((to_float(12000) * func_404(iParam1)));
break;
case 4:
return floor((to_float(21000) * func_404(iParam1)));
break;
case 5:
return floor((to_float(30000) * func_404(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_404(iParam1)));
break;
case 1:
return floor((to_float(3600) * func_404(iParam1)));
break;
case 2:
return floor((to_float(6000) * func_404(iParam1)));
break;
case 3:
return floor((to_float(9600) * func_404(iParam1)));
break;
case 4:
return floor((to_float(16800) * func_404(iParam1)));
break;
case 5:
return floor((to_float(24000) * func_404(iParam1)));
break;
}}
break;
case 5:
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_403(iParam1)));
break;
case 1:
return floor((to_float(20000) * func_403(iParam1)));
break;
case 2:
return floor((to_float(27000) * func_403(iParam1)));
break;
case 3:
return floor((to_float(35000) * func_403(iParam1)));
break;
case 4:
return floor((to_float(60000) * func_403(iParam1)));
break;
}}elseif(Global_1585918==1){
switch (iParam1){
case 0:
return floor((to_float(650) * func_403(iParam1)));
break;
case 1:
return floor((to_float(13000) * func_403(iParam1)));
break;
case 2:
return floor((to_float(17550) * func_403(iParam1)));
break;
case 3:
return floor((to_float(22750) * func_403(iParam1)));
break;
case 4:
return floor((to_float(60000) * func_403(iParam1)));
break;
}}elseif(Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(500) * func_403(iParam1)));
break;
case 1:
return floor((to_float(10000) * func_403(iParam1)));
break;
case 2:
return floor((to_float(13500) * func_403(iParam1)));
break;
case 3:
return floor((to_float(17500) * func_403(iParam1)));
break;
case 4:
return floor((to_float(60000) * func_403(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(200) * func_403(iParam1)));
break;
case 1:
return floor((to_float(4000) * func_403(iParam1)));
break;
case 2:
return floor((to_float(5400) * func_403(iParam1)));
break;
case 3:
return floor((to_float(7000) * func_403(iParam1)));
break;
case 4:
return floor((to_float(60000) * func_403(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(200) * func_403(iParam1)));
break;
case 1:
return floor((to_float(4000) * func_403(iParam1)));
break;
case 2:
return floor((to_float(5400) * func_403(iParam1)));
break;
case 3:
return floor((to_float(7000) * func_403(iParam1)));
break;
case 4:
return floor((to_float(60000) * func_403(iParam1)));
break;
}}
break;
case 7:
switch (iParam1){
case 0:
return floor((to_float(200) * func_402(iParam1)));
break;
case 1:
return floor((to_float(10000) * func_402(iParam1)));
break;
case 2:
return floor((to_float(12000) * func_402(iParam1)));
break;
case 3:
return floor((to_float(14000) * func_402(iParam1)));
break;
case 4:
return floor((to_float(16000) * func_402(iParam1)));
break;
case 5:
return floor((to_float(16500) * func_402(iParam1)));
break;
case 6:
return floor((to_float(16750) * func_402(iParam1)));
break;
case 7:
return floor((to_float(17000) * func_402(iParam1)));
break;
case 8:
return floor((to_float(17250) * func_402(iParam1)));
break;
case 9:
return floor((to_float(17500) * func_402(iParam1)));
break;
case 10:
return floor((to_float(17750) * func_402(iParam1)));
break;
case 11:
return floor((to_float(18000) * func_402(iParam1)));
break;
case 12:
return floor((to_float(18250) * func_402(iParam1)));
break;
case 13:
return floor((to_float(18500) * func_402(iParam1)));
break;
case 14:
return floor((to_float(18750) * func_402(iParam1)));
break;
case 15:
return floor((to_float(19000) * func_402(iParam1)));
break;
case 16:
return floor((to_float(19250) * func_402(iParam1)));
break;
}
break;
case 31:
if(func_359()){
return 0;
}else{
switch (iParam1){
case 0:
return floor((to_float(2000) * func_401()));
break;
case 1:
return 10000;
break;
}}
break;
case 39:
if(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26696) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26697) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26697) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26698) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26698) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26699) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26699) * func_323(iParam1, 0)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26700) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26700) * func_323(iParam1, 0)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(Global_262145.f_26701) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26701) * func_323(iParam1, 0)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(Global_262145.f_26702) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26702) * func_323(iParam1, 0)));
}
break;
case 7:
if(bParam4){
return floor(((to_float(Global_262145.f_26703) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26703) * func_323(iParam1, 0)));
}
break;
case 8:
if(bParam4){
return floor(((to_float(Global_262145.f_26704) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26704) * func_323(iParam1, 0)));
}
break;
case 9:
if(bParam4){
return floor(((to_float(Global_262145.f_26705) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26705) * func_323(iParam1, 0)));
}
break;
case 10:
if(bParam4){
return floor(((to_float(Global_262145.f_26706) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26706) * func_323(iParam1, 0)));
}
break;
}}else{
switch (iParam1){
case 0:
return floor((100f * fVar0));
break;
case 1:
return floor((7000f * fVar0));
break;
case 2:
return floor((7950f * fVar0));
break;
case 3:
return floor((8500f * fVar0));
break;
case 4:
return floor((10000f * fVar0));
break;
case 5:
return floor((11000f * fVar0));
break;
case 6:
return floor((11950f * fVar0));
break;
case 7:
return floor((13500f * fVar0));
break;
case 8:
return floor((14000f * fVar0));
break;
}}
break;
case 26:
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(1600) * func_400(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24130;
}
elseif(bParam4){
return floor(((to_float(3000) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(3000) * func_400(iParam1)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(5000) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(5000) * func_400(iParam1)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(8000) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(8000) * func_400(iParam1)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(9600) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(9600) * func_400(iParam1)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(11000) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(11000) * func_400(iParam1)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(11600) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(11600) * func_400(iParam1)));
}
break;
case 7:
if(bParam4){
return floor(((to_float(12000) * Global_262145.f_26654) * func_400(iParam1)));
}
else{
return floor((to_float(12000) * func_400(iParam1)));
}
break;
case 8:
return floor(((to_float(12400) * func_400(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(12400) * func_400(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(12500) * func_400(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(12900) * func_400(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(13250) * func_400(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(13600) * func_400(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(13900) * func_400(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(14150) * func_400(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(14400) * func_400(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(14650) * func_400(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(14850) * func_400(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(15050) * func_400(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(15250) * func_400(iParam1)) * fVar0));
break;
case 21:
return floor(((to_float(15450) * func_400(iParam1)) * fVar0));
break;
case 22:
return floor(((to_float(15650) * func_400(iParam1)) * fVar0));
break;
case 23:
return floor(((to_float(15850) * func_400(iParam1)) * fVar0));
break;
case 24:
return floor(((to_float(16050) * func_400(iParam1)) * fVar0));
break;
case 25:
return floor(((to_float(16250) * func_400(iParam1)) * fVar0));
break;
case 26:
return floor(((to_float(16450) * func_400(iParam1)) * fVar0));
break;
case 27:
return floor(((to_float(16650) * func_400(iParam1)) * fVar0));
break;
case 28:
return floor(((to_float(16850) * func_400(iParam1)) * fVar0));
break;
case 29:
return floor(((to_float(17050) * func_400(iParam1)) * fVar0));
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(900) * func_400(iParam1)));
break;
case 1:
return floor((to_float(1700) * func_400(iParam1)));
break;
case 2:
return floor((to_float(2400) * func_400(iParam1)));
break;
case 3:
return floor((to_float(2900) * func_400(iParam1)));
break;
case 4:
return floor((to_float(4450) * func_400(iParam1)));
break;
case 5:
return floor((to_float(5000) * func_400(iParam1)));
break;
case 6:
return floor((to_float(5600) * func_400(iParam1)));
break;
case 7:
return floor((to_float(6000) * func_400(iParam1)));
break;
case 8:
return floor((to_float(6500) * func_400(iParam1)));
break;
case 9:
return floor((to_float(7000) * func_400(iParam1)));
break;
case 10:
return floor((to_float(7200) * func_400(iParam1)));
break;
case 11:
return floor((to_float(7750) * func_400(iParam1)));
break;
case 12:
return floor((to_float(8150) * func_400(iParam1)));
break;
case 13:
return floor((to_float(8600) * func_400(iParam1)));
break;
case 14:
return floor((to_float(9000) * func_400(iParam1)));
break;
case 15:
return floor((to_float(9400) * func_400(iParam1)));
break;
case 16:
return floor((to_float(9800) * func_400(iParam1)));
break;
case 17:
return floor((to_float(10200) * func_400(iParam1)));
break;
case 18:
return floor((to_float(10550) * func_400(iParam1)));
break;
case 19:
return floor((to_float(10900) * func_400(iParam1)));
break;
case 20:
return floor((to_float(11250) * func_400(iParam1)));
break;
case 21:
return floor((to_float(11600) * func_400(iParam1)));
break;
case 22:
return floor((to_float(11900) * func_400(iParam1)));
break;
case 23:
return floor((to_float(12200) * func_400(iParam1)));
break;
case 24:
return floor((to_float(12500) * func_400(iParam1)));
break;
case 25:
return floor((to_float(12800) * func_400(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(300) * func_400(iParam1)));
break;
case 1:
return floor((to_float(650) * func_400(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_400(iParam1)));
break;
case 3:
return floor((to_float(1750) * func_400(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_400(iParam1)));
break;
case 5:
return floor((to_float(2400) * func_400(iParam1)));
break;
case 6:
return floor((to_float(2900) * func_400(iParam1)));
break;
case 7:
return floor((to_float(4450) * func_400(iParam1)));
break;
case 8:
return floor((to_float(5000) * func_400(iParam1)));
break;
case 9:
return floor((to_float(5600) * func_400(iParam1)));
break;
case 10:
return floor((to_float(6000) * func_400(iParam1)));
break;
case 11:
return floor((to_float(6450) * func_400(iParam1)));
break;
case 12:
return floor((to_float(6800) * func_400(iParam1)));
break;
case 13:
return floor((to_float(7150) * func_400(iParam1)));
break;
case 14:
return floor((to_float(7500) * func_400(iParam1)));
break;
case 15:
return floor((to_float(7850) * func_400(iParam1)));
break;
case 16:
return floor((to_float(8150) * func_400(iParam1)));
break;
case 17:
return floor((to_float(8450) * func_400(iParam1)));
break;
case 18:
return floor((to_float(8750) * func_400(iParam1)));
break;
case 19:
return floor((to_float(9050) * func_400(iParam1)));
break;
case 20:
return floor((to_float(9300) * func_400(iParam1)));
break;
case 21:
return floor((to_float(9550) * func_400(iParam1)));
break;
case 22:
return floor((to_float(9800) * func_400(iParam1)));
break;
case 23:
return floor((to_float(10050) * func_400(iParam1)));
break;
case 24:
return floor((to_float(10250) * func_400(iParam1)));
break;
case 25:
return floor((to_float(10450) * func_400(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(200) * func_400(iParam1)));
break;
case 1:
return floor((to_float(400) * func_400(iParam1)));
break;
case 2:
return floor((to_float(700) * func_400(iParam1)));
break;
case 3:
return floor((to_float(898) * func_400(iParam1)));
break;
case 4:
return floor((to_float(1250) * func_400(iParam1)));
break;
case 5:
return floor((to_float(1750) * func_400(iParam1)));
break;
case 6:
return floor((to_float(2000) * func_400(iParam1)));
break;
case 7:
return floor((to_float(2400) * func_400(iParam1)));
break;
case 8:
return floor((to_float(2900) * func_400(iParam1)));
break;
case 9:
return floor((to_float(4450) * func_400(iParam1)));
break;
case 10:
return floor((to_float(5000) * func_400(iParam1)));
break;
case 11:
return floor((to_float(5150) * func_400(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_400(iParam1)));
break;
case 13:
return floor((to_float(5700) * func_400(iParam1)));
break;
case 14:
return floor((to_float(6000) * func_400(iParam1)));
break;
case 15:
return floor((to_float(6300) * func_400(iParam1)));
break;
case 16:
return floor((to_float(6600) * func_400(iParam1)));
break;
case 17:
return floor((to_float(9600) * func_400(iParam1)));
break;
case 18:
return floor((to_float(9850) * func_400(iParam1)));
break;
case 19:
return floor((to_float(10100) * func_400(iParam1)));
break;
case 20:
return floor((to_float(10350) * func_400(iParam1)));
break;
case 21:
return floor((to_float(10600) * func_400(iParam1)));
break;
case 22:
return floor((to_float(10850) * func_400(iParam1)));
break;
case 23:
return floor((to_float(11100) * func_400(iParam1)));
break;
case 24:
return floor((to_float(11350) * func_400(iParam1)));
break;
case 25:
return floor((to_float(11600) * func_400(iParam1)));
break;
}}
break;
case 8:
if(((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==31) || Global_1585918==32) || Global_1585918==35) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(2200) * func_402(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24128;
}
elseif(bParam4){
return floor(((to_float(4600) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(4600) * func_402(iParam1)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(7400) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(7400) * func_402(iParam1)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(11700) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(11700) * func_402(iParam1)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(14500) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(14500) * func_402(iParam1)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(14700) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(14700) * func_402(iParam1)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(14900) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(14900) * func_402(iParam1)));
}
break;
case 7:
if(bParam4){
return floor(((to_float(15100) * Global_262145.f_26654) * func_402(iParam1)));
}
else{
return floor((to_float(15100) * func_402(iParam1)));
}
break;
case 8:
return floor((to_float(15300) * func_402(iParam1)));
break;
case 9:
return floor((to_float(15500) * func_402(iParam1)));
break;
case 10:
return floor((to_float(15700) * func_402(iParam1)));
break;
case 11:
return floor((to_float(15900) * func_402(iParam1)));
break;
case 12:
return floor((to_float(16100) * func_402(iParam1)));
break;
case 13:
return floor((to_float(16300) * func_402(iParam1)));
break;
case 14:
return floor((to_float(16500) * func_402(iParam1)));
break;
case 15:
return floor((to_float(16700) * func_402(iParam1)));
break;
case 16:
return floor((to_float(16900) * func_402(iParam1)));
break;
case 17:
return floor((to_float(17100) * func_402(iParam1)));
break;
case 18:
return floor((to_float(17300) * func_402(iParam1)));
break;
case 19:
return floor((to_float(17500) * func_402(iParam1)));
break;
case 20:
return floor((to_float(2200) * func_399(0)));
break;
case 21:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24129;
}
elseif(bParam4){
return floor(((to_float(4600) * Global_262145.f_26654) * func_402(1)));
}
else{
return floor((to_float(4600) * func_402(1)));
}
break;
case 22:
if(bParam4){
return floor(((to_float(7400) * Global_262145.f_26654) * func_402(2)));
}
else{
return floor((to_float(7400) * func_402(2)));
}
break;
case 23:
if(bParam4){
return floor(((to_float(11700) * Global_262145.f_26654) * func_402(3)));
}
else{
return floor((to_float(11700) * func_402(3)));
}
break;
case 24:
return floor((to_float(14500) * func_399(4)));
break;
case 25:
return floor((to_float(14700) * func_399(5)));
break;
case 26:
return floor((to_float(14900) * func_399(6)));
break;
case 27:
return floor((to_float(15100) * func_399(7)));
break;
case 28:
return floor((to_float(15300) * func_399(8)));
break;
case 29:
return floor((to_float(15500) * func_399(9)));
break;
case 30:
return floor((to_float(15700) * func_399(10)));
break;
case 31:
return floor((to_float(15900) * func_399(11)));
break;
case 32:
return floor((to_float(16100) * func_399(12)));
break;
case 33:
return floor((to_float(16300) * func_399(13)));
break;
case 34:
return floor((to_float(16500) * func_399(14)));
break;
case 35:
return floor((to_float(16700) * func_399(15)));
break;
case 36:
return floor((to_float(16900) * func_399(16)));
break;
case 37:
return floor((to_float(17100) * func_399(17)));
break;
case 38:
return floor((to_float(17300) * func_399(18)));
break;
case 39:
return floor((to_float(17500) * func_399(19)));
break;
case 40:
return floor((to_float(17700) * func_399(20)));
break;
}}elseif(Global_1585918==36 || Global_1585918==37){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_402(iParam1)));
break;
case 1:
return floor((to_float(115000) * func_402(iParam1)));
break;
case 2:
return floor((to_float(205000) * func_402(iParam1)));
break;
case 3:
return floor((to_float(285000) * func_402(iParam1)));
break;
case 4:
return floor((to_float(310000) * func_402(iParam1)));
break;
case 5:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 6:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 7:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 8:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 9:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 10:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 11:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 12:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 13:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 14:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 15:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 16:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 17:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 18:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 19:
return floor((to_float(330000) * func_402(iParam1)));
break;
case 20:
return floor((to_float(1000) * func_399(0)));
break;
case 21:
return floor((to_float(Global_262145.f_24814) * func_399(1)));
break;
case 22:
return floor((to_float(310000) * func_399(2)));
break;
case 23:
return floor((to_float(330000) * func_399(3)));
break;
case 24:
return floor((to_float(350000) * func_399(4)));
break;
case 25:
return floor((to_float(365000) * func_399(5)));
break;
case 26:
return floor((to_float(365000) * func_399(6)));
break;
case 27:
return floor((to_float(365000) * func_399(7)));
break;
case 28:
return floor((to_float(365000) * func_399(8)));
break;
case 29:
return floor((to_float(365000) * func_399(9)));
break;
}}elseif(Global_1585918==33){
switch (iParam1){
case 1:
return Global_262145.f_22584;
break;
case 2:
return Global_262145.f_22585;
break;
case 29:
return Global_262145.f_22590;
break;
case 30:
return Global_262145.f_22590;
break;
case 31:
return Global_262145.f_22590;
break;
case 32:
return Global_262145.f_22590;
break;
case 33:
return Global_262145.f_22590;
break;
case 34:
return Global_262145.f_22590;
break;
case 35:
return Global_262145.f_22590;
break;
case 36:
return Global_262145.f_22590;
break;
case 37:
return Global_262145.f_22590;
break;
case 38:
return Global_262145.f_22590;
break;
case 39:
return Global_262145.f_22590;
break;
case 40:
return Global_262145.f_22590;
break;
}}elseif(Global_1585918==34){
switch (iParam1){
case 1:
return Global_262145.f_22596;
break;
case 2:
return Global_262145.f_22597;
break;
case 29:
return Global_262145.f_22602;
break;
case 30:
return Global_262145.f_22602;
break;
case 31:
return Global_262145.f_22602;
break;
case 32:
return Global_262145.f_22602;
break;
case 33:
return Global_262145.f_22602;
break;
case 34:
return Global_262145.f_22602;
break;
case 35:
return Global_262145.f_22602;
break;
case 36:
return Global_262145.f_22602;
break;
case 37:
return Global_262145.f_22602;
break;
case 38:
return Global_262145.f_22602;
break;
case 39:
return Global_262145.f_22602;
break;
case 40:
return Global_262145.f_22602;
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(1500) * func_402(iParam1)));
break;
case 1:
return floor((to_float(2500) * func_402(iParam1)));
break;
case 2:
return floor((to_float(3300) * func_402(iParam1)));
break;
case 3:
return floor((to_float(3900) * func_402(iParam1)));
break;
case 4:
return floor((to_float(4700) * func_402(iParam1)));
break;
case 5:
return floor((to_float(4900) * func_402(iParam1)));
break;
case 6:
return floor((to_float(5100) * func_402(iParam1)));
break;
case 7:
return floor((to_float(5300) * func_402(iParam1)));
break;
case 8:
return floor((to_float(5500) * func_402(iParam1)));
break;
case 9:
return floor((to_float(5700) * func_402(iParam1)));
break;
case 10:
return floor((to_float(5900) * func_402(iParam1)));
break;
case 11:
return floor((to_float(6100) * func_402(iParam1)));
break;
case 12:
return floor((to_float(6300) * func_402(iParam1)));
break;
case 13:
return floor((to_float(6500) * func_402(iParam1)));
break;
case 14:
return floor((to_float(6700) * func_402(iParam1)));
break;
case 15:
return floor((to_float(6900) * func_402(iParam1)));
break;
case 16:
return floor((to_float(7100) * func_402(iParam1)));
break;
case 17:
return floor((to_float(7300) * func_402(iParam1)));
break;
case 18:
return floor((to_float(7500) * func_402(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_402(iParam1)));
break;
case 20:
return floor((to_float(1500) * func_399(0)));
break;
case 21:
return floor((to_float(2500) * func_399(1)));
break;
case 22:
return floor((to_float(3300) * func_399(2)));
break;
case 23:
return floor((to_float(3900) * func_399(3)));
break;
case 24:
return floor((to_float(4700) * func_399(4)));
break;
case 25:
return floor((to_float(4900) * func_399(5)));
break;
case 26:
return floor((to_float(5100) * func_399(6)));
break;
case 27:
return floor((to_float(5300) * func_399(7)));
break;
case 28:
return floor((to_float(5500) * func_399(8)));
break;
case 29:
return floor((to_float(5700) * func_399(9)));
break;
case 30:
return floor((to_float(5900) * func_399(10)));
break;
case 31:
return floor((to_float(6100) * func_399(11)));
break;
case 32:
return floor((to_float(6300) * func_399(12)));
break;
case 33:
return floor((to_float(6500) * func_399(13)));
break;
case 34:
return floor((to_float(6700) * func_399(14)));
break;
case 35:
return floor((to_float(6900) * func_399(15)));
break;
case 36:
return floor((to_float(7100) * func_399(16)));
break;
case 37:
return floor((to_float(7300) * func_399(17)));
break;
case 38:
return floor((to_float(7500) * func_399(18)));
break;
case 39:
return floor((to_float(7700) * func_399(19)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(500) * func_402(iParam1)));
break;
case 1:
return floor((to_float(1000) * func_402(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_402(iParam1)));
break;
case 3:
return floor((to_float(2000) * func_402(iParam1)));
break;
case 4:
return floor((to_float(2600) * func_402(iParam1)));
break;
case 5:
return floor((to_float(2800) * func_402(iParam1)));
break;
case 6:
return floor((to_float(3000) * func_402(iParam1)));
break;
case 7:
return floor((to_float(3200) * func_402(iParam1)));
break;
case 8:
return floor((to_float(3400) * func_402(iParam1)));
break;
case 9:
return floor((to_float(3600) * func_402(iParam1)));
break;
case 10:
return floor((to_float(3800) * func_402(iParam1)));
break;
case 11:
return floor((to_float(4000) * func_402(iParam1)));
break;
case 12:
return floor((to_float(4200) * func_402(iParam1)));
break;
case 13:
return floor((to_float(4400) * func_402(iParam1)));
break;
case 14:
return floor((to_float(4600) * func_402(iParam1)));
break;
case 15:
return floor((to_float(4800) * func_402(iParam1)));
break;
case 16:
return floor((to_float(5000) * func_402(iParam1)));
break;
case 17:
return floor((to_float(5200) * func_402(iParam1)));
break;
case 18:
return floor((to_float(5400) * func_402(iParam1)));
break;
case 19:
return floor((to_float(5600) * func_402(iParam1)));
break;
case 20:
return floor((to_float(500) * func_399(0)));
break;
case 21:
return floor((to_float(1000) * func_399(1)));
break;
case 22:
return floor((to_float(1500) * func_399(2)));
break;
case 23:
return floor((to_float(2000) * func_399(3)));
break;
case 24:
return floor((to_float(2600) * func_399(4)));
break;
case 25:
return floor((to_float(2800) * func_399(5)));
break;
case 26:
return floor((to_float(3000) * func_399(6)));
break;
case 27:
return floor((to_float(3200) * func_399(7)));
break;
case 28:
return floor((to_float(3400) * func_399(8)));
break;
case 29:
return floor((to_float(3600) * func_399(9)));
break;
case 30:
return floor((to_float(3800) * func_399(10)));
break;
case 31:
return floor((to_float(4000) * func_399(11)));
break;
case 32:
return floor((to_float(4200) * func_399(12)));
break;
case 33:
return floor((to_float(4400) * func_399(13)));
break;
case 34:
return floor((to_float(4600) * func_399(14)));
break;
case 35:
return floor((to_float(4800) * func_399(15)));
break;
case 36:
return floor((to_float(5000) * func_399(16)));
break;
case 37:
return floor((to_float(5200) * func_399(17)));
break;
case 38:
return floor((to_float(5400) * func_399(18)));
break;
case 39:
return floor((to_float(5600) * func_399(19)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(298) * func_402(iParam1)));
break;
case 1:
return floor((to_float(390) * func_402(iParam1)));
break;
case 2:
return floor((to_float(500) * func_402(iParam1)));
break;
case 3:
return floor((to_float(750) * func_402(iParam1)));
break;
case 4:
return floor((to_float(1000) * func_402(iParam1)));
break;
case 5:
return floor((to_float(1200) * func_402(iParam1)));
break;
case 6:
return floor((to_float(1400) * func_402(iParam1)));
break;
case 7:
return floor((to_float(1600) * func_402(iParam1)));
break;
case 8:
return floor((to_float(1800) * func_402(iParam1)));
break;
case 9:
return floor((to_float(2000) * func_402(iParam1)));
break;
case 10:
return floor((to_float(2200) * func_402(iParam1)));
break;
case 11:
return floor((to_float(2400) * func_402(iParam1)));
break;
case 12:
return floor((to_float(2600) * func_402(iParam1)));
break;
case 13:
return floor((to_float(2800) * func_402(iParam1)));
break;
case 14:
return floor((to_float(3000) * func_402(iParam1)));
break;
case 15:
return floor((to_float(3200) * func_402(iParam1)));
break;
case 16:
return floor((to_float(3400) * func_402(iParam1)));
break;
case 17:
return floor((to_float(3600) * func_402(iParam1)));
break;
case 18:
return floor((to_float(3800) * func_402(iParam1)));
break;
case 19:
return floor((to_float(4000) * func_402(iParam1)));
break;
case 20:
return floor((to_float(500) * func_399(0)));
break;
case 21:
return floor((to_float(1000) * func_399(1)));
break;
case 22:
return floor((to_float(1500) * func_399(2)));
break;
case 23:
return floor((to_float(2000) * func_399(3)));
break;
case 24:
return floor((to_float(2600) * func_399(4)));
break;
case 25:
return floor((to_float(2800) * func_399(5)));
break;
case 26:
return floor((to_float(3000) * func_399(6)));
break;
case 27:
return floor((to_float(3200) * func_399(7)));
break;
case 28:
return floor((to_float(3400) * func_399(8)));
break;
case 29:
return floor((to_float(3600) * func_399(9)));
break;
case 30:
return floor((to_float(3800) * func_399(10)));
break;
case 31:
return floor((to_float(4000) * func_399(11)));
break;
case 32:
return floor((to_float(4200) * func_399(12)));
break;
case 33:
return floor((to_float(4400) * func_399(13)));
break;
case 34:
return floor((to_float(4600) * func_399(14)));
break;
case 35:
return floor((to_float(4800) * func_399(15)));
break;
case 36:
return floor((to_float(5000) * func_399(16)));
break;
case 37:
return floor((to_float(5200) * func_399(17)));
break;
case 38:
return floor((to_float(5400) * func_399(18)));
break;
case 39:
return floor((to_float(5600) * func_399(19)));
break;
}}elseif(Global_1585918==30){
switch (iParam1){
case 0:
return floor((to_float(5000) * func_402(iParam1)));
break;
case 1:
return floor((to_float(85000) * func_402(iParam1)));
break;
case 20:
return floor((to_float(3500) * func_399(0)));
break;
case 21:
return floor((to_float(92500) * func_399(1)));
break;
}}
break;
case 9:
if(iVar1==joaat("dune3")){
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21382) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21383) * func_398(iParam1)));
break;
}}elseif(iVar1==joaat("halftrack")){
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21386) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21387) * func_398(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_21388) * func_398(iParam1)));
break;
}}elseif(iVar1==joaat("tampa3")){
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21394) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21395) * func_398(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_21396) * func_398(iParam1)));
break;
}}elseif(iVar1==joaat("insurgent3")){
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21401) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21402) * func_398(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_21403) * func_398(iParam1)));
break;
}}elseif(iVar1==joaat("technical3")){
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21406) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21407) * func_398(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_21408) * func_398(iParam1)));
break;
}}elseif(iVar1==joaat("menacer")){
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24837) * func_398(iParam1)));
break;
case 2:
return floor((to_float(285000) * func_398(iParam1)));
break;
}}elseif(func_301(iVar1)){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26711) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_31807) * func_398(iParam1)));
break;
}}elseif(Global_1585918==33){
switch (iParam1){
case 1:
return Global_262145.f_22583;
break;
}}elseif(Global_1585918==34){
switch (iParam1){
case 1:
return Global_262145.f_22594;
break;
case 2:
return Global_262145.f_23982;
break;
}}elseif(Global_1585918==36 || Global_1585918==37){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_24807) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24808) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_24809) * func_398(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_24810) * func_398(iParam1)));
break;
case 4:
return floor((to_float(225000) * func_398(iParam1)));
break;
case 5:
return floor((to_float(310000) * func_398(iParam1)));
break;
}}elseif(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26711) * func_398(iParam1)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26712) * Global_262145.f_26654) * func_398(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26712) * func_398(iParam1)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26713) * Global_262145.f_26654) * func_398(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26713) * func_398(iParam1)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26714) * Global_262145.f_26654) * func_398(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26714) * func_398(iParam1)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26715) * Global_262145.f_26654) * func_398(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26715) * func_398(iParam1)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(Global_262145.f_26716) * Global_262145.f_26654) * func_398(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26716) * func_398(iParam1)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(Global_262145.f_26717) * Global_262145.f_26654) * func_398(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26717) * func_398(iParam1)));
}
break;
}}elseif(Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26736) * func_398(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_26737) * func_398(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_26738) * func_398(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_26739) * func_398(iParam1)));
break;
case 4:
return floor((to_float(Global_262145.f_26740) * func_398(iParam1)));
break;
case 5:
return floor((to_float(Global_262145.f_26741) * func_398(iParam1)));
break;
case 6:
return floor((to_float(Global_262145.f_26742) * func_398(iParam1)));
break;
case 7:
return floor((to_float(Global_262145.f_26743) * func_398(iParam1)));
break;
case 8:
return floor((to_float(Global_262145.f_26744) * func_398(iParam1)));
break;
case 9:
return floor((to_float(Global_262145.f_26745) * func_398(iParam1)));
break;
case 10:
return floor((to_float(Global_262145.f_26746) * func_398(iParam1)));
break;
case 11:
return floor((to_float(Global_262145.f_26747) * func_398(iParam1)));
break;
case 12:
return floor((to_float(Global_262145.f_26748) * func_398(iParam1)));
break;
case 13:
return floor((to_float(Global_262145.f_26749) * func_398(iParam1)));
break;
case 14:
return floor((to_float(Global_262145.f_26750) * func_398(iParam1)));
break;
case 15:
return floor((to_float(Global_262145.f_26751) * func_398(iParam1)));
break;
case 16:
return floor((to_float(Global_262145.f_26752) * func_398(iParam1)));
break;
case 17:
return floor((to_float(Global_262145.f_26753) * func_398(iParam1)));
break;
case 18:
return floor((to_float(Global_262145.f_26754) * func_398(iParam1)));
break;
case 19:
return floor((to_float(Global_262145.f_26755) * func_398(iParam1)));
break;
case 20:
return floor((to_float(Global_262145.f_26756) * func_398(iParam1)));
break;
}}else{
switch (iParam1){
case 0:
return floor((to_float(700) * func_398(iParam1)));
break;
case 1:
return floor((to_float(1100) * func_398(iParam1)));
break;
case 2:
return floor((to_float(1350) * func_398(iParam1)));
break;
case 3:
return floor((to_float(1500) * func_398(iParam1)));
break;
case 4:
return floor((to_float(2750) * func_398(iParam1)));
break;
case 5:
return floor((to_float(3600) * func_398(iParam1)));
break;
case 6:
return floor((to_float(4900) * func_398(iParam1)));
break;
case 7:
return floor((to_float(5800) * func_398(iParam1)));
break;
case 8:
return floor((to_float(7000) * func_398(iParam1)));
break;
case 9:
return floor((to_float(8000) * func_398(iParam1)));
break;
case 10:
return floor((to_float(9150) * func_398(iParam1)));
break;
case 11:
return floor((to_float(10100) * func_398(iParam1)));
break;
case 12:
return floor((to_float(11050) * func_398(iParam1)));
break;
case 13:
return floor((to_float(11950) * func_398(iParam1)));
break;
case 14:
return floor((to_float(12900) * func_398(iParam1)));
break;
case 15:
return floor((to_float(13750) * func_398(iParam1)));
break;
case 16:
return floor((to_float(14600) * func_398(iParam1)));
break;
case 17:
return floor((to_float(15450) * func_398(iParam1)));
break;
case 18:
return floor((to_float(16250) * func_398(iParam1)));
break;
case 19:
return floor((to_float(17050) * func_398(iParam1)));
break;
case 20:
return floor((to_float(17800) * func_398(iParam1)));
break;
case 21:
return floor((to_float(18550) * func_398(iParam1)));
break;
case 22:
return floor((to_float(19250) * func_398(iParam1)));
break;
case 23:
return floor((to_float(19950) * func_398(iParam1)));
break;
case 24:
return floor((to_float(20600) * func_398(iParam1)));
break;
case 25:
return floor((to_float(21250) * func_398(iParam1)));
break;
case 26:
return floor((to_float(21850) * func_398(iParam1)));
break;
case 27:
return floor((to_float(22450) * func_398(iParam1)));
break;
case 28:
return floor((to_float(23000) * func_398(iParam1)));
break;
case 29:
return floor((to_float(23550) * func_398(iParam1)));
break;
case 30:
return floor((to_float(24050) * func_398(iParam1)));
break;
}}
break;
case 10:
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(500) * func_397(iParam1)));
break;
case 1:
return floor((to_float(9000) * func_397(iParam1)));
break;
case 2:
return floor((to_float(12500) * func_397(iParam1)));
break;
case 3:
return floor((to_float(18000) * func_397(iParam1)));
break;
case 4:
return floor((to_float(33500) * func_397(iParam1)));
break;
}}elseif(Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(500) * func_397(iParam1)));
break;
case 1:
return floor((to_float(4500) * func_397(iParam1)));
break;
case 2:
return floor((to_float(6250) * func_397(iParam1)));
break;
case 3:
return floor((to_float(9000) * func_397(iParam1)));
break;
case 4:
return floor((to_float(16750) * func_397(iParam1)));
break;
}}elseif(Global_1585918==1){
switch (iParam1){
case 0:
return floor((to_float(500) * func_397(iParam1)));
break;
case 1:
return floor((to_float(5850) * func_397(iParam1)));
break;
case 2:
return floor((to_float(8125) * func_397(iParam1)));
break;
case 3:
return floor((to_float(11700) * func_397(iParam1)));
break;
case 4:
return floor((to_float(21775) * func_397(iParam1)));
break;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(500) * func_397(iParam1)));
break;
case 1:
return floor((to_float(1800) * func_397(iParam1)));
break;
case 2:
return floor((to_float(2500) * func_397(iParam1)));
break;
case 3:
return floor((to_float(3600) * func_397(iParam1)));
break;
case 4:
return floor((to_float(6700) * func_397(iParam1)));
break;
}}
break;
case 12:
if(Global_1585918==33){
switch (iParam1){
case 0:
return floor((to_float(700) * func_396(iParam1)));
break;
case 1:
return Global_262145.f_22591;
break;
case 2:
return Global_262145.f_22592;
break;
}}elseif(Global_1585918==34){
switch (iParam1){
case 0:
return floor((to_float(700) * func_396(iParam1)));
break;
case 1:
return Global_262145.f_22595;
break;
case 2:
return Global_262145.f_22592;
break;
}}else{
switch (iParam1){
case 0:
return floor(((to_float(260) * func_396(iParam1)) * fVar0));
break;
case 1:
return floor(((to_float(750) * func_396(iParam1)) * fVar0));
break;
case 2:
return floor(((to_float(1800) * func_396(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(3000) * func_396(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(9550) * func_396(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(9750) * func_396(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(10500) * func_396(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(12000) * func_396(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(13750) * func_396(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(14625) * func_396(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(15500) * func_396(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(16475) * func_396(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(17250) * func_396(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(18125) * func_396(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(19100) * func_396(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(19975) * func_396(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(20900) * func_396(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(21675) * func_396(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(22550) * func_396(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(23350) * func_396(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(24175) * func_396(iParam1)) * fVar0));
break;
case 21:
return floor(((to_float(25025) * func_396(iParam1)) * fVar0));
break;
case 22:
return floor(((to_float(25900) * func_396(iParam1)) * fVar0));
break;
}}
break;
case 13:
if(func_394(PLAYER::PLAYER_ID())==2){
switch (iParam1){
case 0:
return floor((to_float(500) * func_393(iParam1)));
break;
case 1:
return floor((to_float(750) * func_393(iParam1)));
break;
}}else{
switch (iParam1){
case 0:
return floor((to_float(5000) * func_393(iParam1)));
break;
case 1:
return floor((to_float(7500) * func_393(iParam1)));
break;
}}
break;
case 50:
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_392(iParam1)));
break;
case 1:
return floor((to_float(29500) * func_392(iParam1)));
break;
case 2:
return floor((to_float(32500) * func_392(iParam1)));
break;
case 3:
return floor((to_float(40000) * func_392(iParam1)));
break;
case 4:
return floor((to_float(50000) * func_392(iParam1)));
break;
}}elseif(Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(500) * func_392(iParam1)));
break;
case 1:
return floor((to_float(14750) * func_392(iParam1)));
break;
case 2:
return floor((to_float(16250) * func_392(iParam1)));
break;
case 3:
return floor((to_float(20000) * func_392(iParam1)));
break;
case 4:
return floor((to_float(25000) * func_392(iParam1)));
break;
}}elseif(Global_1585918==1){
switch (iParam1){
case 0:
return floor((to_float(650) * func_392(iParam1)));
break;
case 1:
return floor((to_float(19175) * func_392(iParam1)));
break;
case 2:
return floor((to_float(21125) * func_392(iParam1)));
break;
case 3:
return floor((to_float(26000) * func_392(iParam1)));
break;
case 4:
return floor((to_float(30000) * func_392(iParam1)));
break;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(200) * func_392(iParam1)));
break;
case 1:
return floor((to_float(5900) * func_392(iParam1)));
break;
case 2:
return floor((to_float(6500) * func_392(iParam1)));
break;
case 3:
return floor((to_float(8000) * func_392(iParam1)));
break;
case 4:
return floor((to_float(12000) * func_392(iParam1)));
break;
}}
break;
case 23:
if(Global_1585918==31){
switch (iParam1){
case 0:
return floor((to_float(700) * func_392(iParam1)));
break;
case 1:
return Global_262145.f_24835;
break;
case 2:
return Global_262145.f_24834;
break;
case 29:
return Global_262145.f_24836;
break;
case 30:
return Global_262145.f_24836;
break;
case 31:
return Global_262145.f_24836;
break;
case 32:
return Global_262145.f_24836;
break;
case 33:
return Global_262145.f_24836;
break;
case 34:
return Global_262145.f_24836;
break;
case 35:
return Global_262145.f_24836;
break;
case 36:
return Global_262145.f_24836;
break;
case 37:
return Global_262145.f_24836;
break;
case 38:
return Global_262145.f_24836;
break;
case 39:
return Global_262145.f_24836;
break;
case 40:
return Global_262145.f_24836;
break;
}}else{
switch (iParam1){
case 0:
return floor(((to_float(200) * func_391(iParam1)) * fVar0));
break;
case 1:
return floor(((to_float(750) * func_391(iParam1)) * fVar0));
break;
case 2:
return floor(((to_float(1340) * func_391(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(1650) * func_391(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(3000) * func_391(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(3200) * func_391(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(3650) * func_391(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(4100) * func_391(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(4550) * func_391(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(5000) * func_391(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(5350) * func_391(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(5700) * func_391(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(6050) * func_391(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(6400) * func_391(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(6750) * func_391(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(7100) * func_391(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(7450) * func_391(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(7800) * func_391(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(8150) * func_391(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(8500) * func_391(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(8850) * func_391(iParam1)) * fVar0));
break;
}}
break;
case 25:
if(Global_1585918==31){
switch (iParam1){
case 0:
return floor((to_float(700) * func_392(iParam1)));
break;
case 1:
return Global_262145.f_24835;
break;
case 2:
return Global_262145.f_24834;
break;
case 29:
return Global_262145.f_24836;
break;
case 30:
return Global_262145.f_24836;
break;
case 31:
return Global_262145.f_24836;
break;
case 32:
return Global_262145.f_24836;
break;
case 33:
return Global_262145.f_24836;
break;
case 34:
return Global_262145.f_24836;
break;
case 35:
return Global_262145.f_24836;
break;
case 36:
return Global_262145.f_24836;
break;
case 37:
return Global_262145.f_24836;
break;
case 38:
return Global_262145.f_24836;
break;
case 39:
return Global_262145.f_24836;
break;
case 40:
return Global_262145.f_24836;
break;
}}else{
switch (iParam1){
case 0:
return floor(((to_float(200) * func_391(iParam1)) * fVar0));
break;
case 1:
return floor(((to_float(750) * func_391(iParam1)) * fVar0));
break;
case 2:
return floor(((to_float(1340) * func_391(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(1650) * func_391(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(3000) * func_391(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(3200) * func_391(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(3650) * func_391(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(4100) * func_391(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(4550) * func_391(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(5000) * func_391(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(5350) * func_391(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(5700) * func_391(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(6050) * func_391(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(6400) * func_391(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(6750) * func_391(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(7100) * func_391(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(7450) * func_391(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(7800) * func_391(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(8150) * func_391(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(8500) * func_391(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(8850) * func_391(iParam1)) * fVar0));
break;
}}
break;
case 27:
iVar2=iParam1;
switch (iVar2){
case 0:
return floor((to_float(500) * func_390(0)));
break;
case 1:
return Global_262145.f_8281;
break;
case 2:
return Global_262145.f_8282;
break;
case 3:
return Global_262145.f_8283;
break;
case 4:
return Global_262145.f_8284;
break;
case 5:
return Global_262145.f_8122;
break;
case 6:
return Global_262145.f_8123;
break;
case 7:
return Global_262145.f_8124;
break;
case 8:
return Global_262145.f_8125;
break;
case 9:
return Global_262145.f_7682;
break;
case 10:
return Global_262145.f_7683;
break;
case 11:
return Global_262145.f_7684;
break;
case 12:
return Global_262145.f_7685;
break;
case 13:
return Global_262145.f_7686;
break;
case 14:
return Global_262145.f_7687;
break;
case 15:
return Global_262145.f_7688;
break;
case 16:
return Global_262145.f_7689;
break;
case 17:
return Global_262145.f_7618;
break;
case 18:
return Global_262145.f_7619;
break;
case 19:
return Global_262145.f_7620;
break;
case 20:
return Global_262145.f_7621;
break;
case 21:
return Global_262145.f_7622;
break;
case 22:
return Global_262145.f_7623;
break;
case 23:
return Global_262145.f_7624;
break;
case 24:
return Global_262145.f_10655;
break;
case 25:
return Global_262145.f_10656;
break;
case 26:
return Global_262145.f_10657;
break;
case 30:
return Global_262145.f_12349;
break;
case 31:
return Global_262145.f_12350;
break;
case 34:
return Global_262145.f_12561;
break;
case 35:
return Global_262145.f_12562;
break;
case 38:
return Global_262145.f_12588;
break;
case 39:
return Global_262145.f_12589;
break;
case 40:
return Global_262145.f_12590;
break;
case 44:
return floor((to_float(2000) * func_390(44)));
break;
case 45:
return floor((to_float(3000) * func_390(45)));
break;
case 46:
return floor((to_float(5000) * func_390(46)));
break;
case 47:
return floor((to_float(10000) * func_390(47)));
break;
case 48:
return floor((to_float(12500) * func_390(48)));
break;
case 49:
return floor((to_float(15000) * func_390(49)));
break;
case 50:
return floor((to_float(17500) * func_390(50)));
break;
case 51:
return floor((to_float(25000) * func_390(51)));
break;
case 52:
return Global_262145.f_9229;
break;
case 53:
return Global_262145.f_26668;
break;
case 54:
return Global_262145.f_26669;
break;
case 55:
return Global_262145.f_26670;
break;
}
break;
case 29:
case 28:
if(((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39) || (iParam1 > 1 && iParam0==29)){
switch (iParam1){
case 0:
return floor((to_float(600) * func_389(iParam1)));
break;
case 1:
return floor((to_float(7500) * func_389(iParam1)));
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26655) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26655) * func_389(iParam1)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26656) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26656) * func_389(iParam1)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26657) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26657) * func_389(iParam1)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(Global_262145.f_26658) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26658) * func_389(iParam1)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(Global_262145.f_26659) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26659) * func_389(iParam1)));
}
break;
case 7:
if(bParam4){
return floor(((to_float(Global_262145.f_26660) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26660) * func_389(iParam1)));
}
break;
case 8:
if(bParam4){
return floor(((to_float(Global_262145.f_26661) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26661) * func_389(iParam1)));
}
break;
case 9:
if(bParam4){
return floor(((to_float(Global_262145.f_26662) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26662) * func_389(iParam1)));
}
break;
case 10:
if(bParam4){
return floor(((to_float(Global_262145.f_26663) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26663) * func_389(iParam1)));
}
break;
case 11:
if(bParam4){
return floor(((to_float(Global_262145.f_26664) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26664) * func_389(iParam1)));
}
break;
case 12:
if(bParam4){
return floor(((to_float(Global_262145.f_26665) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26665) * func_389(iParam1)));
}
break;
case 13:
if(bParam4){
return floor(((to_float(Global_262145.f_26666) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26666) * func_389(iParam1)));
}
break;
case 14:
if(bParam4){
return floor(((to_float(Global_262145.f_26667) * Global_262145.f_26654) * func_389(iParam1)));
}
else{
return floor((to_float(Global_262145.f_26667) * func_389(iParam1)));
}
break;
default:
return floor((to_float(Global_262145.f_26667) * func_389(iParam1)));
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(400) * func_389(iParam1)));
break;
case 1:
return floor((to_float(5000) * func_389(iParam1)));
break;
default:
return floor((to_float(5000) * func_389(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(200) * func_389(iParam1)));
break;
case 1:
return floor((to_float(3000) * func_389(iParam1)));
break;
default:
return floor((to_float(3000) * func_389(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(100) * func_389(iParam1)));
break;
case 1:
return floor((to_float(2000) * func_389(iParam1)));
break;
default:
return floor((to_float(2000) * func_389(iParam1)));
break;
}}
break;
case 30:
if(iParam2==0){
switch (iParam1){
case 0:
return 100;
break;
case 1:
return Global_262145.f_9208;
break;
case 2:
return Global_262145.f_9209;
break;
case 3:
return Global_262145.f_9210;
break;
case 4:
return Global_262145.f_9211;
break;
case 5:
return Global_262145.f_9212;
break;
case 6:
return Global_262145.f_9213;
break;
case 7:
return Global_262145.f_9214;
break;
}}elseif(iParam2==1){
switch (iParam1){
case 0:
return Global_262145.f_9215;
break;
case 1:
return Global_262145.f_9216;
break;
case 2:
return Global_262145.f_9217;
break;
case 3:
return Global_262145.f_9218;
break;
case 4:
return Global_262145.f_9219;
break;
case 5:
return Global_262145.f_9220;
break;
case 6:
return Global_262145.f_9221;
break;
case 7:
return Global_262145.f_9222;
break;
case 8:
return Global_262145.f_9223;
break;
case 9:
return Global_262145.f_9224;
break;
case 10:
return Global_262145.f_9225;
break;
case 11:
return Global_262145.f_9226;
break;
case 12:
return Global_262145.f_9227;
break;
case 13:
return Global_262145.f_9228;
break;
}}
break;
}
switch (iParam0){
case 33:
switch (iParam1){
case 0:
return floor((to_float(200) * func_388(iParam1)));
break;
case 1:
return floor((to_float(200) * func_388(iParam1)));
break;
case 2:
return floor((to_float(200) * func_388(iParam1)));
break;
case 3:
return floor((to_float(300) * func_388(iParam1)));
break;
case 4:
return floor((to_float(600) * func_388(iParam1)));
break;
case 10:
return floor((to_float(600) * func_388(iParam1)));
break;
default:
return floor((to_float(600) * func_388(99)));
break;
}
break;
case 40:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("avenger"))){
switch (iParam1){
case 0:
return floor((to_float(false) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21412) * func_387(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21413) * func_387(iParam1)));
break;
}}elseif((VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cerberus")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cerberus2"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cerberus3"))){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26694) * func_387(iParam1)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26695) * Global_262145.f_26654) * func_387(iParam1)));
break;
}
else{
return floor((to_float(Global_262145.f_26695) * func_387(iParam1)));
break;
}
break;
}}elseif(((((VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("issi4")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("issi5"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("issi6"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("imperator"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("imperator2"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("imperator3"))){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26692) * func_387(iParam1)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26693) * Global_262145.f_26654) * func_387(iParam1)));
break;
}
else{
return floor((to_float(Global_262145.f_26693) * func_387(iParam1)));
break;
}
break;
}}elseif(Global_1585918==31){
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("oppressor2"))){
switch (iParam1){
case 0:
return floor((to_float(750) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24832) * func_387(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_24833) * func_387(iParam1)));
break;
}}else{
switch (iParam1){
case 0:
return floor((to_float(750) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21390) * func_387(iParam1)));
break;
}}}elseif(Global_1585918==30){
switch (iParam1){
case 0:
return floor((to_float(55000) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21380) * func_387(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21381) * func_387(iParam1)));
break;
}}elseif(Global_1585918==29){
switch (iParam1){
case 0:
return floor((to_float(78500) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21399) * func_387(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21398) * func_387(iParam1)));
break;
}}elseif(Global_1585918==32){
switch (iParam1){
case 0:
return floor((to_float(false) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21410) * func_387(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_21411) * func_387(iParam1)));
break;
}}elseif(iVar1==joaat("tornado5")){
return floor(((to_float(Global_262145.f_12394) * func_323(iParam1, 1)) * Global_262145.f_15063));
}elseif(iVar1==joaat("dukes") || iVar1==joaat("dukes3")){
switch (iParam1){
case 0:
return floor((to_float(200) * func_387(iParam1)));
break;
case 1:
return floor((to_float(700) * func_387(iParam1)));
break;
case 2:
return Global_262145.f_9341;
break;
case 3:
return Global_262145.f_9342;
break;
case 4:
return Global_262145.f_9343;
break;
case 5:
return Global_262145.f_9344;
break;
case 6:
return Global_262145.f_9345;
break;
case 7:
return Global_262145.f_9346;
break;
case 8:
return Global_262145.f_9347;
break;
case 9:
return Global_262145.f_9348;
break;
case 10:
return Global_262145.f_9349;
break;
case 11:
return Global_262145.f_9350;
break;
case 12:
return Global_262145.f_9351;
break;
case 13:
return Global_262145.f_9352;
break;
case 14:
return Global_262145.f_9353;
break;
case 15:
return Global_262145.f_9354;
break;
case 16:
return Global_262145.f_9355;
break;
case 17:
return Global_262145.f_9356;
break;
case 18:
return Global_262145.f_9357;
break;
case 19:
return Global_262145.f_9358;
break;
case 20:
return Global_262145.f_9359;
break;
case 21:
return Global_262145.f_9360;
break;
case 22:
return Global_262145.f_9361;
break;
case 23:
return Global_262145.f_9362;
break;
case 24:
return Global_262145.f_9363;
break;
case 25:
return Global_262145.f_9364;
break;
case 26:
return Global_262145.f_9365;
break;
default:
return 2500;
break;
}}elseif(Global_1585918==34){
switch (iParam1){
case 0:
return floor((to_float(700) * func_387(iParam1)));
break;
case 1:
return Global_262145.f_22593;
break;
}}elseif(Global_1585918==33){
switch (iParam1){
case 0:
return floor((to_float(700) * func_387(iParam1)));
break;
case 1:
return Global_262145.f_22580;
break;
case 2:
return Global_262145.f_22581;
break;
case 3:
return Global_262145.f_22582;
break;
}}elseif(Global_1585918==35){
switch (iParam1){
case 0:
return floor((to_float(700) * func_386(iParam1)));
break;
case 1:
return Global_262145.f_23920;
break;
case 2:
return Global_262145.f_23921;
break;
case 3:
return Global_262145.f_23922;
break;
}}elseif(((VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("revolter")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("savestra"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("comet4"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("viseris"))){
switch (iParam1){
case 0:
return floor((to_float(200) * func_386(iParam1)));
break;
case 1:
return Global_262145.f_23926;
break;
}}elseif(Global_1585918==36){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24811) * func_387(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_24812) * func_387(iParam1)));
break;
case 3:
return floor((to_float(Global_262145.f_24813) * func_387(iParam1)));
break;
case 4:
return floor((to_float(310000) * func_387(iParam1)));
break;
case 5:
return floor((to_float(330000) * func_387(iParam1)));
break;
}}elseif(Global_1585918==37){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_387(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24817) * func_387(iParam1)));
break;
case 2:
return floor((to_float(310000) * func_387(iParam1)));
break;
case 3:
return floor((to_float(330000) * func_387(iParam1)));
break;
case 4:
return floor((to_float(350000) * func_387(iParam1)));
break;
case 5:
return floor((to_float(365000) * func_387(iParam1)));
break;
}}else{
switch (iParam1){
case 0:
return floor((to_float(200) * func_387(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24131;
}
elseif(bParam4){
return floor(((to_float(700) * Global_262145.f_26654) * func_387(iParam1)));
break;
}
else{
return floor((to_float(700) * func_387(iParam1)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(1150) * Global_262145.f_26654) * func_387(iParam1)));
}
else{
return floor((to_float(1150) * func_387(iParam1)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(1600) * Global_262145.f_26654) * func_387(iParam1)));
}
else{
return floor((to_float(1600) * func_387(iParam1)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(1950) * Global_262145.f_26654) * func_387(iParam1)));
}
else{
return floor((to_float(1950) * func_387(iParam1)));
}
break;
case 5:
return floor(((to_float(2400) * func_387(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(2500) * func_387(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(2850) * func_387(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(3400) * func_387(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(3950) * func_387(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(4500) * func_387(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(5050) * func_387(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(5550) * func_387(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(6000) * func_387(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(6350) * func_387(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(6650) * func_387(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(6950) * func_387(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(7250) * func_387(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(7550) * func_387(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(7850) * func_387(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(8150) * func_387(iParam1)) * fVar0));
break;
default:
return floor(((to_float(8150) * func_387(iParam1)) * fVar0));
break;
}}
break;
case 44:
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(2500) * func_385(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24133;
}
else{
return floor(((to_float(5500) * func_385(iParam1)) * fVar0));
}
break;
case 2:
return floor(((to_float(8000) * func_385(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(10500) * func_385(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(14000) * func_385(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(14500) * func_385(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(15000) * func_385(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(15500) * func_385(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(16000) * func_385(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(16500) * func_385(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(17000) * func_385(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(17400) * func_385(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(18300) * func_385(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(19000) * func_385(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(20425) * func_385(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(21025) * func_385(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(21475) * func_385(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(21925) * func_385(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(22375) * func_385(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(22825) * func_385(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(23275) * func_385(iParam1)) * fVar0));
break;
case 21:
return floor(((to_float(23725) * func_385(iParam1)) * fVar0));
break;
case 22:
return floor(((to_float(24175) * func_385(iParam1)) * fVar0));
break;
case 23:
return floor(((to_float(24625) * func_385(iParam1)) * fVar0));
break;
case 24:
return floor(((to_float(24625) * func_385(iParam1)) * fVar0));
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(2500) * func_385(iParam1)));
break;
case 1:
return floor((to_float(3000) * func_385(iParam1)));
break;
case 2:
return floor((to_float(4000) * func_385(iParam1)));
break;
case 3:
return floor((to_float(5500) * func_385(iParam1)));
break;
case 4:
return floor((to_float(7800) * func_385(iParam1)));
break;
case 5:
return floor((to_float(8000) * func_385(iParam1)));
break;
case 6:
return floor((to_float(8300) * func_385(iParam1)));
break;
case 7:
return floor((to_float(8500) * func_385(iParam1)));
break;
case 8:
return floor((to_float(8550) * func_385(iParam1)));
break;
case 9:
return floor((to_float(8700) * func_385(iParam1)));
break;
case 10:
return floor((to_float(8800) * func_385(iParam1)));
break;
case 11:
return floor((to_float(9500) * func_385(iParam1)));
break;
case 12:
return floor((to_float(11075) * func_385(iParam1)));
break;
case 13:
return floor((to_float(13525) * func_385(iParam1)));
break;
case 14:
return floor((to_float(16850) * func_385(iParam1)));
break;
case 15:
return floor((to_float(21050) * func_385(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(600) * func_385(iParam1)));
break;
case 1:
return floor((to_float(830) * func_385(iParam1)));
break;
case 2:
return floor((to_float(1000) * func_385(iParam1)));
break;
case 3:
return floor((to_float(1500) * func_385(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_385(iParam1)));
break;
case 5:
return floor((to_float(14500) * func_385(iParam1)));
break;
case 6:
return floor((to_float(15000) * func_385(iParam1)));
break;
case 7:
return floor((to_float(15750) * func_385(iParam1)));
break;
case 8:
return floor((to_float(16200) * func_385(iParam1)));
break;
case 9:
return floor((to_float(16500) * func_385(iParam1)));
break;
case 10:
return floor((to_float(18000) * func_385(iParam1)));
break;
case 11:
return floor((to_float(18100) * func_385(iParam1)));
break;
case 12:
return floor((to_float(18325) * func_385(iParam1)));
break;
case 13:
return floor((to_float(18675) * func_385(iParam1)));
break;
case 14:
return floor((to_float(19150) * func_385(iParam1)));
break;
case 15:
return floor((to_float(19750) * func_385(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(400) * func_385(iParam1)));
break;
case 1:
return floor((to_float(480) * func_385(iParam1)));
break;
case 2:
return floor((to_float(580) * func_385(iParam1)));
break;
case 3:
return floor((to_float(700) * func_385(iParam1)));
break;
case 4:
return floor((to_float(1000) * func_385(iParam1)));
break;
case 5:
return floor((to_float(1200) * func_385(iParam1)));
break;
case 6:
return floor((to_float(1250) * func_385(iParam1)));
break;
case 7:
return floor((to_float(1330) * func_385(iParam1)));
break;
case 8:
return floor((to_float(1350) * func_385(iParam1)));
break;
case 9:
return floor((to_float(1750) * func_385(iParam1)));
break;
case 10:
return floor((to_float(2500) * func_385(iParam1)));
break;
case 11:
return floor((to_float(2550) * func_385(iParam1)));
break;
case 12:
return floor((to_float(2625) * func_385(iParam1)));
break;
case 13:
return floor((to_float(2725) * func_385(iParam1)));
break;
case 14:
return floor((to_float(2850) * func_385(iParam1)));
break;
case 15:
return floor((to_float(3000) * func_385(iParam1)));
break;
}}
break;
case 46:
if(((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(6000) * func_386(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24132;
}
else{
return floor(((to_float(7050) * func_386(iParam1)) * fVar0));
}
break;
case 2:
return floor(((to_float(10000) * func_386(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(13000) * func_386(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(14000) * func_386(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(16000) * func_386(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(16500) * func_386(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(17000) * func_386(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(17500) * func_386(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(18000) * func_386(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(18500) * func_386(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(19000) * func_386(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(19500) * func_386(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(20000) * func_386(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(20500) * func_386(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(21000) * func_386(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(21500) * func_386(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(22750) * func_386(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(24000) * func_386(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(25250) * func_386(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(26500) * func_386(iParam1)) * fVar0));
break;
case 21:
return floor(((to_float(27750) * func_386(iParam1)) * fVar0));
break;
case 22:
return floor(((to_float(29000) * func_386(iParam1)) * fVar0));
break;
case 23:
return floor(((to_float(30250) * func_386(iParam1)) * fVar0));
break;
case 24:
return floor(((to_float(31500) * func_386(iParam1)) * fVar0));
break;
case 25:
return floor(((to_float(32750) * func_386(iParam1)) * fVar0));
break;
case 26:
return floor(((to_float(34000) * func_386(iParam1)) * fVar0));
break;
case 27:
return floor(((to_float(35250) * func_386(iParam1)) * fVar0));
break;
case 28:
return floor(((to_float(36500) * func_386(iParam1)) * fVar0));
break;
case 29:
return floor(((to_float(37750) * func_386(iParam1)) * fVar0));
break;
case 30:
return floor(((to_float(38250) * func_386(iParam1)) * fVar0));
break;
case 31:
return floor(((to_float(38750) * func_386(iParam1)) * fVar0));
break;
}}elseif(Global_1585918==37){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_386(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24818) * func_386(iParam1)));
break;
case 2:
return floor((to_float(Global_262145.f_24819) * func_386(iParam1)));
break;
case 3:
return floor((to_float(285000) * func_386(iParam1)));
break;
case 4:
return floor((to_float(310000) * func_386(iParam1)));
break;
case 5:
return floor((to_float(330000) * func_386(iParam1)));
break;
}}elseif(Global_1585918==1 || Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_386(iParam1)));
break;
case 1:
return floor((to_float(1500) * func_386(iParam1)));
break;
case 2:
return floor((to_float(1900) * func_386(iParam1)));
break;
case 3:
return floor((to_float(2600) * func_386(iParam1)));
break;
case 4:
return floor((to_float(3500) * func_386(iParam1)));
break;
case 5:
return floor((to_float(4000) * func_386(iParam1)));
break;
case 6:
return floor((to_float(4750) * func_386(iParam1)));
break;
case 7:
return floor((to_float(5000) * func_386(iParam1)));
break;
case 8:
return floor((to_float(5250) * func_386(iParam1)));
break;
case 9:
return floor((to_float(5500) * func_386(iParam1)));
break;
case 10:
return floor((to_float(5750) * func_386(iParam1)));
break;
case 11:
return floor((to_float(6000) * func_386(iParam1)));
break;
case 12:
return floor((to_float(6250) * func_386(iParam1)));
break;
case 13:
return floor((to_float(6500) * func_386(iParam1)));
break;
case 14:
return floor((to_float(6750) * func_386(iParam1)));
break;
case 15:
return floor((to_float(7000) * func_386(iParam1)));
break;
case 16:
return floor((to_float(7250) * func_386(iParam1)));
break;
case 17:
return floor((to_float(8750) * func_386(iParam1)));
break;
case 18:
return floor((to_float(10250) * func_386(iParam1)));
break;
case 19:
return floor((to_float(11750) * func_386(iParam1)));
break;
case 20:
return floor((to_float(13250) * func_386(iParam1)));
break;
case 21:
return floor((to_float(13750) * func_386(iParam1)));
break;
case 22:
return floor((to_float(14250) * func_386(iParam1)));
break;
case 23:
return floor((to_float(14750) * func_386(iParam1)));
break;
case 24:
return floor((to_float(15250) * func_386(iParam1)));
break;
case 25:
return floor((to_float(15750) * func_386(iParam1)));
break;
case 26:
return floor((to_float(16250) * func_386(iParam1)));
break;
case 27:
return floor((to_float(16750) * func_386(iParam1)));
break;
case 28:
return floor((to_float(17250) * func_386(iParam1)));
break;
case 29:
return floor((to_float(17750) * func_386(iParam1)));
break;
case 30:
return floor((to_float(18250) * func_386(iParam1)));
break;
case 31:
return floor((to_float(38750) * func_386(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(300) * func_386(iParam1)));
break;
case 1:
return floor((to_float(550) * func_386(iParam1)));
break;
case 2:
return floor((to_float(700) * func_386(iParam1)));
break;
case 3:
return floor((to_float(1050) * func_386(iParam1)));
break;
case 4:
return floor((to_float(1500) * func_386(iParam1)));
break;
case 5:
return floor((to_float(2000) * func_386(iParam1)));
break;
case 6:
return floor((to_float(2300) * func_386(iParam1)));
break;
case 7:
return floor((to_float(2500) * func_386(iParam1)));
break;
case 8:
return floor((to_float(3000) * func_386(iParam1)));
break;
case 9:
return floor((to_float(3500) * func_386(iParam1)));
break;
case 10:
return floor((to_float(4000) * func_386(iParam1)));
break;
case 11:
return floor((to_float(4500) * func_386(iParam1)));
break;
case 12:
return floor((to_float(5000) * func_386(iParam1)));
break;
case 13:
return floor((to_float(5500) * func_386(iParam1)));
break;
case 14:
return floor((to_float(6000) * func_386(iParam1)));
break;
case 15:
return floor((to_float(6500) * func_386(iParam1)));
break;
case 16:
return floor((to_float(7000) * func_386(iParam1)));
break;
case 17:
return floor((to_float(7750) * func_386(iParam1)));
break;
case 18:
return floor((to_float(8500) * func_386(iParam1)));
break;
case 19:
return floor((to_float(9250) * func_386(iParam1)));
break;
case 20:
return floor((to_float(10000) * func_386(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(200) * func_386(iParam1)));
break;
case 1:
return floor((to_float(400) * func_386(iParam1)));
break;
case 2:
return floor((to_float(600) * func_386(iParam1)));
break;
case 3:
return floor((to_float(800) * func_386(iParam1)));
break;
case 4:
return floor((to_float(1000) * func_386(iParam1)));
break;
case 5:
return floor((to_float(1200) * func_386(iParam1)));
break;
case 6:
return floor((to_float(1500) * func_386(iParam1)));
break;
case 7:
return floor((to_float(1600) * func_386(iParam1)));
break;
case 8:
return floor((to_float(1700) * func_386(iParam1)));
break;
case 9:
return floor((to_float(1800) * func_386(iParam1)));
break;
case 10:
return floor((to_float(1900) * func_386(iParam1)));
break;
case 11:
return floor((to_float(2000) * func_386(iParam1)));
break;
case 12:
return floor((to_float(2100) * func_386(iParam1)));
break;
case 13:
return floor((to_float(2200) * func_386(iParam1)));
break;
case 14:
return floor((to_float(2300) * func_386(iParam1)));
break;
case 15:
return floor((to_float(2400) * func_386(iParam1)));
break;
case 16:
return floor((to_float(2500) * func_386(iParam1)));
break;
case 17:
return floor((to_float(2850) * func_386(iParam1)));
break;
case 18:
return floor((to_float(3200) * func_386(iParam1)));
break;
case 19:
return floor((to_float(3550) * func_386(iParam1)));
break;
case 20:
return floor((to_float(3900) * func_386(iParam1)));
break;
}}elseif(Global_1585918==35){
switch (iParam1){
case 0:
return floor((to_float(700) * func_386(iParam1)));
break;
case 1:
return Global_262145.f_23923;
break;
case 2:
return Global_262145.f_23924;
break;
case 3:
return Global_262145.f_23925;
break;
}}elseif(Global_1585918==36){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_386(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_24816) * func_386(iParam1)));
break;
case 2:
return floor((to_float(12000) * func_386(iParam1)));
break;
case 3:
return floor((to_float(18000) * func_386(iParam1)));
break;
case 4:
return floor((to_float(26000) * func_386(iParam1)));
break;
case 5:
return floor((to_float(39500) * func_386(iParam1)));
break;
}}
break;
case 47:
switch (iParam1){
case 0:
return floor((to_float(200) * func_384(iParam1)));
break;
case 1:
return floor((to_float(1000) * func_384(iParam1)));
break;
case 2:
return floor((to_float(2000) * func_384(iParam1)));
break;
case 3:
return floor((to_float(3400) * func_384(iParam1)));
break;
case 4:
return floor((to_float(4400) * func_384(iParam1)));
break;
case 5:
return floor((to_float(4600) * func_384(iParam1)));
break;
}
break;
case 53:
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==35) || Global_1585918==34) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(5000) * func_383(iParam1)));
break;
case 1:
return floor((to_float(50000) * func_383(iParam1)));
break;
}}elseif(Global_1585918==1){
switch (iParam1){
case 0:
return floor((to_float(3250) * func_383(iParam1)));
break;
case 1:
return floor((to_float(42500) * func_383(iParam1)));
break;
}}elseif(Global_1585918==2){
switch (iParam1){
case 0:
return floor((to_float(2500) * func_383(iParam1)));
break;
case 1:
return floor((to_float(35000) * func_383(iParam1)));
break;
}}elseif(((Global_1585918==0 || Global_1585918==28) || Global_1585918==6) || Global_1585918==11){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_383(iParam1)));
break;
case 1:
return floor((to_float(30000) * func_383(iParam1)));
break;
}}elseif(Global_1585918==4){
switch (iParam1){
case 0:
return floor((to_float(1000) * func_383(iParam1)));
break;
case 1:
return floor((to_float(24000) * func_383(iParam1)));
break;
}}
break;
case 58:
switch (iParam1){
case 0:
return Global_262145.f_31320;
break;
case 2:
return floor((to_float(25000) * func_382(iParam1)));
break;
case 1:
return Global_262145.f_31321;
break;
case 10:
return floor((to_float(200) * func_382(iParam1)));
break;
case 11:
return floor((to_float(5000) * func_382(iParam1)));
break;
case 12:
return Global_262145.f_12690;
break;
case 13:
return Global_262145.f_12691;
break;
case 14:
return Global_262145.f_12692;
break;
case 15:
return Global_262145.f_12693;
break;
case 16:
return Global_262145.f_12694;
break;
case 17:
return Global_262145.f_12695;
break;
case 18:
return 12345;
case 19:
return 12345;
case 29:
return floor((to_float(1500) * func_382(iParam1)));
break;
case 30:
return floor((to_float(5000) * func_382(iParam1)));
break;
case 31:
return floor((to_float(10000) * func_382(iParam1)));
break;
case 32:
return floor((to_float(12500) * func_382(iParam1)));
break;
case 33:
return floor((to_float(14000) * func_382(iParam1)));
break;
case 34:
return floor((to_float(15000) * func_382(iParam1)));
break;
case 35:
return floor((to_float(17500) * func_382(iParam1)));
break;
case 36:
return floor((to_float(20000) * func_382(iParam1)));
break;
case 37:
return Global_262145.f_8126;
break;
case 38:
return Global_262145.f_8127;
break;
case 39:
return Global_262145.f_8280;
break;
case 40:
if(func_359()){
return 0;
}
return floor((to_float(25000) * func_382(iParam1)));
break;
}
break;
case 45:
if(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(6000) * func_386(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24132;
}
else{
return floor(((to_float(7050) * func_386(iParam1)) * fVar0));
}
break;
case 2:
return floor(((to_float(10000) * func_386(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(13000) * func_386(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(14000) * func_386(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(16000) * func_386(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(16500) * func_386(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(17000) * func_386(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(17500) * func_386(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(18000) * func_386(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(18500) * func_386(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(19000) * func_386(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(19500) * func_386(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(20000) * func_386(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(20500) * func_386(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(21000) * func_386(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(21500) * func_386(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(22750) * func_386(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(24000) * func_386(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(25250) * func_386(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(26500) * func_386(iParam1)) * fVar0));
break;
case 21:
return floor(((to_float(27750) * func_386(iParam1)) * fVar0));
break;
case 22:
return floor(((to_float(29000) * func_386(iParam1)) * fVar0));
break;
case 23:
return floor(((to_float(30250) * func_386(iParam1)) * fVar0));
break;
case 24:
return floor(((to_float(31500) * func_386(iParam1)) * fVar0));
break;
case 25:
return floor(((to_float(32750) * func_386(iParam1)) * fVar0));
break;
}}
break;
case 56:
switch (iParam1){
case 0:
return 1600;
break;
case 1:
return 1600;
break;
}
break;
case 57:
switch (iParam1){
case 0:
return 1500;
break;
case 1:
return 800;
break;
}
break;
case 60:
switch (iParam1){
case 0:
return floor((to_float(500) * func_381(iParam1)));
break;
case 1:
return floor((to_float(1500) * func_381(iParam1)));
break;
case 2:
return floor((to_float(3500) * func_381(iParam1)));
break;
case 3:
return floor((to_float(5000) * func_381(iParam1)));
break;
case 4:
return floor((to_float(6000) * func_381(iParam1)));
break;
case 5:
return Global_262145.f_8121;
break;
}
break;
case 15:
if(iVar1==joaat("apc")){
switch (iParam1){
case 22:
return floor((to_float(Global_262145.f_21379) * func_380(1)));
break;
}}elseif(iVar1==joaat("dune3")){
switch (iParam1){
case 22:
return floor((to_float(Global_262145.f_21384) * func_380(1)));
break;
}}elseif(iVar1==joaat("halftrack")){
switch (iParam1){
case 22:
return floor((to_float(Global_262145.f_21389) * func_380(1)));
break;
}}elseif(iVar1==joaat("tampa3")){
switch (iParam1){
case 22:
return floor((to_float(Global_262145.f_21397) * func_380(1)));
break;
}}elseif(iVar1==joaat("insurgent3")){
switch (iParam1){
case 22:
return floor((to_float(Global_262145.f_21404) * func_380(1)));
break;
}}elseif(iVar1==joaat("technical3")){
switch (iParam1){
case 22:
return floor((to_float(Global_262145.f_21409) * func_380(1)));
break;
}}elseif(Global_1585918==30){
switch (iParam1){
case 22:
return floor((to_float(99000) * func_380(1)));
break;
}}elseif(Global_1585918==29){
switch (iParam1){
case 22:
return floor((to_float(99000) * func_380(1)));
break;
}}elseif(Global_1585918==33){
iParam1=(iParam1 - 21);
switch (iParam1){
case 1:
return Global_262145.f_22588;
break;
case 2:
return Global_262145.f_22587;
break;
case 3:
return Global_262145.f_22586;
break;
case 4:
return Global_262145.f_22589;
break;
}}elseif(Global_1585918==34){
iParam1=(iParam1 - 21);
switch (iParam1){
case 1:
return Global_262145.f_22600;
break;
case 2:
return Global_262145.f_22599;
break;
case 3:
return Global_262145.f_22598;
break;
case 4:
return Global_262145.f_22601;
break;
}}elseif(Global_1585918==38){
if(iParam1 > 20){
iParam1=(iParam1 - 21);
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26671) * func_380(0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26672) * Global_262145.f_26654) * func_380(1)));
}else{
return floor((to_float(Global_262145.f_26672) * func_380(1)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26673) * Global_262145.f_26654) * func_380(2)));
}else{
return floor((to_float(Global_262145.f_26673) * func_380(2)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26674) * Global_262145.f_26654) * func_380(3)));
}else{
return floor((to_float(Global_262145.f_26674) * func_380(3)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26675) * Global_262145.f_26654) * func_380(4)));
}else{
return floor((to_float(Global_262145.f_26675) * func_380(4)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(Global_262145.f_26676) * Global_262145.f_26654) * func_380(5)));
}else{
return floor((to_float(Global_262145.f_26676) * func_380(5)));
}
break;
}}else{
switch (iParam1){
case 0:
return floor((to_float(300) * func_379(iParam1)));
break;
case 1:
return floor((to_float(900) * func_379(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_379(iParam1)));
break;
case 3:
return floor((to_float(1700) * func_379(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_379(iParam1)));
break;
case 5:
return floor((to_float(2750) * func_379(iParam1)));
break;
case 6:
return floor((to_float(3300) * func_379(iParam1)));
break;
case 7:
return floor((to_float(3900) * func_379(iParam1)));
break;
case 8:
return floor((to_float(4350) * func_379(iParam1)));
break;
case 9:
return floor((to_float(5000) * func_379(iParam1)));
break;
case 10:
return floor((to_float(5150) * func_379(iParam1)));
break;
case 11:
return floor((to_float(5300) * func_379(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_379(iParam1)));
break;
case 13:
return floor((to_float(5600) * func_379(iParam1)));
break;
case 14:
return floor((to_float(5750) * func_379(iParam1)));
break;
case 15:
return floor((to_float(5900) * func_379(iParam1)));
break;
case 16:
return floor((to_float(6050) * func_379(iParam1)));
break;
case 17:
return floor((to_float(6600) * func_379(iParam1)));
break;
case 18:
return floor((to_float(7150) * func_379(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_379(iParam1)));
break;
case 20:
return floor((to_float(8250) * func_379(iParam1)));
break;
}}}elseif(Global_1585918==39){
iParam1=(iParam1 - 21);
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26729) * func_380(0)));
break;
case 1:
return floor((to_float(Global_262145.f_26730) * func_380(1)));
break;
case 2:
return floor((to_float(Global_262145.f_26731) * func_380(2)));
break;
}}elseif((func_347(Global_1585919) && iVar1 !=joaat("fcr2")) && iVar1 !=joaat("diablous2")){
iParam1=(iParam1 - 21);
switch (iParam1){
case 0:
return floor((to_float(300) * func_380(0)));
break;
case 1:
return floor((to_float(900) * func_380(1)));
break;
case 2:
return floor((to_float(1500) * func_380(2)));
break;
case 3:
return floor((to_float(1700) * func_380(3)));
break;
case 4:
return floor((to_float(2000) * func_380(4)));
break;
case 5:
return floor((to_float(2750) * func_380(5)));
break;
case 6:
return floor((to_float(3300) * func_380(5)));
break;
case 7:
return floor((to_float(3900) * func_380(6)));
break;
case 8:
return floor((to_float(4350) * func_380(7)));
break;
case 9:
return floor((to_float(5000) * func_380(8)));
break;
case 10:
return floor((to_float(5150) * func_380(9)));
break;
case 11:
return floor((to_float(5300) * func_380(10)));
break;
case 12:
return floor((to_float(5450) * func_380(11)));
break;
case 13:
return floor((to_float(5600) * func_380(12)));
break;
case 14:
return floor((to_float(5750) * func_380(13)));
break;
case 15:
return floor((to_float(5900) * func_380(14)));
break;
case 16:
return floor((to_float(6050) * func_380(15)));
break;
}}elseif(Global_1585918==35){
switch (iParam1){
case 0:
return floor((to_float(300) * func_379(iParam1)));
break;
case 1:
return floor((to_float(900) * func_379(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_379(iParam1)));
break;
case 3:
return floor((to_float(1700) * func_379(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_379(iParam1)));
break;
case 5:
return floor((to_float(2750) * func_379(iParam1)));
break;
case 6:
return floor((to_float(3300) * func_379(iParam1)));
break;
case 7:
return floor((to_float(3900) * func_379(iParam1)));
break;
case 8:
return floor((to_float(4350) * func_379(iParam1)));
break;
case 9:
return floor((to_float(5000) * func_379(iParam1)));
break;
case 10:
return floor((to_float(5150) * func_379(iParam1)));
break;
case 11:
return floor((to_float(5300) * func_379(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_379(iParam1)));
break;
case 13:
return floor((to_float(5600) * func_379(iParam1)));
break;
case 14:
return floor((to_float(5750) * func_379(iParam1)));
break;
case 15:
return floor((to_float(5900) * func_379(iParam1)));
break;
case 16:
return floor((to_float(6050) * func_379(iParam1)));
break;
case 17:
return floor((to_float(6600) * func_379(iParam1)));
break;
case 18:
return floor((to_float(7150) * func_379(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_379(iParam1)));
break;
case 20:
return floor((to_float(8250) * func_379(iParam1)));
break;
}}elseif(Global_1585918==31){
switch (iParam1){
case 0:
return floor((to_float(300) * func_379(iParam1)));
break;
case 1:
return floor((to_float(900) * func_379(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_379(iParam1)));
break;
case 3:
return floor((to_float(1700) * func_379(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_379(iParam1)));
break;
case 5:
return floor((to_float(2750) * func_379(iParam1)));
break;
case 6:
return floor((to_float(3300) * func_379(iParam1)));
break;
case 7:
return floor((to_float(3900) * func_379(iParam1)));
break;
case 8:
return floor((to_float(4350) * func_379(iParam1)));
break;
case 9:
return floor((to_float(5000) * func_379(iParam1)));
break;
case 10:
return floor((to_float(5150) * func_379(iParam1)));
break;
case 11:
return floor((to_float(5300) * func_379(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_379(iParam1)));
break;
case 13:
return floor((to_float(5600) * func_379(iParam1)));
break;
case 14:
return floor((to_float(5750) * func_379(iParam1)));
break;
case 15:
return floor((to_float(5900) * func_379(iParam1)));
break;
case 16:
return floor((to_float(6050) * func_379(iParam1)));
break;
case 17:
return floor((to_float(6600) * func_379(iParam1)));
break;
case 18:
return floor((to_float(7150) * func_379(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_379(iParam1)));
break;
case 20:
return floor((to_float(8250) * func_379(iParam1)));
break;
case 21:
return floor((to_float(4500) * func_380(0)));
break;
case 22:
return floor((to_float(99000) * func_380(1)));
break;
case 23:
return floor((to_float(120000) * func_380(2)));
break;
case 24:
return floor((to_float(145000) * func_380(3)));
break;
case 25:
return floor((to_float(169000) * func_380(4)));
break;
case 26:
return floor((to_float(200000) * func_380(5)));
break;
}}elseif(Global_1585918==36 || Global_1585918==37){
switch (iParam1){
case 0:
return floor((to_float(300) * func_379(iParam1)));
break;
case 1:
return floor((to_float(900) * func_379(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_379(iParam1)));
break;
case 3:
return floor((to_float(1700) * func_379(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_379(iParam1)));
break;
case 5:
return floor((to_float(2750) * func_379(iParam1)));
break;
case 6:
return floor((to_float(3300) * func_379(iParam1)));
break;
case 7:
return floor((to_float(3900) * func_379(iParam1)));
break;
case 8:
return floor((to_float(4350) * func_379(iParam1)));
break;
case 9:
return floor((to_float(5000) * func_379(iParam1)));
break;
case 10:
return floor((to_float(5150) * func_379(iParam1)));
break;
case 11:
return floor((to_float(5300) * func_379(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_379(iParam1)));
break;
case 13:
return floor((to_float(5600) * func_379(iParam1)));
break;
case 14:
return floor((to_float(5750) * func_379(iParam1)));
break;
case 15:
return floor((to_float(5900) * func_379(iParam1)));
break;
case 16:
return floor((to_float(6050) * func_379(iParam1)));
break;
case 17:
return floor((to_float(6600) * func_379(iParam1)));
break;
case 18:
return floor((to_float(7150) * func_379(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_379(iParam1)));
break;
case 20:
return floor((to_float(8250) * func_379(iParam1)));
break;
case 21:
return floor((to_float(4500) * func_380(0)));
break;
case 22:
return floor((to_float(Global_262145.f_24815) * func_380(1)));
break;
case 23:
return floor((to_float(120000) * func_380(2)));
break;
case 24:
return floor((to_float(145000) * func_380(3)));
break;
case 25:
return floor((to_float(169000) * func_380(4)));
break;
case 26:
return floor((to_float(200000) * func_380(5)));
break;
}}else{
switch (iParam1){
case 0:
return floor((to_float(300) * func_379(iParam1)));
break;
case 1:
return floor((to_float(900) * func_379(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_379(iParam1)));
break;
case 3:
return floor((to_float(1700) * func_379(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_379(iParam1)));
break;
case 5:
return floor((to_float(2750) * func_379(iParam1)));
break;
case 6:
return floor((to_float(3300) * func_379(iParam1)));
break;
case 7:
return floor((to_float(3900) * func_379(iParam1)));
break;
case 8:
return floor((to_float(4350) * func_379(iParam1)));
break;
case 9:
return floor((to_float(5000) * func_379(iParam1)));
break;
case 10:
return floor((to_float(5150) * func_379(iParam1)));
break;
case 11:
return floor((to_float(5300) * func_379(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_379(iParam1)));
break;
case 13:
return floor((to_float(5600) * func_379(iParam1)));
break;
case 14:
return floor((to_float(5750) * func_379(iParam1)));
break;
case 15:
return floor((to_float(5900) * func_379(iParam1)));
break;
case 16:
return floor((to_float(6050) * func_379(iParam1)));
break;
case 17:
return floor((to_float(6600) * func_379(iParam1)));
break;
case 18:
return floor((to_float(7150) * func_379(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_379(iParam1)));
break;
case 20:
return floor((to_float(8250) * func_379(iParam1)));
break;
case 21:
return floor((to_float(300) * func_380(0)));
break;
case 22:
return floor((to_float(900) * func_380(1)));
break;
case 23:
return floor((to_float(1500) * func_380(2)));
break;
case 24:
return floor((to_float(1700) * func_380(3)));
break;
case 25:
return floor((to_float(2000) * func_380(4)));
break;
case 26:
return floor((to_float(2750) * func_380(5)));
break;
case 27:
return floor((to_float(3300) * func_380(5)));
break;
case 28:
return floor((to_float(3900) * func_380(6)));
break;
case 29:
return floor((to_float(4350) * func_380(7)));
break;
case 30:
return floor((to_float(5000) * func_380(8)));
break;
case 31:
return floor((to_float(5150) * func_380(9)));
break;
case 32:
return floor((to_float(5300) * func_380(10)));
break;
case 33:
return floor((to_float(5450) * func_380(11)));
break;
case 34:
return floor((to_float(5600) * func_380(12)));
break;
case 35:
return floor((to_float(5750) * func_380(13)));
break;
case 36:
return floor((to_float(5900) * func_380(14)));
break;
case 37:
return floor((to_float(6050) * func_380(15)));
break;
}}
break;
case 95:
if(Global_1585918==36 || Global_1585918==37){
switch (iParam1){
case 0:
return floor((to_float(4500) * func_380(0)));
break;
case 1:
return floor((to_float(Global_262145.f_24815) * func_380(1)));
break;
case 2:
return floor((to_float(120000) * func_380(2)));
break;
case 3:
return floor((to_float(145000) * func_380(3)));
break;
case 4:
return floor((to_float(169000) * func_380(4)));
break;
case 5:
return floor((to_float(200000) * func_380(5)));
break;
}}elseif(Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26727) * func_379(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_26728) * func_379(iParam1)));
break;
}}else{
switch (iParam1){
case 0:
return floor(((to_float(300) * func_379(iParam1)) * fVar0));
break;
case 1:
return floor(((to_float(900) * func_379(iParam1)) * fVar0));
break;
case 2:
return floor(((to_float(1500) * func_379(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(1700) * func_379(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(2000) * func_379(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(2750) * func_379(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(3300) * func_379(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(3900) * func_379(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(4350) * func_379(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(5000) * func_379(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(5150) * func_379(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(5300) * func_379(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(5450) * func_379(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(5600) * func_379(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(5750) * func_379(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(5900) * func_379(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(6050) * func_379(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(6600) * func_379(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(7150) * func_379(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(7700) * func_379(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(8250) * func_379(iParam1)) * fVar0));
break;
}}
break;
case 18:
if(iVar1==joaat("tampa3")){
switch (iParam1){
case 0:
return floor((to_float(3500) * func_399(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21392) * func_399(iParam1)));
break;
}}elseif(Global_1585918==30){
switch (iParam1){
case 0:
return floor((to_float(5000) * func_402(iParam1)));
break;
case 1:
return floor((to_float(85000) * func_402(iParam1)));
break;
}}elseif(Global_1585918==33){
switch (iParam1){
case 1:
return Global_262145.f_22584;
break;
case 2:
return Global_262145.f_22585;
break;
case 29:
return Global_262145.f_22590;
break;
case 30:
return Global_262145.f_22590;
break;
case 31:
return Global_262145.f_22590;
break;
case 32:
return Global_262145.f_22590;
break;
case 33:
return Global_262145.f_22590;
break;
case 34:
return Global_262145.f_22590;
break;
case 35:
return Global_262145.f_22590;
break;
case 36:
return Global_262145.f_22590;
break;
case 37:
return Global_262145.f_22590;
break;
case 38:
return Global_262145.f_22590;
break;
case 39:
return Global_262145.f_22590;
break;
case 40:
return Global_262145.f_22590;
break;
}}elseif(Global_1585918==34){
switch (iParam1){
case 1:
return Global_262145.f_22596;
break;
case 2:
return Global_262145.f_22597;
break;
case 29:
return Global_262145.f_22602;
break;
case 30:
return Global_262145.f_22602;
break;
case 31:
return Global_262145.f_22602;
break;
case 32:
return Global_262145.f_22602;
break;
case 33:
return Global_262145.f_22602;
break;
case 34:
return Global_262145.f_22602;
break;
case 35:
return Global_262145.f_22602;
break;
case 36:
return Global_262145.f_22602;
break;
case 37:
return Global_262145.f_22602;
break;
case 38:
return Global_262145.f_22602;
break;
case 39:
return Global_262145.f_22602;
break;
case 40:
return Global_262145.f_22602;
break;
}}elseif((Global_1585918==3 || Global_1585918==38) || Global_1585918==3){
switch (iParam1){
case 0:
return floor((to_float(2200) * func_402(iParam1)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24128;
}
else{
return floor(((to_float(4600) * func_402(iParam1)) * fVar0));
}
break;
case 2:
return floor(((to_float(7400) * func_402(iParam1)) * fVar0));
break;
case 3:
return floor(((to_float(11700) * func_402(iParam1)) * fVar0));
break;
case 4:
return floor(((to_float(14500) * func_402(iParam1)) * fVar0));
break;
case 5:
return floor(((to_float(14700) * func_402(iParam1)) * fVar0));
break;
case 6:
return floor(((to_float(14900) * func_402(iParam1)) * fVar0));
break;
case 7:
return floor(((to_float(15100) * func_402(iParam1)) * fVar0));
break;
case 8:
return floor(((to_float(15300) * func_402(iParam1)) * fVar0));
break;
case 9:
return floor(((to_float(15500) * func_402(iParam1)) * fVar0));
break;
case 10:
return floor(((to_float(15700) * func_402(iParam1)) * fVar0));
break;
case 11:
return floor(((to_float(15900) * func_402(iParam1)) * fVar0));
break;
case 12:
return floor(((to_float(16100) * func_402(iParam1)) * fVar0));
break;
case 13:
return floor(((to_float(16300) * func_402(iParam1)) * fVar0));
break;
case 14:
return floor(((to_float(16500) * func_402(iParam1)) * fVar0));
break;
case 15:
return floor(((to_float(16700) * func_402(iParam1)) * fVar0));
break;
case 16:
return floor(((to_float(16900) * func_402(iParam1)) * fVar0));
break;
case 17:
return floor(((to_float(17100) * func_402(iParam1)) * fVar0));
break;
case 18:
return floor(((to_float(17300) * func_402(iParam1)) * fVar0));
break;
case 19:
return floor(((to_float(17500) * func_402(iParam1)) * fVar0));
break;
case 20:
return floor(((to_float(17700) * func_402(iParam1)) * fVar0));
break;
case 21:
return floor(((to_float(17900) * func_402(iParam1)) * fVar0));
break;
case 22:
return floor(((to_float(18100) * func_402(iParam1)) * fVar0));
break;
case 23:
return floor(((to_float(18300) * func_402(iParam1)) * fVar0));
break;
}}
break;
case 36:
if(iVar1==joaat("tampa3")){
switch (iParam1){
case 0:
return floor((to_float(3500) * func_399(iParam1)));
break;
case 1:
return floor((to_float(Global_262145.f_21393) * func_399(iParam1)));
break;
}}elseif(Global_1585918==30){
switch (iParam1){
case 0:
return floor((to_float(3500) * func_399(iParam1)));
break;
case 1:
return floor((to_float(92500) * func_399(iParam1)));
break;
}}elseif(Global_1585918==3 || Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(2200) * func_399(0)));
break;
case 1:
if(VEHICLE::IS_VEHICLE_MODEL(Global_1585919, joaat("cheburek"))){
return Global_262145.f_24129;
}
elseif(bParam4){
return floor(((to_float(4600) * Global_262145.f_26654) * func_399(1)));
}
else{
return floor((to_float(4600) * func_399(1)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(7400) * Global_262145.f_26654) * func_399(2)));
}
else{
return floor((to_float(7400) * func_399(2)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(11700) * Global_262145.f_26654) * func_399(3)));
}
else{
return floor((to_float(11700) * func_399(3)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(14500) * Global_262145.f_26654) * func_399(4)));
}
else{
return floor((to_float(14500) * func_399(4)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(14700) * Global_262145.f_26654) * func_399(5)));
}
else{
return floor((to_float(14700) * func_399(5)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(14900) * Global_262145.f_26654) * func_399(6)));
}
else{
return floor((to_float(14900) * func_399(6)));
}
break;
case 7:
return floor((to_float(15100) * func_399(7)));
break;
case 8:
return floor((to_float(15300) * func_399(8)));
break;
case 9:
return floor((to_float(15500) * func_399(9)));
break;
case 10:
return floor((to_float(15700) * func_399(10)));
break;
case 11:
return floor((to_float(15900) * func_399(11)));
break;
case 12:
return floor((to_float(16100) * func_399(12)));
break;
case 13:
return floor((to_float(16300) * func_399(13)));
break;
case 14:
return floor((to_float(16500) * func_399(14)));
break;
case 15:
return floor((to_float(16700) * func_399(15)));
break;
case 16:
return floor((to_float(16900) * func_399(16)));
break;
case 17:
return floor((to_float(17100) * func_399(17)));
break;
case 18:
return floor((to_float(17300) * func_399(18)));
break;
case 19:
return floor((to_float(17500) * func_399(19)));
break;
}}
break;
}
switch (iParam0){
case 62:
case 63:
case 66:
case 90:
case 67:
case 68:
case 69:
case 70:
case 72:
case 74:
case 76:
case 83:
case 84:
return floor(((to_float(func_378(iParam0, 0)) * fVar0) * func_323(iParam1, 1)));
break;
case 71:
return floor(((to_float(func_378(iParam0, 0)) * fVar0) * func_323(iParam1, 1)));
case 73:
return floor(((to_float(func_378(iParam0, 0)) * fVar0) * func_323(iParam1, 1)));
break;
case 91:
if(func_377(iVar1) || func_376(iVar1)){
switch (iParam1){
case 0:
return floor((to_float(300) * func_380(0)));
case 1:
return floor((to_float(900) * func_380(1)));
case 2:
return floor((to_float(1500) * func_380(2)));
case 3:
return floor((to_float(1700) * func_380(3)));
case 4:
return floor((to_float(2000) * func_380(4)));
case 5:
return floor((to_float(2750) * func_380(5)));
case 6:
return floor((to_float(3300) * func_380(5)));
case 7:
return floor((to_float(3900) * func_380(6)));
case 8:
return floor((to_float(4350) * func_380(7)));
case 9:
return floor((to_float(5000) * func_380(8)));
case 10:
return floor((to_float(5150) * func_380(9)));
case 11:
return floor((to_float(5300) * func_380(10)));
case 12:
return floor((to_float(5450) * func_380(11)));
case 13:
return floor((to_float(5600) * func_380(12)));
case 14:
return floor((to_float(5750) * func_380(13)));
case 15:
return floor((to_float(5900) * func_380(14)));
case 16:
return floor((to_float(6050) * func_380(15)));
}
default:
}
return floor(((to_float(func_378(iParam0, 0)) * fVar0) * func_323(iParam1, 1)));
break;
case 64:
if(iVar1==joaat("kanjo") || func_377(iVar1)){
switch (iParam1){
case 0:
return floor((to_float(300) * func_380(0)));
case 1:
return floor((to_float(900) * func_380(1)));
case 2:
return floor((to_float(1500) * func_380(2)));
default:
}}else{
return floor(((to_float(func_378(iParam0, 0)) * fVar0) * func_323(iParam1, 1)));
}
break;
case 79:
if(Global_1585918==38 && iVar1 !=joaat("greenwood")){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26677) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26678) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26678) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26679) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26679) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26680) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26680) * func_323(iParam1, 0)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26681) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26681) * func_323(iParam1, 0)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(Global_262145.f_26682) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26682) * func_323(iParam1, 0)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(Global_262145.f_26683) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26683) * func_323(iParam1, 0)));
}
break;
case 7:
if(bParam4){
return floor(((to_float(Global_262145.f_26684) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26684) * func_323(iParam1, 0)));
}
break;
}}else{
return floor((to_float(func_378(iParam0, 0)) * func_323(iParam1, 1)));
}
break;
case 81:
if(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26685) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26686) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
if(func_301(iVar1)){
return floor((to_float(Global_262145.f_32014) * func_323(iParam1, 0)));
}
return floor((to_float(Global_262145.f_26686) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26687) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
if(func_301(iVar1)){
return floor((to_float(Global_262145.f_32013) * func_323(iParam1, 0)));
}
return floor((to_float(Global_262145.f_26687) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26688) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26688) * func_323(iParam1, 0)));
}
break;
}}else{
return floor((to_float(func_378(iParam0, 0)) * func_323(iParam1, 1)));
}
break;
case 82:
if(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26689) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26690) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26690) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26691) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26691) * func_323(iParam1, 0)));
}
break;
}}else{
return floor((to_float(func_378(iParam0, 0)) * func_323(iParam1, 1)));
}
break;
case 80:
if(Global_1585918==38 && iVar1 !=joaat("virtue")){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26707) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26708) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26708) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26709) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26709) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26710) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26710) * func_323(iParam1, 0)));
}
break;
}}else{
return floor((to_float(func_378(iParam0, 0)) * func_323(iParam1, 1)));
}
break;
case 77:
if((Global_1585918==38 && iVar1 !=joaat("greenwood")) && iVar1 !=joaat("r300")){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26722) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26723) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26723) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26724) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26724) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26725) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26725) * func_323(iParam1, 0)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26726) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26726) * func_323(iParam1, 0)));
}
break;
}}else{
return floor((to_float(func_378(iParam0, 0)) * func_323(iParam1, 1)));
}
break;
case 78:
if(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26718) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26719) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26719) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26720) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26720) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26721) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26721) * func_323(iParam1, 0)));
}
break;
}}elseif(Global_1585918==39){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26732) * func_323(iParam1, 0)));
break;
case 1:
return floor((to_float(Global_262145.f_26733) * func_323(iParam1, 0)));
break;
case 2:
return floor((to_float(Global_262145.f_26734) * func_323(iParam1, 0)));
break;
case 3:
return floor((to_float(Global_262145.f_26735) * func_323(iParam1, 0)));
break;
}}else{
return floor((to_float(func_378(iParam0, 0)) * func_323(iParam1, 1)));
}
break;
case 65:
if(Global_1585918==38){
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_26696) * func_323(iParam1, 0)));
break;
case 1:
if(bParam4){
return floor(((to_float(Global_262145.f_26697) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26697) * func_323(iParam1, 0)));
}
break;
case 2:
if(bParam4){
return floor(((to_float(Global_262145.f_26698) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26698) * func_323(iParam1, 0)));
}
break;
case 3:
if(bParam4){
return floor(((to_float(Global_262145.f_26699) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26699) * func_323(iParam1, 0)));
}
break;
case 4:
if(bParam4){
return floor(((to_float(Global_262145.f_26700) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26700) * func_323(iParam1, 0)));
}
break;
case 5:
if(bParam4){
return floor(((to_float(Global_262145.f_26701) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26701) * func_323(iParam1, 0)));
}
break;
case 6:
if(bParam4){
return floor(((to_float(Global_262145.f_26702) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26702) * func_323(iParam1, 0)));
}
break;
case 7:
if(bParam4){
return floor(((to_float(Global_262145.f_26703) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26703) * func_323(iParam1, 0)));
}
break;
case 8:
if(bParam4){
return floor(((to_float(Global_262145.f_26704) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26704) * func_323(iParam1, 0)));
}
break;
case 9:
if(bParam4){
return floor(((to_float(Global_262145.f_26705) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26705) * func_323(iParam1, 0)));
}
break;
case 10:
if(bParam4){
return floor(((to_float(Global_262145.f_26706) * Global_262145.f_26654) * func_323(iParam1, 0)));
}
else{
return floor((to_float(Global_262145.f_26706) * func_323(iParam1, 0)));
}
break;
}}elseif(iVar1==joaat("gauntlet5") || func_377(iVar1)){
switch (iParam1){
case 0:
return floor((to_float(300) * func_379(iParam1)));
break;
case 1:
return floor((to_float(900) * func_379(iParam1)));
break;
case 2:
return floor((to_float(1500) * func_379(iParam1)));
break;
case 3:
return floor((to_float(1700) * func_379(iParam1)));
break;
case 4:
return floor((to_float(2000) * func_379(iParam1)));
break;
case 5:
return floor((to_float(2750) * func_379(iParam1)));
break;
case 6:
return floor((to_float(3300) * func_379(iParam1)));
break;
case 7:
return floor((to_float(3900) * func_379(iParam1)));
break;
case 8:
return floor((to_float(4350) * func_379(iParam1)));
break;
case 9:
return floor((to_float(5000) * func_379(iParam1)));
break;
case 10:
return floor((to_float(5150) * func_379(iParam1)));
break;
case 11:
return floor((to_float(5300) * func_379(iParam1)));
break;
case 12:
return floor((to_float(5450) * func_379(iParam1)));
break;
case 13:
return floor((to_float(5600) * func_379(iParam1)));
break;
case 14:
return floor((to_float(5750) * func_379(iParam1)));
break;
case 15:
return floor((to_float(5900) * func_379(iParam1)));
break;
case 16:
return floor((to_float(6050) * func_379(iParam1)));
break;
case 17:
return floor((to_float(6600) * func_379(iParam1)));
break;
case 18:
return floor((to_float(7150) * func_379(iParam1)));
break;
case 19:
return floor((to_float(7700) * func_379(iParam1)));
break;
case 20:
return floor((to_float(8250) * func_379(iParam1)));
break;
}}else{
if(iParam1==0){
return 0;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
switch (MISC::GET_HASH_KEY(sParam3)){
case -929847281:
return Global_262145.f_12563;
break;
case -1229552555:
return Global_262145.f_12564;
break;
case -2139842610:
return Global_262145.f_12565;
break;
case -1360507947:
return Global_262145.f_12566;
break;
case -1139644887:
return Global_262145.f_12567;
break;
case -1302211900:
return Global_262145.f_12568;
break;
case 1592228606:
return Global_262145.f_12569;
break;
case 798268505:
return Global_262145.f_12570;
break;
case 861643751:
return Global_262145.f_12571;
break;
case -558021330:
return Global_262145.f_12572;
break;
case -987459075:
return Global_262145.f_12573;
break;
case 917239050:
return Global_262145.f_12574;
break;
case 1363606660:
return Global_262145.f_12575;
break;
case -1273183702:
return Global_262145.f_12576;
break;
case -1511774791:
return Global_262145.f_12577;
break;
case -821260651:
return Global_262145.f_12578;
break;
case -1183030415:
return Global_262145.f_12579;
break;
case -1421031662:
return Global_262145.f_12580;
break;
case -610274579:
return Global_262145.f_12581;
break;
case -868133840:
return Global_262145.f_12582;
break;
case 2011868036:
return Global_262145.f_12583;
break;
case 1353096116:
return Global_262145.f_12584;
break;
case 1652113241:
return Global_262145.f_12585;
break;
case 432418292:
return Global_262145.f_12586;
break;
case 2795047:
return Global_262145.f_12351;
break;
case 1804762357:
return Global_262145.f_12352;
break;
case 1016635138:
return Global_262145.f_12353;
break;
case 1268211548:
return Global_262145.f_12354;
break;
case -566131538:
return Global_262145.f_12355;
break;
case 574164136:
return Global_262145.f_12356;
break;
case 1383713628:
return Global_262145.f_12357;
break;
case 1190769756:
return Global_262145.f_12358;
break;
case 892080321:
return Global_262145.f_12359;
break;
case -1417413257:
return Global_262145.f_12360;
break;
case 2077201057:
return Global_262145.f_12364;
break;
case -644723163:
return Global_262145.f_12365;
break;
case -1624352418:
return Global_262145.f_12366;
break;
case 307294542:
return Global_262145.f_12361;
break;
case -460450359:
return Global_262145.f_12362;
break;
case -1048653909:
return Global_262145.f_12363;
break;
case -2047131528:
return Global_262145.f_12367;
break;
case 934290415:
return Global_262145.f_12368;
break;
case 390286389:
return Global_262145.f_12369;
break;
case 684584778:
return Global_262145.f_12370;
break;
case -811603811:
return Global_262145.f_12371;
break;
default:
switch (iParam1){
case 1:
return Global_262145.f_12351;
break;
case 2:
return Global_262145.f_12352;
break;
case 3:
return Global_262145.f_12353;
break;
case 4:
return Global_262145.f_12354;
break;
case 5:
return Global_262145.f_12355;
break;
case 6:
return Global_262145.f_12356;
break;
case 7:
return Global_262145.f_12357;
break;
}
break;
}}
return 12345;
}
break;
case 75:
switch (iParam1){
case 0:
return Global_262145.f_12384;
break;
case 1:
return Global_262145.f_12703;
break;
case 2:
return Global_262145.f_12704;
break;
case 3:
return Global_262145.f_12705;
break;
case 4:
return Global_262145.f_12706;
break;
case 5:
return Global_262145.f_12707;
break;
case 6:
return Global_262145.f_15064;
break;
default:
return Global_262145.f_12707;
break;
}
break;
case 85:
switch (iVar1){
case joaat("trailerlarge"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return Global_262145.f_21727;
break;
case 2:
return Global_262145.f_21728;
break;
case 3:
return Global_262145.f_21729;
break;
case 4:
return Global_262145.f_21730;
break;
}
break;
case joaat("lurcher"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_12701;
break;
case 2:
return Global_262145.f_12700;
break;
}
break;
case joaat("btype2"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_12699;
break;
case 2:
return Global_262145.f_12697;
break;
case 3:
return Global_262145.f_12696;
break;
case 4:
return Global_262145.f_12698;
break;
}
break;
case joaat("faction2"):
if(iParam1==10){
return Global_262145.f_12708;
}
break;
case joaat("omnis"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17368;
break;
case 2:
return Global_262145.f_17381;
break;
default:
return 999;
break;
}
break;
case joaat("bf400"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17374;
break;
case 2:
return Global_262145.f_17387;
break;
default:
return 999;
break;
}
break;
case joaat("tropos"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17369;
break;
case 2:
return Global_262145.f_17382;
break;
default:
return 999;
break;
}
break;
case joaat("brioso"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17370;
break;
case 2:
return Global_262145.f_17383;
break;
default:
return 999;
break;
}
break;
case joaat("trophytruck"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17371;
break;
case 2:
return Global_262145.f_17384;
break;
default:
return 999;
break;
}
break;
case joaat("trophytruck2"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17372;
break;
case 2:
return Global_262145.f_17385;
break;
default:
return 999;
break;
}
break;
case joaat("cliffhanger"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17373;
break;
case 2:
return Global_262145.f_17386;
break;
default:
return 999;
break;
}
break;
case joaat("tampa2"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17366;
break;
case 2:
return Global_262145.f_17379;
break;
default:
return 999;
break;
}
break;
case joaat("gargoyle"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17376;
break;
case 2:
return Global_262145.f_17389;
break;
default:
return 999;
break;
}
break;
case joaat("le7b"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17367;
case 2:
return Global_262145.f_17380;
default:
return 999;
break;
}
break;
case joaat("tyrus"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17365;
break;
case 2:
return Global_262145.f_17378;
break;
default:
return 999;
break;
}
break;
case joaat("lynx"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17375;
break;
case 2:
return Global_262145.f_17388;
break;
default:
return 999;
break;
}
break;
case joaat("sheava"):
switch (iParam1){
case 0:
return floor((to_float(Global_262145.f_12394) * func_323(iParam1, 1)));
break;
case 1:
return Global_262145.f_17364;
break;
case 2:
return Global_262145.f_17377;
break;
default:
return 999;
break;
}
break;
}
return floor((to_float(func_378(iParam0, bParam4)) * func_323(iParam1, 1)));
break;
case 61:
case 103:
if(STREAMING::IS_MODEL_VALID(iVar1)){
if(func_367(iVar1, 0) || iVar1==func_366()){
return func_361(func_362(iVar1, iParam1));
}}
break;
}
return 700;
}

int func_361(int iParam0){
switch (iParam0){
case joaat("chino2"):
return Global_262145.f_12344;
break;
case joaat("primo2"):
return Global_262145.f_12347;
break;
case joaat("moonbeam2"):
return Global_262145.f_12346;
break;
case joaat("faction2"):
return Global_262145.f_12345;
break;
case joaat("buccaneer2"):
return Global_262145.f_12343;
break;
case joaat("voodoo"):
return Global_262145.f_12348;
break;
case joaat("sultanrs"):
return Global_262145.f_13453;
break;
case joaat("banshee2"):
return Global_262145.f_13455;
break;
case joaat("faction3"):
return Global_262145.f_15033;
break;
case joaat("minivan2"):
return Global_262145.f_15034;
break;
case joaat("sabregt2"):
return Global_262145.f_15035;
break;
case joaat("slamvan3"):
return Global_262145.f_15036;
break;
case joaat("tornado5"):
return Global_262145.f_15037;
break;
case joaat("virgo2"):
return Global_262145.f_15038;
break;
case joaat("comet3"):
return Global_262145.f_19641;
break;
case joaat("diablous2"):
return Global_262145.f_19645;
break;
case joaat("fcr2"):
return Global_262145.f_19643;
break;
case joaat("italigtb2"):
return Global_262145.f_19635;
break;
case joaat("specter2"):
return Global_262145.f_19637;
break;
case joaat("nero2"):
return Global_262145.f_19639;
break;
case joaat("elegy"):
return Global_262145.f_19640;
break;
case joaat("technical3"):
return Global_262145.f_21371;
break;
case joaat("insurgent3"):
return Global_262145.f_21370;
break;
case joaat("bruiser"):
return Global_262145.f_25988;
break;
case joaat("monster3"):
return Global_262145.f_25987;
break;
case joaat("impaler2"):
return Global_262145.f_25991;
break;
case joaat("issi4"):
return Global_262145.f_25992;
break;
case joaat("deathbike"):
return Global_262145.f_25993;
break;
case joaat("dominator4"):
return Global_262145.f_25990;
break;
case joaat("slamvan4"):
return Global_262145.f_25989;
break;
case joaat("deathbike3"):
return Global_262145.f_26007;
break;
case joaat("deathbike2"):
return Global_262145.f_26000;
break;
case joaat("impaler3"):
return Global_262145.f_25998;
break;
case joaat("bruiser2"):
return Global_262145.f_25995;
break;
case joaat("slamvan5"):
return Global_262145.f_25996;
break;
case joaat("issi5"):
return Global_262145.f_25999;
break;
case joaat("monster4"):
return Global_262145.f_25994;
break;
case joaat("dominator5"):
return Global_262145.f_25997;
break;
case joaat("impaler4"):
return Global_262145.f_26005;
break;
case joaat("bruiser3"):
return Global_262145.f_26002;
break;
case joaat("slamvan6"):
return Global_262145.f_26003;
break;
case joaat("issi6"):
return Global_262145.f_26006;
break;
case joaat("monster5"):
return Global_262145.f_26001;
break;
case joaat("dominator6"):
return Global_262145.f_26004;
break;
case joaat("youga3"):
return Global_262145.f_29376;
break;
case joaat("gauntlet5"):
return Global_262145.f_29371;
break;
case joaat("manana2"):
return Global_262145.f_29375;
break;
case joaat("peyote3"):
return Global_262145.f_29373;
break;
case joaat("yosemite3"):
return Global_262145.f_29372;
break;
case joaat("glendale2"):
return Global_262145.f_29374;
break;
case joaat("tenf2"):
return Global_262145.f_32681;
case joaat("weevil2"):
return Global_262145.f_32682;
case joaat("brioso3"):
return Global_262145.f_32683;
case joaat("sentinel4"):
return Global_262145.f_32684;
case joaat("brickade2"):
return Global_262145.f_32695;
}
return 0;
}

int func_362(int iParam0, int iParam1){
int iVar0;
switch (iParam0){
case joaat("faction"):
if(func_365(iParam0)==1){
return joaat("faction2");
}elseif(func_365(iParam0)==2){
if(Global_262145.f_14737){
if(iParam1==0){
return joaat("faction3");
}}
if(iParam1==1){
return joaat("faction2");
}}
break;
case joaat("buccaneer"):
return joaat("buccaneer2");
break;
case joaat("chino"):
return joaat("chino2");
break;
case joaat("moonbeam"):
return joaat("moonbeam2");
break;
case joaat("primo"):
return joaat("primo2");
break;
case joaat("voodoo2"):
return joaat("voodoo");
break;
case joaat("comet2"):
if(Global_262145.f_19141){
return joaat("comet3");
}
break;
case joaat("diablous"):
if(Global_262145.f_19143){
return joaat("diablous2");
}
break;
case joaat("fcr"):
if(Global_262145.f_19147){
return joaat("fcr2");
}
break;
case joaat("italigtb"):
if(Global_262145.f_19149){
return joaat("italigtb2");
}
break;
case joaat("specter"):
if(Global_262145.f_19154){
return joaat("specter2");
}
break;
case joaat("nero"):
if(Global_262145.f_19151){
return joaat("nero2");
}
break;
case joaat("elegy2"):
if(Global_262145.f_19144){
return joaat("elegy");
}
break;
case joaat("sabregt"):
return joaat("sabregt2");
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
return joaat("tornado5");
break;
case joaat("virgo3"):
return joaat("virgo2");
break;
case joaat("minivan"):
return joaat("minivan2");
break;
case joaat("slamvan"):
if(!func_364(PLAYER::PLAYER_ID())){
return joaat("slamvan3");
}elseif(PLAYER::PLAYER_ID() !=func_49()){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_372.f_2, 12)){
if(iParam1==0){
return joaat("slamvan3");
}elseif(iParam1==1){
return joaat("slamvan4");
}elseif(iParam1==2){
return joaat("slamvan5");
}elseif(iParam1==3){
return joaat("slamvan6");
}}elseif(iParam1==0){
return joaat("slamvan4");
}elseif(iParam1==1){
return joaat("slamvan5");
}elseif(iParam1==2){
return joaat("slamvan6");
}}
break;
case joaat("sultan"):
return joaat("sultanrs");
break;
case joaat("banshee"):
return joaat("banshee2");
break;
case joaat("technical"):
if(Global_262145.f_21100){
return joaat("technical3");
}
break;
case joaat("insurgent"):
if(Global_262145.f_21101){
return joaat("insurgent3");
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
if(iParam1==0){
return joaat("monster3");
}elseif(iParam1==1){
return joaat("monster4");
}elseif(iParam1==2){
return joaat("monster5");
}
break;
case joaat("monster3"):
if(iParam1==0){
return joaat("monster4");
}elseif(iParam1==1){
return joaat("monster5");
}
break;
case joaat("monster4"):
if(iParam1==0){
return joaat("monster3");
}elseif(iParam1==1){
return joaat("monster5");
}
break;
case joaat("monster5"):
if(iParam1==0){
return joaat("monster3");
}elseif(iParam1==1){
return joaat("monster4");
}
break;
case joaat("glendale"):
if(!func_364(PLAYER::PLAYER_ID())){
return joaat("glendale2");
}elseif(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_372.f_2, 12)){
if(iParam1==0){
return joaat("glendale2");
}elseif(iParam1==1){
return joaat("bruiser");
}elseif(iParam1==2){
return joaat("bruiser2");
}elseif(iParam1==3){
return joaat("bruiser3");
}}elseif(iParam1==0){
return joaat("bruiser");
}elseif(iParam1==1){
return joaat("bruiser2");
}elseif(iParam1==2){
return joaat("bruiser3");
}
break;
case joaat("bruiser"):
if(iParam1==0){
return joaat("bruiser2");
}elseif(iParam1==1){
return joaat("bruiser3");
}
break;
case joaat("bruiser2"):
if(iParam1==0){
return joaat("bruiser");
}elseif(iParam1==1){
return joaat("bruiser3");
}
break;
case joaat("bruiser3"):
if(iParam1==0){
return joaat("bruiser");
}elseif(iParam1==1){
return joaat("bruiser2");
}
break;
case joaat("impaler"):
if(iParam1==0){
return joaat("impaler2");
}elseif(iParam1==1){
return joaat("impaler3");
}elseif(iParam1==2){
return joaat("impaler4");
}
break;
case joaat("impaler2"):
if(iParam1==0){
return joaat("impaler3");
}elseif(iParam1==1){
return joaat("impaler4");
}
break;
case joaat("impaler3"):
if(iParam1==0){
return joaat("impaler2");
}elseif(iParam1==1){
return joaat("impaler4");
}
break;
case joaat("impaler4"):
if(iParam1==0){
return joaat("impaler2");
}elseif(iParam1==1){
return joaat("impaler3");
}
break;
case joaat("issi3"):
if(iParam1==0){
return joaat("issi4");
}elseif(iParam1==1){
return joaat("issi5");
}elseif(iParam1==2){
return joaat("issi6");
}
break;
case joaat("issi4"):
if(iParam1==0){
return joaat("issi5");
}elseif(iParam1==1){
return joaat("issi6");
}
break;
case joaat("issi5"):
if(iParam1==0){
return joaat("issi4");
}elseif(iParam1==1){
return joaat("issi6");
}
break;
case joaat("issi6"):
if(iParam1==0){
return joaat("issi4");
}elseif(iParam1==1){
return joaat("issi5");
}
break;
case joaat("gargoyle"):
if(iParam1==0){
return joaat("deathbike");
}elseif(iParam1==1){
return joaat("deathbike2");
}elseif(iParam1==2){
return joaat("deathbike3");
}
break;
case joaat("dominator"):
case joaat("dominator2"):
if(iParam1==0){
return joaat("dominator4");
}elseif(iParam1==1){
return joaat("dominator5");
}elseif(iParam1==2){
return joaat("dominator6");
}
break;
case joaat("dominator4"):
if(iParam1==0){
return joaat("dominator5");
}elseif(iParam1==1){
return joaat("dominator6");
}
break;
case joaat("dominator5"):
if(iParam1==0){
return joaat("dominator4");
}elseif(iParam1==1){
return joaat("dominator6");
}
break;
case joaat("dominator6"):
if(iParam1==0){
return joaat("dominator4");
}elseif(iParam1==1){
return joaat("dominator5");
}
break;
case joaat("imperator"):
if(iParam1==0){
return joaat("imperator2");
}elseif(iParam1==1){
return joaat("imperator3");
}
break;
case joaat("imperator2"):
if(iParam1==0){
return joaat("imperator");
}elseif(iParam1==1){
return joaat("imperator3");
}
break;
case joaat("imperator3"):
if(iParam1==0){
return joaat("imperator");
}elseif(iParam1==1){
return joaat("imperator2");
}
break;
case joaat("deathbike"):
if(iParam1==0){
return joaat("deathbike2");
}elseif(iParam1==1){
return joaat("deathbike3");
}
break;
case joaat("deathbike2"):
if(iParam1==0){
return joaat("deathbike");
}elseif(iParam1==1){
return joaat("deathbike3");
}
break;
case joaat("deathbike3"):
if(iParam1==0){
return joaat("deathbike");
}elseif(iParam1==1){
return joaat("deathbike2");
}
break;
case joaat("zr380"):
if(iParam1==0){
return joaat("zr3802");
}elseif(iParam1==1){
return joaat("zr3803");
}
break;
case joaat("zr3802"):
if(iParam1==0){
return joaat("zr380");
}elseif(iParam1==1){
return joaat("zr3803");
}
break;
case joaat("zr3803"):
if(iParam1==0){
return joaat("zr380");
}elseif(iParam1==1){
return joaat("zr3802");
}
break;
case joaat("cerberus"):
if(iParam1==0){
return joaat("cerberus2");
}elseif(iParam1==1){
return joaat("cerberus3");
}
break;
case joaat("cerberus2"):
if(iParam1==0){
return joaat("cerberus");
}elseif(iParam1==1){
return joaat("cerberus3");
}
break;
case joaat("cerberus3"):
if(iParam1==0){
return joaat("cerberus");
}elseif(iParam1==1){
return joaat("cerberus2");
}
break;
case joaat("scarab"):
if(iParam1==0){
return joaat("scarab2");
}elseif(iParam1==1){
return joaat("scarab3");
}
break;
case joaat("scarab2"):
if(iParam1==0){
return joaat("scarab");
}elseif(iParam1==1){
return joaat("scarab3");
}
break;
case joaat("scarab3"):
if(iParam1==0){
return joaat("scarab");
}elseif(iParam1==1){
return joaat("scarab2");
}
break;
case joaat("slamvan4"):
if(iParam1==0){
return joaat("slamvan5");
}elseif(iParam1==1){
return joaat("slamvan6");
}
break;
case joaat("slamvan5"):
if(iParam1==0){
return joaat("slamvan4");
}elseif(iParam1==1){
return joaat("slamvan6");
}
break;
case joaat("slamvan6"):
if(iParam1==0){
return joaat("slamvan4");
}elseif(iParam1==1){
return joaat("slamvan5");
}
break;
case joaat("brutus"):
if(iParam1==0){
return joaat("brutus2");
}elseif(iParam1==1){
return joaat("brutus3");
}
break;
case joaat("brutus2"):
if(iParam1==0){
return joaat("brutus");
}elseif(iParam1==1){
return joaat("brutus3");
}
break;
case joaat("brutus3"):
if(iParam1==0){
return joaat("brutus");
}elseif(iParam1==1){
return joaat("brutus2");
}
break;
case joaat("youga2"):
return joaat("youga3");
break;
case joaat("gauntlet3"):
return joaat("gauntlet5");
break;
case joaat("manana"):
return joaat("manana2");
break;
case joaat("peyote"):
return joaat("peyote3");
case joaat("yosemite"):
return joaat("yosemite3");
case joaat("tenf"):
return joaat("tenf2");
case joaat("weevil"):
return joaat("weevil2");
case joaat("brioso2"):
return joaat("brioso3");
case joaat("sentinel3"):
return joaat("sentinel4");
case joaat("brickade2"):
return joaat("brickade2");
}
if(func_363(iParam0, 0)){
iVar0=iParam0;
}else{
iVar0=0;
}
return iVar0;
}

int func_363(int iParam0, int iParam1){
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
if(!Global_262145.f_14734){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14735){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14733){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14736){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14737){
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
if(Global_262145.f_19141){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21101){
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

int func_364(int iParam0){
if(iParam0 !=func_49()){
if(func_50(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_252(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}

int func_365(int iParam0){
int iVar0;
switch (iParam0){
case joaat("faction"):
if(Global_262145.f_14737){
iVar0=2;
}else{
iVar0=1;
}
break;
case joaat("slamvan"):
case joaat("glendale"):
if(!func_364(PLAYER::PLAYER_ID())){
iVar0=1;
}elseif(PLAYER::PLAYER_ID() !=func_49()){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_372.f_2, 12)){
iVar0=4;
}else{
iVar0=3;
}}
break;
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
iVar0=2;
break;
case joaat("gargoyle"):
case joaat("ratloader"):
case joaat("ratloader2"):
case joaat("issi3"):
case joaat("dominator"):
case joaat("dominator2"):
case joaat("impaler"):
iVar0=3;
break;
default:
iVar0=1;
break;
}
return iVar0;
}

int func_366(){
return joaat("brickade2");
}

int func_367(int iParam0, int iParam1){
if(iParam1==0){
if(func_363(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_375();
break;
case joaat("sabregt"):
if(Global_262145.f_14734){
return func_374();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14735){
return func_374();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14733){
return func_374();
}
break;
case joaat("minivan"):
if(Global_262145.f_14736){
return func_374();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14738){
return func_374();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_373();
break;
case joaat("comet2"):
if(Global_262145.f_19141){
return func_372();
}
break;
case joaat("diablous"):
if(Global_262145.f_19143){
return func_372();
}
break;
case joaat("fcr"):
if(Global_262145.f_19147){
return func_372();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19144){
return func_372();
}
break;
case joaat("nero"):
if(Global_262145.f_19151){
return func_372();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19149){
return func_372();
}
break;
case joaat("specter"):
if(Global_262145.f_19154){
return func_372();
}
break;
case joaat("technical"):
if(Global_262145.f_21100){
return func_371();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21101){
return func_371();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_370();
break;
case joaat("glendale"):
if(func_370() || func_369()){
return 1;
}
break;
case joaat("impaler"):
return func_370();
break;
case joaat("issi3"):
return func_370();
break;
case joaat("gargoyle"):
return func_370();
break;
case joaat("dominator"):
return func_370();
break;
case joaat("dominator2"):
return func_370();
break;
case joaat("imperator"):
return func_370();
break;
case joaat("imperator2"):
return func_370();
break;
case joaat("imperator3"):
return func_370();
break;
case joaat("deathbike"):
return func_370();
break;
case joaat("deathbike2"):
return func_370();
break;
case joaat("deathbike3"):
return func_370();
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
return func_370();
break;
case joaat("youga2"):
if(Global_262145.f_29332){
return func_369();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29682){
return func_369();
}
break;
case joaat("manana"):
if(Global_262145.f_29331){
return func_369();
}
break;
case joaat("peyote"):
if(Global_262145.f_29681){
return func_369();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29680){
return func_369();
}
break;
}
switch (iParam0){
case joaat("tenf"):
if(Global_262145.f_33139){
return func_368();
}
break;
case joaat("weevil"):
if(Global_262145.f_33138){
return func_368();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33131){
return func_368();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33140){
return func_368();
}
break;
}
return 0;
}


var func__368(){
return DLC::IS_DLC_PRESENT(1199590110);
}


var func__369(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


var func__370(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


var func__371(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


var func__372(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


var func__373(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


var func__374(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


var func__375(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_376(int iParam0){
switch (iParam0){
case joaat("comet6"):
case joaat("vectre"):
case joaat("warrener2"):
case joaat("remus"):
case joaat("jester4"):
case joaat("rt3000"):
case joaat("cypher"):
case joaat("sultan3"):
case joaat("tenf2"):
case joaat("kanjosj"):
case joaat("postlude"):
case joaat("sentinel4"):
case joaat("brioso3"):
case joaat("weevil2"):
case joaat("virtue"):
return 1;
break;
}
return 0;
}

int func_377(int iParam0){
switch (iParam0){
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
return 1;
default:
}
return 0;
}

int func_378(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(Global_1585919);
iVar1=1;
if(bParam1){
iVar1=floor(Global_262145.f_26654);
}
switch (iVar0){
case joaat("sultanrs"):
switch (iParam0){
case 62:
return Global_262145.f_12372;
break;
case 63:
return Global_262145.f_12373;
break;
case 91:
case 64:
return Global_262145.f_13456;
break;
case 66:
return Global_262145.f_13457;
break;
case 90:
case 67:
return Global_262145.f_13458;
break;
case 68:
return Global_262145.f_13459;
break;
case 69:
return Global_262145.f_13460;
break;
case 70:
return Global_262145.f_13461;
break;
case 71:
return Global_262145.f_12380;
break;
case 72:
return Global_262145.f_12381;
break;
case 73:
return Global_262145.f_12382;
break;
case 74:
return Global_262145.f_12383;
break;
case 76:
return Global_262145.f_13462;
break;
case 77:
return Global_262145.f_13463;
break;
case 78:
return Global_262145.f_13464;
break;
case 79:
return Global_262145.f_13467;
break;
case 80:
return Global_262145.f_13465;
break;
case 81:
return Global_262145.f_13466;
break;
case 82:
return Global_262145.f_12388;
break;
case 83:
return Global_262145.f_13468;
break;
case 84:
return Global_262145.f_12393;
break;
case 85:
return Global_262145.f_13469;
break;
}
break;
case joaat("banshee2"):
switch (iParam0){
case 62:
return Global_262145.f_12372;
break;
case 63:
return Global_262145.f_12373;
break;
case 91:
case 64:
return Global_262145.f_12374;
break;
case 66:
return Global_262145.f_13470;
break;
case 90:
case 67:
return Global_262145.f_13471;
break;
case 68:
return Global_262145.f_13472;
break;
case 69:
return Global_262145.f_13473;
break;
case 70:
return Global_262145.f_13474;
break;
case 71:
return Global_262145.f_12380;
break;
case 72:
return Global_262145.f_12381;
break;
case 73:
return Global_262145.f_12382;
break;
case 74:
return Global_262145.f_12383;
break;
case 76:
return Global_262145.f_13475;
break;
case 77:
return Global_262145.f_12386;
break;
case 78:
return Global_262145.f_13476;
break;
case 79:
return Global_262145.f_12391;
break;
case 80:
return Global_262145.f_12389;
break;
case 81:
return Global_262145.f_12390;
break;
case 82:
return Global_262145.f_12388;
break;
case 83:
return Global_262145.f_12392;
break;
case 84:
return Global_262145.f_12393;
break;
case 85:
return Global_262145.f_13477;
break;
}
break;
case joaat("btype3"):
switch (iParam0){
case 62:
return Global_262145.f_12372;
break;
case 63:
return Global_262145.f_12373;
break;
case 91:
case 64:
return Global_262145.f_12374;
break;
case 66:
return Global_262145.f_12375;
break;
case 90:
case 67:
return Global_262145.f_12376;
break;
case 68:
return Global_262145.f_12377;
break;
case 69:
return Global_262145.f_12378;
break;
case 70:
return Global_262145.f_12379;
break;
case 71:
return Global_262145.f_12380;
break;
case 72:
return Global_262145.f_12381;
break;
case 73:
return Global_262145.f_12382;
break;
case 74:
return Global_262145.f_12383;
break;
case 76:
return Global_262145.f_12385;
break;
case 77:
return Global_262145.f_12386;
break;
case 78:
return Global_262145.f_12387;
break;
case 79:
return Global_262145.f_13478;
break;
case 80:
return Global_262145.f_13479;
break;
case 81:
return Global_262145.f_13480;
break;
case 82:
return Global_262145.f_12388;
break;
case 83:
return Global_262145.f_13481;
break;
case 84:
return Global_262145.f_12393;
break;
case 85:
return Global_262145.f_12394;
break;
}
break;
case joaat("virgo2"):
switch (iParam0){
case 62:
return Global_262145.f_12372;
break;
case 63:
return Global_262145.f_12373;
break;
case 91:
case 64:
return Global_262145.f_12374;
break;
case 66:
return Global_262145.f_12375;
break;
case 90:
case 67:
return Global_262145.f_12376;
break;
case 68:
return Global_262145.f_12377;
break;
case 69:
return Global_262145.f_12378;
break;
case 70:
return Global_262145.f_12379;
break;
case 71:
return Global_262145.f_12380;
break;
case 72:
return Global_262145.f_12381;
break;
case 73:
return Global_262145.f_12382;
break;
case 74:
return Global_262145.f_12383;
break;
case 76:
return Global_262145.f_12385;
break;
case 77:
return Global_262145.f_12386;
break;
case 78:
return Global_262145.f_12387;
break;
case 79:
return Global_262145.f_12391;
break;
case 80:
return Global_262145.f_12389;
break;
case 81:
return Global_262145.f_15061;
break;
case 82:
return Global_262145.f_12388;
break;
case 83:
return Global_262145.f_12392;
break;
case 84:
return Global_262145.f_12393;
break;
case 85:
return Global_262145.f_12394;
break;
}
break;
case joaat("slamvan3"):
switch (iParam0){
case 62:
return Global_262145.f_12372;
break;
case 63:
return Global_262145.f_12373;
break;
case 91:
case 64:
return Global_262145.f_12374;
break;
case 66:
return Global_262145.f_12375;
break;
case 90:
case 67:
return Global_262145.f_12376;
break;
case 68:
return Global_262145.f_12377;
break;
case 69:
return Global_262145.f_12378;
break;
case 70:
return Global_262145.f_12379;
break;
case 71:
return Global_262145.f_12380;
break;
case 72:
return Global_262145.f_12381;
break;
case 73:
return Global_262145.f_12382;
break;
case 74:
return Global_262145.f_12383;
break;
case 76:
return Global_262145.f_12385;
break;
case 77:
return Global_262145.f_12386;
break;
case 78:
return Global_262145.f_12387;
break;
case 79:
return Global_262145.f_12391;
break;
case 80:
return Global_262145.f_12389;
break;
case 81:
return Global_262145.f_12390;
break;
case 82:
return Global_262145.f_15059;
break;
case 83:
return Global_262145.f_15060;
break;
case 84:
return Global_262145.f_12393;
break;
case 85:
return Global_262145.f_12394;
break;
}
break;
case joaat("diablous2"):
case joaat("fcr2"):
case joaat("fcr"):
case joaat("diablous"):
switch (iParam0){
case 69:
return Global_262145.f_20096;
break;
case 70:
return Global_262145.f_20097;
break;
case 71:
return Global_262145.f_20098;
break;
case 72:
return Global_262145.f_20099;
break;
case 73:
return Global_262145.f_20100;
break;
case 74:
return Global_262145.f_20101;
break;
case 76:
return Global_262145.f_20103;
break;
case 77:
return Global_262145.f_20104;
break;
case 78:
return Global_262145.f_20105;
break;
case 79:
return Global_262145.f_20109;
break;
case 80:
return Global_262145.f_20107;
break;
case 81:
return Global_262145.f_20108;
break;
case 82:
return Global_262145.f_20106;
break;
case 83:
return Global_262145.f_20110;
break;
case 84:
return Global_262145.f_20111;
break;
case 85:
return Global_262145.f_20112;
break;
case 75:
return Global_262145.f_20102;
break;
}
break;
case joaat("italigtb2"):
case joaat("specter2"):
case joaat("nero2"):
case joaat("italigtb"):
case joaat("specter"):
case joaat("nero"):
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("manana2"):
case joaat("peyote3"):
case joaat("yosemite3"):
case joaat("glendale2"):
switch (iParam0){
case 62:
return Global_262145.f_20067;
break;
case 63:
return Global_262145.f_20068;
break;
case 91:
case 64:
return Global_262145.f_20069;
break;
case 66:
return Global_262145.f_20070;
break;
case 90:
case 67:
return Global_262145.f_20071;
break;
case 68:
return Global_262145.f_20072;
break;
case 69:
return Global_262145.f_20073;
break;
case 70:
return Global_262145.f_20074;
break;
case 71:
return Global_262145.f_20075;
break;
case 72:
return Global_262145.f_20076;
break;
case 73:
return Global_262145.f_20077;
break;
case 74:
return Global_262145.f_20078;
break;
case 76:
return Global_262145.f_20080;
break;
case 77:
return Global_262145.f_20081;
break;
case 78:
return Global_262145.f_20082;
break;
case 79:
return Global_262145.f_20086;
break;
case 80:
return Global_262145.f_20084;
break;
case 81:
return Global_262145.f_20085;
break;
case 82:
return Global_262145.f_20083;
break;
case 83:
return Global_262145.f_20087;
break;
case 84:
return Global_262145.f_20088;
break;
case 85:
return Global_262145.f_20089;
break;
case 75:
return Global_262145.f_20079;
break;
}
break;
case joaat("comet3"):
case joaat("elegy"):
case joaat("comet2"):
case joaat("elegy2"):
switch (iParam0){
case 62:
return Global_262145.f_20113;
break;
case 63:
return Global_262145.f_20114;
break;
case 91:
case 64:
return Global_262145.f_20115;
break;
case 66:
return Global_262145.f_20116;
break;
case 90:
case 67:
return Global_262145.f_20117;
break;
case 68:
return Global_262145.f_20118;
break;
case 69:
return Global_262145.f_20119;
break;
case 70:
return Global_262145.f_20120;
break;
case 71:
return Global_262145.f_20121;
break;
case 72:
return Global_262145.f_20122;
break;
case 73:
return Global_262145.f_20123;
break;
case 74:
return Global_262145.f_20124;
break;
case 76:
return Global_262145.f_20126;
break;
case 77:
return Global_262145.f_20127;
break;
case 78:
return Global_262145.f_20128;
break;
case 79:
return Global_262145.f_20132;
break;
case 80:
return Global_262145.f_20130;
break;
case 81:
return Global_262145.f_20131;
break;
case 82:
return Global_262145.f_20129;
break;
case 83:
return Global_262145.f_20133;
break;
case 84:
return Global_262145.f_20134;
break;
case 85:
return Global_262145.f_20135;
break;
case 75:
return Global_262145.f_20125;
break;
}
break;
default:
switch (iParam0){
case 62:
return (Global_262145.f_12372 * iVar1);
break;
case 63:
return (Global_262145.f_12373 * iVar1);
break;
case 91:
case 64:
return (Global_262145.f_12374 * iVar1);
break;
case 66:
return (Global_262145.f_12375 * iVar1);
break;
case 90:
case 67:
return (Global_262145.f_12376 * iVar1);
break;
case 68:
return (Global_262145.f_12377 * iVar1);
break;
case 69:
return (Global_262145.f_12378 * iVar1);
break;
case 70:
return (Global_262145.f_12379 * iVar1);
break;
case 71:
return (Global_262145.f_12380 * iVar1);
break;
case 72:
return (Global_262145.f_12381 * iVar1);
break;
case 73:
return (Global_262145.f_12382 * iVar1);
break;
case 74:
return (Global_262145.f_12383 * iVar1);
break;
case 76:
return (Global_262145.f_12385 * iVar1);
break;
case 77:
return (Global_262145.f_12386 * iVar1);
break;
case 78:
return (Global_262145.f_12387 * iVar1);
break;
case 79:
return (Global_262145.f_12391 * iVar1);
break;
case 80:
return (Global_262145.f_12389 * iVar1);
break;
case 81:
return (Global_262145.f_12390 * iVar1);
break;
case 82:
return (Global_262145.f_12388 * iVar1);
break;
case 83:
return (Global_262145.f_12392 * iVar1);
break;
case 84:
return (Global_262145.f_12393 * iVar1);
break;
case 85:
return (Global_262145.f_12394 * iVar1);
break;
}
break;
}
return 12345;
}


float func_379(int iParam0){
float fVar0;
fVar0=1f;
if(((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==35) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3417;
}
if(iParam0==1){
fVar0=Global_262145.f_3504;
}
if(iParam0==2){
fVar0=Global_262145.f_3505;
}
if(iParam0==3){
fVar0=Global_262145.f_3506;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3507;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3280;
}
if(iParam0==1){
fVar0=Global_262145.f_3367;
}
if(iParam0==2){
fVar0=Global_262145.f_3368;
}
if(iParam0==3){
fVar0=Global_262145.f_3369;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3370;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3143;
}
if(iParam0==1){
fVar0=Global_262145.f_3230;
}
if(iParam0==2){
fVar0=Global_262145.f_3231;
}
if(iParam0==3){
fVar0=Global_262145.f_3232;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3233;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3554;
}
if(iParam0==1){
fVar0=Global_262145.f_3641;
}
if(iParam0==2){
fVar0=Global_262145.f_3642;
}
if(iParam0==3){
fVar0=Global_262145.f_3643;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3644;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3006;
}
if(iParam0==1){
fVar0=Global_262145.f_3093;
}
if(iParam0==2){
fVar0=Global_262145.f_3094;
}
if(iParam0==3){
fVar0=Global_262145.f_3095;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3096;
}}elseif(Global_1585918==31){
if(iParam0==0){
fVar0=Global_262145.f_3580;
}
if(iParam0==1){
fVar0=Global_262145.f_3616;
}}
return (fVar0 * Global_296941.f_49);
}


float func_380(int iParam0){
float fVar0;
fVar0=1f;
if(iParam0==0){
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3418;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3281;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3144;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3555;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3007;
}}elseif((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3508;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3371;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3234;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3645;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3097;
}
return (fVar0 * Global_296941.f_49);
}


float func_381(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3452;
}
if(iParam0==1){
fVar0=Global_262145.f_3544;
}
if(iParam0==2){
fVar0=Global_262145.f_3545;
}
if(iParam0==3){
fVar0=Global_262145.f_3546;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3315;
}
if(iParam0==1){
fVar0=Global_262145.f_3407;
}
if(iParam0==2){
fVar0=Global_262145.f_3408;
}
if(iParam0==3){
fVar0=Global_262145.f_3409;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3178;
}
if(iParam0==1){
fVar0=Global_262145.f_3270;
}
if(iParam0==2){
fVar0=Global_262145.f_3271;
}
if(iParam0==3){
fVar0=Global_262145.f_3272;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3589;
}
if(iParam0==1){
fVar0=Global_262145.f_3681;
}
if(iParam0==2){
fVar0=Global_262145.f_3682;
}
if(iParam0==3){
fVar0=Global_262145.f_3683;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3041;
}
if(iParam0==1){
fVar0=Global_262145.f_3133;
}
if(iParam0==2){
fVar0=Global_262145.f_3134;
}
if(iParam0==3){
fVar0=Global_262145.f_3135;
}}
return (fVar0 * Global_296941.f_48);
}


float func_382(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==10){
fVar0=Global_262145.f_3411;
}
if(iParam0==11){
fVar0=Global_262145.f_3468;
}
if((iParam0==2 || iParam0==1) || iParam0==0){
fVar0=Global_262145.f_3537;
}
if(iParam0==29){
fVar0=Global_262145.f_3538;
}
if(iParam0==30){
fVar0=Global_262145.f_3543;
}
if(iParam0==31){
fVar0=Global_262145.f_3542;
}
if(iParam0==32){
fVar0=Global_262145.f_3541;
}
if(iParam0==33){
fVar0=Global_262145.f_7090;
}
if(iParam0==34){
fVar0=Global_262145.f_3539;
}
if(iParam0==35){
fVar0=Global_262145.f_7091;
}
if(iParam0==36){
fVar0=Global_262145.f_3540;
}
if(iParam0==40){
fVar0=Global_262145.f_3451;
}}elseif(Global_1585918==1){
if(iParam0==10){
fVar0=Global_262145.f_3274;
}
if(iParam0==11){
fVar0=Global_262145.f_3331;
}
if((iParam0==2 || iParam0==1) || iParam0==0){
fVar0=Global_262145.f_3400;
}
if(iParam0==29){
fVar0=Global_262145.f_3401;
}
if(iParam0==30){
fVar0=Global_262145.f_3406;
}
if(iParam0==31){
fVar0=Global_262145.f_3405;
}
if(iParam0==32){
fVar0=Global_262145.f_3404;
}
if(iParam0==33){
fVar0=Global_262145.f_7084;
}
if(iParam0==34){
fVar0=Global_262145.f_3402;
}
if(iParam0==35){
fVar0=Global_262145.f_7085;
}
if(iParam0==36){
fVar0=Global_262145.f_3403;
}
if(iParam0==40){
fVar0=Global_262145.f_3314;
}}elseif(Global_1585918==2){
if(iParam0==10){
fVar0=Global_262145.f_3137;
}
if(iParam0==11){
fVar0=Global_262145.f_3194;
}
if((iParam0==2 || iParam0==1) || iParam0==0){
fVar0=Global_262145.f_3263;
}
if(iParam0==29){
fVar0=Global_262145.f_3264;
}
if(iParam0==30){
fVar0=Global_262145.f_3269;
}
if(iParam0==31){
fVar0=Global_262145.f_3268;
}
if(iParam0==32){
fVar0=Global_262145.f_3267;
}
if(iParam0==33){
fVar0=Global_262145.f_7088;
}
if(iParam0==34){
fVar0=Global_262145.f_3265;
}
if(iParam0==35){
fVar0=Global_262145.f_7089;
}
if(iParam0==36){
fVar0=Global_262145.f_3266;
}
if(iParam0==40){
fVar0=Global_262145.f_3177;
}}elseif(Global_1585918==4){
if(iParam0==10){
fVar0=Global_262145.f_3548;
}
if(iParam0==11){
fVar0=Global_262145.f_3605;
}
if((iParam0==2 || iParam0==1) || iParam0==0){
fVar0=Global_262145.f_3674;
}
if(iParam0==29){
fVar0=Global_262145.f_3675;
}
if(iParam0==30){
fVar0=Global_262145.f_3680;
}
if(iParam0==31){
fVar0=Global_262145.f_3679;
}
if(iParam0==32){
fVar0=Global_262145.f_3678;
}
if(iParam0==33){
fVar0=Global_262145.f_7082;
}
if(iParam0==34){
fVar0=Global_262145.f_3676;
}
if(iParam0==35){
fVar0=Global_262145.f_7083;
}
if(iParam0==36){
fVar0=Global_262145.f_3677;
}
if(iParam0==40){
fVar0=Global_262145.f_3588;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==10){
fVar0=Global_262145.f_3000;
}
if(iParam0==11){
fVar0=Global_262145.f_3057;
}
if((iParam0==2 || iParam0==1) || iParam0==0){
fVar0=Global_262145.f_3126;
}
if(iParam0==29){
fVar0=Global_262145.f_3127;
}
if(iParam0==30){
fVar0=Global_262145.f_3132;
}
if(iParam0==31){
fVar0=Global_262145.f_3131;
}
if(iParam0==32){
fVar0=Global_262145.f_3130;
}
if(iParam0==33){
fVar0=Global_262145.f_7086;
}
if(iParam0==34){
fVar0=Global_262145.f_3128;
}
if(iParam0==35){
fVar0=Global_262145.f_7087;
}
if(iParam0==36){
fVar0=Global_262145.f_3129;
}
if(iParam0==40){
fVar0=Global_262145.f_3040;
}}
return (fVar0 * Global_296941.f_47);
}


float func_383(int iParam0){
float fVar0;
fVar0=1f;
if(iParam0==0){
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3449;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3312;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3175;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3586;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3038;
}}elseif((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3536;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3399;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3262;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3673;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3125;
}
return fVar0;
}


float func_384(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==35) || Global_1585918==34) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3446;
}
if(iParam0==1){
fVar0=Global_262145.f_3484;
}
if(iParam0==2){
fVar0=Global_262145.f_3485;
}
if(iParam0==3){
fVar0=Global_262145.f_3486;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3487;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3309;
}
if(iParam0==1){
fVar0=Global_262145.f_3347;
}
if(iParam0==2){
fVar0=Global_262145.f_3348;
}
if(iParam0==3){
fVar0=Global_262145.f_3349;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3350;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3172;
}
if(iParam0==1){
fVar0=Global_262145.f_3210;
}
if(iParam0==2){
fVar0=Global_262145.f_3211;
}
if(iParam0==3){
fVar0=Global_262145.f_3212;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3213;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3583;
}
if(iParam0==1){
fVar0=Global_262145.f_3621;
}
if(iParam0==2){
fVar0=Global_262145.f_3622;
}
if(iParam0==3){
fVar0=Global_262145.f_3623;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3624;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3035;
}
if(iParam0==1){
fVar0=Global_262145.f_3073;
}
if(iParam0==2){
fVar0=Global_262145.f_3074;
}
if(iParam0==3){
fVar0=Global_262145.f_3075;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3076;
}}
return (fVar0 * Global_296941.f_45);
}


float func_385(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3444;
}
if(iParam0==1){
fVar0=Global_262145.f_3524;
}
if(iParam0==2){
fVar0=Global_262145.f_3525;
}
if(iParam0==3){
fVar0=Global_262145.f_3526;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3527;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3307;
}
if(iParam0==1){
fVar0=Global_262145.f_3387;
}
if(iParam0==2){
fVar0=Global_262145.f_3388;
}
if(iParam0==3){
fVar0=Global_262145.f_3389;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3390;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3170;
}
if(iParam0==1){
fVar0=Global_262145.f_3250;
}
if(iParam0==2){
fVar0=Global_262145.f_3251;
}
if(iParam0==3){
fVar0=Global_262145.f_3252;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3253;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3581;
}
if(iParam0==1){
fVar0=Global_262145.f_3661;
}
if(iParam0==2){
fVar0=Global_262145.f_3662;
}
if(iParam0==3){
fVar0=Global_262145.f_3663;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3664;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3033;
}
if(iParam0==1){
fVar0=Global_262145.f_3113;
}
if(iParam0==2){
fVar0=Global_262145.f_3114;
}
if(iParam0==3){
fVar0=Global_262145.f_3115;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3116;
}}
return (fVar0 * Global_296941.f_43);
}


float func_386(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3445;
}
if(iParam0==1){
fVar0=Global_262145.f_3528;
}
if(iParam0==2){
fVar0=Global_262145.f_3529;
}
if(iParam0==3){
fVar0=Global_262145.f_3530;
}
if(iParam0==4){
fVar0=Global_262145.f_3531;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3532;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3308;
}
if(iParam0==1){
fVar0=Global_262145.f_3391;
}
if(iParam0==2){
fVar0=Global_262145.f_3392;
}
if(iParam0==3){
fVar0=Global_262145.f_3393;
}
if(iParam0==4){
fVar0=Global_262145.f_3394;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3395;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3171;
}
if(iParam0==1){
fVar0=Global_262145.f_3254;
}
if(iParam0==2){
fVar0=Global_262145.f_3255;
}
if(iParam0==3){
fVar0=Global_262145.f_3256;
}
if(iParam0==4){
fVar0=Global_262145.f_3257;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3258;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3582;
}
if(iParam0==1){
fVar0=Global_262145.f_3665;
}
if(iParam0==2){
fVar0=Global_262145.f_3666;
}
if(iParam0==3){
fVar0=Global_262145.f_3667;
}
if(iParam0==4){
fVar0=Global_262145.f_3668;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3669;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3034;
}
if(iParam0==1){
fVar0=Global_262145.f_3117;
}
if(iParam0==2){
fVar0=Global_262145.f_3118;
}
if(iParam0==3){
fVar0=Global_262145.f_3119;
}
if(iParam0==4){
fVar0=Global_262145.f_3120;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3121;
}}
return (fVar0 * Global_296941.f_44);
}


float func_387(int iParam0){
float fVar0;
fVar0=1f;
if(((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==31) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3443;
}
if(iParam0==1){
fVar0=Global_262145.f_3479;
}
if(iParam0==2){
fVar0=Global_262145.f_3480;
}
if(iParam0==3){
fVar0=Global_262145.f_3481;
}
if(iParam0==4){
fVar0=Global_262145.f_3482;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3483;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3306;
}
if(iParam0==1){
fVar0=Global_262145.f_3342;
}
if(iParam0==2){
fVar0=Global_262145.f_3343;
}
if(iParam0==3){
fVar0=Global_262145.f_3344;
}
if(iParam0==4){
fVar0=Global_262145.f_3345;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3346;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3169;
}
if(iParam0==1){
fVar0=Global_262145.f_3205;
}
if(iParam0==2){
fVar0=Global_262145.f_3206;
}
if(iParam0==3){
fVar0=Global_262145.f_3207;
}
if(iParam0==4){
fVar0=Global_262145.f_3208;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3209;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3580;
}
if(iParam0==1){
fVar0=Global_262145.f_3616;
}
if(iParam0==2){
fVar0=Global_262145.f_3617;
}
if(iParam0==3){
fVar0=Global_262145.f_3618;
}
if(iParam0==4){
fVar0=Global_262145.f_3619;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3620;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3032;
}
if(iParam0==1){
fVar0=Global_262145.f_3068;
}
if(iParam0==2){
fVar0=Global_262145.f_3069;
}
if(iParam0==3){
fVar0=Global_262145.f_3070;
}
if(iParam0==4){
fVar0=Global_262145.f_3071;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3072;
}}elseif(Global_1585918==29){}elseif(Global_1585918==30){}elseif(Global_1585918==32){}
return (fVar0 * Global_296941.f_42);
}


float func_388(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3423;
}
if(iParam0==1){
fVar0=Global_262145.f_3424;
}
if(iParam0==2){
fVar0=Global_262145.f_3425;
}
if(iParam0==3){
fVar0=Global_262145.f_3426;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3427;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3286;
}
if(iParam0==1){
fVar0=Global_262145.f_3287;
}
if(iParam0==2){
fVar0=Global_262145.f_3288;
}
if(iParam0==3){
fVar0=Global_262145.f_3289;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3290;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3149;
}
if(iParam0==1){
fVar0=Global_262145.f_3150;
}
if(iParam0==2){
fVar0=Global_262145.f_3151;
}
if(iParam0==3){
fVar0=Global_262145.f_3152;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3153;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3560;
}
if(iParam0==1){
fVar0=Global_262145.f_3561;
}
if(iParam0==2){
fVar0=Global_262145.f_3562;
}
if(iParam0==3){
fVar0=Global_262145.f_3563;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3564;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3012;
}
if(iParam0==1){
fVar0=Global_262145.f_3013;
}
if(iParam0==2){
fVar0=Global_262145.f_3014;
}
if(iParam0==3){
fVar0=Global_262145.f_3015;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3016;
}}
return (fVar0 * Global_296941.f_41);
}


float func_389(int iParam0){
float fVar0;
fVar0=1f;
if(iParam0==0){
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3422;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3285;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3148;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3559;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3011;
}}elseif((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3523;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3386;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3249;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3660;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3112;
}
return (fVar0 * Global_296941.f_40);
}


float func_390(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3421;
}
if(iParam0==44){
fVar0=Global_262145.f_3515;
}
if(iParam0==45){
fVar0=Global_262145.f_3516;
}
if(iParam0==46){
fVar0=Global_262145.f_3517;
}
if(iParam0==47){
fVar0=Global_262145.f_3518;
}
if(iParam0==48){
fVar0=Global_262145.f_3519;
}
if(iParam0==49){
fVar0=Global_262145.f_3520;
}
if(iParam0==50){
fVar0=Global_262145.f_3521;
}
if(iParam0==51){
fVar0=Global_262145.f_3522;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3284;
}
if(iParam0==44){
fVar0=Global_262145.f_3378;
}
if(iParam0==45){
fVar0=Global_262145.f_3379;
}
if(iParam0==46){
fVar0=Global_262145.f_3380;
}
if(iParam0==47){
fVar0=Global_262145.f_3381;
}
if(iParam0==48){
fVar0=Global_262145.f_3382;
}
if(iParam0==49){
fVar0=Global_262145.f_3383;
}
if(iParam0==50){
fVar0=Global_262145.f_3384;
}
if(iParam0==51){
fVar0=Global_262145.f_3385;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3147;
}
if(iParam0==44){
fVar0=Global_262145.f_3241;
}
if(iParam0==45){
fVar0=Global_262145.f_3242;
}
if(iParam0==46){
fVar0=Global_262145.f_3243;
}
if(iParam0==47){
fVar0=Global_262145.f_3244;
}
if(iParam0==48){
fVar0=Global_262145.f_3245;
}
if(iParam0==49){
fVar0=Global_262145.f_3246;
}
if(iParam0==50){
fVar0=Global_262145.f_3247;
}
if(iParam0==51){
fVar0=Global_262145.f_3248;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3558;
}
if(iParam0==44){
fVar0=Global_262145.f_3652;
}
if(iParam0==45){
fVar0=Global_262145.f_3653;
}
if(iParam0==46){
fVar0=Global_262145.f_3654;
}
if(iParam0==47){
fVar0=Global_262145.f_3655;
}
if(iParam0==48){
fVar0=Global_262145.f_3656;
}
if(iParam0==49){
fVar0=Global_262145.f_3657;
}
if(iParam0==50){
fVar0=Global_262145.f_3658;
}
if(iParam0==51){
fVar0=Global_262145.f_3659;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3010;
}
if(iParam0==44){
fVar0=Global_262145.f_3104;
}
if(iParam0==45){
fVar0=Global_262145.f_3105;
}
if(iParam0==46){
fVar0=Global_262145.f_3106;
}
if(iParam0==47){
fVar0=Global_262145.f_3107;
}
if(iParam0==48){
fVar0=Global_262145.f_3108;
}
if(iParam0==49){
fVar0=Global_262145.f_3109;
}
if(iParam0==50){
fVar0=Global_262145.f_3110;
}
if(iParam0==51){
fVar0=Global_262145.f_3111;
}}
return (fVar0 * Global_296941.f_38);
}


float func_391(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3419;
}
if(iParam0==1){
fVar0=Global_262145.f_3474;
}
if(iParam0==2){
fVar0=Global_262145.f_3475;
}
if(iParam0==3){
fVar0=Global_262145.f_3476;
}
if(iParam0==4){
fVar0=Global_262145.f_3477;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3478;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3282;
}
if(iParam0==1){
fVar0=Global_262145.f_3337;
}
if(iParam0==2){
fVar0=Global_262145.f_3338;
}
if(iParam0==3){
fVar0=Global_262145.f_3339;
}
if(iParam0==4){
fVar0=Global_262145.f_3340;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3341;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3145;
}
if(iParam0==1){
fVar0=Global_262145.f_3200;
}
if(iParam0==2){
fVar0=Global_262145.f_3201;
}
if(iParam0==3){
fVar0=Global_262145.f_3202;
}
if(iParam0==4){
fVar0=Global_262145.f_3203;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3204;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3556;
}
if(iParam0==1){
fVar0=Global_262145.f_3611;
}
if(iParam0==2){
fVar0=Global_262145.f_3612;
}
if(iParam0==3){
fVar0=Global_262145.f_3613;
}
if(iParam0==4){
fVar0=Global_262145.f_3614;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3615;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3008;
}
if(iParam0==1){
fVar0=Global_262145.f_3063;
}
if(iParam0==2){
fVar0=Global_262145.f_3064;
}
if(iParam0==3){
fVar0=Global_262145.f_3065;
}
if(iParam0==4){
fVar0=Global_262145.f_3066;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3067;
}}
return (fVar0 * Global_296941.f_36);
}


float func_392(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==27) || Global_1585918==26) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3448;
}
if(iParam0==1){
fVar0=Global_262145.f_3533;
}
if(iParam0==2){
fVar0=Global_262145.f_3534;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3535;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3311;
}
if(iParam0==1){
fVar0=Global_262145.f_3396;
}
if(iParam0==2){
fVar0=Global_262145.f_3397;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3398;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3174;
}
if(iParam0==1){
fVar0=Global_262145.f_3259;
}
if(iParam0==2){
fVar0=Global_262145.f_3260;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3261;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3585;
}
if(iParam0==1){
fVar0=Global_262145.f_3670;
}
if(iParam0==2){
fVar0=Global_262145.f_3671;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3672;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3037;
}
if(iParam0==1){
fVar0=Global_262145.f_3122;
}
if(iParam0==2){
fVar0=Global_262145.f_3123;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3124;
}}
return (fVar0 * Global_296941.f_32);
}


float func_393(int iParam0){
float fVar0;
fVar0=1f;
if(iParam0==0){
fVar0=Global_262145.f_3092;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3503;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3366;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3229;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3640;
}}else{
fVar0=Global_262145.f_3091;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3502;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3365;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3228;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3639;
}}
return (fVar0 * Global_296941.f_34);
}

int func_394(int iParam0){
if(func_395(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_395(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


float func_396(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3416;
}
if(iParam0==1){
fVar0=Global_262145.f_3469;
}
if(iParam0==2){
fVar0=Global_262145.f_3470;
}
if(iParam0==3){
fVar0=Global_262145.f_3471;
}
if(iParam0==4){
fVar0=Global_262145.f_3472;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3473;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3279;
}
if(iParam0==1){
fVar0=Global_262145.f_3332;
}
if(iParam0==2){
fVar0=Global_262145.f_3333;
}
if(iParam0==3){
fVar0=Global_262145.f_3334;
}
if(iParam0==4){
fVar0=Global_262145.f_3335;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3336;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3142;
}
if(iParam0==1){
fVar0=Global_262145.f_3195;
}
if(iParam0==2){
fVar0=Global_262145.f_3196;
}
if(iParam0==3){
fVar0=Global_262145.f_3197;
}
if(iParam0==4){
fVar0=Global_262145.f_3198;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3199;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3553;
}
if(iParam0==1){
fVar0=Global_262145.f_3606;
}
if(iParam0==2){
fVar0=Global_262145.f_3607;
}
if(iParam0==3){
fVar0=Global_262145.f_3608;
}
if(iParam0==4){
fVar0=Global_262145.f_3609;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3610;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3005;
}
if(iParam0==1){
fVar0=Global_262145.f_3058;
}
if(iParam0==2){
fVar0=Global_262145.f_3059;
}
if(iParam0==3){
fVar0=Global_262145.f_3060;
}
if(iParam0==4){
fVar0=Global_262145.f_3061;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3062;
}}
return (fVar0 * Global_296941.f_33);
}


float func_397(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==27) || Global_1585918==26) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==1){
fVar0=Global_262145.f_3498;
}
if(iParam0==2){
fVar0=Global_262145.f_3499;
}
if(iParam0==3){
fVar0=Global_262145.f_3500;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3501;
}}elseif(Global_1585918==1){
if(iParam0==1){
fVar0=Global_262145.f_3361;
}
if(iParam0==2){
fVar0=Global_262145.f_3362;
}
if(iParam0==3){
fVar0=Global_262145.f_3363;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3364;
}}elseif(Global_1585918==2){
if(iParam0==1){
fVar0=Global_262145.f_3224;
}
if(iParam0==2){
fVar0=Global_262145.f_3225;
}
if(iParam0==3){
fVar0=Global_262145.f_3226;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3227;
}}elseif(Global_1585918==4){
if(iParam0==1){
fVar0=Global_262145.f_3635;
}
if(iParam0==2){
fVar0=Global_262145.f_3636;
}
if(iParam0==3){
fVar0=Global_262145.f_3637;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3638;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==1){
fVar0=Global_262145.f_3087;
}
if(iParam0==2){
fVar0=Global_262145.f_3088;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3089;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3090;
}}
return (fVar0 * Global_296941.f_32);
}


float func_398(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3415;
}
if(iParam0==1){
fVar0=Global_262145.f_3494;
}
if(iParam0==2){
fVar0=Global_262145.f_3495;
}
if(iParam0==3){
fVar0=Global_262145.f_3496;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3497;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3278;
}
if(iParam0==1){
fVar0=Global_262145.f_3357;
}
if(iParam0==2){
fVar0=Global_262145.f_3358;
}
if(iParam0==3){
fVar0=Global_262145.f_3359;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3360;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3141;
}
if(iParam0==1){
fVar0=Global_262145.f_3220;
}
if(iParam0==2){
fVar0=Global_262145.f_3221;
}
if(iParam0==3){
fVar0=Global_262145.f_3222;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3223;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3552;
}
if(iParam0==1){
fVar0=Global_262145.f_3631;
}
if(iParam0==2){
fVar0=Global_262145.f_3632;
}
if(iParam0==3){
fVar0=Global_262145.f_3633;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3634;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3004;
}
if(iParam0==1){
fVar0=Global_262145.f_3083;
}
if(iParam0==2){
fVar0=Global_262145.f_3084;
}
if(iParam0==3){
fVar0=Global_262145.f_3085;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3086;
}}
return fVar0;
}


float func_399(int iParam0){
float fVar0;
fVar0=1f;
if(((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3414;
}
if(iParam0==1){
fVar0=Global_262145.f_3490;
}
if(iParam0==2){
fVar0=Global_262145.f_3491;
}
if(iParam0==3){
fVar0=Global_262145.f_3492;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3493;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3277;
}
if(iParam0==1){
fVar0=Global_262145.f_3353;
}
if(iParam0==2){
fVar0=Global_262145.f_3354;
}
if(iParam0==3){
fVar0=Global_262145.f_3355;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3356;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3140;
}
if(iParam0==1){
fVar0=Global_262145.f_3216;
}
if(iParam0==2){
fVar0=Global_262145.f_3217;
}
if(iParam0==3){
fVar0=Global_262145.f_3218;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3219;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3551;
}
if(iParam0==1){
fVar0=Global_262145.f_3627;
}
if(iParam0==2){
fVar0=Global_262145.f_3628;
}
if(iParam0==3){
fVar0=Global_262145.f_3629;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3630;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3003;
}
if(iParam0==1){
fVar0=Global_262145.f_3079;
}
if(iParam0==2){
fVar0=Global_262145.f_3080;
}
if(iParam0==3){
fVar0=Global_262145.f_3081;
}
if(iParam0 >=4){
fVar0=Global_262145.f_3082;
}}elseif(Global_1585918==30){}
return fVar0;
}


float func_400(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3420;
}
if(iParam0==1){
fVar0=Global_262145.f_3509;
}
if(iParam0==2){
fVar0=Global_262145.f_3510;
}
if(iParam0==3){
fVar0=Global_262145.f_3511;
}
if(iParam0==4){
fVar0=Global_262145.f_3512;
}
if(iParam0==5){
fVar0=Global_262145.f_3513;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3514;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3283;
}
if(iParam0==1){
fVar0=Global_262145.f_3372;
}
if(iParam0==2){
fVar0=Global_262145.f_3373;
}
if(iParam0==3){
fVar0=Global_262145.f_3374;
}
if(iParam0==4){
fVar0=Global_262145.f_3375;
}
if(iParam0==5){
fVar0=Global_262145.f_3376;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3377;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3146;
}
if(iParam0==1){
fVar0=Global_262145.f_3235;
}
if(iParam0==2){
fVar0=Global_262145.f_3236;
}
if(iParam0==3){
fVar0=Global_262145.f_3237;
}
if(iParam0==4){
fVar0=Global_262145.f_3238;
}
if(iParam0==5){
fVar0=Global_262145.f_3239;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3240;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3557;
}
if(iParam0==1){
fVar0=Global_262145.f_3646;
}
if(iParam0==2){
fVar0=Global_262145.f_3647;
}
if(iParam0==3){
fVar0=Global_262145.f_3648;
}
if(iParam0==4){
fVar0=Global_262145.f_3649;
}
if(iParam0==5){
fVar0=Global_262145.f_3650;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3651;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3009;
}
if(iParam0==1){
fVar0=Global_262145.f_3098;
}
if(iParam0==2){
fVar0=Global_262145.f_3099;
}
if(iParam0==3){
fVar0=Global_262145.f_3100;
}
if(iParam0==4){
fVar0=Global_262145.f_3101;
}
if(iParam0==5){
fVar0=Global_262145.f_3102;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3103;
}}
return (fVar0 * Global_296941.f_37);
}


float func_401(){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
fVar0=Global_262145.f_3447;
}elseif(Global_1585918==1){
fVar0=Global_262145.f_3310;
}elseif(Global_1585918==2){
fVar0=Global_262145.f_3173;
}elseif(Global_1585918==4){
fVar0=Global_262145.f_3584;
}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
fVar0=Global_262145.f_3036;
}
return (fVar0 * Global_296941.f_39);
}


float func_402(int iParam0){
float fVar0;
fVar0=1f;
if(((((((((((((((Global_1585918==3 || Global_1585918==27) || Global_1585918==26) || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==29) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3413;
}
if(iParam0==1){
fVar0=Global_262145.f_3462;
}
if(iParam0==2){
fVar0=Global_262145.f_3463;
}
if(iParam0==3){
fVar0=Global_262145.f_3464;
}
if(iParam0==4){
fVar0=Global_262145.f_3465;
}
if(iParam0==5){
fVar0=Global_262145.f_3466;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3467;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3276;
}
if(iParam0==1){
fVar0=Global_262145.f_3325;
}
if(iParam0==2){
fVar0=Global_262145.f_3326;
}
if(iParam0==3){
fVar0=Global_262145.f_3327;
}
if(iParam0==4){
fVar0=Global_262145.f_3328;
}
if(iParam0==5){
fVar0=Global_262145.f_3329;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3330;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3139;
}
if(iParam0==1){
fVar0=Global_262145.f_3188;
}
if(iParam0==2){
fVar0=Global_262145.f_3189;
}
if(iParam0==3){
fVar0=Global_262145.f_3190;
}
if(iParam0==4){
fVar0=Global_262145.f_3191;
}
if(iParam0==5){
fVar0=Global_262145.f_3192;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3193;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3550;
}
if(iParam0==1){
fVar0=Global_262145.f_3599;
}
if(iParam0==2){
fVar0=Global_262145.f_3600;
}
if(iParam0==3){
fVar0=Global_262145.f_3601;
}
if(iParam0==4){
fVar0=Global_262145.f_3602;
}
if(iParam0==5){
fVar0=Global_262145.f_3603;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3604;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3002;
}
if(iParam0==1){
fVar0=Global_262145.f_3051;
}
if(iParam0==2){
fVar0=Global_262145.f_3052;
}
if(iParam0==3){
fVar0=Global_262145.f_3053;
}
if(iParam0==4){
fVar0=Global_262145.f_3054;
}
if(iParam0==5){
fVar0=Global_262145.f_3055;
}
if(iParam0 >=6){
fVar0=Global_262145.f_3056;
}}elseif(Global_1585918==30){}
return fVar0;
}


float func_403(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==27) || Global_1585918==26) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3461;
}
if(iParam0==1){
fVar0=Global_262145.f_3453;
}
if(iParam0==2){
fVar0=Global_262145.f_3454;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3455;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3324;
}
if(iParam0==1){
fVar0=Global_262145.f_3316;
}
if(iParam0==2){
fVar0=Global_262145.f_3317;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3318;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3187;
}
if(iParam0==1){
fVar0=Global_262145.f_3179;
}
if(iParam0==2){
fVar0=Global_262145.f_3180;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3181;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3598;
}
if(iParam0==1){
fVar0=Global_262145.f_3590;
}
if(iParam0==2){
fVar0=Global_262145.f_3591;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3592;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3050;
}
if(iParam0==1){
fVar0=Global_262145.f_3042;
}
if(iParam0==2){
fVar0=Global_262145.f_3043;
}
if(iParam0 >=3){
fVar0=Global_262145.f_3044;
}}
return (fVar0 * Global_296941.f_30);
}


float func_404(int iParam0){
float fVar0;
fVar0=1f;
if((((((((((((((((Global_1585918==3 || Global_1585918==7) || Global_1585918==5) || Global_1585918==10) || Global_1585918==27) || Global_1585918==26) || Global_1585918==29) || Global_1585918==30) || Global_1585918==31) || Global_1585918==32) || Global_1585918==33) || Global_1585918==34) || Global_1585918==35) || Global_1585918==36) || Global_1585918==37) || Global_1585918==38) || Global_1585918==39){
if(iParam0==0){
fVar0=Global_262145.f_3412;
}
if(iParam0==1){
fVar0=Global_262145.f_3456;
}
if(iParam0==2){
fVar0=Global_262145.f_3457;
}
if(iParam0==3){
fVar0=Global_262145.f_3458;
}
if(iParam0==4){
fVar0=Global_262145.f_3459;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3460;
}}elseif(Global_1585918==2){
if(iParam0==0){
fVar0=Global_262145.f_3138;
}
if(iParam0==1){
fVar0=Global_262145.f_3182;
}
if(iParam0==2){
fVar0=Global_262145.f_3183;
}
if(iParam0==3){
fVar0=Global_262145.f_3184;
}
if(iParam0==4){
fVar0=Global_262145.f_3185;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3186;
}}elseif(Global_1585918==1){
if(iParam0==0){
fVar0=Global_262145.f_3275;
}
if(iParam0==1){
fVar0=Global_262145.f_3319;
}
if(iParam0==2){
fVar0=Global_262145.f_3320;
}
if(iParam0==3){
fVar0=Global_262145.f_3321;
}
if(iParam0==4){
fVar0=Global_262145.f_3322;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3323;
}}elseif(Global_1585918==4){
if(iParam0==0){
fVar0=Global_262145.f_3549;
}
if(iParam0==1){
fVar0=Global_262145.f_3593;
}
if(iParam0==2){
fVar0=Global_262145.f_3594;
}
if(iParam0==3){
fVar0=Global_262145.f_3595;
}
if(iParam0==4){
fVar0=Global_262145.f_3596;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3597;
}}elseif((((Global_1585918==0 || Global_1585918==28) || Global_1585918==4) || Global_1585918==6) || Global_1585918==11){
if(iParam0==0){
fVar0=Global_262145.f_3001;
}
if(iParam0==1){
fVar0=Global_262145.f_3045;
}
if(iParam0==2){
fVar0=Global_262145.f_3046;
}
if(iParam0==3){
fVar0=Global_262145.f_3047;
}
if(iParam0==4){
fVar0=Global_262145.f_3048;
}
if(iParam0 >=5){
fVar0=Global_262145.f_3049;
}}
return fVar0;
}

int func_405(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(func_406(iVar0)){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 36) !=-1){
return 1;
}}
return 0;
}

int func_406(int iParam0){
switch (iParam0){
case joaat("brioso"):
case joaat("sentinel"):
case joaat("hakuchou2"):
case joaat("turismo2"):
case joaat("deveste"):
case joaat("banshee"):
case joaat("vigero2"):
case joaat("feltzer3"):
case joaat("entity3"):
case joaat("issi8"):
return 1;
default:
}
return 0;
}

int func_407(var uParam0, int iParam1, bool bParam2, int iParam3){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
bVar0=NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
if(iParam3==0){
bVar0=true;
}elseif(iParam3==1){
bVar0=false;
}
iVar1=-1;
iVar2=-1;
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam1)){
bVar3=false;
if(iParam1==0){
}elseif(iParam1==Global_75654){
}elseif(iParam1==Global_75655){
}elseif(iParam1==Global_75656){
iVar1=500000;
if(bVar0){
if(Global_262145.f_21571 >=0){
iVar1=Global_262145.f_21571;
}}
bVar3=true;
}elseif(iParam1==Global_75657){
}elseif(iParam1==Global_75658){
}elseif(iParam1==joaat("kosatka")){
}elseif(iParam1==joaat("brickade2")){
}
if(!bVar3){
return 0;
}}
switch (iParam1){
case joaat("adder"):
iVar1=1000000;
break;
case joaat("akuma"):
iVar1=9000;
break;
case joaat("asea"):
iVar1=12000;
break;
case joaat("asterope"):
iVar1=26000;
break;
case joaat("bagger"):
iVar1=16000;
if(bVar0){
if(Global_262145.f_17920 >=0){
iVar1=Global_262145.f_17920;
}}
break;
case joaat("baller"):
iVar1=90000;
break;
case joaat("baller2"):
iVar1=90000;
break;
case joaat("banshee"):
iVar1=90000;
break;
case joaat("bati"):
iVar1=10000;
break;
case joaat("bati2"):
iVar1=10000;
break;
case joaat("bfinjection"):
iVar1=16000;
break;
case joaat("bison"):
iVar1=30000;
break;
case joaat("bison2"):
iVar1=30000;
break;
case joaat("bison3"):
iVar1=30000;
break;
case joaat("bjxl"):
iVar1=27000;
if(bVar0){
if(Global_262145.f_24792 >=0){
iVar1=Global_262145.f_24792;
}}
break;
case joaat("blazer"):
iVar1=8000;
break;
case joaat("blazer2"):
iVar1=62000;
if(bVar0){
iVar1=Global_262145.f_28587;
}
break;
case joaat("blista"):
iVar1=16000;
break;
case joaat("bobcatxl"):
iVar1=23000;
break;
case joaat("bodhi2"):
iVar1=12000;
break;
case joaat("boxville"):
if(!bParam2){
iVar1=298500;
if(bVar0){
iVar1=Global_262145.f_28513;
}}else{
iVar1=398000;
if(bVar0){
iVar1=Global_262145.f_28512;
}
iVar2=298500;
if(bVar0){
iVar2=Global_262145.f_28513;
}}
break;
case joaat("stockade"):
if(!bParam2){
iVar1=1680000;
if(bVar0){
iVar1=Global_262145.f_28515;
}}else{
iVar1=2240000;
if(bVar0){
iVar1=Global_262145.f_28514;
}
iVar2=1680000;
if(bVar0){
iVar2=Global_262145.f_28515;
}}
break;
case joaat("boxville2"):
iVar1=25000;
break;
case joaat("boxville3"):
iVar1=25000;
break;
case joaat("buccaneer"):
iVar1=28000;
break;
case joaat("buffalo"):
iVar1=35000;
break;
case joaat("buffalo2"):
iVar1=96000;
break;
case joaat("bullet"):
iVar1=150000;
break;
case joaat("burrito"):
iVar1=13000;
break;
case joaat("burrito2"):
if(bParam2){
iVar1=450000;
if(bVar0){
iVar1=Global_262145.f_28511;
}}else{
iVar1=598500;
if(bVar0){
iVar1=Global_262145.f_28510;
}
iVar2=450000;
if(bVar0){
iVar2=Global_262145.f_28511;
}}
break;
case joaat("burrito3"):
iVar1=13000;
break;
case joaat("burrito4"):
iVar1=13000;
break;
case joaat("carbonizzare"):
iVar1=195000;
break;
case joaat("carbonrs"):
iVar1=40000;
break;
case joaat("cavalcade"):
iVar1=60000;
break;
case joaat("cavalcade2"):
iVar1=70000;
break;
case joaat("cheetah"):
iVar1=650000;
break;
case joaat("cogcabrio"):
iVar1=185000;
break;
case joaat("comet2"):
iVar1=85000;
break;
case joaat("coquette"):
iVar1=55000;
break;
case joaat("daemon"):
iVar1=20000;
break;
case joaat("dilettante"):
iVar1=25000;
break;
case joaat("dominator"):
iVar1=35000;
if(bVar0 && Global_262145.f_7634 >=0){
iVar1=Global_262145.f_7634;
}
if(bParam2){
iVar2=iVar1;
iVar1=round((to_float(35000) * 0.75f));
if(bVar0 && Global_262145.f_25940 >=0){
iVar1=Global_262145.f_25940;
}}
break;
case joaat("double"):
iVar1=12000;
break;
case joaat("dubsta"):
iVar1=120000;
break;
case joaat("dubsta2"):
iVar1=120000;
break;
case joaat("elegy2"):
if(!bParam2){
iVar1=95000;
if(bVar0){
if(Global_262145.f_19648 >=0){
iVar1=Global_262145.f_19648;
}}}else{
iVar1=0;
if(bVar0){
if(Global_262145.f_8608 >=0){
iVar1=Global_262145.f_8608;
}}}
break;
case joaat("emperor"):
iVar1=8000;
break;
case joaat("emperor2"):
iVar1=5000;
break;
case joaat("emperor3"):
iVar1=5000;
break;
case joaat("entityxf"):
iVar1=795000;
break;
case joaat("exemplar"):
iVar1=205000;
break;
case joaat("f620"):
iVar1=80000;
break;
case joaat("faggio2"):
iVar1=5000;
break;
case joaat("felon"):
iVar1=100000;
break;
case joaat("felon2"):
iVar1=95000;
break;
case joaat("feltzer2"):
iVar1=145000;
break;
case joaat("fq2"):
iVar1=50000;
if(bVar0){
if(Global_262145.f_24793 >=0){
iVar1=Global_262145.f_24793;
}}
break;
case joaat("fugitive"):
iVar1=24000;
break;
case joaat("fusilade"):
iVar1=36000;
break;
case joaat("futo"):
iVar1=9000;
if(bVar0){
if(Global_262145.f_24786 >=0){
iVar1=Global_262145.f_24786;
}}
break;
case joaat("gauntlet"):
iVar1=32000;
break;
case joaat("gburrito"):
iVar1=16000;
break;
case joaat("granger"):
iVar1=35000;
break;
case joaat("gresley"):
iVar1=29000;
break;
case joaat("habanero"):
iVar1=42000;
if(bVar0){
if(Global_262145.f_24794 >=0){
iVar1=Global_262145.f_24794;
}}
break;
case joaat("hexer"):
iVar1=15000;
break;
case joaat("hotknife"):
iVar1=90000;
break;
case joaat("infernus"):
iVar1=440000;
break;
case joaat("ingot"):
iVar1=9000;
break;
case joaat("intruder"):
iVar1=16000;
break;
case joaat("issi2"):
iVar1=18000;
break;
case joaat("jackal"):
iVar1=60000;
break;
case joaat("jb700"):
iVar1=475000;
break;
case joaat("khamelion"):
iVar1=100000;
break;
case joaat("landstalker"):
iVar1=58000;
break;
case joaat("lguard"):
iVar1=865000;
if(bVar0){
iVar1=Global_262145.f_28586;
}
break;
case joaat("firetruk"):
if(!bParam2){
iVar1=2471250;
if(bVar0){
iVar1=Global_262145.f_28509;
}}else{
iVar1=3295000;
if(bVar0){
iVar1=Global_262145.f_28508;
}
iVar2=2471250;
if(bVar0){
iVar2=Global_262145.f_28509;
}}
break;
case joaat("manana"):
iVar1=10000;
if(bVar0){
if(Global_262145.f_29377 >=0){
iVar1=Global_262145.f_29377;
}}
break;
case joaat("mesa"):
iVar1=30000;
break;
case joaat("minivan"):
iVar1=30000;
break;
case joaat("monroe"):
iVar1=490000;
break;
case joaat("nemesis"):
iVar1=12000;
break;
case joaat("ninef"):
iVar1=120000;
break;
case joaat("ninef2"):
iVar1=130000;
break;
case joaat("oracle"):
iVar1=82000;
break;
case joaat("oracle2"):
iVar1=80000;
break;
case joaat("patriot"):
iVar1=50000;
if(bVar0){
if(Global_262145.f_24790 >=0){
iVar1=Global_262145.f_24790;
}}
break;
case joaat("pcj"):
iVar1=9000;
break;
case joaat("penumbra"):
iVar1=24000;
break;
case joaat("peyote"):
iVar1=12000;
if(bVar0){
if(Global_262145.f_29378 >=0){
iVar1=Global_262145.f_29378;
}}
break;
case joaat("phoenix"):
iVar1=20000;
break;
case joaat("prairie"):
iVar1=25000;
if(bVar0){
if(Global_262145.f_24789 >=0){
iVar1=Global_262145.f_24789;
}}
break;
case joaat("pranger"):
iVar1=35000;
break;
case joaat("premier"):
iVar1=10000;
break;
case joaat("primo"):
iVar1=9000;
break;
case joaat("radi"):
iVar1=32000;
break;
case joaat("rancherxl"):
iVar1=9000;
break;
case joaat("rancherxl2"):
iVar1=9000;
break;
case joaat("rapidgt"):
iVar1=118000;
break;
case joaat("rapidgt2"):
iVar1=136000;
break;
case joaat("ratloader"):
iVar1=6000;
break;
case joaat("rebel"):
iVar1=7000;
break;
case joaat("rebel2"):
iVar1=22000;
break;
case joaat("regina"):
iVar1=8000;
break;
case joaat("rocoto"):
iVar1=85000;
break;
case joaat("ruffian"):
iVar1=10000;
break;
case joaat("ruiner"):
iVar1=10000;
if(bVar0){
if(Global_262145.f_24787 >=0){
iVar1=Global_262145.f_24787;
}}
break;
case joaat("rumpo"):
iVar1=13000;
break;
case joaat("sabregt"):
iVar1=15000;
if(bVar0){
if(Global_262145.f_15029 >=0){
iVar1=Global_262145.f_15029;
}}
break;
case joaat("sadler"):
iVar1=35000;
break;
case joaat("sanchez"):
iVar1=7000;
break;
case joaat("sandking"):
iVar1=45000;
break;
case joaat("sandking2"):
iVar1=45000;
break;
case joaat("schafter2"):
iVar1=65000;
break;
case joaat("schwarzer"):
iVar1=80000;
break;
case joaat("seashark"):
iVar1=16899;
break;
case joaat("seminole"):
iVar1=30000;
break;
case joaat("sentinel"):
iVar1=60000;
break;
case joaat("sentinel2"):
iVar1=60000;
break;
case joaat("serrano"):
iVar1=60000;
if(bVar0){
if(Global_262145.f_24791 >=0){
iVar1=Global_262145.f_24791;
}}
break;
case joaat("speedo"):
iVar1=15000;
break;
case joaat("speedo2"):
iVar1=15000;
break;
case joaat("stanier"):
iVar1=10000;
break;
case joaat("stinger"):
iVar1=1000000;
break;
case joaat("stingergt"):
iVar1=1000000;
break;
case joaat("stratum"):
iVar1=10000;
break;
case joaat("stretch"):
iVar1=30000;
break;
case joaat("sultan"):
iVar1=12000;
break;
case joaat("superd"):
iVar1=250000;
break;
case joaat("surano"):
iVar1=99000;
break;
case joaat("surge"):
iVar1=38000;
break;
case joaat("tailgater"):
iVar1=55000;
break;
case joaat("taxi"):
iVar1=13000;
if(Global_78558){
iVar1=650000;
if(bVar0 && Global_262145.f_33933 >=0){
iVar1=Global_262145.f_33933;
}
if(bParam2){
iVar2=iVar1;
iVar1=487500;
if(bVar0 && Global_262145.f_33938 >=0){
iVar1=Global_262145.f_33938;
}}}
break;
case joaat("tornado"):
iVar1=30000;
if(bVar0){
if(Global_262145.f_15030 >=0){
iVar1=Global_262145.f_15030;
}}
break;
case joaat("tornado2"):
iVar1=30000;
if(bVar0){
if(Global_262145.f_15030 >=0){
iVar1=Global_262145.f_15030;
}}
break;
case joaat("tornado3"):
iVar1=30000;
if(bVar0){
if(Global_262145.f_15030 >=0){
iVar1=Global_262145.f_15030;
}}
break;
case joaat("tornado4"):
iVar1=30000;
if(bVar0){
if(Global_262145.f_15030 >=0){
iVar1=Global_262145.f_15030;
}}
break;
case joaat("vacca"):
iVar1=240000;
break;
case joaat("vader"):
iVar1=9000;
break;
case joaat("vigero"):
iVar1=21000;
break;
case joaat("voltic"):
iVar1=80000;
break;
case joaat("voodoo2"):
iVar1=5000;
break;
case joaat("washington"):
iVar1=15000;
break;
case joaat("youga"):
iVar1=16000;
break;
case joaat("zion"):
iVar1=50000;
break;
case joaat("zion2"):
iVar1=65000;
break;
case joaat("bmx"):
iVar1=500;
break;
case joaat("scorcher"):
iVar1=1000;
break;
case joaat("tribike"):
iVar1=2500;
break;
case joaat("tribike2"):
iVar1=2500;
break;
case joaat("tribike3"):
iVar1=2500;
break;
case joaat("cruiser"):
iVar1=3000;
break;
case joaat("ztype"):
if(bVar0){
iVar1=1000000;
}else{
iVar1=10000000;
}
break;
}
if(bVar0 || iParam3==1){
switch (iParam1){
case joaat("adder"):
iVar1=1000000;
break;
case joaat("airbus"):
iVar1=550000;
break;
case joaat("akuma"):
iVar1=9000;
break;
case joaat("annihilator"):
iVar1=4000000;
break;
case joaat("baller2"):
iVar1=90000;
break;
case joaat("banshee"):
iVar1=105000;
break;
case joaat("barracks"):
iVar1=450000;
break;
case joaat("bati"):
iVar1=15000;
break;
case joaat("bati2"):
iVar1=15000;
break;
case joaat("bfinjection"):
iVar1=16000;
break;
case joaat("bison"):
iVar1=30000;
break;
case joaat("blazer"):
iVar1=8000;
break;
case joaat("bmx"):
iVar1=800;
break;
case joaat("bullet"):
iVar1=155000;
break;
case joaat("bus"):
iVar1=500000;
break;
case joaat("buzzard"):
iVar1=2000000;
break;
case joaat("carbonizzare"):
iVar1=195000;
break;
case joaat("carbonrs"):
iVar1=40000;
break;
case joaat("cargobob"):
iVar1=185000;
break;
case joaat("cheetah"):
iVar1=650000;
break;
case joaat("coach"):
iVar1=525000;
break;
case joaat("cogcabrio"):
iVar1=185000;
break;
case joaat("comet2"):
iVar1=100000;
break;
case joaat("coquette"):
iVar1=138000;
break;
case joaat("cruiser"):
iVar1=800;
break;
case joaat("crusader"):
iVar1=225000;
break;
case joaat("cuban800"):
iVar1=240000;
break;
case joaat("dilettante"):
iVar1=25000;
break;
case joaat("double"):
iVar1=12000;
break;
case joaat("dubsta"):
iVar1=70000;
break;
case joaat("dubsta2"):
iVar1=70000;
break;
case joaat("dump"):
iVar1=1000000;
break;
case joaat("duster"):
iVar1=275000;
break;
case joaat("elegy2"):
if(!bParam2){
iVar1=95000;
if(bVar0){
if(Global_262145.f_19648 >=0){
iVar1=Global_262145.f_19648;
}}}else{
iVar1=0;
if(bVar0){
if(Global_262145.f_8608 >=0){
iVar1=Global_262145.f_8608;
}}}
break;
case joaat("entityxf"):
iVar1=795000;
break;
case joaat("exemplar"):
iVar1=205000;
break;
case joaat("faggio2"):
iVar1=5000;
break;
case joaat("felon"):
iVar1=90000;
break;
case joaat("felon2"):
iVar1=95000;
break;
case joaat("feltzer2"):
iVar1=145000;
break;
case joaat("frogger"):
iVar1=1300000;
break;
case joaat("fugitive"):
iVar1=24000;
break;
case joaat("gauntlet"):
iVar1=32000;
break;
case joaat("hexer"):
iVar1=15000;
break;
case joaat("hotknife"):
iVar1=90000;
break;
case joaat("infernus"):
iVar1=440000;
break;
case joaat("issi2"):
iVar1=18000;
break;
case joaat("jb700"):
iVar1=350000;
break;
case joaat("jetmax"):
iVar1=299000;
break;
case joaat("journey"):
iVar1=15000;
break;
case joaat("khamelion"):
iVar1=100000;
break;
case joaat("luxor"):
iVar1=1500000;
break;
case joaat("mammatus"):
iVar1=300000;
break;
case joaat("marquis"):
iVar1=413990;
break;
case joaat("maverick"):
iVar1=780000;
break;
case joaat("monroe"):
iVar1=490000;
break;
case joaat("mule"):
iVar1=27000;
break;
case joaat("ninef"):
iVar1=120000;
break;
case joaat("ninef2"):
iVar1=130000;
break;
case joaat("oracle2"):
iVar1=80000;
break;
case joaat("pcj"):
iVar1=9000;
break;
case joaat("picador"):
iVar1=9000;
break;
case joaat("rapidgt"):
iVar1=132000;
break;
case joaat("rapidgt2"):
iVar1=140000;
break;
case joaat("rentalbus"):
iVar1=30000;
break;
case joaat("rocoto"):
iVar1=85000;
break;
case joaat("ruffian"):
iVar1=10000;
break;
case joaat("sanchez"):
iVar1=7000;
break;
case joaat("sandking"):
iVar1=45000;
break;
case joaat("schwarzer"):
iVar1=80000;
break;
case joaat("scorcher"):
iVar1=2000;
break;
case joaat("shamal"):
iVar1=1150000;
break;
case joaat("squalo"):
iVar1=196621;
break;
case joaat("stinger"):
iVar1=850000;
break;
case joaat("stingergt"):
iVar1=875000;
break;
case joaat("stretch"):
iVar1=30000;
break;
case joaat("stunt"):
iVar1=250000;
break;
case joaat("suntrap"):
iVar1=25160;
break;
case joaat("superd"):
iVar1=250000;
break;
case joaat("surano"):
iVar1=110000;
break;
case joaat("titan"):
iVar1=5000000;
break;
case joaat("tribike"):
iVar1=10000;
break;
case joaat("tribike2"):
iVar1=10000;
break;
case joaat("tribike3"):
iVar1=10000;
break;
case joaat("tropic"):
iVar1=22000;
break;
case joaat("vacca"):
iVar1=240000;
break;
case joaat("vader"):
iVar1=9000;
break;
case joaat("velum"):
iVar1=450000;
break;
case joaat("vigero"):
iVar1=21000;
break;
case joaat("voltic"):
iVar1=150000;
break;
case joaat("zion"):
iVar1=60000;
break;
case joaat("zion2"):
iVar1=65000;
break;
case joaat("ztype"):
iVar1=950000;
break;
}
switch (iParam1){
case joaat("annihilator"):
iVar1=1825000;
break;
case joaat("blazer3"):
iVar1=69000;
break;
case joaat("bodhi2"):
iVar1=25000;
break;
case joaat("buzzard"):
iVar1=1750000;
break;
case joaat("dilettante2"):
iVar1=25000;
break;
case joaat("dloader"):
iVar1=15000;
break;
case joaat("dune2"):
iVar1=1000000;
break;
case joaat("frogger"):
iVar1=1300000;
break;
case joaat("luxor"):
iVar1=1625000;
break;
case joaat("mesa3"):
iVar1=87000;
break;
case joaat("peyote"):
iVar1=38000;
if(bVar0){
if(Global_262145.f_29378 >=0){
iVar1=Global_262145.f_29378;
}}
break;
case joaat("rhino"):
iVar1=1500000;
if(bVar0){
if(Global_262145.f_4080 >=0){
iVar1=Global_262145.f_4080;
}}
break;
case joaat("romero"):
iVar1=45000;
if(bVar0){
if(Global_262145.f_24788 >=0){
iVar1=Global_262145.f_24788;
}}
break;
case joaat("sentinel2"):
iVar1=95000;
break;
case joaat("shamal"):
iVar1=1150000;
break;
case joaat("surfer"):
iVar1=11000;
break;
case joaat("surfer2"):
iVar1=5000;
break;
case joaat("titan"):
iVar1=2000000;
break;
case joaat("towtruck2"):
iVar1=32000;
break;
}
switch (iParam1){
case joaat("bodhi2"):
iVar1=25000;
if(bVar0){
if(Global_262145.f_4741 >=0){
iVar1=Global_262145.f_4741;
}}
break;
case joaat("dune"):
iVar1=20000;
if(bVar0 || iParam3==1){
iVar1=20000;
if(Global_262145.f_4742 >=0 && bVar0){
iVar1=Global_262145.f_4742;
}}
break;
case joaat("rebel"):
iVar1=3000;
break;
case joaat("sadler"):
iVar1=35000;
break;
case joaat("sanchez2"):
iVar1=8000;
break;
case joaat("sandking2"):
iVar1=38000;
break;
}
switch (iParam1){
case joaat("asea"):
iVar1=12000;
break;
case joaat("asterope"):
iVar1=26000;
if(bVar0){
if(Global_262145.f_7031 >=0){
iVar1=Global_262145.f_7031;
}}
break;
case joaat("bobcatxl"):
iVar1=23000;
if(bVar0){
if(Global_262145.f_7032 >=0){
iVar1=Global_262145.f_7032;
}}
break;
case joaat("cavalcade"):
iVar1=60000;
if(bVar0 || iParam3==1){
iVar1=60000;
if(Global_262145.f_4037 >=0 && bVar0){
iVar1=Global_262145.f_4037;
}}
break;
case joaat("cavalcade2"):
iVar1=60000;
if(bVar0 || iParam3==1){
iVar1=70000;
if(Global_262145.f_7033 >=0 && bVar0){
iVar1=Global_262145.f_7033;
}}
break;
case joaat("granger"):
iVar1=35000;
if(bVar0){
if(Global_262145.f_7034 >=0){
iVar1=Global_262145.f_7034;
}}
break;
case joaat("ingot"):
iVar1=9000;
if(bVar0){
if(Global_262145.f_7035 >=0){
iVar1=Global_262145.f_7035;
}}
break;
case joaat("intruder"):
iVar1=16000;
if(bVar0){
if(Global_262145.f_7036 >=0){
iVar1=Global_262145.f_7036;
}}
break;
case joaat("minivan"):
iVar1=30000;
if(bVar0){
if(Global_262145.f_7037 >=0){
iVar1=Global_262145.f_7037;
}}
break;
case joaat("premier"):
iVar1=10000;
if(bVar0){
if(Global_262145.f_7038 >=0){
iVar1=Global_262145.f_7038;
}}
break;
case joaat("radi"):
iVar1=32000;
if(bVar0){
if(Global_262145.f_7039 >=0){
iVar1=Global_262145.f_7039;
}}
break;
case joaat("rancherxl"):
iVar1=9000;
if(bVar0){
if(Global_262145.f_7040 >=0){
iVar1=Global_262145.f_7040;
}}
break;
case joaat("ratloader"):
iVar1=6000;
if(bVar0){
if(Global_262145.f_7060 >=0){
iVar1=Global_262145.f_7060;
}}
break;
case joaat("stanier"):
iVar1=10000;
if(bVar0){
if(Global_262145.f_7041 >=0){
iVar1=Global_262145.f_7041;
}}
break;
case joaat("stratum"):
iVar1=10000;
if(bVar0){
if(Global_262145.f_7042 >=0){
iVar1=Global_262145.f_7042;
}}
break;
case joaat("washington"):
iVar1=15000;
if(bVar0){
if(Global_262145.f_7043 >=0){
iVar1=Global_262145.f_7043;
}}
break;
case joaat("cargobob"):
iVar1=1790000;
if(bVar0){
if(Global_262145.f_16566 >=0){
iVar1=Global_262145.f_16566;
}}
break;
case joaat("cargobob2"):
iVar1=1995000;
if(bVar0){
if(Global_262145.f_16567 >=0){
iVar1=Global_262145.f_16567;
}}
break;
case joaat("tug"):
iVar1=1250000;
if(bVar0){
if(Global_262145.f_16573 >=0){
iVar1=Global_262145.f_16573;
}}
break;
case joaat("nimbus"):
iVar1=1900000;
if(bVar0){
if(Global_262145.f_16571 >=0){
iVar1=Global_262145.f_16571;
}}
break;
case joaat("brickade"):
iVar1=555000;
if(bVar0){
if(Global_262145.f_16569 >=0){
iVar1=Global_262145.f_16569;
}}
break;
case joaat("windsor2"):
iVar1=900000;
if(bVar0){
if(Global_262145.f_16575 >=0){
iVar1=Global_262145.f_16575;
}}
break;
case joaat("prototipo"):
iVar1=2700000;
if(bVar0){
if(Global_262145.f_16580 >=0){
iVar1=Global_262145.f_16580;
}}
break;
case joaat("fmj"):
iVar1=1750000;
if(bVar0){
if(Global_262145.f_16570 >=0){
iVar1=Global_262145.f_16570;
}}
break;
case joaat("bestiagts"):
iVar1=610000;
if(bVar0){
if(Global_262145.f_16568 >=0){
iVar1=Global_262145.f_16568;
}}
break;
case joaat("xls"):
iVar1=253000;
if(bVar0){
if(Global_262145.f_16576 >=0){
iVar1=Global_262145.f_16576;
}}
break;
case joaat("xls2"):
iVar1=522000;
if(bVar0){
if(Global_262145.f_16577 >=0){
iVar1=Global_262145.f_16577;
}}
break;
case joaat("seven70"):
iVar1=695000;
if(bVar0){
if(Global_262145.f_16578 >=0){
iVar1=Global_262145.f_16578;
}}
break;
case joaat("pfister811"):
iVar1=1135000;
if(bVar0){
if(Global_262145.f_16579 >=0){
iVar1=Global_262145.f_16579;
}}
break;
case joaat("reaper"):
iVar1=1595000;
if(bVar0){
if(Global_262145.f_16043 >=0){
iVar1=Global_262145.f_16043;
}}
break;
case joaat("rumpo3"):
iVar1=130000;
if(bVar0){
if(Global_262145.f_16572 >=0){
iVar1=Global_262145.f_16572;
}}
break;
case joaat("volatus"):
iVar1=2295000;
if(bVar0){
if(Global_262145.f_16574 >=0){
iVar1=Global_262145.f_16574;
}}
break;
case joaat("le7b"):
iVar1=2475000;
if(bVar0){
if(Global_262145.f_17347 >=0){
iVar1=Global_262145.f_17347;
}}
break;
case joaat("omnis"):
if(!bParam2){
iVar1=701000;
if(bVar0){
if(Global_262145.f_17348 >=0){
iVar1=Global_262145.f_17348;
}}}else{
iVar1=0;
}
break;
case joaat("tropos"):
iVar1=816000;
if(bVar0){
if(Global_262145.f_17349 >=0){
iVar1=Global_262145.f_17349;
}}
break;
case joaat("brioso"):
iVar1=155000;
if(bVar0){
if(Global_262145.f_17350 >=0){
iVar1=Global_262145.f_17350;
}}
break;
case joaat("trophytruck"):
iVar1=550000;
if(bVar0){
if(Global_262145.f_17351 >=0){
iVar1=Global_262145.f_17351;
}}
break;
case joaat("trophytruck2"):
iVar1=695000;
if(bVar0){
if(Global_262145.f_17352 >=0){
iVar1=Global_262145.f_17352;
}}
break;
case joaat("contender"):
iVar1=250000;
if(bVar0){
if(Global_262145.f_17353 >=0){
iVar1=Global_262145.f_17353;
}}
break;
case joaat("cliffhanger"):
iVar1=225000;
if(bVar0){
if(Global_262145.f_17354 >=0){
iVar1=Global_262145.f_17354;
}}
break;
case joaat("bf400"):
iVar1=95000;
if(bVar0){
if(Global_262145.f_17355 >=0){
iVar1=Global_262145.f_17355;
}}
break;
case joaat("tyrus"):
iVar1=2550000;
if(bVar0){
if(Global_262145.f_17345 >=0){
iVar1=Global_262145.f_17345;
}}
break;
case joaat("lynx"):
iVar1=1735000;
if(bVar0){
if(Global_262145.f_17356 >=0){
iVar1=Global_262145.f_17356;
}}
break;
case joaat("sheava"):
iVar1=1995000;
if(bVar0){
if(Global_262145.f_17344 >=0){
iVar1=Global_262145.f_17344;
}}
break;
case joaat("rallytruck"):
if(!bParam2){
iVar1=1300000;
if(bVar0){
if(Global_262145.f_17358 >=0){
iVar1=Global_262145.f_17358;
}}}else{
iVar1=1385000;
if(bVar0){
if(Global_262145.f_17359 >=0){
iVar1=Global_262145.f_17359;
}}}
break;
case joaat("tampa2"):
iVar1=995000;
if(bVar0){
if(Global_262145.f_17346 >=0){
iVar1=Global_262145.f_17346;
}}
break;
case joaat("gargoyle"):
iVar1=120000;
if(bVar0 && Global_262145.f_17357 >=0){
iVar1=Global_262145.f_17357;
}
if(bParam2){
iVar2=iVar1;
iVar1=round((to_float(120000) * 0.75f));
if(bVar0 && Global_262145.f_25943 >=0){
iVar1=Global_262145.f_25943;
}}
break;
case joaat("esskey"):
iVar1=264000;
if(bVar0){
if(Global_262145.f_17925 >=0){
iVar1=Global_262145.f_17925;
}}
break;
case joaat("nightblade"):
iVar1=100000;
if(bVar0){
if(Global_262145.f_17928 >=0){
iVar1=Global_262145.f_17928;
}}
break;
case joaat("defiler"):
if(bParam2){
iVar1=309000;
if(bVar0){
if(Global_262145.f_28520 >=0){
iVar1=Global_262145.f_28520;
}}}else{
iVar1=412000;
if(bVar0){
if(Global_262145.f_17924 >=0){
iVar1=Global_262145.f_17924;
}}
iVar2=309000;
if(bVar0){
if(Global_262145.f_28520 >=0){
iVar2=Global_262145.f_28520;
}}}
break;
case joaat("avarus"):
iVar1=116000;
if(bVar0){
if(Global_262145.f_17919 >=0){
iVar1=Global_262145.f_17919;
}}
break;
case joaat("zombiea"):
iVar1=99000;
if(bVar0){
if(Global_262145.f_17935 >=0){
iVar1=Global_262145.f_17935;
}}
break;
case joaat("zombieb"):
if(!bParam2){
iVar1=122000;
if(bVar0){
if(Global_262145.f_17936 >=0){
iVar1=Global_262145.f_17936;
}}}else{
iVar1=0;
}
break;
case joaat("chimera"):
iVar1=210000;
if(bVar0){
if(Global_262145.f_17922 >=0){
iVar1=Global_262145.f_17922;
}}
break;
case joaat("daemon2"):
iVar1=145000;
if(bVar0){
if(Global_262145.f_17923 >=0){
iVar1=Global_262145.f_17923;
}}
break;
case joaat("ratbike"):
iVar1=48000;
if(bVar0){
if(Global_262145.f_17930 >=0){
iVar1=Global_262145.f_17930;
}}
break;
case joaat("shotaro"):
iVar1=2225000;
if(bVar0){
if(Global_262145.f_17932 >=0){
iVar1=Global_262145.f_17932;
}}
break;
case joaat("raptor"):
iVar1=648000;
if(bVar0){
if(Global_262145.f_17929 >=0){
iVar1=Global_262145.f_17929;
}}
break;
case joaat("hakuchou2"):
iVar1=976000;
if(bVar0){
if(Global_262145.f_17926 >=0){
iVar1=Global_262145.f_17926;
}}
break;
case joaat("blazer4"):
iVar1=81000;
if(bVar0){
if(Global_262145.f_17921 >=0){
iVar1=Global_262145.f_17921;
}}
break;
case joaat("sanctus"):
iVar1=1995000;
if(bVar0){
if(Global_262145.f_17931 >=0){
iVar1=Global_262145.f_17931;
}}
break;
case joaat("vortex"):
if(!bParam2){
iVar1=356000;
if(bVar0){
if(Global_262145.f_17933 >=0){
iVar1=Global_262145.f_17933;
}}}else{
iVar1=0;
}
break;
case joaat("manchez"):
if(bParam2){
iVar1=50250;
if(bVar0){
if(Global_262145.f_28521 >=0){
iVar1=Global_262145.f_28521;
}}}else{
iVar1=67000;
if(bVar0){
if(Global_262145.f_17927 >=0){
iVar1=Global_262145.f_17927;
}}
iVar2=50250;
if(bVar0){
if(Global_262145.f_28521 >=0){
iVar2=Global_262145.f_28521;
}}}
break;
case joaat("tornado6"):
iVar1=378000;
if(bVar0){
if(Global_262145.f_18997 >=0){
iVar1=Global_262145.f_18997;
}}
break;
case joaat("youga2"):
iVar1=195000;
if(bVar0){
if(Global_262145.f_19000 >=0){
iVar1=Global_262145.f_19000;
}}
break;
case joaat("wolfsbane"):
if(bParam2){
iVar1=joaat("a_m_y_genstreet_28_lod");
if(bVar0){
}}else{
iVar1=95000;
if(bVar0){
if(Global_262145.f_17934 >=0){
iVar1=Global_262145.f_17934;
}}
iVar2=joaat("a_m_y_genstreet_28_lod");
if(bVar0){
}}
break;
case joaat("faggio3"):
iVar1=55000;
if(bVar0){
if(Global_262145.f_18998 >=0){
iVar1=Global_262145.f_18998;
}}
break;
case joaat("faggio"):
iVar1=47500;
if(bVar0){
if(Global_262145.f_18999 >=0){
iVar1=Global_262145.f_18999;
}}
break;
case joaat("dune5"):
if(!bParam2){
iVar1=3192000;
if(bVar0){
if(Global_262145.f_19618 >=0){
iVar1=Global_262145.f_19618;
}}}else{
iVar1=2400000;
if(bVar0){
if(Global_262145.f_19619 >=0){
iVar1=Global_262145.f_19619;
}}}
break;
case joaat("phantom2"):
if(!bParam2){
iVar1=2553600;
if(bVar0){
if(Global_262145.f_19620 >=0){
iVar1=Global_262145.f_19620;
}}}else{
iVar1=1920000;
if(bVar0){
if(Global_262145.f_19621 >=0){
iVar1=Global_262145.f_19621;
}}}
break;
case joaat("technical2"):
if(!bParam2){
iVar1=1489600;
if(bVar0){
if(Global_262145.f_19622 >=0){
iVar1=Global_262145.f_19622;
}}}else{
iVar1=1120000;
if(bVar0){
if(Global_262145.f_19623 >=0){
iVar1=Global_262145.f_19623;
}}}
break;
case joaat("blazer5"):
if(!bParam2){
iVar1=1755600;
if(bVar0){
if(Global_262145.f_19624 >=0){
iVar1=Global_262145.f_19624;
}}}else{
iVar1=1320000;
if(bVar0){
if(Global_262145.f_19625 >=0){
iVar1=Global_262145.f_19625;
}}}
break;
case joaat("boxville5"):
if(!bParam2){
iVar1=2926000;
if(bVar0){
if(Global_262145.f_19626 >=0){
iVar1=Global_262145.f_19626;
}}}else{
iVar1=2200000;
if(bVar0){
if(Global_262145.f_19627 >=0){
iVar1=Global_262145.f_19627;
}}}
break;
case joaat("wastelander"):
if(!bParam2){
iVar1=658350;
if(bVar0){
if(Global_262145.f_19628 >=0){
iVar1=Global_262145.f_19628;
}}}else{
iVar1=495000;
if(bVar0){
if(Global_262145.f_19629 >=0){
iVar1=Global_262145.f_19629;
}}}
break;
case joaat("ruiner2"):
if(!bParam2){
iVar1=5745600;
if(bVar0){
if(Global_262145.f_19630 >=0){
iVar1=Global_262145.f_19630;
}}}else{
iVar1=4320000;
if(bVar0){
if(Global_262145.f_19631 >=0){
iVar1=Global_262145.f_19631;
}}}
break;
case joaat("voltic2"):
if(!bParam2){
iVar1=3830400;
if(bVar0){
if(Global_262145.f_19632 >=0){
iVar1=Global_262145.f_19632;
}}}else{
iVar1=2880000;
if(bVar0){
if(Global_262145.f_19633 >=0){
iVar1=Global_262145.f_19633;
}}}
break;
case joaat("penetrator"):
iVar1=880000;
if(bVar0){
if(Global_262145.f_19646 >=0){
iVar1=Global_262145.f_19646;
}}
break;
case joaat("tempesta"):
iVar1=1329000;
if(bVar0 && Global_262145.f_19647 >=0){
iVar1=Global_262145.f_19647;
}
if(bParam2){
iVar2=iVar1;
iVar1=round((to_float(1329000) * 0.75f));
}
break;
case joaat("italigtb"):
iVar1=1189000;
if(bVar0){
if(Global_262145.f_19634 >=0){
iVar1=Global_262145.f_19634;
}}
break;
case joaat("italigtb2"):
iVar1=(Global_262145.f_19634 + func_361(iParam1));
break;
case joaat("nero"):
iVar1=1440000;
if(bVar0){
if(Global_262145.f_19638 >=0){
iVar1=Global_262145.f_19638;
}}
break;
case joaat("nero2"):
iVar1=(Global_262145.f_19638 + func_361(iParam1));
break;
case joaat("diablous"):
iVar1=169000;
if(bVar0){
if(Global_262145.f_19644 >=0){
iVar1=Global_262145.f_19644;
}}
break;
case joaat("diablous2"):
iVar1=(Global_262145.f_19644 + func_361(iParam1));
break;
case joaat("fcr"):
iVar1=135000;
if(bVar0){
if(Global_262145.f_19642 >=0){
iVar1=Global_262145.f_19642;
}}
break;
case joaat("fcr2"):
iVar1=(Global_262145.f_19642 + func_361(iParam1));
break;
case joaat("specter"):
iVar1=599000;
if(bVar0){
if(Global_262145.f_19636 >=0){
iVar1=Global_262145.f_19636;
}}
break;
case joaat("specter2"):
iVar1=(Global_262145.f_19636 + func_361(iParam1));
break;
case joaat("comet3"):
iVar1=(85000 + func_361(iParam1));
break;
case joaat("elegy"):
iVar1=(Global_262145.f_19648 + func_361(iParam1));
break;
case joaat("infernus2"):
iVar1=915000;
if(bVar0){
if(Global_262145.f_20282 >=0){
iVar1=Global_262145.f_20282;
}}
break;
case joaat("gp1"):
iVar1=1260000;
if(bVar0){
if(Global_262145.f_20281 >=0){
iVar1=Global_262145.f_20281;
}}
break;
case joaat("ruston"):
iVar1=430000;
if(bVar0){
if(Global_262145.f_20283 >=0){
iVar1=Global_262145.f_20283;
}}
break;
case joaat("turismo2"):
iVar1=705000;
if(bVar0){
if(Global_262145.f_20284 >=0){
iVar1=Global_262145.f_20284;
}}
break;
case joaat("ardent"):
iVar1=1150000;
if(bVar0){
if(Global_262145.f_21372 >=0){
iVar1=Global_262145.f_21372;
}}
break;
case joaat("cheetah2"):
iVar1=865000;
if(bVar0){
if(Global_262145.f_21375 >=0){
iVar1=Global_262145.f_21375;
}}
break;
case joaat("nightshark"):
iVar1=1245000;
if(bVar0){
if(Global_262145.f_21373 >=0){
iVar1=Global_262145.f_21373;
}}
break;
case joaat("torero"):
iVar1=998000;
if(bVar0){
if(Global_262145.f_21374 >=0){
iVar1=Global_262145.f_21374;
}}
break;
case joaat("vagner"):
iVar1=1535000;
if(bVar0){
if(Global_262145.f_21376 >=0){
iVar1=Global_262145.f_21376;
}}
break;
case joaat("xa21"):
iVar1=2375000;
if(bVar0){
if(Global_262145.f_21377 >=0){
iVar1=Global_262145.f_21377;
}}
break;
case joaat("apc"):
iVar1=2325000;
if(bVar0){
if(Global_262145.f_21364 >=0){
iVar1=Global_262145.f_21364;
}}
iVar2=iVar1;
if(!bParam2){
bVar1=round((to_float(iVar1) * ((100f + to_float(Global_262145.f_21363)) / 100f)));
}
break;
case joaat("dune3"):
bVar1=850000;
if(bVar0){
if(Global_262145.f_21365 >=0){
bVar1=Global_262145.f_21365;
}}
iVar2=bVar1;
if(!bParam2){
bVar1=round((to_float(bVar1) * ((100f + to_float(Global_262145.f_21363)) / 100f)));
}
break;
case joaat("halftrack"):
bVar1=1695000;
if(bVar0){
if(Global_262145.f_21366 >=0){
bVar1=Global_262145.f_21366;
}}
iVar2=bVar1;
if(!bParam2){
bVar1=round((to_float(bVar1) * ((100f + to_float(Global_262145.f_21363)) / 100f)));
}
break;
case joaat("oppressor"):
bVar1=2650000;
if(bVar0){
if(Global_262145.f_21367 >=0){
bVar1=Global_262145.f_21367;
}}
iVar2=bVar1;
if(!bParam2){
bVar1=round((to_float(bVar1) * ((100f + to_float(Global_262145.f_21363)) / 100f)));
}
break;
case joaat("tampa3"):
bVar1=1585000;
if(bVar0){
if(Global_262145.f_21368 >=0){
bVar1=Global_262145.f_21368;
}}
iVar2=bVar1;
if(!bParam2){
bVar1=round((to_float(bVar1) * ((100f + to_float(Global_262145.f_21363)) / 100f)));
}
break;
case joaat("trailersmall2"):
bVar1=1400000;
if(bVar0){
if(Global_262145.f_21369 >=0){
bVar1=Global_262145.f_21369;
}}
iVar2=bVar1;
if(!bParam2){
bVar1=round((to_float(bVar1) * ((100f + to_float(Global_262145.f_21363)) / 100f)));
}
break;
case joaat("phantom3"):
if(!bParam2){
bVar1=1225000;
if(bVar0){
if(Global_262145.f_21441 >=0){
bVar1=Global_262145.f_21441;
}}}else{
bVar1=false;
}
break;
case joaat("hauler2"):
if(!bParam2){
bVar1=1400000;
if(bVar0){
if(Global_262145.f_21442 >=0){
bVar1=Global_262145.f_21442;
}}}else{
bVar1=false;
}
break;
case joaat("lazer"):
bVar1=6500000;
if(bVar0){
if(Global_262145.f_22559 >=0){
bVar1=Global_262145.f_22559;
}}
break;
case joaat("microlight"):
if(bParam2){
bVar1=500000;
if(bVar0){
if(Global_262145.f_22558 >=0){
bVar1=Global_262145.f_22558;
}}}else{
bVar1=round((to_float(500000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22578 >=0){
bVar1=Global_262145.f_22578;
}}}
break;
case joaat("mogul"):
if(bParam2){
bVar1=2350000;
if(bVar0){
if(Global_262145.f_22551 >=0){
bVar1=Global_262145.f_22551;
}}}else{
bVar1=round((to_float(2350000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22571 >=0){
bVar1=Global_262145.f_22571;
}}}
break;
case joaat("rogue"):
if(bParam2){
bVar1=1200000;
if(bVar0){
if(Global_262145.f_22555 >=0){
bVar1=Global_262145.f_22555;
}}}else{
bVar1=round((to_float(1200000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22575 >=0){
bVar1=Global_262145.f_22575;
}}}
break;
case joaat("starling"):
if(bParam2){
bVar1=2750000;
if(bVar0){
if(Global_262145.f_22550 >=0){
bVar1=Global_262145.f_22550;
}}}else{
bVar1=round((to_float(2750000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22570 >=0){
bVar1=Global_262145.f_22570;
}}}
break;
case joaat("seabreeze"):
if(bParam2){
bVar1=850000;
if(bVar0){
if(Global_262145.f_22557 >=0){
bVar1=Global_262145.f_22557;
}}}else{
bVar1=round((to_float(850000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22577 >=0){
bVar1=Global_262145.f_22577;
}}}
break;
case joaat("tula"):
if(bParam2){
bVar1=3890000;
if(bVar0){
if(Global_262145.f_22546 >=0){
bVar1=Global_262145.f_22546;
}}}else{
bVar1=round((to_float(3890000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22566 >=0){
bVar1=Global_262145.f_22566;
}}}
break;
case joaat("pyro"):
if(bParam2){
bVar1=3350000;
if(bVar0){
if(Global_262145.f_22548 >=0){
bVar1=Global_262145.f_22548;
}}}else{
bVar1=round((to_float(3350000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22568 >=0){
bVar1=Global_262145.f_22568;
}}}
break;
case joaat("molotok"):
if(bParam2){
bVar1=3600000;
if(bVar0){
if(Global_262145.f_22547 >=0){
bVar1=Global_262145.f_22547;
}}}else{
bVar1=round((to_float(3600000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22567 >=0){
bVar1=Global_262145.f_22567;
}}}
break;
case joaat("nokota"):
if(bParam2){
bVar1=1995000;
if(bVar0){
if(Global_262145.f_22552 >=0){
bVar1=Global_262145.f_22552;
}}}else{
bVar1=round((to_float(1995000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22572 >=0){
bVar1=Global_262145.f_22572;
}}}
break;
case joaat("bombushka"):
if(bParam2){
bVar1=4450000;
if(bVar0){
if(Global_262145.f_22545 >=0){
bVar1=Global_262145.f_22545;
}}}else{
bVar1=round((to_float(4450000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22565 >=0){
bVar1=Global_262145.f_22565;
}}}
break;
case joaat("hunter"):
if(bParam2){
bVar1=3100000;
if(bVar0){
if(Global_262145.f_22549 >=0){
bVar1=Global_262145.f_22549;
}}}else{
bVar1=round((to_float(3100000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22569 >=0){
bVar1=Global_262145.f_22569;
}}}
break;
case joaat("havok"):
if(bParam2){
bVar1=1730000;
if(bVar0){
if(Global_262145.f_22553 >=0){
bVar1=Global_262145.f_22553;
}}}else{
bVar1=round((to_float(1730000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22573 >=0){
bVar1=Global_262145.f_22573;
}}}
break;
case joaat("howard"):
if(bParam2){
bVar1=975000;
if(bVar0){
if(Global_262145.f_22556 >=0){
bVar1=Global_262145.f_22556;
}}}else{
bVar1=round((to_float(975000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22576 >=0){
bVar1=Global_262145.f_22576;
}}}
break;
case joaat("alphaz1"):
if(bParam2){
bVar1=1595000;
if(bVar0){
if(Global_262145.f_22554 >=0){
bVar1=Global_262145.f_22554;
}}}else{
bVar1=round((to_float(1595000) * ((100f + to_float(33)) / 100f)));
if(bVar0){
if(Global_262145.f_22574 >=0){
bVar1=Global_262145.f_22574;
}}}
break;
case joaat("cyclone"):
bVar1=1890000;
if(bVar0){
if(Global_262145.f_22560 >=0){
bVar1=Global_262145.f_22560;
}}
break;
case joaat("visione"):
bVar1=2250000;
if(bVar0){
if(Global_262145.f_22561 >=0){
bVar1=Global_262145.f_22561;
}}
break;
case joaat("vigilante"):
bVar1=3750000;
if(bVar0){
if(Global_262145.f_22564 >=0){
bVar1=Global_262145.f_22564;
}}
break;
case joaat("retinue"):
bVar1=615000;
if(bVar0){
if(Global_262145.f_22562 >=0){
bVar1=Global_262145.f_22562;
}}
break;
case joaat("rapidgt3"):
bVar1=885000;
if(bVar0){
if(Global_262145.f_22563 >=0){
bVar1=Global_262145.f_22563;
}}
break;
}
switch (iParam1){
case joaat("deluxo"):
if(bParam2){
bVar1=3550000;
if(bVar0){
if(Global_262145.f_23893 >=0){
bVar1=Global_262145.f_23893;
}}}else{
bVar1=4721500;
if(bVar0){
if(Global_262145.f_23884 >=0){
bVar1=Global_262145.f_23884;
}}
iVar2=3550000;
if(bVar0){
if(Global_262145.f_23893 >=0){
iVar2=Global_262145.f_23893;
}}}
break;
case joaat("stromberg"):
if(bParam2){
bVar1=2395000;
if(bVar0){
if(Global_262145.f_23894 >=0){
bVar1=Global_262145.f_23894;
}}}else{
bVar1=3185350;
if(bVar0){
if(Global_262145.f_23885 >=0){
bVar1=Global_262145.f_23885;
}}
iVar2=2395000;
if(bVar0){
if(Global_262145.f_23894 >=0){
iVar2=Global_262145.f_23894;
}}}
break;
case joaat("riot2"):
if(bParam2){
bVar1=2350000;
if(bVar0){
if(Global_262145.f_23895 >=0){
bVar1=Global_262145.f_23895;
}}}else{
bVar1=3125500;
if(bVar0){
if(Global_262145.f_23886 >=0){
bVar1=Global_262145.f_23886;
}}
iVar2=2350000;
if(bVar0){
if(Global_262145.f_23895 >=0){
iVar2=Global_262145.f_23895;
}}}
break;
case joaat("chernobog"):
if(bParam2){
bVar1=2490000;
if(bVar0){
if(Global_262145.f_23896 >=0){
bVar1=Global_262145.f_23896;
}}}else{
bVar1=3311700;
if(bVar0){
if(Global_262145.f_23887 >=0){
bVar1=Global_262145.f_23887;
}}
iVar2=2490000;
if(bVar0){
if(Global_262145.f_23896 >=0){
iVar2=Global_262145.f_23896;
}}}
break;
case joaat("khanjali"):
if(bParam2){
bVar1=2895000;
if(bVar0){
if(Global_262145.f_23898 >=0){
bVar1=Global_262145.f_23898;
}}}else{
bVar1=3850350;
if(bVar0){
if(Global_262145.f_23889 >=0){
bVar1=Global_262145.f_23889;
}}
iVar2=2895000;
if(bVar0){
if(Global_262145.f_23898 >=0){
iVar2=Global_262145.f_23898;
}}}
break;
case joaat("akula"):
if(bParam2){
bVar1=2785000;
if(bVar0){
if(Global_262145.f_23899 >=0){
bVar1=Global_262145.f_23899;
}}}else{
bVar1=3704050;
if(bVar0){
if(Global_262145.f_23890 >=0){
bVar1=Global_262145.f_23890;
}}
iVar2=2785000;
if(bVar0){
if(Global_262145.f_23899 >=0){
iVar2=Global_262145.f_23899;
}}}
break;
case joaat("thruster"):
if(bParam2){
bVar1=2750000;
if(bVar0){
if(Global_262145.f_23892 >=0){
bVar1=Global_262145.f_23892;
}}}else{
bVar1=3657500;
if(bVar0){
if(Global_262145.f_23883 >=0){
bVar1=Global_262145.f_23883;
}}
iVar2=2750000;
if(bVar0){
if(Global_262145.f_23892 >=0){
iVar2=Global_262145.f_23892;
}}}
break;
case joaat("barrage"):
if(bParam2){
bVar1=1595000;
if(bVar0){
if(Global_262145.f_23897 >=0){
bVar1=Global_262145.f_23897;
}}}else{
bVar1=2121350;
if(bVar0){
if(Global_262145.f_23888 >=0){
bVar1=Global_262145.f_23888;
}}
iVar2=1595000;
if(bVar0){
if(Global_262145.f_23897 >=0){
iVar2=Global_262145.f_23897;
}}}
break;
case joaat("volatol"):
if(bParam2){
bVar1=2800000;
if(bVar0){
if(Global_262145.f_23900 >=0){
bVar1=Global_262145.f_23900;
}}}else{
bVar1=3724000;
if(bVar0){
if(Global_262145.f_23891 >=0){
bVar1=Global_262145.f_23891;
}}
iVar2=2800000;
if(bVar0){
if(Global_262145.f_23900 >=0){
iVar2=Global_262145.f_23900;
}}}
break;
case joaat("comet4"):
bVar1=710000;
if(bVar0){
if(Global_262145.f_23901 >=0){
bVar1=Global_262145.f_23901;
}}
break;
case joaat("neon"):
bVar1=1500000;
if(bVar0){
if(Global_262145.f_23913 >=0){
bVar1=Global_262145.f_23913;
}}
break;
case joaat("streiter"):
bVar1=500000;
if(bVar0){
if(Global_262145.f_23906 >=0){
bVar1=Global_262145.f_23906;
}}
break;
case joaat("sentinel3"):
if(bParam2){
bVar1=487500;
if(bVar0){
if(Global_262145.f_28517 >=0){
bVar1=Global_262145.f_28517;
}}}else{
bVar1=650000;
if(bVar0){
if(Global_262145.f_23916 >=0){
bVar1=Global_262145.f_23916;
}}
iVar2=487500;
if(bVar0){
if(Global_262145.f_28517 >=0){
iVar2=Global_262145.f_28517;
}}}
break;
case joaat("yosemite"):
bVar1=485000;
if(bVar0){
if(Global_262145.f_23915 >=0){
bVar1=Global_262145.f_23915;
}}
break;
case joaat("sc1"):
bVar1=1603000;
if(bVar0){
if(Global_262145.f_23905 >=0){
bVar1=Global_262145.f_23905;
}}
break;
case joaat("autarch"):
bVar1=1955000;
if(bVar0){
if(Global_262145.f_23910 >=0){
bVar1=Global_262145.f_23910;
}}
break;
case joaat("gt500"):
bVar1=785000;
if(bVar0){
if(Global_262145.f_23919 >=0){
bVar1=Global_262145.f_23919;
}}
break;
case joaat("hustler"):
bVar1=625000;
if(bVar0){
if(Global_262145.f_23907 >=0){
bVar1=Global_262145.f_23907;
}}
break;
case joaat("revolter"):
bVar1=1610000;
if(bVar0){
if(Global_262145.f_23903 >=0){
bVar1=Global_262145.f_23903;
}}
break;
case joaat("pariah"):
bVar1=1420000;
if(bVar0){
if(Global_262145.f_23914 >=0){
bVar1=Global_262145.f_23914;
}}
break;
case joaat("raiden"):
bVar1=1375000;
if(bVar0){
if(Global_262145.f_23917 >=0){
bVar1=Global_262145.f_23917;
}}
break;
case joaat("savestra"):
bVar1=990000;
if(bVar0){
if(Global_262145.f_23902 >=0){
bVar1=Global_262145.f_23902;
}}
break;
case joaat("riata"):
bVar1=380000;
if(bVar0){
if(Global_262145.f_23912 >=0){
bVar1=Global_262145.f_23912;
}}
break;
case joaat("hermes"):
bVar1=535000;
if(bVar0){
if(Global_262145.f_23908 >=0){
bVar1=Global_262145.f_23908;
}}
break;
case joaat("comet5"):
bVar1=1145000;
if(bVar0){
if(Global_262145.f_23911 >=0){
bVar1=Global_262145.f_23911;
}}
break;
case joaat("z190"):
bVar1=900000;
if(bVar0){
if(Global_262145.f_23909 >=0){
bVar1=Global_262145.f_23909;
}}
break;
case joaat("viseris"):
bVar1=875000;
if(bVar0){
if(Global_262145.f_23904 >=0){
bVar1=Global_262145.f_23904;
}}
break;
case joaat("kamacho"):
bVar1=345000;
if(bVar0){
if(Global_262145.f_23918 >=0){
bVar1=Global_262145.f_23918;
}}
break;
case joaat("gb200"):
bVar1=940000;
if(bVar0){
if(Global_262145.f_24118 >=0){
bVar1=Global_262145.f_24118;
}}
break;
case joaat("fagaloa"):
bVar1=335000;
if(bVar0){
if(Global_262145.f_24124 >=0){
bVar1=Global_262145.f_24124;
}}
break;
case joaat("ellie"):
if(bParam2){
bVar1=423750;
if(bVar0){
if(Global_262145.f_28519 >=0){
bVar1=Global_262145.f_28519;
}}}else{
bVar1=565000;
if(bVar0){
if(Global_262145.f_24122 >=0){
bVar1=Global_262145.f_24122;
}}
iVar2=423750;
if(bVar0){
if(Global_262145.f_28519 >=0){
iVar2=Global_262145.f_28519;
}}}
break;
case joaat("issi3"):
bVar1=360000;
if(bVar0 && Global_262145.f_24123 >=0){
bVar1=Global_262145.f_24123;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(360000) * 0.75f));
if(bVar0 && Global_262145.f_25942 >=0){
bVar1=Global_262145.f_25942;
}}
break;
case joaat("michelli"):
bVar1=1225000;
if(bVar0){
if(Global_262145.f_24117 >=0){
bVar1=Global_262145.f_24117;
}}
break;
case joaat("flashgt"):
bVar1=1675000;
if(bVar0){
if(Global_262145.f_24116 >=0){
bVar1=Global_262145.f_24116;
}}
break;
case joaat("hotring"):
bVar1=830000;
if(bVar0){
if(Global_262145.f_24119 >=0){
bVar1=Global_262145.f_24119;
}}
if(Global_78558){
if(bParam2){
iVar2=bVar1;
bVar1=622500;
if(bVar0 && Global_262145.f_33939 >=0){
bVar1=Global_262145.f_33939;
}}}
break;
case joaat("tezeract"):
bVar1=2825000;
if(bVar0){
if(Global_262145.f_24112 >=0){
bVar1=Global_262145.f_24112;
}}
break;
case joaat("tyrant"):
bVar1=2515000;
if(bVar0){
if(Global_262145.f_24113 >=0){
bVar1=Global_262145.f_24113;
}}
break;
case joaat("dominator3"):
bVar1=725000;
if(bVar0 && Global_262145.f_24121 >=0){
bVar1=Global_262145.f_24121;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(725000) * 0.75f));
}
break;
case joaat("taipan"):
bVar1=1980000;
if(bVar0){
if(Global_262145.f_24115 >=0){
bVar1=Global_262145.f_24115;
}}
break;
case joaat("entity2"):
bVar1=2305000;
if(bVar0){
if(Global_262145.f_24114 >=0){
bVar1=Global_262145.f_24114;
}}
break;
case joaat("jester3"):
bVar1=790000;
if(bVar0){
if(Global_262145.f_24120 >=0){
bVar1=Global_262145.f_24120;
}}
break;
case joaat("cheburek"):
bVar1=145000;
if(bVar0){
if(Global_262145.f_24125 >=0){
bVar1=Global_262145.f_24125;
}}
break;
case joaat("caracara"):
bVar1=1775000;
if(bVar0){
if(Global_262145.f_24126 >=0){
bVar1=Global_262145.f_24126;
}}
break;
case joaat("seasparrow"):
bVar1=1815000;
if(bVar0){
if(Global_262145.f_24127 >=0){
bVar1=Global_262145.f_24127;
}}
break;
case joaat("terbyte"):
if(!bParam2){
bVar1=1375000;
if(bVar0){
if(Global_262145.f_24879 >=0){
bVar1=Global_262145.f_24879;
}}}else{
bVar1=false;
}
break;
case joaat("mule4"):
if(bParam2){
bVar1=72000;
if(bVar0){
if(Global_262145.f_24796 >=0){
bVar1=Global_262145.f_24796;
}}}else{
bVar1=95760;
if(bVar0){
if(Global_262145.f_24801 >=0){
bVar1=Global_262145.f_24801;
}}
iVar2=72000;
if(bVar0){
if(Global_262145.f_24796 >=0){
iVar2=Global_262145.f_24796;
}}}
break;
case joaat("pounder2"):
if(bParam2){
bVar1=241000;
if(bVar0){
if(Global_262145.f_24795 >=0){
bVar1=Global_262145.f_24795;
}}}else{
bVar1=320530;
if(bVar0){
if(Global_262145.f_24800 >=0){
bVar1=Global_262145.f_24800;
}}
iVar2=241000;
if(bVar0){
if(Global_262145.f_24795 >=0){
iVar2=Global_262145.f_24795;
}}}
break;
case joaat("swinger"):
bVar1=909000;
if(bVar0){
if(Global_262145.f_24767 >=0){
bVar1=Global_262145.f_24767;
}}
break;
case joaat("menacer"):
bVar1=1775000;
if(bVar0){
if(Global_262145.f_24798 >=0){
bVar1=Global_262145.f_24798;
}}
break;
case joaat("scramjet"):
bVar1=3480000;
if(bVar0){
if(Global_262145.f_24803 >=0){
bVar1=Global_262145.f_24803;
}}
break;
case joaat("strikeforce"):
bVar1=3800000;
if(bVar0){
if(Global_262145.f_24799 >=0){
bVar1=Global_262145.f_24799;
}}
break;
case joaat("oppressor2"):
if(bParam2){
bVar1=2925000;
if(bVar0){
if(Global_262145.f_24797 >=0){
bVar1=Global_262145.f_24797;
}}}else{
bVar1=3890250;
if(bVar0){
if(Global_262145.f_24802 >=0){
bVar1=Global_262145.f_24802;
}}
iVar2=2925000;
if(bVar0){
if(Global_262145.f_24797 >=0){
iVar2=Global_262145.f_24797;
}}}
break;
case joaat("patriot2"):
if(bParam2){
bVar1=460000;
if(bVar0){
if(Global_262145.f_24764 >=0){
bVar1=Global_262145.f_24764;
}}}else{
bVar1=611800;
if(bVar0){
if(Global_262145.f_24804 >=0){
bVar1=Global_262145.f_24804;
}}
iVar2=460000;
if(bVar0){
if(Global_262145.f_24764 >=0){
iVar2=Global_262145.f_24764;
}}}
break;
case joaat("stafford"):
bVar1=1272000;
if(bVar0){
if(Global_262145.f_24765 >=0){
bVar1=Global_262145.f_24765;
}}
break;
case joaat("freecrawler"):
bVar1=597000;
if(bVar0){
if(Global_262145.f_24766 >=0){
bVar1=Global_262145.f_24766;
}}
break;
case joaat("blimp3"):
if(bParam2){
bVar1=895000;
if(bVar0){
if(Global_262145.f_24769 >=0){
bVar1=Global_262145.f_24769;
}}}else{
bVar1=1190350;
if(bVar0){
if(Global_262145.f_24806 >=0){
bVar1=Global_262145.f_24806;
}}
iVar2=895000;
if(bVar0){
if(Global_262145.f_24769 >=0){
iVar2=Global_262145.f_24769;
}}}
break;
case joaat("pbus2"):
if(bParam2){
bVar1=1385000;
if(bVar0){
if(Global_262145.f_24768 >=0){
bVar1=Global_262145.f_24768;
}}}else{
bVar1=1842050;
if(bVar0){
if(Global_262145.f_24805 >=0){
bVar1=Global_262145.f_24805;
}}
iVar2=1385000;
if(bVar0){
if(Global_262145.f_24768 >=0){
iVar2=Global_262145.f_24768;
}}}
break;
case joaat("cerberus"):
bVar1=3870300;
if(bVar0 && Global_262145.f_26008 >=0){
bVar1=Global_262145.f_26008;
}
if(bParam2){
iVar2=bVar1;
bVar1=2910000;
if(bVar0 && Global_262145.f_26023 >=0){
bVar1=Global_262145.f_26023;
}}
break;
case joaat("cerberus2"):
bVar1=3870300;
if(bVar0 && Global_262145.f_26013 >=0){
bVar1=Global_262145.f_26013;
}
if(bParam2){
iVar2=bVar1;
bVar1=2910000;
if(bVar0 && Global_262145.f_26028 >=0){
bVar1=Global_262145.f_26028;
}}
break;
case joaat("cerberus3"):
bVar1=3870300;
if(bVar0 && Global_262145.f_26018 >=0){
bVar1=Global_262145.f_26018;
}
if(bParam2){
iVar2=bVar1;
bVar1=2910000;
if(bVar0 && Global_262145.f_26033 >=0){
bVar1=Global_262145.f_26033;
}}
break;
case joaat("brutus"):
bVar1=2666650;
if(bVar0 && Global_262145.f_26009 >=0){
bVar1=Global_262145.f_26009;
}
if(bParam2){
iVar2=bVar1;
bVar1=2005000;
if(bVar0 && Global_262145.f_26024 >=0){
bVar1=Global_262145.f_26024;
}}
break;
case joaat("brutus2"):
bVar1=2666650;
if(bVar0 && Global_262145.f_26014 >=0){
bVar1=Global_262145.f_26014;
}
if(bParam2){
iVar2=bVar1;
bVar1=2005000;
if(bVar0 && Global_262145.f_26029 >=0){
bVar1=Global_262145.f_26029;
}}
break;
case joaat("brutus3"):
bVar1=2666650;
if(bVar0 && Global_262145.f_26019 >=0){
bVar1=Global_262145.f_26019;
}
if(bParam2){
iVar2=bVar1;
bVar1=2005000;
if(bVar0 && Global_262145.f_26034 >=0){
bVar1=Global_262145.f_26034;
}}
break;
case joaat("scarab"):
bVar1=3076290;
if(bVar0 && Global_262145.f_26010 >=0){
bVar1=Global_262145.f_26010;
}
if(bParam2){
iVar2=bVar1;
bVar1=2313000;
if(bVar0 && Global_262145.f_26025 >=0){
bVar1=Global_262145.f_26025;
}}
break;
case joaat("scarab2"):
bVar1=3076290;
if(bVar0 && Global_262145.f_26015 >=0){
bVar1=Global_262145.f_26015;
}
if(bParam2){
iVar2=bVar1;
bVar1=2313000;
if(bVar0 && Global_262145.f_26030 >=0){
bVar1=Global_262145.f_26030;
}}
break;
case joaat("scarab3"):
bVar1=3076290;
if(bVar0 && Global_262145.f_26020 >=0){
bVar1=Global_262145.f_26020;
}
if(bParam2){
iVar2=bVar1;
bVar1=2313000;
if(bVar0 && Global_262145.f_26035 >=0){
bVar1=Global_262145.f_26035;
}}
break;
case joaat("imperator"):
bVar1=2284940;
if(bVar0 && Global_262145.f_26011 >=0){
bVar1=Global_262145.f_26011;
}
if(bParam2){
iVar2=bVar1;
bVar1=1718000;
if(bVar0 && Global_262145.f_26026 >=0){
bVar1=Global_262145.f_26026;
}}
break;
case joaat("imperator2"):
bVar1=2284940;
if(bVar0 && Global_262145.f_26016 >=0){
bVar1=Global_262145.f_26016;
}
if(bParam2){
iVar2=bVar1;
bVar1=1718000;
if(bVar0 && Global_262145.f_26031 >=0){
bVar1=Global_262145.f_26031;
}}
break;
case joaat("imperator3"):
bVar1=2284940;
if(bVar0 && Global_262145.f_26021 >=0){
bVar1=Global_262145.f_26021;
}
if(bParam2){
iVar2=bVar1;
bVar1=1718000;
if(bVar0 && Global_262145.f_26036 >=0){
bVar1=Global_262145.f_26036;
}}
break;
case joaat("zr380"):
bVar1=2138640;
if(bVar0 && Global_262145.f_26012 >=0){
bVar1=Global_262145.f_26012;
}
if(bParam2){
iVar2=bVar1;
bVar1=1608000;
if(bVar0 && Global_262145.f_26027 >=0){
bVar1=Global_262145.f_26027;
}}
break;
case joaat("zr3802"):
bVar1=2138640;
if(bVar0 && Global_262145.f_26017 >=0){
bVar1=Global_262145.f_26017;
}
if(bParam2){
iVar2=bVar1;
bVar1=1608000;
if(bVar0 && Global_262145.f_26032 >=0){
bVar1=Global_262145.f_26032;
}}
break;
case joaat("zr3803"):
bVar1=2138640;
if(bVar0 && Global_262145.f_26022 >=0){
bVar1=Global_262145.f_26022;
}
if(bParam2){
iVar2=bVar1;
bVar1=1608000;
if(bVar0 && Global_262145.f_26037 >=0){
bVar1=Global_262145.f_26037;
}}
break;
case joaat("impaler"):
bVar1=331835;
if(bVar0 && Global_262145.f_25936 >=0){
bVar1=Global_262145.f_25936;
}
if(bParam2){
iVar2=bVar1;
bVar1=249500;
if(bVar0 && Global_262145.f_25941 >=0){
bVar1=Global_262145.f_25941;
}}
break;
case joaat("vamos"):
bVar1=596000;
if(bVar0 && Global_262145.f_26043 >=0){
bVar1=Global_262145.f_26043;
}
break;
case joaat("tulip"):
bVar1=718000;
if(bVar0 && Global_262145.f_26045 >=0){
bVar1=Global_262145.f_26045;
}
break;
case joaat("deveste"):
bVar1=1795000;
if(bVar0 && Global_262145.f_26038 >=0){
bVar1=Global_262145.f_26038;
}
break;
case joaat("schlagen"):
bVar1=1300000;
if(bVar0 && Global_262145.f_26039 >=0){
bVar1=Global_262145.f_26039;
}
break;
case joaat("toros"):
bVar1=498000;
if(bVar0 && Global_262145.f_26040 >=0){
bVar1=Global_262145.f_26040;
}
break;
case joaat("deviant"):
bVar1=512000;
if(bVar0 && Global_262145.f_26041 >=0){
bVar1=Global_262145.f_26041;
}
break;
case joaat("clique"):
bVar1=909000;
if(bVar0 && Global_262145.f_26042 >=0){
bVar1=Global_262145.f_26042;
}
break;
case joaat("italigto"):
bVar1=1965000;
if(bVar0 && Global_262145.f_26044 >=0){
bVar1=Global_262145.f_26044;
}
break;
case joaat("rcbandito"):
bVar1=1590000;
if(bVar0 && Global_262145.f_26046 >=0){
bVar1=Global_262145.f_26046;
}
break;
case joaat("blista3"):
bVar1=false;
break;
case joaat("slamvan4"):
bVar1=false;
break;
case joaat("slamvan5"):
bVar1=100000;
break;
case joaat("thrax"):
bVar1=2325000;
if(bVar0 && Global_262145.f_26893 >=0){
bVar1=Global_262145.f_26893;
}
break;
case joaat("drafter"):
bVar1=718000;
if(bVar0 && Global_262145.f_26894 >=0){
bVar1=Global_262145.f_26894;
}
break;
case joaat("locust"):
bVar1=1625000;
if(bVar0 && Global_262145.f_26890 >=0){
bVar1=Global_262145.f_26890;
}
break;
case joaat("novak"):
bVar1=608000;
if(bVar0 && Global_262145.f_26896 >=0){
bVar1=Global_262145.f_26896;
}
break;
case joaat("zorrusso"):
bVar1=1925000;
if(bVar0 && Global_262145.f_26895 >=0){
bVar1=Global_262145.f_26895;
}
break;
case joaat("gauntlet3"):
if(bParam2){
bVar1=461250;
if(bVar0){
if(Global_262145.f_28518 >=0){
bVar1=Global_262145.f_28518;
}}}else{
bVar1=615000;
if(bVar0){
if(Global_262145.f_26891 >=0){
bVar1=Global_262145.f_26891;
}}
iVar2=461250;
if(bVar0){
if(Global_262145.f_28518 >=0){
iVar2=Global_262145.f_28518;
}}}
break;
case joaat("issi7"):
bVar1=897000;
if(bVar0 && Global_262145.f_26897 >=0){
bVar1=Global_262145.f_26897;
}
break;
case joaat("zion3"):
bVar1=812000;
if(bVar0 && Global_262145.f_26892 >=0){
bVar1=Global_262145.f_26892;
}
break;
case joaat("nebula"):
bVar1=797000;
if(bVar0 && Global_262145.f_26899 >=0){
bVar1=Global_262145.f_26899;
}
break;
case joaat("hellion"):
bVar1=835000;
if(bVar0 && Global_262145.f_26898 >=0){
bVar1=Global_262145.f_26898;
}
break;
case joaat("dynasty"):
bVar1=450000;
if(bVar0 && Global_262145.f_26900 >=0){
bVar1=Global_262145.f_26900;
}
break;
case joaat("rrocket"):
bVar1=925000;
if(bVar0 && Global_262145.f_26908 >=0){
bVar1=Global_262145.f_26908;
}
break;
case joaat("peyote2"):
bVar1=805000;
if(bVar0 && Global_262145.f_26907 >=0){
bVar1=Global_262145.f_26907;
}
break;
case joaat("gauntlet4"):
bVar1=745000;
if(bVar0 && Global_262145.f_26906 >=0){
bVar1=Global_262145.f_26906;
}
break;
case joaat("caracara2"):
bVar1=875000;
if(bVar0 && Global_262145.f_26905 >=0){
bVar1=Global_262145.f_26905;
}
break;
case joaat("jugular"):
if(bParam2){
bVar1=918750;
if(bVar0){
if(Global_262145.f_28516 >=0){
bVar1=Global_262145.f_28516;
}}}else{
bVar1=1225000;
if(bVar0){
if(Global_262145.f_27218 >=0){
bVar1=Global_262145.f_27218;
}}
iVar2=918750;
if(bVar0){
if(Global_262145.f_28516 >=0){
iVar2=Global_262145.f_28516;
}}}
break;
case joaat("s80"):
bVar1=2575000;
if(bVar0 && Global_262145.f_26904 >=0){
bVar1=Global_262145.f_26904;
}
break;
case joaat("krieger"):
bVar1=2875000;
if(bVar0 && Global_262145.f_26903 >=0){
bVar1=Global_262145.f_26903;
}
break;
case joaat("emerus"):
bVar1=2750000;
if(bVar0 && Global_262145.f_26902 >=0){
bVar1=Global_262145.f_26902;
}
break;
case joaat("neo"):
bVar1=1875000;
if(bVar0 && Global_262145.f_26901 >=0){
bVar1=Global_262145.f_26901;
}
break;
case joaat("paragon"):
bVar1=905000;
if(bVar0 && Global_262145.f_27283 >=0){
bVar1=Global_262145.f_27283;
}
break;
}
switch (iParam1){
case joaat("asbo"):
if(bParam2){
bVar1=306000;
if(bVar0){
if(Global_262145.f_28483 >=0){
bVar1=Global_262145.f_28483;
}}}else{
bVar1=408000;
if(bVar0){
if(Global_262145.f_28482 >=0){
bVar1=Global_262145.f_28482;
}}
iVar2=306000;
if(bVar0){
if(Global_262145.f_28483 >=0){
iVar2=Global_262145.f_28483;
}}}
break;
case joaat("kanjo"):
if(bParam2){
bVar1=435000;
if(bVar0){
if(Global_262145.f_28485 >=0){
bVar1=Global_262145.f_28485;
}}}else{
bVar1=580000;
if(bVar0){
if(Global_262145.f_28484 >=0){
bVar1=Global_262145.f_28484;
}}
iVar2=435000;
if(bVar0){
if(Global_262145.f_28485 >=0){
iVar2=Global_262145.f_28485;
}}}
break;
case joaat("everon"):
if(bParam2){
bVar1=1106250;
if(bVar0){
if(Global_262145.f_28487 >=0){
bVar1=Global_262145.f_28487;
}}}else{
bVar1=1475000;
if(bVar0){
if(Global_262145.f_28486 >=0){
bVar1=Global_262145.f_28486;
}}
iVar2=1106250;
if(bVar0){
if(Global_262145.f_28487 >=0){
iVar2=Global_262145.f_28487;
}}}
break;
case joaat("retinue2"):
if(bParam2){
bVar1=1215000;
if(bVar0){
if(Global_262145.f_28489 >=0){
bVar1=Global_262145.f_28489;
}}}else{
bVar1=1620000;
if(bVar0){
if(Global_262145.f_28488 >=0){
bVar1=Global_262145.f_28488;
}}
iVar2=1215000;
if(bVar0){
if(Global_262145.f_28489 >=0){
iVar2=Global_262145.f_28489;
}}}
break;
case joaat("yosemite2"):
if(bParam2){
bVar1=981000;
if(bVar0){
if(Global_262145.f_28491 >=0){
bVar1=Global_262145.f_28491;
}}}else{
bVar1=1308000;
if(bVar0){
if(Global_262145.f_28490 >=0){
bVar1=Global_262145.f_28490;
}}
iVar2=981000;
if(bVar0){
if(Global_262145.f_28491 >=0){
iVar2=Global_262145.f_28491;
}}}
break;
case joaat("sugoi"):
if(bParam2){
bVar1=918000;
if(bVar0){
if(Global_262145.f_28493 >=0){
bVar1=Global_262145.f_28493;
}}}else{
bVar1=1224000;
if(bVar0){
if(Global_262145.f_28492 >=0){
bVar1=Global_262145.f_28492;
}}
iVar2=918000;
if(bVar0){
if(Global_262145.f_28493 >=0){
iVar2=Global_262145.f_28493;
}}}
break;
case joaat("sultan2"):
if(bParam2){
bVar1=1288500;
if(bVar0){
if(Global_262145.f_28495 >=0){
bVar1=Global_262145.f_28495;
}}}else{
bVar1=1718000;
if(bVar0){
if(Global_262145.f_28494 >=0){
bVar1=Global_262145.f_28494;
}}
iVar2=1288500;
if(bVar0){
if(Global_262145.f_28495 >=0){
iVar2=Global_262145.f_28495;
}}}
break;
case joaat("outlaw"):
if(bParam2){
bVar1=951000;
if(bVar0){
if(Global_262145.f_28497 >=0){
bVar1=Global_262145.f_28497;
}}}else{
bVar1=1268000;
if(bVar0){
if(Global_262145.f_28496 >=0){
bVar1=Global_262145.f_28496;
}}
iVar2=951000;
if(bVar0){
if(Global_262145.f_28497 >=0){
iVar2=Global_262145.f_28497;
}}}
break;
case joaat("vagrant"):
if(bParam2){
bVar1=1660500;
if(bVar0){
if(Global_262145.f_28499 >=0){
bVar1=Global_262145.f_28499;
}}}else{
bVar1=2214000;
if(bVar0){
if(Global_262145.f_28498 >=0){
bVar1=Global_262145.f_28498;
}}
iVar2=1660500;
if(bVar0){
if(Global_262145.f_28499 >=0){
iVar2=Global_262145.f_28499;
}}}
break;
case joaat("komoda"):
if(bParam2){
bVar1=1275000;
if(bVar0){
if(Global_262145.f_28501 >=0){
bVar1=Global_262145.f_28501;
}}}else{
bVar1=1700000;
if(bVar0){
if(Global_262145.f_28500 >=0){
bVar1=Global_262145.f_28500;
}}
iVar2=1275000;
if(bVar0){
if(Global_262145.f_28501 >=0){
iVar2=Global_262145.f_28501;
}}}
break;
case joaat("stryder"):
if(bParam2){
bVar1=502500;
if(bVar0){
if(Global_262145.f_28503 >=0){
bVar1=Global_262145.f_28503;
}}}else{
bVar1=670000;
if(bVar0){
if(Global_262145.f_28502 >=0){
bVar1=Global_262145.f_28502;
}}
iVar2=502500;
if(bVar0){
if(Global_262145.f_28503 >=0){
iVar2=Global_262145.f_28503;
}}}
break;
case joaat("furia"):
if(bParam2){
bVar1=2055000;
if(bVar0){
if(Global_262145.f_28505 >=0){
bVar1=Global_262145.f_28505;
}}}else{
bVar1=2740000;
if(bVar0){
if(Global_262145.f_28504 >=0){
bVar1=Global_262145.f_28504;
}}
iVar2=2055000;
if(bVar0){
if(Global_262145.f_28505 >=0){
iVar2=Global_262145.f_28505;
}}}
break;
case joaat("zhaba"):
if(bParam2){
bVar1=1800000;
if(bVar0){
if(Global_262145.f_28507 >=0){
bVar1=Global_262145.f_28507;
}}}else{
bVar1=2400000;
if(bVar0){
if(Global_262145.f_28506 >=0){
bVar1=Global_262145.f_28506;
}}
iVar2=1800000;
if(bVar0){
if(Global_262145.f_28507 >=0){
iVar2=Global_262145.f_28507;
}}}
break;
case joaat("jb7002"):
bVar1=1470000;
if(bVar0){
if(Global_262145.f_28585 >=0){
bVar1=Global_262145.f_28585;
}}
break;
case joaat("minitank"):
bVar1=2275000;
if(bVar0){
if(Global_262145.f_28576 >=0){
bVar1=Global_262145.f_28576;
}}
break;
case joaat("formula"):
bVar1=3515000;
if(bVar0){
if(Global_262145.f_28655 >=0){
bVar1=Global_262145.f_28655;
}}
break;
case joaat("formula2"):
bVar1=3115000;
if(bVar0){
if(Global_262145.f_28658 >=0){
bVar1=Global_262145.f_28658;
}}
break;
case joaat("imorgon"):
bVar1=2165000;
if(bVar0){
if(Global_262145.f_28661 >=0){
bVar1=Global_262145.f_28661;
}}
break;
case joaat("rebla"):
bVar1=1175000;
if(bVar0){
if(Global_262145.f_28662 >=0){
bVar1=Global_262145.f_28662;
}}
break;
case joaat("vstr"):
bVar1=1285000;
if(bVar0){
if(Global_262145.f_28663 >=0){
bVar1=Global_262145.f_28663;
}}
break;
case joaat("tigon"):
bVar1=2310000;
if(bVar0){
if(Global_262145.f_29364 >=0){
bVar1=Global_262145.f_29364;
}}
break;
case joaat("openwheel1"):
bVar1=3400000;
if(bVar0){
if(Global_262145.f_29368 >=0){
bVar1=Global_262145.f_29368;
}}
break;
case joaat("openwheel2"):
bVar1=2997000;
if(bVar0){
if(Global_262145.f_29369 >=0){
bVar1=Global_262145.f_29369;
}}
break;
case joaat("coquette4"):
bVar1=1510000;
if(bVar0){
if(Global_262145.f_29370 >=0){
bVar1=Global_262145.f_29370;
}}
break;
case joaat("peyote3"):
bVar1=620000;
if(bVar0){
bVar1=(Global_262145.f_29378 + func_361(iParam1));
}
break;
case joaat("yosemite3"):
bVar1=700000;
if(bVar0){
bVar1=(Global_262145.f_23915 + func_361(iParam1));
}
break;
case joaat("gauntlet5"):
bVar1=815000;
if(bVar0){
bVar1=(Global_262145.f_26891 + func_361(iParam1));
}
break;
case joaat("landstalker2"):
bVar1=1220000;
if(bVar0){
if(Global_262145.f_29360 >=0){
bVar1=Global_262145.f_29360;
}}
break;
case joaat("glendale2"):
bVar1=520000;
if(bVar0){
bVar1=(Global_262145.f_8106 + func_361(iParam1));
}
break;
case joaat("club"):
bVar1=1280000;
if(bVar0){
if(Global_262145.f_29362 >=0){
bVar1=Global_262145.f_29362;
}}
break;
case joaat("dukes3"):
bVar1=378000;
if(bVar0){
if(Global_262145.f_29356 >=0){
bVar1=Global_262145.f_29356;
}}
break;
case joaat("youga3"):
bVar1=1288000;
if(bVar0){
bVar1=(Global_262145.f_19000 + func_361(iParam1));
}
break;
case joaat("manana2"):
bVar1=925000;
if(bVar0){
bVar1=(Global_262145.f_29377 + func_361(iParam1));
}
break;
case joaat("penumbra2"):
bVar1=1380000;
if(bVar0){
if(Global_262145.f_29363 >=0){
bVar1=Global_262145.f_29363;
}}
break;
case joaat("seminole2"):
bVar1=678000;
if(bVar0){
if(Global_262145.f_29358 >=0){
bVar1=Global_262145.f_29358;
}}
break;
case joaat("manchez2"):
bVar1=225000;
if(bVar0){
if(Global_262145.f_30802 >=0){
bVar1=Global_262145.f_30802;
}}
break;
case joaat("verus"):
bVar1=192000;
if(bVar0){
if(Global_262145.f_30803 >=0){
bVar1=Global_262145.f_30803;
}}
break;
case joaat("veto"):
bVar1=895000;
if(bVar0){
if(Global_262145.f_30808 >=0){
bVar1=Global_262145.f_30808;
}}
break;
case joaat("veto2"):
bVar1=995000;
if(bVar0){
if(Global_262145.f_30809 >=0){
bVar1=Global_262145.f_30809;
}}
break;
case joaat("slamtruck"):
bVar1=1310000;
if(bVar0){
if(Global_262145.f_30807 >=0){
bVar1=Global_262145.f_30807;
}}
break;
case joaat("toreador"):
bVar1=3660000;
if(bVar0){
if(Global_262145.f_30793 >=0){
bVar1=Global_262145.f_30793;
}}
break;
case joaat("dinghy5"):
bVar1=1850000;
if(bVar0){
if(Global_262145.f_30798 >=0){
bVar1=Global_262145.f_30798;
}}
break;
case joaat("squaddie"):
bVar1=1130000;
if(bVar0){
if(Global_262145.f_30801 >=0){
bVar1=Global_262145.f_30801;
}}
break;
case joaat("winky"):
bVar1=1100000;
if(bVar0 && Global_262145.f_30799 >=0){
bVar1=Global_262145.f_30799;
}
if(bParam2){
iVar2=bVar1;
bVar1=825000;
if(bVar0 && Global_262145.f_30814 >=0){
bVar1=Global_262145.f_30814;
}}
break;
case joaat("annihilator2"):
bVar1=3870000;
if(bVar0 && Global_262145.f_30794 >=0){
bVar1=Global_262145.f_30794;
}
if(bParam2){
iVar2=bVar1;
bVar1=2902500;
if(bVar0 && Global_262145.f_30810 >=0){
bVar1=Global_262145.f_30810;
}}
break;
case joaat("alkonost"):
bVar1=4350000;
if(bVar0 && Global_262145.f_30795 >=0){
bVar1=Global_262145.f_30795;
}
if(bParam2){
iVar2=bVar1;
bVar1=3262500;
if(bVar0 && Global_262145.f_30811 >=0){
bVar1=Global_262145.f_30811;
}}
break;
case joaat("brioso2"):
bVar1=610000;
if(bVar0 && Global_262145.f_30805 >=0){
bVar1=Global_262145.f_30805;
}
if(bParam2){
iVar2=bVar1;
bVar1=457500;
if(bVar0 && Global_262145.f_30817 >=0){
bVar1=Global_262145.f_30817;
}}
break;
case joaat("weevil"):
bVar1=870000;
if(bVar0 && Global_262145.f_30804 >=0){
bVar1=Global_262145.f_30804;
}
if(bParam2){
iVar2=bVar1;
bVar1=652500;
if(bVar0 && Global_262145.f_30816 >=0){
bVar1=Global_262145.f_30816;
}}
break;
case joaat("italirsx"):
bVar1=3465000;
if(bVar0 && Global_262145.f_30806 >=0){
bVar1=Global_262145.f_30806;
}
if(bParam2){
iVar2=bVar1;
bVar1=2598750;
if(bVar0 && Global_262145.f_30818 >=0){
bVar1=Global_262145.f_30818;
}}
break;
case joaat("longfin"):
bVar1=2125000;
if(bVar0 && Global_262145.f_30797 >=0){
bVar1=Global_262145.f_30797;
}
if(bParam2){
iVar2=bVar1;
bVar1=1593750;
if(bVar0 && Global_262145.f_30813 >=0){
bVar1=Global_262145.f_30813;
}}
break;
case joaat("vetir"):
bVar1=1630000;
if(bVar0 && Global_262145.f_30800 >=0){
bVar1=Global_262145.f_30800;
}
if(bParam2){
iVar2=bVar1;
bVar1=1222500;
if(bVar0 && Global_262145.f_30815 >=0){
bVar1=Global_262145.f_30815;
}}
break;
case joaat("patrolboat"):
bVar1=2955000;
if(bVar0 && Global_262145.f_30796 >=0){
bVar1=Global_262145.f_30796;
}
if(bParam2){
iVar2=bVar1;
bVar1=2216250;
if(bVar0 && Global_262145.f_30812 >=0){
bVar1=Global_262145.f_30812;
}}
break;
case joaat("kosatka"):
if(!bParam2){
bVar1=2200000;
if(bVar0){
if(Global_262145.f_30621 >=0){
bVar1=Global_262145.f_30621;
}}}else{
bVar1=2200000;
if(bVar0){
if(Global_262145.f_30491 >=0){
bVar1=Global_262145.f_30491;
}}}
break;
case joaat("calico"):
bVar1=1995000;
if(bVar0 && Global_262145.f_31213 >=0){
bVar1=Global_262145.f_31213;
}
if(bParam2){
iVar2=bVar1;
bVar1=1496250;
if(bVar0 && Global_262145.f_31230 >=0){
bVar1=Global_262145.f_31230;
}}
break;
case joaat("comet6"):
bVar1=1878000;
if(bVar0 && Global_262145.f_31215 >=0){
bVar1=Global_262145.f_31215;
}
if(bParam2){
iVar2=bVar1;
bVar1=1408500;
if(bVar0 && Global_262145.f_31232 >=0){
bVar1=Global_262145.f_31232;
}}
break;
case joaat("cypher"):
bVar1=1550000;
if(bVar0 && Global_262145.f_31226 >=0){
bVar1=Global_262145.f_31226;
}
if(bParam2){
iVar2=bVar1;
bVar1=1162500;
if(bVar0 && Global_262145.f_31243 >=0){
bVar1=Global_262145.f_31243;
}}
break;
case joaat("dominator7"):
bVar1=1775000;
if(bVar0 && Global_262145.f_31228 >=0){
bVar1=Global_262145.f_31228;
}
if(bParam2){
iVar2=bVar1;
bVar1=1331250;
if(bVar0 && Global_262145.f_31245 >=0){
bVar1=Global_262145.f_31245;
}}
break;
case joaat("jester4"):
bVar1=1970000;
if(bVar0 && Global_262145.f_31217 >=0){
bVar1=Global_262145.f_31217;
}
if(bParam2){
iVar2=bVar1;
bVar1=1477500;
if(bVar0 && Global_262145.f_31234 >=0){
bVar1=Global_262145.f_31234;
}}
break;
case joaat("remus"):
bVar1=1370000;
if(bVar0 && Global_262145.f_31214 >=0){
bVar1=Global_262145.f_31214;
}
if(bParam2){
iVar2=bVar1;
bVar1=1027500;
if(bVar0 && Global_262145.f_31231 >=0){
bVar1=Global_262145.f_31231;
}}
break;
case joaat("vectre"):
bVar1=1785000;
if(bVar0 && Global_262145.f_31219 >=0){
bVar1=Global_262145.f_31219;
}
if(bParam2){
iVar2=bVar1;
bVar1=1338750;
if(bVar0 && Global_262145.f_31236 >=0){
bVar1=Global_262145.f_31236;
}}
break;
case joaat("zr350"):
bVar1=1615000;
if(bVar0 && Global_262145.f_31212 >=0){
bVar1=Global_262145.f_31212;
}
if(bParam2){
iVar2=bVar1;
bVar1=1211250;
if(bVar0 && Global_262145.f_31229 >=0){
bVar1=Global_262145.f_31229;
}}
break;
case joaat("warrener2"):
bVar1=1260000;
if(bVar0 && Global_262145.f_31220 >=0){
bVar1=Global_262145.f_31220;
}
if(bParam2){
iVar2=bVar1;
bVar1=945000;
if(bVar0 && Global_262145.f_31237 >=0){
bVar1=Global_262145.f_31237;
}}
break;
case joaat("rt3000"):
bVar1=1715000;
if(bVar0 && Global_262145.f_31222 >=0){
bVar1=Global_262145.f_31222;
}
if(bParam2){
iVar2=bVar1;
bVar1=1286250;
if(bVar0 && Global_262145.f_31239 >=0){
bVar1=Global_262145.f_31239;
}}
break;
case joaat("futo2"):
bVar1=1590000;
if(bVar0 && Global_262145.f_31223 >=0){
bVar1=Global_262145.f_31223;
}
if(bParam2){
iVar2=bVar1;
bVar1=1192500;
if(bVar0 && Global_262145.f_31240 >=0){
bVar1=Global_262145.f_31240;
}}
break;
case joaat("tailgater2"):
bVar1=1495000;
if(bVar0 && Global_262145.f_31225 >=0){
bVar1=Global_262145.f_31225;
}
if(bParam2){
iVar2=bVar1;
bVar1=1121250;
if(bVar0 && Global_262145.f_31242 >=0){
bVar1=Global_262145.f_31242;
}}
break;
case joaat("sultan3"):
bVar1=1789000;
if(bVar0 && Global_262145.f_31221 >=0){
bVar1=Global_262145.f_31221;
}
if(bParam2){
iVar2=bVar1;
bVar1=1341750;
if(bVar0 && Global_262145.f_31238 >=0){
bVar1=Global_262145.f_31238;
}}
break;
case joaat("dominator8"):
bVar1=1220000;
if(bVar0 && Global_262145.f_31227 >=0){
bVar1=Global_262145.f_31227;
}
if(bParam2){
iVar2=bVar1;
bVar1=915000;
if(bVar0 && Global_262145.f_31244 >=0){
bVar1=Global_262145.f_31244;
}}
break;
case joaat("euros"):
bVar1=1800000;
if(bVar0 && Global_262145.f_31216 >=0){
bVar1=Global_262145.f_31216;
}
if(bParam2){
iVar2=bVar1;
bVar1=1350000;
if(bVar0 && Global_262145.f_31233 >=0){
bVar1=Global_262145.f_31233;
}}
break;
case joaat("growler"):
bVar1=1627000;
if(bVar0 && Global_262145.f_31224 >=0){
bVar1=Global_262145.f_31224;
}
if(bParam2){
iVar2=bVar1;
bVar1=1220250;
if(bVar0 && Global_262145.f_31241 >=0){
bVar1=Global_262145.f_31241;
}}
break;
case joaat("previon"):
bVar1=1490000;
if(bVar0 && Global_262145.f_31218 >=0){
bVar1=Global_262145.f_31218;
}
if(bParam2){
iVar2=bVar1;
bVar1=1117500;
if(bVar0 && Global_262145.f_31235 >=0){
bVar1=Global_262145.f_31235;
}}
break;
case joaat("astron"):
bVar1=1580000;
if(bVar0){
if(Global_262145.f_32508 >=0){
bVar1=Global_262145.f_32508;
}}
break;
case joaat("baller7"):
bVar1=890000;
if(bVar0 && Global_262145.f_32513 >=0){
bVar1=Global_262145.f_32513;
}
if(bParam2){
iVar2=bVar1;
bVar1=667500;
if(bVar0 && Global_262145.f_32524 >=0){
bVar1=Global_262145.f_32524;
}}
break;
case joaat("buffalo4"):
bVar1=2150000;
if(bVar0 && Global_262145.f_32506 >=0){
bVar1=Global_262145.f_32506;
}
if(bParam2){
iVar2=bVar1;
bVar1=1612500;
if(bVar0 && Global_262145.f_32521 >=0){
bVar1=Global_262145.f_32521;
}}
break;
case joaat("comet7"):
bVar1=1797000;
if(bVar0){
if(Global_262145.f_32515 >=0){
bVar1=Global_262145.f_32515;
}}
break;
case joaat("cinquemila"):
bVar1=1740000;
if(bVar0){
if(Global_262145.f_32514 >=0){
bVar1=Global_262145.f_32514;
}}
break;
case joaat("deity"):
bVar1=1845000;
if(bVar0 && Global_262145.f_32507 >=0){
bVar1=Global_262145.f_32507;
}
if(bParam2){
iVar2=bVar1;
bVar1=1383750;
if(bVar0 && Global_262145.f_32522 >=0){
bVar1=Global_262145.f_32522;
}}
break;
case joaat("granger2"):
bVar1=1380000;
if(bVar0 && Global_262145.f_32510 >=0){
bVar1=Global_262145.f_32510;
}
if(bParam2){
iVar2=bVar1;
bVar1=1035000;
if(bVar0 && Global_262145.f_32525 >=0){
bVar1=Global_262145.f_32525;
}}
break;
case joaat("ignus"):
bVar1=2765000;
if(bVar0){
if(Global_262145.f_32509 >=0){
bVar1=Global_262145.f_32509;
}}
break;
case joaat("jubilee"):
bVar1=1650000;
if(bVar0 && Global_262145.f_32512 >=0){
bVar1=Global_262145.f_32512;
}
if(bParam2){
iVar2=bVar1;
bVar1=1237500;
if(bVar0 && Global_262145.f_32523 >=0){
bVar1=Global_262145.f_32523;
}}
break;
case joaat("patriot3"):
bVar1=1710000;
if(bVar0 && Global_262145.f_32511 >=0){
bVar1=Global_262145.f_32511;
}
if(bParam2){
iVar2=bVar1;
bVar1=1282500;
if(bVar0 && Global_262145.f_32526 >=0){
bVar1=Global_262145.f_32526;
}}
break;
case joaat("champion"):
bVar1=2995000;
if(bVar0 && Global_262145.f_32505 >=0){
bVar1=Global_262145.f_32505;
}
if(bParam2){
iVar2=bVar1;
bVar1=2246250;
if(bVar0 && Global_262145.f_32520 >=0){
bVar1=Global_262145.f_32520;
}}
break;
case joaat("reever"):
bVar1=1900000;
if(bVar0){
if(Global_262145.f_32517 >=0){
bVar1=Global_262145.f_32517;
}}
break;
case joaat("shinobi"):
bVar1=2480500;
if(bVar0){
if(Global_262145.f_32519 >=0){
bVar1=Global_262145.f_32519;
}}
break;
case joaat("zeno"):
bVar1=2820000;
if(bVar0){
if(Global_262145.f_32516 >=0){
bVar1=Global_262145.f_32516;
}}
break;
case joaat("corsita"):
bVar1=1795000;
if(bVar0 && Global_262145.f_33624 >=0){
bVar1=Global_262145.f_33624;
}
break;
case joaat("draugur"):
bVar1=1870000;
if(bVar0 && Global_262145.f_33626 >=0){
bVar1=Global_262145.f_33626;
}
if(bParam2){
iVar2=bVar1;
bVar1=1402500;
if(bVar0 && Global_262145.f_33631 >=0){
bVar1=Global_262145.f_33631;
}}
break;
case joaat("greenwood"):
bVar1=1465000;
if(bVar0 && Global_262145.f_33617 >=0){
bVar1=Global_262145.f_33617;
}
if(bParam2){
iVar2=bVar1;
bVar1=1098750;
if(bVar0 && Global_262145.f_33630 >=0){
bVar1=Global_262145.f_33630;
}}
break;
case joaat("kanjosj"):
bVar1=1370000;
if(bVar0 && Global_262145.f_33628 >=0){
bVar1=Global_262145.f_33628;
}
if(bParam2){
iVar2=bVar1;
bVar1=1027500;
if(bVar0 && Global_262145.f_33633 >=0){
bVar1=Global_262145.f_33633;
}}
break;
case joaat("lm87"):
bVar1=2915000;
if(bVar0 && Global_262145.f_33625 >=0){
bVar1=Global_262145.f_33625;
}
break;
case joaat("postlude"):
bVar1=1310000;
if(bVar0 && Global_262145.f_33629 >=0){
bVar1=Global_262145.f_33629;
}
if(bParam2){
iVar2=bVar1;
bVar1=982500;
if(bVar0 && Global_262145.f_33634 >=0){
bVar1=Global_262145.f_33634;
}}
break;
case joaat("rhinehart"):
bVar1=1598000;
if(bVar0 && Global_262145.f_33623 >=0){
bVar1=Global_262145.f_33623;
}
break;
case joaat("sm722"):
bVar1=2115000;
if(bVar0 && Global_262145.f_33618 >=0){
bVar1=Global_262145.f_33618;
}
break;
case joaat("tenf"):
bVar1=1675000;
if(bVar0 && Global_262145.f_33622 >=0){
bVar1=Global_262145.f_33622;
}
break;
case joaat("torero2"):
bVar1=2890000;
if(bVar0 && Global_262145.f_33621 >=0){
bVar1=Global_262145.f_33621;
}
break;
case joaat("vigero2"):
bVar1=1947000;
if(bVar0 && Global_262145.f_33620 >=0){
bVar1=Global_262145.f_33620;
}
break;
case joaat("ruiner4"):
bVar1=1320000;
if(bVar0 && Global_262145.f_33619 >=0){
bVar1=Global_262145.f_33619;
}
break;
case joaat("conada"):
bVar1=2450000;
if(bVar0 && Global_262145.f_33627 >=0){
bVar1=Global_262145.f_33627;
}
if(bParam2){
iVar2=bVar1;
bVar1=1837500;
if(bVar0 && Global_262145.f_33632 >=0){
bVar1=Global_262145.f_33632;
}}
break;
case joaat("omnisegt"):
bVar1=1795000;
if(bVar0 && Global_262145.f_33616 >=0){
bVar1=Global_262145.f_33616;
}
break;
case joaat("weevil2"):
bVar1=(Global_262145.f_30816 + func_361(iParam1));
break;
case joaat("tenf2"):
bVar1=(Global_262145.f_33622 + func_361(iParam1));
break;
case joaat("brioso3"):
bVar1=(Global_262145.f_30817 + func_361(iParam1));
break;
case joaat("sentinel4"):
bVar1=(Global_262145.f_28517 + func_361(iParam1));
break;
case joaat("brickade2"):
bVar1=1450000;
if(bVar0 && Global_262145.f_33918 >=0){
bVar1=Global_262145.f_33918;
}
if(bParam2){
iVar2=bVar1;
bVar1=750000;
if(bVar0 && Global_262145.f_32694 >=0){
bVar1=Global_262145.f_32694;
}}
break;
case joaat("journey2"):
bVar1=790000;
if(bVar0 && Global_262145.f_33919 >=0){
bVar1=Global_262145.f_33919;
}
if(bParam2){
iVar2=bVar1;
bVar1=592500;
if(bVar0 && Global_262145.f_33934 >=0){
bVar1=Global_262145.f_33934;
}}
break;
case joaat("surfer3"):
bVar1=590000;
if(bVar0 && Global_262145.f_33920 >=0){
bVar1=Global_262145.f_33920;
}
if(bParam2){
iVar2=bVar1;
bVar1=442500;
if(bVar0 && Global_262145.f_33935 >=0){
bVar1=Global_262145.f_33935;
}}
break;
case joaat("panthere"):
bVar1=2170000;
if(bVar0 && Global_262145.f_33922 >=0){
bVar1=Global_262145.f_33922;
}
break;
case joaat("tulip2"):
bVar1=1658000;
if(bVar0 && Global_262145.f_33924 >=0){
bVar1=Global_262145.f_33924;
}
break;
case joaat("everon2"):
bVar1=1790000;
if(bVar0 && Global_262145.f_33925 >=0){
bVar1=Global_262145.f_33925;
}
if(bParam2){
iVar2=bVar1;
bVar1=1342500;
if(bVar0 && Global_262145.f_33936 >=0){
bVar1=Global_262145.f_33936;
}}
break;
case joaat("broadway"):
bVar1=925000;
if(bVar0 && Global_262145.f_33927 >=0){
bVar1=Global_262145.f_33927;
}
break;
case joaat("boor"):
bVar1=1280000;
if(bVar0 && Global_262145.f_33929 >=0){
bVar1=Global_262145.f_33929;
}
break;
case joaat("virtue"):
bVar1=2980000;
if(bVar0 && Global_262145.f_33931 >=0){
bVar1=Global_262145.f_33931;
}
if(bParam2){
iVar2=bVar1;
bVar1=2235000;
if(bVar0 && Global_262145.f_33937 >=0){
bVar1=Global_262145.f_33937;
}}
break;
case joaat("r300"):
bVar1=2075000;
if(bVar0 && Global_262145.f_33932 >=0){
bVar1=Global_262145.f_33932;
}
break;
case joaat("powersurge"):
bVar1=1605000;
if(bVar0 && Global_262145.f_33930 >=0){
bVar1=Global_262145.f_33930;
}
break;
case joaat("issi8"):
bVar1=1835000;
if(bVar0 && Global_262145.f_33928 >=0){
bVar1=Global_262145.f_33928;
}
break;
case joaat("eudora"):
bVar1=1250000;
if(bVar0 && Global_262145.f_33926 >=0){
bVar1=Global_262145.f_33926;
}
break;
case joaat("tahoma"):
bVar1=1500000;
if(bVar0 && Global_262145.f_33923 >=0){
bVar1=Global_262145.f_33923;
}
break;
case joaat("entity3"):
bVar1=2355000;
if(bVar0 && Global_262145.f_33921 >=0){
bVar1=Global_262145.f_33921;
}
break;
}
if(iParam1==joaat("iwagen")){
bVar1=1720000;
if(bVar0){
if(Global_262145.f_32518 >=0){
bVar1=Global_262145.f_32518;
}}}}
switch (iParam1){
case joaat("paradise"):
bVar1=50000;
if(bVar0 || iParam3==1){
bVar1=25000;
if(Global_262145.f_7627 >=0 && bVar0){
bVar1=Global_262145.f_7627;
}}
break;
case joaat("bifta"):
bVar1=75000;
if(bVar0){
if(Global_262145.f_7625 >=0){
bVar1=Global_262145.f_7625;
}}
break;
case joaat("kalahari"):
bVar1=40000;
if(bVar0 || iParam3==1){
bVar1=40000;
if(Global_262145.f_7626 >=0 && bVar0){
bVar1=Global_262145.f_7626;
}}
break;
case joaat("speeder"):
bVar1=325000;
if(bVar0){
if(Global_262145.f_7628 >=0){
bVar1=Global_262145.f_7628;
}}
break;
case joaat("btype"):
bVar1=1150000;
if(bVar0 || iParam3==1){
bVar1=750000;
if(Global_262145.f_7055 >=0 && bVar0){
bVar1=Global_262145.f_7055;
}}
break;
case joaat("jester"):
bVar1=240000;
if(bVar0){
if(Global_262145.f_7027 >=0){
bVar1=Global_262145.f_7027;
}}
break;
case joaat("turismor"):
if(!bParam2){
bVar1=500000;
if(bVar0){
if(Global_262145.f_7029 >=0){
bVar1=Global_262145.f_7029;
}}}else{
bVar1=false;
}
break;
case joaat("alpha"):
bVar1=150000;
if(bVar0){
if(Global_262145.f_7025 >=0){
bVar1=Global_262145.f_7025;
}}
break;
case joaat("vestra"):
bVar1=950000;
if(bVar0){
if(Global_262145.f_7080 >=0){
bVar1=Global_262145.f_7080;
}}
break;
case joaat("massacro"):
bVar1=275000;
if(bVar0){
if(Global_262145.f_7028 >=0){
bVar1=Global_262145.f_7028;
}}
break;
case joaat("zentorno"):
bVar1=725000;
if(bVar0){
if(Global_262145.f_7030 >=0){
bVar1=Global_262145.f_7030;
}}
break;
case joaat("huntley"):
if(!bParam2){
bVar1=195000;
if(bVar0){
if(Global_262145.f_7026 >=0){
bVar1=Global_262145.f_7026;
}}}else{
bVar1=false;
}
break;
case joaat("thrust"):
bVar1=75000;
if(bVar0){
if(Global_262145.f_7629 >=0){
bVar1=Global_262145.f_7629;
}}
break;
case joaat("blade"):
bVar1=160000;
if(bVar0){
if(Global_262145.f_8105 >=0){
bVar1=Global_262145.f_8105;
}}
break;
case joaat("warrener"):
bVar1=125000;
if(bVar0 || iParam3==1){
bVar1=120000;
if(Global_262145.f_8108 >=0 && bVar0){
bVar1=Global_262145.f_8108;
}}
break;
case joaat("glendale"):
bVar1=200000;
if(bVar0 && Global_262145.f_8106 >=0){
bVar1=Global_262145.f_8106;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(200000) * 0.75f));
if(bVar0 && Global_262145.f_25938 >=0){
bVar1=Global_262145.f_25938;
}}
break;
case joaat("rhapsody"):
bVar1=100000;
if(bVar0 || iParam3==1){
bVar1=140000;
if(Global_262145.f_8107 >=0 && bVar0){
bVar1=Global_262145.f_8107;
}}
break;
case joaat("panto"):
bVar1=85000;
if(bVar0){
if(Global_262145.f_8109 >=0){
bVar1=Global_262145.f_8109;
}}
break;
case joaat("dubsta3"):
bVar1=249000;
if(bVar0){
if(Global_262145.f_8110 >=0){
bVar1=Global_262145.f_8110;
}}
break;
case joaat("pigalle"):
bVar1=400000;
if(bVar0){
if(Global_262145.f_8104 >=0){
bVar1=Global_262145.f_8104;
}}
break;
case joaat("besra"):
bVar1=658000;
if(bVar0 || iParam3==1){
bVar1=1150000;
if(Global_262145.f_8536 >=0 && bVar0){
bVar1=Global_262145.f_8536;
}}
break;
case joaat("miljet"):
bVar1=1750000;
if(bVar0 || iParam3==1){
bVar1=1700000;
if(Global_262145.f_8537 >=0 && bVar0){
bVar1=Global_262145.f_8537;
}}
break;
case joaat("swift"):
if(!bParam2){
bVar1=1500000;
if(bVar0){
if(Global_262145.f_8538 >=0){
bVar1=Global_262145.f_8538;
}}}else{
bVar1=1600000;
if(bVar0){
if(Global_262145.f_8539 >=0){
bVar1=Global_262145.f_8539;
}}}
break;
case joaat("coquette2"):
if(bParam2){
bVar1=350000;
if(bVar0 || iParam3==1){
bVar1=665000;
if(Global_262145.f_8534 >=0 && bVar0){
bVar1=Global_262145.f_8534;
}}}else{
bVar1=395000;
if(bVar0 || iParam3==1){
bVar1=665000;
if(Global_262145.f_8535 >=0 && bVar0){
bVar1=Global_262145.f_8535;
}}}
break;
case joaat("sovereign"):
bVar1=120000;
if(bVar0){
if(Global_262145.f_8279 >=0){
bVar1=Global_262145.f_8279;
}}
break;
case joaat("monster"):
bVar1=742000;
if(bVar0 || iParam3==1){
bVar1=742014;
if(Global_262145.f_8278 >=0 && bVar0){
bVar1=Global_262145.f_8278;
}}
break;
case joaat("innovation"):
bVar1=92500;
if(bVar0){
if(Global_262145.f_8852 >=0){
bVar1=Global_262145.f_8852;
}}
break;
case joaat("hakuchou"):
bVar1=82000;
if(bVar0){
if(Global_262145.f_8853 >=0){
bVar1=Global_262145.f_8853;
}}
break;
case joaat("furoregt"):
bVar1=448000;
if(bVar0){
if(Global_262145.f_8854 >=0){
bVar1=Global_262145.f_8854;
}}
break;
case joaat("boxville4"):
if(!bParam2){
bVar1=45000;
if(bVar0){
if(Global_262145.f_9085 >=0){
bVar1=Global_262145.f_9085;
}}}else{
bVar1=59850;
if(bVar0){
if(Global_262145.f_20183 >=0){
bVar1=Global_262145.f_20183;
}}}
break;
case joaat("casco"):
if(!bParam2){
bVar1=680000;
if(bVar0){
if(Global_262145.f_9086 >=0){
bVar1=Global_262145.f_9086;
}}}else{
bVar1=904400;
if(bVar0){
if(Global_262145.f_20184 >=0){
bVar1=Global_262145.f_20184;
}}}
break;
case joaat("dinghy3"):
if(!bParam2){
bVar1=125000;
if(bVar0){
if(Global_262145.f_9087 >=0){
bVar1=Global_262145.f_9087;
}}}else{
bVar1=166250;
if(bVar0){
if(Global_262145.f_20185 >=0){
bVar1=Global_262145.f_20185;
}}}
break;
case joaat("enduro"):
bVar1=48000;
if(bVar0){
if(Global_262145.f_9088 >=0){
bVar1=Global_262145.f_9088;
}}
break;
case joaat("gburrito2"):
if(!bParam2){
bVar1=65000;
if(bVar0){
if(Global_262145.f_9089 >=0){
bVar1=Global_262145.f_9089;
}}}else{
bVar1=86450;
if(bVar0){
if(Global_262145.f_20186 >=0){
bVar1=Global_262145.f_20186;
}}}
break;
case joaat("guardian"):
bVar1=375000;
if(bVar0){
if(Global_262145.f_9090 >=0){
bVar1=Global_262145.f_9090;
}}
break;
case joaat("hydra"):
if(!bParam2){
bVar1=3000000;
if(bVar0){
if(Global_262145.f_9091 >=0){
bVar1=Global_262145.f_9091;
}}}else{
bVar1=3990000;
if(bVar0){
if(Global_262145.f_20187 >=0){
bVar1=Global_262145.f_20187;
}}}
break;
case joaat("insurgent"):
if(!bParam2){
bVar1=1350000;
if(bVar0){
if(Global_262145.f_9092 >=0){
bVar1=Global_262145.f_9092;
}}}else{
bVar1=1795500;
if(bVar0){
if(Global_262145.f_20188 >=0){
bVar1=Global_262145.f_20188;
}}}
break;
case joaat("insurgent2"):
if(!bParam2){
bVar1=675000;
if(bVar0){
if(Global_262145.f_9093 >=0){
bVar1=Global_262145.f_9093;
}}}else{
bVar1=897750;
if(bVar0){
if(Global_262145.f_20189 >=0){
bVar1=Global_262145.f_20189;
}}}
break;
case joaat("kuruma"):
if(!bParam2){
bVar1=95000;
if(bVar0){
if(Global_262145.f_9094 >=0){
bVar1=Global_262145.f_9094;
}}}else{
bVar1=126350;
if(bVar0){
if(Global_262145.f_20190 >=0){
bVar1=Global_262145.f_20190;
}}}
break;
case joaat("kuruma2"):
if(!bParam2){
bVar1=525000;
if(bVar0){
if(Global_262145.f_9095 >=0){
bVar1=Global_262145.f_9095;
}}}else{
bVar1=698250;
if(bVar0){
if(Global_262145.f_20191 >=0){
bVar1=Global_262145.f_20191;
}}}
break;
case joaat("lectro"):
if(!bParam2){
bVar1=750000;
if(bVar0){
if(Global_262145.f_9096 >=0){
bVar1=Global_262145.f_9096;
}}}else{
bVar1=997500;
if(bVar0){
if(Global_262145.f_20192 >=0){
bVar1=Global_262145.f_20192;
}}}
break;
case joaat("pbus"):
if(!bParam2){
bVar1=550000;
if(bVar0){
if(Global_262145.f_9102 >=0){
bVar1=Global_262145.f_9102;
}}}else{
bVar1=731500;
if(bVar0){
if(Global_262145.f_20198 >=0){
bVar1=Global_262145.f_20198;
}}}
break;
case joaat("mule3"):
if(!bParam2){
bVar1=32500;
if(bVar0){
if(Global_262145.f_9097 >=0){
bVar1=Global_262145.f_9097;
}}}else{
bVar1=43225;
if(bVar0){
if(Global_262145.f_20193 >=0){
bVar1=Global_262145.f_20193;
}}}
break;
case joaat("savage"):
if(!bParam2){
bVar1=1950000;
if(bVar0){
if(Global_262145.f_9098 >=0){
bVar1=Global_262145.f_9098;
}}}else{
bVar1=2593500;
if(bVar0){
if(Global_262145.f_20194 >=0){
bVar1=Global_262145.f_20194;
}}}
break;
case joaat("valkyrie"):
if(!bParam2){
bVar1=2850000;
if(bVar0){
if(Global_262145.f_9100 >=0){
bVar1=Global_262145.f_9100;
}}}else{
bVar1=3790500;
if(bVar0){
if(Global_262145.f_20196 >=0){
bVar1=Global_262145.f_20196;
}}}
break;
case joaat("technical"):
if(!bParam2){
bVar1=950000;
if(bVar0){
if(Global_262145.f_9099 >=0){
bVar1=Global_262145.f_9099;
}}}else{
bVar1=1263500;
if(bVar0){
if(Global_262145.f_20195 >=0){
bVar1=Global_262145.f_20195;
}}}
break;
case joaat("velum2"):
if(!bParam2){
bVar1=995000;
if(bVar0){
if(Global_262145.f_9101 >=0){
bVar1=Global_262145.f_9101;
}}}else{
bVar1=1323350;
if(bVar0){
if(Global_262145.f_20197 >=0){
bVar1=Global_262145.f_20197;
}}}
break;
case joaat("dodo"):
bVar1=500000;
if(bVar0){
if(!bParam2){
if(Global_262145.f_9189 >=0){
bVar1=Global_262145.f_9189;
}}else{
bVar1=Global_262145.f_20201;
}}
break;
case joaat("marshall"):
bVar1=250000;
if(bVar0 || iParam3==1){
if(!bParam2){
bVar1=500000;
if(Global_262145.f_9191 >=0 && bVar0){
bVar1=Global_262145.f_9191;
}}else{
bVar1=Global_262145.f_20200;
}}
break;
case joaat("submersible2"):
bVar1=1325000;
if(bVar0){
if(!bParam2){
if(Global_262145.f_9193 >=0){
bVar1=Global_262145.f_9193;
}}else{
bVar1=Global_262145.f_20202;
}}
break;
case joaat("blista2"):
bVar1=42000;
if(bVar0){
if(!bParam2){
if(Global_262145.f_9188 >=0){
bVar1=Global_262145.f_9188;
}}else{
bVar1=Global_262145.f_20205;
}}
break;
case joaat("stalion"):
bVar1=71000;
if(bVar0){
if(!bParam2){
if(Global_262145.f_9192 >=0){
bVar1=Global_262145.f_9192;
}}else{
bVar1=Global_262145.f_20204;
}}
break;
case joaat("dukes"):
bVar1=62000;
if(bVar0){
if(!bParam2){
bVar1=62000;
if(Global_262145.f_9190 >=0){
bVar1=Global_262145.f_9190;
}}else{
bVar1=Global_262145.f_20203;
}}
break;
case joaat("dukes2"):
bVar1=279000;
if(bVar0 || iParam3==1){
if(!bParam2){
bVar1=665000;
if(Global_262145.f_20199 >=0 && bVar0){
bVar1=Global_262145.f_20199;
}}else{
bVar1=Global_262145.f_20206;
}}
break;
case joaat("stalion2"):
bVar1=277000;
if(bVar0){
if(Global_262145.f_17363 >=0){
bVar1=Global_262145.f_17363;
}}
break;
case joaat("dominator2"):
bVar1=315000;
if(bVar0 && Global_262145.f_17361 >=0){
bVar1=Global_262145.f_17361;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(315000) * 0.75f));
}
break;
case joaat("gauntlet2"):
bVar1=230000;
if(bVar0){
if(Global_262145.f_17362 >=0){
bVar1=Global_262145.f_17362;
}}
break;
case joaat("buffalo3"):
bVar1=535000;
if(bVar0){
if(Global_262145.f_17360 >=0){
bVar1=Global_262145.f_17360;
}}
break;
case joaat("slamvan"):
bVar1=49500;
if(bVar0 && Global_262145.f_9406 >=0){
bVar1=Global_262145.f_9406;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(49500) * 0.75f));
if(bVar0 && Global_262145.f_25939 >=0){
bVar1=Global_262145.f_25939;
}}
break;
case joaat("ratloader2"):
bVar1=37500;
if(bVar0 && Global_262145.f_9405 >=0){
bVar1=Global_262145.f_9405;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(37500) * 0.75f));
if(bVar0 && Global_262145.f_25937 >=0){
bVar1=Global_262145.f_25937;
}}
break;
case joaat("jester2"):
bVar1=350000;
if(bVar0){
if(Global_262145.f_9403 >=0){
bVar1=Global_262145.f_9403;
}}
break;
case joaat("massacro2"):
bVar1=385000;
if(bVar0){
if(Global_262145.f_9404 >=0){
bVar1=Global_262145.f_9404;
}}
break;
case joaat("feltzer3"):
bVar1=975000;
if(bVar0){
if(Global_262145.f_11061 >=0){
bVar1=Global_262145.f_11061;
}}
break;
case joaat("luxor2"):
bVar1=10000000;
if(bVar0){
if(Global_262145.f_11062 >=0){
bVar1=Global_262145.f_11062;
}}
break;
case joaat("osiris"):
bVar1=1950000;
if(bVar0){
if(Global_262145.f_11063 >=0){
bVar1=Global_262145.f_11063;
}}
break;
case joaat("swift2"):
bVar1=5150000;
if(bVar0){
if(Global_262145.f_11064 >=0){
bVar1=Global_262145.f_11064;
}}
break;
case joaat("virgo"):
bVar1=195000;
if(bVar0){
if(Global_262145.f_11065 >=0){
bVar1=Global_262145.f_11065;
}}
break;
case joaat("windsor"):
if(!bParam2){
bVar1=845000;
if(bVar0){
if(Global_262145.f_11066 >=0){
bVar1=Global_262145.f_11066;
}}}else{
bVar1=false;
}
break;
case joaat("brawler"):
bVar1=715000;
if(bVar0){
if(Global_262145.f_11360 >=0){
bVar1=Global_262145.f_11360;
}}
break;
case joaat("chino"):
bVar1=225000;
if(bVar0){
if(Global_262145.f_11361 >=0){
bVar1=Global_262145.f_11361;
}}
break;
case joaat("coquette3"):
bVar1=695000;
if(bVar0){
if(Global_262145.f_11362 >=0){
bVar1=Global_262145.f_11362;
}}
break;
case joaat("t20"):
bVar1=2200000;
if(bVar0){
if(Global_262145.f_11363 >=0){
bVar1=Global_262145.f_11363;
}}
break;
case joaat("toro"):
bVar1=1750000;
if(bVar0){
if(Global_262145.f_11364 >=0){
bVar1=Global_262145.f_11364;
}}
break;
case joaat("vindicator"):
bVar1=630000;
if(bVar0){
if(Global_262145.f_11365 >=0){
bVar1=Global_262145.f_11365;
}}
break;
case joaat("chino2"):
bVar1=225000;
bVar1=(Global_262145.f_12342 + func_361(iParam1));
break;
case joaat("primo2"):
bVar1=100000;
if(bVar0 && Global_262145.f_12341 >=0){
bVar1=(Global_262145.f_12341 + func_361(iParam1));
}
break;
case joaat("moonbeam"):
bVar1=32500;
if(bVar0 && Global_262145.f_12338 >=0){
bVar1=Global_262145.f_12338;
}
break;
case joaat("moonbeam2"):
bVar1=(Global_262145.f_12338 + func_361(iParam1));
break;
case joaat("faction"):
bVar1=36000;
if(bVar0 && Global_262145.f_12337 >=0){
bVar1=Global_262145.f_12337;
}
break;
case joaat("faction2"):
bVar1=95000;
bVar1=(Global_262145.f_12337 + func_361(iParam1));
break;
case joaat("buccaneer"):
bVar1=29000;
if(bVar0 && Global_262145.f_12339 >=0){
bVar1=Global_262145.f_12339;
}
break;
case joaat("buccaneer2"):
bVar1=85000;
bVar1=(Global_262145.f_12339 + func_361(iParam1));
break;
case joaat("voodoo2"):
bVar1=5500;
if(bVar0 && Global_262145.f_12340 >=0){
bVar1=Global_262145.f_12340;
}
break;
case joaat("voodoo"):
bVar1=105000;
bVar1=(Global_262145.f_12340 + func_361(iParam1));
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
bVar1=(Global_262145.f_25940 + func_361(iParam1));
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
bVar1=(Global_262145.f_9406 + func_361(iParam1));
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
bVar1=(Global_262145.f_24123 + func_361(iParam1));
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
bVar1=(Global_262145.f_25941 + func_361(iParam1));
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
bVar1=(Global_262145.f_25943 + func_361(iParam1));
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
bVar1=(Global_262145.f_25937 + func_361(iParam1));
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
bVar1=(Global_262145.f_25938 + func_361(iParam1));
break;
case joaat("btype2"):
bVar1=550000;
if(bVar0 && Global_262145.f_12559 >=0){
bVar1=Global_262145.f_12559;
}
break;
case joaat("lurcher"):
bVar1=650000;
if(bVar0 && Global_262145.f_12560 >=0){
bVar1=Global_262145.f_12560;
}
break;
case joaat("baller3"):
bVar1=149000;
if(bVar0 && Global_262145.f_13256 >=0){
bVar1=Global_262145.f_13256;
}
break;
case joaat("baller5"):
bVar1=374000;
if(bVar0 && Global_262145.f_13257 >=0){
bVar1=Global_262145.f_13257;
}
break;
case joaat("baller4"):
bVar1=247000;
if(bVar0 && Global_262145.f_13258 >=0){
bVar1=Global_262145.f_13258;
}
break;
case joaat("baller6"):
bVar1=513000;
if(bVar0 && Global_262145.f_13259 >=0){
bVar1=Global_262145.f_13259;
}
break;
case joaat("cog55"):
bVar1=154000;
if(bVar0 && Global_262145.f_13260 >=0){
bVar1=Global_262145.f_13260;
}
break;
case joaat("cog552"):
bVar1=396000;
if(bVar0 && Global_262145.f_13261 >=0){
bVar1=Global_262145.f_13261;
}
break;
case joaat("cognoscenti"):
bVar1=254000;
if(bVar0 && Global_262145.f_13262 >=0){
bVar1=Global_262145.f_13262;
}
break;
case joaat("cognoscenti2"):
bVar1=558000;
if(bVar0 && Global_262145.f_13263 >=0){
bVar1=Global_262145.f_13263;
}
break;
case joaat("limo2"):
bVar1=1650000;
if(bVar0 && Global_262145.f_13264 >=0){
bVar1=Global_262145.f_13264;
}
break;
case joaat("mamba"):
bVar1=995000;
if(bVar0 && Global_262145.f_13265 >=0){
bVar1=Global_262145.f_13265;
}
break;
case joaat("nightshade"):
bVar1=585000;
if(bVar0 && Global_262145.f_13266 >=0){
bVar1=Global_262145.f_13266;
}
break;
case joaat("schafter3"):
bVar1=116000;
if(bVar0 && Global_262145.f_13267 >=0){
bVar1=Global_262145.f_13267;
}
break;
case joaat("schafter5"):
bVar1=325000;
if(bVar0 && Global_262145.f_13268 >=0){
bVar1=Global_262145.f_13268;
}
break;
case joaat("schafter4"):
bVar1=208000;
if(bVar0 && Global_262145.f_13269 >=0){
bVar1=Global_262145.f_13269;
}
break;
case joaat("schafter6"):
bVar1=438000;
if(bVar0 && Global_262145.f_13270 >=0){
bVar1=Global_262145.f_13270;
}
break;
case joaat("verlierer2"):
bVar1=695000;
if(bVar0 && Global_262145.f_13271 >=0){
bVar1=Global_262145.f_13271;
}
break;
case joaat("supervolito"):
bVar1=2113000;
if(bVar0 && Global_262145.f_13272 >=0){
bVar1=Global_262145.f_13272;
}
break;
case joaat("supervolito2"):
bVar1=3330000;
if(bVar0 && Global_262145.f_13273 >=0){
bVar1=Global_262145.f_13273;
}
break;
case joaat("tampa"):
bVar1=375000;
if(bVar0 && Global_262145.f_13333 >=0){
bVar1=Global_262145.f_13333;
}
break;
case joaat("sultan"):
if(bVar0 && Global_262145.f_13452 >=0){
bVar1=Global_262145.f_13452;
}
break;
case joaat("sultanrs"):
bVar1=(Global_262145.f_13452 + func_361(iParam1));
break;
case joaat("banshee"):
if(bVar0 && Global_262145.f_13454 >=0){
bVar1=Global_262145.f_13454;
}
break;
case joaat("banshee2"):
bVar1=(Global_262145.f_13454 + func_361(iParam1));
break;
case joaat("btype3"):
bVar1=982000;
if(bVar0 && Global_262145.f_13482 >=0){
bVar1=Global_262145.f_13482;
}
break;
case joaat("faction3"):
bVar1=(Global_262145.f_12337 + func_361(iParam1));
break;
case joaat("minivan2"):
bVar1=(Global_262145.f_7037 + func_361(iParam1));
break;
case joaat("sabregt2"):
bVar1=(Global_262145.f_15029 + func_361(iParam1));
break;
case joaat("slamvan3"):
bVar1=(Global_262145.f_9406 + func_361(iParam1));
break;
case joaat("tornado5"):
bVar1=(Global_262145.f_15030 + func_361(iParam1));
break;
case joaat("virgo3"):
bVar1=Global_262145.f_15028;
break;
case joaat("virgo2"):
bVar1=(Global_262145.f_15028 + func_361(iParam1));
break;
case joaat("technical3"):
bVar1=(950000 + func_361(iParam1));
if(bVar0){
if(Global_262145.f_9099 >=0){
bVar1=(Global_262145.f_9099 + func_361(iParam1));
}}
break;
case joaat("insurgent3"):
bVar1=(1350000 + func_361(iParam1));
if(bVar0){
if(Global_262145.f_9092 >=0){
bVar1=(Global_262145.f_9092 + func_361(iParam1));
}}
break;
}
switch (iParam1){
case joaat("f620"):
if(bVar0){
if(Global_262145.f_7635 >=0){
bVar1=Global_262145.f_7635;
}}
break;
case joaat("fusilade"):
if(bVar0){
if(Global_262145.f_7636 >=0){
bVar1=Global_262145.f_7636;
}}
break;
case joaat("penumbra"):
if(bVar0){
if(Global_262145.f_7637 >=0){
bVar1=Global_262145.f_7637;
}}
break;
case joaat("sentinel"):
if(bVar0){
if(Global_262145.f_7638 >=0){
bVar1=Global_262145.f_7638;
}}
break;
case joaat("sentinel2"):
if(bVar0){
if(Global_262145.f_7639 >=0){
bVar1=Global_262145.f_7639;
}}
break;
}
if(bVar0){
switch (iParam1){
case joaat("elegy2"):
if(bParam2){
if(Global_262145.f_4050 >=0){
bVar1=Global_262145.f_4050;
}}
break;
case joaat("khamelion"):
if(Global_262145.f_4066 >=0){
bVar1=Global_262145.f_4066;
}
break;
case joaat("hotknife"):
if(Global_262145.f_4060 >=0){
bVar1=Global_262145.f_4060;
}
break;
case joaat("carbonrs"):
if(Global_262145.f_4036 >=0){
bVar1=Global_262145.f_4036;
}
break;
}}
if(bVar0 || iParam3==1){
if(bParam2){
switch (iParam1){
case joaat("coquette"):
bVar1=138000;
if(Global_262145.f_7632 >=0 && bVar0){
bVar1=Global_262145.f_7632;
}
break;
case joaat("banshee"):
bVar1=126000;
if(Global_262145.f_7631 >=0 && bVar0){
bVar1=Global_262145.f_7631;
}
break;
case joaat("stinger"):
bVar1=850000;
if(Global_262145.f_7633 >=0 && bVar0){
bVar1=Global_262145.f_7633;
}
break;
case joaat("voltic"):
bVar1=150000;
if(Global_262145.f_4106 >=0 && bVar0){
bVar1=Global_262145.f_4106;
}
break;
case joaat("chino"):
bVar1=225000;
if(Global_262145.f_12342 >=0 && bVar0){
bVar1=Global_262145.f_12342;
}
break;
case joaat("kalahari"):
bVar1=40000;
if(Global_262145.f_8855 >=0 && bVar0){
bVar1=Global_262145.f_8855;
}
break;
case joaat("slamvan"):
bVar1=49500;
if(Global_262145.f_15032 >=0 && bVar0){
bVar1=Global_262145.f_15032;
}
if(bParam2){
iVar2=bVar1;
bVar1=round((to_float(bVar1) * 0.75f));
if(bVar0 && Global_262145.f_25939 >=0){
bVar1=Global_262145.f_25939;
}}
break;
case joaat("minivan"):
bVar1=30000;
if(Global_262145.f_15031 >=0 && bVar0){
bVar1=Global_262145.f_15031;
}
break;
}}else{
switch (iParam1){
case joaat("voltic"):
if(Global_262145.f_7630 >=0 && bVar0){
bVar1=Global_262145.f_7630;
}
break;
case joaat("banshee"):
if(Global_262145.f_13454 >=0 && bVar0){
bVar1=Global_262145.f_13454;
}
break;
}}}
if(bVar1==-1){
return 0;
}
if(iVar2==-1){
iVar2=bVar1;
}
*uParam0=bVar1;
uParam0->f_3=floor((IntToFloat(floor((IntToFloat(bVar1) * 0.5f))) * 0.1f));
uParam0->f_5=floor((IntToFloat(floor((IntToFloat(bVar1) * 0.5f))) * 0.25f));
uParam0->f_1=floor((IntToFloat(bVar1) * 0.5f));
if(!func_408(iParam1)){
uParam0->f_2=floor((IntToFloat(floor((IntToFloat(iVar2) * 0.5f))) * 0.25f));
uParam0->f_4=floor((IntToFloat(uParam0->f_2) * 0.1f));
if(uParam0->f_4 > Global_262145.f_16766 && uParam0->f_4 <=Global_262145.f_16767){
uParam0->f_4=Global_262145.f_16766;
}}else{
uParam0->f_2=floor((IntToFloat(iVar2) * 0.06f));
uParam0->f_4=floor((IntToFloat(uParam0->f_2) * 0.1f));
if(uParam0->f_4 > Global_262145.f_23993){
uParam0->f_4=Global_262145.f_23993;
}}
if(bVar0){
uParam0->f_3=floor((IntToFloat(uParam0->f_1) * 0.2f));
}
return 1;
}

int func_408(int iParam0){
switch (iParam0){
case joaat("apc"):
case joaat("dune3"):
case joaat("halftrack"):
case joaat("oppressor"):
case joaat("tampa3"):
case joaat("technical3"):
case joaat("insurgent3"):
case joaat("vigilante"):
case joaat("barrage"):
case joaat("ardent"):
case joaat("nightshark"):
case joaat("deluxo"):
case joaat("stromberg"):
case joaat("comet4"):
case joaat("revolter"):
case joaat("savestra"):
case joaat("viseris"):
case joaat("thruster"):
case joaat("riot2"):
case joaat("chernobog"):
case joaat("khanjali"):
case joaat("technical2"):
case joaat("boxville5"):
case joaat("wastelander"):
case joaat("phantom2"):
case joaat("voltic2"):
case joaat("dune5"):
case joaat("ruiner2"):
case joaat("blazer5"):
case joaat("caracara"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("scramjet"):
case joaat("oppressor2"):
case joaat("menacer"):
case joaat("paragon2"):
return 1;
break;
default:
if(Global_2764569 !=0){
if(Global_2764569==iParam0){
return 1;
}}
if(func_297(iParam0)){
return 1;
}
break;
}
return 0;
}

int func_409(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
int iVar4;
int iVar5;
iVar0=0;
iVar1=func_497(joaat("mpply_vehicle_id_admin_web"));
iVar2=func_254(iParam1, -1);
if(iVar2==0){
return -1;
}
if(!((((((((iParam1==245 || iParam1==323) || iParam1==324) || iParam1==357) || iParam1==402) || iParam1==449) || iParam1==487) || iParam1==518) || iParam1==583)){
if(!func_31(iVar2, -1)){
return -1;
}}
if(iVar1 !=0){
if(iVar1==iVar2){
iVar0=1;
if(iParam1==109 && iVar1==joaat("btype")){
iVar0=1;
}elseif(iParam1==248 && iVar1==joaat("btype3")){
iVar0=1;
}}}
switch (iParam1){
case 95:
return func_425(iVar2, -1, bParam2);
break;
case 96:
if(func_424() && func_423()){
return func_425(iVar2, Global_262145.f_8612, 1);
}
return func_425(iVar2, Global_262145.f_8609, bParam2);
break;
case 97:
if(func_424() && func_423()){
return func_425(iVar2, Global_262145.f_8613, 1);
}
return func_425(iVar2, Global_262145.f_8610, bParam2);
break;
case 98:
if(func_424() && func_423()){
return func_425(iVar2, Global_262145.f_8614, 1);
}
return func_425(iVar2, Global_262145.f_8611, bParam2);
break;
case 62:
return func_425(iVar2, func_422(iParam1), bParam2);
break;
case 48:
return func_425(iVar2, func_422(iParam1), bParam2);
break;
case 11:
return func_425(iVar2, func_422(iParam1), bParam2);
break;
case 25:
return func_425(iVar2, func_422(iParam1), bParam2);
break;
}
switch (iParam1){
case 99:
if(func_420(99)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 100:
if(func_420(100)){
return func_425(iVar2, Global_262145.f_7626, 0);
}else{
return -3;
}
break;
case 101:
if(func_420(101)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 102:
if(func_420(102)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 109:
if(((Global_262145.f_7059 || iVar0) || Global_262145.f_12031) || func_222(114, -1)){
if(func_420(109)){
return func_425(iVar2, Global_262145.f_7055, bParam2);
}else{
return -1;
}}else{
return -1;
}
break;
case 111:
if(func_420(111)){
return func_425(iVar2, Global_262145.f_7027, bParam2);
}else{
return -3;
}
break;
case 114:
if(func_420(114)){
return func_425(iVar2, Global_262145.f_7028, bParam2);
}else{
return -3;
}
break;
case 112:
if(func_420(112)){
return func_425(iVar2, Global_262145.f_7029, bParam2);
}else{
return -3;
}
break;
case 115:
if(func_420(115)){
return func_425(iVar2, Global_262145.f_7030, bParam2);
}else{
return -3;
}
break;
case 116:
if(func_420(116)){
return func_425(iVar2, Global_262145.f_7026, bParam2);
}else{
return -3;
}
break;
case 110:
if(func_420(110)){
return func_425(iVar2, Global_262145.f_7025, bParam2);
}else{
return -3;
}
break;
case 113:
if(func_420(113)){
return func_425(iVar2, Global_262145.f_7080, bParam2);
}else{
return -3;
}
break;
case 121:
if(func_420(121)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 143:
if(func_420(143)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 144:
if(func_420(144)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 145:
if(func_420(145)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 146:
if(func_420(146)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 147:
if(func_420(147)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 148:
if(func_420(148)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 149:
if(func_420(149)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 160:
if(Global_262145.f_8274 || func_222(3604, -1)){
if(func_420(160)){
return func_425(iVar2, Global_262145.f_8278, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 161:
if(Global_262145.f_8273 || func_222(3605, -1)){
if(func_420(161)){
return func_425(iVar2, Global_262145.f_8279, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 162:
if(func_420(162)){
return func_425(iVar2, Global_262145.f_8537, bParam2);
}else{
return -3;
}
break;
case 163:
if(func_420(163)){
return func_425(iVar2, Global_262145.f_8536, bParam2);
}else{
return -3;
}
break;
case 164:
if(func_420(164)){
if(!bParam2){
return func_425(iVar2, Global_262145.f_8538, 0);
}else{
return func_425(iVar2, Global_262145.f_8539, 1);
}
return -3;
}
break;
case 165:
if(func_420(165)){
return func_425(iVar2, Global_262145.f_8534, bParam2);
}else{
return -3;
}
break;
case 166:
if(func_420(166)){
return func_425(iVar2, Global_262145.f_8535, 1);
}else{
return -3;
}
break;
case 167:
if(func_420(167)){
return func_425(iVar2, Global_262145.f_8852, bParam2);
}else{
return -3;
}
break;
case 168:
if(func_420(168)){
return func_425(iVar2, Global_262145.f_8853, bParam2);
}else{
return -3;
}
break;
case 169:
if(func_420(169)){
return func_425(iVar2, Global_262145.f_8854, bParam2);
}else{
return -3;
}
break;
case 170:
if(func_420(170)){
return func_425(iVar2, Global_262145.f_8855, 1);
}else{
return -3;
}
break;
case 187:
if(Global_262145.f_8715){
if(func_420(187)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 177:
if(Global_262145.f_8711){
if(func_420(177)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 185:
if(Global_262145.f_8713){
if(func_420(185)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 174:
if(func_420(174)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 171:
if(Global_262145.f_9033){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 172:
if(Global_262145.f_8708){
if(func_420(172)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 173:
if(Global_262145.f_8709){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 175:
if(Global_262145.f_8710){
if(func_420(175)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 176:
if(func_420(176)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 178:
if(Global_262145.f_8706){
if(func_420(178)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 179:
if(Global_262145.f_8707){
if(func_420(179)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 183:
if(Global_262145.f_9035){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 180:
if(Global_262145.f_8717){
if(func_420(180)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 181:
if(Global_262145.f_9034){
if(func_420(181)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 182:
if(Global_262145.f_8718){
if(func_420(182)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 184:
if(Global_262145.f_8712){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 186:
if(Global_262145.f_8714){
if(func_420(186)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 188:
if(Global_262145.f_8716){
if(func_420(188)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}else{
return -1;
}
break;
case 189:
return func_425(func_254(iParam1, -1), Global_262145.f_10085, bParam2);
break;
case 190:
return func_425(func_254(iParam1, -1), Global_262145.f_10086, bParam2);
break;
case 191:
return func_425(func_254(iParam1, -1), Global_262145.f_10087, bParam2);
break;
case 192:
return func_425(func_254(iParam1, -1), Global_262145.f_9103, bParam2);
break;
case 193:
return func_425(func_254(iParam1, -1), Global_262145.f_10088, bParam2);
break;
case 194:
return func_425(func_254(iParam1, -1), Global_262145.f_10089, bParam2);
break;
case 195:
return func_425(func_254(iParam1, -1), Global_262145.f_10090, bParam2);
break;
case 196:
return func_425(func_254(iParam1, -1), Global_262145.f_10091, bParam2);
break;
case 197:
return func_425(func_254(iParam1, -1), Global_262145.f_10092, bParam2);
break;
case 198:
return func_425(func_254(iParam1, -1), Global_262145.f_10093, bParam2);
break;
case 199:
if(func_424() || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 200:
if(func_424() || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 201:
if(func_424() || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 202:
if(func_424() || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 203:
if(func_424() || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 204:
if(func_424() || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 205:
if(Global_262145.f_20223){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 206:
if(func_424()){
return 0;
}elseif(Global_262145.f_17317 || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 207:
if(func_424()){
return 0;
}elseif(Global_262145.f_17319 || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 208:
if(func_424()){
return 0;
}elseif(Global_262145.f_17318 || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
case 209:
if(func_424()){
return 0;
}elseif(Global_262145.f_17320 || Global_262145.f_20222){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
}
switch (iParam1){
case 210:
if(!bParam2){
if(func_420(210)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}}elseif(Global_262145.f_14738){
return func_425(func_254(iParam1, -1), -1, bParam2);
}else{
return -1;
}
break;
case 211:
if(func_420(211)){
return func_425(iVar2, -1, bParam2);
}else{
return -3;
}
break;
case 212:
if(func_420(212)){
return func_425(iVar2, Global_262145.f_9403, bParam2);
}else{
return -3;
}
break;
case 213:
if(func_420(213)){
return func_425(iVar2, Global_262145.f_9404, bParam2);
}else{
return -3;
}
break;
case 214:
if(func_420(214)){
return func_425(func_254(iParam1, -1), Global_262145.f_11061, bParam2);
}else{
return -3;
}
break;
case 215:
if(func_420(215)){
return func_425(func_254(iParam1, -1), Global_262145.f_11062, bParam2);
}else{
return -3;
}
break;
case 216:
if(func_420(216)){
return func_425(func_254(iParam1, -1), Global_262145.f_11063, bParam2);
}else{
return -3;
}
break;
case 217:
if(func_420(217)){
return func_425(func_254(iParam1, -1), Global_262145.f_11064, bParam2);
}else{
return -3;
}
break;
case 218:
if(func_420(218)){
return func_425(func_254(iParam1, -1), Global_262145.f_11065, bParam2);
}else{
return -3;
}
break;
case 219:
if(func_420(219)){
return func_425(func_254(iParam1, -1), Global_262145.f_11066, bParam2);
}else{
return -3;
}
break;
case 220:
return func_425(func_254(iParam1, -1), Global_262145.f_11360, bParam2);
break;
case 221:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_11361, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_12342, 1);
}
break;
case 222:
return func_425(func_254(iParam1, -1), Global_262145.f_11362, bParam2);
break;
case 223:
return func_425(func_254(iParam1, -1), Global_262145.f_11363, bParam2);
break;
case 224:
return func_425(func_254(iParam1, -1), Global_262145.f_11364, bParam2);
break;
case 225:
return func_425(func_254(iParam1, -1), Global_262145.f_11365, bParam2);
break;
case 229:
return func_425(func_254(iParam1, -1), Global_262145.f_12341, bParam2);
break;
case 228:
return func_425(func_254(iParam1, -1), Global_262145.f_12338, bParam2);
break;
case 227:
return func_425(func_254(iParam1, -1), Global_262145.f_12337, bParam2);
break;
case 226:
return func_425(func_254(iParam1, -1), Global_262145.f_12339, bParam2);
break;
case 230:
return func_425(func_254(iParam1, -1), Global_262145.f_12340, bParam2);
break;
case 231:
if((iVar0 || Global_262145.f_12041) || func_222(4326, -1)){
if(func_420(231)){
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
}else{
return -1;
}}else{
return -1;
}
break;
case 232:
if((iVar0 || Global_262145.f_12041) || func_222(4327, -1)){
if(func_420(232)){
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
}else{
return -1;
}}else{
return -1;
}
break;
case 251:
if(Global_262145.f_14733){
return func_425(func_254(iParam1, -1), Global_262145.f_15028, bParam2);
}else{
return -1;
}
break;
case 250:
if(Global_262145.f_14735){
return func_425(func_254(iParam1, -1), -1, bParam2);
}else{
return -1;
}
break;
case 249:
if(Global_262145.f_14734){
return func_425(func_254(iParam1, -1), -1, bParam2);
}else{
return -1;
}
break;
case 252:
if(Global_262145.f_14737){
return func_425(func_254(iParam1, -1), -1, bParam2);
}else{
return -1;
}
break;
case 233:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_13256, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_13257, 1);
}
break;
case 234:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_13258, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_13259, 1);
}
break;
case 235:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_13260, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_13261, 1);
}
break;
case 236:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_13262, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_13263, 1);
}
break;
case 237:
return func_425(func_254(iParam1, -1), Global_262145.f_13264, bParam2);
break;
case 238:
return func_425(func_254(iParam1, -1), Global_262145.f_13265, bParam2);
break;
case 239:
return func_425(func_254(iParam1, -1), Global_262145.f_13266, bParam2);
break;
case 240:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_13267, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_13268, 1);
}
break;
case 241:
if(!bParam2){
return func_425(func_254(iParam1, -1), Global_262145.f_13269, 0);
}else{
return func_425(func_254(iParam1, -1), Global_262145.f_13270, 1);
}
break;
case 242:
return func_425(func_254(iParam1, -1), Global_262145.f_13271, bParam2);
break;
case 243:
return func_425(func_254(iParam1, -1), Global_262145.f_13272, bParam2);
break;
case 244:
return func_425(func_254(iParam1, -1), Global_262145.f_13273, bParam2);
break;
case 245:
if(!Global_262145.f_13087 && !func_418()){
return 1;
}else{
return -1;
}
break;
case 323:
return 1;
case 324:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 246:
if((iVar0 || Global_262145.f_12710) || func_222(109, -1)){
if(func_420(246)){
return func_425(func_254(iParam1, -1), Global_262145.f_13333, bParam2);
break;
}else{
return -1;
}}else{
return -1;
}
break;
case 247:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 49:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 248:
if(((Global_262145.f_7059 || iVar0) || Global_262145.f_13397) || func_222(115, -1)){
if(func_420(248)){
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
}else{
return -1;
}}else{
return -1;
}
break;
case 253:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 254:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 255:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 256:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 257:
return func_425(func_254(iParam1, -1), -1, bParam2);
break;
case 357:
return 1;
case 402:
if(func_417()){
return 1;
}else{
return -1;
}
break;
case 518:
return 1;
break;
}
switch (iParam1){
case 117:
return func_425(iVar2, -1, 1);
case 118:
return func_425(iVar2, -1, 1);
case 119:
return func_425(iVar2, -1, 1);
case 120:
return func_425(iVar2, Global_262145.f_4106, 1);
default:
}
switch (iParam1){
case 5:
return func_425(iVar2, func_422(iParam1), bParam2);
case 82:
return func_425(iVar2, func_422(iParam1), bParam2);
case 63:
return func_425(iVar2, func_422(iParam1), bParam2);
case 78:
return func_425(iVar2, func_422(iParam1), bParam2);
case 57:
return func_425(iVar2, func_422(iParam1), bParam2);
case 49:
return func_425(iVar2, func_422(iParam1), bParam2);
case 22:
return func_425(iVar2, func_422(iParam1), bParam2);
case 94:
return func_425(iVar2, func_422(iParam1), bParam2);
case 51:
return func_425(iVar2, func_422(iParam1), bParam2);
case 89:
return func_425(iVar2, func_422(iParam1), bParam2);
case 66:
return func_425(iVar2, func_422(iParam1), bParam2);
case 33:
return func_425(iVar2, func_422(iParam1), bParam2);
case 70:
return func_425(iVar2, func_422(iParam1), bParam2);
case 83:
return func_425(iVar2, func_422(iParam1), bParam2);
case 20:
return func_425(iVar2, func_422(iParam1), bParam2);
case 71:
return func_425(iVar2, func_422(iParam1), bParam2);
case 19:
return func_425(iVar2, -1, bParam2);
case 58:
return func_425(iVar2, func_422(iParam1), bParam2);
case 3:
return func_425(iVar2, func_422(iParam1), bParam2);
case 84:
return func_425(iVar2, func_422(iParam1), bParam2);
case 7:
return func_425(iVar2, func_422(iParam1), bParam2);
case 72:
return func_425(iVar2, func_422(iParam1), bParam2);
case 38:
return func_425(iVar2, func_422(iParam1), bParam2);
case 21:
return func_425(iVar2, func_422(iParam1), bParam2);
case 12:
return func_425(iVar2, func_422(iParam1), bParam2);
case 54:
return func_425(iVar2, func_422(iParam1), bParam2);
case 90:
return func_425(iVar2, func_422(iParam1), bParam2);
case 81:
return func_425(iVar2, func_422(iParam1), bParam2);
case 13:
return func_425(iVar2, func_422(iParam1), bParam2);
case 4:
return func_425(iVar2, func_422(iParam1), bParam2);
case 56:
return func_425(iVar2, func_422(iParam1), bParam2);
case 69:
return func_425(iVar2, func_422(iParam1), bParam2);
case 60:
return func_425(iVar2, func_422(iParam1), bParam2);
case 91:
return func_425(iVar2, func_422(iParam1), bParam2);
case 50:
return func_425(iVar2, func_422(iParam1), bParam2);
case 15:
return func_425(iVar2, func_422(iParam1), bParam2);
case 53:
return func_425(iVar2, func_422(iParam1), bParam2);
case 41:
return func_425(iVar2, func_422(iParam1), bParam2);
case 92:
return func_425(iVar2, func_422(iParam1), bParam2);
case 44:
return func_425(iVar2, func_422(iParam1), bParam2);
case 43:
return func_425(iVar2, func_422(iParam1), bParam2);
case 2:
return func_425(iVar2, func_422(iParam1), bParam2);
case 85:
return func_425(iVar2, func_422(iParam1), bParam2);
case 14:
return func_425(iVar2, func_422(iParam1), bParam2);
case 79:
return func_425(iVar2, func_422(iParam1), bParam2);
case 24:
return func_425(iVar2, func_422(iParam1), bParam2);
case 16:
return func_425(iVar2, func_422(iParam1), bParam2);
case 6:
return func_425(iVar2, func_422(iParam1), bParam2);
case 86:
return func_425(iVar2, func_422(iParam1), bParam2);
case 47:
return func_425(iVar2, func_422(iParam1), bParam2);
case 73:
return func_425(iVar2, func_422(iParam1), bParam2);
case 61:
return func_425(iVar2, func_422(iParam1), bParam2);
case 67:
return func_425(iVar2, func_422(iParam1), bParam2);
case 74:
return func_425(iVar2, func_422(iParam1), bParam2);
case 75:
return func_425(iVar2, func_422(iParam1), bParam2);
case 87:
return func_425(iVar2, func_422(iParam1), bParam2);
case 17:
return func_425(iVar2, func_422(iParam1), bParam2);
case 59:
return func_425(iVar2, func_422(iParam1), bParam2);
case 64:
return func_425(iVar2, func_422(iParam1), bParam2);
case 68:
return func_425(iVar2, func_422(iParam1), bParam2);
case 52:
return func_425(iVar2, func_422(iParam1), bParam2);
case 39:
return func_425(iVar2, func_422(iParam1), bParam2);
case 34:
return func_425(iVar2, func_422(iParam1), bParam2);
case 30:
return func_425(iVar2, func_422(iParam1), bParam2);
case 10:
return func_425(iVar2, func_422(iParam1), bParam2);
case 27:
return func_425(iVar2, func_422(iParam1), bParam2);
case 1:
return func_425(iVar2, func_422(iParam1), bParam2);
case 76:
return func_425(iVar2, func_422(iParam1), bParam2);
case 88:
return func_425(iVar2, func_422(iParam1), bParam2);
case 32:
return func_425(iVar2, func_422(iParam1), bParam2);
case 55:
return func_425(iVar2, func_422(iParam1), bParam2);
case 45:
return func_425(iVar2, func_422(iParam1), bParam2);
case 18:
return func_425(iVar2, func_422(iParam1), bParam2);
case 35:
return func_425(iVar2, func_422(iParam1), bParam2);
case 36:
return func_425(iVar2, func_422(iParam1), bParam2);
case 37:
return func_425(iVar2, func_422(iParam1), bParam2);
case 29:
return func_425(iVar2, func_422(iParam1), bParam2);
case 46:
return func_425(iVar2, func_422(iParam1), bParam2);
case 65:
return func_425(iVar2, func_422(iParam1), bParam2);
case 80:
return func_425(iVar2, func_422(iParam1), bParam2);
case 42:
return func_425(iVar2, func_422(iParam1), bParam2);
case 77:
return func_425(iVar2, func_422(iParam1), bParam2);
case 40:
return func_425(iVar2, func_422(iParam1), bParam2);
case 93:
return func_425(iVar2, func_422(iParam1), bParam2);
case 0:
return func_425(iVar2, func_422(iParam1), bParam2);
case 103:
return func_425(iVar2, func_422(iParam1), bParam2);
case 104:
return func_425(iVar2, func_422(iParam1), bParam2);
case 105:
return func_425(iVar2, func_422(iParam1), bParam2);
case 106:
return func_425(iVar2, func_422(iParam1), bParam2);
case 107:
return func_425(iVar2, func_422(iParam1), bParam2);
case 108:
return func_425(iVar2, func_422(iParam1), bParam2);
case 128:
return func_425(iVar2, func_422(iParam1), bParam2);
case 129:
return func_425(iVar2, func_422(iParam1), bParam2);
case 130:
return func_425(iVar2, func_422(iParam1), bParam2);
case 131:
return func_425(iVar2, func_422(iParam1), bParam2);
case 132:
return func_425(iVar2, func_422(iParam1), bParam2);
case 133:
return func_425(iVar2, func_422(iParam1), bParam2);
case 134:
return func_425(iVar2, func_422(iParam1), bParam2);
case 258:
return func_425(iVar2, func_422(iParam1), bParam2);
case 259:
return func_425(iVar2, func_422(iParam1), bParam2);
case 260:
return func_425(iVar2, func_422(iParam1), bParam2);
case 261:
return func_425(iVar2, func_422(iParam1), bParam2);
case 262:
return func_425(iVar2, func_422(iParam1), bParam2);
case 263:
if(!bParam2){
return func_425(iVar2, Global_262145.f_16576, 0);
}else{
return func_425(iVar2, Global_262145.f_16577, 1);
}
break;
case 264:
return func_425(iVar2, func_422(iParam1), bParam2);
case 265:
return func_425(iVar2, func_422(iParam1), bParam2);
case 266:
return func_425(iVar2, func_422(iParam1), bParam2);
case 135:
if(!bParam2){
return func_425(iVar2, Global_262145.f_7037, bParam2);
}elseif(Global_262145.f_14736){
return func_425(func_254(iParam1, -1), Global_262145.f_15031, bParam2);
}else{
return -1;
}
break;
case 136:
return func_425(iVar2, func_422(iParam1), bParam2);
case 137:
return func_425(iVar2, func_422(iParam1), bParam2);
case 138:
return func_425(iVar2, func_422(iParam1), bParam2);
case 139:
return func_425(iVar2, func_422(iParam1), bParam2);
case 140:
return func_425(iVar2, func_422(iParam1), bParam2);
case 141:
return func_425(iVar2, func_422(iParam1), bParam2);
case 142:
return func_425(iVar2, func_422(iParam1), bParam2);
case 122:
return func_425(iVar2, func_422(iParam1), bParam2);
case 123:
return func_425(iVar2, func_422(iParam1), bParam2);
case 124:
return func_425(iVar2, func_422(iParam1), bParam2);
case 125:
return func_425(iVar2, func_422(iParam1), bParam2);
case 126:
return func_425(iVar2, func_422(iParam1), bParam2);
case 127:
return func_425(iVar2, func_422(iParam1), bParam2);
case 150:
return func_425(iVar2, func_422(iParam1), bParam2);
case 151:
return func_425(iVar2, func_422(iParam1), bParam2);
case 152:
return func_425(iVar2, func_422(iParam1), bParam2);
case 153:
return func_425(iVar2, func_422(iParam1), bParam2);
case 154:
return func_425(iVar2, func_422(iParam1), bParam2);
case 155:
return func_425(iVar2, func_422(iParam1), bParam2);
case 156:
return func_425(iVar2, func_422(iParam1), bParam2);
case 157:
return func_425(iVar2, func_422(iParam1), bParam2);
case 158:
return func_425(iVar2, func_422(iParam1), bParam2);
case 159:
return func_425(iVar2, func_422(iParam1), bParam2);
}
switch (iParam1){
case 267:
if(Global_262145.f_17305){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 268:
if(Global_262145.f_17306){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 269:
if(Global_262145.f_17307){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 270:
if(Global_262145.f_17308){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 271:
if(Global_262145.f_17309){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 272:
if(Global_262145.f_17310){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 273:
if(Global_262145.f_17311){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 274:
if(Global_262145.f_17312){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 275:
if(Global_262145.f_17313){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 279:
if(Global_262145.f_17303){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 280:
if(Global_262145.f_17314){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 281:
if(Global_262145.f_17302){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 276:
if(Global_262145.f_17316){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 277:
if(Global_262145.f_17304){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 278:
if(Global_262145.f_17315){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 282:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 283:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 284:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 285:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 286:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 287:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 288:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 289:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 290:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 291:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 292:
if(Global_262145.f_17483 || func_410(24)){
if(Global_262145.f_17554==0){
return func_425(iVar2, func_422(iParam1), bParam2);
}elseif(Global_262145.f_17554==-1){
return -1;
}else{
iVar4=func_240(3970, -1, 0);
if(iVar4 >=Global_262145.f_17554){
return func_425(iVar2, func_422(iParam1), bParam2);
}
return -1;
}}else{
return -1;
}
break;
case 293:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 294:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 295:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 296:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 297:
if(iVar0 || func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 298:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 299:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 300:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 301:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 302:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 303:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 304:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 305:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 306:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 307:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 308:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 309:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 310:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 311:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 312:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 313:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 314:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 315:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 316:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 317:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 318:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 319:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 320:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 321:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 322:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 325:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 326:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 327:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 328:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 329:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 330:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 331:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 332:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 333:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 334:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 335:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 336:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 337:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 338:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 339:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 340:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 341:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 342:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 343:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 344:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 345:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 346:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 347:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 348:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 349:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 350:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 351:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 352:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 353:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 354:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 355:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 356:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 358:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 359:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 360:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 361:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 362:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 363:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 364:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 365:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 366:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 367:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 368:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 369:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 370:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 371:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 372:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 373:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 374:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 375:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 376:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 377:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 378:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 379:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 380:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 381:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 382:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 383:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 384:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 385:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 386:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 387:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 388:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 389:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 390:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 391:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 392:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 393:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 394:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 395:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 396:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 397:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 398:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 399:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 400:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 401:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 403:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 404:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 405:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 406:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 407:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 408:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 409:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 410:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 411:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 412:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 415:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 416:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 417:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 418:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 419:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 420:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 421:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 422:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 423:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 424:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 413:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 414:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 425:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 426:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 427:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 428:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 429:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 430:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 431:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 432:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 433:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 434:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 435:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 436:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 437:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 438:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 439:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 440:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 458:
if(func_416(iParam0, iVar2)){
if(func_235(22063, -1) >=20){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}}else{
return -1;
}
break;
case 441:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 442:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 443:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 444:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 445:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 446:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 447:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 448:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 449:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, -1, bParam2);
}else{
return -1;
}
break;
}
switch (iParam1){
case 459:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 460:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 461:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 462:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 463:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 464:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 465:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 466:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 467:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 468:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 469:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 470:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 471:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 472:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 473:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 474:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 475:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 476:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 477:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 478:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 479:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 480:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 481:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 482:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 483:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 484:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 485:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 488:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 486:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 487:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 489:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 490:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 491:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 492:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 493:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 494:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 495:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 496:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 497:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 498:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 499:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 500:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 501:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 502:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 503:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 504:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 505:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
case 506:
case 507:
case 508:
case 509:
case 510:
case 511:
case 512:
case 513:
case 514:
case 515:
case 517:
case 516:
case 519:
case 520:
case 521:
case 522:
case 523:
case 524:
case 525:
case 526:
case 527:
case 528:
case 529:
case 530:
case 531:
case 532:
case 533:
case 534:
case 535:
case 543:
case 537:
case 540:
case 542:
case 538:
case 548:
case 550:
case 551:
case 536:
case 541:
case 539:
case 546:
case 545:
case 544:
case 547:
case 549:
case 552:
case 554:
case 555:
case 556:
case 557:
case 558:
case 559:
case 560:
case 561:
case 562:
case 563:
case 564:
case 565:
case 566:
case 567:
case 568:
case 569:
case 570:
case 571:
case 572:
case 573:
case 574:
case 575:
case 576:
case 577:
case 578:
case 579:
case 580:
case 581:
case 582:
case 583:
case 584:
case 585:
case 586:
case 587:
case 588:
case 589:
case 590:
case 591:
case 592:
case 593:
case 594:
case 595:
case 596:
case 597:
case 598:
case 450:
if(func_416(iParam0, iVar2)){
return func_425(iVar2, func_422(iParam1), bParam2);
}else{
return -1;
}
break;
}
iVar5=func_425(iVar2, -1, bParam2);
if(iVar5 !=-1){
return uVar3;
}
return -1;
}

int func_410(int iParam0){
var uVar0;
int iVar1;
if(func_415()){
return 0;
}
uVar0=func_411(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_337(iVar1));
}


var func__411(var uParam0){
var uVar0;
uVar0=func_240(func_412(uParam0), -1, 0);
return uVar0;
}

int func_412(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_340(iVar0);
if((func_414()==0 || func_413()==0) || (func_414()==999 && func_413()==999)){
switch (iVar1){
case 0:
return 739;
break;
case 1:
return 740;
break;
}}
return 14192;
}

int func_413(){
return Global_32164;
}

int func_414(){
return Global_32163;
}


bool func_415(){
return Global_1575039;
}

int func_416(int iParam0, int iParam1){
switch (iParam1){
case joaat("le7b"):
if(!Global_262145.f_17305){
return 0;
}
break;
case joaat("omnis"):
if(!Global_262145.f_17306){
return 0;
}
break;
case joaat("tropos"):
if(!Global_262145.f_17307){
return 0;
}
break;
case joaat("brioso"):
if(!Global_262145.f_17308){
return 0;
}
break;
case joaat("trophytruck"):
if(!Global_262145.f_17309){
return 0;
}
break;
case joaat("trophytruck2"):
if(!Global_262145.f_17310){
return 0;
}
break;
case joaat("contender"):
if(!Global_262145.f_17311){
return 0;
}
break;
case joaat("cliffhanger"):
if(!Global_262145.f_17312){
return 0;
}
break;
case joaat("bf400"):
if(!Global_262145.f_17313){
return 0;
}
break;
case joaat("tyrus"):
if(!Global_262145.f_17303){
return 0;
}
break;
case joaat("lynx"):
if(!Global_262145.f_17314){
return 0;
}
break;
case joaat("sheava"):
if(!Global_262145.f_17302){
return 0;
}
break;
case joaat("rallytruck"):
if(!Global_262145.f_17316){
return 0;
}
break;
case joaat("tampa2"):
if(!Global_262145.f_17304){
return 0;
}
break;
case joaat("gargoyle"):
if(!Global_262145.f_17315){
return 0;
}
break;
case joaat("stalion2"):
if(!(func_424() || Global_262145.f_20222)){
if(!Global_262145.f_17317){
return 0;
}}
break;
case joaat("dominator2"):
if(!(func_424() || Global_262145.f_20222)){
if(!Global_262145.f_17319){
return 0;
}}
break;
case joaat("gauntlet2"):
if(!(func_424() || Global_262145.f_20222)){
if(!Global_262145.f_17318){
return 0;
}}
break;
case joaat("buffalo3"):
if(!(func_424() || Global_262145.f_20222)){
if(!Global_262145.f_17320){
return 0;
}}
break;
case joaat("esskey"):
if(!Global_262145.f_17477){
return 0;
}
break;
case joaat("nightblade"):
if(!Global_262145.f_17475){
return 0;
}
break;
case joaat("defiler"):
if(!Global_262145.f_17474){
return 0;
}
break;
case joaat("avarus"):
if(!Global_262145.f_17478){
return 0;
}
break;
case joaat("zombiea"):
if(!Global_262145.f_17476){
return 0;
}
break;
case joaat("zombieb"):
if(!Global_262145.f_17479){
return 0;
}
break;
case joaat("chimera"):
if(!Global_262145.f_17484){
return 0;
}
break;
case joaat("daemon2"):
if(!Global_262145.f_17486){
return 0;
}
break;
case joaat("ratbike"):
if(!Global_262145.f_17495){
return 0;
}
break;
case joaat("shotaro"):
if(!Global_262145.f_17483){
return 0;
}
break;
case joaat("raptor"):
if(!Global_262145.f_17485){
return 0;
}
break;
case joaat("hakuchou2"):
if(!Global_262145.f_17481){
return 0;
}
break;
case joaat("blazer4"):
if(!Global_262145.f_17487){
return 0;
}
break;
case joaat("sanctus"):
if(!Global_262145.f_17488 && !func_222(124, -1)){
return 0;
}
break;
case joaat("vortex"):
if(!Global_262145.f_17482){
return 0;
}
break;
case joaat("manchez"):
if(!Global_262145.f_17489){
return 0;
}
break;
case joaat("tornado6"):
if(!Global_262145.f_17493){
return 0;
}
break;
case joaat("youga2"):
if(!Global_262145.f_17490){
return 0;
}
break;
case joaat("wolfsbane"):
if(!Global_262145.f_17491){
return 0;
}
break;
case joaat("faggio3"):
if(!Global_262145.f_17492){
return 0;
}
break;
case joaat("faggio"):
if(!Global_262145.f_17480){
return 0;
}
break;
case joaat("voltic2"):
if(!Global_262145.f_19131){
return 0;
}
break;
case joaat("ruiner2"):
if(!Global_262145.f_19132){
return 0;
}
break;
case joaat("dune4"):
if(!Global_262145.f_19133){
return 0;
}
break;
case joaat("dune5"):
if(!Global_262145.f_19134){
return 0;
}
break;
case joaat("phantom2"):
if(!Global_262145.f_19135){
return 0;
}
break;
case joaat("technical2"):
if(!Global_262145.f_19136){
return 0;
}
break;
case joaat("boxville5"):
if(!Global_262145.f_19137){
return 0;
}
break;
case joaat("wastelander"):
if(!Global_262145.f_19138){
return 0;
}
break;
case joaat("blazer5"):
if(!Global_262145.f_19139){
return 0;
}
break;
case joaat("comet2"):
if(iParam0==26 && !Global_262145.f_19140){
return 0;
}
break;
case joaat("comet3"):
if(!Global_262145.f_19141){
return 0;
}
break;
case joaat("diablous"):
if(!Global_262145.f_19142){
return 0;
}
break;
case joaat("diablous2"):
if(!Global_262145.f_19143){
return 0;
}
break;
case joaat("elegy"):
if(!Global_262145.f_19144){
return 0;
}
break;
case joaat("elegy2"):
if(!Global_262145.f_19145){
return 0;
}
break;
case joaat("fcr"):
if(!Global_262145.f_19146){
return 0;
}
break;
case joaat("fcr2"):
if(!Global_262145.f_19147){
return 0;
}
break;
case joaat("italigtb"):
if(!Global_262145.f_19148){
return 0;
}
break;
case joaat("italigtb2"):
if(!Global_262145.f_19149){
return 0;
}
break;
case joaat("nero"):
if(!Global_262145.f_19150){
return 0;
}
break;
case joaat("nero2"):
if(!Global_262145.f_19151){
return 0;
}
break;
case joaat("penetrator"):
if(!Global_262145.f_19152){
return 0;
}
break;
case joaat("specter"):
if(!Global_262145.f_19153){
return 0;
}
break;
case joaat("specter2"):
if(!Global_262145.f_19154){
return 0;
}
break;
case joaat("tempesta"):
if(!Global_262145.f_19155){
return 0;
}
break;
case joaat("xa21"):
if(!Global_262145.f_21094){
return 0;
}
break;
case joaat("cheetah2"):
if(!Global_262145.f_21095){
return 0;
}
break;
case joaat("torero"):
if(!Global_262145.f_21096){
return 0;
}
break;
case joaat("vagner"):
if(!Global_262145.f_21097){
return 0;
}
break;
case joaat("ardent"):
if(!Global_262145.f_21098){
return 0;
}
break;
case joaat("nightshark"):
if(!Global_262145.f_21099){
return 0;
}
break;
case joaat("microlight"):
if(!Global_262145.f_21893){
return 0;
}
break;
case joaat("seabreeze"):
if(!Global_262145.f_21894){
return 0;
}
break;
case joaat("howard"):
if(!Global_262145.f_21895){
return 0;
}
break;
case joaat("rogue"):
if(!Global_262145.f_21896){
return 0;
}
break;
case joaat("alphaz1"):
if(!Global_262145.f_21897){
return 0;
}
break;
case joaat("havok"):
if(!Global_262145.f_21903){
return 0;
}
break;
case joaat("nokota"):
if(!Global_262145.f_21904){
return 0;
}
break;
case joaat("mogul"):
if(!Global_262145.f_21905){
return 0;
}
break;
case joaat("starling"):
if(!Global_262145.f_21906){
return 0;
}
break;
case joaat("hunter"):
if(!Global_262145.f_21907){
return 0;
}
break;
case joaat("pyro"):
if(!Global_262145.f_21908){
return 0;
}
break;
case joaat("molotok"):
if(!Global_262145.f_21909){
return 0;
}
break;
case joaat("tula"):
if(!Global_262145.f_21910){
return 0;
}
break;
case joaat("bombushka"):
if(!Global_262145.f_21911){
return 0;
}
break;
case joaat("lazer"):
if(!Global_262145.f_21912){
return 0;
}
break;
case joaat("cyclone"):
if(!Global_262145.f_21898){
return 0;
}
break;
case joaat("visione"):
if(!Global_262145.f_21899){
return 0;
}
break;
case joaat("retinue"):
if(!Global_262145.f_21901){
return 0;
}
break;
case joaat("rapidgt3"):
if(!Global_262145.f_21902){
return 0;
}
break;
case joaat("vigilante"):
if(!Global_262145.f_21900){
return 0;
}
break;
case joaat("deluxo"):
if(!Global_262145.f_22861){
return 0;
}
break;
case joaat("stromberg"):
if(!Global_262145.f_22862){
return 0;
}
break;
case joaat("riot2"):
if(!Global_262145.f_22863){
return 0;
}
break;
case joaat("chernobog"):
if(!Global_262145.f_22864){
return 0;
}
break;
case joaat("khanjali"):
if(!Global_262145.f_22865){
return 0;
}
break;
case joaat("akula"):
if(!Global_262145.f_22866){
return 0;
}
break;
case joaat("thruster"):
if(!Global_262145.f_22867){
return 0;
}
break;
case joaat("barrage"):
if(!Global_262145.f_22868){
return 0;
}
break;
case joaat("volatol"):
if(!Global_262145.f_22869){
return 0;
}
break;
case joaat("comet4"):
if(!Global_262145.f_22870){
return 0;
}
break;
case joaat("neon"):
if(!Global_262145.f_22871){
return 0;
}
break;
case joaat("streiter"):
if(!Global_262145.f_22872){
return 0;
}
break;
case joaat("sentinel3"):
if(!Global_262145.f_22873){
return 0;
}
break;
case joaat("yosemite"):
if(!Global_262145.f_22874){
return 0;
}
break;
case joaat("sc1"):
if(!Global_262145.f_22875){
return 0;
}
break;
case joaat("autarch"):
if(!Global_262145.f_22876){
return 0;
}
break;
case joaat("gt500"):
if(!Global_262145.f_22877){
return 0;
}
break;
case joaat("hustler"):
if(!Global_262145.f_22878){
return 0;
}
break;
case joaat("revolter"):
if(!Global_262145.f_22879){
return 0;
}
break;
case joaat("pariah"):
if(!Global_262145.f_22880){
return 0;
}
break;
case joaat("raiden"):
if(!Global_262145.f_22881){
return 0;
}
break;
case joaat("savestra"):
if(!Global_262145.f_22882){
return 0;
}
break;
case joaat("riata"):
if(!Global_262145.f_22883){
return 0;
}
break;
case joaat("hermes"):
if(!Global_262145.f_22884){
return 0;
}
break;
case joaat("comet5"):
if(!Global_262145.f_22885){
return 0;
}
break;
case joaat("z190"):
if(!Global_262145.f_22886){
return 0;
}
break;
case joaat("viseris"):
if(!Global_262145.f_22887){
return 0;
}
break;
case joaat("kamacho"):
if(!Global_262145.f_22888){
return 0;
}
break;
case joaat("gb200"):
if(!Global_262145.f_24081){
return 0;
}
break;
case joaat("fagaloa"):
if(!Global_262145.f_24082){
return 0;
}
break;
case joaat("ellie"):
if(!Global_262145.f_24086){
return 0;
}
break;
case joaat("issi3"):
if(!Global_262145.f_24089){
return 0;
}
break;
case joaat("michelli"):
if(!Global_262145.f_24094){
return 0;
}
break;
case joaat("flashgt"):
if(!Global_262145.f_24088){
return 0;
}
break;
case joaat("hotring"):
if(!Global_262145.f_24080){
return 0;
}
break;
case joaat("tezeract"):
if(!Global_262145.f_24087){
return 0;
}
break;
case joaat("tyrant"):
if(!Global_262145.f_24093){
return 0;
}
break;
case joaat("dominator3"):
if(!Global_262145.f_24092){
return 0;
}
break;
case joaat("taipan"):
if(!Global_262145.f_24083){
return 0;
}
break;
case joaat("entity2"):
if(!Global_262145.f_24085){
return 0;
}
break;
case joaat("jester3"):
if(!Global_262145.f_24095){
return 0;
}
break;
case joaat("cheburek"):
if(!Global_262145.f_24091){
return 0;
}
break;
case joaat("caracara"):
if(!Global_262145.f_24084){
return 0;
}
break;
case joaat("seasparrow"):
if(!Global_262145.f_24090){
return 0;
}
break;
case joaat("mule4"):
if(!Global_262145.f_24177){
return 0;
}
break;
case joaat("pounder2"):
if(!Global_262145.f_24176){
return 0;
}
break;
case joaat("swinger"):
if(!Global_262145.f_24174){
return 0;
}
break;
case joaat("menacer"):
if(!Global_262145.f_24180){
return 0;
}
break;
case joaat("scramjet"):
if(!Global_262145.f_24182){
return 0;
}
break;
case joaat("strikeforce"):
if(!Global_262145.f_24183){
return 0;
}
break;
case joaat("oppressor2"):
if(!Global_262145.f_24181){
return 0;
}
break;
case joaat("patriot2"):
if(!Global_262145.f_24173){
return 0;
}
break;
case joaat("stafford"):
if(!Global_262145.f_24175){
return 0;
}
break;
case joaat("freecrawler"):
if(!Global_262145.f_24179){
return 0;
}
break;
case joaat("blimp3"):
if(!Global_262145.f_24178){
return 0;
}
break;
case joaat("terbyte"):
if(!Global_262145.f_24171){
return 0;
}
break;
case joaat("pbus2"):
if(!Global_262145.f_24172){
return 0;
}
break;
case joaat("futo"):
if(!Global_262145.f_24184){
return 0;
}
break;
case joaat("ruiner"):
if(!Global_262145.f_24185){
return 0;
}
break;
case joaat("romero"):
if(!Global_262145.f_24186){
return 0;
}
break;
case joaat("prairie"):
if(!Global_262145.f_24187){
return 0;
}
break;
case joaat("baller"):
if(!Global_262145.f_24188){
return 0;
}
break;
case joaat("serrano"):
if(!Global_262145.f_24189){
return 0;
}
break;
case joaat("bjxl"):
if(!Global_262145.f_24190){
return 0;
}
break;
case joaat("habanero"):
if(!Global_262145.f_24193){
return 0;
}
break;
case joaat("fq2"):
if(!Global_262145.f_24191){
return 0;
}
break;
case joaat("patriot"):
if(!Global_262145.f_24192){
return 0;
}
break;
case joaat("monster3"):
break;
case joaat("cerberus"):
break;
case joaat("cerberus2"):
break;
case joaat("cerberus3"):
break;
case joaat("brutus"):
break;
case joaat("brutus2"):
break;
case joaat("brutus3"):
break;
case joaat("scarab"):
break;
case joaat("scarab2"):
break;
case joaat("scarab3"):
break;
case joaat("imperator"):
break;
case joaat("imperator2"):
break;
case joaat("imperator3"):
break;
case joaat("zr380"):
break;
case joaat("zr3802"):
break;
case joaat("zr3803"):
break;
case joaat("impaler"):
break;
case joaat("toros"):
if(!Global_262145.f_25781){
return 0;
}
break;
case joaat("clique"):
if(!Global_262145.f_25782){
return 0;
}
break;
case joaat("italigto"):
if(!Global_262145.f_25783){
return 0;
}
break;
case joaat("deviant"):
if(!Global_262145.f_25784){
return 0;
}
break;
case joaat("deveste"):
if(!Global_262145.f_26768){
return 0;
}
break;
case joaat("vamos"):
if(!Global_262145.f_26769){
return 0;
}
break;
case joaat("tulip"):
if(!Global_262145.f_25785){
return 0;
}
break;
case joaat("schlagen"):
if(!Global_262145.f_25786){
return 0;
}
break;
case joaat("rcbandito"):
if(!Global_262145.f_25787){
return 0;
}
break;
case joaat("blista3"):
if(Global_262145.f_26628){
return 0;
}
break;
}
switch (iParam1){
case joaat("thrax"):
if(!Global_262145.f_25792){
return 0;
}
break;
case joaat("drafter"):
if(!Global_262145.f_25793){
return 0;
}
break;
case joaat("locust"):
if(!Global_262145.f_25794){
return 0;
}
break;
case joaat("novak"):
if(!Global_262145.f_25795){
return 0;
}
break;
case joaat("zorrusso"):
if(!Global_262145.f_25796){
return 0;
}
break;
case joaat("gauntlet3"):
if(!Global_262145.f_25797){
return 0;
}
break;
case joaat("issi7"):
if(!Global_262145.f_25798){
return 0;
}
break;
case joaat("zion3"):
if(!Global_262145.f_25799){
return 0;
}
break;
case joaat("nebula"):
if(!Global_262145.f_25800){
return 0;
}
break;
case joaat("hellion"):
if(!Global_262145.f_25801){
return 0;
}
break;
case joaat("dynasty"):
if(!Global_262145.f_25802){
return 0;
}
break;
case joaat("rrocket"):
if(!Global_262145.f_25803){
return 0;
}
break;
case joaat("peyote2"):
if(!Global_262145.f_25804){
return 0;
}
break;
case joaat("gauntlet4"):
if(!Global_262145.f_25805){
return 0;
}
break;
case joaat("caracara2"):
if(!Global_262145.f_25806){
return 0;
}
break;
case joaat("jugular"):
if(!Global_262145.f_25807){
return 0;
}
break;
case joaat("s80"):
if(!Global_262145.f_25808){
return 0;
}
break;
case joaat("krieger"):
if(!Global_262145.f_25809){
return 0;
}
break;
case joaat("emerus"):
if(!Global_262145.f_25810){
return 0;
}
break;
case joaat("neo"):
if(!Global_262145.f_25811){
return 0;
}
break;
case joaat("paragon"):
if(!Global_262145.f_25812){
return 0;
}
break;
case joaat("asbo"):
if(!Global_262145.f_28613){
return 0;
}
break;
case joaat("kanjo"):
if(!Global_262145.f_28614){
return 0;
}
break;
case joaat("everon"):
if(!Global_262145.f_28615){
return 0;
}
break;
case joaat("retinue2"):
if(!Global_262145.f_28616){
return 0;
}
break;
case joaat("yosemite2"):
if(!Global_262145.f_28617){
return 0;
}
break;
case joaat("sugoi"):
if(!Global_262145.f_28618){
return 0;
}
break;
case joaat("sultan2"):
if(!Global_262145.f_28619){
return 0;
}
break;
case joaat("outlaw"):
if(!Global_262145.f_28620){
return 0;
}
break;
case joaat("vagrant"):
if(!Global_262145.f_28621){
return 0;
}
break;
case joaat("komoda"):
if(!Global_262145.f_28622){
return 0;
}
break;
case joaat("stryder"):
if(!Global_262145.f_28623){
return 0;
}
break;
case joaat("furia"):
if(!Global_262145.f_28624){
return 0;
}
break;
case joaat("zhaba"):
if(!Global_262145.f_28625){
return 0;
}
break;
case joaat("jb7002"):
if(!Global_262145.f_28626){
return 0;
}
break;
case joaat("firetruk"):
if(!Global_262145.f_28627){
return 0;
}
break;
case joaat("burrito2"):
if(!Global_262145.f_28628){
return 0;
}
break;
case joaat("boxville"):
if(!Global_262145.f_28629){
return 0;
}
break;
case joaat("stockade"):
if(!Global_262145.f_28630){
return 0;
}
break;
case joaat("minitank"):
if(!Global_262145.f_28631){
return 0;
}
break;
case joaat("lguard"):
if(!Global_262145.f_28632){
return 0;
}
break;
case joaat("blazer2"):
if(!Global_262145.f_28633){
return 0;
}
break;
case joaat("formula"):
if(!Global_262145.f_28656){
return 0;
}
break;
case joaat("formula2"):
if(!Global_262145.f_28659){
return 0;
}
break;
case joaat("imorgon"):
if(!Global_262145.f_28664){
return 0;
}
break;
case joaat("rebla"):
if(!Global_262145.f_28665){
return 0;
}
break;
case joaat("vstr"):
if(!Global_262145.f_28666){
return 0;
}
break;
case joaat("gauntlet5"):
if(!Global_262145.f_29682){
return 0;
}
break;
case joaat("club"):
if(!Global_262145.f_29333){
return 0;
}
break;
case joaat("dukes3"):
if(!Global_262145.f_29334){
return 0;
}
break;
case joaat("yosemite3"):
if(!Global_262145.f_29680){
return 0;
}
break;
case joaat("peyote3"):
if(!Global_262145.f_29681){
return 0;
}
break;
case joaat("glendale2"):
if(!Global_262145.f_29327){
return 0;
}
break;
case joaat("penumbra2"):
if(!Global_262145.f_29328){
return 0;
}
break;
case joaat("landstalker2"):
if(!Global_262145.f_29329){
return 0;
}
break;
case joaat("seminole2"):
if(!Global_262145.f_29330){
return 0;
}
break;
case joaat("tigon"):
if(!Global_262145.f_29676){
return 0;
}
break;
case joaat("openwheel1"):
if(!Global_262145.f_29677){
return 0;
}
break;
case joaat("openwheel2"):
if(!Global_262145.f_29678){
return 0;
}
break;
case joaat("coquette4"):
if(!Global_262145.f_29679){
return 0;
}
break;
case joaat("manana2"):
if(!Global_262145.f_29331){
return 0;
}
break;
case joaat("youga3"):
if(!Global_262145.f_29332){
return 0;
}
break;
case joaat("toreador"):
if(!Global_262145.f_30141){
return 0;
}
break;
case joaat("annihilator2"):
if(!Global_262145.f_30142){
return 0;
}
break;
case joaat("alkonost"):
if(!Global_262145.f_30143){
return 0;
}
break;
case joaat("patrolboat"):
if(!Global_262145.f_30144){
return 0;
}
break;
case joaat("longfin"):
if(!Global_262145.f_30145){
return 0;
}
break;
case joaat("winky"):
if(!Global_262145.f_30146){
return 0;
}
break;
case joaat("veto"):
if(!Global_262145.f_30147){
return 0;
}
break;
case joaat("veto2"):
if(!Global_262145.f_30148){
return 0;
}
break;
case joaat("italirsx"):
if(!Global_262145.f_30149){
return 0;
}
break;
case joaat("weevil"):
if(!Global_262145.f_30150){
return 0;
}
break;
case joaat("manchez2"):
if(!Global_262145.f_30151){
return 0;
}
break;
case joaat("slamtruck"):
if(!Global_262145.f_30152){
return 0;
}
break;
case joaat("vetir"):
if(!Global_262145.f_30153){
return 0;
}
break;
case joaat("squaddie"):
if(!Global_262145.f_30154){
return 0;
}
break;
case joaat("brioso2"):
if(!Global_262145.f_30155){
return 0;
}
break;
case joaat("dinghy5"):
if(!Global_262145.f_30156){
return 0;
}
break;
case joaat("verus"):
if(!Global_262145.f_30157){
return 0;
}
break;
case joaat("baller7"):
if(!Global_262145.f_31903){
return 0;
}
break;
case joaat("shinobi"):
if(!Global_262145.f_31902){
return 0;
}
break;
case joaat("patriot3"):
if(!Global_262145.f_31901){
return 0;
}
break;
case joaat("granger2"):
if(!Global_262145.f_31900){
return 0;
}
break;
case joaat("iwagen"):
if(!Global_262145.f_31899){
return 0;
}
break;
case joaat("reever"):
if(!Global_262145.f_31898){
return 0;
}
break;
case joaat("zeno"):
if(!Global_262145.f_31897){
return 0;
}
break;
case joaat("comet7"):
if(!Global_262145.f_31896){
return 0;
}
break;
case joaat("astron"):
if(!Global_262145.f_31895){
return 0;
}
break;
case joaat("cinquemila"):
if(!Global_262145.f_31894){
return 0;
}
break;
case joaat("ignus"):
if(!Global_262145.f_31893){
return 0;
}
break;
case joaat("jubilee"):
if(!Global_262145.f_31892){
return 0;
}
break;
case joaat("deity"):
if(!Global_262145.f_31891){
return 0;
}
break;
case joaat("buffalo4"):
if(!Global_262145.f_31890){
return 0;
}
break;
case joaat("champion"):
if(!Global_262145.f_31889){
return 0;
}
break;
case joaat("omnisegt"):
if(!Global_262145.f_33122){
return 0;
}
break;
case joaat("greenwood"):
if(!Global_262145.f_33123){
return 0;
}
break;
case joaat("torero2"):
if(!Global_262145.f_33124){
return 0;
}
break;
case joaat("corsita"):
if(!Global_262145.f_33125){
return 0;
}
break;
case joaat("lm87"):
if(!Global_262145.f_33126){
return 0;
}
break;
case joaat("conada"):
if(!Global_262145.f_33127){
return 0;
}
break;
case joaat("sm722"):
if(!Global_262145.f_33128){
return 0;
}
break;
case joaat("draugur"):
if(!Global_262145.f_33129){
return 0;
}
break;
case joaat("ruiner4"):
if(!Global_262145.f_33130){
return 0;
}
break;
case joaat("brioso3"):
if(!Global_262145.f_33131){
return 0;
}
break;
case joaat("vigero2"):
if(!Global_262145.f_33132){
return 0;
}
break;
case joaat("kanjosj"):
if(!Global_262145.f_33134){
return 0;
}
break;
case joaat("postlude"):
if(!Global_262145.f_33135){
return 0;
}
break;
case joaat("tenf"):
if(!Global_262145.f_33136){
return 0;
}
break;
case joaat("rhinehart"):
if(!Global_262145.f_33137){
return 0;
}
break;
case joaat("weevil2"):
if(!Global_262145.f_33138){
return 0;
}
break;
case joaat("tenf2"):
if(!Global_262145.f_33139){
return 0;
}
break;
case joaat("sentinel4"):
if(!Global_262145.f_33140){
return 0;
}
break;
case joaat("brickade2"):
if(!Global_262145.f_33963){
return 0;
}
break;
case joaat("entity3"):
if(!Global_262145.f_33958){
return 0;
}
break;
case joaat("journey2"):
if(!Global_262145.f_33960){
return 0;
}
break;
case joaat("surfer3"):
if(!Global_262145.f_33961){
return 0;
}
break;
case joaat("r300"):
if(!Global_262145.f_33962){
return 0;
}
break;
case joaat("tahoma"):
if(!Global_262145.f_33965){
return 0;
}
break;
case joaat("powersurge"):
if(!Global_262145.f_33966){
return 0;
}
break;
case joaat("issi8"):
if(!Global_262145.f_33967){
return 0;
}
break;
case joaat("broadway"):
if(!Global_262145.f_33968){
return 0;
}
break;
case joaat("panthere"):
if(!Global_262145.f_33969){
return 0;
}
break;
case joaat("everon2"):
if(!Global_262145.f_33970){
return 0;
}
break;
case joaat("virtue"):
if(!Global_262145.f_33971){
return 0;
}
break;
case joaat("eudora"):
if(!Global_262145.f_33972){
return 0;
}
break;
case joaat("boor"):
if(!Global_262145.f_33973){
return 0;
}
break;
case joaat("taxi"):
if(!Global_262145.f_33964){
return 0;
}
break;
}
return 1;
}

int func_417(){
if(!func_31(joaat("terbyte"), -1)){
return 0;
}
return 1;
}

int func_418(){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_419(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_174409[0 /*24*/].f_17, 0)){
return 1;
}
return 0;
}


bool func_419(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_420(int iParam0){
int iVar0;
var uVar1;
iVar0=func_421(iParam0);
if(iVar0==-1){
return 0;
}
if(FILES::GET_NUM_DLC_VEHICLES() <=0){
return 0;
}
if(FILES::GET_DLC_VEHICLE_DATA(iVar0, &uVar1)){
if(FILES::IS_CONTENT_ITEM_LOCKED(uVar1)){
return 0;
}else{
return 1;
}}
return 0;
}

int func_421(int iParam0){
int iVar0;
int iVar1;
iVar1=func_254(iParam0, -1);
iVar0=0;
while (iVar0 <=(FILES::GET_NUM_DLC_VEHICLES() - 1)){
if(FILES::GET_DLC_VEHICLE_MODEL(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_422(int iParam0){
switch (iParam0){
case 5:
return Global_262145.f_4020;
case 82:
return Global_262145.f_4021;
case 63:
return Global_262145.f_4022;
case 78:
return Global_262145.f_4023;
case 57:
return Global_262145.f_4024;
case 22:
return Global_262145.f_4025;
case 62:
return Global_262145.f_4026;
case 94:
return Global_262145.f_4027;
case 51:
return Global_262145.f_4028;
case 89:
return Global_262145.f_4029;
case 66:
return Global_262145.f_4030;
case 33:
return Global_262145.f_4031;
case 70:
return Global_262145.f_4032;
case 83:
return Global_262145.f_4033;
case 20:
return Global_262145.f_4034;
case 71:
return Global_262145.f_4035;
case 19:
return -1;
case 58:
return Global_262145.f_4037;
case 3:
return Global_262145.f_4038;
case 84:
return Global_262145.f_4039;
case 7:
return Global_262145.f_4040;
case 48:
return Global_262145.f_4041;
case 72:
return Global_262145.f_4042;
case 38:
return Global_262145.f_4043;
case 21:
return Global_262145.f_4044;
case 12:
return Global_262145.f_4045;
case 54:
return Global_262145.f_4046;
case 90:
return Global_262145.f_4047;
case 81:
return Global_262145.f_4048;
case 13:
return Global_262145.f_4049;
case 4:
return Global_262145.f_4051;
case 56:
return Global_262145.f_4052;
case 69:
return Global_262145.f_4053;
case 60:
return Global_262145.f_4054;
case 91:
return Global_262145.f_4111;
case 50:
return Global_262145.f_4055;
case 15:
return Global_262145.f_4056;
case 53:
return Global_262145.f_4057;
case 41:
return Global_262145.f_4058;
case 92:
return Global_262145.f_4059;
case 44:
return Global_262145.f_4061;
case 43:
return Global_262145.f_4062;
case 2:
return Global_262145.f_4063;
case 25:
return Global_262145.f_4064;
case 85:
return Global_262145.f_4065;
case 14:
return Global_262145.f_4067;
case 79:
return Global_262145.f_4068;
case 24:
return Global_262145.f_4069;
case 16:
return Global_262145.f_4070;
case 6:
return Global_262145.f_4071;
case 86:
return Global_262145.f_4072;
case 47:
return Global_262145.f_4073;
case 73:
return Global_262145.f_4074;
case 61:
return Global_262145.f_4075;
case 67:
return Global_262145.f_4076;
case 74:
return Global_262145.f_4077;
case 75:
return Global_262145.f_4078;
case 87:
return Global_262145.f_4079;
case 17:
return Global_262145.f_4080;
case 59:
return Global_262145.f_4081;
case 64:
return Global_262145.f_4082;
case 68:
return Global_262145.f_4083;
case 52:
return Global_262145.f_4084;
case 39:
return Global_262145.f_4085;
case 34:
return Global_262145.f_4086;
case 30:
return Global_262145.f_4087;
case 10:
return Global_262145.f_4088;
case 27:
return Global_262145.f_4089;
case 1:
return Global_262145.f_4090;
case 76:
return Global_262145.f_4091;
case 88:
return Global_262145.f_4092;
case 11:
return Global_262145.f_4093;
case 32:
return Global_262145.f_4094;
case 55:
return Global_262145.f_4095;
case 45:
return Global_262145.f_4096;
case 18:
return Global_262145.f_4097;
case 35:
return Global_262145.f_4098;
case 36:
return Global_262145.f_4099;
case 37:
return Global_262145.f_4100;
case 29:
return Global_262145.f_4101;
case 46:
return Global_262145.f_4102;
case 65:
return Global_262145.f_4103;
case 80:
return Global_262145.f_4104;
case 42:
return Global_262145.f_4105;
case 77:
return Global_262145.f_7630;
case 40:
return Global_262145.f_4107;
case 93:
return Global_262145.f_4108;
case 0:
return Global_262145.f_4109;
case 103:
return Global_262145.f_4741;
case 104:
return Global_262145.f_4742;
case 105:
return Global_262145.f_4743;
case 106:
return Global_262145.f_4744;
case 107:
return Global_262145.f_4745;
case 108:
return Global_262145.f_4746;
case 128:
return Global_262145.f_4110;
case 129:
return Global_262145.f_7031;
case 130:
return Global_262145.f_7032;
case 131:
return Global_262145.f_7033;
case 132:
return Global_262145.f_7034;
case 133:
return Global_262145.f_7035;
case 134:
return Global_262145.f_7036;
case 135:
return Global_262145.f_7037;
case 136:
return Global_262145.f_7038;
case 137:
return Global_262145.f_7039;
case 138:
return Global_262145.f_7040;
case 139:
return Global_262145.f_7060;
case 140:
return Global_262145.f_7041;
case 141:
return Global_262145.f_7042;
case 142:
return Global_262145.f_7043;
case 150:
return Global_262145.f_8114;
case 151:
return Global_262145.f_8117;
case 152:
return Global_262145.f_8118;
case 153:
return Global_262145.f_8120;
case 154:
return Global_262145.f_8111;
case 155:
return Global_262145.f_8116;
case 156:
return Global_262145.f_8115;
case 157:
return Global_262145.f_8112;
case 158:
return Global_262145.f_8113;
case 159:
return Global_262145.f_8119;
default:
}
return -1;
}

int func_423(){
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

int func_424(){
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

int func_425(int iParam0, int iParam1, bool bParam2){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
char* sVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
var uVar11;
StringCopy(&Var0, func_496(iParam0), 16);
iVar1=func_29(iParam0);
if(bParam2){
switch (iVar1){
case 100:
iVar1=170;
break;
case 77:
iVar1=120;
break;
case 1:
iVar1=119;
break;
case 72:
iVar1=117;
break;
case 165:
iVar1=166;
break;
case 49:
iVar1=118;
break;
}}
if(func_495()){
if(func_494(iVar1) && bParam2){
switch (iVar1){
case 233:
iParam0=joaat("baller5");
break;
case 234:
iParam0=joaat("baller6");
break;
case 235:
iParam0=joaat("cog552");
break;
case 236:
iParam0=joaat("cognoscenti2");
break;
case 240:
iParam0=joaat("schafter5");
break;
case 241:
iParam0=joaat("schafter6");
break;
case 263:
iParam0=joaat("xls2");
break;
default:
break;
}
StringCopy(&Var0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
bParam2=false;
}
iVar2=-1;
iVar3=0;
if(bParam2){
iVar3=1;
}
bVar4=false;
if(func_492(iVar1)){
if(func_327()){
bVar4=true;
}}
if(func_491(iVar1)){
iVar2=func_499(iParam0, bParam2, -1, bVar4);
iVar6=func_302(iParam0);
func_489(&sVar5, Var0, iParam0, 4, iVar3, iVar6, -1, -1, 0, bVar4);
}else{
iVar7=-1;
if(iVar1==200){
switch (Global_77262){
case 1:
iVar3=0;
break;
case 2:
iVar3=1;
break;
case 3:
iVar3=2;
break;
case 4:
iVar3=3;
break;
case 5:
iVar3=4;
break;
case 6:
iVar3=5;
break;
case 7:
iVar3=6;
break;
case 8:
iVar3=7;
break;
case 9:
iVar3=8;
break;
case 10:
iVar3=9;
break;
case 11:
}
}