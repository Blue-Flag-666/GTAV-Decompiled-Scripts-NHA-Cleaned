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
int iLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
float fLocal_30=0f;
float fLocal_31=0f;
float fLocal_32=0f;
var uLocal_33=0;
var uLocal_34=0;
int iLocal_35=0;
var uLocal_36=0;
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
int iLocal_65=0;
bool bLocal_66=0;
float fLocal_67=0f;
float fLocal_68=0f;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
var uLocal_74=0;
int iLocal_75=0;
var uLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
var uLocal_82[1]={
0 
};
char cLocal_83[16]="";
var uLocal_84=0;
var uLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
int iLocal_89=0;
bool bLocal_90=0;
int iLocal_91=0;
int iLocal_92=0;
bool bLocal_93=0;
int iLocal_94=0;
float fLocal_95=0f;
float fLocal_96=0f;
float fLocal_97=0f;
float fLocal_98=0f;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
int iLocal_105=0;
int iLocal_106=0;
char cLocal_107[16]="";
var uLocal_108=0;
var uLocal_109=0;
var uLocal_110=16;
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
int iLocal_275=0;
int iLocal_276=0;
int iLocal_277=0;
int iLocal_278=0;
char cLocal_279[16]="";
var uLocal_280=0;
var uLocal_281=0;
struct<3> Local_282={
0, 0, 0 
};
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286[7]={
0, 0, 0, 0, 0, 0, 0 
};
var uLocal_287=0;
bool bLocal_288=0;
bool bLocal_289=0;
int iLocal_290=0;
int iLocal_291=0;
int iLocal_292=0;
struct<3000> Local_293={
32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<3> Local_294={
0, 0, 0 
};
char cLocal_295[64]="";
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
int iLocal_304=0;
int iLocal_305=0;
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
iLocal_35=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_62=((0.05f + 0.275f) - 0.01f);
iLocal_71=9999;
iLocal_72=9999;
fLocal_95=0.82f;
fLocal_96=0.42f;
fLocal_97=0f;
fLocal_98=0f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
MISC::SET_BIT(&Global_8253, 17);
MISC::CLEAR_BIT(&Global_8254, 18);
MISC::CLEAR_BIT(&Global_8254, 20);
iLocal_275=func_318(12);
iLocal_276=func_318(2);
iLocal_277=func_318(0);
iLocal_79=AUDIO::GET_SOUND_ID();
if(Global_78558){
func_308();
}else{
func_296();
}
if(!Global_20383.f_1==10){
if(Global_20383.f_1 > 3){
if(Global_20383.f_1 !=9){
Global_20383.f_1=7;
}}}
iLocal_104=MISC::GET_GAME_TIMER();
func_295(147, 1320);
func_295(74, 180);
func_295(75, 190);
while (true){
wait(0);
if(MISC::IS_BIT_SET(Global_8254, 18)){
func_294();
if(Global_20383.f_1 > 3){
Global_20383.f_1=8;
}
MISC::CLEAR_BIT(&Global_8254, 18);
func_293();
}
if((iLocal_89==1 && Global_20383.f_1==10) && Local_293.f_2999==1){
func_190();
}
if(Global_20383.f_1 !=9){
switch (Global_20383.f_1){
case 7:
if(MISC::IS_BIT_SET(Global_8253, 16)){
func_189();
}else{
func_186();
if(MISC::IS_BIT_SET(Global_8254, 0)){
iLocal_105=MISC::GET_GAME_TIMER();
if((iLocal_105 - iLocal_104) > 1000){
if(iLocal_106){
func_185();
}else{
func_165();
}}
if(iLocal_106){
func_164();
}
}
else{
func_165();
}}
if(!MISC::IS_BIT_SET(Global_8253, 9)){
if(func_163(2, Global_20355, 0)){
if(MISC::IS_BIT_SET(Global_8254, 0)){
}elseif(Global_20326==0){
if(!MISC::IS_BIT_SET(Global_8254, 19)){
func_161();
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
iLocal_81=0;
StringCopy(&cLocal_83, "", 16);
func_159();
Global_20363=0;
iLocal_89=0;
func_160(Global_20364, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
func_158(Global_20364, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}
else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20383.f_1 > 3){
Global_20383.f_1=8;
}}}
}}
break;
case 8:
if(iLocal_89==1){
func_186();
func_190();
}elseif(iLocal_87==0){
func_147();
func_136();
}else{
if(timera() > 1500){
iLocal_291=0;
while (iLocal_291 < 4){
if(MISC::ARE_STRINGS_EQUAL(&(Global_2028[Global_7568 /*29*/].f_3), &(Global_8091[iLocal_291 /*16*/]))){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_8091[iLocal_291 /*16*/].f_8), "CELL_SFUN_NULL")){
bLocal_288=true;
iLocal_290=iLocal_291;
}
else{
bLocal_288=false;
}}
iLocal_291++;
}
if(iLocal_88==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
iLocal_75=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
func_134();
}
}
func_186();
if(bLocal_289==1){
if(!Global_113648.f_18105.f_396){
if(!func_130(Global_20383, Global_7568)){
Global_113648.f_18105.f_396=1;
}}
}
if(func_130(Global_20383, Global_7568)){
if(!Global_113648.f_18105.f_397){
if(bLocal_288==1){
if(func_129(Global_96528)){
switch (func_127("AM_H_BBUDDY")){
case 2:
func_125("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
break;
case 1:
Global_113648.f_18105.f_397=1;
break;
}
if(func_127("AM_H_BBUDDY1")==0){
func_120("AM_H_BBUDDY1", 1);
}
}
else{
switch (func_127("AM_H_BBUDDY1")){
case 2:
func_125("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
break;
case 1:
Global_113648.f_18105.f_397=1;
break;
}
if(func_127("AM_H_BBUDDY")==0){
func_120("AM_H_BBUDDY", 1);
}
}}}
}
if(iLocal_88){
func_119();
}
else{
func_85();
}}
if(func_163(2, Global_20351, 0)){
func_84();
Global_20361=1;
if(Global_78558){
func_308();
}
else{
func_296();
}
wait(0);
if(Global_20383.f_1 > 3){
Global_20383.f_1=7;
}
StringCopy(&cLocal_83, "", 16);
if(iLocal_87==1){
iLocal_87=0;
}
if(iLocal_88==1){
iLocal_88=0;
}
iLocal_89=0;
}
break;
case 10:
if(iLocal_100==4){
}
func_3();
break;
case 6:
func_293();
break;
default:
break;
}
if(!Global_20383.f_1==8){
if((Global_8861 - Global_8860) > Global_8862){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(func_163(2, Global_20351, 0)){
if(MISC::IS_BIT_SET(Global_8254, 0)){
func_84();
}else{
func_84();
if(!Global_20383.f_1==10){
func_293();
}
elseif(Global_7568==132){
if(Global_2800025.f_1 || MISC::IS_BIT_SET(Global_8254, 20)){
Global_20383.f_1=7;
func_160(Global_20364, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8254, 0)){
func_158(Global_20364, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
}else{
func_158(Global_20364, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
}
AUDIO::STOP_SOUND(iLocal_79);
iLocal_100=0;
}
}
else{
func_294();
Global_20383.f_1=7;
func_2();
func_160(Global_20364, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8254, 0)){
func_158(Global_20364, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
}
else{
func_158(Global_20364, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
}
AUDIO::STOP_SOUND(iLocal_79);
iLocal_100=0;
}}}
}}}}}else{
Global_20385=6;
func_293();
}
if(func_1()){
func_293();
}}}

int func_1(){
if(((Global_20383.f_1==1 || Global_20383.f_1==3) || Global_20383.f_1==0) || Global_20327==1){
Global_20370=1;
return 1;
}
return 0;
}


