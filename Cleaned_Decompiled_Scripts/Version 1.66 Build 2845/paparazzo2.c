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
struct<3> Local_22={
0, 0, 0 
};
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
struct<4> Local_35[10];
bool bLocal_36=0;
int iLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
var uLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
bool bLocal_43=0;
bool bLocal_44=0;
bool bLocal_45=0;
bool bLocal_46=0;
bool bLocal_47=0;
int iLocal_48=0;
int iLocal_49=0;
bool bLocal_50=0;
bool bLocal_51=0;
int iLocal_52=0;
bool bLocal_53=0;
bool bLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
var uLocal_58=0;
bool bLocal_59=0;
bool bLocal_60=0;
bool bLocal_61=0;
int iLocal_62=0;
bool bLocal_63=0;
var uLocal_64=0;
bool bLocal_65=0;
bool bLocal_66=0;
bool bLocal_67=0;
bool bLocal_68=0;
bool bLocal_69=0;
bool bLocal_70=0;
bool bLocal_71=0;
bool bLocal_72=0;
bool bLocal_73=0;
bool bLocal_74=0;
float fLocal_75[100]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_76[100]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_77[100]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_78[100]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_79[100]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_80=0f;
float fLocal_81=0f;
float fLocal_82=0f;
float fLocal_83=0f;
float fLocal_84[25]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_85[25]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_86[25]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_87[25]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_88[25]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_89[25]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_90[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_91[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_92[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_93[15]={
0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f 
};
float fLocal_94=0f;
float fLocal_95=0f;
float fLocal_96=0f;
float fLocal_97=0f;
float fLocal_98=0f;
float fLocal_99=0f;
float fLocal_100=0f;
float fLocal_101=0f;
float fLocal_102=0f;
float fLocal_103=0f;
float fLocal_104=0f;
float fLocal_105=0f;
float fLocal_106=0f;
float fLocal_107=0f;
float fLocal_108=0f;
float fLocal_109=0f;
float fLocal_110=0f;
float fLocal_111=0f;
float fLocal_112=0f;
float fLocal_113=0f;
float fLocal_114=0f;
int iLocal_115[100]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_116[100]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_117[100]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_118[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_119[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_120[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_121[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
int iLocal_125=0;
int iLocal_126=0;
int iLocal_127=0;
int iLocal_128=0;
int iLocal_129=0;
int iLocal_130=0;
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
int iLocal_136=0;
int iLocal_137=0;
int iLocal_138=0;
struct<3> Local_139[100];
struct<3> Local_140[15];
struct<3> Local_141[25];
struct<3> Local_142={
0, 0, 0 
};
struct<3> Local_143={
0, 0, 0 
};
struct<3> Local_144={
0, 0, 0 
};
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
struct<3> Local_151={
0, 0, 0 
};
struct<3> Local_152={
0, 0, 0 
};
struct<3> Local_153={
0, 0, 0 
};
struct<3> Local_154={
0, 0, 0 
};
char cLocal_155[64]="";
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
int iLocal_165[100]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_166[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_167[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_168=0;
int iLocal_169=0;
int iLocal_170=0;
int iLocal_171[100]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_172[22]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_173[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_174[25]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_175[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_176=0;
int iLocal_177=0;
int iLocal_178=0;
var uLocal_179=22;
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
int iLocal_205=0;
int iLocal_206=0;
int iLocal_207=0;
int iLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=0;
struct<61> Local_214={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_215={
0, 0, 0 
};
float fLocal_216=0f;
int iLocal_217=0;
var uLocal_218=0;
int iLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
int iLocal_222=0;
int iLocal_223=0;
int iLocal_224=0;
int iLocal_225=0;
int iLocal_226=0;
var uLocal_227=0;
int iLocal_228=0;
int iLocal_229=0;
int iLocal_230=0;
int iLocal_231=0;
int iLocal_232=0;
int iLocal_233=0;
int iLocal_234=0;
int iLocal_235=0;
int iLocal_236=0;
int iLocal_237=0;
int iLocal_238=0;
int iLocal_239=0;
int iLocal_240=0;
int iLocal_241=0;
int iLocal_242=0;
int iLocal_243=0;
int iLocal_244=0;
int iLocal_245=0;
int iLocal_246=0;
int iLocal_247=0;
int iLocal_248=0;
int iLocal_249=0;
int iLocal_250=0;
int iLocal_251=0;
int iLocal_252=0;
int iLocal_253=0;
int iLocal_254=0;
int iLocal_255=0;
int iLocal_256=0;
int iLocal_257=0;
int iLocal_258=0;
int iLocal_259=0;
int iLocal_260=0;
int iLocal_261=0;
int iLocal_262=0;
int iLocal_263=0;
int iLocal_264=0;
int iLocal_265=0;
int iLocal_266=0;
int iLocal_267=0;
int iLocal_268=0;
int iLocal_269=0;
int iLocal_270=0;
int iLocal_271=0;
bool bLocal_272=0;
int iLocal_273=0;
int iLocal_274=0;
int iLocal_275=0;
int iLocal_276=0;
int iLocal_277=0;
int iLocal_278=0;
int iLocal_279=0;
int iLocal_280=0;
int iLocal_281=0;
int iLocal_282=0;
int iLocal_283=0;
bool bLocal_284=0;
int iLocal_285=0;
int iLocal_286=0;
int iLocal_287=0;
int iLocal_288=0;
int iLocal_289=0;
int iLocal_290=0;
int iLocal_291=0;
int iLocal_292=0;
int iLocal_293=0;
int iLocal_294=0;
bool bLocal_295=0;
int iLocal_296=0;
int iLocal_297=0;
int iLocal_298=0;
int iLocal_299=0;
int iLocal_300=0;
int iLocal_301=0;
int iLocal_302=0;
int iLocal_303=0;
int iLocal_304=0;
int iLocal_305=0;
int iLocal_306=0;
int iLocal_307=0;
int iLocal_308=0;
int iLocal_309=0;
bool bLocal_310=0;
bool bLocal_311=0;
bool bLocal_312=0;
int iLocal_313=0;
int iLocal_314=0;
int iLocal_315=0;
int iLocal_316=0;
int iLocal_317=0;
int iLocal_318=0;
int iLocal_319=0;
int iLocal_320=0;
int iLocal_321=0;
int iLocal_322=0;
int iLocal_323=0;
int iLocal_324=0;
int iLocal_325=0;
int iLocal_326=0;
int iLocal_327=0;
int iLocal_328=0;
int iLocal_329=0;
int iLocal_330=0;
int iLocal_331=0;
bool bLocal_332=0;
int iLocal_333=0;
int iLocal_334=0;
int iLocal_335=0;
int iLocal_336=0;
float fLocal_337=0f;
float fLocal_338=0f;
float fLocal_339=0f;
float fLocal_340=0f;
float fLocal_341=0f;
var uLocal_342=0;
float fLocal_343=0f;
float fLocal_344=0f;
int iLocal_345=0;
var uLocal_346=0;
float fLocal_347=0f;
var uLocal_348=0;
int iLocal_349=0;
int iLocal_350=0;
int iLocal_351=0;
int iLocal_352=0;
int iLocal_353=0;
var uLocal_354=0;
var uLocal_355[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_356[5]={
0, 0, 0, 0, 0 
};
int iLocal_357=0;
int iLocal_358=0;
bool bLocal_359=0;
int iLocal_360=0;
int iLocal_361=0;
int iLocal_362[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_363[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_364=0;
int iLocal_365=0;
int iLocal_366=0;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
int iLocal_371=0;
int iLocal_372=0;
int iLocal_373=0;
int iLocal_374=0;
int iLocal_375=0;
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
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
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
int iLocal_456=0;
int iLocal_457=0;
struct<3> Local_458={
0, 0, 0 
};
struct<3> Local_459={
0, 0, 0 
};
struct<3> Local_460={
0, 0, 0 
};
struct<3> Local_461[3];
struct<3> Local_462={
0, 0, 0 
};
struct<3> Local_463={
0, 0, 0 
};
struct<3> Local_464={
0, 0, 0 
};
struct<3> Local_465={
0, 0, 0 
};
struct<3> Local_466={
0, 0, 0 
};
struct<3> Local_467[8];
float fLocal_468=0f;
float fLocal_469=0f;
float fLocal_470[3]={
0f, 0f, 0f 
};
var uLocal_471=0;
char* sLocal_472=NULL;
struct<3> Local_473={
0, 0, 255 
};
struct<8> Local_474[4];
int iLocal_475=0;
var uLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
struct<5> Local_480={
0, 0, 0, 0, 0 
};
struct<5> Local_481={
0, 0, 0, 0, 0 
};
struct<5> Local_482={
0, 0, 0, 0, 0 
};
struct<5> Local_483[2];
struct<4> Local_484[2];
struct<5> Local_485[5];
struct<3> Local_486[3];
int iLocal_487=0;
int iLocal_488=0;
var uLocal_489=16;
var uLocal_490=0;
var uLocal_491=0;
var uLocal_492=0;
var uLocal_493=0;
var uLocal_494=0;
var uLocal_495=0;
var uLocal_496=0;
var uLocal_497=0;
var uLocal_498=0;
var uLocal_499=0;
var uLocal_500=0;
var uLocal_501=0;
var uLocal_502=0;
var uLocal_503=0;
var uLocal_504=0;
var uLocal_505=0;
var uLocal_506=0;
var uLocal_507=0;
var uLocal_508=0;
var uLocal_509=0;
var uLocal_510=0;
var uLocal_511=0;
var uLocal_512=0;
var uLocal_513=0;
var uLocal_514=0;
var uLocal_515=0;
var uLocal_516=0;
var uLocal_517=0;
var uLocal_518=0;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=0;
var uLocal_524=0;
var uLocal_525=0;
var uLocal_526=0;
var uLocal_527=0;
var uLocal_528=0;
var uLocal_529=0;
var uLocal_530=0;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=0;
var uLocal_535=0;
var uLocal_536=0;
var uLocal_537=0;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=0;
var uLocal_545=0;
var uLocal_546=0;
var uLocal_547=0;
var uLocal_548=0;
var uLocal_549=0;
var uLocal_550=0;
var uLocal_551=0;
var uLocal_552=0;
var uLocal_553=0;
var uLocal_554=0;
var uLocal_555=0;
var uLocal_556=0;
var uLocal_557=0;
var uLocal_558=0;
var uLocal_559=0;
var uLocal_560=0;
var uLocal_561=0;
var uLocal_562=0;
var uLocal_563=0;
var uLocal_564=0;
var uLocal_565=0;
var uLocal_566=0;
var uLocal_567=0;
var uLocal_568=0;
var uLocal_569=0;
var uLocal_570=0;
var uLocal_571=0;
var uLocal_572=0;
var uLocal_573=0;
var uLocal_574=0;
var uLocal_575=0;
var uLocal_576=0;
var uLocal_577=0;
var uLocal_578=0;
var uLocal_579=0;
var uLocal_580=0;
var uLocal_581=0;
var uLocal_582=0;
var uLocal_583=0;
var uLocal_584=0;
var uLocal_585=0;
var uLocal_586=0;
var uLocal_587=0;
var uLocal_588=0;
var uLocal_589=0;
var uLocal_590=0;
var uLocal_591=0;
var uLocal_592=0;
var uLocal_593=0;
var uLocal_594=0;
var uLocal_595=0;
var uLocal_596=0;
var uLocal_597=0;
var uLocal_598=0;
var uLocal_599=0;
var uLocal_600=0;
var uLocal_601=0;
var uLocal_602=0;
var uLocal_603=0;
var uLocal_604=0;
var uLocal_605=0;
var uLocal_606=0;
var uLocal_607=0;
var uLocal_608=0;
var uLocal_609=0;
var uLocal_610=0;
var uLocal_611=0;
var uLocal_612=0;
var uLocal_613=0;
var uLocal_614=0;
var uLocal_615=0;
var uLocal_616=0;
var uLocal_617=0;
var uLocal_618=0;
var uLocal_619=0;
var uLocal_620=0;
var uLocal_621=0;
var uLocal_622=0;
var uLocal_623=0;
var uLocal_624=0;
var uLocal_625=0;
var uLocal_626=0;
var uLocal_627=0;
var uLocal_628=0;
var uLocal_629=0;
var uLocal_630=0;
var uLocal_631=0;
var uLocal_632=0;
var uLocal_633=0;
var uLocal_634=0;
var uLocal_635=0;
var uLocal_636=0;
var uLocal_637=0;
var uLocal_638=0;
var uLocal_639=0;
var uLocal_640=0;
var uLocal_641=0;
var uLocal_642=0;
var uLocal_643=0;
var uLocal_644=0;
var uLocal_645=0;
var uLocal_646=0;
var uLocal_647=0;
var uLocal_648=0;
var uLocal_649=0;
var uLocal_650=0;
var uLocal_651=0;
var uLocal_652=0;
var uLocal_653=0;
int iLocal_654=0;
int iLocal_655[3]={
0, 0, 0 
};
int iLocal_656=0;
int iLocal_657=0;
int iLocal_658=0;
int iLocal_659[2]={
0, 0 
};
int iLocal_660=0;
int iLocal_661=0;
var uLocal_662=0;
var uLocal_663=0;
var uLocal_664=0;
var uLocal_665=0;
var uLocal_666=0;
var uLocal_667=0;
bool bLocal_668=0;
int iLocal_669=0;
int iLocal_670=0;
float fLocal_671=0f;
float fLocal_672=0f;
bool bLocal_673=0;
int iLocal_674=0;
float fLocal_675=0f;
float fLocal_676=0f;
float fLocal_677=0f;
float fLocal_678=0f;
float fLocal_679=0f;
float fLocal_680=0f;
float fLocal_681=0f;
float fLocal_682=0f;
float fLocal_683=0f;
float fLocal_684=0f;
int iLocal_685=0;
float fLocal_686=0f;
float fLocal_687=0f;
float fLocal_688=0f;
float fLocal_689=0f;
float fLocal_690=0f;
var uLocal_691=0;
int iLocal_692=0;
int iLocal_693=0;
int iLocal_694=0;
int iLocal_695=0;
int iLocal_696=0;
int iLocal_697[2]={
0, 0 
};
int iLocal_698=0;
int iLocal_699=0;
char* sLocal_700=NULL;
int iLocal_701=0;
int iLocal_702=0;
bool bLocal_703=0;
int iLocal_704=0;
int iLocal_705=0;
int iLocal_706=0;
int iLocal_707=0;
int iLocal_708=0;
int iLocal_709=0;
bool bLocal_710=0;
bool bLocal_711=0;
bool bLocal_712=0;
int iLocal_713=0;
int iLocal_714=0;
int iLocal_715=0;
int iLocal_716=0;
int iLocal_717=0;
int iLocal_718=0;
int iLocal_719=0;
int iLocal_720=0;
int iLocal_721=0;
int iLocal_722=0;
int iLocal_723=0;
int iLocal_724=0;
int iLocal_725=0;
bool bLocal_726=0;
bool bLocal_727=0;
int iLocal_728=0;
bool bLocal_729=0;
bool bLocal_730=0;
int iLocal_731=0;
int iLocal_732=0;
int iLocal_733=0;
int iLocal_734=0;
int iLocal_735=0;
int iLocal_736=0;
int iLocal_737=0;
int iLocal_738=0;
int iLocal_739=0;
int iLocal_740=0;
int iLocal_741=0;
int iLocal_742=0;
int iLocal_743=0;
int iLocal_744=0;
int iLocal_745=0;
int iLocal_746=0;
float fLocal_747=0f;
var uLocal_748=0;
struct<4> Local_749={
0, 0, 0, 0 
};
struct<4> Local_750={
0, 0, 0, 0 
};
char[] cLocal_751[8]=0;
char* sLocal_752=NULL;
char* sLocal_753=NULL;
int iLocal_754=0;
int iLocal_755=0;
int iLocal_756=0;
var uLocal_757=0;
var uLocal_758[3]={
0, 0, 0 
};
int iLocal_759=0;
int iLocal_760=0;
int iLocal_761=0;
int iLocal_762=0;
int iLocal_763=0;
int iLocal_764=0;
int iLocal_765=0;
int iLocal_766=0;
struct<61> Local_767={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
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
sLocal_20="NULL";
fLocal_21=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
fLocal_28=80f;
fLocal_29=140f;
fLocal_30=180f;
iLocal_33=3;
uLocal_38=func_694(50);
iLocal_39=joaat("pcj");
bLocal_44=true;
bLocal_51=true;
bLocal_73=true;
fLocal_94=120f;
fLocal_95=0f;
fLocal_97=1f;
fLocal_98=0f;
fLocal_99=1f;
fLocal_100=30f;
fLocal_102=1f;
fLocal_103=5f;
fLocal_104=1f;
fLocal_105=1f;
fLocal_106=100f;
fLocal_107=100f;
fLocal_108=0f;
fLocal_109=7000f;
fLocal_110=0f;
fLocal_111=0f;
fLocal_112=0.3f;
fLocal_113=0.5f;
fLocal_114=50f;
iLocal_125=-1;
iLocal_133=-1;
iLocal_134=-1;
iLocal_205=1;
iLocal_206=65;
iLocal_207=49;
iLocal_208=64;
uLocal_212=HUD::GET_STANDARD_BLIP_ENUM_ID();
uLocal_213=HUD::GET_WAYPOINT_BLIP_ENUM_ID();
Local_215={
-70.3883f, 301.2539f, 105.8003f 
};
fLocal_216=66.86f;
fLocal_347=1f;
iLocal_371=AUDIO::GET_SOUND_ID();
iLocal_372=AUDIO::GET_SOUND_ID();
uLocal_373=AUDIO::GET_SOUND_ID();
uLocal_374=AUDIO::GET_SOUND_ID();
Local_458={
-74.1683f, 299.9258f, 105.4432f 
};
Local_459={
-74f, 300f, 102f 
};
Local_460={
-78.9112f, 299.3701f, 105.4327f 
};
Local_462={
0f, 0f, 0f 
};
Local_463={
0f, -2.1f, 0.6f 
};
Local_464={
-29.4167f, 302.7094f, 111.6957f 
};
Local_465={
-75.1476f, 359.3089f, 111.4346f 
};
Local_466={
41.4266f, 312.7768f, 140.231f 
};
fLocal_468=235.4094f;
fLocal_469=249.8696f;
sLocal_472="PAPARAZZO_02_SOUNDSETS";
iLocal_487=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
iLocal_488=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
iLocal_654=joaat("fq2");
iLocal_656=joaat("u_m_y_justin");
iLocal_657=joaat("u_f_y_poppymich");
iLocal_658=joaat("s_m_m_bouncer_01");
fLocal_671=0f;
fLocal_672=0f;
iLocal_674=1;
fLocal_675=0.013f;
fLocal_676=0.013f;
fLocal_677=0.46f;
fLocal_678=0.457f;
fLocal_679=0.54f;
fLocal_680=0.457f;
fLocal_681=0.46f;
fLocal_682=0.548f;
fLocal_683=0.54f;
fLocal_684=0.548f;
iLocal_685=1500;
fLocal_686=1f;
fLocal_687=0.4f;
fLocal_688=0f;
fLocal_689=0f;
fLocal_690=0.877f;
iLocal_701=joaat("sadler");
bLocal_712=true;
iLocal_713=1;
fLocal_747=0.9f;
StringCopy(&Local_749, "pap2_Bev_routeC", 16);
StringCopy(&Local_750, "pap2_Bev_route9", 16);
cLocal_751="PAP2AUD";
sLocal_752="random@escape_paparazzi@standing@";
sLocal_753="random@escape_paparazzi@standing@";
Local_214={
ScriptParam_767 
};
func_692(&Local_214);
uLocal_369=func_691();
MISC::SET_MISSION_FLAG(1);
func_690(1);
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
if(func_689(0)){
while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2")){
wait(0);
}}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19)){
func_688("Force cleanup [TERMINATING]");
func_674(1);
func_664();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_663()){
Global_78804=1;
iLocal_37=0;
while (!func_656(&Local_214)){
wait(0);
}
func_655(&Local_214, 0, 1);
Global_78804=0;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_40)){
PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(uLocal_40);
}
iLocal_759=Local_214.f_35[0];
Local_214.f_35[0]=0;
STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
STREAMING::REQUEST_CLIP_SET(sLocal_752);
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_PAPARAZZO_02_AMBIENCE", 1, 1);
MISC::CLEAR_AREA_OF_OBJECTS(-30.8601f, 301.192f, 112.1164f, 10f, 0);
if(func_663() && iLocal_704==0){
iLocal_475=Local_214.f_28[0];
Local_214.f_28[0]=0;
if(func_654(iLocal_475)){
PED::SET_PED_LEG_IK_MODE(iLocal_475, 1);
}}elseif(!func_663()){
if((func_654(Local_214.f_28[0]) && func_654(PLAYER::PLAYER_PED_ID())) && !func_653(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], 4f, 1)){
bLocal_359=true;
}}
PED::ADD_RELATIONSHIP_GROUP("POPPY_GROUP", &uLocal_691);
if(func_663()){
MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
}else{
MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
}
func_646(50, 1, 0);
while (true){
wait(0);
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TST", 0);
func_644();
if(CAM::DOES_CAM_EXIST(uLocal_666)){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_639(0);
CAM::SET_USE_HI_DOF();
}
func_622(Local_214.f_9, 0, 0, 0, 0, 0);
if(func_654(PLAYER::PLAYER_PED_ID())){
if((iLocal_692 !=11 && iLocal_692 !=0) && iLocal_692 !=1){
func_617();
}
switch (iLocal_692){
case 0:
func_598();
break;
case 1:
func_587();
break;
case 2:
func_526();
break;
case 3:
func_526();
break;
case 4:
func_526();
break;
case 5:
func_525();
break;
case 6:
func_512();
break;
case 7:
func_491();
break;
case 8:
func_337();
break;
case 9:
func_236();
break;
case 10:
func_27();
break;
case 11:
func_1();
break;
case 12:
break;
case 13:
break;
case 14:
break;
}}}}


void func_1(){
if(iLocal_222 !=0){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(0);
}
switch (iLocal_693){
case 0:
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_FAIL");
if(iLocal_296==1){
func_13("TK bPutCamInFranksHand=TRUE");
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
func_13("TK CAM EXISTS");
ENTITY::DETACH_ENTITY(iLocal_353, 1, 1);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}}
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::STOP_SOUND(iLocal_371);
}
func_11();
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_700)){
func_9(sLocal_700, 1);
}else{
func_674(1);
}
iLocal_693=1;
break;
case 1:
if(func_8()){
func_2();
func_664();
SCRIPT::TERMINATE_THIS_THREAD();
}
break;
}}


void func_2(){
int iVar0;
func_7(&iLocal_475);
func_7(&Local_480);
func_7(&Local_481);
func_7(&Local_482);
iVar0=0;
while (iVar0 <=1){
func_7(&(Local_483[iVar0 /*5*/]));
iVar0++;
}
if(iLocal_289==1){
iVar0=0;
while (iVar0 <=2){
func_4(&(uLocal_758[iVar0]));
iVar0++;
}}
if(iLocal_289==1){
func_4(&iLocal_759);
}
iVar0=0;
while (iVar0 <=3){
func_3(&(Local_474[iVar0 /*8*/]));
iVar0++;
}}


void func_3(var uParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0)){
ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
}
OBJECT::DELETE_OBJECT(uParam0);
}}


void func_4(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
}
if(func_6(*iParam0)){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1)){
if(func_5(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(iParam0);
}}else{
if(func_5(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
return;
}}
VEHICLE::DELETE_VEHICLE(iParam0);
}}}

int func_5(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_6(int iParam0){
if(func_5(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!FIRE::IS_ENTITY_ON_FIRE(iParam0)){
return 1;
}}}
return 0;
}


void func_7(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0, 1);
}
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
}
PED::DELETE_PED(iParam0);
}}

int func_8(){
if(Global_3){
return 1;
}
if(Global_100681==7 || Global_100681==8){
return 1;
}
return 0;
}


void func_9(char* sParam0, bool bParam1){
func_10(sParam0);
func_674(bParam1);
}


void func_10(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78791, sParam0, 16);
StringCopy(&Global_78795, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_11(){
func_12(&iLocal_661);
func_12(&iLocal_660);
}


void func_12(int iParam0){
if(HUD::DOES_BLIP_EXIST(*iParam0)){
HUD::SET_BLIP_ROUTE(*iParam0, 0);
HUD::REMOVE_BLIP(iParam0);
}}


void func_13(char* sParam0){
}


void func_14(bool bParam0){
if((CAM::DOES_CAM_EXIST(uLocal_663) && func_5(iLocal_759)) && func_654(PLAYER::PLAYER_PED_ID())){
if(CAM::DOES_CAM_EXIST(uLocal_664)){
CAM::DESTROY_CAM(uLocal_664, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_666)){
CAM::DESTROY_CAM(uLocal_666, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_667)){
CAM::DESTROY_CAM(uLocal_667, 0);
}
GRAPHICS::SET_TIMECYCLE_MODIFIER("player_transition_scanlines");
GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.15f);
if(bParam0){
func_26();
}else{
func_19();
}
func_17();
if(iLocal_674 && !HUD::IS_PAUSE_MENU_ACTIVE()){
func_15(Local_480.f_0);
}
CAM::SET_CAM_NEAR_DOF(uLocal_663, 2f);
CAM::SET_CAM_FAR_DOF(uLocal_663, 60f);
CAM::SET_CAM_DOF_STRENGTH(uLocal_663, 0.5f);
CAM::SET_USE_HI_DOF();
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
}}


void func_15(int iParam0){
struct<3> Var0;
float fVar1;
fVar1=func_16(iParam0, &Var0);
GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::SET_DRAW_ORIGIN(Var0, 0);
fVar1=(fVar1 * 0.03f);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar1 * 0.5f), -fVar1, 0.013f, 0.013f, 0f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, 1, 0);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar1 * 0.5f), -fVar1, 0.013f, 0.013f, 90f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, 1, 0);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar1 * 0.5f), fVar1, 0.013f, 0.013f, 270f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, 1, 0);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar1 * 0.5f), fVar1, 0.013f, 0.013f, 180f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, 1, 0);
GRAPHICS::CLEAR_DRAW_ORIGIN();
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


float func_16(int iParam0, var uParam1){
int iVar0;
float fVar1;
float fVar2;
if(func_654(iParam0)){
iVar0=PED::GET_PED_BONE_INDEX(iParam0, 31086);
if(iVar0 !=-1){
*uParam1={
ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) 
};
if(iLocal_692==5 || iLocal_692==6){
*uParam1={
*uParam1 + Vector(fLocal_689, 0f, fLocal_688) 
};
}elseif(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
if(((((((PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_fuckinlosers", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_gimmethtcam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_ih8u", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_illsueyou", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_imavirgin", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_itwasyoga", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_notdoinanythin", 3)){
ENTITY::PROCESS_ENTITY_ATTACHMENTS(iParam0);
*uParam1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uParam1->f_2=(uParam1->f_2 + 0.08f);
}else{
ENTITY::PROCESS_ENTITY_ATTACHMENTS(iParam0);
*uParam1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uParam1->f_2=(uParam1->f_2 + 0.08f);
}}
if(func_654(PLAYER::PLAYER_PED_ID())){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
fVar2=(IntToFloat(iLocal_685) / (CAM::GET_CAM_FOV(uLocal_663) * fVar1));
if(fVar2 < fLocal_687){
fVar2=fLocal_687;
}
if(fVar2 > fLocal_686){
fVar2=fLocal_686;
}
return fVar2;
}}}}
return 0f;
}


void func_17(){
if(iLocal_737==0){}
HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
func_18(0.8f, 0.78f, "PAP2_REC", 0);
HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
iLocal_737++;
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_677, fLocal_678, fLocal_676, fLocal_675, 0f, 255, 255, 255, 200, 1, 0);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_679, fLocal_680, fLocal_676, fLocal_675, 90f, 255, 255, 255, 200, 1, 0);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_681, fLocal_682, fLocal_676, fLocal_675, 270f, 255, 255, 255, 200, 1, 0);
GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_683, fLocal_684, fLocal_676, fLocal_675, 180f, 255, 255, 255, 200, 1, 0);
}


void func_18(float fParam0, float fParam1, char* sParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}


void func_19(){
struct<3> Var0;
var uVar1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
float fVar6;
struct<3> Var7;
struct<3> Var8;
float fVar9;
struct<3> Var10;
Var0={
CAM::GET_CAM_ROT(uLocal_663, 2) 
};
uVar1=CAM::GET_CAM_FOV(uLocal_663);
fVar2=(ENTITY::GET_ENTITY_HEADING(iLocal_759) - 180f);
if(func_5(iLocal_759)){
Var3={
ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_759) 
};
ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_759);
}
Var3.f_0=(Var3.f_0 * -1f);
Var3.f_1=(Var3.f_1 * -1f);
Var3.f_2=(Var3.f_2 * -1f);
Var4.f_2=MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1);
fVar5=(Var4.f_2 + 78f);
fVar6=(Var4.f_2 - 78f);
Var7={
func_25(Var0.f_2) 
};
Var8={
func_25(fVar2) 
};
fVar9=MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var7.f_0, Var7.f_1, Var8.f_0, Var8.f_1);
if(fVar9 >=78f){
if(iLocal_334){
Var0.f_2=fVar6;
}else{
Var0.f_2=fVar5;
}}else{
iLocal_334=0;
}
if(bLocal_673){
func_22(&Var4, &uVar1, 0);
Var4.f_2=func_21(Var4.f_2, fVar6, fVar5);
Var4.f_0=func_20(Var4.f_0, -1035468800, 1109393408);
Var4.f_1=ENTITY::GET_ENTITY_ROLL(iLocal_759);
}else{
func_22(&Var0, &uVar1, 0);
Var0.f_0=func_20(Var0.f_0, -30f, 30f);
Var0.f_1=ENTITY::GET_ENTITY_ROLL(iLocal_759);
}
Var10={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463) 
};
if(bLocal_673){
CAM::SET_CAM_PARAMS(uLocal_663, Var10, Var4, uVar1, 0, 1, 1, 2);
}else{
CAM::SET_CAM_PARAMS(uLocal_663, Var10, Var0.f_0, Var0.f_1, Var0.f_2, fVar1, 0, 1, 1, 2);
}}


float func_20(float fParam0, float fParam1, float fParam2){
if(fParam0 < fParam1){
fParam0=fParam1;
}
if(fParam0 > fParam2){
fParam0=fParam2;
}
return fParam0;
}


float func_21(float fParam0, float fParam1, float fParam2){
if(fParam0 < fParam1){
func_13("YAW CAPPED ----------");
fParam0=fParam1;
}
if(fParam0 > fParam2){
func_13("YAW CAPPED ++++++++++");
fParam0=fParam2;
}
return fParam0;
}


void func_22(var uParam0, var uParam1, bool bParam2){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
fVar7=25f;
if(bParam2){
fVar7=7.5f;
}
if(MISC::IS_SNIPER_INVERTED()){
func_24(&iVar1, &iVar0, &uVar2, &iVar3, 0, 0);
}else{
func_24(&uVar2, &iVar3, &iVar1, &iVar0, 0, 0);
}
if(!PAD::IS_LOOK_INVERTED()){
iVar0=(iVar0 * -1);
}
if(!bParam2){
if(CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, -2f, -2.6f, 0f), 1f)){
iLocal_334=1;
}}
iVar3=floor((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 39) * 127f));
if(iVar3 < 0 || iVar3 > 0){
*uParam1=(*uParam1 + ((to_float(iVar3) / 5f) * timestep()));
if(*uParam1 < fVar7){
*uParam1=fVar7;
}elseif(*uParam1 > 45f){
*uParam1=45f;
}}
fVar6=MISC::ABSF((to_float(iVar3) / 127f));
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
fVar8=(*uParam1 - 7.5f);
fVar8=(fVar8 / 37.5f);
if(fVar8 > 0.6f){
fVar8=0.6f;
}}
if(fVar6 < 0f){
fVar6=0f;
}
if(fVar6 > 1f){
fVar6=1f;
}
if(fLocal_337 > *uParam1){
if(iLocal_239==1){
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::STOP_SOUND(iLocal_371);
}}
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_FUNCTION", 0f);
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_SPEED", fVar6);
if(AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_371, "ZOOM", "PAPARAZZO_02_SOUNDSETS", 1);
iLocal_239=0;
}
iLocal_333=1;
}elseif(fLocal_337 < *uParam1){
if(iLocal_239==0){
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::STOP_SOUND(iLocal_371);
}}
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_FUNCTION", 1f);
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_SPEED", fVar6);
if(AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_371, "ZOOM", "PAPARAZZO_02_SOUNDSETS", 1);
iLocal_239=1;
}
iLocal_333=1;
}elseif(fLocal_337==*uParam1){
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::STOP_SOUND(iLocal_371);
}
iLocal_333=0;
}
if((iVar1 < 0 || iVar1 > 0) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
fVar5=(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * 20f);
}else{
fVar5=(((to_float(iVar1) * *uParam1) * 0.0117f) * timestep());
}
fLocal_671=(fLocal_671 + fVar5);
fLocal_671=func_23(fLocal_671);
}
if((iVar0 < 0 || iVar0 > 0) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
fVar4=(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -20f);
}else{
fVar4=(((to_float(iVar0) * *uParam1) * 0.0117f) * timestep());
}
fLocal_672=(fLocal_672 + fVar4);
fLocal_672=func_20(fLocal_672, -1035468800, 1109393408);
}
if(iLocal_692==8){
if(bLocal_673){
*uParam0={
*uParam0 + Vector(-fLocal_671, 0f, fLocal_672) 
};
}else{
*uParam0={
*uParam0 + Vector(-fVar5, 0f, fVar4) 
};
}}else{
*uParam0={
*uParam0 + Vector(-fVar5, 0f, fVar4) 
};
}}


float func_23(float fParam0){
if(fParam0 < -78f){
fParam0=-78f;
}
if(fParam0 > 78f){
fParam0=78f;
}
return fParam0;
}


void func_24(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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


Vector3 func__25(float fParam0){
return sin(fParam0), cos(fParam0), 0f;
}


void func_26(){
struct<3> Var0;
var uVar1;
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
Var0={
CAM::GET_CAM_ROT(uLocal_663, 2) 
};
uVar1=CAM::GET_CAM_FOV(uLocal_663);
func_22(&Var0, &uVar1, 1);
Var0.f_0=func_20(Var0.f_0, -1035468800, 1109393408);
CAM::SET_CAM_PARAMS(uLocal_663, -33.4707f, 318.6031f, 113.3355f, Var0.f_0, ENTITY::GET_ENTITY_ROLL(PLAYER::PLAYER_PED_ID()), Var0.f_2, uVar1, 0, 1, 1, 2);
}


void func_27(){
HUD::CLEAR_PRINTS();
func_234();
func_12(&iLocal_660);
func_12(&iLocal_661);
if(bLocal_310){}
if(bLocal_311){}
iLocal_238=round(((to_float(iLocal_261) / 2271f) * 100f));
if(iLocal_238 > 100){
iLocal_238=100;
}
func_233(801, iLocal_238, 0);
if(iLocal_756){
if(CAM::IS_SCREEN_FADED_OUT()){
func_232(PLAYER::PLAYER_PED_ID(), -71.0875f, -522.2567f, 39.3243f, 255.9742f, 0, 1);
func_231(800, 0);
iLocal_756=0;
}}else{
func_29(103, 1);
func_664();
if(func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}}

int func_28(int iParam0, int iParam1){
if(iParam1 !=0){
if(func_5(iParam1)){
if(func_654(iParam0)){
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0)){
return 1;
}}}}
return 0;
}


void func_29(int iParam0, bool bParam1){
int iVar0;
var uVar1;
iVar0=func_229();
if(iVar0==-1){
return;
}
if(!Global_112735[iVar0 /*10*/].f_4){
return;
}
if(Global_112735[iVar0 /*10*/].f_5){
return;
}
if(Global_112735[iVar0 /*10*/].f_6){
return;
}
func_200(iVar0, 0);
MISC::SET_BIT(&Global_78807, 1);
if(Global_112735[iVar0 /*10*/].f_9==-1){}else{
func_199(&(Global_112735[iVar0 /*10*/].f_9));
}
if(bParam1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PLAYER::START_FIRING_AMNESTY(5000);
}}
func_185(iVar0, 1, 0, 0);
func_184(0, 0);
MemCopy(&uVar1,{
func_182(iVar0)
}
, 4);
func_179(&uVar1, func_180());
func_56();
if(MISC::IS_BIT_SET(Global_113648.f_10018.f_25, 3)){
func_55();
}
func_37();
if(iParam0==210 || iParam0==211){
func_31(iParam0, 406.38f, -1635.86f);
}elseif(iParam0==111){
func_31(iParam0, 1973.84f, 3814.89f);
}elseif(iParam0 !=322){
func_31(iParam0, 0, 0);
}
func_30();
}

int func_30(){
if(func_689(0)){
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


void func_31(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_35((891 + iParam0), 1, -1);
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
func_32();
}}


void func_32(){
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
func_34(13, floor(Global_113648.f_10196.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_33()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113382=0;
}
if(!Global_63362){
func_30();
}}}}}

int func_33(){
return Global_32163;
}

int func_34(int iParam0, int iParam1){
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


void func_35(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_36();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_36(){
return Global_1574918;
}


void func_37(){
func_54();
func_46();
func_42();
func_41();
func_40();
func_39();
Global_100718=0;
Global_94856=-1;
MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
Global_100716=0;
MISC::PAUSE_DEATH_ARREST_RESTART(0);
MISC::IGNORE_NEXT_RESTART(0);
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
MISC::SET_FADE_OUT_AFTER_ARREST(1);
MISC::SET_FADE_OUT_AFTER_DEATH(1);
func_38(0);
}


void func_38(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100681.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
}}


void func_39(){
Global_78799={
0f, 0f, 0f 
};
Global_78802=0f;
Global_100681.f_21=145;
}


void func_40(){
StringCopy(&Global_78791, "", 16);
StringCopy(&Global_78795, "", 16);
}


void func_41(){
int iVar0;
iVar0=0;
while (iVar0 <=6){
Global_100681.f_22[iVar0]=0;
iVar0++;
}}


void func_42(){
Global_100681=13;
Global_100681.f_1=-1;
Global_100681.f_2=0;
Global_100681.f_30=0f;
MISC::CLEAR_BIT(&(Global_100681.f_20), 25);
Global_100715=0;
func_45(0);
func_44();
func_43();
Global_100681.f_18=-1;
Global_100681.f_19=-1;
}


void func_43(){
MISC::CLEAR_BIT(&(Global_100681.f_20), 22);
MISC::CLEAR_BIT(&(Global_100681.f_20), 8);
}


void func_44(){
if(Global_100681.f_16 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_16));
Global_100681.f_16=0;
}
if(Global_100681.f_17 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_100681.f_17));
Global_100681.f_17=0;
}}


void func_45(int iParam0){
if(iParam0==1){
Global_43806=1;
}else{
Global_43806=0;
}}


void func_46(){
func_47(&Global_107196);
}


void func_47(var uParam0){
int iVar0;
int iVar1;
*uParam0=145;
func_53(&(uParam0->f_1));
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_8=0f;
uParam0->f_2=0;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=145;
iVar1=0;
while (iVar1 < 3){
uParam0->f_9[iVar1]=-1;
uParam0->f_13[iVar1]=0;
uParam0->f_17[iVar1]=0;
uParam0->f_21[iVar1]=0;
func_52(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
func_52(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_26[iVar0]=-1;
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=0;
uParam0->f_616[iVar1 /*65*/].f_60=-99;
uParam0->f_616[iVar1 /*65*/].f_61=2;
uParam0->f_616[iVar1 /*65*/].f_62=0;
uParam0->f_616[iVar1 /*65*/].f_63=-99;
uParam0->f_616[iVar1 /*65*/].f_64=1;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=-1;
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=-1;
iVar0++;
}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4=0;
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4=0;
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 4){
uParam0->f_2244[iVar1 /*32*/][iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
uParam0->f_2244[iVar1 /*32*/].f_5[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
uParam0->f_2244[iVar1 /*32*/].f_16[iVar0]=0;
iVar0++;
}
uParam0->f_2341[iVar1]=0;
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=0;
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=0;
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=0;
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=0;
iVar0++;
}
iVar1++;
}
func_51(&(uParam0->f_2884));
func_49(&(uParam0->f_2890));
func_48(&(uParam0->f_2980));
}


void func_48(var uParam0){
*uParam0=-1;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}


void func_49(var uParam0){
func_50(&(uParam0->f_12));
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3={
0f, 0f, 0f 
};
uParam0->f_6=0f;
uParam0->f_8=0;
uParam0->f_9=0;
}


void func_50(var uParam0){
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


void func_51(var uParam0){
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0f;
uParam0->f_4=0;
uParam0->f_5=-1;
}


void func_52(var uParam0){
int iVar0;
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0f;
uParam0->f_3=0;
uParam0->f_4=0;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_9=0;
uParam0->f_10=0;
iVar0=0;
while (iVar0 <=11){
uParam0->f_11[iVar0]=0;
iVar0++;
}
uParam0->f_24=0;
uParam0->f_25=0;
StringCopy(&(uParam0->f_27), "", 16);
iVar0=0;
while (iVar0 <=48){
uParam0->f_31[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=1){
uParam0->f_81[iVar0]=0;
iVar0++;
}
uParam0->f_84=0;
uParam0->f_85=0;
uParam0->f_86=0;
uParam0->f_87=0;
uParam0->f_88=0;
uParam0->f_89=0;
uParam0->f_90=0;
uParam0->f_91=0;
uParam0->f_93=0;
uParam0->f_94=0;
uParam0->f_95=0;
uParam0->f_92=0;
}


void func_53(var uParam0){
*uParam0=-15;
}


void func_54(){
StringCopy(&Global_104204, "", 32);
func_47(&Global_104212);
}


void func_55(){
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==0){
Global_9058[0 /*2811*/][0 /*281*/].f_259=2;
}
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==0){
Global_9058[1 /*2811*/][0 /*281*/].f_259=2;
}
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==0){
Global_9058[2 /*2811*/][0 /*281*/].f_259=2;
}
MISC::SET_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
}


void func_56(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 <=8){
iVar1=Global_98050[iVar0];
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)){
iVar3=func_175(iVar1);
iVar2=-99;
switch (iVar3){
case 0:
iVar2=112;
break;
case 1:
iVar2=158;
break;
case 2:
iVar2=154;
break;
}
if(iVar2 !=-99){
if(func_174(iVar1, 14, iVar2)){
func_57(iVar1, 14, iVar2);
}
if(Global_113648.f_2365.f_539[iVar3 /*65*/].f_39[2]==iVar2){
Global_113648.f_2365.f_539[iVar3 /*65*/].f_39[2]=-1;
}}}
iVar0++;
}}

int func_57(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
int iVar7;
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_109(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(!func_174(iParam0, iParam1, iParam2)){
return 0;
}
if(iParam1==12){
uVar2={
func_105(iVar0, iParam2) 
};
iVar1=0;
while (iVar1 <=14){
if(uVar2[iVar1] !=-99){
func_57(iParam0, iVar1, uVar2[iVar1]);
}
iVar1++;
}}elseif(iParam1==13){
uVar5={
func_102(iVar0, iParam2) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_57(iParam0, 14, uVar5[iVar3])){
iVar4=0;
}
iVar3++;
}
return iVar4;
}elseif(iParam1==14){
PED::CLEAR_PED_PROP(iParam0, Global_78341[1 /*14*/].f_12, 1);
}else{
uVar6={
func_105(iVar0, 0) 
};
Global_78341[1 /*14*/]={
func_109(iVar0, iParam1, uVar6[iParam1], -1) 
};
if(PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, func_101(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, func_101(iParam1), Global_78341[1 /*14*/].f_3) > 0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_101(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, 0);
}}
if(func_100(iParam0, iVar0, &iVar7, 0)){
func_60(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_58(iParam0, iVar0, &iVar7)){
func_60(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
return 1;
}

int func_58(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_59(iParam1);
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_63 !=-99){
if(!func_174(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_64, Global_113648.f_2365.f_539[iVar0 /*65*/].f_63)){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=1;
return 1;
}}
return 0;
}

int func_59(int iParam0){
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

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
func_109(iVar10, iParam1, iParam2, -1) 
};
if(!func_99(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
func_92(iParam1);
}
if(iParam1==12){
if(iParam7==1){
if(iVar10==joaat("player_one")){
iVar5=func_90(iParam0, 8);
if(iVar5 !=9){
iVar5=-99;
}}
iVar6=func_90(iParam0, 9);
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
iVar7=func_89(iParam0, 1);
if(!func_88(iVar10, 14, iVar7, -1)){
iVar7=-99;
}
iVar8=func_89(iParam0, 0);
if(!func_87(iVar10, 14, iVar8, -1) && !func_86(iVar10, 14, iVar8, -1)){
iVar8=-99;
}
if(iVar10==joaat("player_one")){
iVar9=func_89(iParam0, 2);
}}
PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
uVar11=15;
if(iParam5==1){
uVar11={
Global_78384 
};
}else{
uVar11={
func_105(iVar10, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar11[iVar0] !=-99){
Global_78341[1 /*14*/]={
func_109(iVar10, iVar0, uVar11[iVar0], -1) 
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
func_102(iVar10, uVar11[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_109(iVar10, 14, uVar12[iVar1], -1) 
};
func_76(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_92(14);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_68(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iVar0 !=14 && iVar0 !=12){
if((iVar10==joaat("player_one") && iVar0==2) && uVar11[iVar0]==20){
func_67(iVar10, 2, 20, &iVar4);
}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_101(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_101(iVar0)));
}
else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_101(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
func_92(iVar0);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_68(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
if(iVar3 !=-99){
func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_109(iVar10, iVar0, func_66(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
if(iVar0==2){
if(iVar10==joaat("player_one")){
if(func_100(iParam0, iVar10, &iVar4, 1)){
func_60(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
}}else{
uVar13={
func_105(iVar10, 0) 
};
func_60(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
iVar0++;
}
if(iParam7==1){
Var14={
func_109(iVar10, 8, iVar5, -1) 
};
if(iVar5 !=-99){
if(func_64(iVar10, iParam2, 8, iVar5, &uVar11, &Var14)){
func_60(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_109(iVar10, 9, iVar6, -1) 
};
if(iVar6 !=-99){
if(func_64(iVar10, iParam2, 9, iVar6, &uVar11, &Var14)){
func_60(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_109(iVar10, 14, iVar7, -1) 
};
if(iVar7 !=-99){
if(func_64(iVar10, iParam2, 14, iVar7, &uVar11, &Var14)){
func_60(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_109(iVar10, 14, iVar8, -1) 
};
if(iVar8 !=-99){
if(func_64(iVar10, iParam2, 14, iVar8, &uVar11, &Var14)){
func_60(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}
Var14={
func_109(iVar10, 14, iVar9, -1) 
};
if(iVar9 !=-99){
if(func_64(iVar10, iParam2, 14, iVar9, &uVar11, &Var14)){
func_60(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
}}}}elseif(iParam1==13){
uVar15={
func_102(iVar10, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_109(iVar10, 14, uVar15[iVar1], -1) 
};
func_76(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_92(14);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_68(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
iVar1++;
}}elseif(iParam1==14){
func_76(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
func_92(iParam1);
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_68(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}else{
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_101(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_101(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_101(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_68(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}
if(iParam6==0){
func_61(iVar10, iParam1, iParam2);
}}
if(Global_78339==1){
if(func_100(iParam0, iVar10, &iVar4, 0)){
func_60(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_58(iParam0, iVar10, &iVar4)){
func_60(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
Global_78339=(Global_78339 - 1);
return 1;
}


void func_61(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(iParam0==joaat("player_zero")){
iVar0=5;
}elseif(iParam0==joaat("player_one")){
iVar0=2;
}elseif(iParam0==joaat("player_two")){
iVar0=4;
}
if(func_63(iParam0, 12, iVar0)){
if(func_62(iParam0, iParam1, iParam2)){
iVar1=func_59(iParam0);
if(iParam1==3){
Global_113648.f_2365.f_539.f_196[iVar1]=iParam2;
}elseif(iParam1==4){
Global_113648.f_2365.f_539.f_200[iVar1]=iParam2;
}}}}

int func_62(int iParam0, int iParam1, int iParam2){
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


bool func_63(int iParam0, int iParam1, int iParam2){
Global_78341[1 /*14*/]={
func_109(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
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
func_102(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_65(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_88(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_87(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_86(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_88(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_87(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_86(iParam0, iParam2, iParam3, -1)){
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
if(func_88(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_87(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_86(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_65(int iParam0, int iParam1, int iParam2){
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

int func_66(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_174(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_174(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_89(iParam0, iParam2);
}}else{
return func_90(iParam0, iParam1);
}}
return -99;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3){
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
iVar0=func_59(iParam0);
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=iParam2;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=iParam1;
return 1;
}
return 0;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
iVar1=func_90(iParam0, 1);
iVar0=func_75(iParam1, iParam3, iVar1);
break;
case 1:
iVar2=func_90(iParam0, 2);
iVar0=func_75(iParam1, iVar2, iParam3);
break;
}}elseif(iParam4==2){
func_67(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==1){
func_74(iParam1, iParam2, iParam3, &iVar0);
}elseif(iParam4==6){
if(iParam2==4){
if(func_73(iParam1, iParam3, &iVar0)){
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
if(!func_72(iParam0, 3, 44, 59)){
iVar0=44;
}}elseif(((iParam3 >=8 && iParam3 <=17) || (iParam3 >=18 && iParam3 <=27)) || (iParam3 >=28 && iParam3 <=43)){
if(!func_72(iParam0, 3, 135, 150)){
iVar0=func_71(iParam1, 3, 135, 150);
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
if(!func_72(iParam0, 3, 209, 222)){
iVar0=func_71(iParam1, 3, 209, 222);
}}elseif((iParam3 >=1 && iParam3 <=4) || (iParam3 >=5 && iParam3 <=8)){
if(!func_72(iParam0, 3, 243, 258)){
if(iParam3==1 || iParam3==5){
iVar0=func_71(iParam1, 3, 243, 246);
}
elseif(iParam3==2 || iParam3==6){
iVar0=func_71(iParam1, 3, 247, 250);
}
elseif(iParam3==3 || iParam3==7){
iVar0=func_71(iParam1, 3, 251, 254);
}
elseif(iParam3==4 || iParam3==8){
iVar0=func_71(iParam1, 3, 255, 258);
}
}}elseif(iParam3==41 || iParam3==42){
if(!func_72(iParam0, 3, 176, 191) && !func_72(iParam0, 3, 227, 242)){
iVar0=func_71(iParam1, 3, 176, 191);
}}
break;
}
break;
case 8:
if(iParam2==11 || iParam2==3){
if(iParam2==11){
iVar5=iParam3;
iVar4=func_90(iParam0, 3);
}elseif(iParam2==3){
iVar4=iParam3;
iVar5=func_90(iParam0, 11);
iVar5=func_70(iParam1, iVar4, iVar5, 0);
}
iVar3=func_90(iParam0, 8);
if(((iVar5 >=5 && iVar5 <=8) || (iVar5 >=25 && iVar5 <=40)) || (iVar5 >=42 && iVar5 <=43)){
if(!func_69(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)){
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
iVar7=func_90(iParam0, 8);
iVar8=func_90(iParam0, 11);
if(((iVar7 >=27 && iVar7 <=42) || (iVar7 >=43 && iVar7 <=58)) || (iVar7 >=59 && iVar7 <=74)){
iVar0=func_70(iParam1, iParam3, iVar8, 0);
}else{
iVar0=func_70(iParam1, iParam3, iVar8, 1);
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
iVar9=func_90(iParam0, 11);
iVar0=func_70(iParam1, -99, iVar9, 0);
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

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4){
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

int func_70(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam2=func_71(iParam0, 11, 9, 24);
}else{
iParam2=func_71(iParam0, 11, 25, 40);
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

int func_71(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=iParam2;
while (iVar0 <=(iParam3 - 1)){
iVar1=iVar0;
if(func_63(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar0++;
}
return -99;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_90(iParam0, iParam1);
if(iVar0 >=iParam2 && iVar0 <=iParam3){
return 1;
}
return 0;
}

int func_73(int iParam0, int iParam1, int iParam2){
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

int func_74(int iParam0, int iParam1, int iParam2, int iParam3){
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
iVar0=func_59(iParam0);
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=iParam2;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=iParam1;
return 1;
}
return 0;
}

int func_75(int iParam0, int iParam1, int iParam2){
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


void func_76(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam2==-1){
PED::CLEAR_PED_PROP(iParam0, iParam1, 1);
if(iParam1==0){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 0);
}}else{
PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
if(iParam1==0){
iVar0=func_81(iParam0, iParam2, iParam3, iParam1);
if(func_77(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3))){
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 1);
}else{
PED::SET_PED_CONFIG_FLAG(iParam0, 34, 0);
PED::SET_PED_CONFIG_FLAG(iParam0, 36, 0);
}}}}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 14:
if(iParam3==-1){
iParam3=func_78(iParam0, iParam2, 14, 3);
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
iParam3=func_78(iParam0, iParam2, 14, 4);
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

int func_78(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_80(iParam0));
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
iVar4=(iParam1 - func_79(iParam0, func_101(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_101(iParam2));
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

int func_79(int iParam0, int iParam1){
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

int func_80(int iParam0){
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

int func_81(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_85(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_83(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_83(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
iVar3=(iVar3 + func_82(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_85(iParam3);
}

int func_82(int iParam0, int iParam1){
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_84(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_80(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_101(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_79(iParam0, func_101(iParam2)) + iVar4);
}}
return -99;
}

int func_84(int iParam0){
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

int func_85(int iParam0){
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

int func_86(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_78(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_78(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_78(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_78(iParam0, iParam2, 1, 3), -1842686353, 0));
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
iParam3=func_78(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_78(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_78(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_78(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_78(iParam0, iParam2, 1, 3);
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
iParam3=func_78(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_78(iParam0, iParam2, 14, 3);
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
iParam3=func_78(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_89(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_85(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_81(iParam0, iVar0, iVar1, iParam1);
}

int func_90(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_101(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_91(iParam0, iVar1, iVar2, iParam1);
}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_101(iParam3);
iVar1=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
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


void func_92(int iParam0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
func_98(iParam0, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(iParam0==12){
func_93(Global_2883588, 2, 1, 1, -1);
}elseif(iParam0==13){
}elseif(iParam0==14){
func_93(Global_2883588, 2, 1, 1, -1);
}else{
func_93(Global_2883588, 2, 1, 1, -1);
}}}


void func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_97(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3)){
uVar3=func_96(iVar2, iVar0, 0);
MISC::SET_BIT(&uVar3, iVar1);
func_94(iVar2, uVar3, iVar0, 1, 0);
}}


void func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_95(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}

int func_95(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_36();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_96(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_95(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


bool func_97(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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

int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
}}
return 0;
}

int func_99(int iParam0){
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_59(iParam1);
if(iVar0 >=3 || iVar0 < 0){
return 0;
}
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_60 !=-99){
if(!func_174(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_61, Global_113648.f_2365.f_539[iVar0 /*65*/].f_60) || iParam3==1){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=2;
return 1;
}}
return 0;
}

int func_101(int iParam0){
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


struct<10> func_102(int iParam0, int iParam1){
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
func_104(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_104(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_104(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_104(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_104(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_104(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_104(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_104(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_104(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_104(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_104(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_103(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_104(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_104(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_104(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_104(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_104(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_104(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_104(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_104(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_104(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_104(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_103(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_104(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_104(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_104(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_104(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_104(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_104(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_104(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_104(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_104(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_104(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_103(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_104(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_104(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_104(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_104(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_104(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_104(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_104(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_104(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_104(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_104(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_104(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_104(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_104(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_104(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_104(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_104(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_104(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_104(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_104(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_104(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_104(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_104(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_104(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_104(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_104(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_104(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_103(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_104(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_104(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_104(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_104(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_104(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_104(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_104(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_104(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_104(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_104(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_104(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_104(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_104(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_104(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_104(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_104(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_104(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_104(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_104(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_104(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_104(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_104(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_104(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_104(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_104(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_103(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_103(int iParam0, int iParam1, int iParam2, int iParam3){
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
(*iParam0)[Var2.f_2]=func_83(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
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
struct<17> func_105(int iParam0, int iParam1){
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
func_108(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_108(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_108(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_108(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_108(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_108(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_108(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_108(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_108(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_108(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_108(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_108(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_108(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_108(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_108(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_108(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_108(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_108(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_108(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_108(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_108(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_108(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_108(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_108(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_108(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_108(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_108(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_108(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_108(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_108(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_108(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_108(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_108(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_108(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_108(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_108(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_108(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_108(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_108(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_108(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_108(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_108(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_108(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_108(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_108(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_108(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_108(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_108(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_108(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_108(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_108(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_108(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_108(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_108(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_106(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_108(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_108(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_108(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_108(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_108(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_108(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_108(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_108(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_108(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_108(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_108(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_108(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_108(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_108(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_108(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_108(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_108(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_108(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_108(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_108(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_108(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_108(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_108(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_108(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_108(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_108(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_108(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_108(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_108(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_108(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_108(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_108(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_108(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_108(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_108(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_108(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_108(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_108(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_108(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_108(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_108(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_108(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_108(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_108(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_108(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_108(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_108(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_106(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_108(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_108(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_108(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_108(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_108(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_108(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_108(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_108(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_108(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_108(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_108(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_108(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_108(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_108(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_108(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_108(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_108(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_108(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_108(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_108(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_108(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_108(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_108(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_108(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_108(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_108(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_108(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_108(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_108(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_108(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_108(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_108(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_108(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_108(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_108(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_108(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_108(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_108(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_108(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_108(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_108(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_108(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_108(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_108(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_108(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_108(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_108(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_108(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_106(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_108(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_108(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_108(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_108(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_108(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_108(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_108(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_108(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_108(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_108(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_108(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_108(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_108(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_108(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_108(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_108(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_108(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_108(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_108(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_108(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_108(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_108(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_108(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_108(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_108(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_108(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_106(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_108(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_108(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_108(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_108(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_108(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_108(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_108(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_108(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_108(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_108(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_108(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_108(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_108(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_108(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_108(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_108(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_108(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_108(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_108(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_108(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_108(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_108(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_108(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_108(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_108(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_108(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_108(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_108(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_106(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_106(var uParam0, int iParam1, int iParam2, int iParam3){
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
(*uParam0)[func_107(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_107(Var2.f_2)]=func_83(iParam1, Var2.f_0, func_107(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_107(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_107(int iParam0){
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


void func_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
struct<14> func_109(int iParam0, int iParam1, int iParam2, int iParam3){
func_173();
if(iParam0==joaat("player_zero")){
func_155(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_136(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_110(iParam1, iParam2);
}
return Global_78341[0 /*14*/];
}


void func_110(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_135(iParam1);
break;
case 2:
func_134(iParam1);
break;
case 3:
func_131(iParam1);
break;
case 4:
func_130(iParam1);
break;
case 6:
func_129(iParam1);
break;
case 5:
func_128(iParam1);
break;
case 8:
func_127(iParam1);
break;
case 9:
func_126(iParam1);
break;
case 10:
func_125(iParam1);
break;
case 1:
func_124(iParam1);
break;
case 7:
func_123(iParam1);
break;
case 11:
func_122(iParam1);
break;
case 12:
func_121(iParam1);
break;
case 13:
func_120(iParam1);
break;
case 14:
func_111(iParam1);
break;
}}


void func_111(int iParam0){
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
func_119(iVar7, iParam0, 155, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_112(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_118(iParam8);
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
MISC::SET_BIT(&(uParam0->f_6), 0);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), 1);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_117(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_116(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_116(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_116(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_116(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_116(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_116(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), 1);
MISC::CLEAR_BIT(&(uParam0->f_6), 0);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 0);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_98(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 1);
}
if(func_98(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_98(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), 0);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_117(14)){
return;
}
uVar0=func_96(func_115(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 1);
}
uVar0=func_96(func_114(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_113(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_96(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), 1);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), 1);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_113(int iParam0, int iParam1, var uParam2){
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

int func_114(int iParam0, int iParam1){
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

int func_115(int iParam0, int iParam1){
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

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_97(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_96(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_117(int iParam0){
return Global_43257==iParam0;
}

int func_118(int iParam0){
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


void func_119(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_112(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_112(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_112(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_112(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_101(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_112(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}


void func_120(int iParam0){
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
func_119(iVar7, iParam0, 9, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_121(int iParam0){
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
func_119(iVar7, iParam0, 48, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_122(int iParam0){
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
func_119(iVar7, iParam0, 1, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_123(int iParam0){
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
func_119(iVar7, iParam0, 1, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_124(int iParam0){
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
func_119(iVar7, iParam0, 6, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_125(int iParam0){
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
func_119(iVar7, iParam0, 33, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_126(int iParam0){
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
func_119(iVar7, iParam0, 17, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_127(int iParam0){
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
func_119(iVar7, iParam0, 18, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_128(int iParam0){
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
func_119(iVar7, iParam0, 7, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_129(int iParam0){
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
func_119(iVar7, iParam0, 84, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_130(int iParam0){
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
func_119(iVar7, iParam0, 104, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_131(int iParam0){
if(iParam0 < 136){
func_133(iParam0);
}else{
func_132(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_119(3, iParam0, 242, -1);
}}


void func_132(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_133(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_134(int iParam0){
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
func_119(iVar7, iParam0, 9, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_135(int iParam0){
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
func_119(iVar7, iParam0, 7, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_136(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_154(iParam1);
break;
case 2:
func_153(iParam1);
break;
case 3:
func_149(iParam1);
break;
case 4:
func_148(iParam1);
break;
case 6:
func_147(iParam1);
break;
case 5:
func_146(iParam1);
break;
case 8:
func_145(iParam1);
break;
case 9:
func_144(iParam1);
break;
case 10:
func_143(iParam1);
break;
case 1:
func_142(iParam1);
break;
case 7:
func_141(iParam1);
break;
case 11:
func_140(iParam1);
break;
case 12:
func_139(iParam1);
break;
case 13:
func_138(iParam1);
break;
case 14:
func_137(iParam1);
break;
}}


void func_137(int iParam0){
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
func_119(iVar7, iParam0, 175, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_138(int iParam0){
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
func_119(iVar7, iParam0, 9, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_139(int iParam0){
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
func_119(iVar7, iParam0, 47, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_140(int iParam0){
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
func_119(iVar7, iParam0, 63, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_141(int iParam0){
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
func_119(iVar7, iParam0, 1, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_142(int iParam0){
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
func_119(iVar7, iParam0, 5, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_143(int iParam0){
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
func_119(iVar7, iParam0, 53, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_144(int iParam0){
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
func_119(iVar7, iParam0, 12, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_145(int iParam0){
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
func_119(iVar7, iParam0, 77, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_146(int iParam0){
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
func_119(iVar7, iParam0, 7, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_147(int iParam0){
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
func_119(iVar7, iParam0, 134, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_148(int iParam0){
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
func_119(iVar7, iParam0, 117, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_149(int iParam0){
if(iParam0 < 107){
func_152(iParam0);
}elseif(iParam0 < 227){
func_151(iParam0);
}else{
func_150(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_119(3, iParam0, 318, -1);
}}


void func_150(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_151(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_152(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_153(int iParam0){
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
func_119(iVar7, iParam0, 21, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_154(int iParam0){
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
func_119(iVar7, iParam0, 10, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_155(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_172(iParam1);
break;
case 2:
func_171(iParam1);
break;
case 3:
func_168(iParam1);
break;
case 4:
func_167(iParam1);
break;
case 6:
func_166(iParam1);
break;
case 5:
func_165(iParam1);
break;
case 8:
func_164(iParam1);
break;
case 9:
func_163(iParam1);
break;
case 10:
func_162(iParam1);
break;
case 1:
func_161(iParam1);
break;
case 7:
func_160(iParam1);
break;
case 11:
func_159(iParam1);
break;
case 12:
func_158(iParam1);
break;
case 13:
func_157(iParam1);
break;
case 14:
func_156(iParam1);
break;
}}


void func_156(int iParam0){
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
func_119(iVar7, iParam0, 113, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_157(int iParam0){
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
func_119(iVar7, iParam0, 10, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_158(int iParam0){
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
func_119(iVar7, iParam0, 53, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_159(int iParam0){
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
func_119(iVar7, iParam0, 45, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_160(int iParam0){
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
func_119(iVar7, iParam0, 1, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_161(int iParam0){
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
func_119(iVar7, iParam0, 5, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_162(int iParam0){
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
func_119(iVar7, iParam0, 48, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_163(int iParam0){
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
func_119(iVar7, iParam0, 20, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_164(int iParam0){
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
func_119(iVar7, iParam0, 24, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_165(int iParam0){
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
func_119(iVar7, iParam0, 14, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_166(int iParam0){
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
func_119(iVar7, iParam0, 99, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_167(int iParam0){
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
func_119(iVar7, iParam0, 113, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_168(int iParam0){
if(iParam0 < 60){
func_170(iParam0);
}else{
func_169(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_119(3, iParam0, 181, -1);
}}


void func_169(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_170(int iParam0){
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
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_171(int iParam0){
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
func_119(iVar7, iParam0, 6, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_172(int iParam0){
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
func_119(iVar7, iParam0, 7, -1);
return;
break;
}
func_112(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_173(){
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

int func_174(int iParam0, int iParam1, int iParam2){
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
func_109(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_105(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_174(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar6={
func_102(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_174(iParam0, 14, uVar6[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78341[2 /*14*/]={
func_109(iVar0, 14, iVar4, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar3){
if(func_174(iParam0, 14, iVar4)){
if(!func_64(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_90(iParam0, iVar2);
Global_78341[2 /*14*/]={
func_109(iVar0, iVar2, iVar1, -1) 
};
if(!func_64(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar8={
func_102(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 <=8){
if(!func_174(iParam0, 14, uVar8[iVar7])){
return 0;
}
iVar7++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_101(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_101(iParam1))){
return 1;
}
return 0;
}

int func_175(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_176(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_176(int iParam0){
if(func_178(iParam0)){
return func_177(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__177(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_178(int iParam0){
return iParam0 < 3;
}


void func_179(var uParam0, var uParam1){
STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), uParam0, 1);
if(MISC::IS_BIT_SET(uParam1, 0)){
STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), uParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 1)){
STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), uParam0, 1);
}
if(MISC::IS_BIT_SET(uParam1, 2)){
STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), uParam0, 1);
}}

int func_180(){
func_181();
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


void func_181(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_176(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_175(PLAYER::PLAYER_PED_ID());
if(func_178(iVar0) && (!func_117(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_178(Global_113648.f_2365.f_539.f_4321)){
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


struct<2> func_182(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_183(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_183(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "", 8);
switch (iParam0){
case 0:
StringCopy(&Var0, "ABI1", 8);
break;
case 1:
StringCopy(&Var0, "ABI2", 8);
break;
case 2:
StringCopy(&Var0, "BA1", 8);
break;
case 3:
StringCopy(&Var0, "BA2", 8);
break;
case 4:
StringCopy(&Var0, "BA3", 8);
break;
case 5:
StringCopy(&Var0, "BA3A", 8);
break;
case 6:
StringCopy(&Var0, "BA3C", 8);
break;
case 7:
StringCopy(&Var0, "BA4", 8);
break;
case 8:
StringCopy(&Var0, "DRE1", 8);
break;
case 9:
StringCopy(&Var0, "EPS1", 8);
break;
case 10:
StringCopy(&Var0, "EPS2", 8);
break;
case 11:
StringCopy(&Var0, "EPS3", 8);
break;
case 12:
StringCopy(&Var0, "EPS4", 8);
break;
case 13:
StringCopy(&Var0, "EPS5", 8);
break;
case 14:
StringCopy(&Var0, "EPS6", 8);
break;
case 15:
StringCopy(&Var0, "EPS7", 8);
break;
case 16:
StringCopy(&Var0, "EPS8", 8);
break;
case 17:
StringCopy(&Var0, "EXT1", 8);
break;
case 18:
StringCopy(&Var0, "EXT2", 8);
break;
case 19:
StringCopy(&Var0, "EXT3", 8);
break;
case 20:
StringCopy(&Var0, "EXT4", 8);
break;
case 21:
StringCopy(&Var0, "FAN1", 8);
break;
case 22:
StringCopy(&Var0, "FAN2", 8);
break;
case 23:
StringCopy(&Var0, "FAN3", 8);
break;
case 24:
StringCopy(&Var0, "HAO1", 8);
break;
case 25:
StringCopy(&Var0, "HUN1", 8);
break;
case 26:
StringCopy(&Var0, "HUN2", 8);
break;
case 27:
StringCopy(&Var0, "JOS1", 8);
break;
case 28:
StringCopy(&Var0, "JOS2", 8);
break;
case 29:
StringCopy(&Var0, "JOS3", 8);
break;
case 30:
StringCopy(&Var0, "JOS4", 8);
break;
case 31:
StringCopy(&Var0, "MAU1", 8);
break;
case 32:
StringCopy(&Var0, "MIN1", 8);
break;
case 33:
StringCopy(&Var0, "MIN2", 8);
break;
case 34:
StringCopy(&Var0, "MIN3", 8);
break;
case 35:
StringCopy(&Var0, "MRS1", 8);
break;
case 36:
StringCopy(&Var0, "MRS2", 8);
break;
case 37:
StringCopy(&Var0, "NI1", 8);
break;
case 38:
StringCopy(&Var0, "NI1A", 8);
break;
case 39:
StringCopy(&Var0, "NI1B", 8);
break;
case 40:
StringCopy(&Var0, "NI1C", 8);
break;
case 41:
StringCopy(&Var0, "NI1D", 8);
break;
case 42:
StringCopy(&Var0, "NI2", 8);
break;
case 43:
StringCopy(&Var0, "NI3", 8);
break;
case 44:
StringCopy(&Var0, "OME1", 8);
break;
case 45:
StringCopy(&Var0, "OME2", 8);
break;
case 46:
StringCopy(&Var0, "PA1", 8);
break;
case 47:
StringCopy(&Var0, "PA2", 8);
break;
case 48:
StringCopy(&Var0, "PA3", 8);
break;
case 49:
StringCopy(&Var0, "PA3A", 8);
break;
case 50:
StringCopy(&Var0, "PA3B", 8);
break;
case 51:
StringCopy(&Var0, "PA4", 8);
break;
case 52:
StringCopy(&Var0, "RAM1", 8);
break;
case 53:
StringCopy(&Var0, "RAM2", 8);
break;
case 54:
StringCopy(&Var0, "RAM3", 8);
break;
case 55:
StringCopy(&Var0, "RAM4", 8);
break;
case 56:
StringCopy(&Var0, "RAM5", 8);
break;
case 57:
StringCopy(&Var0, "SAS1", 8);
break;
case 58:
StringCopy(&Var0, "TON1", 8);
break;
case 59:
StringCopy(&Var0, "TON2", 8);
break;
case 60:
StringCopy(&Var0, "TON3", 8);
break;
case 61:
StringCopy(&Var0, "TON4", 8);
break;
case 62:
StringCopy(&Var0, "TON5", 8);
break;
default:
break;
}
return Var0;
}


void func_184(int iParam0, int iParam1){
Global_78827=iParam1;
if(Global_63356){
return;
}
if(Global_63383){
Global_63383=0;
return;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
if(Global_63356){
}
Global_63382=iParam0;
Global_63356=1;
Global_63367=1;
}}


void func_185(int iParam0, int iParam1, int iParam2, int iParam3){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
CAM::SET_WIDESCREEN_BORDERS(0, 0);
MISC::SET_TIME_SCALE(1f);
func_198();
func_197(1, 1);
func_194();
func_192();
func_191(30000);
if(iParam1==1){
func_186(iParam0, iParam2, iParam3);
}
HUD::SET_MISSION_NAME(0, 0);
}


void func_186(int iParam0, int iParam1, int iParam2){
struct<4> Var0;
var uVar1;
if(iParam0 !=-1){
func_188(iParam0, &Var0);
MemCopy(&uVar1,{
func_183(iParam0)
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar1, 0, Global_100718, 0);
func_187(&uVar1, Var0.f_3, Global_100718, iParam1, iParam2);
}}


void func_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
return;
}
if(MISC::COMPARE_STRINGS(uParam0, &Global_97751, 0, -1) !=0){
return;
}
STATS::PLAYSTATS_MISSION_OVER(uParam0, uParam1, uParam2, uParam3, uParam4, Global_94858);
StringCopy(&Global_97751, "", 64);
}


void func_188(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_189(uParam1, "Abigail1", func_182(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
break;
case 1:
func_189(uParam1, "Abigail2", func_182(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
break;
case 2:
func_189(uParam1, "Barry1", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
break;
case 3:
func_189(uParam1, "Barry2", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
break;
case 4:
func_189(uParam1, "Barry3", func_182(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 5:
func_189(uParam1, "Barry3A", func_182(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 6:
func_189(uParam1, "Barry3C", func_182(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 7:
func_189(uParam1, "Barry4", func_182(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_190(iParam0), 0, 0);
break;
case 8:
func_189(uParam1, "Dreyfuss1", func_182(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 9:
func_189(uParam1, "Epsilon1", func_182(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
break;
case 10:
func_189(uParam1, "Epsilon2", func_182(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
break;
case 11:
func_189(uParam1, "Epsilon3", func_182(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
break;
case 12:
func_189(uParam1, "Epsilon4", func_182(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
break;
case 13:
func_189(uParam1, "Epsilon5", func_182(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
break;
case 14:
func_189(uParam1, "Epsilon6", func_182(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_190(iParam0), 0, 1);
break;
case 15:
func_189(uParam1, "Epsilon7", func_182(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_190(iParam0), 0, 0);
break;
case 16:
func_189(uParam1, "Epsilon8", func_182(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_190(iParam0), 1, 0);
break;
case 17:
func_189(uParam1, "Extreme1", func_182(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 18:
func_189(uParam1, "Extreme2", func_182(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 19:
func_189(uParam1, "Extreme3", func_182(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 20:
func_189(uParam1, "Extreme4", func_182(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 21:
func_189(uParam1, "Fanatic1", func_182(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_190(iParam0), 1, 0);
break;
case 22:
func_189(uParam1, "Fanatic2", func_182(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_190(iParam0), 1, 0);
break;
case 23:
func_189(uParam1, "Fanatic3", func_182(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_190(iParam0), 0, 1);
break;
case 24:
func_189(uParam1, "Hao1", func_182(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_190(iParam0), 0, 1);
break;
case 25:
func_189(uParam1, "Hunting1", func_182(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
break;
case 26:
func_189(uParam1, "Hunting2", func_182(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
break;
case 27:
func_189(uParam1, "Josh1", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
break;
case 28:
func_189(uParam1, "Josh2", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
break;
case 29:
func_189(uParam1, "Josh3", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
break;
case 30:
func_189(uParam1, "Josh4", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
break;
case 31:
func_189(uParam1, "Maude1", func_182(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
break;
case 32:
func_189(uParam1, "Minute1", func_182(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
break;
case 33:
func_189(uParam1, "Minute2", func_182(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
break;
case 34:
func_189(uParam1, "Minute3", func_182(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 1);
break;
case 35:
func_189(uParam1, "MrsPhilips1", func_182(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
break;
case 36:
func_189(uParam1, "MrsPhilips2", func_182(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
break;
case 37:
func_189(uParam1, "Nigel1", func_182(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_190(iParam0), 1, 0);
break;
case 38:
func_189(uParam1, "Nigel1A", func_182(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
break;
case 39:
func_189(uParam1, "Nigel1B", func_182(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
break;
case 40:
func_189(uParam1, "Nigel1C", func_182(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
break;
case 41:
func_189(uParam1, "Nigel1D", func_182(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_190(iParam0), 1, 1);
break;
case 42:
func_189(uParam1, "Nigel2", func_182(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
break;
case 43:
func_189(uParam1, "Nigel3", func_182(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 1);
break;
case 44:
func_189(uParam1, "Omega1", func_182(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 45:
func_189(uParam1, "Omega2", func_182(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 46:
func_189(uParam1, "Paparazzo1", func_182(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 47:
func_189(uParam1, "Paparazzo2", func_182(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 48:
func_189(uParam1, "Paparazzo3", func_182(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 49:
func_189(uParam1, "Paparazzo3A", func_182(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 50:
func_189(uParam1, "Paparazzo3B", func_182(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 51:
func_189(uParam1, "Paparazzo4", func_182(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 0);
break;
case 52:
func_189(uParam1, "Rampage1", func_182(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
break;
case 54:
func_189(uParam1, "Rampage3", func_182(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
break;
case 55:
func_189(uParam1, "Rampage4", func_182(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
break;
case 56:
func_189(uParam1, "Rampage5", func_182(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_190(iParam0), 0, 0);
break;
case 53:
func_189(uParam1, "Rampage2", func_182(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_190(iParam0), 1, 0);
break;
case 57:
func_189(uParam1, "TheLastOne", func_182(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 58:
func_189(uParam1, "Tonya1", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 59:
func_189(uParam1, "Tonya2", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 60:
func_189(uParam1, "Tonya3", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 61:
func_189(uParam1, "Tonya4", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
case 62:
func_189(uParam1, "Tonya5", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_190(iParam0), 0, 1);
break;
default:
break;
}}


void func_189(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
uParam0->f_4=iParam4;
*uParam0=sParam1;
uParam0->f_1={
Param2 
};
uParam0->f_3=iParam3;
uParam0->f_5=iParam5;
uParam0->f_6={
Param6 
};
uParam0->f_9=iParam7;
StringCopy(&(uParam0->f_10), sParam8, 16);
uParam0->f_14=iParam9;
uParam0->f_15=iParam10;
StringCopy(&(uParam0->f_16), sParam11, 24);
uParam0->f_22=iParam12;
uParam0->f_23=iParam13;
uParam0->f_24=iParam14;
uParam0->f_25=iParam15;
uParam0->f_26=iParam16;
uParam0->f_27=iParam17;
uParam0->f_28=iParam18;
uParam0->f_29=uParam19;
uParam0->f_30=iParam20;
uParam0->f_31=iParam21;
}

int func_190(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 1;
break;
case 3:
return 1;
break;
case 4:
return 0;
break;
case 5:
return 1;
break;
case 6:
return 1;
break;
case 7:
return 0;
break;
case 8:
return 1;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 11:
return 0;
break;
case 12:
return 1;
break;
case 13:
return 0;
break;
case 14:
return 1;
break;
case 15:
return 0;
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
return 1;
break;
case 23:
return 1;
break;
case 24:
return 1;
break;
case 25:
return 1;
break;
case 26:
return 1;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 1;
break;
case 30:
return 1;
break;
case 31:
return 0;
break;
case 32:
return 1;
break;
case 33:
return 1;
break;
case 34:
return 1;
break;
case 35:
return 0;
break;
case 36:
return 0;
break;
case 37:
return 0;
break;
case 38:
return 1;
break;
case 39:
return 1;
break;
case 40:
return 1;
break;
case 41:
return 1;
break;
case 42:
return 1;
break;
case 43:
return 1;
break;
case 44:
return 0;
break;
case 45:
return 0;
break;
case 46:
return 1;
break;
case 47:
return 1;
break;
case 48:
return 0;
break;
case 49:
return 1;
break;
case 50:
return 1;
break;
case 51:
return 1;
break;
case 52:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 1;
break;
case 56:
return 1;
break;
case 53:
return 1;
break;
case 57:
return 1;
break;
case 58:
return 1;
break;
case 59:
return 1;
break;
case 60:
return 1;
break;
case 61:
return 1;
break;
case 62:
return 1;
break;
default:
break;
}
return 0;
}


void func_191(int iParam0){
Global_43808=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_192(){
if(Global_97993){
func_181();
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_193(Global_113648.f_2365.f_539.f_4321));
}else{
GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
}}


char* func_193(var uParam0){
uParam0=uParam0;
return "";
}


void func_194(){
char cVar0[24];
if(MISC::IS_XBOX360_VERSION() || func_196()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_195()){
StringCopy(&cVar0, "PRESENCE_0_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
}}


var func__195(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__196(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_197(int iParam0, int iParam1){
Global_97988=iParam0;
Global_97989=iParam1;
}


void func_198(){
if(Global_78813 !=6){}
if(Global_78818){
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_78818=0;
Global_23270.f_8892=0;
}
Global_78813=6;
Global_78815=-1;
Global_78814=-1;
}


void func_199(var uParam0){
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


void func_200(int iParam0, bool bParam1){
struct<26> Var0;
int iVar1;
bool bVar2;
int iVar3;
struct<6> Var4;
int iVar5;
int iVar6;
struct<6> Var7;
int iVar8;
int iVar9;
func_188(iParam0, &Var0);
if(!MISC::ARE_STRINGS_EQUAL(&(Var0.f_16), "")){
while (!func_228(&(Var0.f_16))){
wait(0);
}}
if(Var0.f_22 !=0){
func_227(Var0.f_22, 0);
}
func_218(iParam0, Global_78828);
if(!bParam1){
iVar1=func_217(iParam0);
if(iVar1 !=0){
if(!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(iVar1)){
AUDIO::UNLOCK_MISSION_NEWS_STORY(iVar1);
}}}
if(Var0.f_24 !=-1){
bVar2=true;
if(Var0.f_5 !=4){
iVar3=0;
while (iVar3 < 63){
iVar5=iVar3;
if(iVar5 !=iParam0){
func_188(iVar5, &Var4);
if(Var4.f_5==Var0.f_5){
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iVar5 /*6*/], 3)){
bVar2=false;
}
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iVar5 /*6*/], 0)){
func_205(iVar5);
}}}
iVar3++;
}}
if(bVar2){
func_205(Var0.f_24);
}}elseif(Var0.f_25 !=4){
iVar6=0;
while (iVar6 < 63){
iVar8=iVar6;
if(iVar8 !=iParam0){
func_188(iVar8, &Var7);
if(Var7.f_5==Var0.f_25){
func_205(iVar8);
}}
iVar6++;
}}
if(!MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3)){
MISC::SET_BIT(&(Global_113648.f_18576[iParam0 /*6*/]), 3);
Global_112735[iParam0 /*10*/].f_5=1;
func_202(iParam0);
iVar9=func_201(iParam0);
if(iVar9 !=322){
func_31(iVar9, 0, 0);
}}}

int func_201(int iParam0){
switch (iParam0){
case 0:
return 109;
break;
case 1:
return 322;
break;
case 2:
return 69;
break;
case 3:
return 70;
break;
case 4:
return 322;
break;
case 5:
return 71;
break;
case 6:
return 71;
break;
case 7:
return 72;
break;
case 8:
return 68;
break;
case 9:
return 73;
break;
case 10:
return 74;
break;
case 11:
return 75;
break;
case 12:
return 76;
break;
case 13:
return 77;
break;
case 14:
return 78;
break;
case 15:
return 79;
break;
case 16:
return 80;
break;
case 17:
return 81;
break;
case 18:
return 82;
break;
case 19:
return 83;
break;
case 20:
return 84;
break;
case 21:
return 85;
break;
case 22:
return 86;
break;
case 23:
return 87;
break;
case 24:
return 106;
break;
case 25:
return 178;
break;
case 26:
return 179;
break;
case 27:
return 88;
break;
case 28:
return 89;
break;
case 29:
return 90;
break;
case 30:
return 91;
break;
case 31:
return 107;
break;
case 32:
return 92;
break;
case 33:
return 93;
break;
case 34:
return 94;
break;
case 35:
return 110;
break;
case 36:
return 111;
break;
case 37:
return 95;
break;
case 38:
return 96;
break;
case 39:
return 97;
break;
case 40:
return 98;
break;
case 41:
return 99;
break;
case 42:
return 100;
break;
case 43:
return 101;
break;
case 44:
return 66;
break;
case 45:
return 67;
break;
case 46:
return 102;
break;
case 47:
return 103;
break;
case 48:
return 322;
break;
case 49:
return 104;
break;
case 50:
return 104;
break;
case 51:
return 105;
break;
case 52:
return 194;
break;
case 53:
return 195;
break;
case 54:
return 196;
break;
case 55:
return 197;
break;
case 56:
return 198;
break;
case 57:
return 108;
break;
case 58:
return 208;
break;
case 59:
return 209;
break;
case 60:
return 210;
break;
case 61:
return 211;
break;
case 62:
return 212;
break;
}
return 322;
}


void func_202(int iParam0){
func_204(iParam0, 1);
Global_113648.f_18576[iParam0 /*6*/].f_3=func_203();
Global_113648.f_18576.f_380++;
}

int func_203(){
return (Global_113648.f_10018.f_21 + Global_113648.f_18576.f_380);
}


void func_204(var uParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=55;
if(bParam1){
iVar1=uParam0;
if(iVar1==46){
iVar0=35;
}elseif(iVar1==49){
iVar0=36;
}elseif(iVar1==50){
iVar0=37;
}elseif(iVar1==8){
iVar0=38;
}elseif(iVar1==16){
iVar0=39;
}elseif(iVar1==38){
iVar0=40;
}elseif(iVar1==39){
iVar0=41;
}elseif(iVar1==40){
iVar0=42;
}elseif(iVar1==41){
iVar0=43;
}elseif(iVar1==42){
iVar0=44;
}elseif(iVar1==43){
iVar0=45;
}elseif(iVar1==20){
iVar0=46;
}}else{
iVar2=uParam0;
if(iVar2==53){
iVar0=0;
}elseif(iVar2==1){
iVar0=1;
}elseif(iVar2==2){
iVar0=2;
}elseif(iVar2==17){
iVar0=3;
}elseif(iVar2==19){
iVar0=4;
}elseif(iVar2==43){
iVar0=5;
}elseif(iVar2==44){
iVar0=6;
}elseif(iVar2==63){
iVar0=8;
}elseif(iVar2==12){
iVar0=9;
}elseif(iVar2==13){
iVar0=10;
}elseif(iVar2==64){
iVar0=11;
}elseif(iVar2==20){
iVar0=12;
}elseif(iVar2==30){
iVar0=13;
}elseif(iVar2==31){
iVar0=14;
}elseif(iVar2==41){
iVar0=15;
}elseif(iVar2==38){
iVar0=16;
}elseif(iVar2==9){
iVar0=18;
}elseif(iVar2==59){
iVar0=19;
}elseif(iVar2==45){
iVar0=20;
}elseif(iVar2==10){
iVar0=21;
}elseif(iVar2==14){
iVar0=22;
}elseif(iVar2==16){
iVar0=24;
}elseif(iVar2==39){
iVar0=25;
}elseif(iVar2==46){
iVar0=26;
}elseif(iVar2==60){
iVar0=27;
}elseif(iVar2==22){
iVar0=28;
}elseif(iVar2==48){
iVar0=30;
}elseif(iVar2==61){
iVar0=31;
}elseif(iVar2==49){
iVar0=32;
}elseif(iVar2==27){
iVar0=34;
}elseif(iVar2==3){
iVar0=47;
}elseif(iVar2==4){
iVar0=48;
}elseif(iVar2==5){
iVar0=49;
}elseif(iVar2==6){
iVar0=50;
}elseif(iVar2==7){
iVar0=51;
}elseif(iVar2==58){
iVar0=53;
}elseif(iVar2==90){
iVar0=7;
}elseif(iVar2==74 || iVar2==75){
iVar0=17;
}elseif(iVar2==93){
iVar0=23;
}elseif(iVar2==69 || iVar2==70){
iVar0=29;
}elseif(iVar2==84 || iVar2==85){
iVar0=33;
}}
if(iVar0 !=55){
Global_113648.f_20566.f_472=iVar0;
}}


void func_205(int iParam0){
if(iParam0==63 || iParam0==-1){
return;
}
func_206(iParam0);
MISC::SET_BIT(&(Global_113648.f_18576[iParam0 /*6*/]), 0);
}


void func_206(int iParam0){
switch (iParam0){
case 30:
func_210(22, 1, 0, 1, 0);
break;
case 15:
func_207(37, 0);
break;
default:
break;
}}


void func_207(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_209(iParam0, 0)){
func_208(iParam0, 1, 0);
func_208(iParam0, 2, 0);
func_208(iParam0, 3, 0);
func_208(iParam0, 4, 0);
func_208(iParam0, 0, 1);
Global_77348[iParam0]=1;
}}else{
func_208(iParam0, 0, 0);
}}


void func_208(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113648.f_32751[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113648.f_32751[iParam0]), iParam1);
}}

int func_209(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_210(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
if(iParam0 !=198){
if(Global_78558){
Global_42791.f_227[iParam0]=iParam1;
}else{
Global_113648.f_7263.f_227[iParam0]=iParam1;
}
Global_39797[iParam0]=iParam2;
Global_39996[iParam0]=1;
func_213(iParam0, bParam3, iParam4, 0);
func_211(iParam0, iParam1);
}}


void func_211(int iParam0, int iParam1){
switch (iParam0){
case 12:
if(iParam1==0){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
}
break;
case 71:
if(iParam1 !=1){
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
}
break;
case 65:
if(iParam1==1){
func_212(0, 0);
}else{
func_212(0, 1);
}
break;
case 6:
if(iParam1==1){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
}
break;
case 174:
if(iParam1==2){
AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
}
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
}
break;
}}


void func_212(int iParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_112286, iParam0);
}else{
MISC::CLEAR_BIT(&Global_112286, iParam0);
}
Global_112285=1;
}


bool func_213(int iParam0, bool bParam1, int iParam2, bool bParam3){
bool bVar0;
int iVar1;
int iVar2;
struct<5> Var3;
var uVar4;
bool bVar5;
int iVar6;
Global_1925773=1;
bVar0=false;
Var3.f_4=3;
Var3.f_8=3;
Var3.f_64=3;
Var3.f_75=3;
Var3.f_91=3;
func_216(&Var3, iParam0);
if(func_214()){
iVar1=Global_113648.f_7263.f_227[iParam0];
}else{
iVar1=Global_42791.f_227[iParam0];
}
iVar2=Global_40195[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1925773=1;
}else{
bVar5=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39797[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f){
bVar5=false;
Global_1925773=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
bVar5=false;
Global_1925773=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5)){
bVar5=false;
Global_1925773=1;
}
if(bVar5){
switch (Var3.f_3){
case 0:
if(iVar1==2){
}else{
if(Var3.f_4[iVar1] !=0){
ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
}
if(Var3.f_4[iVar2] !=0){
ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
}
Global_41391[iParam0]=1;
}
bVar0=true;
break;
case 1:
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
Global_1925773=1;
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REQUEST_IPL(&(Var3.f_34));
Global_1925773=1;
}
}}elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
}
}}elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
}
}}
Global_41192[iParam0]=1;
Global_41391[iParam0]=1;
bVar0=true;
break;
case 2:
iVar6=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
if(iVar6 !=0){
if(MISC::GET_HASH_KEY(&(Var3.f_50)) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_50))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_50));
}
}
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
}
elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
}
elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
}}
}
if(bParam1){
INTERIOR::REFRESH_INTERIOR(iVar6);
}}
Global_41391[iParam0]=1;
Global_41192[iParam0]=1;
bVar0=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f){
uVar4=OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar4)){
if(iVar1==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 3);
Global_41391[iParam0]=1;
bVar0=true;
}elseif(iVar1==1){
if((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar4, 10);
Global_41391[iParam0]=1;
bVar0=true;
}}elseif(iVar1==2){
bVar0=true;
}
}}
break;
case 4:
if(iVar1==0){
ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
MISC::CLEAR_BIT(&(Global_39543[(iParam0 / 32)]), (iParam0 % 32));
}elseif(iVar1==1){
ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
MISC::SET_BIT(&(Global_39543[(iParam0 / 32)]), (iParam0 % 32));
}
bVar0=true;
break;
}
if(bVar0){
Global_39996[iParam0]=0;
Global_40195[iParam0]=iVar1;
if(!func_214()){
if(!Global_40792[iParam0]){
Global_40792[iParam0]=1;
Global_40991++;
}}}}}
return bVar0;
}

int func_214(){
if((func_33()==-1 || func_33()==999) && !func_215()==0){
return 1;
}
return 0;
}

int func_215(){
return Global_32164;
}

int func_216(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 3){
uParam0->f_4[iVar0]=0;
StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
uParam0->f_64[iVar0]=0;
uParam0->f_75[iVar0]=0;
uParam0->f_91[iVar0]=0;
iVar0++;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
StringCopy(&(uParam0->f_34), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
StringCopy(&(uParam0->f_50), "", 32);
uParam0->f_58={
0f, 0f, 0f 
};
uParam0->f_61={
0f, 0f, 0f 
};
uParam0->f_68={
0f, 0f, 0f 
};
uParam0->f_71={
0f, 0f, 0f 
};
uParam0->f_74=0f;
uParam0->f_79={
0f, 0f, 0f 
};
uParam0->f_82={
0f, 0f, 0f 
};
uParam0->f_85={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
switch (iParam1){
case 3:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 4:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 0:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
*uParam0={
-93.4f, 6410.9f, 36.8f 
};
break;
case 1:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
*uParam0={
890.3647f, -2367.289f, 28.10582f 
};
break;
case 2:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020.5f, 663.41f, 154.75f 
};
uParam0->f_58={
-1018.913f, 603.2904f, 105.6611f 
};
uParam0->f_61={
-1038.913f, 639.2904f, 135.6611f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 8:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 9:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 10:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 11:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
uParam0->f_68={
-162.8918f, -2365.769f, 0f 
};
uParam0->f_71={
190.75f, 31.25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
break;
case 15:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
*uParam0={
-95.2f, 6411.3f, 31.5f 
};
break;
case 16:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 17:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 18:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 19:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 20:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
801.7f, -1810.8f, 23.3f 
};
break;
case 21:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787.3967f, -1808.858f, 29.8532f 
};
uParam0->f_58={
814f, -1750f, 20f 
};
uParam0->f_61={
790f, -1899f, 35f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
uParam0->f_64[2]=0;
break;
case 22:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
*uParam0={
163.4f, -745.7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 28:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=-112041596;
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178.534f, -668.835f, 37.2113f 
};
break;
case 32:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 33:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 34:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 35:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
*uParam0={
105.4557f, -745.4835f, 44.7548f 
};
break;
case 36:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670.3f, 41.9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50.2f, 3743.9f, 40.9f 
};
uParam0->f_79={
16.9757f, 3614.307f, 30.0677f 
};
uParam0->f_82={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_85={
16.9757f, 3614.307f, 30.0677f 
};
uParam0->f_88={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 39:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 40:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 41:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 42:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 45:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 46:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 47:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 48:
uParam0->f_3=1;
StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
uParam0->f_68={
31.134f, 3738.783f, 39.062f 
};
uParam0->f_71={
13.6f, 20f, 8.9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
break;
case 50:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450.595f, 4959.929f, 44.2575f 
};
uParam0->f_79={
2383.756f, 4929.988f, 39.52461f 
};
uParam0->f_82={
2505.756f, 5023.988f, 67.52461f 
};
break;
case 55:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2450.595f, 4959.929f, 44.2575f 
};
break;
case 51:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444.8f, 4976.4f, 50.5f 
};
break;
case 52:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 53:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 54:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 56:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 57:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 58:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 59:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
*uParam0={
1676.415f, -1626.37f, 111.4848f 
};
break;
case 60:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
*uParam0={
889.3f, -2910.9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
*uParam0={
-1600.619f, 4443.457f, 0.725f 
};
break;
case 62:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
*uParam0={
966.1f, -114.8f, 75.2f 
};
break;
case 63:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
*uParam0={
-3086.428f, 339.2523f, 6.3717f 
};
break;
case 64:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1675.178f, -1143.605f, 12.0175f 
};
break;
case 65:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 66:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 67:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
*uParam0={
131.29f, -631.22f, 261.85f 
};
break;
case 68:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
*uParam0={
233.9f, -1355f, 30.3f 
};
break;
case 69:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
*uParam0={
234.4f, -1355.6f, 40.5f 
};
break;
case 70:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 71:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 72:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 73:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 74:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 75:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 76:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 105:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 106:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861.28f, 2402.11f, 58.53f 
};
break;
case 107:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
*uParam0={
-1327.46f, -274.82f, 54.25f 
};
break;
case 108:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697.32f, 3162.18f, 58.1f 
};
break;
case 109:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119.12f, 3058.21f, 53.25f 
};
break;
case 110:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
*uParam0={
-804.25f, -2276.88f, 23.59f 
};
break;
case 111:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 112:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 77:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
480.9554f, -1321.21f, 28.2037f 
};
uParam0->f_85={
508.3f, -1299.3f, 39.4f 
};
uParam0->f_88={
459.9f, -1363.2f, 21.4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case 79:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
*uParam0={
-1088.6f, -1650.6f, 6.4f 
};
break;
case 80:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
*uParam0={
-13.83f, -1455.45f, 31.81f 
};
break;
case 113:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
*uParam0={
-1277.629f, -2030.913f, 1.2823f 
};
break;
case 114:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
*uParam0={
2384.969f, 4277.583f, 30.379f 
};
break;
case 115:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
*uParam0={
1577.881f, 3836.107f, 30.7717f 
};
break;
case 87:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-180.5771f, -1016.928f, 28.2893f 
};
break;
case 88:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
*uParam0={
-630.4205f, -236.7843f, 37.057f 
};
uParam0->f_79={
(-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) 
};
uParam0->f_82={
(-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) 
};
break;
case 89:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
*uParam0={
-583.1606f, -282.3967f, 35.394f 
};
break;
case 90:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
*uParam0={
-14.651f, -604.3639f, 25.1823f 
};
break;
case 91:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2773.61f, 2835.327f, 35.1903f 
};
break;
case 94:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
1743.682f, 3286.251f, 40.0875f 
};
break;
case 95:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222.9f, 1877.9f, 79.9f 
};
uParam0->f_58={
1206.8f, 1803f, 43.9f 
};
uParam0->f_61={
1329f, 2060.4f, 143.9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44.02f 
};
break;
case 103:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
*uParam0={
391.81f, -962.71f, 41.97f 
};
break;
case 102:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
*uParam0={
424.2f, -1944.31f, 33.09f 
};
break;
case 92:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626.374f, 2949.869f, 39.1409f 
};
break;
case 93:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626.374f, 2949.869f, 39.1409f 
};
break;
case 118:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 116:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 117:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 119:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 120:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 122:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 121:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 123:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 124:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 170:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 171:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810.5301f, 187.7868f, 71.4786f 
};
break;
case 125:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 164:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 165:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 166:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 167:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 168:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 169:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 126:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 127:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 128:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 129:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 130:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 131:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 132:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 133:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 134:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.805f, 3818.555f, 32.4363f 
};
break;
case 179:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30.8793f, -1088.336f, 25.4221f 
};
uParam0->f_68={
-29.3f, -1086.35f, 25.57f 
};
uParam0->f_71={
5.5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
StringCopy(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 175:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_68={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_71={
2.5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_68={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_71={
3f, 1f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 177:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_68={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_71={
1f, 3f, 2f 
};
uParam0->f_74=-45f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 178:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 173:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 180:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
*uParam0={
23.9346f, -669.7552f, 30.8853f 
};
break;
case 181:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
StringCopy(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300.9423f, -586.1784f, 42.2919f 
};
break;
case 135:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 136:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 137:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 138:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 139:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 140:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 141:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 142:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 143:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 144:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 145:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 146:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.129f, -1523.028f, 9.6327f 
};
break;
case 147:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150.039f, -1521.761f, 9.6331f 
};
break;
case 148:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150.039f, -1521.761f, 9.6331f 
};
break;
case 149:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
1856.029f, 3682.998f, 33.2675f 
};
break;
case 150:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-440.5073f, 6018.766f, 30.49f 
};
break;
case 151:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.386f, 793.0532f 
};
break;
case 152:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.386f, 793.0532f 
};
break;
case 153:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 154:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 155:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.614f, 30.1015f 
};
break;
case 172:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
StringCopy(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96.4811f, -1291.294f, 28.2688f 
};
break;
case 182:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
139.5795f, -3092.962f, 8.64631f 
};
uParam0->f_79={
Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_82={
Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_85={
Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_88={
Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
203.7784f, -3131.767f, 7.041344f 
};
uParam0->f_79={
Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) 
};
uParam0->f_82={
Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) 
};
break;
case 184:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
144.7706f, -2982.659f, 7.952507f 
};
uParam0->f_79={
Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) 
};
uParam0->f_82={
Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) 
};
break;
case 185:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1154.965f, -1520.983f, 9.132731f 
};
uParam0->f_79={
-1154.965f, -1520.983f, 9.132731f 
};
uParam0->f_82={
-1158.965f, -1524.983f, 11.63273f 
};
break;
case 187:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1052.204f, 371.9537f, 67.914f 
};
uParam0->f_79={
-1052.204f, 371.9537f, 67.914f 
};
uParam0->f_82={
-1048.064f, 368.0221f, 70.9128f 
};
break;
case 186:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
1954.984f, 3792.991f, 30.3086f 
};
uParam0->f_79={
1954.984f, 3792.991f, 30.3086f 
};
uParam0->f_82={
1983.45f, 3830.78f, 36.2726f 
};
break;
case 188:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1122.202f, 48.5724f, 51.4652f 
};
uParam0->f_79={
-1122.202f, 48.5724f, 51.4652f 
};
uParam0->f_82={
-1076.233f, 92.1041f, 60.0617f 
};
break;
case 81:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2199.138f, 223.4648f, 181.1118f 
};
break;
case 82:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2242.785f, 263.4779f, 173.6154f 
};
break;
case 83:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
3832.9f, 3665.5f, -23.4f 
};
break;
case 84:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
2814.7f, 4758.5f, 47.9f 
};
break;
case 85:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1096.505f, 4.5754f, 49.8103f 
};
break;
case 86:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-781.6566f, 186.8937f, 71.8352f 
};
break;
case 189:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55.7f, -1391.3f, 30.5f 
};
break;
case 190:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700.091f, -933.641f, 20.308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096.381f, -836.17f, 36.6755f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449.6558f, -980.1375f, 42.6918f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363.0175f, -1598.079f, 35.9502f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
-1601.424f, 2808.213f, 16.2598f 
};
break;
case 97:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
23.7318f, -647.2123f, 37.9549f 
};
break;
case 98:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
*uParam0={
12.9689f, -648.4698f, 9.7693f 
};
break;
case 99:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
*uParam0={
-1459.127f, 486.1281f, 115.2016f 
};
break;
case 100:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
*uParam0={
-248.4916f, -2010.509f, 34.5743f 
};
break;
case 101:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
*uParam0={
-1081.347f, -263.1502f, 38.7152f 
};
break;
case 195:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
*uParam0={
136.1795f, -750.701f, 262.0516f 
};
break;
case 197:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
*uParam0={
2096f, 3168.7f, 42.9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 157:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 158:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 163:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 159:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 161:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 162:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 160:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 96:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
*uParam0={
19.0568f, 536.4818f, 169.6277f 
};
break;
}
return 1;
}

int func_217(int iParam0){
switch (iParam0){
case 46:
return 42;
break;
case 47:
return 43;
break;
case 49:
return 44;
break;
case 50:
return 45;
break;
case 8:
if(MISC::IS_BIT_SET(Global_113648.f_18576.f_382, 0)){
return 46;
}
break;
case 16:
return 47;
break;
case 38:
return 48;
break;
case 39:
return 49;
break;
case 40:
return 50;
break;
case 41:
return 51;
break;
case 42:
return 52;
break;
case 43:
if(Global_113648.f_9087.f_99.f_58[101]){
return 53;
}else{
return 54;
}
break;
case 20:
return 55;
break;
}
return 0;
}


void func_218(int iParam0, bool bParam1){
switch (iParam0){
case 46:
func_219(4, bParam1);
break;
case 16:
func_219(6, bParam1);
break;
case 37:
func_219(17, bParam1);
break;
case 31:
func_219(16, bParam1);
break;
}}


void func_219(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 >=0 && iVar0 <=31){
if(!func_226(iParam0)){
MISC::SET_BIT(&(Global_113648.f_26436), iVar0);
if(!bParam1){
func_224(func_225(iParam0));
if(!func_223(68)){
func_220("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
}}}}}


void func_220(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_221(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_221(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_20412[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113648.f_20412.f_145 < 9){
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=uParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
}
Global_113648.f_20412.f_145++;
func_222();
}}


void func_222(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113648.f_20412.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 0)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[0]){
Global_113648.f_20412.f_146[0]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 1)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[1]){
Global_113648.f_20412.f_146[1]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113648.f_20412[iVar0 /*16*/].f_11, 2)){
if(Global_113648.f_20412[iVar0 /*16*/].f_12 > Global_113648.f_20412.f_146[2]){
Global_113648.f_20412.f_146[2]=Global_113648.f_20412[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_223(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113648.f_20412.f_150[iVar1], iVar0);
}
return 0;
}


void func_224(var uParam0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}


char* func_225(int iParam0){
switch (iParam0){
case 0:
return "CM_STOMIC";
break;
case 1:
return "CM_STOFRA";
break;
case 2:
return "CM_STOTRE";
break;
case 3:
return "CM_STOAMA";
break;
case 4:
return "CM_STOBEV";
break;
case 5:
return "CM_STOBRA";
break;
case 6:
return "CM_STOCHR";
break;
case 7:
return "CM_STODAV";
break;
case 8:
return "CM_STODEV";
break;
case 9:
return "CM_STODRF";
break;
case 10:
return "CM_STOFAB";
break;
case 11:
return "CM_STOFLO";
break;
case 12:
return "CM_STOJIM";
break;
case 13:
return "CM_STOLAM";
break;
case 14:
return "CM_STOLAZ";
break;
case 15:
return "CM_STOLES";
break;
case 16:
return "CM_STOMAU";
break;
case 17:
return "CM_STOTHO";
break;
case 18:
return "CM_STONER";
break;
case 19:
return "CM_STOPAT";
break;
case 20:
return "CM_STOSIM";
break;
case 21:
return "CM_STOSOL";
break;
case 22:
return "CM_STOSTE";
break;
case 23:
return "CM_STOSTR";
break;
case 24:
return "CM_STOTAN";
break;
case 25:
return "CM_STOTAO";
break;
case 26:
return "CM_STOTRA";
break;
case 27:
return "CM_STOWAD";
break;
}
return "ERROR!";
}

int func_226(int iParam0){
if(iParam0 !=-1 && iParam0 !=28){
return MISC::IS_BIT_SET(Global_113648.f_26436, iParam0);
}
return 0;
}


void func_227(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113648.f_8615[iParam0]=1;
Global_113648.f_8615.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}

int func_228(char* sParam0){
int iVar0;
iVar0=1424;
if(!SCRIPT::DOES_SCRIPT_EXIST(sParam0)){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races")){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 0){
return 1;
}
iVar0=128;
}
SCRIPT::REQUEST_SCRIPT(sParam0);
if(SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
start_new_script(sParam0, iVar0);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
return 1;
}
return 0;
}

int func_229(){
return func_230(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_230(char* sParam0, int iParam1){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
iVar2=MISC::GET_HASH_KEY(sParam0);
iVar3=0;
iVar3=0;
while (iVar3 < 63){
iVar0=iVar3;
func_188(iVar0, &uVar1);
if(MISC::GET_HASH_KEY(uVar1)==iVar2){
return iVar0;
}
iVar3++;
}
if(iParam1==0){}
return -1;
}


void func_231(int iParam0, bool bParam1){
if(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(iParam0);
}}
if(bParam1){
while (!CAM::IS_SCREEN_FADED_IN()){
wait(0);
}}}

int func_232(int iParam0, struct<3> Param1, float fParam2, bool bParam3, int iParam4){
bool bVar0;
float fVar1;
bVar0=false;
if(func_5(iParam0)){
if(bParam3==1){
fVar1=0f;
bVar0=MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, 0, 0);
if(bVar0){
Param1.f_2=fVar1;
}}
ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, iParam4);
ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
if(bParam3){
return bVar0;
}
return 1;
}
return 0;
}


void func_233(int iParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_75457){
if(Global_75458[iVar0 /*9*/]==iParam0){
if(bParam2){
Global_75458[iVar0 /*9*/].f_1=iParam1;
}else{
Global_75458[iVar0 /*9*/].f_1=(Global_75458[iVar0 /*9*/].f_1 + iParam1);
}
return;
}
iVar0++;
}
if(Global_75458[iVar0 /*9*/] !=-1){
if(Global_63587[Global_75458[iVar0 /*9*/] /*13*/]==3){
if(Global_75458[iVar0 /*9*/].f_1 > 1){
Global_75458[iVar0 /*9*/].f_1=1;
}
if(Global_75458[iVar0 /*9*/].f_1 < 0){
Global_75458[iVar0 /*9*/].f_1=0;
}}}}


void func_234(){
Global_20591=0;
func_235();
}


void func_235(){
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


void func_236(){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
CAM::SET_USE_HI_DOF();
if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()){}
switch (iLocal_217){
case 0:
if(func_248(9, bLocal_703)){
if(func_247()){
iLocal_301=0;
iLocal_302=0;
iLocal_303=0;
iLocal_304=0;
if(func_654(iLocal_475)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_475, "Beverly", 0, 0, 0);
}
if(func_6(iLocal_759)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_759, "Beverlys_Car", 0, joaat("fq2"), 0);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 0f, 0);
RECORDING::REPLAY_START_EVENT(1);
CUTSCENE::START_CUTSCENE(0);
wait(0);
if(iLocal_349==1){
STREAMING::STREAMVOL_DELETE(uLocal_348);
}
func_231(800, 0);
iLocal_217=1;
}}
break;
case 1:
if(iLocal_304==0){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0)){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
iLocal_304=1;
}}
if(iLocal_301==0){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0)){
RECORDING::REPLAY_STOP_EVENT();
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
iLocal_301=1;
}}
if(iLocal_303==0 && iLocal_302==0){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverly", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverlys_Car", 0)){
if(!func_28(iLocal_475, iLocal_759)){
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
}
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_475, 0, 0);
VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_759, 1);
VEHICLE::SET_VEHICLE_FIXED(iLocal_759);
VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_759, 3, 1, 1, 1);
TASK::OPEN_SEQUENCE_TASK(&uLocal_662);
TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_759, 100f, 786468);
TASK::CLOSE_SEQUENCE_TASK(uLocal_662);
PED::SET_PED_KEEP_TASK(iLocal_475, 1);
TASK::TASK_PERFORM_SEQUENCE(iLocal_475, uLocal_662);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_662);
iLocal_303=1;
iLocal_302=1;
}}
if(((iLocal_303==1 && iLocal_302==1) && iLocal_301==1) && iLocal_304==1){
iLocal_217=2;
}else{
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::DESTROY_CAM(uLocal_663, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::DESTROY_CAM(uLocal_665, 0);
}
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
break;
case 2:
iLocal_692=10;
func_237(1, 1, 1, 1);
break;
}}


void func_237(int iParam0, int iParam1, int iParam2, bool bParam3){
var uVar0;
uVar0=PLAYER::GET_PLAYER_INDEX();
PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
func_238(0, 1, 0, 0, 0, 0, 0);
if(iParam2==1){
HUD::DISPLAY_RADAR(1);
HUD::DISPLAY_HUD(1);
}
HUD::CLEAR_HELP(1);
if(iParam0==1){
CAM::SET_WIDESCREEN_BORDERS(0, 0);
}
if(iParam1==1){
if((iLocal_34 !=0 && iLocal_34 !=joaat("object")) && iLocal_34 !=joaat("gadget_parachute")){
if(func_5(PLAYER::PLAYER_PED_ID())){
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, 0)){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_34, 0);
}}}}
if(func_654(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
}}


void func_238(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_246(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_245()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_244(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_246(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_244(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_242(PLAYER::PLAYER_ID())) && !func_240(PLAYER::PLAYER_ID(), 0)) && !func_239()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_242(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_239(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_240(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_241(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_241(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_36();
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

int func_242(int iParam0){
if(func_240(iParam0, 0)){
return 1;
}
if(func_243()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_243(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_244(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_245(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_246(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


bool func_247(){
bool bVar0;
bVar0=CUTSCENE::HAS_CUTSCENE_LOADED();
if(!Global_78557){
if(!bVar0){
Global_78557=1;
}}
return bVar0;
}

int func_248(int iParam0, bool bParam1){
switch (iParam0){
case 0:
if(bParam1){
bLocal_703=false;
func_336(1, 1, 1);
}elseif(((func_324(26, Local_462, 0) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0, -1)){
return 1;
}
break;
case 1:
if(bParam1){
if(((func_324(0, Local_462, 0) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0, -1)){
func_323();
if(func_654(iLocal_475)){
func_322(iLocal_475, 0);
}
bLocal_703=false;
func_336(1, 1, 1);
}}elseif(func_324(1, Local_215, fLocal_216)){
func_315(-10.66244f, 283.0703f, 110.2373f, -76.66436f, 301.1816f, 104.5858f, 6f, -88.6147f, 303.8292f, 105.9208f, 245.3452f, 1, 1, 1, 0, 0);
func_315(-86.61621f, 297.2772f, 102.9432f, -55.1581f, 286.5398f, 109.6697f, 16.75f, -88.6147f, 303.8292f, 105.9208f, 245.3452f, 1, 1, 1, 0, 0);
func_266(0f, 0f, 0f, 0f, 1, 1);
func_262(Local_215, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
iLocal_232=MISC::GET_GAME_TIMER();
return 1;
}
break;
case 2:
if(bParam1){
if(((func_324(1, Local_215, 124f) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0, -1)){
func_261();
if(!func_260()){
func_232(PLAYER::PLAYER_PED_ID(), -72.5612f, 298.2493f, 105.2336f, 247.2199f, 0, 1);
}
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
func_234();
func_323();
MISC::CLEAR_AREA_OF_PEDS(-73.9858f, 299.3878f, 105.4073f, 80f, 0);
if(func_654(iLocal_475)){
func_322(iLocal_475, 0);
func_232(iLocal_475, -70.7533f, 299.0078f, 105.3157f, 247.7592f, 1, 1);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_475, -60.9116f, 295.3501f, 105.0975f, 1f, 20000, 1048576000, 0, 1193033728);
}
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
func_232(PLAYER::PLAYER_PED_ID(), -70.9722f, 297.7738f, 105.2184f, 247.6793f, 1, 1);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -63.1068f, 294.9655f, 105.0442f, 1f, -1, 1f, 2113, 1193033728);
bLocal_703=false;
func_259(0, -1, 1);
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
func_336(1, 0, 1);
iLocal_232=MISC::GET_GAME_TIMER();
iLocal_309=1;
}}elseif((func_324(6, Local_462, 0) && func_324(11, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0, -1)){
iLocal_232=MISC::GET_GAME_TIMER();
return 1;
}
break;
case 3:
if(bParam1){
if(((func_324(1, -13.3842f, 282.4926f, 107.2337f, 257.872f) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0, -1)){
func_261();
if(!func_260()){
func_232(PLAYER::PLAYER_PED_ID(), -14.1493f, 280.7966f, 107.2078f, 317.7051f, 0, 1);
}
func_234();
func_323();
iLocal_744=3;
if(func_654(iLocal_475)){
func_322(iLocal_475, 0);
}
bLocal_703=false;
func_336(1, 1, 1);
}}else{
iLocal_232=MISC::GET_GAME_TIMER();
return 1;
}
break;
case 4:
if(bParam1){
if(((((func_324(1, -3.227f, 318.2857f, 109.9195f, 63.3365f) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", 0, -1)){
func_261();
if(!func_260()){
func_232(PLAYER::PLAYER_PED_ID(), -2.2002f, 317.2632f, 109.9189f, 60.7242f, 0, 1);
}
func_232(Local_483[0 /*5*/], 11.2819f, 324.9571f, 109.9188f, 252.0409f, 0, 1);
func_232(Local_483[1 /*5*/], 12.4255f, 323.3313f, 109.9188f, 54.7387f, 0, 1);
func_234();
func_323();
iLocal_744=6;
if(func_654(iLocal_475)){
func_322(iLocal_475, 0);
}
func_336(1, 1, 1);
bLocal_703=false;
}}elseif(func_324(17, Local_462, 0)){
iLocal_720=1;
iLocal_719=1;
iLocal_707=1;
iLocal_232=MISC::GET_GAME_TIMER();
return 1;
}
break;
case 5:
if(bParam1){
if((((((func_324(1, -36.7532f, 323.5341f, 111.6957f, 165.7917f) && func_324(9, Local_460, fLocal_469)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(10, Local_462, 0)) && func_324(17, Local_462, 0)) && func_324(16, Local_462, 0)){
if(iLocal_290==0){
func_259(0, -1, 1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_220);
}
if(func_5(Local_480.f_0)){
AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
}
func_13("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
iLocal_290=1;
}
if(AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
if(!func_260()){
func_232(PLAYER::PLAYER_PED_ID(), -33.681f, 320.9442f, 111.6958f, 182.6031f, 0, 1);
}
func_232(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -1000f, -1, 1, 0.4f, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
wait(2000);
func_323();
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
STREAMING::REQUEST_CLIP_SET(sLocal_752);
STREAMING::REQUEST_CLIP_SET(sLocal_753);
iLocal_244=1;
func_258();
func_261();
func_256(1);
func_255(1);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(1);
if(CAM::DOES_CAM_EXIST(uLocal_663) && func_654(Local_480.f_0)){
CAM::POINT_CAM_AT_ENTITY(uLocal_663, Local_480.f_0, Local_462, 1);
}
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
bLocal_703=false;
}else{
func_13("TK************ PREPARE_SYNCHRONIZED_AUDIO_EVENT FAILED! ************TK");
}}}elseif(func_324(16, Local_462, 0) && func_324(17, Local_462, 0)){
return 1;
}
break;
case 6:
if(bParam1){
if(((((((func_324(1, -36.7532f, 323.5341f, 111.6957f, 165.7917f) && func_324(4, Local_482.f_1, 0)) && func_324(9, Local_460, 0)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(10, Local_462, 0)) && func_324(17, Local_462, 0)) && func_324(16, Local_462, 0)){
if(iLocal_290==0){
func_259(0, -1, 1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_220);
}
AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
func_13("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
iLocal_290=1;
}
if(AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
func_232(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -1000f, -1, 1, 0.4f, 0, 0, 0);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
wait(2000);
func_323();
func_258();
func_261();
func_256(1);
func_254();
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(1);
if(CAM::DOES_CAM_EXIST(uLocal_663) && func_654(Local_480.f_0)){
CAM::POINT_CAM_AT_ENTITY(uLocal_663, Local_480.f_0, Local_462, 1);
}
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
bLocal_703=false;
}else{
func_13("TK************ PREPARE_SYNCHRONIZED_AUDIO_EVENT FAILED! ************TK");
}}}elseif(func_324(12, Local_462, 0)){
if(func_5(iLocal_759)){
ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
}
iLocal_694=0;
return 1;
}
break;
case 7:
if(bParam1){
if(((((((func_324(1, -33.2434f, 319.02f, 111.6952f, 154.2353f) && func_324(5, Local_462, 0)) && func_324(9, Local_460, fLocal_469)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(12, Local_462, 0)) && func_324(25, Local_462, 0)) && func_324(10, Local_462, 0)){
func_232(iLocal_475, -36.5195f, 326.093f, 111.6962f, 187.1461f, 0, 1);
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
if(!func_260()){
func_232(PLAYER::PLAYER_PED_ID(), -33.1227f, 318.9001f, 111.6958f, 154.1067f, 0, 1);
}
func_259(0, -1, 1);
func_232(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
wait(2000);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1065353216);
func_234();
func_323();
func_258();
func_253();
PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_221, fLocal_690);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_SPOTTED_RESTART");
TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -4f, -1, 0, 0.739f, 0, 0, 0);
wait(100);
func_231(800, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1065353216);
bLocal_703=false;
}}else{
if(!HUD::DOES_BLIP_EXIST(iLocal_661)){
iLocal_661=func_252(iLocal_475, 1, 1, 5);
}
if(func_5(iLocal_759)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 1);
func_251(iLocal_759);
}
if(((((func_324(4, Local_462, 0) && func_324(5, Local_462, 0)) && func_324(19, Local_462, 0)) && func_324(18, Local_462, 0)) && func_324(20, Local_462, 0)) && func_324(17, Local_462, 0)){
iLocal_232=MISC::GET_GAME_TIMER();
if(func_654(iLocal_475)){
func_322(iLocal_475, 0);
}
return 1;
}}
break;
case 8:
if(bParam1){
if((((((((((func_324(1, Local_215, 344.7485f) && func_324(5, Local_462, 0)) && func_324(9, Local_460, fLocal_469)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(4, Local_482.f_1, Local_482.f_4)) && func_324(18, Local_462, 0)) && func_324(19, Local_462, 0)) && func_324(20, Local_462, 0)) && func_324(17, Local_462, 0)) && func_324(25, Local_462, 0)){
func_323();
func_232(iLocal_475, Local_215, 344.7485f, 0, 1);
func_250(&uLocal_489, 3, iLocal_475, "BEVERLY", 0, 1);
func_250(&uLocal_489, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
func_259(0, -1, 1);
func_249();
if(func_5(iLocal_759)){
ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
}
if(!func_28(iLocal_475, iLocal_759)){
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
}
MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
iLocal_228=MISC::GET_GAME_TIMER();
iLocal_228 +=1000;
iLocal_736=0;
wait(100);
MISC::CLEAR_AREA_OF_PEDS(-73.9858f, 299.3878f, 105.4073f, 80f, 0);
func_336(0, 0, 1);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_CAR_RESTART");
bLocal_703=false;
}}elseif(func_324(25, Local_462, 0)){
func_12(&iLocal_660);
iLocal_232=MISC::GET_GAME_TIMER();
return 1;
}
break;
case 9:
if(bParam1){
if(func_324(9, -69.2061f, -523.7703f, 39.2051f, 163.9675f)){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
func_259(0, -1, 1);
if(!func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 2);
}
if(!func_28(iLocal_475, iLocal_759)){
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
}
CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
if(func_5(iLocal_759)){
ENTITY::SET_ENTITY_COORDS(iLocal_759, -69.2061f, -523.7703f, 39.2051f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iLocal_759, 163.9675f);
}
func_323();
bLocal_703=false;
}}else{
iLocal_232=MISC::GET_GAME_TIMER();
return 1;
}
break;
case 12:
if(bParam1){
if(func_324(5, Local_462, 0) && func_324(1, Local_215, 344.7485f)){
iLocal_736=0;
func_336(1, 1, 1);
bLocal_703=false;
}}elseif((func_324(9, Local_460, fLocal_469) && func_324(1, Local_215, 344.7485f)) && func_324(22, Local_462, 0)){
if(!func_28(iLocal_475, iLocal_759)){
TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_475, iLocal_759, 1);
}
return 1;
}
return 0;
break;
case 13:
if(bParam1){
if(func_324(5, Local_462, 0) && func_324(1, Local_215, 344.7485f)){
iLocal_736=0;
func_336(1, 1, 1);
bLocal_703=false;
}}elseif(((func_324(9, Local_460, fLocal_469) && func_324(1, Local_459, 0)) && func_324(23, Local_462, 0)) && func_324(18, Local_462, 0)){
if(func_5(iLocal_759)){
ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
return 1;
}}
return 0;
break;
case 14:
if(bParam1){
func_13("JUMPED");
iLocal_736=0;
func_336(1, 1, 1);
bLocal_703=false;
}elseif(((func_324(9, Local_460, fLocal_469) && func_324(1, Local_459, 0)) && func_324(18, Local_462, 0)) && func_324(24, Local_462, 0)){
if(func_5(iLocal_759)){
ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
return 1;
}}
return 0;
break;
}
return 0;
}


void func_249(){
if(iLocal_281==0){
if(!func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 1);
}}
if(func_654(iLocal_475)){
if(!func_28(iLocal_475, iLocal_759)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_475);
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
}}
if(func_654(Local_480.f_0)){
if(!func_28(Local_480.f_0, uLocal_758[0])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_480.f_0);
PED::SET_PED_INTO_VEHICLE(Local_480.f_0, uLocal_758[0], -1);
}}
if(func_654(Local_481.f_0)){
if(!func_28(Local_481.f_0, uLocal_758[1])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_481.f_0);
PED::SET_PED_INTO_VEHICLE(Local_481.f_0, uLocal_758[1], -1);
}}
if(func_654(Local_482.f_0)){
if(func_5(uLocal_758[2])){
if(!func_28(Local_482.f_0, uLocal_758[2])){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_482.f_0);
PED::SET_PED_INTO_VEHICLE(Local_482.f_0, uLocal_758[2], -1);
}}}}


void func_250(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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

int func_251(int iParam0){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)){
return VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
}}
return 0;
}

int func_252(int iParam0, bool bParam1, int iParam2, int iParam3){
int iVar0;
bool bVar1;
iVar0=0;
bVar1=true;
if(bVar1){
if(func_5(iParam0)){
iVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam2);
HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
HUD::SET_BLIP_SCALE(iVar0, 0.7f);
if(!bParam1){
HUD::SET_BLIP_SCALE(iVar0, 0.5f);
}}}
return iVar0;
}


void func_253(){
if(iLocal_292==0){
uLocal_221=PED::CREATE_SYNCHRONIZED_SCENE(-30.99041f, 301.0923f, 111.6819f, 0f, 0f, 0f, 2);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_221, 0);
if(func_654(Local_480.f_0)){
if(!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 1)){
TASK::TASK_LOOK_AT_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_SYNCHRONIZED_SCENE(Local_480.f_0, uLocal_221, "rcmpaparazzo_2", "shag_action_poppy", 4f, -4f, 0, 0, 1148846080, 0);
}else{
TASK::TASK_SMART_FLEE_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}}
if(func_654(Local_481.f_0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, 1);
if(!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 1)){
TASK::TASK_LOOK_AT_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_SYNCHRONIZED_SCENE(Local_481.f_0, uLocal_221, "rcmpaparazzo_2", "shag_action_a", 4f, -2f, 0, 0, 1148846080, 0);
}else{
TASK::TASK_SMART_FLEE_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}}
PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_221, 0.835512f);
iLocal_292=1;
}}


void func_254(){
Local_473.f_0=255;
Local_473.f_1=0;
Local_473.f_2=0;
}

int func_255(bool bParam0){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(bParam0){
if(!CAM::DOES_CAM_EXIST(uLocal_663)){
uLocal_663=CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -33.4707f, 318.6031f, 113.3355f, -1.6576f, 0f, -170.9825f, 45f, 1, 2);
if(iLocal_692 !=5){
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(16f);
return 1;
}}else{
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(16f);
return 1;
}}elseif(!CAM::DOES_CAM_EXIST(uLocal_663)){
if(func_5(iLocal_759) && func_654(PLAYER::PLAYER_PED_ID())){
uLocal_663=CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(iLocal_759), 50f, 1, 2);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
return 1;
}}}elseif(func_5(iLocal_759) && func_654(PLAYER::PLAYER_PED_ID())){
CAM::SET_CAM_PARAMS(uLocal_663, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(iLocal_759), 50f, 0, 1, 1, 2);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
return 1;
}}
return 0;
}


void func_256(int iParam0){
if(func_654(Local_480.f_0) && func_654(Local_481.f_0)){
switch (iParam0){
case 0:
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_218)){
func_261();
func_257();
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, 1);
uLocal_218=PED::CREATE_SYNCHRONIZED_SCENE(-30.99041f, 301.0923f, 111.6319f, 0f, 0f, 0f, 2);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_218, 1);
TASK::TASK_SYNCHRONIZED_SCENE(Local_480.f_0, uLocal_218, "rcmpaparazzo_2", "shag_loop_poppy", 1000f, -4f, 64, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(Local_481.f_0, uLocal_218, "rcmpaparazzo_2", "shag_loop_a", 1000f, -4f, 64, 0, 1148846080, 0);
func_13("TK************ SYNCH SCENE1 STARTED ************TK");
}
break;
case 1:
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
func_261();
func_257();
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, 1);
uLocal_220=PED::CREATE_SYNCHRONIZED_SCENE(-30.99041f, 301.0923f, 111.6819f, 0f, 0f, 0f, 2);
PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_220, 0);
TASK::TASK_SYNCHRONIZED_SCENE(Local_480.f_0, uLocal_220, "rcmpaparazzo_2", "shag_action_poppy", 1000f, -4f, 0, 0, 1148846080, 0);
TASK::TASK_SYNCHRONIZED_SCENE(Local_481.f_0, uLocal_220, "rcmpaparazzo_2", "shag_action_a", 1000f, -2f, 0, 0, 1148846080, 0);
AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_220);
iLocal_290=0;
func_13("TK************ SYNCH SCENE2 STARTED - RESET AUDIO POSITION BOOL ************TK");
}
break;
}}}


void func_257(){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_352)){
iLocal_352=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_npc_phone"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_480.f_0, 0f, 0f, 10f), 1, 1, 0);
ENTITY::SET_ENTITY_LOD_DIST(iLocal_352, 100);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_352)){
if(!ENTITY::IS_ENTITY_ATTACHED(iLocal_352)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_352, Local_480.f_0, PED::GET_PED_BONE_INDEX(Local_480.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}}}


void func_258(){
if(iLocal_260==0){
STREAMING::REQUEST_CLIP_SET(sLocal_753);
STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
iLocal_260=1;
}elseif(iLocal_260==1){
if(STREAMING::HAS_CLIP_SET_LOADED(sLocal_753) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))){
iLocal_260=2;
}}elseif(iLocal_260==2){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
iLocal_353=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 10f), 1, 1, 0);
ENTITY::SET_ENTITY_VISIBLE(iLocal_353, 0, 0);
ENTITY::SET_ENTITY_COLLISION(iLocal_353, 0, 0);
}else{
if(STREAMING::HAS_CLIP_SET_LOADED(sLocal_753)){
PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_753);
}else{
STREAMING::REQUEST_CLIP_SET(sLocal_753);
iLocal_260=1;
}
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_353)){
ENTITY::DETACH_ENTITY(iLocal_353, 1, 1);
}
ENTITY::SET_ENTITY_VISIBLE(iLocal_353, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}}}}


void func_259(int iParam0, int iParam1, int iParam2){
if(func_663() && func_260()){
while (Global_100676 !=6){
wait(0);
}
MISC::SET_GAME_PAUSED(0);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
}}
if(iParam0 !=0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
wait(0);
}}}}}
if(iParam2==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_38(0);
}}


bool func_260(){
return MISC::IS_BIT_SET(Global_100681.f_20, 13);
}


void func_261(){
STREAMING::REQUEST_MODEL(joaat("prop_table_06"));
STREAMING::REQUEST_MODEL(joaat("prop_parasol_03"));
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_350)){
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_table_06"), 0)){
iLocal_350=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_table_06"), 1, 0, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_350, -30.8601f, 301.192f, 112.0274f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_350, -0.100693f, -0.038488f, 80.43729f, 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_350, 1);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_351)){
if(OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_parasol_03"), 0)){
iLocal_351=OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-30.8601f, 301.192f, 112.1164f, 5f, joaat("prop_parasol_03"), 1, 0, 1);
ENTITY::SET_ENTITY_COORDS(iLocal_351, -30.8601f, 301.192f, 111.6803f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(iLocal_351, -0.100693f, -0.038488f, 80.43729f, 2, 1);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_351, 1);
}}}


void func_262(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10){
var uVar0;
uVar0=PLAYER::GET_PLAYER_INDEX();
if(PLAYER::IS_PLAYER_PLAYING(uVar0)){
func_265(0);
if(bParam7){
PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
}
if(bParam6){
switch (func_264()){
case 0:
if(func_174(PLAYER::PLAYER_PED_ID(), 8, 15)){
func_60(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(func_174(PLAYER::PLAYER_PED_ID(), 9, 6)){
func_60(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
case 1:
if(func_174(PLAYER::PLAYER_PED_ID(), 8, 1) || func_174(PLAYER::PLAYER_PED_ID(), 8, 10)){
func_60(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
case 2:
if(func_174(PLAYER::PLAYER_PED_ID(), 8, 4)){
func_60(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
break;
}}
if(iParam4==1){
MISC::CLEAR_AREA_OF_PEDS(func_263(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
}
if(iParam5==1){
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
}
if(bParam8){
FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
}
MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
if(bParam10){
HUD::DISPLAY_RADAR(0);
HUD::DISPLAY_HUD(0);
}
HUD::CLEAR_PRINTS();
if(iParam9==1){
HUD::CLEAR_HELP(1);
}
if(iParam1==1){
CAM::SET_WIDESCREEN_BORDERS(1, 0);
}
if(iParam2==1){
iLocal_34=0;
if(func_5(PLAYER::PLAYER_PED_ID())){
iLocal_34=WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}}
if(iParam3==1){
func_231(500, 0);
}}}


Vector3 func__263(var uParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_264(){
func_181();
return Global_113648.f_2365.f_539.f_4321;
}


void func_265(bool bParam0){
var uVar0;
uVar0=PLAYER::GET_PLAYER_INDEX();
if(!PLAYER::IS_PLAYER_DEAD(uVar0)){
if(bParam0){
}
PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
}
func_238(1, 1, 0, 0, 0, 0, 0);
}


void func_266(struct<3> Param0, float fParam1, int iParam2, int iParam3){
struct<3> Var0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Global_104212.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104212.f_4, 0)){
if(func_314(24) !=Global_104212.f_4){
if(iParam2==1){
if(func_311(ENTITY::GET_ENTITY_COORDS(Global_104212.f_4, 1), iParam3, &Var0, &uVar1)){
Param0={
Var0 
};
fParam1=uVar1;
}}
func_267(Global_104212.f_4, Param0, fParam1, 24, 0);
}}}}


void func_267(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4){
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
func_310(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_306(iParam0, &Var0);
if(func_305(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
fParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78336=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_301(iParam3, &Var0, Param1, fParam2, func_304(iParam0));
func_268(iParam3, iParam0, 0);
}}


void func_268(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_298(&(Global_77348.f_555[0 /*21*/]), iParam0)){
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
Global_113648.f_32751.f_4801=func_287();
}
if(iParam1 !=Global_77348.f_139[iParam0]){
if(iParam0==24){
iVar0=func_314(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_269(iVar0, 145);
}}
Global_78254=iParam1;
Global_78255=iParam0;
Global_78256=iParam2;
}}}}


void func_269(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_270(iParam0)){
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
func_306(iParam0, &(Global_113648.f_32751.f_5510));
}

int func_270(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_285(iParam0, 0, 0)) || func_285(iParam0, 1, 0)) || func_285(iParam0, 2, 0)) || func_304(iParam0) !=145) || func_284(iParam0)) || func_283(iParam0)) || func_282(iParam0)) || func_281(iParam0)) || !func_271(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_283(iParam0)){
}
if(func_283(iParam0)){
}
if(func_285(iParam0, 0, 0)){
}
if(func_285(iParam0, 1, 0)){
}
if(func_285(iParam0, 2, 0)){
}
if(func_304(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_271(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_272(iParam0, 0, -1)){
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

int func_272(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_280()){
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
if((((!func_279() && !func_278()) && !func_277()) && !func_276()) && !func_280()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_196() || MISC::IS_PC_VERSION()) || func_195()){
}elseif(!func_277()){
return 0;
}}
if(bParam1){
if(!func_275(iParam0, iParam2)){
return 0;
}}
if(!func_273(iParam0)){
return 0;
}
return 1;
}

int func_273(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_274()){
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

int func_274(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_275(int iParam0, int iParam1){
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

int func_276(){
return 0;
}

int func_277(){
return 1;
}

int func_278(){
return 1;
}

int func_279(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_280(){
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
MISC::SET_BIT(&iVar0, 0);
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

int func_281(int iParam0){
int iVar0;
char* sVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
sVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G ")){
return 1;
}
if(!func_272(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_282(int iParam0){
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

int func_283(int iParam0){
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

int func_284(int iParam0){
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

int func_285(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_286(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113648.f_7231[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_286(int iParam0, int iParam1, char* sParam2, var uParam3){
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


var func__287(){
var uVar0;
func_297(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_296(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_295(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_290(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_289(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_288(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_288(var uParam0, int iParam1){
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


void func_289(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_290(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_294(*uParam0);
iVar1=func_292(*uParam0);
if(iParam1 < 1 || iParam1 > func_291(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_291(int iParam0, int iParam1){
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


var func__292(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_293(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_293(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_294(var uParam0){
return uParam0 & 15;
}


void func_295(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_296(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_297(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_298(var uParam0, int iParam1){
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
uParam0->f_4=func_299(0, 1);
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
uParam0->f_4=func_299(0, 1);
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
uParam0->f_4=func_299(1, 1);
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
uParam0->f_4=func_299(1, 2);
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
uParam0->f_4=func_299(1, 1);
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
uParam0->f_4=func_299(1, 2);
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
uParam0->f_4=func_299(2, 1);
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
uParam0->f_4=func_299(2, 1);
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
uParam0->f_4=func_299(2, 1);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
if(func_280()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 1);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(func_280()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), 1);
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
MISC::SET_BIT(&(uParam0->f_9), 0);
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
if(!func_305(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113648.f_32751.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113648.f_32751.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_305(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_305(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_299(int iParam0, int iParam1){
struct<82> Var0;
if(func_178(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_300(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_300(int iParam0, var uParam1, int iParam2){
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


void func_301(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4){
if(func_298(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10)){
func_303(iParam0);
func_302(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
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
func_207(iParam0, 1);
}}}


void func_302(var uParam0, var uParam1){
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


void func_303(int iParam0){
if(iParam0==-1){
return;
}
if(func_298(&(Global_77348.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77348.f_139[iParam0]));
Global_77348.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13)){
func_207(iParam0, 0);
}}}

int func_304(int iParam0){
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


bool func_305(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_306(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_50(uParam1);
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
if(uParam1->f_65==-1 && !func_309(uParam1->f_66)){
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
func_308(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_307(iVar0 + 1));
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

int func_307(int iParam0){
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

int func_308(int iParam0, var uParam1, var uParam2){
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

int func_309(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_310(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_303(iParam0);
func_207(iParam0, 0);
}

int func_311(struct<3> Param0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=func_312(Param0, iParam1, 1);
switch (iVar0){
case 0:
*uParam2={
-827.351f, 157.785f, 68.2143f 
};
*uParam3=85.1509f;
return 1;
break;
case 1:
case 2:
*uParam2={
1992.523f, 3813.916f, 31.1008f 
};
*uParam3=122.1498f;
return 1;
break;
case 3:
*uParam2={
-1184.258f, -1496.556f, 3.3895f 
};
*uParam3=303.2098f;
return 1;
break;
case 4:
*uParam2={
118.1067f, -1325.906f, 28.3706f 
};
*uParam3=123.5016f;
return 1;
break;
case 5:
*uParam2={
-18.118f, -1455.126f, 29.5004f 
};
*uParam3=273.2822f;
return 1;
break;
case 6:
*uParam2={
1.5947f, 543.4017f, 173.4644f 
};
*uParam3=310.7556f;
return 1;
break;
default:
break;
}
return 0;
}

int func_312(struct<3> Param0, int iParam1, int iParam2){
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
if(func_313(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95719[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__313(int iParam0){
return MISC::IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

int func_314(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77348.f_139[iParam0];
}


void func_315(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9){
func_316(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}


void func_316(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10){
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
func_321(iVar0);
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, 0, 1, 0)){
bVar1=true;
}else{
Var6={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
if((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2)){
if(func_318(iVar0, Param0, Param1, fParam2)){
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
if(func_285(iVar0, func_264(), 1)){
bVar1=false;
}}
if(bVar1){
if(!func_317(Param5)){
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

int func_317(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_318(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3){
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
func_320(Param1 - Param2) 
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
if(((((((((((((((func_319(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_319(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_319(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_319(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_319(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_319(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_319(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_319(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_319(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_319(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_319(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_319(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_319(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_319(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_319(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_319(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4)){
return 1;
}}
return 0;
}

int func_319(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7){
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


Vector3 func__320(struct<3> Param0){
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


void func_321(int iParam0){
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


void func_322(int iParam0, bool bParam1){
if(bParam1){
PED::SET_PED_STEALTH_MOVEMENT(iParam0, 1, 0);
}else{
PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0);
}}


void func_323(){
iLocal_705=0;
iLocal_706=0;
iLocal_707=0;
iLocal_709=0;
bLocal_710=false;
iLocal_755=0;
iLocal_760=0;
iLocal_761=0;
iLocal_762=0;
iLocal_763=0;
iLocal_764=0;
iLocal_765=0;
iLocal_285=0;
iLocal_286=0;
bLocal_284=false;
iLocal_289=0;
iLocal_287=0;
iLocal_288=0;
iLocal_291=0;
iLocal_292=0;
iLocal_293=0;
bLocal_295=false;
iLocal_297=0;
iLocal_349=0;
iLocal_298=0;
iLocal_299=0;
iLocal_300=0;
iLocal_702=0;
iLocal_714=0;
iLocal_715=0;
iLocal_716=0;
iLocal_717=0;
iLocal_278=0;
iLocal_277=0;
iLocal_279=0;
iLocal_280=0;
iLocal_718=0;
iLocal_719=0;
iLocal_720=0;
iLocal_275=0;
iLocal_721=0;
iLocal_722=0;
iLocal_723=0;
iLocal_724=0;
iLocal_725=0;
bLocal_729=false;
bLocal_730=false;
iLocal_731=0;
iLocal_733=0;
iLocal_736=0;
iLocal_740=0;
iLocal_739=0;
iLocal_754=0;
iLocal_259=0;
iLocal_244=0;
iLocal_744=0;
iLocal_245=0;
iLocal_248=0;
iLocal_745=0;
iLocal_255=0;
iLocal_260=0;
bLocal_272=false;
iLocal_358=0;
iLocal_357=0;
iLocal_283=0;
iLocal_305=0;
iLocal_306=0;
bLocal_332=false;
iLocal_219=0;
iLocal_694=0;
iLocal_695=0;
iLocal_696=0;
}

int func_324(int iParam0, struct<3> Param1, float fParam2){
int iVar0;
int iVar1;
iVar0=0;
switch (iParam0){
case 0:
if(!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("PAP_2_RCM_P2")){
func_335("PAP_2_RCM_P2", 0);
while (!CUTSCENE::HAS_CUTSCENE_LOADED()){
wait(0);
}
return 1;
}else{
return 1;
}
break;
case 1:
if(func_654(iLocal_475)){
if(!HUD::DOES_BLIP_EXIST(iLocal_661)){
iLocal_661=func_252(iLocal_475, 1, 1, 5);
}
HUD::SET_BLIP_SCALE(iLocal_661, 0.7f);
PED::SET_PED_CAN_ARM_IK(iLocal_475, 1);
TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_475, 1);
PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_475, 0);
AUDIO::STOP_PED_SPEAKING(iLocal_475, 1);
AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_475, 1);
ENTITY::SET_ENTITY_PROOFS(iLocal_475, 0, 0, 0, 1, 0, 0, 0, 0);
func_232(iLocal_475, Param1, fParam2, 0, 1);
func_250(&uLocal_489, 3, iLocal_475, "BEVERLY", 0, 1);
func_250(&uLocal_489, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
while (!func_334(Local_750)){
wait(0);
}
return 1;
}
return 0;
break;
case 2:
if(func_332(&Local_480, Param1, fParam2, iLocal_657, 0, "POPPY")){
func_250(&uLocal_489, 6, Local_480.f_0, "POPPY", 0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_480.f_0, uLocal_691);
TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_480.f_0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_480.f_0, 20, 1);
AUDIO::STOP_PED_SPEAKING(Local_480.f_0, 1);
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 3, 0, 0, 0);
if(func_663() && func_331() >=2){
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 4, 1, 0, 0);
}else{
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 4, 2, 0, 0);
}
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 8, 0, 0, 0);
PED::SET_PED_LOD_MULTIPLIER(Local_480.f_0, 2f);
return 1;
}
return 0;
break;
case 3:
if(func_332(&Local_481, Param1, fParam2, iLocal_656, 0, "SHAGGER")){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_481.f_0, uLocal_691);
TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_481.f_0, 20, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_481.f_0, 0, 0);
PED::SET_PED_CONFIG_FLAG(Local_481.f_0, 114, 1);
ENTITY::SET_ENTITY_PROOFS(Local_481.f_0, 0, 0, 0, 1, 0, 0, 0, 0);
PED::SET_PED_PROP_INDEX(Local_481.f_0, 1, 0, 0, false, 1);
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 3, 0, 0, 0);
if(func_663() && func_331() >=2){
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 4, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 6, 0, 0, 0);
}else{
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 6, 1, 0, 0);
}
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 8, 0, 0, 0);
func_250(&uLocal_489, 7, Local_481.f_0, "pap2lover", 0, 1);
PED::SET_PED_LOD_MULTIPLIER(Local_481.f_0, 2f);
return 1;
}
return 0;
break;
case 4:
if(func_332(&Local_482, Local_482.f_1, Local_482.f_4, iLocal_658, 0, "BODYGUARD ")){
PED::SET_PED_SEEING_RANGE(Local_482.f_0, 50f);
PED::SET_PED_HEARING_RANGE(Local_482.f_0, 15f);
PED::SET_PED_ID_RANGE(Local_482.f_0, 20f);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_482.f_0, uLocal_691);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_482.f_0, 1);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_482.f_0);
PED::SET_PED_CONFIG_FLAG(Local_482.f_0, 114, 1);
AUDIO::STOP_PED_SPEAKING(Local_482.f_0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_482.f_0, 0, 0);
ENTITY::SET_ENTITY_PROOFS(Local_482.f_0, 0, 0, 0, 1, 0, 0, 0, 0);
return 1;
}
return 0;
break;
case 5:
iLocal_734=0;
while (iLocal_734 <=2){
if(iLocal_734==1){
if(func_329(&(uLocal_758[0]), iLocal_655[0], Local_461[0 /*3*/], fLocal_470[0])){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[0], 1);
if(func_5(uLocal_758[0])){
VEHICLE::SET_VEHICLE_COLOURS(uLocal_758[0], 87, 87);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_758[0], 87, 87);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_758[0], 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_758[0], 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[0], 3);
ENTITY::SET_ENTITY_PROOFS(uLocal_758[0], 0, 0, 0, 0, 0, 0, 0, 0);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uLocal_758[0], 0);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_758[0], "P0PPYM14");
iVar0++;
}}}elseif(iLocal_734==2){
if(func_329(&(uLocal_758[1]), iLocal_655[1], Local_461[1 /*3*/], fLocal_470[1])){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[1], 1);
if(func_5(uLocal_758[1])){
VEHICLE::SET_VEHICLE_COLOURS(uLocal_758[1], 0, 0);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_758[1], 0, 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_758[1], 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_758[1], 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[1], 3);
ENTITY::SET_ENTITY_PROOFS(uLocal_758[1], 0, 0, 0, 0, 0, 0, 0, 0);
iVar0++;
}}}elseif(func_329(&(uLocal_758[2]), iLocal_655[2], Local_461[2 /*3*/], fLocal_470[2])){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[2], 1);
if(func_5(uLocal_758[2])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[2], 3);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_758[2], 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_758[2], 0);
VEHICLE::SET_VEHICLE_COLOURS(uLocal_758[2], 0, 0);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_758[2], 0, 0);
ENTITY::SET_ENTITY_PROOFS(uLocal_758[2], 0, 0, 0, 0, 0, 0, 0, 0);
iVar0++;
}}
if(iVar0==3){
return 1;
}
iLocal_734++;
}
return 0;
break;
case 6:
iVar1=0;
iLocal_734=0;
while (iLocal_734 <=1){
if(iLocal_734==0){
iVar1=iLocal_659[0];
}else{
iVar1=iLocal_659[1];
}
if(iVar1 !=0){
if(func_332(&(Local_483[iLocal_734 /*5*/]), Local_483[iLocal_734 /*5*/].f_1, Local_483[iLocal_734 /*5*/].f_4, iVar1, iLocal_734, "HOTEL STAFF ")){
if(iLocal_734==0){
TASK::TASK_USE_MOBILE_PHONE(Local_483[0 /*5*/], 1, 1);
func_250(&uLocal_489, 4, Local_483[iLocal_734 /*5*/], "Pap2Maid", 0, 1);
}
else{
func_250(&uLocal_489, 5, Local_483[iLocal_734 /*5*/], "Pap2BusBoy", 0, 1);
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_483[iLocal_734 /*5*/], uLocal_691);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[iLocal_734 /*5*/], 1);
iVar0++;
if(iVar0 >=2){
return 1;
}}}
iLocal_734++;
}
break;
case 7:
if(func_654(Local_483[1 /*5*/])){
if(func_328(&iLocal_669, joaat("prop_tool_broom"), Local_483[1 /*5*/].f_1, 0)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_669, 0)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_669, Local_483[1 /*5*/], PED::GET_PED_BONE_INDEX(Local_483[1 /*5*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_669)){
return 1;
}}}}
break;
case 8:
if(func_654(Local_483[0 /*5*/])){
if(func_328(&iLocal_670, joaat("prop_rag_01"), Local_483[0 /*5*/].f_1, 0)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_670, 0)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_670, Local_483[0 /*5*/], PED::GET_PED_BONE_INDEX(Local_483[0 /*5*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_670)){
return 1;
}}}}
break;
case 9:
if(func_329(&iLocal_759, iLocal_654, Param1, fParam2)){
func_327(iLocal_759, 0);
if(func_5(iLocal_759)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_654, 1);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_759, 7);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_759, 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_759, 0);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_759, 0);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_759, "P4P4R4Z0");
ENTITY::SET_ENTITY_PROOFS(iLocal_759, 0, 0, 0, 0, 0, 0, 0, 0);
if(iLocal_692 !=7){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 3);
}
return 1;
}}
return 0;
break;
case 10:
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
if(STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2") && STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone"))){
return 1;
}
return 0;
break;
case 11:
return 1;
break;
case 12:
if(func_334(Local_749)){
return 1;
}
return 0;
break;
case 16:
if(func_255(1)){
return 1;
}
return 0;
break;
case 13:
if(func_255(0)){
return 1;
}
return 0;
break;
case 14:
if(!CAM::DOES_CAM_EXIST(uLocal_663)){
uLocal_663=CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Param1, 0f, 0f, fParam2, 50f, 1, 2);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
return 1;
}}else{
return 1;
}
return 0;
break;
case 17:
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud")){
return 1;
}
break;
case 15:
STREAMING::REQUEST_ANIM_DICT("veh@std@ds@base");
if(STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ds@base")){
return 1;
}
return 0;
break;
case 18:
VEHICLE::REQUEST_VEHICLE_RECORDING(1, "PAP2UBA");
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "PAP2UBA")){
if(func_5(iLocal_759)){
ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
return 1;
}}
return 0;
break;
case 19:
VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PAP2UBA");
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PAP2UBA")){
if(func_5(uLocal_758[0])){
ENTITY::SET_ENTITY_COORDS(uLocal_758[0], -61.579f, 337.5999f, 111.1908f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(uLocal_758[0], -0.0013f, -0.0482f, 0.9656f, 0.2557f);
return 1;
}}
return 0;
break;
case 20:
VEHICLE::REQUEST_VEHICLE_RECORDING(102, "PAP2UBA");
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "PAP2UBA")){
if(func_5(uLocal_758[1])){
ENTITY::SET_ENTITY_COORDS(uLocal_758[1], -62.3523f, 322.6747f, 109.7139f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(uLocal_758[1], -0.023f, -0.0644f, 0.9756f, 0.2086f);
return 1;
}}
return 0;
break;
case 21:
VEHICLE::REQUEST_VEHICLE_RECORDING(103, "PAP2UBA");
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP2UBA")){
if(func_5(uLocal_758[2])){
ENTITY::SET_ENTITY_COORDS(uLocal_758[2], -68.0034f, 309.4698f, 107.7925f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(uLocal_758[2], -0.0176f, -0.0678f, 0.9756f, 0.2082f);
return 1;
}}
return 0;
break;
case 22:
if(func_5(iLocal_759)){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, -1);
if(func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
}}
return 0;
break;
case 23:
VEHICLE::REQUEST_VEHICLE_RECORDING(1, "PAP2UBA");
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "PAP2UBA") && func_325(iLocal_655[0], "POPPY CAR", 0)){
if(func_329(&(uLocal_758[0]), iLocal_655[0], -61.5607f, 337.6627f, 110.5456f, 150.2983f)){
if(func_5(uLocal_758[0]) && func_5(iLocal_759)){
if(func_654(PLAYER::PLAYER_PED_ID()) && func_654(iLocal_475)){
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_758[0], -1);
if(func_28(PLAYER::PLAYER_PED_ID(), uLocal_758[0]) && func_28(iLocal_475, iLocal_759)){
return 1;
}
}}}}
return 0;
break;
case 24:
if(func_5(iLocal_759)){
if(func_654(iLocal_475)){
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
if(func_28(iLocal_475, iLocal_759)){
return 1;
}}}
break;
case 25:
if(!iLocal_375){
return 1;
}
if((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_A", 0, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_B", 0, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_C", 0, -1)){
return 1;
}
break;
case 26:
HUD::REQUEST_ADDITIONAL_TEXT("PAP2", 0);
if(HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
return 1;
}
break;
}
return 0;
}

int func_325(int iParam0, char* sParam1, int iParam2){
STREAMING::REQUEST_MODEL(iParam0);
if(iParam2==9999){
func_326(sParam1, iParam2);
}
if(STREAMING::HAS_MODEL_LOADED(iParam0)){
return 1;
}
return 0;
}


void func_326(var uParam0, int iParam1){
}


void func_327(int iParam0, int iParam1){
Global_100681.f_22[iParam1]=iParam0;
}

int func_328(var uParam0, int iParam1, struct<3> Param2, int iParam3){
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(func_325(iParam1, "Loading", 0)){
*uParam0=OBJECT::CREATE_OBJECT(iParam1, Param2, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::SET_ENTITY_HEADING(*uParam0, iParam3);
PHYSICS::ACTIVATE_PHYSICS(*uParam0);
return 1;
}}}else{
return 1;
}
return 0;
}

int func_329(int iParam0, int iParam1, struct<3> Param2, float fParam3){
if(!ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(func_325(iParam1, "Loading", 0)){
*iParam0=VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
}
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
func_330(iParam1);
return 1;
}}}elseif(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, 1, 0);
return 1;
}else{
return 1;
}
return 0;
}


void func_330(int iParam0){
if(STREAMING::HAS_MODEL_LOADED(iParam0)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
}}

int func_331(){
if(!Global_100681==10 && !Global_100681==9){
return 0;
}
return Global_100681.f_2;
}

int func_332(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, char* sParam5){
char cVar0[16];
if(func_333(uParam0, iParam3, Param1, fParam2)){
if(func_654(*uParam0)){
StringCopy(&cVar0, sParam5, 16);
StringIntConCat(&cVar0, iParam4, 16);
PED::SET_PED_NAME_DEBUG(*uParam0, &cVar0);
return 1;
}}
return 0;
}

int func_333(var uParam0, int iParam1, struct<3> Param2, float fParam3){
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(func_325(iParam1, "Loading", 0)){
*uParam0=PED::CREATE_PED(26, iParam1, Param2, uParam3, 1, 1);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
func_330(iParam1);
return 1;
}}}else{
return 1;
}
return 0;
}

int func_334(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3){
if(!MISC::IS_STRING_NULL(&cParam0)){
if(!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cParam0)){
TASK::REQUEST_WAYPOINT_RECORDING(&cParam0);
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cParam0)){
return 1;
}}else{
return 1;
}}
return 0;
}


void func_335(char* sParam0, bool bParam1){
func_265(bParam1);
CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}


void func_336(int iParam0, int iParam1, int iParam2){
func_237(0, 0, iParam2, 1);
if(iParam0==1){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(iParam1==1){
func_231(500, 0);
}}


void func_337(){
struct<6> Var0;
bool bVar1;
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
Var0={
func_490() 
};
if(MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_CHASE1_3")){
func_488();
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_220);
}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_639(0);
if(func_487(PLAYER::PLAYER_PED_ID(), -60.2805f, -493.5712f, 39.261f, 100f, 1)){
CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
}
if(!bLocal_729 && ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID())){
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
switch (iLocal_693){
case 0:
if(func_248(8, bLocal_703)){
HUD::CLEAR_PRINTS();
CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
if(func_654(iLocal_475)){
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475);
}
if(func_654(PLAYER::PLAYER_PED_ID())){
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO")){
AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_INTRO");
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_353)){
ENTITY::DETACH_ENTITY(iLocal_353, 1, 1);
}
OBJECT::DELETE_OBJECT(&iLocal_353);
}
MISC::SET_INSTANCE_PRIORITY_HINT(2);
func_486(&iLocal_352, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pap_camera_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_npc_phone"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_table_06"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_parasol_03"));
STREAMING::REMOVE_CLIP_SET("move_f@sexy@a");
STREAMING::REMOVE_CLIP_SET(sLocal_752);
STREAMING::REMOVE_CLIP_SET(sLocal_753);
STREAMING::REMOVE_ANIM_DICT("RANDOM@CAR_THIEF@waiting_ig_4");
STREAMING::REMOVE_ANIM_DICT("cover@move@base@core");
PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
func_485();
func_430(3, "CHASE", 1, 0, 0, 1);
if(func_654(Local_480.f_0)){
TASK::TASK_LOOK_AT_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
}
if(func_6(iLocal_759)){
ENTITY::SET_ENTITY_INVINCIBLE(iLocal_759, 1);
VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_759);
}
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2ig_3");
iLocal_695=0;
iLocal_289=1;
iLocal_693=1;
iLocal_694=0;
func_429();
iLocal_754=0;
fLocal_688=0f;
fLocal_689=0f;
iLocal_238=0;
iLocal_241=0;
iLocal_248=0;
iLocal_738=0;
iLocal_746=0;
fLocal_339=0f;
fLocal_340=0f;
fLocal_341=0f;
iLocal_271=0;
iLocal_755=0;
bLocal_668=false;
iLocal_281=0;
iLocal_349=0;
iLocal_300=0;
iLocal_308=0;
iLocal_313=0;
func_254();
func_428();
bLocal_50=true;
bLocal_61=true;
iLocal_314=0;
iLocal_315=0;
iLocal_316=0;
iLocal_317=0;
iLocal_318=0;
iLocal_319=0;
iLocal_320=0;
iLocal_321=0;
iLocal_322=0;
iLocal_323=0;
iLocal_324=0;
iLocal_325=0;
iLocal_326=0;
iLocal_327=0;
iLocal_328=0;
iLocal_330=0;
iLocal_266=0;
iLocal_267=0;
iLocal_268=0;
iLocal_269=0;
iLocal_335=0;
func_375();
PED::SET_PED_NON_CREATION_AREA(Vector(60.0327f, -160.2005f, 252.7712f) - Vector(50f, 100f, 100f), Vector(60.0327f, -160.2005f, 252.7712f) + Vector(50f, 100f, 100f));
}
break;
case 1:
if(func_5(iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
if(func_663()){
if(!iLocal_335){
if(fLocal_338 < 8847.924f){
}else{
iLocal_335=1;
}
}}
uLocal_342=uLocal_342;
if(iLocal_268==0){
iLocal_268=EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85, iLocal_759, -1082130432);
}
if(fLocal_338 > 10000f && !bLocal_729){
iLocal_366=PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, 0f, 10f, 0f), 4f, 4f, 4f, 26);
if((func_654(iLocal_366) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_366, joaat("script_task_react_and_flee_ped")) !=1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_366, joaat("script_task_smart_flee_ped")) !=1){
TASK::CLEAR_PED_TASKS(iLocal_366);
PED::SET_PED_KEEP_TASK(iLocal_366, 1);
if(func_5(iLocal_475)){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
TASK::TASK_REACT_AND_FLEE_PED(iLocal_366, iLocal_475);
func_13("PED REACT AND FLEE FROM BEVERLY");
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_366, iLocal_475, 50f, -1, 1, 0);
func_13("PED SMART FLEE FROM BEVERLY");
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_366);
}}
if(func_5(uLocal_758[2])){
if(iLocal_266==0){
iLocal_266=EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85, uLocal_758[2], -1082130432);
}}
fLocal_338=VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759);
if(func_6(uLocal_758[1])){
if(iLocal_269==0){
iLocal_269=EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85, uLocal_758[1], -1082130432);
}
iLocal_365=PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_758[1], 0f, 10f, 0f), 4f, 4f, 4f, 26);
if((func_654(iLocal_365) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_365, joaat("script_task_react_and_flee_ped")) !=1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_365, joaat("script_task_smart_flee_ped")) !=1){
TASK::CLEAR_PED_TASKS(iLocal_365);
PED::SET_PED_KEEP_TASK(iLocal_365, 1);
if(func_5(Local_481.f_0)){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
TASK::TASK_REACT_AND_FLEE_PED(iLocal_365, Local_481.f_0);
func_13("PED REACT AND FLEE FROM JUSTIN");
}else{
TASK::TASK_SMART_FLEE_PED(iLocal_365, Local_481.f_0, 50f, -1, 1, 0);
func_13("PED SMART FLEE FROM JUSTIN");
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_365);
}
if(iLocal_287==0){
if(fLocal_338 >=28753.05f){
VEHICLE::SET_VEHICLE_DAMAGE(uLocal_758[1], 431.1f, 295.63f, 102.8f, 150f, 110f, 0);
if(!ENTITY::IS_ENTITY_DEAD(iLocal_361, 0)){
VEHICLE::SET_VEHICLE_DAMAGE(iLocal_361, 431.1f, 295.63f, 103f, 200f, 200f, 0);
VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_361, 0);
}
AUDIO::PLAY_SOUND_FROM_COORD(-1, "SMALL_CRASH", 431.1f, 295.63f, 102.8f, "PAPARAZZO_02_SOUNDSETS", 0, 0, 0);
iLocal_287=1;
}
}}
if(func_5(uLocal_758[0])){
if(iLocal_267==0){
iLocal_267=EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85, uLocal_758[0], -1082130432);
}
if(iLocal_288==0){
if(fLocal_338 >=49422.61f){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 1);
VEHICLE::SET_VEHICLE_DAMAGE(uLocal_758[0], 643.32f, 33.03f, 86f, 200f, 200f, 0);
iLocal_288=1;
}
}
if(iLocal_313==0){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_372)){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_372, "LOOP_REV", uLocal_758[0], "PAPARAZZO_02_SOUNDSETS", 0, 0);
}
if(iLocal_267==0){
iLocal_267=EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85, uLocal_758[0], -1082130432);
}
iLocal_364=PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_758[0], 0f, 10f, 0f), 4f, 4f, 4f, 26);
if((func_654(iLocal_364) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_364, joaat("script_task_react_and_flee_ped")) !=1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_364, joaat("script_task_smart_flee_ped")) !=1){
TASK::CLEAR_PED_TASKS(iLocal_364);
PED::SET_PED_KEEP_TASK(iLocal_364, 1);
if(func_5(Local_480.f_0)){
if(MISC::GET_RANDOM_INT_IN_RANGE(0, 2)==0){
TASK::TASK_REACT_AND_FLEE_PED(iLocal_364, Local_480.f_0);
func_13("PED REACT AND FLEE FROM POPPY");
}
else{
TASK::TASK_SMART_FLEE_PED(iLocal_364, Local_480.f_0, 50f, -1, 1, 0);
func_13("PED SMART FLEE FROM POPPY");
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_364);
}
if(fLocal_338 >=92227.95f){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 0);
VEHICLE::SMASH_VEHICLE_WINDOW(uLocal_758[0], 6);
VEHICLE::SET_VEHICLE_DAMAGE(uLocal_758[0], 99.92f, -396.72f, 40.74f, 200f, 200f, 0);
VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_758[0], 0, 0, 1148846080);
VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_758[0], 1, 0, 1148846080);
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BUILDING_SITE_CRASH", uLocal_758[0], "PAPARAZZO_02_SOUNDSETS", 0, 0);
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_STOP");
if(func_654(uLocal_356[0])){
TASK::TASK_GO_TO_ENTITY(uLocal_356[0], uLocal_758[0], -1, 10f, 1073741824, 1073741824, 0);
}
if(func_654(uLocal_356[1])){
TASK::TASK_GO_TO_ENTITY(uLocal_356[1], uLocal_758[0], -1, 5f, 1073741824, 1073741824, 0);
}
if(func_654(uLocal_356[2])){
TASK::TASK_GO_TO_ENTITY(uLocal_356[2], uLocal_758[0], -1, 15f, 1073741824, 1073741824, 0);
}
if(func_654(uLocal_356[3])){
TASK::TASK_GO_TO_ENTITY(uLocal_356[3], uLocal_758[0], -1, 10f, 1073741824, 1073741824, 0);
}
if(func_654(uLocal_356[4])){
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_356[4], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", -1, 1);
}
iLocal_267=0;
func_374(&iLocal_364, 1, 0, 1);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
iLocal_313=1;
}
}
else{
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_372)){
AUDIO::STOP_SOUND(iLocal_372);
}
if(iLocal_270==0){
iLocal_270=EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(79, uLocal_758[0], -1082130432);
}
}}
if(fLocal_338 >=40577.41f && fLocal_338 < 42025.58f){
if(fLocal_340 < 2.5f){
fLocal_340=(fLocal_340 + 0.1f);
}
if(func_5(uLocal_758[2])){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[2])){
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[2], fLocal_340, 0f, 0f);
}
}}elseif(fLocal_340 !=0f){
if(fLocal_338 >=42025.58f){
if(fLocal_340 > 0f){
fLocal_340=(fLocal_340 - 0.1f);
}
if(fLocal_340 < 0f){
fLocal_340=0f;
}
if(func_5(uLocal_758[2])){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[2])){
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[2], fLocal_340, 0f, 0f);
}}
}}
if(!iLocal_330){
if(fLocal_338 >=39807.45f && fLocal_338 < 41084.42f){
if(fLocal_339 < 0.1f){
fLocal_339=(fLocal_339 + 0.01f);
}
if(fLocal_341 > -0.3f){
fLocal_341=(fLocal_341 - 0.01f);
}
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[0], fLocal_341, 0f, fLocal_339);
}
elseif(fLocal_338 >=41084.42f){
iLocal_330=1;
}}elseif(fLocal_338 >=45980.9f && fLocal_338 < 48093.19f){
if(fLocal_339 < 0.1f){
fLocal_339=(fLocal_339 + 0.02f);
}
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[0], fLocal_341, 0f, fLocal_339);
}else{
if(fLocal_339 !=0f){
if(fLocal_339 > 0f){
fLocal_339=(fLocal_339 - 0.02f);
}
if(fLocal_339 < 0f){
fLocal_339=0f;
}
}
if(fLocal_341 !=0f){
if(fLocal_341 < 0f){
fLocal_341=(fLocal_341 + 0.01f);
}
if(fLocal_341 > 0f){
fLocal_341=0f;
}
}
if(fLocal_339 !=0f || fLocal_341 !=0f){
VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[0], fLocal_341, 0f, fLocal_339);
}}
if(fLocal_338 >=3472.198f && fLocal_338 < 94887.29f){
iLocal_674=1;
}else{
iLocal_674=0;
}
if(func_6(uLocal_758[0])){
if(fLocal_338 >=48117.37f && fLocal_338 < 50493.31f){
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[0]);
}
if(fLocal_338 >=87079.42f){
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[0]);
}}
if(func_6(uLocal_758[1])){
if(fLocal_338 >=27450.81f && fLocal_338 < 30024.78f){
if(func_6(iLocal_361)){
PHYSICS::ACTIVATE_PHYSICS(iLocal_361);
}
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[1]);
}
if(fLocal_338 >=87079.42f){
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[1]);
}
if(iLocal_298==0){
if(fLocal_338 > 88060.51f && fLocal_338 < 89076.59f){
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "HIGHREV", uLocal_758[1], "PAPARAZZO_02_SOUNDSETS", 0, 0);
func_13("HIGH REV SOUND");
iLocal_298=1;
}
}}
if(func_6(uLocal_758[2])){
if(fLocal_338 >=52143f && fLocal_338 < 56000f){
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[2]);
}
if(fLocal_338 >=64722.5f && fLocal_338 < 67652.06f){
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[2]);
}
if(fLocal_338 >=87079.42f){
PHYSICS::ACTIVATE_PHYSICS(uLocal_758[2]);
}}
if(fLocal_338 >=500f && iLocal_241 !=7){
func_372();
}
if(iLocal_222==0){
if(fLocal_338 >=91365.81f){
iLocal_728=0;
iLocal_732=1;
}}
if(fLocal_338 > 0f){
if(iLocal_293==0){
VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_759, 5, 1);
ENTITY::SET_ENTITY_VISIBLE(iLocal_759, 1, 0);
iLocal_293=1;
}
elseif(iLocal_300==0){
iLocal_300=1;
}
elseif(iLocal_308==0){
iLocal_308=1;
}}
if(iLocal_291==0){
if(fLocal_338 >=91715.73f){
if(!func_371()){
if(func_370(&uLocal_489, cLocal_751, "PAP2_PIPES", 8, 0, 0, 0)){
iLocal_291=1;
}}
}}
if(iLocal_349==0){
if(fLocal_338 >=85000f){
uLocal_348=STREAMING::STREAMVOL_CREATE_FRUSTUM(-71.5438f, -549.907f, 40.5579f, 2.4313f, 1.2491f, -20.7899f, 200f, 13, 127);
STREAMING::REQUEST_MODEL(joaat("prop_pipes_02b"));
STREAMING::REQUEST_MODEL(joaat("prop_cablespool_02"));
STREAMING::REQUEST_MODEL(joaat("prop_barrier_wat_04c"));
STREAMING::REQUEST_MODEL(joaat("prop_consign_01a"));
STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
STREAMING::REQUEST_MODEL(joaat("prop_sign_road_03g"));
STREAMING::REQUEST_MODEL(joaat("prop_sign_road_03m"));
PED::SET_PED_NON_CREATION_AREA(Vector(38.4052f, -403.4291f, 1.9758f) - Vector(10f, 30f, 30f), Vector(38.4052f, -403.4291f, 1.9758f) + Vector(10f, 30f, 30f));
iLocal_349=1;
}}
if(fLocal_338 >=80000f){
func_369();
}
if(fLocal_338 < 15000f){
if(CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_231(800, 0);
}
}}
func_368();
if(func_654(Local_480.f_0)){
PED::SET_PED_LOD_MULTIPLIER(Local_480.f_0, 2f);
if(fLocal_338 >=47849.2f && fLocal_338 < 49546.55f){
if(!PED::IS_PED_DOING_DRIVEBY(Local_480.f_0)){
TASK::TASK_DRIVE_BY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 7f, 100, 0, -753768974);
}
}}
if(iLocal_329==1){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) < 80000f){
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_759, 80000f);
}}}
if(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 2) > 0f){
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_759, 2, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 2) - 0.08f));
}
if(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 3) > 0f){
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_759, 3, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 3) - 0.08f));
}}
if(!iLocal_728){
if(!iLocal_731){
iLocal_731=1;
}else{
if(bLocal_730){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::STOP_CAM_POINTING(uLocal_663);
}
if(!bLocal_729){
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::DESTROY_CAM(uLocal_665, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
if(!iLocal_281){
func_14(0);
}
}}elseif(iLocal_293==1){
if(bLocal_730==0){
if(func_324(13, Local_462, 0)){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::SHAKE_CAM(uLocal_663, "HAND_SHAKE", 0.1f);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
func_14(0);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
bLocal_730=true;
}
}}
func_367();
if(bLocal_730){
if(func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) <=86982.21f){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) >=1000f){
func_362(Local_480.f_0, &bVar1, 1);
if(!bVar1){
if(!iLocal_732){
func_360();
}
}
}}}
}}
func_357();
}}else{
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(0);
if(func_356()){
func_354(4);
}}
func_339();
func_375();
break;
case 2:
func_338(0);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
func_12(&iLocal_660);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
break;
case 3:
if(func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_759);
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_759, 2, 0)){
TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), iLocal_759, 0);
}
CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
iLocal_693=2;
}}
break;
}}


void func_338(bool bParam0){
iLocal_735=iLocal_692;
if(!bParam0){
iLocal_692=iLocal_735 + 1;
}elseif(iLocal_735 > 0){
iLocal_692=(iLocal_735 - 1);
}
iLocal_702=0;
iLocal_693=0;
}


void func_339(){
if(!func_371()){
if(func_654(Local_480.f_0)){
if(func_653(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 16f, 1)){
if(func_6(iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
if(fLocal_338 > 50000f && fLocal_338 < 60000f){
if(iLocal_764==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_6", 7, 0, 0)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_fuckinlosers", 8f, -2f, -1, 0, 0f, 0, 0, 0);
iLocal_764=1;
iLocal_766=MISC::GET_GAME_TIMER();
return;
}}
}
if(fLocal_338 > 72000f && fLocal_338 < 84000f){
if(iLocal_763==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_5", 7, 0, 0)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_ih8u", 8f, -2f, -1, 0, 0f, 0, 0, 0);
iLocal_763=1;
iLocal_766=MISC::GET_GAME_TIMER();
return;
}}
}}}}
if(func_653(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 12f, 1)){
if(iLocal_760==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_1", 7, 0, 0)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_gimmethtcam", 8f, -2f, -1, 0, 0f, 0, 0, 0);
iLocal_760=1;
iLocal_766=MISC::GET_GAME_TIMER();
return;
}}
if(MISC::GET_GAME_TIMER() > iLocal_766 + 9000){
if(iLocal_761==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_2", 7, 0, 0)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_illsueyou", 8f, -2f, -1, 0, 0f, 0, 0, 0);
iLocal_761=1;
iLocal_766=MISC::GET_GAME_TIMER();
return;
}}
if(iLocal_762==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_4", 7, 0, 0)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_imavirgin", 8f, -2f, -1, 0, 0f, 0, 0, 0);
iLocal_762=1;
iLocal_766=MISC::GET_GAME_TIMER();
return;
}}
if(func_6(iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
if(fLocal_338 > 80000f){
if(iLocal_765==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_7", 7, 0, 0)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_itwasyoga", 8f, -2f, -1, 0, 0f, 0, 0, 0);
iLocal_765=1;
iLocal_766=MISC::GET_GAME_TIMER();
return;
}}}
}}}}}}}


bool func_340(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_353(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21732=0;
Global_21739=0;
Global_21734=0;
Global_22716=1;
Global_22718=0;
Global_22722=0;
StringCopy(&Global_22729, sParam3, 24);
Global_2883585=0;
return func_341(sParam2, iParam4, 0);
}

int func_341(char* sParam0, int iParam1, bool bParam2){
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
func_235();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_352(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_351();
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
func_350();
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
if(func_349()){
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
if(func_245()){
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
func_348();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_347();
func_342();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_235();
}
return 0;
}


void func_342(){
if(!func_343()){
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

int func_343(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_346()){
return 0;
}
if(func_344(PLAYER::PLAYER_ID())){
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


bool func_344(int iParam0){
return func_345(iParam0, 20);
}


var func__345(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_346(){
return -1;
}


void func_347(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_348(){
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

int func_349(){
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


void func_350(){
if(func_117(14)){
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
Global_20383=func_264();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


void func_351(){
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


bool func_352(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_353(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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


void func_354(int iParam0){
if(iLocal_222==0){
func_355(0);
}else{
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(0);
}
if(iParam0 !=4){
HUD::CLEAR_PRINTS();
func_234();
}
func_12(&iLocal_660);
func_12(&iLocal_661);
iLocal_728=1;
switch (iParam0){
case 2:
sLocal_700="PAP2_FAILBUD";
break;
case 1:
sLocal_700="PAP2_FAILBD";
break;
case 3:
sLocal_700="PAP2_FAILTHR";
break;
case 4:
func_13("TRYING TO PULL OVER");
sLocal_700="PAP2_BADCAM";
break;
case 0:
func_253();
sLocal_700="PAP2_FAILPAT";
break;
case 6:
func_253();
sLocal_700="PAP2_FAILATT";
break;
case 5:
sLocal_700="PAP2_FAILATT";
break;
case 7:
sLocal_700="PAP2_FAILATT";
break;
case 8:
if(iLocal_692 < 5){
func_253();
}
sLocal_700="PAP2_FAILKPOP";
break;
case 9:
if(iLocal_692 < 5){
func_253();
}
sLocal_700="PAP2_FAILPOP";
break;
case 14:
sLocal_700="PAP2_FAILCAR";
break;
case 15:
sLocal_700="PAP2_FAILWANT";
break;
case 10:
if(iLocal_692 < 5){
func_253();
}
sLocal_700="PAP2_FAILKLOV";
break;
case 11:
if(iLocal_692 < 5){
func_253();
}
sLocal_700="PAP2_FAILHLOV";
break;
case 13:
sLocal_700="PAP2_FAILLEFT";
break;
case 16:
sLocal_700="PAP2_FAILONG";
break;
case 17:
sLocal_700="PAP2_FAILHIND";
break;
case 18:
sLocal_700="PAP2_FAILFR";
break;
case 19:
break;
}
iLocal_692=11;
iLocal_693=0;
}


void func_355(bool bParam0){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
CAM::DESTROY_CAM(uLocal_663, 0);
}
if(!bParam0){
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
}else{
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
}}
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(-1f);
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}

int func_356(){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(iLocal_222==0){
iLocal_223=MISC::GET_GAME_TIMER();
iLocal_222=1;
}elseif(iLocal_222==1){
if(MISC::GET_GAME_TIMER() > iLocal_223 + 3000){
return 1;
}}}
return 0;
}


void func_357(){
if(bLocal_729){
if(func_5(iLocal_759)){
CAM::SET_USE_HI_DOF();
switch (iLocal_695){
case 0:
iLocal_674=0;
iLocal_728=0;
iLocal_732=1;
iLocal_281=1;
if(func_654(iLocal_475)){
TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
}
iLocal_240=MISC::GET_GAME_TIMER();
iLocal_695=1;
break;
case 1:
if(iLocal_286==0){
if(!func_371()){
if(func_370(&uLocal_489, cLocal_751, "PAP2_ENDCUT", 9, 0, 0, 0)){
iLocal_286=1;
}
}}
if(func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_759, 2, 0)){
TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), iLocal_759, 0);
}}
if(MISC::GET_GAME_TIMER() > iLocal_240 + 2000){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) > 101275.6f){
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::DESTROY_CAM(uLocal_663, 0);
}
if(!CAM::DOES_CAM_EXIST(uLocal_663)){
uLocal_663=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
CAM::SET_CAM_PARAMS(uLocal_663, -66.1f, -515.3f, 42.3f, 1.3f, 0f, -27f, 22.5f, 0, 1, 1, 2);
CAM::SET_CAM_NEAR_DOF(uLocal_663, 0f);
CAM::SET_CAM_FAR_DOF(uLocal_663, 200f);
CAM::SET_CAM_DOF_STRENGTH(uLocal_663, 0.5f);
AUDIO::STOP_SOUND(iLocal_371);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE")){
AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_CHASE");
}
if(func_6(iLocal_759)){
VEHICLE::SET_VEHICLE_FIXED(iLocal_759);
}
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::DESTROY_CAM(uLocal_665, 0);
}
if(!CAM::DOES_CAM_EXIST(uLocal_665)){
uLocal_665=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
CAM::SET_CAM_PARAMS(uLocal_665, -71.4f, -529f, 39.8f, 0.8f, 0f, -25.9f, 22.5f, 0, 1, 1, 2);
CAM::SET_CAM_NEAR_DOF(uLocal_665, 0f);
CAM::SET_CAM_FAR_DOF(uLocal_665, 200f);
CAM::SET_CAM_DOF_STRENGTH(uLocal_665, 0.5f);
CAM::SET_CAM_ACTIVE(uLocal_663, 1);
CAM::SET_CAM_ACTIVE(uLocal_665, 1);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_665, uLocal_663, 7000, 3, 1);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::SHAKE_CAM(uLocal_663, "HAND_SHAKE", 0.6f);
}
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::SHAKE_CAM(uLocal_665, "HAND_SHAKE", 0.6f);
}
iLocal_695=2;
}
else{
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::STOP_CAM_POINTING(uLocal_663);
}
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::DESTROY_CAM(uLocal_665, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(0);
}}else{
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::STOP_CAM_POINTING(uLocal_663);
}
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::DESTROY_CAM(uLocal_665, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(0);
}
break;
case 2:
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) > 108426.4f){
while (!func_358(iLocal_759, 3f, 1, 1056964608, 0, 1, 0) && iLocal_271 < 500){
wait(0);
iLocal_271++;
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
}
if(VEHICLE::IS_VEHICLE_STOPPED(iLocal_759) && CUTSCENE::HAS_CUTSCENE_LOADED()){
iLocal_692=9;
return;
}}
break;
case 3:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_759, -25.8393f, -481.6992f, 39.416f, -58.2834f, -470.9109f, 39.416f, 5f, 0, 0, 0)){
iLocal_695=4;
}
break;
case 4:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_759, -62.2864f, -491.9415f, 39.4151f, -30.931f, -504.4111f, 39.416f, 5f, 0, 0, 0)){
iLocal_695=5;
}
break;
case 5:
break;
}}}}

int func_358(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_359(iParam0);
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


void func_359(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


void func_360(){
struct<6> Var0;
if((IntToFloat(Local_473.f_0) > 200f && IntToFloat(Local_473.f_1) < 100f) && IntToFloat(Local_473.f_2) < 100f){
Var0={
func_361() 
};
if(MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_CHASE2")){
func_488();
iLocal_755=0;
}
if(!func_371()){
if(iLocal_738 < 6){
if(MISC::GET_GAME_TIMER() > iLocal_231 + 8000){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BADCAM2", 7, 0, 0, 0)){
iLocal_738++;
iLocal_755=1;
iLocal_231=MISC::GET_GAME_TIMER();
}}}elseif(iLocal_738 >=6){
if(func_370(&uLocal_489, cLocal_751, "PAP2_FAILCAM", 7, 0, 0, 0)){
if(iLocal_738 >=6){
iLocal_728=1;
}}}}}}


struct<6> func_361(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
return Global_21344;
}
return Var0;
}


void func_362(int iParam0, var uParam1, bool bParam2){
float fVar0;
float fVar1;
fVar0=0f;
fVar1=0f;
*uParam1=func_365(iParam0, &fVar0, &fVar1);
if(*uParam1){
if(bParam2){
}
if(CAM::DOES_CAM_EXIST(uLocal_663)){
if(bParam2){
if(CAM::GET_CAM_FOV(uLocal_663) < 13f){
func_364(1, 1);
iLocal_746=(iLocal_746 - 1);
iLocal_746=(iLocal_746 - 1);
}else{
func_364(1, 0);
iLocal_746=(iLocal_746 - 1);
}}elseif(CAM::GET_CAM_FOV(uLocal_663) < 13f){
func_364(1, 1);
}else{
func_364(1, 0);
}}}elseif(func_654(iParam0)){
if(ENTITY::IS_ENTITY_ON_SCREEN(iParam0)){
func_364(0, 0);
iLocal_746=(iLocal_746 - 1);
}else{
func_363();
iLocal_746++;
}}
if(iLocal_746 < 0){
iLocal_746=0;
}
if(iLocal_746 > 61){
iLocal_746=61;
}}


void func_363(){
Local_473.f_1=(Local_473.f_1 - 5);
Local_473.f_2=(Local_473.f_2 - 5);
Local_473.f_0 +=5;
if(Local_473.f_0 >=255){
Local_473.f_0=255;
}
if(Local_473.f_1 <=0){
Local_473.f_1=0;
}
if(Local_473.f_2 <=0){
Local_473.f_2=0;
}
iLocal_248++;
}


void func_364(bool bParam0, bool bParam1){
if(bParam0){
if(bParam1){
Local_473.f_1 +=4;
Local_473.f_2 +=4;
Local_473.f_0=(Local_473.f_0 - 4);
}else{
Local_473.f_1 +=3;
Local_473.f_2 +=3;
Local_473.f_0=(Local_473.f_0 - 3);
}
if(Local_473.f_0 <=0){
Local_473.f_0=0;
}
if(Local_473.f_1 >=255){
Local_473.f_1=255;
}
if(Local_473.f_2 >=123){
Local_473.f_2=123;
}}else{
Local_473.f_1 -=3;
Local_473.f_2 -=3;
Local_473.f_0=(Local_473.f_0 - -3);
if(Local_473.f_1 >=255){
Local_473.f_1=255;
}
if(Local_473.f_2 >=123){
Local_473.f_2=123;
}
if(Local_473.f_0 <=0){
Local_473.f_0=0;
}}
if(Local_473.f_1==255){
iLocal_261++;
}}

int func_365(int iParam0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
if(func_654(iParam0)){
iVar0=PED::GET_PED_BONE_INDEX(iParam0, 31086);
if(iVar0 !=-1){
Var1={
ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) 
};
if(func_366(Var1, 2f, 150)){
GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var1, fParam1, fParam2);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
if(CAM::GET_CAM_FOV(uLocal_663) < 10f && iLocal_692==5){
if(((*fParam1 > 0.2f && *fParam1 < 0.8f) && *fParam2 > 0.2f) && *fParam2 < 0.8f){
return 1;
}}elseif(((*fParam1 > 0.35f && *fParam1 < 0.65f) && *fParam2 > 0.35f) && *fParam2 < 0.65f){
return 1;
}}}}}
return 0;
}

int func_366(struct<3> Param0, float fParam1, int iParam2){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, 1) <=IntToFloat(iParam2)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}
return 0;
}


void func_367(){
int iVar0;
if(iLocal_694 !=3){
iVar0=iLocal_694;
switch (iLocal_694){
case 0:
if(func_370(&uLocal_489, cLocal_751, "PAP2_CHASE1", 7, 0, 0, 0)){
iLocal_694=iVar0 + 1;
}
break;
case 1:
if(!func_371()){
if(fLocal_338 > 11596f && fLocal_338 < 14864f){
if(!iLocal_314){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_1", 7, 0, 0)){
iLocal_314=1;
}
}}
if(fLocal_338 > 15284.76f && fLocal_338 < 21515f){
if(!iLocal_315){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_2", 7, 0, 0)){
iLocal_315=1;
}
}}
if(fLocal_338 > 21655.77f && fLocal_338 < 25915f){
if(!iLocal_316){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_3", 7, 0, 0)){
iLocal_316=1;
}
}}
if(fLocal_338 > 27990.73f && fLocal_338 < 28915f){
if(!iLocal_317){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_4", 7, 0, 0)){
iLocal_317=1;
}
}}
if(fLocal_338 > 31990.73f && fLocal_338 < 32990f){
if(!iLocal_318){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_5", 7, 0, 0)){
iLocal_318=1;
}
}}
if(fLocal_338 > 34769.36f && fLocal_338 < 38562.85f){
if(!iLocal_319){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_6", 7, 0, 0)){
iLocal_319=1;
}
}}
if(fLocal_338 > 45138.23f && fLocal_338 < 46245.23f){
if(!iLocal_320){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_7", 7, 0, 0)){
iLocal_320=1;
}
}}
if(fLocal_338 > 49645.43f && fLocal_338 < 51045.23f){
if(!iLocal_321){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_8", 7, 0, 0)){
iLocal_321=1;
}
}}
if(fLocal_338 > 53299.31f && fLocal_338 < 59399.23f){
if(!iLocal_322){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_9", 7, 0, 0)){
iLocal_322=1;
}
}}
if(fLocal_338 > 64999.31f && fLocal_338 < 66320.23f){
if(!iLocal_323){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_10", 7, 0, 0)){
iLocal_323=1;
}
}}
if(fLocal_338 > 67320.23f && fLocal_338 < 69648.89f){
if(!iLocal_324){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_11", 7, 0, 0)){
iLocal_324=1;
}
}}
if(fLocal_338 > 71493.89f && fLocal_338 < 73176.11f){
if(!iLocal_325){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_12", 7, 0, 0)){
iLocal_325=1;
}
}}
if(fLocal_338 > 75924.03f && fLocal_338 < 77366.81f){
if(!iLocal_326){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_13", 7, 0, 0)){
iLocal_326=1;
}
}}
if(fLocal_338 > 79366.81f && fLocal_338 < 81397.3f){
if(!iLocal_327){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_14", 7, 0, 0)){
iLocal_327=1;
}
}}
if(fLocal_338 > 83615.89f && fLocal_338 < 85489.72f){
if(!iLocal_328){
if(func_340(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_15", 7, 0, 0)){
iLocal_328=1;
iLocal_694=2;
}
}}
if(fLocal_338 > 90000f){
iLocal_694=2;
}}
break;
case 2:
if(func_5(iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
if(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) >=94365.81f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_CHASE3", 9, 0, 0, 0) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) >=100000f){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 3f, 1);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
bLocal_729=true;
iLocal_694=iVar0 + 1;
}
}}}
break;
default:
break;
}}}


void func_368(){
if(fLocal_338 > 7244.102f && fLocal_338 < 14124.62f){
if(!CAM::IS_SPHERE_VISIBLE(26.13f, 275.37f, 108.55f, 25f)){
MISC::CLEAR_AREA_OF_PEDS(26.13f, 275.37f, 108.55f, 25f, 0);
}}
if(fLocal_338 > 36326.59f && fLocal_338 < 45647.02f){
if(!CAM::IS_SPHERE_VISIBLE(672.9f, 202.11f, 92.69f, 15f)){
MISC::CLEAR_AREA_OF_PEDS(672.9f, 202.11f, 92.69f, 15f, 0);
}}
if(fLocal_338 > 44000f && fLocal_338 < 50000f){
if(!CAM::IS_SPHERE_VISIBLE(622.15f, 63.69f, 89.07f, 15f)){
MISC::CLEAR_AREA_OF_PEDS(622.15f, 63.69f, 89.07f, 15f, 0);
}}
if(fLocal_338 > 49000f && fLocal_338 < 56000f){
if(!CAM::IS_SPHERE_VISIBLE(670.06f, 2.94f, 83.1f, 20f)){
MISC::CLEAR_AREA_OF_PEDS(670.06f, 2.94f, 83.1f, 20f, 0);
}}
if(fLocal_338 > 58000f && fLocal_338 < 67694.29f){
if(!CAM::IS_SPHERE_VISIBLE(493.26f, -138.52f, 58.97f, 15f)){
MISC::CLEAR_AREA_OF_PEDS(493.26f, -138.52f, 58.97f, 15f, 0);
}}
if(fLocal_338 > 70936.15f && fLocal_338 < 76888.99f){
if(!CAM::IS_SPHERE_VISIBLE(299.61f, -111.56f, 68.51f, 15f)){
MISC::CLEAR_AREA_OF_PEDS(299.61f, -111.56f, 68.51f, 15f, 0);
}}}


void func_369(){
if(!ENTITY::DOES_ENTITY_EXIST(uLocal_356[0])){
STREAMING::REQUEST_MODEL(joaat("s_m_y_construct_01"));
if(!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))){
return;
}else{
uLocal_356[0]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 76.0832f, -346.6293f, 41.6255f, 247.2738f, 1, 1);
uLocal_356[1]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 94.7224f, -361.5001f, 41.5291f, 247.5127f, 1, 1);
TASK::TASK_GO_TO_ENTITY(uLocal_356[0], uLocal_356[1], -1, 1f, 1f, 1073741824, 0);
TASK::TASK_LOOK_AT_ENTITY(uLocal_356[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
uLocal_356[2]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 76.8379f, -378.1883f, 38.9214f, 124.7959f, 1, 1);
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_356[2], "WORLD_HUMAN_CLIPBOARD", 0, 0);
uLocal_356[3]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 74.4935f, -379.7711f, 38.9214f, 291.4748f, 1, 1);
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_356[0], "WORLD_HUMAN_STAND_MOBILE", 0, 0);
uLocal_356[4]=PED::CREATE_PED(26, joaat("s_m_y_construct_01"), 68.7581f, -402.9993f, 38.9192f, 291.2518f, 1, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
}}}


bool func_370(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_353(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_341(sParam2, iParam3, 0);
}

int func_371(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_372(){
if(iLocal_241==0){
STREAMING::REQUEST_MODEL(joaat("taxi"));
STREAMING::REQUEST_MODEL(joaat("bus"));
if(STREAMING::HAS_MODEL_LOADED(joaat("taxi")) && STREAMING::HAS_MODEL_LOADED(joaat("bus"))){
iLocal_241=1;
}}elseif(iLocal_241==1){
iLocal_362[0]=VEHICLE::CREATE_VEHICLE(joaat("taxi"), -61.57f, 263.696f, 102.3952f, 96.8514f, 1, 1, 0);
iLocal_363[0]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[0], 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[0], 1084227584);
TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[0], iLocal_362[0], -196.7214f, 263.6796f, 91.2333f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
iLocal_362[1]=VEHICLE::CREATE_VEHICLE(joaat("bus"), -129.3595f, 257.7685f, 94.998f, 87.635f, 1, 1, 0);
iLocal_363[1]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[1], 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[1], 1084227584);
TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[1], iLocal_362[1], -196.7214f, 263.6796f, 91.2333f, 8f, 0, joaat("bus"), 262144, 5f, 5f);
iLocal_362[3]=VEHICLE::CREATE_VEHICLE(joaat("taxi"), -189.8024f, 253.4723f, 91.4575f, 262.6279f, 1, 1, 0);
iLocal_363[3]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[3], 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[3], 1084227584);
TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[3], iLocal_362[3], 13.1838f, 255.6287f, 108.5748f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
iLocal_362[6]=VEHICLE::CREATE_VEHICLE(joaat("bus"), -175.1252f, 247.2091f, 91.991f, 265.0136f, 1, 1, 0);
iLocal_363[6]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[6], 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[6], 1084227584);
TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[6], iLocal_362[6], 7.4758f, 252.7416f, 108.411f, 8f, 0, joaat("bus"), 262144, 5f, 5f);
iLocal_362[7]=VEHICLE::CREATE_VEHICLE(joaat("taxi"), -98.9022f, 246.2435f, 97.7797f, 274.0935f, 1, 1, 0);
iLocal_363[7]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[7], 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[7], 1084227584);
TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[7], iLocal_362[7], 7.4758f, 252.7416f, 108.411f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
iLocal_241=2;
}elseif(iLocal_241==2){
if(fLocal_338 > 15815.71f){
func_374(&(iLocal_363[0]), 1, 0, 1);
func_374(&(iLocal_363[1]), 1, 0, 1);
func_374(&(iLocal_363[2]), 1, 0, 1);
func_374(&(iLocal_363[3]), 1, 0, 1);
func_374(&(iLocal_363[4]), 1, 0, 1);
func_374(&(iLocal_363[5]), 1, 0, 1);
func_374(&(iLocal_363[6]), 1, 0, 1);
func_374(&(iLocal_363[7]), 1, 0, 1);
func_373(&(iLocal_362[0]));
func_373(&(iLocal_362[1]));
func_373(&(iLocal_362[2]));
func_373(&(iLocal_362[3]));
func_373(&(iLocal_362[4]));
func_373(&(iLocal_362[5]));
func_373(&(iLocal_362[6]));
func_373(&(iLocal_362[7]));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
iLocal_241=7;
}}elseif(iLocal_241==3){
if(fLocal_338 > 41719.38f){
iLocal_362[8]=VEHICLE::CREATE_VEHICLE(joaat("bus"), 706.0617f, 35.9678f, 83.2352f, 146.9535f, 1, 1, 0);
iLocal_363[8]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[8], 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[8], 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[8], 1084227584);
iLocal_362[9]=VEHICLE::CREATE_VEHICLE(joaat("blista"), 699.3248f, 35.4587f, 83.1331f, 147.9884f, 1, 1, 0);
iLocal_363[9]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[9], 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[9], 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[9], 1084227584);
iLocal_241=4;
}}elseif(iLocal_241==4){
if(fLocal_338 > 58743.74f){
func_374(&(iLocal_363[8]), 1, 0, 1);
func_374(&(iLocal_363[9]), 1, 0, 1);
func_373(&(iLocal_362[8]));
func_373(&(iLocal_362[9]));
iLocal_241=5;
}}elseif(iLocal_241==5){
if(fLocal_338 > 58743.74f){
iLocal_362[10]=VEHICLE::CREATE_VEHICLE(joaat("taxi"), 511.5198f, -180.571f, 52.8702f, 10.063f, 1, 1, 0);
iLocal_363[10]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[10], 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[10], 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[10], 1084227584);
iLocal_362[11]=VEHICLE::CREATE_VEHICLE(joaat("blista"), 516.6854f, -179.7204f, 53.0255f, 11.7232f, 1, 1, 0);
iLocal_363[11]=PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[11], 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[11], 1, 1, 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[11], 1084227584);
iLocal_241=6;
}}elseif(iLocal_241==6){
if(fLocal_338 > 72153.65f){
func_374(&(iLocal_363[10]), 1, 0, 1);
func_374(&(iLocal_363[11]), 1, 0, 1);
func_373(&(iLocal_362[10]));
func_373(&(iLocal_362[11]));
iLocal_241=7;
}}}


void func_373(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
ENTITY::IS_ENTITY_DEAD(*uParam0, 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
}}}


void func_374(int iParam0, int iParam1, int iParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(!PED::IS_PED_INJURED(*iParam0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0, 1);
if(iParam3==0){
TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
}
PED::SET_PED_KEEP_TASK(*iParam0, iParam1);
if(iParam2==1){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
}}
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}}


void func_375(){
switch (iLocal_736){
case 0:
func_427("PAP2UBA", 1, 1, 1);
func_426();
func_425();
iLocal_736++;
break;
case 1:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_759, 0)){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_759, 1, "PAP2UBA", 1);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_759, fLocal_747);
func_424();
iLocal_736++;
}
break;
case 2:
func_249();
if(iLocal_692==13 || iLocal_692==14){
func_398(iLocal_759, fLocal_747);
}elseif(!iLocal_728){
if((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_759, 0) && func_5(uLocal_758[0])) && func_5(uLocal_758[1])){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
if(iLocal_692==8){
func_398(iLocal_759, fLocal_747);
}
elseif(iLocal_692==13 || iLocal_692==14){
func_398(iLocal_759, fLocal_747);
}}else{
iLocal_693=2;
func_376(1, 1);
}}}else{
if(func_5(uLocal_758[0]) && func_654(Local_480.f_0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[0])){
}}
if(func_5(uLocal_758[1]) && func_654(Local_481.f_0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[1])){
}}
if(func_5(uLocal_758[2]) && func_654(Local_482.f_0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[2])){
}}}
break;
}}


void func_376(bool bParam0, bool bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_155)){
iLocal_57=0;
func_397();
PED::REMOVE_RELATIONSHIP_GROUP(uLocal_164);
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
PED::SET_CREATE_RANDOM_COPS(1);
}
if(bLocal_73){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_396());
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_395());
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_394());
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_393());
if(!CAM::IS_SCREEN_FADED_OUT() && !bParam0){
func_392();
func_391();
func_388();
}else{
func_384();
func_383();
}
if(bParam1){
func_377(0);
}}}


void func_377(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < 60){
func_378(iVar0, bParam0);
iVar0++;
}}


void func_378(int iParam0, bool bParam1){
if(bParam1){
if(!func_382(iParam0, 2, 1)){
func_381(iParam0, 2, 1);
}}elseif(func_382(iParam0, 2, 1)){
func_379(iParam0, 2, 1);
}}


void func_379(int iParam0, int iParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_33()==0){
uVar0=func_96(func_380(iParam0), -1, 0);
MISC::CLEAR_BIT(&uVar0, iParam1);
func_94(func_380(iParam0), uVar0, -1, 1, 0);
}}else{
MISC::CLEAR_BIT(&(Global_113648.f_668[iParam0]), iParam1);
}}

int func_380(int iParam0){
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


void func_381(int iParam0, int iParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_33()==0){
uVar0=func_96(func_380(iParam0), -1, 0);
MISC::SET_BIT(&uVar0, iParam1);
func_94(func_380(iParam0), uVar0, -1, 1, 0);
}}else{
MISC::SET_BIT(&(Global_113648.f_668[iParam0]), iParam1);
}}

int func_382(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_33()==0){
return MISC::IS_BIT_SET(func_96(func_380(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}


void func_383(){
int iVar0;
iVar0=0;
while (iVar0 < 100){
iLocal_171[iVar0]=0;
Local_139[iVar0 /*3*/]={
0f, 0f, 0f 
};
fLocal_75[iVar0]=0f;
fLocal_76[iVar0]=0f;
fLocal_77[iVar0]=0f;
fLocal_78[iVar0]=0f;
iLocal_115[iVar0]=0;
fLocal_79[iVar0]=0f;
iLocal_116[iVar0]=0;
iLocal_165[iVar0]=0;
iLocal_117[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 22){
iLocal_172[iVar0]=0;
iVar0++;
}
iLocal_122=0;
iVar0=0;
while (iVar0 < 15){
iLocal_173[iVar0]=0;
Local_140[iVar0 /*3*/]={
0f, 0f, 0f 
};
fLocal_90[iVar0]=0f;
fLocal_91[iVar0]=0f;
fLocal_92[iVar0]=0f;
fLocal_93[iVar0]=0f;
iLocal_121[iVar0]=0;
iLocal_166[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 6){
iLocal_175[iVar0]=0;
iVar0++;
}
iLocal_124=0;
iVar0=0;
while (iVar0 < 25){
iLocal_174[iVar0]=0;
Local_141[iVar0 /*3*/]={
0f, 0f, 0f 
};
fLocal_84[iVar0]=0f;
fLocal_85[iVar0]=0f;
fLocal_86[iVar0]=0f;
fLocal_87[iVar0]=0f;
iLocal_118[iVar0]=0;
fLocal_88[iVar0]=0f;
iLocal_119[iVar0]=0;
iLocal_167[iVar0]=0;
iLocal_120[iVar0]=0;
iVar0++;
}
iLocal_123=0;
iLocal_126=0;
iLocal_129=0;
iLocal_130=0;
iLocal_131=0;
}


void func_384(){
func_387();
func_386();
func_385();
}


void func_385(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 25){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
}
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
PED::DELETE_PED(&iVar1);
}}}
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_174[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_174[iVar0]));
}}
iLocal_119[iVar0]=0;
if(!bLocal_53 && !bLocal_66){
if(iLocal_118[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 25){
if(!iLocal_167[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
}
iVar0++;
}}


void func_386(){
int iVar0;
iVar0=0;
while (iVar0 < 15){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0])){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_173[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_173[iVar0]));
}}
iLocal_121[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
if(!iLocal_166[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
}
iVar0++;
}
iLocal_127=0;
iLocal_124=0;
}


void func_387(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 100){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_171[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
}
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iVar0], -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
PED::DELETE_PED(&iVar1);
}}}
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_171[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_171[iVar0]));
}}
if(!bLocal_53 && !bLocal_66){
if(iLocal_115[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
}}
iLocal_116[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 100){
if(!iLocal_165[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
}
iVar0++;
}
iLocal_126=0;
iLocal_122=0;
}


void func_388(){
int iVar0;
iVar0=0;
while (iVar0 < 25){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0])){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
}}
func_390(iLocal_174[iVar0]);
func_389(iLocal_174[iVar0]);
}
iLocal_119[iVar0]=0;
iLocal_120[iVar0]=0;
if(!bLocal_53 && !bLocal_66){
if(iLocal_118[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 25){
if(!iLocal_167[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
}
iVar0++;
}
iLocal_128=0;
}


void func_389(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
}}


void func_390(int iParam0){
float fVar0;
int iVar1;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(!iVar1==PLAYER::PLAYER_PED_ID()){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 < 8f){
fVar0=8f;
}
if(fVar0 > 62.9f){
fVar0=62.9f;
}
TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, 1);
if(bLocal_74){
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
}}}}


void func_391(){
int iVar0;
iVar0=0;
while (iVar0 < 15){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], 0)){
ENTITY::SET_ENTITY_COLLISION(iLocal_173[iVar0], 1, 0);
}
func_389(iLocal_173[iVar0]);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 15){
if(!iLocal_166[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
}
iVar0++;
}
iLocal_127=0;
iLocal_124=0;
}


void func_392(){
int iVar0;
iVar0=0;
while (iVar0 < 100){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_171[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_171[iVar0], 0)){
ENTITY::SET_ENTITY_COLLISION(iLocal_171[iVar0], 1, 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
}}
func_390(iLocal_171[iVar0]);
func_389(iLocal_171[iVar0]);
}
iLocal_116[iVar0]=0;
iLocal_117[iVar0]=0;
if(!bLocal_53 && !bLocal_66){
if(iLocal_115[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 100){
if(!iLocal_165[iVar0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
}
iVar0++;
}
iLocal_126=0;
iLocal_122=0;
}

int func_393(){
return joaat("s_m_y_cop_01");
}

int func_394(){
return joaat("police");
}

int func_395(){
return joaat("sultan");
}

int func_396(){
if(iLocal_168==0){
return joaat("a_m_y_business_01");
}
return iLocal_168;
}


void func_397(){
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
VEHICLE::SET_GARBAGE_TRUCKS(1);
VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
STREAMING::SET_PED_POPULATION_BUDGET(3);
}


void func_398(int iParam0, float fParam1){
float fVar0;
struct<3> Var1;
int iVar2;
fVar0=MISC::GET_FRAME_TIME();
fVar0=(fVar0 * 1000f);
bLocal_72=false;
if(!bLocal_54){
if(bLocal_53){
func_423();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
}
bLocal_54=true;
}}elseif(!bLocal_53){
func_397();
bLocal_54=false;
}
if(bLocal_53){
fParam1=1f;
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}
if(!bLocal_47){
if(iLocal_42){
fLocal_99=0f;
}else{
fLocal_99=1f;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_422(PLAYER::PLAYER_PED_ID(), iParam0)){
iLocal_52=1;
}else{
iLocal_52=0;
}}
fLocal_96=VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_97) * fLocal_99));
if(bLocal_51){
func_421(iParam0, fLocal_96);
func_420(iParam0, fLocal_106);
if(fLocal_101 > 1000f){
if(iLocal_138==0){
func_419(iParam0, fLocal_106);
}
fVar0=((fLocal_96 + 4000f) + (to_float(iLocal_138) * 2000f));
func_418(iParam0, fVar0, fLocal_100);
iLocal_138++;
if(iLocal_138 > 2){
fLocal_101=0f;
}}else{
iLocal_138=0;
fLocal_101=(fLocal_101 + (MISC::GET_FRAME_TIME() * 1000f));
}}}}
iVar2=0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
iVar2=1;
}}
if(fLocal_96==0f || CAM::IS_SCREEN_FADED_OUT()){
iVar2=1;
}
if(iVar2 && !bLocal_59){
if(!iLocal_41){
func_415(iParam0, ((fParam1 * fLocal_97) * fLocal_99), 0);
if(!iLocal_62){
}
iLocal_62=0;
}
if(bLocal_44){
func_414(iParam0);
}
if(!iLocal_41){
func_401(iParam0, ((fParam1 * fLocal_97) * fLocal_99), 0);
}}
if(iLocal_49){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iLocal_176=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
Local_142={
ENTITY::GET_ENTITY_COORDS(iLocal_176, 1) 
};
ENTITY::GET_ENTITY_QUATERNION(iLocal_176, &fLocal_80, &fLocal_81, &fLocal_82, &fLocal_83);
}}
iLocal_49=0;
}
if(iLocal_48){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_176)){
func_389(iLocal_177);
iLocal_177=iLocal_176;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_177, 0)){
ENTITY::SET_ENTITY_COORDS(iLocal_177, Local_142, 1, 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_177, fLocal_80, fLocal_81, fLocal_82, fLocal_83);
}
fLocal_95=fLocal_98;
iLocal_41=1;
iLocal_48=0;
}
if(iLocal_41){
while (!func_399(&iParam0, fLocal_95)){
wait(0);
}
iLocal_42=1;
}
if(iLocal_55){
iLocal_55=0;
}}}

int func_399(int iParam0, float fParam1){
if(!iLocal_56){
iLocal_41=1;
func_384();
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0)){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
VEHICLE::SET_VEHICLE_FIXED(*iParam0);
}
if(!iLocal_125==-1){
while (!func_400(iParam0, iLocal_125, fParam1, 1, 0, 0, 0, 0)){
wait(0);
}
if(!bLocal_46){
iLocal_42=1;
fLocal_99=0f;
iLocal_126=0;
iLocal_128=0;
iLocal_127=0;
iLocal_122=0;
iLocal_123=0;
iLocal_124=0;
iLocal_129=0;
iLocal_130=0;
iLocal_131=0;
}}}
iLocal_56=1;
}else{
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0)){
VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_97) * fLocal_99));
func_400(iParam0, iLocal_125, fParam1, 1, 0, 0, 0, 0);
}}
fLocal_96=fParam1;
iLocal_132=0;
iLocal_135=0;
fLocal_111=0f;
fLocal_110=0f;
func_401(*iParam0, ((1f * fLocal_97) * fLocal_99), 1);
func_415(*iParam0, ((1f * fLocal_97) * fLocal_99), 1);
func_414(*iParam0);
if((iLocal_129==0 && iLocal_130==0) && iLocal_131==0){
iLocal_42=0;
iLocal_41=0;
iLocal_56=0;
return 1;
}}
return 0;
}

int func_400(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7){
float fVar0;
if(iParam1 > 0){
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_155);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_155)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0)){
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
if(bParam4){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_155, 1092616192, 786603);
}else{
if(iParam1 !=iLocal_133 && iParam1 !=iLocal_134){
if(bParam7){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 2 | 4, 0, 786603);
}elseif(bParam6){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 1 | 4, 0, 786603);
}else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, 1);
}
}
else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, 1);
}
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
if(bParam5){
VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
}
return 1;
}}elseif(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0)==VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_155)){
fVar0=VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
if(!bParam3){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_155);
}
if(bParam5){
VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
}
return 1;
}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
if(bParam4){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_155, 1092616192, 786603);
}elseif(iParam1 !=iLocal_133 && iParam1 !=iLocal_134){
if(bParam7){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 2 | 4, 0, 786603);
}
elseif(bParam6){
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 1 | 4, 0, 786603);
}
else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, 1);
}}else{
VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, 1);
}
VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
if(bParam5){
VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
}
return 1;
}}}}
return 0;
}


void func_401(int iParam0, float fParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
float fVar6;
float fVar7;
bool bVar8;
bool bVar9;
var uVar10;
var uVar11;
bool bVar12;
int iVar13;
int iVar14;
bVar9=PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
uVar10=PED::CAN_CREATE_RANDOM_DRIVER();
uVar11=PED::CAN_CREATE_RANDOM_BIKE_RIDER();
bVar12=false;
if(bVar9){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
Var5={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=iLocal_128;
while (iVar0 < 25){
if(iLocal_119[iVar0] !=99){
if(iLocal_119[iVar0]==0){
if(iLocal_118[iVar0] > 0){
if(!iLocal_41){
if(fLocal_96 > (fLocal_88[iVar0] - (7000f * fParam1))){
if(func_413(iLocal_167[iVar0])){
MISC::SET_BIT(&(iLocal_120[iVar0]), 0);
}elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0])){
MISC::SET_BIT(&(iLocal_120[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_120[iVar0]), 1);
iLocal_119[iVar0]++;
iLocal_130++;
}
}
else{
fVar6=(fLocal_96 - fLocal_88[iVar0]);
fVar6=(fVar6 * fLocal_89[iVar0]);
if(fVar6 >=0f){
if(fVar6 < func_412(iLocal_118[iVar0])){
if(func_413(iLocal_167[iVar0])){
MISC::SET_BIT(&(iLocal_120[iVar0]), 0);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0])){
MISC::SET_BIT(&(iLocal_120[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_120[iVar0]), 1);
iLocal_119[iVar0]++;
iLocal_130++;
}else{
iLocal_119[iVar0]=99;
}}
}}else{
iLocal_119[iVar0]=99;
}}elseif(iLocal_119[iVar0]==1){
bVar8=false;
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
if(MISC::IS_BIT_SET(iLocal_120[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_393());
bVar8=STREAMING::HAS_MODEL_LOADED(func_393());
}elseif(!bLocal_68 && ((!MISC::IS_BIT_SET(iLocal_120[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_120[iVar0], 2) && uVar11))){
bVar8=true;
}else{
STREAMING::REQUEST_MODEL(func_396());
bVar8=STREAMING::HAS_MODEL_LOADED(func_396());
}
if(bVar8){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0])){
STREAMING::REQUEST_MODEL(iLocal_167[iVar0]);
if(STREAMING::HAS_MODEL_LOADED(iLocal_167[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_118[iVar0], &cLocal_155)){
if(fLocal_96 >=(fLocal_88[iVar0] - (fLocal_109 * fParam1))){
if((iLocal_55 || bParam2) || (!bLocal_72 && !func_411(Local_141[iVar0 /*3*/], Var5, 5f, fLocal_107))){
if(bLocal_51){
func_410(Local_141[iVar0 /*3*/], Var5, fLocal_100);
}
iLocal_174[iVar0]=VEHICLE::CREATE_VEHICLE(iLocal_167[iVar0], Local_141[iVar0 /*3*/], 0, 0, 0, 0);
if(iLocal_167[iVar0]==joaat("polmav")){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_174[iVar0], 0);
}
if(uLocal_64 && !MISC::IS_BIT_SET(iLocal_120[iVar0], 0)){
func_409(iLocal_174[iVar0]);
}
if(MISC::IS_BIT_SET(iLocal_120[iVar0], 3)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_174[iVar0], 1);
}
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_174[iVar0], Local_141[iVar0 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_174[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0], fLocal_87[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_167[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0])){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174[iVar0], 1084227584);
}
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174[iVar0], 1, 1, 0);
if(CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7){
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_174[iVar0], 3);
}
}
ENTITY::FREEZE_ENTITY_POSITION(iLocal_174[iVar0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
iLocal_130=(iLocal_130 - 1);
iLocal_119[iVar0]++;
bLocal_72=true;
}}}
}
elseif(!ENTITY::IS_ENTITY_DEAD(iLocal_174[iVar0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_174[iVar0], Local_141[iVar0 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_174[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0], fLocal_87[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_167[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0])){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174[iVar0], 1084227584);
}
ENTITY::FREEZE_ENTITY_POSITION(iLocal_174[iVar0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
iLocal_130=(iLocal_130 - 1);
iLocal_119[iVar0]++;
}}}elseif(iLocal_119[iVar0]==2){
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 1)){
bVar8=false;
if(MISC::IS_BIT_SET(iLocal_120[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_393());
bVar8=STREAMING::HAS_MODEL_LOADED(func_393());
iVar13=2;
}
elseif(!bLocal_68 && ((!MISC::IS_BIT_SET(iLocal_120[iVar0], 2) && uVar10) || (MISC::IS_BIT_SET(iLocal_120[iVar0], 2) && uVar11))){
bVar8=true;
iVar13=1;
}
else{
STREAMING::REQUEST_MODEL(func_396());
bVar8=STREAMING::HAS_MODEL_LOADED(func_396());
iVar13=0;
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_174[iVar0], 0)){
if(!bLocal_72 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_174[iVar0], -1, 0)){
if(bVar8){
if((vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_174[iVar0], 1), Var5) < 10000f || bParam2) || iLocal_55){
func_407(&(iLocal_174[iVar0]), iVar13, 1);
MISC::SET_BIT(&(iLocal_120[iVar0]), 1);
}}}
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
if(fLocal_96 >=fLocal_88[iVar0]){
if(12 > iLocal_123){
fVar6=(fLocal_96 - fLocal_88[iVar0]);
fVar6=(fVar6 * fLocal_89[iVar0]);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_118[iVar0], &cLocal_155)){
if(fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155)){
Var3={
ENTITY::GET_ENTITY_COORDS(iLocal_174[iVar0], 1) 
};
Var4={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_118[iVar0], fVar6, &cLocal_155) 
};
if(((!func_411(Var3, Var5, 5f, fLocal_107) && func_411(Var4, Var5, 5f, fLocal_107)) && !iLocal_55) && !bParam2){
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 1)){
func_407(&(iLocal_174[iVar0]), iVar13, 1);
}
iLocal_123++;
iLocal_119[iVar0]++;
}
elseif(((!bLocal_72 || MISC::IS_BIT_SET(iLocal_120[iVar0], 1)) || iLocal_55) || bParam2){
if(func_400(&(iLocal_174[iVar0]), iLocal_118[iVar0], fVar6, 1, 0, 0, bLocal_70, bLocal_69)){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_174[iVar0], (fParam1 * fLocal_89[iVar0]));
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
if(MISC::IS_BIT_SET(iLocal_120[iVar0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174[iVar0], 1, 1, 0);
VEHICLE::SET_VEHICLE_SIREN(iLocal_174[iVar0], 1);
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_174[iVar0], 2);
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0])){
AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_174[iVar0], 1);
}
}}
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 1)){
func_407(&(iLocal_174[iVar0]), iVar13, 1);
}
iLocal_123++;
iLocal_119[iVar0]++;
}
}
}
else{
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 1)){
func_407(&(iLocal_174[iVar0]), iVar13, 1);
}
iLocal_123++;
iLocal_119[iVar0]++;
}}}else{
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 1)){
func_407(&(iLocal_174[iVar0]), iVar13, 1);
}
iLocal_123++;
iLocal_119[iVar0]++;
}
}}else{
if(!MISC::IS_BIT_SET(iLocal_120[iVar0], 1)){
func_407(&(iLocal_174[iVar0]), iVar13, 1);
}
iLocal_123++;
iLocal_119[iVar0]++;
}}elseif(iLocal_119[iVar0]==3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0])){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(bVar9){
if(((!bLocal_45 && !iLocal_42) && !bLocal_61) && (((!bLocal_70 && !bLocal_69) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_174[iVar0])) || func_406(iLocal_174[iVar0]))){
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
bVar8=false;
if(bLocal_63){
bVar8=true;
}else{
fVar7=ENTITY::GET_ENTITY_SPEED(iVar2);
if(fVar7 < 1f){
bVar8=true;
}elseif(MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_174[iVar0]))) > 15f){
bVar8=true;
}elseif(!func_405(iLocal_174[iVar0], iVar2, 45f)){
bVar8=true;
}elseif(func_403(iVar2, iLocal_174[iVar0], 0)){
bVar8=true;
}}
if(bVar8){
func_402(iLocal_174[iVar0]);
iLocal_119[iVar0]++;
}
}
}
else{
VEHICLE::SET_PLAYBACK_SPEED(iLocal_174[iVar0], (fParam1 * fLocal_89[iVar0]));
}}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
}
}
else{
iLocal_119[iVar0]++;
}}else{
iLocal_119[iVar0]++;
}}elseif(iLocal_119[iVar0]==4){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0])){
iLocal_119[iVar0]++;
}
else{
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_174[iVar0], (fParam1 * fLocal_89[iVar0]));
}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
}
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_118[iVar0], &cLocal_155)){
if(fLocal_96 > (fLocal_88[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155))){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
}
}}else{
iLocal_119[iVar0]++;
}}elseif(iLocal_119[iVar0]==5){
if(!iLocal_174[iVar0]==iLocal_178){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar1)){
iVar14=TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("script_task_perform_sequence"));
if(iVar14==7){
fVar7=ENTITY::GET_ENTITY_SPEED(iLocal_174[iVar0]);
if(fVar7 < 8f){
fVar7=8f;
}
if(fVar7 > 62.9f){
fVar7=62.9f;
}
TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
}}
}
if(!bLocal_53 && !bLocal_66){
if(iLocal_118[iVar0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
}
}
if(!bLocal_43){
if(!bLocal_71){
func_389(iLocal_174[iVar0]);
}
}
elseif(ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_174[iVar0]));
}}
iLocal_123=(iLocal_123 - 1);
iLocal_119[iVar0]=99;
}
if(!bVar12){
iLocal_128=iVar0;
bVar12=true;
}}
iVar0++;
}}else{
func_388();
}}


void func_402(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_390(iParam0);
VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
}}

int func_403(int iParam0, int iParam1, bool bParam2){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
if(bParam2){
Var5={
ENTITY::GET_ENTITY_VELOCITY(iParam1) 
};
Var4={
Var5 / FtoV(vmag(Var5)) 
};
}else{
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) 
};
Var4={
Var2 - Var1 
};
}}
Var3={
Var1 - Var0 
};
Var3.f_2=0f;
Var4.f_2=0f;
if(func_404(Var3, Var4) < 0f){
return 1;
}
return 0;
}


float func_404(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_405(int iParam0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) 
};
}else{
return 0;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) 
};
}else{
return 0;
}
Var0.f_2=0f;
Var1.f_2=0f;
fVar2=func_404(Var0, Var1);
if(fVar2 < 0f){
return 0;
}
fVar2=MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
if(!fVar2 < fParam2){
return 0;
}
return 1;
}

int func_406(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(bLocal_67){
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
iVar2=ENTITY::GET_ENTITY_MODEL(iVar1);
if(iVar2==joaat("phantom")){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1)){
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0)){
return 1;
}
}}}}}}
return 0;
}

int func_407(var uParam0, int iParam1, bool bParam2){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
if(VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, 0)){
if(iParam1==2){
iVar0=PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, func_393(), -1, 0, 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uLocal_164);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_393());
}elseif(iParam1==1){
iVar0=PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, 1);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0))){
PED::GIVE_PED_HELMET(iVar0, 1, 4096, -1);
}}else{
iVar0=PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_396(), -1, 0, 0);
if(bLocal_73){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_396());
}}
if(bParam2){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
}
if(bLocal_74){
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
func_408(iVar0);
bLocal_72=true;
return 1;
}else{
return 1;
}}
return 0;
}


void func_408(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
}}


void func_409(var uParam0){
int iVar0;
int iVar1;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
if(iLocal_169 >=-1 && iLocal_170 >=-1){
while (iVar0==iLocal_169 || iVar0==iLocal_170){
iVar0++;
}}elseif(iLocal_169 >=-1){
if(iVar0==iLocal_169){
iVar0++;
}}
iVar1=iVar0;
switch (iVar1){
case 0:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 0, 0);
break;
case 1:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 2, 2);
break;
case 2:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 4, 4);
break;
case 3:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 27, 27);
break;
case 4:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 7, 7);
break;
case 5:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
break;
case 6:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 68, 68);
break;
case 7:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 62, 62);
break;
case 8:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 132, 132);
break;
case 9:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 117, 0);
break;
case 10:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 52, 52);
break;
case 11:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 88, 88);
break;
case 12:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 1, 1);
break;
case 13:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 36, 36);
break;
case 14:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 95, 95);
break;
default:
VEHICLE::SET_VEHICLE_COLOURS(uParam0, 73, 73);
break;
}}


void func_410(struct<3> Param0, struct<3> Param1, float fParam2){
bool bVar0;
int iVar1;
bVar0=true;
if(!bLocal_54){
if(!func_411(Param0, Param1, fParam2, 200f)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iVar1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(!ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, 0, 1, 0)){
bVar0=false;
}}}
if(bVar0){
MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, 0, 0, 0, 0, 0, 0, 0);
}}}}

int func_411(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!bLocal_54){
if(!iLocal_41){
if(vmag2(Param1 - Param0) - fParam2) < (fParam3 * fParam3){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam2)){
return 1;
}}}}}
return 0;
}


float func_412(int iParam0){
var uVar0;
VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_155);
while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_155)){
wait(0);
}
uVar0=VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_155);
VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_155);
return uVar0;
}

int func_413(int iParam0){
if(((((((iParam0==joaat("police") || iParam0==joaat("police2")) || iParam0==joaat("police3")) || iParam0==joaat("policeb")) || iParam0==joaat("policet")) || iParam0==joaat("polmav")) || iParam0==joaat("pranger")) || iParam0==joaat("sheriff")){
return 1;
}
return 0;
}


void func_414(int iParam0){
int iVar0;
struct<3> Var1;
struct<3> Var2;
bool bVar3;
bool bVar4;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
bVar3=false;
bVar4=false;
iVar0=iLocal_127;
while (iVar0 < 15){
switch (iLocal_121[iVar0]){
case 0:
if(!iLocal_166[iVar0]==0){
if(ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_140[iVar0 /*3*/], fLocal_94, fLocal_94, fLocal_94, 0, 1, 0)){
iLocal_129++;
iLocal_121[iVar0]++;
}}else{
iLocal_121[iVar0]=99;
}
break;
case 1:
if(6 > iLocal_124){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0])){
STREAMING::REQUEST_MODEL(iLocal_166[iVar0]);
if(STREAMING::HAS_MODEL_LOADED(iLocal_166[iVar0])){
if((iLocal_41 || iLocal_55) || (!bLocal_72 && !func_411(Local_140[iVar0 /*3*/], Var1, 5f, fLocal_107))){
if(bLocal_51){
func_410(Local_140[iVar0 /*3*/], Var1, fLocal_100);
}
iLocal_173[iVar0]=VEHICLE::CREATE_VEHICLE(iLocal_166[iVar0], Local_140[iVar0 /*3*/], 0, 0, 0, 0);
if(iLocal_166[iVar0]==joaat("polmav")){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_173[iVar0], 0);
}
ENTITY::SET_ENTITY_QUATERNION(iLocal_173[iVar0], fLocal_90[iVar0], fLocal_91[iVar0], fLocal_92[iVar0], fLocal_93[iVar0]);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
if(VEHICLE::IS_VEHICLE_MODEL(iLocal_173[iVar0], func_394())){
VEHICLE::SET_VEHICLE_SIREN(iLocal_173[iVar0], 1);
if(!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0])){
AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[iVar0], 1);
}
}
if(VEHICLE::IS_VEHICLE_MODEL(iLocal_173[iVar0], func_395())){
VEHICLE::SET_VEHICLE_COLOURS(iLocal_173[iVar0], 0, 0);
}
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_173[iVar0], 1);
iLocal_129=(iLocal_129 - 1);
iLocal_124++;
iLocal_121[iVar0]++;
bLocal_72=true;
}}
}
else{
iLocal_129=(iLocal_129 - 1);
iLocal_124++;
iLocal_121[iVar0]++;
}}
break;
case 2:
if(!bVar3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], 0)){
Var2={
ENTITY::GET_ENTITY_COORDS(iLocal_173[iVar0], 1) 
};
}
if(fLocal_108==0f || vdist2(Var1, Var2) < (fLocal_108 * fLocal_108)){
if(!func_403(iLocal_173[iVar0], iParam0, 0)){
if(!bLocal_43){
func_389(iLocal_173[iVar0]);
}else{
VEHICLE::DELETE_VEHICLE(&(iLocal_173[iVar0]));
}
iLocal_124=(iLocal_124 - 1);
iLocal_121[iVar0]=99;
bVar3=true;
}
}}
break;
}
if(iLocal_121[iVar0] !=99){
if(!bVar4){
iLocal_127=iVar0;
bVar4=true;
}}
iVar0++;
}}else{
func_391();
}}


void func_415(int iParam0, float fParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
float fVar9;
float fVar10;
bool bVar11;
bool bVar12;
var uVar13;
var uVar14;
int iVar15;
int iVar16;
bool bVar17;
bool bVar18;
struct<3> Var19;
iVar5=0;
bVar12=PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
uVar13=PED::CAN_CREATE_RANDOM_DRIVER();
uVar14=PED::CAN_CREATE_RANDOM_BIKE_RIDER();
if(bVar12){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar5=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
Var8={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
iVar1=0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
fLocal_96=VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
}
iVar16=-1;
bVar17=false;
bVar18=false;
iVar0=iLocal_126;
while (iVar0 < 100 && !bVar17){
if(iLocal_116[iVar0] !=99){
if(iLocal_116[iVar0]==0){
if(iLocal_115[iVar0] > 0 && iLocal_165[iVar0] !=0){
if(!iLocal_41){
if(fLocal_96 < (fLocal_79[iVar0] + 20000f)){
if(fLocal_96 >=(fLocal_79[iVar0] - (7000f * fParam1))){
if(func_413(iLocal_165[iVar0])){
MISC::SET_BIT(&(iLocal_117[iVar0]), 0);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0])){
MISC::SET_BIT(&(iLocal_117[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_117[iVar0]), 1);
iLocal_131++;
iLocal_116[iVar0]++;
}elseif(iVar1 > 2){
bVar17=true;
}else{
iVar1++;
}}else{
func_417(iVar0, 1090519040);
}
}
else{
fVar9=(fLocal_96 - fLocal_79[iVar0]);
if(fVar9 >=0f){
if(fVar9 < func_412(iLocal_115[iVar0])){
if(func_413(iLocal_165[iVar0])){
MISC::SET_BIT(&(iLocal_117[iVar0]), 0);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0])){
MISC::SET_BIT(&(iLocal_117[iVar0]), 2);
}
MISC::CLEAR_BIT(&(iLocal_117[iVar0]), 1);
iLocal_131++;
iLocal_116[iVar0]++;
}else{
func_417(iVar0, 1090519040);
}}
}}else{
func_417(iVar0, 1090519040);
}}elseif(iLocal_116[iVar0]==1){
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
bVar11=false;
if(MISC::IS_BIT_SET(iLocal_117[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_393());
if(STREAMING::HAS_MODEL_LOADED(func_393())){
bVar11=true;
}}elseif(!bLocal_68 && ((!MISC::IS_BIT_SET(iLocal_117[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_117[iVar0], 2) && uVar14))){
bVar11=true;
}else{
STREAMING::REQUEST_MODEL(func_396());
bVar11=STREAMING::HAS_MODEL_LOADED(func_396());
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_171[iVar0])){
STREAMING::REQUEST_MODEL(iLocal_165[iVar0]);
if((STREAMING::HAS_MODEL_LOADED(iLocal_165[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_115[iVar0], &cLocal_155)) && bVar11){
if(fLocal_96 >=(fLocal_79[iVar0] - (fLocal_109 * fParam1))){
if((iLocal_55 || iParam2) || (!bLocal_72 && !func_411(Local_139[iVar0 /*3*/], Var8, 5f, fLocal_107))){
if(bLocal_51){
func_410(Local_139[iVar0 /*3*/], Var8, fLocal_100);
}
iLocal_171[iVar0]=VEHICLE::CREATE_VEHICLE(iLocal_165[iVar0], Local_139[iVar0 /*3*/], 0, 0, 0, 0);
if(iLocal_165[iVar0]==joaat("polmav")){
VEHICLE::SET_VEHICLE_LIVERY(iLocal_171[iVar0], 0);
}
if(uLocal_64 && !MISC::IS_BIT_SET(iLocal_117[iVar0], 0)){
func_409(iLocal_171[iVar0]);
}
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_171[iVar0], Local_139[iVar0 /*3*/], 0, 0, 1);
ENTITY::SET_ENTITY_QUATERNION(iLocal_171[iVar0], fLocal_75[iVar0], fLocal_76[iVar0], fLocal_77[iVar0], fLocal_78[iVar0]);
if(VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_165[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0])){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_171[iVar0], 1084227584);
}
if(MISC::IS_BIT_SET(iLocal_117[iVar0], 3)){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_171[iVar0], 1);
}
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_171[iVar0], 1, 1, 0);
if(CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7){
VEHICLE::SET_VEHICLE_LIGHTS(iLocal_171[iVar0], 3);
}
}
ENTITY::FREEZE_ENTITY_POSITION(iLocal_171[iVar0], 1);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_171[iVar0], 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
iLocal_131=(iLocal_131 - 1);
iLocal_116[iVar0]++;
bLocal_72=true;
}elseif(fLocal_96 > fLocal_79[iVar0]){
iLocal_131=(iLocal_131 - 1);
func_417(iVar0, 1090519040);
}}
}}}elseif(iLocal_116[iVar0]==2){
bVar11=false;
if(((iVar3 < 8 && (iVar0 > iLocal_137 || iLocal_137==0)) || iLocal_55) || iParam2){
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
if(MISC::IS_BIT_SET(iLocal_117[iVar0], 0)){
STREAMING::REQUEST_MODEL(func_393());
bVar11=STREAMING::HAS_MODEL_LOADED(func_393());
iVar15=2;
}elseif(!bLocal_68 && ((!MISC::IS_BIT_SET(iLocal_117[iVar0], 2) && uVar13) || (MISC::IS_BIT_SET(iLocal_117[iVar0], 2) && uVar14))){
bVar11=true;
iVar15=1;
}else{
STREAMING::REQUEST_MODEL(func_396());
bVar11=STREAMING::HAS_MODEL_LOADED(func_396());
iVar15=0;
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_171[iVar0], 0)){
if(!bLocal_72 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_171[iVar0], -1, 0)){
if(bVar11){
if((vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_171[iVar0], 1), Var8) < 10000f || iParam2) || iLocal_55){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
MISC::SET_BIT(&(iLocal_117[iVar0]), 1);
}
}}}
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], 0)){
VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
if(fLocal_96 >=fLocal_79[iVar0]){
if(22 > iLocal_122){
fVar9=(fLocal_96 - fLocal_79[iVar0]);
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_115[iVar0], &cLocal_155)){
if(fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155)){
Var6={
ENTITY::GET_ENTITY_COORDS(iLocal_171[iVar0], 1) 
};
Var7={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_115[iVar0], fVar9, &cLocal_155) 
};
if(!func_411(Var6, Var8, 5f, fLocal_107) && func_411(Var7, Var8, 5f, fLocal_107)){
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
func_417(iVar0, 1090519040);
}elseif(((!bLocal_72 || MISC::IS_BIT_SET(iLocal_117[iVar0], 1)) || iLocal_55) || iParam2){
if(func_400(&(iLocal_171[iVar0]), iLocal_115[iVar0], fVar9, 1, 0, 0, 1, bLocal_69)){
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
ENTITY::SET_ENTITY_COLLISION(iLocal_171[iVar0], 1, 0);
VEHICLE::SET_PLAYBACK_SPEED(iLocal_171[iVar0], fParam1);
iLocal_122++;
iLocal_116[iVar0]++;
}}
}
else{
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
func_417(iVar0, 1090519040);
}
}
elseif(fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155)){
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
func_417(iVar0, 1090519040);
}}else{
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
func_417(iVar0, 1090519040);
}}elseif(iLocal_52 && !bLocal_60){
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
func_417(iVar0, 1090519040);
}
}
else{
if(!MISC::IS_BIT_SET(iLocal_117[iVar0], 1)){
func_407(&(iLocal_171[iVar0]), iVar15, 0);
}
func_417(iVar0, 1090519040);
}
iVar3++;
iLocal_137=iVar0;
}}elseif(iLocal_116[iVar0]==3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0])){
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
if(bVar12){
bVar18=false;
if(!bLocal_50){
if((!bLocal_45 && !iLocal_42) && func_406(iLocal_171[iVar0])){
if(iVar2 < 3 && (iVar0 > iLocal_136 || iLocal_136==0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar5, 0)){
bVar11=false;
if(!func_416(iLocal_171[iVar0], iVar5) || func_403(iVar5, iLocal_171[iVar0], 0)){
bVar18=true;
}}
iLocal_136=iVar0;
iVar2++;
}
}
elseif(((!bLocal_65 && !MISC::IS_BIT_SET(iLocal_117[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_136 || iLocal_136==0)){
Var19={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_171[iVar0], 1)) 
};
if(Var19.f_1 < 0f){
if(MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0)){
bVar18=true;
}}
iVar2++;
iLocal_136=iVar0;
}
}
if(bVar18){
func_402(iLocal_171[iVar0]);
iLocal_116[iVar0]++;
}
else{
VEHICLE::SET_PLAYBACK_SPEED(iLocal_171[iVar0], fParam1);
}}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
}
}
else{
iLocal_116[iVar0]++;
}}else{
iLocal_116[iVar0]++;
}}elseif(iLocal_116[iVar0]==4){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], 0)){
if(!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0])){
iLocal_116[iVar0]++;
}
else{
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iVar0], -1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
VEHICLE::SET_PLAYBACK_SPEED(iLocal_171[iVar0], fParam1);
}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
}
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_115[iVar0], &cLocal_155)){
if(fLocal_96 > (fLocal_79[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155))){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
}}else{
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
}
}}else{
iLocal_116[iVar0]++;
}}elseif(iLocal_116[iVar0]==5){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_171[iVar0], 0)){
fVar10=ENTITY::GET_ENTITY_SPEED(iLocal_171[iVar0]);
}
iLocal_122=(iLocal_122 - 1);
func_417(iVar0, fVar10);
}
if(iVar16==-1){
iVar16=iVar0;
}}
iVar0++;
}
if(iVar16 !=-1){
iLocal_126=iVar16;
}
if(iVar2 < 3){
iLocal_136=0;
}
if(iVar3 < 8){
iLocal_137=0;
}}else{
func_392();
}}

int func_416(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, 0) 
};
}else{
return 0;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, 0) 
};
}else{
return 0;
}
Var0.f_2=0f;
Var1.f_2=0f;
fVar2=func_404(Var0, Var1);
if(fVar2 < 0f){
return 0;
}
return 1;
}


void func_417(int iParam0, float fParam1){
int iVar0;
if(!iLocal_165[iParam0]==0){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iParam0]);
}
if(!ENTITY::IS_ENTITY_DEAD(iLocal_171[iParam0], 0)){
ENTITY::SET_ENTITY_COLLISION(iLocal_171[iParam0], 1, 0);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_171[iParam0], 0);
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iParam0], -1, 0);
if(!PED::IS_PED_INJURED(iVar0) && iVar0 !=PLAYER::PLAYER_PED_ID()){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
if(fParam1 < 8f){
fParam1=8f;
}
if(fParam1 > 62.9f){
fParam1=62.9f;
}
TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_171[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
if(bLocal_74){
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
}}
if(!bLocal_43){
if(!bLocal_71){
func_408(iVar0);
func_389(iLocal_171[iParam0]);
}}else{
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
PED::DELETE_PED(&iVar0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_171[iParam0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_171[iParam0]));
}}
if(!bLocal_53 && !bLocal_66){
if(iLocal_115[iParam0] > 0){
VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_115[iParam0], &cLocal_155);
}}
iLocal_116[iParam0]=99;
}


void func_418(int iParam0, float fParam1, float fParam2){
var uVar0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var4={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
uVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
Var1={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
Var3={
Var2 - Var1 
};
fVar5=vmag(Var3);
if(fVar5 > fParam2){
fVar5=fParam2;
}
func_410(Var1, Var4, fVar5);
}}}


void func_419(int iParam0, float fParam1){
if(!bLocal_54){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1)){
STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
}else{
STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
}}}}}


void func_420(int iParam0, float fParam1){
if(!bLocal_54){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1)){
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
}else{
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}}}}}


void func_421(int iParam0, float fParam1){
var uVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0)){
fVar1=(fLocal_110 + 2000f);
fVar2=(fLocal_111 + 2000f);
bVar4=false;
if(fVar1 < (fParam1 + 25000f)){
uVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
if(fVar1 <=VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0)){
if(iLocal_132==0){
Local_151={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_110) 
};
iLocal_132++;
}elseif(iLocal_132==1){
Local_152={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) 
};
iLocal_132++;
}elseif(!bLocal_72){
if(Local_151.f_0 > Local_152.f_0){
fVar3=Local_151.f_0;
Local_151.f_0=Local_152.f_0;
Local_152.f_0=fVar3;
}
if(Local_151.f_1 > Local_152.f_1){
fVar3=Local_151.f_1;
Local_151.f_1=Local_152.f_1;
Local_152.f_1=fVar3;
}
if(Local_151.f_2 > Local_152.f_2){
fVar3=Local_151.f_2;
Local_151.f_2=Local_152.f_2;
Local_152.f_2=fVar3;
}
Local_151={
Local_151 - Vector(fLocal_114, fLocal_114, fLocal_114) 
};
Local_152={
Local_152 + Vector(fLocal_114, fLocal_114, fLocal_114) 
};
PATHFIND::SET_ROADS_IN_AREA(Local_151, Local_152, 0, 0);
fLocal_110=fVar1;
iLocal_132=0;
}}}
if(fVar2 < (fParam1 - 8000f)){
uVar0=VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
if(iLocal_135==0){
Local_153={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_111) 
};
iLocal_135++;
}elseif(iLocal_135==1){
Local_154={
VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) 
};
iLocal_135++;
}elseif(!bLocal_72 && !bVar4){
if(Local_153.f_0 > Local_154.f_0){
fVar3=Local_153.f_0;
Local_153.f_0=Local_154.f_0;
Local_154.f_0=fVar3;
}
if(Local_153.f_1 > Local_154.f_1){
fVar3=Local_153.f_1;
Local_153.f_1=Local_154.f_1;
Local_154.f_1=fVar3;
}
if(Local_153.f_2 > Local_154.f_2){
fVar3=Local_153.f_2;
Local_153.f_2=Local_154.f_2;
Local_154.f_2=fVar3;
}
Local_153={
Local_153 - Vector(fLocal_114, fLocal_114, fLocal_114) 
};
Local_154={
Local_154 + Vector(fLocal_114, fLocal_114, fLocal_114) 
};
PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_153, Local_154, 1);
fLocal_111=fVar2;
iLocal_135=0;
}}}}

int func_422(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
float fVar5;
if(!PED::IS_PED_INJURED(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam1, 0)){
if(PED::IS_PED_IN_VEHICLE(iParam0, iParam1, 0)){
return 0;
}}}
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
Var0={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) 
};
Var4={
Var2 - Var1 
};
}
Var3={
Var1 - Var0 
};
Var3.f_2=0f;
Var4.f_2=0f;
fVar5=func_404(Var3, Var4);
if(fVar5 < 0f){
return 1;
}
return 0;
}


void func_423(){
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
VEHICLE::SET_GARBAGE_TRUCKS(0);
VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
STREAMING::SET_PED_POPULATION_BUDGET(3);
}

int func_424(){
if(func_5(iLocal_759)){
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759)){
ENTITY::SET_ENTITY_VISIBLE(iLocal_759, 0, 0);
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::DESTROY_CAM(uLocal_665, 0);
}
func_255(0);
iLocal_674=0;
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::SET_CAM_COORD(uLocal_663, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463));
CAM::POINT_CAM_AT_COORD(uLocal_663, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, 0f, -5f, 0.6f));
CAM::SET_CAM_FOV(uLocal_663, 45f);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
if(func_6(uLocal_758[0])){
VEHICLE::LOWER_CONVERTIBLE_ROOF(uLocal_758[0], 1);
}
func_14(0);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
bLocal_730=true;
return 1;
if(bLocal_668){
}}}
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
func_367();
return 0;
}


void func_425(){
Local_141[0 /*3*/]={
-61.5962f, 337.5525f, 111.1293f 
};
fLocal_84[0]=-0.0046f;
fLocal_85[0]=-0.0506f;
fLocal_86[0]=0.98f;
fLocal_87[0]=0.1923f;
iLocal_118[0]=101;
fLocal_88[0]=59.4f;
fLocal_89[0]=1f;
iLocal_167[0]=joaat("rapidgt2");
iLocal_174[0]=uLocal_758[0];
Local_141[1 /*3*/]={
-62.3594f, 322.6118f, 109.7076f 
};
fLocal_84[1]=-0.0241f;
fLocal_85[1]=-0.0644f;
fLocal_86[1]=0.9804f;
fLocal_87[1]=0.1845f;
iLocal_118[1]=102;
fLocal_88[1]=1961.6f;
fLocal_89[1]=1f;
iLocal_167[1]=joaat("landstalker");
iLocal_174[1]=uLocal_758[1];
Local_141[2 /*3*/]={
-68.0978f, 309.2655f, 107.7569f 
};
fLocal_84[2]=-0.0147f;
fLocal_85[2]=-0.07f;
fLocal_86[2]=0.9755f;
fLocal_87[2]=0.2082f;
iLocal_118[2]=103;
fLocal_88[2]=5416.196f;
fLocal_89[2]=1f;
iLocal_167[2]=joaat("landstalker");
iLocal_174[2]=uLocal_758[2];
Local_141[3 /*3*/]={
654.7409f, 37.7855f, 85.6549f 
};
fLocal_84[3]=0.0329f;
fLocal_85[3]=0.0239f;
fLocal_86[3]=0.5549f;
fLocal_87[3]=0.8309f;
iLocal_118[3]=125;
fLocal_88[3]=44719.99f;
fLocal_89[3]=1f;
iLocal_167[3]=joaat("taxi");
Local_141[4 /*3*/]={
435.1409f, -57.207f, 74.137f 
};
fLocal_84[4]=-0.0062f;
fLocal_85[4]=-0.0807f;
fLocal_86[4]=0.956f;
fLocal_87[4]=0.2818f;
iLocal_118[4]=150;
fLocal_88[4]=60000f;
fLocal_89[4]=1f;
iLocal_167[4]=joaat("taxi");
Local_141[5 /*3*/]={
371.1497f, -244.7208f, 53.7699f 
};
fLocal_84[5]=0.0223f;
fLocal_85[5]=-0.0044f;
fLocal_86[5]=-0.1527f;
fLocal_87[5]=0.988f;
iLocal_118[5]=151;
fLocal_88[5]=60000f;
fLocal_89[5]=1f;
iLocal_167[5]=joaat("fq2");
Local_141[6 /*3*/]={
443.9521f, -32.4616f, 78.8341f 
};
fLocal_84[6]=-0.0301f;
fLocal_85[6]=-0.0745f;
fLocal_86[6]=0.9603f;
fLocal_87[6]=0.2672f;
iLocal_118[6]=152;
fLocal_88[6]=60000f;
fLocal_89[6]=1f;
iLocal_167[6]=joaat("mule");
Local_141[7 /*3*/]={
540.6125f, -93.1815f, 65.6238f 
};
fLocal_84[7]=0.1322f;
fLocal_85[7]=-0.1121f;
fLocal_86[7]=0.8787f;
fLocal_87[7]=0.4447f;
iLocal_118[7]=120;
fLocal_88[7]=60610.3f;
fLocal_89[7]=1f;
iLocal_167[7]=joaat("faggio2");
Local_141[8 /*3*/]={
243.451f, -202.3356f, 53.8657f 
};
fLocal_84[8]=0.0356f;
fLocal_85[8]=0.0122f;
fLocal_86[8]=-0.1815f;
fLocal_87[8]=0.9827f;
iLocal_118[8]=130;
fLocal_88[8]=70000f;
fLocal_89[8]=1f;
iLocal_167[8]=joaat("surfer2");
}


void func_426(){
Local_139[0 /*3*/]={
25.6387f, 266.4447f, 109.3633f 
};
fLocal_75[0]=-0.0002f;
fLocal_76[0]=-0.0004f;
fLocal_77[0]=0.6374f;
fLocal_78[0]=0.7705f;
iLocal_115[0]=2;
fLocal_79[0]=3498f;
iLocal_165[0]=joaat("felon");
Local_139[1 /*3*/]={
53.3845f, 259.2507f, 109.0939f 
};
fLocal_75[1]=0.0028f;
fLocal_76[1]=0.0014f;
fLocal_77[1]=0.5719f;
fLocal_78[1]=0.8203f;
iLocal_115[1]=4;
fLocal_79[1]=5346f;
iLocal_165[1]=0;
Local_139[2 /*3*/]={
54.699f, 249.2125f, 109.5105f 
};
fLocal_75[2]=-0.0053f;
fLocal_76[2]=-0.0038f;
fLocal_77[2]=0.5759f;
fLocal_78[2]=0.8175f;
iLocal_115[2]=5;
fLocal_79[2]=5478f;
iLocal_165[2]=joaat("rocoto");
Local_139[3 /*3*/]={
61.6959f, 252.0383f, 109.0729f 
};
fLocal_75[3]=0.0073f;
fLocal_76[3]=0.0053f;
fLocal_77[3]=0.577f;
fLocal_78[3]=0.8167f;
iLocal_115[3]=6;
fLocal_79[3]=5742f;
iLocal_165[3]=joaat("infernus");
Local_139[4 /*3*/]={
69.9301f, 249.1113f, 108.8189f 
};
fLocal_75[4]=0.0138f;
fLocal_76[4]=0.0098f;
fLocal_77[4]=0.576f;
fLocal_78[4]=0.8173f;
iLocal_115[4]=7;
fLocal_79[4]=6336f;
iLocal_165[4]=0;
Local_139[5 /*3*/]={
69.6693f, 243.7877f, 108.6399f 
};
fLocal_75[5]=0.0136f;
fLocal_76[5]=0.01f;
fLocal_77[5]=0.5746f;
fLocal_78[5]=0.8183f;
iLocal_115[5]=8;
fLocal_79[5]=6402f;
iLocal_165[5]=joaat("taxi");
Local_139[6 /*3*/]={
237.0279f, 346.2748f, 105.4462f 
};
fLocal_75[6]=0.002f;
fLocal_76[6]=-0.0029f;
fLocal_77[6]=0.8184f;
fLocal_78[6]=-0.5746f;
iLocal_115[6]=9;
fLocal_79[6]=16434f;
iLocal_165[6]=joaat("rocoto");
Local_139[7 /*3*/]={
347.382f, 320.5341f, 103.8621f 
};
fLocal_75[7]=0.0011f;
fLocal_76[7]=0.0012f;
fLocal_77[7]=0.6188f;
fLocal_78[7]=0.7855f;
iLocal_115[7]=10;
fLocal_79[7]=20328f;
iLocal_165[7]=joaat("bus");
Local_139[8 /*3*/]={
424.6772f, 305.5897f, 102.4288f 
};
fLocal_75[8]=-0.0055f;
fLocal_76[8]=0.023f;
fLocal_77[8]=0.4f;
fLocal_78[8]=0.9162f;
iLocal_115[8]=11;
fLocal_79[8]=23958f;
iLocal_165[8]=joaat("penumbra");
Local_139[9 /*3*/]={
423.819f, 290.4329f, 102.8873f 
};
fLocal_75[9]=-0.0257f;
fLocal_76[9]=-0.0017f;
fLocal_77[9]=0.805f;
fLocal_78[9]=-0.5927f;
iLocal_115[9]=12;
fLocal_79[9]=24024f;
iLocal_165[9]=joaat("rocoto");
Local_139[10 /*3*/]={
418.2715f, 279.2705f, 102.5196f 
};
fLocal_75[10]=0.0001f;
fLocal_76[10]=0f;
fLocal_77[10]=-0.1905f;
fLocal_78[10]=0.9817f;
iLocal_115[10]=13;
fLocal_79[10]=24486f;
iLocal_165[10]=joaat("futo");
iLocal_171[10]=iLocal_361;
Local_139[11 /*3*/]={
436.6275f, 293.4052f, 102.9222f 
};
fLocal_75[11]=0.0057f;
fLocal_76[11]=0.0037f;
fLocal_77[11]=0.5851f;
fLocal_78[11]=0.8109f;
iLocal_115[11]=14;
fLocal_79[11]=24552f;
iLocal_165[11]=joaat("rocoto");
Local_139[12 /*3*/]={
568.5327f, 245.2966f, 102.6008f 
};
fLocal_75[12]=-0.0038f;
fLocal_76[12]=0.0103f;
fLocal_77[12]=0.6916f;
fLocal_78[12]=0.7222f;
iLocal_115[12]=15;
fLocal_79[12]=30294f;
iLocal_165[12]=joaat("futo");
Local_139[13 /*3*/]={
563.3254f, 226.8358f, 102.5454f 
};
fLocal_75[13]=0.0315f;
fLocal_76[13]=-0.0056f;
fLocal_77[13]=-0.1653f;
fLocal_78[13]=0.9857f;
iLocal_115[13]=16;
fLocal_79[13]=30360f;
iLocal_165[13]=joaat("taxi");
Local_139[14 /*3*/]={
585.7031f, 250.9805f, 102.9546f 
};
fLocal_75[14]=0.0005f;
fLocal_76[14]=-0.0193f;
fLocal_77[14]=0.3598f;
fLocal_78[14]=0.9328f;
iLocal_115[14]=17;
fLocal_79[14]=30888f;
iLocal_165[14]=joaat("rocoto");
Local_139[15 /*3*/]={
641.6404f, 224.289f, 97.99f 
};
fLocal_75[15]=0.0522f;
fLocal_76[15]=0.038f;
fLocal_77[15]=0.6146f;
fLocal_78[15]=0.7862f;
iLocal_115[15]=18;
fLocal_79[15]=33264f;
iLocal_165[15]=joaat("penumbra");
Local_139[16 /*3*/]={
651.6318f, 221.3143f, 96.7827f 
};
fLocal_75[16]=0.0519f;
fLocal_76[16]=0.0379f;
fLocal_77[16]=0.5888f;
fLocal_78[16]=0.8057f;
iLocal_115[16]=19;
fLocal_79[16]=33726f;
iLocal_165[16]=joaat("taxi");
Local_139[17 /*3*/]={
686.7967f, 203.5349f, 92.1762f 
};
fLocal_75[17]=0.0316f;
fLocal_76[17]=-0.0462f;
fLocal_77[17]=0.8192f;
fLocal_78[17]=-0.5708f;
iLocal_115[17]=20;
fLocal_79[17]=35244f;
iLocal_165[17]=joaat("bus");
Local_139[18 /*3*/]={
558.3951f, 44.7597f, 94.2669f 
};
fLocal_75[18]=-0.0174f;
fLocal_76[18]=-0.0487f;
fLocal_77[18]=0.7204f;
fLocal_78[18]=-0.6916f;
iLocal_115[18]=110;
fLocal_79[18]=44000f;
iLocal_165[18]=joaat("bus");
Local_139[19 /*3*/]={
648.9051f, 39.3727f, 86.1631f 
};
fLocal_75[19]=0.0453f;
fLocal_76[19]=0.0236f;
fLocal_77[19]=0.5662f;
fLocal_78[19]=0.8227f;
iLocal_115[19]=111;
fLocal_79[19]=44000f;
iLocal_165[19]=0;
Local_139[20 /*3*/]={
657.6167f, 23.9452f, 84.8269f 
};
fLocal_75[20]=0.0184f;
fLocal_76[20]=-0.0273f;
fLocal_77[20]=0.8442f;
fLocal_78[20]=-0.5349f;
iLocal_115[20]=21;
fLocal_79[20]=46596f;
iLocal_165[20]=joaat("stratum");
Local_139[21 /*3*/]={
702.3966f, 16.4575f, 83.7715f 
};
fLocal_75[21]=0.0095f;
fLocal_76[21]=0.0053f;
fLocal_77[21]=0.4853f;
fLocal_78[21]=0.8743f;
iLocal_115[21]=22;
fLocal_79[21]=50292f;
iLocal_165[21]=0;
Local_139[22 /*3*/]={
685.0597f, -109.3147f, 74.1404f 
};
fLocal_75[22]=-0.0189f;
fLocal_76[22]=0.0245f;
fLocal_77[22]=0.4845f;
fLocal_78[22]=0.8742f;
iLocal_115[22]=114;
fLocal_79[22]=50610.3f;
iLocal_165[22]=joaat("rocoto");
Local_139[23 /*3*/]={
702.9434f, 9.8203f, 83.7822f 
};
fLocal_75[23]=0.0098f;
fLocal_76[23]=0.0046f;
fLocal_77[23]=0.4938f;
fLocal_78[23]=0.8695f;
iLocal_115[23]=23;
fLocal_79[23]=51612f;
iLocal_165[23]=0;
Local_139[24 /*3*/]={
611.2632f, -68.2602f, 72.7379f 
};
fLocal_75[24]=0.0478f;
fLocal_76[24]=-0.0234f;
fLocal_77[24]=-0.5413f;
fLocal_78[24]=0.8391f;
iLocal_115[24]=24;
fLocal_79[24]=55506f;
iLocal_165[24]=joaat("felon");
Local_139[25 /*3*/]={
558.8278f, -89.5658f, 67.1954f 
};
fLocal_75[25]=0.0763f;
fLocal_76[25]=0.0202f;
fLocal_77[25]=-0.57f;
fLocal_78[25]=0.8179f;
iLocal_115[25]=112;
fLocal_79[25]=55610.3f;
iLocal_165[25]=joaat("taxi");
Local_139[26 /*3*/]={
525.6269f, -124.3243f, 60.7692f 
};
fLocal_75[26]=0.0799f;
fLocal_76[26]=0.0173f;
fLocal_77[26]=-0.2839f;
fLocal_78[26]=0.9554f;
iLocal_115[26]=113;
fLocal_79[26]=55610.3f;
iLocal_165[26]=joaat("bus");
Local_139[27 /*3*/]={
546.617f, -83.762f, 67.0976f 
};
fLocal_75[27]=0.1902f;
fLocal_76[27]=-0.1282f;
fLocal_77[27]=0.8789f;
fLocal_78[27]=0.4182f;
iLocal_115[27]=25;
fLocal_79[27]=58542f;
iLocal_165[27]=joaat("taxi");
Local_139[28 /*3*/]={
512.8046f, -125.0119f, 60.1147f 
};
fLocal_75[28]=0.0016f;
fLocal_76[28]=-0.0689f;
fLocal_77[28]=0.9713f;
fLocal_78[28]=0.2277f;
iLocal_115[28]=26;
fLocal_79[28]=60588f;
iLocal_165[28]=0;
Local_139[29 /*3*/]={
321.9392f, -109.2699f, 67.8426f 
};
fLocal_75[29]=0.0084f;
fLocal_76[29]=-0.0199f;
fLocal_77[29]=0.8069f;
fLocal_78[29]=-0.5903f;
iLocal_115[29]=27;
fLocal_79[29]=69234f;
iLocal_165[29]=joaat("carbonizzare");
Local_139[30 /*3*/]={
278.0286f, -73.8002f, 69.533f 
};
fLocal_75[30]=0.0043f;
fLocal_76[30]=0.0017f;
fLocal_77[30]=0.9776f;
fLocal_78[30]=0.2105f;
iLocal_115[30]=28;
fLocal_79[30]=71346f;
iLocal_165[30]=joaat("penumbra");
Local_139[31 /*3*/]={
276.3335f, -111.556f, 69.3416f 
};
fLocal_75[31]=0.023f;
fLocal_76[31]=-0.0041f;
fLocal_77[31]=-0.1834f;
fLocal_78[31]=0.9828f;
iLocal_115[31]=29;
fLocal_79[31]=71676f;
iLocal_165[31]=joaat("futo");
Local_139[32 /*3*/]={
254.9427f, -76.6293f, 69.4554f 
};
fLocal_75[32]=-0.003f;
fLocal_76[32]=0.0042f;
fLocal_77[32]=0.8139f;
fLocal_78[32]=-0.581f;
iLocal_115[32]=30;
fLocal_79[32]=72204f;
iLocal_165[32]=joaat("penumbra");
Local_139[33 /*3*/]={
236.3161f, -186.5169f, 54.7485f 
};
fLocal_75[33]=-0.0102f;
fLocal_76[33]=-0.0531f;
fLocal_77[33]=0.9836f;
fLocal_78[33]=0.172f;
iLocal_115[33]=31;
fLocal_79[33]=76230f;
iLocal_165[33]=joaat("futo");
Local_139[34 /*3*/]={
229.294f, -204.6162f, 53.4777f 
};
fLocal_75[34]=0.0007f;
fLocal_76[34]=-0.0002f;
fLocal_77[34]=0.9141f;
fLocal_78[34]=0.4055f;
iLocal_115[34]=32;
fLocal_79[34]=76230f;
iLocal_165[34]=joaat("penumbra");
Local_139[35 /*3*/]={
234.9658f, -223.4058f, 53.6191f 
};
fLocal_75[35]=0.0056f;
fLocal_76[35]=0.0012f;
fLocal_77[35]=0.5698f;
fLocal_78[35]=0.8218f;
iLocal_115[35]=34;
fLocal_79[35]=77352f;
iLocal_165[35]=joaat("taxi");
Local_139[36 /*3*/]={
221.0836f, -222.9086f, 54.1788f 
};
fLocal_75[36]=-0.0031f;
fLocal_76[36]=0.0061f;
fLocal_77[36]=0.8252f;
fLocal_78[36]=-0.5647f;
iLocal_115[36]=35;
fLocal_79[36]=77682f;
iLocal_165[36]=joaat("mule");
Local_139[37 /*3*/]={
220.7465f, -228.1144f, 53.4656f 
};
fLocal_75[37]=-0.0019f;
fLocal_76[37]=0.003f;
fLocal_77[37]=0.8178f;
fLocal_78[37]=-0.5754f;
iLocal_115[37]=36;
fLocal_79[37]=79134f;
iLocal_165[37]=joaat("penumbra");
Local_139[38 /*3*/]={
203.5953f, -342.6908f, 43.634f 
};
fLocal_75[38]=0.002f;
fLocal_76[38]=0.0006f;
fLocal_77[38]=0.5637f;
fLocal_78[38]=0.826f;
iLocal_115[38]=37;
fLocal_79[38]=82632f;
iLocal_165[38]=joaat("taxi");
Local_139[39 /*3*/]={
176.7323f, -365.8312f, 43.0022f 
};
fLocal_75[39]=0.0245f;
fLocal_76[39]=-0.0051f;
fLocal_77[39]=-0.202f;
fLocal_78[39]=0.9791f;
iLocal_115[39]=38;
fLocal_79[39]=84018f;
iLocal_165[39]=joaat("dubsta");
Local_139[40 /*3*/]={
168.5778f, -336.4375f, 43.5013f 
};
fLocal_75[40]=-0.0022f;
fLocal_76[40]=0.0015f;
fLocal_77[40]=0.8002f;
fLocal_78[40]=-0.5997f;
iLocal_115[40]=39;
fLocal_79[40]=84084f;
iLocal_165[40]=joaat("penumbra");
Local_139[41 /*3*/]={
4.1466f, -372.4675f, 39.302f 
};
fLocal_75[41]=0.0469f;
fLocal_76[41]=0.0063f;
fLocal_77[41]=-0.188f;
fLocal_78[41]=0.981f;
iLocal_115[41]=40;
fLocal_79[41]=93060f;
iLocal_165[41]=joaat("taxi");
Local_139[42 /*3*/]={
14.6536f, -491.7607f, 33.9844f 
};
fLocal_75[42]=-0.001f;
fLocal_76[42]=-0.0049f;
fLocal_77[42]=0.7513f;
fLocal_78[42]=0.6599f;
iLocal_115[42]=41;
fLocal_79[42]=96624f;
iLocal_165[42]=joaat("bus");
Local_139[43 /*3*/]={
-10.2838f, -420.3103f, 39.1597f 
};
fLocal_75[43]=-0.0141f;
fLocal_76[43]=0.0241f;
fLocal_77[43]=-0.144f;
fLocal_78[43]=0.9892f;
iLocal_115[43]=42;
fLocal_79[43]=97350f;
iLocal_165[43]=joaat("tornado3");
Local_139[44 /*3*/]={
-14.9425f, -417.0332f, 39.2908f 
};
fLocal_75[44]=-0.0119f;
fLocal_76[44]=0.0229f;
fLocal_77[44]=-0.1418f;
fLocal_78[44]=0.9896f;
iLocal_115[44]=43;
fLocal_79[44]=97746f;
iLocal_165[44]=joaat("tornado3");
}


void func_427(char* sParam0, int iParam1, bool bParam2, bool bParam3){
struct<3> Var0;
StringCopy(&cLocal_155, sParam0, 64);
bLocal_51=true;
iLocal_56=0;
iLocal_122=0;
iLocal_123=0;
iLocal_124=0;
iLocal_125=iParam1;
iLocal_126=0;
iLocal_127=0;
iLocal_128=0;
iLocal_132=0;
iLocal_135=0;
iLocal_133=-1;
iLocal_134=-1;
iLocal_136=0;
iLocal_137=0;
fLocal_110=0f;
fLocal_111=0f;
fLocal_96=0f;
iLocal_57=0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Local_143.f_0=(Var0.f_0 - 100f);
Local_143.f_1=(Var0.f_1 - 100f);
Local_143.f_2=(Var0.f_2 - 100f);
Local_144.f_0=(Var0.f_0 + 100f);
Local_144.f_1=(Var0.f_1 + 100f);
Local_144.f_2=(Var0.f_2 + 100f);
PATHFIND::SET_ROADS_IN_AREA(Local_143, Local_144, 0, 0);
if(bParam2){
MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0, 0, 0);
}}
PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &uLocal_164);
func_423();
if(bParam3){
func_377(1);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
PED::SET_CREATE_RANDOM_COPS(0);
}
func_383();
}


void func_428(){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE")){
if(func_6(uLocal_758[0])){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_758[0], "PAPARAZZO_02_POPPY_CARS", 0);
}
if(func_6(uLocal_758[1])){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_758[1], "PAPARAZZO_02_CHASE_JUSTIN_CAR", 0);
}
if(func_6(uLocal_758[2])){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_758[2], "PAPARAZZO_02_CHASE_SECURITY_CAR", 0);
}
AUDIO::START_AUDIO_SCENE("PAPARAZZO_02_CHASE");
}}


void func_429(){
func_7(&(Local_483[0 /*5*/]));
func_7(&(Local_483[1 /*5*/]));
func_7(&(uLocal_355[0]));
func_7(&(uLocal_355[1]));
func_7(&(uLocal_355[2]));
func_7(&(uLocal_355[3]));
func_7(&(uLocal_355[4]));
func_7(&(uLocal_355[5]));
}


void func_430(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
char[] cVar3[8];
int iVar4;
var uVar5;
int iVar6;
if(iParam3==1){
if(!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME())){
}}
iVar0=0;
if(iParam3==1){
if(iParam0 !=Global_100718){
iVar0=1;
}}elseif(iParam0 > Global_100718){
iVar0=1;
}
if(iVar0==1){
func_484(1);
if(iParam0 <=Global_100718){
}
iVar1=func_482(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
if(iVar1 !=-1 && iVar1 !=94){
Global_113648.f_9087.f_330[iVar1 /*6*/].f_1=0;
iVar2=func_480(iVar1);
cVar3={
Global_91469[iVar1 /*34*/].f_8 
};
if(iVar1==90){
switch (Global_113648.f_9087.f_99.f_205[7]){
case 1:
StringConCat(&cVar3, "A", 8);
break;
case 2:
StringConCat(&cVar3, "B", 8);
break;
}}
STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100718, iParam0);
}else{
iVar4=func_230(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
if(iVar4 !=-1){
Global_113648.f_18576[iVar4 /*6*/].f_4=0;
MemCopy(&uVar5,{
func_183(iVar4)
}
, 4);
STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100718, iParam0);
}else{
iVar6=func_479(&(Global_100681.f_3));
if(iVar6 > -1){
Global_113648.f_24988.f_4[iVar6]=0;
}}}
Global_94859=iParam2;
Global_100718=iParam0;
func_431(iParam0, sParam1, iParam4, iParam5);
if(MISC::ARE_STRINGS_EQUAL(sParam1, "")){
}}elseif(iParam0 < Global_100718){}}


void func_431(int iParam0, var uParam1, int iParam2, int iParam3){
func_432(&Global_107196, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}


void func_432(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
*uParam0=func_264();
uParam0->f_1=func_287();
MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_454(&(uParam0->f_2884), 0);
func_453(PLAYER::PLAYER_PED_ID());
func_446(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
if(uParam0->f_2==0 || uParam0->f_2==joaat("object")){
uParam0->f_2=joaat("weapon_unarmed");
}}
iVar1=0;
while (iVar1 < 3){
uParam0->f_17[iVar1]=Global_113648.f_2365.f_539.f_294[iVar1];
if(iVar1==func_445()){
func_441(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
}else{
iVar0=0;
while (iVar0 < 12){
uParam0->f_616[iVar1 /*65*/][iVar0]=Global_100406[iVar1 /*65*/][iVar0];
uParam0->f_616[iVar1 /*65*/].f_13[iVar0]=Global_100406[iVar1 /*65*/].f_13[iVar0];
iVar0++;
}
uParam0->f_616[iVar1 /*65*/].f_59=Global_100406[iVar1 /*65*/].f_59;
uParam0->f_616[iVar1 /*65*/].f_60=Global_100406[iVar1 /*65*/].f_60;
uParam0->f_616[iVar1 /*65*/].f_61=Global_100406[iVar1 /*65*/].f_61;
uParam0->f_616[iVar1 /*65*/].f_62=Global_100406[iVar1 /*65*/].f_62;
uParam0->f_616[iVar1 /*65*/].f_63=Global_100406[iVar1 /*65*/].f_63;
uParam0->f_616[iVar1 /*65*/].f_64=Global_100406[iVar1 /*65*/].f_64;
iVar0=0;
while (iVar0 < 9){
uParam0->f_616[iVar1 /*65*/].f_39[iVar0]=Global_100406[iVar1 /*65*/].f_39[iVar0];
uParam0->f_616[iVar1 /*65*/].f_49[iVar0]=Global_100406[iVar1 /*65*/].f_49[iVar0];
iVar0++;
}}
iVar0=0;
while (iVar0 < 44){
uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/]={
Global_113648.f_2365.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] 
};
iVar0++;
}
iVar0=0;
while (iVar0 < 51){
uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/]={
Global_113648.f_2365.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] 
};
iVar0++;
}
switch (iVar1){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
break;
}
uParam0->f_9[iVar1]=Global_113648.f_20566.f_233[iVar1 /*69*/].f_1;
uParam0->f_13[iVar1]=Global_60536[iVar1];
uParam0->f_25[0 /*295*/][iVar1 /*98*/]={
Global_113648.f_2365.f_539.f_2407[0 /*295*/][iVar1 /*98*/] 
};
uParam0->f_25[1 /*295*/][iVar1 /*98*/]={
Global_113648.f_2365.f_539.f_2407[1 /*295*/][iVar1 /*98*/] 
};
iVar0=0;
while (iVar0 <=3){
uParam0->f_2838[iVar1 /*15*/][iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/][iVar0];
uParam0->f_2838[iVar1 /*15*/].f_5[iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/].f_5[iVar0];
uParam0->f_2838[iVar1 /*15*/].f_10[iVar0]=Global_113648.f_2365.f_493[iVar1 /*15*/].f_10[iVar0];
iVar0++;
}
iVar0=0;
while (iVar0 <=2){
uParam0->f_2345[iVar1 /*164*/][iVar0]=Global_113648.f_2365[iVar1 /*164*/][iVar0];
uParam0->f_2345[iVar1 /*164*/].f_4[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_4[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_8[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_8[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_12[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_12[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_16[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_16[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_20[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_20[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_24[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_24[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_28[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_28[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_32[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_32[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_36[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_36[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_40[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_40[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_44[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_44[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_48[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_48[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_52[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_52[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_56[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_56[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_60[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_60[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_64[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_64[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_68[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_68[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_72[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_72[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_76[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_76[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_80[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_80[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_84[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_84[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_88[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_88[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_92[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_92[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_96[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_96[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_100[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_100[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_104[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_104[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_108[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_108[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_112[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_112[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_116[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_116[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_120[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_120[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_124[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_124[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_128[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_128[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_132[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_132[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_136[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_136[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_140[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_140[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_144[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_144[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_148[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_148[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_152[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_152[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_156[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_156[iVar0];
uParam0->f_2345[iVar1 /*164*/].f_160[iVar0]=Global_113648.f_2365[iVar1 /*164*/].f_160[iVar0];
iVar0++;
}
iVar1++;
}
STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
uParam0->f_5=145;
if(iParam4==1){
func_434(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
}
func_433(&(uParam0->f_2980));
uParam3=uParam3;
uParam2=uParam2;
}

int func_433(var uParam0){
*uParam0=Global_96530;
uParam0->f_1=Global_96531;
uParam0->f_2=0;
uParam0->f_3=0;
return 1;
}


void func_434(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
if(iParam2==0){
iParam2=PLAYER::PLAYER_PED_ID();
}
if(ENTITY::DOES_ENTITY_EXIST(iParam2)){
uParam1->f_5=func_175(iParam2);
}
if(func_440(iParam2, &iVar0, iParam3, iParam5)){
func_435(uParam0, uParam1, iVar0, iParam4);
}elseif(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
func_435(uParam0, uParam1, iVar0, iParam4);
}}}}

int func_435(var uParam0, var uParam1, int iParam2, int iParam3){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0)){
func_437(uParam0, iParam2, iParam3);
uParam1->f_4=iParam2;
if(func_436(iParam2)){
uParam1->f_3=1;
}else{
uParam1->f_3=0;
}
return 1;
}
return 0;
}

int func_436(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=6){
if(Global_100681.f_22[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_437(var uParam0, int iParam1, int iParam2){
func_306(iParam1, &(uParam0->f_12));
uParam0->f_7=func_439(iParam1, 145, 0);
uParam0->f_11=func_304(iParam1);
if(!uParam0->f_7){
if(!uParam0->f_10){
uParam0->f_10=func_438(iParam1);
}}
if(iParam2==1){
*uParam0={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
uParam0->f_6=ENTITY::GET_ENTITY_HEADING(iParam1);
uParam0->f_3={
ENTITY::GET_ENTITY_VELOCITY(iParam1) 
};
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_6=305.6424f;
}
if(Global_78253==iParam1){
uParam0->f_9=1;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_8=1;
}else{
uParam0->f_8=0;
}}

int func_438(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[iVar0])){
if(iParam0==Global_77348.f_484[iVar0]){
return 1;
}}
iVar0++;
}
return 0;
}

int func_439(int iParam0, int iParam1, int iParam2){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98012[iVar0])){
if(Global_98012[iVar0]==iParam0){
if(iParam1==145 || iParam1==Global_98022[iVar0]){
if(iParam2==0 || ENTITY::GET_ENTITY_MODEL(iParam0)==func_299(iParam1, iParam2)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_440(int iParam0, var uParam1, int iParam2, int iParam3){
char* sVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
*uParam1=PLAYER::GET_PLAYERS_LAST_VEHICLE();
}else{
*uParam1=PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0)){
if(iParam2==0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f){
if(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi"))){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) !=0){
return 0;
}
}
if(func_285(*uParam1, func_264(), 1)){
sVar0=SCRIPT::GET_THIS_SCRIPT_NAME();
if(!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere")){
return 0;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
return 0;
}
}
if(iParam3==1){
if(DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave")){
if(DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave")){
return 0;
}}
}
elseif(VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp"))){
return 0;
}
return 1;
}}}}}
return 0;
}


void func_441(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=func_175(iParam0);
iVar1=0;
while (iVar1 < 12){
func_444(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
iVar1++;
}
iVar1=0;
while (iVar1 < 9){
func_443(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
iVar1++;
}
if(func_178(iVar0)){
uParam1->f_59=Global_113648.f_2365.f_539[iVar0 /*65*/].f_59;
uParam1->f_60=Global_113648.f_2365.f_539[iVar0 /*65*/].f_60;
uParam1->f_61=Global_113648.f_2365.f_539[iVar0 /*65*/].f_61;
uParam1->f_62=Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
uParam1->f_63=Global_113648.f_2365.f_539[iVar0 /*65*/].f_63;
uParam1->f_64=Global_113648.f_2365.f_539[iVar0 /*65*/].f_64;
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
if(func_442(161, iParam3)){
uParam1->f_59=func_96(2053, iParam3, 0);
}else{
uParam1->f_59=func_96(753, iParam3, 0);
}
uParam1->f_60=func_96(754, iParam3, 0);
uParam1->f_61=func_96(755, iParam3, 0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
if(func_442(161, iParam3)){
uParam1->f_59=func_96(2053, iParam3, 0);
}else{
uParam1->f_59=func_96(753, iParam3, 0);
}}}}

int func_442(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_95(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_443(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5){
int iVar0;
iVar0=func_175(iParam0);
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


void func_444(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6){
int iVar0;
iVar0=func_175(iParam0);
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

int func_445(){
func_181();
return Global_113648.f_2365.f_539.f_4321;
}


void func_446(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
iVar0=func_175(iParam0);
if(func_178(iVar0) && !PED::IS_PED_INJURED(iParam0)){
if(iParam0==PLAYER::PLAYER_PED_ID()){
func_447(iParam0, &(Global_113648.f_2365.f_539.f_298[iVar0 /*477*/]));
iVar2=0;
while (iVar2 <=(8 - 1)){
Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0]=HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
if(bParam1){
iVar1=HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
if(Global_113648.f_2365.f_539.f_1730[iVar2 /*4*/][iVar0]==iVar1){
Global_113648.f_2365.f_539.f_1763=iVar2;
}}
iVar2++;
}
PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
if(iVar0==0){
STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
}elseif(iVar0==1){
STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
}elseif(iVar0==2){
STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
}}}}


void func_447(int iParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
struct<5> Var4;
int iVar5;
int iVar6;
struct<2> Var7;
struct<4> Var8;
int iVar9;
int iVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=0;
while (iVar0 <=(44 - 1)){
(uParam1[iVar0 /*5*/])->f_1=0;
iVar0++;
}
iVar0=0;
while (iVar0 <=(44 - 1)){
iVar3=func_452(iVar0);
if(iVar3 !=0){
Var4.f_0=WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_452(iVar0));
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
iVar1=0;
iVar2=func_450(Var4.f_0, iVar1);
while (iVar2 !=0){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2)){
MISC::SET_BIT(&(Var4.f_2), iVar1);
}
iVar1++;
iVar2=func_450(Var4.f_0, iVar1);
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
if((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_449(Var7.f_1)) && iVar9 < 51){
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
iVar10=0;
iVar1=0;
while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8)){
if(!func_448(Var8.f_3)){
if(WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3)){
MISC::SET_BIT(&(Var4.f_2), iVar10);
}
iVar10++;
}
}
iVar1++;
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

int func_448(int iParam0){
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

int func_449(int iParam0){
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
return 1;
break;
}}
return 0;
}

int func_450(int iParam0, int iParam1){
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
iVar1=func_451(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5)){
if(!func_448(Var5.f_3)){
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

int func_451(int iParam0, var uParam1){
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

int func_452(int iParam0){
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


void func_453(int iParam0){
int iVar0;
iVar0=func_175(iParam0);
if(func_178(iVar0) && !PED::IS_PED_INJURED(iParam0)){
Global_113648.f_2365.f_539.f_294[iVar0]=PED::GET_PED_ARMOUR(iParam0);
}}


void func_454(var uParam0, int iParam1){
int iVar0;
struct<3> Var1;
var uVar2;
int iVar3;
*uParam0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
uParam0->f_3=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
uParam0->f_5=PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
uParam0->f_4=PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
if(vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f){
*uParam0={
301.2162f, 202.1357f, 103.3797f 
};
uParam0->f_3=156.5144f;
}elseif(vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f){
*uParam0={
394.2567f, -713.5439f, 28.2853f 
};
uParam0->f_3=276.6273f;
}elseif(vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f){
*uParam0={
-1423.472f, -214.2539f, 45.5004f 
};
uParam0->f_3=353.8757f;
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
*uParam0={
4.2587f, 525.0214f, 173.6281f 
};
uParam0->f_3=203.6746f;
}elseif(MISC::IS_BIT_SET(Global_78807, 4)){
*uParam0={
452.0255f, 5571.85f, 780.1859f 
};
uParam0->f_3=78.9858f;
}elseif(MISC::IS_BIT_SET(Global_78807, 5)){
*uParam0={
-745.4462f, 5595.146f, 40.6594f 
};
uParam0->f_3=261.747f;
}elseif(MISC::IS_BIT_SET(Global_78807, 6)){
*uParam0={
-1675.521f, -1125.59f, 12.091f 
};
uParam0->f_3=271.8208f;
}elseif(MISC::IS_BIT_SET(Global_78807, 7)){
*uParam0={
-1631.219f, -1112.805f, 12.0212f 
};
uParam0->f_3=316.8879f;
}elseif(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters")){
*uParam0={
1276.956f, -1725.189f, 53.6551f 
};
uParam0->f_3=204.1703f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0)){
*uParam0={
-601.59f, 2099.197f, 128.8928f 
};
uParam0->f_3=204.7498f;
}elseif(vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f){
*uParam0={
-1018.376f, -483.9436f, 36.0964f 
};
uParam0->f_3=114.7664f;
}elseif(vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f){
*uParam0={
497.7238f, -1310.932f, 28.2372f 
};
uParam0->f_3=289.3663f;
}elseif(vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f){
*uParam0={
2316.93f, 2594.153f, 45.7199f 
};
uParam0->f_3=348.1325f;
}
if(iParam1==1){
if(func_457(&iVar0)){
if(func_456(iVar0, &Var1, &uVar2)){
Var1.f_2=(Var1.f_2 + 1f);
*uParam0={
Var1 
};
uParam0->f_3=uVar2;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)){
iVar3=func_264();
if(iVar3==0){
*uParam0={
-65.1234f, 81.2517f, 70.5644f 
};
uParam0->f_3=71.6237f;
}elseif(iVar3==1){
*uParam0={
-68.5531f, -1824.377f, 25.9424f 
};
uParam0->f_3=215.8295f;
}elseif(iVar3==2){
*uParam0={
-220.8189f, -1162.302f, 22.0242f 
};
uParam0->f_3=70.2711f;
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0)){
*uParam0={
495.4108f, -1306.08f, 29.2883f 
};
uParam0->f_3=213.6273f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0)){
*uParam0={
-1160.095f, -1515.407f, 3.1496f 
};
uParam0->f_3=305.6424f;
}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0)){
*uParam0={
431.8853f, -1013.133f, 28.7907f 
};
uParam0->f_3=186.6814f;
}elseif(func_455(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)){
*uParam0={
279.4137f, -585.8815f, 43.2502f 
};
uParam0->f_3=48.8028f;
}}}

int func_455(struct<3> Param0, char* sParam1, struct<3> Param2){
int iVar0;
int iVar1;
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
iVar0=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
if(!INTERIOR::IS_VALID_INTERIOR(iVar0)){
return 0;
}
iVar1=INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
if(iVar1==iVar0){
return 1;
}}
return 0;
}


bool func_456(int iParam0, var uParam1, var uParam2){
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
switch (iParam0){
case 0:
*uParam1={
-829.842f, -191.7454f, 36.4386f 
};
*uParam2=29.5061f;
break;
case 1:
*uParam1={
129.8484f, -1716.528f, 28.0702f 
};
*uParam2=50.3483f;
break;
case 2:
*uParam1={
-1296.913f, -1120.999f, 5.3951f 
};
*uParam2=0.9933f;
break;
case 3:
*uParam1={
1938.028f, 3718.736f, 31.3154f 
};
*uParam2=118.2305f;
break;
case 4:
*uParam1={
1197.866f, -469.3809f, 65.0885f 
};
*uParam2=346.4477f;
break;
case 5:
*uParam1={
-32.2161f, -135.8212f, 56.0532f 
};
*uParam2=186.0052f;
break;
case 6:
*uParam1={
-287.7696f, 6238.081f, 30.2902f 
};
*uParam2=316.1349f;
break;
case 7:
*uParam1={
99.2876f, -1395.16f, 28.2759f 
};
*uParam2=320.2739f;
break;
case 8:
*uParam1={
1679.445f, 4819.056f, 41.0035f 
};
*uParam2=4.6192f;
break;
case 9:
*uParam1={
411.3063f, -809.1863f, 28.1554f 
};
*uParam2=1.8972f;
break;
case 10:
*uParam1={
-1088.054f, 2699.167f, 19.2748f 
};
*uParam2=129.7382f;
break;
case 11:
*uParam1={
1194.163f, 2695.644f, 36.9225f 
};
*uParam2=1.1454f;
break;
case 12:
*uParam1={
-821.2829f, -1088.027f, 10.0499f 
};
*uParam2=120.5883f;
break;
case 13:
*uParam1={
-3.3416f, 6521.303f, 30.2961f 
};
*uParam2=316.4451f;
break;
case 14:
*uParam1={
-1208.417f, -785.9635f, 16.0139f 
};
*uParam2=36.3181f;
break;
case 15:
*uParam1={
623.1845f, 2739.191f, 40.9588f 
};
*uParam2=3.5411f;
break;
case 16:
*uParam1={
130.9555f, -198.2084f, 53.41f 
};
*uParam2=251.3506f;
break;
case 17:
*uParam1={
-3164.065f, 1067.317f, 19.6778f 
};
*uParam2=101.2229f;
break;
case 18:
*uParam1={
-713.2797f, -174.2767f, 35.8962f 
};
*uParam2=29.8138f;
break;
case 19:
*uParam1={
-147.0616f, -306.4322f, 37.7912f 
};
*uParam2=160.4526f;
break;
case 20:
*uParam1={
-1461.355f, -230.6092f, 48.3064f 
};
*uParam2=318.7851f;
break;
case 21:
*uParam1={
-1347.739f, -1278.573f, 3.8952f 
};
*uParam2=17.9365f;
break;
case 22:
*uParam1={
325.6833f, 164.3263f, 102.4425f 
};
*uParam2=68.6407f;
break;
case 23:
*uParam1={
1858.774f, 3742.393f, 32.0779f 
};
*uParam2=301.2329f;
break;
case 24:
*uParam1={
-286.3272f, 6202.802f, 30.3323f 
};
*uParam2=225.1334f;
break;
case 25:
*uParam1={
-1161.596f, -1417.7f, 3.712f 
};
*uParam2=246.9161f;
break;
case 26:
*uParam1={
1308.952f, -1660.611f, 50.2362f 
};
*uParam2=163.5456f;
break;
case 27:
*uParam1={
-3161.585f, 1074.214f, 19.6847f 
};
*uParam2=98.6092f;
break;
case 28:
*uParam1={
28.423f, -1110.814f, 28.2848f 
};
*uParam2=85.2495f;
break;
case 29:
*uParam1={
1704.966f, 3749.709f, 33.0188f 
};
*uParam2=45.6778f;
break;
case 30:
*uParam1={
223.949f, -38.7894f, 68.6483f 
};
*uParam2=159.4265f;
break;
case 31:
*uParam1={
837.7854f, -1017.963f, 26.3045f 
};
*uParam2=181.0445f;
break;
case 32:
*uParam1={
-313.1914f, 6093.351f, 30.4625f 
};
*uParam2=315.8405f;
break;
case 33:
*uParam1={
-663.4631f, -952.8069f, 20.3143f 
};
*uParam2=92.6796f;
break;
case 34:
*uParam1={
-1323.06f, -392.8577f, 35.4596f 
};
*uParam2=210.7398f;
break;
case 35:
*uParam1={
-1106.102f, 2684.35f, 18.0953f 
};
*uParam2=127.0383f;
break;
case 36:
*uParam1={
-3157.932f, 1081.309f, 19.6953f 
};
*uParam2=100.2942f;
break;
case 37:
*uParam1={
2562.882f, 312.8641f, 107.4612f 
};
*uParam2=179.205f;
break;
case 38:
*uParam1={
822.48f, -2142.875f, 27.8496f 
};
*uParam2=355.0598f;
break;
case 39:
*uParam1={
-1137.053f, -1993.916f, 12.1677f 
};
*uParam2=43.1213f;
break;
case 40:
*uParam1={
717.8107f, -1084.081f, 21.3094f 
};
*uParam2=93.2649f;
break;
case 41:
*uParam1={
-387.6789f, -128.2568f, 37.6796f 
};
*uParam2=119.1085f;
break;
case 42:
*uParam1={
117.8835f, 6599.415f, 31.0134f 
};
*uParam2=90.7225f;
break;
case 43:
*uParam1={
1201.709f, 2664.813f, 36.8102f 
};
*uParam2=133.9002f;
break;
case 44:
*uParam1={
-200.1521f, -1297.502f, 30.296f 
};
*uParam2=269.0687f;
break;
case 45:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 47:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 48:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 49:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 52:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 50:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 51:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 54:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 55:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 56:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
case 57:
*uParam1={
0f, 0f, 0f 
};
*uParam2=0f;
break;
}
return !func_305(*uParam1, 0f, 0f, 0f, 0);
}

int func_457(var uParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_478()){
*uParam0=func_460(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 6, -1, 0, 1, -1);
if(func_459(*uParam0) && !func_458(*uParam0)){
return 1;
}}}
return 0;
}


bool func_458(int iParam0){
return func_382(iParam0, 0, 1);
}

int func_459(int iParam0){
return func_382(iParam0, 5, 1);
}

int func_460(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=-1;
iVar0=0;
while (iVar0 <=59){
if(iParam1==6 || iParam1==func_477(iVar0)){
if(!bParam3 || func_476(iVar0)){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_461(iVar0, 0), 1);
if(((fVar1 < fVar2 && (fVar1 <=IntToFloat(iParam2) || iParam2==-1)) && (iParam4 || iVar0 !=21)) && iVar0 !=iParam5){
fVar2=fVar1;
iVar3=iVar0;
}}}
iVar0++;
}
return iVar3;
}


Vector3 func__461(int iParam0, bool bParam1){
switch (iParam0){
case -1:
return 0f, 0f, 0f;
break;
case 0:
return -821.9946f, -187.1776f, 36.5689f;
break;
case 1:
return 133.5702f, -1710.918f, 28.2916f;
break;
case 2:
return -1287.082f, -1116.558f, 5.9901f;
break;
case 3:
return 1933.119f, 3726.079f, 31.8444f;
break;
case 4:
return 1208.333f, -470.917f, 65.208f;
break;
case 5:
return -30.7448f, -148.4921f, 56.0765f;
break;
case 6:
return -280.8165f, 6231.771f, 30.6955f;
break;
case 7:
return 80.665f, -1391.669f, 28.3761f;
break;
case 8:
return 1687.881f, 4820.55f, 41.0096f;
break;
case 9:
return 419.531f, -807.5787f, 28.4896f;
break;
case 10:
return -1094.049f, 2704.171f, 18.0873f;
break;
case 11:
return 1197.972f, 2704.22f, 37.1572f;
break;
case 12:
return -818.6218f, -1077.533f, 10.3282f;
break;
case 13:
return -0.2361f, 6516.045f, 30.8684f;
break;
case 14:
return -1199.809f, -776.6886f, 16.3237f;
break;
case 15:
return 618.1857f, 2752.567f, 41.0881f;
break;
case 16:
return 126.6853f, -212.5027f, 53.5578f;
break;
case 17:
return -3168.966f, 1055.287f, 19.8632f;
break;
case 18:
return -715.3598f, -155.7742f, 36.4105f;
break;
case 19:
return -158.2199f, -304.9663f, 38.735f;
break;
case 20:
return -1455.005f, -233.1862f, 48.7936f;
break;
case 21:
return -1335.973f, -1278.555f, 3.8598f;
break;
case 22:
return 321.6098f, 179.4165f, 102.5865f;
break;
case 23:
return 1861.685f, 3750.08f, 32.0318f;
break;
case 24:
return -290.1603f, 6199.095f, 30.4871f;
break;
case 25:
return -1153.948f, -1425.019f, 3.9544f;
break;
case 26:
return 1322.455f, -1651.125f, 51.1885f;
break;
case 27:
return -3169.42f, 1074.727f, 19.8343f;
break;
case 28:
return 17.6804f, -1114.288f, 28.797f;
break;
case 29:
return 1697.979f, 3753.2f, 33.7053f;
break;
case 30:
return 245.2711f, -45.8126f, 68.941f;
break;
case 31:
return 844.1248f, -1025.571f, 27.1948f;
break;
case 32:
return -325.8904f, 6077.026f, 30.4548f;
break;
case 33:
return -664.2178f, -943.3646f, 20.8292f;
break;
case 34:
return -1313.948f, -390.9637f, 35.592f;
break;
case 35:
return -1111.238f, 2688.463f, 17.6131f;
break;
case 36:
return -3165.231f, 1082.855f, 19.8438f;
break;
case 37:
return 2569.612f, 302.576f, 107.7349f;
break;
case 38:
return 811.8699f, -2149.102f, 28.6363f;
break;
case 39:
return -1147.314f, -1992.434f, 12.1803f;
break;
case 40:
return 724.524f, -1089.081f, 21.1692f;
break;
case 41:
return -354.5272f, -135.4011f, 38.185f;
break;
case 42:
return 113.2615f, 6624.28f, 30.7871f;
break;
case 43:
return 1174.707f, 2644.45f, 36.7552f;
break;
case 44:
if(bParam1){
return -211.5f, -1324.2f, 30.296f;
}else{
return -205.6654f, -1311.113f, 30.296f;
}
break;
case 45:
return func_473(Global_102825);
break;
case 46:
if(Global_1853747 !=func_346()){
if(func_472(Global_1853747)){
return func_465(2, 2);
}elseif(func_464(Global_1853747)){
return func_465(45, 3);
}else{
return 1000000f, 1000000f, 1000000f;
}}else{
return 1000000f, 1000000f, 1000000f;
}
break;
case 47:
return 510.1f, 4749.5f, -69f;
break;
case 48:
return -1422.197f, -3015.803f, -79.1603f;
break;
case 49:
return 203.0799f, 5200.189f, -89.6f;
break;
case 52:
return 2714.547f, -354.2701f, -55.1867f;
break;
case 50:
return Global_1970473;
break;
case 51:
return 1100f, 220f, -50f;
break;
case 53:
return 1560f, 400f, -50f;
break;
case 54:
return -2159.901f, 1075.213f, -25.36174f;
break;
case 55:
return -2194.123f, 1103.805f, -24.2451f;
break;
case 56:
switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7){
case 155:
return 379.4285f, -53.6067f, 111.7088f;
break;
case 156:
return -1029.166f, -426.3766f, 72.2069f;
break;
case 157:
return -581.9924f, -721.3945f, 121.3509f;
break;
case 158:
return -1013.718f, -768.3539f, 69.4942f;
break;
}
return 1000000f, 1000000f, 1000000f;
break;
case 57:
return -1010f, -70f, -100f;
break;
case 58:
return func_462();
break;
case 59:
return 560f, -405f, -69.6591f;
break;
}
return 1000000f, 1000000f, 1000000f;
}


Vector3 func__462(){
if(!func_317(Global_1956117)){
return Global_1956117;
}
switch (func_463()){
case 0:
return -29.532f, 6435.136f, 31.162f;
case 1:
return 1705.214f, 4819.167f, 41.75f;
case 2:
return 1795.522f, 3899.753f, 33.869f;
case 3:
return 1335.536f, 2758.746f, 51.099f;
case 4:
return 795.583f, 1210.78f, 338.962f;
case 5:
return -3192.67f, 1077.205f, 20.594f;
case 6:
return -789.719f, 5400.921f, 33.915f;
case 7:
return -24.384f, 3048.167f, 40.703f;
case 8:
return 2666.786f, 1469.324f, 24.237f;
case 9:
return -1454.966f, 2667.503f, 3.2f;
case 10:
return 2340.418f, 3054.188f, 47.888f;
case 11:
return 1509.183f, -2146.795f, 76.853f;
case 12:
return 1137.404f, -1358.654f, 34.322f;
case 13:
return -57.208f, -2658.793f, 5.737f;
case 14:
return 1905.017f, 565.222f, 175.558f;
case 15:
return 974.484f, -1718.798f, 30.296f;
case 16:
return 779.077f, -3266.297f, 5.719f;
case 17:
return -587.728f, -1637.208f, 19.611f;
case 18:
return 733.99f, -736.803f, 26.165f;
case 19:
return -1694.632f, -454.082f, 40.712f;
case 20:
return -1330.726f, -1163.948f, 4.313f;
case 21:
return -496.618f, 40.231f, 52.316f;
case 22:
return 275.527f, 66.509f, 94.108f;
case 23:
return 260.928f, -763.35f, 30.559f;
case 24:
return -478.025f, -741.45f, 30.299f;
case 25:
return 894.94f, 3603.911f, 32.56f;
case 26:
return -2166.511f, 4289.503f, 48.733f;
case 27:
return 1465.633f, 6553.67f, 13.771f;
case 28:
return 1101.032f, -335.172f, 66.944f;
case 29:
return 149.683f, -1655.674f, 29.028f;
default:
}
return 0f, 0f, 0f;
}

int func_463(){
return Global_2652258.f_2650;
}

int func_464(int iParam0){
if(iParam0 !=func_346()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 0) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 1)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 2)){
return 1;
}}
return 0;
}


Vector3 func__465(int iParam0, int iParam1){
struct<3> Var0;
struct<3> Var1;
Var1={
1000000f, 1000000f, 1000000f 
};
if(Global_1853747 !=func_346()){
if(iParam1==3){
if(func_466(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(iParam1==2){
if(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4)){
if(func_466(iParam0, 1, &Var0, 0, 0)){
Var1={
Var0 
};
}}elseif(MISC::IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5)){
if(func_466(iParam0, 2, &Var0, 0, 0)){
Var1={
Var0 
};
}}}}
return Var1;
}

int func_466(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
struct<4> Var0;
struct<3> Var1;
struct<4> Var2;
struct<3> Var3;
if(!func_471(iParam3, &Var0)){
return 0;
}
if(!func_471(iParam1, &Var1)){
return 0;
}
if(!bParam4){
Var2={
func_469(iParam0) 
};
}else{
Var2={
func_468(iParam0) 
};
}
Var3={
Var2 - Var0 
};
Var3={
func_467(Var3, -Var0.f_3.f_2) 
};
Var3={
func_467(Var3, Var1.f_3.f_2) 
};
*uParam2={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, 0f, Var3) 
};
uParam2->f_3={
Var2.f_3 
};
return 1;
}


Vector3 func__467(struct<3> Param0, float fParam1){
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


struct<6> func_468(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 1:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 2:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 3:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 4:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 5:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 6:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 7:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 8:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
}
return Var0;
}


struct<6> func_469(int iParam0){
return func_470(iParam0);
}


struct<6> func_470(int iParam0){
struct<6> Var0;
switch (iParam0){
case 0:
Var0={
1105.22f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 1:
Var0={
1104.105f, -3013.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 19:
Var0={
1105.22f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 20:
Var0={
1104.105f, -3005.985f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 2:
Var0={
1102f, -3011.925f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
1103f, -3010f, -38.125f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
1103.213f, -3013.483f, -39.03f 
};
Var0.f_3={
0f, 0f, 31.32f 
};
break;
case 5:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1101.408f, -3012.32f, -38.45339f 
};
break;
case 6:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1103.037f, -3012.318f, -39.99874f 
};
break;
case 7:
Var0={
1105.645f, -3012.04f, -39.542f 
};
Var0.f_3={
0f, 0f, -86.04f 
};
break;
case 8:
Var0.f_3={
0f, 0f, 0f 
};
Var0={
1104.063f, -3012.368f, -39.99875f 
};
break;
case 9:
Var0={
1105.665f, -3012.334f, -38.50835f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 10:
Var0={
1102.504f, -3012.35f, -39.341f 
};
Var0.f_3={
0f, 0f, -96.48f 
};
break;
case 11:
Var0={
1102.928f, -3012.693f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 12:
Var0={
1102.942f, -3011.315f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 61:
Var0={
1101.994f, -3012.878f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 62:
Var0={
1103.152f, -3013.032f, -38.24946f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 13:
Var0={
1102.465f, -3009.515f, -39.341f 
};
Var0.f_3={
0f, 0f, -12.96f 
};
break;
case 14:
Var0={
1102.917f, -3009.525f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 15:
Var0={
1102.922f, -3010.887f, -37.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 63:
Var0={
1101.682f, -3009.227f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
1102.453f, -3008.51f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 16:
Var0={
1104.684f, -3009.561f, -39.341f 
};
Var0.f_3={
0f, 0f, 169.56f 
};
break;
case 17:
Var0={
1104.34f, -3008.698f, -39.99945f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 18:
Var0={
1104.344f, -3009.618f, -37.98172f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 65:
Var0={
1105.459f, -3009.793f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 66:
Var0={
1104.783f, -3010.433f, -38.2f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 44:
Var0={
1104.025f, -3007.316f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 21:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 22:
Var0={
1103.562f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 23:
Var0={
1102.1f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 115.92f 
};
break;
case 24:
Var0={
1105.05f, -3010.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -103.32f 
};
break;
case 25:
Var0={
1105.05f, -3008.75f, -39.35f 
};
Var0.f_3={
0f, 0f, -77.76f 
};
break;
case 26:
Var0={
1102.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 27:
Var0={
1102.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 28:
Var0={
1105.05f, -3012.653f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 29:
Var0={
1105.05f, -3011.717f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 30:
Var0={
1102.1f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, 102.96f 
};
break;
case 31:
Var0={
1105.05f, -3002.1f, -39.35f 
};
Var0.f_3={
0f, 0f, -101.88f 
};
break;
case 32:
Var0={
1105.05f, -3000.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -81.36f 
};
break;
case 33:
Var0={
1102.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 34:
Var0={
1102.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 35:
Var0={
1105.05f, -3004.541f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 36:
Var0={
1105.05f, -3003.592f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 37:
Var0={
1102.1f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, 103.32f 
};
break;
case 38:
Var0={
1105.05f, -2994.2f, -39.35f 
};
Var0.f_3={
0f, 0f, -109.8f 
};
break;
case 39:
Var0={
1105.05f, -2992.65f, -39.35f 
};
Var0.f_3={
0f, 0f, -84.96f 
};
break;
case 40:
Var0={
1102.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 41:
Var0={
1102.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 42:
Var0={
1105.05f, -2996.501f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 43:
Var0={
1105.05f, -2995.582f, -39.35f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 45:
Var0={
1101f, -3011.9f, -39.95f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 46:
Var0={
1102f, -3010f, -38.115f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 47:
Var0={
1105.174f, -3004.16f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 48:
Var0={
1105.175f, -3005.818f, -37.91948f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 49:
Var0={
1106.6f, -3000.847f, -39.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 50:
Var0={
1106.601f, -3002.171f, -37.89988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 51:
Var0={
1101.95f, -3011.9f, -39.2f 
};
Var0.f_3={
0f, 0f, 49.5f 
};
break;
case 52:
Var0={
1101.95f, -3010f, -39.2f 
};
Var0.f_3={
0f, 0f, 130.32f 
};
break;
case 53:
Var0={
1105.16f, -3009.06f, -39.2f 
};
Var0.f_3={
0f, 0f, -44.64f 
};
break;
case 54:
Var0={
1102.476f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 55:
Var0={
1099f, -3008.508f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 56:
Var0={
1103.593f, -3008.27f, -39.9987f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 57:
Var0={
1103.565f, -3014f, -39.988f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 58:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 59:
Var0={
1103.565f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 60:
Var0={
1103.55f, -3014f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 67:
Var0={
1103.55f, -3013.762f, -40f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 68:
Var0={
1103.55f, -3006.186f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 71:
case 69:
case 70:
case 73:
case 72:
case 74:
Var0={
1103.6f, -3013.933f, -40f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
}
return Var0;
}

int func_471(int iParam0, var uParam1){
switch (iParam0){
case 0:
*uParam1={
1103.562f, -3014f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 1:
*uParam1={
1103.562f, -3006f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
case 2:
*uParam1={
1103.562f, -2998f, -40f 
};
uParam1->f_3={
0f, 0f, 0f 
};
return 1;
default:
}
return 0;
}

int func_472(int iParam0){
if(iParam0 !=func_346()){
if((MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 3) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 4)) || MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_288, 5)){
return 1;
}}
return 0;
}


Vector3 func__473(int iParam0){
switch (iParam0){
case 1:
return 1060f, -2990f, -35f;
break;
case 2:
return 1060f, -2990f, -35f;
break;
case 3:
return 974.9542f, -3000.091f, -35f;
break;
case 6:
return -1586.36f, -566.6f, 106.17f;
break;
case 7:
return -1389.87f, -465.17f, 82.68f;
break;
case 8:
return -145.81f, -590.2f, 171.13f;
break;
case 9:
return -62.49f, -823.55f, 288.74f;
break;
case 4:
return 1102.515f, -3158.888f, -38.5186f;
break;
case 5:
return 1005.861f, -3156.162f, -39.907f;
break;
case 10:
return 1103.562f, -3000f, -40f;
break;
case 11:
return 938.3077f, -3196.112f, -100f;
break;
case 12:
return -1266.802f, -3014.836f, -49.4895f;
break;
case 13:
return 520.0001f, 4750f, -70f;
break;
case 14:
return 345.0041f, 4842.001f, -59.9997f;
break;
case 15:
return -1604.664f, -3012.583f, -79.9999f;
break;
case 16:
return -1421.015f, -3012.587f, -80f;
break;
case 17:
if(func_474()==0){
return 205f, 5180f, -90f;
}else{
return 170f, 5190f, 10f;
}
break;
case 18:
return -2000f, 1250f, 50f;
break;
case 19:
return -1350f, 160f, -100f;
break;
case 20:
return -1070f, -70f, -100f;
break;
case 21:
return 570f, -415f, -70f;
break;
default:
return 0f, 0f, -200f;
break;
}
return 0f, 0f, -200f;
}

int func_474(){
return func_475(PLAYER::PLAYER_ID());
}


var func__475(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}

int func_476(int iParam0){
return func_382(iParam0, 0, 0);
}

int func_477(int iParam0){
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


bool func_478(){
return Global_100733.f_387 > 0;
}

int func_479(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0)){
return 0;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0)){
return 2;
}elseif(MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0)){
return 3;
}
return -1;
}

int func_480(int iParam0){
switch (iParam0){
case 69:
case 70:
return func_481(Global_113648.f_9087.f_99.f_205[10]);
break;
case 74:
case 75:
return func_481(Global_113648.f_9087.f_99.f_205[8]);
break;
case 84:
case 85:
return func_481(Global_113648.f_9087.f_99.f_205[11]);
break;
case 90:
return func_481(Global_113648.f_9087.f_99.f_205[7]);
break;
case 93:
return func_481(Global_113648.f_9087.f_99.f_205[9]);
break;
}
return 0;
}

int func_481(int iParam0){
switch (iParam0){
case 1:
case 3:
case 5:
case 6:
case 8:
return 0;
break;
case 2:
case 4:
case 7:
case 9:
return 1;
break;
}
return -1;
}

int func_482(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=MISC::GET_HASH_KEY(sParam0);
iVar1=func_483(iVar0, 1);
if(iVar1==-1 && !bParam1){}
return iVar1;
}

int func_483(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
while (iVar0 < 94){
if(Global_91469[iVar0 /*34*/].f_6==iParam0){
return iVar0;
}
iVar0++;
}
if(!bParam1){}
return -1;
}


void func_484(bool bParam0){
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


void func_485(){
Global_23131.f_5=1;
}


void func_486(int iParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)){
ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
}
if(!bParam1){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
}else{
OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
}}}


bool func_487(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}


void func_488(){
Global_20591=0;
func_489();
}


void func_489(){
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21725=6;
return;
}}


struct<6> func_490(){
struct<6> Var0;
int iVar1;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
iVar1=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
iVar1=(iVar1 + Global_22735);
if(iVar1 > -1){
return Global_20593[iVar1 /*6*/];
}else{
return Var0;
}}
return Var0;
}


void func_491(){
int iVar0;
if(bLocal_284==1){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_639(0);
}
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 157, 1);
PAD::DISABLE_CONTROL_ACTION(0, 158, 1);
PAD::DISABLE_CONTROL_ACTION(0, 159, 1);
PAD::DISABLE_CONTROL_ACTION(0, 160, 1);
PAD::DISABLE_CONTROL_ACTION(0, 161, 1);
PAD::DISABLE_CONTROL_ACTION(0, 162, 1);
PAD::DISABLE_CONTROL_ACTION(0, 163, 1);
PAD::DISABLE_CONTROL_ACTION(0, 164, 1);
PAD::DISABLE_CONTROL_ACTION(0, 165, 1);
PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
if(!CAM::IS_SPHERE_VISIBLE(-75.608f, 300.6798f, 105.5206f, 30f)){
MISC::CLEAR_AREA_OF_PEDS(-75.608f, 300.6798f, 105.5206f, 30f, 0);
}
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_ss1_14_garage_door"), -62.22f, 352.75f, 113.01f, 1, 0, 0, 0);
func_511(Local_480.f_0, &uLocal_416, -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
func_511(Local_481.f_0, &uLocal_424, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
func_511(Local_482.f_0, &uLocal_432, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
ENTITY::FREEZE_ENTITY_POSITION(iLocal_475, 0);
func_639(0);
if(iLocal_305==0){
if((PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0, 30)) || PAD::IS_CONTROL_PRESSED(0, 31)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
iLocal_305=1;
}}
if(bLocal_284==0){
func_258();
}
if(bLocal_284==0){
PAD::ENABLE_CONTROL_ACTION(0, 44, 1);
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}}else{
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}}
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_371)){
AUDIO::STOP_SOUND(iLocal_371);
}
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_691, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), uLocal_691);
MISC::CLEAR_AREA_OF_PEDS(-47.8788f, 353.6657f, 112.0601f, 20f, 0);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_352)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_352)){
ENTITY::DETACH_ENTITY(iLocal_352, 1, 1);
}}
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 223, 1);
if(func_5(iLocal_759)){
VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_759);
}
switch (iLocal_693){
case 0:
if(func_248(7, bLocal_703)){
if(func_654(iLocal_475)){
if(func_510(iLocal_475, Local_749)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475)){
PED::SET_PED_TO_LOAD_COVER(iLocal_475, 0);
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, "DEFAULT_ACTION");
func_430(2, "GET TO THE CAR", 0, 0, 0, 1);
VEHICLE::REQUEST_VEHICLE_ASSET(joaat("fq2"), 3);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475);
func_486(&iLocal_350, 0);
func_486(&iLocal_351, 0);
func_486(&iLocal_352, 0);
func_509();
TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_475, -1, 0, 2);
iLocal_246=MISC::GET_GAME_TIMER();
iLocal_252=0;
iLocal_294=0;
iLocal_273=0;
iLocal_274=0;
bLocal_295=false;
iLocal_248=0;
iLocal_253=0;
iLocal_251=0;
MISC::CLEAR_AREA_OF_VEHICLES(-64.1056f, 325.3524f, 109.3568f, 100f, 0, 0, 0, 0, 0, 0, 0);
PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 0);
iLocal_693=1;
}}}}
break;
case 1:
if(func_6(uLocal_758[0])){
if(!ENTITY::IS_ENTITY_AT_ENTITY(Local_480.f_0, uLocal_758[0], 5f, 5f, 2.5f, 0, 1, 0)){
if(iLocal_273==0){
if(func_654(Local_480.f_0)){
if(func_653(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 2f, 1)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
TASK::CLEAR_PED_TASKS(Local_480.f_0);
}
ENTITY::SET_ENTITY_COLLISION(Local_480.f_0, 1, 0);
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_220) >=0.99f){
iLocal_273=1;
}}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_221) >=0.99f){
iLocal_273=1;
}}
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_274=1;
iLocal_273=1;
}
}}elseif(!iLocal_294){
if(func_654(Local_480.f_0)){
if(!func_653(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 20f, 1)){
if(TASK::GET_SCRIPT_TASK_STATUS(Local_480.f_0, joaat("script_task_go_to_entity")) !=1){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3)){
TASK::STOP_ANIM_TASK(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
}
TASK::TASK_GO_TO_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 8f, 1073741824, 1073741824, 0);
}}else{
if(!PED::IS_PED_HEADTRACKING_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}
if(!PED::IS_PED_FACING_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 30f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 0);
}else{
func_508();
}}
}}}}
if(iLocal_274==0){
if(func_654(Local_481.f_0)){
if(func_653(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 3f, 1)){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_274=1;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_220) >=0.97f){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_274=1;
}}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_221) >=0.97f){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_274=1;
}}
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
iLocal_274=1;
}}}
if(bLocal_727){
func_507();
}else{
if(bLocal_295==0){
func_506();
}
func_505();
if(iLocal_274==1){
func_504();
}
func_503();
func_502();
if(func_501()){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 4);
iLocal_725=0;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_353)){
ENTITY::DETACH_ENTITY(iLocal_353, 1, 1);
}
OBJECT::DELETE_OBJECT(&iLocal_353);
}
iLocal_693=2;
}
func_497();
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.61517f, 329.1848f, 111.5079f, -65.10432f, 297.9984f, 115.6734f, 11.35f, 0, 1, 0)){
if(iLocal_279==0){
if(func_370(&uLocal_489, cLocal_751, "PAP2_ESCAPE", 7, 0, 0, 0)){
iLocal_279=1;
}}elseif(iLocal_280==0){
if(func_370(&uLocal_489, cLocal_751, "PAP2_ESCAPEA", 7, 0, 0, 0)){
iLocal_280=1;
bLocal_710=true;
}}}
if(iLocal_709==0){
}
if(iLocal_253 < 2){
func_496();
}
if((!PED::IS_PED_RAGDOLL(iLocal_475) && !TASK::IS_PED_GETTING_UP(iLocal_475)) && !bLocal_295){
if(iLocal_253 > 2){
func_494();
}
if(iLocal_253 < 2){
func_492();
}}}
if(bLocal_295){
if(!func_371()){
func_354(16);
}}
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
func_354(18);
}
break;
case 2:
if(ENTITY::IS_ENTITY_DEAD(Local_482.f_0, 0)){
bLocal_311=true;
}elseif(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 0)){
bLocal_311=true;
}
func_338(0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
TASK::REMOVE_WAYPOINT_RECORDING(&Local_749);
STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
iVar0=0;
while (iVar0 <=3){
func_3(&(Local_474[iVar0 /*8*/]));
iVar0++;
}
break;
case 3:
func_234();
HUD::CLEAR_PRINTS();
func_249();
TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
if(func_324(14, -81.45494f, 296.8076f, 107.0281f, -49.93427f)){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
if(func_654(PLAYER::PLAYER_PED_ID())){
iLocal_228=MISC::GET_GAME_TIMER();
}}}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 3f, 1);
iLocal_693=2;
break;
}}


void func_492(){
if(iLocal_745 < 3){
if(!func_371()){
if(func_493(iLocal_475, iLocal_759, 1) >=15f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BSH", 7, 0, 0, 0)){
iLocal_745++;
}}}}}


float func_493(int iParam0, int iParam1, int iParam2){
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


void func_494(){
int iVar0;
int iVar1;
struct<6> Var2;
if(!func_495("PAP2_00", 0, 0) && !func_495("PAP2_06", 0, 0)){
iVar0=0;
}else{
iVar0=1;
}
if(iLocal_716==0 && func_493(iLocal_475, iLocal_759, 1) < 4f){
iVar0=1;
}
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 1)){
iVar1=MISC::GET_GAME_TIMER();
if(func_654(iLocal_475)){
if(bLocal_284==0){
if(iVar1 > iLocal_743 + 6000){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.61517f, 329.1848f, 111.5079f, -65.10432f, 297.9984f, 115.6734f, 11.35f, 0, 1, 0)){
if(func_493(iLocal_475, iLocal_759, 1) < 15f){
if(func_371()){
Var2={
func_361() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
if(MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_ESCCHAT")){
func_488();
}}}
if(func_493(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) <=60f){
if(!func_371()){
if(func_370(&uLocal_489, cLocal_751, "PAP2_ESCCAR", 7, iVar0, 0, 0)){
iLocal_743=MISC::GET_GAME_TIMER();
}}}
}}}}}}}


bool func_495(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
if(iParam1==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
}
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}


void func_496(){
if(iLocal_253 < 3){
if(bLocal_710){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 5000 && MISC::GET_GAME_TIMER() > iLocal_233 + 5000){
if(iLocal_754 < 3){
if(!func_371() && !func_495("PAP2_00", 0, 0)){
if(func_370(&uLocal_489, cLocal_751, "PAP2_ESCCHAT", 6, 0, 0, 0)){
iLocal_754++;
iLocal_233=MISC::GET_GAME_TIMER();
}}}}}}}


void func_497(){
if(!iLocal_725){
if(func_28(iLocal_475, iLocal_759) && !func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
func_12(&iLocal_661);
if(!HUD::DOES_BLIP_EXIST(iLocal_661)){
iLocal_660=func_500(iLocal_759, 1, 7);
}
HUD::SET_BLIP_AS_FRIENDLY(iLocal_660, 1);
TASK::TASK_LOOK_AT_ENTITY(iLocal_475, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
if(!iLocal_716){
func_499("PAP2_00", 7500, 0);
iLocal_716=1;
}
iLocal_725=1;
iLocal_235=MISC::GET_GAME_TIMER();
}}elseif(!func_495("PAP2_00", 0, 0)){
if(MISC::GET_GAME_TIMER() > iLocal_235 + 12000){
if(!func_371()){
if((func_28(iLocal_475, iLocal_759) && bLocal_284==0) && !func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
func_498();
}}}}}


void func_498(){
if(!iLocal_717){
if(func_493(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) <=40f && bLocal_284==0){
if(!func_371()){
if(func_340(&uLocal_489, cLocal_751, "PAP2_GETCAR", "PAP2_GETCAR_2", 7, 0, 0)){
iLocal_717=1;
if(func_654(iLocal_475)){
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_475, iLocal_759, 150f, 262144);
bLocal_295=true;
}}}}elseif(!func_371()){
if(bLocal_284==0){
iLocal_717=1;
if(func_654(iLocal_475)){
TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_475, iLocal_759, 150f, 262144);
bLocal_295=true;
}}}}}


void func_499(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_500(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=0;
if(func_5(iParam0)){
iVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
HUD::SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
HUD::SET_BLIP_SCALE(iVar0, 1f);
}
return iVar0;
}

int func_501(){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 0) && PED::IS_PED_IN_VEHICLE(iLocal_475, iLocal_759, 0)){
return 1;
}
return 0;
}


void func_502(){
if(!func_28(iLocal_475, iLocal_759)){
if(func_654(iLocal_475) && func_5(iLocal_759)){
if(iLocal_253 !=3){
PED::SET_PED_CAN_RAGDOLL(iLocal_475, 0);
}
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475)){
if(iLocal_253==0){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) > 31){
iLocal_254=MISC::GET_GAME_TIMER();
iLocal_253=1;
}}elseif(iLocal_253==1){
if(MISC::GET_GAME_TIMER() > iLocal_254 + 2000 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -67.82763f, 304.8669f, 104.543f, -76.68293f, 308.6061f, 115.5622f, 14.75f, 0, 1, 0)){
AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
iLocal_253=2;
}}elseif(iLocal_253==2){
if(!PED::IS_PED_RAGDOLL(iLocal_475)){
iLocal_253=3;
}}elseif(iLocal_253==3){
if(TASK::IS_PED_GETTING_UP(iLocal_475) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_475)){
if(iLocal_297==0){
iLocal_297=1;
}}}
if(ENTITY::IS_ENTITY_AT_ENTITY(iLocal_475, iLocal_759, 20f, 20f, 2f, 0, 1, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_enter_vehicle")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_enter_vehicle")) !=0){
if(!PED::IS_PED_RAGDOLL(iLocal_475) && !TASK::IS_PED_GETTING_UP(iLocal_475)){
TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_475, 0, 0);
TASK::TASK_ENTER_VEHICLE(iLocal_475, iLocal_759, 20000, -1, 2f, 1, 0);
AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
PED::SET_PED_CAN_RAGDOLL(iLocal_475, 1);
iLocal_253=3;
}}}elseif(iLocal_253==0){
if((TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475)==29 && !func_653(iLocal_475, PLAYER::PLAYER_PED_ID(), 17f, 1)) && iLocal_252 < 150){
iLocal_252++;
if(func_654(Local_482.f_0)){
if(func_653(Local_482.f_0, iLocal_475, 10f, 1)){
iLocal_252=600;
}
}
if(!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_475)){
TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_475, 1, 0);
}}elseif(TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_475)){
TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_475, 0, 31, 0);
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 3f, 0);
}}}
if(MISC::GET_GAME_TIMER() > iLocal_246 + 30000){
PED::SET_PED_CAN_RAGDOLL(iLocal_475, 1);
PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
}}}}


void func_503(){
if(!func_28(Local_482.f_0, uLocal_758[2])){
if(func_654(Local_482.f_0) && func_5(uLocal_758[2])){
if(bLocal_284){
if(bLocal_284 && !ENTITY::IS_ENTITY_AT_COORD(Local_482.f_0, -68.9113f, 314.4095f, 107.8141f, 7f, 7f, 7f, 0, 1, 0)){
func_232(Local_482.f_0, -68.9113f, 314.4095f, 107.8141f, 0, 0, 1);
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(Local_482.f_0, joaat("script_task_combat")) !=1){
TASK::TASK_COMBAT_PED(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::TASK_LOOK_AT_ENTITY(Local_482.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}}}}


void func_504(){
if(!func_28(Local_481.f_0, uLocal_758[1])){
if(func_654(Local_481.f_0) && func_5(uLocal_758[1])){
if(bLocal_284){
if(bLocal_284 && !ENTITY::IS_ENTITY_AT_COORD(Local_481.f_0, -63.2851f, 327.3911f, 109.581f, 7f, 7f, 7f, 0, 1, 0)){
func_232(Local_481.f_0, -63.2851f, 327.3911f, 109.581f, 0, 0, 1);
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(Local_481.f_0, joaat("script_task_combat")) !=1){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::TASK_LOOK_AT_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}}}}


void func_505(){
if(!func_28(Local_480.f_0, uLocal_758[0])){
if(func_654(Local_480.f_0) && func_5(uLocal_758[0])){
if(!iLocal_294){
if(ENTITY::IS_ENTITY_AT_ENTITY(Local_480.f_0, uLocal_758[0], 5f, 5f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_759, 20f, 20f, 2f, 0, 1, 0)){
iLocal_294=1;
}
if((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) > 24) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.12919f, 298.2647f, 111.3944f, -67.07028f, 306.1256f, 114.8987f, 9.25f, 0, 1, 0)){
iLocal_294=1;
}}else{
if(ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3)){
TASK::STOP_ANIM_TASK(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
}
if(TASK::GET_SCRIPT_TASK_STATUS(Local_480.f_0, joaat("script_task_enter_vehicle")) !=1){
TASK::TASK_ENTER_VEHICLE(Local_480.f_0, uLocal_758[0], -1, -1, 2f, 1, 0);
}}}}}


void func_506(){
if(func_654(PLAYER::PLAYER_PED_ID()) && func_5(iLocal_759)){
if(func_653(PLAYER::PLAYER_PED_ID(), iLocal_759, 12f, 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle")) !=1){
if(func_324(14, -81.45494f, 296.8076f, 107.0281f, -49.93427f)){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
if(func_654(PLAYER::PLAYER_PED_ID())){
}}}}
if((bLocal_284 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle")) !=1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle")) !=0){
TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 20000, 1, 2f, 1, 0);
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_759, 10f, 10f, 3f, 0, 1, 0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle")) !=1){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 23)){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
if(iLocal_255 !=3){
if(AUDIO::TRIGGER_MUSIC_EVENT("PAP2_CAR")){
iLocal_255=3;
}}
bLocal_284=true;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -78.24787f, 299.3756f, 109.2612f, -81.98504f, 289.7561f, 103.6896f, 26.25f, 0, 1, 0)){
if(func_654(PLAYER::PLAYER_PED_ID())){
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
if(ENTITY::IS_ENTITY_ATTACHED(iLocal_353)){
ENTITY::DETACH_ENTITY(iLocal_353, 1, 1);
}
OBJECT::DELETE_OBJECT(&iLocal_353);
}}
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::STOP_CAM_POINTING(uLocal_663);
if(!CAM::DOES_CAM_EXIST(uLocal_665)){
uLocal_665=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
}
else{
CAM::STOP_CAM_POINTING(uLocal_665);
}
uLocal_664=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
CAM::SET_CAM_PARAMS(uLocal_664, -74.7f, 297f, 106f, 8.7f, 0f, 52.9f, 34.5f, 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(uLocal_665, -76.2f, 295.9f, 106.1f, 6.3f, 0f, 38.8f, 34.5f, 0, 1, 1, 2);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_665, uLocal_664, 8000, 0, 1);
CAM::SET_CAM_ACTIVE(uLocal_664, 1);
CAM::SET_CAM_ACTIVE(uLocal_665, 1);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(uLocal_664)){
CAM::SHAKE_CAM(uLocal_664, "HAND_SHAKE", 1f);
}
if(CAM::DOES_CAM_EXIST(uLocal_665)){
CAM::SHAKE_CAM(uLocal_665, "HAND_SHAKE", 1f);
}
MISC::CLEAR_AREA_OF_VEHICLES(Local_460, 200f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 0, 0, 0);
iLocal_230=MISC::GET_GAME_TIMER();
if(!func_28(Local_480.f_0, uLocal_758[0])){
func_232(Local_480.f_0, -46.3393f, 351.7322f, 112.5621f, 62.2187f, 0, 1);
if(TASK::GET_SCRIPT_TASK_STATUS(Local_480.f_0, joaat("script_task_enter_vehicle")) !=1){
TASK::TASK_ENTER_VEHICLE(Local_480.f_0, uLocal_758[0], -1, -1, 2f, 1, 0);
}
}
TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 20000, 1, 2f, 1, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 7.5f, 1);
}}}}
if(bLocal_284==1){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 272, 1);
PAD::DISABLE_CONTROL_ACTION(0, 273, 1);
PAD::DISABLE_CONTROL_ACTION(0, 270, 1);
PAD::DISABLE_CONTROL_ACTION(0, 271, 1);
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
}}}


void func_507(){
if(!bLocal_711){
bLocal_711=func_370(&uLocal_489, cLocal_751, "PAP2_FLEE", 9, 0, 0, 0);
}elseif(!func_371()){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
func_354(5);
}else{
func_354(3);
}}}


void func_508(){
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
if(iLocal_251==0){
STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@waiting_ig_4");
iLocal_251=1;
}elseif(iLocal_251==1){
if(STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@waiting_ig_4")){
iLocal_251=2;
TASK::TASK_PLAY_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 4f, -4f, -1, 32, 0f, 0, 0, 0);
}}elseif(iLocal_251==2){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3)){
TASK::TASK_PLAY_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 4f, -4f, -1, 32, 0f, 0, 0, 0);
}}}}


void func_509(){
Global_23131.f_5=0;
}

int func_510(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4){
if(func_654(iParam0)){
if(!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0)){
if(!MISC::IS_STRING_NULL(&uParam1)){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&uParam1)){
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, &uParam1, 0, 524, -1);
return 1;
}}}else{
return 1;
}}
return 0;
}

int func_511(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12){
bool bVar0;
if(iParam3==0){
iParam3=PLAYER::GET_PLAYER_INDEX();
}
if(fParam6 < 0f){
fParam6=100f;
}
if(!PED::IS_PED_INJURED(iParam0)){
if(!HUD::DOES_PED_HAVE_AI_BLIP(iParam0)){
bVar0=true;
if(PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11){
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
HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
if(!iParam9==-1 || iParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
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


void func_512(){
bool bVar0;
bool bVar1;
var uVar2;
func_523();
STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.8f);
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
func_258();
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
fLocal_343=PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_220);
if(!iLocal_345){
if(func_522()){
if(fLocal_343 > 0.872f){
GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
iLocal_345=1;
}}}
if(fLocal_343 > 0.835512f){
if(iLocal_255 !=2){
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_SPOTTED");
iLocal_255=2;
}
iLocal_728=0;
}
if(fLocal_343 >=0.97f){
if(func_654(Local_481.f_0)){
if(TASK::GET_SCRIPT_TASK_STATUS(Local_481.f_0, joaat("script_task_combat")) !=1){
TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::TASK_LOOK_AT_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
}}
iLocal_721=1;
}
if(fLocal_343 >=0.97262f){
iLocal_721=1;
}
if(fLocal_343 > fLocal_690){
iLocal_693=2;
}}elseif(iLocal_693 > 0){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 6000){
func_13(" IS_SYNCHRONIZED_SCENE_RUNNING=FALSE! Something went wrong, probably the audio stream ");
iLocal_693=2;
}}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_221)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_221) > fLocal_690){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 3f, 1);
iLocal_693=2;
}}
func_261();
if(iLocal_248 > 500){
if(!func_371()){
if(iLocal_738 !=7){
if(func_370(&uLocal_489, cLocal_751, "PAP2_FAILFIL", 8, 0, 0, 0)){
iLocal_296=1;
iLocal_738=7;
}}}}
PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
if(!AUDIO::HAS_SOUND_FINISHED(uLocal_373)){
AUDIO::STOP_SOUND(iLocal_373);
func_13("TK************ STOP SEX SOUNDS ************");
}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_639(0);
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
if(iLocal_693 !=2){
func_14(1);
}
switch (iLocal_693){
case 0:
if(func_248(6, bLocal_703)){
func_485();
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::STOP_CAM_POINTING(uLocal_663);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
AUDIO::STOP_SOUND(uLocal_374);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
iLocal_375=1;
func_521();
iLocal_232=MISC::GET_GAME_TIMER();
iLocal_250=MISC::GET_GAME_TIMER();
fLocal_688=-0.05f;
fLocal_689=-0.03f;
iLocal_219=0;
iLocal_263=0;
func_13("TK************ INIT FILM POPPY ************TK");
iLocal_256=0;
if(func_654(iLocal_475)){
func_232(iLocal_475, -37.2184f, 325.397f, 111.6958f, 242.3437f, 0, 1);
}
iLocal_345=0;
iLocal_693=1;
}
break;
case 1:
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
if(HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(iLocal_263==0){
if(fLocal_343 > 0.029383f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX1", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==1){
if(fLocal_343 > 0.051792f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX2", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==2){
if(fLocal_343 > 0.095256f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX3", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==3){
if(fLocal_343 > 0.111642f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX4", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==4){
if(fLocal_343 > 0.160527f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX5", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==5){
if(fLocal_343 > 0.250271f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX6", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==6){
if(fLocal_343 > 0.296955f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX7", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==7){
if(fLocal_343 > 0.320319f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX8", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==8){
if(fLocal_343 > 0.376536f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX9", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==9){
if(fLocal_343 > 0.397816f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX10", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==10){
if(fLocal_343 > 0.477816f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX11", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==11){
if(fLocal_343 > 0.549232f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX12", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==12){
if(fLocal_343 > 0.608102f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX13", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==13){
if(fLocal_343 > 0.650271f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX14", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==14){
if(fLocal_343 > 0.685452f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX15", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==15){
if(fLocal_343 > 0.707621f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX16", 7500, 0);
iLocal_263++;
}}elseif(iLocal_263==16){
if(fLocal_343 > 0.860467f){
HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
func_499("PAP2_SEX17", 7500, 0);
iLocal_263++;
}}}
if(fLocal_343 > 0.6f){
func_248(7, 0);
}}
if(!iLocal_728){
if(func_520(Local_480.f_0, 5f, 5f, 1.5f) && iLocal_692 !=11){
func_354(0);
}
if(MISC::GET_GAME_TIMER() > iLocal_250){
if(!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()){
func_231(800, 0);
}}
if(iLocal_256==0){
func_519("PAP2_HELP1", -1);
iLocal_257=MISC::GET_GAME_TIMER();
iLocal_256=1;
}elseif(iLocal_256==1){
if(MISC::GET_GAME_TIMER() > iLocal_257 + 7000){
func_519("PAP2_HELP2", -1);
iLocal_257=MISC::GET_GAME_TIMER();
iLocal_256=2;
}}elseif(iLocal_256==2){
if(MISC::GET_GAME_TIMER() > iLocal_257 + 7000){
if(Local_473.f_1 !=255){
func_519("PAP2_HELP3", -1);
iLocal_256=3;
}
else{
iLocal_256=3;
}}}
if(func_654(iLocal_475)){
func_518();
if(!PED::IS_PED_IN_COVER(iLocal_475, 0)){
if((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 3)){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_put_ped_directly_into_cover")) !=1){
PED::SET_PED_TO_LOAD_COVER(iLocal_475, 1);
if(!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-37.2396f, 325.3983f, 111.6961f)){
uLocal_471=TASK::ADD_COVER_POINT(-37.2396f, 325.3983f, 111.6961f, 156.696f, 0, 2, 2, 0);
}
TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_475, -37.2022f, 325.4253f, 111.6954f, -1, 1, 0f, 1, 1, uLocal_471, 0);
PED::SET_PED_CAN_PEEK_IN_COVER(iLocal_475, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_475, 34, 1);
}
}}
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.75797f, 319.5059f, 111.4954f, -33.26295f, 318.438f, 113.4954f, 1.5f, 0, 1, 0)){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(32.2338f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-13.3076f, 1065353216);
}}
if(!iLocal_721){
func_362(Local_480.f_0, &bVar0, 0);
if(bVar0){
func_517(&bVar1);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_220) > 0.85f){
func_516();
iLocal_721=1;
}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_220) > 0.82f){
fLocal_688=(fLocal_688 + 0.00067f);
if(fLocal_688 > 0f){
fLocal_688=0f;
}
fLocal_689=(fLocal_689 + 0.00067f);
if(fLocal_689 > 0f){
fLocal_689=0f;
}
}
if(bVar1){
func_515();
}}else{
func_513();
}}else{
if(func_654(iLocal_475)){
func_322(iLocal_475, 0);
}
if(MISC::GET_GAME_TIMER() > iLocal_224 + 8000){
}
func_362(Local_480.f_0, &uVar2, 0);
fLocal_688=(fLocal_688 + 0.00067f);
if(fLocal_688 > 0f){
fLocal_688=0f;
}
fLocal_689=(fLocal_689 + 0.00067f);
if(fLocal_689 > 0f){
fLocal_689=0f;
}
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_352)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_352)){
ENTITY::DETACH_ENTITY(iLocal_352, 1, 1);
}
}}}}elseif(!func_371()){
func_354(4);
}
break;
case 2:
if(func_654(Local_480.f_0)){
PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 4, 1, 0, 0);
}
if(func_654(Local_481.f_0)){
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 4, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 6, 0, 0, 0);
}
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -4f, -1, 0, 0.739f, 0, 0, 0);
func_355(1);
HUD::CLEAR_PRINTS();
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1065353216);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
iLocal_755=0;
HUD::CLEAR_HELP(1);
if(ENTITY::DOES_ENTITY_EXIST(iLocal_352)){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_352)){
ENTITY::DETACH_ENTITY(iLocal_352, 1, 1);
}}
func_338(0);
break;
case 3:
iLocal_693=2;
func_234();
func_516();
iLocal_721=1;
break;
}}


void func_513(){
if(iLocal_674){
if(Local_473.f_1 < 200){
if(MISC::GET_GAME_TIMER() > (iLocal_229 + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000))){
if(iLocal_692 !=5){
func_514();
}else{
func_514();
}}}}elseif(iLocal_739 > 20 && !func_371()){
if(!iLocal_715){
iLocal_715=1;
}
if(iLocal_738 < 7){
iLocal_738++;
iLocal_229=MISC::GET_GAME_TIMER();
}
func_514();
}
if(iLocal_738 >=7){
iLocal_728=1;
}}


void func_514(){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_220) > 0.108f){
if(!func_371()){
if(iLocal_738 < 7){
if(func_654(iLocal_475)){
if(ENTITY::IS_ENTITY_ON_SCREEN(iLocal_475)){
if(func_370(&uLocal_489, cLocal_751, "PAP2_NOTME", 7, 1, 0, 0)){
iLocal_738++;
iLocal_229=MISC::GET_GAME_TIMER();
iLocal_234=MISC::GET_GAME_TIMER();
}}else{
if(iLocal_219==3){
if(func_340(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_4", 7, 1, 0)){
iLocal_219=4;
}
}
elseif(iLocal_219==2){
if(func_340(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_3", 7, 1, 0)){
iLocal_219=3;
}
}
elseif(iLocal_219==1){
if(func_340(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_2", 7, 1, 0)){
iLocal_219=2;
}
}
elseif(iLocal_219==0){
if(func_340(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_1", 7, 1, 0)){
iLocal_219=1;
}
}
iLocal_738++;
iLocal_229=MISC::GET_GAME_TIMER();
}}}}}}


void func_515(){
if(iLocal_674){
if(Local_473.f_1 > 200){
iLocal_739++;
}}else{
iLocal_739++;
}}


void func_516(){
if(func_654(Local_480.f_0) && func_654(Local_481.f_0)){
ENTITY::FREEZE_ENTITY_POSITION(Local_480.f_0, 0);
ENTITY::FREEZE_ENTITY_POSITION(Local_481.f_0, 0);
iLocal_224=MISC::GET_GAME_TIMER();
}}


void func_517(var uParam0){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
if(CAM::GET_CAM_FOV(uLocal_663) > 13f){
if(MISC::GET_GAME_TIMER() > iLocal_232 + 10000 && MISC::GET_GAME_TIMER() > iLocal_234 + 10000){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BADCAMA", 7, 1, 0, 0)){
iLocal_234=MISC::GET_GAME_TIMER();
}}
*uParam0=0;
}else{
*uParam0=1;
iLocal_234=MISC::GET_GAME_TIMER();
}}}


void func_518(){
int iVar0;
var uVar1;
if(PED::IS_PED_IN_COVER(iLocal_475, 0)){
if(iLocal_692==4 || iLocal_692==3){
if(iLocal_285==0){
if(!bLocal_272){
if(func_370(&uLocal_489, cLocal_751, "PAP2_PASS", 8, 0, 0, 0)){
iLocal_285=1;
}}else{
iLocal_285=1;
}}elseif(!func_371()){
if(iLocal_299==0){
if(bLocal_272==0){
func_499("PAP2_08", 7500, 0);
iLocal_299=1;
}}}}
if(iLocal_244==0){
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
STREAMING::REQUEST_CLIP_SET(sLocal_752);
STREAMING::REQUEST_CLIP_SET(sLocal_753);
iLocal_244=1;
}elseif(iLocal_244==1){
if(STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2")){
iLocal_244=2;
TASK::OPEN_SEQUENCE_TASK(&uVar1);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
TASK::SET_SEQUENCE_TO_REPEAT(uVar1, 1);
TASK::CLOSE_SEQUENCE_TASK(uVar1);
TASK::TASK_PERFORM_SEQUENCE(iLocal_475, uVar1);
}}elseif(iLocal_244==2){
if((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 3)){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 40);
if(iVar0==1){
TASK::TASK_PLAY_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, 0, 0, 0);
}
if(iVar0==2){
TASK::TASK_PLAY_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, 0, 0, 0);
}
if(iVar0==3){
TASK::TASK_PLAY_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, 0, 0, 0);
}}}}}


void func_519(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_520(int iParam0, struct<3> Param1){
if(func_654(PLAYER::PLAYER_PED_ID()) && func_5(iParam0)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Param1, 0, 1, 0)){
return 1;
}}
return 0;
}


void func_521(){
func_374(&(Local_483[0 /*5*/]), 1, 0, 1);
func_374(&(Local_483[1 /*5*/]), 1, 0, 1);
func_374(&(uLocal_355[0]), 1, 0, 1);
func_374(&(uLocal_355[1]), 1, 0, 1);
func_374(&(uLocal_355[2]), 1, 0, 1);
func_374(&(uLocal_355[3]), 1, 0, 1);
func_374(&(uLocal_355[4]), 1, 0, 1);
func_374(&(uLocal_355[5]), 1, 0, 1);
}

int func_522(){
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
return 1;
}
return 0;
}


void func_523(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_524();
}


void func_524(){
Global_23131.f_134=1;
}


void func_525(){
func_523();
STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.8f);
func_261();
if(iLocal_248 > 500){
if(!func_371()){
if(iLocal_738 !=7){
if(func_370(&uLocal_489, cLocal_751, "PAP2_FAILFIL", 8, 1, 0, 0)){
iLocal_296=1;
iLocal_738=7;
}}}}
PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOU(2);
PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
if(!AUDIO::HAS_SOUND_FINISHED(iLocal_373)){
AUDIO::STOP_SOUND(iLocal_373);
func_13("TK************ STOP SEX SOUNDS ************");
}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
func_639(0);
if(iLocal_693 > 0 && iLocal_696 > 0){
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::STOP_CAM_POINTING(uLocal_663);
}
if(CAM::DOES_CAM_EXIST(uLocal_663)){
fLocal_337=CAM::GET_CAM_FOV(uLocal_663);
}
func_14(1);
}
switch (iLocal_693){
case 0:
if(func_248(5, bLocal_703)){
func_485();
func_430(1, "FILM POPPY", 0, 0, 0, 1);
HUD::CLEAR_PRINTS();
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 1);
if(CAM::DOES_CAM_EXIST(uLocal_663) && func_654(Local_480.f_0)){
CAM::SET_CAM_ROT(uLocal_663, -1.6576f, 0f, -170.9825f, 2);
}
AUDIO::STOP_SOUND(iLocal_374);
AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
iLocal_375=1;
func_256(1);
func_254();
iLocal_723=0;
iLocal_219=0;
fLocal_688=-0.05f;
fLocal_689=-0.03f;
iLocal_232=MISC::GET_GAME_TIMER();
iLocal_250=MISC::GET_GAME_TIMER();
if(func_654(iLocal_475)){
func_232(iLocal_475, -37.2184f, 325.397f, 111.6958f, 242.3437f, 0, 1);
}
iLocal_693=1;
}
break;
case 1:
switch (iLocal_696){
case 0:
if(CAM::DOES_CAM_EXIST(uLocal_663)){
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}
if(func_654(iLocal_475) && func_654(PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(iLocal_475, Local_480.f_0, -1, 0, 2);
}
iLocal_702=0;
iLocal_696=1;
break;
case 1:
iLocal_696=2;
break;
case 2:
iLocal_693=2;
break;
}
break;
case 2:
iLocal_755=0;
iLocal_721=0;
iLocal_739=0;
func_338(0);
break;
case 3:
iLocal_693=2;
func_234();
iLocal_721=1;
break;
}}


void func_526(){
struct<6> Var0;
struct<6> Var1;
struct<6> Var2;
func_523();
if(((func_663() && iLocal_309) && MISC::GET_GAME_TIMER() > iLocal_232 + 900) && CAM::IS_SCREEN_FADED_OUT()){
func_231(800, 0);
}
if(iLocal_255==0){
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
iLocal_255=1;
}
if(iLocal_692==2 && PED::IS_PED_RAGDOLL(iLocal_475)){
func_354(2);
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 26.14576f, 302.1105f, 109.4635f, -51.90198f, 337.5261f, 124.3827f, 40.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -6.873048f, 293.6245f, 111.9627f, -11.44987f, 283.5945f, 107.3145f, 2f, 0, 1, 0)){
func_354(5);
}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -6.007325f, 363.1314f, 112.0066f, -24.75968f, 322.2206f, 115.7538f, 27.5f, 0, 1, 0)){
if(func_586() || func_582()){
if(func_654(uLocal_355[5])){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_355[5]);
TASK::TASK_REACT_AND_FLEE_PED(uLocal_355[5], PLAYER::PLAYER_PED_ID());
}
func_354(5);
}}
if(iLocal_744 < 2){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_follow_nav_mesh_to_coord"))==1){
if(((((((PAD::IS_CONTROL_PRESSED(0, 30) || PAD::IS_CONTROL_PRESSED(0, 31)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 22)) || (func_522() && PAD::IS_CONTROL_PRESSED(0, 1))) || (func_522() && PAD::IS_CONTROL_PRESSED(0, 2))) || (func_522() && PAD::IS_CONTROL_PRESSED(0, 32))){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}}}
PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
if(func_654(uLocal_355[1])){
func_511(uLocal_355[1], &uLocal_376, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(uLocal_355[2])){
func_511(uLocal_355[2], &uLocal_384, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(uLocal_355[3])){
func_511(uLocal_355[3], &uLocal_392, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(uLocal_355[4])){
func_511(uLocal_355[4], &uLocal_400, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(Local_483[0 /*5*/])){
func_511(Local_483[0 /*5*/], &uLocal_440, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(Local_483[1 /*5*/])){
func_511(Local_483[1 /*5*/], &uLocal_448, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(Local_480.f_0)){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480.f_0, 18f, 18f, 2f, 0, 1, 0) && PED::IS_PED_FACING_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 60f)){
func_354(0);
}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480.f_0, 7f, 7f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -20.67899f, 298.9662f, 111.2627f, -35.81502f, 306.0859f, 115.4814f, 24f, 0, 1, 0)){
func_354(0);
}
func_511(Local_480.f_0, &uLocal_416, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(Local_481.f_0)){
func_511(Local_481.f_0, &uLocal_424, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(Local_482.f_0)){
func_511(Local_482.f_0, &uLocal_432, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}
if(func_654(iLocal_475)){
PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_475);
PED::SET_PED_TO_LOAD_COVER(iLocal_475, 1);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -7.914861f, 290.7026f, 106.4252f, -13.11027f, 279.6898f, 112.5335f, 5.5f, 0, 1, 0)){
Var0={
func_361() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
if(MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_WALKA")){
func_234();
}}}
if(iLocal_692==2){
if(!func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 20f, 1)){
Var1={
func_361() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
if(MISC::ARE_STRINGS_EQUAL(&Var1, "PAP2_WALKA")){
func_488();
}}}}
if(func_654(Local_483[0 /*5*/])){
Var2={
func_490() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
if(MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_STAFF_7")){
if(PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_483[0 /*5*/])){
TASK::TASK_USE_MOBILE_PHONE(Local_483[0 /*5*/], 0, 1);
}}}
if((func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 30f, 1) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_475, 70f)) && !PED::IS_PED_HEADTRACKING_PED(iLocal_475, Local_483[0 /*5*/])){
if(!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_475)){
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_475, -1, 0, 2);
}}elseif(PED::IS_PED_HEADTRACKING_PED(iLocal_475, Local_483[0 /*5*/])){
if(!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/])){
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], -1, 0, 2);
}}elseif(PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_475)){
TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
}}
func_518();
if(iLocal_283){
if(MISC::GET_GAME_TIMER() > iLocal_249 + 1000){
bLocal_332=true;
}}
if(func_487(iLocal_475, -37.203f, 325.4259f, 112.31f, 2f, 1) && bLocal_726==0){
if(iLocal_285==0){
if(!bLocal_272 && !func_487(PLAYER::PLAYER_PED_ID(), -37.203f, 325.4259f, 112.31f, 2f, 1)){
if(func_370(&uLocal_489, cLocal_751, "PAP2_PASS", 8, 0, 0, 0)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(9f, 4f, 1);
iLocal_285=1;
iLocal_264=MISC::GET_GAME_TIMER();
}}else{
iLocal_285=1;
iLocal_264=MISC::GET_GAME_TIMER();
}}
if(!PED::IS_PED_IN_COVER(iLocal_475, 0)){
if((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 3)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -37.25669f, 325.4652f, 112.6963f, 0.05f, 0.05f, 0.05f, 0, 1, 0)){
}elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_put_ped_directly_into_cover")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_put_ped_directly_into_cover")) !=0){
if(!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-37.2396f, 325.3983f, 111.6961f)){
uLocal_471=TASK::ADD_COVER_POINT(-37.2396f, 325.3983f, 111.6961f, 156.696f, 0, 2, 2, 0);
}
TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_475, -37.2022f, 325.4253f, 111.6954f, -1, 1, 0f, 1, 1, uLocal_471, 0);
if(func_5(iLocal_353)){
ENTITY::DETACH_ENTITY(iLocal_353, 1, 1);
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, iLocal_475, PED::GET_PED_BONE_INDEX(iLocal_475, 28422), 0.06f, 0f, -0.06f, 0f, 0f, 90f, 1, 1, 0, 0, 2, 1, 0);
}
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475);
iLocal_262=MISC::GET_GAME_TIMER();
if(iLocal_283==0){
iLocal_249=MISC::GET_GAME_TIMER();
}
iLocal_283=1;
}elseif(MISC::GET_GAME_TIMER() > iLocal_262 + 2000){
TASK::CLEAR_PED_TASKS(iLocal_475);
}}}elseif(ENTITY::IS_ENTITY_AT_COORD(iLocal_475, -37.25669f, 325.4652f, 112.6963f, 0.1f, 0.1f, 0.1f, 0, 1, 0)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_475, 1);
}}}
if(bLocal_272==0){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
iLocal_353=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 0f, 10f), 1, 1, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_353, iLocal_475)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, iLocal_475, PED::GET_PED_BONE_INDEX(iLocal_475, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}}}
func_581();
if(iLocal_283){
func_580();
}
if(bLocal_272==1){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}
switch (iLocal_693){
case 0:
iLocal_720=1;
if(func_248(iLocal_692, bLocal_703)){
ENTITY::FREEZE_ENTITY_POSITION(iLocal_475, 0);
iLocal_693=1;
}
break;
case 1:
func_579();
if(iLocal_357==0){
func_578();
}else{
func_577();
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -11.12876f, 354.3175f, 109.1607f, -24.44232f, 326.8144f, 114.1618f, 18.75f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
if(!bLocal_310){
func_576(800);
bLocal_310=true;
}}
func_575();
func_574();
if(!bLocal_726 && !bLocal_727){
func_573();
func_572();
if(MISC::GET_GAME_TIMER() > iLocal_237){
func_531(iLocal_692);
}
PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_475, 2f);
func_261();
if(!bLocal_272){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.27514f, 328.5864f, 110.5839f, -37.69368f, 325.3203f, 113.7398f, 3.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.62184f, 328.4344f, 109.4458f, -41.9645f, 330.4021f, 113.4458f, 5.75f, 0, 1, 0)){
}else{
PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
}}else{
PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
}}elseif(bLocal_727){
if(func_654(Local_483[0 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[0 /*5*/], 0);
}
if(func_654(Local_483[1 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[1 /*5*/], 0);
}
func_507();
}elseif(bLocal_726){
if(func_654(Local_483[0 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[0 /*5*/], 0);
if(bLocal_312){
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_react_and_flee_ped")) !=1){
TASK::TASK_REACT_AND_FLEE_PED(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID());
}}}
if(func_654(Local_483[1 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[1 /*5*/], 0);
if(bLocal_312){
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("script_task_react_and_flee_ped")) !=1){
TASK::TASK_REACT_AND_FLEE_PED(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID());
}}}
if(bLocal_312){
func_529();
}
if(!bLocal_332){
if(!iLocal_708){
if(func_493(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) < 12f){
iLocal_708=func_370(&uLocal_489, cLocal_751, "PAP2_SPOT", 8, 0, 0, 0);
}
else{
iLocal_708=1;
}}elseif(!func_371()){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.922f, 295.4762f, 111.5717f, -62.67068f, 314.4955f, 113.8363f, 33.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -31.05239f, 322.6476f, 111.4022f, -53.9211f, 333.266f, 114.3775f, 17.75f, 0, 1, 0)){
func_354(0);
}
else{
func_354(5);
}}}}
if(HUD::DOES_BLIP_EXIST(iLocal_661)){
if(func_495("PAP2_06", 0, 0) || !func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 70f, 1)){
HUD::SET_BLIP_FLASHES(iLocal_661, 1);
}elseif(func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 70f, 1)){
HUD::SET_BLIP_FLASHES(iLocal_661, 0);
}}
break;
case 2:
func_528();
break;
case 3:
func_527(iLocal_692);
break;
}}


void func_527(int iParam0){
int iVar0;
switch (iParam0){
case 2:
if(func_654(iLocal_475)){
TASK::CLEAR_PED_TASKS(iLocal_475);
}
iLocal_744=3;
func_232(iLocal_475, Local_467[2 /*3*/], 338.4024f, 0, 1);
func_232(PLAYER::PLAYER_PED_ID(), -14.1493f, 280.7966f, 107.2078f, 317.7051f, 0, 1);
iLocal_706=1;
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
iLocal_693=1;
break;
case 3:
if(func_654(iLocal_475)){
TASK::CLEAR_PED_TASKS(iLocal_475);
}
iVar0=0;
while (iVar0 <=1){
if(func_654(Local_483[iVar0 /*5*/])){
TASK::CLEAR_PED_TASKS(Local_483[iVar0 /*5*/]);
}
iVar0++;
}
func_232(iLocal_475, Local_467[5 /*3*/], 63.3365f, 0, 1);
func_232(PLAYER::PLAYER_PED_ID(), -2.2002f, 317.2632f, 109.9189f, 60.7242f, 0, 1);
iLocal_744=6;
iLocal_707=1;
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
iLocal_693=1;
break;
case 4:
if(func_654(iLocal_475)){
TASK::CLEAR_PED_TASKS(iLocal_475);
}
iLocal_720=1;
func_574();
iLocal_744=7;
func_232(iLocal_475, -36.7532f, 323.5341f, 111.6957f, 165.7917f, 0, 1);
func_232(PLAYER::PLAYER_PED_ID(), -35.1361f, 320.0255f, 111.6955f, 199.6725f, 0, 1);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
iLocal_693=1;
break;
}}


void func_528(){
int iVar0;
if(iLocal_692==4){
iVar0=0;
while (iVar0 <=1){
func_7(&(Local_483[iVar0 /*5*/]));
iVar0++;
}}
iLocal_705=0;
iLocal_706=0;
func_338(0);
}


void func_529(){
Global_20591=0;
func_530();
}


void func_530(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=6;
}}


void func_531(int iParam0){
struct<3> Var0;
struct<3> Var1;
struct<6> Var2;
var uVar3;
func_569();
if(func_654(Local_483[0 /*5*/]) && func_654(Local_483[1 /*5*/])){
func_565();
func_542();
}
Var2={
func_361() 
};
switch (iParam0){
case 2:
if(!MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 3f, 0f), 0.1f, 0, 1, 0, 0, 0, 0, 0)){
iLocal_336=0;
if(func_539(2, 2.5f, 2.5f, 2.5f, 0)){
iLocal_693=2;
}
if(iLocal_278==0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -70.08491f, 298.5583f, 104.7803f, -62.14436f, 295.8383f, 108.3729f, 5.5f, 0, 1, 0)){
if(CAM::IS_SCREEN_FADED_IN()){
if(func_370(&uLocal_489, cLocal_751, "PAP2_WALKA", 7, 0, 0, 0)){
iLocal_278=1;
}}}elseif(func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 25f, 1) && !func_653(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 15f, 1)){
if(iLocal_277==0){
iLocal_277=1;
}elseif(func_653(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 15f, 1)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var2)){
if(MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_WALKB")){
func_234();
}
}}}
func_536(1, 1);
}else{
iLocal_336=1;
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475)){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 0f, 0);
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2.997917f, 292.1497f, 109.1639f, 7.916159f, 316.1949f, 116.9194f, 40.75f, 0, 1, 0)){
if(func_654(Local_483[0 /*5*/])){
TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_USE_MOBILE_PHONE(Local_483[0 /*5*/], 0, 1);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0);
func_354(5);
}}}
break;
case 3:
if(func_539(5, 2.5f, 2.5f, 2.5f, 0)){
func_13("CLEANUP FOLLOW BEV GUARDS");
iLocal_693=2;
}
func_535(&iLocal_705, &iLocal_707);
func_536(0, -1);
break;
case 4:
STREAMING::REQUEST_ANIM_DICT("cover@move@base@core");
if(fLocal_347 < 1f){
fLocal_347=0f;
}elseif(fLocal_347 < 1.8f){
fLocal_347=(fLocal_347 + 0.005f);
}
if(fLocal_347 > 1.8f){
fLocal_347=1.8f;
}
STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(fLocal_347);
func_534();
if(bLocal_272==1){
if(func_533()){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_374)){
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_374, "AMBIENT_SEX", Local_480.f_0, "PAPARAZZO_02_SOUNDSETS", 0, 0);
}}
fLocal_344=(fLocal_344 + 0.005f);
if(fLocal_344 > 0.6f){
fLocal_344=0.6f;
}
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_374, "ONESHOT_VOLUME", fLocal_344);
func_258();
if(STREAMING::HAS_CLIP_SET_LOADED(sLocal_753)){
PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_753);
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.75797f, 319.5059f, 111.4954f, -33.26295f, 318.438f, 113.4954f, 1f, 0, 1, 0)){
func_13("TK~~~~Player in cover spot~~~~");
iLocal_245++;
}
if(MISC::GET_GAME_TIMER() > iLocal_225 + 200){
iLocal_245=iLocal_245;
if(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d") >=0.4f){
if(iLocal_290==0){
AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
func_13("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
iLocal_290=1;
}
if(AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0)==1){
PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 1);
iLocal_693=2;
}}
if(MISC::GET_GAME_TIMER() > iLocal_225 + 10000){
if(iLocal_290==0){
AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
func_13("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
iLocal_290=1;
}
if(AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0)==1){
PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 1);
iLocal_693=2;
}}}}
if(!bLocal_332){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.76537f, 324.9915f, 111.696f, -37.2921f, 327.3263f, 113.446f, 1f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -38.16154f, 326.2457f, 111.696f, -36.30027f, 325.4161f, 113.446f, 1.25f, 0, 1, 0)){
if(func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 2f, 1)){
TASK::TASK_STAND_STILL(iLocal_475, -1);
if(iLocal_285==0){
if(!func_371()){
if(!bLocal_272){
if(func_370(&uLocal_489, cLocal_751, "PAP2_PASS", 8, 0, 0, 0)){
iLocal_285=1;
}}else{
iLocal_285=1;
}}
}
iLocal_283=1;
bLocal_332=true;
}}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.52648f, 324.2847f, 111.4453f, -38.70029f, 327.4914f, 114.1953f, 3f, 0, 1, 0)){
func_639(0);
}
if(iLocal_275==1){
if(bLocal_332){
if((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.84267f, 323.4267f, 100.1808f, -31.97676f, 320.6661f, 113.696f, 5.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.97622f, 326.2021f, 111.1961f, -37.2049f, 325.1476f, 113.4954f, 1f, 0, 1, 0)) || func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 1.8f, 1)){
if(bLocal_272==0){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
HUD::CLEAR_PRINTS();
PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
if(STREAMING::HAS_CLIP_SET_LOADED(sLocal_753)){
PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_753);
}else{
STREAMING::REQUEST_CLIP_SET(sLocal_753);
}
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
func_258();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}
if(!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, "DEFAULT_ACTION");
}
if((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.55285f, 324.4431f, 111.696f, -37.76319f, 327.7456f, 113.696f, 1f, 0, 1, 0) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
func_232(PLAYER::PLAYER_PED_ID(), -37.0561f, 326.647f, 111.696f, 203.1247f, 0, 1);
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), 0, 1, 0);
}
Var0={
ENTITY::GET_ENTITY_COORDS(iLocal_475, 1) 
};
Var1={
-37.22483f, 325.5313f, 112.696f 
};
if(((Var0.f_0 < (Var1.f_0 - 0.2f) || Var0.f_0 > (Var1.f_0 + 0.2f)) || Var0.f_1 < (Var1.f_1 - 0.2f)) || Var0.f_1 > (Var1.f_1 + 0.2f)){
func_232(iLocal_475, -39.2954f, 328.3034f, 111.696f, 218.8305f, 0, 1);
}
TASK::OPEN_SEQUENCE_TASK(&uVar3);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -33.8491f, 319.335f, 111.696f, 1.4f, -1, 1f, 1024, 184.4715f);
TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_d", 2f, -1000f, -1, 1, 0f, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar3);
TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar3);
TASK::CLEAR_SEQUENCE_TASK(&uVar3);
if(CAM::DOES_CAM_EXIST(uLocal_666)){
CAM::DESTROY_CAM(uLocal_666, 0);
}
if(CAM::DOES_CAM_EXIST(uLocal_667)){
CAM::DESTROY_CAM(uLocal_667, 0);
}
uLocal_666=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
uLocal_667=CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
CAM::SET_CAM_PARAMS(uLocal_666, -37.813f, 328.5478f, 113.3867f, -5.9528f, 0.0001f, -163.8669f, 23.8f, 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(uLocal_667, -34.8325f, 320.8304f, 113.3748f, -6.6594f, -0.0146f, -161.67f, 34f, 0, 1, 1, 2);
CAM::SET_CAM_NEAR_DOF(uLocal_666, 2f);
CAM::SET_CAM_FAR_DOF(uLocal_666, 40f);
CAM::SET_CAM_DOF_STRENGTH(uLocal_666, 0.5f);
CAM::SET_CAM_NEAR_DOF(uLocal_667, 2f);
CAM::SET_CAM_FAR_DOF(uLocal_667, 40f);
CAM::SET_CAM_DOF_STRENGTH(uLocal_667, 0.5f);
CAM::SET_CAM_ACTIVE(uLocal_667, 1);
CAM::SET_CAM_ACTIVE(uLocal_666, 1);
CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_667, uLocal_666, 7000, 1, 1);
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(uLocal_666)){
CAM::SHAKE_CAM(uLocal_666, "HAND_SHAKE", 1f);
}
if(CAM::DOES_CAM_EXIST(uLocal_667)){
CAM::SHAKE_CAM(uLocal_667, "HAND_SHAKE", 1f);
}
iLocal_225=MISC::GET_GAME_TIMER();
bLocal_272=true;
fLocal_344=0.1f;
AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAMERA_FOLEY", PLAYER::PLAYER_PED_ID(), "PAPARAZZO_02_SOUNDSETS", 0, 0);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
}}}}
if(bLocal_712){
func_532(&iLocal_705, &iLocal_706);
}
func_536(1, 6);
break;
}}


void func_532(int iParam0, int iParam1){
struct<6> Var0;
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >=99){
if(!*iParam0){
*iParam0=1;
}}}
if(!*iParam0){
if(!func_371()){
if(func_493(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) <=16f && !PED::IS_PED_FACING_PED(iLocal_475, PLAYER::PLAYER_PED_ID(), 90f)){
*iParam0=func_370(&uLocal_489, cLocal_751, "PAP2_GO", 8, 0, 0, 0);
}}elseif(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >=23f){
Var0={
func_490() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
if(MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF")){
func_529();
}}}}elseif(iLocal_744==7){
if(!*iParam1){
if(!func_371()){
*iParam1=func_370(&uLocal_489, cLocal_751, "PAP2_PREFILM", 9, 0, 0, 0);
}}}}

int func_533(){
float fVar0;
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_218)){
fVar0=PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_218);
if(fVar0 >=0.069f && fVar0 < (0.069f + 0.05f)){
return 1;
}
if(fVar0 >=0.249f && fVar0 < (0.249f + 0.05f)){
return 1;
}
if(fVar0 >=0.486f && fVar0 < (0.486f + 0.05f)){
return 1;
}
if(fVar0 >=0.668f && fVar0 < (0.668f + 0.05f)){
return 1;
}
if(fVar0 >=0.881f && fVar0 < (0.881f + 0.05f)){
return 1;
}}
return 0;
}


void func_534(){
struct<6> Var0;
if(func_371()){
if(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) > 28f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.814245f, 316.4174f, 109.3984f, 2.642797f, 313.3375f, 113.1552f, 5.5f, 0, 1, 0)){
Var0={
func_361() 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
if(MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF")){
func_488();
}}}}}


void func_535(int iParam0, int iParam1){
if(!*iParam0){
if(iLocal_744==3 || func_653(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 12f, 1)){
if(!func_371()){
if(!func_653(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 12f, 1)){
if(func_370(&uLocal_489, cLocal_751, "PAP2_STAIRS", 7, 0, 0, 0)){
if(func_654(Local_483[0 /*5*/])){
iLocal_226=MISC::GET_GAME_TIMER();
iLocal_697[0]=1;
iLocal_697[1]=1;
*iParam0=1;
}}}elseif(func_654(Local_483[0 /*5*/])){
iLocal_226=MISC::GET_GAME_TIMER();
iLocal_697[0]=1;
iLocal_697[1]=1;
*iParam0=1;
}}}}elseif(!*iParam1){
if(!func_371()){
if(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 23f){
*iParam1=func_370(&uLocal_489, cLocal_751, "PAP2_STAFF", 7, 0, 0, 0);
}}}else{
func_534();
}}


void func_536(bool bParam0, int iParam1){
struct<3> Var0;
if((func_654(iLocal_475) && !bLocal_727) && !iLocal_283){
if(iLocal_744 < 8){
if(iLocal_276==1){
}
if(iLocal_744 < 2){
Var0={
4f, 4f, 2.5f 
};
}else{
Var0={
2f, 2f, 2.5f 
};
}
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >=105 && MISC::GET_GAME_TIMER() > iLocal_247 + 1200){
if(iLocal_282==0){
}
if(!PED::GET_PED_STEALTH_MOVEMENT(iLocal_475)){
iLocal_331=1;
PED::SET_PED_STEALTH_MOVEMENT(iLocal_475, 1, "DEFAULT_ACTION");
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_475, &Local_750, 0, 1032, -1);
func_13("MAKE BEV STEALTH");
}elseif(iLocal_331){
iLocal_331=0;
}}
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >=107){
}
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 100){
PED::SET_PED_RESET_FLAG(iLocal_475, 247, 1);
}}
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_475, Local_467[iLocal_744 /*3*/], Var0, 0, 1, 0)){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_475)){
if(iLocal_744 < 2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 41){
TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_475);
}
elseif(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1.9f){
if((!func_653(PLAYER::PLAYER_PED_ID(), iLocal_475, 5f, 1) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 35) && !PED::IS_PED_FACING_PED(iLocal_475, PLAYER::PLAYER_PED_ID(), 90f)){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 2f, 0);
}else{
TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_475);
}
}
elseif(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 35){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 1f, 0);
}}elseif(func_654(Local_483[0 /*5*/])){
if(func_653(iLocal_475, Local_483[0 /*5*/], 25f, 1)){
TASK::TASK_LOOK_AT_ENTITY(iLocal_475, Local_483[0 /*5*/], 8000, 0, 2);
}
if(TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&Local_750, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iLocal_258)){
if(TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < iLocal_258 && !func_653(iLocal_475, Local_483[0 /*5*/], 8f, 1)){
TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 2f, 0);
}else{
TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_475);
}
}}}elseif(func_653(iLocal_475, PLAYER::PLAYER_PED_ID(), 7f, 1)){
if(STREAMING::HAS_CLIP_SET_LOADED(sLocal_752)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -38.226f, 320.3186f, 111.0512f, -36.41312f, 323.9704f, 113.6954f, 4.75f, 0, 1, 0)){
TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475, sLocal_752);
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_475, &Local_750, 0, 8, -1);
iLocal_247=MISC::GET_GAME_TIMER();
iLocal_276=0;
}}}}elseif(!bParam0){
if(iLocal_744 < 8){
iLocal_744++;
}}elseif(iParam1 > -1){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >=112){
}elseif(!func_520(iLocal_475, 7f, 7f, 3.5f) || !func_538(Local_467[iLocal_744 /*3*/], 13f, 13f, 5f)){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.70227f, 336.294f, 111.172f, -17.27828f, 324.6822f, 115.1379f, 12.5f, 0, 1, 0)){
if(!func_537(iLocal_475, PLAYER::PLAYER_PED_ID(), 40f) && iLocal_744 <=6){
if(TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475)){
TASK::TASK_LOOK_AT_ENTITY(iLocal_475, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_475, 1, 0);
}
iLocal_276=1;
}}
if(bLocal_712){
iLocal_740++;
if(iLocal_740 > 125){
bLocal_712=false;
iLocal_740=0;
}}elseif(iLocal_713){
iLocal_741++;
if(iLocal_741 > 220){
iLocal_713=0;
iLocal_741=0;
}}}else{
iLocal_740=0;
if(iLocal_744 < 8){
iLocal_744++;
}}}}}}


bool func_537(int iParam0, int iParam1, float fParam2){
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

int func_538(struct<3> Param0, struct<3> Param1){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, Param1, 0, 1, 0)){
return 1;
}}
return 0;
}

int func_539(int iParam0, struct<3> Param1, bool bParam2){
if(!bParam2){
if(ENTITY::IS_ENTITY_AT_COORD(iLocal_475, Local_467[iParam0 /*3*/], Param1, 0, 1, 0) || func_538(Local_467[iParam0 /*3*/], Param1)){
return 1;
}}elseif(ENTITY::IS_ENTITY_AT_COORD(iLocal_475, Local_467[iParam0 /*3*/], 2.5f, 2.5f, 2.5f, 0, 1, 0)){
if(func_520(iLocal_475, 2.5f, 2.5f, 2.5f)){
iLocal_740=0;
return 1;
}else{
if(bLocal_712 && iLocal_702){
iLocal_740++;
if(iLocal_740 > 100){
bLocal_712=false;
iLocal_740=0;
}}
if(!iLocal_713){
iLocal_741++;
if(iLocal_741 > 175){
func_541();
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_perform_sequence"))==7){
iLocal_713=0;
iLocal_741=0;
}
if(bLocal_272==0){
func_540("PAP2_08");
}}}
return 0;
}


void func_540(char* sParam0){
if(!iLocal_702){
func_499(sParam0, 7500, 0);
iLocal_702=1;
}}


void func_541(){
var uVar0;
if(!iLocal_713){
if(TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_perform_sequence")) !=1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("script_task_perform_sequence")) !=0){
TASK::OPEN_SEQUENCE_TASK(&uVar0);
TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
if(!func_520(iLocal_475, 10f, 10f, 10f)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
}
if(iLocal_744==7){
TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_464, 0);
}
TASK::CLOSE_SEQUENCE_TASK(uVar0);
TASK::TASK_PERFORM_SEQUENCE(iLocal_475, uVar0);
TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}
iLocal_713=1;
}}


void func_542(){
struct<6> Var0;
func_546();
Var0={
func_361() 
};
switch (iLocal_697[1]){
case 0:
break;
case 1:
break;
case 2:
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_545(Var0);
}
if(ENTITY::IS_ENTITY_AT_COORD(Local_483[1 /*5*/], 15.7815f, 333.5496f, 109.919f, 4f, 4f, 2f, 0, 1, 0)){
}
break;
case 3:
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_545(Var0);
if(!MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_")){
if(func_324(7, Local_462, 0)){
TASK::CLEAR_PED_TASKS(Local_483[1 /*5*/]);
func_544(Local_486[iLocal_488 /*3*/]);
iLocal_697[1]=4;
}}}
break;
case 4:
switch (iLocal_699){
case 0:
if(ENTITY::IS_ENTITY_AT_COORD(Local_483[1 /*5*/], Local_486[iLocal_488 /*3*/], 1f, 1f, 1.5f, 0, 1, 0)){
}elseif(TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("script_task_follow_nav_mesh_to_coord")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("script_task_follow_nav_mesh_to_coord")) !=0){
func_544(Local_486[iLocal_488 /*3*/]);
}
break;
case 1:
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("script_task_perform_sequence")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("script_task_perform_sequence")) !=0){
iLocal_488=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
func_544(Local_486[iLocal_488 /*3*/]);
}
break;
}
break;
case 8:
if(func_493(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 20f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BSFLEEB", 9, 0, 0, 0)){
iLocal_697[0]=4;
iLocal_697[1]=4;
bLocal_726=true;
}}else{
iLocal_697[0]=4;
iLocal_697[1]=4;
bLocal_726=true;
}
break;
case 5:
if(func_493(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BSFLEE1", 9, 0, 0, 0)){
func_543(Local_483[0 /*5*/]);
bLocal_312=true;
iLocal_697[0]=9;
iLocal_697[1]=9;
}}else{
bLocal_312=true;
func_543(Local_483[0 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}
break;
case 7:
if(func_493(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BSFLEE2", 9, 0, 0, 0)){
bLocal_312=true;
func_543(Local_483[0 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}}else{
bLocal_312=true;
func_543(Local_483[0 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}
break;
case 6:
if(func_493(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_BSFLEE3", 9, 0, 0, 0)){
bLocal_312=true;
func_543(Local_483[0 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}}else{
bLocal_312=true;
func_543(Local_483[0 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}
break;
case 9:
bLocal_726=true;
break;
}}


void func_543(int iParam0){
if(func_654(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1)){
if(func_6(PED::GET_VEHICLE_PED_IS_IN(iParam0, 1))){
TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, 1), PLAYER::PLAYER_PED_ID(), 8, 100f, 786468, 100f, 100f, 1);
}}else{
PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 4, 1);
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_smart_flee_ped")) !=1){
TASK::CLEAR_PED_TASKS(iParam0);
TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 1);
}}
PED::SET_PED_KEEP_TASK(iParam0, 1);
}}


void func_544(struct<3> Param0){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[1 /*5*/], Param0, 1f, -1, 1048576000, 0, 1193033728);
iLocal_699=0;
}


void func_545(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(&uParam0, "PAP2_STAFF")){
iVar0=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("script_task_play_anim")) !=1){
switch (iVar0){
case 6:
break;
case 8:
break;
}}}}


void func_546(){
if(iLocal_697[0] <=4 && iLocal_697[1] <=4){
if((func_564(Local_483[1 /*5*/]) || func_653(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 12f, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.25519f, 335.3912f, 109.1308f, 24.29033f, 330.667f, 113.9856f, 3.5f, 0, 1, 0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
iLocal_697[1]=5;
}else{
iLocal_697[1]=8;
}
func_529();
}
if(func_548(Local_483[1 /*5*/], 1, 1116471296, 1126825984, 0, 0, 0, 0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
func_543(Local_483[1 /*5*/]);
iLocal_697[1]=7;
}else{
func_547(Local_483[1 /*5*/]);
iLocal_697[1]=6;
}
func_529();
}}}


void func_547(int iParam0){
if(func_654(iParam0)){
TASK::CLEAR_PED_TASKS(iParam0);
TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
PED::SET_PED_KEEP_TASK(iParam0, 1);
}}

int func_548(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7){
struct<3> Var0;
if(func_5(PLAYER::PLAYER_PED_ID()) && func_5(iParam0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}
if(func_559(iParam0, bParam1, bParam5, bParam6, bParam7)){
return 1;
}
if(!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <=5f){
return func_537(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
}}}
if(bParam4){
return 0;
}elseif(func_549(iParam0, fParam3)){
return 1;
}}
return 0;
}

int func_549(int iParam0, float fParam1){
float fVar0;
if(func_5(PLAYER::PLAYER_PED_ID()) && func_5(iParam0)){
if(func_558(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
fVar0=40f;
}else{
fVar0=3f;
}
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)){
if(func_550(iParam0, fParam1)){
return 1;
}}}}
return 0;
}


bool func_550(int iParam0, float fParam1){
return func_551(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}


bool func_551(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
int iVar2;
iVar2=func_557(iParam0, iParam1);
if(!func_5(iParam0) || !func_5(iParam1)){
if(iVar2 !=-1){
func_556(&(Local_35[iVar2 /*4*/]));
}
return 0;
}
if(!func_555(iParam0, iParam1, fParam2, iParam3)){
return 0;
}
if(iVar2==-1){
iVar2=func_554();
if(iVar2==-1){
return 0;
}
Local_35[iVar2 /*4*/].f_1=iParam0;
Local_35[iVar2 /*4*/].f_2=iParam1;
}
Var1={
PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) 
};
uVar0=func_552(&(Local_35[iVar2 /*4*/]), Var1, iParam1, &(Local_35[iVar2 /*4*/].f_3), iParam0, iParam5);
return (uVar0 || (MISC::GET_GAME_TIMER() - Local_35[iVar2 /*4*/].f_3) < iParam4);
}

int func_552(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5){
var uVar0;
struct<3> Var1;
var uVar2;
int iVar3;
int iVar4;
iVar3=0;
if(!func_5(iParam2)){
*uParam0=0;
return 0;
}
if(*uParam0==0){
Var1={
func_553(iParam2, iParam5) 
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
func_5(iVar3);
if(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)==iParam2){
if(bLocal_36){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}
return 0;
}
if(ENTITY::IS_ENTITY_A_VEHICLE(iVar3)){
func_5(iVar3);
if(PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0)){
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3)==PED::GET_VEHICLE_PED_IS_IN(iParam2, 0)){
if(bLocal_36){
GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
}
*uParam3=MISC::GET_GAME_TIMER();
return 1;
}}
return 0;
}
return 0;
}


Vector3 func__553(int iParam0, int iParam1){
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

int func_554(){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
if((Local_35[iVar0 /*4*/]==0 && Local_35[iVar0 /*4*/].f_1==0) && Local_35[iVar0 /*4*/].f_2==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_555(int iParam0, int iParam1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_320(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
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
func_320(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_404(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}


void func_556(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=0;
}

int func_557(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_35.f_0){
if(Local_35[iVar0 /*4*/].f_1==iParam0 && Local_35[iVar0 /*4*/].f_2==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_558(int iParam0){
if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
return 1;
}
return 0;
}

int func_559(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
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
if(func_5(PLAYER::PLAYER_PED_ID()) && func_5(iParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
if(iVar2==joaat("weapon_petrolcan")){
fVar0=3f;
fVar1=3f;
}
if(!bParam2){
if(func_563(iParam0, bParam1, fVar0, fVar1)){
return 1;
}
if(func_560(iParam0, fVar1, bParam3, bParam4)){
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
if(func_563(iParam0, bParam1, fVar0, fVar1)){
return 1;
}}
if(func_560(iParam0, fVar1, bParam3, bParam4)){
return 1;
}}}
return 0;
}

int func_560(int iParam0, float fParam1, bool bParam2, bool bParam3){
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
if(func_561(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
return 1;
}}else{
if(bParam3){
if(func_561(iParam0, fParam1)){
return 1;
}else{
return 0;
}}
if(MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1)){
return 1;
}}
return 0;
}

int func_561(int iParam0, float fParam1){
var uVar0;
struct<3> Var1;
if((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0)){
if(func_562(iParam0, Var1, 90f, 0)){
return 1;
}}
return 0;
}

int func_562(int iParam0, struct<3> Param1, float fParam2, int iParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
Var0={
func_320(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
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
func_320(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) 
};
}
fVar2=func_404(Var1, Var0);
if(fVar2 <=cos((fParam2 / 2f))){
return 0;
}
return 1;
}

int func_563(int iParam0, bool bParam1, float fParam2, float fParam3){
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

int func_564(int iParam0){
if(func_654(iParam0)){
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID())){
return 1;
}}
return 0;
}


void func_565(){
struct<6> Var0;
struct<6> Var1;
var uVar2;
func_568();
Var0={
func_361() 
};
Var1={
func_490() 
};
switch (iLocal_697[0]){
case 0:
break;
case 1:
if(iLocal_744==4 || func_538(Local_467[3 /*3*/], 5f, 2f, 2.5f)){
}
break;
case 2:
func_567();
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_566(Var0);
}
if(ENTITY::IS_ENTITY_AT_COORD(Local_483[0 /*5*/], 15.7815f, 333.5496f, 109.919f, 4f, 4f, 2f, 0, 1, 0)){
TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], Local_483[1 /*5*/], -1, 0, 2);
iLocal_697[0]=3;
}
break;
case 3:
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
func_566(Var0);
if(MISC::ARE_STRINGS_EQUAL(&Var1, "PAP2_STAFF_11") || !MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF")){
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_perform_sequence")) !=1){
TASK::TASK_CLEAR_LOOK_AT(Local_483[0 /*5*/]);
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 18.6864f, 334.4601f, 109.9186f, 1f, -1, 1f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 22.6585f, 333.7577f, 109.9186f, 1f, -1, 1f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 24.7426f, 334.8422f, 110.49f, 1f, -1, 1f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 31.3388f, 335.7056f, 114.3914f, 1f, -1, 1f, 1, 1193033728);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 11.6968f, 345.9524f, 114.3914f, 1f, -1, 1f, 1, 1193033728);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(Local_483[0 /*5*/], uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
}}}
break;
case 4:
switch (iLocal_698){
case 0:
if(ENTITY::IS_ENTITY_AT_COORD(Local_483[0 /*5*/], Local_485[iLocal_487 /*5*/], 1f, 1f, 1.5f, 0, 1, 0)){
switch (Local_485[iLocal_487 /*5*/].f_4){
case 1:
break;
case 2:
break;
}}elseif(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_follow_nav_mesh_to_coord")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_follow_nav_mesh_to_coord")) !=0){
}
break;
case 2:
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_perform_sequence")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_perform_sequence")) !=0){
iLocal_487=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}
break;
case 1:
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_perform_sequence")) !=1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_perform_sequence")) !=0){
iLocal_487=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}
break;
}
break;
case 8:
if(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_MDFLEEB", 9, 0, 0, 0)){
iLocal_697[0]=4;
iLocal_697[1]=4;
bLocal_726=true;
}}else{
iLocal_697[0]=4;
iLocal_697[1]=4;
bLocal_726=true;
}
break;
case 5:
if(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_MDFLEE1", 9, 0, 0, 0)){
func_543(Local_483[1 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}}else{
func_543(Local_483[1 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}
break;
case 7:
if(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_MDFLEE2", 9, 0, 0, 0)){
func_543(Local_483[1 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}}else{
func_543(Local_483[1 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}
break;
case 6:
if(func_493(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_MDFLEE3", 9, 0, 0, 0)){
func_547(Local_483[1 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}}else{
func_547(Local_483[1 /*5*/]);
iLocal_697[0]=9;
iLocal_697[1]=9;
}
break;
case 9:
bLocal_726=true;
break;
}}


void func_566(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(&uParam0, "PAP2_STAFF")){
iVar0=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_play_anim")) !=1){
switch (iVar0){
case 5:
break;
case 9:
break;
case 11:
break;
}}}}


void func_567(){
var uVar0;
if(MISC::GET_GAME_TIMER() > iLocal_226 + 13000 && MISC::GET_GAME_TIMER() < iLocal_226 + 15000){
if(func_654(Local_483[0 /*5*/])){
if(TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("script_task_perform_sequence")) !=1){
TASK::OPEN_SEQUENCE_TASK(&uVar0);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 15.7815f, 333.5496f, 109.919f, 1.2f, 30000, 1048576000, 0, 1193033728);
TASK::CLOSE_SEQUENCE_TASK(uVar0);
TASK::TASK_PERFORM_SEQUENCE(Local_483[0 /*5*/], uVar0);
TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}}}}


void func_568(){
if(iLocal_697[0] <=4 && iLocal_697[1] <=4){
if(func_564(Local_483[0 /*5*/])){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
iLocal_697[0]=5;
}else{
iLocal_697[0]=8;
}
TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
func_529();
}elseif(PED::IS_PED_FACING_PED(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 90f) && func_653(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 15f, 1)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
iLocal_697[0]=5;
}else{
iLocal_697[0]=8;
}
TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
func_529();
}
if(func_548(Local_483[0 /*5*/], 1, 1116471296, 1126825984, 0, 0, 0, 0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
func_543(Local_483[0 /*5*/]);
iLocal_697[0]=7;
}else{
func_543(Local_483[0 /*5*/]);
func_547(Local_483[1 /*5*/]);
iLocal_697[0]=6;
}
func_529();
}}}


void func_569(){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Local_465, Local_466, 0, 1)){
func_354(6);
}}
if(func_570(Local_465, Local_466)){
func_354(6);
}}

int func_570(struct<3> Param0, struct<3> Param1){
if(func_28(PLAYER::PLAYER_PED_ID(), func_571(PLAYER::PLAYER_PED_ID()))){
if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param0, Param1, 0, 1, 2)){
return 1;
}}
return 0;
}

int func_571(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(func_5(iVar0)){
return iVar0;
}}
return 0;
}


void func_572(){
if(!bLocal_726 && !bLocal_727){
if(func_654(PLAYER::PLAYER_PED_ID())){
if(iLocal_692 !=11){
if(func_654(Local_482.f_0)){
if(func_548(Local_482.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)){
TASK::TASK_SMART_FLEE_PED(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
}
else{
TASK::TASK_COMBAT_PED(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
}
bLocal_726=true;
}}
if(func_654(Local_480.f_0)){
if(func_654(Local_481.f_0)){
if(func_548(Local_480.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0)){
bLocal_726=true;
}}}}
if(func_654(Local_480.f_0)){
if((func_520(Local_480.f_0, 10f, 10f, 1.5f) && iLocal_692 !=11) && !iLocal_714){
HUD::CLEAR_PRINTS();
iLocal_714=1;
}}
if(func_654(Local_480.f_0)){
if(func_654(Local_481.f_0)){
if((func_520(Local_480.f_0, 6f, 6f, 2.5f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -42.5662f, 301.8173f, 111.6957f, -37.569f, 313.1216f, 111.6957f, 5f, 0, 0, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -44.4977f, 296.7267f, 111.5461f, -23.9906f, 291.6258f, 111.5461f, 9.5f, 0, 0, 0)){
ENTITY::FREEZE_ENTITY_POSITION(Local_480.f_0, 0);
ENTITY::FREEZE_ENTITY_POSITION(Local_481.f_0, 0);
bLocal_726=true;
}
if(iLocal_283==0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -33.33354f, 324.2515f, 111.6747f, -36.29159f, 317.2282f, 115.4458f, 7.75f, 0, 0, 0)){
bLocal_726=true;
}}}}
if(bLocal_726 || bLocal_727){
func_234();
}}}


void func_573(){
int iVar0;
char* sVar1;
iVar0=12;
sVar1="PAP2_INACT";
if(iLocal_744==7){
sVar1="PAP2_INACT2";
iVar0=5;
}
if(!bLocal_712){
if(func_493(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) < IntToFloat(iVar0)){
if(!func_371()){
if(iLocal_744 > 3){
bLocal_712=func_370(&uLocal_489, cLocal_751, sVar1, 9, 0, 0, 0);
}else{
bLocal_712=true;
}}}}}


void func_574(){
if(iLocal_720){
if(func_324(10, Local_462, 0)){
if(func_324(2, Local_480.f_1, Local_480.f_4) && func_324(3, Local_481.f_1, Local_481.f_4)){
iLocal_720=0;
iLocal_275=1;
}}}}


void func_575(){
struct<6> Var0;
if(iLocal_357==1){
if(func_654(Local_483[0 /*5*/])){
Var0={
func_361() 
};
if(iLocal_259==0){
if(func_654(iLocal_475) && !iLocal_336){
if(func_653(Local_483[0 /*5*/], iLocal_475, 12f, 1) || func_653(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 12f, 1)){
iLocal_236=MISC::GET_GAME_TIMER();
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
iLocal_259=1;
}}}
if(iLocal_259==1){
if(MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF")){
if(AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
iLocal_259=2;
}}
if(!func_371()){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
iLocal_259=2;
}}
if(iLocal_259==2){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap2_Maid")){
if(!func_371() && MISC::GET_GAME_TIMER() > iLocal_236 + 5000){
TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_483[0 /*5*/], "Pap2_Maid", 0, 8, -1);
iLocal_259=3;
}}}}}}


void func_576(int iParam0){
bool bVar0;
int iVar1;
Global_63363=0;
if(!Global_63587[iParam0 /*13*/]==3){
return;
}
bVar0=false;
iVar1=0;
iVar1=0;
while (iVar1 < Global_75457){
if(Global_75458[iVar1 /*9*/]==iParam0){
bVar0=true;
Global_75458[iVar1 /*9*/].f_1=1;
Global_75458[iVar1 /*9*/].f_2=0f;
if(Global_75458[iVar1 /*9*/].f_3==2){
}}
iVar1++;
}
if(!bVar0){}}


void func_577(){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_355[5])){
if(func_654(uLocal_355[5])){
func_511(uLocal_355[5], &uLocal_408, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
if((PED::IS_PED_RAGDOLL(uLocal_355[5]) || func_548(uLocal_355[5], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(uLocal_355[5])){
bLocal_312=true;
bLocal_726=true;
}}else{
bLocal_312=true;
bLocal_726=true;
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_355[1])){
if(func_654(uLocal_355[1])){
func_511(uLocal_355[1], &uLocal_376, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
if((PED::IS_PED_RAGDOLL(uLocal_355[1]) || func_548(uLocal_355[1], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(uLocal_355[1])){
bLocal_312=true;
bLocal_726=true;
}}else{
bLocal_312=true;
bLocal_726=true;
}}
if(ENTITY::DOES_ENTITY_EXIST(uLocal_355[3])){
if(func_654(uLocal_355[3])){
func_511(uLocal_355[3], &uLocal_392, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
if((PED::IS_PED_RAGDOLL(uLocal_355[3]) || func_548(uLocal_355[3], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(uLocal_355[3])){
bLocal_312=true;
bLocal_726=true;
}}else{
bLocal_312=true;
bLocal_726=true;
}}}


void func_578(){
if(func_654(Local_483[1 /*5*/]) && func_654(Local_483[0 /*5*/])){
if(((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_busboy_01")) && STREAMING::HAS_MODEL_LOADED(joaat("s_f_m_maid_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_beach_02"))) && STREAMING::HAS_CLIP_SET_LOADED("move_f@sexy@a")){
AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_483[1 /*5*/], "PAPARAZZO_HECTOR", 0);
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO")){
AUDIO::START_AUDIO_SCENE("PAPARAZZO_02_INTRO");
}
uLocal_355[2]=PED::CREATE_PED(26, joaat("s_m_y_busboy_01"), 15.1052f, 336.1419f, 109.9186f, 237.5365f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[2], 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[2], 3, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[2], 4, 0, 0, 0);
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_355[2], "WORLD_HUMAN_SMOKING", 0, 0);
uLocal_355[3]=PED::CREATE_PED(26, joaat("s_f_m_maid_01"), 16.38105f, 314.906f, 110.9187f, -119.9283f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[3], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[3], 2, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[3], 3, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[3], 4, 0, 2, 0);
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_355[3], "WORLD_HUMAN_MAID_CLEAN", 0, 0);
uLocal_355[4]=PED::CREATE_PED(26, joaat("a_m_m_beach_02"), 20.0922f, 336.7069f, 114.3914f, 154.9176f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[4], 0, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[4], 3, 1, 4, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[4], 4, 0, 5, 0);
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_355[4], "WORLD_HUMAN_AA_COFFEE", 0, 0);
uLocal_355[5]=PED::CREATE_PED(26, joaat("a_m_m_beach_02"), -8.6062f, 337.2177f, 112.161f, 206.6986f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[5], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[5], 3, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(uLocal_355[5], 4, 0, 0, 0);
TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_355[5], "WORLD_HUMAN_DRINKING", 0, 0);
TASK::TASK_START_SCENARIO_AT_POSITION(Local_483[1 /*5*/], "WORLD_HUMAN_SEAT_STEPS", 16.984f, 336.9486f, 110.319f, 157.6965f, 0, 0, 1);
PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_483[1 /*5*/], 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_busboy_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_f_m_maid_01"));
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_beach_02"));
PED::SET_PED_MOVEMENT_CLIPSET(Local_483[0 /*5*/], "move_f@sexy@a", 1048576000);
iLocal_357=1;
}}}


void func_579(){
if(iLocal_358==0){
STREAMING::REQUEST_MODEL(joaat("s_m_y_busboy_01"));
STREAMING::REQUEST_MODEL(joaat("s_f_m_maid_01"));
STREAMING::REQUEST_MODEL(joaat("a_m_m_beach_02"));
STREAMING::REQUEST_CLIP_SET("move_f@sexy@a");
TASK::REQUEST_WAYPOINT_RECORDING("Pap2_Maid");
iLocal_358=1;
}}


void func_580(){
if(!func_495("PAP2_08", 0, 0) && !bLocal_272){
if(iLocal_265 < 4){
if(!func_371()){
if(MISC::GET_GAME_TIMER() > iLocal_264 + 10000){
if(func_493(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) < 30f){
if(func_370(&uLocal_489, cLocal_751, "PAP2_INACT2", 7, 0, 0, 0)){
iLocal_264=(MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
iLocal_265++;
}}}}}elseif(!func_371()){
if(MISC::GET_GAME_TIMER() > iLocal_264 + 10000){
if(func_370(&uLocal_489, cLocal_751, "PAP2_FAILCAM", 7, 0, 0, 0)){
}
func_354(4);
}}}}


void func_581(){
iLocal_243=2;
if(iLocal_275==1){
if(iLocal_243==1){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_220);
iLocal_243=2;
}}elseif(iLocal_243==0){
if(iLocal_290==0){
AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
func_13("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
iLocal_290=1;
}
if(AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0)==1){
func_256(1);
iLocal_243=1;
}}elseif(iLocal_243==2){
if(func_654(Local_480.f_0)){
if(bLocal_272==0){
func_256(0);
}}}}}

int func_582(){
int iVar0;
iVar0=0;
if(func_585()){
iVar0=0;
while (iVar0 < func_584()){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_583(iVar0), PLAYER::PLAYER_PED_ID(), 0)){
return 1;
}
iVar0++;
}}
return 0;
}


var func__583(int iParam0){
return Global_55613.f_37[iParam0];
}

int func_584(){
return Global_55613.f_36;
}


bool func_585(){
return Global_55613.f_36 > 0;
}

int func_586(){
int iVar0;
iVar0=0;
if(func_585()){
iVar0=0;
while (iVar0 < func_584()){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_583(iVar0), PLAYER::PLAYER_PED_ID(), 0)){
return 1;
}
iVar0++;
}}
return 0;
}


void func_587(){
int iVar0;
struct<3> Var1;
float fVar2;
func_523();
func_595();
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::THEFEED_HIDE_THIS_FRAME();
if(!func_594()){
return;
}
if(!iLocal_722){
if(func_248(1, bLocal_703)){
iLocal_722=1;
}}
if((CUTSCENE::WAS_CUTSCENE_SKIPPED() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()){
iLocal_306=1;
}
switch (iLocal_693){
case 0:
if(func_593(1, 0, 1)){
if(func_590(1, 1093140480, 0)){
if(!bLocal_359 || MISC::GET_GAME_TIMER() > iLocal_360 + 3000){
if(iLocal_704==0){
iLocal_475=Local_214.f_28[0];
Local_214.f_28[0]=0;
if(func_654(iLocal_475)){
PED::SET_PED_LEG_IK_MODE(iLocal_475, 2);
}
}
iLocal_301=0;
iLocal_302=0;
iLocal_304=0;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_475)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_475, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_475, "Beverley", 0, 0, 0);
}
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0])){
Local_214.f_41[0]=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 0f, 20f), 1, 1, 0);
}
if(ENTITY::IS_ENTITY_ATTACHED(Local_214.f_41[0])){
ENTITY::DETACH_ENTITY(Local_214.f_41[0], 1, 1);
}
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_214.f_41[0], "Beverlys_camera", 0, joaat("prop_pap_camera_01"), 0);
func_589();
CUTSCENE::START_CUTSCENE(0);
RECORDING::REPLAY_START_EVENT(1);
wait(0);
func_588();
CAM::STOP_GAMEPLAY_HINT(0);
if(func_5(iLocal_759)){
func_232(iLocal_759, -78.1013f, 298.9676f, 106.047f, -109.1187f, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_759, 1084227584);
}
iVar0=ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
if(VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)){
Var1={
-201.52f, 307.55f, 96.84f 
};
fVar2=261.18f;
}
elseif(iVar0==joaat("blimp") || iVar0==joaat("blimp2")){
Var1={
-211.02f, 474.41f, 133.36f 
};
fVar2=281.42f;
}
else{
Var1={
-88.6147f, 303.8292f, 105.9208f 
};
fVar2=245.3452f;
}
func_315(-10.66244f, 283.0703f, 110.2373f, -76.66436f, 301.1816f, 104.5858f, 6f, Var1, fVar2, 1, 1, 1, 0, 0);
func_315(-86.61621f, 297.2772f, 102.9432f, -55.1581f, 286.5398f, 109.6697f, 16.75f, Var1, fVar2, 1, 1, 1, 0, 0);
func_315(-55.96941f, 318.224f, 109.3944f, 14.16935f, 300.1608f, 117.9981f, 41.75f, Var1, fVar2, 1, 1, 1, 0, 0);
func_266(0f, 0f, 0f, 0f, 1, 1);
func_262(Local_215, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
MISC::CLEAR_AREA_OF_PEDS(-28.7403f, 303.3516f, 111.6961f, 40f, 0);
MISC::CLEAR_AREA_OF_PEDS(-17.3155f, 340.0973f, 110.4743f, 50f, 0);
MISC::CLEAR_AREA_OF_PEDS(12.2397f, 319.1199f, 109.8446f, 50f, 0);
MISC::CLEAR_AREA_OF_VEHICLES(-12.2142f, 280.2522f, 107.3232f, 20f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(-48.1975f, 352.4658f, 112.0536f, 5f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-55.96941f, 318.224f, 109.3944f, 14.16935f, 300.1608f, 117.9981f, 41.75f, 0, 0, 0, 0, 0, 0, 0);
if(CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_231(800, 0);
}
}
iLocal_693=1;
}}}
break;
case 1:
if(!ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0])){
if(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0))){
Local_214.f_41[0]=ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0));
func_13("BEVERLYS CAMERA - GOT HANDLE FROM CS");
}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_475)){
if(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverley", 0))){
iLocal_475=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverley", 0));
}}elseif(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverley", 0)){
if(ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0])){
ENTITY::DETACH_ENTITY(Local_214.f_41[0], 1, 1);
OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
}elseif(ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0))){
Local_214.f_41[0]=ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0));
ENTITY::DETACH_ENTITY(Local_214.f_41[0], 1, 1);
OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
iLocal_353=OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 0f, 20f), 1, 1, 0);
}
if(func_5(iLocal_475)){
if(func_5(iLocal_353)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, iLocal_475, PED::GET_PED_BONE_INDEX(iLocal_475, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
}
if(STREAMING::HAS_CLIP_SET_LOADED(sLocal_752)){
PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475, sLocal_752);
}
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_475, 0, 0);
TASK::TASK_LOOK_AT_ENTITY(iLocal_475, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_475, -60.9116f, 295.3501f, 105.0975f, 1f, 20000, 1048576000, 0, 1193033728);
iLocal_302=1;
}}
if(iLocal_301==0){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0)){
RECORDING::REPLAY_STOP_EVENT();
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(16.1556f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.6252f, 1065353216);
iLocal_301=1;
}}
if(iLocal_304==0){
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0)){
PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), 0, 1, 0);
PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -63.1068f, 294.9655f, 105.0442f, 1f, -1, 1f, 2113, 1193033728);
iLocal_304=1;
}}
if(((iLocal_301==1 && iLocal_302==1) && iLocal_304==1) && !CAM::IS_SCREEN_FADING_OUT()){
iLocal_693=2;
}
break;
case 2:
func_237(1, 1, 1, 1);
func_655(&Local_214, 0, 1);
iLocal_237=MISC::GET_GAME_TIMER();
if(iLocal_306==1){
}
func_338(0);
break;
case 3:
iLocal_693=2;
break;
}}


void func_588(){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 1);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98050[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(Global_98050[iVar0], 0)){
ENTITY::SET_ENTITY_PROOFS(Global_98050[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Global_98050[iVar0], 0);
}}
iVar0++;
}
if((Global_43257 !=0 && Global_43257 !=3) && Global_43257 !=2){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}


void func_589(){
int iVar0;
iVar0=func_229();
if(iVar0==-1){
return;
}
Global_112735[iVar0 /*10*/]=1;
}

int func_590(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(!func_358(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1, 0)){
iVar0=0;
}elseif(iParam2==1){
iVar0=0;
if(!func_592(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle"))){
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}}
if(ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
iVar0=0;
}}}
func_591();
if(func_371()){
func_234();
iVar0=0;
}
if(iVar0==0){
return 0;
}
if(iParam0==1){
if(!func_247()){
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
return 1;
}


void func_591(){
PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
}

int func_592(int iParam0, int iParam1){
if(func_654(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}

int func_593(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
if(MISC::IS_MINIGAME_IN_PROGRESS()){
return 0;
}
if(bParam0){
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}}
iVar0=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
return 0;
}
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(bParam0){
if(ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
return 0;
}}
if(bParam2){
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) !=PLAYER::PLAYER_PED_ID()){
return 0;
}}}
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f){
return 0;
}}}elseif(bParam1){
return 0;
}
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())){
return 0;
}
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())){
return 0;
}
return 1;
}

int func_594(){
if(!ENTITY::DOES_ENTITY_EXIST(Local_214.f_28[0])){
return 1;
}elseif(func_654(Local_214.f_28[0])){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_40)){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_40) >=0.21f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_40) <=0.91f){
return 1;
}}else{
return 1;
}}
func_591();
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.11025f, 302.9474f, 105.3344f, -77.48595f, 306.754f, 110.557f, 7f, 0, 1, 0) || func_653(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], 3f, 1)){
return 1;
}
return 0;
}


void func_595(){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
fVar0=35f;
fVar1=0.4f;
fVar2=0f;
fVar3=0.1f;
fVar4=0.02f;
if(((!func_663() && func_654(Local_214.f_28[0])) && func_654(PLAYER::PLAYER_PED_ID())) && bLocal_359==1){
if(!CAM::IS_GAMEPLAY_HINT_ACTIVE()){
TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], -1, 0, 2);
CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(1);
CAM::SET_GAMEPLAY_ENTITY_HINT(Local_214.f_28[0], 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fVar3);
CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fVar4);
iLocal_360=MISC::GET_GAME_TIMER();
func_597(1);
}else{
func_596(1, 0);
if(func_653(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], 3f, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.11025f, 302.9474f, 105.3344f, -77.48595f, 306.754f, 110.557f, 7f, 0, 1, 0)){
iLocal_360=(iLocal_360 - 5000);
}
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(1);
}}}


void func_596(bool bParam0, bool bParam1){
if(!bParam1){
PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
if(bParam0){
PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(bParam1){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
}else{
PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
}
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}}


void func_597(bool bParam0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1, 1, 0, 0, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
if(bParam0){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
}
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
}
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
}


void func_598(){
func_595();
switch (iLocal_693){
case 0:
func_606();
if(func_248(0, 0)){
func_605(0);
PED::SET_PED_NON_CREATION_AREA(Local_465, Local_466);
if(func_654(PLAYER::PLAYER_PED_ID())){
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
}
uLocal_367=PED::ADD_SCENARIO_BLOCKING_AREA(-66.2521f, 288f, 109f, -14.3327f, 334f, 114f, 0, 1, 1, 1);
uLocal_368=PED::ADD_SCENARIO_BLOCKING_AREA(Vector(105.1975f, 297.3521f, -67.5738f) - Vector(10f, 10f, 10f), Vector(105.1975f, 297.3521f, -67.5738f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
uLocal_370=PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.8813f, -391.7834f, 82.135f) - Vector(20f, 80f, 80f), Vector(39.8813f, -391.7834f, 82.135f) + Vector(20f, 80f, 80f), 0, 1, 1, 1);
if(func_663()){
if(ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0])){
if(!ENTITY::IS_ENTITY_DEAD(Local_214.f_41[0], 0)){
OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_353, 0)){
OBJECT::DELETE_OBJECT(&iLocal_353);
}}
iLocal_242=func_331();
if(Global_94858==1){
iLocal_242++;
}
switch (iLocal_242){
case 0:
func_266(0f, 0f, 0f, 0f, 1, 1);
MISC::CLEAR_AREA_OF_PEDS(-28.7403f, 303.3516f, 111.6961f, 40f, 0);
MISC::CLEAR_AREA_OF_PEDS(-17.3155f, 340.0973f, 110.4743f, 50f, 0);
MISC::CLEAR_AREA_OF_PEDS(12.2397f, 319.1199f, 109.8446f, 50f, 0);
MISC::CLEAR_AREA_OF_VEHICLES(-12.2142f, 280.2522f, 107.3232f, 20f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(-48.1975f, 352.4658f, 112.0536f, 5f, 0, 0, 0, 0, 0, 0, 0);
func_604(-72.5612f, 298.2493f, 105.2336f, 247.2199f, 1, 0);
func_599(2);
break;
case 1:
iLocal_375=1;
func_604(-33.681f, 320.9442f, 111.6958f, 182.6031f, 1, 0);
func_599(5);
break;
case 2:
iLocal_375=1;
func_604(-33.1227f, 318.9001f, 111.6958f, 154.1067f, 1, 0);
func_599(7);
break;
case 3:
iLocal_375=1;
func_604(-79.0609f, 296.3315f, 105.3698f, 69.2271f, 1, 0);
func_599(8);
break;
case 4:
iLocal_375=1;
func_604(-69.2061f, -523.7703f, 39.2051f, 163.9675f, 1, 0);
func_599(9);
break;
}}elseif(func_324(0, Local_462, 0)){
iLocal_693=2;
}}
break;
case 2:
func_338(0);
break;
}}


void func_599(int iParam0){
func_602(1, 1);
bLocal_703=true;
iLocal_692=iParam0;
if(iLocal_692==0){
iLocal_692=1;
}
iLocal_243=0;
iLocal_722=0;
iLocal_702=0;
iLocal_704=1;
iLocal_693=0;
iLocal_217=0;
func_600();
}


void func_600(){
func_509();
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
func_429();
if(func_28(PLAYER::PLAYER_PED_ID(), iLocal_759)){
if(VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_759)==4){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 1);
}
if(func_654(PLAYER::PLAYER_PED_ID())){
func_232(PLAYER::PLAYER_PED_ID(), Local_458, fLocal_468, 0, 1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_759)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_654, 0);
func_4(&iLocal_759);
}
if(func_654(iLocal_475)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_475);
}
func_7(&Local_480);
func_7(&Local_482);
func_7(&Local_481);
iLocal_734=0;
while (iLocal_734 <=1){
func_7(&(Local_483[iLocal_734 /*5*/]));
iLocal_734++;
}
if(iLocal_289==0){
iLocal_734=0;
while (iLocal_734 <=2){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_758[iLocal_734])){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[iLocal_734], 0);
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_758[iLocal_734])){
func_4(&(uLocal_758[iLocal_734]));
}}
iLocal_734++;
}}else{
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[iLocal_734], 0);
}
if(!MISC::IS_STRING_NULL(&Local_749)){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Local_749)){
TASK::REMOVE_WAYPOINT_RECORDING(&Local_749);
}}
if(!MISC::IS_STRING_NULL(&Local_750)){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Local_750)){
TASK::REMOVE_WAYPOINT_RECORDING(&Local_750);
}}
func_355(1);
func_355(0);
func_529();
HUD::CLEAR_PRINTS();
func_601(&uLocal_489, 0);
func_601(&uLocal_489, 1);
func_601(&uLocal_489, 2);
func_601(&uLocal_489, 3);
func_601(&uLocal_489, 4);
func_12(&iLocal_660);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
func_376(1, 1);
}


void func_601(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}


void func_602(bool bParam0, bool bParam1){
if(bParam0){
func_603(0, 1, 1);
}
if(!CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}
func_262(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}


void func_603(bool bParam0, int iParam1, int iParam2){
bool bVar0;
bVar0=true;
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
while (bVar0){
bVar0=CUTSCENE::IS_CUTSCENE_ACTIVE();
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
CUTSCENE::STOP_CUTSCENE(0);
}
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
CUTSCENE::REMOVE_CUTSCENE();
}
if(CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING()){
bVar0=false;
}
wait(0);
}
if(bParam0){
func_237(iParam1, iParam2, 1, 1);
}}}


void func_604(struct<3> Param0, float fParam1, int iParam2, int iParam3){
if(func_663()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}
Global_100677={
Param0 
};
Global_100680=fParam1;
Global_100676=1;
if(iParam2==1){
MISC::SET_BIT(&(Global_100681.f_20), 14);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 14);
}
if(iParam3==1){
MISC::SET_BIT(&(Global_100681.f_20), 24);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 24);
}
func_38(1);
}}


void func_605(bool bParam0){
MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", bParam0);
if(bParam0){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_MAX_WANTED_LEVEL(5);
}else{
PLAYER::SET_MAX_WANTED_LEVEL(1);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}


void func_606(){
func_616();
func_613();
func_612();
func_609();
func_607();
}


void func_607(){
Local_484[0 /*4*/]={
func_608(91798, "BUILDING_SITE_CRASH", 3) 
};
Local_484[1 /*4*/]={
func_608(92411, "BUILDING_SITE_CRASH", 0) 
};
}


struct<4> func_608(int iParam0, char* sParam1, int iParam2){
struct<4> Var0;
Var0.f_0=iParam0;
Var0.f_2=sParam1;
Var0.f_3=iParam2;
Var0.f_1=0;
return Var0;
}


void func_609(){
func_611();
func_610();
}


void func_610(){
}


void func_611(){
}


void func_612(){
Local_467[0 /*3*/]={
-70.2823f, 298.6007f, 105.2842f 
};
Local_467[1 /*3*/]={
-12.8842f, 283.1092f, 107.2567f 
};
Local_467[2 /*3*/]={
-9.737f, 286.8741f, 108.4575f 
};
Local_467[3 /*3*/]={
-2.8843f, 291.4941f, 109.9209f 
};
Local_467[4 /*3*/]={
5.6191f, 309.9637f, 109.9198f 
};
Local_467[5 /*3*/]={
-4.6429f, 318.5697f, 109.9198f 
};
Local_467[6 /*3*/]={
-34.2534f, 332.7881f, 112.1618f 
};
Local_467[7 /*3*/]={
-33.4322f, 319.0293f, 111.6957f 
};
}


void func_613(){
Local_480.f_1={
-30.5144f, 308.4476f, 111.6949f 
};
Local_480.f_4=50.6254f;
Local_481.f_1={
-31.584f, 306.8474f, 111.6949f 
};
Local_481.f_4=21.4212f;
Local_483[0 /*5*/].f_1={
1.1046f, 300.3212f, 109.919f 
};
Local_483[0 /*5*/].f_4=335.6462f;
Local_483[1 /*5*/].f_1={
16.984f, 336.9486f, 110.319f 
};
Local_483[1 /*5*/].f_4=157.6965f;
Local_482.f_1={
-46.9907f, 328.4976f, 111.6962f 
};
Local_482.f_4=303.7287f;
iLocal_659[0]=joaat("s_f_m_maid_01");
iLocal_697[0]=0;
iLocal_659[1]=joaat("s_m_y_busboy_01");
iLocal_697[1]=0;
func_614();
}


void func_614(){
Local_485[0 /*5*/]={
func_615(17.7501f, 339.8129f, 114.3926f, 157.8568f, 2) 
};
Local_485[1 /*5*/]={
func_615(21.1623f, 341.5796f, 114.3926f, 338.0048f, 1) 
};
Local_485[2 /*5*/]={
func_615(38.4316f, 340.2473f, 114.3926f, 66.9258f, 1) 
};
Local_485[3 /*5*/]={
func_615(11.1311f, 327.7826f, 109.9198f, 110.9247f, 1) 
};
Local_485[4 /*5*/]={
func_615(22.3298f, 305.797f, 109.9198f, 255.7478f, 2) 
};
Local_486[0 /*3*/]={
1.7382f, 301.8018f, 109.9198f 
};
Local_486[1 /*3*/]={
19.2729f, 326.7421f, 109.9198f 
};
Local_486[2 /*3*/]={
12.4255f, 323.3313f, 109.9188f 
};
}


struct<5> func_615(struct<3> Param0, float fParam1, int iParam2){
struct<5> Var0;
Var0={
Param0 
};
Var0.f_3=fParam1;
Var0.f_4=iParam2;
return Var0;
}


void func_616(){
iLocal_655[0]=joaat("rapidgt2");
iLocal_655[1]=joaat("landstalker");
iLocal_655[2]=joaat("landstalker");
Local_461[0 /*3*/]={
-61.5802f, 337.5996f, 111.1479f 
};
fLocal_470[0]=157.8698f;
Local_461[1 /*3*/]={
-62.3344f, 322.6908f, 109.2141f 
};
fLocal_470[1]=155.9353f;
Local_461[2 /*3*/]={
-68.0634f, 309.3348f, 107.2594f 
};
fLocal_470[2]=155.9353f;
}


void func_617(){
if(iLocal_692 < 10){
func_619();
func_618();
if(!bLocal_727){
if(func_548(iLocal_475, 1, 1116471296, 1126825984, 0, 0, 0, 0) || (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iLocal_692 < 5)){
func_529();
func_543(iLocal_475);
func_543(Local_483[0 /*5*/]);
func_543(Local_483[1 /*5*/]);
func_543(Local_480.f_0);
func_543(Local_481.f_0);
func_543(Local_482.f_0);
bLocal_727=true;
}}}}


void func_618(){
if(!bLocal_703){
switch (iLocal_692){
case 2:
if(func_654(iLocal_475)){
if(func_538(-46.2972f, 351.4437f, 112.5526f, 3f, 3f, 5f) || !func_653(iLocal_475, PLAYER::PLAYER_PED_ID(), 120f, 1)){
func_354(13);
}}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.9864f, 340.5381f, 111.0746f, -62.178f, 344.6878f, 114.3459f, 20f, 0, 1, 0)){
if(!iLocal_715){
HUD::CLEAR_PRINTS();
func_234();
func_499("PAP2_06", 7500, 0);
iLocal_715=1;
}}
case 3:
case 4:
case 6:
case 7:
if(iLocal_692 >=3){
if(!func_520(iLocal_475, 25f, 25f, 40f)){
if(iLocal_742 > 300){
if(iLocal_692==7){
}else{
func_354(17);
}
}
else{
iLocal_742++;
}
if(iLocal_692 !=7){
if(!iLocal_715){
func_499("PAP2_06", 7500, 0);
iLocal_715=1;
}
}}else{
iLocal_742=0;
}}
break;
}}}


void func_619(){
switch (iLocal_692){
case 2:
case 3:
case 4:
case 6:
case 7:
if(func_621(iLocal_475)){
if(ENTITY::IS_ENTITY_DEAD(iLocal_475, 0)){
func_354(1);
}else{
func_543(iLocal_475);
func_354(2);
}}
if(func_621(Local_480.f_0)){
if(ENTITY::IS_ENTITY_DEAD(Local_480.f_0, 0)){
func_354(8);
if(func_654(Local_481.f_0)){
func_543(Local_481.f_0);
}}else{
if(func_654(Local_480.f_0)){
func_543(Local_480.f_0);
}
if(func_654(Local_481.f_0)){
func_543(Local_481.f_0);
}
func_354(9);
}}
if(func_621(Local_481.f_0)){
if(ENTITY::IS_ENTITY_DEAD(Local_481.f_0, 0)){
func_354(10);
if(func_654(Local_481.f_0)){
func_543(Local_481.f_0);
}}}
if(func_620(iLocal_759)){
func_354(14);
}
if((func_620(uLocal_758[0]) || func_620(uLocal_758[1])) || func_620(uLocal_758[2])){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
func_354(15);
}
iLocal_734=0;
while (iLocal_734 <=1){
if(func_621(Local_483[iLocal_734 /*5*/])){
func_354(7);
func_543(Local_483[0 /*5*/]);
func_543(Local_483[1 /*5*/]);
break;
}
iLocal_734++;
}
break;
case 8:
if(func_621(Local_480.f_0)){
if(ENTITY::IS_ENTITY_DEAD(Local_480.f_0, 0)){
func_354(8);
}else{
func_354(9);
}}
if(func_621(Local_481.f_0)){
if(ENTITY::IS_ENTITY_DEAD(Local_481.f_0, 0)){
func_354(10);
}}
break;
}}

int func_620(int iParam0){
if(!bLocal_703){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 1;
}}}
return 0;
}

int func_621(int iParam0){
if(!bLocal_703){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}}}
return 0;
}


void func_622(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
float fVar0;
int iVar1;
int iVar2;
int iVar3;
struct<2> Var4;
float fVar5;
float fVar6;
int iVar7;
int iVar8;
int iVar9;
var uVar10;
int iVar11;
if(Global_78813 !=6){
if(Global_78815==-1){
if(func_633(1, Param0)){
if(Global_78816==3){
fVar0=1.5f;
}else{
fVar0=2.5f;
}
if(fLocal_21 > fVar0){
Global_78815=MISC::GET_GAME_TIMER();
Local_22={
HUD::GET_HUD_COMPONENT_POSITION(15) 
};
fLocal_21=0f;
}else{
fLocal_21=(fLocal_21 + MISC::GET_FRAME_TIME());
}}else{
fLocal_21=0f;
}}else{
if(!func_633(0, Param0)){
Global_78815=(MISC::GET_GAME_TIMER() - 9000);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
iVar1=(MISC::GET_GAME_TIMER() - Global_78815);
if(iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT()){
iVar2=255;
if(iVar1 < 1000){
iVar2=ceil(((to_float(iVar1) / 1000f) * 255f));
}else{
iVar3=(9000 - iVar1);
if(iVar3 < 1000){
iVar2=ceil(((to_float(iVar3) / 1000f) * 255f));
}}
switch (Global_78813){
case 3:
case 5:
if(iParam1==1){
fVar5=0f;
fVar6=-0.07f;
}
elseif(iParam2==1){
fVar5=0f;
fVar6=-0.077f;
}
elseif(iParam3==1){
fVar5=0f;
fVar6=-0.05f;
}
elseif(iParam4==1){
fVar5=0f;
fVar6=-0.035f;
}
else{
fVar5=0f;
fVar6=-0.014f;
}
break;
default:
fVar5=0f;
fVar6=-0.014f;
break;
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
HUD::SET_TEXT_FONT(1);
HUD::SET_TEXT_JUSTIFICATION(2);
iVar11=func_264();
if(Global_78816==1 && Global_78814==62){
iVar11=Global_113648.f_2365.f_539.f_4322;
}
switch (iVar11){
case 0:
HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
break;
case 1:
HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
break;
case 2:
HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
break;
default:
iVar7=240;
iVar8=200;
iVar9=80;
}
HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
HUD::SET_TEXT_DROP_SHADOW();
Var4={
func_624(Global_78814, Global_78816, iParam5) 
};
if(fVar6==-0.014f){
}
GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
HUD::SET_TEXT_SCALE(0.67f, 0.67f);
if(!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF()){
fLocal_24=0.14f;
}else{
fLocal_24=0.17f;
}
if(fVar6==-0.014f){
if(func_623(&Var4) > fLocal_24){
if(HUD::IS_HUD_COMPONENT_ACTIVE(15)){
HUD::SET_HUD_COMPONENT_POSITION(15, Local_22.f_0, (Local_22.f_1 + fLocal_23));
Global_78818=1;
}}}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(Global_78817==1){
func_198();
fLocal_21=0f;
}}else{
func_198();
fLocal_21=0f;
}}}}


float func_623(var uParam0){
HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(uParam0);
return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(1);
}


struct<2> func_624(int iParam0, int iParam1, int iParam2){
struct<2> Var0;
int iVar1;
StringCopy(&Var0, "", 8);
switch (iParam1){
case 1:
Var0={
func_632(iParam0) 
};
break;
case 7:
Var0={
func_182(iParam0) 
};
break;
case 3:
iVar1=iParam0;
switch (iVar1){
case 0:
Var0={
func_631(iParam2) 
};
break;
case 8:
Var0={
func_630(iParam2) 
};
break;
case 7:
Var0={
func_629(iParam2) 
};
break;
case 10:
Var0={
func_628(iParam2) 
};
break;
case 5:
Var0={
func_627(iParam2) 
};
break;
case 4:
Var0={
func_626(iParam2) 
};
break;
default:
StringCopy(&Var0, func_625(iVar1), 8);
break;
}
break;
default:
break;
}
return Var0;
}


char* func_625(int iParam0){
switch (iParam0){
case 0:
return "MG_BJUM";
break;
case 1:
return "MG_DART";
break;
case 2:
return "MG_GOLF";
break;
case 3:
return "MG_HUNT";
break;
case 4:
return "MG_OFFR";
break;
case 5:
return "MG_PILO";
break;
case 6:
return "MG_RMPG";
break;
case 7:
return "MG_SERA";
break;
case 8:
return "MG_SRAC";
break;
case 9:
return "MG_STRP";
break;
case 10:
return "MG_STNT";
break;
case 11:
return "MG_SHTR";
break;
case 12:
return "MG_TAXI";
break;
case 13:
return "MG_TENN";
break;
case 14:
return "MG_TOWI";
break;
case 15:
return "MG_TRFA";
break;
case 16:
return "MG_TRFG";
break;
case 17:
return "MG_TRIA";
break;
case 18:
return "MG_YOGA";
break;
case 19:
return "MG_CRCE";
break;
}
return "INVALID!";
}


struct<2> func_626(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGOR_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_627(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGFS_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_628(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGSP_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_629(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGSR_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_630(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0==3){}else{
StringCopy(&Var0, "MGCR_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_631(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
IntToString(&cVar1, iParam0, 8);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "MGBJ_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_632(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "M_", 8);
StringConCat(&Var0, &(Global_91469[iParam0 /*34*/].f_8), 8);
if(iParam0==90){
switch (Global_113648.f_9087.f_99.f_205[7]){
case 1:
StringConCat(&Var0, "A", 8);
break;
case 2:
StringConCat(&Var0, "B", 8);
break;
default:
StringConCat(&Var0, "A", 8);
break;
}}
return Var0;
}

int func_633(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
if(((!func_636(0) || Global_78828) || Global_78817==1) || !CAM::IS_SCREEN_FADED_IN()){
return 0;
}
switch (Global_78813){
case 0:
if(MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1)){
Global_78813=3;
}else{
Global_78813=1;
}
break;
case 1:
if(CUTSCENE::HAS_CUTSCENE_LOADED()){
Global_78813=2;
}
break;
case 2:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
Global_78813=4;
return 1;
}elseif(!CUTSCENE::IS_CUTSCENE_ACTIVE()){
Global_78813=3;
}
break;
case 3:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
}else{
Global_78813=5;
return 1;
}
break;
case 4:
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 1;
}elseif(iParam0==1){
Global_78813=5;
}
break;
case 5:
if((CUTSCENE::IS_CUTSCENE_PLAYING() || func_635(0)) || func_634(1)){
}else{
return 1;
}
break;
}
return 0;
}


bool func_634(bool bParam0){
if(bParam0){
return (Global_23131.f_4 && Global_23131.f_104==4);
}
return Global_23131.f_4;
}

int func_635(int iParam0){
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

int func_636(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_637(iParam0)){
return 0;
}
return 1;
}


bool func_637(int iParam0){
return func_638(iParam0, Global_43257);
}

int func_638(int iParam0, int iParam1){
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


void func_639(int iParam0){
if(func_643()){
return;
}
if(!Global_20383.f_1==1){
if(func_635(0)){
func_640(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_640(int iParam0){
if(func_643()){
return;
}
if(Global_20584){
if(func_642()){
func_641(1, 1);
}else{
func_641(0, 0);
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
if(!func_245()){
Global_20383.f_1=3;
}}


void func_641(bool bParam0, bool bParam1){
if(bParam0){
if(func_635(0)){
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


bool func_642(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_643(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_644(){
if(!iLocal_307){
iLocal_456=func_287();
iLocal_457=func_645(iLocal_456);
if(iLocal_457 > 22 || iLocal_457 < 5){
MISC::CLEAR_WEATHER_TYPE_PERSIST();
MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10f);
iLocal_307=1;
}}}

int func_645(int iParam0){
return shift_right(iParam0, 9) & 31;
}


void func_646(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8939=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_350();
if(iParam1==4){
func_652(iParam0, 0, 1);
func_652(iParam0, 1, 1);
func_652(iParam0, 2, 1);
func_651(iParam0, 0, 1);
func_651(iParam0, 1, 1);
func_651(iParam0, 2, 1);
}else{
if(func_650(iParam0, iParam1)==1 && func_649(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_652(iParam0, iVar0, 1);
func_651(iParam0, iVar0, 1);
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
func_648(iParam0) 
};
Global_8929[iParam1]=1;
Global_8934[iParam1]=iParam0;
}elseif(iParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
func_648(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_647();
}}else{
Global_8863[1 /*6*/]={
func_648(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_647();
}}else{
Global_8863[1 /*6*/]={
func_648(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_647();
}}}}


void func_647(){
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
MISC::CLEAR_BIT(&Global_8253, 0);
}


struct<4> func_648(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}

int func_649(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_650(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_12[iParam1];
}


void func_651(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_652(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}


bool func_653(int iParam0, int iParam1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <=(fParam2 * fParam2);
}

int func_654(int iParam0){
if(func_5(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}


void func_655(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(func_5(uParam0->f_28[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(func_5(uParam0->f_35[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 6){
if(func_5(uParam0->f_41[iVar0])){
ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
}
iVar0++;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), iParam1);
if(bParam2){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
}}}

int func_656(var uParam0){
int iVar0[3];
int iVar1;
bool bVar2;
iVar0[0]=uLocal_38;
iVar0[1]=joaat("fq2");
iVar0[2]=joaat("prop_pap_camera_01");
switch (iLocal_37){
case 0:
uParam0->f_16=5;
uParam0->f_17[0 /*3*/]={
-82.64143f, 302.7307f, 104.6349f 
};
uParam0->f_17[1 /*3*/]={
-68.78405f, 296.6317f, 107.8958f 
};
uParam0->f_24=11f;
uParam0->f_27=0;
uParam0->f_26=1;
uParam0->f_25=1;
StringCopy(&(uParam0->f_9), "PAP_2_RCM_P2", 24);
iVar1=0;
while (iVar1 <=(iVar0 - 1)){
STREAMING::REQUEST_MODEL(iVar0[iVar1]);
iVar1++;
}
STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
iLocal_37=1;
break;
case 1:
if(!func_662(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2")){
return 0;
}
iLocal_37=2;
break;
case 2:
bVar2=true;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0])){
if(func_659(&(uParam0->f_28[0]), 50, -71.283f, 301.557f, 106.711f, 4.659f, "PAPARAZZO LAUNCHER RC", 1)){
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
}else{
bVar2=false;
}}
if(func_654(uParam0->f_28[0])){
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0])){
func_658(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
if(func_5(uParam0->f_41[0])){
ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
}else{
bVar2=false;
}}else{
bVar2=false;
}}
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0])){
func_657(&(uParam0->f_35[0]), iVar0[1], -78.0873f, 299.0679f, 105.3972f, 249.8696f);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 7);
VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], 0);
VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], 0);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "P4P4R4Z0");
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
}
if(bVar2){
iLocal_37=3;
}
break;
case 3:
if(func_5(uParam0->f_28[0]) && func_5(PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
uLocal_40=PED::CREATE_SYNCHRONIZED_SCENE(-71.283f, 301.557f, 106.711f, 0f, 0f, 4.659f, 2);
PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_40, 1);
TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uLocal_40, "rcmpaparazzo_2", "pap_2_rcm_base", 2f, -4f, 1, 0, 1148846080, 0);
PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, 1);
}
STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", false);
MISC::CLEAR_AREA_OF_PEDS(-70.12f, 298.33f, 105.25f, 30f, 0);
iVar1=0;
while (iVar1 <=(iVar0 - 1)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
iVar1++;
}
return 1;
break;
}
return 0;
}


void func_657(int iParam0, int iParam1, struct<3> Param2, float fParam3){
func_4(iParam0);
*iParam0=VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam3, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(*iParam0)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000, 0);
}}


void func_658(var uParam0, int iParam1, struct<3> Param2, float fParam3){
func_3(uParam0);
*uParam0=OBJECT::CREATE_OBJECT(uParam1, Param2, 1, 1, 0);
ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
}

int func_659(var uParam0, int iParam1, struct<3> Param2, float fParam3, char* sParam4, int iParam5){
if(func_660(uParam0, iParam1, Param2, fParam3, 1)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
PED::SET_PED_MONEY(*uParam0, 0);
if(iParam5==1){
PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
}}
PED::SET_PED_NAME_DEBUG(*uParam0, sParam4);
}
return 1;
}
return 0;
}

int func_660(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4){
int iVar0;
if(!func_178(iParam1)){
iVar0=func_694(iParam1);
STREAMING::REQUEST_MODEL(iVar0);
if(STREAMING::HAS_MODEL_LOADED(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
PED::DELETE_PED(uParam0);
}
*iParam0=PED::CREATE_PED(26, iVar0, Param2, uParam3, 0, 0);
PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
if(iVar0==joaat("ig_lamardavis")){
if(PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3)==0){
PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
}}
func_661(*iParam0, iParam1);
if(bParam4){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}
return 1;
}}
return 0;
}

int func_661(var uParam0, int iParam1){
int iVar0;
iVar0=7;
if(iParam1==19){
iVar0=3;
}elseif(iParam1==14){
iVar0=4;
}elseif(iParam1==17){
iVar0=5;
}else{
iVar0=7;
return 0;
}
Global_96515[(iVar0 - 3)]=uParam0;
return 1;
}

int func_662(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(*iParam0 - 1)){
if(!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}

int func_663(){
if(Global_100681==10 || Global_100681==9){
return 1;
}
return 0;
}


void func_664(){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_220)){
AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_220);
}
PED::CLEAR_PED_NON_CREATION_AREA();
AUDIO::TRIGGER_MUSIC_EVENT("PAP2_FAIL");
func_589();
func_509();
MISC::SET_INSTANCE_PRIORITY_HINT(0);
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
if(func_654(PLAYER::PLAYER_PED_ID())){
PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
}
if(iLocal_349==1){
STREAMING::STREAMVOL_DELETE(uLocal_348);
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE")){
AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_CHASE");
}
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO")){
AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_INTRO");
}
AUDIO::SET_AMBIENT_ZONE_STATE("AZ_PAPARAZZO_02_AMBIENCE", 0, 1);
PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_369, 0);
TASK::REMOVE_COVER_POINT(uLocal_471);
func_690(0);
if(func_673()){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_475)){
if(func_654(iLocal_475)){
if(!PED::IS_PED_IN_ANY_VEHICLE(iLocal_475, 0)){
TASK::TASK_WANDER_STANDARD(iLocal_475, 1193033728, 0);
}
PED::SET_PED_KEEP_TASK(iLocal_475, 1);
}
func_374(&iLocal_475, 1, 0, 1);
}
func_672();
CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_ss1_14_garage_door"), -62.22f, 352.75f, 113.01f, 0, 0, 0, 0);
AUDIO::STOP_SOUND(iLocal_371);
PAD::ENABLE_CONTROL_ACTION(0, 44, 1);
func_3(&iLocal_352);
func_486(&uLocal_354, 0);
if(ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0])){
if(!ENTITY::IS_ENTITY_DEAD(Local_214.f_41[0], 0)){
OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_353)){
if(!ENTITY::IS_ENTITY_DEAD(iLocal_353, 0)){
OBJECT::DELETE_OBJECT(&iLocal_353);
}}
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_370, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_367, 0);
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_368, 0);
MISC::CLEAR_WEATHER_TYPE_PERSIST();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_759)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_654, 0);
func_373(&iLocal_759);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_481.f_0)){
func_374(&Local_481, 1, 0, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_480.f_0)){
func_374(&Local_480, 1, 0, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_482.f_0)){
func_374(&Local_482, 1, 0, 1);
}
iLocal_734=0;
while (iLocal_734 <=1){
if(ENTITY::DOES_ENTITY_EXIST(Local_483[iLocal_734 /*5*/])){
func_374(&(Local_483[iLocal_734 /*5*/]), 1, 0, 1);
}
iLocal_734++;
}
if(func_6(uLocal_758[0])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[0], 1);
}
iLocal_734=0;
while (iLocal_734 <=2){
if(ENTITY::DOES_ENTITY_EXIST(uLocal_758[iLocal_734])){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[iLocal_734], 0);
if(func_6(uLocal_758[iLocal_734])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[iLocal_734], 1);
}}
iLocal_734++;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_669)){
func_486(&iLocal_669, 0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_670)){
func_486(&iLocal_670, 0);
}
PED::REMOVE_RELATIONSHIP_GROUP(uLocal_691);
MISC::ENABLE_DISPATCH_SERVICE(1, true);
MISC::ENABLE_DISPATCH_SERVICE(2, true);
MISC::ENABLE_DISPATCH_SERVICE(3, true);
MISC::ENABLE_DISPATCH_SERVICE(4, true);
MISC::ENABLE_DISPATCH_SERVICE(5, true);
PED::CLEAR_PED_NON_CREATION_AREA();
func_605(1);
func_600();
AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
}else{
func_665(&Local_214, 1, 0, 0);
}}


void func_665(var uParam0, int iParam1, bool bParam2, bool bParam3){
func_670(uParam0, iParam1);
func_668(uParam0, bParam2);
func_666(uParam0, bParam3);
}


void func_666(var uParam0, bool bParam1){
func_667(&(uParam0->f_41), bParam1);
}


void func_667(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_3(uParam0[iVar0]);
}else{
func_486(uParam0[iVar0], 0);
}
iVar0++;
}}


void func_668(var uParam0, bool bParam1){
func_669(&(uParam0->f_35), bParam1);
}


void func_669(var uParam0, bool bParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(bParam1){
func_4(uParam0[iVar0]);
}else{
func_373(uParam0[iVar0]);
}
iVar0++;
}}


void func_670(var uParam0, int iParam1){
func_671(&(uParam0->f_28), iParam1);
}


void func_671(var uParam0, int iParam1){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(iParam1==1){
func_7(uParam0[iVar0]);
}else{
func_374(uParam0[iVar0], 0, 1, 0);
}
iVar0++;
}}


void func_672(){
func_7(&(iLocal_363[0]));
func_7(&(iLocal_363[1]));
func_7(&(iLocal_363[2]));
func_7(&(iLocal_363[3]));
func_7(&(iLocal_363[4]));
func_7(&(iLocal_363[5]));
func_7(&(iLocal_363[6]));
func_7(&(iLocal_363[7]));
func_4(&(iLocal_362[0]));
func_4(&(iLocal_362[1]));
func_4(&(iLocal_362[2]));
func_4(&(iLocal_362[3]));
func_4(&(iLocal_362[4]));
func_4(&(iLocal_362[5]));
func_4(&(iLocal_362[6]));
func_4(&(iLocal_362[7]));
}

int func_673(){
int iVar0;
iVar0=func_229();
if(iVar0==-1){
return 0;
}
if(!Global_112735[iVar0 /*10*/].f_4){
return 0;
}
Global_112735[iVar0 /*10*/].f_4=0;
HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
if(!func_689(0)){
if(Global_112735[iVar0 /*10*/].f_5 && Global_112735[iVar0 /*10*/].f_6){
Global_112735[iVar0 /*10*/].f_6=0;
}
if(!Global_112735[iVar0 /*10*/].f_6 && !Global_112735[iVar0 /*10*/].f_5){
Global_112735[iVar0 /*10*/].f_6=1;
}}
return 1;
}


void func_674(bool bParam0){
int iVar0;
func_687();
if(!func_686()){
iVar0=func_229();
if(iVar0==-1){
return;
}
if(!Global_112735[iVar0 /*10*/].f_4){
return;
}
if(Global_112735[iVar0 /*10*/].f_5){
return;
}
if(Global_112735[iVar0 /*10*/].f_6){
return;
}
if(Global_94856==Global_100718){
Global_113648.f_18576[iVar0 /*6*/].f_4++;
}
Global_94856=Global_100718;
if(bParam0){
func_186(iVar0, 1, 0);
func_675(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
}else{
if(Global_112735[iVar0 /*10*/].f_9==-1){
}else{
func_199(&(Global_112735[iVar0 /*10*/].f_9));
}
func_185(iVar0, 1, 1, 0);
}
Global_112735[iVar0 /*10*/].f_6=1;
}}


void func_675(char* sParam0, int iParam1){
if(Global_100681 !=12){
if(func_676(sParam0, 6, iParam1)){
Global_100681.f_1=iParam1;
}}}

int func_676(char* sParam0, int iParam1, int iParam2){
var uVar0;
struct<32> Var1;
int iVar2;
func_42();
func_685();
Global_100681=0;
StringCopy(&(Global_100681.f_3), sParam0, 32);
Global_100681.f_11=iParam1;
MISC::PAUSE_DEATH_ARREST_RESTART(1);
MISC::SET_FADE_OUT_AFTER_ARREST(0);
MISC::SET_FADE_OUT_AFTER_DEATH(0);
func_640(1);
func_683(1);
func_682(0);
func_681(1);
MISC::CLEAR_BIT(&(Global_100681.f_20), 9);
MISC::CLEAR_BIT(&(Global_100681.f_20), 6);
MISC::CLEAR_BIT(&(Global_100681.f_20), 20);
MISC::CLEAR_BIT(&(Global_100681.f_20), 21);
MISC::CLEAR_BIT(&(Global_100681.f_20), 5);
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0)){
MISC::SET_BIT(&(Global_100681.f_20), 5);
}}}}
HUD::CLEAR_HELP(1);
HUD::CLEAR_PRINTS();
func_680(0);
func_45(1);
Global_100681.f_2=Global_100718;
if(func_679()){
if(func_678()){
if(Global_100718 >=func_677()){
if(!MISC::IS_BIT_SET(Global_91469[iParam2 /*34*/].f_15, 16)){
if(Global_113648.f_9087.f_330[iParam2 /*6*/].f_1 >=2){
Global_94857=1;
}}}}elseif(Global_100681.f_11==6){
func_188(iParam2, &Var1);
if(Var1.f_31==1){
if(Global_113648.f_18576[iParam2 /*6*/].f_4 >=2){
Global_94857=1;
}}}else{
iVar2=func_479(SCRIPT::GET_THIS_SCRIPT_NAME());
if(iVar2 > -1){
if(Global_113648.f_24988.f_4[iVar2] >=2){
Global_94857=1;
}}}}
return 1;
}

int func_677(){
int iVar0;
int iVar1;
iVar0=func_482(&(Global_100681.f_3), 0);
iVar1=0;
if(iVar0==53){
iVar1=1;
}
return iVar1;
}

int func_678(){
if((((Global_100681.f_11==0 || Global_100681.f_11==1) || Global_100681.f_11==2) || Global_100681.f_11==3) || Global_100681.f_11==4){
return 1;
}
return 0;
}

int func_679(){
if((((Global_100681.f_11==0 || Global_100681.f_11==1) || Global_100681.f_11==2) || Global_100681.f_11==6) || Global_100681.f_11==3){
return 1;
}
if(Global_100681.f_11==5){
if(func_479(&(Global_100681.f_3)) > -1){
return 1;
}}
return 0;
}


void func_680(int iParam0){
HUD::DISPLAY_HUD(iParam0);
HUD::DISPLAY_RADAR(iParam0);
}


void func_681(int iParam0){
if(iParam0==1){
HUD::THEFEED_PAUSE();
MISC::SET_BIT(&(Global_100681.f_20), 3);
}elseif(MISC::IS_BIT_SET(Global_100681.f_20, 3)){
HUD::THEFEED_RESUME();
MISC::CLEAR_BIT(&(Global_100681.f_20), 3);
}}


void func_682(int iParam0){
if(iParam0==1){
if(MISC::IS_BIT_SET(Global_100681.f_20, 4)){
func_509();
MISC::CLEAR_BIT(&(Global_100681.f_20), 4);
}}else{
func_485();
MISC::SET_BIT(&(Global_100681.f_20), 4);
}}


void func_683(bool bParam0){
if(bParam0){
func_684();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_635(0)){
func_640(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_684(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_685(){
Global_94857=0;
Global_94858=0;
}

int func_686(){
if(((Global_100681==13 || Global_100681==10) || Global_100681==11) || Global_100681==12){
return 0;
}
return 1;
}


void func_687(){
Global_100716=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_264()){
case 0:
StringCopy(&Global_78791, "CMN_MARRE", 16);
break;
case 1:
StringCopy(&Global_78791, "CMN_FARRE", 16);
break;
case 2:
StringCopy(&Global_78791, "CMN_TARRE", 16);
break;
}
StringCopy(&Global_78795, "", 16);
}
Global_100716=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_264()){
case 0:
StringCopy(&Global_78791, "CMN_MDIED", 16);
break;
case 1:
StringCopy(&Global_78791, "CMN_FDIED", 16);
break;
case 2:
StringCopy(&Global_78791, "CMN_TDIED", 16);
break;
}
StringCopy(&Global_78795, "", 16);
}
Global_100716=0;
MISC::SET_BIT(&(Global_100681.f_20), 25);
}}


void func_688(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){}}

int func_689(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_690(bool bParam0){
if(bParam0){
StringCopy(&Global_112704, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
Global_112698=1;
}else{
StringCopy(&Global_112704, "NULL", 24);
Global_112698=0;
}}


var func__691(){
return PED::ADD_SCENARIO_BLOCKING_AREA(-74.8392f, 300.5241f, 104f, -62.467f, 318.6961f, 109f, 0, 1, 1, 1);
}


void func_692(var uParam0){
func_693(&(uParam0->f_28));
func_693(&(uParam0->f_35));
func_693(&(uParam0->f_41));
}


void func_693(var uParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 <=(*uParam0 - 1)){
if(ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 0, 1);
}
iVar0++;
}}

int func_694(int iParam0){
if(!func_178(iParam0)){
return func_177(iParam0);
}elseif(iParam0 !=145){}
return 0;
}