void func_2(){
if(!Global_20383.f_1==10 && !Global_20383.f_1==9){
if(MISC::IS_BIT_SET(Global_8253, 9)){
wait(750);
}
if(Global_20383.f_1 > 6){
func_160(Global_20364, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8254, 0)){
func_158(Global_20364, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
}else{
func_158(Global_20364, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
}
Global_8256=99;
if(MISC::IS_BIT_SET(Global_8253, 9)){
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(MISC::IS_BIT_SET(Global_8254, 0)){
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
if(iLocal_69 > 0){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}
if(Global_20326==0){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
if(iLocal_69 > 0){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_3(){
int iVar0;
struct<3> Var1;
int iVar2;
switch (iLocal_100){
case 0:
if(Global_7568==81){
if(Global_1835499==0){
Global_1835499=1;
}
if(HUD::DOES_TEXT_BLOCK_EXIST("LOWCAAU")){
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC("LOWCAAU", 15);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15)){
wait(0);
}}
StringCopy(&cLocal_107, "LOWCA_CALL10_1", 16);
}else{
if(HUD::DOES_TEXT_BLOCK_EXIST(&Global_22748)){
HUD::REQUEST_ADDITIONAL_TEXT(&Global_22748, 1);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1)){
wait(0);
}}
cLocal_107={
Global_117[Global_7568 /*10*/] 
};
StringConCat(&cLocal_107, "_1", 16);
}
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_107) || iLocal_278==1){
iLocal_101=Global_22745;
if(func_83(129)){
iLocal_101=Global_97109;
}}else{
iLocal_101=Global_22744;
}
if((iLocal_278==1 && MISC::ARE_STRINGS_EQUAL(&cLocal_279, "CELLPHONE_CHEAT")) && Global_78558==0){
if((MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SEAPLANE") || MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DUELC")) || MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_BUBBLE")){
bLocal_93=true;
}
if(bLocal_93){
if(func_82()){
iLocal_94=0;
}else{
iLocal_94=1;
}}
if(iLocal_94==0){
iLocal_102=MISC::GET_GAME_TIMER();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_MONOC")){
func_81("CELL_MONOSIGNAL");
}elseif(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DIRECTOR")){
func_81("CELL_DRCT");
}else{
func_81("CELL_CHEAT");
}
func_81("CELL_195");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
iLocal_100=1;
}else{
iLocal_100=2;
iLocal_102=MISC::GET_GAME_TIMER();
}}else{
iLocal_100=2;
iLocal_102=MISC::GET_GAME_TIMER();
}
break;
case 1:
iLocal_103=MISC::GET_GAME_TIMER();
if((iLocal_103 - iLocal_102) > 1500){
iLocal_100=3;
}
break;
case 2:
iLocal_103=MISC::GET_GAME_TIMER();
if(iLocal_101 !=Global_22744){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_79)){
if(Global_2800025.f_37==0){
if(Global_20326){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_79, "Dial_and_Remote_Ring", &Global_20372, 1);
}
elseif((iLocal_103 - iLocal_102) > 1700){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_79, "Remote_Ring", &Global_20372, 1);
}}}}elseif((func_83(130) || func_83(132)) || func_83(128)){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_79)){
if(Global_2800025.f_37==0){
if(Global_20326){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_79, "Dial_and_Remote_Ring", &Global_20372, 1);
}
elseif((iLocal_103 - iLocal_102) > 1700){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_79, "Remote_Ring", &Global_20372, 1);
}}}}
if((iLocal_103 - iLocal_102) > iLocal_101){
if(iLocal_101==Global_22744){
bLocal_90=false;
if((Global_7568==130 || Global_7568==132) || Global_7568==128){
if(!MISC::IS_BIT_SET(Global_8254, 20)){
bLocal_90=true;
if((iLocal_103 - iLocal_102) > iLocal_101 + 10000){
if(Global_20383.f_1==10){
if(Global_7568==130){
Global_20383.f_1=3;
}}}
}}
if(!bLocal_90){
iLocal_100=4;
AUDIO::STOP_SOUND(iLocal_79);
iLocal_91=0;
settimerb(0);
if(func_80(Global_7568, Global_20383)==0){
if(Global_7568==132){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
func_81("CELL_220");
func_81("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(5), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
}
}
else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(5), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_220", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
iLocal_100=3;
}}
break;
case 3:
if(iLocal_278==1){
if(MISC::ARE_STRINGS_EQUAL(&cLocal_279, "CELLPHONE_CHEAT") && Global_78558==0){
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_MONOC")){
if(Global_9057==0){
Global_9057=1;
Global_113648.f_14053[0 /*20*/].f_6=5;
Global_113648.f_14053[2 /*20*/].f_6=5;
Global_113648.f_14053[1 /*20*/].f_6=5;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
if(!FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 40f)){
FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216, 0);
}}}
}
else{
Global_9057=0;
}}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SUPJUM")){
func_79(0, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_HEALA")){
func_79(6, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SLIDEYC")){
func_79(1, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_FASTR")){
func_79(2, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_WANTDN")){
func_79(9, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_WANTUP")){
func_79(8, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_WEATHER")){
func_79(5, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_FASTS")){
func_79(3, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_POWER")){
func_79(7, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_CHUTE")){
func_79(10, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_BANG")){
func_79(11, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_FLAMB")){
func_79(12, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_EXPMEL")){
func_79(13, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_ZEROG")){
func_79(14, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_INVINC")){
func_79(15, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SLOWMO")){
func_79(16, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SKYFA")){
func_79(17, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DRUNK")){
func_79(18, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DEADEYE")){
func_79(19, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_WEAPONS")){
func_79(4, 0);
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_BUZZARD")){
func_79(20, joaat("buzzard"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_COMET2")){
func_79(20, joaat("comet2"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_BMX")){
func_79(20, joaat("bmx"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_CADDY")){
func_79(20, joaat("caddy"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DUSTER")){
func_79(20, joaat("duster"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_PCJ")){
func_79(20, joaat("pcj"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_RAPIDGT")){
func_79(20, joaat("rapidgt"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_STRETCH")){
func_79(20, joaat("stretch"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_STUNT")){
func_79(20, joaat("stunt"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_TRASH")){
func_79(20, joaat("trash"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SANCHEZ")){
func_79(20, joaat("sanchez"));
}
if(func_82()){
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_SEAPLANE")){
func_79(20, joaat("dodo"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DUELC")){
func_79(20, joaat("dukes2"));
}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_BUBBLE")){
func_79(20, joaat("submersible2"));
}}
if(MISC::ARE_STRINGS_EQUAL(&Local_282, "CHEAT_DIRECTOR")){
iVar0=func_44(0, 0, 119);
if(iVar0 !=0){
func_42(iVar0);
}
else{
func_41();
}}
func_36(0);
}elseif(MISC::ARE_STRINGS_EQUAL(&cLocal_279, "CELLPHONE_CHEAT")){
func_36(0);
}else{
func_35(&uLocal_110, 1, 0, &Local_282, 0, 1);
Global_22746=0;
func_34(&uLocal_110, Global_7568, &Global_22748, &cLocal_279, 2, 0, 0, 0, 0);
}}else{
switch (Global_7568){
case 81:
StringCopy(&Var1, "BENNY", 24);
break;
case 0:
StringCopy(&Var1, "MICHAEL", 24);
break;
case 2:
StringCopy(&Var1, "TREVOR", 24);
break;
case 1:
StringCopy(&Var1, "FRANKLIN", 24);
break;
case 12:
StringCopy(&Var1, "LESTER", 24);
break;
case 13:
StringCopy(&Var1, "LESTER", 24);
break;
case 15:
StringCopy(&Var1, "TRACEY", 24);
break;
case 19:
StringCopy(&Var1, "LAMAR", 24);
break;
case 17:
StringCopy(&Var1, "AMANDA", 24);
break;
case 45:
StringCopy(&Var1, "MALEEXECASSIST", 24);
break;
case 29:
StringCopy(&Var1, "FEMEXECASSIST", 24);
break;
case 35:
StringCopy(&Var1, "CHENGSR", 24);
break;
case 14:
StringCopy(&Var1, "JIMMY", 24);
break;
case 103:
StringCopy(&Var1, "TONYA", 24);
break;
case 50:
StringCopy(&Var1, "BEVERLY", 24);
break;
case 64:
StringCopy(&Var1, "NIGEL", 24);
break;
case 34:
StringCopy(&Var1, "OSCAR", 24);
break;
case 49:
StringCopy(&Var1, "BARRY", 24);
break;
case 33:
StringCopy(&Var1, "GAYMILITARY", 24);
break;
case 20:
StringCopy(&Var1, "NervousRon", 24);
break;
case 24:
StringCopy(&Var1, "Wade", 24);
break;
case 69:
StringCopy(&Var1, "OMEGA", 24);
break;
case 60:
StringCopy(&Var1, "MARNIE", 24);
break;
case 37:
StringCopy(&Var1, "STRETCH", 24);
break;
case 23:
StringCopy(&Var1, "STEVE", 24);
break;
case 51:
StringCopy(&Var1, "CRIS", 24);
break;
case 30:
StringCopy(&Var1, "Dave", 24);
break;
case 58:
StringCopy(&Var1, "JOSH", 24);
break;
case 36:
StringCopy(&Var1, "FRIEDLANDER", 24);
break;
case 62:
StringCopy(&Var1, "MAUDE", 24);
break;
case 55:
StringCopy(&Var1, "JIMMYBOSTON", 24);
break;
case 56:
StringCopy(&Var1, "JOE", 24);
break;
case 26:
StringCopy(&Var1, "SOLOMON", 24);
break;
case 54:
StringCopy(&Var1, "CLETUS", 24);
break;
case 43:
StringCopy(&Var1, "TANISHA", 24);
break;
case 16:
StringCopy(&Var1, "ABIGAIL", 24);
break;
case 44:
StringCopy(&Var1, "DENISE", 24);
break;
case 84:
StringCopy(&Var1, "BRUCIE", 24);
break;
case 70:
StringCopy(&Var1, "BikerBoss", 24);
break;
case 72:
StringCopy(&Var1, "MexicanBoss", 24);
break;
case 89:
StringCopy(&Var1, "MECHANIC", 24);
break;
case 91:
StringCopy(&Var1, "MorsMutual", 24);
break;
case 85:
StringCopy(&Var1, "FM_MERRYWEATHER", 24);
break;
case 41:
StringCopy(&Var1, "PEGASUS", 24);
break;
case 18:
StringCopy(&Var1, "SIMEON", 24);
break;
case 31:
StringCopy(&Var1, "MARTIN", 24);
break;
case 52:
StringCopy(&Var1, "DOM", 24);
break;
case 86:
StringCopy(&Var1, "GERALD", 24);
break;
default:
StringCopy(&Var1, "MICHAEL", 24);
break;
}
func_35(&uLocal_110, 1, 0, &Var1, 0, 1);
Global_22746=0;
switch (Global_7568){
case 81:
func_9(&uLocal_110, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
break;
case 13:
func_9(&uLocal_110, 12, &Global_22748, "LES_APH2", 2, 0, 0, 0, 0);
break;
case 36:
iVar2=CLOCK::GET_CLOCK_HOURS();
if(iVar2 > 17 || iVar2 < 9){
func_9(&uLocal_110, Global_7568, &Global_22748, "SHR_APH3", 2, 0, 0, 0, 0);
}
if(iVar2 > 8 && iVar2 < 13){
func_9(&uLocal_110, Global_7568, &Global_22748, "SHR_APH1", 2, 0, 0, 0, 0);
}
if(iVar2 > 12 && iVar2 < 18){
func_9(&uLocal_110, Global_7568, &Global_22748, "SHR_APH2", 2, 0, 0, 0, 0);
}
break;
case 17:
if(func_8(21) && !func_8(22)){
func_9(&uLocal_110, Global_7568, &Global_22748, "AMA_APH2", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, &(Global_117[Global_7568 /*10*/]), 2, 0, 0, 0, 0);
}
break;
case 20:
if(Global_78558){
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_RBusy", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, &(Global_117[Global_7568 /*10*/]), 2, 0, 0, 0, 0);
}
break;
case 44:
if(func_7(126)){
func_9(&uLocal_110, Global_7568, &Global_22748, "DEN_APH3", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, &(Global_117[Global_7568 /*10*/]), 2, 0, 0, 0, 0);
}
break;
case 15:
if(!func_8(19)){
func_9(&uLocal_110, Global_7568, &Global_22748, "TRA_APH1", 2, 0, 0, 0, 0);
}
elseif(!func_8(20)){
func_9(&uLocal_110, Global_7568, &Global_22748, "TRA_APH2", 2, 0, 0, 0, 0);
}
elseif(!func_8(22)){
func_9(&uLocal_110, Global_7568, &Global_22748, "TRA_APH3", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "TRA_APH4", 2, 0, 0, 0, 0);
}
break;
case 19:
if(!func_8(19)){
func_9(&uLocal_110, Global_7568, &Global_22748, "LAM_APH1", 2, 0, 0, 0, 0);
}
elseif(!func_8(20)){
func_9(&uLocal_110, Global_7568, &Global_22748, "LAM_APH2", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "LAM_APH3", 2, 0, 0, 0, 0);
}
break;
case 14:
if(!func_8(19)){
func_9(&uLocal_110, Global_7568, &Global_22748, "JIM_APH1", 2, 0, 0, 0, 0);
}
elseif(!func_8(21)){
func_9(&uLocal_110, Global_7568, &Global_22748, "JIM_APH3", 2, 0, 0, 0, 0);
}
elseif(!func_8(22)){
func_9(&uLocal_110, Global_7568, &Global_22748, "JIM_APH2", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "JIM_APH4", 2, 0, 0, 0, 0);
}
break;
case 49:
if(func_6(7)){
func_9(&uLocal_110, Global_7568, &Global_22748, "BAR_APH2", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "BAR_APH1", 2, 0, 0, 0, 0);
}
break;
case 85:
iLocal_292=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iLocal_292 <=50){
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_MWBusy", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_MWBusy2", 2, 0, 0, 0, 0);
}
break;
case 41:
iLocal_292=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iLocal_292 <=50){
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_PGbusy", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_PGbusy2", 2, 0, 0, 0, 0);
}
break;
case 91:
iLocal_292=MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
if(iLocal_292 <=50){
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_INSbusy", 2, 0, 0, 0, 0);
}
else{
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_INSbusy2", 2, 0, 0, 0, 0);
}
break;
case 86:
func_9(&uLocal_110, Global_7568, &Global_22748, "ANS_GBusy", 2, 0, 0, 0, 0);
break;
default:
func_9(&uLocal_110, Global_7568, &Global_22748, &(Global_117[Global_7568 /*10*/]), 2, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8254, 31);
}
break;
case 4:
if(AUDIO::HAS_SOUND_FINISHED(iLocal_79)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_79, "Remote_Engaged", &Global_20372, 1);
}
if(timerb() > 1500){
if(iLocal_91==0){
if(Global_20383==2){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_4(PLAYER::PLAYER_PED_ID(), "PHONE_CALL_NOT_CONNECTED", 24);
iLocal_91=1;
}}}}
break;
}}


void func_4(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0){
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

int func_6(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}

int func_7(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}

int func_8(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
if(Global_78558 || func_33(0)){
if(Global_7568==81){
if(Global_1835499==0){
Global_1835499=1;
}
func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
}elseif(Global_1835499==1){
func_34(uParam0, iParam1, &Global_22748, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
}else{
func_10(uParam0, iParam1, &Global_22748, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
}}else{
func_10(uParam0, iParam1, &Global_22748, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
}}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2){
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
func_31();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_30(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_29();
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
func_21();
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
if(func_20()){
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
if(func_19()){
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
func_18();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_17();
func_12();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_31();
}
return 0;
}


void func_12(){
if(!func_13()){
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

int func_13(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_16()){
return 0;
}
if(func_14(PLAYER::PLAYER_ID())){
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


bool func_14(int iParam0){
return func_15(iParam0, 20);
}


var func__15(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_16(){
return -1;
}


void func_17(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_18(){
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

int func_19(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_20(){
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


void func_21(){
if(func_28(14)){
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
Global_20383=func_22();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


var func__22(){
func_23();
return Global_113648.f_2365.f_539.f_4321;
}


void func_23(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_26(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_25(PLAYER::PLAYER_PED_ID());
if(func_24(iVar0) && (!func_28(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_24(Global_113648.f_2365.f_539.f_4321)){
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


bool func_24(int iParam0){
return iParam0 < 3;
}

int func_25(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_26(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_26(int iParam0){
if(func_24(iParam0)){
return func_27(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__27(int iParam0){
return Global_2028[iParam0 /*29*/];
}


bool func_28(int iParam0){
return Global_43257==iParam0;
}


void func_29(){
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


bool func_30(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_31(){
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


void func_32(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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


var func__33(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_34(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
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
Global_2883585=1;
return func_11(sParam3, iParam4, bParam8);
}


void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_36(int iParam0){
if(func_40()){
return;
}
if(Global_20584){
if(func_39()){
func_37(1, 1);
}else{
func_37(0, 0);
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
if(!func_19()){
Global_20383.f_1=3;
}}


void func_37(bool bParam0, bool bParam1){
if(bParam0){
if(func_38(0)){
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

int func_38(int iParam0){
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


bool func_39(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_40(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_41(){
float fVar0;
MISC::SET_GAME_PAUSED(1);
PAD::SET_INPUT_EXCLUSIVE(2, 201);
PAD::SET_INPUT_EXCLUSIVE(2, 202);
fVar0=0f;
while ((!PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || fVar0 < 1f){
set_warning_message_with_header("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, false, -1, 0, 0, true, 0);
wait(0);
fVar0=(fVar0 + MISC::GET_FRAME_TIME());
}
MISC::SET_GAME_PAUSED(0);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
CAM::DO_SCREEN_FADE_OUT(0);
Global_112593=1;
}}


void func_42(int iParam0){
float fVar0;
char* sVar1;
MISC::SET_GAME_PAUSED(1);
PAD::SET_INPUT_EXCLUSIVE(2, 201);
fVar0=0f;
while (!PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f){
sVar1=func_43(iParam0, 119);
set_warning_message("FBR_GENERIC", 16384, 0, false, -1, "FBR_DIR_MODE", sVar1, true, 0);
wait(0);
fVar0=(fVar0 + MISC::GET_FRAME_TIME());
}
MISC::SET_GAME_PAUSED(0);
}


char* func_43(int iParam0, int iParam1){
iParam1=iParam1;
switch (iParam0){
case 1:
return "FBR_BLK_CLEAN";
break;
case 2:
return "FBR_BLK_RNNNG";
break;
case 13:
return "FBR_BLK_DEAD";
break;
case 3:
return "FBR_BLK_MISS";
break;
case 5:
return "FBR_BLK_SHOP";
break;
case 4:
return "FBR_BLK_CUTS";
break;
case 6:
return "FBR_BLK_WANT";
break;
case 7:
return "FBR_BLK_ONLI";
break;
case 8:
return "FBR_BLK_ACT";
break;
case 9:
return "FBR_BLK_LOC";
break;
case 10:
return "FBR_BLK_VEH";
break;
case 11:
return "FBR_BLK_PARA";
break;
case 12:
return "FBR_BLK_FALL";
break;
default:
return "ERROR";
break;
}
return "ERROR";
}

int func_44(int iParam0, bool bParam1, int iParam2){
int iVar0;
iParam2=iParam2;
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
return 13;
}
if(bParam1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1){
return 2;
}}
if(func_78() && !func_28(14)){
return 3;
}
if(func_77()){
return 3;
}
if(func_76()){
return 8;
}
if(bParam1){
if(func_75()){
return 8;
}}
if(Global_97601){
return 3;
}
if(Global_32421){
return 8;
}
if(Global_32312){
return 8;
}
if(Global_2883694){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0){
return 3;
}}elseif(Global_2883693){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0){
return 3;
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0){
return 3;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0){
return 3;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0){
return 3;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0){
return 13;
}
if(func_74(bParam1)){
return 3;
}
if(PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
return 12;
}
if(func_73(Global_112673, 256)){
return 3;
}
if(((func_72() || func_71()) || func_63()) || func_62()){
return 5;
}
if(func_62()){
return 5;
}
if(func_61()){
return 5;
}
if(func_60()){
return 5;
}
if(func_71()){
return 5;
}
if(func_59() && !Global_112598){
return 8;
}
if(func_63()){
return 5;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_58()){
return 4;
}
if(func_57()){
return 4;
}
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_48(60);
if(iVar0 !=0){
return iVar0;
}
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) !=-1){
return 11;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_112695){
return 10;
}}}
if(Global_32419){
return 8;
}
if(Global_78556){
return 4;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
return 6;
}
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 8;
}
if(TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())){
return 8;
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 7;
}
if(func_47()){
return 8;
}
if(Global_32166){
return 3;
}
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
return 4;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0)){
return 9;
}
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
return 9;
}
if(bParam1){
if(!func_45(0)){
return 8;
}}
if(PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())){
return 9;
}
return 0;
}

int func_45(bool bParam0){
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
if((((((((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
return 0;
}
if((((((func_57() || Global_23131.f_4) || func_46()) || MISC::IS_MEMORY_CARD_IN_USE()) || MISC::IS_AUTO_SAVE_IN_PROGRESS()) || func_58()) || func_77()){
return 0;
}
if(!bParam0){
if(MISC::GET_MISSION_FLAG()){
return 0;
}}
return 1;
}

int func_46(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98159.f_44==1;
}
return 0;
}


bool func_47(){
return Global_60543;
}

int func_48(int iParam0){
struct<3> Var0;
int iVar1;
int iVar2;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
return 5;
}
Var0={
func_56(PLAYER::PLAYER_ID()) 
};
if(Global_112735[10 /*10*/].f_1){
if(vdist2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f){
return 3;
}}
if(func_8(2) && !func_8(17)){
if(vdist2(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1)){
return 9;
}}}
if(vdist2(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1)){
return 9;
}}
if(vdist2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(Var0, 95.07f, -1284.98f, 29.3f) < 2f){
return 9;
}
if(vdist2(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_55(26)){
return 9;
}
if(!iLocal_27){
func_49(iParam0);
}
iVar1=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(iVar1==0){
return 0;
}elseif((iVar1==Global_112611 || iVar1==Global_112612) || iVar1==Global_112613){
return 9;
}elseif(iVar1==Global_112602){
return 9;
}elseif(iVar1==Global_112603){
return 9;
}elseif(iVar1==Global_112606){
return 9;
}elseif(iVar1==Global_112605){
return 9;
}elseif(iVar1==Global_112607){
return 9;
}elseif(iVar1==Global_112608){
return 9;
}elseif(iVar1==Global_112609){
return 9;
}elseif(iVar1==Global_112610){
return 9;
}elseif(iVar1==Global_112614){
return 9;
}elseif(iVar1==Global_112615){
return 9;
}elseif(iVar1==Global_112616){
return 9;
}elseif(iVar1==Global_112617){
return 9;
}elseif(iVar1==Global_112618){
return 9;
}elseif((iVar1==Global_112619 || iVar1==Global_112620) && func_8(67)){
return 9;
}
iVar2=0;
while (iVar2 <=(19 - 1)){
if(iVar1==Global_112621[iVar2]){
return 9;
}
iVar2++;
}
return 0;
}


void func_49(var uParam0){
int iVar0;
uParam0=uParam0;
func_52(24, &Global_112602);
func_52(47, &Global_112603);
func_52(10, &Global_112611);
func_52(9, &Global_112612);
func_52(8, &Global_112613);
func_52(21, &Global_112614);
func_52(11, &Global_112615);
func_52(18, &Global_112619);
func_52(19, &Global_112620);
Global_112606=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
Global_112605=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
Global_112607=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
Global_112608=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
Global_112609=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
Global_112610=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
Global_112616=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
Global_112617=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
Global_112618=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
iVar0=0;
while (iVar0 <=(19 - 1)){
Global_112621[iVar0]=INTERIOR::GET_INTERIOR_AT_COORDS(func_50(iVar0));
iVar0++;
}
iLocal_27=1;
}


Vector3 func__50(int iParam0){
if(!func_51(iParam0)){
return 0f, 0f, 0f;
}
switch (iParam0){
case 0:
return -711.8212f, -915.9057f, 18.2377f;
case 1:
return -52.7185f, -1756.175f, 28.4432f;
case 2:
return 1159.441f, -325.6666f, 68.2272f;
case 3:
return 1699.429f, 4928.642f, 41.0858f;
case 4:
return -1822.926f, 788.9531f, 137.212f;
case 5:
return 1166.427f, 2703.528f, 37.1574f;
case 6:
return -2973.414f, 390.6885f, 14.0433f;
case 7:
return -1225.86f, -903.5782f, 11.3263f;
case 8:
return 1140.659f, -981.0806f, 45.4158f;
case 9:
return -1490.275f, -382.8514f, 39.1634f;
case 10:
return -3240.719f, 1004.508f, 11.8468f;
case 11:
return -3039.249f, 589.3831f, 6.9251f;
case 12:
return 544.4275f, 2672.061f, 41.1726f;
case 13:
return 2558.754f, 385.599f, 107.6391f;
case 14:
return 2681.511f, 3282.763f, 54.2573f;
case 15:
return 1731.153f, 6411.633f, 34.0373f;
case 16:
return 1964.931f, 3741.207f, 31.3599f;
case 17:
return 29.0707f, -1348.773f, 28.5101f;
case 18:
return 376.8503f, 323.9777f, 102.5825f;
default:
}
return 0f, 0f, 0f;
}

int func_51(int iParam0){
if(iParam0 >=19){
return 0;
}elseif(iParam0 <=-1){
return 0;
}
return 1;
}


var func__52(int iParam0, var uParam1){
struct<5> Var0;
Var0={
func_53(iParam0) 
};
*uParam1=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
return Var0.f_4;
}


struct<5> func_53(int iParam0){
struct<5> Var0;
struct<3> Var1;
switch (iParam0){
case 0:
Var0={
-447.4833f, 280.3197f, 77.5215f 
};
Var0.f_3="v_comedy";
Var0.f_4=Var0.f_3;
break;
case 1:
Var0={
-1906.786f, -573.7576f, 19.0773f 
};
Var0.f_3="v_psycheoffice";
Var0.f_4=Var0.f_3;
break;
case 2:
Var0={
1399.973f, 1148.756f, 113.3336f 
};
Var0.f_3="v_ranch";
Var0.f_4=Var0.f_3;
break;
case 3:
Var0={
-598.6379f, -1608.399f, 26.0108f 
};
Var0.f_3="v_recycle";
Var0.f_4=Var0.f_3;
break;
case 4:
Var0={
-556.5089f, 286.3181f, 81.1763f 
};
Var0.f_3="v_rockclub";
Var0.f_4=Var0.f_3;
break;
case 5:
Var0={
-111.7116f, -11.912f, 69.5196f 
};
Var0.f_3="v_janitor";
Var0.f_4=Var0.f_3;
break;
case 6:
Var0={
1274.934f, -1714.726f, 53.7715f 
};
Var0.f_3="v_lesters";
Var0.f_4=Var0.f_3;
break;
case 7:
Var0={
147.433f, -2201.37f, 3.688f 
};
Var0.f_3="v_torture";
Var0.f_4=Var0.f_3;
break;
case 8:
Var0={
320.9934f, 265.2515f, 82.1221f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Vinewood)";
break;
case 9:
Var0={
-1425.564f, -244.3f, 15.8053f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Morningwood)";
break;
case 10:
Var0={
377.153f, -717.567f, 10.0536f 
};
Var0.f_3="v_cinema";
Var0.f_4="v_cinema (Downtown)";
break;
case 11:
Var0={
245.1564f, 370.211f, 104.7382f 
};
Var0.f_3="v_epsilonism";
Var0.f_4=Var0.f_3;
break;
case 12:
Var0={
173.1176f, -1003.279f, -99.9999f 
};
Var0.f_3="v_garages";
Var0.f_4=Var0.f_3;
break;
case 13:
Var0={
199.9715f, -999.6678f, -100f 
};
Var0.f_3="v_garagem";
Var0.f_4=Var0.f_3;
break;
case 14:
Var0={
228.6058f, -992.0537f, -99.9999f 
};
Var0.f_3="v_garagel";
Var0.f_3="hei_dlc_garage_high_new";
Var0.f_4=Var0.f_3;
break;
case 15:
Var0={
1854.254f, 3686.739f, 33.2671f 
};
Var0.f_3="v_sheriff";
Var0.f_4=Var0.f_3;
break;
case 16:
Var0={
-444.8907f, 6013.587f, 30.7164f 
};
Var0.f_3="v_sheriff2";
Var0.f_4=Var0.f_3;
break;
case 17:
Var0={
3522.845f, 3707.965f, 19.9918f 
};
Var0.f_3="v_lab";
Var0.f_4=Var0.f_3;
break;
case 18:
Var0={
717.2994f, -974.4271f, 23.9142f 
};
Var0.f_3="v_sweat";
Var0.f_4=Var0.f_3;
break;
case 19:
Var0={
717.299f, -974.4271f, 23.9142f 
};
Var0.f_3="v_sweatempty";
Var0.f_4=Var0.f_3;
break;
case 20:
Var0={
2449.785f, 4983.825f, 45.8106f 
};
Var0.f_3="v_farmhouse";
Var0.f_4=Var0.f_3;
break;
case 22:
Var0={
1087.195f, -1988.445f, 28.649f 
};
Var0.f_3="v_foundry";
Var0.f_4=Var0.f_3;
break;
case 23:
Var0={
982.233f, -2160.382f, 28.4761f 
};
Var0.f_3="v_abattoir";
Var0.f_4=Var0.f_3;
break;
case 21:
Var0={
479.0568f, -1316.825f, 28.2038f 
};
Var0.f_3="v_chopshop";
Var0.f_4=Var0.f_3;
break;
case 24:
Var0={
-1005.663f, -478.3461f, 49.0265f 
};
Var0.f_3="v_58_sol_office";
Var0.f_4=Var0.f_3;
break;
case 25:
Var1={
func_54(1, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (1)";
break;
case 26:
Var1={
func_54(2, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (2)";
break;
case 27:
Var1={
func_54(3, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (3)";
break;
case 28:
Var1={
func_54(4, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (4)";
break;
case 29:
Var1={
func_54(5, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (5)";
break;
case 30:
Var1={
func_54(6, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (6)";
break;
case 31:
Var1={
func_54(7, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (7)";
break;
case 32:
Var0={
Global_1312228[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (8)";
break;
case 33:
Var1={
func_54(35, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (9)";
break;
case 34:
Var1={
func_54(36, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (10)";
break;
case 35:
Var1={
func_54(37, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (11)";
break;
case 36:
Var1={
func_54(38, 0) 
};
Var0={
-20.1f, -580.8f, 91.3f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (12)";
break;
case 37:
Var1={
func_54(39, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (13)";
break;
case 38:
Var1={
func_54(40, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (14)";
break;
case 39:
Var1={
func_54(41, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (15)";
break;
case 40:
Var1={
func_54(42, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (16)";
break;
case 41:
Var1={
func_54(43, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (17)";
break;
case 42:
Var0={
-470.3754f, -698.5207f, 51.5276f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (18)";
break;
case 43:
Var0={
-460.6133f, -691.5562f, 69.9067f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (19)";
break;
case 44:
Var0={
300.633f, -997.4288f, -99.9727f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4="hei_dlc_apart_high_new (20)";
break;
case 49:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (1)";
break;
case 50:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (2)";
break;
case 51:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (3)";
break;
case 52:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3="apa_v_mp_stilts_b";
Var0.f_4="apa_v_mp_stilts_b (4)";
break;
case 53:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (5)";
break;
case 54:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (7)";
break;
case 55:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (8)";
break;
case 56:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (10)";
break;
case 57:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (12)";
break;
case 58:
Var0={
374.2012f, 416.9688f, 142.5991f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4="apa_v_mp_stilts_a (13)";
break;
case 45:
Var0={
-16.29585f, -684.0385f, 33.50832f 
};
Var0.f_3="dt1_03_carpark";
Var0.f_4="dt1_03_carpark";
break;
case 46:
Var0={
341.1f, -1000f, -99.2f 
};
Var0.f_3="v_apart_midspaz";
Var0.f_4="v_apart_midspaz";
break;
case 47:
Var0={
199.9716f, -1018.954f, -100f 
};
Var0.f_3="v_garagem_sp";
Var0.f_4=Var0.f_3;
break;
case 48:
Var0={
-1388.001f, -618.4197f, 30.8196f 
};
Var0.f_3="v_bahama";
Var0.f_4=Var0.f_3;
break;
}
switch (iParam0){
case 59:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 60:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 61:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 62:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 63:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 64:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 65:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 66:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 67:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 68:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 69:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 70:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 71:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 72:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 73:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 74:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 75:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_01";
Var0.f_4=Var0.f_3;
break;
case 76:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_02";
Var0.f_4=Var0.f_3;
break;
case 77:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_03";
Var0.f_4=Var0.f_3;
break;
case 78:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_04";
Var0.f_4=Var0.f_3;
break;
case 79:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_05";
Var0.f_4=Var0.f_3;
break;
case 80:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_06";
Var0.f_4=Var0.f_3;
break;
case 81:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_07";
Var0.f_4=Var0.f_3;
break;
case 82:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3="apa_v_mp_h_08";
Var0.f_4=Var0.f_3;
break;
case 83:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 84:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 85:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 86:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 87:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 88:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 89:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 90:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 91:
Var1={
func_54(87, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 92:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 93:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 94:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 95:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 96:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 97:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 98:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 99:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 100:
Var1={
func_54(88, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 101:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 102:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 103:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 104:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 105:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 106:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 107:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 108:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 109:
Var1={
func_54(89, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 110:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01a_dlc";
Var0.f_4=Var0.f_3;
break;
case 111:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01b_dlc";
Var0.f_4=Var0.f_3;
break;
case 112:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_01c_dlc";
Var0.f_4=Var0.f_3;
break;
case 113:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02a_dlc";
Var0.f_4=Var0.f_3;
break;
case 114:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02b_dlc";
Var0.f_4=Var0.f_3;
break;
case 115:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_02c_dlc";
Var0.f_4=Var0.f_3;
break;
case 116:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03a_dlc";
Var0.f_4=Var0.f_3;
break;
case 117:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03b_dlc";
Var0.f_4=Var0.f_3;
break;
case 118:
Var1={
func_54(90, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="ex_int_office_03c_dlc";
Var0.f_4=Var0.f_3;
break;
case 119:
Var1={
func_54(91, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 120:
Var1={
func_54(97, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="bkr_biker_dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 121:
Var1={
func_54(103, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 122:
Var1={
func_54(104, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 123:
Var1={
func_54(105, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 124:
Var1={
func_54(106, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 125:
Var1={
func_54(107, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 126:
Var1={
func_54(108, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 127:
Var1={
func_54(109, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 128:
Var1={
func_54(110, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 129:
Var1={
func_54(111, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 130:
Var1={
func_54(112, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 131:
Var1={
func_54(113, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 132:
Var1={
func_54(114, 0) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_impexp_int_01";
Var0.f_4=Var0.f_3;
break;
case 133:
Var1={
func_54(103, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 134:
Var1={
func_54(106, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 135:
Var1={
func_54(109, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 136:
Var1={
func_54(112, 1) 
};
Var0={
Var1 + Vector(1f, 0f, 0f) 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 137:
Var0={
938.3077f, -3196.112f, -100f 
};
Var0.f_3="gr_grdlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 138:
Var0={
512.5f, 4852f, -62.6f 
};
Var0.f_3="xm_x17dlc_int_sub";
Var0.f_4=Var0.f_3;
break;
case 139:
Var0={
2047f, 2942f, -61.9f 
};
Var0.f_3="xm_x17dlc_int_facility";
Var0.f_4=Var0.f_3;
break;
case 140:
Var0={
-1047.6f, -232.3503f, 38.0135f 
};
Var0.f_3="v_faceoffice";
Var0.f_4=Var0.f_3;
break;
case 22:
Var0={
1100f, -2004f, 37f 
};
Var0.f_3="v_foundry";
Var0.f_4=Var0.f_3;
break;
case 141:
Var0={
361f, 6306f, -159f 
};
Var0.f_3="xm_x17dlc_int_silo_01";
Var0.f_4=Var0.f_3;
break;
case 142:
Var0={
305f, 6298f, -160f 
};
Var0.f_3="xm_x17dlc_int_silo_02";
Var0.f_4=Var0.f_3;
break;
case 143:
Var0={
244f, 6163f, -159f 
};
Var0.f_3="xm_x17dlc_int_lab";
Var0.f_4=Var0.f_3;
break;
case 144:
Var0={
2168f, 2920f, -84f 
};
Var0.f_3="xm_x17dlc_int_facility2";
Var0.f_4=Var0.f_3;
break;
case 145:
Var0={
446f, 5922f, -158f 
};
Var0.f_3="xm_x17dlc_int_bse_tun";
Var0.f_4=Var0.f_3;
break;
case 146:
Var0={
252f, 5972f, -156f 
};
Var0.f_3="xm_x17dlc_int_base_loop";
Var0.f_4=Var0.f_3;
break;
case 147:
Var0={
682f, 5959f, -152f 
};
Var0.f_3="xm_x17dlc_int_base_ent";
Var0.f_4=Var0.f_3;
break;
case 148:
Var0={
551f, 5939f, -158f 
};
Var0.f_3="xm_x17dlc_int_base";
Var0.f_4=Var0.f_3;
break;
case 149:
Var0={
520.0001f, 4750f, -70f 
};
Var0.f_3="xm_x17dlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 150:
Var0={
-1266.802f, -3014.849f, -49.4903f 
};
Var0.f_3="sm_smugdlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 151:
Var0={
974.9203f, -3000.065f, -40.647f 
};
Var0.f_3="imp_impexp_intwaremed";
Var0.f_4=Var0.f_3;
break;
case 152:
Var0={
969.5376f, -3000.411f, -48.647f 
};
Var0.f_3="imp_impexp_int_02";
Var0.f_4=Var0.f_3;
break;
case 153:
Var0={
1094.997f, -3100.012f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_s_dlc";
Var0.f_4=Var0.f_3;
break;
case 154:
Var0={
1059.995f, -3100f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_m_dlc";
Var0.f_4=Var0.f_3;
break;
case 155:
Var0={
1010.008f, -3100f, -39.9999f 
};
Var0.f_3="ex_int_warehouse_l_dlc";
Var0.f_4=Var0.f_3;
break;
case 156:
Var0={
372.6707f, 405.5235f, 144.5326f 
};
Var0.f_3="apa_v_mp_stilts_a";
Var0.f_4=Var0.f_3;
break;
case 157:
Var0={
-282.0588f, -955.17f, 85.3036f 
};
Var0.f_3="hei_dlc_apart_high_new";
Var0.f_4=Var0.f_3;
break;
case 158:
Var0={
342.7946f, -997.4225f, -99.7444f 
};
Var0.f_3="v_apart_midspaz";
Var0.f_4=Var0.f_3;
break;
case 159:
Var0={
260.3268f, -997.4298f, -100.0086f 
};
Var0.f_3="v_studio_lo";
Var0.f_4=Var0.f_3;
break;
case 160:
Var0={
108.2369f, -753.5364f, 233.1523f 
};
Var0.f_3="v_fib01";
Var0.f_4=Var0.f_3;
break;
case 161:
Var0={
135.3226f, -746.3677f, 253.1523f 
};
Var0.f_3="v_fib03";
Var0.f_4=Var0.f_3;
break;
case 162:
Var0={
108.2572f, -753.5342f, 44.7548f 
};
Var0.f_3="v_office_lobby";
Var0.f_4=Var0.f_3;
break;
case 163:
Var0={
228.6161f, -992.053f, -99.9999f 
};
Var0.f_3="heist_dlc_garage_high_new";
Var0.f_4=Var0.f_3;
break;
case 164:
Var0={
575f, 4750f, -60f 
};
Var0.f_3="xm_v_apart_midspaz";
Var0.f_4=Var0.f_3;
break;
case 165:
Var0={
600f, 4750f, -60f 
};
Var0.f_3="xm_v_studio_lo";
Var0.f_4=Var0.f_3;
break;
case 166:
Var0={
630f, 4750f, -60f 
};
Var0.f_3="xm_v_garagem";
Var0.f_4=Var0.f_3;
break;
case 167:
Var0={
1257f, 4796.7f, -39.1f 
};
Var0.f_3="xm_x17dlc_int_tun_entry";
Var0.f_4=Var0.f_3;
break;
case 168:
Var0={
694.4f, 5898.9f, -152.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 169:
Var0={
1121.8f, 5516.3f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 170:
Var0={
1279.6f, 5233.2f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_straight";
Var0.f_4=Var0.f_3;
break;
case 171:
Var0={
1158.6f, 5467.1f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 172:
Var0={
705.9f, 5838.5f, -152.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 173:
Var0={
1316.5f, 5184f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_slope_flat";
Var0.f_4=Var0.f_3;
break;
case 174:
Var0={
1248f, 5276.1f, -80.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 175:
Var0={
1090.2f, 5559.2f, -101.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 176:
Var0={
1261f, 4808.6f, -39.3f 
};
Var0.f_3="xm_x17dlc_int_tun_flat_slope";
Var0.f_4=Var0.f_3;
break;
case 177:
Var0={
721.8f, 5781.4f, -146.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 178:
Var0={
780.8f, 5703.4f, -136.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 179:
Var0={
868.1f, 5659.2f, -126.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 180:
Var0={
1218.2f, 5321.2f, -85.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 181:
Var0={
1278.5f, 4859.7f, -44.7f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_r";
Var0.f_4=Var0.f_3;
break;
case 182:
Var0={
1187.2f, 5419.8f, -96.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 183:
Var0={
1344.7f, 5136.4f, -75.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 184:
Var0={
1363.4f, 5039.5f, -65.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 185:
Var0={
1049.3f, 5602.1f, -107.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 186:
Var0={
1337.8f, 4944.3f, -55.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 187:
Var0={
961.5f, 5646.9f, -117.4f 
};
Var0.f_3="xm_x17dlc_int_tun_30d_l";
Var0.f_4=Var0.f_3;
break;
case 188:
Var0={
345.0041f, 4842.001f, -59.9997f 
};
Var0.f_3="xm_x17dlc_int_02";
Var0.f_4=Var0.f_3;
break;
case 189:
Var0={
279.9322f, -1337.49f, 23.7419f 
};
Var0.f_3="v_coroner";
Var0.f_4=Var0.f_3;
break;
case 190:
Var0={
-1604.664f, -3012.583f, -79.9999f 
};
Var0.f_3="ba_dlc_int_01_ba";
Var0.f_4=Var0.f_3;
break;
case 191:
case 212:
Var0={
-1505.783f, -3012.587f, -79.9999f 
};
Var0.f_3="ba_dlc_int_02_ba";
Var0.f_4=Var0.f_3;
break;
case 192:
Var0={
-630.4205f, -236.7843f, 37.057f 
};
Var0.f_3="V_JEWEL2";
Var0.f_4=Var0.f_3;
break;
case 193:
Var0={
2800f, -3800f, 100f 
};
Var0.f_3="xs_x18_int_01";
Var0.f_4=Var0.f_3;
break;
case 194:
Var0={
2800f, -3942f, 182.5f 
};
Var0.f_3="xs_arena_vip";
Var0.f_4=Var0.f_3;
break;
break;
case 195:
Var0={
1049.6f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware02";
Var0.f_4=Var0.f_3;
break;
case 223:
Var0={
2920f, 4470f, -100f 
};
Var0.f_3="sf_dlc_warehouse_sec";
Var0.f_4=Var0.f_3;
break;
case 196:
Var0={
1093.6f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware03";
Var0.f_4=Var0.f_3;
break;
case 197:
Var0={
1009.5f, -3196.6f, -38.5f 
};
Var0.f_3="bkr_biker_dlc_int_ware01";
Var0.f_4=Var0.f_3;
break;
case 198:
Var0={
1100f, 245f, -49f 
};
Var0.f_3="vw_dlc_casino_main";
Var0.f_4=Var0.f_3;
break;
case 199:
Var0={
1380f, 200f, -50f 
};
Var0.f_3="vw_dlc_casino_carpark";
Var0.f_4=Var0.f_3;
break;
case 200:
Var0={
976.6364f, 70.29476f, 115.1641f 
};
Var0.f_3="vw_dlc_casino_apart";
Var0.f_4=Var0.f_3;
break;
case 201:
Var0={
1295f, 230f, -50f 
};
Var0.f_3="vw_dlc_casino_garage";
Var0.f_4=Var0.f_3;
break;
case 202:
Var0={
2479.3f, -273.9f, -58f 
};
Var0.f_3="ch_DLC_Casino_Heist";
Var0.f_4=Var0.f_3;
break;
case 203:
Var0={
2730f, -380f, -49f 
};
Var0.f_3="ch_DLC_Arcade";
Var0.f_4=Var0.f_3;
break;
case 204:
Var0={
2800f, -380f, -48.5f 
};
Var0.f_3="ch_DLC_Plan";
Var0.f_4=Var0.f_3;
break;
case 205:
Var0={
2497.7f, -312.8f, -69.9f 
};
Var0.f_3="ch_DLC_Tunnel";
Var0.f_4=Var0.f_3;
break;
case 206:
Var0={
2523.4f, -270f, -58.7f 
};
Var0.f_3="ch_DLC_Casino_Back";
Var0.f_4=Var0.f_3;
break;
case 207:
Var0={
2504.4f, -257.2f, -39.1f 
};
Var0.f_3="ch_DLC_Casino_Hotel";
Var0.f_4=Var0.f_3;
break;
case 208:
Var0={
2554f, -281.4f, -64.7f 
};
Var0.f_3="ch_DLC_Casino_Loading";
Var0.f_4=Var0.f_3;
break;
case 209:
Var0={
2488.3f, -267.4f, -70.6f 
};
Var0.f_3="ch_DLC_Casino_Vault";
Var0.f_4=Var0.f_3;
break;
case 210:
Var0={
2519.9f, -255.3f, -24.1f 
};
Var0.f_3="ch_DLC_Casino_Utility";
Var0.f_4=Var0.f_3;
break;
case 211:
Var0={
2572.9f, -253.4f, -64.7f 
};
Var0.f_3="ch_dlc_casino_shaft";
Var0.f_4=Var0.f_3;
break;
case 213:
Var0={
1103.562f, -3000f, -40f 
};
Var0.f_3="gr_grdlc_int_01";
Var0.f_4=Var0.f_3;
break;
case 214:
Var0={
1210f, 1857f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 215:
Var0={
1569f, -2130f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 216:
Var0={
839f, 2176f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 217:
Var0={
982f, -143f, -50f 
};
Var0.f_3="tr_Tuner_MethLab_1";
Var0.f_4=Var0.f_3;
break;
case 218:
Var0={
-2000f, 1113.4f, 25.7f 
};
Var0.f_3="tr_tuner_car_meet";
Var0.f_4=Var0.f_3;
break;
case 219:
Var0={
-1350f, 160f, -99.2f 
};
Var0.f_3="tr_tuner_mod_garage";
Var0.f_4=Var0.f_3;
break;
case 220:
Var0={
1.1f, -705.6f, 16.1f 
};
Var0.f_3="finbank";
Var0.f_4=Var0.f_3;
break;
case 221:
Var0={
-1010f, -70f, -99.4f 
};
Var0.f_3="sf_dlc_studio_sec";
Var0.f_4=Var0.f_3;
break;
case 222:
Var0={
1550f, 250f, -50f 
};
Var0.f_3="h4_dlc_int_02_h4";
Var0.f_4=Var0.f_3;
break;
case 224:
Var0={
-935.7f, -2992.2f, 13.9f 
};
Var0.f_3="v_hanger";
Var0.f_4=Var0.f_3;
break;
case 225:
Var0={
730f, -2990f, -39f 
};
Var0.f_3="imp_imptexp_mod_int_01";
Var0.f_4=Var0.f_3;
break;
case 226:
Var0={
152.3f, -1004.4f, -97.8f 
};
Var0.f_3="v_motel_mp";
Var0.f_4=Var0.f_3;
break;
case 227:
Var0={
170f, 5190f, 10f 
};
Var0.f_3="xs_x18_int_mod2";
Var0.f_4=Var0.f_3;
break;
case 228:
Var0={
850f, -3000f, -50f 
};
Var0.f_3="reh_dlc_int_04_sum2";
Var0.f_4=Var0.f_3;
break;
case 229:
Var0={
495f, -2560f, -50f 
};
Var0.f_3="xm3_DLC_INT_04_xm3";
Var0.f_4=Var0.f_3;
break;
case 230:
Var0={
570f, -415.1f, -69.6f 
};
Var0.f_3="xm3_DLC_INT_03_xm3";
Var0.f_4=Var0.f_3;
break;
case 231:
Var0={
984.4f, -95.4f, 76.8f 
};
Var0.f_3="bkr_biker_dlc_int_03";
Var0.f_4=Var0.f_3;
break;
return Var0;
}}


struct<6> func_54(int iParam0, bool bParam1){
struct<6> Var0;
switch (iParam0){
case -1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 1:
Var0={
-794.9184f, 339.6266f, 200.4135f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 2:
Var0={
-761.0982f, 317.6259f, 169.5963f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 3:
Var0={
-761.1888f, 317.6295f, 216.0503f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 4:
Var0={
-795.3856f, 340.0188f, 152.7941f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 61:
Var0={
-778.5056f, 332.3779f, 212.1968f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 5:
Var0={
-258.1807f, -950.6853f, 70.0239f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 6:
Var0={
-285.0051f, -957.6552f, 85.3035f 
};
Var0.f_3={
0f, 0f, -110f 
};
break;
case 7:
Var0={
-1471.882f, -530.7484f, 62.34918f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 34:
Var0={
-1471.882f, -530.7484f, 49.72156f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 62:
Var0={
-1463.15f, -540.2369f, 74.2439f 
};
Var0.f_3={
0f, 0f, -145f 
};
break;
case 35:
Var0={
-885.3702f, -451.4775f, 119.327f 
};
Var0.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
Var0={
-913.0385f, -438.4284f, 114.3997f 
};
Var0.f_3={
0f, 0f, -153.3093f 
};
break;
case 37:
Var0={
-892.5499f, -430.4789f, 88.25368f 
};
Var0.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
Var0={
-35.0462f, -576.317f, 82.90739f 
};
Var0.f_3={
0f, 0f, 160f 
};
break;
case 39:
Var0={
-10.3788f, -590.7431f, 93.02542f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 65:
Var0={
-22.2487f, -589.1461f, 80.2305f 
};
Var0.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
Var0={
-900.6311f, -376.7462f, 78.27306f 
};
Var0.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
Var0={
-929.483f, -374.5104f, 102.2329f 
};
Var0.f_3={
0f, 0f, -152.5531f 
};
break;
case 63:
Var0={
-914.4202f, -375.8189f, 114.4743f 
};
Var0.f_3={
0f, 0f, -63f 
};
break;
case 42:
Var0={
-617.1647f, 64.6042f, 100.8196f 
};
Var0.f_3={
0f, 0f, 180f 
};
break;
case 43:
Var0={
-584.2015f, 42.7133f, 86.4187f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 64:
Var0={
-609.5665f, 50.2203f, 98.3998f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 73:
Var0={
-171.3969f, 494.2671f, 134.4935f 
};
Var0.f_3={
0f, 0f, 11f 
};
break;
case 74:
Var0={
339.4982f, 434.0887f, 146.2206f 
};
Var0.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
Var0={
-761.3884f, 615.7333f, 140.9805f 
};
Var0.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
Var0={
-678.1752f, 591.0076f, 142.2196f 
};
Var0.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
Var0={
120.0541f, 553.793f, 181.0943f 
};
Var0.f_3={
0f, 0f, 6f 
};
break;
case 78:
Var0={
-571.4039f, 655.2008f, 142.6293f 
};
Var0.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
Var0={
-742.2565f, 587.6547f, 143.0577f 
};
Var0.f_3={
0f, 0f, -29f 
};
break;
case 80:
Var0={
-857.2222f, 685.051f, 149.6502f 
};
Var0.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
Var0={
-1287.65f, 443.2707f, 94.6919f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 82:
Var0={
374.2012f, 416.9688f, 142.6977f 
};
Var0.f_3={
0f, 0f, -14f 
};
break;
case 83:
Var0={
-787.7805f, 334.9232f, 186.1134f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 84:
Var0={
-787.7805f, 334.9232f, 215.8384f 
};
Var0.f_3={
0f, 0f, 90f 
};
break;
case 85:
Var0={
-773.2258f, 322.8252f, 194.8862f 
};
Var0.f_3={
0f, 0f, -90f 
};
break;
case 86:
Var0={
-1573.098f, -4085.806f, 9.7851f 
};
Var0.f_3={
0f, 0f, 162f 
};
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
Var0={
342.8157f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
Var0={
260.3297f, -997.4288f, -100f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 87:
Var0={
-1572.187f, -570.8315f, 109.9879f 
};
Var0.f_3={
0f, 0f, -54f 
};
break;
case 88:
Var0={
-1383.954f, -476.7112f, 73.507f 
};
Var0.f_3={
0f, 0f, 8f 
};
break;
case 89:
Var0={
-138.0029f, -629.739f, 170.2854f 
};
Var0.f_3={
0f, 0f, -84f 
};
break;
case 90:
Var0={
-74.8895f, -817.6883f, 244.8508f 
};
Var0.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
Var0={
1100.764f, -3159.384f, -34.9342f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
Var0={
1005.806f, -3157.67f, -36.0897f 
};
Var0.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
Var0={
-1576.571f, -569.7595f, 85.5f 
};
Var0.f_3={
0f, 0f, 36.1f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
Var0={
-1571.254f, -566.5865f, 85.5f 
};
Var0.f_3={
0f, 0f, -53.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
Var0={
-1568.098f, -571.9171f, 85.5f 
};
Var0.f_3={
0f, 0f, -143.9f 
};
}else{
Var0={
-1578.022f, -576.4251f, 104.2f 
};
Var0.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
Var0={
-1384.518f, -475.8657f, 56.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
Var0={
-1384.538f, -475.8829f, 48.1f 
};
Var0.f_3={
0f, 0f, 98.7f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
Var0={
-1378.994f, -477.2481f, 56.1f 
};
Var0.f_3={
0f, 0f, -81.1f 
};
}else{
Var0={
-1391.245f, -473.9638f, 77.2f 
};
Var0.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
Var0={
-186.5683f, -576.4624f, 135f 
};
Var0.f_3={
0f, 0f, 96.16f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
Var0={
-113.886f, -564.3862f, 135f 
};
Var0.f_3={
0f, 0f, 110.96f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
Var0={
-134.6568f, -635.1774f, 135f 
};
Var0.f_3={
0f, 0f, -9.04f 
};
}else{
Var0={
-146.6167f, -596.6301f, 166f 
};
Var0.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
Var0={
-79.0479f, -822.6393f, 221f 
};
Var0.f_3={
0f, 0f, 70f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
Var0={
-70.3086f, -819.5784f, 221f 
};
Var0.f_3={
0f, 0f, 160f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
Var0={
-79.9861f, -818.425f, 221f 
};
Var0.f_3={
0f, 0f, -20f 
};
}else{
Var0={
-73.904f, -821.6204f, 284f 
};
Var0.f_3={
0f, 0f, -110f 
};
}
break;
}
return Var0;
}

int func_55(int iParam0){
int iVar0;
if(iParam0==94 || iParam0==-1){
return 0;
}
if(Global_94666[iParam0 /*2*/]){
return 1;
}
iVar0=0;
while (iVar0 < Global_91433){
if(Global_91433[iVar0 /*5*/] !=-1){
if(Global_78828.f_109[Global_91433[iVar0 /*5*/] /*4*/]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}


Vector3 func__56(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


bool func_57(){
return Global_1575060;
}

int func_58(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}


bool func_59(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}


bool func_60(){
return MISC::IS_BIT_SET(Global_78807, 9);
}


bool func_61(){
return MISC::IS_BIT_SET(Global_78807, 8);
}

int func_62(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3)){
return 1;
}}
return 0;
}

int func_63(){
int iVar0;
if(func_72()){
iVar0=0;
while (iVar0 < 60){
if(func_64(iVar0)){
return 1;
}
iVar0++;
}}
return 0;
}


bool func_64(int iParam0){
return func_65(iParam0, 20, 1);
}

int func_65(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_70()==0){
return MISC::IS_BIT_SET(func_66(func_69(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_66(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_67(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_67(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_68();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_68(){
return Global_1574918;
}

int func_69(int iParam0){
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

int func_70(){
return Global_32163;
}


bool func_71(){
return Global_100733.f_388 > 0;
}


bool func_72(){
return Global_100733.f_387 > 0;
}


bool func_73(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}

int func_74(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


bool func_75(){
return Global_100720.f_1;
}


bool func_76(){
return Global_78826;
}

int func_77(){
if(Global_78819){
return 1;
}elseif(Global_63356 && !Global_63362){
return 1;
}
return 0;
}

int func_78(){
if(Global_43257==15){
return 0;
}
return 1;
}


void func_79(int iParam0, int iParam1){
MISC::SET_BIT(&Global_32415, iParam0);
Global_32416=iParam1;
}

int func_80(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_24[iParam1];
}


void func_81(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_82(){
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
uVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar0, 0);
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

int func_83(int iParam0){
if((Global_22839 || Global_22838) || Global_22840){
if(iParam0==130){
}else{
return 0;
}}
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


void func_84(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20372, 1);
}}


void func_85(){
if(Global_20361==0){
if(func_163(2, Global_20352, 0)){
MISC::CLEAR_BIT(&Global_8254, 0);
iLocal_88=0;
func_161();
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
iLocal_78=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
if(func_114(Global_7568)){
if(iLocal_78==0){
if(bLocal_288){
Global_22839=0;
Global_22838=0;
Global_22840=1;
func_97();
}else{
Global_22839=0;
Global_22838=0;
Global_22840=0;
func_97();
}}
if(iLocal_78==1){
if(bLocal_288){
Global_22839=0;
Global_22838=0;
Global_22840=0;
func_97();
}elseif(func_87(Global_7568, Global_20383)){
func_86();
iLocal_88=1;
}else{
Global_22839=1;
Global_22838=0;
Global_22840=0;
func_97();
}}
if(iLocal_78==2){
if(func_87(Global_7568, Global_20383)){
func_86();
iLocal_88=1;
}else{
Global_22839=1;
Global_22838=0;
Global_22840=0;
func_97();
}}}else{
if(iLocal_78==0){
if(bLocal_288){
Global_22839=0;
Global_22838=0;
Global_22840=1;
func_97();
}elseif(func_87(Global_7568, Global_20383)){
func_86();
iLocal_88=1;
}else{
Global_22839=1;
Global_22838=0;
Global_22840=0;
func_97();
}}
if(iLocal_78==1){
if(func_87(Global_7568, Global_20383)){
func_86();
iLocal_88=1;
}else{
Global_22839=1;
Global_22838=0;
Global_22840=0;
func_97();
}}}}}}


void func_86(){
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
func_160(Global_20364, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_158(Global_20364, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_87(int iParam0, int iParam1){
int iVar0;
iVar0=func_96();
if((iParam0 >=iVar0 || iParam1 >=iVar0) || iParam0==iParam1){
return 0;
}
if(!func_28(6) && !func_28(7)){
if(func_88(iParam0, iParam1)){
return 1;
}}
return 0;
}

int func_88(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=func_96();
if((iParam0 >=iVar0 || iParam1 >=iVar0) || iParam0==iParam1){
return 0;
}
if(!func_93(6)){
iVar1=func_91(iParam0);
iVar2=func_91(iParam1);
if(iVar1 !=7 && iVar2 !=7){
iVar3=func_90(iVar1, iVar2);
if(iVar3 !=10){
iVar4=func_89(iVar3);
if(iVar4==3 || iVar4==4){
return 1;
}}}}
return 0;
}

int func_89(int iParam0){
if(iParam0 < 9){
return Global_96537[iParam0 /*2*/];
}
return -1;
}

int func_90(int iParam0, int iParam1){
int iVar0;
if((iParam0 !=0 && iParam0 !=1) && iParam0 !=2){
if((iParam1==0 || iParam1==1) || iParam1==2){
iVar0=iParam1;
iParam1=iParam0;
iParam0=iVar0;
}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 10;
break;
case 4:
return 5;
break;
case 5:
return 8;
break;
default:
return 10;
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 10;
break;
case 2:
return 1;
break;
case 3:
return 3;
break;
case 4:
return 6;
break;
case 5:
return 10;
break;
default:
return 10;
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 2;
break;
case 1:
return 1;
break;
case 2:
return 10;
break;
case 3:
return 4;
break;
case 4:
return 7;
break;
case 5:
return 10;
break;
default:
return 10;
break;
}
break;
}
return 10;
}

int func_91(int iParam0){
if(iParam0==145){
return 7;
}
if(iParam0 < func_96()){
return func_92(iParam0);
}
if(iParam0==144){
return 7;
}
if(iParam0==func_96()){
return 6;
}
if(iParam0==191){
return 6;
}
return 6;
}


var func__92(int iParam0){
return Global_2028[iParam0 /*29*/].f_11;
}

int func_93(int iParam0){
if(Global_43257==15){
return 0;
}
if(func_94(iParam0)){
return 0;
}
return 1;
}


bool func_94(int iParam0){
return func_95(iParam0, Global_43257);
}

int func_95(int iParam0, int iParam1){
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

int func_96(){
if(Global_32163==0 || Global_32163==2){
return 190;
}
return 161;
}


void func_97(){
if(Global_20383.f_1 > 3){
Global_20383.f_1=10;
func_113();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_112()){
func_111();
}}elseif(func_110()==0){
func_111();
}}}
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
func_109();
func_160(Global_20364, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(func_80(Global_7568, Global_20383)==0){
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_211", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_102();
if(Global_78558){
func_98(1918, 1, -1);
}}


void func_98(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_66(iParam0, func_67(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_101(iParam0)){
func_100(iParam0, iVar0, iParam2, 1, 0);
}else{
func_99(iParam0, iVar0, iParam2, 1);
}}


void func_99(int iParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_67(uParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_67(uParam2)]=iParam1;
break;
case 789:
Global_1665572[func_67(uParam2)]=iParam1;
break;
case 790:
Global_1665578[func_67(uParam2)]=iParam1;
break;
case 791:
Global_1665584[func_67(uParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_67(uParam2)]=iParam1;
break;
case 778:
Global_1665536[func_67(uParam2)]=iParam1;
break;
case 779:
Global_1665542[func_67(uParam2)]=iParam1;
break;
case 780:
Global_1665548[func_67(uParam2)]=iParam1;
break;
case 781:
Global_1665554[func_67(uParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_67(uParam2)]=iParam1;
break;
case 768:
Global_1665506[func_67(uParam2)]=iParam1;
break;
case 769:
Global_1665512[func_67(uParam2)]=iParam1;
break;
case 770:
Global_1665518[func_67(uParam2)]=iParam1;
break;
case 771:
Global_1665524[func_67(uParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_67(uParam2)]=iParam1;
break;
case 758:
Global_1665596[func_67(uParam2)]=iParam1;
break;
case 759:
Global_1665602[func_67(uParam2)]=iParam1;
break;
case 760:
Global_1665608[func_67(uParam2)]=iParam1;
break;
case 761:
Global_1665614[func_67(uParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_67(uParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_67(uParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_67(uParam2)]=iParam1;
break;
case 640:
Global_1665638[func_67(uParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_67(uParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_67(uParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_67(uParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_67(uParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_67(uParam2)]=iParam1;
break;
case 765:
Global_1665650[func_67(uParam2)]=iParam1;
break;
case 766:
Global_1665656[func_67(uParam2)]=iParam1;
break;
case 767:
Global_1665662[func_67(uParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_67(uParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_67(uParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_67(uParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_67(uParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_67(uParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_67(uParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_67(uParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_67(uParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_67(uParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_67(uParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_67(uParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_67(uParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_67(uParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_67(uParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_67(uParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_67(uParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_67(uParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_67(uParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_67(uParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_67(uParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_67(uParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_67(uParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_67(uParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_67(uParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_67(uParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_67(uParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_67(uParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_67(uParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_67(uParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_67(uParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_67(uParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_67(uParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_67(uParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_67(uParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_67(uParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_67(uParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_67(uParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_67(uParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_67(uParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_67(uParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_67(uParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_67(uParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_67(uParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_67(uParam2)]=iParam1;
break;
default:
break;
}}


void func_100(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_67(uParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_101(int iParam0){
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


void func_102(){
char cVar0[24];
if(Global_20366==1){
return;
}
if(Global_20383.f_1 < 4){
return;
}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(Global_78558){
return;
}
wait(0);
}
switch (Global_20383.f_1){
case 6:
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_8858);
if(Global_8858==1){
func_160(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20387;
}else{
func_160(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20388), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20388;
}
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20586==0){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==1){
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8253, 17);
}
if(Global_78558){
func_106();
MISC::CLEAR_BIT(&Global_8255, 9);
func_160(Global_20364, "DISPLAY_VIEW", 1f, to_float(Global_20387), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20382==1){
func_105();
func_160(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
func_81("CELL_217");
func_81("CELL_217");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_80(Global_7568, Global_20383)==0){
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21725==4 || Global_21725==3){
func_160(Global_20364, "SET_THEME", to_float(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_105();
if(Global_21738){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
func_81("CELL_219");
func_81("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_21983){
StringCopy(&cVar0, "CELL_219", 24);
}else{
StringCopy(&cVar0, "CELL_211", 24);
}
if(func_80(Global_7568, Global_20383)==0){
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
}else{
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &cVar0, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_103();
break;
default:
break;
}}


void func_103(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_104();
if(Global_20382==1){
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21772){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_8253, 20)){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(MISC::IS_BIT_SET(Global_8253, 20)){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20326){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_104(){
if(Global_78558){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}}


void func_105(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20383==0){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}
if(Global_20383==1){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
default:
break;
}}
if(Global_20383==2){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
default:
break;
}}
if(Global_20383==3){
switch (Global_4542573){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}}}


void func_106(){
if(Global_78558){
if(func_107()==0){
return;
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}}

int func_107(){
return 0;
}


void func_108(int iParam0){
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
if(func_28(14)){
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
func_81(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694521){
if(iVar1==14){
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22793), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(Global_22788), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_81(&(Global_8260[iVar1 /*15*/]));
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
func_81(&(Global_8260[iVar1 /*15*/]));
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
func_81(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_81(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8260[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8254, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_81(&(Global_8260[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890001.f_1;
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8260[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8260[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8822[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_109(){
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2){
Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2){
Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
}
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2){
Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
}
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
}

int func_110(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20383.f_1==10 || Global_20383.f_1==9){
if(Global_20326==0){
if(Global_7568 !=128){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_21725 !=2){
}}}}}
if(func_28(14)){
return 0;
}
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
return 0;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
if(ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))){
return 0;
}}}
if(((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(MISC::IS_BIT_SET(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)))){
return 0;
}
if(Global_112696){
return 0;
}}
if(Global_78558){
return 0;
}
iVar2=0;
iVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
if(iVar1==4 && (iVar0==0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())){
iVar2=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("toro")){
iVar2=0;
}}}}
if(Global_4542575 || iVar2==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0){
return 1;
}else{
return 0;
}}else{
return 1;
}}
return 0;
}


void func_111(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_112() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
iVar1=1;
}}
if(!Global_78558){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1==0){
iVar2=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
if(Global_78558){
if(((((iVar2==15 || iVar2==16) || iVar2==17) || iVar2==18) || iVar2==19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
iVar0=1;
}}elseif(PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
iVar0=1;
}
if(!Global_20326){
if(Global_7568 !=128){
if(iVar0==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
}else{
if(Global_78558){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
}
MISC::SET_BIT(&Global_8253, 11);
TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
}
}}}}}}}

int func_112(){
var uVar0;
int iVar1;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
return 1;
}
return 0;
}


void func_113(){
struct<2> Var0;
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20336[Global_20328 /*3*/].f_1==Var0.f_1){}else{
Global_20323=1;
}}

int func_114(int iParam0){
int iVar0;
if(func_115(iParam0)){
return 0;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_650){
if(Global_113648.f_7690.f_199[iVar0 /*15*/].f_6==iParam0){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113648.f_7690.f_136){
if(Global_113648.f_7690[iVar0 /*15*/].f_6==iParam0){
if(MISC::IS_BIT_SET(Global_113648.f_7690[iVar0 /*15*/].f_1, 7)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_115(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 7){
iVar1=Global_91433[iVar0 /*5*/];
if(iVar1 !=-1){
iVar2=-1;
iVar2=Global_78828.f_109[Global_91433[iVar0 /*5*/] /*4*/];
if(iVar2 !=-1){
if(func_116(Global_91469[iVar2 /*34*/].f_12, iParam0)){
return 1;
}}}
iVar0++;
}
return 0;
}


bool func_116(var uParam0, int iParam1){
switch (iParam1){
case 19:
return func_118(uParam0, 8);
break;
case 14:
return func_118(uParam0, 16);
break;
case 17:
return func_118(uParam0, 32);
break;
}
return func_117(uParam0, iParam1);
}

int func_117(var uParam0, int iParam1){
switch (iParam1){
case 0:
case 1:
case 2:
return MISC::IS_BIT_SET(uParam0, iParam1);
default:
}
return 0;
}


bool func_118(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_119(){
if(Global_20361==0){
if(func_163(2, Global_20352, 0)){
MISC::CLEAR_BIT(&Global_8254, 0);
func_161();
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
iLocal_78=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
if(iLocal_78==0){
Global_22834[Global_20383]=1;
iLocal_87=0;
Global_22839=0;
Global_22838=1;
Global_22840=0;
func_97();
}else{
iLocal_88=0;
func_134();
}}}}


void func_120(char* sParam0, int iParam1){
int iVar0;
int iVar1;
if(Global_112288 && iParam1){
if(func_124(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT()){
HUD::CLEAR_HELP(0);
}}
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113648.f_20412[iVar0 /*16*/]))){
iVar1=iVar0;
while (iVar1 <=(Global_113648.f_20412.f_145 - 2)){
func_123(iVar1, iVar1 + 1);
iVar1++;
}
func_122((Global_113648.f_20412.f_145 - 1));
Global_113648.f_20412.f_145=(Global_113648.f_20412.f_145 - 1);
func_121();
return;
}
iVar0++;
}}


void func_121(){
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


void func_122(int iParam0){
StringCopy(&(Global_113648.f_20412[iParam0 /*16*/]), "", 16);
StringCopy(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
Global_113648.f_20412[iParam0 /*16*/].f_8=0;
Global_113648.f_20412[iParam0 /*16*/].f_9=0;
Global_113648.f_20412[iParam0 /*16*/].f_11=0;
Global_113648.f_20412[iParam0 /*16*/].f_10=-1;
Global_113648.f_20412[iParam0 /*16*/].f_12=0;
Global_113648.f_20412[iParam0 /*16*/].f_13=0;
Global_113648.f_20412[iParam0 /*16*/].f_14=0;
Global_113648.f_20412[iParam0 /*16*/].f_15=0;
}


void func_123(int iParam0, int iParam1){
Global_113648.f_20412[iParam0 /*16*/]={
Global_113648.f_20412[iParam1 /*16*/] 
};
Global_113648.f_20412[iParam0 /*16*/].f_4={
Global_113648.f_20412[iParam1 /*16*/].f_4 
};
Global_113648.f_20412[iParam0 /*16*/].f_8=Global_113648.f_20412[iParam1 /*16*/].f_8;
Global_113648.f_20412[iParam0 /*16*/].f_10=Global_113648.f_20412[iParam1 /*16*/].f_10;
Global_113648.f_20412[iParam0 /*16*/].f_9=Global_113648.f_20412[iParam1 /*16*/].f_9;
Global_113648.f_20412[iParam0 /*16*/].f_11=Global_113648.f_20412[iParam1 /*16*/].f_11;
Global_113648.f_20412[iParam0 /*16*/].f_12=Global_113648.f_20412[iParam1 /*16*/].f_12;
Global_113648.f_20412[iParam0 /*16*/].f_13=Global_113648.f_20412[iParam1 /*16*/].f_13;
Global_113648.f_20412[iParam0 /*16*/].f_14=Global_113648.f_20412[iParam1 /*16*/].f_14;
Global_113648.f_20412[iParam0 /*16*/].f_15=Global_113648.f_20412[iParam1 /*16*/].f_15;
}


var func__124(var uParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_126(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_126(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
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
func_121();
}}

int func_127(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112291)){
return 1;
}
if(func_128(sParam0)){
return 0;
}
return 2;
}

int func_128(char* sParam0){
int iVar0;
iVar0=0;
while (iVar0 < Global_113648.f_20412.f_145){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113648.f_20412[iVar0 /*16*/]))){
return 1;
}
iVar0++;
}
return 0;
}

int func_129(int iParam0){
return 0;
if(((iParam0==92 || iParam0==68) || iParam0==79) || iParam0==34){
return 0;
}
return 1;
}

int func_130(int iParam0, int iParam1){
int iVar0;
int iVar1;
return 0;
iVar0=func_96();
if((iParam0 >=iVar0 || iParam1 >=iVar0) || iParam0==iParam1){
return 0;
}
if((Global_96528 !=-1 && MISC::IS_BIT_SET(Global_91469[Global_96528 /*34*/].f_15, 15)) && MISC::IS_BIT_SET(Global_96529, iParam1)){
if(Global_96527 !=5 || func_133()==Global_96528){
if(!func_132(12)){
if(func_131(iParam0, iParam1, &iVar1) && func_89(iVar1)==0){
return 1;
}}}}
return 0;
}

int func_131(int iParam0, int iParam1, var uParam2){
int iVar0;
int iVar1;
iVar0=func_91(iParam0);
iVar1=func_91(iParam1);
if(iVar0 !=7 && iVar1 !=7){
*uParam2=func_90(iVar0, iVar1);
if(*uParam2 !=10){
return 1;
}}
*uParam2=10;
return 0;
}


bool func_132(int iParam0){
return MISC::IS_BIT_SET(Global_96536, iParam0);
}

int func_133(){
return Global_78821;
}


void func_134(){
settimera(0);
if(Global_20383.f_1 > 3){
Global_20383.f_1=8;
}
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
iLocal_87=1;
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
if(func_114(Global_7568)){
if(bLocal_288){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, &(Global_8091[iLocal_290 /*16*/].f_8), 0, 0, 0, 0);
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
if(bLocal_289){
if(func_135(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
}
if(func_87(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
}}}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
if(bLocal_289){
if(func_135(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
}
if(func_87(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
}}}}elseif(bLocal_288){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, &(Global_8091[iLocal_290 /*16*/].f_8), 0, 0, 0, 0);
if(bLocal_289){
if(func_135(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
}
if(func_87(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
}}}elseif(bLocal_289){
if(func_135(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
}
if(func_87(Global_7568, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
}}
func_160(Global_20364, "DISPLAY_VIEW", 18f, to_float(iLocal_75), -1082130432, -1082130432, -1082130432);
func_158(Global_20364, "SET_HEADER", &(Global_2028[Global_7568 /*29*/].f_3), 0, 0, 0, 0);
}

int func_135(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_96();
if((iParam0 >=iVar0 || iParam1 >=iVar0) || iParam0==iParam1){
return 0;
}
if((iParam0==1 && iParam1==0) || (iParam0==0 && iParam1==1)){
if(func_8(90) && !func_8(20)){
return 0;
}}
if(!func_93(6)){
if(func_131(iParam0, iParam1, &iVar1) && func_89(iVar1)==0){
return 1;
}}
return 0;
}


void func_136(){
int iVar0;
int iVar1;
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
char* sVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
}
if(func_163(2, Global_20352, 0)){
func_161();
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
iVar0=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
iLocal_80=Global_9044[iVar0];
uLocal_82[0]=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8961[iLocal_80 /*5*/]));
if(MISC::ARE_STRINGS_EQUAL(uLocal_82[0], "*")){
cLocal_83={
Global_9027[Global_20383 /*4*/] 
};
iLocal_81=HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83);
}elseif(HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83) < 14){
StringConCat(&cLocal_83, uLocal_82[0], 16);
iLocal_81++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_HEADER");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(func_163(2, 178, 0)){
func_84();
Global_20361=1;
if(HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83) > 0){
StringCopy(&cLocal_83, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 0, (iLocal_81 - 1)), 16);
iLocal_81=(iLocal_81 - 1);
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_HEADER");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(func_163(2, Global_20355, 0)){
if(!func_146()){
func_161();
Global_9027[Global_20383 /*4*/]={
cLocal_83 
};
Global_7568=144;
iLocal_278=0;
if(Global_20383.f_1 > 3){
Global_20383.f_1=10;
func_113();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_112()){
func_111();
}
}
elseif(func_110()==0){
func_111();
}}}}
iVar1=0;
iLocal_92=0;
iVar3=func_96();
while (iVar1 < iVar3){
iVar4=iVar1;
if(iVar4 !=146){
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_117[iVar1 /*10*/].f_4));
if(MISC::ARE_STRINGS_EQUAL(sVar2, &cLocal_83)){
if((func_145(iVar4, Global_20383)==1 || func_145(iVar4, Global_20383)==2) || MISC::ARE_STRINGS_EQUAL(sVar2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_117[130 /*10*/].f_4)))){
Global_7568=iVar4;
}
else{
iLocal_92=1;
}}}
iVar1++;
}
if((Global_7568==144 && iLocal_278==0) && iLocal_92==0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
func_81("CELL_211");
func_81("CELL_195");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
iLocal_278=0;
iVar5=0;
while (iVar5 < 37){
sVar6=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_7572[iVar5 /*14*/]));
if(MISC::ARE_STRINGS_EQUAL(sVar6, &cLocal_83)){
iLocal_278=1;
cLocal_279={
Global_7572[iVar5 /*14*/].f_4 
};
Local_282={
Global_7572[iVar5 /*14*/].f_8 
};
}
iVar5++;
}
if(iLocal_278==0){
iLocal_86=HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83);
if(iLocal_86 > 6){
StringCopy(&(uLocal_286[0]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 0, 1), 4);
StringCopy(&(uLocal_286[1]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 1, 2), 4);
StringCopy(&(uLocal_286[2]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 2, 3), 4);
StringCopy(&(uLocal_286[3]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 3, 4), 4);
StringCopy(&(uLocal_286[4]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 4, 5), 4);
StringCopy(&(uLocal_286[5]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 5, 6), 4);
if(((MISC::ARE_STRINGS_EQUAL(&(uLocal_286[0]), "1") && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[1]), "9")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[2]), "9")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[3]), "9")){
iVar7=func_144(&(uLocal_286[4]));
iVar8=func_144(&(uLocal_286[5]));
func_143(iVar7, iVar8);
iLocal_278=1;
}
if(iLocal_278==0){
if(iLocal_86==10 || iLocal_86==7){
if(iLocal_86==10){
StringCopy(&(uLocal_286[0]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 3, 4), 4);
StringCopy(&(uLocal_286[1]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 4, 5), 4);
StringCopy(&(uLocal_286[2]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 5, 6), 4);
StringCopy(&(uLocal_286[3]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 6, 7), 4);
StringCopy(&(uLocal_286[4]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 7, 8), 4);
StringCopy(&(uLocal_286[5]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 8, 9), 4);
StringCopy(&(uLocal_286[6]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 9, 10), 4);
}else{
StringCopy(&(uLocal_286[0]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 0, 1), 4);
StringCopy(&(uLocal_286[1]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 1, 2), 4);
StringCopy(&(uLocal_286[2]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 2, 3), 4);
StringCopy(&(uLocal_286[3]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 3, 4), 4);
StringCopy(&(uLocal_286[4]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 4, 5), 4);
StringCopy(&(uLocal_286[5]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 5, 6), 4);
StringCopy(&(uLocal_286[6]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 6, 7), 4);
}
if((((MISC::ARE_STRINGS_EQUAL(&(uLocal_286[0]), "5") && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[1]), "5")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[2]), "5")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[3]), "0")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_286[4]), "1")){
iVar9=func_144(&(uLocal_286[5]));
iVar10=func_144(&(uLocal_286[6]));
func_143(iVar9, iVar10);
iLocal_278=1;
}}
}}}}else{
if(func_145(Global_7568, Global_20383)==2 || Global_7568==130){
func_142(Global_7568, Global_20383, 1);
if(Global_7568==130){
if(!func_145(130, 0)==1){
func_138(130, 4, 1);
func_138(130, 3, 0);
}
if(Global_78558){
if(!func_137(130, 3)){
func_138(130, 3, 1);
}
}}}
if(func_80(Global_7568, Global_20383)==0){
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_211", &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_102();
}}}

int func_137(int iParam0, int iParam1){
if(func_145(iParam0, iParam1)==1){
return 1;
}
return 0;
}


void func_138(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8939=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=169){
func_21();
if(iParam1==4){
func_141(iParam0, 0, 1);
func_141(iParam0, 1, 1);
func_141(iParam0, 2, 1);
func_142(iParam0, 0, 1);
func_142(iParam0, 1, 1);
func_142(iParam0, 2, 1);
}else{
if(func_145(iParam0, iParam1)==1 && func_80(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_141(iParam0, iVar0, 1);
func_142(iParam0, iVar0, 1);
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
func_140(iParam0) 
};
Global_8929[iParam1]=1;
Global_8934[iParam1]=iParam0;
}elseif(iParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
func_140(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_139();
}}else{
Global_8863[1 /*6*/]={
func_140(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_139();
}}else{
Global_8863[1 /*6*/]={
func_140(iParam0) 
};
Global_8863[1 /*6*/].f_5=iParam1;
func_139();
}}}}


void func_139(){
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


struct<4> func_140(int iParam0){
return Global_2028[iParam0 /*29*/].f_3;
}


void func_141(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}


void func_142(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2028[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_143(int iParam0, int iParam1){
int iVar0;
iVar0=(iParam0 + iParam1);
iVar0=(20 - iVar0);
iVar0 +=5;
switch (iVar0){
case 7:
StringCopy(&cLocal_279, "ANS_RAN1", 16);
StringCopy(&Local_282, "ANS_M_USA1", 24);
break;
case 8:
StringCopy(&cLocal_279, "ANS_RAN2", 16);
StringCopy(&Local_282, "ANS_F_USA1", 24);
break;
case 9:
StringCopy(&cLocal_279, "ANS_RAN3", 16);
StringCopy(&Local_282, "ANS_M_ENG1", 24);
break;
case 10:
StringCopy(&cLocal_279, "ANS_RAN4", 16);
StringCopy(&Local_282, "ANS_M_USA2", 24);
break;
case 11:
StringCopy(&cLocal_279, "ANS_RAN5", 16);
StringCopy(&Local_282, "ANS_M_ASIAN", 24);
break;
case 12:
StringCopy(&cLocal_279, "ANS_RAN6", 16);
StringCopy(&Local_282, "ANS_F_USA2", 24);
break;
case 13:
StringCopy(&cLocal_279, "ANS_RAN7", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
case 14:
StringCopy(&cLocal_279, "ANS_RAN8", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
case 15:
StringCopy(&cLocal_279, "ANS_RAN9", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
case 16:
StringCopy(&cLocal_279, "ANS_RAN10", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
case 17:
StringCopy(&cLocal_279, "ANS_RAN1", 16);
StringCopy(&Local_282, "ANS_M_USA1", 24);
break;
case 18:
StringCopy(&cLocal_279, "ANS_RAN2", 16);
StringCopy(&Local_282, "ANS_F_USA1", 24);
break;
case 19:
StringCopy(&cLocal_279, "ANS_RAN3", 16);
StringCopy(&Local_282, "ANS_M_ENG1", 24);
break;
case 20:
StringCopy(&cLocal_279, "ANS_RAN4", 16);
StringCopy(&Local_282, "ANS_M_USA2", 24);
break;
case 21:
StringCopy(&cLocal_279, "ANS_RAN5", 16);
StringCopy(&Local_282, "ANS_M_ASIAN", 24);
break;
case 22:
StringCopy(&cLocal_279, "ANS_RAN6", 16);
StringCopy(&Local_282, "ANS_F_USA2", 24);
break;
case 23:
StringCopy(&cLocal_279, "ANS_RAN7", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
case 24:
StringCopy(&cLocal_279, "ANS_RAN8", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
case 25:
StringCopy(&cLocal_279, "ANS_RAN9", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
default:
StringCopy(&cLocal_279, "ANS_RAN8", 16);
StringCopy(&Local_282, "ANSWER_FX", 24);
break;
}}

int func_144(char* sParam0){
if(MISC::ARE_STRINGS_EQUAL(sParam0, "0")){
return 0;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "1")){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "2")){
return 2;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "3")){
return 3;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "4")){
return 4;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "5")){
return 5;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "6")){
return 6;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "7")){
return 7;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "8")){
return 8;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "9")){
return 9;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "A")){
return 10;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "B")){
return 11;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "C")){
return 12;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "D")){
return 13;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "E")){
return 14;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "F")){
return 15;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "G")){
return 16;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "H")){
return 17;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "I")){
return 18;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "J")){
return 19;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "K")){
return 20;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "L")){
return 21;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "M")){
return 22;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "N")){
return 23;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "O")){
return 24;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "P")){
return 25;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "Q")){
return 26;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "R")){
return 27;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "S")){
return 28;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "T")){
return 29;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "U")){
return 30;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "V")){
return 31;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "W")){
return 32;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "X")){
return 33;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "Y")){
return 34;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "Z")){
return 35;
}
if(MISC::ARE_STRINGS_EQUAL(sParam0, "z")){
return -1;
}
return -1;
}

int func_145(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

int func_146(){
if(Global_78558){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())){
return 1;
}else{
return 0;
}}
return 0;
}


void func_147(){
if(Global_20362){
if(timera() > 50){
Global_20362=0;
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 180)){
switch (Global_20363){
case 0:
func_155();
Global_20363=1;
break;
case 1:
func_155();
Global_20363=2;
break;
case 2:
func_155();
func_153();
Global_20363=3;
break;
case 3:
func_155();
Global_20363=4;
break;
case 4:
func_155();
Global_20363=5;
break;
case 5:
func_155();
func_153();
Global_20363=6;
break;
case 6:
func_155();
Global_20363=7;
break;
case 7:
func_155();
Global_20363=8;
break;
case 8:
func_155();
func_153();
Global_20363=9;
break;
case 9:
func_155();
Global_20363=10;
break;
case 10:
func_155();
Global_20363=11;
break;
case 11:
func_155();
func_153();
Global_20363=0;
break;
}}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 181)){
switch (Global_20363){
case 0:
func_151();
func_148();
Global_20363=11;
break;
case 1:
func_151();
Global_20363=0;
break;
case 2:
func_151();
Global_20363=1;
break;
case 3:
func_151();
func_148();
Global_20363=2;
break;
case 4:
func_151();
Global_20363=3;
break;
case 5:
func_151();
Global_20363=4;
break;
case 6:
func_151();
func_148();
Global_20363=5;
break;
case 7:
func_151();
Global_20363=6;
break;
case 8:
func_151();
Global_20363=7;
break;
case 9:
func_151();
func_148();
Global_20363=8;
break;
case 10:
func_151();
Global_20363=9;
break;
case 11:
func_151();
Global_20363=10;
break;
}}}
if(Global_20362==0){
if(func_163(2, Global_20358, 0)){
func_155();
Global_20362=1;
settimera(0);
switch (Global_20383.f_1){
case 6:
if(Global_20363 < (34 - 1)){
Global_20363++;
}
break;
case 5:
if(Global_20363 < 3){
Global_20363++;
}
break;
}}
if(func_163(2, Global_20357, 0)){
func_151();
Global_20362=1;
settimera(0);
if(Global_20363 > 0){
Global_20363=(Global_20363 - 1);
}}
if(func_163(2, Global_20359, 0)){
func_148();
Global_20362=1;
settimera(0);
if(Global_20363 > 3){
Global_20363=(Global_20363 - 4);
}}
if(func_163(2, Global_20360, 0)){
func_153();
Global_20362=1;
settimera(0);
if(Global_20363 < 8){
Global_20363 +=4;
}}}}


void func_148(){
func_160(Global_20364, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_149();
}


void func_149(){
if(func_150()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(1);
}else{
MOBILE::CELL_SET_INPUT(2);
}}}

int func_150(){
var uVar0;
int iVar1;
int iVar2;
if(Global_78558){
return 0;
}
iVar2=0;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
iVar2=1;
}
if(Global_4542575 || iVar2){
return 1;
}
return 1;
}


void func_151(){
func_160(Global_20364, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_152();
}


void func_152(){
if(func_150()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(3);
}else{
MOBILE::CELL_SET_INPUT(4);
}}}


void func_153(){
func_160(Global_20364, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_154();
}


void func_154(){
if(func_150()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(2);
}else{
MOBILE::CELL_SET_INPUT(1);
}}}


void func_155(){
func_160(Global_20364, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
func_156();
}


void func_156(){
if(func_150()){
if(Global_20589==0){
MOBILE::CELL_SET_INPUT(4);
}else{
MOBILE::CELL_SET_INPUT(3);
}}}


void func_157(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11){
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
func_81(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_81(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_81(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_81(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_81(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_158(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
func_81(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
func_81(sParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
func_81(sParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
func_81(sParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
func_81(sParam6);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_159(){
int iVar0[12];
int iVar1;
int iVar2;
StringCopy(&(Global_8961[0 /*5*/]), "CELL_900", 16);
Global_8961[0 /*5*/].f_4=10;
StringCopy(&(Global_8961[1 /*5*/]), "CELL_901", 16);
Global_8961[1 /*5*/].f_4=0;
StringCopy(&(Global_8961[2 /*5*/]), "CELL_902", 16);
Global_8961[2 /*5*/].f_4=1;
StringCopy(&(Global_8961[3 /*5*/]), "CELL_903", 16);
Global_8961[3 /*5*/].f_4=2;
StringCopy(&(Global_8961[4 /*5*/]), "CELL_904", 16);
Global_8961[4 /*5*/].f_4=3;
StringCopy(&(Global_8961[5 /*5*/]), "CELL_905", 16);
Global_8961[5 /*5*/].f_4=4;
StringCopy(&(Global_8961[6 /*5*/]), "CELL_906", 16);
Global_8961[6 /*5*/].f_4=5;
StringCopy(&(Global_8961[7 /*5*/]), "CELL_907", 16);
Global_8961[7 /*5*/].f_4=6;
StringCopy(&(Global_8961[8 /*5*/]), "CELL_908", 16);
Global_8961[8 /*5*/].f_4=7;
StringCopy(&(Global_8961[9 /*5*/]), "CELL_909", 16);
Global_8961[9 /*5*/].f_4=8;
StringCopy(&(Global_8961[10 /*5*/]), "CELL_910", 16);
Global_8961[10 /*5*/].f_4=9;
StringCopy(&(Global_8961[11 /*5*/]), "CELL_911", 16);
Global_8961[11 /*5*/].f_4=11;
iVar1=0;
while (iVar1 < 12){
iVar0[iVar1]=0;
iVar1++;
}
if(Global_9044[0]==0){}
iVar1=0;
while (iVar1 < 12){
iVar2=0;
while (iVar2 < 12){
if(iVar1==Global_8961[iVar2 /*5*/].f_4){
if(iVar0[iVar1]==0){
Global_9044[iVar1]=iVar2;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
func_81(&(Global_8961[iVar2 /*5*/]));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar0[iVar1]=1;
}}
iVar2++;
}
iVar1++;
}}


void func_160(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


void func_161(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, 1);
func_162();
}}


void func_162(){
if(func_150()){
MOBILE::CELL_SET_INPUT(5);
}}

int func_163(int iParam0, int iParam1, int iParam2){
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


void func_164(){
if(func_163(2, Global_20351, 0)){
iLocal_106=0;
MISC::SET_BIT(&Global_8254, 0);
func_84();
Global_20361=1;
if(Global_78558){
func_308();
}else{
func_296();
}
wait(0);
if(Global_20383.f_1 > 3){
Global_20383.f_1=7;
}
StringCopy(&cLocal_83, "", 16);
}}


void func_165(){
bool bVar0;
int iVar1;
int iVar2;
if(Global_20361==0){
if(func_163(2, Global_20352, 0)){
if(!func_146()){
Global_22839=0;
Global_22838=0;
Global_22840=0;
iLocal_278=0;
func_161();
Global_20361=1;
if(iLocal_69 > 0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
iLocal_77=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
bVar0=false;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(Global_78558){
if(iLocal_77 < iLocal_72){
bVar0=true;
}
}
elseif(iLocal_77==iLocal_71 || iLocal_77 > iLocal_71){
bVar0=true;
}}
if(MISC::IS_BIT_SET(Global_8254, 0)){
bVar0=false;
}
if(bVar0){
Local_293.f_2936=(iLocal_77 - iLocal_71);
func_170();
}else{
if(iLocal_77 < 0){
iLocal_77=0;
}
Global_7568=Global_20389[iLocal_77];
if(Global_20581 !=145){
if(Global_7568 !=Global_20581){
iLocal_65=1;
}else{
iLocal_65=0;
}
}
else{
iLocal_65=0;
}
if(iLocal_65==0){
if(MISC::IS_BIT_SET(Global_8253, 9)){
if(!MISC::IS_BIT_SET(Global_8253, 29)){
func_169(Global_7568, 1);
if(func_80(Global_7568, Global_20383)==0){
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_7568 /*10*/].f_4), "CELL_195", 0);
}
else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(1), -1f, -1f, "CELL_288", &(Global_2028[Global_7568 /*29*/].f_7), &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_160(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
MISC::SET_BIT(&Global_8253, 29);
}}else{
bLocal_288=false;
bLocal_289=false;
if(Global_78558){
iVar1=0;
while (iVar1 < 4){
if(MISC::ARE_STRINGS_EQUAL(&(Global_2028[Global_7568 /*29*/].f_3), &(Global_8156[iVar1 /*24*/]))){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_8156[iVar1 /*24*/].f_8), "CELL_SFUN_NULL")){
bLocal_288=true;
iLocal_290=iVar1;
}
}
iVar1++;
}}else{
iVar2=0;
while (iVar2 < 4){
if(MISC::ARE_STRINGS_EQUAL(&(Global_2028[Global_7568 /*29*/].f_3), &(Global_8091[iVar2 /*16*/]))){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_8091[iVar2 /*16*/].f_8), "CELL_SFUN_NULL")){
bLocal_288=true;
iLocal_290=iVar2;
if(iLocal_290==iLocal_290){
}}
}
iVar2++;
}}
if(func_167(Global_7568) && MISC::IS_BIT_SET(Global_8254, 0)==0){
if(func_135(Global_7568, Global_20383)==0 && func_87(Global_7568, Global_20383)==0){
bLocal_289=false;
}
else{
bLocal_289=true;
}}
if(MISC::IS_BIT_SET(Global_8254, 0)){
func_166();
iLocal_106=1;
}elseif(bLocal_289==0 && bLocal_288==0){
Global_22839=0;
Global_22838=0;
Global_22840=0;
if(MISC::IS_BIT_SET(Global_8254, 19) && Global_7568==129){
}
else{
func_97();
}}else{
func_134();
}}
}}}}}}}


void func_166(){
iLocal_104=MISC::GET_GAME_TIMER();
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
wait(0);
switch (Global_7568){
case 2:
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7001", &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), 0, 0);
break;
case 0:
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7002", &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), 0, 0);
break;
case 12:
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7003", &(Global_2028[Global_7568 /*29*/].f_3), "CELL_E_311", 0, 0);
break;
}
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_160(Global_20364, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
func_158(Global_20364, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_167(int iParam0){
switch (Global_20383){
case 0:
if(func_168(iParam0, 0)){
return 1;
}else{
return 0;
}
break;
case 1:
if(func_168(iParam0, 1)){
return 1;
}else{
return 0;
}
break;
case 2:
if(func_168(iParam0, 2)){
return 1;
}else{
return 0;
}
break;
default:
return 0;
break;
}
return 0;
}

int func_168(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_96();
if((iParam0 >=iVar0 || iParam1 >=iVar0) || iParam0==iParam1){
return 0;
}
iVar1=func_91(iParam0);
iVar2=func_91(iParam1);
if(iVar1 !=7 && iVar2 !=7){
iVar3=func_90(iVar1, iVar2);
if(iVar3 !=10){
if(func_89(iVar3) !=-1){
return 1;
}}}
return 0;
}


void func_169(int iParam0, int iParam1){
Global_2028[iParam0 /*29*/].f_18=iParam1;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_18=iParam1;
}}


void func_170(){
var uVar0;
if(Global_20383.f_1 > 3){
Global_20383.f_1=8;
}
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_157(Global_20364, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
func_174(&Local_293);
if(Global_20383.f_1 > 3){
func_160(Global_20364, "DISPLAY_VIEW", 18f, to_float(iLocal_75), -1082130432, -1082130432, -1082130432);
iLocal_75=0;
if(func_173(&Local_293)){
uVar0=PLAYER::GET_PLAYER_NAME(Local_293[Local_293.f_2936]);
}else{
uVar0=func_171(&(Local_293.f_34[func_172(Local_293.f_2936, &Local_293) /*29*/].f_13));
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_HEADER");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uVar0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Local_293.f_2999=0;
iLocal_89=1;
}}


var func__171(var uParam0){
return uParam0;
}

int func_172(int iParam0, var uParam1){
int iVar0;
iVar0=(iParam0 - uParam1->f_33);
if(iVar0 >=100){
iVar0=99;
}
return iVar0;
}

int func_173(var uParam0){
if(uParam0->f_2936 < uParam0->f_33){
return 1;
}
return 0;
}


void func_174(var uParam0){
int iVar0;
struct<22> Var1;
var uVar2;
char* sVar3;
bool bVar4;
struct<13> Var5;
iVar0=0;
if(func_184(uParam0, &uVar2)){
if(func_173(uParam0)){
uParam0->f_2963={
func_183((*uParam0)[uParam0->f_2936]) 
};
sVar3=PLAYER::GET_PLAYER_NAME((*uParam0)[uParam0->f_2936]);
}else{
uParam0->f_2963={
uParam0->f_34[func_172(uParam0->f_2936, uParam0) /*29*/] 
};
sVar3=func_171(&(uParam0->f_34[func_172(uParam0->f_2936, uParam0) /*29*/].f_13));
}
StringCopy(&(uParam0->f_2983), sVar3, 64);
bVar4=false;
if(NETWORK::NETWORK_HAS_HEADSET()){
if(!Global_1836619){
if(func_182(PLAYER::PLAYER_ID())){
bVar4=true;
}}}
if(func_173(uParam0)){
if(((NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME((*uParam0)[uParam0->f_2936]) || NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME((*uParam0)[uParam0->f_2936])) || NETWORK::NETWORK_AM_I_BLOCKED_BY_PLAYER((*uParam0)[uParam0->f_2936])) || NETWORK::NETWORK_AM_I_MUTED_BY_PLAYER((*uParam0)[uParam0->f_2936])){
bVar4=false;
}}
if(!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
bVar4=false;
}
if(PAD::IS_USING_REMOTE_PLAY(0)){
bVar4=false;
}
if(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&(uParam0->f_2963)) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(&(uParam0->f_2963))){
bVar4=false;
}
if(NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(&(uParam0->f_2963)) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(&(uParam0->f_2963))){
bVar4=false;
}
if(NETWORK::NETWORK_IS_IN_PLATFORM_PARTY()){
if(func_181()){
if(NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT()){
bVar4=false;
}}elseif(func_180()){
bVar4=false;
}}
if(bVar4){
if(Global_78558){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(!Global_2800025.f_1 || Global_2800025.f_38){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000b");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=1;
iVar0++;
}elseif(Global_43257==15){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(!Global_2800025.f_1 || Global_2800025.f_38){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000b");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=1;
iVar0++;
}}
bVar4=false;
if(func_173(uParam0)){
Var5={
func_183((*uParam0)[uParam0->f_2936]) 
};
if((func_182(PLAYER::PLAYER_ID()) && func_182((*uParam0)[uParam0->f_2936])) && NETWORK::NETWORK_CAN_TEXT_CHAT_WITH_GAMER(&Var5)){
bVar4=true;
}}
if(bVar4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1009");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=2;
iVar0++;
}
bVar4=false;
if(func_173(uParam0)){
if(NETWORK::NETWORK_GET_FRIEND_COUNT() < NETWORK::NETWORK_GET_MAX_FRIENDS()){
if(!NETWORK::NETWORK_IS_FRIEND(&(uParam0->f_2963))){
bVar4=true;
}}}
if(bVar4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PIM_DFRQ2");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=3;
iVar0++;
}
bVar4=false;
bVar4=true;
if(bVar4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1007");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=4;
iVar0++;
}
bVar4=false;
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(uParam0->f_2963))){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &(uParam0->f_2963));
}}
if(Var1.f_0 !=-1){
if(Var1.f_21==1){
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() && !func_179(Var1.f_0)){
bVar4=true;
uParam0->f_2947={
Var1.f_1 
};
}}}
if(bVar4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1003");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=5;
iVar0++;
}
MISC::CLEAR_BIT(&Global_8255, 6);
bVar4=false;
if(func_173(uParam0)){
if(func_178(PLAYER::PLAYER_ID(), 1, 1)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_2936])){
if(!func_177((*uParam0)[uParam0->f_2936], 0)){
if(!MISC::IS_BIT_SET(Global_2657589[(*uParam0)[uParam0->f_2936] /*466*/].f_199, 2)){
bVar4=true;
MISC::SET_BIT(&Global_8255, 6);
}}}}
if((*uParam0)[uParam0->f_2936] !=func_16() && func_178((*uParam0)[uParam0->f_2936], 0, 0)){
if(func_175((*uParam0)[uParam0->f_2936], 146)){
bVar4=false;
}}}
if(Global_1836587 || Global_1836588){
bVar4=false;
}
if(bVar4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
if(!MISC::IS_BIT_SET(Global_2672505.f_986, (*uParam0)[uParam0->f_2936])){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1008");
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1008b");
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
uParam0->f_2937[iVar0]=7;
iVar0++;
}}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_LEFT_SESS");
HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
func_36(0);
return;
}}

int func_175(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/]==iParam1){
return func_176(iParam0);
}
return 0;
}

int func_176(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}


bool func_177(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_178(int iParam0, bool bParam1, bool bParam2){
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

int func_179(int iParam0){
int iVar0;
int iVar1;
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
iVar0=NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
if(iVar0 > 0){
iVar1=0;
while (iVar1 < iVar0){
NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Global_2764133, iVar1);
if(iParam0==Global_2764133){
return 1;
}
iVar1++;
}}}
return 0;
}


bool func_180(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


bool func_181(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_182(int iParam0){
int iVar0;
struct<13> Var1;
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
iVar0=-1;
if(iParam0 !=PLAYER::PLAYER_ID()){
iVar0=iParam0;
if(iVar0==-1){
return 0;
}}
if(MISC::IS_PS3_VERSION() || func_180()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
if(MISC::IS_XBOX360_VERSION() || func_181()){
if(iParam0==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, 1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)){
return 1;
}}else{
Var1={
func_183(iParam0) 
};
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1))){
return 1;
}}}
if(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}
struct<13> func_183(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_184(var uParam0, int iParam1){
int iVar0;
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
*iParam1=2;
}elseif(uParam0->f_2936 < uParam0->f_33){
if(func_178((*uParam0)[uParam0->f_2936], 0, 1)){
return 1;
}else{
*iParam1=2;
}}else{
iVar0=func_172(uParam0->f_2936, uParam0);
if(NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(uParam0->f_34[iVar0 /*29*/]))){
return 1;
}else{
*iParam1=0;
}}
return 0;
}


void func_185(){
if(func_163(2, Global_20352, 0)){
MISC::CLEAR_BIT(&Global_8254, 0);
iLocal_106=0;
func_161();
Global_20361=1;
Global_22839=0;
Global_22838=0;
Global_22840=0;
func_97();
}}


void func_186(){
if(iLocal_99){
if(timera() > 150){
iLocal_99=0;
}}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(func_163(2, 181, 0)){
if(iLocal_73 > 0){
iLocal_73=(iLocal_73 - 1);
}else{
iLocal_73=(iLocal_69 - 1);
}
func_148();
iLocal_99=1;
settimera(0);
}
if(func_163(2, 180, 0)){
iLocal_73++;
if(iLocal_73==iLocal_69){
iLocal_73=0;
}
func_153();
}}
if(iLocal_99==0){
if(func_163(2, Global_20359, 0)){
if(iLocal_73 > 0){
iLocal_73=(iLocal_73 - 1);
}else{
iLocal_73=(iLocal_69 - 1);
}
func_148();
iLocal_99=1;
settimera(0);
}
if(func_163(2, Global_20360, 0)){
iLocal_73++;
if(iLocal_73==iLocal_69){
iLocal_73=0;
}
func_153();
iLocal_99=1;
settimera(0);
}
if(func_163(2, Global_20358, 0)){
func_188();
func_188();
func_188();
func_188();
func_188();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
iLocal_99=1;
settimera(0);
}
if(func_163(2, Global_20357, 0)){
func_187();
func_187();
func_187();
func_187();
func_187();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20372, 1);
iLocal_99=1;
settimera(0);
}}}


void func_187(){
if(iLocal_73 > 0){
iLocal_73=(iLocal_73 - 1);
}else{
iLocal_73=(iLocal_69 - 1);
}
func_160(Global_20364, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_188(){
iLocal_73++;
if(iLocal_73==iLocal_69){
iLocal_73=0;
}
func_160(Global_20364, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_189(){
iLocal_73++;
if(iLocal_73==iLocal_69){
iLocal_73=0;
MISC::CLEAR_BIT(&Global_8253, 16);
}
func_153();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
iLocal_77=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
if(iLocal_77 < 0){
iLocal_77=0;
}
if(Global_78558){
if(iLocal_77 > iLocal_72 || iLocal_77==iLocal_72){
if(Global_22756==Global_20389[iLocal_77]){
MISC::CLEAR_BIT(&Global_8253, 16);
}}}elseif(Global_22756==Global_20389[iLocal_77]){
MISC::CLEAR_BIT(&Global_8253, 16);
}}


void func_190(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
struct<22> Var4;
int iVar5;
struct<13> Var6;
char* sVar7;
int iVar8;
int iVar9;
struct<13> Var10;
struct<13> Var11;
if(MISC::IS_BIT_SET(Global_8255, 6)){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Local_293.f_2963))){
MISC::CLEAR_BIT(&Global_8255, 6);
StringCopy(&cLocal_83, "", 16);
Global_20383.f_1=3;
}}
switch (Local_293.f_2999){
case 0:
if(MISC::IS_BIT_SET(uLocal_287, 1)){
if(!Global_100733.f_1474){
MISC::CLEAR_BIT(&uLocal_287, 0);
MISC::CLEAR_BIT(&uLocal_287, 1);
}
return;
}
if(Local_293.f_2976){
if(Local_293.f_2981){
iVar5=2;
set_warning_message_with_header("HUD_CONNPROB", "HUD_DISCON", iVar5, 0, false, -1, 0, 0, true, 0);
if(Local_293.f_2982){
if(func_163(2, Global_20352, 0) || PAD::IS_CONTROL_PRESSED(2, 201)){
Global_20383.f_1=3;
}}elseif(func_163(2, Global_20352, 0) || PAD::IS_CONTROL_PRESSED(2, 201)){
}else{
Local_293.f_2982=1;
}}else{
iLocal_75=Local_293.f_2946;
switch (Local_293.f_2937[Local_293.f_2946]){
case 1:
if(!Global_2800025.f_1){
if(!NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY() && !NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE()){
Local_293.f_2976=0;
func_292();
Local_293.f_2977=0;
if(func_173(&Local_293)){
sVar7=PLAYER::GET_PLAYER_NAME(Local_293[Local_293.f_2936]);
}
else{
sVar7=func_171(&(Local_293.f_34[func_172(Local_293.f_2936, &Local_293) /*29*/].f_13));
}
func_291(sVar7);
Local_293.f_2999=1;
func_290(&(Local_293.f_2979));
func_289(0);
if(Global_78558){
iVar9=Global_262145.f_172;
if(!MONEY::NETWORK_CAN_SPEND_MONEY2(iVar9, 0, 1, 0, &iVar8, -1, 0)){
iVar9=(iVar9 - iVar8);
}
Var6={
func_183(PLAYER::PLAYER_ID()) 
};
if(iVar9 > 0){
if(func_288()){
func_276(1654961868, iVar9, &iVar0, 0, 1, 0);
Global_4535172[iVar0 /*85*/].f_14={
Var6 
};
}else{
MONEY::NETWORK_SPENT_CALL_PLAYER(iVar9, &Var6, 0, 1);
}
}
func_98(1917, 1, -1);
}}elseif(NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY()){
}elseif(NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE()){
if(!Global_2800025.f_59){
Global_2800025=1;
Global_2800025.f_2=1;
Global_2800025.f_59=1;
}}}elseif(Global_2800025.f_38){
}else{
func_275();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20372, 1);
if(Global_2800025.f_1){
func_273();
}
Global_20383.f_1=3;
}
return;
break;
case 2:
if(func_272(&(Global_2793046.f_369[Local_293[Local_293.f_2936] /*2*/]))){
if(!func_271(&(Global_2793046.f_369[Local_293[Local_293.f_2936] /*2*/]), 30000, 0)){
if(func_259(0, 0, 1, 1)){
func_249("CELL_MP_1009H", PLAYER::GET_PLAYER_NAME(Local_293[Local_293.f_2936]), func_250(Local_293[Local_293.f_2936], -2, 0, 0, 0), -1);
}
Local_293.f_2976=0;
return;
}}
Var10={
func_183(Local_293[Local_293.f_2936]) 
};
if((!func_182(PLAYER::PLAYER_ID()) || !func_182(Local_293[Local_293.f_2936])) || !NETWORK::NETWORK_CAN_TEXT_CHAT_WITH_GAMER(&Var10)){
if(func_259(1, 1, 1, 1)){
if(!MISC::ARE_STRINGS_EQUAL(PLAYER::GET_PLAYER_NAME(Local_293[Local_293.f_2936]), "**Invalid**")){
func_249("CELL_MP_1009M", PLAYER::GET_PLAYER_NAME(Local_293[Local_293.f_2936]), func_250(Local_293[Local_293.f_2936], -2, 0, 0, 0), -1);
}
else{
func_248("CELL_MP_1009N", -1);
}}
Local_293.f_2976=0;
return;
}
Local_293.f_2976=0;
Local_293.f_2999=2;
iLocal_304=1;
return;
break;
case 3:
if(!NETWORK::NETWORK_IS_ADDING_FRIEND()){
if(MISC::IS_PS3_VERSION() && !NETWORK::NETWORK_IS_FRIEND(&(Local_293.f_2963))){
if(NETWORK::NETWORK_ADD_FRIEND(&(Local_293.f_2963), "")){
Local_293.f_2976=0;
Global_20383.f_1=3;
}}else{
NETWORK::NETWORK_SHOW_PROFILE_UI(&(Local_293.f_2963));
Local_293.f_2976=0;
Global_20383.f_1=3;
}}
break;
case 5:
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(Local_293.f_2963))){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var4, 35, &(Local_293.f_2963));
}}
if(Var4.f_0 !=-1){
if(Var4.f_21==1){
if(!func_179(Var4.f_0)){
if(NETWORK::NETWORK_CLAN_JOIN(Var4.f_0)){
Local_293.f_2976=0;
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREW_JOIN");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Var4.f_1));
HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
Global_20383.f_1=3;
}
else{
Global_20383.f_1=3;
Local_293.f_2976=0;
Global_20383.f_1=3;
}
return;
}}}
Local_293.f_2976=0;
break;
case 4:
Local_293.f_2976=0;
func_170();
NETWORK::NETWORK_SHOW_PROFILE_UI(&(Local_293.f_2963));
break;
case 7:
if(MISC::IS_BIT_SET(Global_2672505.f_986, Local_293[Local_293.f_2936])){
MISC::CLEAR_BIT(&(Global_2672505.f_986), Local_293[Local_293.f_2936]);
}else{
Global_2672505.f_986=0;
MISC::SET_BIT(&(Global_2672505.f_986), Local_293[Local_293.f_2936]);
}
func_170();
Local_293.f_2976=0;
break;
}}}elseif(Global_20361==0){
if(func_163(2, Global_20352, 0)){
Local_293.f_2982=0;
Local_293.f_2981=0;
MISC::CLEAR_BIT(&Global_8254, 0);
iLocal_88=0;
func_161();
Global_20361=1;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "GET_CURRENT_SELECTION");
uLocal_74=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_74)){
wait(0);
}
Local_293.f_2946=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_74);
if(!func_184(&Local_293, &iVar3)){
switch (iVar3){
case 0:
func_247("PLAYER_N_ON", 7500, 1);
break;
case 1:
func_247("PLAYERLEFT", 7500, 1);
break;
case 2:
Global_2800025.f_59=0;
Local_293.f_2981=1;
Local_293.f_2976=1;
return;
break;
}
Global_20383.f_1=3;
return;
}
Global_2800025.f_59=0;
Local_293.f_2976=1;
}}
break;
case 1:
if(!func_184(&Local_293, &iVar3)){
func_289(1);
func_275();
Local_293.f_2978=1;
Local_293.f_2977=1;
return;
}elseif(Local_293.f_2977){
if(!Local_293.f_2978){
if(!Global_2800025.f_1 || !NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION()){
func_289(1);
func_275();
Local_293.f_2978=1;
Local_293.f_2977=1;
return;
}
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(func_163(2, Global_20353, 0)){
func_275();
Local_293.f_2976=0;
return;
}
if(func_246(Global_2800025.f_20)){
if(NETWORK::NETWORK_IS_FRIEND(&(Global_2800025.f_20))){
if(!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2800025.f_20))){
func_289(1);
func_275();
Local_293.f_2978=1;
Local_293.f_2977=1;
return;
}}
}
else{
func_289(1);
func_275();
Local_293.f_2978=1;
Local_293.f_2977=1;
return;
}}else{
func_275();
Local_293.f_2976=0;
func_170();
return;
}
if(!Global_2800025.f_37){
if(Global_2800025.f_33==-1){
if(func_271(&(Local_293.f_2979), 40000, 1)){
func_289(1);
func_275();
Local_293.f_2978=1;
Local_293.f_2977=1;
return;
}
}
else{
switch (Global_2800025.f_33){
case 1:
func_245();
func_244();
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iVar1==iVar2){
}
}
AUDIO::STOP_SOUND(iLocal_79);
return;
break;
case 2:
func_289(1);
func_275();
Local_293.f_2978=1;
return;
break;
default:
func_289(1);
func_275();
Local_293.f_2978=1;
return;
break;
}}
}}}elseif(!func_272(&(Local_293.f_2979))){
func_290(&(Local_293.f_2979));
func_243(&(Local_293.f_2979), 1, 0);
}else{
if(func_271(&(Local_293.f_2979), 15000, 1)){
func_275();
func_84();
func_294();
Global_20383.f_1=3;
return;
}
if(Global_2800025.f_1 || MISC::IS_BIT_SET(Global_8254, 20)){
if(func_163(2, Global_20353, 0)){
func_275();
Global_20383.f_1=3;
return;
}}
if(Global_2800025.f_1){
if(func_242(&Local_293, &(Local_293.f_2983))){
func_241(&(Local_293.f_2979), 1, 0);
Local_293.f_2978=0;
Local_293.f_2977=1;
if(Global_78558){
func_239(105, 1, -1, 1);
}}else{
func_289(1);
func_275();
Local_293.f_2978=1;
Local_293.f_2977=1;
return;
}}}
break;
case 2:
if(iLocal_304==1){
if(func_233(&Local_294, &(Local_294.f_1), &(Local_294.f_2), 0, 0, &cLocal_295, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0)){
StringCopy(&cLocal_295, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
Local_294.f_0=0;
Local_294.f_2=0;
Local_294.f_1=0;
iLocal_304=0;
func_241(&(Global_2793046.f_369[Local_293[Local_293.f_2936] /*2*/]), 0, 0);
if(MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_295)){
}else{
iLocal_305=HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_295);
StringCopy(&cLocal_295, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(&cLocal_295, 0, iLocal_305, 63), 64);
Var11={
func_183(Local_293[Local_293.f_2936]) 
};
NETWORK::NETWORK_SEND_TEXT_MESSAGE(&cLocal_295, &Var11);
func_191("CP_TM_SENT", Local_293[Local_293.f_2936], 0, 0, 0, 1, 0);
func_98(1916, 1, -1);
}
Local_293.f_2999=0;
}
if(Local_294.f_0==2){
Local_294.f_0=0;
Local_294.f_2=0;
Local_294.f_1=0;
iLocal_304=0;
Local_293.f_2999=0;
}}
break;
}}

int func_191(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
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
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_201(iVar1, iParam1, 0));
}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_250(iParam1, -2, 1, 0, 0));
}}else{
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_250(iParam1, -2, 1, 0, 0));
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_199(&Var2));
if(!bParam4){
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}else{
Global_2764203={
func_183(iParam1) 
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
func_198(&Var2) 
};
}
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar3, 0, Global_2764133, &Var2, Global_1576217, Global_1576218, Global_1576219);
}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764133, 35), &(Global_2764133.f_17), Global_2764133.f_30, iVar3, 0, Global_2764133, Global_1576217, Global_1576218, Global_1576219);
}}else{
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}
func_192(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_192(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_197() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_195(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_193(iParam2);
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

int func_193(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_194(iVar0);
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


void func_194(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_195(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_196(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_196(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_68();
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


bool func_197(){
return DLC::IS_DLC_PRESENT(-1762644250);
}
struct<16> func_198(char* sParam0){
struct<16> Var0;
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
StringConCat(&Var0, sParam0, 64);
StringConCat(&Var0, "</C>", 64);
return Var0;
}


var func__199(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_200(&cVar0);
}


var func__200(char[4] cParam0){
return cParam0;
}

int func_201(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_223()){
iVar2=func_219(iParam1);
if(!iVar2==-1){
return func_217(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && iParam1 !=func_16()){
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
iVar0=func_207(iParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_206(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_203(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1)){
iVar0=func_202(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_202(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0)){
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

int func_204(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_178(iVar1, 1, 1) || func_195(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_205(iVar1)){
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


var func__205(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_206(int iParam0){
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

int func_207(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(iParam0);
if((func_216() || (func_215() && func_213())) && Global_1665699.f_1){
if(bParam1){
return func_212(iParam2, iVar0);
}else{
return func_212(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_203(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_211(1);
}else{
return func_211(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_208(iVar0, iParam2, 1, 4);
}else{
return func_208(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_211(1);
}
return func_211(0);
}

int func_208(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_210(iParam0, iParam1, iParam3);
if(func_209(Global_4718592.f_113724, 1)){
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

int func_209(int iParam0, bool bParam1){
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

int func_210(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_203(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_211(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_212(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_210(iParam1, iParam0, 4);
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

int func_213(){
if(func_214()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_214(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_215(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_216(){
if(func_214() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_217(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_218(iParam0);
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


var func__218(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0){
if(!iParam0==func_16()){
if(func_221(iParam0, 1)){
return Global_2648605.f_818.f_11[func_220(iParam0)];
}}
return -1;
}

int func_220(int iParam0){
if(iParam0 !=func_16()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_16();
}


bool func_221(int iParam0, bool bParam1){
if(!bParam1){
if(func_222(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_16();
}

int func_222(int iParam0){
if(iParam0 !=func_16()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_16()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_223(){
if((((((func_232() || func_231()) || func_230()) || func_229()) || func_228()) || func_226()) || func_224()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_224(){
return func_225(Global_4718592.f_113724);
}

int func_225(int iParam0){
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

int func_226(){
return func_227(Global_4718592.f_113724);
}

int func_227(int iParam0){
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


var func__228(){
return Global_2683864.f_24;
}


var func__229(){
return Global_2683864.f_21;
}


var func__230(){
return Global_2683864.f_19;
}


var func__231(){
return Global_2683864.f_18;
}


var func__232(){
return Global_2683864.f_17;
}

int func_233(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34, int iParam35, bool bParam36, bool bParam37){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
char* sVar4;
char* sVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
struct<16> Var10;
int iVar11;
int iVar12;
int iVar13;
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
switch (*uParam2){
case 0:
if(bParam3){
if(iParam7==6){
iVar6=121;
}elseif(iParam7==7){
iVar6=63;
}elseif(func_238()){
iVar6=21;
}else{
iVar6=51;
}
if(*uParam1==0){
if((iParam7==0 || iParam7==1) || iParam7==2){
if(func_238()){
sVar4="FMMC_KEY_TIS2SJ";
}
else{
sVar4="FMMC_KEY_TIP2";
}}elseif(iParam7==3){
sVar4="FMMC_KEY_TIP7";
iVar6=21;
}elseif(iParam7==4){
sVar4="FMMC_KEY_TIP5";
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0){
iVar6=21;
}
else{
iVar6=23;
}}elseif(iParam7==5){
sVar4="FMMC_KEY_TIP6";
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0){
iVar6=21;
}
else{
iVar6=23;
}}elseif(iParam7==6){
sVar4="FMMC_KEY_TIP10";
}elseif(iParam7==8){
sVar4="FMMC_KEY_TXT7";
}elseif(iParam7==9){
sVar4="FMMC_KEY_TXT8";
}elseif(iParam7==10){
sVar4="FMMC_KEY_VSS";
}}elseif(func_238()){
sVar4="FMMC_KEY_TIS2FJ";
}else{
sVar4="FMMC_KEY_TIP2F";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
if((iParam7==0 || iParam7==1) || iParam7==2){
sVar4="FMMC_SS_RL_35";
}elseif(iParam7==3){
sVar4="FMMC_SS_RL_32";
}elseif(iParam7==4){
sVar4="FMMC_SS_RL_33";
}elseif(iParam7==5){
sVar4="FMMC_SS_RL_34";
}elseif(iParam7==6){
sVar4="FMMC_SS_RL_49";
}elseif(iParam7==7){
sVar4="FMMC_SS_RL_57";
}}
if(MISC::IS_PC_VERSION()){
iVar7=6;
}elseif(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
iVar7=0;
}else{
iVar7=1;
}
if(bParam24){
if(bParam26){
sVar4="LINE_NUMBER";
}else{
sVar4="WEB_SEARCH";
}}
if(iParam35 !=-1){
iVar6=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
}}else{
if(MISC::IS_PC_VERSION()){
iVar8=6;
}elseif(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
iVar8=0;
}else{
iVar8=1;
}
if(bParam4){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP";
}else{
sVar4="FMMC_KEY_TIPF";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_T0_M19";
}
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==10){
iVar9=21;
}else{
iVar9=25;
}
if(func_197()){
iVar9=64;
}
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_113731))){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_113731), "", "", "", iVar9);
}}elseif(bParam32){
sVar4="CST_KEY_TEXT";
iVar9=63;
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
if(MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166915))){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_166915), "", "", "", iVar9);
}}elseif(bParam25){
if(*uParam1==0){
sVar4="FMMC_KEY_BLIMP";
}else{
sVar4="FMMC_KEY_BTIPF";
}
iVar9=60;
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_166915))){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_166915), "", "", "", iVar9);
}}elseif(iParam30 !=-1){
if(*uParam1==0){
sVar4="DMC_HTM_EH";
}else{
sVar4="FMMC_KEY_BTIPF";
}
iVar9=60;
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
Var10={
Global_4718592.f_166947[iParam30 /*16*/] 
};
if(iParam31 > -1){
Var10={
Global_4718592.f_167028[iParam30 /*65*/][iParam31 /*16*/] 
};
}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var10)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
}}elseif(bParam27){
if(*uParam1==0){
sVar4="FMMC_CDP_ADD2";
}else{
sVar4="FMMC_CDP_ADD2";
}
iVar9=60;
if(iParam35 !=-1){
iVar9=iParam35;
}
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}elseif(bParam34){
if(*uParam1==0){
sVar4="FMMC_CDM_T";
}else{
sVar4="FMMC_CDM_F1";
}
iVar9=60;
if(iParam35 !=-1){
iVar9=iParam35;
}
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}elseif(bParam13){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP";
}else{
sVar4="FMMC_KEY_TIPF";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_T0_M19";
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam33)){
sVar4=sParam33;
}
iVar9=63;
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam9){
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
iVar9=63;
if(*uParam1==0){
sVar4="FMMC_KEY_TIPT";
}
elseif(*uParam1==-3){
sVar4="FMMC_KEY_TIPTS";
}
else{
sVar4="FMMC_KEY_TIPTF";
}}else{
iVar9=63;
if(*uParam1==0){
sVar4="FMMC_KEY_ALTT";
}
elseif(*uParam1==-3){
sVar4="FMMC_KEY_ALTTS";
}
else{
sVar4="FMMC_KEY_ALTTF";
}}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_T0_M36";
}
iVar11=0;
while (iVar11 <=7){
if(MISC::IS_STRING_NULL(&(Global_4718592.f_113882[iVar11 /*16*/]))){
StringCopy(&(Global_4718592.f_113882[iVar11 /*16*/]), "", 64);
}
iVar11++;
}
MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_113882[0 /*16*/]), &(Global_4718592.f_113882[1 /*16*/]), &(Global_4718592.f_113882[2 /*16*/]), &(Global_4718592.f_113882[3 /*16*/]), &(Global_4718592.f_113882[4 /*16*/]), &(Global_4718592.f_113882[5 /*16*/]), &(Global_4718592.f_113882[6 /*16*/]), &(Global_4718592.f_113882[7 /*16*/]), iVar9);
}elseif(bParam6){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP4";
}else{
sVar4="FMMC_KEY_TIP4F";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_SMS3";
}
iVar9=126;
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_96024[iParam16 /*43*/].f_6[0 /*16*/]))){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
iVar12=0;
while (iVar12 <=1){
if(MISC::IS_STRING_NULL(&(Global_4718592.f_96024[iParam16 /*43*/].f_6[iVar12 /*16*/]))){
StringCopy(&(Global_4718592.f_96024[iParam16 /*43*/].f_6[iVar12 /*16*/]), "", 64);
}
iVar12++;
}
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_96024[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4718592.f_96024[iParam16 /*43*/].f_6[1 /*16*/]), "", "", iVar9);
}}elseif(bParam8){
iVar9=61;
if(bParam11){
if(func_238()){
if(*uParam1==0){
sVar4="CELL_EMASH_SOD";
}elseif(*uParam1==-1){
sVar4="CELL_EMASH_SODE";
}else{
sVar4="CELL_EMASH_SODF";
}
}
elseif(*uParam1==0){
sVar4="CELL_EMAIL_SOD";
}
elseif(*uParam1==-1){
sVar4="CELL_EMAIL_SODE";
}
else{
sVar4="CELL_EMAIL_SODF";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="CELL_EMAIL_DESC";
}}elseif(func_238()){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP8S";
}
else{
sVar4="FMMC_KEY_TIP8FS";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_SMS4";
}
iVar9=21;
}else{
if(*uParam1==0){
sVar4="FMMC_KEY_TIP8";
}
else{
sVar4="FMMC_KEY_TIP8F";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_SMS4";
}}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam12){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP9";
}else{
sVar4="FMMC_KEY_TIP9F";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_KEY_TIP9N";
}
iVar9=16;
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam14){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP12";
}else{
sVar4="FMMC_KEY_TIP12F";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_KEY_TIP12N";
}
iVar9=16;
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam28){
if(*uParam1==0){
sVar4="FMMC_KEY_TIPTN";
}else{
sVar4="FMMC_KEY_TIPTNF";
}
iVar9=16;
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam15){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP12";
}else{
sVar4="FMMC_KEY_TIP12F";
}
iVar9=61;
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam17){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP14S";
}elseif(*uParam1==-1){
sVar4="FMMC_KEY_TIP14ES";
}elseif(*uParam1==-2){
sVar4="FMMC_KEY_TIP14OS";
}else{
sVar4="FMMC_KEY_TIP14FS";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_KEY_TIP14N";
}
if(func_181()){
iVar9=21;
}else{
iVar9=20;
}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam29){
if(*uParam1==0){
sVar4="FMMC_KEY_TIP16S";
}elseif(*uParam1==-1){
sVar4="FMMC_KEY_TIP16ES";
}elseif(*uParam1==-2){
sVar4="FMMC_KEY_TIP16OS";
}else{
sVar4="FMMC_KEY_TIP16FS";
}
if(bParam23){
sVar4="FMMC_KEY_TIP16IS";
}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_KEY_TIP16N";
}
MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(64);
iVar9=15;
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(iParam18 > 0){
if(bParam20){
sVar4="FMMC_KEY_TIP15B";
}elseif(bParam21){
sVar4="FMMC_KEY_TIP15U";
}elseif(bParam19){
sVar4="FMMC_KEY_TIP15N";
}elseif(bParam23){
sVar4="FMMC_KEY_TIP15I";
}elseif(*uParam1==0){
if(iParam18==2){
sVar4="FMMC_MCK_TIP15";
}
else{
sVar4="FMMC_KEY_TIP15";
}}else{
sVar4="FMMC_KEY_TIP15F";
}
if(MISC::IS_XBOX360_VERSION() || func_181()){
iVar9=16;
}else{
iVar9=15;
}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam36){
if(*uParam1==0){
sVar4="ACID_NAME_TIP1";
}elseif(*uParam1==-1){
sVar4="ACID_NAME_TIP2";
}elseif(*uParam1==-2){
sVar4="ACID_NAME_TIP3";
}else{
sVar4="ACID_NAME_TIP4";
}
if(bParam23){
sVar4="ACID_NAME_TIP5s";
}
if(MISC::IS_XBOX360_VERSION() || func_181()){
iVar9=16;
}else{
iVar9=15;
}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}elseif(bParam37){
if(*uParam1==0){
sVar4="LAB_NAME_TIP1";
}elseif(*uParam1==-1){
sVar4="LAB_NAME_TIP2";
}elseif(*uParam1==-2){
sVar4="LAB_NAME_TIP3";
}else{
sVar4="LAB_NAME_TIP4";
}
if(bParam23){
sVar4="LAB_NAME_TIP5s";
}
if(MISC::IS_XBOX360_VERSION() || func_181()){
iVar9=16;
}else{
iVar9=15;
}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
}}else{
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
iVar9=501;
if(bParam11){
if(func_238()){
if(*uParam1==0){
sVar4="CELL_EMASH_BOD";
}elseif(*uParam1==-1){
sVar4="CELL_EMASH_BODE";
}else{
sVar4="CELL_EMASH_BODF";
}}elseif(*uParam1==0){
sVar4="CELL_EMAIL_BOD";
}elseif(*uParam1==-1){
sVar4="CELL_EMAIL_BODE";
}else{
sVar4="CELL_EMAIL_BODF";
}
}
elseif(*uParam1==0){
sVar4="FMMC_KEY_TIP3";
}
elseif(*uParam1==-1){
sVar4="FMMC_KEY_TIP3E";
}
else{
sVar4="FMMC_KEY_TIP3F";
}}else{
iVar9=251;
if(func_238()){
iVar9=150;
}
if(bParam11){
if(*uParam1==0){
sVar4="CELL_EMASH_BOD";
}elseif(*uParam1==-1){
sVar4="CELL_EMASH_BODE";
}else{
sVar4="CELL_EMASH_BODF";
}
}
elseif(func_238()){
if(*uParam1==0){
sVar4="FMMC_KEY_TIPSS";
}elseif(*uParam1==-1){
sVar4="FMMC_KEY_TIPSSE";
}else{
sVar4="FMMC_KEY_TIPSSF";
}
}
elseif(*uParam1==0){
sVar4="FMMC_KEY_TIPS";
}
elseif(*uParam1==-1){
sVar4="FMMC_KEY_TIPSE";
}
else{
sVar4="FMMC_KEY_TIPSF";
}}
if(MISC::IS_XBOX360_VERSION()){
sVar5=sVar4;
sVar4="FMMC_T0_M20";
if(bParam11){
sVar4="CELL_EMAIL_DESC";
}}
iVar13=0;
while (iVar13 <=7){
if(MISC::IS_STRING_NULL(&(Global_4718592.f_113753[iVar13 /*16*/]))){
StringCopy(&(Global_4718592.f_113753[iVar13 /*16*/]), "", 64);
}
iVar13++;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam33)){
sVar4=sParam33;
}
if(iParam35 !=-1){
iVar9=iParam35;
}
if(bParam11){
MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
}else{
MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_113753[0 /*16*/]), &(Global_4718592.f_113753[1 /*16*/]), &(Global_4718592.f_113753[2 /*16*/]), &(Global_4718592.f_113753[3 /*16*/]), &(Global_4718592.f_113753[4 /*16*/]), &(Global_4718592.f_113753[5 /*16*/]), &(Global_4718592.f_113753[6 /*16*/]), &(Global_4718592.f_113753[7 /*16*/]), iVar9);
}}}
StringCopy(&Global_1925757, "", 64);
*uParam1=0;
*uParam2=1;
break;
case 1:
*uParam0=MISC::UPDATE_ONSCREEN_KEYBOARD();
switch (*uParam0){
case 0:
return 0;
case 3:
*uParam2=0;
*uParam0=0;
*uParam1=0;
return 0;
case 2:
*uParam1=0;
return 0;
case 1:
if((bParam4 || bParam13) || bParam29){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925757)){
StringCopy(&Global_1925757, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925757)){
*uParam1=0;
return 1;
}
iVar1=HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(*uParam2 !=0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925757)){
if(MISC::ARE_STRINGS_EQUAL(" ", HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1925757, 0, 1))){
iVar2=HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1925757);
StringCopy(&Global_1925757, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1925757, 1, iVar2), 64);
}
}
else{
*uParam1=0;
return 1;
}}
iVar3++;
}
}}
if(func_197()){
*uParam1=0;
return 1;
}
if(SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*uParam1)){
if(!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(*uParam1)){
HUD::BUSYSPINNER_OFF();
iVar0=SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(*uParam1);
switch (iVar0){
case 0:
if(bParam9){
StringCopy(&Global_1925757, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
iVar1=HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1925757);
iVar3=0;
while (iVar3 <=(iVar1 - 1)){
if(*uParam2 !=0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925757)){
if(MISC::ARE_STRINGS_EQUAL(" ", HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1925757, iVar3, iVar3 + 1))){
*uParam1=-3;
}}}
iVar3++;
}
}
if(*uParam1 !=-3){
*uParam1=0;
return 1;
}
else{
*uParam2=0;
*uParam0=0;
return 0;
}
break;
case 1:
*uParam2=0;
*uParam0=0;
return 0;
break;
case -1:
*uParam2=0;
*uParam0=3;
*uParam1=0;
func_237(1);
return 0;
break;
}
}
elseif(bParam11){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet"))==0){
HUD::BUSYSPINNER_OFF();
*uParam1=0;
return 1;
}
}
break;
}
if(bParam4){
if(bParam22){
SOCIALCLUB::SC_PROFANITY_CHECK_STRING_UGC(&Global_1925757, uParam1);
}
else{
SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&Global_1925757, uParam1);
}}elseif(MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT())){
*uParam1=-2;
*uParam2=0;
*uParam0=0;
HUD::BUSYSPINNER_OFF();
return 0;
}elseif(bParam22){
SOCIALCLUB::SC_PROFANITY_CHECK_STRING_UGC(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), uParam1);
}else{
SOCIALCLUB::SC_PROFANITY_CHECK_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), uParam1);
}
if(func_181()){
if((!NETWORK::NETWORK_IS_SIGNED_ONLINE() || func_235()==0) || func_234()==1){
*uParam1=0;
*uParam2=0;
*uParam0=3;
return 0;
}}
if(bParam17){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKYACHTNAME");
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}elseif(bParam29){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKVEHICLENAME");
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}else{
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKPROFANITY");
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}
if(!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*uParam1)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925757)){
*uParam1=-1;
}
else{
*uParam1=-2;
}
*uParam2=0;
*uParam0=0;
HUD::BUSYSPINNER_OFF();
return 0;
}
default:
}
break;
}
return 0;
}

int func_234(){
if(!func_235()){
return 1;
}
return 0;
}

int func_235(){
if(func_236()){
return 0;
}
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==0){
return 0;
}
return 1;
}


bool func_236(){
return Global_2695033;
}


void func_237(int iParam0){
Global_2695033=iParam0;
}

int func_238(){
if((((LOCALIZATION::GET_CURRENT_LANGUAGE()==7 || LOCALIZATION::GET_CURRENT_LANGUAGE()==8) || LOCALIZATION::GET_CURRENT_LANGUAGE()==9) || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) || LOCALIZATION::GET_CURRENT_LANGUAGE()==12){
return 1;
}
return 0;
}


void func_239(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_240()){
iVar0=Global_2848282[iParam0 /*3*/][func_67(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_240(){
return 1;
return 0;
}


void func_241(var uParam0, bool bParam1, bool bParam2){
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

int func_242(var uParam0, char* sParam1){
if(Global_2800025.f_1){
if(NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION()){
NETWORK::NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(&(uParam0->f_2963));
Global_2800025.f_20={
uParam0->f_2963 
};
StringCopy(&(Global_2800025.f_4), sParam1, 64);
return 1;
}}
return 0;
}


void func_243(var uParam0, bool bParam1, bool bParam2){
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


void func_244(){
if(Global_20383.f_1 > 3){
Global_20383.f_1=9;
Global_21738=1;
if(Global_78558){
if(!MISC::IS_PC_VERSION()){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
MISC::SET_BIT(&(Global_2793046.f_1825), 15);
}}}}


void func_245(){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
func_81("CELL_219");
func_81("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
Global_2800025.f_37=1;
MISC::CLEAR_BIT(&Global_8253, 27);
func_102();
}


bool func_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_247(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


void func_248(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


void func_249(char* sParam0, var uParam1, int iParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
if(!iParam2==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam3);
}

int func_250(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(func_257(iParam0) && !bParam4){
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
if(((func_257(PLAYER::PLAYER_ID()) || (func_256() && func_255())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
uVar1=func_254();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(uVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) !=-1){
if(func_178(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_201(iParam1, iParam0, 0);
}else{
return func_252(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_252(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_201(iParam1, iParam0, 0);
}else{
return func_251(0, -1, 0);
}}else{
return func_251(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_201(iParam1, iParam0, 0);
}else{
return func_252(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_252(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_251(bool bParam0, int iParam1, bool bParam2){
return func_207(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_252(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
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
if(func_223()){
iVar3=func_219(iParam0);
if(!iVar3==-1){
return func_217(iVar3);
}}
if((func_253(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_203(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_211(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_202(1);
}else{
return func_207(iParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/]==0){
if(iParam0==iParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_211(1);
}else{
return func_207(iParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==iParam0){
return 28;
}}
iVar4=func_219(iParam0);
if(!iVar4==-1){
return func_217(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}


bool func_253(int iParam0, int iParam1, int iParam2, int iParam3){
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


var func__254(){
return Global_2621446.f_2;
}


var func__255(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__256(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_257(int iParam0){
if(func_195(iParam0, 0)){
return 1;
}
if(func_258()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_258(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_259(bool bParam0, bool bParam1, int iParam2, bool bParam3){
if(iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
return 0;
}
if(func_270()){
return 0;
}
if(!CAM::IS_SCREEN_FADED_IN()){
return 0;
}
if(func_59()){
return 0;
}
if(func_269()){
return 0;
}
if(bParam1){
if(func_266(PLAYER::PLAYER_ID(), 1, 0)){
return 0;
}}
if(bParam0){
if(func_265(PLAYER::PLAYER_ID())){
return 0;
}}
if(func_264()){
return 0;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
return 0;
}
if(bParam3){
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
return 0;
}}
if(Global_1836367){
return 0;
}
if(func_263()){
return 0;
}
if(func_262()){
return 0;
}
if(func_261()){
return 0;
}
if(Global_75693){
return 0;
}
if(Global_2803648){
return 0;
}
if(func_260()){
return 0;
}
return 1;
}


bool func_260(){
return Global_2764907;
}


bool func_261(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


bool func_262(){
return Global_2683864.f_691;
}


bool func_263(){
return Global_2683864.f_845;
}


bool func_264(){
return Global_2672505.f_2838.f_582;
}

int func_265(int iParam0){
if(Global_2657589[iParam0 /*466*/].f_218==0){
return 0;
}
return 1;
}

int func_266(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_267(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_267(int iParam0){
return func_268(iParam0);
}


var func__268(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_269(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}

int func_270(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}

int func_271(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_243(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


bool func_272(var uParam0){
return uParam0->f_1;
}


void func_273(){
Global_2800025.f_1=0;
Global_2800025=0;
Global_2800025.f_2=0;
Global_2800025.f_33=-1;
Global_2800025.f_34=-1;
StringCopy(&(Global_2800025.f_4), "", 64);
StringCopy(&(Global_2800025.f_39[0 /*16*/]), "", 64);
Global_2800025.f_38=0;
Global_2800025.f_56=0;
Global_2800025.f_57=0;
Global_2800025.f_58=-2;
Global_2800025.f_3=0;
func_274(&(Global_2800025.f_20));
}


void func_274(var uParam0){
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


void func_275(){
Global_2800025.f_2=1;
Global_2800025.f_38=1;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION()){
while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY()){
wait(0);
}
NETWORK::NETWORK_SESSION_VOICE_LEAVE();
Global_2800025=0;
Global_2800025.f_2=0;
}elseif(func_246(Global_2800025.f_20)){
if(NETWORK::NETWORK_IS_FRIEND(&(Global_2800025.f_20))){
if(!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2800025.f_20))){
func_273();
}}}else{
func_273();
}}else{
func_273();
}
if(Global_2800025.f_37){
func_36(0);
}
Global_2800025.f_37=0;
Global_2800025.f_3=0;
}


void func_276(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_288()){
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
func_277(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_277(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_277(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_277(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_288()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_68()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_284(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_283(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_278(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_278(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
break;
}
if(iParam0 !=-1){
func_279(iParam0);
}}


void func_279(int iParam0){
bool bVar0;
bVar0=false;
if(!func_288()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_282(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_280(&(Global_4535172[iParam0 /*85*/]));
}}


void func_280(var uParam0){
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
func_281(&(uParam0->f_14));
func_281(&(uParam0->f_14.f_13));
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


void func_281(var uParam0){
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

int func_282(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_283(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_284(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_288()){
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
func_285(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_285(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_287(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_286();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_286(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__287(int iParam0){
var uVar0;
if(iParam0 !=-1){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}

int func_288(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_289(bool bParam0){
if(bParam0){
MISC::SET_BIT(&Global_8254, 20);
}else{
MISC::CLEAR_BIT(&Global_8254, 20);
}}


void func_290(var uParam0){
uParam0->f_1=0;
}


void func_291(char* sParam0){
Global_7568=132;
StringCopy(&Global_21740, sParam0, 64);
if(Global_20383.f_1 > 3){
Global_20383.f_1=10;
func_111();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_300");
func_81("CELL_211");
func_81("CELL_211");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::SET_BIT(&Global_8253, 20);
func_102();
MISC::CLEAR_BIT(&Global_8253, 20);
}


void func_292(){
NETWORK::NETWORK_SESSION_VOICE_HOST();
Global_2800025=1;
Global_2800025.f_2=0;
Global_2800025.f_33=-1;
Global_2800025.f_34=-1;
Global_2800025.f_38=0;
}


void func_293(){
AUDIO::STOP_SOUND(iLocal_79);
AUDIO::RELEASE_SOUND_ID(iLocal_79);
Local_293.f_2978=0;
MISC::CLEAR_BIT(&Global_8253, 16);
MISC::CLEAR_BIT(&Global_8253, 9);
MISC::CLEAR_BIT(&Global_8253, 29);
MISC::CLEAR_BIT(&Global_8254, 20);
MISC::CLEAR_BIT(&Global_8254, 0);
MISC::CLEAR_BIT(&Global_8254, 18);
func_295(12, iLocal_275);
func_295(2, iLocal_276);
func_295(0, iLocal_277);
if(Local_293.f_2999==1){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(Global_2800025.f_33==-1){
func_275();
}}}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_294(){
if(!Global_78558){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BIT_SET(Global_8253, 11)){
if(!Global_20326){
TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
}
if(Global_78558){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
}
MISC::CLEAR_BIT(&Global_8253, 11);
}}}}


void func_295(int iParam0, int iParam1){
Global_2028[iParam0 /*29*/].f_1=iParam1;
if(iParam0 < 162){
Global_113648.f_28052[iParam0 /*29*/].f_1=iParam1;
}}


void func_296(){
int iVar0[191];
int iVar1;
int iVar2;
int iVar3;
func_295(147, 1320);
func_295(74, 180);
func_295(75, 190);
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
wait(0);
iLocal_69=0;
iLocal_106=0;
iLocal_89=0;
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
iVar1=0;
while (iVar1 < 190){
iVar2=0;
iVar3=190;
func_295(iVar3, 5000);
func_21();
while (iVar2 < 190){
if(MISC::IS_BIT_SET(Global_8254, 0)){
if((iVar2==2 || iVar2==0) || iVar2==12){
func_295(12, 3);
func_295(2, 1);
func_295(0, 2);
bLocal_66=true;
}else{
bLocal_66=false;
}}elseif(func_145(iVar2, Global_20383)==1){
bLocal_66=true;
}else{
bLocal_66=false;
}
if(bLocal_66){
if(iVar2 !=Global_20383){
if(iVar0[iVar2]==0){
if(func_307(iVar2, Global_20383)==1 || func_88(iVar2, Global_20383)){
fLocal_67=(to_float(func_318(iVar2)) / 100f);
}
else{
fLocal_67=to_float(func_318(iVar2));
}
if(func_307(iVar3, Global_20383)==1 || func_88(iVar3, Global_20383)){
fLocal_68=(to_float(func_318(iVar3)) / 100f);
}
else{
fLocal_68=to_float(func_318(iVar3));
}
if(fLocal_67 < fLocal_68){
iVar3=iVar2;
if(MISC::IS_BIT_SET(Global_8254, 0)){
if(iVar3==2){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7001", &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}
if(iVar3==0){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7002", &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}
if(iVar3==12){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7003", &(Global_2028[iVar3 /*29*/].f_3), "CELL_E_311", 0, 0);
}}
}}}}
iVar2++;
}
Global_20389[iVar1]=iVar3;
iVar0[iVar3]=1;
if(!MISC::IS_BIT_SET(Global_8254, 0)){
if(func_145(iVar3, Global_20383)==1){
if(iVar2 !=Global_20383){
if(func_80(iVar3, Global_20383)==0){
if(func_307(iVar3, Global_20383)==1 || func_88(iVar3, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
}
else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
}}elseif(func_307(iVar3, Global_20383)==1 || func_88(iVar3, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}}}}
if(func_145(iVar1, Global_20383)==1){
if(iVar1 !=Global_20383){
iLocal_69++;
}}
iVar1++;
}
if(!MISC::IS_BIT_SET(Global_8254, 0)){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(Global_20326==0){
func_298();
}}}
func_297();
}


void func_297(){
if(!Global_20383.f_1==10 && !Global_20383.f_1==9){
if(MISC::IS_BIT_SET(Global_8253, 9)){
wait(750);
}
if(Global_20383.f_1 > 6){
func_160(Global_20364, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8254, 0)){
func_158(Global_20364, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
}else{
func_158(Global_20364, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
}
Global_8256=99;
if(MISC::IS_BIT_SET(Global_8253, 9)){
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(MISC::IS_BIT_SET(Global_8254, 0)){
if(Global_20371){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
if(iLocal_69 > 0){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
}
if(Global_20326==0){
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
if(iLocal_69 > 0){
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_157(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_157(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
func_157(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}}}
func_295(12, iLocal_275);
func_295(2, iLocal_276);
func_295(0, iLocal_277);
}


void func_298(){
int iVar0;
int iVar1;
int iVar2;
struct<13> Var3;
int iVar4;
int iVar5;
func_295(147, 1320);
func_295(74, 180);
func_295(75, 190);
iVar0=0;
iVar1=0;
iVar2=0;
iLocal_70=iLocal_69;
iLocal_71=iLocal_70;
func_306(&Local_293);
iVar4=0;
if(Global_78558){
if(func_301()==0){
iVar4=1;
}}
iVar2=0;
while (iVar2 < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(iVar2);
if(func_178(iVar0, 0, 1)){
if(iVar4==0){
if(!iVar0==PLAYER::PLAYER_ID()){
Local_293[iVar1]=iVar0;
func_300(PLAYER::GET_PLAYER_NAME(iVar0));
iVar1++;
}}}
iVar2++;
}
Local_293.f_33=iVar1;
iVar2=0;
iVar1=0;
if(func_182(PLAYER::PLAYER_ID())){
iVar5=NETWORK::NETWORK_GET_FRIEND_COUNT();
if(iVar5 > 100){
iVar5=100;
}
iVar2=0;
while (iVar2 <=(iVar5 - 1)){
if(NETWORK::NETWORK_IS_FRIEND_ONLINE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2))){
if(NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2))){
Var3={
func_299(iVar2) 
};
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3)){
if(iVar4==0){
if(iVar1 < 100){
Local_293.f_34[iVar1 /*29*/]={
Var3 
};
if(func_181()){
StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_DISPLAY_NAME(iVar2), 64);
}else{
StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
}
func_300(&(Local_293.f_34[iVar1 /*29*/].f_13));
iVar1++;
}
}}}}
iVar2++;
}}
Local_293.f_2935=(Local_293.f_33 + iVar1);
}
struct<13> func_299(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_FRIEND(iParam0, &Var0, 13);
return Var0;
}


void func_300(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(iLocal_70));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_MP_999");
func_81("CELL_MP_999");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_70++;
iLocal_69++;
}

int func_301(){
if(!func_302()){
return 0;
}
return 1;
}

int func_302(){
if(Global_1574612){
return 1;
}
if(func_305()){
return 1;
}
if(func_304()){
return 1;
}
return func_303(120, -1);
}

int func_303(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_67(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_304(){
return Global_1575048;
}


bool func_305(){
return Global_1575050;
}


void func_306(var uParam0){
int iVar0;
struct<13> Var1;
iVar0=0;
iVar0=0;
while (iVar0 < 32){
(*uParam0)[iVar0]=func_16();
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 100){
uParam0->f_34[iVar0 /*29*/]={
Var1 
};
iVar0++;
}
uParam0->f_2936=0;
uParam0->f_33=0;
uParam0->f_2935=0;
iVar0=0;
iVar0=0;
while (iVar0 < 8){
uParam0->f_2937[iVar0]=0;
iVar0++;
}
uParam0->f_2946=0;
StringCopy(&(uParam0->f_2947), "", 64);
uParam0->f_2963={
Var1 
};
uParam0->f_2976=0;
uParam0->f_2977=0;
func_290(&(uParam0->f_2979));
uParam0->f_2999=0;
StringCopy(&(uParam0->f_2983), "", 64);
}

int func_307(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}


void func_308(){
int iVar0[191];
int iVar1;
int iVar2;
int iVar3;
int iVar4;
func_295(147, 1320);
func_295(74, 180);
func_295(75, 190);
func_160(Global_20364, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
wait(0);
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
iLocal_69=0;
if(!MISC::IS_BIT_SET(Global_8254, 0)){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(Global_20326==0 && func_317(0)){
func_315();
}}}
iLocal_72=iLocal_69;
iLocal_106=0;
iLocal_89=0;
iVar1=iLocal_69;
while (iVar1 < 190){
iVar2=0;
iVar3=190;
func_295(iVar3, 5000);
func_21();
while (iVar2 < 190){
if(MISC::IS_BIT_SET(Global_8254, 0)){
if((iVar2==2 || iVar2==0) || iVar2==12){
func_295(12, 3);
func_295(2, 1);
func_295(0, 2);
bLocal_66=true;
}else{
bLocal_66=false;
}}elseif(func_145(iVar2, Global_20383)==1){
bLocal_66=true;
}else{
bLocal_66=false;
}
if(func_314()){
if(Global_1836500==1 && iVar2==19){
bLocal_66=false;
}
if(Global_1836499==1 && iVar2==175){
bLocal_66=false;
}}
iVar4=iVar2;
if((func_313(iVar4) && !func_310(iVar4)) && !func_309(iVar4)){
bLocal_66=false;
}
if(bLocal_66){
if(iVar2 !=Global_20383){
if(iVar0[iVar2]==0){
if(func_307(iVar2, Global_20383)==1 || func_88(iVar2, Global_20383)){
fLocal_67=(to_float(func_318(iVar2)) / 100f);
}
else{
fLocal_67=to_float(func_318(iVar2));
}
if(func_307(iVar3, Global_20383)==1 || func_88(iVar3, Global_20383)){
fLocal_68=(to_float(func_318(iVar3)) / 100f);
}
else{
fLocal_68=to_float(func_318(iVar3));
}
if(fLocal_67 < fLocal_68){
iVar3=iVar2;
if(MISC::IS_BIT_SET(Global_8254, 0)){
if(iVar3==2){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7001", &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}
if(iVar3==0){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7002", &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}
if(iVar3==12){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7003", &(Global_2028[iVar3 /*29*/].f_3), "CELL_E_311", 0, 0);
}}
}}}}
iVar2++;
}
Global_20389[iVar1]=iVar3;
iVar0[iVar3]=1;
if(!MISC::IS_BIT_SET(Global_8254, 0)){
if(func_145(iVar3, Global_20383)==1){
if(iVar2 !=Global_20383){
if(func_80(iVar3, Global_20383)==0){
if(func_307(iVar3, Global_20383)==1 || func_88(iVar3, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
}
else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
}}elseif(func_307(iVar3, Global_20383)==1 || func_88(iVar3, Global_20383)){
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}else{
func_157(Global_20364, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_3), &(Global_2028[iVar3 /*29*/].f_7), 0, 0);
}}}}
if(func_145(iVar1, Global_20383)==1){
if(iVar1 !=Global_20383){
iLocal_69++;
}}
iVar1++;
}
func_297();
}

int func_309(int iParam0){
if(MISC::IS_BIT_SET(Global_8253, 16)){
return Global_22756==iParam0;
}
return 0;
}

int func_310(int iParam0){
int iVar0;
int iVar1;
bool bVar2;
if(!func_312()){
return 1;
}
iVar0=func_311(iParam0);
if(iVar0 !=-1){
iVar1=(iVar0 / 32);
bVar2=(iVar0 % 32);
switch (iVar1){
case 0:
return !MISC::IS_BIT_SET(func_66(10868, -1, 0), bVar2);
case 1:
return !MISC::IS_BIT_SET(func_66(10869, -1, 0), bVar2);
}
default:
}
return 0;
}

int func_311(int iParam0){
switch (iParam0){
case 12:
return 1;
case 18:
return 2;
case 19:
return 3;
case 20:
return 4;
case 22:
return 5;
case 31:
return 6;
case 41:
return 7;
case 52:
return 8;
case 53:
return 9;
case 62:
return 10;
case 74:
return 11;
case 75:
return 11;
case 76:
return 12;
case 77:
return 13;
case 78:
return 14;
case 79:
return 15;
case 80:
return 16;
case 81:
return 17;
case 82:
return 18;
case 84:
return 19;
case 85:
return 20;
case 86:
return 21;
case 130:
return 22;
case 104:
return 23;
case 105:
return 24;
case 106:
return 25;
case 107:
return 26;
case 108:
return 27;
case 109:
return 28;
case 110:
return 29;
case 111:
return 30;
case 131:
return 31;
case 147:
return 32;
case 148:
return 33;
case 151:
return 34;
case 152:
return 35;
case 153:
return 36;
case 154:
return 37;
case 155:
return 38;
case 156:
return 39;
case 157:
return 40;
case 158:
return 41;
case 159:
return 42;
case 163:
return 43;
case 164:
return 44;
case 167:
return 45;
case 168:
return 46;
case 169:
return 47;
case 171:
return 48;
case 172:
return 49;
case 173:
return 50;
case 175:
return 51;
case 176:
return 52;
case 179:
return 53;
case 180:
return 54;
case 181:
return 55;
case 182:
return 56;
case 183:
return 57;
case 184:
return 58;
case 188:
return 59;
case 189:
return 60;
default:
}
return -1;
}


bool func_312(){
return Global_262145.f_33702;
}


bool func_313(int iParam0){
return func_311(iParam0) !=-1;
}

int func_314(){
if(Global_78558){
if(Global_1836499 || Global_1836500==1){
return 1;
}}
return 0;
}


void func_315(){
int iVar0;
int iVar1;
int iVar2;
struct<13> Var3;
int iVar4;
int iVar5;
func_295(147, 1320);
func_295(74, 180);
func_295(75, 190);
iVar0=0;
iVar1=0;
iVar2=0;
iLocal_70=iLocal_69;
iLocal_71=iLocal_70;
func_306(&Local_293);
iVar4=0;
if(Global_78558){
if(func_301()==0){
iVar4=1;
}}
iVar2=0;
while (iVar2 < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(iVar2);
if(func_178(iVar0, 0, 1)){
if(iVar4==0){
if(!iVar0==PLAYER::PLAYER_ID()){
Local_293[iVar1]=iVar0;
func_316(PLAYER::GET_PLAYER_NAME(iVar0));
iVar1++;
}}}
iVar2++;
}
Local_293.f_33=iVar1;
iVar1=0;
iVar2=0;
if(func_182(PLAYER::PLAYER_ID())){
iVar5=NETWORK::NETWORK_GET_FRIEND_COUNT();
if(iVar5 > 100){
iVar5=100;
}
iVar2=0;
while (iVar2 <=(iVar5 - 1)){
if(NETWORK::NETWORK_IS_FRIEND_ONLINE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2))){
if(NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2))){
Var3={
func_299(iVar2) 
};
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3)){
if(iVar4==0){
if(iVar1 < 100){
Local_293.f_34[iVar1 /*29*/]={
Var3 
};
if(func_181()){
StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_DISPLAY_NAME(iVar2), 64);
}else{
StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
}
func_316(&(Local_293.f_34[iVar1 /*29*/].f_13));
iVar1++;
}
}}}}
iVar2++;
}}
Local_293.f_2935=(Local_293.f_33 + iVar1);
}


void func_316(var uParam0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(iLocal_70));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_81("CELL_MP_999");
func_81("CELL_MP_999");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_70++;
iLocal_69++;
}

int func_317(int iParam0){
int iVar0;
bool bVar1;
if(!func_312()){
return 1;
}
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
switch (iVar0){
case 0:
return !MISC::IS_BIT_SET(func_66(10868, -1, 0), bVar1);
case 1:
return !MISC::IS_BIT_SET(func_66(10869, -1, 0), bVar1);
default:
}
return 0;
}


var func__318(int iParam0){
return Global_2028[iParam0 /*29*/].f_1;
}