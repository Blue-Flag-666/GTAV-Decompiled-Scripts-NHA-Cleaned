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
var uLocal_68=-1;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
float fLocal_76=0f;
float fLocal_77=0f;
float fLocal_78=0f;
float fLocal_79=0f;
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
int iLocal_108=0;
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
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=17;
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
var uLocal_154=17;
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
struct<592> Local_180={
0, 0, 0, 0, 2, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1822283721, 0, 0, 0, 0, 0, 0, 0, 0, 15, 6, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 20, -1, 0, 1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, -1, 5, 6, 5, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
struct<9> Local_187[32];
var uLocal_188=0;
var uLocal_189=0;
int iLocal_190=0;
bool bLocal_191=0;
int iLocal_192=0;
struct<2> Local_193[6];
struct<8> Local_194[6];
var uLocal_195[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
int iLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
struct<2> Local_209[6];
var uLocal_210=0;
var uLocal_211=0;
int iLocal_212=0;
int iLocal_213=0;
struct<4> Local_214={
0, 0, 0, 0 
};
struct<457> Local_215={
0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0 
};
var uLocal_216=0;
var uLocal_217=16;
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
var uLocal_238=12;
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
var uLocal_654=0;
var uLocal_655=0;
var uLocal_656=0;
var uLocal_657=0;
var uLocal_658=0;
var uLocal_659=0;
var uLocal_660=0;
var uLocal_661=0;
var uLocal_662=0;
var uLocal_663=0;
var uLocal_664=0;
var uLocal_665=0;
var uLocal_666=0;
var uLocal_667=0;
var uLocal_668=0;
var uLocal_669=0;
var uLocal_670=0;
var uLocal_671=0;
var uLocal_672=0;
var uLocal_673=0;
var uLocal_674=0;
var uLocal_675=0;
var uLocal_676=0;
var uLocal_677=0;
var uLocal_678=0;
var uLocal_679=0;
var uLocal_680=0;
var uLocal_681=0;
var uLocal_682=0;
var uLocal_683=0;
var uLocal_684=0;
var uLocal_685=0;
var uLocal_686=0;
var uLocal_687=0;
var uLocal_688=0;
var uLocal_689=0;
var uLocal_690=0;
var uLocal_691=0;
var uLocal_692=0;
var uLocal_693=0;
var uLocal_694=0;
var uLocal_695=0;
var uLocal_696=0;
var uLocal_697=0;
var uLocal_698=0;
var uLocal_699=0;
var uLocal_700=0;
var uLocal_701=0;
var uLocal_702=0;
var uLocal_703=0;
var uLocal_704=0;
var uLocal_705=0;
var uLocal_706=0;
var uLocal_707=0;
var uLocal_708=0;
var uLocal_709=0;
var uLocal_710=0;
var uLocal_711=0;
var uLocal_712=0;
var uLocal_713=0;
var uLocal_714=0;
var uLocal_715=0;
var uLocal_716=0;
var uLocal_717=0;
var uLocal_718=0;
var uLocal_719=0;
var uLocal_720=0;
var uLocal_721=0;
var uLocal_722=0;
var uLocal_723=0;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=0;
var uLocal_728=0;
var uLocal_729=0;
var uLocal_730=0;
var uLocal_731=0;
var uLocal_732=0;
var uLocal_733=0;
var uLocal_734=0;
var uLocal_735=0;
var uLocal_736=0;
var uLocal_737=0;
var uLocal_738=0;
var uLocal_739=0;
var uLocal_740=0;
var uLocal_741=0;
var uLocal_742=0;
var uLocal_743=0;
var uLocal_744=0;
var uLocal_745=0;
var uLocal_746=0;
var uLocal_747=0;
var uLocal_748=0;
var uLocal_749=0;
var uLocal_750=0;
var uLocal_751=0;
var uLocal_752=0;
var uLocal_753=0;
var uLocal_754=0;
var uLocal_755=0;
var uLocal_756=0;
var uLocal_757=0;
var uLocal_758=0;
var uLocal_759=0;
var uLocal_760=0;
var uLocal_761=0;
var uLocal_762=0;
var uLocal_763=0;
var uLocal_764=0;
var uLocal_765=0;
var uLocal_766=0;
var uLocal_767=0;
var uLocal_768=0;
var uLocal_769=0;
var uLocal_770=0;
var uLocal_771=0;
var uLocal_772=0;
var uLocal_773=0;
var uLocal_774=0;
var uLocal_775=0;
var uLocal_776=0;
var uLocal_777=0;
var uLocal_778=0;
var uLocal_779=0;
var uLocal_780=0;
var uLocal_781=0;
var uLocal_782=0;
var uLocal_783=0;
var uLocal_784=0;
var uLocal_785=0;
var uLocal_786=0;
var uLocal_787=0;
var uLocal_788=0;
var uLocal_789=0;
var uLocal_790=0;
var uLocal_791=0;
var uLocal_792=0;
var uLocal_793=0;
var uLocal_794=0;
var uLocal_795=0;
var uLocal_796=0;
var uLocal_797=0;
var uLocal_798=0;
var uLocal_799=0;
var uLocal_800=0;
var uLocal_801=0;
var uLocal_802=0;
var uLocal_803=0;
var uLocal_804=0;
var uLocal_805=0;
var uLocal_806=0;
var uLocal_807=0;
var uLocal_808=0;
var uLocal_809=0;
var uLocal_810=0;
var uLocal_811=0;
var uLocal_812=0;
var uLocal_813=0;
var uLocal_814=0;
var uLocal_815=0;
var uLocal_816=0;
var uLocal_817=0;
var uLocal_818=0;
var uLocal_819=0;
var uLocal_820=0;
var uLocal_821=0;
var uLocal_822=0;
var uLocal_823=0;
var uLocal_824=0;
var uLocal_825=0;
var uLocal_826=0;
var uLocal_827=0;
var uLocal_828=0;
var uLocal_829=0;
var uLocal_830=0;
var uLocal_831=0;
var uLocal_832=0;
var uLocal_833=0;
var uLocal_834=0;
var uLocal_835=0;
var uLocal_836=0;
var uLocal_837=0;
var uLocal_838=0;
var uLocal_839=0;
var uLocal_840=0;
var uLocal_841=0;
var uLocal_842=0;
var uLocal_843=0;
var uLocal_844=0;
var uLocal_845=0;
var uLocal_846=0;
var uLocal_847=0;
var uLocal_848=0;
var uLocal_849=0;
var uLocal_850=0;
var uLocal_851=0;
var uLocal_852=0;
var uLocal_853=0;
var uLocal_854=0;
var uLocal_855=0;
var uLocal_856=0;
var uLocal_857=0;
var uLocal_858=0;
var uLocal_859=0;
var uLocal_860=0;
var uLocal_861=0;
var uLocal_862=0;
var uLocal_863=0;
var uLocal_864=0;
var uLocal_865=0;
var uLocal_866=0;
var uLocal_867=0;
var uLocal_868=0;
var uLocal_869=0;
var uLocal_870=0;
var uLocal_871=0;
var uLocal_872=0;
var uLocal_873=0;
var uLocal_874=0;
var uLocal_875=0;
var uLocal_876=0;
var uLocal_877=0;
var uLocal_878=0;
var uLocal_879=0;
var uLocal_880=0;
var uLocal_881=0;
var uLocal_882=0;
var uLocal_883=0;
var uLocal_884=0;
var uLocal_885=0;
var uLocal_886=0;
var uLocal_887=0;
var uLocal_888=0;
var uLocal_889=0;
var uLocal_890=0;
var uLocal_891=0;
var uLocal_892=0;
var uLocal_893=0;
var uLocal_894=0;
var uLocal_895=0;
var uLocal_896=0;
var uLocal_897=0;
var uLocal_898=0;
var uLocal_899=0;
var uLocal_900=0;
var uLocal_901=0;
var uLocal_902=0;
var uLocal_903=0;
var uLocal_904=0;
var uLocal_905=0;
var uLocal_906=0;
var uLocal_907=0;
var uLocal_908=0;
var uLocal_909=0;
var uLocal_910=0;
var uLocal_911=0;
var uLocal_912=0;
var uLocal_913=0;
var uLocal_914=0;
var uLocal_915=0;
var uLocal_916=0;
var uLocal_917=0;
var uLocal_918=0;
var uLocal_919=0;
var uLocal_920=0;
var uLocal_921=0;
var uLocal_922=0;
var uLocal_923=0;
var uLocal_924=0;
var uLocal_925=0;
var uLocal_926=0;
var uLocal_927=0;
var uLocal_928=0;
var uLocal_929=0;
var uLocal_930=0;
var uLocal_931=0;
var uLocal_932=0;
var uLocal_933=0;
var uLocal_934=0;
var uLocal_935=0;
var uLocal_936=1065353216;
var uLocal_937=0;
var uLocal_938=16;
var uLocal_939=0;
var uLocal_940=0;
var uLocal_941=0;
var uLocal_942=0;
var uLocal_943=0;
var uLocal_944=0;
var uLocal_945=0;
var uLocal_946=0;
var uLocal_947=0;
var uLocal_948=0;
var uLocal_949=0;
var uLocal_950=0;
var uLocal_951=0;
var uLocal_952=0;
var uLocal_953=0;
var uLocal_954=0;
var uLocal_955=0;
var uLocal_956=0;
var uLocal_957=0;
var uLocal_958=0;
var uLocal_959=0;
var uLocal_960=0;
var uLocal_961=0;
var uLocal_962=0;
var uLocal_963=0;
var uLocal_964=0;
var uLocal_965=0;
var uLocal_966=0;
var uLocal_967=0;
var uLocal_968=0;
var uLocal_969=0;
var uLocal_970=0;
var uLocal_971=0;
var uLocal_972=0;
var uLocal_973=0;
var uLocal_974=0;
var uLocal_975=0;
var uLocal_976=0;
var uLocal_977=0;
var uLocal_978=3;
var uLocal_979=0;
var uLocal_980=0;
var uLocal_981=0;
var uLocal_982=0;
var uLocal_983=0;
var uLocal_984=0;
var uLocal_985=0;
var uLocal_986=0;
var uLocal_987=0;
var uLocal_988=0;
var uLocal_989=0;
int iLocal_990[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_991[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_992=0;
var uLocal_993=-1;
var uLocal_994=-1;
var uLocal_995=0;
var uLocal_996=0;
var uLocal_997=0;
var uLocal_998=0;
var uLocal_999=0;
var uLocal_1000=0;
var uLocal_1001=-1;
var uLocal_1002=0;
var uLocal_1003=0;
var uLocal_1004=0;
var uLocal_1005=0;
var uLocal_1006=0;
var uLocal_1007=0;
var uLocal_1008=-1;
var uLocal_1009=0;
var uLocal_1010=0;
var uLocal_1011=-1;
var uLocal_1012=-1;
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
fLocal_76=3f;
fLocal_77=0f;
fLocal_78=2f;
fLocal_79=100f;
iLocal_108=-1;
fLocal_110=0.5f;
iLocal_192=-1;
iLocal_201=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_2026(&uScriptParam_992)){
func_1746();
}}
if(MISC::IS_BIT_SET(Local_180.f_3, 7)){
func_1746();
}
while (true){
func_1745();
if(func_1741()){
func_1746();
}
if(func_1731(0)){
func_1746();
}
if(func_1728()){
func_1746();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
func_1726(&Local_215);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
switch (func_1725(NETWORK::PARTICIPANT_ID_TO_INT())){
case 0:
if(func_1682()){
if(func_1681() > 0){
if(func_1680(PLAYER::PLAYER_ID(), 1, 1) && !func_1679(PLAYER::PLAYER_ID())){
if(Local_180.f_290==0){
func_1678(2);
}}
}}
break;
case 2:
func_1674();
func_1663();
func_797();
func_794();
func_612();
func_609();
if(func_1681()==5){
func_1678(5);
}elseif((func_608(NETWORK::PARTICIPANT_ID())==2 || func_608(NETWORK::PARTICIPANT_ID())==3) || func_608(NETWORK::PARTICIPANT_ID())==4){
if(func_606(PLAYER::PLAYER_PED_ID(), 1) || func_1679(PLAYER::PLAYER_ID())){
if(!func_586() && !MISC::IS_BIT_SET(uLocal_989, 4)){
AUDIO::TRIGGER_MUSIC_EVENT("GA_LEAVE_AREA");
MISC::SET_BIT(&uLocal_989, 4);
}
func_1678(5);
}}
break;
case 3:
if(!func_586()){
func_577(&Local_215, 1);
}
if(!MISC::IS_BIT_SET(uLocal_188, 17)){
if(func_586()){
func_575(20);
MISC::SET_BIT(&uLocal_188, 17);
if(Local_215.f_436 > 0){
func_564(PLAYER::PLAYER_ID(), 1, 0, 0);
}
}
elseif(func_425()){
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_CELEB_SCREEN_SCENE")){
AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
}
func_575(20);
MISC::SET_BIT(&uLocal_188, 17);
}}else{
func_424(&(Local_180.f_1));
if(func_423(&(Local_180.f_1))){
func_1678(5);
}}
break;
case 4:
func_1678(5);
case 5:
func_1746();
break;
default:
break;
}}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_1681()){
case 0:
func_421();
if(func_243(&(Local_180.f_5))){
func_241();
func_240(2);
}
break;
case 2:
func_31();
func_23();
func_1();
break;
case 3:
Local_180.f_0=5;
break;
case 5:
break;
default:
break;
}}}}


void func_1(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
if(!MISC::IS_BIT_SET(Local_180.f_381[iVar0 /*27*/].f_6, 0)){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_381[iVar0 /*27*/])){
if(OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_180.f_381[iVar0 /*27*/]), 0)){
if(func_17(iVar0)){
func_2(iVar0);
MISC::SET_BIT(&(Local_180.f_381[iVar0 /*27*/].f_6), false);
}}}}elseif(!MISC::IS_BIT_SET(Local_180.f_381[iVar0 /*27*/].f_6, 1)){
func_2(iVar0);
if(Local_180.f_381[iVar0 /*27*/].f_26 > 5){
MISC::SET_BIT(&(Local_180.f_381[iVar0 /*27*/].f_6), true);
}
Local_180.f_381[iVar0 /*27*/].f_26++;
}
iVar0++;
}}


void func_2(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4)){
func_3(&(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/]), ENTITY::GET_ENTITY_COORDS(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4, 1) + Vector((0.046f * 1.5f), 0f, 0f));
}}
iVar0++;
}}


void func_3(var uParam0, struct<3> Param1){
if(func_16() && func_15(*uParam0)){
func_4(uParam0, Param1);
}else{
ENTITY::SET_ENTITY_COORDS(uParam0->f_4, Param1, 1, 0, 0, 1);
}}


void func_4(var uParam0, struct<3> Param1){
int iVar0;
int iVar1;
int iVar2;
struct<8> Var3;
iVar1=func_14(uParam0, -1);
if(iVar1 !=-1){
iVar0=Global_1914091[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*297*/].f_98.f_21[iVar1 /*14*/].f_4;
Global_1914091[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*297*/].f_98.f_21[iVar1 /*14*/].f_5={
Param1 
};
}else{
iVar1=func_9(uParam0);
if(iVar1 !=-1){
iVar0=Global_1914030[iVar1 /*6*/].f_5;
}}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Param1, 1, 0, 0, 1);
}
iVar2=func_5(1, 1);
if(iVar2 !=0){
Var3.f_2=123;
Var3.f_0=-285086167;
Var3.f_1=PLAYER::PLAYER_ID();
Var3.f_2={
*uParam0 
};
Var3.f_7={
Param1 
};
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var3, 10, iVar2);
}}

int func_5(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
int iVar2;
bVar1=false;
while (bVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_1680(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_6(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}


bool func_6(bool bParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_7(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_7(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_8();
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

int func_8(){
return Global_1574918;
}

int func_9(var uParam0){
int iVar0;
if(!func_12(uParam0)){
return -1;
}
iVar0=0;
while (iVar0 < 10){
if(func_10(uParam0, &(Global_2652258.f_2452[iVar0 /*16*/]))){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_10(var uParam0, var uParam1){
if((*uParam0==*uParam1 && func_11(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4==uParam1->f_4){
return 1;
}
return 0;
}


bool func_11(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_12(var uParam0){
if((*uParam0==123 || func_13(uParam0->f_1)) || uParam0->f_4==0){
return 0;
}
return 1;
}

int func_13(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_14(var uParam0, int iParam1){
int iVar0;
if(!func_12(uParam0)){
return -1;
}
if(iParam1==-1){
iParam1=PLAYER::NETWORK_PLAYER_ID_TO_INT();
}
iVar0=0;
while (iVar0 < 10){
if(func_10(uParam0, &(Global_1914091[iParam1 /*297*/].f_98.f_21[iVar0 /*14*/]))){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_15(int iParam0){
switch (iParam0){
case joaat("pickup_money_variable"):
case joaat("pickup_money_case"):
case joaat("pickup_money_wallet"):
case joaat("pickup_money_purse"):
case joaat("pickup_money_dep_bag"):
case joaat("pickup_money_med_bag"):
case joaat("pickup_money_paper_bag"):
case joaat("pickup_money_security_case"):
case joaat("pickup_gang_attack_money"):
return 1;
default:
}
return 0;
}


var func__16(){
return Global_262145.f_30937;
}

int func_17(int iParam0){
int iVar0;
struct<3> Var1;
int iVar2;
if(func_13(Local_180.f_381[iParam0 /*27*/].f_2)){
return 1;
}
iVar2=0;
MISC::SET_BIT(&iVar2, 3);
MISC::SET_BIT(&iVar2, 4);
switch (Local_180.f_381[iParam0 /*27*/].f_7){
case 0:
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2)){
iVar0=0;
while (iVar0 < 2){
if(!ENTITY::DOES_ENTITY_EXIST(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4)){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_180.f_381[iParam0 /*27*/]), (0.6f - (IntToFloat(iVar0) * 0.4f)), 0f, 0.1f) 
};
Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/]={
func_19(joaat("pickup_gang_attack_money"), Var1, iVar2, Local_180.f_381[iParam0 /*27*/].f_9, 0, 1, 1) 
};
}
iVar0++;
}
return 1;
}
break;
case 2:
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2)){
iVar0=0;
while (iVar0 < 2){
if(!ENTITY::DOES_ENTITY_EXIST(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4)){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_180.f_381[iParam0 /*27*/]), 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.1f) 
};
Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/]={
func_19(Local_180.f_381[iParam0 /*27*/].f_8, Var1, iVar2, -1, 0, 1, 1) 
};
}
iVar0++;
}
if(func_18(iParam0, 2)){
return 1;
}}
break;
case 3:
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2)){
iVar0=0;
while (iVar0 < 2){
if(!ENTITY::DOES_ENTITY_EXIST(Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4)){
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_180.f_381[iParam0 /*27*/]), 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.2f) 
};
Local_180.f_381[iParam0 /*27*/].f_10[iVar0 /*5*/]={
func_19(joaat("pickup_ammo_bullet_mp"), Var1, iVar2, Local_180.f_381[iParam0 /*27*/].f_9, 0, 1, 1) 
};
}
iVar0++;
}
if(func_18(iParam0, 2)){
return 1;
}}
break;
}
return 0;
}

int func_18(int iParam0, int iParam1){
struct<3> Var0;
int iVar1;
iVar1=0;
MISC::SET_BIT(&iVar1, 3);
MISC::SET_BIT(&iVar1, 4);
if(NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 1)){
if(!ENTITY::DOES_ENTITY_EXIST(Local_180.f_381[iParam0 /*27*/].f_10[iParam1 /*5*/].f_4)){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_180.f_381[iParam0 /*27*/]), 0f, (0.25f - (IntToFloat(iParam1) * 0.25f)), 0.1f) 
};
Local_180.f_381[iParam0 /*27*/].f_10[iParam1 /*5*/]={
func_19(joaat("pickup_gang_attack_money"), Var0, iVar1, round((IntToFloat(Global_262145.f_4456) * Global_262145)), 0, 1, 1) 
};
}
return 1;
}
return 0;
}


struct<5> func_19(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6){
struct<5> Var0;
Var0=123;
if(func_16() && func_15(iParam0)){
Var0={
func_20(iParam0, Param1, iParam2, iParam3, iParam4, bParam5) 
};
}else{
Var0.f_4=OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, iParam6);
}
return Var0;
}


struct<5> func_20(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, bool bParam5){
struct<5> Var0;
int iVar1;
struct<5> Var2;
int iVar3;
Var0=123;
if(func_22()==-1){
return Var0;
}
iVar1=func_21(-1);
if(iVar1==-1){
return Var0;
}
Var2=123;
Var2.f_0=iParam0;
Var2.f_1={
Param1 
};
if(func_9(&Var2) !=-1){
return Var0;
}
MISC::SET_BIT(&uParam2, 5);
Var2.f_4=OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, uParam2, uParam3, uParam4, bParam5, 0);
iVar3=PLAYER::NETWORK_PLAYER_ID_TO_INT();
if(bParam5){
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_12=SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_13=NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
if(Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_13==0){
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_13=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_11=1;
}else{
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_11=2;
}}
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/]={
Var2 
};
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_5={
Param1 
};
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_8=uParam2;
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_9=uParam3;
Global_1914091[iVar3 /*297*/].f_98.f_21[iVar1 /*14*/].f_10=uParam4;
return Var2;
}

int func_21(int iParam0){
int iVar0;
int iVar1;
if(iParam0==-1){
iParam0=PLAYER::NETWORK_PLAYER_ID_TO_INT();
}
iVar0=-1;
iVar1=0;
while (iVar1 < 10){
if(!func_12(&(Global_1914091[iParam0 /*297*/].f_98.f_21[iVar1 /*14*/]))){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}

int func_22(){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < 10){
if(!func_12(&(Global_2652258.f_2452[iVar1 /*16*/]))){
iVar0=iVar1;
}else{
iVar1++;
}}
return iVar0;
}


void func_23(){
int iVar0;
int iVar1;
bool bVar2;
bool bVar3;
var uVar4;
if(Local_180.f_4 < 5){
if(Local_180.f_284 !=iLocal_212){
Local_180.f_286=0;
iLocal_212=Local_180.f_284;
if(Local_180.f_285 < Local_180.f_284){
Local_180.f_285=Local_180.f_284;
}
Local_180.f_287=0;
iVar0=1;
}}
Local_180.f_284=0;
Local_180.f_291=0;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
Local_180.f_284++;
if(iVar0==1){
func_25(bVar2);
}
if(Local_180.f_289==-1){
if(Local_187[iVar1 /*9*/].f_8 !=-1){
Local_180.f_289=Local_187[iVar1 /*9*/].f_8;
}}}
iVar1++;
}
if(iVar0==1){
func_24();
}
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_196))){
bVar3=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_196));
uVar4=PLAYER::GET_PLAYER_PED(bVar3);
if(!MISC::IS_BIT_SET(Local_180.f_3, 9)){
if(MISC::IS_BIT_SET(Local_187[iLocal_196 /*9*/].f_1, 6)){
MISC::SET_BIT(&(Local_180.f_3), 9);
}}
if(!MISC::IS_BIT_SET(Local_180.f_3, 1)){
if(MISC::IS_BIT_SET(Local_187[iLocal_196 /*9*/].f_1, 2)){
MISC::SET_BIT(&(Local_180.f_3), true);
}}
if(!MISC::IS_BIT_SET(Local_180.f_3, 2)){
if(MISC::IS_BIT_SET(Local_187[iLocal_196 /*9*/].f_1, 3)){
MISC::SET_BIT(&(Local_180.f_3), 2);
}}
if(!MISC::IS_BIT_SET(Local_180.f_3, 3)){
if(MISC::IS_BIT_SET(Local_187[iLocal_196 /*9*/].f_1, 4)){
MISC::SET_BIT(&(Local_180.f_3), 3);
}}
if(func_1680(bVar3, 1, 1)){
if(Local_187[iLocal_196 /*9*/].f_2==2){
if(!MISC::IS_BIT_SET(Local_180.f_3, 4)){
if((PED::IS_PED_IN_ANY_HELI(uVar4) || PED::IS_PED_IN_ANY_PLANE(uVar4)) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(uVar4)){
MISC::SET_BIT(&(Local_180.f_3), 4);
}}}}}
iLocal_196++;
if(iLocal_196 >=NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iLocal_196=0;
}}


void func_24(){
Local_180.f_286=(Local_180.f_286 / 4);
if(Local_180.f_286 > 100){
Local_180.f_286=100;
}elseif(Local_180.f_286 < 0){
Local_180.f_286=0;
}
Local_180.f_287=(Local_180.f_287 / Local_180.f_284);
Local_180.f_288=(Local_180.f_286 / 2);
if(Local_180.f_288 > 40){
Local_180.f_288=40;
}}


void func_25(bool bParam0){
int iVar0;
Local_180.f_286 +=60;
iVar0=func_26(bParam0);
Local_180.f_286=(Local_180.f_286 + iVar0);
Local_180.f_287=(Local_180.f_287 + iVar0);
}

int func_26(int iParam0){
int iVar0;
iVar0=func_28(iParam0);
if(iVar0 < 0){
return 0;
}
return func_27(iVar0, 0);
}

int func_27(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
if(iParam1==0){}
iVar1=8000;
iVar2=0;
iVar3=((iVar1 - iVar2) / 2);
iVar0=0;
while (iVar0 <=100){
if(iVar1==iVar2){
iVar0=8000;
if(iVar3==0){
iVar3=1;
}
return iVar3;
}
if(Global_297010[iVar3]==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(Global_297010[iVar3] < iParam0){
if(iVar2==iVar3){
iVar2++;
}else{
iVar2=iVar3;
}}elseif(iVar1==iVar3){
iVar1=(iVar1 - 1);
}else{
iVar1=iVar3;
}
fVar4=(((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
iVar3=round(fVar4);
iVar0++;
}
return 8000;
}

int func_28(bool bParam0){
if(Global_1574632.f_9==0){
if(bParam0 > -1){
if(bParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_30(-1)];
}elseif(func_29(bParam0)){
return Global_1853910[bParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_30(-1)];
}
return 0;
}

int func_29(int iParam0){
if(iParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, iParam0);
}
return 1;
}

int func_30(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_8();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


void func_31(){
switch (func_239()){
case 0:
func_238();
break;
case 1:
func_237();
break;
case 2:
func_236();
break;
case 3:
func_235();
break;
case 4:
func_231();
break;
case 5:
func_229();
break;
}
func_34();
func_33();
func_32();
}


void func_32(){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(!MISC::IS_BIT_SET(Local_180.f_3, 7)){
if(func_239() >=5 || func_239() >=4){
MISC::SET_BIT(&(Local_180.f_3), 7);
}}}
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 7)){
if(MISC::IS_BIT_SET(Local_180.f_3, 7)){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18), 7);
}}}


void func_33(){
struct<3> Var0;
if(!MISC::IS_BIT_SET(Local_180.f_3, 11)){
Var0={
(Local_180.f_264 * 1.25f), (Local_180.f_264 * 1.25f), (Local_180.f_264 * 1.25f) 
};
if(!PED::DOES_SCENARIO_BLOCKING_AREA_EXISTS(Global_4980736.f_102388[0 /*1051*/] - Var0, Global_4980736.f_102388[0 /*1051*/] + Var0)){
uLocal_202=PED::ADD_SCENARIO_BLOCKING_AREA(Global_4980736.f_102388[0 /*1051*/] - Var0, Global_4980736.f_102388[0 /*1051*/] + Var0, 1, 1, 1, 1);
}
MISC::SET_BIT(&(Local_180.f_3), 11);
}}


void func_34(){
int iVar0;
var uVar1;
MISC::SET_BIT(&(Local_180.f_3), 5);
iVar0=0;
while (iVar0 < Global_4980736.f_102382){
switch (Local_180.f_232[iVar0 /*4*/]){
case 2:
if(func_43(iVar0)){
Local_180.f_232[iVar0 /*4*/]=1;
}
break;
case 3:
uVar1=Local_180.f_5[iVar0];
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar1)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uVar1)){
func_41(iVar0, 1);
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uVar1);
}}else{
func_41(iVar0, 0);
}
if(!func_40(&(Local_193[iVar0 /*2*/]))){
Local_180.f_232[iVar0 /*4*/].f_1=func_39();
Local_180.f_268=(Local_180.f_268 - 1);
func_38(&(Local_193[iVar0 /*2*/]), 0, 0);
}elseif(func_37(&(Local_193[iVar0 /*2*/]), Local_180.f_232[iVar0 /*4*/].f_1, 0)){
if(!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uVar1)){
func_36(&(Local_193[iVar0 /*2*/]));
Local_180.f_232[iVar0 /*4*/]=2;
}}
break;
default:
MISC::CLEAR_BIT(&(Local_180.f_3), 5);
break;
}
iVar0++;
}
uVar1=Local_180.f_5[iLocal_190];
switch (Local_180.f_232[iLocal_190 /*4*/]){
case 0:
if(func_239() > 2){
Local_180.f_232[iLocal_190 /*4*/]=1;
}elseif(!MISC::IS_BIT_SET(Local_180.f_3, 4)){
if(!func_35(Local_180.f_5[iLocal_190])){
if(PED::IS_PED_IN_COMBAT(NETWORK::NET_TO_PED(Local_180.f_5[iLocal_190]), 0)){
MISC::SET_BIT(&(Local_180.f_3), 4);
}}else{
MISC::SET_BIT(&(Local_180.f_3), 4);
}}
if(Local_180.f_265 > 0){
MISC::SET_BIT(&(Local_180.f_3), 4);
}
break;
case 1:
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(uVar1), 0)){
Local_180.f_232[iLocal_190 /*4*/]=3;
Local_180.f_265++;
}
break;
}
iLocal_190++;
if(iLocal_190 >=Global_4980736.f_102382){
iLocal_190=0;
}}

int func_35(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
}
return 1;
}


void func_36(var uParam0){
uParam0->f_1=0;
}

int func_37(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_38(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_38(var uParam0, bool bParam1, bool bParam2){
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


var func__39(){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(2, 8);
return iVar0 * 1000;
}


bool func_40(var uParam0){
return uParam0->f_1;
}


void func_41(int iParam0, bool bParam1){
if(bParam1){
func_42(&(Local_180.f_5[iParam0]));
}
Local_180.f_5[iParam0]=0;
}


void func_42(var uParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0)){
uVar0=NETWORK::NET_TO_ENT(*uParam0);
ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
}}

int func_43(int iParam0){
struct<3> Var0;
var uVar1;
struct<35> Var2;
if(func_228()){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_5[iParam0])){
STREAMING::REQUEST_MODEL(Local_180.f_257);
if(STREAMING::HAS_MODEL_LOADED(Local_180.f_257)){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
if(iLocal_192==-1 || iLocal_192==iParam0){
iLocal_192=iParam0;
Var2.f_5=1115815936;
Var2.f_13=2;
Var2.f_20=2;
Var2.f_32=-1082130432;
Var2.f_34=1;
Var2={
Local_180.f_261 
};
Var2.f_3=Local_180.f_232[iParam0 /*4*/].f_2;
Var2.f_5=20f;
if(func_54(Local_180.f_570, Local_180.f_570.f_3, Local_180.f_570.f_6, &Var0, &uVar1, Var2)){
if(func_53(&(Local_180.f_5[iParam0]), 26, Local_180.f_257, Var0, Global_4980736.f_102388[iParam0 /*1051*/].f_3, 1, 1, 1)){
func_44(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]), iParam0, 0);
TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]), Local_180.f_261, (Local_180.f_264 * 1.5f), 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]), 1, 1);
iLocal_192=-1;
Local_180.f_267++;
return 1;
}
}}}}}else{
iLocal_192=-1;
return 1;
}}
return 0;
}


void func_44(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar3=Local_180.f_286;
PED::SET_PED_RANDOM_COMPONENT_VARIATION(iParam0, 0);
if(Local_180.f_257==joaat("mp_g_m_pros_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
}
Global_4980736.f_102388[iParam1 /*1051*/].f_28=func_52();
Global_4980736.f_102388[iParam1 /*1051*/].f_28=func_51(iParam1);
if(func_49(Global_4980736.f_102388[iParam1 /*1051*/].f_28) > Local_180.f_287 || func_47(Global_4980736.f_102388[iParam1 /*1051*/].f_28)){
if(func_46()){
Global_4980736.f_102388[iParam1 /*1051*/].f_28=joaat("weapon_pistol");
}else{
Global_4980736.f_102388[iParam1 /*1051*/].f_28=joaat("weapon_microsmg");
}
Global_4980736.f_102388[iParam1 /*1051*/].f_28=func_51(iParam1);
}
WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, Global_4980736.f_102388[iParam1 /*1051*/].f_28, 25000, 1);
if(iParam2==0){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837211);
PED::SET_PED_AS_ENEMY(iParam0, 1);
}else{
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837210);
}
PED::SET_PED_CONFIG_FLAG(iParam0, 42, 1);
PED::SET_PED_CONFIG_FLAG(iParam0, 213, 1);
if(iVar3 < 25){
iVar2=0;
}elseif(iVar3 < 75){
iVar2=1;
}else{
iVar2=2;
}
PED::SET_PED_ACCURACY(iParam0, Local_180.f_288);
if(iVar3 < 20){
iVar0=100;
iVar1=0;
}elseif(iVar3 < 30){
iVar0=125;
iVar1=0;
}elseif(iVar3 < 40){
iVar0=125;
iVar1=25;
}elseif(iVar3 < 50){
iVar0=150;
iVar1=25;
}elseif(iVar3 < 60){
iVar0=150;
iVar1=50;
}elseif(iVar3 < 70){
iVar0=175;
iVar1=50;
}elseif(iVar3 < 80){
iVar0=175;
iVar1=75;
}elseif(iVar3 < 90){
iVar0=200;
iVar1=75;
}else{
iVar0=200;
iVar1=100;
}
ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, round((IntToFloat(iVar0) * Global_262145.f_165)));
ENTITY::SET_ENTITY_HEALTH(iParam0, round((IntToFloat(iVar0) * Global_262145.f_165)), 0);
PED::SET_PED_ARMOUR(iParam0, iVar1);
PED::SET_PED_COMBAT_ABILITY(iParam0, iVar2);
PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 0);
PED::SET_PED_DIES_IN_WATER(iParam0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, 1);
PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam0, Local_180.f_570, Local_180.f_570.f_3, Local_180.f_570.f_6, 0, 0);
if(!func_45(iParam1)){
PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 44, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 62, 1);
}else{
PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, 1);
}
PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 57, 0);
PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iParam0, 150f, 10);
if(Global_4980736.f_102388[iParam1 /*1051*/].f_28==joaat("weapon_minigun")){
PED::SET_PED_FIRING_PATTERN(iParam0, joaat("FIRING_PATTERN_FULL_AUTO"));
}elseif(Global_4980736.f_102388[iParam1 /*1051*/].f_28==joaat("weapon_sniperrifle") || Global_4980736.f_102388[iParam1 /*1051*/].f_28==joaat("weapon_rpg")){
PED::SET_PED_COMBAT_RANGE(iParam0, 2);
}
PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 56, 1);
WEAPON::SET_PED_AMMO_TO_DROP(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(15, 31));
PED::SET_PED_KEEP_TASK(iParam0, 1);
Local_180.f_268++;
}

int func_45(int iParam0){
if(WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)==joaat("GROUP_SHOTGUN")){
return 1;
}
switch (Local_180.f_290){
case 0:
if((iParam0==0 || iParam0==1) || iParam0==5){
return 1;
}elseif(func_46()){
return 0;
}
break;
}
return 1;
}

int func_46(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}

int func_47(int iParam0){
if(iParam0==joaat("weapon_sniperrifle")){
if(func_48(2446.646f, 4976.478f, 56.53719f, Local_180.f_261, 100f, 0)){
return 1;
}}
return 0;
}

int func_48(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_49(int iParam0){
switch (iParam0){
case joaat("weapon_pistol"):
return 0;
break;
case joaat("weapon_knife"):
return 0;
break;
case joaat("weapon_microsmg"):
return 5;
break;
case joaat("weapon_assaultsmg"):
return 29;
break;
case joaat("weapon_nightstick"):
return 3;
break;
case joaat("weapon_combatpistol"):
return 9;
break;
case joaat("weapon_smg"):
return 11;
break;
case joaat("weapon_assaultrifle"):
return 24;
break;
case joaat("weapon_sniperrifle"):
return 21;
break;
case joaat("weapon_stickybomb"):
return 19;
break;
case joaat("weapon_petrolcan"):
return 20;
break;
case joaat("weapon_pumpshotgun"):
return 17;
break;
case joaat("weapon_appistol"):
return 33;
break;
case joaat("weapon_smokegrenade"):
return 13;
break;
case joaat("weapon_grenade"):
return 15;
break;
case joaat("weapon_carbinerifle"):
if(func_50(3741, -1)){
return 0;
}else{
return 42;
}
break;
case joaat("weapon_assaultshotgun"):
return 37;
break;
case joaat("weapon_molotov"):
if(func_50(3741, -1)){
return 0;
}else{
return 31;
}
break;
case joaat("weapon_mg"):
return 50;
break;
case joaat("weapon_advancedrifle"):
return 70;
break;
case joaat("weapon_combatmg"):
return 80;
break;
case joaat("weapon_grenadelauncher"):
return 60;
break;
case joaat("weapon_heavysniper"):
return 90;
break;
case joaat("weapon_rpg"):
return 100;
break;
case joaat("weapon_minigun"):
return 120;
break;
case joaat("weapon_sawnoffshotgun"):
return 0;
break;
case joaat("weapon_golfclub"):
return 0;
break;
case joaat("weapon_crowbar"):
return 0;
break;
case joaat("weapon_bat"):
return 0;
break;
}
return 0;
}


bool func_50(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_8();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_51(int iParam0){
switch (Local_180.f_257){
case joaat("g_m_y_mexgoon_01"):
case joaat("g_m_y_mexgoon_02"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_microsmg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_lost_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_combatpistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_sawnoffshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_smg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_ballaorig_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_combatpistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_microsmg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_famca_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_microsmg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("g_m_y_korean_02"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_combatpistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_smg");
case joaat("GROUP_MG"):
return joaat("weapon_combatmg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_carbinerifle");
default:
}
break;
case joaat("a_m_m_hillbilly_02"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_combatpistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_sawnoffshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_microsmg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_combatmg");
default:
}
break;
case joaat("g_m_y_salvagoon_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_microsmg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_assaultrifle");
default:
}
break;
case joaat("mp_g_m_pros_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_smg");
case joaat("GROUP_MG"):
return joaat("weapon_advancedrifle");
case joaat("GROUP_RIFLE"):
return joaat("weapon_combatmg");
default:
}
break;
case joaat("g_m_m_armgoon_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_sawnoffshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_smg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_carbinerifle");
default:
}
break;
case joaat("g_m_m_chigoon_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_advancedrifle");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_carbinerifle");
default:
}
break;
case joaat("s_m_y_blackops_01"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_combatpistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_smg");
case joaat("GROUP_MG"):
return joaat("weapon_combatmg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_carbinerifle");
default:
}
break;
case joaat("a_m_o_acult_02"):
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_sawnoffshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_microsmg");
case joaat("GROUP_MG"):
return joaat("weapon_mg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_assaultrifle");
default:
}
break;
default:
switch (WEAPON::GET_WEAPONTYPE_GROUP(Global_4980736.f_102388[iParam0 /*1051*/].f_28)){
case joaat("GROUP_PISTOL"):
return joaat("weapon_pistol");
case joaat("GROUP_SHOTGUN"):
return joaat("weapon_pumpshotgun");
case joaat("GROUP_SMG"):
return joaat("weapon_smg");
case joaat("GROUP_MG"):
return joaat("weapon_combatmg");
case joaat("GROUP_RIFLE"):
return joaat("weapon_carbinerifle");
default:
}
break;
}
return Global_4980736.f_102388[iParam0 /*1051*/].f_28;
}

int func_52(){
int iVar0;
int iVar1;
iVar0=0;
if(Local_180.f_286 > 25){
iVar0=((Local_180.f_286 / 2) - 5);
if(iVar0 > 45){
iVar0=45;
}}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(iVar0, 100);
if(iVar1 < 25){
return joaat("weapon_pistol");
}
if(iVar1 >=25 && iVar1 < 50){
return joaat("weapon_microsmg");
}
if(iVar1 >=50 && iVar1 < 70){
return joaat("weapon_pumpshotgun");
}
if(iVar1 >=70 && iVar1 < 90){
return joaat("weapon_assaultrifle");
}
if(iVar1 >=90 && iVar1 < 92){
return joaat("weapon_sniperrifle");
}
if(iVar1 >=92 && iVar1 < 94){
return joaat("weapon_minigun");
}
return joaat("weapon_mg");
}

int func_53(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam4, bool bParam5, int iParam6, int iParam7){
int iVar0;
if(!NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
return 0;
}
iVar0=PED::CREATE_PED(iParam1, uParam2, Param3, uParam4, iParam6, bParam5);
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

int func_54(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32){
struct<17> Var0;
struct<29> Var1;
if(Param5.f_5 < 20f){
Param5.f_5=20f;
}
Var0=5;
Var0.f_16=5;
Var0.f_22=5;
Var0.f_28=5;
Var1.f_16=1;
Var1.f_22=1;
Var1.f_23=1;
Var1.f_24=1;
Var1.f_28=-1;
Var1.f_5=0;
Var1.f_6=1;
Var1.f_7=2;
Var1.f_8={
Param0 
};
Var1.f_11={
Param1 
};
Var1.f_14=uParam2;
Var1.f_15=0;
Var1.f_16=1;
Var1.f_17=0;
Param5.f_7=0;
if(func_55(&Var1, &Param5, &Var0)){
*uParam3={
Var0[0 /*3*/] 
};
*uParam4=Var0.f_16[0];
return 1;
}
return 0;
}

int func_55(var uParam0, var uParam1, var uParam2){
int iVar0;
struct<3> Var1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
int iVar9;
struct<3> Var10;
struct<3> Var11;
var uVar12;
bool bVar13;
struct<61> Var14;
bool bVar15;
bVar13=false;
switch (uParam0->f_7){
case 0:
if(((!Global_2635559.f_2466==*uParam0 || !Global_2635559.f_2466.f_1==uParam0->f_1) || !Global_2635559.f_2466.f_2==uParam0->f_2) || !Global_2635559.f_2469==uParam0->f_4){
bVar13=true;
}
break;
case 1:
if(((((!Global_2635559.f_2480==uParam0->f_8 || !Global_2635559.f_2480.f_1==uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2==uParam0->f_8.f_2) || !Global_2635559.f_2483==uParam0->f_11) || !Global_2635559.f_2483.f_1==uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2==uParam0->f_11.f_2){
bVar13=true;
}
break;
case 2:
if((((((!Global_2635559.f_2480==uParam0->f_8 || !Global_2635559.f_2480.f_1==uParam0->f_8.f_1) || !Global_2635559.f_2480.f_2==uParam0->f_8.f_2) || !Global_2635559.f_2483==uParam0->f_11) || !Global_2635559.f_2483.f_1==uParam0->f_11.f_1) || !Global_2635559.f_2483.f_2==uParam0->f_11.f_2) || !Global_2635559.f_2486==uParam0->f_14){
bVar13=true;
}
break;
}
if(Global_1574477){
if(!Global_2635559.f_2487==uParam0->f_7){
bVar13=true;
}
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_2473) && !Global_2635559.f_2473==SCRIPT::GET_ID_OF_THIS_THREAD()){
bVar13=true;
}}
if(bVar13){
if(Global_2635559.f_2464==1){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_2473)){
if(Global_2635559.f_2473==SCRIPT::GET_ID_OF_THIS_THREAD()){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) < func_227(0)){
return 0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) < func_227(0)){
return 0;
}}
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_226();
}
Global_2635559.f_2464=0;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2470) > func_227(0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
func_220();
}
switch (uParam0->f_7){
case 0:
fVar2=(*uParam0 - uParam0->f_4);
fVar3=(uParam0->f_1 - uParam0->f_4);
fVar4=(*uParam0 + uParam0->f_4);
fVar5=(uParam0->f_1 + uParam0->f_4);
break;
case 1:
if(uParam0->f_8 < uParam0->f_11){
fVar2=uParam0->f_8;
fVar4=uParam0->f_11;
}else{
fVar2=uParam0->f_11;
fVar4=uParam0->f_8;
}
if(uParam0->f_8.f_1 < uParam0->f_11.f_1){
fVar3=uParam0->f_8.f_1;
fVar5=uParam0->f_11.f_1;
}else{
fVar3=uParam0->f_11.f_1;
fVar5=uParam0->f_8.f_1;
}
break;
case 2:
if(uParam0->f_8 < uParam0->f_11){
fVar2=(uParam0->f_8 - (0.5f * uParam0->f_14));
fVar4=(uParam0->f_11 + (0.5f * uParam0->f_14));
}else{
fVar2=(uParam0->f_11 - (0.5f * uParam0->f_14));
fVar4=(uParam0->f_8 + (0.5f * uParam0->f_14));
}
if(uParam0->f_8.f_1 < uParam0->f_11.f_1){
fVar3=(uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
fVar5=(uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
}else{
fVar3=(uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
fVar5=(uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
}
break;
}
PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
if(uParam0->f_7==0){
Var6={
*uParam0 
};
}else{
Var6={
uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
}
Var7={
Var6 + Vector(-0.1f, -0.1f, -0.1f) 
};
Var8={
Var6 + Vector(0.1f, 0.1f, 0.1f) 
};
if(!Global_2635559.f_2464){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_226();
if(uParam1->f_7 && uParam0->f_7==0){
if(vmag(*uParam0) > 0f){
if(func_219(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
return 1;
}}}
if(!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
Global_2635559.f_2487=uParam0->f_7;
switch (uParam0->f_7){
case 0:
Global_2635559.f_2466={
*uParam0 
};
Global_2635559.f_2469=uParam0->f_4;
break;
case 1:
Global_2635559.f_2480={
uParam0->f_8 
};
Global_2635559.f_2483={
uParam0->f_11 
};
Global_2635559.f_2486=0f;
Global_2635559.f_2466={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
case 2:
Global_2635559.f_2480={
uParam0->f_8 
};
Global_2635559.f_2483={
uParam0->f_11 
};
Global_2635559.f_2486=uParam0->f_14;
Global_2635559.f_2466={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
if(!uParam1->f_8 && !uParam1->f_9){
func_218(Var6.f_0, Var6.f_1);
}
Global_2635559.f_2465=1;
Global_2635559.f_2464=1;
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2470=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2473=SCRIPT::GET_ID_OF_THIS_THREAD();
}else{
return 0;
}}
if(Global_2635559.f_2464){
if(Global_2635559.f_2465==1){
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 5000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(uParam1->f_8 || uParam1->f_9){
if(uParam0->f_21){
*(uParam2[0 /*3*/])={
uParam0->f_18 
};
}else{
*(uParam2[0 /*3*/])={
Var6 
};
}
Var14.f_6=1082130432;
Var14.f_7=1176255488;
Var14.f_8=1;
Var14.f_10=1;
Var14.f_13=1;
Var14.f_15=1;
Var14.f_16=1;
Var14.f_31=1;
Var14.f_34=joaat("tailgater");
Var14.f_38=2;
Var14.f_45=2;
Var14.f_49=1123024896;
Var14.f_53=999;
Var14.f_54=1176256410;
Var14.f_55=1;
Var14.f_56=1;
Var14.f_57=1;
Var14={
*uParam1 
};
Var14.f_3=uParam1->f_5;
Var14.f_11=uParam1->f_9;
Var14.f_18=1;
if(uParam1->f_32 > 0f){
Var14.f_6=uParam1->f_32;
}
switch (uParam0->f_7){
case 0:
Var14.f_19={
*uParam0 
};
Var14.f_25=uParam0->f_4;
break;
case 1:
Var14.f_19={
uParam0->f_8 
};
Var14.f_22={
uParam0->f_11 
};
Var14.f_25=0f;
break;
case 2:
Var14.f_19={
uParam0->f_8 
};
Var14.f_22={
uParam0->f_11 
};
Var14.f_25=uParam0->f_14;
break;
}
Var14.f_26=uParam0->f_7;
Var14.f_12=uParam0->f_15;
if(uParam0->f_21){
Var14.f_30=1;
Var14.f_32=1;
}
iVar9=0;
while (iVar9 < 2){
Var14.f_38[iVar9 /*3*/]={
uParam1->f_13[iVar9 /*3*/] 
};
Var14.f_45[iVar9]=uParam1->f_20[iVar9];
iVar9++;
}
Var14.f_51=uParam1->f_30;
Var14.f_55=uParam0->f_16;
if(uParam0->f_26){
Var14.f_10=0;
}
if(func_217(Global_4718592.f_166301)){
Var14.f_9=1;
}
Var14.f_60=uParam0->f_30;
func_190(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
if((uParam1->f_7 && uParam1->f_9) && uParam0->f_7==0){
if(!func_189(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1)){
*(uParam2[0 /*3*/])={
*uParam0 
};
uParam2->f_16[0]=uParam0->f_3;
}}
Global_2635559.f_2465=9;
}else{
Global_2635559.f_2465=2;
}}}
if(Global_2635559.f_2465==2){
if((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8)==0){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(uParam0->f_5 && !func_6(PLAYER::PLAYER_ID(), 0)){
Global_2635559.f_2465=3;
}else{
Global_2635559.f_2465=4;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2475) > 7000){
func_188(Var6.f_0, Var6.f_1);
}}
if(Global_2635559.f_2465==3){
if(func_187() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 10000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=4;
}}
if(Global_2635559.f_2465==4){
if(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
}else{
iVar0=0;
func_220();
if(uParam0->f_5){
if(vmag(*uParam1)==0f){
iVar0 +=2;
}
if(uParam1->f_3){
iVar0 +=8;
}
iVar0 +=16;
iVar0 +=32;
if(!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
iVar0 +=64;
iVar0 +=128;
iVar0 +=256;
}
iVar0 +=2048;
iVar0 +=512;
iVar0 +=1024;
switch (uParam0->f_7){
case 0:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
case 1:
func_186(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, uVar12, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
case 2:
if(NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0)){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
}
break;
}}else{
if(uParam1->f_3){
iVar0++;
}
iVar0 +=2;
if(uParam1->f_10){
iVar0 +=32;
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=5;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_186(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, uVar12, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}}}
if(Global_2635559.f_2465==5){
if(func_109(uParam2, uParam0, uParam1, 0)){
if(Global_2635559.f_2491.f_5){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=6;
}else{
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(!uParam0->f_5){
if(!vmag(*uParam1)==0f){
Var1={
*uParam1 - *(uParam2[0 /*3*/]) 
};
uParam2->f_16[0]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}}
Global_2635559.f_2465=9;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 20000){
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=8;
}}
if(Global_2635559.f_2465==6){
iVar0=0;
Global_2635559.f_2491.f_1=0;
if(uParam1->f_3){
iVar0++;
}elseif(uParam0->f_7==0){
if(!func_108(uParam0->f_4)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6))){
iVar0++;
}}}elseif(!func_107(uParam0->f_8, uParam0->f_11, uParam0->f_14)){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6))){
iVar0++;
}}
iVar0 +=2;
if(uParam1->f_10){
iVar0 +=32;
}
if(uParam0->f_15){
iVar0 +=16;
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=7;
switch (uParam0->f_7){
case 0:
PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
break;
case 1:
func_186(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, uVar12, iVar0, 2f, 5000);
break;
case 2:
PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
break;
}}
if(Global_2635559.f_2465==7){
if(func_109(uParam2, uParam0, uParam1, 1)){
if(vmag(*(uParam2[0 /*3*/]))==0f){
iVar9=0;
while (iVar9 < 3){
if(vmag(*(uParam2[0 /*3*/]))==0f){
if(!vmag(Global_2635559.f_2625[iVar9 /*3*/])==0f){
switch (uParam0->f_7){
case 0:
if(func_189(Global_2635559.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar9 /*3*/] 
};
}
break;
case 1:
if(func_105(Global_2635559.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar9 /*3*/] 
};
}
break;
case 2:
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635559.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1)){
*(uParam2[0 /*3*/])={
Global_2635559.f_2625[iVar9 /*3*/] 
};
}
break;
}}
}
iVar9++;
}
if(vmag(*(uParam2[0 /*3*/]))==0f){
switch (uParam0->f_7){
case 0:
Var1={
*uParam0 
};
break;
case 1:
case 2:
Var1={
uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) 
};
break;
}
func_58(&Var1, 0, 1, 1, 0, uParam0, uParam1);
*(uParam2[0 /*3*/])={
Var1 
};
}}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
if(!vmag(*uParam1)==0f){
iVar9=0;
while (iVar9 < 5){
Var1={
*uParam1 - *(uParam2[iVar9 /*3*/]) 
};
uParam2->f_16[iVar9]=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
iVar9++;
}}
Global_2635559.f_2465=9;
}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_2471) > 20000){
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=8;
}}
if(Global_2635559.f_2465==8){
if(uParam0->f_5){
if(func_57(Global_2635559.f_489)){
}}elseif(Global_2635559.f_2491.f_2){
func_56(uParam2, &(Global_2635559.f_2491.f_6));
}else{
if(uParam0->f_15){
bVar15=false;
}else{
bVar15=true;
}
*(uParam2[0 /*3*/])={
Global_2635559.f_2466 
};
func_58(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
}
Global_2635559.f_2471=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_2465=9;
}
if(Global_2635559.f_2465==9){
Global_2635559.f_2464=0;
NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_226();
return 1;
}
Global_2635559.f_2470=NETWORK::GET_NETWORK_TIME();
}
return 0;
}


void func_56(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < 5){
*(uParam0[iVar0 /*3*/])={
(uParam1[iVar0 /*10*/])->f_4 
};
uParam0->f_16[iVar0]=(uParam1[iVar0 /*10*/])->f_7;
uParam0->f_22[iVar0]=(*uParam1)[iVar0 /*10*/];
iVar0++;
}}

int func_57(int iParam0){
if(iParam0==3 || iParam0==26){
return 1;
}
return 0;
}


void func_58(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6){
struct<3> Var0;
var uVar1;
struct<61> Var2;
var uVar3;
int iVar4;
bool bVar5;
int iVar6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
float fVar10;
Var2.f_6=1082130432;
Var2.f_7=1176255488;
Var2.f_8=1;
Var2.f_10=1;
Var2.f_13=1;
Var2.f_15=1;
Var2.f_16=1;
Var2.f_31=1;
Var2.f_34=joaat("tailgater");
Var2.f_38=2;
Var2.f_45=2;
Var2.f_49=1123024896;
Var2.f_53=999;
Var2.f_54=1176256410;
Var2.f_55=1;
Var2.f_56=1;
Var2.f_57=1;
if(bParam1){
iVar6=0;
}else{
iVar6=16;
}
if(!uParam6->f_3){
if(uParam5->f_5){
if(!uParam5->f_22){
iVar6 +=4;
}else{
switch (uParam5->f_7){
case 0:
Var7={
*uParam5 
};
if(func_108(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
case 1:
Var7={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_107(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
case 2:
Var7={
uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) 
};
if(func_107(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7))){
iVar6 +=4;
}
break;
}}}else{
iVar6 +=4;
}}
if(func_73(*uParam0, &Var0, iVar6, iParam3, 1)){}else{
bVar5=true;
}
if(bVar5){
Var0={
*uParam0 
};
Var2={
*uParam6 
};
Var2.f_8=1;
Var2.f_3=uParam6->f_5;
if(bParam2){
Var2.f_10=0;
}else{
Var2.f_10=1;
}
Var2.f_13=uParam5->f_15;
Var2.f_15=iParam3;
if(uParam6->f_32 > 0f){
Var2.f_6=uParam6->f_32;
}
if(bParam4){
Var2.f_18=1;
Var2.f_26=uParam5->f_7;
switch (uParam5->f_7){
case 0:
Var2.f_19={
*uParam5 
};
Var2.f_25=uParam5->f_4;
break;
case 1:
Var2.f_19={
uParam5->f_8 
};
Var2.f_22={
uParam5->f_11 
};
Var2.f_25=0f;
break;
case 2:
Var2.f_19={
uParam5->f_8 
};
Var2.f_22={
uParam5->f_11 
};
Var2.f_25=uParam5->f_14;
break;
}}
iVar4=0;
while (iVar4 < 2){
Var2.f_38[iVar4 /*3*/]={
uParam6->f_13[iVar4 /*3*/] 
};
Var2.f_45[iVar4]=uParam6->f_20[iVar4];
iVar4++;
}
Var2.f_51=uParam6->f_30;
Var2.f_55=uParam5->f_16;
if(func_70(PLAYER::PLAYER_ID(), 0)){
Var2.f_9=1;
}
Var2.f_60=uParam5->f_30;
func_190(&Var0, &uVar1, &Var2);
}
if(bParam4){
switch (uParam5->f_7){
case 0:
Var8={
*uParam5 
};
fVar10=uParam5->f_4;
break;
case 1:
Var8={
uParam5->f_8 
};
Var9={
uParam5->f_11 
};
break;
case 2:
Var8={
uParam5->f_8 
};
Var9={
uParam5->f_11 
};
fVar10=uParam5->f_14;
break;
}
if(!func_69(Var0, uParam5->f_7, Var8, Var9, fVar10)){
if(func_73(*uParam0, &Var0, iVar6, iParam3, 0)){
if(!func_69(Var0, uParam5->f_7, Var8, Var9, fVar10)){
if(uParam5->f_7==2 || uParam5->f_7==1){
Var0={
Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) 
};
}else{
Var0={
Var8 
};
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, 0, 0)){
Var0.f_2=uVar3;
}}}elseif(func_59(uParam0, 1, 1, 1, 1)){
func_58(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
}else{
if(uParam5->f_7==2 || uParam5->f_7==1){
Var0={
Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) 
};
}else{
Var0={
Var8 
};
}
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, 0, 0)){
Var0.f_2=uVar3;
}}}}
*uParam0={
Var0 
};
Global_2635559.f_667=1;
}

int func_59(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
struct<3> Var1;
iVar0=0;
while (iVar0 < 12){
if(Global_2640505[iVar0 /*17*/].f_9==1){
if(!bParam2 || (bParam2 && Global_2640505[iVar0 /*17*/].f_16)){
if(func_68(*uParam0, &(Global_2640505[iVar0 /*17*/]), 1008981770, bParam4, 0)){
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
func_60(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 0, bParam3);
if(func_59(&Var1, 0, 0, 0, 1)){
Var1={
*uParam0 
};
func_60(&Var1, &(Global_2640505[iVar0 /*17*/]), 1036831949, 1, 0);
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


void func_60(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4){
if(bParam4){
switch (uParam1->f_10){
case 0:
*uParam0={
func_67(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) 
};
break;
case 1:
*uParam0={
func_67(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) 
};
break;
case 2:
*uParam0={
func_67(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) 
};
break;
}}else{
switch (uParam1->f_10){
case 0:
func_65(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
break;
case 1:
func_64(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
break;
case 2:
func_61(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
break;
}}}


void func_61(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5){
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
func_63(0f, 0f, 1f, Var0) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var1) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
if(fVar3 < (fParam3 * 0.5f)){
if(!bParam5){
if(func_62(Var2, Var1) >=0f){
Var2={
Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_62(Var2, Var1) >=0f){
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
func_63(0f, 0f, 1f, Var0) 
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
func_63(0f, 0f, 1f, Var10) 
};
Var2={
Var2 / FtoV(vmag(Var2)) 
};
fVar3=(vmag(Var11) * sin(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
if(!bParam5){
if(func_62(Var2, Var11) >=0f){
Var2={
Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) 
};
}else{
Var2={
Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) 
};
}}elseif(func_62(Var2, Var11) >=0f){
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


float func_62(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__63(struct<3> Param0, struct<3> Param1){
return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}


void func_64(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6){
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


void func_65(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5){
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
func_66(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
}else{
func_66(&Var0, 0f, 0f, fParam5);
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


void func_66(var uParam0, struct<3> Param1){
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


Vector3 func__67(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6){
int iVar0;
struct<3> Var1;
switch (iParam4){
case 0:
func_65(&Param0, Param1, fParam3, fParam5, bParam6, 0);
break;
case 1:
func_64(&Param0, Param1, Param2, fParam5, bParam6);
break;
case 2:
func_61(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
break;
}
iVar0=0;
while (iVar0 < 40){
PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
switch (iParam4){
case 0:
if(!func_189(Var1, Param1, fParam3, 0, 0)){
return Var1;
}
break;
case 1:
if(!func_105(Var1, Param1, Param2, 0, 0)){
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

int func_68(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4){
switch (uParam1->f_10){
case 0:
return func_189(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635559.f_2735) * uParam1->f_8)), bParam3, bParam4);
break;
case 1:
return func_105(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_69(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4){
switch (iParam1){
case 0:
if(vdist(Param0, Param2) <=fParam4){
return 1;
}
break;
case 1:
return func_105(Param0, Param2, Param3, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param2, Param3, fParam4, 0, 1);
break;
}
return 0;
}

int func_70(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("terbyte")){
return 1;
}}}
if(iParam0 !=func_72()){
if(func_1680(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1 && Global_2657589[iParam0 /*466*/].f_321.f_10 !=func_72()){
return func_71(Global_2657589[iParam0 /*466*/].f_321.f_7)==12;
}}}
return 0;
}

int func_71(int iParam0){
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

int func_72(){
return -1;
}

int func_73(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4){
if(func_104(Param0, uParam1)){
if(func_74(Param0, uParam1, iParam3, bParam4)){
return 1;
}}
if(PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam1, iParam2)){
if(func_74(Param0, uParam1, iParam3, bParam4)){
return 1;
}}
return 0;
}

int func_74(struct<3> Param0, var uParam1, int iParam2, bool bParam3){
float fVar0;
var uVar1;
var uVar2;
fVar0=vdist(Param0, *uParam1);
if(fVar0 < 40f){
uVar1=2;
uVar2=2;
if((iParam2==1 && !func_90(Global_2635559.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2==0){
if(!func_78(*uParam1, 1056964608)){
if(!func_75(uParam1, 0)){
return 1;
}}}}
return 0;
}

int func_75(var uParam0, bool bParam1){
int iVar0;
struct<3> Var1;
int iVar2;
Var1={
*uParam0 
};
iVar2=func_77(Var1);
iVar0=0;
while (iVar0 < Global_2642106[iVar2]){
if(func_76(Var1, &(Global_2640710[iVar2 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_61(&Var1, Global_2640710[iVar2 /*155*/][iVar0 /*7*/], Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
*uParam0={
Var1 
};
}
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642106[8]){
if(func_76(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/]))){
if(bParam1){
func_61(&Var1, Global_2640710[8 /*155*/][iVar0 /*7*/], Global_2640710[8 /*155*/][iVar0 /*7*/].f_3, Global_2640710[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
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


bool func_76(struct<3> Param0, var uParam1){
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_77(struct<2> Param0, var uParam1){
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

int func_78(struct<3> Param0, float fParam1){
int iVar0;
if(func_87(PLAYER::PLAYER_ID(), 1, 0)){
if(Global_4980736.f_39172 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_39172){
if(Global_4980736.f_39173[iVar0 /*148*/].f_7 !=0){
if(func_79(Param0, Global_4980736.f_39173[iVar0 /*148*/], Global_4980736.f_39173[iVar0 /*148*/].f_6, Global_4980736.f_39173[iVar0 /*148*/].f_7, fParam1)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_5991 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_5991){
if(Global_4980736.f_5994[iVar0 /*492*/].f_15 !=0){
if(func_79(Param0, Global_4980736.f_5994[iVar0 /*492*/], Global_4980736.f_5994[iVar0 /*492*/].f_3, Global_4980736.f_5994[iVar0 /*492*/].f_15, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_4980736.f_84915 > 0){
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[iVar0 /*499*/].f_12 !=0){
if(func_79(Param0, Global_4980736.f_84919[iVar0 /*499*/], Global_4980736.f_84919[iVar0 /*499*/].f_3, Global_4980736.f_84919[iVar0 /*499*/].f_12, 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_268 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_268){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_233[iVar0], 0)){
if(func_79(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_233[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}
if(Global_1058070.f_266 > 0){
iVar0=0;
while (iVar0 < Global_1058070.f_266){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058070.f_119[iVar0], 0)){
if(func_79(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058070.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_1058070.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058070.f_119[iVar0]), 0.5f)){
return 1;
}}
iVar0++;
}}}
return 0;
}

int func_79(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(vdist(Param0, Param1) < func_86(iParam3, 1008981770)){
func_80(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1)){
return 1;
}}
return 0;
}


void func_80(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
Var0={
0f, 1f, 0f 
};
func_66(&Var0, 0f, 0f, fParam1);
Var0={
Var0 / FtoV(vmag(Var0)) 
};
func_81(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
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


void func_81(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
if(STREAMING::IS_MODEL_VALID(iParam0)){
MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
}else{
iVar0=func_84(iParam0);
if(iVar0 !=0){
func_82(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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


void func_82(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5){
int iVar0;
func_83(iParam0, &Global_1577994);
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


void func_83(int iParam0, var uParam1){
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

int func_84(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 4){
iVar1=iVar0;
if(func_85(iVar1)==iParam0){
return iVar1;
}
iVar0++;
}
return 0;
}

int func_85(int iParam0){
int iVar0;
iVar0=(1000 + iParam0);
return iVar0;
}


float func_86(int iParam0, float fParam1){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
float fVar3;
if(iParam0==0){
return 5f;
}
func_81(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
Var2={
Var1 - Var0 
};
fVar3=(sqrt(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
return fVar3;
}

int func_87(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_88(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
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

int func_90(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
bool bVar1;
if(func_97(Param0)){
if(func_59(uParam1, bParam4, 0, 1, 1)){
if(bParam4){
}
return 1;
}}
if(func_92(uParam1, bParam4, 1)){
if(bParam4){
}
return 1;
}
if(bParam5){
if(func_91(*uParam1, 1056964608)){
return 1;
}}
bVar1=false;
iVar0=0;
while (iVar0 < *uParam2){
if(vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0]){
if(bParam4){
func_65(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_91(struct<3> Param0, float fParam1){
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

int func_92(var uParam0, bool bParam1, bool bParam2){
int iVar0;
var uVar1;
struct<3> Var2;
if(func_94(*uParam0, &iVar0)){
if(bParam1){
Var2={
*uParam0 
};
func_60(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
if(func_94(Var2, &uVar1) || func_93(Var2)){
Var2={
*uParam0 
};
func_60(&Var2, &(Global_2635559.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
}
*uParam0={
Var2 
};
}
return 1;
}
return 0;
}

int func_93(struct<3> Param0){
float fVar0;
if(Global_2635559.f_596 > 0f){
fVar0=vdist(Param0, Global_2635559.f_593);
if(fVar0 < Global_2635559.f_596){
return 1;
}}
return 0;
}

int func_94(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
if(func_96()){
return 0;
}
iVar1=func_95();
iVar0=0;
while (iVar0 < iVar1){
if(Global_2635559.f_368[iVar0 /*12*/].f_9==1){
if(func_68(Param0, &(Global_2635559.f_368[iVar0 /*12*/]), 1008981770, 0, 0)){
*uParam1=iVar0;
return 1;
}}
iVar0++;
}
return 0;
}

int func_95(){
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


bool func_96(){
return Global_1950108.f_528;
}

int func_97(struct<3> Param0){
int iVar0;
struct<3> Var1;
if(!Global_2635559.f_515 && !Global_2635559.f_516){
if(!Global_2635559.f_45.f_317){
if(!func_101(PLAYER::PLAYER_ID(), 1)){
return 1;
}
if(!func_100(Param0, 1008981770)){
if(!func_59(&Param0, 0, 0, 0, 1)){
return 1;
}elseif(func_59(&Param0, 0, 1, 0, 1)){
return 1;
}}else{
iVar0=func_99(Param0, 1008981770);
if(iVar0 > -1){
Var1={
func_98(&(Global_2635559.f_45[iVar0 /*12*/])) 
};
if(!func_59(&Var1, 0, 0, 0, 1)){
if(!func_59(&Param0, 0, 0, 0, 1)){
return 1;
}}}}}}
return 0;
}


Vector3 func__98(var uParam0){
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

int func_99(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_68(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_100(struct<3> Param0, float fParam1){
int iVar0;
iVar0=0;
while (iVar0 < 4){
if(Global_2635559.f_45[iVar0 /*12*/].f_9){
if(func_68(Param0, &(Global_2635559.f_45[iVar0 /*12*/]), fParam1, 0, 0)){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_101(int iParam0, bool bParam1){
if(func_103() !=0){
return func_102(iParam0) !=0;
}
return func_87(iParam0, bParam1, 0);
}

int func_102(int iParam0){
if(func_1680(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_103(){
return Global_32163;
}

int func_104(struct<3> Param0, var uParam1){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
iVar1=-1;
fVar2=999999.9f;
if(Global_2635559.f_2262 > 0){
iVar0=0;
while (iVar0 < Global_2635559.f_2262){
fVar3=vdist(Global_2635559.f_2263[iVar0 /*4*/], Param0);
if(fVar3 < fVar2){
iVar1=iVar0;
fVar2=fVar3;
}
iVar0++;
}
if(!iVar1==-1){
*uParam1={
Global_2635559.f_2263[iVar1 /*4*/] 
};
return 1;
}}
return 0;
}

int func_105(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4){
func_106(&Param1, &Param2);
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


void func_106(var uParam0, var uParam1){
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

int func_107(struct<3> Param0, struct<3> Param1, float fParam2){
struct<3> Var0;
struct<3> Var1;
if(Param0.f_0 > Param1.f_0){
Var1.f_0=Param0.f_0;
Var0.f_0=Param1.f_0;
}else{
Var1.f_0=Param1.f_0;
Var0.f_0=Param0.f_0;
}
if(Param0.f_1 > Param1.f_1){
Var1.f_1=Param0.f_1;
Var0.f_1=Param1.f_1;
}else{
Var1.f_1=Param1.f_1;
Var0.f_1=Param0.f_1;
}
if(Param0.f_2 > Param1.f_2){
Var1.f_2=Param0.f_2;
Var0.f_2=Param1.f_2;
}else{
Var1.f_2=Param1.f_2;
Var0.f_2=Param0.f_2;
}
if(vmag(Var1 - Var0) > 100f){
return 1;
}
if(fParam2 > 50f){
return 1;
}
return 0;
}

int func_108(float fParam0){
if(fParam0 > 50f){
return 1;
}
return 0;
}

int func_109(var uParam0, var uParam1, var uParam2, bool bParam3){
struct<3> Var0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
if(Global_2635559.f_2491.f_1==0 && Global_2635559.f_2491==0){
if(uParam1->f_5 && !bParam3){
switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635559.f_2491.f_1))){
case 0:
func_184(uParam1, uParam2);
if(!Global_2635559.f_2491.f_2){
if(uParam2->f_7 && Global_2635559.f_555.f_7==0){
*(uParam0[0 /*3*/])={
*uParam1 
};
uParam0->f_16[0]=uParam1->f_3;
return 1;
}
else{
if(uParam1->f_21){
*(uParam0[0 /*3*/])={
uParam1->f_18 
};
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
}
if(uParam1->f_5 && func_57(Global_2635559.f_489)){
if(!Global_2635559.f_2491.f_5){
Global_2635559.f_2491.f_5=1;
}else{
func_58(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
func_58(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
return 1;
}}
break;
case 1:
func_184(uParam1, uParam2);
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
}}elseif(PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
if(!PED::SPAWNPOINTS_IS_SEARCH_FAILED()){
if(PED::SPAWNPOINTS_IS_SEARCH_COMPLETE()){
func_184(uParam1, uParam2);
Global_2635559.f_2491.f_1=PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
}else{
return 0;
}}else{
PED::SPAWNPOINTS_CANCEL_SEARCH();
func_184(uParam1, uParam2);
if(!Global_2635559.f_2491.f_2){
Global_2635559.f_2491.f_5=1;
return 1;
}}}else{
return 0;
}}
if(uParam1->f_5){
func_181(Global_2635559.f_555, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90));
}
if(uParam2->f_7 && !Global_2635559.f_2491.f_4){
Global_2635559.f_2491.f_4=1;
func_117(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
}
iVar4=0;
if(uParam1->f_5){
iVar5=64;
}else{
iVar5=32;
}
if(Global_2635559.f_2491.f_1 > 0 || Global_2635559.f_2491 > 0){
if(uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE()){
iVar2=0;
while (iVar2 < Global_2635559.f_2491.f_1){
if(iVar4 < iVar5){
if(iVar2 <=Global_2635559.f_2491.f_3){
iVar2=Global_2635559.f_2491.f_3 + 1;
}
if(iVar2 > (Global_2635559.f_2491.f_1 - 1)){
iVar2=(Global_2635559.f_2491.f_1 - 1);
}
if(iVar2 < 0){
iVar2=0;
}
if(uParam1->f_5 && !bParam3){
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
fVar1=(fVar1 * 57.29578f);
}else{
PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
}
if(uParam1->f_5 && !bParam3){
iVar3=NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
}else{
PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
}
func_117(Var0, fVar1, uParam1, uParam2, 0, iVar3);
iVar4++;
Global_2635559.f_2491.f_3=iVar2;
}else{
return 0;
}
iVar2++;
}}else{
iVar2=Global_2635559.f_2491.f_1;
}
if(Global_2635559.f_2491.f_1==iVar2){
if(uParam1->f_5 && Global_2635559.f_2889){
func_111(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
}
if(uParam1->f_5 && func_57(Global_2635559.f_489)){
if(Global_2635559.f_2491.f_2){
func_56(uParam0, &(Global_2635559.f_2491.f_6));
func_110(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_58(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_110(*(uParam0[0 /*3*/]));
return 1;
}}elseif(Global_2635559.f_2491.f_2){
func_56(uParam0, &(Global_2635559.f_2491.f_6));
func_110(*(uParam0[0 /*3*/]));
return 1;
}elseif(uParam1->f_5){
iVar2=MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635559.f_2491.f_1);
NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
if(!func_75(uParam0[0 /*3*/], 0)){
uParam0->f_16[0]=(uParam0->f_16[0] * 57.29578f);
func_110(*(uParam0[0 /*3*/]));
return 1;
}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_58(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_110(*(uParam0[0 /*3*/]));
return 1;
}}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
func_58(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_110(*(uParam0[0 /*3*/]));
return 1;
}}}else{
*(uParam0[0 /*3*/])={
Global_2635559.f_2466 
};
if(uParam1->f_5 && func_57(Global_2635559.f_489)){
if(!Global_2635559.f_2491.f_5){
Global_2635559.f_2491.f_5=1;
}else{
func_58(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
}}else{
if(uParam1->f_15){
bVar6=false;
}else{
bVar6=true;
}
func_58(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
}
uParam0->f_16[0]=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
func_110(*(uParam0[0 /*3*/]));
return 1;
}
return 0;
}


void func_110(struct<3> Param0){
int iVar0;
iVar0=0;
while (iVar0 < 2){
if(iVar0 > 0){
Global_2635559.f_2625[(3 - iVar0) /*3*/]={
Global_2635559.f_2625[(3 - iVar0 + 1) /*3*/] 
};
}
iVar0++;
}
Global_2635559.f_2625[0 /*3*/]={
Param0 
};
}


void func_111(var uParam0, var uParam1, var uParam2){
if(func_57(Global_2635559.f_489) && func_116() < 4096){
func_115(uParam0, 0f);
func_115(uParam1, uParam0->f_2);
func_115(uParam2, uParam1->f_2);
}else{
func_114(uParam0);
func_113(uParam2, uParam0->f_4);
func_112(uParam1, uParam0->f_4, uParam2->f_4);
}}


void func_112(var uParam0, struct<3> Param1, struct<3> Param2){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
struct<10> Var5;
fVar1=-1f;
Var5.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
fVar2=vdist(Global_2638502[iVar0 /*10*/].f_4, Param1);
fVar3=vdist(Global_2638502[iVar0 /*10*/].f_4, Param2);
fVar4=(fVar2 + fVar3);
fVar4=(fVar4 * Global_2638502[iVar0 /*10*/].f_1);
if(fVar4 > fVar1){
fVar1=fVar4;
Var5={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var5 
};
}


void func_113(var uParam0, struct<3> Param1){
int iVar0;
float fVar1;
float fVar2;
struct<10> Var3;
fVar1=-1f;
Var3.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
fVar2=vdist(Global_2638502[iVar0 /*10*/].f_4, Param1);
fVar2=(fVar2 * Global_2638502[iVar0 /*10*/].f_1);
if(fVar2 > fVar1){
fVar1=fVar2;
Var3={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var3 
};
}


void func_114(var uParam0){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=-1f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_1 > fVar1){
fVar1=Global_2638502[iVar0 /*10*/].f_1;
Var2={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}


void func_115(var uParam0, float fParam1){
int iVar0;
float fVar1;
struct<10> Var2;
fVar1=999999.9f;
Var2.f_2=1176256410;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_2 < fVar1 && Global_2638502[iVar0 /*10*/].f_2 > fParam1){
fVar1=Global_2638502[iVar0 /*10*/].f_2;
Var2={
Global_2638502[iVar0 /*10*/] 
};
}}
iVar0++;
}
*uParam0={
Var2 
};
}

int func_116(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > iVar1){
iVar1=Global_2638502[iVar0 /*10*/];
}
iVar0++;
}
return iVar1;
}


void func_117(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
float fVar5;
float fVar6;
float fVar7;
int iVar8;
bool bVar9;
int iVar10;
int iVar11;
struct<3> Var12;
bool bVar13;
int iVar14;
struct<3> Var15;
struct<3> Var16;
float fVar17;
int iVar18;
struct<10> Var19;
bool bVar20;
bool bVar21;
iVar10=0;
iVar8=0;
bVar9=false;
if(uParam2->f_5){
if(Global_2635559.f_489==1){
if(MISC::ABSF((Global_2635559.f_512.f_2 - Param0.f_2)) < 25f){
iVar8++;
}}else{
iVar8++;
}}else{
iVar8++;
}
if(uParam2->f_5){
if(func_177(PLAYER::PLAYER_ID())){
if(iParam5==-1){
bVar9=true;
}elseif(!iParam5 & 1==0){
bVar9=true;
}}elseif(iParam5==-1){
iVar8 +=2;
}elseif(!iParam5 & 1==0){
iVar8 +=2;
}}else{
iVar8 +=2;
}
if(uParam2->f_5 && uParam2->f_6){
if(!func_176(Param0, 1084227584, 1123024896, 0)){
iVar8 +=4;
}}else{
iVar8 +=4;
}
if(uParam2->f_5){
if(!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f)){
iVar8 +=8;
iVar8 +=16;
}elseif(!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f)){
iVar8 +=8;
}}else{
iVar8 +=8;
iVar8 +=16;
}
if(uParam2->f_5){
if(!func_175(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0)){
iVar8 +=32;
}}else{
iVar8 +=32;
}
bVar13=true;
iVar11=0;
while (iVar11 < 2){
if(vmag(uParam3->f_13[iVar11 /*3*/]) > 0f){
if(!vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11]){
bVar13=false;
}}
iVar11++;
}
if(bVar13){
if((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1)){
bVar13=false;
}}}
if(bVar13){
iVar8 +=256;
}
if(uParam2->f_5){
if(func_169(Param0, fParam1, uParam2->f_15, func_174(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0)){
iVar8 +=64;
iVar8 +=128;
}else{
iVar10=Global_2635559.f_3;
}}elseif(!func_166(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1)){
if(uParam2->f_15){
fVar1=3.5f;
}else{
fVar1=1f;
}
if(!func_163(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1)){
iVar8 +=128;
iVar8 +=64;
}elseif(!func_163(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1)){
iVar8 +=64;
}}
if(uParam2->f_5){
if(!Global_2635559.f_701){
Var12={
Global_2635559.f_512 
};
if(Global_2635559.f_489==26){
Var12={
Global_2635559.f_555.f_18 
};
}
if(!func_91(Param0, 0.5f)){
if(func_97(Var12)){
if(!func_59(&Param0, 0, 0, 0, 1) && !func_162(&Param0, 0)){
iVar8 +=512;
}}elseif(!func_162(&Param0, 0)){
iVar8 +=512;
}}}else{
iVar8 +=512;
}}elseif(!func_161(Param0, 2.5f, 3)){
iVar8 +=512;
}
if(uParam2->f_5){
if(!(func_160(PLAYER::PLAYER_ID()) && func_158(PLAYER::PLAYER_ID()))){
if(!func_157(&Param0, &(Global_2635559.f_2491.f_90), 0, 1065353216)){
iVar8 +=1024;
}}else{
iVar8 +=1024;
}}else{
iVar8 +=1024;
}
if(uParam2->f_5){
if(!func_158(PLAYER::PLAYER_ID())){
if(!func_156(Param0, &(Global_2635559.f_2491.f_57), &(Global_2635559.f_2491.f_90), 1073741824)){
iVar8 +=2048;
}}else{
iVar8 +=2048;
}}else{
iVar8 +=2048;
}
if(func_155(Param0)){
if(uParam2->f_5){
if(func_57(Global_2635559.f_489)){
if(func_100(Param0, 0.01f)){
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}else{
iVar8 +=4096;
}}
if(uParam2->f_5){
if(func_154(Param0)){
iVar8 +=8192;
}}else{
iVar8 +=8192;
}
if(!Global_2635559.f_45.f_55){
iVar8 +=16384;
}elseif(uParam2->f_5){
if(!iParam5 & 1==0){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
iVar8 +=16384;
}}}elseif(!iParam5 & 2==0){
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
iVar8 +=16384;
}}
if(uParam2->f_5){
if(!Global_2635559.f_701){
if(!func_92(&Param0, 0, 0)){
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}}else{
iVar8=(iVar8 + 32768);
}
if(!func_75(&Param0, 0)){
iVar8=(iVar8 + 65536);
}else{
iVar14=func_99(Param0, 1008981770);
if(iVar14 > -1){
func_153(Param0, &Var15, &Var16, &fVar17);
if(!func_148(&(Global_2635559.f_45[iVar14 /*12*/]), Var15, Var16, fVar17)){
iVar8=-1;
}}else{
iVar8=-1;
}}
if(func_78(Param0, 1056964608)){
iVar8=-1;
}
if(uParam3->f_33){
if(PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f)){
iVar8=-1;
}}
if(uParam3->f_34){
if(VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f)){
iVar8=-1;
}}
if(uParam2->f_5){}elseif(func_147(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888)){
iVar8=0;
}
Var19.f_2=1176256410;
bVar20=false;
bVar21=false;
if(Global_2635559.f_2889 && uParam2->f_5){
if(iVar8 > 0){
if(bParam4){
uParam3->f_4=0;
bVar4=false;
}else{
bVar4=true;
}
if(uParam2->f_21){
fVar0=func_138(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}else{
fVar0=func_138(Param0, Global_2635559.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
if(func_57(Global_2635559.f_489) && iVar8 < 4096){
Var19.f_2=func_136(Param0);
}
fVar7=func_123(Param0, 1, 0, 0, 0, 0);
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
Var19.f_9=fVar7;
func_122(Var19);
Global_2635559.f_2491.f_2=1;
}}else{
iVar18=0;
while (iVar18 < 5){
if(iVar8 >=Global_2635559.f_2491.f_6[iVar18 /*10*/]){
if(uParam2->f_5){
if(!bVar20){
if(bParam4){
uParam3->f_4=0;
bVar4=false;
}
else{
bVar4=true;
}
if(uParam2->f_21){
fVar0=func_138(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
else{
fVar0=func_138(Param0, Global_2635559.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
}
if(bVar9){
fVar0=(fVar0 * 3f);
}
bVar20=true;
}
if((func_57(Global_2635559.f_489) && iVar8==Global_2635559.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096){
if(!bVar21){
fVar2=func_136(Param0);
bVar21=true;
}
if(fVar2 < Global_2635559.f_2491.f_6[iVar18 /*10*/].f_2){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
Var19.f_2=fVar2;
func_121(Var19, iVar18);
Global_2635559.f_2491.f_2=1;
return;
}}elseif(iVar8 > Global_2635559.f_2491.f_6[iVar18 /*10*/] || (iVar8==Global_2635559.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2635559.f_2491.f_6[iVar18 /*10*/].f_1)){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_1=fVar0;
func_121(Var19, iVar18);
Global_2635559.f_2491.f_2=1;
return;
}}else{
if(!bVar20){
if(uParam2->f_15){
fVar1=3.5f;
}
else{
fVar1=1f;
}
fVar5=func_119(Param0, fVar1, 1, 1, 0, -1, 1);
fVar6=func_123(Param0, 1, 1, 1, 1, 0);
if(fVar5 > 15f && fVar6 > 5f){
fVar3=func_118(fVar5, 0f, 80f, 160f, 1f, 1.2f);
}
else{
fVar3=func_118(fVar6, 0f, 80f, 160f, 0f, 0.2f);
}
bVar20=true;
}
if(iVar8 > Global_2635559.f_2491.f_6[iVar18 /*10*/] || (iVar8==Global_2635559.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2635559.f_2491.f_6[iVar18 /*10*/].f_3)){
Var19.f_4={
Param0 
};
Var19.f_7=fParam1;
Var19.f_0=iVar8;
Var19.f_3=fVar3;
func_121(Var19, iVar18);
Global_2635559.f_2491.f_2=1;
return;
}}}
iVar18++;
}}}


float func_118(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5){
float fVar0;
if(fParam1 >=fParam3){
fParam1=(fParam3 * 0.5f);
}
if(fParam0 < fParam1){
fParam0=fParam1;
}
if(fParam0 > fParam3){
fParam0=fParam3;
}
if(fParam2 < fParam3 && fParam2 > fParam1){
if(fParam0 < fParam2){
fVar0=(fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
}else{
fVar0=(fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
}}else{
fVar0=(fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
}
return fVar0;
}


float func_119(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
int iVar0;
int iVar1;
bool bVar2;
float fVar3;
float fVar4;
bVar2=false;
fVar3=1E+13f;
if(iParam2 && !bParam4){
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_1680(iVar1, 1, 1)){
if(!func_6(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if(func_120(bVar1) || !bParam6){
if(!bParam4){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam5 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
fVar4=vdist2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), 0));
if(fVar4 < fVar3){
fVar3=fVar4;
bVar2=true;
}}
}}}}}
iVar0++;
}
if(bVar2){
return sqrt(fVar3);
}
return -1f;
}

int func_120(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


void func_121(struct<10> Param0, int iParam1){
struct<10> Var0;
Var0.f_2=1176256410;
Var0={
Global_2635559.f_2491.f_6[iParam1 /*10*/] 
};
Global_2635559.f_2491.f_6[iParam1 /*10*/]={
Param0 
};
if(iParam1 < 4){
func_121(Var0, iParam1 + 1);
}}


void func_122(struct<10> Param0){
int iVar0;
struct<10> Var1;
int iVar2;
float fVar3;
int iVar4;
Var1.f_2=1176256410;
iVar2=func_116();
if(Param0.f_0 > iVar2){
iVar2=Param0.f_0;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] < iVar2){
Global_2638502[iVar0 /*10*/]={
Var1 
};
}
iVar0++;
}
if(Param0.f_0 < iVar2){
return;
}
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/]==0){
Global_2638502[iVar0 /*10*/]={
Param0 
};
return;
}
iVar0++;
}
fVar3=9999.9f;
iVar4=-1;
iVar0=0;
while (iVar0 < 128){
if(Global_2638502[iVar0 /*10*/] > 0){
if(Global_2638502[iVar0 /*10*/].f_1 < fVar3){
fVar3=Global_2638502[iVar0 /*10*/].f_1;
iVar4=iVar0;
}}
iVar0++;
}
if(iVar4 > -1){
Global_2638502[iVar4 /*10*/]={
Param0 
};
}}


float func_123(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
bool bVar4;
struct<3> Var5;
struct<3> Var6;
int iVar7;
fVar3=999999.9f;
bVar4=false;
iVar0=0;
while (iVar0 < 32){
iVar7=iVar0;
if(func_1680(iVar7, 1, 1) || (iParam5==1 && func_1680(iVar7, 0, 0))){
if(!iVar7==PLAYER::PLAYER_ID() || iParam3==1){
bVar4=false;
if(bParam1){
if(func_125(iVar7)){
bVar4=true;
}}
if(bParam2){
if(PLAYER::GET_PLAYER_TEAM(iVar7)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(!PLAYER::GET_PLAYER_TEAM(bVar7)==-1 || !func_101(PLAYER::PLAYER_ID(), 1)){
bVar4=true;
}}}
if(bVar4){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar7) || !bParam4){
if(func_120(bVar7)){
Var5={
func_124(bVar7) 
};
if(!bVar7==PLAYER::PLAYER_ID()){
Var6={
NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(bVar7)) 
};
}else{
Var6={
Var5 
};
}
if(!bParam4){
if(Var5.f_2 < -100f){
Var5.f_2=Param0.f_2;
}
if(Var6.f_2 < -100f){
Var6.f_2=Param0.f_2;
}}
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, 1);
fVar2=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var6, 1);
if(fVar1 < fVar3){
fVar3=fVar1;
}
if(fVar2 < fVar3){
fVar3=fVar2;
}
}}}}}
iVar0++;
}
return fVar3;
}


Vector3 func__124(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_125(bool bParam0){
if(func_1680(iParam0, 0, 1)){
if(!func_134(iParam0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0)){
if(!PLAYER::GET_PLAYER_TEAM(bParam0)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
if(func_87(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_131(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1)){
return 1;
}}else{
return 1;
}}elseif(PLAYER::GET_PLAYER_TEAM(bParam0)==-1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(!func_87(PLAYER::PLAYER_ID(), 1, 0)){
if(!func_126(bParam0)){
return 1;
}}else{
return 1;
}}}}}
return 0;
}

int func_126(int iParam0){
if(func_130(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
Global_2764203={
func_129(iParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_127(PLAYER::PLAYER_ID(), iParam0)){
return 1;
}
return 0;
}

int func_127(int iParam0, int iParam1){
int iVar0;
iVar0=func_128(iParam0);
if(!iVar0==func_72()){
if(iVar0==func_128(iParam1)){
return 1;
}}
return 0;
}

int func_128(int iParam0){
if(iParam0 !=func_72()){
return Global_1894573[iParam0 /*608*/].f_10;
}
return func_72();
}
struct<13> func_129(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_130(int iParam0, int iParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_129(iParam0) 
};
Global_2764216={
func_129(iParam1) 
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

int func_131(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_132(iParam0, bVar0, iParam1, bVar1) || !func_132(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_132(iParam0, bVar0, iParam1, bVar1) || !func_132(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_132(iParam0, bVar0, iParam1, bVar1) || !func_132(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_132(iParam0, bVar0, iParam1, bVar1) || !func_132(iParam1, bVar1, iParam0, bVar0)){
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

int func_132(int iParam0, bool bParam1, int iParam2, bool bParam3){
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
if(((!func_1680(iVar1, 1, 1) || func_6(iVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_133(iVar1)){
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


var func__133(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_134(bool bParam0){
if(func_6(bParam0, 0)){
return 1;
}
if(func_135()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_135(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


float func_136(struct<3> Param0){
int iVar0;
return func_137(Param0, &(Global_2635559.f_45), &iVar0);
}


float func_137(struct<3> Param0, var uParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
iVar3=-1;
fVar2=1E+07f;
iVar0=0;
while (iVar0 < *uParam1){
if((uParam1[iVar0 /*12*/])->f_9){
fVar1=0f;
switch ((uParam1[iVar0 /*12*/])->f_10){
case 0:
fVar1=vdist(*(uParam1[iVar0 /*12*/]), Param0);
fVar1=(fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635559.f_2735) * (uParam1[iVar0 /*12*/])->f_8)));
break;
case 1:
case 2:
if(Param0.f_0 < (*uParam1)[iVar0 /*12*/]){
fVar1=(fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
}elseif(Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3){
fVar1=(fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
}
if(Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1){
fVar1=(fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
}elseif(Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1){
fVar1=(fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
}
if(Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2){
fVar1=(fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
}elseif(Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2){
fVar1=(fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
}
break;
}
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}
iVar0++;
}
if(fVar2 < 0f){
fVar2=0f;
}
*iParam2=iVar3;
return fVar2;
}


float func_138(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
fVar1=1f;
if(iParam5 > 0){
fVar1=(to_float(iParam5) / to_float(8));
}
if(bParam2){
fVar0=func_118(vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
}
*uParam6=1E+07f;
fVar4=func_123(Param0, 1, 0, 0, 1, 0);
fVar0=func_118(fVar4, 0f, func_146(), func_144(), 0f, 0.3f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
fVar4=func_142(Param0);
fVar0=func_118(fVar4, 0f, 0f, 60f, 0.5f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
fVar5=100f;
if(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !func_101(PLAYER::PLAYER_ID(), 1)){
fVar5=1f;
}
fVar4=func_140(Param0, PLAYER::PLAYER_ID(), 0);
fVar0=func_118(fVar4, 0f, 0f, fVar5, 0f, 1f);
fVar1=(fVar1 * (fVar0 * 0.95f));
if(fVar4 < *uParam6){
fVar4=fVar4;
}
if(bParam3){
if(func_139(Param0, &fVar2, &fVar3)){
if(fVar2 < 10f){
fVar2=10f;
}
if(fVar3 < 0.5f){
fVar3=0.5f;
}
fVar0=func_118(fVar2, 0f, 0f, 200f, 1f, 0.1f);
fVar0=(fVar0 + func_118(fVar3, 0f, 0f, 6f, 1f, 0.5f));
fVar0=(fVar0 * 0.5f);
fVar1=(fVar1 * (fVar0 * 0.85f));
}}
if(bParam4){
fVar0=func_118(vdist(Global_2635559.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
fVar1=(fVar1 * (fVar0 * 0.9f));
}
return fVar1;
}

int func_139(struct<3> Param0, var uParam1, var uParam2){
struct<3> Var0;
var uVar1;
var uVar2;
var uVar3;
uVar1=PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
if(PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar1)){
PATHFIND::GET_VEHICLE_NODE_POSITION(uVar1, &Var0);
*uParam1=vdist(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
*uParam2=MISC::ABSF((Param0.f_2 - Var0.f_2));
return 1;
}
return 0;
}


float func_140(struct<3> Param0, bool bParam1, int iParam2){
float fVar0;
float fVar1;
int iVar2;
int iVar3;
fVar0=999999.9f;
if(func_1680(iParam1, 0, 1)){
iVar2=0;
while (iVar2 < 32){
if(!iParam1==iVar2 || iParam2==1){
iVar3=iVar2;
if(func_1680(iVar3, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar3) !=PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(bVar3)==-1 && PLAYER::GET_PLAYER_TEAM(bParam1)==-1)){
if(!func_141(bVar3, bParam1)){
if(Global_2648605.f_261[iVar2]){
fVar1=vdist(Global_2648605.f_131[iVar2 /*3*/], Param0);
if(fVar1 < fVar0){
fVar0=fVar1;
}}
}}}}
iVar2++;
}}
return fVar0;
}

int func_141(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=func_72() && iParam1 !=func_72()){
iVar0=func_128(iParam0);
if(iVar0 !=func_72()){
return iVar0==func_128(iParam1);
}}
return 0;
}


float func_142(struct<3> Param0){
float fVar0;
float fVar1;
int iVar2;
struct<3> Var3;
var uVar4[32];
int iVar5;
iVar5=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar4, 2);
fVar0=1E+07f;
iVar2=0;
while (iVar2 < iVar5){
if(ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0)){
if(func_143(uVar4[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(uVar4[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}}}}
iVar2++;
}
if(Global_2635559.f_2934){
if(Global_1058070.f_267 > 0){
iVar2=0;
while (iVar2 < Global_1058070.f_267){
if(ENTITY::DOES_ENTITY_EXIST(Global_1058070.f_152[iVar2])){
if(!ENTITY::IS_ENTITY_DEAD(Global_1058070.f_152[iVar2], 0)){
if(func_143(Global_1058070.f_152[iVar2])){
Var3={
ENTITY::GET_ENTITY_COORDS(Global_1058070.f_152[iVar2], 1) 
};
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
if(fVar1 < fVar0){
fVar0=fVar1;
}
}}}
iVar2++;
}}}
return fVar0;
}

int func_143(var uParam0){
var uVar0;
int iVar1;
uVar0=PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, joaat("player"))){
case 3:
case 5:
return 1;
break;
}
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837175[PLAYER::PLAYER_ID()])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1837175[PLAYER::PLAYER_ID()])){
case 3:
case 5:
return 1;
break;
}}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==0){
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(iVar1 > -1 && iVar1 < 4){
if(PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1836885[iVar1])){
switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1836885[iVar1])){
case 3:
case 5:
return 1;
break;
}}}}
return 0;
}


float func_144(){
if(func_145()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635559.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67==joaat("rhino")){
return 640f;
}else{
return 320f;
}}
return 160f;
}

int func_145(){
if(Global_2635559.f_45.f_65 && !Global_2635559.f_45.f_304){
if(!func_134(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}


float func_146(){
if(func_145()){
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635559.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635559.f_45.f_67)) || Global_2635559.f_45.f_67==joaat("rhino")){
return 320f;
}else{
return 160f;
}}
return 80f;
}

int func_147(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7){
float fVar0;
fVar0=iParam4;
if(bParam3){
fVar0=fParam5;
}
if((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam2==1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam6, 0))) || ((iParam1==1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam7, 1))){
return 1;
}
return 0;
}

int func_148(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3){
switch (uParam0->f_10){
case 0:
if(func_152(*uParam0, uParam0->f_6, Param1, Param2, fParam3)){
return 1;
}
break;
case 1:
if(func_151(*uParam0, uParam0->f_3, Param1, Param2, fParam3)){
return 1;
}
break;
case 2:
if(func_149(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3)){
return 1;
}
break;
}
return 0;
}

int func_149(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5){
struct<3> Var0[8];
int iVar1;
func_150(Param0, Param1, fParam2, &Var0);
iVar1=0;
while (iVar1 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}


void func_150(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3){
struct<3> Var0;
struct<3> Var1;
var uVar2;
var uVar3;
if(Param0.f_2==Param1.f_2){
Param1.f_2=(Param1.f_2 + 0.01f);
}
Var0={
Param0 - Param1 
};
Var1={
func_63(Var0, Var0.f_0, Var0.f_1, 0f) 
};
Var1={
Var1 / FtoV(vmag(Var1)) 
};
Var1={
Var1 * FtoV((fParam2 * 0.5f)) 
};
if(Param0.f_2 > Param1.f_2){
uVar2=Param1.f_2;
uVar3=Param0.f_2;
}else{
uVar2=Param0.f_2;
uVar3=Param1.f_2;
}
*(uParam3[0 /*3*/])={
Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 
};
*(uParam3[1 /*3*/])={
Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 
};
*(uParam3[2 /*3*/])={
Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 
};
*(uParam3[3 /*3*/])={
Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 
};
*(uParam3[4 /*3*/])={
Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 
};
*(uParam3[5 /*3*/])={
Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 
};
*(uParam3[6 /*3*/])={
Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 
};
*(uParam3[7 /*3*/])={
Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 
};
}

int func_151(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4){
struct<3> Var0[8];
int iVar1;
Var0[0 /*3*/]={
Param0.f_0, Param0.f_1, Param0.f_2 
};
Var0[1 /*3*/]={
Param0.f_0, Param0.f_1, Param1.f_2 
};
Var0[2 /*3*/]={
Param0.f_0, Param1.f_1, Param1.f_2 
};
Var0[3 /*3*/]={
Param0.f_0, Param1.f_1, Param0.f_2 
};
Var0[4 /*3*/]={
Param1.f_0, Param0.f_1, Param0.f_2 
};
Var0[5 /*3*/]={
Param1.f_0, Param0.f_1, Param1.f_2 
};
Var0[6 /*3*/]={
Param1.f_0, Param1.f_1, Param1.f_2 
};
Var0[7 /*3*/]={
Param1.f_0, Param1.f_1, Param0.f_2 
};
iVar1=0;
while (iVar1 < 8){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}

int func_152(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4){
struct<3> Var0[4];
int iVar1;
Var0[0 /*3*/]={
Param0 + Vector(0f, fParam1, 0f) 
};
Var0[1 /*3*/]={
Param0 + Vector(0f, (-1f * fParam1), 0f) 
};
Var0[2 /*3*/]={
Param0 + Vector(0f, 0f, fParam1) 
};
Var0[3 /*3*/]={
Param0 + Vector(0f, 0f, (-1f * fParam1)) 
};
iVar1=0;
while (iVar1 < 4){
if(!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1)){
return 0;
}
iVar1++;
}
return 1;
}


void func_153(struct<3> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
struct<3> Var1;
int iVar2;
Var1={
Param0 
};
iVar2=func_77(Var1);
iVar0=0;
while (iVar0 < Global_2642106[iVar2]){
if(func_76(Var1, &(Global_2640710[iVar2 /*155*/][iVar0 /*7*/]))){
*uParam1={
Global_2640710[iVar2 /*155*/][iVar0 /*7*/] 
};
*uParam2={
Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_3 
};
*uParam3=Global_2640710[iVar2 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642106[8]){
if(func_76(Var1, &(Global_2640710[8 /*155*/][iVar0 /*7*/]))){
*uParam1={
Global_2640710[8 /*155*/][iVar0 /*7*/] 
};
*uParam2={
Global_2640710[8 /*155*/][iVar0 /*7*/].f_3 
};
*uParam3=Global_2640710[8 /*155*/][iVar0 /*7*/].f_6;
return;
}
iVar0++;
}}

int func_154(struct<3> Param0){
int iVar0;
int iVar1;
if(Global_2635559.f_45.f_55){
if(INTERIOR::IS_VALID_INTERIOR(Global_2635559.f_45.f_56)){
if(!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0)){
iVar0=INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
if(INTERIOR::IS_VALID_INTERIOR(iVar0)){
iVar1=INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
if(!iVar1==Global_2635559.f_45.f_57){
return 0;
}}else{
return 0;
}}else{
return 0;
}}}
return 1;
}

int func_155(struct<3> Param0){
switch (Global_2635559.f_2487){
case 0:
return func_189(Param0, Global_2635559.f_2466, Global_2635559.f_2469, 0, 0);
break;
case 1:
return func_105(Param0, Global_2635559.f_2480, Global_2635559.f_2483, 0, 0);
break;
case 2:
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635559.f_2480, Global_2635559.f_2483, Global_2635559.f_2486, 0, 1);
break;
}
return 0;
}

int func_156(struct<3> Param0, var uParam1, var uParam2, float fParam3){
float fVar0;
int iVar1;
struct<3> Var2;
struct<3> Var3;
float fVar4;
fVar0=0f;
iVar1=0;
iVar1=0;
while (iVar1 < *uParam1){
fVar0=((uParam1[iVar1 /*4*/])->f_3 + fParam3);
if(vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0){
return 1;
}
iVar1++;
}
Var2={
0f, 0f, 0f 
};
Var3={
0f, 0f, 0f 
};
fVar4=0f;
iVar1=0;
while (iVar1 < *uParam2){
Var2={
*(uParam2[iVar1 /*10*/]) 
};
Var3={
(uParam2[iVar1 /*10*/])->f_3 
};
fVar4=(uParam2[iVar1 /*10*/])->f_6;
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var3, fVar4, 0, 1)){
return 1;
}
iVar1++;
}
return 0;
}

int func_157(var uParam0, var uParam1, bool bParam2, float fParam3){
int iVar0;
struct<3> Var1;
iVar0=0;
iVar0=0;
while (iVar0 < *uParam1){
if(vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3)){
if(bParam2){
Var1={
*uParam0 
};
func_65(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
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

int func_158(int iParam0){
switch (func_103()){
case 0:
if(!func_159(iParam0)){
if(Global_1853910[iParam0 /*862*/]==0){
return 1;
}}
break;
}
return 0;
}


bool func_159(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192 !=0;
}

int func_160(int iParam0){
if(func_87(iParam0, 1, 0)){
if(Global_1853910[iParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_161(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < iParam2){
if(vdist2(Global_2635559.f_2625[iVar0 /*3*/], Param0) < (fParam1 * fParam1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_162(var uParam0, bool bParam1){
var uVar0;
struct<3> Var1;
float fVar2;
if(func_93(*uParam0)){
if(bParam1){
Var1={
*uParam0 
};
fVar2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
func_65(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 0, fVar2);
if(func_94(Var1, &uVar0) || func_93(Var1)){
Var1={
*uParam0 
};
func_65(&Var1, Global_2635559.f_593, Global_2635559.f_596, 1036831949, 1, fVar2);
}
*uParam0={
Var1 
};
}}
return 0;
}

int func_163(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
int iVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_164(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_1680(iVar1, 1, 1)){
if(!func_6(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_120(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_164(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_164(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}


Vector3 func__164(int iParam0){
int iVar0;
iVar0=iParam0;
if((func_165() && Global_1853910[iVar0 /*862*/].f_832) && !func_13(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_124(iParam0);
}


bool func_165(){
return Global_2683864.f_19;
}

int func_166(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
if(func_168(Param0, fParam1, iParam2, iParam3, 0) || func_167(Param0, iParam2, iParam4)){
return 1;
}
return 0;
}

int func_167(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam1==iVar0 || iParam2==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(!Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4==0){
if(func_79(Param0, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949)){
if(func_1680(iVar2, 0, 1) && func_1680(iParam1, 0, 1)){
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

int func_168(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam2==iVar0 || iParam3==1){
iVar1=iVar0;
bVar2=false;
if(bParam4){
if(func_1680(iVar1, 0, 1) && func_1680(iParam2, 0, 1)){
if(PLAYER::GET_PLAYER_TEAM(iVar1)==PLAYER::GET_PLAYER_TEAM(iParam2)){
bVar2=true;
}}}
if(!bVar2){
if(func_1680(bVar1, 0, 1) && func_1680(bParam2, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(vdist(func_124(bVar1), Param0) < 1f){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(vdist(Global_2648605.f_131[iVar0 /*3*/], Param0) < fParam1){
return 1;
}}elseif(func_1680(bVar1, 0, 1)){
if(vdist(func_124(bVar1), Param0) < 1f){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_169(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13){
Global_2635559.f_3=0;
if(!func_166(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0)){
Global_2635559.f_3++;
if(bParam3){
if(func_219(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_173(Param0, fParam10)){
Global_2635559.f_3++;
if(!func_78(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}elseif(!bParam2){
if(func_219(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_173(Param0, fParam10)){
Global_2635559.f_3++;
if(!func_170(Param0, fParam1, fParam7, fParam8, 1084227584)){
Global_2635559.f_3++;
if(!func_78(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}elseif(func_219(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0)){
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
if(!func_173(Param0, fParam10)){
Global_2635559.f_3++;
if(!func_170(Param0, fParam1, fParam7, fParam8, fParam9)){
Global_2635559.f_3++;
if(!func_78(Param0, 1056964608)){
Global_2635559.f_3++;
return 1;
}}}}else{
Global_2635559.f_3=(Global_2635559.f_3 + Global_2635559.f_2);
}}
return 0;
}

int func_170(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(!PLAYER::PLAYER_ID()==iVar1){
if((func_1680(iVar1, 1, 1) && func_120(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!func_172(PLAYER::PLAYER_ID(), bVar1, -2, 0)){
if(func_171(func_124(bVar1), Param0, fParam1, fParam2, fParam3, fParam4)){
return 1;
}}}}
iVar0++;
}
return 0;
}


bool func_171(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5){
struct<3> Var0;
struct<3> Var1;
fParam2=(fParam2 * -1f);
fParam2=(fParam2 + 360f);
Var0.f_0=sin(fParam2);
Var0.f_1=cos(fParam2);
Var0.f_2=0f;
Var0={
Var0 / FtoV(vmag(Var0)) 
};
Var0={
Var0 * Vector(fParam3, fParam3, fParam3) 
};
Var1={
Param1 + Var0 
};
Var1.f_2=Param1.f_2;
Var1.f_2=(Var1.f_2 + fParam5);
Param1.f_2=(Param1.f_2 + fParam5);
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Var1, fParam4, 0, 1);
}


bool func_172(bool bParam0, bool bParam1, int iParam2, int iParam3){
if(iParam2==-2){
if(iParam3==0){
if(PLAYER::GET_PLAYER_TEAM(iParam0)==-1 && PLAYER::GET_PLAYER_TEAM(bParam1)==-1){
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

int func_173(struct<3> Param0, float fParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((func_1680(iVar1, 1, 1) && func_120(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && PLAYER::GET_PLAYER_TEAM(bVar1)==-1) && !func_101(PLAYER::PLAYER_ID(), 1)){
return 0;
}elseif((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && !PLAYER::PLAYER_ID()==bVar1) || !func_172(PLAYER::PLAYER_ID(), bVar1, -2, 0)){
if(vdist(Param0, func_124(bVar1)) < fParam1){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_174(int iParam0){
if((Global_2635559.f_489==9 || Global_2635559.f_489==9) || (Global_2635559.f_489==15 && iParam0==1)){
return 1;
}
return 0;
}

int func_175(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam6==0){
if(func_1680(iVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_120(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam7) && bParam4) && func_126(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_124(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_176(struct<3> Param0, float fParam1, int iParam2, float fParam3){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
iVar3=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
if(!iVar3==-1){
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if(func_1680(iVar1, 1, 1)){
if((!func_6(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)) && bVar1 !=PLAYER::PLAYER_ID()){
fVar2=iParam2;
if(fParam3 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam3;
}
}}
if(PLAYER::GET_PLAYER_TEAM(bVar1)==iVar3){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_124(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}
}}}}
iVar0++;
}}
return 0;
}

int func_177(bool bParam0){
if(((func_101(bParam0, 1) || func_180(bParam0)) || func_179(bParam0, 0)) || func_178(bParam0)){
return 1;
}
return 0;
}

int func_178(int iParam0){
if(!func_1680(iParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_179(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_180(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}


void func_181(struct<3> Param0, var uParam1, var uParam2){
int iVar0;
int iVar1;
int iVar2;
struct<4> Var3;
struct<8> Var4;
struct<3> Var5;
struct<3> Var6;
iVar0=0;
while (iVar0 < *uParam1){
*(uParam1[iVar0 /*4*/])={
Var3 
};
iVar0++;
}
iVar0=0;
while (iVar0 < *uParam2){
*(uParam2[iVar0 /*10*/])={
Var4 
};
iVar0++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573885){
iVar0=0;
while (iVar0 < *uParam1){
if(!MISC::IS_BIT_SET(Global_4543624[iVar1 /*26*/].f_12, 11)){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_4543624[iVar1 /*26*/].f_3, Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_4543624[iVar1 /*26*/].f_3 
};
Var3.f_3=Global_4543624[iVar1 /*26*/].f_6.f_2;
func_183(&Var3, uParam1, iVar0);
iVar0=*uParam1;
}}
iVar0++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < 19){
iVar0=0;
while (iVar0 < *uParam1){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_262145.f_6293[iVar1 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6293[iVar1 /*3*/] 
};
Var3.f_3=3f;
func_183(&Var3, uParam1, iVar0);
iVar0=*uParam1;
}
iVar0++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar2=0;
iVar1=0;
while (iVar1 < 19){
iVar2=0;
while (iVar2 < 6){
iVar0=0;
while (iVar0 < *uParam1){
if(vmag(*(uParam1[iVar0 /*4*/]))==0f || vdist(Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/], Param0) < vdist(*(uParam1[iVar0 /*4*/]), Param0)){
Var3={
Global_262145.f_6351[iVar1 /*19*/][iVar2 /*3*/] 
};
Var3.f_3=3f;
func_183(&Var3, uParam1, iVar0);
iVar0=*uParam1;
}
iVar0++;
}
iVar2++;
}
iVar1++;
}
iVar0=0;
iVar1=0;
iVar1=0;
while (iVar1 < Global_1573850){
iVar0=0;
while (iVar0 < *uParam2){
Var5={
Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) 
};
Var6={
*(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) 
};
if(vmag(*(uParam2[iVar0 /*10*/]))==0f || vdist(Var5, Param0) < vdist(Var6, Param0)){
Var4={
Global_1573169[iVar1 /*8*/].f_1 
};
Var4.f_3={
Global_1573169[iVar1 /*8*/].f_4 
};
Var4.f_6=Global_1573169[iVar1 /*8*/].f_7;
Var4.f_7={
Global_4543300[iVar1 /*3*/] 
};
func_182(&Var4, uParam2, iVar0);
iVar0=*uParam2;
}
iVar0++;
}
iVar1++;
}}


void func_182(var uParam0, var uParam1, int iParam2){
Global_2643112={
*(uParam1[iParam2 /*10*/]) 
};
*(uParam1[iParam2 /*10*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_182(&Global_2643112, uParam1, iParam2 + 1);
}}


void func_183(var uParam0, var uParam1, int iParam2){
Global_2643108={
*(uParam1[iParam2 /*4*/]) 
};
*(uParam1[iParam2 /*4*/])={
*uParam0 
};
if(iParam2 + 1 < *uParam1){
func_183(&Global_2643108, uParam1, iParam2 + 1);
}}


void func_184(var uParam0, var uParam1){
int iVar0;
struct<3> Var1;
float fVar2;
if(Global_2635559.f_2262 > 0){
iVar0=0;
while (iVar0 < Global_2635559.f_2262){
if(func_185(Global_2635559.f_2263[iVar0 /*4*/], uParam0)){
fVar2=Global_2635559.f_2263[iVar0 /*4*/].f_3;
if(vmag(*uParam1) > 0.01f){
Var1={
*uParam1 - Global_2635559.f_2263[iVar0 /*4*/] 
};
fVar2=MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
}
func_117(Global_2635559.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
Global_2635559.f_2491++;
}
iVar0++;
}}
if(uParam0->f_5 && Global_2635559.f_2889){
func_111(&(Global_2635559.f_2491.f_6[0 /*10*/]), &(Global_2635559.f_2491.f_6[1 /*10*/]), &(Global_2635559.f_2491.f_6[2 /*10*/]));
}}

int func_185(struct<3> Param0, var uParam1){
switch (uParam1->f_7){
case 0:
return func_69(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
case 1:
case 2:
return func_69(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
default:
}
return 0;
}


void func_186(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4){
float fVar0;
func_106(&Param0, &Param1);
fVar0=(Param1.f_0 - Param0.f_0);
*uParam2=(Param0.f_0 + (fVar0 * 0.5f));
uParam2->f_1=Param0.f_1;
uParam2->f_2=Param0.f_2;
*uParam3=*uParam2;
uParam3->f_1=Param1.f_1;
uParam3->f_2=Param1.f_2;
*uParam4=(fVar0 * 0.5f);
}


var func__187(){
return Global_1573131.f_4;
}


void func_188(var uParam0, var uParam1){
func_226();
func_218(uParam0, uParam1);
}


bool func_189(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4){
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


void func_190(var uParam0, var uParam1, var uParam2){
int iVar0;
iVar0=0;
if(Global_2635559.f_1754 > 0){
iVar0=0;
while (func_212(uParam0, uParam1, uParam2)==0 && iVar0 < 2){
iVar0++;
}
if(iVar0==2){
uParam2->f_33=0;
}else{
return;
}}
iVar0=0;
while (func_191(uParam0, uParam1, uParam2)==0 && iVar0 < 6){
iVar0++;
}}

int func_191(var uParam0, var uParam1, var uParam2){
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
if(func_90(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_51){
uParam2->f_6=9999.9f;
}
if(uParam2->f_48){
if(func_211(uParam0, 1)){
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
if(func_84(uParam2->f_34) !=0){
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
if(!func_162(&Var1, 0)){
if((uParam2->f_13 || uVar5 & 64==0) || uParam2->f_33==1){
if(uParam2->f_14 || uVar5 & 16==0){
if((uVar5 & 128==0 && uVar5 & 256==0) && uVar5 & 512==0){
if(!func_210(Var1)){
Var1={
func_206(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) 
};
if(vmag(Var1) > 0f){
if(!func_78(Var1, 5f)){
if(Var1.f_2 >=(uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >=2){
if(Var1.f_2 <=(uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >=2){
if(func_205(Var1, uParam2)){
if((uParam2->f_48 && !func_211(&Var1, 0)) || uParam2->f_48==0){
bVar16=true;
if(!bVar10){
if(bVar9){
iVar0=(iVar0 + -1);
bVar16=false;
}
}
if(vmag(Var1) > 0f){
if(((uParam2->f_5 > 0f && vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <=0f) || uParam2->f_33 >=2){
if((uParam2->f_12 && !func_201(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_90(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_200(Var1, fVar2, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_219(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
iVar21=1;
}
}
elseif(func_219(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_198(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0)){
iVar21=1;
}
}
if(iVar21 || uParam2->f_33 >=2){
if(((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >=2){
fVar23=0f;
if(uParam2->f_52){
iVar22=func_197(Var1, uParam2->f_54, &fVar23);
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
func_196(Var1, fVar2, iVar14);
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
if(func_205(Var1, uParam2)){
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
func_194(0, uParam2);
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
func_193(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
if(func_90(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_211(&Var27, bVar29)){
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
func_192(&Global_1574205, uParam0, uParam1, *uParam0);
if(uParam2->f_11){
uParam2->f_27=1;
}
return 1;
}}
Global_2643122.f_164=iVar6;
}
return 0;
}


void func_192(var uParam0, var uParam1, var uParam2, struct<3> Param3){
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
if(!func_166(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0)){
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


void func_193(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11){
int iVar0;
iVar0=0;
while (iVar0 < 30){
*iParam2=MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10)){
if(vmag(*uParam3) > 0f){
*uParam3={
func_206(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) 
};
if(!func_210(*uParam3)){
iVar0=999;
return;
}}}
iVar0++;
}}


void func_194(int iParam0, var uParam1){
if(!func_205(Global_2643122[iParam0 /*3*/], uParam1)){
Global_2643122.f_162=(Global_2643122.f_162 - 1);
func_195(iParam0);
if(Global_2643122.f_162 > Global_2643122.f_163){
func_194(iParam0, uParam1);
}}elseif(iParam0 < 39){
func_194(iParam0 + 1, uParam1);
}}


void func_195(int iParam0){
while (iParam0 < 39){
if(iParam0 < 39){
Global_2643122[iParam0 /*3*/]={
Global_2643122[iParam0 + 1 /*3*/] 
};
Global_2643122.f_121[iParam0]=Global_2643122.f_121[iParam0 + 1];
}
iParam0++;
}}


void func_196(struct<3> Param0, float fParam1, int iParam2){
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
func_196(Var0, uVar1, iParam2 + 1);
}}}

int func_197(struct<3> Param0, float fParam1, float fParam2){
int iVar0;
struct<3> Var1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
fVar4=99999.9f;
iVar0=0;
while (iVar0 < 32){
iVar3=iVar0;
if(func_125(iVar3)){
Var1={
func_124(iVar3) 
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

int func_198(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
int iVar4;
struct<3> Var5;
float fVar6;
iVar0=0;
while (iVar0 < 32){
iVar1=iVar0;
if((iParam7==1 && PLAYER::PLAYER_ID() !=iVar1) || iParam7==0){
if(func_1680(iVar1, bParam3, bParam4)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)){
if(!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_120(bVar1))){
if((!bParam5 || (bParam5==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && iParam8) && bParam5) && func_126(bVar1)){
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
if(func_199(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0)){
return 1;
}
}
else{
fVar2=5f;
}}
if(func_79(func_124(bVar1), Param0, fParam1, iParam2, fVar2)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_199(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6){
if(func_79(Param0, Param3, fParam4, iParam5, 1036831949)){
return 1;
}
func_80(Param0, fParam1, iParam2, &Global_1981305, &(Global_1981305.f_3), &(Global_1981305.f_6), 1036831949);
func_80(Param3, fParam4, iParam5, &(Global_1981305.f_7), &(Global_1981305.f_10), &(Global_1981305.f_13), 1036831949);
if(MISC::GET_POINT_AREA_OVERLAP(Global_1981305, Global_1981305.f_3, Global_1981305.f_6, Global_1981305.f_7, Global_1981305.f_10, Global_1981305.f_13)){
return 1;
}
return 0;
}

int func_200(struct<3> Param0, float fParam1, int iParam2){
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
if(func_199(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
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
if(func_199(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0)){
return 1;
}}
return 0;
}

int func_201(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5){
if(func_204(Param0, fParam1, iParam2, iParam3, iParam4) || func_202(Param0, fParam1, iParam2, iParam3, iParam5)){
return 1;
}
return 0;
}

int func_202(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar2=iVar0;
iVar1=0;
while (iVar1 < 2){
if(func_203(Param0, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4)){
if(func_199(Param0, fParam1, iParam2, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0)){
if(func_1680(iVar2, 0, 1) && func_1680(iParam3, 0, 1)){
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

int func_203(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3){
float fVar0;
float fVar1;
float fVar2;
fVar0=func_86(iParam1, 1008981770);
fVar1=func_86(iParam3, 1008981770);
fVar2=vdist(Param0, Param2);
if(fVar2 < (fVar0 + fVar1)){
return 1;
}
return 0;
}

int func_204(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
if(!iParam3==iVar0 || iParam4==1){
iVar1=iVar0;
if(func_1680(iVar1, 0, 1) && func_1680(iParam3, 0, 1)){
if(Global_2648605.f_261[iVar0]){
if(func_79(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_79(func_124(iVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(Global_2648605.f_261[iVar0]){
if(func_79(Global_2648605.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949)){
return 1;
}}elseif(func_1680(iVar1, 0, 0)){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1))){
if(func_79(func_124(bVar1), Param0, fParam1, iParam2, 1036831949)){
return 1;
}}}}
iVar0++;
}
return 0;
}

int func_205(struct<3> Param0, var uParam1){
if(uParam1->f_18){
switch (uParam1->f_26){
case 0:
if(func_189(Param0, uParam1->f_19, uParam1->f_25, 0, 0)){
return 1;
}
break;
case 1:
if(func_105(Param0, uParam1->f_19, uParam1->f_22, 0, 0)){
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


Vector3 func__206(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12){
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
if(!func_209(Param0, *uParam1, Param4)){
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
if(VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_208(Param0)){
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
fVar10=func_207(iParam7, 3.5f);
}else{
fVar10=func_207(iParam7, 1.5f);
}
if(fVar10 > 1.8f){
fVar7=(fVar7 + ((fVar10 - 1.8f) * -0.5f));
}}}}
if(vmag(Param4) > 0f){
if(!func_209(Param0, *uParam1, Param4)){
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
fVar10=func_207(iParam7, 3.5f);
}else{
fVar10=func_207(iParam7, 1.5f);
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


float func_207(int iParam0, float fParam1){
float fVar0;
float fVar1;
float fVar2;
func_81(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
fVar2=(fVar1 - fVar0);
if(fVar2 < fParam1){
return fParam1;
}
return fVar2;
}

int func_208(struct<3> Param0){
float fVar0;
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0)){
fVar0=(fVar0 - Param0.f_2);
if(fVar0 > 6f){
return 1;
}}
return 0;
}

int func_209(struct<3> Param0, float fParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
0f, 1f, 0f 
};
func_66(&Var0, 0f, 0f, fParam1);
Var1={
Param2 - Param0 
};
if(func_62(Var1, Var0) >=0f){
return 1;
}
return 0;
}

int func_210(struct<3> Param0){
int iVar0;
int iVar1;
iVar1=func_77(Param0);
iVar0=0;
while (iVar0 < Global_2642829[iVar1]){
if(func_76(Param0, &(Global_2642126[iVar1 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_2642829[8]){
if(func_76(Param0, &(Global_2642126[8 /*78*/][iVar0 /*7*/]))){
return 1;
}
iVar0++;
}
return 0;
}


bool func_211(var uParam0, bool bParam1){
bool bVar0;
bVar0=false;
if(Global_2635559.f_26.f_18){
switch (Global_2635559.f_26.f_17){
case 0:
if(func_189(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_16, 0, 0)){
bVar0=true;
}
break;
case 1:
if(func_105(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, 0, 0)){
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
func_67(*uParam0, Global_2635559.f_26.f_10, Global_2635559.f_26.f_13, Global_2635559.f_26.f_16, Global_2635559.f_26.f_17, 1036831949, 0) 
};
}}}
return bVar0;
}

int func_212(var uParam0, var uParam1, var uParam2){
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
if(func_90(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1)){
uParam2->f_6=9999.9f;
uParam2->f_7=9999.9f;
}}
if(uParam2->f_48){
if(func_211(uParam0, 1)){
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
func_215(*uParam0);
}elseif(uParam2->f_29){
func_214();
}else{
func_213();
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
if((uParam2->f_12 && !func_201(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12){
if(!uParam2->f_15 || !func_90(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1)){
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
if(!func_200(Var3, fVar4, uParam2->f_34)){
if(uParam2->f_3 > 7f){
if(func_219(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0)){
bVar10=true;
}}elseif(func_219(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_198(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0)){
bVar10=true;
}
}
if(bVar10){
if((uParam2->f_29 || uParam2->f_30) || uParam2->f_52){
fVar12=0f;
if(uParam2->f_52){
iVar11=func_197(Var3, uParam2->f_54, &fVar12);
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
func_196(Var3, fVar4, iVar5);
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
func_194(0, uParam2);
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


void func_213(){
int iVar0;
iVar0=0;
while (iVar0 < Global_2635559.f_1754){
Global_2635559.f_2160[iVar0]=iVar0;
iVar0++;
}}


void func_214(){
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


void func_215(struct<3> Param0){
float fVar0;
var uVar1;
int iVar2;
fVar0=-1f;
while (iVar2 < Global_2635559.f_1754){
uVar1=func_216(Param0, fVar0, &fVar0);
Global_2635559.f_2160[iVar2]=uVar1;
iVar2++;
}}

int func_216(struct<3> Param0, float fParam1, float fParam2){
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


bool func_217(int iParam0){
return iParam0==50;
}


void func_218(var uParam0, var uParam1){
PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
Global_2635559.f_2474=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_2472=1;
Global_2635559.f_2475=NETWORK::GET_NETWORK_TIME();
}

int func_219(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_175(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_163(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}


void func_220(){
func_225();
func_224();
func_223();
func_222();
func_221();
}


void func_221(){
struct<10> Var0;
int iVar1;
Var0.f_2=1176256410;
iVar1=0;
while (iVar1 < 128){
Global_2638502[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_222(){
struct<10> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 4){
Global_2635559.f_2491.f_90[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_223(){
struct<4> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 8){
Global_2635559.f_2491.f_57[iVar1 /*4*/]={
Var0 
};
iVar1++;
}}


void func_224(){
struct<10> Var0;
int iVar1;
Var0.f_2=1176256410;
iVar1=0;
while (iVar1 < 5){
Global_2635559.f_2491.f_6[iVar1 /*10*/]={
Var0 
};
iVar1++;
}}


void func_225(){
struct<6> Var0;
Var0.f_3=-1;
Global_2635559.f_2491={
Var0 
};
}


void func_226(){
if(Global_2635559.f_2472){
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_2474){
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}else{
PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
}
Global_2635559.f_2472=0;
}}

int func_227(bool bParam0){
if(CAM::IS_SCREEN_FADED_OUT()){
return 10000;
}
if(bParam0){
return 5000;
}
return 1000;
}

int func_228(){
switch (Local_180.f_290){
case 0:
if(Local_180.f_267 >=Local_180.f_266){
return 0;
}
break;
}
return 1;
}


void func_229(){
int iVar0;
if(!MISC::IS_BIT_SET(Local_180.f_3, 10)){
Local_180.f_517.f_1=func_230();
if(Local_180.f_517.f_1 !=-1){
Local_180.f_517.f_2={
Local_180.f_261 
};
iVar0=0;
while (iVar0 < 5){
if(!MISC::IS_BIT_SET(Local_180.f_381[iVar0 /*27*/].f_6, 0)){
MISC::SET_BIT(&(Local_180.f_517.f_5), false);
MISC::SET_BIT(&(Local_180.f_517.f_5), 31);
Local_180.f_517.f_6[iVar0 /*3*/]={
Local_180.f_381[iVar0 /*27*/].f_2 
};
Local_180.f_517.f_22[iVar0]=Local_180.f_381[iVar0 /*27*/].f_5;
Local_180.f_517.f_28[iVar0]=Local_180.f_381[iVar0 /*27*/].f_7;
Local_180.f_517.f_34[iVar0]=Local_180.f_381[iVar0 /*27*/].f_8;
Local_180.f_517.f_40[iVar0]=Local_180.f_381[iVar0 /*27*/].f_9;
}
iVar0++;
}}
MISC::SET_BIT(&(Local_180.f_3), 10);
}}

int func_230(){
int iVar0;
iVar0=0;
while (iVar0 < 63){
if(!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_GA_PICKUPS", iVar0, 0, 0)){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_231(){
switch (Local_180.f_290){
case 0:
Local_180.f_283=func_234(&(Local_180.f_281), 0, 0);
func_233();
func_232(5);
func_229();
break;
}}


void func_232(int iParam0){
Local_180.f_4=iParam0;
}


void func_233(){
int iVar0;
int iVar1;
bool bVar2;
iVar0=-1;
iVar1=0;
while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
if(Local_187[iVar1 /*9*/].f_4 > iVar0){
Local_180.f_380=bVar2;
iVar0=Local_187[iVar1 /*9*/].f_4;
}}
iVar1++;
}}

int func_234(var uParam0, bool bParam1, bool bParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1){
if(!bParam2){
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
}else{
return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
}}
return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}


void func_235(){
switch (Local_180.f_290){
case 0:
if(Local_180.f_265 >=Local_180.f_266){
Local_180.f_283=func_234(&(Local_180.f_281), 0, 0);
func_232(4);
}
break;
}}


void func_236(){
if(MISC::IS_BIT_SET(Local_180.f_3, 4)){
func_38(&(Local_180.f_281), 0, 0);
func_232(3);
}}


void func_237(){
func_232(2);
}


void func_238(){
func_232(1);
}

int func_239(){
return Local_180.f_4;
}


void func_240(int iParam0){
if(Local_180.f_0 !=iParam0){
Local_180.f_0=iParam0;
}}


void func_241(){
int iVar0;
iVar0=0;
while (iVar0 < 6){
func_242(&(Local_180.f_367[iVar0]));
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
func_242(&(Local_180.f_374[iVar0]));
iVar0++;
}}


void func_242(var uParam0){
if(*uParam0 !=-1){
GRAPHICS::DESTROY_TRACKED_POINT(*uParam0);
*uParam0=-1;
}}

int func_243(var uParam0){
if((func_420(uParam0) && func_246()) && func_244()){
return 1;
}else{
return 0;
}
return 1;
}

int func_244(){
int iVar0;
iVar0=0;
while (iVar0 < 5){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_381[iVar0 /*27*/]) && !func_13(Local_180.f_381[iVar0 /*27*/].f_2)){
STREAMING::REQUEST_MODEL(Local_180.f_381[iVar0 /*27*/].f_1);
if(STREAMING::HAS_MODEL_LOADED(Local_180.f_381[iVar0 /*27*/].f_1)){
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
MISC::CLEAR_AREA(Local_180.f_381[iVar0 /*27*/].f_2, 1f, 1, 0, 0, 1);
if(func_245(&(Local_180.f_381[iVar0 /*27*/]), Local_180.f_381[iVar0 /*27*/].f_1, Local_180.f_381[iVar0 /*27*/].f_2, 1, 1, 1, 1, 0, 0, 0)){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_180.f_381[iVar0 /*27*/], 1);
ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_180.f_381[iVar0 /*27*/]), Local_180.f_381[iVar0 /*27*/].f_5);
OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(NETWORK::NET_TO_OBJ(Local_180.f_381[iVar0 /*27*/]));
}}}}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_381[iVar0 /*27*/]) && !func_13(Local_180.f_381[iVar0 /*27*/].f_2)){
return 0;
}
iVar0++;
}
return 1;
}

int func_245(var uParam0, var uParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9){
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
ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
}
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0))){
if(bParam3){
NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
}}
return 1;
}
return 0;
}

int func_246(){
bool bVar0;
if(Global_4980736.f_84915 > 5){
Global_4980736.f_84915=5;
}
if(func_414(Global_4980736.f_84915, 1, 0)){
bVar0=false;
while (bVar0 < Global_4980736.f_84915){
if(Global_4980736.f_84919[bVar0 /*499*/].f_12 !=0){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_269[bVar0]) && !MISC::IS_BIT_SET(Local_180.f_366, bVar0)){
Local_180.f_275[bVar0]=Global_4980736.f_84919[bVar0 /*499*/].f_12;
STREAMING::REQUEST_MODEL(Local_180.f_275[bVar0]);
if(STREAMING::HAS_MODEL_LOADED(Local_180.f_275[bVar0])){
if((func_413(Local_180.f_374[bVar0]) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_180.f_374[bVar0])) && func_219(Global_4980736.f_84919[bVar0 /*499*/], func_412(bVar0), 1f, 1f, 3f, 0, 1, 0, 30f, 1, -1, 0, 0f, 1, 0f, 1, 0)){
if(func_409(&(Local_180.f_269[bVar0]), Global_4980736.f_84919[bVar0 /*499*/].f_12, Global_4980736.f_84919[bVar0 /*499*/], Global_4980736.f_84919[bVar0 /*499*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0)){
func_408(NETWORK::NET_TO_VEH(Local_180.f_269[bVar0]), Global_4980736.f_84919[bVar0 /*499*/].f_108, -1);
func_400(NETWORK::NET_TO_VEH(Local_180.f_269[bVar0]), Global_4980736.f_84919[bVar0 /*499*/].f_23, Global_4980736.f_84919[bVar0 /*499*/].f_28, -1, -1, -1, -1082130432, -1);
func_247(NETWORK::NET_TO_VEH(Local_180.f_269[bVar0]), bVar0, &(Local_180.f_269), Global_4980736.f_84919[bVar0 /*499*/], 0, -1, 1, -1);
VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_180.f_269[bVar0]), 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_180.f_269[bVar0]), 2);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_180.f_275[bVar0], 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_180.f_269[bVar0]), 1);
MISC::SET_BIT(&(Local_180.f_366), bVar0);
}
}
else{
MISC::SET_BIT(&(Local_180.f_366), bVar0);
}}}}
bVar0++;
}}else{
return 1;
}
bVar0=false;
while (bVar0 < Global_4980736.f_84915){
if((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_269[bVar0]) && !MISC::IS_BIT_SET(Local_180.f_366, bVar0)) && Global_4980736.f_84919[bVar0 /*499*/].f_12 !=0){
return 0;
}
bVar0++;
}
return 1;
}


void func_247(int iParam0, bool bParam1, var uParam2, struct<3> Param3, int iParam4, int iParam5, bool bParam6, int iParam7){
int iVar0;
int iVar1;
bool bVar2;
float fVar3;
int iVar4;
bool bVar5;
bool bVar6;
struct<3> Var7;
float fVar8;
int iVar9;
struct<3> Var10;
int iVar11;
int iVar12;
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("mule"))){
func_408(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_108, Global_4980736.f_84919[bParam1 /*499*/].f_28);
}else{
func_408(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_108, -1);
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("trailerlarge"))){
if(MISC::IS_BIT_SET(Global_4718592.f_25, 7) && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 8)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer")){
if(func_399() !=func_72()){
DECORATOR::DECOR_SET_INT(iParam0, "Creator_Trailer", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(func_399()));
}}}
func_395(iParam0, 1, 0, Global_4980736.f_84919[bParam1 /*499*/].f_112, bParam1, Global_4980736.f_84919[bParam1 /*499*/].f_289, Global_4980736.f_84919[bParam1 /*499*/].f_290, Global_4980736.f_84919[bParam1 /*499*/].f_291, Global_4980736.f_84919[bParam1 /*499*/].f_292, -1, 0, -1, 0);
}}elseif(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
if(MISC::IS_BIT_SET(Global_4718592.f_27, 25)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "Creator_Trailer")){
if(func_399() !=func_72()){
DECORATOR::DECOR_SET_INT(iParam0, "Creator_Trailer", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(func_399()));
}}}}}}
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob4"))){
VEHICLE::SET_FORCE_HD_VEHICLE(iParam0, 1);
}
bVar2=!VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("cargobob4"));
if(Global_4980736.f_84919[bParam1 /*499*/].f_304==-1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 0)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 0, 0, true);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 0, 0, 1f);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 1)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 1, 0, true);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 1, 0, 1f);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 2)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 2, 0, bVar2);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 2, 0, 1f);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 3)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 3, 0, true);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 3, 0, 1f);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 4)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 4, 0, true);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 4, 0, 1f);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 5)){
VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam0, 5, 0, true);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 5, 0, 1f);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 6)){
VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_323 > -1){
if(Global_4980736.f_84919[bParam1 /*499*/].f_323==0){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
}elseif(Global_4980736.f_84919[bParam1 /*499*/].f_323==1){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 3);
}elseif(Global_4980736.f_84919[bParam1 /*499*/].f_323==2){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 2);
}elseif(Global_4980736.f_84919[bParam1 /*499*/].f_323==3){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 1);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_114, 8)){
if(Global_4718592.f_1199==3){
Global_4980736.f_84919[bParam1 /*499*/].f_228[2]=1;
}}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Heist_Veh_ID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "Heist_Veh_ID")){
DECORATOR::DECOR_SET_INT(iParam0, "Heist_Veh_ID", iVar1);
}}
if(func_394(Global_4980736.f_84919[bParam1 /*499*/].f_12)){
func_400(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_23, Global_4980736.f_84919[bParam1 /*499*/].f_28, Global_4980736.f_84919[bParam1 /*499*/].f_27, Global_4980736.f_84919[bParam1 /*499*/].f_24, Global_4980736.f_84919[bParam1 /*499*/].f_25, 0.5f, Global_4980736.f_84919[bParam1 /*499*/].f_405);
}else{
func_400(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_23, Global_4980736.f_84919[bParam1 /*499*/].f_28, Global_4980736.f_84919[bParam1 /*499*/].f_27, Global_4980736.f_84919[bParam1 /*499*/].f_24, Global_4980736.f_84919[bParam1 /*499*/].f_25, Global_4980736.f_84919[bParam1 /*499*/].f_30, Global_4980736.f_84919[bParam1 /*499*/].f_405);
}
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0, 1);
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 4)){
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 10)){
VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_114, 21)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
}
func_393(iParam0, Param3, iParam5);
if((VEHICLE::IS_THIS_MODEL_A_BOAT(Global_4980736.f_84919[bParam1 /*499*/].f_12) || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("submersible")) || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("submersible2")){
if(!Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("submersible") && !Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("submersible2")){
VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(iParam0, 0);
}
if(!MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 11)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
}
if(VEHICLE::CAN_ANCHOR_BOAT_HERE(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) !=joaat("stromberg")){
VEHICLE::SET_BOAT_ANCHOR(iParam0, 1);
}
if(!Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("submersible") && !Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("submersible2")){
VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iParam0, 99999f);
}
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("seashark") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("seashark2")){
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 0, 1, 0);
}}elseif(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 18) && !(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("titan") && func_392(Global_4718592.f_113724))){
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0, 0);
}else{
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0, 1);
}
if(((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_4980736.f_84919[bParam1 /*499*/].f_12) && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 18)) && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 24)) && !(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("titan") && func_392(Global_4718592.f_113724))){
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
}
if((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_4980736.f_84919[bParam1 /*499*/].f_12) && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 18)) && !(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("titan") && func_392(Global_4718592.f_113724))){
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("titan") && func_392(Global_4718592.f_113724)){
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0, 1);
}
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(iParam0, 0);
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 2)){
VEHICLE::SET_VEHICLE_CAN_BREAK(iParam0, 0);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0))){
VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(iParam0, 1);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 11)){
set_disable_heli_explode_from_body_damage(iParam0, 1);
}
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)) && VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iParam0)){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 15)){
if(func_391()){
if(!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iParam0)){
VEHICLE::SET_VEHICLE_SEARCHLIGHT(iParam0, 1, 1);
}}}}
iVar0=func_390(bParam1, iParam7);
ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar0);
if(func_389() || func_388()){
fVar3=to_float(iVar0);
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, fVar3);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, fVar3);
VEHICLE::SET_VEHICLE_BODY_HEALTH(iParam0, fVar3);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_115, 0)){
VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iParam0, 1f, 1000, 1, 1, 1, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 16)){
VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, 1);
}else{
VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, 0);
VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iParam0, 0);
VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iParam0, 1);
}
VEHICLE::SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(iParam0, 1);
VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(iParam0, 1);
VEHICLE::SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(iParam0, MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 16));
VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, 0);
if(iVar0 >=4000){
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
if((Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("tanker") || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("tanker2")) || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("armytanker")){
VEHICLE::SET_VEHICLE_BODY_HEALTH(iParam0, 1000f);
}}
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("luxor2")){
DECORATOR::DECOR_SET_INT(iParam0, "EnableVehLuxeActs", 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 7)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar4=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
MISC::SET_BIT(&iVar4, 18);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
}}
if(!func_389() && !func_388()){
if(Global_4980736.f_84919[bParam1 /*499*/].f_33 !=1000f && !MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 30)){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, func_387(bParam1, iParam7));
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_40 !=1000f && !MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 30)){
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, func_386(bParam1, iParam7));
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_41 !=1000f){
VEHICLE::SET_VEHICLE_BODY_HEALTH(iParam0, func_385(bParam1, iParam7));
}}
if(!MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 30)){
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(Global_4980736.f_84919[bParam1 /*499*/].f_42 !=1000f){
VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(iParam0, func_384(bParam1, iParam7));
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_43 !=1000f){
VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(iParam0, func_383(bParam1, iParam7));
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 15)){
VEHICLE::SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(iParam0, 0);
}}elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(Global_4980736.f_84919[bParam1 /*499*/].f_42 !=1000f){
VEHICLE::SET_PLANE_PROPELLER_HEALTH(iParam0, func_384(bParam1, iParam7));
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_33 !=1000f){
VEHICLE::SET_PLANE_ENGINE_HEALTH(iParam0, func_387(bParam1, iParam7));
}}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 22)){
if(Global_4980736.f_84919[bParam1 /*499*/].f_33==1001f){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 400f);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_40==1001f){
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, 400f);
}
VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 6)){
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(iParam0, 1);
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 8)){
VEHICLE::SET_VEHICLE_CAN_ENGINE_MISSFIRE(iParam0, 0);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_298 !=1f){
set_vehicle_damage_scales(iParam0, 1f, 1f, 1f, Global_4980736.f_84919[bParam1 /*499*/].f_298);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 30)){
VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 50000f);
VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, 50000f);
if(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0))){
VEHICLE::SET_PLANE_PROPELLER_HEALTH(iParam0, 50000f);
VEHICLE::SET_PLANE_ENGINE_HEALTH(iParam0, 50000f);
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("avenger")){
set_plane_section_damage_scale(iParam0, 0, 0f);
set_plane_section_damage_scale(iParam0, 1, 0f);
set_plane_section_damage_scale(iParam0, 3, 0f);
set_plane_section_damage_scale(iParam0, 4, 0f);
}}
if(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0))){
VEHICLE::SET_HELI_MAIN_ROTOR_HEALTH(iParam0, 50000f);
VEHICLE::SET_HELI_TAIL_ROTOR_HEALTH(iParam0, 50000f);
VEHICLE::SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(iParam0, 0);
}
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(iParam0, 1);
VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iParam0, 1);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("deluxo")){
VEHICLE::SET_SPECIAL_FLIGHT_MODE_ALLOWED(iParam0, 1);
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_114, 12)){
VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 13)){
VEHICLE::SET_VEHICLE_SIREN(iParam0, 1);
if(!MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 14)){
VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(iParam0, 1);
}}elseif(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 14)){
AUDIO::SET_SIREN_WITH_NO_DRIVER(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_108, 7)){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 13)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam0, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam0, 1);
}else{
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam0, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam0, 1);
}}else{
if(Global_4980736.f_84919[bParam1 /*499*/].f_304==-1){
iVar1=0;
while (iVar1 <=5){
if(func_382(iParam0, iVar1) && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, (9 + iVar1))){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 13)){
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam0, iVar1, 3);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam0, 1);
}else{
VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam0, iVar1, 2);
}}
iVar1++;
}}
func_378(bParam1, iParam0);
}
if(func_375(bParam1, -1)){
VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84918, bParam1)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
}
if(func_374(PLAYER::PLAYER_ID())){
VEHICLE::SET_VEHICLE_EXTENDED_REMOVAL_RANGE(iParam0, 150);
}
VEHICLE::SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(iParam0, 1);
if((Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("cargobob") || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("cargobob2")) || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("cargobob3")){
if(func_373(bParam1, &bVar5)){
if(bVar5){
VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(iParam0, 1);
VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iParam0, 4f, 6f, 0);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_SET_AMBIENT_MODE(iParam0, 1, 1);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(iParam0, 0);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH(iParam0, 0f);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH(iParam0, 0f);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(iParam0, 0.65f);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_FALLOFF(iParam0, -0.5f);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF(iParam0, -0.4f);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH(iParam0, 1.5f);
VEHICLE::SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_48);
VEHICLE::SET_CARGOBOB_PICKUP_MAGNET_ENSURE_PICKUP_ENTITY_UPRIGHT(iParam0, 1);
}}}
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "attach_female") !=-1){
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iParam0, 1, 1);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
}
if(!func_369()){
ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam6, 0);
}else{
ENTITY::SET_ENTITY_VISIBLE(iParam0, true, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 19)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 20)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 21)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 2);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 23)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 3);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 24)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 4);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 25)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 5);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 26)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 6);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 27)){
VEHICLE::REMOVE_VEHICLE_WINDOW(iParam0, 7);
}
if((MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_109, 12) || MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_114, 10)) || MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_115, 17)){
if(!MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 11)){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 28)){
if(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0))){
VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(iParam0, 1);
}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("phantom2")){
ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iParam0, 1);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_115, 9)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 7);
VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 5)){
ENTITY::SET_ENTITY_INVINCIBLE(iParam0, 1);
ENTITY::SET_ENTITY_PROOFS(iParam0, 1, 1, 1, 1, 1, 1, 0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 31)){
VEHICLE::SET_VEHICLE_STRONG(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 30)){
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_109, 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 24)){
ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 25)){
func_368(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_274[0], Global_4980736.f_84919[bParam1 /*499*/].f_274[1], Global_4980736.f_84919[bParam1 /*499*/].f_274[2], 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 26)){
VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 31)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, 0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 1)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, 1, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 0)){
if(!VEHICLE::DOES_CARGOBOB_HAVE_PICKUP_MAGNET(iParam0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(iParam0, 1);
VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(iParam0, 4f, 6f, 1);
}}
func_294(&iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_12, Global_4980736.f_84919[bParam1 /*499*/].f_29, Global_4980736.f_84919[bParam1 /*499*/].f_26);
func_281(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_405, -1);
if(((Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("dune4") || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("dune5")) || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("phantom2")) || Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("boxville5")){
VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, 0);
}
if(!MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_110, 18) && !(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("titan") && func_392(Global_4718592.f_113724))){
bVar6=true;
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 11)){
bVar6=false;
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_312==275201){
bVar6=false;
}
if(bVar6){
Var7={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
Var7={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
}}
func_279(func_280(iParam0), bParam1, 0);
if(func_278(Global_4718592.f_113724)){
if(Global_4980736.f_84919[bParam1 /*499*/].f_12==joaat("dune4")){
VEHICLE::VEHICLE_SET_ENABLE_RAMP_CAR_SIDE_IMPULSE(iParam0, 1);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_112, 10)){
VEHICLE::VEHICLE_SET_ENABLE_NORMALISE_RAMP_CAR_VERTICAL_VELOCTIY(iParam0, 1);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_264 !=10){
fVar8=(to_float(Global_4980736.f_84919[bParam1 /*499*/].f_264) / 10f);
VEHICLE::SET_SCRIPT_RAMP_IMPULSE_SCALE(iParam0, fVar8);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_279 > 0){
ENTITY::SET_ALLOW_MIGRATE_TO_SPECTATOR(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4718592.f_19, 27)){
func_277(iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_109, 23)){
func_276(Global_4980736.f_84919[bParam1 /*499*/].f_236, iParam0);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_32 > 4999){
VEHICLE::SET_VEHICLE_STRONG(iParam0, 1);
}
func_274(iParam0, bParam1);
if(Global_4980736.f_84919[bParam1 /*499*/].f_205 > -1 && Global_4980736.f_84919[bParam1 /*499*/].f_206==1){
if(func_272((*uParam2)[Global_4980736.f_84919[bParam1 /*499*/].f_205])){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("cargobob2")){
func_266(iParam0, NETWORK::NET_TO_VEH((*uParam2)[Global_4980736.f_84919[bParam1 /*499*/].f_205]), 1);
}else{
func_265(iParam0, NETWORK::NET_TO_VEH((*uParam2)[Global_4980736.f_84919[bParam1 /*499*/].f_205]), 1, 0);
}}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 3)){
ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 1, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 6)){
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam0, 0, Global_1836885[0]);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 15)){
VEHICLE::SET_VEHICLE_DONT_TERMINATE_TASK_WHEN_ACHIEVED(iParam0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 12)){
VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, true);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 13) && !MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 5)){
ENTITY::SET_ENTITY_PROOFS(iParam0, 1, 0, 0, 0, 0, 0, 0, 0);
}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("avenger") && func_165()) && !MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_111, 5)){
ENTITY::SET_ENTITY_PROOFS(iParam0, MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 13), 1, 0, 0, 0, 0, 0, 0);
}
if(func_264(Global_4980736.f_84919[bParam1 /*499*/].f_12)){
func_395(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_287, Global_4980736.f_84919[bParam1 /*499*/].f_288, Global_4980736.f_84919[bParam1 /*499*/].f_112, bParam1, Global_4980736.f_84919[bParam1 /*499*/].f_289, Global_4980736.f_84919[bParam1 /*499*/].f_290, Global_4980736.f_84919[bParam1 /*499*/].f_291, Global_4980736.f_84919[bParam1 /*499*/].f_292, -1, 0, -1, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_26, 22) && VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("bombushka"))){
set_should_reset_turret_in_scripted_cameras(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_113, 27)){
VEHICLE::DISABLE_VEHICLE_WEAPON(1, joaat("vehicle_weapon_space_rocket"), iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_114, 3) && VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0))){
VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_114, 4)){
VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, 1);
}
if(func_263(bParam1)){
func_262(iParam0);
}
if(func_165()){
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deluxo"))){
func_257(bParam1, iParam0);
}}
if(Global_4980736.f_84919[bParam1 /*499*/].f_322==0){
func_256(iParam0);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_322 > 0){
if(func_255(3) && Global_4980736.f_84919[bParam1 /*499*/].f_322==4){
func_256(iParam0);
}elseif(func_255(2) && Global_4980736.f_84919[bParam1 /*499*/].f_322==3){
func_256(iParam0);
}elseif(func_255(1) && Global_4980736.f_84919[bParam1 /*499*/].f_322==2){
func_256(iParam0);
}elseif(func_255(0) && Global_4980736.f_84919[bParam1 /*499*/].f_322==1){
func_256(iParam0);
}}
if(MISC::IS_BIT_SET(Global_4718592.f_29, 23)){
NETWORK::SET_NETWORK_ENABLE_HIGH_SPEED_EDGE_FALL_DETECTION(iParam0, 1);
}
if(MISC::IS_BIT_SET(Global_4718592.f_31, 12)){
VEHICLE::SET_DISABLE_VEHICLE_EXPLOSIONS_DAMAGE(1);
}
if(MISC::IS_BIT_SET(Global_4718592.f_32, 18)){
if(func_254(ENTITY::GET_ENTITY_MODEL(iParam0))){
VEHICLE::SET_INCREASE_WHEEL_CRUSH_DAMAGE(iParam0, 1);
}}
if(func_392(Global_4718592.f_113724)){
if((((bParam1==18 || bParam1==16) || bParam1==4) || bParam1==3) || bParam1==2){
ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_115, 12)){
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, 1);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_330 !=0){
iVar9=0;
iVar9=0;
while (iVar9 <=20){
ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam0, MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_330, iVar9), func_253(iVar9));
iVar9++;
}}
Var10={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if((INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Var10) || INTERIOR::GET_INTERIOR_AT_COORDS(Var10)==0) || INTERIOR::GET_INTERIOR_FROM_COLLISION(Var10)==0){
INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0);
}
if(Global_4980736.f_84919[bParam1 /*499*/].f_336 > -1){
if(func_252()){
iVar11=Global_4980736.f_84919[bParam1 /*499*/].f_336;
iVar12=func_399();
if(iVar12 > -1){
func_248(iParam0, iVar11, Global_1975258[iVar12 /*68*/].f_46[iVar11], Global_1975258[iVar12 /*68*/].f_46.f_5[iVar11], Global_1975258[iVar12 /*68*/].f_46.f_10[iVar11]);
}}}
func_281(iParam0, Global_4980736.f_84919[bParam1 /*499*/].f_405, -1);
}


void func_248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(iParam1 > 3 || iParam1 < 0){
return;
}
switch (iParam3){
case 1:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
break;
case 2:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
break;
case 3:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
break;
case 4:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 32, 32);
break;
case 5:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
break;
case 6:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 137, 137);
break;
case 7:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 136, 136);
break;
case 8:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 135, 135);
break;
case 9:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 38, 38);
break;
case 10:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 90, 90);
break;
case 11:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
break;
case 12:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 91, 91);
break;
case 13:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 49, 49);
break;
case 14:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 53, 53);
break;
case 15:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
break;
case 16:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 63, 63);
break;
case 17:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 70, 70);
break;
case 18:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
break;
case 19:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
break;
case 20:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 104, 104);
break;
case 21:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 99, 99);
break;
case 22:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 142, 142);
break;
case 23:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 145, 145);
break;
case 24:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 107, 107);
break;
case 25:
VEHICLE::SET_VEHICLE_COLOURS(iParam0, 111, 111);
break;
}
if(iParam2 >=1){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
}
if(iParam2 >=2){
VEHICLE::SET_VEHICLE_MOD(iParam0, 12, 2, false);
VEHICLE::SET_VEHICLE_MOD(iParam0, 13, 2, false);
VEHICLE::SET_VEHICLE_MOD(iParam0, 11, 3, false);
}
if(iParam2 >=3){
VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 18, true);
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, func_249(iParam0, 16), false);
}
if(iParam4 > 0){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 48);
}}

int func_249(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_250(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_250(int iParam0, int iParam1, int iParam2){
if(!func_251() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_251(){
return 0;
}


bool func_252(){
return Global_2683864.f_21;
}

int func_253(int iParam0){
switch (iParam0){
case 0:
return joaat("player");
case 1:
return joaat("CIVMALE");
case 2:
return joaat("CIVFEMALE");
case 3:
return joaat("COP");
case 4:
return -2065892691;
case 5:
return -1865950624;
case 6:
return 296331235;
case 7:
return 1166638144;
case 8:
return joaat("army");
case 9:
return -183807561;
case 10:
return 2037579709;
case 11:
return 2017343592;
case 12:
return -1821475077;
case 13:
return 1782292358;
case 14:
return -1033021910;
case 15:
return -1285976420;
case 16:
return -347613984;
case 17:
return joaat("NO_RELATIONSHIP");
case 18:
return joaat("shark");
case 19:
return -1467815081;
case 20:
return joaat("cat");
default:
}
return joaat("NO_RELATIONSHIP");
}

int func_254(int iParam0){
switch (iParam0){
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
return 1;
default:
}
return 0;
}

int func_255(int iParam0){
if(iParam0 < 0 || iParam0 >=4){
return 0;
}
return MISC::IS_BIT_SET(Global_2684801.f_3881, iParam0);
}


void func_256(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)){
VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0);
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 0, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 1, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 2, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 2, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 3, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 3, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 4, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 5, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 6, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 6, 1, 1148846080);
}
if(!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 7, 0)){
VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 7, 1, 1148846080);
}}}


void func_257(bool bParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(Global_4980736.f_84919[bParam0 /*499*/].f_321 > -1){
switch (Global_4980736.f_84919[bParam0 /*499*/].f_321){
case 0:
func_261(&iVar0, &iVar1, &iVar2, &iVar3);
break;
case 1:
func_260(&iVar0, &iVar1, &iVar2, &iVar3);
break;
case 2:
func_259(&iVar0, &iVar1, &iVar2, &iVar3);
break;
case 3:
func_258(&iVar0, &iVar1, &iVar2, &iVar3);
break;
}
if(iVar0 > -1 && iVar1 > -1){
VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar0, iVar1);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar2, iVar3);
}}}


void func_258(var uParam0, var uParam1, var uParam2, var uParam3){
*uParam0=Global_1058373[12];
if(*uParam0==255){
*uParam0=-1;
}
*uParam1=Global_1058373[13];
if(*uParam1==255){
*uParam1=-1;
}
*uParam2=Global_1058373[14];
if(*uParam2==255){
*uParam2=-1;
}
*uParam3=Global_1058373[15];
if(*uParam3==255){
*uParam3=-1;
}}


void func_259(var uParam0, var uParam1, var uParam2, var uParam3){
*uParam0=Global_1058373[8];
if(*uParam0==255){
*uParam0=-1;
}
*uParam1=Global_1058373[9];
if(*uParam1==255){
*uParam1=-1;
}
*uParam2=Global_1058373[10];
if(*uParam2==255){
*uParam2=-1;
}
*uParam3=Global_1058373[11];
if(*uParam3==255){
*uParam3=-1;
}}


void func_260(var uParam0, var uParam1, var uParam2, var uParam3){
*uParam0=Global_1058373[4];
if(*uParam0==255){
*uParam0=-1;
}
*uParam1=Global_1058373[5];
if(*uParam1==255){
*uParam1=-1;
}
*uParam2=Global_1058373[6];
if(*uParam2==255){
*uParam2=-1;
}
*uParam3=Global_1058373[7];
if(*uParam3==255){
*uParam3=-1;
}}


void func_261(var uParam0, var uParam1, var uParam2, var uParam3){
*uParam0=Global_1058373[0];
if(*uParam0==255){
*uParam0=-1;
}
*uParam1=Global_1058373[1];
if(*uParam1==255){
*uParam1=-1;
}
*uParam2=Global_1058373[2];
if(*uParam2==255){
*uParam2=-1;
}
*uParam3=Global_1058373[3];
if(*uParam3==255){
*uParam3=-1;
}}


void func_262(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RespawnVeh", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "RespawnVeh")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "RespawnVeh");
}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
DECORATOR::DECOR_SET_INT(iParam0, "RespawnVeh", iVar0);
}}}}}

int func_263(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 <=(Global_4718592.f_1200 - 1)){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iVar0 /*23466*/].f_12634, bParam0)){
return 1;
}
iVar1=0;
while (iVar1 <=(Global_4718592.f_1265[iVar0 /*23466*/].f_59 - 1)){
if(Global_4718592.f_1265[iVar0 /*23466*/].f_12616[iVar1]==bParam0){
return 1;
}
iVar1++;
}
iVar0++;
}
return 0;
}

int func_264(int iParam0){
if((((((((((((((((((((((((((((((((((((((((((((((iParam0==joaat("tampa3") || iParam0==joaat("dune3")) || iParam0==joaat("halftrack")) || iParam0==joaat("insurgent3")) || iParam0==joaat("technical3")) || iParam0==joaat("apc")) || iParam0==joaat("oppressor")) || iParam0==joaat("trailersmall2")) || iParam0==joaat("trailerlarge")) || iParam0==joaat("microlight")) || iParam0==joaat("havok")) || iParam0==joaat("seabreeze")) || iParam0==joaat("starling")) || iParam0==joaat("pyro")) || iParam0==joaat("mogul")) || iParam0==joaat("rogue")) || iParam0==joaat("nokota")) || iParam0==joaat("hunter")) || iParam0==joaat("tula")) || iParam0==joaat("bombushka")) || iParam0==joaat("alphaz1")) || iParam0==joaat("howard")) || iParam0==joaat("barrage")) || iParam0==joaat("deluxo")) || iParam0==joaat("khanjali")) || iParam0==joaat("volatol")) || iParam0==joaat("riot2")) || iParam0==joaat("thruster")) || iParam0==joaat("cuban800")) || iParam0==joaat("molotok")) || iParam0==joaat("akula")) || iParam0==joaat("avenger")) || iParam0==joaat("savestra")) || iParam0==joaat("comet4")) || iParam0==joaat("revolter")) || iParam0==joaat("viseris")) || iParam0==joaat("menacer")) || iParam0==joaat("oppressor2")) || iParam0==joaat("strikeforce")) || iParam0==joaat("speedo4")) || iParam0==joaat("mule4")) || iParam0==joaat("pounder2")) || iParam0==joaat("seasparrow")) || iParam0==joaat("jb7002")) || iParam0==joaat("minitank")) || iParam0==joaat("annihilator2")) || iParam0==joaat("alkonost")){
return 1;
}
return 0;
}


void func_265(int iParam0, int iParam1, bool bParam2, bool bParam3){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
if((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && ((VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("flatbed")) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("tr2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("wastelander")))){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var2);
Var3={
Var2 - Var1 
};
if(VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("wastelander"))){
Var0.f_1=-1.75f;
}else{
Var0.f_1=-2.75f;
}
if(Var3.f_1 > 4f){
Var0.f_1=(Var0.f_1 - (2f - (Var3.f_1 / 2f)));
}
if(VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("tr2"))){
Var0.f_2=(Var3.f_2 - 0.45f);
}elseif(VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("wastelander"))){
if(VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("ruiner3"))){
Var0.f_2=1.4f;
}else{
Var0.f_2=1.63f;
}}else{
Var0.f_2=(Var3.f_2 - 0.58f);
}
if(bParam3){
VEHICLE::SET_DISABLE_SUPERDUMMY(iParam0, 1);
VEHICLE::SET_DISABLE_SUPERDUMMY(iParam1, 1);
}
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Var0), 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(iParam0, ENTITY::GET_ENTITY_HEADING(iParam1));
if(bParam2){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var0, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1, 0);
}}}


void func_266(int iParam0, int iParam1, bool bParam2){
var uVar0;
var uVar1;
struct<3> Var2;
if((VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)) && func_267(iParam1)){
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &uVar0, &uVar1);
Var2.f_2=(Var2.f_2 + 6f);
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Var2), 0, 0, 1);
if(bParam2){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, Var2, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1, 0);
}}}

int func_267(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(((((((((func_268(iVar0, 0) || func_268(iVar0, 1)) || func_268(iVar0, 2)) || func_268(iVar0, 3)) || func_268(iVar0, 4)) || func_268(iVar0, 5)) || func_268(iVar0, 6)) || func_268(iVar0, 7)) || func_268(iVar0, 8)) || func_268(iVar0, 12)){
return 1;
}
return 0;
}

int func_268(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 <=func_271(iParam1)){
if(iParam0==func_269(iParam1, iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_269(int iParam0, int iParam1){
int iVar0;
iVar0=0;
switch (iParam0){
case 0:
switch (iParam1){
case 0:
iVar0=joaat("dilettante");
break;
case 1:
iVar0=joaat("issi2");
break;
case 2:
iVar0=joaat("rhapsody");
break;
case 3:
iVar0=joaat("panto");
break;
case 4:
iVar0=joaat("brioso");
break;
case 5:
iVar0=joaat("issi3");
break;
case 6:
iVar0=joaat("prairie");
break;
case 7:
iVar0=joaat("kanjo");
break;
case 8:
iVar0=joaat("asbo");
break;
case 9:
iVar0=joaat("club");
break;
case 10:
iVar0=joaat("brioso2");
break;
case 11:
iVar0=joaat("weevil");
break;
case 12:
iVar0=joaat("brioso3");
break;
}
break;
case 1:
switch (iParam1){
case 0:
iVar0=joaat("felon2");
break;
case 1:
iVar0=joaat("jackal");
break;
case 2:
iVar0=joaat("zion");
break;
case 3:
iVar0=joaat("oracle");
break;
case 4:
iVar0=joaat("windsor");
break;
case 5:
iVar0=joaat("windsor2");
break;
case 6:
iVar0=joaat("previon");
break;
case 7:
iVar0=joaat("f620");
break;
case 8:
iVar0=joaat("kanjosj");
break;
case 9:
iVar0=joaat("postlude");
break;
}
break;
case 2:
switch (iParam1){
case 0:
iVar0=joaat("emperor");
break;
case 1:
iVar0=joaat("emperor2");
break;
case 2:
iVar0=joaat("emperor3");
break;
case 3:
iVar0=joaat("fugitive");
break;
case 4:
iVar0=joaat("regina");
break;
case 5:
iVar0=joaat("superd");
break;
case 6:
iVar0=joaat("schafter2");
break;
case 7:
iVar0=joaat("glendale");
break;
case 8:
iVar0=joaat("warrener");
break;
case 9:
iVar0=joaat("asea");
break;
case 10:
iVar0=joaat("futo");
break;
case 11:
iVar0=joaat("surge");
break;
case 12:
iVar0=joaat("primo");
break;
case 13:
iVar0=joaat("primo2");
break;
case 14:
iVar0=joaat("schafter3");
break;
case 15:
iVar0=joaat("schafter4");
break;
case 16:
iVar0=joaat("schafter5");
break;
case 17:
iVar0=joaat("schafter6");
break;
case 18:
iVar0=joaat("cog55");
break;
case 19:
iVar0=joaat("cog552");
break;
case 20:
iVar0=joaat("cognoscenti");
break;
case 21:
iVar0=joaat("cognoscenti2");
break;
case 22:
iVar0=joaat("limo2");
break;
case 23:
iVar0=joaat("stafford");
break;
case 24:
iVar0=joaat("asterope");
break;
case 25:
iVar0=joaat("glendale2");
break;
case 26:
iVar0=joaat("warrener2");
break;
case 27:
iVar0=joaat("tailgater2");
break;
case 28:
iVar0=joaat("deity");
break;
case 29:
iVar0=joaat("cinquemila");
break;
case 30:
iVar0=joaat("rhinehart");
break;
}
break;
case 3:
switch (iParam1){
case 0:
iVar0=joaat("dominator");
break;
case 1:
iVar0=joaat("gauntlet");
break;
case 2:
iVar0=joaat("phoenix");
break;
case 3:
iVar0=joaat("blade");
break;
case 4:
iVar0=joaat("ratloader2");
break;
case 5:
iVar0=joaat("slamvan");
break;
case 6:
iVar0=joaat("slamvan2");
break;
case 7:
iVar0=joaat("buccaneer");
break;
case 8:
iVar0=joaat("voodoo2");
break;
case 9:
iVar0=joaat("picador");
break;
case 10:
iVar0=joaat("virgo");
break;
case 11:
iVar0=joaat("coquette3");
break;
case 12:
iVar0=joaat("chino");
break;
case 13:
iVar0=joaat("faction");
break;
case 14:
iVar0=joaat("faction2");
break;
case 15:
iVar0=joaat("moonbeam2");
break;
case 16:
iVar0=joaat("chino2");
break;
case 17:
iVar0=joaat("voodoo");
break;
case 18:
iVar0=joaat("buccaneer2");
break;
case 19:
iVar0=joaat("dukes2");
break;
case 20:
iVar0=joaat("moonbeam");
break;
case 21:
iVar0=joaat("lurcher");
break;
case 22:
iVar0=joaat("nightshade");
break;
case 23:
iVar0=joaat("faction3");
break;
case 24:
iVar0=joaat("slamvan3");
break;
case 25:
iVar0=joaat("virgo3");
break;
case 26:
iVar0=joaat("virgo2");
break;
case 27:
iVar0=joaat("sabregt2");
break;
case 28:
iVar0=joaat("dominator2");
break;
case 29:
iVar0=joaat("gauntlet2");
break;
case 30:
iVar0=joaat("ruiner2");
break;
case 31:
iVar0=joaat("ruiner3");
break;
case 32:
iVar0=joaat("dukes");
break;
case 33:
iVar0=joaat("stalion");
break;
case 34:
iVar0=joaat("stalion2");
break;
case 35:
iVar0=joaat("hotknife");
break;
case 36:
iVar0=joaat("tampa3");
break;
case 37:
iVar0=joaat("yosemite");
break;
case 38:
iVar0=joaat("hermes");
break;
case 39:
iVar0=joaat("hustler");
break;
case 40:
iVar0=joaat("ellie");
break;
case 41:
iVar0=joaat("dominator3");
break;
case 42:
iVar0=joaat("ruiner");
break;
case 43:
iVar0=joaat("clique");
break;
case 44:
iVar0=joaat("impaler");
break;
case 45:
iVar0=joaat("deviant");
break;
case 46:
iVar0=joaat("tulip");
break;
case 47:
iVar0=joaat("vamos");
break;
case 48:
iVar0=joaat("gauntlet3");
break;
case 49:
iVar0=joaat("gauntlet4");
break;
case 50:
iVar0=joaat("peyote2");
break;
case 51:
iVar0=joaat("yosemite2");
break;
case 52:
iVar0=joaat("dukes3");
break;
case 53:
iVar0=joaat("gauntlet5");
break;
case 54:
iVar0=joaat("manana2");
break;
case 55:
iVar0=joaat("dominator7");
break;
case 56:
iVar0=joaat("dominator8");
break;
case 58:
iVar0=joaat("buffalo4");
break;
case 59:
iVar0=joaat("weevil2");
break;
case 60:
iVar0=joaat("vigero2");
break;
case 61:
iVar0=joaat("ruiner4");
break;
case 62:
iVar0=joaat("greenwood");
break;
case 63:
iVar0=joaat("eudora");
break;
case 64:
iVar0=joaat("tulip2");
break;
case 65:
iVar0=joaat("tahoma");
break;
case 66:
iVar0=joaat("broadway");
break;
}
break;
case 4:
switch (iParam1){
case 0:
iVar0=joaat("banshee");
break;
case 1:
iVar0=joaat("coquette");
break;
case 2:
iVar0=joaat("ninef2");
break;
case 3:
iVar0=joaat("alpha");
break;
case 4:
iVar0=joaat("jester");
break;
case 5:
iVar0=joaat("massacro");
break;
case 6:
iVar0=joaat("furoregt");
break;
case 7:
iVar0=joaat("jester2");
break;
case 8:
iVar0=joaat("massacro2");
break;
case 9:
iVar0=joaat("kuruma");
break;
case 10:
iVar0=joaat("kuruma2");
break;
case 11:
iVar0=joaat("verlierer2");
break;
case 12:
iVar0=joaat("sultan");
break;
case 13:
iVar0=joaat("bestiagts");
break;
case 14:
iVar0=joaat("seven70");
break;
case 15:
iVar0=joaat("omnis");
break;
case 16:
iVar0=joaat("tropos");
break;
case 17:
iVar0=joaat("lynx");
break;
case 18:
iVar0=joaat("tampa2");
break;
case 19:
iVar0=joaat("buffalo3");
break;
case 20:
iVar0=joaat("raptor");
break;
case 21:
iVar0=joaat("elegy2");
break;
case 22:
iVar0=joaat("elegy");
break;
case 23:
iVar0=joaat("comet3");
break;
case 24:
iVar0=joaat("specter");
break;
case 25:
iVar0=joaat("specter2");
break;
case 26:
iVar0=joaat("ruston");
break;
case 27:
iVar0=joaat("khamelion");
break;
case 28:
iVar0=joaat("streiter");
break;
case 29:
iVar0=joaat("neon");
break;
case 30:
iVar0=joaat("pariah");
break;
case 31:
iVar0=joaat("revolter");
break;
case 32:
iVar0=joaat("sentinel3");
break;
case 33:
iVar0=joaat("comet5");
break;
case 34:
iVar0=joaat("raiden");
break;
case 35:
iVar0=joaat("flashgt");
break;
case 36:
iVar0=joaat("gb200");
break;
case 37:
iVar0=joaat("hotring");
break;
case 38:
iVar0=joaat("comet4");
break;
case 39:
iVar0=joaat("schlagen");
break;
case 40:
iVar0=joaat("italigto");
break;
case 41:
iVar0=joaat("drafter");
break;
case 42:
iVar0=joaat("issi7");
break;
case 43:
iVar0=joaat("neo");
break;
case 44:
iVar0=joaat("locust");
break;
case 45:
iVar0=joaat("jugular");
break;
case 46:
iVar0=joaat("paragon");
break;
case 47:
iVar0=joaat("schwarzer");
break;
case 48:
iVar0=joaat("imorgon");
break;
case 49:
iVar0=joaat("sugoi");
break;
case 50:
iVar0=joaat("vstr");
break;
case 51:
iVar0=joaat("komoda");
break;
case 52:
iVar0=joaat("sultan2");
break;
case 53:
iVar0=joaat("penumbra2");
break;
case 54:
iVar0=joaat("coquette4");
break;
case 55:
iVar0=joaat("italirsx");
break;
case 56:
iVar0=joaat("calico");
break;
case 57:
iVar0=joaat("jester4");
break;
case 58:
iVar0=joaat("zr350");
break;
case 59:
iVar0=joaat("remus");
break;
case 60:
iVar0=joaat("vectre");
break;
case 61:
iVar0=joaat("cypher");
break;
case 62:
iVar0=joaat("comet6");
break;
case 63:
iVar0=joaat("rt3000");
break;
case 64:
iVar0=joaat("sultan3");
break;
case 65:
iVar0=joaat("futo2");
break;
case 66:
iVar0=joaat("euros");
break;
case 67:
iVar0=joaat("growler");
break;
case 69:
iVar0=joaat("comet7");
break;
case 70:
iVar0=joaat("paragon2");
break;
case 71:
iVar0=joaat("corsita");
break;
case 72:
iVar0=joaat("tenf");
break;
case 73:
iVar0=joaat("tenf2");
break;
case 74:
iVar0=joaat("sm722");
break;
case 75:
iVar0=joaat("sentinel4");
break;
case 76:
iVar0=joaat("omnisegt");
break;
case 77:
iVar0=joaat("panthere");
break;
case 78:
iVar0=joaat("everon2");
break;
case 79:
iVar0=joaat("r300");
break;
}
break;
case 5:
switch (iParam1){
case 0:
iVar0=joaat("manana");
break;
case 1:
iVar0=joaat("stingergt");
break;
case 2:
iVar0=joaat("tornado2");
break;
case 3:
iVar0=joaat("btype");
break;
case 4:
iVar0=joaat("pigalle");
break;
case 5:
iVar0=joaat("coquette2");
break;
case 6:
iVar0=joaat("casco");
break;
case 7:
iVar0=joaat("peyote");
break;
case 8:
iVar0=joaat("tornado");
break;
case 9:
iVar0=joaat("feltzer3");
break;
case 10:
iVar0=joaat("mamba");
break;
case 11:
iVar0=joaat("tornado5");
break;
case 12:
iVar0=joaat("tornado6");
break;
case 13:
iVar0=joaat("infernus2");
break;
case 14:
iVar0=joaat("turismo2");
break;
case 15:
iVar0=joaat("cheetah2");
break;
case 16:
iVar0=joaat("ardent");
break;
case 17:
iVar0=joaat("torero");
break;
case 18:
iVar0=joaat("retinue");
break;
case 19:
iVar0=joaat("rapidgt3");
break;
case 20:
iVar0=joaat("savestra");
break;
case 21:
iVar0=joaat("viseris");
break;
case 22:
iVar0=joaat("stromberg");
break;
case 23:
iVar0=joaat("gt500");
break;
case 24:
iVar0=joaat("z190");
break;
case 25:
iVar0=joaat("fagaloa");
break;
case 26:
iVar0=joaat("michelli");
break;
case 27:
iVar0=joaat("deluxo");
break;
case 28:
iVar0=joaat("cheburek");
break;
case 29:
iVar0=joaat("jester3");
break;
case 30:
iVar0=joaat("swinger");
break;
case 31:
iVar0=joaat("zion3");
break;
case 32:
iVar0=joaat("dynasty");
break;
case 33:
iVar0=joaat("nebula");
break;
case 34:
iVar0=joaat("retinue2");
break;
case 35:
iVar0=joaat("btype2");
break;
case 36:
iVar0=joaat("peyote3");
break;
case 37:
iVar0=joaat("toreador");
break;
case 38:
iVar0=joaat("jb7002");
break;
}
break;
case 6:
switch (iParam1){
case 0:
iVar0=joaat("cheetah");
break;
case 1:
iVar0=joaat("entityxf");
break;
case 2:
iVar0=joaat("voltic");
break;
case 3:
iVar0=joaat("turismor");
break;
case 4:
iVar0=joaat("zentorno");
break;
case 5:
iVar0=joaat("osiris");
break;
case 6:
iVar0=joaat("t20");
break;
case 7:
iVar0=joaat("banshee2");
break;
case 8:
iVar0=joaat("sultanrs");
break;
case 9:
iVar0=joaat("reaper");
break;
case 10:
iVar0=joaat("fmj");
break;
case 11:
iVar0=joaat("prototipo");
break;
case 12:
iVar0=joaat("pfister811");
break;
case 13:
iVar0=joaat("le7b");
break;
case 14:
iVar0=joaat("tyrus");
break;
case 15:
iVar0=joaat("sheava");
break;
case 16:
iVar0=joaat("tempesta");
break;
case 17:
iVar0=joaat("nero");
break;
case 18:
iVar0=joaat("nero2");
break;
case 19:
iVar0=joaat("penetrator");
break;
case 20:
iVar0=joaat("voltic2");
break;
case 21:
iVar0=joaat("italigtb");
break;
case 22:
iVar0=joaat("italigtb2");
break;
case 23:
iVar0=joaat("gp1");
break;
case 24:
iVar0=joaat("vagner");
break;
case 25:
iVar0=joaat("xa21");
break;
case 26:
iVar0=joaat("visione");
break;
case 27:
iVar0=joaat("vigilante");
break;
case 28:
iVar0=joaat("cyclone");
break;
case 29:
iVar0=joaat("sc1");
break;
case 30:
iVar0=joaat("autarch");
break;
case 31:
iVar0=joaat("tezeract");
break;
case 32:
iVar0=joaat("taipan");
break;
case 33:
iVar0=joaat("entity2");
break;
case 34:
iVar0=joaat("tyrant");
break;
case 35:
iVar0=joaat("deveste");
break;
case 36:
iVar0=joaat("thrax");
break;
case 37:
iVar0=joaat("zorrusso");
break;
case 38:
iVar0=joaat("krieger");
break;
case 39:
iVar0=joaat("emerus");
break;
case 40:
iVar0=joaat("s80");
break;
case 41:
iVar0=joaat("furia");
break;
case 42:
iVar0=joaat("tigon");
break;
case 43:
iVar0=joaat("ignus");
break;
case 46:
iVar0=joaat("zeno");
break;
case 47:
iVar0=joaat("champion");
break;
case 48:
iVar0=joaat("lm87");
break;
case 49:
iVar0=joaat("torero2");
break;
case 50:
iVar0=joaat("entity3");
break;
case 51:
iVar0=joaat("virtue");
break;
}
break;
case 7:
switch (iParam1){
case 0:
iVar0=joaat("baller");
break;
case 1:
iVar0=joaat("baller2");
break;
case 2:
iVar0=joaat("bjxl");
break;
case 3:
iVar0=joaat("cavalcade2");
break;
case 4:
iVar0=joaat("granger");
break;
case 5:
iVar0=joaat("patriot");
break;
case 6:
iVar0=joaat("huntley");
break;
case 7:
iVar0=joaat("dubsta3");
break;
case 8:
iVar0=joaat("gresley");
break;
case 9:
iVar0=joaat("landstalker");
break;
case 10:
iVar0=joaat("seminole");
break;
case 11:
iVar0=joaat("mesa");
break;
case 12:
iVar0=joaat("crusader");
break;
case 13:
iVar0=joaat("radi");
break;
case 14:
iVar0=joaat("baller3");
break;
case 15:
iVar0=joaat("baller4");
break;
case 16:
iVar0=joaat("baller5");
break;
case 17:
iVar0=joaat("baller6");
break;
case 18:
iVar0=joaat("xls");
break;
case 19:
iVar0=joaat("xls2");
break;
case 20:
iVar0=joaat("contender");
break;
case 21:
iVar0=joaat("patriot2");
break;
case 22:
iVar0=joaat("serrano");
break;
case 23:
iVar0=joaat("fq2");
break;
case 24:
iVar0=joaat("habanero");
break;
case 25:
iVar0=joaat("toros");
break;
case 26:
iVar0=joaat("novak");
break;
case 27:
iVar0=joaat("rebla");
break;
case 28:
iVar0=joaat("landstalker2");
break;
case 29:
iVar0=joaat("seminole2");
break;
case 30:
iVar0=joaat("squaddie");
break;
case 31:
iVar0=joaat("granger2");
break;
case 32:
iVar0=joaat("astron");
break;
case 34:
iVar0=joaat("baller7");
break;
case 35:
iVar0=joaat("jubilee");
break;
case 36:
iVar0=joaat("iwagen");
break;
case 37:
iVar0=joaat("issi8");
break;
}
break;
case 8:
switch (iParam1){
case 0:
iVar0=joaat("blazer");
break;
case 1:
iVar0=joaat("bodhi2");
break;
case 2:
iVar0=joaat("dune");
break;
case 3:
iVar0=joaat("bfinjection");
break;
case 4:
iVar0=joaat("mesa3");
break;
case 5:
iVar0=joaat("rebel");
break;
case 6:
iVar0=joaat("sadler");
break;
case 7:
iVar0=joaat("ratloader");
break;
case 8:
iVar0=joaat("sandking");
break;
case 9:
iVar0=joaat("bifta");
break;
case 10:
iVar0=joaat("kalahari");
break;
case 11:
iVar0=joaat("monster");
break;
case 12:
iVar0=joaat("technical");
break;
case 13:
iVar0=joaat("brawler");
break;
case 14:
iVar0=joaat("marshall");
break;
case 15:
iVar0=joaat("trophytruck");
break;
case 16:
iVar0=joaat("trophytruck2");
break;
case 17:
iVar0=joaat("rallytruck");
break;
case 18:
iVar0=joaat("blazer4");
break;
case 19:
iVar0=joaat("dune4");
break;
case 20:
iVar0=joaat("dune5");
break;
case 21:
iVar0=joaat("technical2");
break;
case 22:
iVar0=joaat("blazer5");
break;
case 23:
iVar0=joaat("dune3");
break;
case 24:
iVar0=joaat("insurgent3");
break;
case 25:
iVar0=joaat("technical3");
break;
case 26:
iVar0=joaat("nightshark");
break;
case 27:
iVar0=joaat("riata");
break;
case 28:
iVar0=joaat("kamacho");
break;
case 29:
iVar0=joaat("caracara");
break;
case 30:
iVar0=joaat("freecrawler");
break;
case 31:
iVar0=joaat("menacer");
break;
case 32:
iVar0=joaat("patriot");
break;
case 33:
iVar0=joaat("hellion");
break;
case 34:
iVar0=joaat("caracara2");
break;
case 35:
iVar0=joaat("rancherxl");
break;
case 36:
iVar0=joaat("outlaw");
break;
case 37:
iVar0=joaat("everon");
break;
case 38:
iVar0=joaat("zhaba");
break;
case 39:
iVar0=joaat("vagrant");
break;
case 40:
iVar0=joaat("yosemite3");
break;
case 41:
iVar0=joaat("rebel2");
break;
case 42:
iVar0=joaat("dloader");
break;
case 43:
iVar0=joaat("winky");
break;
case 44:
iVar0=joaat("verus");
break;
case 45:
iVar0=joaat("manchez2");
break;
case 46:
iVar0=joaat("patriot3");
break;
case 47:
iVar0=joaat("draugur");
break;
case 48:
iVar0=joaat("boor");
break;
}
break;
case 9:
switch (iParam1){
case 0:
iVar0=joaat("bati");
break;
case 1:
iVar0=joaat("daemon");
break;
case 2:
iVar0=joaat("faggio2");
break;
case 3:
iVar0=joaat("hexer");
break;
case 4:
iVar0=joaat("nemesis");
break;
case 5:
iVar0=joaat("sanchez");
break;
case 6:
iVar0=joaat("vader");
break;
case 7:
iVar0=joaat("thrust");
break;
case 8:
iVar0=joaat("sovereign");
break;
case 9:
iVar0=joaat("enduro");
break;
case 10:
iVar0=joaat("innovation");
break;
case 11:
iVar0=joaat("hakuchou");
break;
case 12:
iVar0=joaat("lectro");
break;
case 13:
iVar0=joaat("vindicator");
break;
case 14:
iVar0=joaat("akuma");
break;
case 15:
iVar0=joaat("bf400");
break;
case 16:
iVar0=joaat("gargoyle");
break;
case 17:
iVar0=joaat("cliffhanger");
break;
case 18:
iVar0=joaat("hakuchou2");
break;
case 19:
iVar0=joaat("defiler");
break;
case 20:
iVar0=joaat("chimera");
break;
case 21:
iVar0=joaat("zombieb");
break;
case 22:
iVar0=joaat("avarus");
break;
case 23:
iVar0=joaat("nightblade");
break;
case 24:
iVar0=joaat("zombiea");
break;
case 25:
iVar0=joaat("wolfsbane");
break;
case 26:
iVar0=joaat("manchez");
break;
case 27:
iVar0=joaat("ratbike");
break;
case 28:
iVar0=joaat("bagger");
break;
case 29:
iVar0=joaat("faggio3");
break;
case 30:
iVar0=joaat("faggio");
break;
case 31:
iVar0=joaat("daemon2");
break;
case 32:
iVar0=joaat("vortex");
break;
case 33:
iVar0=joaat("shotaro");
break;
case 34:
iVar0=joaat("esskey");
break;
case 35:
iVar0=joaat("diablous");
break;
case 36:
iVar0=joaat("diablous2");
break;
case 37:
iVar0=joaat("fcr");
break;
case 38:
iVar0=joaat("fcr2");
break;
case 39:
iVar0=joaat("oppressor");
break;
case 40:
iVar0=joaat("sanctus");
break;
case 41:
iVar0=joaat("rrocket");
break;
case 42:
iVar0=joaat("stryder");
break;
case 43:
iVar0=joaat("manchez2");
break;
case 45:
iVar0=joaat("shinobi");
break;
case 46:
iVar0=joaat("reever");
break;
case 47:
iVar0=joaat("powersurge");
break;
}
break;
case 10:
switch (iParam1){
case 0:
iVar0=joaat("bmx");
break;
case 1:
iVar0=joaat("cruiser");
break;
case 2:
iVar0=joaat("tribike");
break;
case 3:
iVar0=joaat("scorcher");
break;
}
break;
case 11:
switch (iParam1){
case 0:
iVar0=joaat("rhino");
break;
case 1:
iVar0=joaat("barracks");
break;
case 2:
iVar0=joaat("barracks2");
break;
case 3:
iVar0=joaat("barracks3");
break;
case 4:
iVar0=joaat("armytanker");
break;
case 5:
iVar0=joaat("cargobob");
break;
case 6:
iVar0=joaat("titan");
break;
case 7:
iVar0=joaat("insurgent");
break;
case 8:
iVar0=joaat("insurgent2");
break;
case 9:
iVar0=joaat("apc");
break;
case 10:
iVar0=joaat("halftrack");
break;
case 11:
iVar0=joaat("chernobog");
break;
case 12:
iVar0=joaat("khanjali");
break;
case 13:
iVar0=joaat("thruster");
break;
case 14:
iVar0=joaat("barrage");
break;
case 15:
iVar0=joaat("winky");
break;
case 16:
iVar0=joaat("squaddie");
break;
case 17:
iVar0=joaat("verus");
break;
case 18:
iVar0=joaat("vetir");
break;
case 19:
iVar0=joaat("crusader");
break;
}
break;
case 12:
switch (iParam1){
case 0:
iVar0=joaat("police3");
break;
case 1:
iVar0=joaat("policeb");
break;
case 2:
iVar0=joaat("riot");
break;
case 3:
iVar0=joaat("fbi");
break;
case 4:
iVar0=joaat("fbi2");
break;
case 5:
iVar0=joaat("pbus");
break;
case 6:
iVar0=joaat("annihilator");
break;
case 7:
iVar0=joaat("buzzard");
break;
case 8:
iVar0=joaat("polmav");
break;
case 9:
iVar0=joaat("predator");
break;
case 10:
iVar0=joaat("sheriff2");
break;
case 11:
iVar0=joaat("riot2");
break;
case 12:
iVar0=joaat("policet");
break;
case 13:
iVar0=joaat("sheriff");
break;
case 14:
iVar0=joaat("police4");
break;
}
break;
case 13:
switch (iParam1){
case 0:
iVar0=joaat("ambulance");
break;
case 1:
iVar0=joaat("bus");
break;
case 2:
iVar0=joaat("coach");
break;
case 3:
iVar0=joaat("firetruk");
break;
case 4:
iVar0=joaat("romero");
break;
case 5:
iVar0=joaat("stretch");
break;
case 6:
iVar0=joaat("taxi");
break;
case 7:
iVar0=joaat("trash");
break;
case 8:
iVar0=joaat("trash2");
break;
case 9:
iVar0=joaat("dilettante2");
break;
case 10:
iVar0=joaat("brickade");
break;
case 11:
iVar0=joaat("wastelander");
break;
case 12:
iVar0=joaat("airbus");
break;
case 13:
iVar0=joaat("rentalbus");
break;
case 14:
iVar0=joaat("brickade2");
break;
}
break;
case 14:
switch (iParam1){
case 0:
iVar0=joaat("bulldozer");
break;
case 1:
iVar0=joaat("dump");
break;
case 2:
iVar0=joaat("handler");
break;
case 3:
iVar0=joaat("mixer");
break;
case 4:
iVar0=joaat("tiptruck");
break;
case 5:
iVar0=joaat("rubble");
break;
case 6:
iVar0=joaat("guardian");
break;
case 7:
iVar0=joaat("mixer2");
break;
}
break;
case 15:
switch (iParam1){
case 0:
iVar0=joaat("airtug");
break;
case 1:
iVar0=joaat("caddy");
break;
case 2:
iVar0=joaat("mower");
break;
case 3:
iVar0=joaat("tractor2");
break;
case 4:
iVar0=joaat("scrap");
break;
case 5:
iVar0=joaat("ripley");
break;
case 6:
iVar0=joaat("forklift");
break;
case 7:
iVar0=joaat("caddy3");
break;
case 8:
iVar0=joaat("slamtruck");
break;
}
break;
case 16:
switch (iParam1){
case 0:
iVar0=joaat("bison");
break;
case 1:
iVar0=joaat("benson");
break;
case 2:
iVar0=joaat("boxville2");
break;
case 3:
iVar0=joaat("boxville3");
break;
case 4:
iVar0=joaat("boxville4");
break;
case 5:
iVar0=joaat("gburrito");
break;
case 6:
iVar0=joaat("minivan");
break;
case 7:
iVar0=joaat("mule");
break;
case 8:
iVar0=joaat("mule3");
break;
case 9:
iVar0=joaat("speedo");
break;
case 10:
iVar0=joaat("stockade");
break;
case 11:
iVar0=joaat("taco");
break;
case 12:
iVar0=joaat("camper");
break;
case 13:
iVar0=joaat("journey");
break;
case 14:
iVar0=joaat("surfer");
break;
case 15:
iVar0=joaat("paradise");
break;
case 16:
iVar0=joaat("gburrito2");
break;
case 17:
iVar0=joaat("rumpo");
break;
case 18:
iVar0=joaat("minivan2");
break;
case 19:
iVar0=joaat("rumpo3");
break;
case 20:
iVar0=joaat("youga2");
break;
case 21:
iVar0=joaat("boxville5");
break;
case 22:
iVar0=joaat("mule4");
break;
case 23:
iVar0=joaat("speedo4");
break;
case 24:
iVar0=joaat("bison3");
break;
case 25:
iVar0=joaat("boxville");
break;
case 26:
iVar0=joaat("burrito");
break;
case 27:
iVar0=joaat("burrito2");
break;
case 28:
iVar0=joaat("pony");
break;
case 29:
iVar0=joaat("youga3");
break;
case 30:
iVar0=joaat("youga4");
break;
case 31:
iVar0=joaat("mule5");
break;
case 32:
iVar0=joaat("speedo2");
break;
case 33:
iVar0=joaat("journey2");
break;
case 34:
iVar0=joaat("surfer3");
break;
}
break;
case 17:
switch (iParam1){
case 0:
iVar0=joaat("hauler");
break;
case 1:
iVar0=joaat("flatbed");
break;
case 2:
iVar0=joaat("packer");
break;
case 3:
iVar0=joaat("phantom");
break;
case 4:
iVar0=joaat("tanker");
break;
case 5:
iVar0=joaat("tanker2");
break;
case 6:
iVar0=joaat("trailers");
break;
case 7:
iVar0=joaat("trflat");
break;
case 8:
iVar0=joaat("phantom2");
break;
case 9:
iVar0=joaat("phantom3");
break;
case 10:
iVar0=joaat("hauler2");
break;
case 11:
iVar0=joaat("trailersmall2");
break;
case 12:
iVar0=joaat("trailerlarge");
break;
case 13:
iVar0=joaat("pounder");
break;
case 14:
iVar0=joaat("pounder2");
break;
case 15:
iVar0=joaat("boattrailer");
break;
}
break;
case 18:
switch (iParam1){
case 0:
iVar0=joaat("frogger");
break;
case 1:
iVar0=joaat("maverick");
break;
case 2:
iVar0=joaat("skylift");
break;
case 3:
iVar0=joaat("cargobob2");
break;
case 4:
iVar0=joaat("swift");
break;
case 5:
iVar0=joaat("valkyrie");
break;
case 6:
iVar0=joaat("savage");
break;
case 7:
iVar0=joaat("swift2");
break;
case 8:
iVar0=joaat("supervolito");
break;
case 9:
iVar0=joaat("supervolito2");
break;
case 10:
iVar0=joaat("valkyrie2");
break;
case 11:
iVar0=joaat("volatus");
break;
case 12:
iVar0=joaat("buzzard2");
break;
case 13:
iVar0=joaat("havok");
break;
case 14:
iVar0=joaat("hunter");
break;
case 15:
iVar0=joaat("akula");
break;
case 16:
iVar0=joaat("avenger");
break;
case 17:
iVar0=joaat("seasparrow");
break;
case 18:
iVar0=joaat("cargobob4");
break;
case 19:
iVar0=joaat("seasparrow2");
break;
case 20:
iVar0=joaat("annihilator2");
break;
case 21:
iVar0=joaat("conada");
break;
}
break;
case 19:
switch (iParam1){
case 0:
iVar0=joaat("cuban800");
break;
case 1:
iVar0=joaat("duster");
break;
case 2:
iVar0=joaat("mammatus");
break;
case 3:
iVar0=joaat("shamal");
break;
case 4:
iVar0=joaat("stunt");
break;
case 5:
iVar0=joaat("velum");
break;
case 6:
iVar0=joaat("jet");
break;
case 7:
iVar0=joaat("vestra");
break;
case 8:
iVar0=joaat("miljet");
break;
case 9:
iVar0=joaat("velum2");
break;
case 10:
iVar0=joaat("luxor2");
break;
case 11:
iVar0=joaat("nimbus");
break;
case 12:
iVar0=joaat("cargoplane");
break;
case 13:
iVar0=joaat("dodo");
break;
case 14:
iVar0=joaat("microlight");
break;
case 15:
iVar0=joaat("alphaz1");
break;
case 16:
iVar0=joaat("tula");
break;
case 17:
iVar0=joaat("rogue");
break;
case 18:
iVar0=joaat("starling");
break;
case 19:
iVar0=joaat("bombushka");
break;
case 20:
iVar0=joaat("howard");
break;
case 21:
iVar0=joaat("mogul");
break;
case 22:
iVar0=joaat("seabreeze");
break;
case 23:
iVar0=joaat("nokota");
break;
case 24:
iVar0=joaat("volatol");
break;
case 25:
iVar0=joaat("strikeforce");
break;
case 26:
iVar0=joaat("cargoplane2");
break;
}
break;
case 20:
switch (iParam1){
case 0:
iVar0=joaat("lazer");
break;
case 1:
iVar0=joaat("besra");
break;
case 2:
iVar0=joaat("hydra");
break;
case 3:
iVar0=joaat("molotok");
break;
case 4:
iVar0=joaat("pyro");
break;
}
break;
case 21:
switch (iParam1){
case 0:
iVar0=joaat("dinghy");
break;
case 1:
iVar0=joaat("dinghy2");
break;
case 2:
iVar0=joaat("dinghy3");
break;
case 3:
iVar0=joaat("marquis");
break;
case 4:
iVar0=joaat("seashark");
break;
case 5:
iVar0=joaat("submersible");
break;
case 6:
iVar0=joaat("submersible2");
break;
case 7:
iVar0=joaat("suntrap");
break;
case 8:
iVar0=joaat("tropic");
break;
case 9:
iVar0=joaat("speeder");
break;
case 10:
iVar0=joaat("toro");
break;
case 11:
iVar0=joaat("tug");
break;
case 12:
iVar0=joaat("seashark3");
break;
case 13:
iVar0=joaat("kosatka");
break;
case 14:
iVar0=joaat("avisa");
break;
case 15:
iVar0=joaat("longfin");
break;
}
break;
case 22:
switch (iParam1){
case 0:
iVar0=joaat("prop_cs_dildo_01");
break;
case 1:
iVar0=joaat("v_res_d_dildo_b");
break;
}
break;
case 23:
switch (iParam1){
case 0:
iVar0=joaat("blazer5");
break;
case 1:
iVar0=joaat("ruiner2");
break;
case 2:
iVar0=joaat("voltic2");
break;
case 3:
iVar0=joaat("technical2");
break;
case 4:
iVar0=joaat("dune4");
break;
case 5:
iVar0=joaat("dune5");
break;
case 6:
iVar0=joaat("phantom2");
break;
case 7:
iVar0=joaat("boxville5");
break;
case 8:
iVar0=joaat("wastelander");
break;
case 9:
iVar0=joaat("oppressor");
break;
case 10:
iVar0=joaat("vigilante");
break;
case 11:
iVar0=joaat("deluxo");
break;
case 12:
iVar0=joaat("stromberg");
break;
case 13:
iVar0=joaat("thruster");
break;
case 14:
iVar0=joaat("pbus2");
break;
case 15:
iVar0=joaat("oppressor2");
break;
case 16:
iVar0=joaat("terbyte");
break;
case 17:
iVar0=joaat("blimp3");
break;
case 18:
iVar0=joaat("scramjet");
break;
case 19:
iVar0=joaat("rcbandito");
break;
case 20:
iVar0=joaat("toreador");
break;
case 21:
iVar0=joaat("dune2");
break;
}
break;
case 24:
switch (iParam1){
case 0:
iVar0=joaat("tampa3");
break;
case 1:
iVar0=joaat("dune3");
break;
case 2:
iVar0=joaat("halftrack");
break;
case 3:
iVar0=joaat("insurgent3");
break;
case 4:
iVar0=joaat("technical3");
break;
case 5:
iVar0=joaat("apc");
break;
case 6:
iVar0=joaat("oppressor");
break;
case 7:
iVar0=joaat("trailersmall2");
break;
case 8:
iVar0=joaat("thruster");
break;
case 9:
iVar0=joaat("riot2");
break;
case 10:
iVar0=joaat("khanjali");
break;
case 11:
iVar0=joaat("deluxo");
break;
case 12:
iVar0=joaat("barrage");
break;
case 13:
iVar0=joaat("microlight");
break;
case 14:
iVar0=joaat("havok");
break;
case 15:
iVar0=joaat("seabreeze");
break;
case 16:
iVar0=joaat("starling");
break;
case 17:
iVar0=joaat("akula");
break;
case 18:
iVar0=joaat("cuban800");
break;
case 19:
iVar0=joaat("pyro");
break;
case 20:
iVar0=joaat("mogul");
break;
case 21:
iVar0=joaat("rogue");
break;
case 22:
iVar0=joaat("molotok");
break;
case 23:
iVar0=joaat("nokota");
break;
case 24:
iVar0=joaat("hunter");
break;
case 25:
iVar0=joaat("tula");
break;
case 26:
iVar0=joaat("bombushka");
break;
case 27:
iVar0=joaat("volatol");
break;
case 28:
iVar0=joaat("avenger");
break;
case 29:
iVar0=joaat("nightshark");
break;
case 30:
iVar0=joaat("ardent");
break;
case 31:
iVar0=joaat("blazer5");
break;
case 32:
iVar0=joaat("ruiner2");
break;
case 33:
iVar0=joaat("technical2");
break;
case 34:
iVar0=joaat("boxville5");
break;
case 35:
iVar0=joaat("vigilante");
break;
case 36:
iVar0=joaat("stromberg");
break;
case 37:
iVar0=joaat("chernobog");
break;
case 38:
iVar0=joaat("caracara");
break;
case 39:
iVar0=joaat("menacer");
break;
case 40:
iVar0=joaat("oppressor2");
break;
case 41:
iVar0=joaat("strikeforce");
break;
case 42:
iVar0=joaat("scramjet");
break;
case 43:
iVar0=joaat("mule4");
break;
case 44:
iVar0=joaat("pounder2");
break;
case 45:
iVar0=joaat("speedo4");
break;
case 46:
iVar0=joaat("seasparrow");
break;
case 47:
iVar0=joaat("paragon2");
break;
case 48:
iVar0=joaat("jb7002");
break;
case 49:
iVar0=joaat("minitank");
break;
case 50:
iVar0=joaat("annihilator2");
break;
case 51:
iVar0=joaat("alkonost");
break;
case 52:
iVar0=joaat("patrolboat");
break;
case 53:
iVar0=joaat("dinghy5");
break;
case 54:
iVar0=joaat("toreador");
break;
}
break;
case 25:
switch (iParam1){
case 0:
return func_270(joaat("bruiser"));
case 1:
return func_270(joaat("brutus"));
case 2:
return func_270(joaat("cerberus"));
case 3:
return func_270(joaat("deathbike"));
case 4:
return func_270(joaat("dominator4"));
case 5:
return func_270(joaat("impaler2"));
case 6:
if(Global_1665820){
return joaat("imperator");
}
return func_270(joaat("imperator"));
case 7:
return func_270(joaat("issi4"));
case 8:
return func_270(joaat("monster3"));
case 9:
return func_270(joaat("scarab"));
case 10:
return func_270(joaat("slamvan4"));
case 11:
return func_270(joaat("zr380"));
default:
}
break;
case 26:
switch (iParam1){
case 0:
iVar0=joaat("formula");
break;
case 1:
iVar0=joaat("formula2");
break;
case 2:
iVar0=joaat("openwheel1");
break;
case 3:
iVar0=joaat("openwheel2");
break;
}
break;
case 28:
switch (iParam1){
case 0:
iVar0=joaat("veto");
break;
case 1:
iVar0=joaat("veto2");
break;
}
break;
case 29:
switch (iParam1){
case 0:
iVar0=joaat("calico");
break;
case 1:
iVar0=joaat("jester4");
break;
case 2:
iVar0=joaat("zr350");
break;
case 3:
iVar0=joaat("remus");
break;
case 4:
iVar0=joaat("vectre");
break;
case 5:
iVar0=joaat("cypher");
break;
case 6:
iVar0=joaat("dominator7");
break;
case 7:
iVar0=joaat("comet6");
break;
case 8:
iVar0=joaat("warrener2");
break;
case 9:
iVar0=joaat("rt3000");
break;
case 10:
iVar0=joaat("tailgater2");
break;
case 11:
iVar0=joaat("sultan3");
break;
case 12:
iVar0=joaat("futo2");
break;
case 13:
iVar0=joaat("dominator8");
break;
case 14:
iVar0=joaat("previon");
break;
case 15:
iVar0=joaat("euros");
break;
case 16:
iVar0=joaat("growler");
break;
case 17:
iVar0=joaat("kanjosj");
break;
case 18:
iVar0=joaat("postlude");
break;
}
break;
case 30:
switch (iParam1){
case 0:
iVar0=joaat("brioso");
break;
case 1:
iVar0=joaat("sentinel");
break;
case 2:
iVar0=joaat("turismo2");
break;
case 3:
iVar0=joaat("banshee");
break;
case 4:
iVar0=joaat("deveste");
break;
case 5:
iVar0=joaat("hakuchou2");
break;
case 6:
iVar0=joaat("feltzer3");
break;
case 7:
iVar0=joaat("vigero2");
break;
case 8:
iVar0=joaat("issi8");
break;
}
break;
case 31:
switch (iParam1){
case 0:
iVar0=joaat("brioso");
break;
case 1:
iVar0=joaat("sentinel");
break;
}
break;
case 32:
switch (iParam1){
case 0:
iVar0=joaat("turismo2");
break;
case 1:
iVar0=joaat("feltzer3");
break;
case 2:
iVar0=joaat("vigero2");
break;
case 3:
iVar0=joaat("issi8");
break;
}
break;
case 33:
switch (iParam1){
case 0:
iVar0=joaat("banshee");
break;
case 1:
iVar0=joaat("deveste");
break;
case 2:
iVar0=joaat("hakuchou2");
break;
}
break;
}
if(iVar0==0){}
return iVar0;
}

int func_270(int iParam0){
int iVar0;
switch (Global_4718592.f_160097){
case 1:
switch (iParam0){
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
iVar0=joaat("bruiser");
break;
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
iVar0=joaat("brutus");
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
iVar0=joaat("cerberus");
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
iVar0=joaat("deathbike");
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
iVar0=joaat("dominator4");
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
iVar0=joaat("impaler2");
break;
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
iVar0=joaat("imperator");
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
iVar0=joaat("issi4");
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
iVar0=joaat("monster3");
break;
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
iVar0=joaat("scarab");
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
iVar0=joaat("slamvan4");
break;
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
iVar0=joaat("zr380");
break;
}
break;
case 2:
switch (iParam0){
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
iVar0=joaat("bruiser2");
break;
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
iVar0=joaat("brutus2");
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
iVar0=joaat("cerberus2");
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
iVar0=joaat("deathbike2");
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
iVar0=joaat("dominator5");
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
iVar0=joaat("impaler3");
break;
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
iVar0=joaat("imperator2");
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
iVar0=joaat("issi5");
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
iVar0=joaat("monster4");
break;
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
iVar0=joaat("scarab2");
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
iVar0=joaat("slamvan5");
break;
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
iVar0=joaat("zr3802");
break;
}
break;
case 3:
switch (iParam0){
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
iVar0=joaat("bruiser3");
break;
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
iVar0=joaat("brutus3");
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
iVar0=joaat("cerberus3");
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
iVar0=joaat("deathbike3");
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
iVar0=joaat("dominator6");
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
iVar0=joaat("impaler4");
break;
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
iVar0=joaat("imperator3");
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
iVar0=joaat("issi6");
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
iVar0=joaat("monster5");
break;
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
iVar0=joaat("scarab3");
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
iVar0=joaat("slamvan6");
break;
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
iVar0=joaat("zr3803");
break;
}
break;
}
if(STREAMING::IS_MODEL_VALID(iVar0)){
return iVar0;
}
return iParam0;
}

int func_271(int iParam0){
int iVar0;
if(Global_1968511[iParam0] !=-1){
return Global_1968511[iParam0];
}
iVar0=0;
while (iVar0 <=80){
if(func_269(iParam0, iVar0) !=0){
Global_1968511[iParam0]=iVar0 + 1;
}
iVar0++;
}
if(Global_1968511[iParam0]==-1){
Global_1968511[iParam0]=0;
}
return Global_1968511[iParam0];
}

int func_272(var uParam0){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
return !func_273(NETWORK::NET_TO_VEH(uParam0));
}
return 0;
}

int func_273(int iParam0){
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


void func_274(int iParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_237, 0)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 0, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_237, 1)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 1, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_237, 2)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 2, 0);
if(func_275(Global_4980736.f_84919[bParam1 /*499*/].f_12)){
VEHICLE::SET_OPEN_REAR_DOORS_ON_EXPLOSION(iParam0, 0);
}}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_237, 3)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 3, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_237, 4)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 4, 0);
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam1 /*499*/].f_237, 5)){
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 5, 0);
}}

int func_275(int iParam0){
switch (iParam0){
case joaat("cargoplane"):
case joaat("cargoplane2"):
return 1;
default:
}
return 0;
}


void func_276(var uParam0, int iParam1){
bool bVar0;
bVar0=false;
while (bVar0 <=13){
if(MISC::IS_BIT_SET(uParam0, bVar0) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, bVar0 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam1, bVar0 + 1, false);
}elseif(!MISC::IS_BIT_SET(uParam0, bVar0) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam1, bVar0 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam1, bVar0 + 1, true);
}
bVar0++;
}}


void func_277(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
if(VEHICLE::GET_VEHICLE_HAS_KERS(iParam0)){
VEHICLE::SET_VEHICLE_KERS_ALLOWED(iParam0, iParam1);
}}}}}


bool func_278(int iParam0){
return Global_262145.f_5024[0]==iParam0;
}


void func_279(int iParam0, bool bParam1, bool bParam2){
if(bParam2){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_ChasePedID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "MC_ChasePedID")){
DECORATOR::DECOR_SET_INT(iParam0, "MC_ChasePedID", bParam1);
}}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "MC_EntityID")){
DECORATOR::DECOR_SET_INT(iParam0, "MC_EntityID", bParam1);
}}}

int func_280(int iParam0){
return iParam0;
}


void func_281(int iParam0, int iParam1, int iParam2){
struct<52> Var0;
int iVar1;
int iVar2;
if(iParam1==-1){
return;
}
Var0={
Global_4980736.f_101387[iParam1 /*52*/] 
};
if(!MISC::IS_BIT_SET(Var0.f_0, 0)){
return;
}
func_292(iParam0, &(Var0.f_1), 0, 0, iParam2, 0);
func_292(iParam0, &(Var0.f_2), 1, 1, iParam2, 0);
func_292(iParam0, &(Var0.f_3), 2, 2, iParam2, 0);
func_292(iParam0, &(Var0.f_4), 3, 3, iParam2, 0);
func_292(iParam0, &(Var0.f_5), 4, 4, iParam2, 0);
func_292(iParam0, &(Var0.f_6), 5, 5, iParam2, 0);
func_292(iParam0, &(Var0.f_7), 6, 6, iParam2, 0);
func_292(iParam0, &(Var0.f_8), 7, 7, iParam2, 0);
func_292(iParam0, &(Var0.f_9), 8, 8, iParam2, 0);
func_292(iParam0, &(Var0.f_10), 9, 9, iParam2, 0);
func_292(iParam0, &(Var0.f_11), 10, 10, iParam2, 0);
func_292(iParam0, &(Var0.f_12), 11, 11, iParam2, 0);
func_292(iParam0, &(Var0.f_13), 12, 12, iParam2, 0);
func_292(iParam0, &(Var0.f_14), 13, 13, iParam2, 0);
func_292(iParam0, &(Var0.f_15), 14, 14, iParam2, 0);
func_292(iParam0, &(Var0.f_16), 15, 15, iParam2, 0);
func_292(iParam0, &(Var0.f_17), 16, 16, iParam2, 0);
if(Var0.f_22 !=-1){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(Var0.f_22==6){
func_291(iParam0, Var0.f_22);
}}else{
func_291(iParam0, Var0.f_22);
}}
func_292(iParam0, &(Var0.f_21), 23, 17, iParam2, MISC::IS_BIT_SET(Var0.f_0, 1));
func_292(iParam0, &(Var0.f_23), 24, 18, iParam2, MISC::IS_BIT_SET(Var0.f_0, 2));
func_292(iParam0, &(Var0.f_27), 27, 19, iParam2, 0);
func_292(iParam0, &(Var0.f_28), 28, 20, iParam2, 0);
func_292(iParam0, &(Var0.f_29), 29, 21, iParam2, 0);
func_292(iParam0, &(Var0.f_30), 30, 22, iParam2, 0);
func_292(iParam0, &(Var0.f_31), 31, 23, iParam2, 0);
func_292(iParam0, &(Var0.f_32), 32, 24, iParam2, 0);
func_292(iParam0, &(Var0.f_33), 33, 25, iParam2, 0);
func_292(iParam0, &(Var0.f_34), 35, 26, iParam2, 0);
func_292(iParam0, &(Var0.f_35), 37, 27, iParam2, 0);
func_292(iParam0, &(Var0.f_36), 39, 28, iParam2, 0);
func_292(iParam0, &(Var0.f_37), 40, 29, iParam2, 0);
func_292(iParam0, &(Var0.f_38), 41, 30, iParam2, 0);
func_292(iParam0, &(Var0.f_39), 42, 31, iParam2, 0);
func_292(iParam0, &(Var0.f_40), 43, 32, iParam2, 0);
func_292(iParam0, &(Var0.f_41), 44, 33, iParam2, 0);
func_292(iParam0, &(Var0.f_42), 45, 34, iParam2, 0);
func_292(iParam0, &(Var0.f_43), 46, 35, iParam2, 0);
func_292(iParam0, &(Var0.f_44), 47, 36, iParam2, 0);
func_292(iParam0, &(Var0.f_45), 48, 37, iParam2, 0);
if(Var0.f_25 !=-1){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, func_287(Var0.f_25));
}
if(Var0.f_24 >=0 && Var0.f_24 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, Var0.f_24);
}
if(Var0.f_20 !=-1){
VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 22, true);
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(iParam0, func_286(Var0.f_20));
}
if(Var0.f_18 !=-1){
VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 18, true);
}
if(Var0.f_19 !=0){
VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 20, true);
func_285(iParam0, Var0.f_19);
}
if(Var0.f_26 !=-1 && Var0.f_48==-1){
func_284(iParam0, Var0.f_26);
}
if(Var0.f_46 !=-1 || Var0.f_47 !=-1){
if(func_282(Var0.f_46) || func_282(Var0.f_47)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(iParam0, Var0.f_46, Var0.f_47);
}}
if(Var0.f_48 !=-1 || Var0.f_49 !=-1){
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar1, &iVar2);
if(Var0.f_48 !=-1){
iVar1=Var0.f_48;
}
if(Var0.f_49 !=-1){
iVar2=Var0.f_49;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iVar1, iVar2);
}
if(Var0.f_50 !=-1){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, Var0.f_50);
}
if(Var0.f_51 !=-1){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, Var0.f_51);
}}

int func_282(int iParam0){
if(!func_251() && func_283(iParam0)){
return 1;
}
return 0;
}

int func_283(int iParam0){
switch (iParam0){
case 161:
case 164:
case 170:
case 171:
case 183:
case 191:
case 199:
case 209:
case 216:
case 218:
return 1;
break;
}
return 0;
}


void func_284(int iParam0, int iParam1){
int iVar0;
var uVar1;
VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar0, &uVar1);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iVar0, iParam1);
}


void func_285(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
switch (iParam1){
case 1:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 255, 255, 255);
break;
case 11:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 0, 0, 0);
break;
case 6:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 255, 127, 0);
break;
case 4:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 252, 238, 0);
break;
case 3:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 0, 174, 239);
break;
case 8:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 226, 6, 6);
break;
case 2:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 20, 20, 20);
break;
case 12:
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219);
break;
case 5:
HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
break;
case 7:
HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
break;
case 9:
HUD::GET_HUD_COLOUR(24, &iVar0, &iVar1, &iVar2, &uVar3);
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
break;
case 10:
HUD::GET_HUD_COLOUR(107, &iVar0, &iVar1, &iVar2, &uVar3);
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
break;
}}}

int func_286(int iParam0){
if(iParam0==-1){
return 255;
}
return iParam0;
}


var func__287(int iParam0){
struct<16> Var0;
Var0={
func_289(iParam0) 
};
return func_288(&Var0);
}


var func__288(var uParam0){
return uParam0;
}
struct<16> func_289(int iParam0){
struct<16> Var0;
if(func_290(iParam0)){
return Global_4718592.f_80[iParam0 /*16*/];
}
StringCopy(&Var0, "", 64);
return Var0;
}

int func_290(int iParam0){
if(iParam0 < 0 || iParam0 >=30){
return 0;
}
return 1;
}


void func_291(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
iVar0=VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
iVar1=VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("peyote2")){
return;
}
if(iVar0==-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1==1);
}}}


void func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5){
int iVar0;
iVar0=*iParam1;
iVar0=func_293(iVar0, -1, VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2));
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam2) >=iVar0){
VEHICLE::SET_VEHICLE_MOD(iParam0, iParam2, iVar0, bParam5);
}else{
*iParam1=-1;
}}

int func_293(int iParam0, int iParam1, int iParam2){
if(iParam0 > iParam2){
return iParam2;
}elseif(iParam0 < iParam1){
return iParam1;
}
return iParam0;
}


void func_294(int iParam0, int iParam1, int iParam2, int iParam3){
struct<101> Var0;
Var0.f_9=49;
Var0.f_59=2;
Var0.f_78=-1;
Var0.f_79=-1;
Var0.f_96=-1;
Var0.f_97=1;
Var0.f_99=132;
Var0.f_100=-1;
Var0.f_66=iParam1;
if((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
if(iParam1 !=joaat("glendale")){
func_367(*iParam0);
}
if(iParam3 > -1){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, 1);
VEHICLE::SET_VEHICLE_NEON_INDEX_COLOUR(*iParam0, iParam3);
}
func_364(&Var0, iParam0, iParam1, iParam2);
func_362(&Var0, iParam0, iParam1, iParam2);
func_361(&Var0, iParam0, iParam1, iParam2);
}elseif(ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
switch (iParam1){
case joaat("stockade"):
switch (iParam2){
case 0:
StringCopy(&(Var0.f_1), "47RPB540", 16);
Var0.f_5=24;
Var0.f_8=155;
Var0.f_97=1;
Var0.f_99=132;
func_295(*iParam0, &Var0, 0, 1, 0);
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 1, true);
break;
case 1:
StringCopy(&(Var0.f_1), "28AVY903", 16);
Var0.f_5=24;
Var0.f_8=155;
Var0.f_97=1;
Var0.f_99=132;
func_295(*iParam0, &Var0, 0, 1, 0);
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 1, true);
break;
case 2:
StringCopy(&(Var0.f_1), "29FNS081", 16);
Var0.f_5=24;
Var0.f_8=155;
Var0.f_97=1;
Var0.f_99=132;
func_295(*iParam0, &Var0, 0, 1, 0);
VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 1, true);
break;
}
break;
case joaat("boxville"):
switch (iParam2){
case 0:
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, "62QCH889");
break;
}
break;
}}
VEHICLE::RELEASE_PRELOAD_MODS(*iParam0);
}


void func_295(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_72()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_343(iParam0, uParam1, bParam2, bParam3);
if(uParam1->f_102 !=0){
if(uParam1->f_102==2){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 1);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}elseif(uParam1->f_102==1){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}elseif(uParam1->f_102==3){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 1);
VEHICLE::SET_DRIFT_TYRES(iParam0, 1);
}}
if(func_342(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_9[44]==2){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, 0, 1);
}else{
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, 1, 1);
}}
if(!uParam1->f_78==-1 && uParam1->f_9[14]==-1){
AUDIO::OVERRIDE_VEH_HORN(iParam0, 1, uParam1->f_78);
}
if(!uParam1->f_79==-1){
AUDIO::SET_VEHICLE_HORN_SOUND_INDE(iParam0, uParam1->f_79);
}
if(func_341(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_340(iParam0)){
func_334(iParam0, func_337(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_308(iParam0, &(uParam1->f_81));
}
if((!func_301(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_299(iParam0);
}
if(func_298(iVar0)){
switch (uParam1->f_9[5]){
case 0:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
break;
case 1:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}
break;
case 2:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
}
break;
case 3:
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}
else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
}
break;
default:
if(uParam1->f_9[5] !=-1){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
if((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3"))){
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
}
}
break;
}}
if(func_297(ENTITY::GET_ENTITY_MODEL(iParam0))){
switch (uParam1->f_9[5]){
case 1:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_STRONG(iParam0, 1);
if(uParam1->f_9[16]==5){
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21747 + 0.05f));
}
else{
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21747);
}
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, 1);
break;
default:
VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, 0);
VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, 1);
break;
}}
switch (uParam1->f_94){
case 0:
break;
case 1:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(MISC::IS_BIT_SET(uParam1->f_95, 3)){
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
}
break;
case 2:
if(MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
}}elseif(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3)){
if(func_296(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
}
else{
DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
}}
break;
case 3:
break;
case 4:
break;
}}}}


bool func_296(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


bool func_297(int iParam0){
return func_342(iParam0);
}

int func_298(int iParam0){
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


void func_299(int iParam0){
struct<3> Var0;
if(Global_262145.f_20156){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0)){
Var0.f_0=ENTITY::GET_ENTITY_MODEL(iParam0);
Var0.f_1=MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3)){
if(!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID")){
Var0.f_2=MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
}else{
Var0.f_2=DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
}}
func_300(Var0);
}}}}


void func_300(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1745262668;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_5(1, 1));
}

int func_301(int iParam0){
int iVar0;
if(func_307()){
iVar0=0;
while (iVar0 < 60){
if(func_306(iVar0)==iParam0){
if(func_302(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_302(int iParam0){
return func_303(iParam0, 6, 1);
}

int func_303(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_103()==0){
return MISC::IS_BIT_SET(func_304(func_305(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_304(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_30(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_305(int iParam0){
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

int func_306(int iParam0){
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


bool func_307(){
return Global_100733.f_388 > 0;
}

int func_308(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(!func_317(iParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==0){
if(!func_315(iParam0)){
iVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_311(&iParam0, iVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_309(iParam0)){}
return 0;
}

int func_309(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==1 || iVar0==2){
if(iVar0==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar1=NETWORK::GET_NETWORK_TIME();
}else{
iVar1=MISC::GET_GAME_TIMER();
}
iVar2=MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577913));
iVar3=20000;
if(Global_1836597){
iVar3=2000;
}
if(iVar2 > iVar3){
GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
func_310(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_310(int iParam0){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}}}
if(!MISC::IS_BIT_SET(iVar0, 16)){
MISC::SET_BIT(&iVar0, 16);
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
}}

int func_311(int iParam0, int iParam1){
func_314();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
if(Global_1949998.f_11 < 0f){
Global_1949998.f_11=0f;
}}
func_313(*iParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=(Global_1949998.f_1.f_2 - Global_1949998.f_11);
if(Global_1949998.f_4.f_2 < 0f){
Global_1949998.f_12=1;
}
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("comet4")){
Global_1949998.f_13=255;
}
if(Global_1949998.f_12){
if(func_312(iParam0, iParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}else{
Global_1949998.f_14={
Global_1949998.f_1 
};
Global_1949998.f_14=(Global_1949998.f_14 * -1f);
Global_1949998.f_17={
Global_1949998.f_4 
};
Global_1949998.f_17=(Global_1949998.f_17 * -1f);
Global_1949998.f_20={
Global_1949998.f_7 
};
Global_1949998.f_20.f_1=(Global_1949998.f_20.f_1 * -1f);
Global_1949998.f_20.f_2=(Global_1949998.f_20.f_2 * -1f);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0)){
Global_1949998.f_23=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
}else{
Global_1949998.f_23=3;
}
Global_1949998.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
if(!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1)){
Global_1949998.f_24=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
}else{
Global_1949998.f_24=3;
}
if(((Global_1949998.f_23==0 && func_312(iParam0, iParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)) || Global_1949998.f_23 !=0) && ((Global_1949998.f_24==0 && func_312(iParam0, iParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13)) || Global_1949998.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_312(var uParam0, bool bParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_313(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
if(((!func_11(Global_1950024, 0f, 0f, 0f, 0) && !func_11(Global_1950027, 0f, 0f, 0f, 0)) && !func_11(Global_1950030, 0f, 0f, 0f, 0)) && !Global_1950033==0f){
*uParam2={
Global_1950024 
};
*uParam3={
Global_1950027 
};
*uParam4={
Global_1950030 
};
*uParam5=Global_1950033;
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("dominator"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("feltzer2"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("adder"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("akuma"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("asea"):
*uParam2={
0f, 1.5f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("asterope"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bagger"):
*uParam2={
-1f, 0.16f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.09f;
break;
case joaat("baller"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller2"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("banshee"):
*uParam2={
0f, 0.94f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("bati"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("bati2"):
*uParam2={
0f, 0.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("bfinjection"):
*uParam2={
-1f, 0.08f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bison"):
*uParam2={
0f, 1.99f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bjxl"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("blista"):
*uParam2={
0f, 1.49f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("bobcatxl"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.65f;
break;
case joaat("bodhi2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buccaneer"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("buffalo"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buffalo2"):
*uParam2={
0f, 2.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("bullet"):
*uParam2={
-1.57f, 0.07f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("carbonrs"):
*uParam2={
0f, 0.09f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("carbonizzare"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, -0.11f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cavalcade"):
*uParam2={
0f, 1.51f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.55f;
break;
case joaat("cavalcade2"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cheetah"):
*uParam2={
-1.61f, 0.26f, 0.17f 
};
*uParam3={
0.9f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("cogcabrio"):
*uParam2={
0f, 1.42f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("comet2"):
*uParam2={
0f, 1.35f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("coquette"):
*uParam2={
0f, 0.96f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.22f;
break;
case joaat("daemon"):
*uParam2={
0f, 0.06f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("dilettante"):
*uParam2={
0f, 1.59f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dloader"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("double"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("dubsta"):
*uParam2={
-1.71f, 0.31f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dubsta2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.75f;
break;
case joaat("elegy2"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("emperor"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("emperor2"):
*uParam2={
0f, 1.31f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("entityxf"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("exemplar"):
*uParam2={
0f, 1.32f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("f620"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("faggio2"):
*uParam2={
-1f, -0.48f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("felon"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("felon2"):
*uParam2={
0f, 1.24f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fq2"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("fugitive"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("fusilade"):
*uParam2={
0f, 0.98f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.2f;
break;
case joaat("futo"):
*uParam2={
0f, 1.28f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("gauntlet"):
*uParam2={
0f, 1.735f, 1.05f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("granger"):
*uParam2={
0f, 2.07f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("gresley"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("habanero"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("hexer"):
*uParam2={
0f, -0.46f, 1f 
};
*uParam3={
0f, 1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.14f;
break;
case joaat("hotknife"):
*uParam2={
-1.43f, -0.14f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("infernus"):
*uParam2={
-1f, 0.33f, 0.08f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*uParam5=0.25f;
break;
case joaat("ingot"):
*uParam2={
0f, 1.58f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("intruder"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("issi2"):
*uParam2={
0f, 1.21f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jackal"):
*uParam2={
0f, 1.36f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("jb700"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("khamelion"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.475f;
break;
case joaat("landstalker"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("manana"):
*uParam2={
0f, 0.86f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("mesa"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("mesa3"):
*uParam2={
0f, 1.47f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("minivan"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("monroe"):
*uParam2={
0f, 1.23f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.43f;
break;
case joaat("nemesis"):
*uParam2={
0f, 0.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.1f;
break;
case joaat("ninef"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ninef2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("oracle"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("oracle2"):
*uParam2={
0f, 1.7f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("patriot"):
*uParam2={
0f, 1.75f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("pcj"):
*uParam2={
0f, 0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("penumbra"):
*uParam2={
0f, 1.46f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("peyote"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("phoenix"):
*uParam2={
0f, 1.833f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.44f;
break;
case joaat("picador"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.425f;
break;
case joaat("prairie"):
*uParam2={
0f, 1.41f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.31f;
break;
case joaat("premier"):
*uParam2={
0f, 1.6f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("primo"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("radi"):
*uParam2={
0f, 1.74f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rancherxl"):
*uParam2={
0f, 1.54f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rapidgt"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rapidgt2"):
*uParam2={
0f, 1.263f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ratloader"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("rebel"):
*uParam2={
-1.22f, 0.6f, 0.44f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rebel2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("regina"):
*uParam2={
0f, 1.473f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("rocoto"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("romero"):
*uParam2={
0f, 1.83f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("ruffian"):
*uParam2={
0f, -0.02f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.19f;
break;
case joaat("ruiner"):
*uParam2={
0f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sabregt"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*uParam5=0.35f;
break;
case joaat("sadler"):
*uParam2={
0f, 2.26f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sandking"):
*uParam2={
0f, 2.496f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sandking2"):
*uParam2={
0f, 2.286f, 1.55f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("schafter2"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schwarzer"):
*uParam2={
0f, 1.43f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("seminole"):
*uParam2={
0f, 1.45f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sentinel"):
*uParam2={
0f, 1.18f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sentinel2"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("serrano"):
*uParam2={
0f, 1.68f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.49f;
break;
case joaat("stanier"):
*uParam2={
0f, 1.55f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("stinger"):
*uParam2={
0f, 1.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("stingergt"):
*uParam2={
-1f, -0.17f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("stratum"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sultan"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("superd"):
*uParam2={
0f, 1.62f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("surano"):
*uParam2={
0f, 1.38f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("surfer"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.32f;
break;
case joaat("surfer2"):
*uParam2={
0f, 2.48f, 0.26f 
};
*uParam3={
0f, -1f, -0.212f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.32f;
break;
case joaat("surge"):
*uParam2={
0f, 1.69f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tailgater"):
*uParam2={
0f, 1.783f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tornado"):
*uParam2={
-1.23f, 0.11f, -0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tornado2"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tornado3"):
*uParam2={
0f, 1.44f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("vacca"):
*uParam2={
0f, 1.76f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vader"):
*uParam2={
0f, 0.08f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("vigero"):
*uParam2={
-1f, 0.11f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("voltic"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("voodoo2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("washington"):
*uParam2={
0f, 1.61f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("youga"):
*uParam2={
0f, 2.352f, 1.003f 
};
*uParam3={
0f, -1f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.175f;
break;
case joaat("zion"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zion2"):
*uParam2={
0f, 1.48f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("ztype"):
*uParam2={
-0.96f, -0.69f, 0.35f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
default:
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, 0f, -1f 
};
*uParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("kalahari"):
*uParam2={
-1f, 0.18f, 0.1f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("paradise"):
*uParam2={
0f, 2.23f, 1f 
};
*uParam3={
0f, -0.22f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("alpha"):
*uParam2={
-1f, 0.18f, -0.05f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("huntley"):
*uParam2={
0f, 1.52f, 0.99f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("zentorno"):
*uParam2={
-1.24f, 0.3f, -0.07f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester"):
*uParam2={
-1f, 0.17f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.05f 
};
*uParam5=0.33f;
break;
case joaat("massacro"):
*uParam2={
0f, 1.37f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("turismor"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("thrust"):
*uParam2={
-1f, 0.405f, 0.4625f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1625f;
break;
case joaat("btype"):
*uParam2={
0f, 1.143f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.7125f;
break;
case joaat("rhapsody"):
*uParam2={
-1f, -0.47f, -0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2625f;
break;
case joaat("glendale"):
*uParam2={
0f, 1.683f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.775f;
break;
case joaat("warrener"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.775f;
break;
case joaat("blade"):
*uParam2={
-1f, 0.445f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.325f;
break;
case joaat("panto"):
*uParam2={
-1f, 0f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dubsta3"):
*uParam2={
-1f, 0.34f, 0.2975f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("pigalle"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("coquette2"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("innovation"):
*uParam2={
0f, 0.15f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("hakuchou"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.16f;
break;
case joaat("furoregt"):
*uParam2={
-1f, 0f, 0.2075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("ratloader2"):
*uParam2={
-1.78f, 0.52f, 0.52f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("slamvan"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("dukes2"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("dukes"):
*uParam2={
-1f, 0f, 0.0375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3875f;
break;
case joaat("stalion"):
*uParam2={
-1f, 0f, 0.0925f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4375f;
break;
case joaat("blista2"):
*uParam2={
-1f, 0.5325f, 0.245f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2875f;
break;
case joaat("casco"):
*uParam2={
0f, 0.94f, 1.03f 
};
*uParam3={
0f, -0.03f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("enduro"):
*uParam2={
0f, -0.17f, 1f 
};
*uParam3={
0f, 0.34f, -0.786f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("gburrito2"):
*uParam2={
0f, 2.32f, 0.94f 
};
*uParam3={
0f, -0.182f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("guardian"):
*uParam2={
-1.94f, 1.07f, 0.38f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("kuruma"):
case joaat("kuruma2"):
*uParam2={
-1f, 0.2475f, -0.175f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.435f;
break;
case joaat("lectro"):
*uParam2={
0f, 0.3f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.09f;
break;
case joaat("feltzer3"):
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
*uParam2={
0f, 1.597f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.45f;
break;
case joaat("osiris"):
*uParam2={
-1f, 0.27f, -0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("virgo"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("windsor"):
*uParam2={
-1.2f, -0.39f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.55f;
break;
case joaat("brawler"):
*uParam2={
-1f, -0.21f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("chino"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("coquette3"):
*uParam2={
-1f, -0.1775f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("t20"):
*uParam2={
-1f, 0.4f, -0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("vindicator"):
*uParam2={
-1f, 0.21f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("faction"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("faction2"):
*uParam2={
-1f, 0f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("buccaneer2"):
*uParam2={
0f, 2.01f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("chino2"):
*uParam2={
-1.05f, 0f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("moonbeam"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("moonbeam2"):
*uParam2={
0f, 1.713f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("primo2"):
*uParam2={
-1f, 0.42f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("voodoo"):
*uParam2={
-1.12f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("faction3"):
*uParam2={
-1f, 0f, 0.5f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("sabregt2"):
*uParam2={
-1f, 0f, 0.14f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.015f 
};
*uParam5=0.35f;
break;
case joaat("tornado5"):
*uParam2={
-1f, 0.15f, -0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("virgo2"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("virgo3"):
*uParam2={
-1f, 0f, 0.1225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("minivan2"):
*uParam2={
0f, 1.95f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan3"):
*uParam2={
-1f, 0.275f, 0.195f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("btype2"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("lurcher"):
*uParam2={
-1f, 0f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("baller3"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller4"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller5"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("baller6"):
*uParam2={
0f, 1.4f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cog55"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cog552"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cognoscenti"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cognoscenti2"):
*uParam2={
-1f, 0.37f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("mamba"):
*uParam2={
-1f, -0.18f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("nightshade"):
*uParam2={
-1f, -0.2f, 0.17f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("schafter3"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter4"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter5"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("schafter6"):
*uParam2={
0f, 1.56f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.28f;
break;
case joaat("verlierer2"):
*uParam2={
-1f, -0.21f, 0.03f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tampa"):
*uParam2={
-1f, 0f, 0.12f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("banshee2"):
*uParam2={
-1f, -0.4f, 0.075f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sultanrs"):
*uParam2={
0f, 1.77f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("btype3"):
*uParam2={
-1f, -0.1f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("bestiagts"):
*uParam2={
-1f, -0.06f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("seven70"):
*uParam2={
-1f, -0.21f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fmj"):
*uParam2={
-1f, -0.06f, 0.21f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("pfister811"):
*uParam2={
-1f, 0.06f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("prototipo"):
*uParam2={
-1f, 0.3f, 0.27f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("reaper"):
*uParam2={
-1f, 0.48f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rumpo3"):
*uParam2={
0f, 2.103f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("windsor2"):
*uParam2={
-1.2f, 0.03f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.55f;
break;
case joaat("xls"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("xls2"):
*uParam2={
-1f, 0.36f, -0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("brioso"):
*uParam2={
-1f, -0.06f, 0.565f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("contender"):
*uParam2={
0f, 2.33f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("le7b"):
*uParam2={
-1f, -0.12f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("omnis"):
*uParam2={
-1f, 0.03f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("tropos"):
*uParam2={
-1f, 0f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("avarus"):
*uParam2={
-1f, 0.27f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("daemon2"):
*uParam2={
-1f, 0.27f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("defiler"):
*uParam2={
-1f, 0f, 0.34f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.125f;
break;
case joaat("esskey"):
*uParam2={
-1f, 0.335f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.09f;
break;
case joaat("hakuchou2"):
*uParam2={
0f, 0.27f, 0.845f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.15f;
break;
case joaat("nightblade"):
*uParam2={
0f, -0.133f, 0.61f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.125f;
break;
case joaat("ratbike"):
*uParam2={
-1f, 0.31f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("shotaro"):
*uParam2={
-1f, 0.06f, 0.325f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("zombiea"):
*uParam2={
-1f, 0.3f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("zombieb"):
*uParam2={
-1f, 0.2f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("vortex"):
*uParam2={
-1f, 0.18f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.095f;
break;
case joaat("tornado6"):
*uParam2={
-1f, -0.03f, -0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("youga2"):
*uParam2={
0f, 2.352f, 0.253f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.175f;
break;
case joaat("wolfsbane"):
*uParam2={
-1f, 0.33f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("faggio3"):
*uParam2={
-1f, -0.54f, -0.11f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("faggio"):
*uParam2={
-0.9875f, -0.0175f, -0.01f 
};
*uParam3={
0.8975f, -0.26f, -0.0725f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1625f;
break;
case joaat("comet3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("diablous"):
*uParam2={
-1f, 0.006f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("diablous2"):
*uParam2={
-1f, 0.225f, 0.541f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("elegy"):
*uParam2={
0f, 1.14f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.35f;
break;
case joaat("fcr"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("fcr2"):
*uParam2={
-1f, 0.234f, 0.376f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("italigtb"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("italigtb2"):
*uParam2={
-1f, -0.024f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("nero"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("nero2"):
*uParam2={
-1f, 0.237f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("penetrator"):
*uParam2={
-1f, 0.153f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("ruiner2"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("ruiner3"):
*uParam2={
0.363f, 1.34f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("specter"):
*uParam2={
-1f, -0.273f, -0.02f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("specter2"):
*uParam2={
-1f, -0.273f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("technical2"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tempesta"):
*uParam2={
-1f, 0f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("voltic2"):
*uParam2={
0f, 1.763f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("infernus2"):
*uParam2={
-1f, 0.33f, 0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0.06f 
};
*uParam5=0.2f;
break;
case joaat("ruston"):
*uParam2={
-1f, -0.273f, 0.084f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("turismo2"):
*uParam2={
-1f, 0.159f, -0.193f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("ardent"):
*uParam2={
-1f, 0.309f, 0.276f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("cheetah2"):
*uParam2={
-1f, 0.159f, -0.127f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("halftrack"):
*uParam2={
-1f, 0.501f, 0.531f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("nightshark"):
*uParam2={
-1.5f, 0.42f, 0.584f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("oppressor"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.08f;
break;
case joaat("tampa3"):
*uParam2={
0f, 1.515f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.275f;
break;
case joaat("technical3"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.43f;
break;
case joaat("torero"):
*uParam2={
-1f, 0.201f, 0.114f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("vagner"):
*uParam2={
-1.5f, 0.906f, 0.071f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("xa21"):
*uParam2={
-1f, 0.441f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("phantom3"):
*uParam2={
-1.3f, 2.045f, 0.802f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("hauler2"):
*uParam2={
-1.627f, 2.456f, 0.745f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("cyclone"):
*uParam2={
-1f, 0.186f, 0.382f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("visione"):
*uParam2={
-1f, 0.432f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("vigilante"):
*uParam2={
-1f, 0.232f, 0.24f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.175f;
break;
case joaat("retinue"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rapidgt3"):
*uParam2={
0f, 1.972f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.18f;
break;
case joaat("avenger"):
*uParam2={
-2.02f, 6.45f, -0.716f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("deluxo"):
*uParam2={
-1f, -0.291f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("stromberg"):
*uParam2={
-1f, 0.23f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("riot2"):
*uParam2={
-1.891f, 2.144f, 0.657f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("chernobog"):
*uParam2={
-2.127f, 5.413f, 1.132f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.34f;
break;
case joaat("khanjali"):
*uParam2={
-0.897f, 1.391f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.4f;
break;
case joaat("barrage"):
*uParam2={
-1.51f, 0.71f, 0.451f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("comet4"):
*uParam2={
-1f, 0.298f, 0.257f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.36f;
break;
case joaat("neon"):
*uParam2={
-1f, 0.181f, -0.066f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("streiter"):
*uParam2={
-1f, 0.301f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sentinel3"):
*uParam2={
0f, 1.52f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("yosemite"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("sc1"):
*uParam2={
-1f, 0.616f, -0.131f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("autarch"):
*uParam2={
-1f, 0f, 0.116f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("gt500"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("hustler"):
*uParam2={
-1f, -0.228f, 0.321f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("revolter"):
*uParam2={
-1f, 0.203f, 0.126f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("pariah"):
*uParam2={
-1f, -0.126f, 0.208f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("raiden"):
*uParam2={
-1f, 0.252f, -0.095f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("savestra"):
*uParam2={
-1f, 0f, 0.25f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("riata"):
*uParam2={
-1.3f, 0.18f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("hermes"):
*uParam2={
-1f, -0.134f, 0.158f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("comet5"):
*uParam2={
-1f, 0.002f, 0.031f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("z190"):
*uParam2={
-1f, -0.175f, 0.242f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("viseris"):
*uParam2={
-1f, 0f, 0.244f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.275f;
break;
case joaat("kamacho"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("gb200"):
*uParam2={
-1f, 0f, 0.407f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.225f;
break;
case joaat("fagaloa"):
*uParam2={
-1f, 0f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("ellie"):
*uParam2={
-1f, 0.441f, -0.128f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi3"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("michelli"):
*uParam2={
-1f, 0f, 0.0805f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("flashgt"):
*uParam2={
0f, 1.592f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case joaat("hotring"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("tezeract"):
*uParam2={
-1f, 0.679f, 0.514f 
};
*uParam3={
1f, 0f, -0.75f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.175f;
break;
case joaat("tyrant"):
*uParam2={
-1.588f, 0.315f, 0.337f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("dominator3"):
*uParam2={
-1f, 0f, 0.221f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("taipan"):
*uParam2={
-1f, 0f, 0.219f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("entity2"):
*uParam2={
-1.52f, 0.41f, 0.15f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester3"):
*uParam2={
-1f, 0f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("cheburek"):
*uParam2={
-1f, 0.393f, 0.162f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("caracara"):
*uParam2={
-1f, 1.266f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("speedo4"):
*uParam2={
-1.5f, 0.833f, 0.391f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("mule4"):
*uParam2={
-1.125f, 2.691f, 0.318f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("pounder2"):
*uParam2={
-1.5f, 1.853f, 0.779f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.38f;
break;
case joaat("swinger"):
*uParam2={
-1f, 0.195f, 0.105f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("menacer"):
*uParam2={
-1.73f, 0.159f, 0.61f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("scramjet"):
*uParam2={
-1f, -0.188f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("patriot2"):
*uParam2={
-1.213f, 1.546f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("stafford"):
*uParam2={
-1f, 0.036f, 0.096f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("freecrawler"):
*uParam2={
-1f, 0.249f, 0.511f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("oppressor2"):
*uParam2={
-1f, 0.306f, 0.355f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.08f;
break;
case joaat("terbyte"):
*uParam2={
-1.73f, 3.397f, 0.724f 
};
*uParam3={
1f, 0.12f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("bruiser"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("bruiser2"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("bruiser3"):
*uParam2={
0f, 2.12f, 1.241f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0.084f 
};
*uParam5=0.775f;
break;
case joaat("brutus"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("brutus2"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("brutus3"):
*uParam2={
-1f, 0.446f, 0.247f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("cerberus"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cerberus2"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("cerberus3"):
*uParam2={
-1.432f, 1.443f, 1.292f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("clique"):
*uParam2={
-1f, 0.167f, 0.159f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("deveste"):
*uParam2={
-1.5f, 1.066f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("deviant"):
*uParam2={
-1f, 0.111f, 0.123f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("dominator4"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dominator5"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dominator6"):
*uParam2={
-1f, 0f, 0.417f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("impaler"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler2"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler3"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("impaler4"):
*uParam2={
-1f, 0f, 0.137f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("imperator"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("imperator2"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("imperator3"):
*uParam2={
-1f, 0f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi4"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi5"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("issi6"):
*uParam2={
-1f, 0.195f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("italigto"):
*uParam2={
-1f, -0.091f, 0.207f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("monster3"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("monster4"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("monster5"):
*uParam2={
-1.78f, 0.445f, 0.81f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("schlagen"):
*uParam2={
-1f, -0.105f, 0.262f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("slamvan4"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan5"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("slamvan6"):
*uParam2={
-1f, 0.152f, 0.537f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("toros"):
*uParam2={
-1f, 0.415f, 0.394f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("tulip"):
*uParam2={
-1f, 0.171f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vamos"):
*uParam2={
-1f, 0f, 0.163f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("zr380"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zr3802"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zr3803"):
*uParam2={
-1f, 0f, 0.286f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("caracara2"):
*uParam2={
-1f, 0.687f, 0.4115f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("drafter"):
*uParam2={
-1.045f, 0.15f, 0.09f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("dynasty"):
*uParam2={
-1f, 0.12f, 0.334f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("emerus"):
*uParam2={
-1f, 0.372f, 0.439f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("gauntlet3"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.33f;
break;
case joaat("gauntlet4"):
*uParam2={
-1f, 0f, 0.222f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.33f;
break;
case joaat("hellion"):
*uParam2={
-1f, 0.27f, 0.246f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi7"):
*uParam2={
-1f, 0.195f, -0.063f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("jugular"):
*uParam2={
-1f, 0.213f, 0.213f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("krieger"):
*uParam2={
-1f, 0.576f, -0.123f 
};
*uParam3={
0.997f, -0.105f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("locust"):
*uParam2={
-1f, -0.207f, 0.042f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("nebula"):
*uParam2={
-1f, 0.012f, 0.147f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("neo"):
*uParam2={
-1f, 0.216f, 0.216f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("novak"):
*uParam2={
-1f, 0.24f, 0.255f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("paragon"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("paragon2"):
*uParam2={
-1f, 0f, 0.156f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("peyote2"):
*uParam2={
-1f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("s80"):
*uParam2={
-1f, 0.357f, 0.256f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.2f;
break;
case joaat("thrax"):
*uParam2={
-1f, 0.426f, 0.339f 
};
*uParam3={
1f, 0.06f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("zion3"):
*uParam2={
-1f, 0.108f, 0.234f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("zorrusso"):
*uParam2={
-1f, 0.273f, -0.06f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("slamvan2"):
*uParam2={
-1f, 0.35f, 0.456f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("rebla"):
*uParam2={
0f, 1.9002f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.3f;
break;
case joaat("asbo"):
*uParam2={
-1f, 0.104f, 0.339f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("sugoi"):
*uParam2={
-1f, 0.104f, 0.223f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("komoda"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("vstr"):
*uParam2={
-1f, 0.104f, 0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sultan2"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("kanjo"):
*uParam2={
-1f, 0.313f, 0.16f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("jb7002"):
*uParam2={
0f, 1.2f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.37f;
break;
case joaat("yosemite2"):
*uParam2={
-1f, 0.252f, 0.201f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("retinue2"):
*uParam2={
-1f, -0.018f, 0.253f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("furia"):
*uParam2={
-1f, 0.0965f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.5f;
break;
case joaat("everon"):
*uParam2={
0f, 2.019f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.5f;
break;
case joaat("imorgon"):
*uParam2={
-1.5f, 0.42f, -0.2f 
};
*uParam3={
1f, -0.0997f, 0.0415f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("zhaba"):
*uParam2={
-1.202f, 0.034f, 0.6635f 
};
*uParam3={
1f, -0.002f, 0f 
};
*uParam4={
0f, -0.7398f, 0f 
};
*uParam5=0.4f;
break;
case joaat("gauntlet5"):
*uParam2={
-1.5f, 0.379f, 0.297f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.24f;
break;
case joaat("dukes3"):
*uParam2={
-1f, 0f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.375f;
break;
case joaat("manana2"):
*uParam2={
-1.76f, 0.105f, 0.009f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.22f;
break;
case joaat("club"):
*uParam2={
0f, 1.252f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.31f;
break;
case joaat("glendale2"):
*uParam2={
0f, 2.135f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.205f;
break;
case joaat("youga3"):
*uParam2={
0f, 2.352f, 0.3f 
};
*uParam3={
0f, -1f, -0.256f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.135f;
break;
case joaat("yosemite3"):
*uParam2={
-1f, 0.252f, 0.203f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.21f;
break;
case joaat("seminole2"):
*uParam2={
0f, 1.654f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.25f;
break;
case joaat("penumbra2"):
*uParam2={
-1.08f, 0.28f, -0.093f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("landstalker2"):
*uParam2={
-1.64f, 0.7f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("coquette4"):
*uParam2={
-1f, -0.021f, 0.273f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("tigon"):
*uParam2={
-1f, 0.156f, 0.099f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("peyote3"):
*uParam2={
-1.5f, -0.36f, 0.2125f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("brioso2"):
*uParam2={
-1f, 0.275f, 0.215f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("slamtruck"):
*uParam2={
-1f, 1.454f, 0.485f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("italirsx"):
*uParam2={
-1f, 0.109f, 0.129f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("toreador"):
*uParam2={
-1f, 0.194f, 0.342f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.15f;
break;
case joaat("weevil"):
*uParam2={
-1f, 0.111f, 0.168f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("zr350"):
*uParam2={
0f, 1.632f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.19f;
break;
case joaat("calico"):
*uParam2={
-1f, 0.497f, 0.212f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("jester4"):
*uParam2={
-1f, 0f, 0.181f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("comet6"):
*uParam2={
-1f, 0.205f, 0.074f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("warrener2"):
*uParam2={
-1f, 0.408f, 0.295f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("remus"):
*uParam2={
-1f, 0.204f, 0.357f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("vectre"):
*uParam2={
-1f, 0.249f, 0.164f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("dominator7"):
*uParam2={
-1f, 0.253f, 0.142f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("cypher"):
*uParam2={
-1f, 0.223f, 0.185f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("rt3000"):
*uParam2={
-1f, 0f, 0.189f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("sultan3"):
*uParam2={
-1f, 0.42f, 0.309f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.23f;
break;
case joaat("tailgater2"):
*uParam2={
-1f, 0.337f, 0.283f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("previon"):
*uParam2={
-1f, 0.14f, -0.155f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("dominator8"):
*uParam2={
-1f, 0.153f, -0.006f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("futo2"):
*uParam2={
-1f, 0.318f, -0.013f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("euros"):
*uParam2={
-1f, 0.101f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("growler"):
*uParam2={
-1f, 0.151f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("cinquemila"):
*uParam2={
-1f, 0.533f, 0.197f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("champion"):
*uParam2={
-1f, 0.076f, 0.122f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("granger2"):
*uParam2={
-1f, 0.461f, 0.264f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("deity"):
*uParam2={
-1f, 0.279f, 0.235f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("buffalo4"):
*uParam2={
-1f, 0.251f, 0.149f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("baller7"):
*uParam2={
-1.194f, 0.182f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("zeno"):
*uParam2={
-1.194f, 0.409f, 0.199f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.22f;
break;
case joaat("comet7"):
*uParam2={
-1f, 0.05f, 0.187f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("astron"):
*uParam2={
-1f, 0.249f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("patriot3"):
*uParam2={
-1.2f, 0.474f, 0.335f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.23f;
break;
case joaat("jubilee"):
*uParam2={
-1.037f, 0.438f, 0.31f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("shinobi"):
*uParam2={
0f, 0.306f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.045f;
break;
case joaat("reever"):
*uParam2={
-1f, 0.292f, 0.29f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("iwagen"):
*uParam2={
-1f, 0.387f, 0.209f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("brioso3"):
*uParam2={
-1f, 0.15f, 0.2f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("corsita"):
*uParam2={
-1f, 0.1f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("greenwood"):
*uParam2={
-1f, 0.2f, 0.138f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("kanjosj"):
*uParam2={
-1f, 0.1f, 0.26f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("postlude"):
*uParam2={
-1f, 0f, 0.28f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("rhinehart"):
*uParam2={
0f, 1.317f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.33f;
break;
case joaat("tenf"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("tenf2"):
*uParam2={
-1f, 0.74f, 0.19f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("torero2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("vigero2"):
*uParam2={
-1f, -0.07f, 0.3f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("weevil2"):
*uParam2={
-1f, 0.07f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.45f;
break;
case joaat("draugur"):
*uParam2={
-1f, 0.5f, 0.48f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("ruiner4"):
*uParam2={
-1f, 0.5f, 0.182f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.28f;
break;
case joaat("sentinel4"):
*uParam2={
-1f, 0.147f, 0.239f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("sm722"):
*uParam2={
-1f, -0.4f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("omnisegt"):
*uParam2={
0f, 1.462f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.29f;
break;
case joaat("powersurge"):
*uParam2={
-1f, 0.3f, 0.37f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("entity3"):
*uParam2={
-1f, 0.5f, 0.225f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.25f;
break;
case joaat("manchez3"):
*uParam2={
-1f, 0.066f, 0.329f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.1f;
break;
case joaat("surfer3"):
*uParam2={
-1f, 1.19f, 0.18f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("boor"):
*uParam2={
-1f, 0.25f, 0.4f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.4f;
break;
case joaat("eudora"):
*uParam2={
0f, 1.623f, 1f 
};
*uParam3={
0f, 0f, -1f 
};
*uParam4={
-1f, 0f, 0f 
};
*uParam5=0.7f;
break;
case joaat("tulip2"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("r300"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("virtue"):
*uParam2={
-1f, 0f, 0.22f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("issi8"):
*uParam2={
-1f, 0.3f, 0f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("broadway"):
*uParam2={
-1f, -0.4f, 0.375f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("panthere"):
*uParam2={
-1f, 0.069f, 0.13f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.3f;
break;
case joaat("tahoma"):
*uParam2={
-1f, -0.253f, 0.39f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.35f;
break;
case joaat("everon2"):
*uParam2={
-1f, 0.101f, 0.227f 
};
*uParam3={
1f, 0f, 0f 
};
*uParam4={
0f, -1f, 0f 
};
*uParam5=0.6f;
break;
}
return 1;
}


void func_314(){
Global_1949998=0;
Global_1949998.f_1={
0f, 0f, 0f 
};
Global_1949998.f_4={
0f, 0f, 0f 
};
Global_1949998.f_7={
0f, 0f, 0f 
};
Global_1949998.f_10=0f;
Global_1949998.f_11=0f;
Global_1949998.f_12=0;
Global_1949998.f_13=0;
Global_1949998.f_14={
0f, 0f, 0f 
};
Global_1949998.f_17={
0f, 0f, 0f 
};
Global_1949998.f_20={
0f, 0f, 0f 
};
Global_1949998.f_23=0;
Global_1949998.f_24=0;
}

int func_315(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_316(iParam0)){
return 1;
}}
return 0;
}

int func_316(int iParam0){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(iVar0, 16);
}}}
return 0;
}

int func_317(int iParam0, var uParam1){
int iVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
iVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
iVar0=func_72();
}
bVar1=false;
if(iVar0==PLAYER::PLAYER_ID()){
if(func_327(15, 0)){
bVar1=true;
}elseif(func_323(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0==func_72()) || !func_1680(iVar0, 0, 0)) || !bVar1) || func_318(iParam0)){
return 0;
}
return 1;
}

int func_318(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_320(PLAYER::PLAYER_ID())==3){
if(func_319(iParam0) !=-1){
return 1;
}}
if(Global_1950023){
return 1;
}
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("sanchez"):
case joaat("sanchez2"):
case joaat("blazer"):
case joaat("blazer3"):
case joaat("surfer"):
case joaat("surfer2"):
case joaat("bifta"):
case joaat("sovereign"):
case joaat("hexer"):
case joaat("dune"):
case joaat("dune2"):
case joaat("dune4"):
case joaat("dune5"):
case joaat("insurgent"):
case joaat("insurgent2"):
case joaat("blista3"):
case joaat("stalion2"):
case joaat("gauntlet2"):
case joaat("dominator2"):
case joaat("buffalo3"):
case joaat("massacro2"):
case joaat("jester2"):
case joaat("omnis"):
case joaat("bf400"):
case joaat("tropos"):
case joaat("brioso"):
case joaat("trophytruck"):
case joaat("trophytruck2"):
case joaat("cliffhanger"):
case joaat("tampa2"):
case joaat("gargoyle"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("le7b"):
case joaat("tyrus"):
case joaat("lynx"):
case joaat("sheava"):
case joaat("chimera"):
case joaat("sanctus"):
case joaat("blazer4"):
case joaat("manchez"):
case joaat("raptor"):
case joaat("blazer5"):
case joaat("stryder"):
case joaat("formula"):
case joaat("formula2"):
case joaat("minitank"):
case joaat("outlaw"):
case joaat("vagrant"):
case joaat("openwheel1"):
case joaat("openwheel2"):
case joaat("manchez2"):
case joaat("squaddie"):
case joaat("winky"):
case joaat("veto"):
case joaat("veto2"):
case joaat("verus"):
case joaat("lm87"):
return 1;
break;
case joaat("youga"):
case joaat("youga2"):
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 7) !=-1){
return 1;
}
break;
case joaat("surano"):
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5)==1){
return 1;
}
break;
case joaat("gp1"):
return 1;
break;
case joaat("apc"):
case joaat("dune3"):
case joaat("insurgent3"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("phantom3"):
case joaat("hauler2"):
return 1;
break;
case joaat("thruster"):
return 1;
break;
case joaat("terbyte"):
return 1;
break;
case joaat("rcbandito"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("rrocket"):
case joaat("blazer2"):
case joaat("burrito2"):
case joaat("ignus"):
case joaat("draugur"):
case joaat("brickade2"):
case joaat("journey2"):
return 1;
break;
case joaat("club"):
if((VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7)==7){
return 1;
}
break;
case joaat("yosemite3"):
if((VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45)==6){
return 1;
}
break;
}
return 0;
}

int func_319(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_320(int iParam0){
if(func_322(iParam0)==233){
return func_321(iParam0);
}
return -1;
}

int func_321(int iParam0){
if(func_179(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}

int func_322(int iParam0){
if(func_179(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}


bool func_323(bool bParam0){
return func_324(PLAYER::PLAYER_ID(), bParam0);
}

int func_324(int iParam0, bool bParam1){
return func_325(iParam0, bParam1, 1);
}

int func_325(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_72()){
return 0;
}
if(!bParam1){
if(func_326(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_72() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_326(int iParam0, int iParam1){
if(iParam0 !=func_72()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_72()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_327(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_332(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_329(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_328(iVar1));
}

int func_328(int iParam0){
return (iParam0 % 32);
}

int func_329(int iParam0){
int iVar0;
iVar0=func_304(func_330(iParam0), -1, 0);
return iVar0;
}

int func_330(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_331(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_331(int iParam0){
return (iParam0 / 32);
}

int func_332(int iParam0){
if(iParam0 !=func_72()){
if(func_333(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_333(int iParam0){
if(iParam0 !=func_72()){
if(func_1680(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_71(Global_2657589[iParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}


void func_334(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_336(iParam1);
func_335(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uVar0);
}


bool func_335(int iParam0, var uParam1){
*uParam1=-1;
switch (iParam0){
case 0:
*uParam1=4;
break;
case 1:
*uParam1=5;
break;
case 2:
*uParam1=6;
break;
case 3:
*uParam1=7;
break;
case 4:
*uParam1=111;
break;
case 5:
*uParam1=112;
break;
case 6:
*uParam1=107;
break;
case 7:
*uParam1=104;
break;
case 8:
*uParam1=98;
break;
case 9:
*uParam1=100;
break;
case 10:
*uParam1=102;
break;
case 11:
*uParam1=99;
break;
case 12:
*uParam1=105;
break;
case 13:
*uParam1=106;
break;
case 14:
*uParam1=37;
break;
case 15:
*uParam1=90;
break;
case 16:
*uParam1=88;
break;
case 17:
*uParam1=89;
break;
case 18:
*uParam1=91;
break;
case 19:
*uParam1=38;
break;
case 20:
*uParam1=138;
break;
case 21:
*uParam1=36;
break;
case 22:
*uParam1=27;
break;
case 23:
*uParam1=28;
break;
case 24:
*uParam1=29;
break;
case 25:
*uParam1=150;
break;
case 26:
*uParam1=30;
break;
case 27:
*uParam1=31;
break;
case 28:
*uParam1=32;
break;
case 29:
*uParam1=35;
break;
case 30:
*uParam1=135;
break;
case 31:
*uParam1=137;
break;
case 32:
*uParam1=136;
break;
case 33:
*uParam1=71;
break;
case 34:
*uParam1=145;
break;
case 35:
*uParam1=63;
break;
case 36:
*uParam1=64;
break;
case 37:
*uParam1=65;
break;
case 38:
*uParam1=66;
break;
case 39:
*uParam1=67;
break;
case 40:
*uParam1=68;
break;
case 41:
*uParam1=69;
break;
case 42:
*uParam1=73;
break;
case 43:
*uParam1=70;
break;
case 44:
*uParam1=74;
break;
case 45:
*uParam1=51;
break;
case 46:
*uParam1=53;
break;
case 47:
*uParam1=54;
break;
case 48:
*uParam1=92;
break;
}
return *uParam1 !=-1;
}

int func_336(int iParam0){
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

int func_337(int iParam0, int iParam1, int iParam2){
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
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_338()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_338(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_339() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_339(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_340(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_341(int iParam0, var uParam1){
*uParam1=-1f;
switch (iParam0){
case joaat("dune5"):
*uParam1=1f;
break;
case joaat("boxville5"):
*uParam1=1f;
break;
case joaat("wastelander"):
*uParam1=1f;
break;
case joaat("alphaz1"):
*uParam1=0.2f;
break;
case joaat("bombushka"):
*uParam1=0.15f;
break;
case joaat("howard"):
*uParam1=0.3f;
break;
case joaat("hunter"):
*uParam1=0.5f;
break;
case joaat("microlight"):
*uParam1=0.3f;
break;
case joaat("mogul"):
*uParam1=0.4f;
break;
case joaat("molotok"):
*uParam1=0.3f;
break;
case joaat("nokota"):
*uParam1=0.4f;
break;
case joaat("pyro"):
*uParam1=0.4f;
break;
case joaat("rogue"):
*uParam1=0.4f;
break;
case joaat("seabreeze"):
*uParam1=0.3f;
break;
case joaat("starling"):
*uParam1=0.5f;
break;
case joaat("tula"):
*uParam1=0.15f;
break;
case joaat("khanjali"):
*uParam1=0.6f;
break;
case joaat("bruiser"):
*uParam1=1f;
break;
case joaat("bruiser2"):
*uParam1=1f;
break;
case joaat("bruiser3"):
*uParam1=1f;
break;
case joaat("brutus"):
*uParam1=1f;
break;
case joaat("brutus2"):
*uParam1=1f;
break;
case joaat("brutus3"):
*uParam1=1f;
break;
case joaat("cerberus"):
*uParam1=1f;
break;
case joaat("cerberus2"):
*uParam1=1f;
break;
case joaat("cerberus3"):
*uParam1=1f;
break;
case joaat("deathbike"):
*uParam1=1f;
break;
case joaat("deathbike2"):
*uParam1=1f;
break;
case joaat("deathbike3"):
*uParam1=1f;
break;
case joaat("dominator4"):
*uParam1=1f;
break;
case joaat("dominator5"):
*uParam1=1f;
break;
case joaat("dominator6"):
*uParam1=1f;
break;
case joaat("impaler2"):
*uParam1=1f;
break;
case joaat("impaler3"):
*uParam1=1f;
break;
case joaat("impaler4"):
*uParam1=1f;
break;
case joaat("imperator"):
*uParam1=1f;
break;
case joaat("imperator2"):
*uParam1=1f;
break;
case joaat("imperator3"):
*uParam1=1f;
break;
case joaat("issi4"):
*uParam1=1f;
break;
case joaat("issi5"):
*uParam1=1f;
break;
case joaat("issi6"):
*uParam1=1f;
break;
case joaat("monster3"):
*uParam1=1f;
break;
case joaat("monster4"):
*uParam1=1f;
break;
case joaat("monster5"):
*uParam1=1f;
break;
case joaat("scarab"):
*uParam1=1f;
break;
case joaat("scarab2"):
*uParam1=1f;
break;
case joaat("scarab3"):
*uParam1=1f;
break;
case joaat("slamvan4"):
*uParam1=1f;
break;
case joaat("slamvan5"):
*uParam1=1f;
break;
case joaat("slamvan6"):
*uParam1=1f;
break;
case joaat("zr380"):
*uParam1=1f;
break;
case joaat("zr3802"):
*uParam1=1f;
break;
case joaat("zr3803"):
*uParam1=1f;
break;
}
return *uParam1 !=-1f;
}

int func_342(int iParam0){
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


void func_343(int iParam0, var uParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(uParam1->f_66 !=0){
}
if(!func_359(iParam0)){
if(MISC::GET_HASH_KEY(&(uParam1->f_1)) !=0){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
}
if(*uParam1 >=0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES()){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
}}
if(uParam1->f_66==joaat("sovereign")){
uParam1->f_5=111;
uParam1->f_6=111;
uParam1->f_7=111;
}elseif(uParam1->f_66==joaat("casco")){
iVar0=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_358(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_358(iVar6));
}
iVar6++;
}}
if(uParam1->f_66==joaat("nightshark")){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 0);
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 5) !=-1){
VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 1);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 13)){
VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 12)){
VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
}else{
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
}
if(uParam1->f_5 !=-1 && uParam1->f_6 !=-1){
if(func_282(uParam1->f_5) || func_282(uParam1->f_6)){
}else{
VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
}}
if(uParam1->f_7 < 0){
uParam1->f_7=0;
}
if(uParam1->f_8 < 0){
uParam1->f_8=0;
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_357(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_356()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_355(uParam1->f_66)){
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
}else{
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
}
if(MISC::IS_BIT_SET(uParam1->f_77, 9)){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
VEHICLE::SET_DRIFT_TYRES(iParam0, 0);
}
if(bParam2){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
}
VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
if(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >=0){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
}
if(uParam1->f_69 > -1 && uParam1->f_69 < 255){
if(!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(uParam1->f_69==6){
func_291(iParam0, uParam1->f_69);
}}else{
func_291(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_350(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_358(iVar7 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
}
iVar7++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
}}
if(((func_344() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
if(!MISC::IS_BIT_SET(uParam1->f_77, 23)){
if(MISC::IS_BIT_SET(uParam1->f_77, 22)){
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
}}else{
VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
}}
if(MISC::IS_BIT_SET(uParam1->f_77, 27)){
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
}else{
DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
}}}

int func_344(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_348(7)){
if(func_346(Global_2672505.f_4.f_16) || func_345(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_345(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_346(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_347(iParam0, 9);
}
return 0;
}


var func__347(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_348(int iParam0){
return func_349(&(Global_2672505.f_184), iParam0);
}


var func__349(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_350(int iParam0, var uParam1, var uParam2){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)){
return 0;
}
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0)==0){
return 0;
}
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
iVar0=0;
while (iVar0 < *uParam1){
iVar1=iVar0;
if((((iVar1==17 || iVar1==18) || iVar1==19) || iVar1==20) || iVar1==21){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
}elseif(iVar1==22){
if((*uParam1)[iVar0] > 0){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
if((*uParam1)[iVar0]==1){
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
}else{
VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
}}else{
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
}}elseif(VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) !=((*uParam1)[iVar0] - 1)){
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
if((*uParam1)[iVar0] > 0){
if(iVar1==23){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
}elseif(iVar1==24){
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
}elseif(func_250(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_354(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_353(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_353(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_352(iParam0);
if(func_351(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_351(int iParam0){
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


void func_352(var uParam0){
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

int func_353(int iParam0, int iParam1){
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
iVar0=func_249(iParam0, 38) + 1;
iVar1=func_249(iParam0, 24) + 1;
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

int func_354(int iParam0, int iParam1){
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

int func_355(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


bool func_356(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_357(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(iVar0, 4);
}}}
return 0;
}

int func_358(int iParam0){
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

int func_359(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_360(PLAYER::PLAYER_ID(), -1)){
iParam0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
if(func_320(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_319(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_360(bool bParam0, int iParam1){
int iVar0;
if(func_1680(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}


void func_361(var uParam0, var uParam1, int iParam2, int iParam3){
switch (iParam2){
case joaat("primo2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "43SNR624", 16);
uParam0->f_5=1;
uParam0->f_6=1;
uParam0->f_7=0;
uParam0->f_8=88;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[0]=2;
uParam0->f_9[1]=3;
uParam0->f_9[3]=1;
uParam0->f_9[4]=3;
uParam0->f_9[6]=5;
uParam0->f_9[7]=3;
uParam0->f_9[23]=1;
uParam0->f_9[24]=4;
uParam0->f_9[27]=3;
uParam0->f_9[38]=4;
uParam0->f_9[48]=5;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 1:
StringCopy(&(uParam0->f_1), "43SNR624", 16);
uParam0->f_5=8;
uParam0->f_6=0;
uParam0->f_7=5;
uParam0->f_8=88;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=2;
uParam0->f_9[3]=1;
uParam0->f_9[4]=4;
uParam0->f_9[6]=4;
uParam0->f_9[23]=11;
uParam0->f_9[24]=2;
uParam0->f_9[27]=3;
uParam0->f_9[38]=2;
uParam0->f_9[48]=3;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 2:
StringCopy(&(uParam0->f_1), "43SNR624", 16);
uParam0->f_5=1;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=88;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=2;
uParam0->f_9[3]=1;
uParam0->f_9[4]=4;
uParam0->f_9[6]=4;
uParam0->f_9[23]=12;
uParam0->f_9[24]=2;
uParam0->f_9[27]=3;
uParam0->f_9[38]=2;
uParam0->f_9[48]=8;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 3:
StringCopy(&(uParam0->f_1), "84RLR605", 16);
uParam0->f_5=111;
uParam0->f_6=88;
uParam0->f_7=0;
uParam0->f_8=88;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[1]=4;
uParam0->f_9[2]=1;
uParam0->f_9[4]=1;
uParam0->f_9[6]=1;
uParam0->f_9[23]=12;
uParam0->f_9[24]=1;
uParam0->f_9[38]=1;
uParam0->f_9[48]=6;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 4:
StringCopy(&(uParam0->f_1), "04HPD144", 16);
uParam0->f_5=0;
uParam0->f_6=10;
uParam0->f_7=0;
uParam0->f_8=88;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[0]=2;
uParam0->f_9[1]=3;
uParam0->f_9[2]=1;
uParam0->f_9[6]=4;
uParam0->f_9[7]=3;
uParam0->f_9[23]=1;
uParam0->f_9[24]=1;
uParam0->f_9[38]=1;
uParam0->f_9[48]=2;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("baller3"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "82BJD682", 16);
*uParam0=1;
uParam0->f_5=0;
uParam0->f_6=34;
uParam0->f_7=145;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=12;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=35;
uParam0->f_75=1;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=1;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[15]=3;
uParam0->f_9[16]=3;
uParam0->f_9[22]=1;
uParam0->f_9[23]=18;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 1:
StringCopy(&(uParam0->f_1), "27YTR728", 16);
*uParam0=2;
uParam0->f_5=49;
uParam0->f_6=49;
uParam0->f_7=52;
uParam0->f_8=1;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=222;
uParam0->f_75=222;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 24);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=1;
uParam0->f_9[13]=1;
uParam0->f_9[15]=1;
uParam0->f_9[16]=3;
uParam0->f_9[18]=1;
uParam0->f_9[23]=14;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("dominator8"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "48HQW158", 16);
*uParam0=1;
uParam0->f_5=147;
uParam0->f_6=0;
uParam0->f_7=4;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=2;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=1;
uParam0->f_9[2]=1;
uParam0->f_9[3]=4;
uParam0->f_9[4]=4;
uParam0->f_9[6]=1;
uParam0->f_9[7]=15;
uParam0->f_9[8]=1;
uParam0->f_9[10]=2;
uParam0->f_9[11]=2;
uParam0->f_9[12]=2;
uParam0->f_9[13]=1;
uParam0->f_9[23]=3;
uParam0->f_9[26]=5;
uParam0->f_9[32]=1;
uParam0->f_9[39]=6;
uParam0->f_9[40]=7;
uParam0->f_9[41]=5;
uParam0->f_9[43]=1;
uParam0->f_9[45]=2;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("champion"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "45CQM984", 16);
*uParam0=1;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=49;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=1;
uParam0->f_9[11]=2;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[15]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
}}


void func_362(var uParam0, var uParam1, int iParam2, int iParam3){
switch (iParam2){
case joaat("gauntlet4"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "MOODYMAN", 16);
uParam0->f_5=111;
uParam0->f_6=111;
uParam0->f_7=0;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=11;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[1]=1;
uParam0->f_9[3]=1;
uParam0->f_9[4]=1;
uParam0->f_9[6]=3;
uParam0->f_9[7]=4;
uParam0->f_9[15]=1;
uParam0->f_9[23]=15;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("jester3"):
switch (iParam3){
case 0:
uParam0->f_5=38;
uParam0->f_6=12;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_75=62;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
uParam0->f_9[0]=8;
uParam0->f_9[1]=11;
uParam0->f_9[2]=2;
uParam0->f_9[3]=2;
uParam0->f_9[4]=4;
uParam0->f_9[5]=3;
uParam0->f_9[6]=2;
uParam0->f_9[7]=5;
uParam0->f_9[8]=1;
uParam0->f_9[15]=5;
uParam0->f_9[22]=1;
uParam0->f_9[23]=26;
uParam0->f_9[48]=10;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("peyote2"):
switch (iParam3){
case 0:
*uParam0=1;
uParam0->f_5=11;
uParam0->f_6=39;
uParam0->f_7=2;
uParam0->f_8=30;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[4]=8;
uParam0->f_9[5]=2;
uParam0->f_9[6]=3;
uParam0->f_9[7]=12;
uParam0->f_9[14]=1;
uParam0->f_9[15]=4;
uParam0->f_9[22]=1;
uParam0->f_9[23]=11;
uParam0->f_9[48]=10;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("elegy"):
switch (iParam3){
case 0:
*uParam0=3;
uParam0->f_5=4;
uParam0->f_6=6;
uParam0->f_7=111;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=3;
uParam0->f_75=83;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
uParam0->f_9[0]=16;
uParam0->f_9[1]=3;
uParam0->f_9[3]=4;
uParam0->f_9[4]=8;
uParam0->f_9[5]=5;
uParam0->f_9[7]=6;
uParam0->f_9[8]=4;
uParam0->f_9[10]=3;
uParam0->f_9[15]=4;
uParam0->f_9[20]=1;
uParam0->f_9[22]=1;
uParam0->f_9[23]=16;
uParam0->f_9[25]=1;
uParam0->f_9[26]=1;
uParam0->f_9[27]=1;
uParam0->f_9[29]=4;
uParam0->f_9[30]=11;
uParam0->f_9[31]=7;
uParam0->f_9[32]=12;
uParam0->f_9[33]=11;
uParam0->f_9[39]=4;
uParam0->f_9[40]=5;
uParam0->f_9[41]=7;
uParam0->f_9[42]=2;
uParam0->f_9[43]=3;
uParam0->f_9[45]=5;
uParam0->f_9[46]=1;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("hustler"):
switch (iParam3){
case 0:
*uParam0=1;
uParam0->f_5=66;
uParam0->f_6=66;
uParam0->f_7=60;
uParam0->f_8=30;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=11;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), false);
uParam0->f_9[1]=1;
uParam0->f_9[2]=1;
uParam0->f_9[4]=3;
uParam0->f_9[6]=4;
uParam0->f_9[7]=1;
uParam0->f_9[10]=1;
uParam0->f_9[15]=4;
uParam0->f_9[22]=1;
uParam0->f_9[23]=24;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("faction3"):
switch (iParam3){
case 0:
uParam0->f_5=142;
uParam0->f_6=159;
uParam0->f_7=81;
uParam0->f_8=142;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=9;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=15;
uParam0->f_75=3;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
MISC::SET_BIT(&(uParam0->f_77), 2);
uParam0->f_9[7]=1;
uParam0->f_9[23]=216;
uParam0->f_9[24]=4;
uParam0->f_9[27]=2;
uParam0->f_9[30]=11;
uParam0->f_9[33]=10;
uParam0->f_9[35]=10;
uParam0->f_9[36]=1;
uParam0->f_9[37]=7;
uParam0->f_9[39]=2;
uParam0->f_9[40]=3;
uParam0->f_9[48]=8;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("italigto"):
switch (iParam3){
case 0:
*uParam0=1;
uParam0->f_5=112;
uParam0->f_6=112;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_9[0]=7;
uParam0->f_9[1]=1;
uParam0->f_9[2]=3;
uParam0->f_9[3]=6;
uParam0->f_9[4]=5;
uParam0->f_9[6]=2;
uParam0->f_9[7]=8;
uParam0->f_9[8]=3;
uParam0->f_9[10]=5;
uParam0->f_9[15]=3;
uParam0->f_9[20]=1;
uParam0->f_9[22]=1;
uParam0->f_9[23]=17;
uParam0->f_9[48]=4;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("hellion"):
switch (iParam3){
case 0:
*uParam0=1;
uParam0->f_5=0;
uParam0->f_6=53;
uParam0->f_7=10;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=94;
uParam0->f_75=255;
uParam0->f_76=1;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
uParam0->f_9[0]=2;
uParam0->f_9[1]=1;
uParam0->f_9[2]=1;
uParam0->f_9[3]=3;
uParam0->f_9[6]=1;
uParam0->f_9[8]=1;
uParam0->f_9[15]=3;
uParam0->f_9[23]=18;
uParam0->f_9[48]=10;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("manana2"):
switch (iParam3){
case 0:
*uParam0=3;
uParam0->f_5=112;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_75=5;
uParam0->f_76=190;
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
MISC::SET_BIT(&(uParam0->f_77), 2);
uParam0->f_9[23]=26;
uParam0->f_9[24]=1;
uParam0->f_9[26]=12;
uParam0->f_9[27]=8;
uParam0->f_9[30]=12;
uParam0->f_9[33]=12;
uParam0->f_9[34]=12;
uParam0->f_9[37]=1;
uParam0->f_9[38]=1;
uParam0->f_9[39]=4;
uParam0->f_9[40]=1;
uParam0->f_9[42]=2;
uParam0->f_9[45]=2;
uParam0->f_9[48]=7;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("slamvan3"):
switch (iParam3){
case 0:
*uParam0=3;
uParam0->f_5=82;
uParam0->f_6=23;
uParam0->f_7=0;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=3;
uParam0->f_75=83;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
uParam0->f_9[0]=1;
uParam0->f_9[1]=1;
uParam0->f_9[6]=3;
uParam0->f_9[7]=1;
uParam0->f_9[10]=1;
uParam0->f_9[23]=17;
uParam0->f_9[24]=4;
uParam0->f_9[25]=5;
uParam0->f_9[26]=1;
uParam0->f_9[27]=2;
uParam0->f_9[28]=19;
uParam0->f_9[32]=9;
uParam0->f_9[33]=9;
uParam0->f_9[34]=1;
uParam0->f_9[35]=22;
uParam0->f_9[39]=4;
uParam0->f_9[40]=4;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("flashgt"):
switch (iParam3){
case 0:
*uParam0=2;
uParam0->f_5=73;
uParam0->f_6=73;
uParam0->f_7=73;
uParam0->f_8=1;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=11;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=3;
uParam0->f_75=83;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
uParam0->f_9[0]=6;
uParam0->f_9[1]=3;
uParam0->f_9[3]=6;
uParam0->f_9[4]=1;
uParam0->f_9[5]=3;
uParam0->f_9[7]=5;
uParam0->f_9[10]=3;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
uParam0->f_9[23]=107;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("baller5"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "KP1", 16);
uParam0->f_5=12;
uParam0->f_6=0;
uParam0->f_7=2;
uParam0->f_8=7;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("tailgater2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "45PDD194", 16);
*uParam0=3;
uParam0->f_5=89;
uParam0->f_6=89;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=24;
uParam0->f_9[1]=9;
uParam0->f_9[2]=6;
uParam0->f_9[3]=3;
uParam0->f_9[4]=6;
uParam0->f_9[7]=16;
uParam0->f_9[8]=1;
uParam0->f_9[10]=12;
uParam0->f_9[11]=2;
uParam0->f_9[12]=1;
uParam0->f_9[13]=1;
uParam0->f_9[18]=1;
uParam0->f_9[22]=1;
uParam0->f_9[23]=17;
uParam0->f_9[26]=1;
uParam0->f_9[39]=4;
uParam0->f_9[40]=6;
uParam0->f_9[41]=18;
uParam0->f_9[43]=1;
uParam0->f_9[47]=2;
uParam0->f_9[48]=5;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 1:
*uParam0=3;
uParam0->f_5=5;
uParam0->f_6=5;
uParam0->f_7=5;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=12;
uParam0->f_9[1]=6;
uParam0->f_9[2]=3;
uParam0->f_9[3]=1;
uParam0->f_9[4]=4;
uParam0->f_9[7]=4;
uParam0->f_9[8]=1;
uParam0->f_9[10]=8;
uParam0->f_9[11]=2;
uParam0->f_9[12]=1;
uParam0->f_9[13]=1;
uParam0->f_9[18]=1;
uParam0->f_9[22]=1;
uParam0->f_9[23]=3;
uParam0->f_9[39]=1;
uParam0->f_9[40]=4;
uParam0->f_9[41]=14;
uParam0->f_9[43]=3;
uParam0->f_9[47]=1;
uParam0->f_9[48]=6;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("remus"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "LI1DEE", 16);
uParam0->f_5=29;
uParam0->f_6=29;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=12;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=11;
uParam0->f_9[1]=6;
uParam0->f_9[2]=2;
uParam0->f_9[3]=4;
uParam0->f_9[4]=4;
uParam0->f_9[6]=6;
uParam0->f_9[7]=8;
uParam0->f_9[8]=2;
uParam0->f_9[10]=1;
uParam0->f_9[11]=1;
uParam0->f_9[12]=1;
uParam0->f_9[13]=1;
uParam0->f_9[15]=1;
uParam0->f_9[22]=1;
uParam0->f_9[23]=29;
uParam0->f_9[29]=1;
uParam0->f_9[30]=1;
uParam0->f_9[31]=2;
uParam0->f_9[32]=12;
uParam0->f_9[33]=2;
uParam0->f_9[39]=6;
uParam0->f_9[40]=1;
uParam0->f_9[41]=7;
uParam0->f_9[43]=3;
uParam0->f_9[44]=4;
uParam0->f_9[47]=1;
uParam0->f_9[48]=7;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("trailerlarge"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "25GXP027", 16);
uParam0->f_5=19;
uParam0->f_6=15;
uParam0->f_7=19;
uParam0->f_8=19;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("italigtb2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "92HWX276", 16);
uParam0->f_5=27;
uParam0->f_6=30;
uParam0->f_7=36;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=20;
uParam0->f_63=20;
uParam0->f_64=20;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[1]=4;
uParam0->f_9[4]=4;
uParam0->f_9[7]=6;
uParam0->f_9[9]=3;
uParam0->f_9[10]=1;
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[16]=5;
uParam0->f_9[18]=1;
uParam0->f_9[20]=1;
uParam0->f_9[22]=1;
uParam0->f_9[30]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("superd"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), " L1T1G8 ", 16);
uParam0->f_5=33;
uParam0->f_6=0;
uParam0->f_7=47;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), 26);
uParam0->f_9[11]=1;
uParam0->f_9[12]=1;
uParam0->f_9[13]=1;
uParam0->f_9[14]=27;
uParam0->f_9[15]=2;
uParam0->f_9[16]=2;
uParam0->f_9[23]=26;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("patriot2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "L1", 16);
*uParam0=4;
uParam0->f_5=0;
uParam0->f_6=0;
uParam0->f_7=10;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[1]=2;
uParam0->f_9[2]=2;
uParam0->f_9[7]=1;
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[16]=5;
uParam0->f_9[22]=1;
uParam0->f_9[23]=24;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 1:
StringCopy(&(uParam0->f_1), "L2", 16);
*uParam0=4;
uParam0->f_5=112;
uParam0->f_6=112;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[1]=1;
uParam0->f_9[2]=1;
uParam0->f_9[7]=2;
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[16]=5;
uParam0->f_9[22]=1;
uParam0->f_9[23]=24;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("bagger"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), " FC88 ", 16);
*uParam0=4;
uParam0->f_5=53;
uParam0->f_6=0;
uParam0->f_7=59;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[4]=3;
uParam0->f_9[5]=2;
uParam0->f_9[8]=1;
uParam0->f_9[16]=5;
uParam0->f_9[22]=1;
uParam0->f_9[23]=3;
uParam0->f_9[24]=3;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("jubilee"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "FCP1", 16);
*uParam0=4;
uParam0->f_5=4;
uParam0->f_6=0;
uParam0->f_7=5;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[1]=14;
uParam0->f_9[2]=8;
uParam0->f_9[3]=6;
uParam0->f_9[4]=6;
uParam0->f_9[7]=6;
uParam0->f_9[11]=2;
uParam0->f_9[12]=1;
uParam0->f_9[13]=1;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
if(((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_399() !=func_72()) && func_363(func_399())) && MISC::IS_BIT_SET(Global_1853910[func_399() /*862*/].f_267.f_500.f_1, 21)){
uParam0->f_9[5]=1;
}
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
}}


bool func_363(int iParam0){
return Global_1853910[iParam0 /*862*/].f_267.f_500 !=0;
}


void func_364(var uParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
switch (iParam2){
case joaat("asbo"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "47BQT444", 16);
uParam0->f_5=67;
uParam0->f_6=67;
uParam0->f_7=67;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=7;
uParam0->f_9[1]=3;
uParam0->f_9[3]=1;
uParam0->f_9[5]=3;
uParam0->f_9[7]=5;
uParam0->f_9[8]=1;
uParam0->f_9[10]=6;
uParam0->f_9[23]=5;
uParam0->f_9[48]=6;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "03QPK213", 16);
uParam0->f_5=92;
uParam0->f_6=92;
uParam0->f_7=92;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=15;
uParam0->f_9[1]=5;
uParam0->f_9[3]=10;
uParam0->f_9[6]=2;
uParam0->f_9[7]=5;
uParam0->f_9[8]=4;
uParam0->f_9[23]=46;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
*uParam0=4;
uParam0->f_5=135;
uParam0->f_6=111;
uParam0->f_7=135;
uParam0->f_8=81;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=2;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_75=255;
uParam0->f_9[0]=13;
uParam0->f_9[1]=5;
uParam0->f_9[3]=9;
uParam0->f_9[4]=8;
uParam0->f_9[5]=3;
uParam0->f_9[6]=1;
uParam0->f_9[7]=5;
uParam0->f_9[8]=1;
uParam0->f_9[9]=3;
uParam0->f_9[10]=4;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
uParam0->f_9[23]=5;
uParam0->f_9[48]=2;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("buccaneer"):
switch (iParam3){
case 0:
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 11, 1, 0);
func_365(*uParam1, 12, 0, 0);
func_365(*uParam1, 13, 0, 0);
func_365(*uParam1, 15, 1, 0);
func_365(*uParam1, 23, 6, 0);
break;
case 1:
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 2, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 11, 2, 0);
func_365(*uParam1, 12, 1, 0);
func_365(*uParam1, 13, 1, 0);
func_365(*uParam1, 15, 2, 0);
func_365(*uParam1, 23, 13, 0);
break;
case 2:
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 7, 3, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 11, 3, 0);
func_365(*uParam1, 12, 2, 0);
func_365(*uParam1, 13, 2, 0);
func_365(*uParam1, 15, 3, 0);
func_365(*uParam1, 23, 9, 0);
break;
}
break;
case joaat("buccaneer2"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 10, 0, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 15, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 12, 0);
func_365(*uParam1, 26, 13, 0);
func_365(*uParam1, 28, 13, 0);
func_365(*uParam1, 30, 2, 0);
func_365(*uParam1, 33, 9, 0);
func_365(*uParam1, 34, 9, 0);
func_365(*uParam1, 35, 12, 0);
func_365(*uParam1, 36, 3, 0);
func_365(*uParam1, 37, 6, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 4, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 1:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 3, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 23, 29, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 9, 0);
func_365(*uParam1, 26, 2, 0);
func_365(*uParam1, 28, 13, 0);
func_365(*uParam1, 30, 13, 0);
func_365(*uParam1, 33, 13, 0);
func_365(*uParam1, 34, 8, 0);
func_365(*uParam1, 35, 13, 0);
func_365(*uParam1, 36, 3, 0);
func_365(*uParam1, 37, 5, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 2:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 3, 0);
func_365(*uParam1, 10, 0, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 29, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 12, 0);
func_365(*uParam1, 28, 2, 0);
func_365(*uParam1, 30, 3, 0);
func_365(*uParam1, 33, 13, 0);
func_365(*uParam1, 34, 11, 0);
func_365(*uParam1, 35, 11, 0);
func_365(*uParam1, 36, 2, 0);
func_365(*uParam1, 37, 3, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 1, 0);
func_365(*uParam1, 40, 3, 0);
break;
case 3:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 4, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 9, 0);
func_365(*uParam1, 26, 1, 0);
func_365(*uParam1, 28, 10, 0);
func_365(*uParam1, 30, 2, 0);
func_365(*uParam1, 33, 10, 0);
func_365(*uParam1, 34, 10, 0);
func_365(*uParam1, 35, 1, 0);
func_365(*uParam1, 36, 3, 0);
func_365(*uParam1, 37, 4, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 1, 0);
func_365(*uParam1, 40, 3, 0);
break;
case 4:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 23, 13, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 28, 4, 0);
func_365(*uParam1, 30, 3, 0);
func_365(*uParam1, 33, 6, 0);
func_365(*uParam1, 34, 13, 0);
func_365(*uParam1, 35, 3, 0);
func_365(*uParam1, 36, 0, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 5:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 23, 10, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 5, 0);
func_365(*uParam1, 26, 8, 0);
func_365(*uParam1, 28, 6, 0);
func_365(*uParam1, 30, 6, 0);
func_365(*uParam1, 33, 8, 0);
func_365(*uParam1, 34, 6, 0);
func_365(*uParam1, 35, 8, 0);
func_365(*uParam1, 36, 3, 0);
func_365(*uParam1, 37, 1, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 2, 0);
func_365(*uParam1, 40, 1, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 6:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 2, 0);
func_365(*uParam1, 10, 1, 0);
func_365(*uParam1, 23, 17, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 2, 0);
func_365(*uParam1, 26, 13, 0);
func_365(*uParam1, 28, 13, 0);
func_365(*uParam1, 30, 12, 0);
func_365(*uParam1, 33, 2, 0);
func_365(*uParam1, 34, 9, 0);
func_365(*uParam1, 35, 12, 0);
func_365(*uParam1, 36, 0, 0);
func_365(*uParam1, 37, 1, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 2, 0);
func_365(*uParam1, 40, 0, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 7:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 6, 0, 0);
func_365(*uParam1, 7, 3, 0);
func_365(*uParam1, 8, 0, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 23, 11, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 3, 0);
func_365(*uParam1, 26, 14, 0);
func_365(*uParam1, 28, 1, 0);
func_365(*uParam1, 30, 1, 0);
func_365(*uParam1, 33, 3, 0);
func_365(*uParam1, 34, 3, 0);
func_365(*uParam1, 35, 10, 0);
func_365(*uParam1, 36, 2, 0);
func_365(*uParam1, 37, 6, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 0, 0);
func_365(*uParam1, 40, 3, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 8:
StringCopy(&(uParam0->f_1), "12TCU014", 16);
*uParam0=1;
uParam0->f_5=88;
uParam0->f_6=36;
uParam0->f_7=88;
uParam0->f_8=41;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=9;
uParam0->f_62=255;
uParam0->f_63=127;
uParam0->f_74=255;
uParam0->f_75=150;
uParam0->f_76=5;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
uParam0->f_9[1]=1;
uParam0->f_9[2]=1;
uParam0->f_9[4]=1;
uParam0->f_9[7]=1;
uParam0->f_9[8]=1;
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[14]=8;
uParam0->f_9[20]=1;
uParam0->f_9[23]=80;
uParam0->f_9[24]=3;
uParam0->f_9[25]=2;
uParam0->f_9[26]=3;
uParam0->f_9[27]=10;
uParam0->f_9[28]=1;
uParam0->f_9[30]=4;
uParam0->f_9[33]=12;
uParam0->f_9[34]=14;
uParam0->f_9[35]=18;
uParam0->f_9[36]=4;
uParam0->f_9[37]=7;
uParam0->f_9[38]=3;
uParam0->f_9[39]=3;
uParam0->f_9[40]=2;
uParam0->f_9[45]=1;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 9:
func_365(*uParam1, 4, 0, 0);
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, 1, true);
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, 2, true);
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, 3, true);
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, 4, true);
break;
}
break;
case joaat("chino2"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 23, 19, 1);
func_365(*uParam1, 24, 3, 0);
break;
case 1:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 21, 1);
func_365(*uParam1, 24, 3, 0);
break;
case 2:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 7, 1, 0);
func_365(*uParam1, 9, 1, 0);
func_365(*uParam1, 23, 29, 1);
func_365(*uParam1, 24, 3, 0);
func_365(*uParam1, 25, 2, 0);
func_365(*uParam1, 26, 1, 0);
func_365(*uParam1, 27, 0, 0);
func_365(*uParam1, 28, 17, 0);
func_365(*uParam1, 30, 12, 0);
func_365(*uParam1, 33, 11, 0);
func_365(*uParam1, 34, 2, 0);
func_365(*uParam1, 35, 13, 0);
func_365(*uParam1, 37, 5, 0);
func_365(*uParam1, 38, 4, 0);
func_365(*uParam1, 39, 0, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 3:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 9, 1, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 27, 1);
func_365(*uParam1, 24, 3, 0);
func_365(*uParam1, 25, 12, 0);
func_365(*uParam1, 26, 12, 0);
func_365(*uParam1, 27, 9, 0);
func_365(*uParam1, 28, 15, 0);
func_365(*uParam1, 30, 2, 0);
func_365(*uParam1, 33, 2, 0);
func_365(*uParam1, 34, 13, 0);
func_365(*uParam1, 35, 14, 0);
func_365(*uParam1, 37, 7, 0);
func_365(*uParam1, 38, 4, 0);
func_365(*uParam1, 39, 3, 0);
func_365(*uParam1, 40, 1, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 4:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 9, 1, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 15, 1);
func_365(*uParam1, 24, 3, 0);
func_365(*uParam1, 27, 10, 0);
func_365(*uParam1, 28, 11, 0);
func_365(*uParam1, 30, 2, 0);
func_365(*uParam1, 33, 7, 0);
func_365(*uParam1, 34, 4, 0);
func_365(*uParam1, 35, 8, 0);
func_365(*uParam1, 37, 3, 0);
func_365(*uParam1, 38, 4, 0);
func_365(*uParam1, 39, 2, 0);
func_365(*uParam1, 40, 0, 0);
func_365(*uParam1, 45, 1, 0);
break;
}
break;
case joaat("faction2"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 23, 23, 1);
func_365(*uParam1, 25, 4, 0);
func_365(*uParam1, 26, 9, 0);
func_365(*uParam1, 27, 3, 0);
func_365(*uParam1, 28, 15, 0);
func_365(*uParam1, 30, 12, 0);
func_365(*uParam1, 33, 3, 0);
func_365(*uParam1, 34, 0, 0);
func_365(*uParam1, 35, 11, 0);
func_365(*uParam1, 36, 1, 0);
func_365(*uParam1, 38, 0, 0);
func_365(*uParam1, 39, 3, 0);
func_365(*uParam1, 40, 4, 0);
break;
case 1:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 11, 1, 0);
func_365(*uParam1, 16, 3, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 13, 1);
func_365(*uParam1, 25, 2, 0);
func_365(*uParam1, 26, 0, 0);
func_365(*uParam1, 27, 0, 0);
func_365(*uParam1, 28, 10, 0);
func_365(*uParam1, 30, 4, 0);
func_365(*uParam1, 33, 15, 0);
func_365(*uParam1, 34, 2, 0);
func_365(*uParam1, 35, 0, 0);
func_365(*uParam1, 36, 1, 0);
func_365(*uParam1, 37, 1, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 2, 0);
func_365(*uParam1, 40, 4, 0);
break;
case 2:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 23, 21, 1);
func_365(*uParam1, 24, 0, 0);
func_365(*uParam1, 25, 0, 0);
func_365(*uParam1, 26, 2, 0);
func_365(*uParam1, 27, 4, 0);
func_365(*uParam1, 28, 1, 0);
func_365(*uParam1, 30, 4, 0);
func_365(*uParam1, 33, 4, 0);
func_365(*uParam1, 34, 14, 0);
func_365(*uParam1, 35, 10, 0);
func_365(*uParam1, 36, 0, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 0, 0);
break;
case 3:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 7, 0, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 20, true);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 20, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 1, 0);
func_365(*uParam1, 26, 8, 0);
func_365(*uParam1, 28, 0, 0);
func_365(*uParam1, 30, 10, 0);
func_365(*uParam1, 33, 10, 0);
func_365(*uParam1, 34, 1, 0);
func_365(*uParam1, 35, 1, 0);
func_365(*uParam1, 36, 1, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 2, 0);
func_365(*uParam1, 40, 4, 0);
break;
case 4:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 23, 29, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 12, 0);
func_365(*uParam1, 26, 2, 0);
func_365(*uParam1, 27, 2, 0);
func_365(*uParam1, 28, 12, 0);
func_365(*uParam1, 30, 4, 0);
func_365(*uParam1, 33, 6, 0);
func_365(*uParam1, 34, 12, 0);
func_365(*uParam1, 35, 10, 0);
func_365(*uParam1, 36, 1, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 3, 0);
func_365(*uParam1, 40, 2, 0);
break;
case 5:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 23, 10, 1);
func_365(*uParam1, 24, 0, 0);
func_365(*uParam1, 25, 0, 0);
func_365(*uParam1, 26, 9, 0);
func_365(*uParam1, 27, 1, 0);
func_365(*uParam1, 28, 5, 0);
func_365(*uParam1, 30, 0, 0);
func_365(*uParam1, 33, 0, 0);
func_365(*uParam1, 34, 0, 0);
func_365(*uParam1, 35, 0, 0);
func_365(*uParam1, 36, 0, 0);
func_365(*uParam1, 37, 0, 0);
func_365(*uParam1, 38, 1, 0);
func_365(*uParam1, 39, 1, 0);
func_365(*uParam1, 40, 1, 0);
break;
case 6:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 23, 11, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 3, 0);
func_365(*uParam1, 26, 12, 0);
func_365(*uParam1, 27, 0, 0);
func_365(*uParam1, 28, 14, 0);
func_365(*uParam1, 30, 10, 0);
func_365(*uParam1, 33, 4, 0);
func_365(*uParam1, 34, 4, 0);
func_365(*uParam1, 35, 7, 0);
func_365(*uParam1, 36, 1, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 3, 0);
func_365(*uParam1, 39, 1, 0);
func_365(*uParam1, 40, 3, 0);
break;
case 7:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 7, 0, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 20, true);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 10, 1);
func_365(*uParam1, 24, 1, 0);
func_365(*uParam1, 25, 11, 0);
func_365(*uParam1, 26, 11, 0);
func_365(*uParam1, 27, 1, 0);
func_365(*uParam1, 28, 11, 0);
func_365(*uParam1, 30, 13, 0);
func_365(*uParam1, 33, 15, 0);
func_365(*uParam1, 34, 14, 0);
func_365(*uParam1, 35, 14, 0);
func_365(*uParam1, 36, 0, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 2, 0);
func_365(*uParam1, 39, 3, 0);
func_365(*uParam1, 40, 4, 0);
break;
}
break;
case joaat("moonbeam2"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 5, 0, 0);
func_365(*uParam1, 10, 0, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 18, 1);
func_365(*uParam1, 24, 2, 0);
func_365(*uParam1, 25, 6, 0);
func_365(*uParam1, 26, 3, 0);
func_365(*uParam1, 27, 0, 0);
func_365(*uParam1, 28, 2, 0);
func_365(*uParam1, 31, 4, 0);
func_365(*uParam1, 32, 0, 0);
func_365(*uParam1, 33, 12, 0);
func_365(*uParam1, 34, 12, 0);
func_365(*uParam1, 35, 9, 0);
func_365(*uParam1, 37, 3, 0);
func_365(*uParam1, 38, 3, 0);
break;
case 1:
uParam0->f_6=145;
uParam0->f_7=137;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=9;
uParam0->f_62=132;
uParam0->f_63=102;
uParam0->f_64=226;
uParam0->f_74=255;
uParam0->f_75=150;
uParam0->f_76=5;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=1;
uParam0->f_9[4]=1;
uParam0->f_9[5]=1;
uParam0->f_9[6]=1;
uParam0->f_9[10]=1;
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[14]=33;
uParam0->f_9[16]=5;
uParam0->f_9[18]=1;
uParam0->f_9[20]=1;
uParam0->f_9[22]=1;
uParam0->f_9[23]=206;
uParam0->f_9[24]=4;
uParam0->f_9[25]=5;
uParam0->f_9[26]=3;
uParam0->f_9[27]=1;
uParam0->f_9[28]=4;
uParam0->f_9[30]=7;
uParam0->f_9[31]=2;
uParam0->f_9[32]=1;
uParam0->f_9[33]=10;
uParam0->f_9[34]=4;
uParam0->f_9[35]=6;
uParam0->f_9[37]=2;
uParam0->f_9[38]=4;
uParam0->f_9[39]=2;
uParam0->f_9[40]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("panto"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 4);
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 3, 1, 0);
func_365(*uParam1, 4, 1, 0);
func_365(*uParam1, 5, 0, 0);
func_365(*uParam1, 6, 2, 0);
func_365(*uParam1, 23, 1, 0);
func_365(*uParam1, 26, 1, 0);
func_365(*uParam1, 30, 1, 0);
func_365(*uParam1, 34, 1, 0);
iVar0=1;
while (iVar0 <=6){
if(VEHICLE::DOES_EXTRA_EXIST(*uParam1, iVar0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, iVar0, false);
}
iVar0++;
}
break;
case 1:
func_365(*uParam1, 0, 0, 0);
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 3, 1, 0);
func_365(*uParam1, 4, 2, 0);
func_365(*uParam1, 5, 0, 0);
func_365(*uParam1, 6, 0, 0);
iVar0=1;
while (iVar0 <=6){
if(VEHICLE::DOES_EXTRA_EXIST(*uParam1, iVar0)){
VEHICLE::SET_VEHICLE_EXTRA(*uParam1, iVar0, false);
}
iVar0++;
}
break;
}
break;
case joaat("picador"):
switch (iParam3){
case 0:
func_365(*uParam1, 11, 3, 0);
func_365(*uParam1, 12, 2, 0);
func_365(*uParam1, 13, 2, 0);
func_365(*uParam1, 23, 34, 0);
break;
}
break;
case joaat("voodoo"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 1, 0);
func_365(*uParam1, 2, 1, 0);
func_365(*uParam1, 6, 2, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 25, 1);
func_365(*uParam1, 24, 1, 0);
func_365(*uParam1, 25, 7, 0);
func_365(*uParam1, 26, 11, 0);
func_365(*uParam1, 27, 9, 0);
func_365(*uParam1, 28, 11, 0);
func_365(*uParam1, 33, 4, 0);
func_365(*uParam1, 34, 9, 0);
func_365(*uParam1, 35, 12, 0);
func_365(*uParam1, 37, 2, 0);
func_365(*uParam1, 38, 2, 0);
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 43, 2, 0);
func_365(*uParam1, 45, 2, 0);
break;
case 1:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 2);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 6, 2, 0);
func_365(*uParam1, 11, 3, 0);
func_365(*uParam1, 12, 2, 0);
func_365(*uParam1, 13, 2, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 18, true);
func_365(*uParam1, 23, 18, 1);
func_365(*uParam1, 24, 3, 0);
func_365(*uParam1, 25, 7, 0);
func_365(*uParam1, 26, 5, 0);
func_365(*uParam1, 27, 9, 0);
func_365(*uParam1, 28, 9, 0);
func_365(*uParam1, 33, 11, 0);
func_365(*uParam1, 34, 2, 0);
func_365(*uParam1, 35, 3, 0);
func_365(*uParam1, 37, 1, 0);
func_365(*uParam1, 38, 4, 0);
func_365(*uParam1, 39, 3, 0);
func_365(*uParam1, 40, 1, 0);
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 43, 1, 0);
func_365(*uParam1, 45, 1, 0);
break;
}
break;
case joaat("banshee2"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 1, 0);
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 2, -1, 0);
func_365(*uParam1, 3, 2, 0);
func_365(*uParam1, 4, 4, 0);
func_365(*uParam1, 5, -1, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 7, 7, 0);
func_365(*uParam1, 9, -1, 0);
func_365(*uParam1, 10, -1, 0);
func_365(*uParam1, 11, -1, 0);
func_365(*uParam1, 12, -1, 0);
func_365(*uParam1, 13, -1, 0);
func_365(*uParam1, 14, -1, 0);
func_365(*uParam1, 15, -1, 0);
func_365(*uParam1, 16, -1, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
func_365(*uParam1, 23, 5, 0);
func_365(*uParam1, 24, -1, 0);
func_365(*uParam1, 25, -1, 0);
func_365(*uParam1, 26, -1, 0);
func_365(*uParam1, 27, -1, 0);
func_365(*uParam1, 28, -1, 0);
func_365(*uParam1, 29, -1, 0);
func_365(*uParam1, 30, -1, 0);
func_365(*uParam1, 31, 1, 0);
func_365(*uParam1, 32, 2, 0);
func_365(*uParam1, 33, 6, 0);
func_365(*uParam1, 34, 1, 0);
func_365(*uParam1, 35, -1, 0);
func_365(*uParam1, 36, -1, 0);
func_365(*uParam1, 37, -1, 0);
func_365(*uParam1, 38, -1, 0);
func_365(*uParam1, 39, -1, 0);
func_365(*uParam1, 40, -1, 0);
func_365(*uParam1, 41, -1, 0);
func_365(*uParam1, 42, -1, 0);
func_365(*uParam1, 43, -1, 0);
func_365(*uParam1, 44, -1, 0);
func_365(*uParam1, 45, -1, 0);
func_365(*uParam1, 46, -1, 0);
func_365(*uParam1, 47, -1, 0);
func_365(*uParam1, 48, 1, 0);
break;
case 1:
uParam0->f_66=joaat("banshee2");
StringCopy(&(uParam0->f_1), "65GRZ071", 16);
uParam0->f_5=27;
uParam0->f_6=27;
uParam0->f_7=27;
uParam0->f_8=2;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), true);
uParam0->f_9[0]=3;
uParam0->f_9[3]=2;
uParam0->f_9[4]=4;
uParam0->f_9[6]=1;
uParam0->f_9[7]=3;
uParam0->f_9[8]=1;
uParam0->f_9[11]=3;
uParam0->f_9[13]=2;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
uParam0->f_9[23]=7;
uParam0->f_9[29]=1;
uParam0->f_9[31]=3;
uParam0->f_9[32]=5;
uParam0->f_9[33]=13;
uParam0->f_9[39]=4;
uParam0->f_9[41]=1;
uParam0->f_9[48]=3;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 2:
uParam0->f_66=joaat("banshee2");
StringCopy(&(uParam0->f_1), "06NZQ185", 16);
uParam0->f_5=38;
uParam0->f_6=38;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), true);
uParam0->f_9[0]=2;
uParam0->f_9[1]=3;
uParam0->f_9[3]=1;
uParam0->f_9[4]=2;
uParam0->f_9[6]=1;
uParam0->f_9[7]=4;
uParam0->f_9[8]=1;
uParam0->f_9[11]=3;
uParam0->f_9[12]=2;
uParam0->f_9[13]=2;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
uParam0->f_9[23]=26;
uParam0->f_9[29]=1;
uParam0->f_9[31]=3;
uParam0->f_9[32]=5;
uParam0->f_9[33]=13;
uParam0->f_9[39]=2;
uParam0->f_9[41]=6;
uParam0->f_9[48]=6;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 3:
uParam0->f_66=joaat("banshee2");
StringCopy(&(uParam0->f_1), "68KWK927", 16);
uParam0->f_5=64;
uParam0->f_6=112;
uParam0->f_7=70;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=2;
uParam0->f_75=21;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 28);
MISC::SET_BIT(&(uParam0->f_77), 29);
MISC::SET_BIT(&(uParam0->f_77), 30);
MISC::SET_BIT(&(uParam0->f_77), 31);
MISC::SET_BIT(&(uParam0->f_77), true);
uParam0->f_9[0]=1;
uParam0->f_9[1]=4;
uParam0->f_9[3]=4;
uParam0->f_9[4]=4;
uParam0->f_9[6]=2;
uParam0->f_9[7]=8;
uParam0->f_9[8]=1;
uParam0->f_9[15]=3;
uParam0->f_9[22]=1;
uParam0->f_9[23]=36;
uParam0->f_9[29]=2;
uParam0->f_9[31]=3;
uParam0->f_9[32]=12;
uParam0->f_9[33]=6;
uParam0->f_9[48]=2;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("sultanrs"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 5);
func_365(*uParam1, 0, 2, 0);
func_365(*uParam1, 1, 6, 0);
func_365(*uParam1, 2, 3, 0);
func_365(*uParam1, 3, 3, 0);
func_365(*uParam1, 4, 4, 0);
func_365(*uParam1, 5, -1, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 7, 8, 0);
func_365(*uParam1, 8, 2, 0);
func_365(*uParam1, 9, 1, 0);
func_365(*uParam1, 11, -1, 0);
func_365(*uParam1, 12, -1, 0);
func_365(*uParam1, 13, -1, 0);
func_365(*uParam1, 14, -1, 0);
func_365(*uParam1, 15, -1, 0);
func_365(*uParam1, 16, -1, 0);
func_365(*uParam1, 23, 5, 0);
func_365(*uParam1, 24, -1, 0);
func_365(*uParam1, 25, -1, 0);
func_365(*uParam1, 26, -1, 0);
func_365(*uParam1, 27, -1, 0);
func_365(*uParam1, 28, -1, 0);
func_365(*uParam1, 29, -1, 0);
func_365(*uParam1, 30, -1, 0);
func_365(*uParam1, 31, -1, 0);
func_365(*uParam1, 32, -1, 0);
func_365(*uParam1, 33, -1, 0);
func_365(*uParam1, 34, -1, 0);
func_365(*uParam1, 35, -1, 0);
func_365(*uParam1, 36, -1, 0);
func_365(*uParam1, 37, -1, 0);
func_365(*uParam1, 38, -1, 0);
func_365(*uParam1, 39, -1, 0);
func_365(*uParam1, 40, -1, 0);
func_365(*uParam1, 41, -1, 0);
func_365(*uParam1, 42, 2, 0);
func_365(*uParam1, 45, -1, 0);
func_365(*uParam1, 47, -1, 0);
func_365(*uParam1, 48, -1, 0);
break;
case 1:
uParam0->f_66=joaat("sultanrs");
StringCopy(&(uParam0->f_1), "15HBW365", 16);
uParam0->f_5=92;
uParam0->f_6=92;
uParam0->f_7=92;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=11;
uParam0->f_9[1]=9;
uParam0->f_9[2]=6;
uParam0->f_9[3]=2;
uParam0->f_9[4]=4;
uParam0->f_9[5]=1;
uParam0->f_9[7]=1;
uParam0->f_9[8]=1;
uParam0->f_9[11]=3;
uParam0->f_9[12]=2;
uParam0->f_9[13]=2;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
uParam0->f_9[23]=49;
uParam0->f_9[29]=3;
uParam0->f_9[30]=5;
uParam0->f_9[31]=4;
uParam0->f_9[32]=5;
uParam0->f_9[33]=6;
uParam0->f_9[39]=1;
uParam0->f_9[40]=4;
uParam0->f_9[41]=6;
uParam0->f_9[44]=1;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 2:
uParam0->f_66=joaat("sultanrs");
StringCopy(&(uParam0->f_1), "86CVG072", 16);
uParam0->f_5=28;
uParam0->f_6=28;
uParam0->f_7=28;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=3;
uParam0->f_9[1]=11;
uParam0->f_9[2]=2;
uParam0->f_9[4]=2;
uParam0->f_9[5]=1;
uParam0->f_9[6]=4;
uParam0->f_9[7]=8;
uParam0->f_9[11]=3;
uParam0->f_9[12]=2;
uParam0->f_9[13]=2;
uParam0->f_9[15]=2;
uParam0->f_9[22]=1;
uParam0->f_9[23]=2;
uParam0->f_9[29]=2;
uParam0->f_9[30]=1;
uParam0->f_9[31]=6;
uParam0->f_9[32]=3;
uParam0->f_9[33]=12;
uParam0->f_9[39]=3;
uParam0->f_9[40]=3;
uParam0->f_9[41]=1;
uParam0->f_9[44]=1;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 3:
uParam0->f_66=joaat("sultanrs");
StringCopy(&(uParam0->f_1), "84TFX949", 16);
*uParam0=2;
uParam0->f_5=138;
uParam0->f_6=138;
uParam0->f_7=88;
uParam0->f_8=88;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=10;
uParam0->f_9[1]=12;
uParam0->f_9[2]=5;
uParam0->f_9[3]=3;
uParam0->f_9[4]=5;
uParam0->f_9[5]=4;
uParam0->f_9[6]=4;
uParam0->f_9[7]=10;
uParam0->f_9[8]=2;
uParam0->f_9[10]=5;
uParam0->f_9[15]=4;
uParam0->f_9[23]=17;
uParam0->f_9[27]=1;
uParam0->f_9[29]=4;
uParam0->f_9[30]=5;
uParam0->f_9[31]=7;
uParam0->f_9[32]=6;
uParam0->f_9[33]=16;
uParam0->f_9[48]=3;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("dubsta3"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_COLOURS(*uParam1, 13, 148);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam1, 148, 111);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 1);
func_365(*uParam1, 1, 5, 0);
func_365(*uParam1, 2, 1, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 10, 3, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 18, true);
break;
}
break;
case joaat("khanjali"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_COLOURS(*uParam1, 13, 148);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam1, 148, 111);
func_365(*uParam1, 26, 0, 0);
break;
}
break;
case joaat("barrage"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_COLOURS(*uParam1, 13, 148);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam1, 148, 111);
func_365(*uParam1, 26, 0, 0);
break;
case 1:
func_365(*uParam1, 11, 4, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 18, true);
func_365(*uParam1, 12, 3, 0);
break;
}
break;
case joaat("dukes2"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 2, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 0, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 1, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 3, 1);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam1, 255, 5, 190);
break;
case 1:
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 2, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 0, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 1, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 3, 1);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam1, 3, 83, 255);
break;
}
break;
case joaat("nightshark"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 1, 0);
func_365(*uParam1, 2, 3, 0);
func_365(*uParam1, 5, 3, 0);
func_365(*uParam1, 6, 9, 0);
func_365(*uParam1, 7, 8, 0);
func_365(*uParam1, 8, 1, 0);
func_365(*uParam1, 23, 21, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 2, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 0, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 1, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 3, 1);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam1, 3, 83, 255);
break;
}
break;
case joaat("speedo4"):
switch (iParam3){
case 0:
func_365(*uParam1, 5, 2, 0);
break;
}
break;
case joaat("pounder2"):
switch (iParam3){
case 0:
func_365(*uParam1, 5, 1, 0);
break;
}
break;
case joaat("mule4"):
switch (iParam3){
case 0:
func_365(*uParam1, 5, 1, 0);
break;
}
break;
case joaat("kuruma2"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 3, 3, 0);
func_365(*uParam1, 4, 2, 0);
VEHICLE::TOGGLE_VEHICLE_MOD(*uParam1, 22, true);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 2, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 0, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 1, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam1, 3, 1);
VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam1, 255, 5, 190);
break;
}
break;
case joaat("tezeract"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 4, 0);
func_365(*uParam1, 1, 6, 0);
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 5, 2, 0);
break;
}
break;
case joaat("pariah"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 5, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 7, 5, 0);
func_365(*uParam1, 3, 1, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("revolter"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("taipan"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 4, 4, 0);
func_365(*uParam1, 7, 5, 0);
func_365(*uParam1, 3, 4, 0);
func_365(*uParam1, 0, 3, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("tyrant"):
switch (iParam3){
case 0:
func_365(*uParam1, 3, 0, 0);
func_365(*uParam1, 0, 2, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 3);
break;
}
break;
case joaat("sc1"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 1, 0);
func_365(*uParam1, 7, 0, 0);
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 3, 0, 0);
func_365(*uParam1, 0, 2, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("xa21"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 4, 0);
func_365(*uParam1, 2, 5, 0);
func_365(*uParam1, 6, 13, 0);
func_365(*uParam1, 7, 9, 0);
func_365(*uParam1, 3, 6, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("contender"):
switch (iParam3){
case 0:
break;
}
break;
case joaat("turismo2"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 1, 0);
func_365(*uParam1, 4, 3, 0);
func_365(*uParam1, 7, 3, 0);
func_365(*uParam1, 3, 1, 0);
func_365(*uParam1, 0, 6, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("turismor"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 1, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
break;
}
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 0, 0);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 2, 0);
func_365(*uParam1, 7, 12, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 10, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 2, 0);
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 1:
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("brutus"):
case joaat("brutus2"):
case joaat("brutus3"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 3, 1, 0);
func_365(*uParam1, 4, 4, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 2, 0);
func_365(*uParam1, 7, 2, 0);
func_365(*uParam1, 8, 1, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 10, 1, 0);
func_365(*uParam1, 42, 5, 0);
func_365(*uParam1, 44, 0, 0);
func_365(*uParam1, 45, 0, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
break;
case 1:
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
switch (iParam3){
case 0:
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 4, 9, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 6, 0);
func_365(*uParam1, 7, 4, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 5, 0);
func_365(*uParam1, 43, 2, 0);
break;
case 1:
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
switch (iParam3){
case 0:
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 1:
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 2, 0);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 3, 0, 0);
func_365(*uParam1, 4, 3, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 5, 0);
func_365(*uParam1, 7, 2, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 43, 1, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 1:
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 1, 0);
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 2, 1, 0);
func_365(*uParam1, 4, 0, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 7, 2, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 2, 0);
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 1:
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("imperator"):
case joaat("imperator2"):
case joaat("imperator3"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 4, 5, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 7, 6, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 44, 0, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 1:
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("issi3"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "83OSX036", 16);
*uParam0=4;
uParam0->f_5=29;
uParam0->f_6=111;
uParam0->f_7=7;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=1;
uParam0->f_9[5]=1;
uParam0->f_9[6]=2;
uParam0->f_9[10]=1;
uParam0->f_9[23]=1;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "87LWG803", 16);
*uParam0=4;
uParam0->f_5=73;
uParam0->f_6=111;
uParam0->f_7=0;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=1;
uParam0->f_9[5]=1;
uParam0->f_9[6]=2;
uParam0->f_9[10]=1;
uParam0->f_9[23]=1;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 2, 0);
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 3, 1, 0);
func_365(*uParam1, 4, 3, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 3, 0);
func_365(*uParam1, 7, 9, 0);
func_365(*uParam1, 8, 2, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 2, 0);
func_365(*uParam1, 43, 0, 0);
if(iParam2==joaat("issi6")){
func_365(*uParam1, 45, 0, 0);
}else{
func_365(*uParam1, 45, 1, 0);
}
break;
case 1:
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 2, 1, 0);
func_365(*uParam1, 4, 1, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 7, 2, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
break;
case 1:
func_365(*uParam1, 48, 0, 0);
break;
case 2:
uParam0->f_5=153;
uParam0->f_6=12;
uParam0->f_7=0;
uParam0->f_8=160;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[1]=1;
uParam0->f_9[2]=2;
uParam0->f_9[4]=2;
uParam0->f_9[5]=2;
uParam0->f_9[7]=3;
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[16]=4;
uParam0->f_9[13]=3;
uParam0->f_9[35]=1;
uParam0->f_9[48]=4;
uParam0->f_9[22]=10;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 5, 0);
func_365(*uParam1, 1, 7, 0);
func_365(*uParam1, 3, 10, 0);
func_365(*uParam1, 4, 3, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 10, 6, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 5, 0);
func_365(*uParam1, 43, 2, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 1:
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 0, 0);
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 3, 0);
func_365(*uParam1, 7, 4, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 5, 0);
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 44, 0, 0);
func_365(*uParam1, 45, 0, 0);
break;
case 1:
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("zr380"):
case joaat("zr3802"):
case joaat("zr3803"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 5, 0);
func_365(*uParam1, 1, 0, 0);
func_365(*uParam1, 2, 0, 0);
func_365(*uParam1, 4, 1, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 7, 3, 0);
func_365(*uParam1, 8, 2, 0);
func_365(*uParam1, 9, 2, 0);
func_365(*uParam1, 40, 2, 0);
func_365(*uParam1, 41, 2, 0);
func_365(*uParam1, 42, 3, 0);
func_365(*uParam1, 43, 0, 0);
func_365(*uParam1, 44, 0, 0);
func_365(*uParam1, 45, 1, 0);
break;
case 1:
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 48, 0, 0);
break;
}
break;
case joaat("ratloader2"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 2, 0);
func_365(*uParam1, 2, 2, 0);
func_365(*uParam1, 3, 0, 0);
func_365(*uParam1, 4, 5, 0);
func_365(*uParam1, 5, 2, 0);
func_365(*uParam1, 6, 5, 0);
func_365(*uParam1, 8, 0, 0);
func_365(*uParam1, 10, 0, 0);
func_365(*uParam1, 42, 0, 0);
func_365(*uParam1, 48, 2, 0);
break;
}
break;
case joaat("kamacho"):
switch (iParam3){
case 0:
func_365(*uParam1, 0, 7, 0);
func_365(*uParam1, 1, 5, 0);
func_365(*uParam1, 2, 7, 0);
func_365(*uParam1, 3, 3, 0);
func_365(*uParam1, 4, 3, 0);
func_365(*uParam1, 5, 0, 0);
func_365(*uParam1, 6, 1, 0);
func_365(*uParam1, 7, 4, 0);
break;
case 1:
StringCopy(&(uParam0->f_1), "80WEG614", 16);
uParam0->f_5=9;
uParam0->f_8=112;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), false);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=1;
uParam0->f_9[1]=6;
uParam0->f_9[2]=8;
uParam0->f_9[7]=3;
uParam0->f_9[48]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("menacer"):
switch (iParam3){
case 0:
func_365(*uParam1, 1, 12, 0);
func_365(*uParam1, 2, 6, 0);
func_365(*uParam1, 3, 6, 0);
func_365(*uParam1, 6, 5, 0);
func_365(*uParam1, 7, 16, 0);
func_365(*uParam1, 10, 2, 0);
break;
}
break;
case joaat("thrax"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_COLOURS(*uParam1, 150, 150);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam1, 89, 21);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(*uParam1, 1);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(*uParam1, 132);
VEHICLE::SET_VEHICLE_LIVERY2(*uParam1, 0);
break;
}
break;
case joaat("schwarzer"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam1, "TAO1");
VEHICLE::SET_VEHICLE_COLOURS(*uParam1, 147, 1);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(*uParam1, 1);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(*uParam1, 132);
VEHICLE::SET_VEHICLE_LIVERY2(*uParam1, 0);
VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam1, 2);
VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam1, 7);
func_365(*uParam1, 23, 6, 0);
break;
}
break;
case joaat("rancherxl"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "66SBX027", 16);
*uParam0=2;
uParam0->f_5=100;
uParam0->f_6=100;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=4;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 25);
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("sultan"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "27CLR579", 16);
uParam0->f_5=54;
uParam0->f_6=1;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 24);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=1;
uParam0->f_9[1]=2;
uParam0->f_9[2]=1;
uParam0->f_9[3]=1;
uParam0->f_9[5]=1;
uParam0->f_9[7]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("asterope"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "48XTJ224", 16);
*uParam0=3;
uParam0->f_5=63;
uParam0->f_6=3;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 24);
MISC::SET_BIT(&(uParam0->f_77), 9);
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("kuruma"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "23IJE671", 16);
uParam0->f_5=62;
uParam0->f_6=1;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[1]=1;
uParam0->f_9[3]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("youga2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "08ICY997", 16);
uParam0->f_6=2;
uParam0->f_8=112;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[3]=1;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("regina"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "20WUI734", 16);
*uParam0=2;
uParam0->f_5=61;
uParam0->f_7=61;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), false);
MISC::SET_BIT(&(uParam0->f_77), true);
MISC::SET_BIT(&(uParam0->f_77), 24);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("emperor"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "21VJM767", 16);
uParam0->f_5=34;
uParam0->f_6=112;
uParam0->f_7=47;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
case 1:
StringCopy(&(uParam0->f_1), "LAMAR G", 16);
*uParam0=3;
uParam0->f_5=53;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=2;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 24);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
uParam0->f_9[23]=18;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("taxi"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "86VME156", 16);
uParam0->f_5=88;
uParam0->f_6=77;
uParam0->f_7=5;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 7);
MISC::SET_BIT(&(uParam0->f_77), 8);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("dilettante"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "85JFW893", 16);
uParam0->f_5=69;
uParam0->f_7=74;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 24);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("mesa"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "87BYW202", 16);
*uParam0=3;
uParam0->f_5=9;
uParam0->f_7=7;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=4;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), false);
MISC::SET_BIT(&(uParam0->f_77), 25);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("rumpo"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "41KKV206", 16);
uParam0->f_5=3;
uParam0->f_7=5;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_67=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("tailgater"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "22SCY913", 16);
uParam0->f_5=1;
uParam0->f_6=1;
uParam0->f_7=10;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), true);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[11]=4;
uParam0->f_9[12]=3;
uParam0->f_9[13]=3;
uParam0->f_9[18]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("furia"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "ANCESTOR", 16);
*uParam0=4;
uParam0->f_5=138;
uParam0->f_6=138;
uParam0->f_7=89;
uParam0->f_8=21;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=6;
uParam0->f_9[2]=8;
uParam0->f_9[3]=1;
uParam0->f_9[4]=1;
uParam0->f_9[5]=1;
uParam0->f_9[6]=5;
uParam0->f_9[7]=8;
uParam0->f_9[9]=2;
uParam0->f_9[22]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("kanjo"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "04DZM900", 16);
*uParam0=4;
uParam0->f_5=136;
uParam0->f_6=136;
uParam0->f_7=5;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=2;
uParam0->f_9[1]=4;
uParam0->f_9[2]=3;
uParam0->f_9[3]=4;
uParam0->f_9[4]=9;
uParam0->f_9[5]=2;
uParam0->f_9[6]=5;
uParam0->f_9[7]=9;
uParam0->f_9[9]=1;
uParam0->f_9[23]=5;
uParam0->f_9[27]=1;
uParam0->f_9[42]=2;
uParam0->f_9[46]=1;
uParam0->f_9[48]=6;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "65LNN730", 16);
uParam0->f_5=89;
uParam0->f_6=89;
uParam0->f_7=88;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=8;
uParam0->f_9[1]=7;
uParam0->f_9[2]=7;
uParam0->f_9[3]=1;
uParam0->f_9[5]=6;
uParam0->f_9[6]=2;
uParam0->f_9[9]=1;
uParam0->f_9[23]=14;
uParam0->f_9[27]=1;
uParam0->f_9[48]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("sentinel3"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "88WFR722", 16);
uParam0->f_5=111;
uParam0->f_6=29;
uParam0->f_7=145;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=7;
uParam0->f_9[1]=6;
uParam0->f_9[4]=2;
uParam0->f_9[5]=5;
uParam0->f_9[6]=4;
uParam0->f_9[7]=8;
uParam0->f_9[10]=1;
uParam0->f_9[23]=2;
uParam0->f_9[48]=7;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "63CMS702", 16);
*uParam0=1;
uParam0->f_5=92;
uParam0->f_6=92;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=14;
uParam0->f_9[1]=9;
uParam0->f_9[2]=1;
uParam0->f_9[3]=1;
uParam0->f_9[4]=4;
uParam0->f_9[5]=1;
uParam0->f_9[6]=1;
uParam0->f_9[7]=12;
uParam0->f_9[10]=13;
uParam0->f_9[23]=6;
uParam0->f_9[48]=6;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("retinue2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "23GVN817", 16);
*uParam0=1;
uParam0->f_5=29;
uParam0->f_6=111;
uParam0->f_7=138;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=2;
uParam0->f_9[1]=5;
uParam0->f_9[2]=1;
uParam0->f_9[5]=2;
uParam0->f_9[6]=2;
uParam0->f_9[7]=7;
uParam0->f_9[8]=3;
uParam0->f_9[9]=2;
uParam0->f_9[10]=1;
uParam0->f_9[23]=22;
uParam0->f_9[48]=8;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "86ACK549", 16);
*uParam0=4;
uParam0->f_5=12;
uParam0->f_6=39;
uParam0->f_7=0;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=5;
uParam0->f_9[1]=6;
uParam0->f_9[2]=1;
uParam0->f_9[5]=3;
uParam0->f_9[6]=1;
uParam0->f_9[7]=5;
uParam0->f_9[8]=5;
uParam0->f_9[10]=2;
uParam0->f_9[23]=23;
uParam0->f_9[48]=3;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("yosemite2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "60UYD615", 16);
uParam0->f_5=34;
uParam0->f_6=1;
uParam0->f_7=135;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=8;
uParam0->f_9[1]=11;
uParam0->f_9[3]=5;
uParam0->f_9[5]=3;
uParam0->f_9[6]=1;
uParam0->f_9[7]=4;
uParam0->f_9[8]=1;
uParam0->f_9[48]=3;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "05SKJ131", 16);
*uParam0=1;
uParam0->f_5=91;
uParam0->f_6=1;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=2;
uParam0->f_9[2]=1;
uParam0->f_9[3]=4;
uParam0->f_9[5]=2;
uParam0->f_9[6]=4;
uParam0->f_9[8]=1;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("sugoi"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "01SRP848", 16);
uParam0->f_5=112;
uParam0->f_6=12;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=6;
uParam0->f_9[1]=9;
uParam0->f_9[2]=5;
uParam0->f_9[3]=2;
uParam0->f_9[6]=7;
uParam0->f_9[7]=8;
uParam0->f_9[8]=4;
uParam0->f_9[10]=3;
uParam0->f_9[23]=22;
uParam0->f_9[48]=4;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "28OKO870", 16);
*uParam0=1;
uParam0->f_5=74;
uParam0->f_6=74;
uParam0->f_7=74;
uParam0->f_8=122;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=3;
uParam0->f_9[1]=9;
uParam0->f_9[2]=6;
uParam0->f_9[3]=7;
uParam0->f_9[6]=5;
uParam0->f_9[7]=11;
uParam0->f_9[10]=4;
uParam0->f_9[22]=1;
uParam0->f_9[23]=9;
uParam0->f_9[48]=8;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
*uParam0=1;
uParam0->f_5=149;
uParam0->f_6=138;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=9;
uParam0->f_9[1]=13;
uParam0->f_9[2]=7;
uParam0->f_9[3]=1;
uParam0->f_9[4]=4;
uParam0->f_9[7]=8;
uParam0->f_9[8]=2;
uParam0->f_9[10]=5;
uParam0->f_9[13]=2;
uParam0->f_9[15]=3;
uParam0->f_9[18]=1;
uParam0->f_9[23]=16;
uParam0->f_9[48]=8;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("jugular"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "82ATK858", 16);
uParam0->f_5=5;
uParam0->f_6=0;
uParam0->f_7=111;
uParam0->f_8=111;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=8;
uParam0->f_9[1]=3;
uParam0->f_9[2]=2;
uParam0->f_9[3]=4;
uParam0->f_9[4]=2;
uParam0->f_9[6]=1;
uParam0->f_9[7]=5;
uParam0->f_9[23]=24;
uParam0->f_9[48]=6;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "63LUV750", 16);
*uParam0=1;
uParam0->f_5=38;
uParam0->f_6=38;
uParam0->f_7=37;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=2;
uParam0->f_9[1]=1;
uParam0->f_9[2]=1;
uParam0->f_9[3]=1;
uParam0->f_9[4]=1;
uParam0->f_9[6]=3;
uParam0->f_9[7]=2;
uParam0->f_9[10]=1;
uParam0->f_9[23]=17;
uParam0->f_9[48]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("sultan2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "28AAK928", 16);
uParam0->f_5=112;
uParam0->f_6=112;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=5;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=15;
uParam0->f_9[1]=4;
uParam0->f_9[2]=4;
uParam0->f_9[3]=4;
uParam0->f_9[4]=9;
uParam0->f_9[5]=4;
uParam0->f_9[6]=3;
uParam0->f_9[7]=8;
uParam0->f_9[9]=2;
uParam0->f_9[23]=24;
uParam0->f_9[48]=8;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "68BPK026", 16);
uParam0->f_5=68;
uParam0->f_6=68;
uParam0->f_7=68;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=5;
uParam0->f_9[2]=4;
uParam0->f_9[3]=2;
uParam0->f_9[4]=9;
uParam0->f_9[5]=3;
uParam0->f_9[7]=5;
uParam0->f_9[9]=2;
uParam0->f_9[23]=22;
uParam0->f_9[48]=9;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
uParam0->f_5=53;
uParam0->f_6=89;
uParam0->f_7=59;
uParam0->f_8=89;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=14;
uParam0->f_9[1]=2;
uParam0->f_9[2]=2;
uParam0->f_9[3]=1;
uParam0->f_9[4]=6;
uParam0->f_9[5]=8;
uParam0->f_9[6]=3;
uParam0->f_9[7]=5;
uParam0->f_9[10]=2;
uParam0->f_9[15]=3;
uParam0->f_9[23]=12;
uParam0->f_9[48]=10;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("gauntlet3"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "01JCP664", 16);
uParam0->f_5=0;
uParam0->f_6=13;
uParam0->f_7=134;
uParam0->f_8=13;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=4;
uParam0->f_9[2]=2;
uParam0->f_9[3]=3;
uParam0->f_9[4]=3;
uParam0->f_9[5]=6;
uParam0->f_9[6]=5;
uParam0->f_9[7]=11;
uParam0->f_9[8]=1;
uParam0->f_9[9]=2;
uParam0->f_9[10]=7;
uParam0->f_9[48]=8;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "28OAE229", 16);
uParam0->f_5=70;
uParam0->f_6=13;
uParam0->f_7=70;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=3;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=2;
uParam0->f_9[2]=1;
uParam0->f_9[3]=7;
uParam0->f_9[4]=5;
uParam0->f_9[5]=2;
uParam0->f_9[6]=2;
uParam0->f_9[7]=5;
uParam0->f_9[8]=1;
uParam0->f_9[9]=2;
uParam0->f_9[10]=4;
uParam0->f_9[23]=31;
uParam0->f_9[48]=2;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("ellie"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "43TBV742", 16);
uParam0->f_5=69;
uParam0->f_6=111;
uParam0->f_7=74;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_65=2;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=2;
uParam0->f_9[4]=6;
uParam0->f_9[10]=4;
uParam0->f_9[48]=9;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "89FAZ643", 16);
*uParam0=1;
uParam0->f_5=28;
uParam0->f_6=111;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[10]=2;
uParam0->f_9[23]=4;
uParam0->f_9[48]=10;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("komoda"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "48OQX480", 16);
uParam0->f_5=138;
uParam0->f_6=111;
uParam0->f_7=89;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=24;
uParam0->f_9[1]=12;
uParam0->f_9[2]=4;
uParam0->f_9[3]=12;
uParam0->f_9[4]=4;
uParam0->f_9[7]=15;
uParam0->f_9[8]=2;
uParam0->f_9[9]=2;
uParam0->f_9[10]=10;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "08PPT772", 16);
*uParam0=1;
uParam0->f_5=112;
uParam0->f_6=111;
uParam0->f_7=0;
uParam0->f_8=89;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=21;
uParam0->f_9[1]=1;
uParam0->f_9[4]=2;
uParam0->f_9[7]=10;
uParam0->f_9[8]=3;
uParam0->f_9[9]=1;
uParam0->f_9[10]=3;
uParam0->f_9[23]=16;
uParam0->f_9[48]=8;
uParam0->f_59[0]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("manchez"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "43HDN501", 16);
uParam0->f_5=64;
uParam0->f_6=111;
uParam0->f_7=68;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=2;
uParam0->f_9[2]=1;
uParam0->f_9[4]=3;
uParam0->f_9[5]=2;
uParam0->f_9[7]=1;
uParam0->f_9[10]=3;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "27TIB223", 16);
uParam0->f_5=92;
uParam0->f_6=50;
uParam0->f_7=92;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=1;
uParam0->f_9[4]=3;
uParam0->f_9[5]=1;
uParam0->f_9[10]=2;
uParam0->f_9[48]=2;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
StringCopy(&(uParam0->f_1), "42WKq996", 16);
uParam0->f_5=29;
uParam0->f_6=111;
uParam0->f_7=28;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=3;
uParam0->f_9[2]=1;
uParam0->f_9[4]=2;
uParam0->f_9[5]=1;
uParam0->f_9[7]=1;
uParam0->f_9[10]=1;
uParam0->f_9[48]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 3:
StringCopy(&(uParam0->f_1), "06THT542", 16);
uParam0->f_5=145;
uParam0->f_6=71;
uParam0->f_7=74;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=2;
uParam0->f_9[4]=1;
uParam0->f_9[5]=2;
uParam0->f_9[7]=1;
uParam0->f_9[10]=3;
uParam0->f_9[48]=9;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("stryder"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "45YZY588", 16);
uParam0->f_5=112;
uParam0->f_6=89;
uParam0->f_7=0;
uParam0->f_8=1;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=5;
uParam0->f_9[4]=5;
uParam0->f_9[48]=7;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "05VIC098", 16);
uParam0->f_5=27;
uParam0->f_6=73;
uParam0->f_7=0;
uParam0->f_8=1;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=2;
uParam0->f_9[4]=4;
uParam0->f_9[48]=8;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
StringCopy(&(uParam0->f_1), "81BJX061", 16);
uParam0->f_5=92;
uParam0->f_6=111;
uParam0->f_7=92;
uParam0->f_8=1;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=1;
uParam0->f_9[4]=1;
uParam0->f_9[48]=9;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 3:
StringCopy(&(uParam0->f_1), "61XWF939", 16);
uParam0->f_5=135;
uParam0->f_6=111;
uParam0->f_7=135;
uParam0->f_8=1;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=7;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=4;
uParam0->f_9[4]=5;
uParam0->f_9[48]=10;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("defiler"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "85PFY881", 16);
uParam0->f_5=73;
uParam0->f_6=70;
uParam0->f_7=73;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=2;
uParam0->f_9[2]=1;
uParam0->f_9[4]=4;
uParam0->f_9[5]=2;
uParam0->f_9[7]=1;
uParam0->f_9[10]=2;
uParam0->f_9[48]=6;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "09QNN844", 16);
uParam0->f_5=112;
uParam0->f_6=145;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=2;
uParam0->f_9[4]=1;
uParam0->f_9[5]=3;
uParam0->f_9[10]=3;
uParam0->f_9[48]=5;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
StringCopy(&(uParam0->f_1), "28BPV442", 16);
uParam0->f_5=38;
uParam0->f_6=111;
uParam0->f_7=37;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[2]=1;
uParam0->f_9[4]=3;
uParam0->f_9[5]=1;
uParam0->f_9[10]=4;
uParam0->f_9[48]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 3:
StringCopy(&(uParam0->f_1), "85LDY796", 16);
uParam0->f_5=150;
uParam0->f_6=111;
uParam0->f_7=150;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=2;
uParam0->f_9[1]=1;
uParam0->f_9[4]=2;
uParam0->f_9[5]=3;
uParam0->f_9[7]=1;
uParam0->f_9[10]=1;
uParam0->f_9[48]=12;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("lectro"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "89BVQ075", 16);
*uParam0=3;
uParam0->f_5=111;
uParam0->f_6=64;
uParam0->f_7=0;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "61KCQ803", 16);
*uParam0=3;
uParam0->f_5=135;
uParam0->f_6=118;
uParam0->f_7=135;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 2:
StringCopy(&(uParam0->f_1), "28DJW797", 16);
*uParam0=3;
uParam0->f_5=89;
uParam0->f_6=138;
uParam0->f_7=88;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 3:
StringCopy(&(uParam0->f_1), "63ASU750", 16);
*uParam0=3;
uParam0->f_5=53;
uParam0->f_6=5;
uParam0->f_7=59;
uParam0->f_8=156;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=6;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("zhaba"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "88GCM611", 16);
uParam0->f_5=154;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=111;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), false);
MISC::SET_BIT(&(uParam0->f_77), true);
MISC::SET_BIT(&(uParam0->f_77), 2);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=2;
uParam0->f_9[1]=2;
uParam0->f_9[2]=2;
uParam0->f_9[3]=2;
uParam0->f_9[4]=9;
uParam0->f_9[5]=1;
uParam0->f_9[6]=1;
uParam0->f_9[8]=1;
uParam0->f_9[9]=1;
uParam0->f_9[10]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "46AOM725", 16);
uParam0->f_5=5;
uParam0->f_6=111;
uParam0->f_7=5;
uParam0->f_8=111;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), false);
MISC::SET_BIT(&(uParam0->f_77), true);
MISC::SET_BIT(&(uParam0->f_77), 2);
MISC::SET_BIT(&(uParam0->f_77), 9);
uParam0->f_9[0]=5;
uParam0->f_9[1]=3;
uParam0->f_9[2]=3;
uParam0->f_9[3]=5;
uParam0->f_9[4]=7;
uParam0->f_9[5]=3;
uParam0->f_9[6]=6;
uParam0->f_9[9]=1;
uParam0->f_9[10]=6;
uParam0->f_9[48]=17;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("vagrant"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "22IUD069", 16);
uParam0->f_5=138;
uParam0->f_6=138;
uParam0->f_7=0;
uParam0->f_8=112;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[4]=3;
uParam0->f_9[5]=1;
uParam0->f_9[6]=1;
uParam0->f_9[7]=2;
uParam0->f_9[8]=1;
uParam0->f_9[9]=1;
uParam0->f_9[48]=23;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "84USA531", 16);
uParam0->f_5=111;
uParam0->f_6=106;
uParam0->f_7=0;
uParam0->f_8=112;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[4]=4;
uParam0->f_9[8]=3;
uParam0->f_9[9]=1;
uParam0->f_9[10]=2;
uParam0->f_9[48]=2;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("outlaw"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "68ADW760", 16);
uParam0->f_5=3;
uParam0->f_6=0;
uParam0->f_7=6;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=4;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[48]=17;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "02AFC413", 16);
uParam0->f_5=36;
uParam0->f_6=111;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=4;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[48]=1;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
}
break;
case joaat("everon"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "46ZLJ093", 16);
uParam0->f_5=29;
uParam0->f_6=0;
uParam0->f_7=35;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[1]=4;
uParam0->f_9[2]=2;
uParam0->f_9[3]=2;
uParam0->f_9[7]=14;
uParam0->f_9[8]=1;
uParam0->f_9[9]=5;
uParam0->f_9[10]=6;
uParam0->f_9[48]=4;
func_295(*uParam1, uParam0, 0, 1, 1);
break;
case 1:
StringCopy(&(uParam0->f_1), "82AKQ481", 16);
uParam0->f_5=111;
uParam0->f_6=0;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=3;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
uParam0->f_9[0]=1;
uParam0->f_9[1]=7;
uParam0->f_9[2]=1;
uParam0->f_9[3]=1;
uParam0->f_9[7]=14;
uParam0->f_9[8]=1;
uParam0->f_9[9]=3;
uParam0->f_9[10]=3;
uParam0->f_9[48]=9;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
case joaat("burrito2"):
switch (iParam3){
case 0:
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam1, "82WUZ423");
break;
}
break;
case joaat("brioso2"):
switch (iParam3){
case 0:
StringCopy(&(uParam0->f_1), "RUB1O", 16);
uParam0->f_5=112;
uParam0->f_6=112;
uParam0->f_7=0;
uParam0->f_8=0;
uParam0->f_97=1;
uParam0->f_99=132;
uParam0->f_98=0;
uParam0->f_69=1;
uParam0->f_62=255;
uParam0->f_63=255;
uParam0->f_64=255;
uParam0->f_74=255;
uParam0->f_76=255;
MISC::SET_BIT(&(uParam0->f_77), 2);
uParam0->f_9[2]=2;
uParam0->f_9[3]=1;
uParam0->f_9[4]=2;
uParam0->f_9[10]=5;
func_295(*uParam1, uParam0, 0, 1, 0);
break;
}
break;
}}


void func_365(int iParam0, int iParam1, int iParam2, bool bParam3){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) < 1){
return;
}
if(iParam2==-1){
return;
}
if(iParam2 >=VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1)){
return;
}
if(iParam2 > func_249(iParam0, iParam1)){
return;
}
if(VEHICLE::GET_VEHICLE_MOD(iParam0, iParam1)==iParam2){
return;
}
if(func_366(iParam0, iParam1)){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, iParam1, iParam2);
}
VEHICLE::SET_VEHICLE_MOD(iParam0, iParam1, iParam2, bParam3);
}

int func_366(int iParam0, int iParam1){
if((((((((((((((((((((((((((((((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==4) || iParam1==5) || iParam1==6) || iParam1==7) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==0) || iParam1==23) || iParam1==25) || iParam1==26) || iParam1==27) || iParam1==28) || iParam1==29) || iParam1==30) || iParam1==31) || iParam1==32) || iParam1==33) || iParam1==34) || iParam1==35) || iParam1==36) || iParam1==37) || iParam1==38) || iParam1==39) || iParam1==40) || iParam1==41) || iParam1==42) || iParam1==43) || iParam1==44) || iParam1==45) || iParam1==46) || iParam1==47){
return 1;
}elseif(iParam1==24){
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0))){
return 1;
}}
return 0;
}


void func_367(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 49){
switch (iVar0){
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, iVar0, false);
break;
default:
if(iVar0 !=48){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iVar0) > 0){
VEHICLE::REMOVE_VEHICLE_MOD(iParam0, iVar0);
}}
break;
}
iVar0++;
}}


void func_368(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4){
struct<3> Var0;
struct<3> Var1;
float fVar2;
float fVar3;
float fVar4;
fVar2=0.5f;
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
fVar3=((Var1.f_2 - Var0.f_2) / 2f);
fVar4=(Var1.f_2 - fVar3);
if(fVar2 <=(fVar4 + 0.1f)){
fVar2=(fVar4 + 0.4f);
}
fVar2=(fVar2 + fParam4);
GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Vector((((Var1.f_2 - Var0.f_2) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

int func_369(){
if(!func_372()){
if(func_371(PLAYER::GET_PLAYER_INDEX()) || func_370(PLAYER::GET_PLAYER_INDEX())){
return 1;
}}
return 0;
}


bool func_370(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}


bool func_371(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_372(){
return MISC::IS_BIT_SET(Global_2683864.f_43.f_4, 0);
}

int func_373(bool bParam0, var uParam1){
int iVar0;
int iVar1;
bool bVar2;
iVar0=0;
iVar1=0;
while (iVar1 <=3){
bVar2=false;
while (bVar2 <=16){
if(Global_4718592.f_1265[iVar1 /*23466*/].f_6973[bVar2]==3 && Global_4718592.f_1265[iVar1 /*23466*/].f_7043[bVar2]==bParam0){
iVar0=1;
if(!MISC::IS_BIT_SET(Global_4718592.f_1265[iVar1 /*23466*/].f_7219, bVar2) && MISC::IS_BIT_SET(Global_4718592.f_1265[iVar1 /*23466*/].f_7220, bVar2)){
*uParam1=1;
bVar2=17;
iVar1=4;
}}
bVar2++;
}
iVar1++;
}
return iVar0;
}


bool func_374(bool bParam0){
return Global_2657589[bParam0 /*466*/].f_121==6;
}

int func_375(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
if(iParam1==-1){
iVar1=0;
while (iVar1 <=(Global_4718592.f_1200 - 1)){
if(func_375(iParam0, iVar1)){
iVar0=1;
iVar1=4;
}
iVar1++;
}}elseif(Global_4980736.f_84919[iParam0 /*499*/].f_18[iParam1] < 17 && Global_4980736.f_84919[iParam0 /*499*/].f_13[iParam1] !=0){
if(func_377(Global_4980736.f_84919[iParam0 /*499*/].f_13[iParam1], iParam1, Global_4980736.f_84919[iParam0 /*499*/].f_18[iParam1])){
iVar0=1;
iParam1=4;
}else{
iVar2=0;
while (iVar2 <=29){
if(Global_4718592.f_108454[iVar2]==2 && Global_4718592.f_108485[iVar2]==iParam0){
iVar3=0;
while (iVar3 <=12){
if(Global_4718592.f_110497[iVar2 /*66*/][iVar3 /*5*/][iParam1] < 17 && func_376(Global_4718592.f_108516[iVar2 /*66*/][iVar3 /*5*/][iParam1]) !=0){
if(func_377(func_376(Global_4718592.f_108516[iVar2 /*66*/][iVar3 /*5*/][iParam1]), iParam1, Global_4718592.f_110497[iVar2 /*66*/][iVar3 /*5*/][iParam1])){
iVar0=1;
iVar3=13;
}
}
else{
iVar3=13;
}
iVar3++;
}
iVar2=30;
}
iVar2++;
}}}
return iVar0;
}

int func_376(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 46:
return 31;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 23:
return 11;
case 26:
return 12;
case 32:
return 15;
case 33:
return 17;
case 47:
return 32;
case 55:
return 35;
case 6:
return 1;
case 7:
return 2;
case 8:
return 3;
case 9:
return 4;
case 10:
return 5;
case 24:
return 11;
case 27:
return 12;
case 48:
return 32;
case 50:
return 31;
case 11:
return 1;
case 12:
return 2;
case 13:
return 3;
case 14:
return 4;
case 15:
return 5;
case 25:
return 11;
case 28:
return 12;
case 30:
return 13;
case 49:
return 32;
case 51:
return 31;
case 16:
return 4;
case 17:
return 5;
case 29:
return 12;
case 40:
return 23;
case 41:
return 24;
case 18:
return 6;
case 19:
return 7;
case 20:
return 8;
case 21:
return 9;
case 22:
return 10;
case 31:
return 14;
case 34:
return 16;
case 42:
return 27;
case 43:
return 28;
case 44:
return 29;
case 45:
return 30;
case 53:
return 33;
case 54:
return 34;
case 56:
return 36;
default:
}
return 0;
}

int func_377(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
return 1;
case 5:
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam1 /*23466*/].f_8067[iParam2], 14)){
return 1;
}
break;
}
return 0;
}


void func_378(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(func_379(iParam0, iVar0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam1, iVar0, 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam1, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam1, 1);
}elseif(iVar0==Global_4718592.f_1213){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 3);
}}
iVar0++;
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_115, 7)){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 2);
if(NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1)){
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam1, 1);
VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam1, 1);
}}}

int func_379(int iParam0, int iParam1){
if(func_380(iParam0)){
return 0;
}
switch (iParam1){
case 0:
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_109, 2)){
return 1;
}
break;
case 1:
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_109, 3)){
return 1;
}
break;
case 2:
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_109, 4)){
return 1;
}
break;
case 3:
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_109, 5)){
return 1;
}
break;
}
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_115, 7)){
return 1;
}
return 0;
}

int func_380(int iParam0){
int iVar0;
if(!func_381()){
return 0;
}
iVar0=0;
while (iVar0 <=(Global_4718592.f_170488.f_1 - 1)){
if(Global_4718592.f_170488.f_2[iVar0 /*20*/]==2 && Global_4718592.f_170488.f_2[iVar0 /*20*/].f_1==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_381(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_382(int iParam0, int iParam1){
if(iParam1==0){
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_f") !=-1){
return 1;
}}
if(iParam1==1){
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_f") !=-1){
return 1;
}}
if(iParam1==2){
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_r") !=-1){
return 1;
}}
if(iParam1==3){
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_r") !=-1){
return 1;
}}
if(iParam1==4){
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "bonnet") !=-1){
return 1;
}}
if(iParam1==5){
if(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "boot") !=-1){
return 1;
}}
return 0;
}


float func_383(int iParam0, int iParam1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_112, 18) && iParam1 > 0){
return (Global_4980736.f_84919[iParam0 /*499*/].f_43 * IntToFloat(iParam1));
}
return Global_4980736.f_84919[iParam0 /*499*/].f_43;
}


float func_384(int iParam0, int iParam1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_112, 18) && iParam1 > 0){
return (Global_4980736.f_84919[iParam0 /*499*/].f_42 * IntToFloat(iParam1));
}
return Global_4980736.f_84919[iParam0 /*499*/].f_42;
}


float func_385(int iParam0, int iParam1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_112, 18) && iParam1 > 0){
return (Global_4980736.f_84919[iParam0 /*499*/].f_41 * IntToFloat(iParam1));
}
return Global_4980736.f_84919[iParam0 /*499*/].f_41;
}


float func_386(int iParam0, int iParam1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_112, 18) && iParam1 > 0){
return (Global_4980736.f_84919[iParam0 /*499*/].f_40 * IntToFloat(iParam1));
}
return Global_4980736.f_84919[iParam0 /*499*/].f_40;
}


float func_387(int iParam0, int iParam1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_112, 18) && iParam1 > 0){
return (Global_4980736.f_84919[iParam0 /*499*/].f_33 * IntToFloat(iParam1));
}
return Global_4980736.f_84919[iParam0 /*499*/].f_33;
}

int func_388(){
if(Global_4718592==0 && Global_4718592.f_2==5){
return 1;
}
return 0;
}


bool func_389(){
return (Global_4718592==0 && Global_4718592.f_2==6);
}

int func_390(int iParam0, int iParam1){
float fVar0;
int iVar1;
fVar0=(IntToFloat(Global_4980736.f_84919[iParam0 /*499*/].f_32) / 100f);
iVar1=floor((fVar0 * 1000f));
if(MISC::IS_BIT_SET(Global_4980736.f_84919[iParam0 /*499*/].f_111, 30) && iParam1 > 0){
iVar1=(iVar1 * iParam1);
}
if(iVar1 > 262143){
iVar1=262143;
}
return iVar1;
}

int func_391(){
int iVar0;
iVar0=CLOCK::GET_CLOCK_HOURS();
if(iVar0 <=5 || iVar0 >=21){
return 1;
}
return 0;
}


bool func_392(int iParam0){
return Global_262145.f_5033[0]==iParam0;
}


void func_393(int iParam0, struct<3> Param1, int iParam2){
int iVar0;
struct<3> Var1;
if(iParam2 !=-1){
iVar0=iParam2;
if(INTERIOR::IS_VALID_INTERIOR(iVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
if(INTERIOR::IS_INTERIOR_READY(iVar0)){
INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iParam0, iVar0);
if(!func_48(Var1, Param1, 0.1f, 0)){
ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
}}}}}

int func_394(int iParam0){
if(((((iParam0==joaat("besra") || iParam0==joaat("lazer")) || iParam0==joaat("barracks")) || iParam0==joaat("barracks2")) || iParam0==joaat("barracks3")) || iParam0==joaat("dune3")){
return 1;
}
return 0;
}


void func_395(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12){
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
}
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 10) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 10, iParam1);
VEHICLE::SET_VEHICLE_MOD(iParam0, 10, iParam1, false);
}
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 5) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 5, iParam2);
VEHICLE::SET_VEHICLE_MOD(iParam0, 5, iParam2, false);
}
if(MISC::IS_BIT_SET(Global_4718592.f_25, 7)){
if(bParam4 > -1 && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam4 /*499*/].f_113, 8)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("trailerlarge")){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 10) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 10, 1);
VEHICLE::SET_VEHICLE_MOD(iParam0, 10, 1, false);
}}}}
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("oppressor2")){
func_398(&iParam0, iParam5, 0, 0);
}elseif(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 1) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 1, iParam5);
VEHICLE::SET_VEHICLE_MOD(iParam0, 1, iParam5, false);
}
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 9) > 0){
if(((((iParam9 > -1 && iParam9 < 4) && MISC::IS_BIT_SET(Global_4718592.f_1265[iParam9 /*23466*/].f_12405, 27)) || (bParam4 > -1 && MISC::IS_BIT_SET(Global_4980736.f_84919[bParam4 /*499*/].f_113, 29))) || (iParam7 > -1 && func_397())) || iParam10){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 9, iParam7);
if(iParam7 > -1){
VEHICLE::SET_VEHICLE_MOD(iParam0, 9, 0, false);
}
switch (iParam7){
case 0:
func_396(&iParam0, joaat("vehicle_weapon_bomb"));
break;
case 1:
func_396(&iParam0, joaat("vehicle_weapon_bomb_incendiary"));
break;
case 2:
func_396(&iParam0, joaat("vehicle_weapon_bomb_gas"));
break;
case 3:
func_396(&iParam0, joaat("vehicle_weapon_bomb_cluster"));
break;
case 4:
func_396(&iParam0, joaat("vehicle_weapon_bomb"));
if(iParam12 > 0){
VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, iParam12);
}
break;
}}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 9, -1, false);
}}
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 4) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 4, iParam6);
VEHICLE::SET_VEHICLE_MOD(iParam0, 4, iParam6, false);
}
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 2) > 0){
if(MISC::IS_BIT_SET(uParam3, 28)){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 2, 0);
VEHICLE::SET_VEHICLE_MOD(iParam0, 2, 0, false);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 2, -1, false);
}}
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 0) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 0, iParam8);
VEHICLE::SET_VEHICLE_MOD(iParam0, 0, iParam8, false);
}
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("dune3")){
if(bParam4 > -1){
if(MISC::IS_BIT_SET(Global_4980736.f_84919[bParam4 /*499*/].f_112, 31)){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 9) > 0){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 9, 0);
VEHICLE::SET_VEHICLE_MOD(iParam0, 9, 0, false);
}}}}
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tampa3")){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 1) > 0){
if(MISC::IS_BIT_SET(uParam3, 29)){
VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 1, 0);
VEHICLE::SET_VEHICLE_MOD(iParam0, 1, 0, false);
}else{
VEHICLE::SET_VEHICLE_MOD(iParam0, 1, -1, false);
}}}
if(iParam11 > -1){
VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, 22, true);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, 1);
VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, 1);
VEHICLE::SET_VEHICLE_NEON_INDEX_COLOUR(iParam0, iParam11);
}
VEHICLE::RELEASE_PRELOAD_MODS(iParam0);
}


void func_396(int iParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
switch (iParam1){
case joaat("vehicle_weapon_bomb"):
VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 0, false);
break;
case joaat("vehicle_weapon_bomb_incendiary"):
VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 1, false);
break;
case joaat("vehicle_weapon_bomb_gas"):
VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 2, false);
break;
case joaat("vehicle_weapon_bomb_cluster"):
VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 3, false);
break;
case 0:
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, 9);
break;
}}
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("strikeforce")){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 9, 0, false);
}}}


bool func_397(){
return Global_4718592==1;
}


void func_398(int iParam0, int iParam1, bool bParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, 0)){
if(VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
if(!bParam2){
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 20, false);
if(VEHICLE::IS_VEHICLE_MODEL(*iParam0, joaat("oppressor2"))){
switch (iParam1){
case 0:
VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 0, false);
break;
case 1:
VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
break;
case -1:
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, 6);
break;
}}else{
switch (iParam1){
case 0:
VEHICLE::SET_VEHICLE_MOD(*iParam0, 1, 0, false);
break;
case 1:
VEHICLE::SET_VEHICLE_MOD(*iParam0, 1, 1, false);
break;
case -1:
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, 1);
break;
}}}else{
if(VEHICLE::IS_VEHICLE_MODEL(*iParam0, joaat("oppressor2"))){
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, 6);
}else{
VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, 1);
}
VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 20, true);
func_285(*iParam0, iParam3);
}}}}

int func_399(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


void func_400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7){
int iVar0;
int iVar1;
if(MISC::IS_BIT_SET(Global_4718592.f_16, 2)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iVar0==joaat("monster")){
if(iParam1==50){
iParam1=92;
}}}
if(iParam2 !=-1){
if(VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0){
VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
}}
if(iParam1 !=-1){
if(iParam4 !=-1){
VEHICLE::SET_VEHICLE_COLOURS(iParam0, iParam1, iParam4);
}else{
VEHICLE::SET_VEHICLE_COLOURS(iParam0, iParam1, iParam1);
}
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iParam1, iParam1);
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
if(iParam7==-1){
if(iParam2 !=-1){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 48) > 0){
VEHICLE::SET_VEHICLE_MOD(iParam0, 48, func_407(iParam0, 48, (iParam2 - 1)), false);
}elseif(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 0 && iParam2 < VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0)){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, iParam2);
}}else{
VEHICLE::SET_VEHICLE_LIVERY(iParam0, -1);
}}
if(iParam5 !=-1){
if(func_354(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, iParam5);
}}}elseif(func_405(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(!func_402(iParam0)){
if(iParam3 > -1 && iParam3 < VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iParam0)){
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, iParam3);
}else{
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iParam0));
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, iVar1);
}}else{
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(0, 27);
iVar1=func_401(iVar1);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, iVar1, iVar1);
VEHICLE::SET_VEHICLE_COLOURS(iParam0, iVar1, iVar1);
}
if(iParam2 !=-1){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 48) > 0){
VEHICLE::SET_VEHICLE_MOD(iParam0, 48, func_407(iParam0, 48, (iParam2 - 1)), false);
}elseif(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 0 && iParam2 < VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0)){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, iParam2);
}}}else{
if(iParam2 !=-1){
if(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 48) > 0){
VEHICLE::SET_VEHICLE_MOD(iParam0, 48, func_407(iParam0, 48, (iParam2 - 1)), false);
}elseif(VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 0 && iParam2 < VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0)){
VEHICLE::SET_VEHICLE_LIVERY(iParam0, iParam2);
}}
VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, 0);
}
if(fParam6 !=-1f){
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, fParam6);
}
VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, 0f);
}

int func_401(int iParam0){
switch (iParam0){
case 0:
return 15;
case 1:
return 16;
case 2:
return 18;
case 3:
return 19;
case 4:
return 14;
case 5:
return 111;
case 6:
return 27;
case 7:
return 40;
case 8:
return 41;
case 9:
return 42;
case 10:
return 49;
case 11:
return 50;
case 12:
return 54;
case 13:
return 80;
case 14:
return 62;
case 15:
return 64;
case 16:
return 88;
case 17:
return 89;
case 18:
return 105;
case 19:
return 37;
case 20:
return 90;
case 21:
return 135;
case 22:
return 137;
case 23:
return 136;
case 24:
return 145;
case 25:
return 71;
case 26:
return 92;
case 27:
return 53;
case 28:
return 70;
case 29:
return 31;
case 30:
return 34;
case 31:
return 38;
case 32:
return 138;
case 33:
return 12;
case 34:
return 13;
case 35:
return 112;
case 36:
return 83;
case 37:
return 39;
case 38:
return 128;
case 39:
return 55;
case 40:
return 148;
case 41:
return 153;
case 42:
return 154;
case 43:
return 117;
case 44:
return 119;
case 45:
return 159;
case 46:
return 120;
case 47:
return 67;
default:
}
return 135;
}

int func_402(int iParam0){
int iVar0;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0==joaat("dukes2") || iVar0==joaat("vigilante")) || iVar0==joaat("visione")) || iVar0==joaat("retinue")) || iVar0==joaat("rapidgt3")) || iVar0==joaat("cyclone")) || iVar0==joaat("yosemite")) || iVar0==joaat("hermes")) || iVar0==joaat("streiter")) || iVar0==joaat("sc1")) || iVar0==joaat("riata")) || iVar0==joaat("raiden")) || iVar0==joaat("gt500")) || iVar0==joaat("z190")) || iVar0==joaat("hustler")) || iVar0==joaat("neon")) || iVar0==joaat("kamacho")) || iVar0==joaat("comet5")) || iVar0==joaat("comet4")) || iVar0==joaat("savestra")) || iVar0==joaat("viseris")) || iVar0==joaat("tezeract")) || iVar0==joaat("ellie")) || iVar0==joaat("issi3")) || iVar0==joaat("hotring")) || iVar0==joaat("flashgt")) || iVar0==joaat("seasparrow")) || iVar0==joaat("swinger")) || iVar0==joaat("romero")) || iVar0==joaat("menacer")) || iVar0==joaat("freecrawler")) || iVar0==joaat("stafford")) || iVar0==joaat("toros")) || iVar0==joaat("clique")) || iVar0==joaat("italigto")) || iVar0==joaat("schlagen")) || iVar0==joaat("deveste")) || iVar0==joaat("pbus2")) || iVar0==joaat("mule4")) || iVar0==joaat("speedo4")) || iVar0==joaat("issi3")) || iVar0==joaat("brioso")) || iVar0==joaat("hermes")) || iVar0==joaat("hustler")) || iVar0==joaat("raptor")) || iVar0==joaat("tampa2")) || iVar0==joaat("jester3")) || iVar0==joaat("swinger")) || iVar0==joaat("entity2")) || iVar0==joaat("taipan")) || iVar0==joaat("toros")) || iVar0==joaat("baller4")) || iVar0==joaat("freecrawler")) || iVar0==joaat("kamacho")) || iVar0==joaat("oppressor")) || iVar0==joaat("diablous2")) || iVar0==joaat("barrage")) || iVar0==joaat("thruster")) || iVar0==joaat("volatol")) || iVar0==joaat("alphaz1")) || iVar0==joaat("blazer5")) || iVar0==joaat("drafter")) || iVar0==joaat("issi7")) || iVar0==joaat("paragon")) || iVar0==joaat("gauntlet3")) || iVar0==joaat("komoda")) || iVar0==joaat("vstr")) || iVar0==joaat("rebla")) || iVar0==joaat("zhaba")) || iVar0==joaat("sugoi")) || iVar0==joaat("sultan2")) || iVar0==joaat("everon")) || iVar0==joaat("vagrant")) || iVar0==joaat("outlaw")) || iVar0==joaat("dukes3")) || iVar0==joaat("gauntlet5")) || iVar0==joaat("club")) || iVar0==joaat("btype2")) || iVar0==joaat("peyote3")) || iVar0==joaat("yosemite3")) || iVar0==joaat("rebel2")) || iVar0==joaat("manana2")) || iVar0==joaat("formula")) || iVar0==joaat("formula2")) || iVar0==joaat("openwheel1")) || iVar0==joaat("openwheel2")) || iVar0==joaat("seminole2")) || iVar0==joaat("youga3")) || iVar0==joaat("glendale2")) || iVar0==joaat("tigon")) || iVar0==joaat("italirsx")) || iVar0==joaat("weevil")) || iVar0==joaat("brioso2")) || iVar0==joaat("slamtruck")) || iVar0==joaat("manchez2")) || iVar0==joaat("calico")) || iVar0==joaat("jester4")) || iVar0==joaat("zr350")) || iVar0==joaat("remus")) || iVar0==joaat("vectre")) || iVar0==joaat("cypher")) || iVar0==joaat("dominator7")) || iVar0==joaat("comet6")) || iVar0==joaat("warrener2")) || iVar0==joaat("rt3000")) || iVar0==joaat("tailgater2")) || iVar0==joaat("sultan3")) || iVar0==joaat("dominator8")) || iVar0==joaat("previon")) || iVar0==joaat("euros")) || iVar0==joaat("growler")) || iVar0==joaat("veto")) || iVar0==joaat("veto2")) || iVar0==joaat("granger2")) || iVar0==joaat("ignus")) || iVar0==joaat("deity")) || iVar0==joaat("buffalo4")) || iVar0==joaat("astron")) || iVar0==joaat("comet7")) || iVar0==joaat("baller7")) || iVar0==joaat("jubilee")) || iVar0==joaat("cinquemila")) || iVar0==joaat("iwagen")) || iVar0==joaat("zeno")) || iVar0==joaat("champion")) || iVar0==joaat("patriot3")) || iVar0==joaat("shinobi")) || iVar0==joaat("reever")) || iVar0==joaat("corsita")) || iVar0==joaat("brioso3")) || iVar0==joaat("draugur")) || iVar0==joaat("rhinehart")) || iVar0==joaat("kanjosj")) || iVar0==joaat("lm87")) || iVar0==joaat("postlude")) || iVar0==joaat("sm722")) || iVar0==joaat("tenf")) || iVar0==joaat("tenf2")) || iVar0==joaat("torero2")) || iVar0==joaat("vigero2")) || iVar0==joaat("weevil2")) || iVar0==joaat("greenwood")) || iVar0==joaat("ruiner4")) || iVar0==joaat("sentinel4")) || iVar0==joaat("conada")) || iVar0==joaat("omnisegt")) || func_403(iVar0)){
return 1;
}
return 0;
}

int func_403(int iParam0){
if(func_404(iParam0)){
return 1;
}
return 0;
}

int func_404(int iParam0){
switch (iParam0){
case joaat("powersurge"):
case joaat("journey2"):
case joaat("eudora"):
case joaat("surfer3"):
case joaat("speedo2"):
case joaat("cargoplane2"):
case joaat("dune2"):
case joaat("entity3"):
case joaat("panthere"):
case joaat("boor"):
case joaat("virtue"):
case joaat("everon2"):
case joaat("r300"):
case joaat("brickade2"):
case joaat("tulip2"):
return 1;
default:
}
if((iParam0==joaat("broadway") || iParam0==joaat("issi8")) || iParam0==joaat("tahoma")){
return 1;
}
return 0;
}

int func_405(int iParam0){
if(func_406()){
return 1;
}
if((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0==joaat("shamal") || iParam0==joaat("stunt")) || iParam0==joaat("sanchez")) || iParam0==joaat("tribike")) || iParam0==joaat("ambulance")) || iParam0==joaat("firetruk")) || iParam0==joaat("taco")) || iParam0==joaat("tanker")) || iParam0==joaat("tanker2")) || iParam0==joaat("trflat")) || iParam0==joaat("trailers")) || iParam0==joaat("gburrito")) || iParam0==joaat("boxville2")) || iParam0==joaat("boxville4")) || iParam0==joaat("journey")) || iParam0==joaat("stockade")) || iParam0==joaat("submersible")) || iParam0==joaat("submersible2")) || iParam0==joaat("trash")) || iParam0==joaat("bus")) || iParam0==joaat("coach")) || iParam0==joaat("taxi")) || iParam0==joaat("airtug")) || iParam0==joaat("bulldozer")) || iParam0==joaat("handler")) || iParam0==joaat("dump")) || iParam0==joaat("mixer")) || iParam0==joaat("tiptruck")) || iParam0==joaat("police3")) || iParam0==joaat("policeb")) || iParam0==joaat("riot")) || iParam0==joaat("pbus")) || iParam0==joaat("buzzard")) || iParam0==joaat("annihilator")) || iParam0==joaat("polmav")) || iParam0==joaat("predator")) || iParam0==joaat("rhino")) || iParam0==joaat("cargobob")) || iParam0==joaat("titan")) || iParam0==joaat("barracks")) || iParam0==joaat("barracks2")) || iParam0==joaat("barracks3")) || iParam0==joaat("armytanker")) || iParam0==joaat("cargobob2")) || iParam0==joaat("dilettante2")) || iParam0==joaat("jet")) || iParam0==joaat("paradise")) || iParam0==joaat("monster")) || iParam0==joaat("sovereign")) || iParam0==joaat("boxville3")) || iParam0==joaat("savage")) || iParam0==joaat("swift2")) || iParam0==joaat("luxor2")) || iParam0==joaat("camper")) || iParam0==joaat("tug")) || iParam0==joaat("policet")) || iParam0==joaat("crusader")){
return 0;
}
return 1;
}


bool func_406(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_407(int iParam0, int iParam1, int iParam2){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=iParam2;
func_293(iVar0, -1, (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1));
while (iVar0 >=0 && func_250(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}


void func_408(int iParam0, var uParam1, int iParam2){
int iVar0;
if(MISC::IS_BIT_SET(uParam1, 8)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mule")){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, true);
}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("benson")){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, false);
}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("dune")){
if(MISC::IS_BIT_SET(Global_4718592.f_16, 2)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, false);
}}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("dune")){
if(MISC::IS_BIT_SET(Global_4718592.f_16, 2)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, false);
}else{
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, false);
}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mule") && iParam2 !=-1){
iVar0=floor(pow(to_float(2), to_float(iParam2 + 2)));
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, !MISC::IS_BIT_SET(iVar0, 2));
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, !MISC::IS_BIT_SET(iVar0, 3));
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, !MISC::IS_BIT_SET(iVar0, 4));
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, !MISC::IS_BIT_SET(iVar0, 5));
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, !MISC::IS_BIT_SET(iVar0, 6));
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, !MISC::IS_BIT_SET(iVar0, 7));
}}

int func_409(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_410(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_410(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_411(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_411(int iParam0, struct<3> Param1, int iParam2){
int iVar0;
int iVar1;
struct<3> Var2;
iVar0=iParam0;
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


float func_412(bool bParam0){
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_4980736.f_84919[bParam0 /*499*/].f_12) || VEHICLE::IS_THIS_MODEL_A_BIKE(Global_4980736.f_84919[bParam0 /*499*/].f_12)){
return 3f;
}elseif(VEHICLE::IS_THIS_MODEL_A_BOAT(Global_4980736.f_84919[bParam0 /*499*/].f_12)){
return 6f;
}elseif(VEHICLE::IS_THIS_MODEL_A_PLANE(Global_4980736.f_84919[bParam0 /*499*/].f_12)){
return 10f;
}elseif(VEHICLE::IS_THIS_MODEL_A_HELI(Global_4980736.f_84919[bParam0 /*499*/].f_12)){
return 10f;
}
return 3f;
}


bool func_413(int iParam0){
return iParam0 !=-1;
}


bool func_414(int iParam0, bool bParam1, bool bParam2){
return func_415(1, iParam0, 0, bParam1, bParam2);
}

int func_415(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Global_1666891, 0)){
return 0;
}
if((bParam2 && !bParam3) && iParam1 <=(func_419(iParam0) - func_418(iParam0, 0))){
return 1;
}else{
if(bParam3){
if(bParam2){
iVar0=(iParam1 - func_418(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_419(iParam0) - func_417(iParam0));
}else{
if(bParam2){
iVar0=(iParam1 - func_418(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_419(iParam0) - func_418(iParam0, 1));
}
if(!bParam4 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] !=3){
iVar1=(iVar1 - func_416(iParam0));
}
if(iVar0 < iVar1){
return 1;
}}
return 0;
}

int func_416(int iParam0){
switch (iParam0){
case 0:
return 10;
break;
case 1:
return 10;
break;
case 2:
return 10;
break;
}
return 0;
}

int func_417(int iParam0){
switch (iParam0){
case 0:
return Global_1666891.f_1;
break;
case 1:
return Global_1666891.f_2;
break;
case 2:
return Global_1666891.f_3;
break;
}
return 0;
}

int func_418(int iParam0, bool bParam1){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657589[iVar0 /*466*/].f_219;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
}
break;
case 1:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657589[iVar0 /*466*/].f_220;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
}
break;
case 2:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657589[iVar0 /*466*/].f_221;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
}
break;
}
return 0;
}

int func_419(int iParam0){
switch (iParam0){
case 0:
return Global_1666899;
break;
case 1:
return Global_1666900;
break;
case 2:
return Global_1666901;
break;
}
return 0;
}

int func_420(var uParam0){
int iVar0;
struct<3> Var1;
var uVar2;
struct<35> Var3;
Var3.f_5=1115815936;
Var3.f_13=2;
Var3.f_20=2;
Var3.f_32=-1082130432;
Var3.f_34=1;
iVar0=0;
while (iVar0 < Global_4980736.f_102382){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar0])){
STREAMING::REQUEST_MODEL(Local_180.f_257);
if(STREAMING::HAS_MODEL_LOADED(Local_180.f_257)){
if(NETWORK::CAN_REGISTER_MISSION_PEDS(1)){
if(iLocal_990[iVar0]==0){
Var1={
Global_4980736.f_102388[iVar0 /*1051*/] 
};
uVar2=Global_4980736.f_102388[iVar0 /*1051*/].f_3;
if(((!func_175(Var1, 10f, 1, 1, 0, 0, 0, 0, 0) && func_413(Local_180.f_367[iVar0])) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_180.f_367[iVar0])) && func_219(Var1, 3f, 1f, 1f, 2f, 0, 1, 0, 30f, 1, -1, 0, 0f, 1, 0f, 1, 0)){
iLocal_991[iVar0]=1;
}
else{
iLocal_990[iVar0]=1;
}}
if(iLocal_990[iVar0]==1){
Var3={
Local_180.f_261 
};
Var3.f_3=Local_180.f_232[iVar0 /*4*/].f_2;
Var3.f_5=5f;
if(func_54(Local_180.f_570, Local_180.f_570.f_3, Local_180.f_570.f_6, &Var1, &uVar2, Var3)){
iLocal_991[iVar0]=1;
}}
if(iLocal_991[iVar0]==1){
if(func_53(uParam0[iVar0], 26, Local_180.f_257, Var1, uVar2, 1, 1, 1)){
func_44(NETWORK::NET_TO_PED((*uParam0)[iVar0]), iVar0, 1);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED((*uParam0)[iVar0]), 1, 1);
}}}}}
iLocal_990[iVar0]=0;
iLocal_991[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_4980736.f_102382){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar0])){
return 0;
}
iVar0++;
}
return 1;
}


void func_421(){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(!func_413(Local_180.f_367[iVar0])){
func_422(&(Local_180.f_367[iVar0]), Global_4980736.f_102388[iVar0 /*1051*/], 1.5f);
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(iVar0 < Local_180.f_363){
if(!func_413(Local_180.f_374[iVar0])){
func_422(&(Local_180.f_374[iVar0]), Global_4980736.f_84919[iVar0 /*499*/], 2f);
}}
iVar0++;
}}


void func_422(var uParam0, struct<3> Param1, float fParam2){
if(*uParam0==-1){
*uParam0=GRAPHICS::CREATE_TRACKED_POINT();
GRAPHICS::SET_TRACKED_POINT_INFO(*uParam0, Param1, fParam2);
}}

int func_423(var uParam0){
if(uParam0->f_1){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=1000){
return 1;
}}
return 0;
}


void func_424(var uParam0){
if(!uParam0->f_1){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_38(uParam0, 0, 0);
}}}

int func_425(){
bool bVar0;
char[] cVar1[8];
char* sVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
switch (Local_215.f_436){
case 0:
func_563(1);
if(func_552(&Local_215, &uLocal_987, &bVar0, 0, 0)){
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
GRAPHICS::ANIMPOSTFX_STOP_ALL();
}
func_551();
AUDIO::PLAY_SOUND_FRONTEND(-1, "MP_WAVE_COMPLETE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_550(&Local_215, 0);
func_547(1, 1);
func_545(0);
func_528(0);
if(!func_586()){
func_564(PLAYER::PLAYER_ID(), 0, 0, 0);
}
if(bVar0){
CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}elseif(func_1680(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), 0);
}
Local_215.f_436=1;
}
break;
case 1:
func_528(0);
func_550(&Local_215, 0);
if((func_527(&Local_215) && CAM::IS_SCREEN_FADED_IN()) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn")){
cVar1="SUMMARY";
sVar2="HUD_COLOUR_BLACK";
iVar3=func_28(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()));
iVar8=func_491(3, "XPT_MEDIUMT", -1636175450, 1549188685, round(((500f * Global_262145.f_4234) * Global_262145.f_1)), 1, -1, 0);
iVar4=func_27(iVar3, 0);
iVar5=iVar4 + 1;
iVar6=func_490(iVar4, 0, 0);
iVar7=func_490(iVar5, 0, 0);
Local_215.f_419=666;
func_489(&Local_215, cVar1, sVar2, 1, 0);
func_458(&Local_215, cVar1, 4, 1, "", "", "");
Local_215.f_419 +=2333;
func_457(&Local_215, cVar1, Local_214.f_1, 0, 1);
Local_215.f_419 +=2333;
if(Local_214.f_2 > 0){
func_456(&Local_215, cVar1, Local_214.f_2);
Local_215.f_419 +=2333;
}
if(Local_214.f_3 > 0){
func_454(&Local_215, cVar1, Local_214.f_3);
Local_215.f_419 +=2333;
}
func_453(&Local_215, cVar1, iVar8, iVar3, iVar6, iVar7, iVar4, iVar5);
Local_215.f_419 +=2333;
if((iVar3 + iVar8) >=iVar7){
Local_215.f_419 +=1749;
}
func_452(&Local_215, cVar1, -1, 0);
func_451(&Local_215, cVar1);
func_36(&(Local_215.f_430));
func_38(&(Local_215.f_430), 0, 0);
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_CELEB_SCREEN_SCENE")){
AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
}
func_450(&Local_215);
Local_215.f_436=3;
}elseif(GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn")){
if(!func_40(&(Local_215.f_456))){
func_38(&(Local_215.f_456), 0, 0);
}elseif(func_37(&(Local_215.f_456), 1000, 0)){
func_446();
}}
break;
case 3:
func_528(0);
func_445(&Local_215, 0);
if(func_1680(PLAYER::PLAYER_ID(), 1, 1) && CAM::DOES_CAM_EXIST(uLocal_987)){
if(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.1f){
CAM::DETACH_CAM(uLocal_987);
CAM::STOP_CAM_POINTING(uLocal_987);
}}
if(func_444()){
GRAPHICS::ANIMPOSTFX_STOP_ALL();
GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win_Out", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
func_441(&uLocal_987);
func_36(&(Local_215.f_430));
func_38(&(Local_215.f_430), 0, 0);
Local_215.f_436=4;
}
break;
case 4:
func_445(&Local_215, 0);
if(func_37(&(Local_215.f_430), 1000, 0)){
func_438();
func_437(&Local_215, "SUMMARY");
func_426(&Local_215, 1, 0, 0);
func_547(0, 1);
func_564(PLAYER::PLAYER_ID(), 1, 0, 0);
if(CAM::DOES_CAM_EXIST(uLocal_987)){
CAM::DESTROY_CAM(uLocal_987, 1);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}
Local_215.f_436=5;
return 1;
}else{
func_528(0);
}
break;
case 5:
return 1;
break;
}
return 0;
}


void func_426(var uParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam2)){
func_437(uParam0, iParam2);
}
func_436(uParam0);
if(CAM::DOES_CAM_EXIST(uParam0->f_1224)){
CAM::SET_CAM_ACTIVE(uParam0->f_1224, 0);
CAM::DESTROY_CAM(uParam0->f_1224, 0);
}
iVar0=0;
while (iVar0 < 8){
if(uParam0->f_3[iVar0] !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_3[iVar0]));
uParam0->f_3[iVar0]=0;
}
iVar0++;
}
func_434();
func_433(uParam0);
func_432(uParam0);
if(bParam1){
func_547(0, 1);
}
func_427(0, 1, 1, 0, bParam3, 0, 0);
Global_1935177=0;
}


void func_427(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_431(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_430()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_429(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_431(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_429(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_134(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID(), 0)) && !func_428()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_134(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_428(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_429(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}

int func_430(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_431(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


void func_432(var uParam0){
uParam0->f_436=0;
uParam0->f_419=0;
uParam0->f_420=0;
uParam0->f_437=0;
uParam0->f_426=0;
uParam0->f_427=0;
uParam0->f_1209=0;
func_36(&(uParam0->f_430));
func_36(&(uParam0->f_432));
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_20)){
PED::DELETE_PED(&(uParam0->f_20));
}}


void func_433(var uParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_21)){
OBJECT::DELETE_OBJECT(&(uParam0->f_21));
}
if(INTERIOR::IS_VALID_INTERIOR(uParam0->f_41)){
if(INTERIOR::IS_INTERIOR_READY(uParam0->f_41)){
INTERIOR::UNPIN_INTERIOR(uParam0->f_41);
}}
STREAMING::REMOVE_ANIM_DICT("Move_m@generic_idles@std");
STREAMING::REMOVE_ANIM_DICT("Move_f@generic_idles@std");
STREAMING::REMOVE_ANIM_DICT("mp_player_intfinger");
STREAMING::REMOVE_ANIM_DICT("mp_player_intsalute");
STREAMING::REMOVE_ANIM_DICT("mp_player_introck");
STREAMING::REMOVE_ANIM_DICT("mp_player_intwank");
iVar0=0;
iVar0=0;
while (iVar0 < uParam0->f_23){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[iVar0])){
PED::DELETE_PED(&(uParam0->f_23[iVar0]));
}
iVar0++;
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_1225)){
OBJECT::DELETE_OBJECT(&(uParam0->f_1225));
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_1226)){
OBJECT::DELETE_OBJECT(&(uParam0->f_1226));
}}


void func_434(){
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_B@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_C@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_A@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_B@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_C@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_D@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_E@BASE");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_A@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA_IDLES@MALE_B@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA@SINGLE_TEAM");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@FEMALE_A");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_A");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_B");
STREAMING::REMOVE_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_C");
if(func_435(Global_4718592.f_166301)){
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE");
STREAMING::REMOVE_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A");
}}


bool func_435(int iParam0){
return iParam0==15;
}


void func_436(var uParam0){
if(*uParam0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}
if(uParam0->f_1 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
uParam0->f_1=0;
}
if(uParam0->f_2 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_2));
uParam0->f_2=0;
}}


void func_437(var uParam0, char* sParam1){
if(*uParam0 !=0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEANUP");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(uParam0->f_1 !=0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CLEANUP");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(uParam0->f_2 !=0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CLEANUP");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_438(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_439(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_439(var uParam0, int iParam1){
func_440(uParam0, iParam1);
}


void func_440(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}

int func_441(var uParam0){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(CAM::DOES_CAM_EXIST(*uParam0)){
Var0={
CAM::GET_CAM_COORD(*uParam0) 
};
Var1={
CAM::GET_CAM_ROT(*uParam0, 2) 
};
fVar2=CAM::GET_CAM_FOV(*uParam0);
CAM::STOP_CAM_POINTING(*uParam0);
CAM::SET_CAM_PARAMS(*uParam0, Var0, Var1, (fVar2 - 3f), 0, 1, 1, 2);
CAM::SET_CAM_PARAMS(*uParam0, Var0, Var1, fVar2, 1500, 0, 0, 2);
func_442(uParam0, 0.3f);
return 1;
}
return 0;
}


void func_442(var uParam0, float fParam1){
if(func_443()){
return;
}
CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam1);
}


bool func_443(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_444(){
return HUD::GET_GLOBAL_ACTIONSCRIPT_FLAG(10)==5;
}


void func_445(var uParam0, bool bParam1){
if(bParam1){
CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
}
if((*uParam0 !=0 && uParam0->f_1 !=0) && uParam0->f_2 !=0){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*uParam0, uParam0->f_1, 255, 255, 255, 255);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
}}


void func_446(){
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_race_crash")){
GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
}
func_449(0);
func_448(0);
func_447(0);
Global_2672505.f_2508.f_2=0;
}


void func_447(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_2672505.f_2508.f_2), 2);
}else{
MISC::CLEAR_BIT(&(Global_2672505.f_2508.f_2), 2);
}}


void func_448(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_2672505.f_2508.f_2), true);
}else{
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPDark")){
GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPDark");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn")){
GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPIn");
}
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
MISC::CLEAR_BIT(&(Global_2672505.f_2508.f_2), true);
}}


void func_449(bool bParam0){
if(bParam0){
GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine")){
GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
}
if(GRAPHICS::GET_REQUESTINGNIGHTVISION()){
GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPDark", 0, 0);
}else{
GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPIn", 0, 0);
}
CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
Global_2672505.f_2508=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_2508.f_1=NETWORK::GET_NETWORK_TIME();
MISC::SET_BIT(&(Global_2672505.f_2508.f_2), false);
}else{
MISC::CLEAR_BIT(&(Global_2672505.f_2508.f_2), false);
}}


void func_450(var uParam0){
uParam0->f_453=0;
Global_1574971=0;
func_36(&(uParam0->f_454));
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade")){
GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
}}


void func_451(var uParam0, char* sParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_STAT_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_STAT_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "SHOW_STAT_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_452(var uParam0, char* sParam1, int iParam2, int iParam3){
if(func_165()){
iParam3=1;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_BACKGROUND_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(iParam2 > -1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_BACKGROUND_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(iParam2 > -1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_BACKGROUND_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(iParam2 > -1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_453(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_454(var uParam0, char* sParam1, int iParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_POINT_BLANK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_POINT_BLANK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_POINT_BLANK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_455(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


void func_456(var uParam0, char* sParam1, int iParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_HEADSHOTS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_HEADSHOTS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_HEADSHOTS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_457(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_TOTAL_KILLS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(bParam3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
if(bParam4){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_TOTAL_KILLS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(bParam3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
if(bParam4){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_STAT_NUMERIC_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_455("CELEB_TOTAL_KILLS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(bParam3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
if(bParam4){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("left");
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("right");
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_458(var uParam0, char* sParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6){
char* sVar0;
char* sVar1;
bool bVar2;
if(func_487()){
if(bParam3){
sVar0="CELEB_WINNER";
}else{
sVar0="CELEB_LOSER";
}
if(func_486()){
sVar1="CELEB_MATCH";
}else{
sVar1="CELEB_ROUND";
}}else{
if(iParam2==8){
if(MISC::IS_BIT_SET(uParam0->f_1227, 1)){
sVar0="CELEB_DTR";
}else{
sVar0="CELEB_OUT_OF_LIVES";
}}elseif((((((iParam2==2 || iParam2==0) || iParam2==9) || iParam2==4) || iParam2==6) || iParam2==7) || iParam2==3){
if(bParam3){
if(Global_4718592.f_160500==9){
sVar0="CELEB_DRUG1_2";
}elseif(Global_4718592.f_160500==10){
sVar0="CELEB_DRUG2_2";
}else{
sVar0="CELEB_PASSED";
}}elseif(Global_4718592.f_160500==9){
sVar0="CELEB_DRUG1_2F";
}elseif(Global_4718592.f_160500==10){
sVar0="CELEB_DRUG2_2F";
}else{
sVar0="CELEB_FAILED";
}}elseif(bParam3){
sVar0="CELEB_WINNER";
}else{
sVar0="CELEB_LOSER";
}
if(iParam2==9){
sVar1="CELEB_OBJECTIVE";
}elseif(iParam2==2){
sVar1="CELEB_SURVIVAL";
}elseif(iParam2==4){
sVar1="CELEB_GANG_ATTACK";
}elseif(iParam2==6){
if(func_165()){
switch (func_485()){
case 3:
sVar1="CELEB_ACT_1";
break;
case 8:
sVar1="CELEB_ACT_2";
break;
case 15:
case 14:
sVar1="CELEB_ACT_3";
break;
}}else{
sVar1="CELEB_HEIST";
}}elseif(iParam2==7){
sVar1="FMMC_RSTAR_HP";
}elseif((iParam2==5 || iParam2==8) || iParam2==1){
sVar1="";
}elseif(iParam2==3){
sVar1="CELEB_LESSON";
}elseif(Global_4718592.f_160500==6){
sVar1="CELEB_ROBBERY";
}elseif(Global_4718592.f_160500==9 && bParam3){
sVar1="CELEB_DRUG1_1";
}elseif(Global_4718592.f_160500==10 && bParam3){
sVar1="CELEB_DRUG2_1";
}else{
sVar1="CELEB_MISSION";
}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_MISSION_RESULT_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar1)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_455(sVar1);
}
func_455(sVar0);
if(!bParam3 || iParam2==9){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
bVar2=true;
}}else{
bVar2=true;
}
if(bVar2){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
if(func_484(Global_4718592.f_166301) || func_483(Global_4718592.f_166301)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_459(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::PLAYER_ID(), 0));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_MISSION_RESULT_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar1)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_455(sVar1);
}
func_455(sVar0);
if(!bParam3 || iParam2==9){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
bVar2=true;
}}else{
bVar2=true;
}
if(bVar2){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
if(func_484(Global_4718592.f_166301) || func_483(Global_4718592.f_166301)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_459(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::PLAYER_ID(), 0));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_MISSION_RESULT_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(MISC::IS_STRING_NULL_OR_EMPTY(sVar1)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_455(sVar1);
}
func_455(sVar0);
if(!bParam3 || iParam2==9){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
bVar2=true;
}}else{
bVar2=true;
}
if(bVar2){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
if(func_484(Global_4718592.f_166301) || func_483(Global_4718592.f_166301)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_459(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::PLAYER_ID(), 0));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_459(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_475()){
iVar2=func_472(bParam1);
if(!iVar2==-1){
return func_470(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && bParam1 !=func_72()){
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
iVar0=func_462(bParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_461(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_131(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1)){
iVar0=func_460(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_460(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}

int func_461(int iParam0){
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

int func_462(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_469() || (func_381() && func_468())) && Global_1665699.f_1){
if(bParam1){
return func_467(iParam2, iVar0);
}else{
return func_467(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_131(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_466(1);
}else{
return func_466(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_463(iVar0, iParam2, 1, 4);
}else{
return func_463(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_466(1);
}
return func_466(0);
}

int func_463(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_465(iParam0, iParam1, iParam3);
if(func_464(Global_4718592.f_113724, 1)){
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

int func_464(int iParam0, bool bParam1){
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

int func_465(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_131(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_466(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_467(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_465(iParam1, iParam0, 4);
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

int func_468(){
if(func_443()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}

int func_469(){
if(func_443() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_470(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_471(iParam0);
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


var func__471(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_472(bool bParam0){
if(!bParam0==func_72()){
if(func_473(bParam0, 1)){
return Global_2648605.f_818.f_11[func_128(bParam0)];
}}
return -1;
}


bool func_473(int iParam0, bool bParam1){
if(!bParam1){
if(func_474(iParam0)){
return 0;
}}
return Global_1894573[iParam0 /*608*/].f_10 !=func_72();
}

int func_474(int iParam0){
if(iParam0 !=func_72()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_72()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_475(){
if((((((func_482() || func_481()) || func_165()) || func_252()) || func_480()) || func_478()) || func_476()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_476(){
return func_477(Global_4718592.f_113724);
}

int func_477(int iParam0){
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

int func_478(){
return func_479(Global_4718592.f_113724);
}

int func_479(int iParam0){
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


bool func_480(){
return Global_2683864.f_24;
}


var func__481(){
return Global_2683864.f_18;
}


bool func_482(){
return Global_2683864.f_17;
}


bool func_483(int iParam0){
return iParam0==42;
}


bool func_484(int iParam0){
return iParam0==16;
}

int func_485(){
return Global_2683864.f_26;
}


bool func_486(){
return Global_2683864.f_669.f_12;
}

int func_487(){
if(func_488()){
return 1;
}
if(func_486()){
return 1;
}
return 0;
}


bool func_488(){
return Global_2683864.f_669.f_9 > 0;
}


void func_489(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4){
if(bParam3){
sParam2="HUD_COLOUR_BLACK";
}
if(func_165()){
if(Global_2684801.f_3480){
sParam2="HUD_COLOUR_HARK";
}}
func_437(uParam0, sParam1);
HUD::RESET_GLOBAL_ACTIONSCRIPT_FLAG(10);
if(*uParam0 !=0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CREATE_STAT_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(iParam4 > 0 && iParam4 <=3){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(uParam0->f_1 !=0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "CREATE_STAT_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(iParam4 > 0 && iParam4 <=3){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(uParam0->f_2 !=0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "CREATE_STAT_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(iParam4 > 0 && iParam4 <=3){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_490(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297010[iParam0];
}


var func__491(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
return func_492(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}


var func__492(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_493(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_493(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_520();
if(func_519(uParam2)){}
if(func_518()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_517(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_516(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_514(0, &iVar1);
break;
case 3:
func_514(1, &iVar1);
break;
case 1:
func_512(&iVar1);
break;
}}
if(iVar1 > Global_1961999){
return 0;
}
if(iParam1==0){
if(iVar1 > iVar2){
if(iParam0==1){
iVar1=iVar2;
}
if(iParam0==2 || iParam0==3){
iVar1=iVar2;
}}}
if(bParam7){
func_510(1165, iVar1, -1);
if(iParam1==0){
func_503((func_28(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_510(1166, iVar1, -1);
}
func_498(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_494((func_496(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_494((func_496(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_494(int iParam0){
if(func_518()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_495(joaat("mpply_globalxp"), iParam0);
}}


void func_495(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}}

int func_496(int iParam0){
if(iParam0 > -1){
if(func_1680(iParam0, 0, 1)){
if(iParam0==PLAYER::PLAYER_ID()){
return func_497(joaat("mpply_globalxp"));
}else{
return Global_1853910[iParam0 /*862*/].f_205.f_5;
}}else{
return func_497(joaat("mpply_globalxp"));
}}
return 0;
}

int func_497(int iParam0){
int iVar0;
var uVar1;
iVar0=iParam0;
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_498(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_129(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_501(func_502(&Var0));
if(iVar1==0){
func_500(&Global_1665493, iParam0);
func_499(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar1==1){
func_500(&Global_1665494, iParam0);
func_499(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar1==2){
func_500(&Global_1665495, iParam0);
func_499(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar1==3){
func_500(&Global_1665496, iParam0);
func_499(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar1==4){
func_500(&Global_1665497, iParam0);
func_499(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_499(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=iParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=iParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=iParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=iParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=iParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=iParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=iParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=iParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=iParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=iParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=iParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=iParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=iParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=iParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=iParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=iParam1;
break;
default:
break;
}}


void func_500(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_501(int iParam0){
if(iParam0==Global_1665488){
return 0;
}elseif(iParam0==Global_1665489){
return 1;
}elseif(iParam0==Global_1665490){
return 2;
}elseif(iParam0==Global_1665491){
return 3;
}elseif(iParam0==Global_1665492){
return 4;
}else{
return -1;
}
return -1;
}

int func_502(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694468;
}}
return Global_2694468;
}


void func_503(int iParam0, int iParam1, int iParam2){
if(func_518()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_30(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_30(-1)]){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0==0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
if(iParam2==0){
return;
}}}
if(Global_262145.f_10069==0){
if(iParam0 < 0){
STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
return;
}}
if(func_29(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_509(iParam0, 1);
}
func_508(640, iParam0, -1, 1);
func_507(641, func_509(iParam0, 1), -1, 1, 0);
Global_1665638[func_30(-1)]=iParam0;
func_504(-1109644434, 7, 0);
}}


void func_504(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_506(iParam1, iParam2)){
iVar0=func_505();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_505(){
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

int func_506(int iParam0, var uParam1){
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


void func_507(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_30(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_508(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_30(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_30(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_30(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_30(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_30(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_30(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_30(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_30(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_30(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_30(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_30(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_30(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_30(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_30(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_30(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_30(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_30(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_30(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_30(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_30(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_30(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_30(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_30(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_30(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_30(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_30(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_30(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_30(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_30(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_30(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_30(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_30(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_30(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_30(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_30(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_30(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_30(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_30(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_30(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_30(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_30(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_30(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_30(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_30(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_30(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_30(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_30(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_30(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_30(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_30(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_30(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_30(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_30(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_30(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_30(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_30(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_30(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_30(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_30(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_30(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_30(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_30(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_30(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_30(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_30(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_30(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_30(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_30(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_30(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_30(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_30(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_30(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_30(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_30(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_30(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_30(iParam2)]=iParam1;
break;
default:
break;
}}

int func_509(int iParam0, bool bParam1){
if(bParam1){}
return func_27(iParam0, 0);
}


void func_510(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_304(iParam0, func_30(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_511(iParam0)){
func_507(iParam0, iVar0, iParam2, 1, 0);
}else{
func_508(iParam0, iVar0, iParam2, 1);
}}

int func_511(int iParam0){
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


void func_512(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
iVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(iVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_131(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_130(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
iVar0++;
}
if(bVar3){
iVar6=round((func_513(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_513(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_513(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}


void func_514(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
iVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_1680(iVar4, 0, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_130(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
iVar4=iVar0;
if(func_1680(iVar4, 1, 1)){
if(iVar4 !=PLAYER::PLAYER_ID()){
if(func_515(PLAYER::PLAYER_ID(), iVar4) <=20f){
iVar1++;
if(func_130(PLAYER::PLAYER_ID(), iVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_513(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_513(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_515(int iParam0, int iParam1){
return vdist(func_124(iParam0), func_124(iParam1));
return 0f;
}

int func_516(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_513(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_517(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_28(PLAYER::PLAYER_ID())){
iParam0=-func_28(PLAYER::PLAYER_ID());
}}
if(func_490(8000, 0, 0) > 0){
if(func_490(8000, 0, 0) < (iParam0 + func_28(PLAYER::PLAYER_ID()))){
iParam0=(func_490(8000, 0, 0) - func_28(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_518(){
return 1;
}

int func_519(char* sParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0")){
return 1;
}
return 0;
}

int func_520(){
int iVar0;
if(func_526(PLAYER::PLAYER_ID()) || func_525(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_523() || func_521(PLAYER::PLAYER_ID())){
if(Global_262145.f_23282 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_23282;
}}elseif(Global_262145.f_7095 > 30000){
iVar0=30000;
}else{
iVar0=Global_262145.f_7095;
}
return iVar0;
}

int func_521(int iParam0){
return func_522(func_322(iParam0));
}

int func_522(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}


bool func_523(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_165();
}
return func_524(Global_4718592.f_113724);
}

int func_524(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 16){
if(Global_262145.f_5042[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_525(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==2;
}


bool func_526(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==7;
}

int func_527(var uParam0){
if((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2)){
return 1;
}else{
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
}
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1)){
}
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_2)){
}}
return 0;
}


void func_528(bool bParam0){
bool bVar0;
if(func_544() || func_543()){
return;
}
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
func_542();
func_536(0);
func_535();
HUD::THEFEED_HIDE_THIS_FRAME();
CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), func_534(PLAYER::PLAYER_PED_ID(), 0)))){
CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
func_532();
CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
}
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
}
func_530();
bVar0=false;
bVar0=func_529("HQRHELP");
if(!bVar0){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
if(!bParam0){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
}


bool func_529(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_530(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_531();
}


void func_531(){
Global_23131.f_134=1;
}


void func_532(){
if(!func_533(PLAYER::PLAYER_ID(), 0, 0)){
CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
}}

int func_533(bool bParam0, bool bParam1, int iParam2){
if(Global_2657589[bParam0 /*466*/].f_232==99){
if((iParam2 && Global_2657589[bParam0 /*466*/].f_235==0) || iParam2==0){
return 0;
}}
if(bParam1){
if(Global_2657589[bParam0 /*466*/].f_232==13){
return 0;
}}
return 1;
}

int func_534(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
iVar1=VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
if(iVar1==1){
iVar3=-1;
return iVar3;
}
iVar2=0;
while (iVar2 < iVar1){
iVar3=(iVar2 - 1);
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0)==iParam0){
return iVar3;
}}
iVar2++;
}}}}
return iVar3;
}


void func_535(){
MISC::SET_BIT(&Global_8254, 4);
}


void func_536(int iParam0){
if(func_541()){
return;
}
if(!Global_20383.f_1==1){
if(func_540(0)){
func_537(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_537(int iParam0){
if(func_541()){
return;
}
if(Global_20584){
if(func_539()){
func_538(1, 1);
}else{
func_538(0, 0);
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
if(!func_430()){
Global_20383.f_1=3;
}}


void func_538(bool bParam0, bool bParam1){
if(bParam0){
if(func_540(0)){
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


bool func_539(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_540(int iParam0){
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


bool func_541(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_542(){
MISC::SET_BIT(&Global_8254, 7);
}


bool func_543(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148;
}


bool func_544(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/]==5;
}


void func_545(bool bParam0){
if(!bParam0){
func_537(0);
}
func_438();
func_546();
}


void func_546(){
Global_75696=1;
}


void func_547(bool bParam0, bool bParam1){
if(bParam0){
func_549();
func_429(1, 0, 1, 0);
CAM::SET_WIDESCREEN_BORDERS(1, 0);
}else{
if(bParam1){
func_548();
func_429(0, 0, 1, 0);
}
CAM::SET_WIDESCREEN_BORDERS(0, 0);
}
Global_1935176=bParam0;
if(bParam0==0){
Global_1935178=0;
}}


void func_548(){
if(Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=0;
}}


void func_549(){
if(!Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=1;
}}


void func_550(var uParam0, int iParam1){
char* sVar0;
char* sVar1;
char* sVar2;
switch (iParam1){
case 0:
sVar0="MP_CELEBRATION_BG";
sVar1="MP_CELEBRATION_FG";
sVar2="MP_CELEBRATION";
break;
case 1:
sVar0="HEIST_CELEBRATION_BG";
sVar1="HEIST_CELEBRATION_FG";
sVar2="HEIST_CELEBRATION";
break;
case 2:
sVar0="HEIST2_CELEBRATION_BG";
sVar1="HEIST2_CELEBRATION_FG";
sVar2="HEIST2_CELEBRATION";
break;
}
if(*uParam0==0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}
if(uParam0->f_1==0){
uParam0->f_1=GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar1);
}
if(uParam0->f_2==0){
uParam0->f_2=GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar2);
}
if(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121 !=LOCALIZATION::GET_CURRENT_LANGUAGE()){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121=LOCALIZATION::GET_CURRENT_LANGUAGE();
}}


void func_551(){
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade")){
GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
}
GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win", 0, 1);
}

int func_552(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
var uVar2;
var uVar3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6;
float fVar7;
float fVar8;
float fVar9;
bool bVar10;
bool bVar11;
bool bVar12;
bool bVar13;
int iVar14;
int iVar15;
struct<3> Var16;
struct<3> Var17;
struct<3> Var18;
struct<3> Var19;
float fVar20;
struct<3> Var21;
int iVar22;
int iVar23;
float fVar24;
float fVar25;
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
bVar13=true;
if(bParam3){
if(uParam0->f_437==0){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}else{
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
}}
if(uParam0->f_421 < 6){
if(uParam0->f_422==0){
Var6={
1.3494f, 0.8708f, 0.3814f 
};
Var4={
-0.305f, 3.404f, 1.873f 
};
Var5={
0.3318f, 0.6829f, 0.782f 
};
fVar7=48.872f;
}elseif(uParam0->f_422==1){
Var6={
1.3494f, 0.8708f, 0.3814f 
};
Var4={
-0.3027f, 1.9371f, 0.8861f 
};
Var5={
0.7526f, -0.7846f, 0.1942f 
};
fVar7=49.9607f;
}elseif(uParam0->f_422==2){
Var6={
1.3494f, 0.8708f, 0.3814f 
};
Var4={
-0.3685f, 5.6646f, 3.8144f 
};
Var5={
0.3407f, 3.2028f, 2.2534f 
};
fVar7=49.9607f;
}elseif(uParam0->f_422==3){
Var6={
1.3494f, 0.8708f, 0.3814f 
};
Var4={
-0.551f, 1.5299f, 0.0099f 
};
Var5={
1.1136f, -0.8876f, 0.6298f 
};
fVar7=40.5195f;
}elseif(uParam0->f_422==4){
Var6={
-0.6761f, 2.3219f, 0.3315f 
};
Var4={
0.1252f, 1.692f, 0.0052f 
};
Var5={
-0.9193f, -1.0597f, 0.5854f 
};
fVar7=40.5195f;
}elseif(uParam0->f_422==5){
Var6={
1.3494f, 0.8708f, 0.3814f 
};
Var4={
-0.098f, 1.4671f, 0.0645f 
};
Var5={
0.3334f, -1.4352f, 0.6893f 
};
fVar7=40.5195f;
}}else{
*uParam2=0;
uParam0->f_437=0;
uParam0->f_421=0;
return 1;
}}else{
if(uParam0->f_437==0){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}else{
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
}}
if(!func_555(PLAYER::PLAYER_PED_ID())){
fVar8=-0.09f;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar14=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
iVar15=ENTITY::GET_ENTITY_MODEL(iVar14);
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar15)){
bVar13=false;
bVar11=true;
}}else{
bVar13=false;
}
if(bVar13 && iParam4){
if(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
}else{
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
}}
if(!func_553(uParam0, fVar9, fVar8, bVar11, (iParam4 && bVar13), &Var6, &Var4, &Var5, &fVar7, &bVar12, &bVar10)){
*uParam2=0;
uParam0->f_437=0;
uParam0->f_421=0;
return 1;
}
if(bVar13 && iParam4){
bVar13=false;
}}
Var16={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var4) 
};
Var17={
Var16 
};
Var18={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var19={
ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) 
};
fVar20=vmag(Var19);
if(MISC::ABSF(fVar20) > 0.5f){
Var21={
Var19 / Vector(fVar20, fVar20, fVar20) 
};
Var17={
Var16 + Var21 
};
}
if(uParam0->f_437==0){
iVar22=343;
uParam0->f_437=SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var17, Var18, 0.25f, iVar22, PLAYER::PLAYER_PED_ID(), 7);
}else{
iVar23=SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_437, &iVar0, &uVar1, &uVar2, &uVar3);
switch (iVar23){
case 2:
uParam0->f_437=0;
if(iVar0 > 0){
uParam0->f_421++;
}elseif(((((!bVar13 && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())){
MISC::GET_GROUND_Z_FOR_3D_COORD(Var18, &fVar24, 0, 0);
MISC::GET_GROUND_Z_FOR_3D_COORD(Var16, &fVar25, 0, 0);
if(MISC::ABSF((fVar24 - fVar25)) > 5f){
uParam0->f_421++;
}
else{
if(!CAM::DOES_CAM_EXIST(*uParam1)){
*uParam1=CAM::CREATE_CAMERA(26379945, 1);
}
CAM::STOP_CAM_POINTING(*uParam1);
if(!func_134(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
CAM::ATTACH_CAM_TO_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var4, 1);
}
CAM::POINT_CAM_AT_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var5, 1);
CAM::SET_CAM_FOV(*uParam1, fVar7);
func_442(uParam1, 0.3f);
CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.15f);
if(!bVar12){
if(bVar10){
TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 2048, 2);
}else{
TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 10240, 2);
}}
*uParam2=1;
uParam0->f_421=0;
return 1;
}}else{
uParam0->f_421++;
}
break;
case 0:
uParam0->f_437=0;
uParam0->f_421++;
break;
}}}else{
*uParam2=0;
uParam0->f_421=0;
return 1;
}
return 0;
}

int func_553(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, var uParam9, var uParam10){
if(bParam3){
if(uParam0->f_421 < 6){
if(uParam0->f_422==0){
*uParam6={
0.3792f, 1.6661f, 0.253f 
};
*uParam7={
-0.1166f, -1.2463f, 0.7746f 
};
*fParam8=34.0457f;
return 1;
}elseif(uParam0->f_422==1){
*uParam6={
0.8206f, 2.4757f, -0.14f 
};
*uParam7={
0.0702f, -0.392f, 0.3218f 
};
*fParam8=34.0457f;
return 1;
}elseif(uParam0->f_422==2){
*uParam6={
-0.5169f, 2.6701f, 0.1763f 
};
*uParam7={
-0.1689f, -0.3063f, 0.3164f 
};
*fParam8=34.0457f;
return 1;
}elseif(uParam0->f_422==3){
*uParam6={
-1.7521f, 1.9222f, 0.2656f 
};
*uParam7={
0.3639f, -0.2033f, 0.2015f 
};
*fParam8=34.0457f;
return 1;
}elseif(uParam0->f_422==4){
*uParam6={
-1.1718f, 1.6414f, 0.7172f 
};
*uParam7={
1.3122f, 0.1011f, 0.0411f 
};
*fParam8=32.6085f;
return 1;
}elseif(uParam0->f_422==5){
*uParam6={
-0.0185f, 1.7642f, 0.4961f 
};
*uParam7={
0.6648f, -1.1468f, 0.2534f 
};
*fParam8=35.6186f;
return 1;
}}}elseif(bParam4){
if(uParam0->f_421 < 6){
if(PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || func_554(PLAYER::PLAYER_PED_ID())){
switch ((uParam0->f_422 % 7)){
case 0:
*uParam6={
-0.45f, 2.5f, 0.35f 
};
*uParam7={
0.3f, 0f, 0.45f 
};
*fParam8=26f;
break;
case 1:
*uParam6={
1.1f, 2.5f, 0.05f 
};
*uParam7={
-0.3f, 0f, 0.5f 
};
*fParam8=26f;
break;
case 2:
*uParam6={
-1.45f, 2.15f, 0.05f 
};
*uParam7={
0.5f, 0f, 0.5f 
};
*fParam8=26f;
break;
case 3:
*uParam6={
-0.175f, 1.1f, 0.788f 
};
*uParam7={
0.063f, 0f, 0.466f 
};
*fParam8=37.8f;
break;
case 4:
*uParam6={
1.6f, 1.338f, 0.688f 
};
*uParam7={
0.025f, 0f, 0.416f 
};
*fParam8=26f;
break;
case 5:
*uParam6={
-1.013f, 0.726f, 0.813f 
};
*uParam7={
-0.05f, 0f, 0.441f 
};
*fParam8=37.8f;
break;
case 6:
*uParam6={
1.038f, 1.376f, 0.826f 
};
*uParam7={
-0.05f, 0f, 0.466f 
};
*fParam8=26f;
break;
}}else{
switch ((uParam0->f_422 % 6)){
case 0:
*uParam6={
-0.45f, 2.5f, 0.35f 
};
*uParam7={
0.3f, 0f, 0.263f 
};
*fParam8=26f;
break;
case 1:
*uParam6={
1.1f, 2.5f, 0.05f 
};
*uParam7={
-0.3f, 0f, 0.375f 
};
*fParam8=26f;
break;
case 2:
*uParam6={
-1.45f, 2.15f, 0.05f 
};
*uParam7={
0.5f, 0f, 0.375f 
};
*fParam8=26f;
break;
case 3:
*uParam6={
0.388f, 2.489f, 0.4f 
};
*uParam7={
-0.287f, 0f, 0.304f 
};
*fParam8=26f;
break;
case 4:
*uParam6={
0.388f, 2.177f, -0.575f 
};
*uParam7={
-0.237f, 0f, 0.617f 
};
*fParam8=26f;
break;
case 5:
*uParam6={
-0.575f, 1.901f, -0.112f 
};
*uParam7={
0.275f, 0f, 0.516f 
};
*fParam8=26f;
break;
}}
return 1;
}else{
return 0;
}}elseif(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
*uParam9=1;
if(PED::IS_PED_IN_HIGH_COVER(PLAYER::PLAYER_PED_ID())){
if(uParam0->f_421 < 6){
if(uParam0->f_422==0){
*uParam6={
-0.5356f, 1.4423f, 0.3999f 
};
*uParam7={
0.9181f, -1.1788f, 0.5275f 
};
*fParam8=29.2736f;
return 1;
}elseif(uParam0->f_422==1){
*uParam6={
0.0181f, 1.4527f, 0.4043f 
};
*uParam7={
-0.1861f, -1.5314f, 0.6351f 
};
*fParam8=29.2736f;
return 1;
}elseif(uParam0->f_422==2){
*uParam6={
-0.5997f, 1.0214f, 0.417f 
};
*uParam7={
1.4133f, -1.1792f, 0.7419f 
};
*fParam8=29.2736f;
return 1;
}}else{
return 0;
}}elseif(uParam0->f_421 < 6){
if(uParam0->f_422 > 2){
uParam0->f_422=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}
if(uParam0->f_422==0){
*uParam6={
-0.5893f, 1.4073f, -0.09f 
};
*uParam7={
0.8156f, -1.2407f, -0.2103f 
};
*fParam8=31.7183f;
return 1;
}elseif(uParam0->f_422==1){
*uParam6={
-0.003f, 1.4062f, -0.096f 
};
*uParam7={
-0.5691f, -1.5399f, -0.1137f 
};
*fParam8=31.7183f;
return 1;
}elseif(uParam0->f_422==2){
*uParam6={
-0.6984f, 1.1364f, -0.0971f 
};
*uParam7={
1.2011f, -1.1855f, -0.1149f 
};
*fParam8=31.7183f;
return 1;
}}else{
return 0;
}
if(!PED::IS_PED_IN_COVER_FACING_LEFT(PLAYER::PLAYER_PED_ID())){
*uParam6=(*uParam6 * -1f);
*uParam7=(*uParam7 * -1f);
}}elseif(uParam0->f_421 < 6){
if(uParam0->f_422==0){
*uParam5={
1.3494f, 0.8708f, 0.3814f 
};
*uParam6={
0.6428f, (1.0178f + fParam1), (0.0411f + fParam2) 
};
*uParam7={
-0.3699f, (-1.5251f + fParam1), (1.2691f + fParam2) 
};
*fParam8=34.3832f;
return 1;
}elseif(uParam0->f_422==1){
*uParam5={
0.2657f, 1.3743f, 0.364f 
};
*uParam5={
*uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) 
};
*uParam6={
0.6768f, (0.9824f + fParam1), (0.1864f + fParam2) 
};
*uParam7={
-1.3043f, (-1.0657f + fParam1), (1.1243f + fParam2) 
};
*fParam8=34.3832f;
*uParam10=1;
return 1;
}elseif(uParam0->f_422==2){
*uParam5={
0.5182f, 1.1454f, 0.4312f 
};
*uParam6={
0.2419f, (1.1082f + fParam1), (0.5226f + fParam2) 
};
*uParam7={
0.1327f, (-1.8846f + fParam1), (0.6999f + fParam2) 
};
*fParam8=34.3832f;
return 1;
}elseif(uParam0->f_422==3){
*uParam5={
0.4529f, 1.0868f, 0.365f 
};
*uParam5={
*uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) 
};
*uParam6={
0.6216f, (0.9493f + fParam1), (0.4129f + fParam2) 
};
*uParam7={
-1.4273f, (-1.1768f + fParam1), (0.9439f + fParam2) 
};
*fParam8=34.3832f;
*uParam10=1;
return 1;
}elseif(uParam0->f_422==4){
*uParam5={
1.3811f, 1.7491f, 0.296f 
};
*uParam5={
*uParam5 / FtoV(vmag(*uParam5)) * Vector(5f, 5f, 5f) 
};
*uParam6={
1.7091f, (1.1087f + fParam1), (0.3014f + fParam2) 
};
*uParam7={
-1.0311f, (-0.1093f + fParam1), (0.3918f + fParam2) 
};
*fParam8=34.3832f;
*uParam10=1;
return 1;
}elseif(uParam0->f_422==5){
*uParam5={
1.3494f, 0.8708f, 0.3814f 
};
*uParam6={
0.7036f, (1.7661f + fParam1), (0.2981f + fParam2) 
};
*uParam7={
0.2668f, (-1.2009f + fParam1), (0.377f + fParam2) 
};
*fParam8=34.3832f;
return 1;
}}else{
return 0;
}
return 1;
}

int func_554(int iParam0){
int iVar0;
if(PED::IS_PED_INJURED(iParam0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0));
if(VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0)){
return 1;
}
return 0;
}

int func_555(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar2=-1;
iVar3=-1;
if(iVar0==joaat("mp_f_freemode_01")){
iVar1=func_561(iParam0, 6);
if(iVar1 >=256){
iVar2=func_557(iVar0, iVar1, 6, 4);
iVar3=func_556(iVar2);
}
if(((((((((((((iVar1 >=0 && iVar1 <=15) || (iVar1 >=96 && iVar1 <=111)) || (iVar1 >=112 && iVar1 <=127)) || (iVar1 >=128 && iVar1 <=143)) || (iVar1 >=192 && iVar1 <=207)) || (iVar1 >=224 && iVar1 <=239)) || iVar3==0) || iVar3==6) || iVar3==7) || iVar3==8) || iVar3==12) || iVar3==14) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_heels"), 0))){
return 1;
}}
return 0;
}

int func_556(int iParam0){
int iVar0;
iVar0=-1;
if(iParam0==0){
return iVar0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_0"), 0)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_1"), 0)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_2"), 0)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_3"), 0)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_4"), 0)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_5"), 0)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_6"), 0)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_7"), 0)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_8"), 0)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_9"), 0)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_10"), 0)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_11"), 0)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_12"), 0)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_13"), 0)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_14"), 0)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("draw_15"), 0)){
iVar0=15;
}
return iVar0;
}

int func_557(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_560(iParam0));
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
iVar4=(iParam1 - func_558(iParam0, func_559(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_559(iParam2));
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

int func_558(int iParam0, int iParam1){
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

int func_559(int iParam0){
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

int func_560(int iParam0){
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

int func_561(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_559(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_562(iParam0, iVar1, iVar2, iParam1);
}

int func_562(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_559(iParam3);
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


void func_563(int iParam0){
Global_2684801.f_3480.f_21=iParam0;
}


void func_564(bool bParam0, bool bParam1, int iParam2, int iParam3){
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
if(func_574()){
if(bParam1){
return;
}else{
iParam3=1;
}}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uVar0=iParam2;
PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, uVar0);
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
if(!func_572()){
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
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0) && (PLAYER::IS_PLAYER_PLAYING(bParam0) || iParam3==1)){
if(iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), 0)){
return;
}
uVar27=PLAYER::GET_PLAYER_PED(bParam0);
if(!bVar20){
if((bVar19 && bParam1==0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::FADE_OUT_LOCAL_PLAYER(1);
}elseif(bVar14 || (!func_6(PLAYER::PLAYER_ID(), 0) && !func_135())){
ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
}
if(!bVar14){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19){
NETWORK::FADE_OUT_LOCAL_PLAYER(0);
}
Global_2657589[bParam0 /*466*/].f_254=0;
}}
if(bParam1){
if(bVar1){
func_569(0, 0, 0);
if(bVar25){
STREAMING::CLEAR_FOCUS();
}}
if(!func_568(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
PLAYER::SET_PLAYER_INVINCIBLE(bParam0, 0);
PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(bParam0, 0);
if(PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27)){
PED::FINALIZE_HEAD_BLEND(iVar27);
}
PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())==0){
func_567();
func_566();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(!bVar23){
}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
}
Global_2657589[bParam0 /*466*/].f_255=0;
if(!bVar24){
bVar3=true;
}
if(Global_2635559.f_2681){
Global_2635559.f_2681=0;
}}else{
if(!func_568(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27)){
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
if(func_565(Global_4718592.f_166301)){
ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
}}
if(Global_1575035){
bVar10=false;
}
if(bVar10){
PLAYER::SET_PLAYER_INVINCIBLE(bParam0, 0);
}else{
PLAYER::SET_PLAYER_INVINCIBLE(bParam0, 1);
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
PLAYER::SET_PLAYER_CONTROL(bParam0, bParam1, iVar28);
}}}


bool func_565(int iParam0){
return iParam0==17;
}


void func_566(){
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


void func_567(){
Global_2635559.f_702=0;
Global_2635559.f_2735=0;
Global_2635559.f_515=0;
Global_2635559.f_606=0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
Global_2635559.f_2690=0;
}

int func_568(int iParam0){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1)){
return 1;
}else{
iVar0=TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
if(iVar0==0){
return 1;
}}
return 0;
}


void func_569(int iParam0, int iParam1, int iParam2){
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
func_571();
}elseif(!MISC::IS_BIT_SET(Global_2621446.f_67, 1)){
if(MISC::IS_BIT_SET(Global_2621446.f_67, 2)){
iVar1=0;
while (iVar1 < 8){
CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
iVar1++;
}}
MISC::SET_BIT(&(Global_2621446.f_67), true);
}}
if(func_6(PLAYER::PLAYER_ID(), 0)){
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
}else{
NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
}
HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
func_570(joaat("mpply_is_char_spectating"), iParam0);
}}


void func_570(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}}


void func_571(){
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

int func_572(){
if(func_573()==0){
return 1;
}
return 0;
}

int func_573(){
return Global_1574632.f_18;
}

int func_574(){
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216==-1){
return 1;
}
return 0;
}


void func_575(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_576() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_576(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_577(var uParam0, bool bParam1){
if(func_585()){
return;
}
if(!func_1680(PLAYER::PLAYER_ID(), 1, 1)){
bParam1=false;
}
if(!Global_1574971){
if(bParam1){
if(!func_584(Global_4718592.f_166301)){
if(GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION()){
func_583(1);
func_579(1, 2);
}
func_578(&(uParam0->f_1203), &(uParam0->f_1200));
}}
Global_1574971=1;
}}


void func_578(var uParam0, var uParam1){
if(!GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade")){
if(!*uParam0){
GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Preload_Fade", 0, 1);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Pre_Screen_Stinger", "DLC_HEISTS_PREP_SCREEN_SOUNDS", 0);
*uParam0=1;
if(!func_40(uParam1)){
func_38(uParam1, 0, 0);
}}}}


void func_579(int iParam0, int iParam1){
bool bVar0;
bool bVar1;
bool bVar2;
bVar0=iParam0 !=true;
bVar1=iParam1 !=2;
if(bVar0==1){
bVar2=false;
if(!iParam0==3){
if(GRAPHICS::GET_USINGSEETHROUGH()){
GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(Global_1934457);
Global_1934457=-1f;
GRAPHICS::SET_SEETHROUGH(false);
bVar2=true;
}
GRAPHICS::SET_NIGHTVISION(bVar0);
MISC::SET_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), false);
}else{
if(GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION()){
GRAPHICS::SET_NIGHTVISION(false);
bVar2=true;
}
GRAPHICS::SET_SEETHROUGH(bVar0);
Global_1934457=GRAPHICS::SEETHROUGH_GET_MAX_THICKNESS();
GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(0.5f);
MISC::SET_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
}
if(iParam1==1 || bVar1){
if(Global_1934458==-1){
Global_1934458=AUDIO::GET_SOUND_ID();
}
if(!Global_1934458==-1 && AUDIO::HAS_SOUND_FINISHED(Global_1934458)){
if(iParam1==1){
if(!bVar2){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "On", "GTAO_Vision_Modes_SoundSet", 0);
}else{
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
}}elseif(bVar1){
if(!bVar2){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "On", "GTAO_Vision_Modes_SoundSet", 1);
}else{
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
}}}}}else{
if(GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION()){
GRAPHICS::SET_NIGHTVISION(bVar0);
MISC::CLEAR_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), false);
}
if(GRAPHICS::GET_USINGSEETHROUGH()){
GRAPHICS::SEETHROUGH_SET_MAX_THICKNESS(Global_1934457);
Global_1934457=-1f;
GRAPHICS::SET_SEETHROUGH(bVar0);
MISC::CLEAR_BIT(&(Global_1928088[PLAYER::PLAYER_ID() /*199*/].f_198), 2);
}
if(iParam1==1 || bVar1){
if(Global_1934458==-1){
Global_1934458=AUDIO::GET_SOUND_ID();
}
if(!Global_1934458==-1 && AUDIO::HAS_SOUND_FINISHED(Global_1934458)){
if(iParam1==1){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Off", "GTAO_Vision_Modes_SoundSet", 0);
}elseif(bVar1){
AUDIO::PLAY_SOUND_FRONTEND(Global_1934458, "Off", "GTAO_Vision_Modes_SoundSet", 1);
}}}}
func_580(!bVar0);
}


void func_580(bool bParam0){
func_581(370, bParam0, -1, 1);
}


void func_581(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_582()){
iVar0=Global_2848282[iParam0 /*3*/][func_30(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_582(){
return 1;
return 0;
}


void func_583(bool bParam0){
if(Global_4539872 !=bParam0){
Global_4539872=bParam0;
if(bParam0){
StringCopy(&Global_4539873, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
}else{
StringCopy(&Global_4539873, "", 64);
}}}


bool func_584(int iParam0){
return iParam0==2;
}


bool func_585(){
return Global_2683864.f_43.f_57;
}

int func_586(){
if((func_180(PLAYER::PLAYER_ID()) || func_605(PLAYER::PLAYER_ID(), 21)) || func_591(PLAYER::PLAYER_ID())==3){
if(((((func_590(PLAYER::PLAYER_ID())==140 || func_590(PLAYER::PLAYER_ID())==139) || func_590(PLAYER::PLAYER_ID())==131) || func_590(PLAYER::PLAYER_ID())==141) || func_590(PLAYER::PLAYER_ID())==146) || func_590(PLAYER::PLAYER_ID())==138){
if(!MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 3) && !MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
return 0;
}}
if(!MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 8) || func_591(PLAYER::PLAYER_ID())==3){
return 1;
}}
if(func_589(PLAYER::PLAYER_ID())){
return 1;
}
if(func_588(PLAYER::PLAYER_ID())){
return 1;
}
if(func_1679(PLAYER::PLAYER_ID())){
return 1;
}
if(func_587()){
return 1;
}
return 0;
}


bool func_587(){
return Global_1835493;
}

int func_588(int iParam0){
if(iParam0 !=func_72()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_428.f_2, 16);
}
return 0;
}

int func_589(int iParam0){
if(iParam0 !=func_72()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_365, 29);
}
return 0;
}

int func_590(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}

int func_591(bool bParam0){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
var uVar4;
iVar0=2;
bVar1=((func_180(bParam0) && !func_604(bParam0)) && !MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 8));
bVar2=func_603(bParam0);
bVar3=func_602();
uVar4=func_595();
if((bVar1 && (func_594(bParam0) || func_593(bParam0))) || uVar4){
iVar0=0;
}elseif(bVar3 || ((!bVar2 && !func_346(bParam0)) && !func_592(bParam0))){
iVar0=2;
}else{
iVar0=3;
}
if(Global_2793046.f_5225.f_220 !=iVar0){
Global_2793046.f_5225.f_220=iVar0;
}
return iVar0;
}


bool func_592(int iParam0){
return func_347(iParam0, 19);
}

int func_593(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}

int func_594(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}

int func_595(){
if((func_347(PLAYER::PLAYER_ID(), 21) || func_347(PLAYER::PLAYER_ID(), 22)) || func_600()){
return 1;
}
if(func_597()){
func_596(22);
return 1;
}
return 0;
}


void func_596(bool bParam0){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), bParam0);
}

int func_597(){
if(func_179(PLAYER::PLAYER_ID(), 0)){
if(((func_602() && !func_599()) || func_605(PLAYER::PLAYER_ID(), 21)) || func_605(PLAYER::PLAYER_ID(), 25)){
return 1;
}else{
func_598(27);
}}
return 0;
}


void func_598(bool bParam0){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), bParam0);
}


bool func_599(){
return Global_1574582.f_1;
}

int func_600(){
return func_601(424, -1);
}

int func_601(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_30(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_602(){
return Global_1574582;
}


bool func_603(int iParam0){
return func_347(iParam0, 20);
}


bool func_604(int iParam0){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_1, 2);
}


bool func_605(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_606(int iParam0, int iParam1){
if(iParam1==0){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_180.f_563, Local_180.f_563.f_3, Local_180.f_563.f_6, 0, 1, 0)){
return 1;
}}elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_180.f_591, Local_180.f_591.f_3, Local_180.f_591.f_6, 0, 1, 0)){
return 1;
}elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_180.f_577, Local_180.f_577.f_3, Local_180.f_577.f_6, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_180.f_584, Local_180.f_584.f_3, Local_180.f_584.f_6, 0, 1, 0)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(func_608(NETWORK::PARTICIPANT_ID()) > 2){
if(func_37(&uLocal_197, iLocal_201, 0)){
if(!func_586()){
func_607("GHO_WARN", -1);
iLocal_201=30000;
func_36(&uLocal_197);
}}}}}elseif(func_529("GHO_WARN")){
iLocal_201=3000;
HUD::CLEAR_HELP(1);
}
return 0;
}


void func_607(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_608(int iParam0){
return Local_187[iParam0 /*9*/].f_2;
}


void func_609(){
if(Local_180.f_362 !=-1){
if(func_608(NETWORK::PARTICIPANT_ID()) > 2){
if(!MISC::IS_BIT_SET(uLocal_188, 16)){
func_611(Local_180.f_362, 300000);
MISC::SET_BIT(&uLocal_188, 16);
}elseif(!func_610(Local_180.f_362)){
func_611(Local_180.f_362, 60000);
}}}}

int func_610(bool bParam0){
if(MISC::IS_BIT_SET(Global_2672505.f_3685, bParam0)){
return 1;
}
return 0;
}


void func_611(bool bParam0, int iParam1){
if(Global_2672505.f_3686[bParam0] < iParam1){
Global_2672505.f_3686[bParam0]=iParam1;
}
MISC::SET_BIT(&(Global_2672505.f_3685), bParam0);
}


void func_612(){
if(!MISC::IS_BIT_SET(uLocal_188, 14)){
if(func_608(NETWORK::PARTICIPANT_ID()) > 2 && func_608(NETWORK::PARTICIPANT_ID()) < 5){
func_613(6, Local_180.f_359[1], Local_180.f_359[0], 0, 0);
MISC::SET_BIT(&uLocal_188, 14);
}}}


void func_613(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4){
if(func_543()){
return;
}
Global_1837296=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Global_1837297=func_28(PLAYER::PLAYER_ID());
Global_1837299=0;
Global_1837300=0;
func_615(iParam0, uParam1, iParam2, 1, iParam4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, iParam3, 0, 0, 0);
if(iParam0 !=6){
func_614();
}
Global_1837308=1;
}


void func_614(){
struct<13> Var0;
bool bVar1;
bVar1=false;
while (bVar1 < 32){
Global_1581972.f_1[bVar1 /*13*/]={
Var0 
};
StringCopy(&(Global_1581972.f_418[bVar1 /*16*/]), "", 64);
MISC::CLEAR_BIT(&Global_1581972, bVar1);
bVar1++;
}}


void func_615(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, var uParam16, int iParam17, int iParam18, int iParam19){
char cVar0[32];
struct<8> Var1;
int iVar2;
int iVar3;
int iVar4;
struct<8> Var5;
int iVar6;
bool bVar7;
int iVar8;
var uVar9;
struct<35> Var10;
bool bVar11;
struct<47> Var12;
struct<25> Var13;
struct<6> Var14;
struct<6> Var15;
struct<33> Var16;
struct<6> Var17;
if(iParam17==0){}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
switch (iParam0){
case 6:
case 8:
case 1:
case 3:
case 0:
case 2:
MemCopy(&cVar0,{
Global_4718592.f_113725
}
, 8);
MemCopy(&Var1,{
Global_4718592.f_114011
}
, 8);
break;
case 32:
case 25:
case 19:
case 31:
StringCopy(&cVar0, "ROCKSTAR_AMBIANT", 32);
func_792(&Var1, iParam0, iParam4);
break;
case 11:
case 13:
case 12:
case 15:
case 14:
case 122:
case 5:
case 148:
StringCopy(&cVar0, "ROCKSTAR_MINIGAME", 32);
func_791(&Var1, iParam0, iParam4);
break;
}
iVar2=0;
iVar3=0;
if(iParam0==1){
iVar2=iParam19;
}elseif(iParam0==2){
if(func_790()){
iParam0 +=100;
}
iVar3=Global_4456449.f_34;
if(func_6(PLAYER::PLAYER_ID(), 0) || func_133(PLAYER::PLAYER_ID())){
iParam11=0;
}
if(iParam11 < 0){
iParam11=32;
}}elseif(iParam0==0){
if(func_790()){
iParam0 +=100;
}}elseif(iParam0==3){
if(!func_789()){
iParam0 +=100;
}}
if(bParam3){
if(func_788() && func_787()){
return;
}
Global_1057161=NETWORK::GET_NETWORK_TIME();
func_786();
Global_1837298=0;
if((iParam0==0 || iParam0==1) || iParam0==5){
Global_1837312=1;
}
Global_1057153={
Var1 
};
SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, &(Global_1881495[PLAYER::PLAYER_ID() /*16*/]));
SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_16);
SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, &Global_1057153);
SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()));
if(func_784()){
iParam0=222;
}elseif(func_782()){
iParam0=228;
}elseif(func_781(PLAYER::PLAYER_ID())){
iParam0=7;
}elseif(func_374(PLAYER::PLAYER_ID())){
iParam0=4;
}elseif(func_780(PLAYER::PLAYER_ID())){
iParam0=165;
}
if((iParam0==5 || iParam0==6) || iParam0==148){
iVar4=17;
}elseif(func_779() !=-1){
iVar4=func_779();
}
Var5.f_0=iParam0;
Var5.f_1=iParam2;
Var5.f_2=uParam1;
Var5.f_3=Global_1837309;
Var5.f_4=Global_1837310;
Var5.f_5=uParam16;
Var5.f_6=iVar4;
Var5.f_7=Global_4718592.f_113724;
STATS::PLAYSTATS_MATCH_STARTED(&cVar0, &Var1, &Var5);
func_778();
if(!func_88(PLAYER::PLAYER_ID())){
Global_2684801.f_3476.f_2=iParam2;
Global_2684801.f_3476.f_3=uParam1;
if(Global_2684801.f_3476==0 || Global_2684801.f_3476.f_1==0){
Global_2684801.f_3476=iParam2;
Global_2684801.f_3476.f_1=uParam1;
}}elseif(Global_2684801.f_3476==0 || Global_2684801.f_3476.f_1==0){
Global_2684801.f_3476=iParam2;
Global_2684801.f_3476.f_1=uParam1;
}
Global_1057406.f_1=func_777();
if(Global_1837305){
iVar6=Global_1837301;
if(Global_4718592==2){
if(func_776(PLAYER::PLAYER_ID(), 0) || func_696()){
Global_1837301=(Global_1837301 - Global_262145.f_2353);
}else{
bVar7=true;
iVar6=(iVar6 - Global_262145.f_2353);
}}
if((((Global_1837301 > 0 && !func_428()) && !func_6(PLAYER::PLAYER_ID(), 0)) && !func_693()) && MONEY::NETWORK_CAN_SPEND_MONEY(Global_1837301, 0, 0, 1, -1, 0)){
if(!bVar7){
if(Global_1837301 > 0){
if(func_692()){
func_680(1940862352, Global_1837301, &iVar8, 0, 1, 0);
Global_4535172[iVar8 /*85*/].f_14.f_26={
Var1 
};
}
else{
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837301, &Var1, 0, 1);
}}}else{
if(iVar6 > 0){
if(func_692()){
func_680(1940862352, iVar6, &iVar8, 0, 1, 0);
Global_4535172[iVar8 /*85*/].f_14.f_26={
Var1 
};
}}
if(func_692()){
func_680(-1389227906, Global_262145.f_2353, &iVar8, 0, 1, 0);
Global_4535172[iVar8 /*85*/].f_14.f_26={
Var1 
};
}else{
MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_1837301, &Var1, 0, 1);
}}}
Global_1837305=0;
}
func_679();
}else{
if(func_678()==1){
uVar9=Global_4521801.f_915;
}else{
uVar9=func_677();
}
StringCopy(&Global_1057153, "", 32);
Var10={
func_675(PLAYER::PLAYER_ID()) 
};
if(Var10.f_0 < 0){
Var10.f_0=0;
}
iParam12=iParam12;
if(func_1731(0)){
bVar11=true;
}elseif(!func_88(PLAYER::PLAYER_ID())){
Global_1837304++;
func_507(1914, Global_1837304, -1, 1, 0);
}
if(func_784()){
iParam0=222;
}elseif(func_782()){
iParam0=228;
}elseif(func_781(PLAYER::PLAYER_ID())){
iParam0=7;
}elseif(func_374(PLAYER::PLAYER_ID())){
iParam0=4;
}elseif(func_780(PLAYER::PLAYER_ID())){
iParam0=165;
}
Var12.f_0=Global_1837298;
Var12.f_1=Global_1837299;
if(Var12.f_1 < 0){
Var12.f_1=0;
}
Var12.f_2=Global_1837296;
Var12.f_9=iParam18;
Var12.f_3=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
if((iParam0==5 || iParam0==6) || iParam0==148){
Var12.f_4=17;
}elseif(func_779() !=-1){
Var12.f_4=func_779();
}
if(Global_1837313 >=0){
Var12.f_39=Global_1837313;
}
if(Global_1837314 >=0){
Var12.f_38=Global_1837314;
}
if((((func_788() && !func_486()) && !bParam15) && Global_2683864.f_669.f_9 !=0) && !func_673(0)){
Global_2683864.f_669.f_15=1;
Var13.f_0=Global_1890444[PLAYER::PLAYER_ID() /*129*/].f_3;
Var13.f_1=Global_2683864.f_669.f_10;
Var13.f_2=Global_1837298;
Var13.f_3=Global_1837299;
if(Var13.f_3 < 0){
Var13.f_3=0;
}
Var13.f_4=Global_1837296;
Var13.f_5=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Var13.f_6=Var12.f_4;
if(func_88(PLAYER::PLAYER_ID())){
Var13.f_21=Global_2684801.f_3476;
Var13.f_22=Global_2684801.f_3476.f_1 + 1;
}else{
Var13.f_7=Global_2684801.f_3476;
Var13.f_8=Global_2684801.f_3476.f_1;
}
Var13.f_9=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Var13.f_10=iParam5;
Var13.f_11=iParam6;
Var13.f_12=iParam7;
Var13.f_13=iParam11;
Var13.f_14=Var10.f_0;
Var13.f_15=Global_1837300;
Var13.f_16=iParam9;
Var13.f_17=iParam10;
Var13.f_18=(func_777() - Global_1057406.f_1);
if(func_672() || func_88(PLAYER::PLAYER_ID())){
Var13.f_19=MISC::GET_HASH_KEY(&(Global_1048576.f_44));
}
Var13.f_20=bVar11;
if(Global_1837313 >=0){
Var13.f_23=Global_1837313;
}elseif(Global_1837313==-2){
Var13.f_23=998;
}else{
Var13.f_23=999;
}
if(Global_1837314 >=0){
Var13.f_24=Global_1837314;
}elseif(Global_1837314==-2){
Var13.f_24=998;
}else{
Var13.f_24=999;
}
StringCopy(&Var14, "", 24);
if(func_672() || func_88(PLAYER::PLAYER_ID())){
Var14={
Global_1048576.f_44 
};
}
STATS::PLAYSTATS_JOB_LTS_ROUND_END(&cVar0, &Var1, &Var13, &Var14);
return;
}
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
Global_1837307=NETWORK::NETWORK_SESSION_IS_VISIBLE();
}
Var12.f_7=iVar2;
Var12.f_8=bVar11;
Var12.f_11=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Var12.f_12=iParam8;
Var12.f_13=iParam5;
Var12.f_14=iParam6;
Var12.f_15=iParam7;
Var12.f_16=iParam11;
Var12.f_17=Var10.f_0;
Var12.f_18=iParam13;
Var12.f_19=Global_1837300;
Var12.f_20=iParam14;
Var12.f_21=iParam9;
Var12.f_22=iParam0;
Var12.f_23=Global_4718592.f_104427;
if(func_693()){
if(Var12.f_23==6){
Var12.f_23=14;
}elseif(Var12.f_23==7){
Var12.f_23=15;
}}elseif(func_671(Global_4718592.f_113724)){
if(Var12.f_23==6){
Var12.f_23=16;
}elseif(Var12.f_23==7){
Var12.f_23=17;
}}
Var12.f_24=iVar3;
Var12.f_25=iParam10;
Var12.f_34=Global_1837306;
Var12.f_26=(func_777() - Global_1057406.f_1);
Var12.f_29=func_304(1301, -1, 0);
if(func_88(PLAYER::PLAYER_ID())){
Var12.f_40=Global_2684801.f_3476;
Var12.f_41=Global_2684801.f_3476.f_1 + 1;
}else{
Var12.f_5=Global_2684801.f_3476;
Var12.f_6=Global_2684801.f_3476.f_1;
}
Var12.f_36=Global_1837307;
Var12.f_37=uParam16;
Var12.f_30=uVar9;
if(func_670() || func_669()){
Var12.f_35=1;
}
if(iParam0==2){
Var12.f_27=Global_4456449.f_8;
Var12.f_10=Global_4456484.f_31;
if(((func_664(0) && Global_1837311 !=-1) && !func_672()) && !func_88(PLAYER::PLAYER_ID())){
Var12.f_31=Global_1837311;
}
Global_1837311=-1;
Var12.f_42=Global_1665835[func_663() /*26*/].f_20;
Var12.f_43=Global_1665835[func_663() /*26*/].f_21;
Var12.f_44=Global_1665835[func_663() /*26*/].f_22;
Var12.f_45=Global_1665835[func_663() /*26*/].f_23;
Var12.f_46=Global_1665835[func_663() /*26*/].f_24;
}
if(func_672() || func_88(PLAYER::PLAYER_ID())){
Var12.f_28=MISC::GET_HASH_KEY(&(Global_1048576.f_44));
if(func_662() || func_661()){
Var12.f_32=1;
}elseif(func_660() || func_659()){
Var12.f_33=1;
}}
if(func_672() || func_88(PLAYER::PLAYER_ID())){
Var15={
Global_1048576.f_44 
};
}
SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(1603298962, "");
SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(591312727, 0);
SOCIALCLUB::SC_PRESENCE_ATTR_SET_STRING(-1404245366, "");
SOCIALCLUB::SC_PRESENCE_ATTR_SET_INT(2034665250, 0);
if(!func_469()){
if((func_488() || func_486()) || bParam15){
Var16.f_0=Global_2683864.f_669.f_9;
Var16.f_1=Global_2683864.f_669.f_10;
Global_2683864.f_669.f_15=0;
Var16.f_2=Global_1837298;
Var16.f_3=Global_1837299;
if(Var16.f_3 < 0){
Var16.f_3=0;
}
Var16.f_4=Global_1837296;
Var16.f_5=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Var16.f_6=Var12.f_4;
if(func_88(PLAYER::PLAYER_ID())){
Var16.f_29=Global_2684801.f_3476;
Var16.f_30=Global_2684801.f_3476.f_1 + 1;
}else{
Var16.f_7=Global_2684801.f_3476;
Var16.f_8=Global_2684801.f_3476.f_1;
}
Var16.f_9=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Var16.f_10=iParam8;
Var16.f_11=iParam5;
Var16.f_12=iParam6;
Var16.f_13=iParam7;
Var16.f_14=iParam11;
Var16.f_15=Var10.f_0;
Var16.f_16=Global_1837300;
Var16.f_17=iParam9;
Var16.f_18=iParam10;
Var16.f_19=(func_777() - Global_1057406.f_1);
if(func_672() || func_88(PLAYER::PLAYER_ID())){
Var16.f_20=MISC::GET_HASH_KEY(&(Global_1048576.f_44));
Var16.f_23=(func_662() || func_661());
Var16.f_24=(func_660() || func_659());
}
Var16.f_21=func_304(1301, -1, 0);
Var16.f_22=uVar9;
Var16.f_25=Global_1837306;
Var16.f_26=(func_670() || func_669());
Var16.f_27=Global_1837307;
Var16.f_28=bVar11;
if(Global_1837313 >=0){
Var16.f_31=Global_1837313;
}elseif(Global_1837313==-2){
Var16.f_31=998;
}else{
Var16.f_31=999;
}
if(Global_1837314 >=0){
Var16.f_32=Global_1837314;
}elseif(Global_1837314==-2){
Var16.f_32=998;
}else{
Var16.f_32=999;
}
StringCopy(&Var17, "", 24);
if(func_672() || func_88(PLAYER::PLAYER_ID())){
Var17={
Global_1048576.f_44 
};
}
STATS::PLAYSTATS_JOB_LTS_END(&cVar0, &Var1, &Var16, &Var17);
func_658();
Global_1837312=0;
return;
}}
if(func_371(PLAYER::PLAYER_ID()) || func_370(PLAYER::PLAYER_ID())){
Global_786435.f_3=Var12.f_13;
Global_786435.f_4=Var12.f_14;
Global_786435.f_6=Global_1837298;
Global_786435.f_7=Global_1837296;
Global_786435.f_8=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Global_786435.f_9=Var12.f_4;
Global_786435.f_10=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Global_786435.f_11=iParam7;
Global_786435.f_12=iParam11;
Global_786435.f_13=Var10.f_0;
Global_786435.f_14=iParam9;
Global_786435.f_15=iParam10;
Global_786435.f_16=(func_777() - Global_1057406.f_1);
Global_786435.f_17=func_304(1301, -1, 0);
Global_786435.f_18=uVar9;
Global_786435.f_19=Global_1837307;
Global_786435.f_20=bVar11;
Global_786435.f_28=uParam16;
Global_786435.f_43=Global_786547;
Global_786435.f_44=Global_786547.f_1;
Global_786435.f_23=Global_786547.f_2;
if(func_650(96, 0, 0)){
Global_786435.f_22=1;
}else{
Global_786435.f_22=0;
}
STATS::PLAYSTATS_JOB_BEND(&cVar0, &Var1, &Global_786435, &Var15);
func_658();
Global_1837312=0;
return;
}
if(func_165()){
Global_786481.f_3=Var12.f_13;
Global_786481.f_4=Var12.f_14;
Global_786481.f_6=Global_1837298;
Global_786481.f_7=Global_1837296;
Global_786481.f_8=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Global_786481.f_9=Var12.f_4;
Global_786481.f_10=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Global_786481.f_11=iParam7;
Global_786481.f_12=iParam11;
Global_786481.f_13=Var10.f_0;
Global_786481.f_14=iParam9;
Global_786481.f_15=iParam10;
Global_786481.f_19=Global_1837307;
Global_786481.f_20=bVar11;
Global_786481.f_28=uParam16;
Global_786481.f_43=Global_786547;
Global_786481.f_44=Global_786547.f_1;
Global_786481.f_23=func_649();
STATS::PLAYSTATS_INSTANCED_HEIST_ENDED(&cVar0, &Var1, &Var15, &Global_786481);
func_658();
Global_1837312=0;
return;
}
if(func_469()){
Global_2683864.f_669.f_15=0;
Global_1948149=iParam2;
Global_1948149.f_4=func_648(bVar11);
Global_1948149.f_5=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Global_1948149.f_6=iParam5;
Global_1948149.f_7=iParam6;
Global_1948149.f_8=iParam7;
Global_1948149.f_9=func_647(PLAYER::PLAYER_ID());
Global_1948149.f_10=iParam13;
Global_1948149.f_11=iParam17;
Global_1948149.f_13=iParam10;
Global_1948149.f_15=func_304(7849, -1, 0);
Global_1948149.f_19=iParam0;
Global_1948149.f_20=Global_4718592.f_113724;
if(func_637()){
Global_1948149.f_24=1;
}else{
Global_1948149.f_24=0;
}
Global_1948149.f_25=iParam9;
Global_1948149.f_40=Global_1665807;
Global_1948149.f_41=Global_1665808;
Global_1948149.f_42=Global_1665809;
Global_1948149.f_43=Global_1665810;
Global_1665807=-2;
Global_1665808=-2;
Global_1665809=-2;
Global_1665810=-2;
Global_1948149.f_3=func_779();
Global_1948149.f_26=func_636(func_776(PLAYER::PLAYER_ID(), 0), 1, 0);
func_658();
Global_1837312=0;
STATS::PLAYSTATS_ARENA_WARS_ENDED(&Global_1948149);
func_679();
return;
}
if(func_635(Global_4718592.f_113724)){
Global_2683864.f_669.f_15=0;
Global_1948225.f_17=bVar11;
Global_1948225.f_20=(func_28(PLAYER::PLAYER_ID()) - Global_1837297);
Global_1948225.f_3=iParam5;
Global_1948225.f_4=iParam6;
Global_1948225.f_21=iParam7;
Global_1948225.f_22=func_647(PLAYER::PLAYER_ID());
Global_1948225.f_24=iParam10;
if(iParam10==0){
Global_1948225.f_13=0;
}
Global_1948225.f_16=Global_1837307;
Global_1948225.f_5=Global_1837298;
Global_1948225.f_6=Global_1837296;
Global_1948225.f_7=(func_793(PLAYER::PLAYER_ID()) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
Global_1948225.f_8=Var12.f_4;
Global_1948225.f_9=uParam16;
Global_1948225.f_10=CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
Global_1948225.f_38=func_634(PLAYER::PLAYER_ID());
Global_1948225.f_39=func_633(PLAYER::PLAYER_ID());
Global_1948225.f_40=func_632(PLAYER::PLAYER_ID());
Global_1948225.f_17=bVar11;
Global_1948225.f_27=Global_786547.f_1;
Global_1948225.f_16=Global_1837307;
Global_1948225.f_23=Var10.f_0;
Global_1948225.f_25=(func_777() - Global_1057406.f_1);
Global_1948225.f_26=NETWORK::NETWORK_HAS_HEADSET();
Global_1948225.f_28=0;
Global_1948225.f_29=0;
if(Global_1575018==8 || func_631()){
Global_1948225.f_30=1;
}else{
Global_1948225.f_30=0;
}
Global_1948225.f_31=func_631();
Global_1948225.f_41=0;
func_658();
Global_1837312=0;
STATS::PLAYSTATS_CASINO_STORY_MISSION_ENDED(&Global_1948225, &Var1);
func_630();
return;
}
if(func_629(Global_4718592.f_113724)){
Global_2683864.f_669.f_15=0;
Global_1948305=func_304(8916, -1, 0);
Global_1948305.f_1=Global_4718592.f_113724;
Global_1948305.f_10=iParam2;
Global_1948305.f_18=(func_628(PLAYER::PLAYER_ID(), 1) - Global_1837297);
STATS::PLAYSTATS_HEIST3_FINALE(&Global_1948305);
func_658();
Global_1837312=0;
}
if(func_627(Global_4718592.f_113724)){
Global_2683864.f_669.f_15=0;
Global_1948392=func_304(9572, -1, 0);
IntToString(&(Global_1948392.f_3), MISC::GET_HASH_KEY(&(Global_4718592.f_114011)), 32);
Global_1948392.f_11=iParam2;
Global_1948392.f_19=(func_628(PLAYER::PLAYER_ID(), 1) - Global_1837297);
STATS::PLAYSTATS_HEIST4_FINALE(&Global_1948392);
func_658();
Global_1837312=0;
}
if((func_479(Global_4718592.f_113724) || func_477(Global_4718592.f_113724)) || (func_625() && func_624(249))){
Global_2683864.f_669.f_15=0;
Global_1948525=Global_786547.f_1;
Global_1948525.f_1=Global_4718592.f_113724;
Global_1948525.f_2=Global_786547.f_1;
if(func_479(Global_4718592.f_113724)){
Global_1948525.f_3=func_623(Global_4718592.f_113724);
}
IntToString(&(Global_1948525.f_4), MISC::GET_HASH_KEY(&(Global_4718592.f_114011)), 32);
Global_1948525.f_32=iParam2;
Global_1948525.f_19=(func_628(PLAYER::PLAYER_ID(), 1) - Global_1837297);
STATS::PLAYSTATS_ROBBERY_FINALE(&Global_1948525);
func_658();
Global_1837312=0;
}
if(func_616()){
Global_2683864.f_669.f_15=0;
Global_1948592.f_25=(func_628(PLAYER::PLAYER_ID(), 1) - Global_1837297);
IntToString(&(Global_1948592.f_7), MISC::GET_HASH_KEY(&(Global_4718592.f_114011)), 32);
STATS::PLAYSTATS_INST_MISSION_END(&Global_1948592);
func_658();
Global_1837312=0;
Global_1948592.f_35=0;
}
Global_2683864.f_669.f_15=0;
STATS::PLAYSTATS_JOB_ACTIVITY_END(&cVar0, &Var1, &Var12, &Var15);
func_658();
Global_1837312=0;
}}

int func_616(){
if((func_625() || func_621(Global_4718592.f_113724)) || func_617()){
return 1;
}
return 0;
}


var func__617(){
return (func_620(Global_4718592.f_113724) || func_618(Global_4718592.f_113724));
}

int func_618(int iParam0){
if((((iParam0==func_619(6) || iParam0==func_619(7)) || iParam0==func_619(8)) || iParam0==func_619(9)) || iParam0==func_619(10)){
return 1;
}
return 0;
}

int func_619(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33703[iParam0];
}
return -1;
}

int func_620(int iParam0){
if(((((iParam0==func_619(0) || iParam0==func_619(1)) || iParam0==func_619(2)) || iParam0==func_619(3)) || iParam0==func_619(4)) || iParam0==func_619(5)){
return 1;
}
return 0;
}

int func_621(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_622(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_622(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_32850[iParam0];
}
return -1;
}

int func_623(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31051[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_624(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
if(iVar0 >=8){
return 0;
}
return MISC::IS_BIT_SET(Global_2684801.f_1.f_2813[iVar0], iVar1);
}

int func_625(){
return func_626(Global_4718592.f_113724);
}

int func_626(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(Global_262145.f_31722[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_627(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 11){
if(Global_262145.f_29933[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_628(int iParam0, bool bParam1){
if(bParam1){}
return func_28(iParam0);
}

int func_629(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 21){
if(Global_262145.f_6087[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_630(){
struct<31> Var0;
Global_1948194={
Var0 
};
}

int func_631(){
switch (Global_1575018){
case 2:
case 3:
case 4:
case 5:
case 6:
case 11:
return 1;
default:
}
return 0;
}

int func_632(int iParam0){
if(iParam0 !=func_72()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_404.f_2, 6);
}
return 0;
}

int func_633(int iParam0){
if(iParam0 !=func_72()){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_404.f_2, 7);
}
return 0;
}

int func_634(int iParam0){
if(iParam0 !=func_72()){
return Global_1853910[iParam0 /*862*/].f_267.f_404 !=0;
}
return 0;
}

int func_635(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_5059[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_636(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_637(){
if(func_646(Global_4718592.f_166301)){
return 1;
}elseif(func_645(Global_4718592.f_166301)){
return 1;
}elseif(func_644(Global_4718592.f_166301)){
return 1;
}elseif(func_643(Global_4718592.f_166301)){
return 1;
}elseif(func_642(Global_4718592.f_166301)){
return 1;
}elseif(func_641()){
return 0;
}elseif(func_640()){
return 0;
}elseif(func_639(Global_4718592.f_166301)){
if(Global_1665699==1){
return 1;
}}elseif(func_638(Global_4718592.f_166301)){
if(Global_1665699==1){
return 1;
}}
if(func_397()){
if(Global_1665699==1 || Global_1665699==4){
return 1;
}}
return 0;
}


bool func_638(int iParam0){
return iParam0==83;
}


bool func_639(int iParam0){
return iParam0==81;
}

int func_640(){
if(Global_4718592.f_104427==22 || Global_4718592.f_104427==23){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_32, 9);
}

int func_641(){
if(Global_4718592.f_104427==20 || Global_4718592.f_104427==21){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_30, 3);
}


bool func_642(int iParam0){
return iParam0==72;
}


bool func_643(int iParam0){
return iParam0==76;
}


bool func_644(int iParam0){
return iParam0==74;
}


bool func_645(int iParam0){
return iParam0==78;
}


bool func_646(int iParam0){
return iParam0==77;
}


var func__647(int iParam0){
return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

int func_648(bool bParam0){
if(bParam0){
return 1;
}
return 0;
}

int func_649(){
if(((Global_4718592.f_113724==Global_262145.f_5042[0] || Global_4718592.f_113724==Global_262145.f_5042[1]) || Global_4718592.f_113724==Global_262145.f_5042[2]) || Global_4718592.f_113724==Global_262145.f_5042[3]){
return Global_262145.f_5042[3];
}elseif((((Global_4718592.f_113724==Global_262145.f_5042[4] || Global_4718592.f_113724==Global_262145.f_5042[5]) || Global_4718592.f_113724==Global_262145.f_5042[6]) || Global_4718592.f_113724==Global_262145.f_5042[7]) || Global_4718592.f_113724==Global_262145.f_5042[8]){
return Global_262145.f_5042[8];
}elseif((((((Global_4718592.f_113724==Global_262145.f_5042[9] || Global_4718592.f_113724==Global_262145.f_5042[10]) || Global_4718592.f_113724==Global_262145.f_5042[11]) || Global_4718592.f_113724==Global_262145.f_5042[12]) || Global_4718592.f_113724==Global_262145.f_5042[13]) || Global_4718592.f_113724==Global_262145.f_5042[14]) || Global_4718592.f_113724==Global_262145.f_5042[15]){
return Global_262145.f_5042[14];
}
return 0;
}

int func_650(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
if(Global_262145.f_8146==1){
if(iParam0==67){
return 1;
}
if(iParam0==74){
return 1;
}
if(func_653(PLAYER::PLAYER_ID(), 85)){
if(((((iParam0==64 || iParam0==77) || iParam0==61) || iParam0==81) || iParam0==63) || iParam0==62){
return 1;
}}
if((((((((((iParam0==66 || iParam0==116) || iParam0==103) || iParam0==104) || iParam0==105) || iParam0==119) || iParam0==88) || iParam0==75) || iParam0==95) || iParam0==65) || iParam0==98){
return 1;
}}
if(iParam0 < 0){
return 0;
}
if(iParam0==31){
if(Global_262145.f_4747==1){
return 1;
}}
if(func_652() || func_651()){
return 1;
}
iVar0=iParam0;
iVar1=(iVar0 / 32);
iVar0=(iVar0 % 32);
if(bParam1){
if(iParam0==3){
if(func_789()){
return 1;
}else{
return 0;
}}}
if(bParam2){
return 0;
}
return MISC::IS_BIT_SET(Global_1836844[iVar1], iVar0);
}


bool func_651(){
return Global_1575048;
}


bool func_652(){
return Global_1575050;
}

int func_653(int iParam0, int iParam1){
if(!func_656()){
return 0;
}
if(func_655()){
return 0;
}
if(iParam1==86){
return 1;
}
return func_349(&(Global_1853910[iParam0 /*862*/].f_792), func_654(iParam1));
}

int func_654(int iParam0){
switch (iParam0){
case 86:
return 0;
case 19:
return 1;
case 12:
return 2;
case 31:
return 3;
case 20:
return 4;
case 18:
return 5;
case 2:
return 6;
case 76:
return 7;
case 22:
return 8;
case 53:
return 9;
case 34:
return 10;
case 152:
return 11;
case 85:
return 12;
case 84:
return 13;
case 0:
return 14;
case 1:
return 15;
case 153:
return 16;
case 151:
return 17;
case 14:
return 18;
case 15:
return 19;
case 24:
return 20;
case 30:
return 21;
case 46:
return 22;
case 47:
return 23;
case 54:
return 24;
case 51:
return 25;
case 60:
return 26;
case 62:
return 27;
case 66:
return 28;
case 69:
return 29;
case 154:
return 30;
case 82:
return 31;
case 157:
return 32;
case 167:
return 34;
case 169:
return 35;
case 171:
return 36;
case 172:
return 37;
case 173:
return 38;
case 177:
return 39;
case 182:
return 40;
case 188:
return 41;
default:
}
return 1;
}


bool func_655(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143, 3);
}

int func_656(){
if(!func_657()){
return 0;
}
return 1;
}

int func_657(){
if(Global_1574612){
return 1;
}
if(func_652()){
return 1;
}
if(func_651()){
return 1;
}
return func_601(120, -1);
}


void func_658(){
Global_1057409=-1;
}


var func__659(){
return MISC::IS_BIT_SET(Global_1048576.f_10, 3);
}


var func__660(){
return MISC::IS_BIT_SET(Global_2684801.f_1.f_2809, 6);
}


var func__661(){
return MISC::IS_BIT_SET(Global_1048576.f_10, 5);
}


var func__662(){
return MISC::IS_BIT_SET(Global_2684801.f_1.f_2809, 8);
}


bool func_663(){
return PLAYER::PLAYER_ID();
}


var func__664(int iParam0){
return (func_667() || func_665(iParam0));
}

int func_665(var uParam0){
return func_666(Global_4718592.f_113724, uParam0);
}

int func_666(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(iParam0 !=0){
iVar1=0;
while (iVar1 < 19){
if(((Global_262145.f_6891[iVar1]==202 || Global_262145.f_6891[iVar1]==203) || Global_262145.f_6891[iVar1]==204) || (uParam1 && ((((((((((((Global_262145.f_6891[iVar1]==224 || Global_262145.f_6891[iVar1]==223) || Global_262145.f_6891[iVar1]==232) || Global_262145.f_6891[iVar1]==245) || Global_262145.f_6891[iVar1]==246) || Global_262145.f_6891[iVar1]==251) || Global_262145.f_6891[iVar1]==252) || Global_262145.f_6891[iVar1]==253) || Global_262145.f_6891[iVar1]==161) || Global_262145.f_6891[iVar1]==278) || Global_262145.f_6891[iVar1]==279) || Global_262145.f_6891[iVar1]==302) || Global_262145.f_6891[iVar1]==303))){
iVar0=0;
while (iVar0 < Global_262145.f_6211[iVar1]){
if(iParam0==Global_262145.f_5066[iVar1 /*51*/][iVar0]){
return 1;
}
iVar0++;
}}
iVar1++;
}}
return 0;
}

int func_667(){
return func_668(Global_4718592.f_113724);
}

int func_668(int iParam0){
int iVar0;
if(iParam0 !=0){
iVar0=0;
while (iVar0 < 50){
if(iParam0==Global_262145.f_4795[iVar0]){
return 1;
}
iVar0++;
}}
return 0;
}


bool func_669(){
return (MISC::IS_BIT_SET(Global_4718592.f_11, 19) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}


bool func_670(){
return (MISC::IS_BIT_SET(Global_4718592.f_11, 18) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

int func_671(int iParam0){
int iVar0;
int iVar1;
if(iParam0 !=0){
iVar1=0;
while (iVar1 < 19){
if(Global_262145.f_6891[iVar1]==232){
iVar0=0;
while (iVar0 < Global_262145.f_6211[iVar1]){
if(iParam0==Global_262145.f_5066[iVar1 /*51*/][iVar0]){
return 1;
}
iVar0++;
}}
iVar1++;
}}
return 0;
}


bool func_672(){
return MISC::IS_BIT_SET(Global_2684801.f_1.f_2809, 5);
}


bool func_673(bool bParam0){
if(bParam0){
return (MISC::IS_BIT_SET(Global_4718592.f_160050, 12) && func_674());
}
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}

int func_674(){
if(Global_4718592.f_114294==1 || Global_4718592.f_114294==2){
return 1;
}
return 0;
}
struct<35> func_675(int iParam0){
struct<13> Var0;
struct<35> Var1;
if(func_676(iParam0)){
return Global_1575092[PLAYER::PLAYER_ID() /*35*/];
}
Var0={
func_129(iParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
return Var1;
}

int func_676(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}
return 0;
}

int func_677(){
return func_304(1299, -1, 0);
}

int func_678(){
return func_304(1218, -1, 0);
}


void func_679(){
struct<45> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
Var0.f_3=-1;
Var0.f_4=-1;
Var0.f_5=-1;
Var0.f_6=-1;
Var0.f_7=-1;
Var0.f_8=-1;
Var0.f_9=-1;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_12=-1;
Var0.f_13=-1;
Var0.f_15=-1;
Var0.f_16=-1;
Var0.f_17=-1;
Var0.f_18=-1;
Var0.f_19=-1;
Var0.f_20=-1;
Var0.f_21=-1;
Var0.f_22=-1;
Var0.f_23=-1;
Var0.f_24=-1;
Var0.f_25=-1;
Var0.f_27=-1;
Var0.f_28=-1;
Var0.f_29=-1;
Var0.f_30=-1;
Var0.f_32=-1;
Var0.f_33=-1;
Var0.f_34=-1;
Var0.f_35=-1;
Var0.f_36=-1;
Var0.f_37=-1;
Var0.f_38=-1;
Var0.f_39=-1;
Var0.f_40=-1;
Var0.f_41=-1;
Var0.f_42=-1;
Var0.f_43=-1;
Global_1948149={
Var0 
};
}


void func_680(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_692()){
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
func_681(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_681(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_681(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_681(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_681(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_692()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_8()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_688(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_687(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_682(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_682(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_683(iParam0);
}}


void func_683(int iParam0){
bool bVar0;
bVar0=false;
if(!func_692()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_686(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_684(&(Global_4535172[iParam0 /*85*/]));
}}


void func_684(var uParam0){
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
func_685(&(uParam0->f_14));
func_685(&(uParam0->f_14.f_13));
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


void func_685(var uParam0){
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

int func_686(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_687(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_688(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_692()){
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
func_689(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_689(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_691(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_690();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_690(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__691(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_692(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


bool func_693(){
return (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_694());
}

int func_694(){
return func_695(Global_4718592.f_113724);
}

int func_695(int iParam0){
int iVar0;
int iVar1;
if(iParam0 !=0){
iVar1=0;
while (iVar1 < 19){
if(Global_262145.f_6891[iVar1]==2){
iVar0=0;
while (iVar0 < Global_262145.f_6211[iVar1]){
if(iParam0==Global_262145.f_5066[iVar1 /*51*/][iVar0]){
return 1;
}
iVar0++;
}}
iVar1++;
}}
return 0;
}

int func_696(){
if(func_775(Global_4718592.f_104427) || func_774(Global_4718592.f_104427)){
if(func_773()){
return func_697(func_702(func_772(Global_1665787), 0));
}}
return 0;
}

int func_697(int iParam0){
int iVar0;
int iVar1;
if(func_692()){
if(iParam0==func_702(245, 0) && func_304(3171, -1, 0) !=0){
return 1;
}
if(iParam0==func_702(323, 0) && func_304(5396, -1, 0) !=0){
return 1;
}
if(iParam0==func_702(324, 0) && func_50(9461, -1)){
return 1;
}
if(iParam0==func_702(357, 0) && func_304(6159, -1, 0) !=0){
return 1;
}
if(iParam0==func_702(402, 0) && func_304(7210, -1, 0) !=0){
return 1;
}
if(iParam0==func_702(518, 0) && func_304(9517, -1, 0) !=0){
return 1;
}
if(iParam0==func_702(583, 0) && func_700(-1)){
return 1;
}
iVar0=0;
while (iVar0 <=7){
iVar1=-1;
switch (iVar0){
case 0:
iVar1=450;
break;
case 1:
iVar1=451;
break;
case 2:
iVar1=452;
break;
case 3:
iVar1=453;
break;
case 4:
iVar1=454;
break;
case 5:
iVar1=455;
break;
case 6:
iVar1=456;
break;
case 7:
iVar1=457;
break;
}
if(iParam0==func_702(iVar1, 0) && func_698(iVar0)){
return 1;
}
iVar0++;
}}
if(iParam0 !=-1){
if(MISC::IS_BIT_SET(Global_2359296[func_576() /*5568*/].f_1[(iParam0 / 32)], (iParam0 % 32))){
return 1;
}}
return 0;
}


bool func_698(int iParam0){
return func_50(func_699(iParam0), -1);
}

int func_699(int iParam0){
switch (iParam0){
case 8:
return 24963;
break;
case 9:
return 24964;
break;
case 10:
return 24966;
break;
case 11:
return 24965;
break;
case 12:
return 24968;
break;
case 13:
return 25101;
break;
case 14:
return 24967;
break;
case 15:
return 25105;
break;
case 16:
return 25106;
break;
case 20:
return 25102;
break;
case 21:
return 25103;
break;
case 22:
return 25104;
break;
case 102:
return 24969;
break;
case 17:
return 25107;
break;
case 18:
return 25108;
break;
case 19:
return 25109;
break;
case 103:
return 24972;
break;
case 104:
return 24973;
break;
case 105:
return 24974;
break;
case 106:
return 24975;
break;
case 107:
return 24976;
break;
case 108:
return 24978;
break;
case 109:
return 24980;
break;
case 110:
return 24981;
break;
case 111:
return 24982;
break;
case 112:
return 24983;
break;
case 113:
return 24984;
break;
case 114:
return 24985;
break;
case 115:
return 24986;
break;
case 116:
return 24987;
break;
case 117:
return 24988;
break;
case 118:
return 24989;
break;
case 119:
return 24990;
break;
case 120:
return 24991;
break;
case 0:
return 24992;
break;
case 1:
return 24993;
break;
case 2:
return 24994;
break;
case 3:
return 24995;
break;
case 4:
return 24996;
break;
case 5:
return 24997;
break;
case 6:
return 24998;
break;
case 7:
return 24999;
break;
case 127:
return 25117;
break;
case 128:
return 25118;
break;
case 23:
return 25119;
break;
case 139:
return 25125;
break;
case 140:
return 25127;
break;
case 141:
return 25128;
break;
case 27:
return 25129;
break;
case 160:
return 25136;
break;
case 161:
return 25139;
break;
case 162:
return 25140;
break;
case 31:
return 25141;
break;
case 181:
return 25148;
break;
case 182:
return 25151;
break;
case 183:
return 25152;
break;
case 35:
return 25153;
break;
case 193:
return 25160;
break;
case 194:
return 25161;
break;
case 39:
return 25162;
break;
case 206:
return 25168;
break;
case 207:
return 25169;
break;
case 208:
return 25170;
break;
case 209:
return 25173;
break;
case 210:
return 25174;
break;
case 43:
return 25175;
break;
case 234:
return 25179;
break;
case 235:
return 25183;
break;
case 236:
return 25184;
break;
case 47:
return 25185;
break;
case 248:
return 25188;
break;
case 249:
return 25191;
break;
case 250:
return 25192;
break;
case 51:
return 25193;
break;
case 259:
return 25198;
break;
case 260:
return 25202;
break;
case 261:
return 25203;
break;
case 55:
return 25204;
break;
case 274:
return 25209;
break;
case 275:
return 25212;
break;
case 276:
return 25213;
break;
case 59:
return 25214;
break;
case 284:
return 25217;
break;
case 285:
return 25221;
break;
case 286:
return 25222;
break;
case 63:
return 25223;
break;
case 307:
return 25228;
break;
case 308:
return 24979;
break;
case 309:
return 25229;
break;
case 310:
return 25111;
break;
case 67:
return 25230;
break;
case 68:
return 25112;
break;
case 72:
return 25231;
break;
case 73:
return 25233;
break;
case 74:
return 25234;
break;
case 75:
return 25235;
break;
case 76:
return 25236;
break;
case 77:
return 25394;
break;
case 121:
return 25395;
break;
case 122:
return 25396;
break;
case 123:
return 25397;
break;
case 124:
return 25398;
break;
case 125:
return 25399;
break;
case 126:
return 25400;
break;
}
switch (iParam0){
case 78:
return 25244;
break;
case 79:
return 25245;
break;
case 80:
return 25246;
break;
case 81:
return 25247;
break;
case 82:
return 25248;
break;
case 83:
return 25249;
break;
case 84:
return 25250;
break;
case 85:
return 25000;
break;
case 86:
return 25251;
break;
case 87:
return 25252;
break;
case 88:
return 25253;
break;
case 89:
return 25254;
break;
case 90:
return 25255;
break;
case 91:
return 25256;
break;
case 92:
return 25257;
break;
case 93:
return 25258;
break;
case 94:
return 25259;
break;
case 95:
return 25260;
break;
case 96:
return 25261;
break;
case 97:
return 25262;
break;
case 98:
return 25263;
break;
case 99:
return 25264;
break;
case 100:
return 25225;
break;
case 101:
return 25178;
break;
case 311:
return 25265;
break;
case 312:
return 25266;
break;
case 313:
return 25267;
break;
case 314:
return 25268;
break;
case 315:
return 24977;
break;
case 316:
return 25269;
break;
case 317:
return 25270;
break;
case 318:
return 25271;
break;
case 319:
return 25272;
break;
case 320:
return 25273;
break;
case 321:
return 25274;
break;
case 322:
return 25275;
break;
case 323:
return 25276;
break;
case 324:
return 25277;
break;
case 325:
return 25278;
break;
case 326:
return 25279;
break;
case 327:
return 25280;
break;
case 328:
return 25281;
break;
case 329:
return 25282;
break;
case 330:
return 25283;
break;
case 331:
return 25284;
break;
case 332:
return 25285;
break;
case 333:
return 25286;
break;
case 334:
return 25287;
break;
case 335:
return 25288;
break;
case 336:
return 25289;
break;
case 337:
return 25290;
break;
case 338:
return 25291;
break;
case 339:
return 25292;
break;
case 340:
return 25293;
break;
case 341:
return 25294;
break;
case 342:
return 25295;
break;
case 343:
return 25296;
break;
case 344:
return 25297;
break;
case 345:
return 25298;
break;
case 346:
return 25299;
break;
case 347:
return 25300;
break;
case 348:
return 25301;
break;
case 349:
return 25302;
break;
case 350:
return 25303;
break;
case 351:
return 25304;
break;
case 352:
return 25305;
break;
case 353:
return 25306;
break;
case 354:
return 25307;
break;
case 355:
return 25308;
break;
case 356:
return 25309;
break;
case 357:
return 25310;
break;
case 358:
return 25311;
break;
case 359:
return 25312;
break;
case 360:
return 25313;
break;
case 361:
return 25314;
break;
case 362:
return 25315;
break;
case 363:
return 25316;
break;
case 364:
return 25317;
break;
case 365:
return 25318;
break;
case 366:
return 25319;
break;
case 367:
return 25320;
break;
case 368:
return 25321;
break;
case 369:
return 25322;
break;
case 370:
return 25323;
break;
case 371:
return 25324;
break;
case 372:
return 25325;
break;
case 373:
return 25326;
break;
case 374:
return 25327;
break;
case 375:
return 25328;
break;
case 376:
return 25329;
break;
case 377:
return 25330;
break;
case 378:
return 25331;
break;
case 379:
return 25332;
break;
case 380:
return 25333;
break;
case 381:
return 25334;
break;
case 382:
return 25335;
break;
case 383:
return 25336;
break;
case 384:
return 25337;
break;
case 385:
return 25338;
break;
case 386:
return 25339;
break;
case 387:
return 25340;
break;
case 388:
return 25341;
break;
case 389:
return 25342;
break;
case 390:
return 25343;
break;
case 391:
return 25344;
break;
case 392:
return 25345;
break;
case 393:
return 25346;
break;
case 394:
return 25347;
break;
case 395:
return 24970;
break;
case 396:
return 25348;
break;
case 397:
return 25349;
break;
case 398:
return 25350;
break;
case 399:
return 25351;
break;
case 400:
return 25352;
break;
case 401:
return 25353;
break;
case 402:
return 25354;
break;
case 403:
return 25355;
break;
case 404:
return 25356;
break;
case 405:
return 25357;
break;
case 406:
return 25358;
break;
case 407:
return 25359;
break;
case 408:
return 25360;
break;
case 409:
return 25361;
break;
case 410:
return 25362;
break;
case 411:
return 25363;
break;
case 412:
return 25364;
break;
case 413:
return 25365;
break;
case 414:
return 25366;
break;
case 415:
return 25367;
break;
case 416:
return 25368;
break;
case 417:
return 25369;
break;
case 418:
return 25370;
break;
case 419:
return 25371;
break;
case 420:
return 25373;
break;
case 421:
return 25374;
break;
case 422:
return 25375;
break;
case 423:
return 25377;
break;
case 424:
return 25378;
break;
case 425:
return 25379;
break;
case 426:
return 25382;
break;
case 427:
return 25383;
break;
case 428:
return 25386;
break;
case 429:
return 25390;
break;
case 430:
return 25391;
break;
case 431:
return 25392;
break;
case 432:
return 25393;
break;
}
switch (iParam0){
case 24:
return 24971;
break;
case 25:
return 25113;
break;
case 26:
return 25114;
break;
case 28:
return 25115;
break;
case 29:
return 25116;
break;
case 30:
return 25120;
break;
case 32:
return 25121;
break;
case 33:
return 25122;
break;
case 34:
return 25123;
break;
case 36:
return 25124;
break;
case 37:
return 25126;
break;
case 38:
return 25130;
break;
case 40:
return 25131;
break;
case 41:
return 25132;
break;
case 42:
return 25133;
break;
case 44:
return 25134;
break;
case 45:
return 25137;
break;
case 46:
return 25138;
break;
case 48:
return 25142;
break;
case 49:
return 25143;
break;
case 50:
return 25144;
break;
case 52:
return 25145;
break;
case 53:
return 25146;
break;
case 54:
return 25147;
break;
case 56:
return 25149;
break;
case 57:
return 25150;
break;
case 58:
return 25154;
break;
case 60:
return 25155;
break;
case 61:
return 25156;
break;
case 62:
return 25157;
break;
case 64:
return 25158;
break;
case 65:
return 25159;
break;
case 66:
return 25163;
break;
case 69:
return 25164;
break;
case 70:
return 25165;
break;
case 71:
return 25166;
break;
case 129:
return 25167;
break;
case 130:
return 25171;
break;
case 131:
return 25172;
break;
case 132:
return 25176;
break;
case 133:
return 25177;
break;
case 134:
return 25181;
break;
case 135:
return 25182;
break;
case 136:
return 25186;
break;
case 137:
return 25187;
break;
case 138:
return 25189;
break;
case 142:
return 25190;
break;
case 143:
return 25194;
break;
case 144:
return 25195;
break;
case 145:
return 25196;
break;
case 146:
return 25197;
break;
case 147:
return 25199;
break;
case 148:
return 25200;
break;
case 149:
return 25201;
break;
case 150:
return 25205;
break;
case 151:
return 25206;
break;
case 152:
return 25207;
break;
case 153:
return 25208;
break;
case 154:
return 25210;
break;
case 155:
return 25211;
break;
case 156:
return 25215;
break;
case 157:
return 25216;
break;
case 158:
return 25218;
break;
case 159:
return 25219;
break;
case 163:
return 25220;
break;
case 164:
return 25224;
break;
case 165:
return 25226;
break;
case 166:
return 25227;
break;
case 167:
return 25232;
break;
case 168:
return 25372;
break;
case 169:
return 25376;
break;
case 170:
return 25380;
break;
case 171:
return 25381;
break;
case 172:
return 25384;
break;
case 173:
return 25385;
break;
case 174:
return 25387;
break;
case 175:
return 25388;
break;
case 176:
return 25389;
break;
case 177:
return 25407;
break;
case 178:
return 25408;
break;
case 179:
return 25409;
break;
case 180:
return 25410;
break;
case 184:
return 25411;
break;
case 185:
return 25412;
break;
case 186:
return 25413;
break;
case 187:
return 25414;
break;
case 188:
return 25415;
break;
case 189:
return 25416;
break;
case 190:
return 25417;
break;
case 191:
return 25418;
break;
case 192:
return 25419;
break;
case 195:
return 25420;
break;
case 196:
return 25421;
break;
case 197:
return 25422;
break;
case 198:
return 25423;
break;
case 199:
return 25424;
break;
case 200:
return 25425;
break;
case 201:
return 25426;
break;
case 202:
return 25427;
break;
case 203:
return 25428;
break;
case 204:
return 25429;
break;
case 205:
return 25430;
break;
case 211:
return 25431;
break;
case 212:
return 25432;
break;
case 213:
return 25433;
break;
case 214:
return 25434;
break;
case 215:
return 25435;
break;
case 216:
return 25436;
break;
case 217:
return 25437;
break;
case 218:
return 25438;
break;
case 219:
return 25439;
break;
case 220:
return 25440;
break;
case 221:
return 25441;
break;
case 222:
return 25442;
break;
case 223:
return 25443;
break;
case 224:
return 25444;
break;
case 225:
return 25445;
break;
case 226:
return 25446;
break;
case 227:
return 25447;
break;
case 228:
return 25448;
break;
case 229:
return 25449;
break;
case 230:
return 25450;
break;
case 231:
return 25451;
break;
case 232:
return 25452;
break;
case 233:
return 25453;
break;
case 237:
return 25454;
break;
case 238:
return 25455;
break;
case 239:
return 25456;
break;
case 240:
return 25457;
break;
case 241:
return 25458;
break;
case 242:
return 25459;
break;
case 243:
return 25460;
break;
case 244:
return 25461;
break;
case 245:
return 25462;
break;
case 246:
return 25463;
break;
case 247:
return 25464;
break;
case 251:
return 25465;
break;
case 252:
return 25466;
break;
case 253:
return 25467;
break;
case 254:
return 25468;
break;
case 255:
return 25469;
break;
case 256:
return 25470;
break;
case 257:
return 25471;
break;
case 258:
return 25472;
break;
case 262:
return 25473;
break;
case 263:
return 25474;
break;
case 264:
return 25475;
break;
case 265:
return 25476;
break;
case 266:
return 25477;
break;
case 267:
return 25478;
break;
case 268:
return 25479;
break;
case 269:
return 25480;
break;
case 270:
return 25481;
break;
case 271:
return 25482;
break;
case 272:
return 25483;
break;
case 273:
return 25484;
break;
case 277:
return 25485;
break;
case 278:
return 25486;
break;
case 279:
return 25487;
break;
case 280:
return 25488;
break;
case 281:
return 25489;
break;
case 282:
return 25490;
break;
case 283:
return 25491;
break;
case 287:
return 25492;
break;
case 288:
return 25493;
break;
case 289:
return 25494;
break;
case 290:
return 25495;
break;
case 291:
return 25496;
break;
case 292:
return 25497;
break;
case 293:
return 25498;
break;
case 294:
return 25499;
break;
case 295:
return 25500;
break;
case 296:
return 25501;
break;
case 297:
return 25502;
break;
case 298:
return 25503;
break;
case 299:
return 25504;
break;
case 300:
return 25505;
break;
case 301:
return 25506;
break;
case 302:
return 25507;
break;
case 303:
return 25508;
break;
case 304:
return 25509;
break;
case 305:
return 25510;
break;
case 306:
return 25511;
break;
}
return 0;
}


bool func_700(int iParam0){
return func_304(11432, iParam0, 0)==func_701();
}

int func_701(){
return joaat("brickade2");
}

int func_702(int iParam0, int iParam1){
if(iParam0==-1){
return -1;
}
switch (iParam0){
case 17:
return 0;
case 9:
return 1;
case 10:
return 2;
case 11:
return 3;
case 12:
return 4;
case 13:
return 5;
case 14:
return 6;
case 15:
return 7;
case 16:
return 8;
case 19:
return 9;
case 22:
return 10;
case 23:
return 11;
case 24:
return 12;
case 25:
return 13;
case 27:
return 14;
case 28:
return 15;
case 29:
return 16;
case 30:
return 17;
case 31:
return 18;
case 20:
return 19;
case 32:
return 20;
case 21:
return 21;
case 78:
return 22;
case 79:
return 23;
case 80:
return 24;
case 18:
return 25;
case 81:
return 26;
case 82:
return 27;
case 83:
return 28;
case 84:
return 29;
case 85:
return 30;
case 86:
return 31;
case 87:
return 32;
case 88:
return 33;
case 102:
return 34;
case 113:
return 35;
case 160:
return 36;
case 163:
return 37;
case 162:
return 38;
case 164:
if(func_703(iParam0, 11, iParam1)){
return 40;
}
return 39;
case 199:
return 41;
case 201:
return 42;
case 200:
switch (iParam1){
case 1:
return 43;
case 2:
return 44;
case 3:
return 45;
case 4:
return 46;
case 5:
return 47;
case 6:
return 48;
case 7:
return 49;
case 8:
return 50;
case 9:
return 51;
case 10:
return 52;
case 11:
return 53;
case 12:
return 54;
case 13:
return 55;
case 14:
return 56;
case 15:
return 57;
case 16:
return 58;
case 17:
return 59;
case 18:
return 60;
case 19:
return 61;
case 20:
return 62;
case 21:
return 63;
case 22:
return 64;
case 23:
return 65;
case 24:
return 66;
case 25:
return 67;
default:
}
return 43;
case 171:
return 68;
case 187:
return 69;
case 177:
return 70;
case 183:
return 71;
case 185:
return 72;
case 184:
return 73;
case 188:
return 74;
case 173:
return 75;
case 178:
return 76;
case 186:
return 77;
case 215:
return 78;
case 217:
return 79;
case 224:
return 80;
case 237:
return 81;
case 243:
return 82;
case 244:
return 83;
case 245:
return 84;
case 253:
return 85;
case 254:
return 86;
case 256:
return 87;
case 257:
return 88;
case 258:
return 89;
case 276:
if(func_703(iParam0, 16, iParam1)){
return 91;
}
return 90;
case 323:
return 92;
case 324:
return 93;
case 337:
return 94;
case 357:
return 95;
case 402:
return 96;
case 413:
switch (iParam1){
case 1:
return 97;
case 2:
return 98;
case 3:
return 99;
case 4:
return 100;
case 5:
return 101;
case 6:
return 102;
case 7:
return 103;
case 8:
return 104;
default:
}
return 97;
case 414:
switch (iParam1){
case 1:
return 105;
case 2:
return 106;
case 3:
return 107;
case 4:
return 108;
case 5:
return 109;
case 6:
return 110;
case 7:
return 111;
case 8:
return 112;
case 9:
return 113;
case 10:
return 114;
default:
}
return 105;
case 450:
if(iParam1==2){
return 132;
}
return 115;
case 451:
return 116;
case 452:
return 117;
case 453:
return 118;
case 454:
return 119;
case 455:
return 120;
case 456:
return 121;
case 457:
return 122;
case 480:
return 123;
case 482:
return 124;
case 483:
return 125;
case 518:
return 126;
break;
case 531:
return 127;
break;
case 533:
return 128;
break;
case 527:
return 129;
break;
case 525:
return 130;
case 583:
return 131;
}
return -1;
}

int func_703(int iParam0, int iParam1, int iParam2){
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
iVar0=func_770(iParam0, -1);
if(iParam0==164){
if(iParam2==2){
return 1;
}
return 0;
}
if(iParam0==276){
if(iParam2==2){
return 1;
}
return 0;
}
if(iParam0==95){
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
return 1;
}
return 0;
}elseif((iParam0==96 || iParam0==97) || iParam0==98){
if(func_769() && func_768()){
return 1;
}
return 0;
}
if((((iParam0==206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(func_769()){
return 1;
}
return 0;
}
if((((iParam0==170 || iParam0==120) || iParam0==119) || iParam0==117) || iParam0==166){
return 1;
}
if(iParam0==221 || iParam0==135){
if(iParam1==26){
return 1;
}
return 0;
}
if(func_767(iParam0)){
if(Global_77263){
return 1;
}
return 0;
}
iVar1=func_766(iVar0);
if(iVar1 !=-1){
if(func_764(func_765(iVar0))){
return 1;
}
return 0;
}
if(func_763(iParam0)){
if(func_769()){
if((iParam0==205 && Global_262145.f_20223) || (iParam0 !=205 && Global_262145.f_20222)){
return 1;
}
return 0;
}
return 0;
}
if(func_762(iParam0)){
if(func_756(iParam0)){
return 0;
}
return 1;
}
iVar2=func_755(iVar0);
if(iVar2 !=-1){
if(func_753(func_754(iVar0))){
return 1;
}
return 0;
}
iVar3=func_752(iVar0);
if(iVar3 > 0){
if(func_750(iVar0)){
return 1;
}
return 0;
}
iVar4=func_749(iVar0);
if(iVar4 !=-1){
if(func_747(iVar0)){
return 1;
}
return 0;
}
iVar5=func_746(iVar0);
if(iVar5 !=-1){
if(func_743(iVar0)){
return 1;
}
return 0;
}
iVar6=func_742(iVar0);
if(iVar6 !=-1){
if(func_740(iVar0)){
return 1;
}
return 0;
}
if((iVar0==joaat("firetruk") || iVar0==joaat("boxville")) || iVar0==joaat("stockade")){
if(func_739(iVar0)){
return 0;
}
return 1;
}
iVar7=func_738(iVar0);
if(iVar7 !=-1){
if(func_739(iVar0)){
return 1;
}
return 0;
}
iVar8=func_737(iVar0);
if(iVar8 !=-1){
if(func_729(iVar0)){
return 1;
}
return 0;
}
iVar9=func_728(iVar0);
if(iVar9 !=-1){
if(func_725(iVar0)){
return 1;
}
return 0;
}
iVar10=func_724(iVar0);
if(iVar10 !=-1){
if(func_716(iVar0)){
return 1;
}
return 0;
}
iVar11=func_715(iVar0);
if(iVar11 !=-1){
if(func_712(iVar0)){
return 1;
}
return 0;
}
iVar12=func_711(iVar0);
if(iVar12 !=-1 || iVar0==joaat("brickade2")){
if(func_704(iVar0)){
return 1;
}
return 0;
}
return 0;
}

int func_704(int iParam0){
if(!Global_78558){
return 0;
}
switch (iParam0){
case joaat("journey2"):
return func_708(0, 0);
case joaat("surfer3"):
return func_708(4, 0);
case joaat("virtue"):
return func_708(10, 0);
case joaat("hotring"):
return func_304(11843, -1, 0) >=10;
case joaat("everon2"):
return func_304(11843, -1, 0) >=20;
case joaat("taxi"):
return func_707(158, -1);
case joaat("brickade2"):
return func_705(0);
default:
}
return 0;
}

int func_705(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_304(10870, -1, 0), 0);
}
return func_706(PLAYER::PLAYER_ID());
}

int func_706(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_57.f_2, 0);
}
return 0;
}

int func_707(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850651[iParam0 /*3*/][func_30(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_708(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_304(10871, -1, 0), func_710(iParam0, 1));
}
return func_709(PLAYER::PLAYER_ID(), iParam0);
}

int func_709(int iParam0, int iParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_57, func_710(iParam1, 1));
}
return 0;
}

int func_710(int iParam0, bool bParam1){
if(bParam1){
switch (iParam0){
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
return 8;
case 9:
return 9;
case 10:
return 10;
default:}}else{
switch (iParam0){
case 0:
return 11;
case 1:
return 12;
case 2:
return 13;
case 3:
return 14;
case 4:
return 15;
case 5:
return 16;
case 6:
return 17;
case 7:
return 18;
case 8:
return 19;
case 9:
return 20;
case 10:
return 21;
}
default:
}
return -1;
}

int func_711(int iParam0){
switch (iParam0){
case joaat("journey2"):
return 0;
case joaat("surfer3"):
return 1;
case joaat("virtue"):
return 2;
case joaat("hotring"):
return 3;
case joaat("everon2"):
return 4;
case joaat("taxi"):
return 5;
case joaat("brickade2"):
return 6;
default:
}
return -1;
}

int func_712(int iParam0){
if(!Global_78558){
return 0;
}
switch (iParam0){
case joaat("kanjosj"):
return func_50(34373, -1);
case joaat("postlude"):
return func_50(34374, -1);
case joaat("greenwood"):
return func_713(0);
case joaat("draugur"):
return func_50(32366, -1);
case joaat("conada"):
return func_713(5);
default:
}
return 0;
}


var func__713(int iParam0){
return MISC::IS_BIT_SET(func_304(10393, -1, 0), func_714(iParam0, 1));
}

int func_714(int iParam0, bool bParam1){
if(bParam1){
switch (iParam0){
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
default:}}else{
switch (iParam0){
case 0:
return 7;
case 1:
return 8;
case 2:
return 9;
case 3:
return 10;
case 4:
return 11;
case 5:
return 12;
}
default:
}
return -1;
}

int func_715(int iParam0){
switch (iParam0){
case joaat("kanjosj"):
return 0;
case joaat("postlude"):
return 1;
case joaat("greenwood"):
return 2;
case joaat("draugur"):
return 3;
case joaat("conada"):
return 4;
default:
}
return -1;
}

int func_716(int iParam0){
if(!Global_78558){
return 0;
}
switch (iParam0){
case joaat("buffalo4"):
return func_723();
case joaat("granger2"):
return func_721(1) >=5;
case joaat("deity"):
return func_721(1) >=10;
case joaat("patriot3"):
return func_721(1) >=15;
case joaat("jubilee"):
return func_721(1) >=20;
case joaat("champion"):
return (func_719(11, 1) || func_717(1));
case joaat("baller7"):
return func_717(1);
default:
}
return 0;
}

int func_717(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_304(9905, -1, 0), 2);
}
return func_718(PLAYER::PLAYER_ID());
}

int func_718(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27, 2);
}
return 0;
}

int func_719(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_304(9907, -1, 0), iParam0);
}
return func_720(PLAYER::PLAYER_ID(), iParam0);
}

int func_720(int iParam0, var uParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_27.f_3, uParam1);
}
return 0;
}

int func_721(bool bParam0){
if(bParam0){
return func_304(9910, -1, 0);
}
return func_722(PLAYER::PLAYER_ID());
}

int func_722(int iParam0){
if(iParam0 !=-1){
return Global_1981514[iParam0 /*60*/].f_27.f_8;
}
return 0;
}


bool func_723(){
return func_304(9903, func_30(-1), 0) !=0;
}

int func_724(int iParam0){
switch (iParam0){
case joaat("baller7"):
return 0;
case joaat("buffalo4"):
return 1;
case joaat("champion"):
return 2;
case joaat("deity"):
return 3;
case joaat("granger2"):
return 4;
case joaat("jubilee"):
return 5;
case joaat("mule5"):
return 6;
case joaat("patriot3"):
return 7;
case joaat("youga4"):
return 8;
default:
}
return -1;
}

int func_725(int iParam0){
if(!Global_78558){
return 0;
}
switch (iParam0){
case joaat("euros"):
return func_727(PLAYER::PLAYER_ID());
case joaat("tailgater2"):
return func_726(PLAYER::PLAYER_ID());
case joaat("zr350"):
return func_50(31810, -1);
case joaat("comet6"):
return func_50(31811, -1);
case joaat("jester4"):
return func_50(31812, -1);
case joaat("vectre"):
return func_50(31813, -1);
case joaat("cypher"):
return func_50(31814, -1);
case joaat("growler"):
return func_50(31815, -1);
case joaat("calico"):
return func_50(31816, -1);
case joaat("remus"):
return func_50(31817, -1);
case joaat("dominator7"):
return func_50(31818, -1);
case joaat("futo2"):
return func_50(31819, -1);
case joaat("rt3000"):
return func_50(31820, -1);
case joaat("warrener2"):
return func_50(31821, -1);
case joaat("sultan3"):
return func_50(31822, -1);
case joaat("dominator8"):
return func_50(31823, -1);
case joaat("previon"):
return func_50(31824, -1);
case joaat("kanjosj"):
return func_50(34373, -1);
case joaat("postlude"):
return func_50(34374, -1);
default:
}
return 0;
}

int func_726(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return MISC::IS_BIT_SET(func_304(9618, -1, 0), 0);
}
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1981514[iParam0 /*60*/].f_1, 0);
}
return 0;
}

int func_727(int iParam0){
if(iParam0 !=func_72()){
if(MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_485.f_2, 17)){
return 1;
}
if(iParam0==PLAYER::PLAYER_ID()){
return func_304(9631, -1, 0) !=0;
}}
return 0;
}

int func_728(int iParam0){
switch (iParam0){
case joaat("zr350"):
return 0;
case joaat("comet6"):
return 1;
case joaat("jester4"):
return 2;
case joaat("vectre"):
return 3;
case joaat("cypher"):
return 4;
case joaat("tailgater2"):
return 5;
case joaat("euros"):
return 6;
case joaat("growler"):
return 7;
case joaat("calico"):
return 8;
case joaat("remus"):
return 9;
case joaat("dominator7"):
return 10;
case joaat("futo2"):
return 11;
case joaat("rt3000"):
return 12;
case joaat("warrener2"):
return 13;
case joaat("sultan3"):
return 14;
case joaat("dominator8"):
return 15;
case joaat("previon"):
return 16;
default:
}
return -1;
}

int func_729(int iParam0){
if(!Global_78558){
return 0;
}
switch (iParam0){
case joaat("winky"):
if(func_734(PLAYER::PLAYER_ID(), 0) || func_733(0)){
return 1;
}
break;
case joaat("brioso2"):
if(func_732(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("vetir"):
if(func_601(281, -1)){
return 1;
}
break;
case joaat("longfin"):
if(func_601(282, -1)){
return 1;
}
break;
case joaat("annihilator2"):
if(func_601(283, -1)){
return 1;
}
break;
case joaat("alkonost"):
if(func_601(284, -1)){
return 1;
}
break;
case joaat("patrolboat"):
if(func_601(285, -1)){
return 1;
}
break;
case joaat("weevil"):
if((func_730(0, 1) && func_730(1, 1)) && func_730(2, 1)){
return 1;
}
break;
case joaat("italirsx"):
if(func_730(3, 1)){
return 1;
}
break;
}
return 0;
}


bool func_730(int iParam0, bool bParam1){
if(bParam1){
return MISC::IS_BIT_SET(func_304(9586, -1, 0), iParam0);
}
return func_731(PLAYER::PLAYER_ID(), iParam0);
}

int func_731(int iParam0, var uParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1979596[iParam0 /*53*/].f_3, uParam1);
}
return 0;
}

int func_732(int iParam0){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1979596[iParam0 /*53*/].f_1, 1);
}
return 0;
}

int func_733(bool bParam0){
if(bParam0){
return MISC::IS_BIT_SET(func_304(9511, -1, 0), 1);
}
return func_732(PLAYER::PLAYER_ID());
}

int func_734(int iParam0, int iParam1){
if(iParam0 !=-1){
return func_735(iParam0, func_736(iParam1));
}
return 0;
}

int func_735(int iParam0, var uParam1){
if(iParam0 !=-1){
return MISC::IS_BIT_SET(Global_1979596[iParam0 /*53*/].f_2, uParam1);
}
return 0;
}

int func_736(int iParam0){
switch (iParam0){
case 0:
return 0;
case 7:
return 1;
case 1:
return 2;
case 5:
return 3;
case 2:
return 4;
case 3:
return 5;
case 4:
return 6;
case 6:
return 7;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 11:
return 10;
case 12:
return 11;
case 13:
return 12;
case 14:
return 13;
case 15:
return 14;
case 16:
return 15;
default:
}
return -1;
}

int func_737(int iParam0){
switch (iParam0){
case joaat("vetir"):
return 0;
break;
case joaat("winky"):
return 1;
break;
case joaat("longfin"):
return 2;
break;
case joaat("annihilator2"):
return 3;
break;
case joaat("alkonost"):
return 4;
break;
case joaat("patrolboat"):
return 5;
break;
case joaat("brioso2"):
return 6;
break;
case joaat("weevil"):
return 7;
break;
case joaat("italirsx"):
return 8;
break;
}
return -1;
}

int func_738(int iParam0){
switch (iParam0){
case joaat("firetruk"):
return 0;
break;
case joaat("burrito2"):
return 1;
break;
case joaat("boxville"):
return 2;
break;
case joaat("stockade"):
return 3;
break;
case joaat("asbo"):
return 4;
break;
case joaat("kanjo"):
return 5;
break;
case joaat("everon"):
return 6;
break;
case joaat("retinue2"):
return 7;
break;
case joaat("yosemite2"):
return 8;
break;
case joaat("sugoi"):
return 9;
break;
case joaat("sultan2"):
return 10;
break;
case joaat("outlaw"):
return 11;
break;
case joaat("vagrant"):
return 12;
break;
case joaat("komoda"):
return 13;
break;
case joaat("stryder"):
return 14;
break;
case joaat("furia"):
return 15;
break;
case joaat("zhaba"):
return 16;
break;
case joaat("jugular"):
return 17;
break;
case joaat("sentinel3"):
return 18;
break;
case joaat("gauntlet3"):
return 19;
break;
case joaat("ellie"):
return 20;
break;
case joaat("defiler"):
return 21;
break;
case joaat("manchez"):
return 22;
break;
}
return -1;
}

int func_739(int iParam0){
int iVar0;
if(!Global_78558){
return 0;
}
iVar0=func_304(8837, -1, 0);
switch (iParam0){
case joaat("firetruk"):
if(MISC::IS_BIT_SET(iVar0, 0) || Global_262145.f_28588){
return 1;
}else{
return 0;
}
break;
case joaat("burrito2"):
if(MISC::IS_BIT_SET(iVar0, 1) || Global_262145.f_28589){
return 1;
}else{
return 0;
}
break;
case joaat("boxville"):
if(MISC::IS_BIT_SET(iVar0, 2) || Global_262145.f_28590){
return 1;
}else{
return 0;
}
break;
case joaat("stockade"):
if(MISC::IS_BIT_SET(iVar0, 3) || Global_262145.f_28591){
return 1;
}else{
return 0;
}
break;
case joaat("asbo"):
if(MISC::IS_BIT_SET(iVar0, 4) || Global_262145.f_28592){
return 1;
}else{
return 0;
}
break;
case joaat("kanjo"):
if(MISC::IS_BIT_SET(iVar0, 5) || Global_262145.f_28593){
return 1;
}else{
return 0;
}
break;
case joaat("everon"):
if(MISC::IS_BIT_SET(iVar0, 6) || Global_262145.f_28594){
return 1;
}else{
return 0;
}
break;
case joaat("retinue2"):
if(MISC::IS_BIT_SET(iVar0, 7) || Global_262145.f_28595){
return 1;
}else{
return 0;
}
break;
case joaat("yosemite2"):
if(MISC::IS_BIT_SET(iVar0, 8) || Global_262145.f_28596){
return 1;
}else{
return 0;
}
break;
case joaat("sugoi"):
if(MISC::IS_BIT_SET(iVar0, 9) || Global_262145.f_28597){
return 1;
}else{
return 0;
}
break;
case joaat("sultan2"):
if(MISC::IS_BIT_SET(iVar0, 10) || Global_262145.f_28598){
return 1;
}else{
return 0;
}
break;
case joaat("outlaw"):
if(MISC::IS_BIT_SET(iVar0, 11) || Global_262145.f_28599){
return 1;
}else{
return 0;
}
break;
case joaat("vagrant"):
if(MISC::IS_BIT_SET(iVar0, 12) || Global_262145.f_28600){
return 1;
}else{
return 0;
}
break;
case joaat("komoda"):
if(MISC::IS_BIT_SET(iVar0, 13) || Global_262145.f_28601){
return 1;
}else{
return 0;
}
break;
case joaat("stryder"):
if(MISC::IS_BIT_SET(iVar0, 14) || Global_262145.f_28602){
return 1;
}else{
return 0;
}
break;
case joaat("furia"):
if(MISC::IS_BIT_SET(iVar0, 15) || Global_262145.f_28603){
return 1;
}else{
return 0;
}
break;
case joaat("zhaba"):
if(MISC::IS_BIT_SET(iVar0, 16) || Global_262145.f_28604){
return 1;
}else{
return 0;
}
break;
case joaat("jugular"):
if(MISC::IS_BIT_SET(iVar0, 17) || Global_262145.f_28605){
return 1;
}else{
return 0;
}
break;
case joaat("sentinel3"):
if(MISC::IS_BIT_SET(iVar0, 18) || Global_262145.f_28606){
return 1;
}else{
return 0;
}
break;
case joaat("gauntlet3"):
if(MISC::IS_BIT_SET(iVar0, 19) || Global_262145.f_28607){
return 1;
}else{
return 0;
}
break;
case joaat("ellie"):
if(MISC::IS_BIT_SET(iVar0, 20) || Global_262145.f_28608){
return 1;
}else{
return 0;
}
break;
case joaat("defiler"):
if(MISC::IS_BIT_SET(iVar0, 21) || Global_262145.f_28609){
return 1;
}else{
return 0;
}
break;
case joaat("manchez"):
if(MISC::IS_BIT_SET(iVar0, 22) || Global_262145.f_28610){
return 1;
}else{
return 0;
}
break;
}
return 0;
}

int func_740(int iParam0){
if(!Global_78558){
return 0;
}
if(iParam0==joaat("cognoscenti") || iParam0==joaat("cognoscenti2")){
return 0;
}
if(func_742(iParam0) !=-1){
if(func_698(func_741(iParam0))){
return 1;
}else{
return 0;
}}
return 0;
}

int func_741(int iParam0){
switch (iParam0){
case joaat("cerberus"):
return 8;
break;
case joaat("cerberus2"):
return 9;
break;
case joaat("cerberus3"):
return 10;
break;
case joaat("brutus"):
return 11;
break;
case joaat("brutus2"):
return 12;
break;
case joaat("brutus3"):
return 13;
break;
case joaat("zr380"):
return 14;
break;
case joaat("zr3802"):
return 15;
break;
case joaat("zr3803"):
return 16;
break;
case joaat("scarab"):
return 20;
break;
case joaat("scarab2"):
return 21;
break;
case joaat("scarab3"):
return 22;
break;
case joaat("imperator"):
return 17;
break;
case joaat("imperator2"):
return 18;
break;
case joaat("imperator3"):
return 19;
break;
case joaat("impaler"):
return 102;
break;
case joaat("ratloader2"):
return 103;
break;
case joaat("glendale"):
return 104;
break;
case joaat("slamvan"):
return 105;
break;
case joaat("dominator"):
return 106;
break;
case joaat("issi3"):
return 107;
break;
case joaat("gargoyle"):
return 108;
break;
}
return -1;
}

int func_742(int iParam0){
switch (iParam0){
case joaat("cerberus"):
return 0;
case joaat("cerberus2"):
return 1;
case joaat("cerberus3"):
return 2;
case joaat("brutus"):
return 3;
case joaat("brutus2"):
return 4;
case joaat("brutus3"):
return 5;
case joaat("scarab"):
return 6;
case joaat("scarab2"):
return 7;
case joaat("scarab3"):
return 8;
case joaat("imperator"):
return 9;
case joaat("imperator2"):
return 10;
case joaat("imperator3"):
return 11;
case joaat("zr380"):
return 12;
case joaat("zr3802"):
return 13;
case joaat("zr3803"):
return 14;
case joaat("ratloader2"):
return 15;
case joaat("glendale"):
return 16;
case joaat("slamvan"):
return 17;
case joaat("dominator"):
return 18;
case joaat("impaler"):
return 19;
case joaat("issi3"):
return 20;
case joaat("gargoyle"):
return 21;
default:
}
return -1;
}

int func_743(int iParam0){
switch (iParam0){
case joaat("mule4"):
if(func_304(7233, -1, 0) >=func_745(iParam0) || Global_262145.f_24683){
return 1;
}else{
return 0;
}
break;
case joaat("pounder2"):
if(func_304(7233, -1, 0) >=func_745(iParam0) || Global_262145.f_24684){
return 1;
}else{
return 0;
}
break;
case joaat("oppressor2"):
if(func_744(22050, -1) >=func_745(iParam0) || Global_262145.f_24685){
return 1;
}else{
return 0;
}
break;
case joaat("pbus2"):
if(MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_310.f_7, 1) || Global_262145.f_24687){
return 1;
}else{
return 0;
}
break;
case joaat("patriot2"):
if(func_304(7231, -1, 0) >=func_745(iParam0) || Global_262145.f_24688){
return 1;
}else{
return 0;
}
break;
case joaat("blimp3"):
if(func_304(7231, -1, 0) >=func_745(iParam0) || Global_262145.f_24689){
return 1;
}else{
return 0;
}
break;
}
return 0;
}

int func_744(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_8();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_745(int iParam0){
switch (iParam0){
case joaat("mule4"):
return Global_262145.f_24690;
break;
case joaat("pounder2"):
return Global_262145.f_24691;
break;
case joaat("oppressor2"):
return Global_262145.f_24692;
break;
case joaat("patriot2"):
return Global_262145.f_24693;
break;
case joaat("blimp3"):
return Global_262145.f_24694;
break;
}
return 0;
}

int func_746(int iParam0){
switch (iParam0){
case joaat("mule4"):
return 0;
break;
case joaat("pounder2"):
return 1;
break;
case joaat("oppressor2"):
return 2;
break;
case joaat("pbus2"):
return 3;
break;
case joaat("patriot2"):
return 4;
break;
case joaat("blimp3"):
return 5;
break;
}
return -1;
}

int func_747(int iParam0){
var uVar0;
if(!Global_78558){
return 0;
}
uVar0=func_304(5664, -1, 0);
switch (iParam0){
case joaat("deluxo"):
return MISC::IS_BIT_SET(uVar0, func_748(1));
case joaat("akula"):
return MISC::IS_BIT_SET(uVar0, func_748(2));
case joaat("riot2"):
return MISC::IS_BIT_SET(uVar0, func_748(6));
case joaat("stromberg"):
return MISC::IS_BIT_SET(uVar0, func_748(7));
case joaat("chernobog"):
return MISC::IS_BIT_SET(uVar0, func_748(10));
case joaat("barrage"):
return MISC::IS_BIT_SET(uVar0, func_748(11));
case joaat("khanjali"):
return MISC::IS_BIT_SET(uVar0, func_748(12));
case joaat("volatol"):
return MISC::IS_BIT_SET(uVar0, func_748(13));
case joaat("thruster"):
return MISC::IS_BIT_SET(uVar0, func_748(15));
default:
}
return 0;
}

int func_748(int iParam0){
switch (iParam0){
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
return 8;
case 9:
return 9;
case 10:
return 10;
case 11:
return 11;
case 12:
return 12;
case 13:
return 13;
case 14:
return 14;
case 15:
return 15;
default:
}
return -1;
}

int func_749(int iParam0){
switch (iParam0){
case joaat("deluxo"):
return 0;
break;
case joaat("akula"):
return 1;
break;
case joaat("riot2"):
return 2;
break;
case joaat("stromberg"):
return 3;
break;
case joaat("chernobog"):
return 4;
break;
case joaat("barrage"):
return 5;
break;
case joaat("khanjali"):
return 6;
break;
case joaat("volatol"):
return 7;
break;
case joaat("thruster"):
return 8;
break;
}
return -1;
}

int func_750(int iParam0){
int iVar0;
int iVar1;
if(!Global_78558){
return 0;
}
iVar0=func_752(iParam0);
iVar1=func_751();
if(iVar1 >=iVar0){
return 1;
}
return 0;
}

int func_751(){
return func_304(6116, -1, 0);
}

int func_752(int iParam0){
switch (iParam0){
case joaat("microlight"):
return Global_262145.f_22712;
case joaat("rogue"):
return Global_262145.f_22713;
case joaat("alphaz1"):
return Global_262145.f_22714;
case joaat("havok"):
return Global_262145.f_22715;
case joaat("starling"):
return Global_262145.f_22716;
case joaat("molotok"):
return Global_262145.f_22717;
case joaat("tula"):
return Global_262145.f_22718;
case joaat("bombushka"):
return Global_262145.f_22719;
case joaat("howard"):
return Global_262145.f_22720;
case joaat("mogul"):
return Global_262145.f_22721;
case joaat("pyro"):
return Global_262145.f_22722;
case joaat("seabreeze"):
return Global_262145.f_22723;
case joaat("nokota"):
return Global_262145.f_22724;
case joaat("hunter"):
return Global_262145.f_22725;
default:
}
return 0;
}

int func_753(var uParam0){
if(!Global_78558){
return 0;
}
return MISC::IS_BIT_SET(func_304(5466, -1, 0), uParam0);
}

int func_754(int iParam0){
switch (iParam0){
case joaat("dune3"):
return 0;
case joaat("halftrack"):
return 1;
case joaat("trailersmall2"):
return 2;
case joaat("apc"):
return 3;
case joaat("tampa3"):
return 5;
case joaat("oppressor"):
return 7;
default:
}
return 3;
}

int func_755(int iParam0){
switch (iParam0){
case joaat("dune3"):
return 0;
break;
case joaat("halftrack"):
return 1;
break;
case joaat("trailersmall2"):
return 2;
break;
case joaat("apc"):
return 3;
break;
case joaat("tampa3"):
return 4;
break;
case joaat("oppressor"):
return 5;
break;
}
return -1;
}

int func_756(int iParam0){
int iVar0;
if(!Global_78558){
return 0;
}
iVar0=0;
switch (iParam0){
case 187:
iVar0=16;
break;
case 177:
iVar0=12;
break;
case 185:
iVar0=14;
break;
case 174:
iVar0=9;
break;
case 171:
iVar0=20;
break;
case 172:
iVar0=7;
break;
case 173:
iVar0=8;
break;
case 175:
iVar0=10;
break;
case 176:
iVar0=11;
break;
case 178:
iVar0=5;
break;
case 179:
iVar0=6;
break;
case 183:
iVar0=21;
break;
case 180:
iVar0=18;
break;
case 181:
iVar0=22;
break;
case 182:
iVar0=19;
break;
case 184:
iVar0=13;
break;
case 186:
iVar0=15;
break;
case 188:
iVar0=17;
break;
}
return func_757(iVar0);
}

int func_757(int iParam0){
var uVar0;
int iVar1;
if(func_761()){
return 0;
}
uVar0=func_758(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_328(iVar1));
}


var func__758(var uParam0){
var uVar0;
uVar0=func_304(func_759(uParam0), -1, 0);
return uVar0;
}

int func_759(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_331(iVar0);
if((func_103()==0 || func_760()==0) || (func_103()==999 && func_760()==999)){
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

int func_760(){
return Global_32164;
}


bool func_761(){
return Global_1575039;
}

int func_762(int iParam0){
if(((((((((((((((iParam0==171 || iParam0==172) || iParam0==173) || iParam0==175) || iParam0==177) || iParam0==178) || iParam0==179) || iParam0==180) || iParam0==181) || iParam0==182) || iParam0==183) || iParam0==184) || iParam0==185) || iParam0==186) || iParam0==187) || iParam0==188){
return 1;
}
return 0;
}

int func_763(int iParam0){
if((((((iParam0==199 || iParam0==200) || iParam0==201) || iParam0==202) || iParam0==203) || iParam0==204) || iParam0==205){
return 1;
}
return 0;
}

int func_764(var uParam0){
if(!Global_78558){
return 0;
}
return MISC::IS_BIT_SET(func_304(5329, -1, 0), uParam0);
}

int func_765(int iParam0){
switch (iParam0){
case joaat("dune4"):
return 0;
case joaat("dune5"):
return 0;
case joaat("wastelander"):
return 1;
case joaat("blazer5"):
return 2;
case joaat("phantom2"):
return 3;
case joaat("voltic2"):
return 4;
case joaat("technical2"):
return 5;
case joaat("boxville5"):
return 6;
case joaat("ruiner2"):
return 7;
default:
}
return 0;
}

int func_766(var uParam0){
int iVar0;
iVar0=uParam0;
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

int func_767(int iParam0){
if((((((iParam0==233 || iParam0==234) || iParam0==235) || iParam0==236) || iParam0==240) || iParam0==241) || iParam0==263){
return 1;
}
return 0;
}

int func_768(){
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

int func_769(){
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

int func_770(int iParam0, int iParam1){
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
return func_771();
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

int func_771(){
return joaat("kosatka");
}

int func_772(int iParam0){
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
}elseif(iParam0==func_771()){
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

int func_773(){
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
while (iVar0 < 5){
if(Global_2359296[func_576() /*5568*/].f_1[iVar0] !=0){
iVar1=Global_2359296[func_576() /*5568*/].f_1[iVar0];
iVar2=func_702(245, 0);
if(iVar0==(iVar2 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar2 % 32));
}
iVar3=func_702(323, 0);
if(iVar0==(iVar3 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar3 % 32));
}
iVar4=func_702(324, 0);
if(iVar0==(iVar4 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar4 % 32));
}
iVar5=func_702(357, 0);
if(iVar0==(iVar5 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar5 % 32));
}
iVar6=func_702(402, 0);
if(iVar0==(iVar6 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar6 % 32));
}
iVar7=func_702(518, 0);
if(iVar0==(iVar7 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar7 % 32));
}
iVar8=func_702(583, 0);
if(iVar0==(iVar8 / 32)){
MISC::CLEAR_BIT(&iVar1, (iVar8 % 32));
}
if(iVar1 !=0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_774(int iParam0){
switch (iParam0){
case 2:
case 3:
return 1;
break;
}
return 0;
}

int func_775(int iParam0){
switch (iParam0){
case 4:
case 5:
case 8:
return 1;
break;
}
return 0;
}

int func_776(int iParam0, bool bParam1){
if(bParam1){
return Global_1665790;
}
if(iParam0 !=func_72()){
return Global_1853910[iParam0 /*862*/].f_96;
}
return 0;
}

int func_777(){
return Global_1057406;
}


void func_778(){
Global_1837309=0;
Global_1837310=0;
}

int func_779(){
return Global_1057409;
}


bool func_780(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==8;
}


bool func_781(int iParam0){
return Global_2657589[iParam0 /*466*/].f_121==5;
}


bool func_782(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_481();
}
return func_783(Global_4718592.f_113724);
}

int func_783(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_5033[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


bool func_784(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_482();
}
return func_785(Global_4718592.f_113724);
}

int func_785(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_5024[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


void func_786(){
Global_2683864.f_669.f_13=1;
}


var func__787(){
return Global_2683864.f_669.f_13;
}


bool func_788(){
return MISC::IS_BIT_SET(Global_2683864.f_669.f_1, 0);
}

int func_789(){
var uVar0;
if(Global_1574612){
return 1;
}
if(MISC::IS_BIT_SET(Global_2793046.f_1824, 23)){
return 1;
}
if(func_652()){
return 1;
}
if(func_651()){
return 1;
}
uVar0=Global_1665626[func_30(-1)];
if(MISC::IS_BIT_SET(uVar0, 7)){
MISC::SET_BIT(&(Global_2793046.f_1824), 23);
return 1;
}
return 0;
}


bool func_790(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 2);
}


void func_791(char* sParam0, int iParam1, int iParam2){
switch (iParam1){
case 11:
StringCopy(sParam0, "MG_GOLF_", 32);
break;
case 13:
StringCopy(sParam0, "MG_RANGE_", 32);
break;
case 12:
StringCopy(sParam0, "MG_TENNIS_", 32);
break;
case 15:
StringCopy(sParam0, "MG_ARM_", 32);
break;
case 14:
StringCopy(sParam0, "MG_DARTS_", 32);
break;
case 122:
StringCopy(sParam0, "MG_PILOT_", 32);
break;
case 5:
StringCopy(sParam0, "IMPROMPTU_DM", 32);
return;
break;
case 148:
StringCopy(sParam0, "IMPROMPTU_DM", 32);
return;
break;
}
StringIntConCat(sParam0, iParam2, 32);
}


void func_792(char* sParam0, int iParam1, int iParam2){
switch (iParam1){
case 32:
StringCopy(sParam0, "RACE_TO_POINT_", 32);
break;
case 25:
StringCopy(sParam0, "PROSTITUTES_", 32);
break;
case 19:
StringCopy(sParam0, "IMPORT_EXPORT_", 32);
break;
case 30:
StringCopy(sParam0, "HOLD_UPS_", 32);
break;
case 31:
StringCopy(sParam0, "CREATE_DROP_", 32);
break;
}
StringIntConCat(sParam0, iParam2, 32);
}

int func_793(bool bParam0){
if(bParam0 > -1){
if(bParam0==PLAYER::PLAYER_ID()){
return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
}elseif(func_29(bParam0)){
return Global_1853910[bParam0 /*862*/].f_205.f_3;
}else{
return 0;
}}
return 0;
}


void func_794(){
switch (func_608(NETWORK::PARTICIPANT_ID())){
case 2:
if(!MISC::IS_BIT_SET(uLocal_989, 0)){
if(func_796(1)){
MISC::SET_BIT(&uLocal_989, false);
}}
break;
case 3:
if(!func_795()){
if(!MISC::IS_BIT_SET(uLocal_989, 1)){
if(func_796(2)){
MISC::SET_BIT(&uLocal_989, true);
}}}elseif(!MISC::IS_BIT_SET(uLocal_989, 2)){
if(func_796(3)){
MISC::SET_BIT(&uLocal_989, 2);
}}
break;
case 4:
if(!MISC::IS_BIT_SET(uLocal_989, 3)){
if(func_796(4)){
MISC::SET_BIT(&uLocal_989, 3);
}}
break;
case 5:
if(!MISC::IS_BIT_SET(uLocal_989, 4)){
if(func_796(5)){
MISC::SET_BIT(&uLocal_989, 4);
}}
break;
}}

int func_795(){
if(Local_180.f_265 >=(Local_180.f_266 / 2)){
return 1;
}
return 0;
}

int func_796(int iParam0){
if(func_586()){
return 0;
}
switch (iParam0){
case 1:
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_START");
return 1;
case 2:
if(MISC::IS_BIT_SET(uLocal_989, 0)){
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_ALERTED");
}else{
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_ALERTED_RS");
}
return 1;
case 3:
if(MISC::IS_BIT_SET(uLocal_989, 1)){
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_HALF");
}else{
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_HALF_RS");
}
return 1;
case 4:
if(MISC::IS_BIT_SET(uLocal_989, 2)){
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_LEAVE");
}else{
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_LEAVE_RS");
}
return 1;
case 5:
if(AUDIO::PREPARE_MUSIC_EVENT("GA_KILL_COMPLETE")){
AUDIO::TRIGGER_MUSIC_EVENT("GA_KILL_COMPLETE");
return 1;
}
return 0;
default:
}
return 0;
}


void func_797(){
switch (func_608(NETWORK::PARTICIPANT_ID())){
case 0:
func_980();
break;
case 1:
func_953();
break;
case 2:
func_952();
break;
case 3:
func_917();
break;
case 4:
func_903();
break;
case 5:
func_800();
break;
}
func_798();
func_32();
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 28);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 35);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 1);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 20);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 15);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 18);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 22);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 23);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 25);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 26);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 30);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 31);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 38);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 36);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 39);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 40);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 42);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 43);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 45);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 47);
PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 46);
}


void func_798(){
if(!MISC::IS_BIT_SET(uLocal_188, 18)){
if(func_608(NETWORK::PARTICIPANT_ID())==3 || func_608(NETWORK::PARTICIPANT_ID())==4){
func_510(1262, 1, -1);
func_799(6, 1);
MISC::SET_BIT(&uLocal_188, 18);
}}}


void func_799(int iParam0, bool bParam1){
int iVar0;
iVar0=0;
if(bParam1){
iVar0=-1;
}
switch (iParam0){
case 59:
Global_2359296[func_576() /*5568*/].f_681.f_19=iVar0;
break;
case 19:
Global_2359296[func_576() /*5568*/].f_681.f_18=iVar0;
break;
case 74:
Global_2359296[func_576() /*5568*/].f_681.f_12=iVar0;
break;
case 29:
Global_2359296[func_576() /*5568*/].f_681.f_14=iVar0;
break;
case 8:
Global_2359296[func_576() /*5568*/].f_681.f_15=iVar0;
break;
case 31:
Global_2359296[func_576() /*5568*/].f_681.f_16=iVar0;
break;
case 3:
Global_2359296[func_576() /*5568*/].f_681.f_20=iVar0;
break;
case 6:
Global_2359296[func_576() /*5568*/].f_681.f_17=iVar0;
break;
case 103:
case 104:
case 98:
case 105:
Global_2359296[func_576() /*5568*/].f_681.f_23=iVar0;
break;
case 76:
Global_2359296[func_576() /*5568*/].f_681.f_24=iVar0;
break;
case 93:
Global_2359296[func_576() /*5568*/].f_681.f_25=iVar0;
break;
case 61:
case 62:
case 63:
case 64:
case 77:
case 81:
Global_2359296[func_576() /*5568*/].f_681.f_26=iVar0;
break;
case 65:
case 75:
case 95:
Global_2359296[func_576() /*5568*/].f_681.f_27=iVar0;
break;
break;
case 97:
Global_2359296[func_576() /*5568*/].f_681.f_29=iVar0;
break;
case 88:
Global_2359296[func_576() /*5568*/].f_681.f_28=iVar0;
break;
case 100:
Global_2359296[func_576() /*5568*/].f_681.f_31=iVar0;
break;
case 106:
Global_2359296[func_576() /*5568*/].f_681.f_32=iVar0;
break;
case 99:
Global_2359296[func_576() /*5568*/].f_681.f_30=iVar0;
break;
}}


void func_800(){
int iVar0;
int iVar1;
bool bVar2;
func_885();
if(func_37(&uLocal_210, 1000, 0)){
if(!MISC::IS_BIT_SET(uLocal_188, 1)){
func_878();
func_859();
func_510(1257, 1, -1);
if(ZONE::GET_HASH_OF_MAP_AREA_AT_COORD(Local_180.f_261)==joaat("City")){
if(Local_180.f_257 !=joaat("g_m_y_mexgoon_01") && Local_180.f_257 !=joaat("g_m_y_mexgoon_02")){
func_510(1151, 1, -1);
}
func_510(1148, 1, -1);
}else{
if(Local_180.f_257 !=joaat("g_m_y_lost_01")){
func_510(1150, 1, -1);
}
func_510(1149, 1, -1);
}
iVar0=0;
while (iVar0 < 6){
if(HUD::DOES_BLIP_EXIST(Local_194[iVar0 /*8*/])){
HUD::REMOVE_BLIP(&(Local_194[iVar0 /*8*/]));
}
iVar0++;
}
if(func_707(6, -1)==0){
iVar1=(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_1 / 32);
bVar2=(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_1 % 32);
if(!MISC::IS_BIT_SET(Global_1030898[0 /*59*/].f_2[iVar1], bVar2)){
Global_1030898[0 /*59*/].f_1++;
MISC::SET_BIT(&(Global_1030898[0 /*59*/].f_2[iVar1]), bVar2);
if(Global_1030898[0 /*59*/].f_1 >=5){
if(!func_858(2, -1)){
func_833(2, 1, 1, 0, 0, -1);
}
func_832(6, 1, -1);
}}}
if(Local_180.f_380==PLAYER::PLAYER_ID() && Local_180.f_284 > 1){
if(func_707(17, -1)==0){
func_832(17, 1, -1);
}}
if(Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_3==0 && Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_4 >=10){
func_818(42, 1);
}
func_816();
func_815();
func_504(1147932892, 12, 0);
MISC::SET_BIT(&uLocal_188, true);
}
if((func_814() && (MISC::IS_BIT_SET(uLocal_989, 4) || func_586())) && MISC::IS_BIT_SET(uLocal_188, 20)){
if(!func_586()){
func_577(&Local_215, 1);
}
func_1678(3);
}}
if(!MISC::IS_BIT_SET(uLocal_188, 20)){
if(MISC::IS_BIT_SET(Local_180.f_517.f_5, 31)){
if(func_801()){
MISC::SET_BIT(&uLocal_188, 20);
}}else{
MISC::SET_BIT(&uLocal_188, 20);
}}}

int func_801(){
if(!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_GA_PICKUPS", Local_180.f_517.f_1, 1, 0)){
if(func_802(Local_180.f_517, 0)){
return 1;
}}else{
return 1;
}
return 0;
}

int func_802(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, int iParam45){
char cVar0[32];
int iVar1;
int iVar2;
if(func_813()){
return 0;
}
iParam45=iParam45;
StringCopy(&cVar0, func_808(Param0.f_0), 32);
if(SCRIPT::DOES_SCRIPT_EXIST(&cVar0)){
SCRIPT::REQUEST_SCRIPT(&cVar0);
if(SCRIPT::HAS_SCRIPT_LOADED(&cVar0)){
iVar1=1;
if(NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, Param0.f_1, iVar1, 0)){
return 0;
}
iVar2=start_new_script_with_args(&cVar0, &Param0, 46, func_803(Param0.f_0));
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
if(iVar2 > 0){
return 1;
}}}
return 0;
}

int func_803(int iParam0){
switch (iParam0){
case 191:
case 198:
case 192:
case 196:
case 199:
case 200:
case 193:
case 201:
case 202:
case 194:
case 203:
case 195:
case 219:
case 197:
case 49:
case 64:
case 62:
case 70:
case 107:
case 108:
case 110:
case 111:
case 112:
case 113:
case 115:
case 124:
case 125:
case 126:
case 86:
return 72500;
default:
}
if(func_807(iParam0)==3){
return 8344;
}elseif(func_807(iParam0)==7){
switch (iParam0){
case 45:
case 43:
case 39:
case 37:
case 41:
case 47:
case 40:
return 8344;
case 114:
return 15900;
default:}
return 5050;
}elseif(func_807(iParam0)==0){
return 5050;
}elseif(func_807(iParam0)==2){
return 5050;
}elseif(func_807(iParam0)==6){
switch (iParam0){
case 18:
case 22:
case 24:
case 17:
case 187:
case 188:
case 60:
case 179:
case 65:
case 71:
case 66:
case 67:
case 68:
case 73:
case 74:
case 78:
case 75:
case 79:
case 80:
case 82:
case 81:
case 88:
case 89:
case 91:
case 92:
case 93:
case 90:
case 99:
case 85:
case 84:
case 100:
case 101:
case 97:
case 98:
case 103:
case 104:
case 105:
case 106:
case 96:
case 109:
case 116:
case 117:
case 118:
case 119:
case 120:
case 121:
case 122:
case 123:
case 189:
return 5050;
case 213:
return 5050;
case 214:
return 1424;
case 177:
return 8344;
case 87:
case 77:
case 76:
return 8344;
case 163:
return 8344;
case 9:
case 16:
case 15:
case 174:
case 173:
case 19:
case 178:
case 175:
case 21:
case 190:
return 2050;
case 183:
return 3568;
case 204:
case 207:
return 1828;
case 208:
case 209:
case 210:
return 5050;
case 216:
case 211:
case 212:
case 215:
case 217:
return 8344;
case 218:
return func_806();
break;
case 142:
return 5050;
}}
switch (func_804(func_805(iParam0, 0))){
case 0:
return 72500;
case 1:
return 15900;
case 2:
return 5050;
default:
}
return 1424;
}

int func_804(int iParam0){
switch (iParam0){
case 150:
return 1;
case 24:
return 2;
case 26:
return 2;
case 256:
return 0;
case 258:
return 0;
case 259:
return 2;
case 271:
return 0;
case 273:
return 2;
case 276:
return 0;
case 277:
return 0;
case 262:
return 0;
case 263:
return 0;
case 264:
return 0;
case 269:
return 2;
case 270:
return 2;
case 275:
return 2;
case 268:
return 2;
case 286:
return 2;
case 267:
return 0;
case 266:
return 2;
case 287:
return 2;
case 289:
return 2;
case 147:
return 2;
case 291:
return 0;
case 292:
return 0;
case 293:
return 0;
case 294:
return 0;
case 295:
return 0;
case 296:
return 0;
case 297:
return 0;
case 298:
return 0;
case 299:
return 0;
case 300:
return 0;
case 301:
return 0;
case 288:
return 2;
case 290:
return 2;
case 304:
return 0;
case 305:
return 0;
case 306:
return 0;
case 307:
return 0;
case 308:
return 0;
case 309:
return 0;
case 310:
return 2;
case 311:
return 2;
default:
}
return -1;
}

int func_805(int iParam0, bool bParam1){
switch (iParam0){
case 191:
return 15;
case 198:
return 8;
case 192:
return 14;
case 196:
return 122;
case 199:
return 1;
case 197:
return 5;
case 200:
return 6;
case 193:
return 11;
case 201:
return 0;
case 202:
return 2;
case 194:
return 13;
case 203:
return 3;
case 195:
return 12;
case 49:
return 148;
case 52:
return 151;
case 53:
return 152;
case 54:
return 157;
case 55:
return 153;
case 56:
return 154;
case 57:
return 155;
case 58:
return 159;
case 51:
return 162;
case 60:
return 142;
case 62:
return 160;
case 63:
return 164;
case 64:
return 163;
case 65:
return 166;
case 66:
return 167;
case 67:
return 168;
case 68:
return 169;
case 69:
return 170;
case 70:
return 171;
case 71:
return 172;
case 72:
return 173;
case 73:
return 178;
case 74:
return 188;
case 75:
return 214;
case 76:
return 215;
case 77:
return 216;
case 78:
return 217;
case 79:
return 218;
case 80:
return 219;
case 81:
return 220;
case 82:
return 221;
case 84:
return 179;
case 83:
return 189;
case 85:
return 180;
case 87:
return 182;
case 88:
return 183;
case 89:
return 185;
case 90:
return 186;
case 91:
return 190;
case 92:
return 191;
case 93:
return 192;
case 94:
return 193;
case 102:
return 205;
case 95:
return 194;
case 96:
return 197;
case 97:
return 198;
case 99:
return 199;
case 100:
return 200;
case 101:
return 201;
case 103:
return 207;
case 104:
return 208;
case 105:
return 209;
case 106:
return 210;
case 98:
return 195;
case 107:
return 225;
case 108:
return 226;
case 109:
return 227;
case 110:
return 229;
case 111:
return 230;
case 113:
return 233;
case 115:
return 237;
case 116:
return 238;
case 117:
return 239;
case 118:
return 240;
case 119:
return 241;
case 120:
return 242;
case 121:
return 244;
case 122:
return 248;
case 123:
return 249;
case 124:
return 250;
case 125:
return 243;
case 126:
return 158;
case 86:
return 181;
case 127:
return 150;
case 128:
return 24;
case 129:
return 26;
case 130:
return 256;
case 131:
return 258;
case 133:
return 259;
case 134:
return 271;
case 135:
return 273;
case 136:
return 276;
case 137:
return 277;
case 138:
return 262;
case 139:
return 263;
case 140:
return 264;
case 141:
return 268;
case 143:
return 269;
case 144:
return 270;
case 145:
return 275;
case 146:
return 286;
case 148:
return 267;
case 147:
return 266;
case 151:
return 147;
case 149:
return 287;
case 152:
return 291;
case 153:
return 292;
case 154:
return 293;
case 155:
return 294;
case 156:
return 295;
case 157:
return 296;
case 158:
return 297;
case 159:
return 298;
case 160:
return 299;
case 161:
return 300;
case 162:
return 301;
case 163:
return 288;
case 164:
return 290;
case 165:
return 304;
case 166:
return 305;
case 167:
return 306;
case 168:
return 307;
case 169:
return 308;
case 170:
return 309;
case 171:
return 310;
case 172:
return 311;
default:
}
if(bParam1){}
return 312;
}

int func_806(){
return 8344;
}

int func_807(int iParam0){
switch (iParam0){
case 3:
return 7;
case 1:
return 7;
case 32:
return 7;
case 33:
return 7;
case 34:
return 7;
case 35:
return 7;
case 36:
return 7;
case 37:
return 7;
case 38:
return 7;
case 39:
return 7;
case 40:
return 7;
case 41:
return 7;
case 42:
return 7;
case 43:
return 7;
case 44:
return 7;
case 45:
return 7;
case 46:
return 7;
case 47:
return 7;
case 48:
return 6;
case 49:
return 6;
case 50:
return 6;
case 51:
return 6;
case 52:
return 6;
case 53:
return 6;
case 54:
return 6;
case 55:
return 6;
case 56:
return 6;
case 57:
return 6;
case 58:
return 6;
case 59:
return 6;
case 60:
return 6;
case 61:
return 6;
case 62:
return 6;
case 63:
return 6;
case 64:
return 6;
case 65:
return 6;
case 66:
return 6;
case 67:
return 6;
case 68:
return 6;
case 69:
return 6;
case 70:
return 6;
case 71:
return 6;
case 72:
return 6;
case 204:
return 6;
case 207:
return 6;
case 208:
return 6;
case 209:
return 6;
case 215:
return 6;
case 211:
return 6;
case 216:
return 6;
case 212:
return 6;
case 210:
return 6;
case 213:
return 6;
case 214:
return 6;
case 217:
return 6;
case 218:
return 6;
case 142:
return 6;
case 73:
case 74:
return 6;
case 75:
return 6;
case 76:
return 6;
case 77:
return 6;
case 78:
return 6;
case 79:
return 6;
case 80:
return 6;
case 81:
return 6;
case 82:
return 6;
case 84:
return 6;
case 83:
return 6;
case 85:
return 6;
case 86:
return 6;
case 87:
return 6;
case 88:
return 6;
case 89:
return 6;
case 90:
return 6;
case 91:
return 6;
case 92:
return 6;
case 93:
return 6;
case 94:
return 6;
case 102:
return 6;
case 95:
return 6;
case 96:
return 6;
case 97:
return 6;
case 98:
return 6;
case 99:
return 6;
case 100:
return 6;
case 101:
return 6;
case 103:
return 6;
case 104:
return 6;
case 105:
return 6;
case 106:
return 6;
case 107:
return 6;
case 108:
return 6;
case 109:
return 6;
case 110:
return 6;
case 111:
return 6;
case 112:
return 6;
case 113:
return 6;
case 114:
return 7;
case 115:
return 6;
case 116:
return 6;
case 117:
return 6;
case 118:
return 6;
case 119:
return 6;
case 120:
return 6;
case 121:
return 6;
case 122:
return 6;
case 123:
return 6;
case 124:
return 6;
case 125:
return 6;
case 126:
return 6;
case 16:
return 6;
case 18:
return 6;
case 28:
return 6;
case 26:
return 6;
case 27:
return 6;
case 29:
return 6;
case 30:
return 6;
case 31:
return 6;
case 17:
return 6;
case 173:
return 6;
case 174:
return 6;
case 19:
return 6;
case 22:
return 6;
case 23:
return 6;
case 24:
return 6;
case 25:
return 6;
case 177:
return 6;
case 187:
return 6;
case 188:
return 6;
case 189:
return 6;
case 190:
return 6;
case 12:
return 6;
case 4:
return 6;
case 13:
return 6;
case 5:
return 6;
case 6:
return 6;
case 8:
return 6;
case 9:
return 6;
case 7:
return 6;
case 10:
return 6;
case 11:
return 6;
case 15:
return 6;
case 21:
return 6;
case 185:
return 6;
case 186:
return 6;
case 175:
return 6;
case 178:
return 6;
case 179:
return 6;
case 176:
return 6;
case 180:
return 6;
case 183:
return 6;
case 184:
return 6;
case 191:
return 6;
case 198:
return 0;
case 192:
return 6;
case 199:
return 0;
case 197:
return 0;
case 200:
return 0;
case 193:
return 6;
case 201:
return 0;
case 196:
return 6;
case 202:
return 0;
case 194:
return 6;
case 203:
return 0;
case 195:
return 6;
case 181:
return 6;
case 182:
return 6;
case 219:
return 6;
case 205:
return 6;
case 206:
return 6;
default:
}
switch (func_804(func_805(iParam0, 1))){
case 0:
return 6;
case 1:
return 6;
case 2:
return 6;
default:
}
return 11;
}


char* func_808(int iParam0){
switch (iParam0){
case 1:
return "AM_HOLD_UP";
case 32:
return "AM_JOYRIDER";
case 33:
return "AM_PLANE_TAKEDOWN";
case 34:
return "AM_DISTRACT_COPS";
case 35:
return "AM_DESTROY_VEH";
case 36:
return "AM_HOT_TARGET";
case 37:
return "AM_KILL_LIST";
case 38:
return "AM_TIME_TRIAL";
case 39:
return "AM_CP_COLLECTION";
case 40:
return "AM_CHALLENGES";
case 41:
return "AM_PENNED_IN";
case 42:
return "AM_PASS_THE_PARCEL";
case 43:
return "AM_HOT_PROPERTY";
case 44:
return "AM_DEAD_DROP";
case 45:
return "AM_KING_OF_THE_CASTLE";
case 46:
return "AM_CRIMINAL_DAMAGE";
case 47:
return "AM_HUNT_THE_BEAST";
case 48:
return "GB_LIMO_ATTACK";
case 49:
return "GB_DEATHMATCH";
case 50:
return "GB_STEAL_VEH";
case 51:
return "GB_POINT_TO_POINT";
case 52:
return "GB_TERMINATE";
case 53:
return "GB_YACHT_ROB";
case 54:
return "GB_BELLYBEAST";
case 55:
return "GB_FIVESTAR";
case 56:
return "GB_ROB_SHOP";
case 57:
return "GB_COLLECT_MONEY";
case 58:
return "GB_ASSAULT";
case 59:
return "GB_VEH_SURV";
case 60:
return "GB_SIGHTSEER";
case 61:
return "GB_FLYING_IN_STYLE";
case 62:
return "GB_FINDERSKEEPERS";
case 63:
return "GB_HUNT_THE_BOSS";
case 64:
return "GB_CARJACKING";
case 65:
return "GB_HEADHUNTER";
case 66:
return "GB_CONTRABAND_BUY";
case 67:
return "GB_CONTRABAND_SELL";
case 68:
return "GB_CONTRABAND_DEFEND";
case 69:
return "GB_AIRFREIGHT";
case 70:
return "GB_CASHING_OUT";
case 71:
return "GB_SALVAGE";
case 72:
return "GB_FRAGILE_GOODS";
case 204:
return "dont_cross_the_line";
case 207:
return "grid_arcade_cabinet";
case 208:
return "scroll_arcade_cabinet";
case 209:
return "example_arcade";
case 210:
return "road_arcade";
case 215:
return "Degenatron Games";
case 211:
return "gunslinger_arcade";
case 216:
return "ggsm_arcade";
case 212:
return "wizard_arcade";
case 213:
return "AM_CASINO_LIMO";
case 214:
return "AM_CASINO_LUXURY_CAR";
case 217:
return "puzzle";
case 218:
return "camhedz_arcade";
case 73:
case 74:
return "GB_VEHICLE_EXPORT";
case 84:
return "GB_BIKER_JOUST";
case 83:
return "GB_BIKER_RACE_P2P";
case 85:
return "GB_BIKER_UNLOAD_WEAPONS";
case 86:
return "";
case 87:
return "GB_BIKER_BAD_DEAL";
case 88:
return "GB_BIKER_RESCUE_CONTACT";
case 89:
return "GB_BIKER_LAST_RESPECTS";
case 90:
return "GB_BIKER_CONTRACT_KILLING";
case 91:
return "GB_BIKER_CONTRABAND_SELL";
case 92:
return "GB_BIKER_CONTRABAND_DEFEND";
case 93:
return "GB_ILLICIT_GOODS_RESUPPLY";
case 94:
return "GB_BIKER_DRIVEBY_ASSASSIN";
case 102:
return "GB_BIKER_CRIMINAL_MISCHIEF";
case 95:
return "GB_BIKER_RIPPIN_IT_UP";
case 75:
return "GB_PLOUGHED";
case 76:
return "GB_FULLY_LOADED";
case 77:
return "GB_AMPHIBIOUS_ASSAULT";
case 78:
return "GB_TRANSPORTER";
case 79:
return "GB_FORTIFIED";
case 80:
return "GB_VELOCITY";
case 81:
return "GB_RAMPED_UP";
case 82:
return "GB_STOCKPILING";
case 96:
return "GB_BIKER_FREE_PRISONER";
case 97:
return "GB_BIKER_SAFECRACKER";
case 98:
return "GB_BIKER_STEAL_BIKES";
case 99:
return "GB_BIKER_SEARCH_AND_DESTROY";
case 100:
return "AM_PENNED_IN";
case 101:
return "GB_BIKER_STAND_YOUR_GROUND";
case 103:
return "GB_BIKER_DESTROY_VANS";
case 104:
return "GB_BIKER_BURN_ASSETS";
case 105:
return "GB_BIKER_SHUTTLE";
case 106:
return "GB_BIKER_WHEELIE_RIDER";
case 107:
case 108:
return "GB_GUNRUNNING";
case 109:
return "GB_GUNRUNNING_DEFEND";
case 110:
case 111:
case 112:
return "GB_SMUGGLER";
case 113:
return "GB_GANGOPS";
case 114:
return "BUSINESS_BATTLES";
case 115:
return "BUSINESS_BATTLES_SELL";
case 116:
return "BUSINESS_BATTLES_DEFEND";
case 117:
return "GB_SECURITY_VAN";
case 118:
return "GB_TARGET_PURSUIT";
case 119:
return "GB_JEWEL_STORE_GRAB";
case 120:
return "GB_BANK_JOB";
case 121:
return "GB_DATA_HACK";
case 122:
return "GB_INFILTRATION";
case 123:
return "BUSINESS_BATTLES_DEFEND";
case 124:
return "BUSINESS_BATTLES_SELL";
case 125:
return "GB_CASINO";
case 126:
return "GB_CASINO_HEIST";
case 127:
return "fm_content_business_battles";
case 151:
return "fm_content_crime_scene";
case 128:
return "fm_content_drug_vehicle";
case 129:
return "fm_content_movie_props";
case 130:
return "fm_content_island_heist";
case 131:
return "fm_content_island_dj";
case 133:
return "fm_content_golden_gun";
case 3:
return "AM_CR_SELL_DRUGS";
case 12:
return "AM_Safehouse";
case 16:
return "MG_RACE_TO_POINT";
case 18:
return "AM_CRATE_DROP";
case 28:
return "AM_AMMO_DROP";
case 29:
return "AM_VEHICLE_DROP";
case 30:
return "AM_BRU_BOX";
case 31:
return "AM_GA_PICKUPS";
case 26:
return "AM_backup_heli";
case 27:
return "AM_airstrike";
case 17:
return "AM_PI_MENU";
case 173:
return "AM_BOAT_TAXI";
case 174:
return "AM_HELI_TAXI";
case 19:
return "AM_IMP_EXP";
case 22:
return "AM_TAXI";
case 23:
return "AM_TAXI_LAUNCHER";
case 24:
return "AM_GANG_CALL";
case 25:
return "heli_gun";
case 187:
return "am_rollercoaster";
case 188:
return "am_ferriswheel";
case 189:
return "AM_LAUNCHER";
case 190:
return "AM_DAILY_OBJECTIVES";
case 4:
return "AM_STRIPPER";
case 13:
return "AM_Hitchhiker";
case 5:
return "stripclub_mp";
case 6:
return "AM_ArmWrestling";
case 8:
return "AM_Tennis";
case 9:
return "AM_Darts";
case 7:
return "AM_ImportExport";
case 10:
return "AM_FistFight";
case 11:
return "AM_DropOffHooker";
case 15:
return "AM_DOORS";
case 20:
return "FM_INTRO";
case 21:
return "AM_PROSTITUTE";
case 175:
return "fm_hold_up_tut";
case 176:
return "AM_CAR_MOD_TUT";
case 177:
return "AM_CONTACT_REQUESTS";
case 178:
return "am_mission_launch";
case 179:
return "am_npc_invites";
case 180:
return "am_lester_cut";
case 183:
return "AM_VEHICLE_SPAWN";
case 184:
return "am_ronTrevor_Cut";
case 185:
return "AM_ARMYBASE";
case 186:
return "AM_PRISON";
case 191:
return "AM_ArmWrestling";
case 198:
return "fm_Bj_race_controler";
case 192:
return "AM_Darts";
case 199:
return "fm_deathmatch_controler";
case 197:
return "FM_Impromptu_DM_Controler";
case 200:
return "fm_hideout_controler";
case 193:
return "golf_mp";
case 196:
return "Pilot_School_MP";
case 201:
return func_810();
case 202:
return "FM_Race_Controler";
case 194:
return "Range_Modern_MP";
case 203:
if(func_809(Global_4718592.f_166301)){
return "FM_Survival_Controller";
}else{
return "FM_Horde_Controler";
}
break;
case 195:
return "tennis_network_mp";
case 181:
return "am_heist_int";
case 182:
return "am_lowrider_int";
case 205:
return "am_darts_apartment";
case 206:
return "AM_Armwrestling_Apartment";
case 219:
return "SCTV";
case 0:
return "";
}
switch (iParam0){
case 132:
return "AM_ISLAND_BACKUP_HELI";
case 134:
return "fm_content_tuner_robbery";
case 135:
return "fm_content_vehicle_list";
case 136:
return "tuner_sandbox_activity";
case 137:
return "fm_content_auto_shop_delivery";
case 138:
return "fm_content_payphone_hit";
case 139:
return "fm_content_security_contract";
case 140:
return "fm_content_vip_contract_1";
case 141:
return "fm_content_metal_detector";
case 142:
return "am_agency_suv";
case 143:
return "fm_content_phantom_car";
case 144:
return "fm_content_slasher";
case 145:
return "fm_content_sightseeing";
case 146:
return "fm_content_smuggler_trail";
case 148:
return "fm_content_skydive";
case 149:
return "fm_content_cerberus";
case 147:
return "fm_content_smuggler_plane";
case 150:
return "fm_content_parachuter";
case 152:
return "fm_content_bar_resupply";
case 153:
return "fm_content_bike_shop_delivery";
case 154:
return "fm_content_clubhouse_contracts";
case 155:
return "fm_content_cargo";
case 156:
return "fm_content_export_cargo";
case 157:
return "fm_content_ammunation";
case 158:
return "fm_content_gunrunning";
case 159:
return "fm_content_source_research";
case 160:
return "fm_content_club_management";
case 161:
return "fm_content_club_odd_jobs";
case 162:
return "fm_content_club_source";
case 163:
return "fm_content_convoy";
case 164:
return "fm_content_robbery";
case 165:
return "fm_content_acid_lab_setup";
case 166:
return "fm_content_acid_lab_source";
case 167:
return "fm_content_acid_lab_sell";
case 168:
return "fm_content_drug_lab_work";
case 169:
return "fm_content_stash_house";
case 170:
return "fm_content_taxi_driver";
case 171:
return "fm_content_xmas_mugger";
case 172:
return "fm_content_bank_shootout";
default:
}
return "";
}


bool func_809(int iParam0){
return iParam0==998;
}


char* func_810(){
if(func_811()){
return "fm_mission_controller";
}
return "fm_mission_controller_2020";
}

int func_811(){
if(func_812(2)){
return 0;
}
return 1;
}


bool func_812(int iParam0){
return Global_4718592.f_166302 >=iParam0;
}


bool func_813(){
return Global_2683864.f_693;
}

int func_814(){
if(Global_1056949 > -1 && Global_1056949 < 10){
return 1;
}else{
return 1;
}
return 0;
}


void func_815(){
int iVar0;
if(Global_4980736.f_84915 > 5){
Global_4980736.f_84915=5;
}
iVar0=0;
while (iVar0 < Global_4980736.f_84915){
if(func_272(Local_180.f_269[iVar0])){
if(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_180.f_269[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_180.f_269[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_180.f_269[iVar0]), 1);
VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_180.f_269[iVar0]), 0);
}}
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_180.f_275[iVar0], 0);
iVar0++;
}}


void func_816(){
int iVar0;
iVar0=func_817(40);
Global_2645068[iVar0 /*83*/]=40;
StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_817(int iParam0){
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

int func_818(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_819(iParam0, iParam1);
}

int func_819(int iParam0, int iParam1){
if(func_831(14) && !func_830(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32414 !=0 && !Global_78558){
return 0;
}
if(func_829(&Global_4542597)){
if(func_827(&Global_4542597, iParam0)){
return 0;
}
if(func_820(&Global_4542597, iParam0)){
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

int func_820(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_831(14) && !func_830(iParam1)){
return 0;
}
if(func_827(uParam0, iParam1)){
return 0;
}
if(func_826(uParam0) < 0f){
func_825(uParam0, 0);
}
func_823(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_821(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_821(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_831(14) && !func_830(iParam1)){
return 0;
}
if(func_827(uParam0, iParam1)){
return 0;
}
if(func_826(uParam0) < 0f){
func_825(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_822(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_822(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_823(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_824(uParam0, iVar0);
iVar0++;
}
func_825(uParam0, (Global_4542596 - 0.5f));
}


void func_824(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_825(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_826(var uParam0){
return uParam0->f_80;
}


bool func_827(var uParam0, int iParam1){
return func_828(uParam0, iParam1) !=-1;
}

int func_828(var uParam0, int iParam1){
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


bool func_829(var uParam0){
return uParam0->f_79==1;
}

int func_830(int iParam0){
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


bool func_831(int iParam0){
return Global_43257==iParam0;
}


void func_832(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=Global_2850651[iParam0 /*3*/][func_30(iParam2)];
STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}


void func_833(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5){
if(iParam4 || bParam1){
if((((((iParam0 !=87 && iParam0 !=89) && iParam0 !=88) && iParam0 !=13) && iParam0 !=14) && iParam0 !=15) && iParam0 !=16){
if(iParam0 !=71 && iParam0 !=72){
func_857(1239, iParam5);
}}else{
func_857(1239, iParam5);
}}
if(bParam1){
if(!func_858(iParam0, iParam5)){
func_854(iParam0, 1, iParam5);
}
if(iParam2 && iParam0 < 129){
if(func_852(iParam0)==0){
func_846(12, func_851(iParam0, 3), func_850(iParam0, 3), func_849(iParam0, 3), func_848(iParam0, 3), -1, 0, 0, 0, -1, 0);
func_845(iParam0, 1);
}}
if(bParam3){
func_840(iParam0, 1, iParam5);
}
if(Global_1653913.f_1043==0){
Global_1653913.f_1044=iParam0;
}}else{
if(func_858(iParam0, iParam5)){
func_854(iParam0, 0, iParam5);
func_510(1239, -1, iParam5);
}
if(iParam0 < 129){
if(func_852(iParam0)==1){
func_845(iParam0, 0);
}}
if(func_839(iParam0, iParam5)){
func_834(iParam0, 0, iParam5);
}}}


void func_834(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_839(iParam0, iParam2)){
func_835(iParam0, 1, iParam2);
}}elseif(func_839(iParam0, iParam2)){
func_835(iParam0, 0, iParam2);
}}


void func_835(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_838(iParam0, iParam2);
iVar1=iParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_328(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_328(iVar1));
}
if(!func_837(0)){
iVar2=func_836(iParam0);
if(iVar2 !=14192){
func_507(iVar2, iVar0, iParam2, 1, 0);
}}}}

int func_836(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=func_331(iVar0);
if((func_103()==0 || func_760()==0) || (func_103()==999 && func_760()==999)){
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
if(func_103()==2 && func_760()==2){
return 14192;
}
return 14192;
}


bool func_837(bool bParam0){
if(bParam0){}
return Global_1575035;
}

int func_838(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_836(iParam0);
if(iVar0==14192){
if(func_103()==2 && func_760()==2){
return 0;
}else{
return 0;
}}
iVar1=func_304(iVar0, iParam1, 0);
return iVar1;
}

int func_839(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(iParam0==-1){
return 0;
}
uVar0=func_838(iParam0, iParam1);
iVar1=func_328(iParam0);
if(iVar1 < 0 || iVar1 >=32){
return 0;
}
return MISC::IS_BIT_SET(uVar0, iVar1);
}


void func_840(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_844(iParam0)){
func_841(iParam0, 1, iParam2);
}}elseif(func_844(iParam0)){
func_841(iParam0, 0, iParam2);
}}


void func_841(var uParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_843(uParam0);
iVar1=uParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_328(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_328(iVar1));
}
func_507(func_842(uParam0), iVar0, iParam2, 1, 0);
}}

int func_842(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_331(iVar0);
if((func_103()==0 || func_760()==0) || (func_103()==999 && func_760()==999)){
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
return 14192;
}

int func_843(var uParam0){
int iVar0;
iVar0=func_304(func_842(uParam0), -1, 0);
return iVar0;
}


bool func_844(var uParam0){
var uVar0;
int iVar1;
uVar0=func_843(uParam0);
iVar1=uParam0;
return MISC::IS_BIT_SET(uVar0, func_328(iVar1));
}


void func_845(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 > -1){
if(bParam1){
MISC::SET_BIT(&(Global_2803655.f_1032[func_331(iVar0)]), func_328(iVar0));
}else{
MISC::CLEAR_BIT(&(Global_2803655.f_1032[func_331(iVar0)]), func_328(iVar0));
}}}


void func_846(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10){
int iVar0;
iVar0=func_847(&Global_1662547);
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

int func_847(var uParam0){
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


char* func_848(int iParam0, int iParam1){
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


char* func_849(int iParam0, int iParam1){
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


char* func_850(int iParam0, int iParam1){
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


char* func_851(int iParam0, int iParam1){
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

int func_852(int iParam0){
var uVar0;
int iVar1;
uVar0=func_853(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_328(iVar1));
}


var func__853(int iParam0){
var uVar0;
uVar0=Global_2803655.f_1032[func_331(iParam0)];
return uVar0;
}


void func_854(int iParam0, bool bParam1, int iParam2){
int iVar0;
int iVar1;
if(func_856(iParam0)==14192){
return;
}
iVar0=func_855(iParam0, -1);
iVar1=iParam0;
if(iVar1 > -1){
if(bParam1){
MISC::SET_BIT(&iVar0, func_328(iVar1));
}else{
MISC::CLEAR_BIT(&iVar0, func_328(iVar1));
}
func_507(func_856(iParam0), iVar0, iParam2, 1, 0);
}}

int func_855(var uParam0, int iParam1){
int iVar0;
iVar0=func_304(func_856(uParam0), iParam1, 0);
return iVar0;
}

int func_856(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_331(iVar0);
if((func_103()==0 || func_760()==0) || (func_103()==999 && func_760()==999)){
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


void func_857(int iParam0, int iParam1){
int iVar0;
iVar0=func_304(iParam0, func_30(iParam1), 0);
iVar0++;
if(!func_511(iParam0)){
func_507(iParam0, iVar0, iParam1, 1, 0);
}else{
func_508(iParam0, iVar0, iParam1, 1);
}}

int func_858(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_856(iParam0)==14192){
return 0;
}
uVar0=func_855(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_328(iVar1));
}


void func_859(){
switch (Local_180.f_257){
case joaat("g_m_y_mexgoon_01"):
case joaat("g_m_y_mexgoon_02"):
Global_2793046.f_242.f_7[0]++;
if(Global_2793046.f_242.f_7[0] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB0", 72, 1);
Global_2793046.f_242.f_7[0]=0;
}
break;
case joaat("g_m_y_lost_01"):
Global_2793046.f_242.f_7[1]++;
if(Global_2793046.f_242.f_7[1] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB1", 70, 1);
Global_2793046.f_242.f_7[1]=0;
}
break;
case joaat("g_m_y_ballaorig_01"):
Global_2793046.f_242.f_7[2]++;
if(Global_2793046.f_242.f_7[2] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB2", 137, 1);
Global_2793046.f_242.f_7[2]=0;
}
break;
case joaat("g_m_y_famca_01"):
Global_2793046.f_242.f_7[3]++;
if(Global_2793046.f_242.f_7[3] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB3", 71, 1);
Global_2793046.f_242.f_7[3]=0;
}
break;
case joaat("g_m_y_korean_02"):
Global_2793046.f_242.f_7[4]++;
if(Global_2793046.f_242.f_7[4] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB4", 137, 1);
Global_2793046.f_242.f_7[4]=0;
}
break;
case joaat("a_m_m_hillbilly_02"):
Global_2793046.f_242.f_7[5]++;
if(Global_2793046.f_242.f_7[5] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB5", 137, 1);
Global_2793046.f_242.f_7[5]=0;
}
break;
case joaat("g_m_y_salvagoon_01"):
Global_2793046.f_242.f_7[6]++;
if(Global_2793046.f_242.f_7[6] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB6", 137, 1);
Global_2793046.f_242.f_7[6]=0;
}
break;
case joaat("mp_g_m_pros_01"):
Global_2793046.f_242.f_7[7]++;
if(Global_2793046.f_242.f_7[7] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB7", 73, 1);
Global_2793046.f_242.f_7[7]=0;
}
break;
case joaat("g_m_m_armgoon_01"):
Global_2793046.f_242.f_7[8]++;
if(Global_2793046.f_242.f_7[8] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB8", 137, 1);
Global_2793046.f_242.f_7[8]=0;
}
break;
case joaat("g_m_m_chigoon_01"):
Global_2793046.f_242.f_7[9]++;
if(Global_2793046.f_242.f_7[9] >=5){
func_860(PLAYER::PLAYER_ID(), "GHO_GANGB9", 137, 1);
Global_2793046.f_242.f_7[9]=0;
}
break;
}}


void func_860(bool bParam0, char* sParam1, int iParam2, bool bParam3){
if(!func_650(29, 0, 0)){
return;
}
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 6)){
return;
}
if(func_877(bParam0)){
return;
}
Global_2793046.f_4564=bParam0;
func_874(func_5(1, 1), 1, bParam0, 1);
if(bParam3){
func_861(iParam2, sParam1, 0, 0, -99);
}}


void func_861(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4){
func_862(1, uParam0, sParam1, sParam2, bParam3, iParam4);
}


void func_862(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5){
var uVar0;
bool bVar1;
uVar0=uParam1;
bVar1=false;
func_863(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}


void func_863(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6){
int iVar0;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15){
return;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31){
return;
}}
iVar0=func_872();
if(iVar0==-1){
return;
}
func_871(iVar0);
func_870(iVar0, uParam0);
func_869(iVar0, uParam2, bParam3);
func_868(iVar0, sParam1);
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6==-99){
return;
}
func_867(iVar0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
func_865(iVar0, sParam4, bParam5);
}
if(!iParam6==-99){
func_864(iVar0, iParam6);
}}


void func_864(int iParam0, int iParam1){
Global_1649046.f_59[iParam0 /*16*/].f_15=iParam1;
}


void func_865(int iParam0, char* sParam1, bool bParam2){
StringCopy(&(Global_1649046.f_59[iParam0 /*16*/].f_7), sParam1, 32);
if(!bParam2){
return;
}
func_866(iParam0);
}


void func_866(int iParam0){
MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 5);
}


void func_867(int iParam0){
MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 4);
}


void func_868(int iParam0, char* sParam1){
struct<4> Var0;
StringCopy(&Var0, sParam1, 16);
Global_1649046.f_59[iParam0 /*16*/].f_3={
Var0 
};
}


void func_869(int iParam0, var uParam1, bool bParam2){
Global_1649046.f_59[iParam0 /*16*/].f_2=uParam1;
if(bParam2){
MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 2);
MISC::CLEAR_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 3);
}else{
MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 3);
MISC::CLEAR_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 2);
}}


void func_870(int iParam0, var uParam1){
Global_1649046.f_59[iParam0 /*16*/].f_1=uParam1;
}


void func_871(int iParam0){
MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), false);
}

int func_872(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 8){
if(!func_873(iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_873(int iParam0){
return MISC::IS_BIT_SET(Global_1649046.f_59[iParam0 /*16*/], 0);
}


void func_874(int iParam0, int iParam1, int iParam2, int iParam3){
struct<6> Var0;
Var0.f_0=1409829639;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_3=iParam1;
Var0.f_5=iParam3;
Var0.f_2=iParam2;
if(!iParam0==0){
if(iParam3==0){
Global_2684801.f_4317[Var0.f_3]=0;
func_876(&(Global_2684801.f_4317.f_80[iParam1 /*2*/]), 1, 0);
Global_2684801.f_4317.f_478=NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_875(), -1, 0);
}else{
Global_2793046.f_4564.f_1=0;
func_876(&(Global_2793046.f_4564.f_2), 0, 0);
}
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 6, iParam0);
}}


char* func_875(){
switch (Global_2697021){
case 0:
return "freemode";
default:
}
return "freemode";
}


void func_876(var uParam0, bool bParam1, bool bParam2){
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

int func_877(int iParam0){
if(Global_1835504.f_4[iParam0 /*3*/]==1){
return 1;
}
return 0;
}


void func_878(){
if(!func_884()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_879();
}


void func_879(){
func_881();
func_880(0);
}


void func_880(bool bParam0){
bool bVar0;
bVar0=NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
Global_1574757=20;
StringCopy(&(Global_1574757.f_1), "", 32);
Global_1574757.f_9=0;
if(bVar0){
Global_1574757.f_10=NETWORK::GET_NETWORK_TIME();
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}
StringCopy(&(Global_1574757.f_12), "", 16);
StringCopy(&(Global_1574757.f_16), "", 64);
StringCopy(&(Global_1574757.f_32), "", 64);
Global_1574757.f_52=0;
Global_1574757.f_53=0;
Global_1574757.f_54=0;
Global_1574757.f_55=-1;
Global_1574757.f_56=0;
Global_1574757.f_59=0;
if(bParam0){
return;
}}


void func_881(){
if(!func_883()){}
if(func_884()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_882();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_882(){
switch (Global_1574757){
case 20:
return;
case 0:
return;
case 1:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
return;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
return;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 6:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 8:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
case 12:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 13:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
return;
case 14:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 15:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
return;
case 17:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
return;
case 16:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
return;
case 19:
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
return;
case 18:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
return;
default:
}}

int func_883(){
if(!func_884()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_882();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_884(){
if(Global_1574757==20){
return 0;
}
return 1;
}


void func_885(){
int iVar0;
var uVar1;
uVar1=func_902();
iVar0=0;
while (iVar0 < Global_4980736.f_102382){
func_890(iVar0);
func_886(iVar0, uVar1);
iVar0++;
}}


void func_886(int iParam0, var uParam1){
func_887(Local_180.f_5[iParam0], &(Local_194[iParam0 /*8*/]), -1082130432, 0, uParam1, 0, 0, -1, -1, 1, 0, 0);
}


void func_887(var uParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0)){
if(func_837(0)){
Global_2672505=PLAYER::PLAYER_ID();
}
if(bParam3){
func_889(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2672505, uParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}else{
func_889(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2672505, uParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
}}elseif(HUD::DOES_BLIP_EXIST(*uParam1)){
func_888(uParam1);
}}


void func_888(var uParam0){
bool bVar0;
struct<8> Var1;
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
bVar0=true;
}
if(HUD::DOES_BLIP_EXIST(uParam0->f_1)){
HUD::REMOVE_BLIP(&(uParam0->f_1));
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_7)){
if(!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0)){
if(HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7)){
HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
}}
bVar0=true;
}
if(bVar0){
*uParam0={
Var1 
};
}}

int func_889(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12){
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
if(PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11){
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
HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, uParam4);
HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, uParam5);
*uParam1=HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
if(!iParam9==-1 || uParam12){
if(HUD::DOES_BLIP_EXIST(*uParam1)){
if(!iParam8==-1){
HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
if(bParam10){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
}
else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
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


void func_890(int iParam0){
var uVar0;
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_180.f_5[iParam0])){
if(!MISC::IS_BIT_SET(Local_214.f_0, (0 + iParam0))){
if(ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]), 0)){
if(PLAYER::PLAYER_ID()==NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_180.f_5[iParam0], &uVar0)){
Local_214.f_1++;
Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_4++;
func_510(1250, 1, -1);
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]), 1)) < 4f){
Local_214.f_3++;
Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6++;
}}
if(func_901(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]))){
Local_214.f_2++;
Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_5++;
}
func_891(0, NETWORK::NET_TO_PED(Local_180.f_5[iParam0]), "XPT_KAIE", -1859646258, 41933259, round((10f * Global_262145.f_4235)), 1, -1, 0, 0, 0);
MISC::SET_BIT(&Local_214, (0 + iParam0));
}}}elseif(!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_180.f_5[iParam0]))){
MISC::CLEAR_BIT(&Local_214, (0 + iParam0));
}}}

int func_891(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_892(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_892(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10){
int iVar0;
var uVar1;
iVar0=func_492(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
uVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_897(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
}}}else{
func_893(iParam1, iVar0, sParam8, uParam10);
}
return iVar0;
}


void func_893(int iParam0, int iParam1, char* sParam2, var uParam3){
struct<3> Var0;
Var0={
func_895(iParam0, 1) 
};
if(iParam0==func_280(PLAYER::PLAYER_PED_ID())){
func_894(1);
}
func_897(Var0, iParam1, 0, sParam2, uParam3);
}


void func_894(int iParam0){
Global_2672505.f_1682=iParam0;
}


Vector3 func__895(int iParam0, bool bParam1){
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
if(iParam0==func_896(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
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
fVar2=ENTITY::GET_ENTITY_HEADING(iParam0);
if(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
fVar2=Var1.f_2;
}}
MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
if(bParam1){
fVar5=(Var4.f_2 + 0.18f);
}else{
fVar5=(Var3.f_2 + 0.18f);
}
Var0={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) 
};
return Var0;
}

int func_896(var uParam0){
return uParam0;
}


void func_897(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4){
int iVar0;
int iVar1;
if(iParam1 !=0){
iVar1=-1;
iVar0=0;
while (iVar0 < 20){
if(Global_2672505.f_1081[iVar0 /*30*/].f_6==0 || Global_2672505.f_1081[iVar0 /*30*/].f_6==7){
iVar1=iVar0;
iVar0=20;
}
iVar0++;
}
if(iVar1 !=-1){
Global_2672505.f_1081[iVar1 /*30*/]={
Param0 
};
Global_2672505.f_1081[iVar1 /*30*/].f_6=1;
Global_2672505.f_1081[iVar1 /*30*/].f_4=func_900(Global_2672505.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672505.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672505.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672505.f_1081[iVar1 /*30*/].f_9=func_899();
Global_2672505.f_1081[iVar1 /*30*/].f_10=func_898();
StringCopy(&(Global_2672505.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672505.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam4);
}}}

int func_898(){
if(Global_2672505.f_1682){
Global_2672505.f_1682=0;
return 1;
}
Global_2672505.f_1682=0;
return 0;
}


var func__899(){
var uVar0;
uVar0=Global_2672505.f_1684;
Global_2672505.f_1684=1;
return uVar0;
}


float func_900(struct<3> Param0, var uParam1, var uParam2){
float fVar0;
float fVar1;
float fVar2;
float fVar3;
fVar0=MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
if(fVar0 < 5f){
*uParam1=0.402f;
*uParam2=0.476f;
return 0f;
}
if(fVar0 > 20f){
*uParam1=0.212f;
*uParam2=0.286f;
return 1f;
}
fVar1=(1f - ((fVar0 - 5f) / (20f - 5f)));
fVar2=(fVar1 * (0.402f - 0.212f));
fVar3=(fVar1 * (0.476f - 0.286f));
*uParam1=(fVar2 + 0.212f);
*uParam2=(fVar3 + 0.286f);
return fVar1;
}

int func_901(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
iVar0=-1;
if(ENTITY::IS_ENTITY_DEAD(iParam0, 0) || PED::IS_PED_INJURED(iParam0)){
if(PED::WAS_PED_KILLED_BY_STEALTH(iParam0) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0)){
return 0;
}
if(!PED::GET_PED_LAST_DAMAGE_BONE(iParam0, &iVar0)){
return 0;
}
return (iVar0==31086 || iVar0==39317);
}
return 0;
}

int func_902(){
switch (Local_180.f_290){
case 0:
if((Local_180.f_266 - Local_180.f_265) <=4){
return 1;
}
break;
}
return 0;
}


void func_903(){
func_885();
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
func_909();
}
func_905();
switch (Local_180.f_290){
case 0:
break;
}
if(func_239() >=5){
func_904(func_239());
}}


void func_904(int iParam0){
Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_2=iParam0;
}


void func_905(){
if(!MISC::IS_BIT_SET(uLocal_188, 13)){
if(func_586()){
if(!func_40(&uLocal_199)){
func_38(&uLocal_199, 0, 0);
func_878();
}elseif(func_37(&uLocal_199, 7500, 0) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
MISC::SET_BIT(&uLocal_188, 13);
if(!func_1679(PLAYER::PLAYER_ID())){
if(func_591(PLAYER::PLAYER_ID())==3){
func_908("GB_EV_GA_UI", -1);
}else{
func_908("FM_EV_GA_UI", -1);
func_906(1);
}}}}}}


void func_906(int iParam0){
HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
if(iParam0 && !func_907()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
}}


bool func_907(){
return Global_2672505.f_2514[0 /*80*/].f_1 !=0;
}


void func_908(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}


void func_909(){
struct<2> Var0;
if(func_608(NETWORK::PARTICIPANT_ID()) > 2 && func_608(NETWORK::PARTICIPANT_ID()) <=3){
if(!func_586()){
if(!MISC::IS_BIT_SET(uLocal_188, 0)){
if(!func_916()){
StringCopy(&Var0, "GHO_MAIN", 16);
StringIntConCat(&Var0, Local_180.f_290, 16);
func_910(&Var0, 0);
MISC::SET_BIT(&uLocal_188, false);
MISC::CLEAR_BIT(&uLocal_188, 10);
MISC::CLEAR_BIT(&uLocal_188, 2);
}}elseif(Local_180.f_290==0 && (Local_180.f_266 - Local_180.f_265) <=1){
func_910("GHO_REMAIN", 0);
}}}elseif(func_608(NETWORK::PARTICIPANT_ID())==4){
if(!MISC::IS_BIT_SET(uLocal_188, 2)){
func_878();
MISC::SET_BIT(&uLocal_188, 2);
MISC::CLEAR_BIT(&uLocal_188, false);
MISC::CLEAR_BIT(&uLocal_188, 10);
}}}


void func_910(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_914(sParam0)){
return;
}
func_879();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_913();
func_912(bParam1);
func_911();
}


void func_911(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_912(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_913(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


bool func_914(char* sParam0){
if(!func_884()){
return 0;
}
if(Global_1574757==11){
return func_915(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_915(char* sParam0){
if(!func_884()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_916(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_917(){
struct<14> Var0;
if(func_239() > 3){
func_904(func_239());
}
func_885();
func_905();
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
if(!MISC::IS_BIT_SET(uLocal_188, 19)){
if(!func_586()){
func_930(55, "GHO_NAME", 0, 1, -1, 2, 1, 0);
}
MISC::SET_BIT(&uLocal_188, 19);
func_929();
func_926(2, 1, 1);
if(!func_586()){
}
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 44, 1);
}
Var0.f_2=1831867170;
func_925(Var0, func_5(1, 1));
}
func_923();
func_909();
if(MISC::IS_BIT_SET(uLocal_188, 15)){
func_922(0, 0);
MISC::CLEAR_BIT(&uLocal_188, 15);
}}elseif(!MISC::IS_BIT_SET(uLocal_188, 15)){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) !=0){
func_922(1, 0);
}
Local_187[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_3++;
MISC::SET_BIT(&uLocal_188, 15);
}
switch (Local_180.f_290){
case 0:
func_918();
break;
}}


void func_918(){
if(!func_586()){
func_919((Local_180.f_266 - Local_180.f_265), Local_180.f_266, "GHO_KILLB", -1, 1, 2, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
}}


void func_919(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_921(4, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655472.f_1=1;
func_920(4, bVar0);
Global_1655472.f_3347[bVar0]=iParam0;
Global_1655472.f_3347.f_172[bVar0]=iParam1;
StringCopy(&(Global_1655472.f_3347.f_11[bVar0 /*16*/]), sParam2, 64);
Global_1655472.f_3347.f_183[bVar0]=iParam3;
Global_1655472.f_3347.f_216[bVar0]=iParam5;
Global_1655472.f_3347.f_194[bVar0]=iParam4;
Global_1655472.f_3347.f_227[bVar0]=iParam6;
Global_1655472.f_3347.f_270[bVar0]=iParam7;
Global_1655472.f_3347.f_281[bVar0]=iParam8;
Global_1655472.f_3347.f_292[bVar0]=iParam9;
Global_1655472.f_3347.f_303[bVar0]=iParam10;
Global_1655472.f_3347.f_314[bVar0]=iParam11;
Global_1655472.f_3347.f_325[bVar0]=iParam13;
Global_1655472.f_3347.f_336[bVar0]=iParam14;
Global_1655472.f_3347.f_347[bVar0]=iParam15;
if(((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12){
Global_1655472.f_1172=1;
}}}


void func_920(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), bParam1);
}

int func_921(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}


void func_922(int iParam0, int iParam1){
if(func_177(PLAYER::PLAYER_ID()) || iParam1){
Global_2635559.f_45.f_55=iParam0;
}}


void func_923(){
int iVar0;
struct<2> Var1;
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
if(!func_586()){
if(!MISC::IS_BIT_SET(Global_2793046.f_242, 0)){
iVar0=func_304(1196, -1, 0);
if(((!MISC::IS_BIT_SET(iVar0, 0) || !MISC::IS_BIT_SET(iVar0, 1)) || !MISC::IS_BIT_SET(iVar0, 2)) || !MISC::IS_BIT_SET(iVar0, 3)){
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
if((((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_924()) && !func_307()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_586()){
StringCopy(&Var1, "GHO_HELP", 16);
StringIntConCat(&Var1, Local_180.f_290, 16);
func_607(&Var1, -1);
if(!MISC::IS_BIT_SET(iVar0, 0)){
MISC::SET_BIT(&iVar0, false);
}elseif(!MISC::IS_BIT_SET(iVar0, 1)){
MISC::SET_BIT(&iVar0, true);
}elseif(!MISC::IS_BIT_SET(iVar0, 2)){
MISC::SET_BIT(&iVar0, 2);
}elseif(!MISC::IS_BIT_SET(iVar0, 3)){
MISC::SET_BIT(&iVar0, 3);
}
MISC::SET_BIT(&(Global_2793046.f_242), false);
}}}else{
MISC::SET_BIT(&(Global_2793046.f_242), false);
}}}}}


bool func_924(){
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}


void func_925(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}


void func_926(int iParam0, int iParam1, bool bParam2){
if(func_602()){
if(iParam1==1){
if(Global_2793046.f_4492==-1){
Global_2793046.f_4492=Global_262145.f_27184;
}
func_876(&(Global_2793046.f_4490), 0, 0);
if(bParam2){
if(Global_2793046.f_4495==-1){
Global_2793046.f_4495=Global_262145.f_27185;
}
func_876(&(Global_2793046.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_928(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_928(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_927()) && !func_160(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}


bool func_927(){
return Global_2683864.f_841;
}


void func_928(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_602()){
if(func_1680(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
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


void func_929(){
Global_4543298=1;
}

int func_930(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
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
func_951(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_439(&(Var0.f_69), iParam7);
}
return func_931(&Var0);
}

int func_931(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2836){
return 0;
}}
func_945(uParam0, uParam0->f_17);
func_942(uParam0);
if(func_165()){
func_942(uParam0);
}
if(func_941(uParam0->f_1)){
func_934();
if(Global_2672505.f_2514[0 /*80*/].f_2==0){
Global_2672505.f_2514[0 /*80*/]={
*uParam0 
};
if(func_933(uParam0->f_69, 8192)){
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
func_934();
}
return 1;
}else{
if(uParam0->f_1==1){
func_439(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_933(uParam0->f_69, 128)){
if(func_932(Global_2672505.f_2514[iVar0 /*80*/].f_1)){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_439(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_932(int iParam0){
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


bool func_933(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_934(){
bool bVar0;
if(Global_2672505.f_2837){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_935();
if(bVar0){
Global_78827=0;
}}


void func_935(){
Global_2672505.f_2838=0;
Global_2672505.f_2838.f_582=0;
func_939(&(Global_2672505.f_2838.f_1));
Global_2672505.f_2838.f_1.f_1=0;
func_936(&(Global_2672505.f_2838.f_1), 1);
}


void func_936(var uParam0, int iParam1){
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
if(CAM::IS_SCREEN_FADED_OUT() && !func_938(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_937(0);
}


void func_937(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_938(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_939(var uParam0){
func_940(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_940(var uParam0){
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

int func_941(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


void func_942(var uParam0){
if(func_944(uParam0->f_1)){
uParam0->f_72=func_943();
}}

int func_943(){
return 21;
}

int func_944(int iParam0){
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


void func_945(var uParam0, bool bParam1){
if(func_944(uParam0->f_1)){
uParam0->f_73=1;
}
if(bParam1==func_72() || !func_1680(bParam1, 0, 1)){
return;
}
if(func_932(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_946(bParam1, -2, 0, 0, 0);
}}}

int func_946(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_134(bParam0) && !bParam4){
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
if(((func_134(PLAYER::PLAYER_ID()) || (func_428() && func_950())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
iVar1=func_949();
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_1680(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_459(iParam1, bParam0, 0);
}else{
return func_948(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_948(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_459(iParam1, bParam0, 0);
}else{
return func_947(0, -1, 0);
}}else{
return func_947(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_459(iParam1, bParam0, 0);
}else{
return func_948(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_948(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_947(bool bParam0, int iParam1, bool bParam2){
return func_462(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_948(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
bool bVar1;
bool bVar2;
int iVar3;
int iVar4;
if(iParam2==-2){
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
}else{
iVar0=iParam2;
}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==148){
bVar1=true;
}
bVar2=bParam0;
if(bVar2 > -1){
if(Global_1853910[bVar2 /*862*/]==148){
bVar1=true;
}}
if(!bVar1){
if(iVar0 !=-1){
if(func_475()){
iVar3=func_472(bParam0);
if(!iVar3==-1){
return func_470(iVar3);
}}
if((func_172(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_131(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_466(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_460(1);
}else{
return func_462(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_466(1);
}else{
return func_462(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_472(bParam0);
if(!iVar4==-1){
return func_470(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}


var func__949(){
return Global_2621446.f_2;
}


var func__950(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


void func_951(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_72();
uParam1->f_18=func_72();
uParam1->f_19=func_72();
uParam1->f_20=func_72();
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


void func_952(){
func_885();
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
func_923();
func_909();
}
if(func_239() !=2){
PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
func_904(func_239());
}}


void func_953(){
func_885();
if(func_239() !=1){
func_964(Local_180.f_577, Local_180.f_577.f_3, Local_180.f_577.f_6, 0, 0);
func_955(Local_180.f_563, Local_180.f_563.f_3, Local_180.f_563.f_6, 0, 0);
func_954(Local_180.f_261, 1, 0);
if(func_239() !=2){
PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
}
func_904(func_239());
}}


void func_954(struct<3> Param0, int iParam1, int iParam2){
Global_2635559.f_45.f_49={
Param0 
};
Global_2635559.f_45.f_52=iParam1;
Global_2635559.f_45.f_53=iParam2;
}


void func_955(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4){
func_956(Param0, Param1, uParam2, 2, iParam3, iParam4);
}


void func_956(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5){
struct<12> Var0;
if(func_177(PLAYER::PLAYER_ID()) || uParam5){
if(Var0.f_10==1){
func_963(&Param0, &Param1);
}
Var0={
Param0 
};
Var0.f_3={
Param1 
};
Var0.f_6=uParam2;
Var0.f_10=iParam3;
if(func_958(Var0)){
Global_2635559.f_45.f_64=func_102(PLAYER::PLAYER_ID());
func_957(Var0, iParam4);
}}}


void func_957(struct<12> Param0, int iParam1){
Global_2635559.f_368[iParam1 /*12*/]={
Param0 
};
Global_2635559.f_368[iParam1 /*12*/].f_9=1;
}

int func_958(struct<12> Param0){
struct<12> Var0[1];
int iVar1;
Var0[0 /*12*/]={
Param0 
};
Var0[0 /*12*/].f_9=1;
iVar1=0;
while (iVar1 < 4){
if(Global_2635559.f_45[iVar1 /*12*/].f_9==1){
if(!func_959(Global_2635559.f_45[iVar1 /*12*/], &Var0)){
return 0;
}}
iVar1++;
}
return 1;
}

int func_959(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10){
int iVar0;
iVar0=0;
while (iVar0 < *uParam10){
if((uParam10[iVar0 /*12*/])->f_9){
switch ((uParam10[iVar0 /*12*/])->f_10){
case 0:
switch (Param0.f_10){
case 0:
if(func_962(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
return 0;
}
break;
case 1:
if(func_960(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
return 0;
}
break;
case 2:
break;
}
break;
case 1:
switch (Param0.f_10){
case 0:
if(func_962(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
return 0;
}
break;
case 1:
if(func_960(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
return 0;
}
break;
case 2:
break;
}
break;
case 2:
break;
}}
iVar0++;
}
if(vmag(Param0)==0f){
return 0;
}
return 1;
}


bool func_960(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3){
struct<3> Var0;
struct<3> Var1;
float fVar2;
fVar2=(fParam3 * 0.7071068f);
Var0={
Param2 - Vector(fVar2, fVar2, fVar2) 
};
Var1={
Param2 + Vector(fVar2, fVar2, fVar2) 
};
return func_961(Param0, Param1, Var0, Var1);
}

int func_961(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3){
if(((((Param0.f_0 >=Param2.f_0 && Param0.f_1 >=Param2.f_1) && Param0.f_2 >=Param2.f_2) && Param1.f_0 <=Param3.f_0) && Param1.f_1 <=Param3.f_1) && Param1.f_2 <=Param3.f_2){
return 1;
}
return 0;
}

int func_962(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3){
struct<3> Var0;
Var0={
Param2 - Param0 
};
if((vmag(Var0) + fParam1) < fParam3){
return 1;
}
return 0;
}


void func_963(var uParam0, var uParam1){
struct<3> Var0;
struct<3> Var1;
if(*uParam0 <=*uParam1){
Var0.f_0=*uParam0;
Var1.f_0=*uParam1;
}else{
Var0.f_0=*uParam1;
Var1.f_0=*uParam0;
}
if(uParam0->f_1 <=uParam1->f_1){
Var0.f_1=uParam0->f_1;
Var1.f_1=uParam1->f_1;
}else{
Var0.f_1=uParam1->f_1;
Var1.f_1=uParam0->f_1;
}
if(uParam0->f_2 <=uParam1->f_2){
Var0.f_2=uParam0->f_2;
Var1.f_2=uParam1->f_2;
}else{
Var0.f_2=uParam1->f_2;
Var1.f_2=uParam0->f_2;
}
*uParam0={
Var0 
};
*uParam1={
Var1 
};
}


void func_964(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4){
func_965(Param0, Param1, uParam2, 2, iParam3, iParam4, 0, 0);
}


void func_965(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7){
struct<12> Var0;
if(func_177(PLAYER::PLAYER_ID()) || uParam5){
if(Global_2635559.f_1753){
func_967();
}
if(Var0.f_10==1){
func_963(&Param0, &Param1);
}
Var0={
Param0 
};
Var0.f_3={
Param1 
};
Var0.f_6=uParam2;
Var0.f_10=iParam3;
Var0.f_11=iParam6;
Var0.f_8=iParam7;
if(Var0.f_8 < 0f){
Var0.f_8=0f;
}
Global_2635559.f_45.f_64=func_102(PLAYER::PLAYER_ID());
func_966(Var0, iParam4);
}}


void func_966(struct<12> Param0, int iParam1){
Global_2635559.f_45[iParam1 /*12*/]={
Param0 
};
Global_2635559.f_45[iParam1 /*12*/].f_9=1;
}


void func_967(){
if(func_979() && !func_978()){
func_977();
}
if(func_978()){
func_976();
}else{
func_974();
func_968(0, 0, 0, 0, 0);
Global_2635559.f_1753=0;
Global_2635559.f_1752=0;
}}


void func_968(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
if(Global_2672505.f_1685.f_703.f_16 !=func_72()){
if(MISC::IS_BIT_SET(Global_2657589[Global_2672505.f_1685.f_703.f_16 /*466*/].f_427, 0) && func_969()){
iParam0=23;
}}
if(iParam0 !=18 && iParam0 !=17){
Global_2643290=0;
}
Global_2635559.f_490=iParam0;
Global_2635559.f_490.f_1=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_2635559.f_490.f_2=iParam1;
Global_2635559.f_490.f_3=iParam2;
Global_2635559.f_490.f_4=iParam3;
Global_2635559.f_490.f_5=iParam4;
}

int func_969(){
if((((((func_322(PLAYER::PLAYER_ID())==229 || func_322(PLAYER::PLAYER_ID())==191) || func_973()) || func_972()) || func_971()) || Global_2764908.f_227==1) || (Global_2635559.f_1753 && func_970(PLAYER::PLAYER_ID()))){
return 0;
}
return 1;
}

int func_970(int iParam0){
if(func_594(iParam0)){
return 1;
}
if(func_603(iParam0)){
return 1;
}
return 0;
}


var func__971(){
return Global_2764907;
}


bool func_972(){
return Global_1836591;
}

int func_973(){
if(Global_4718592==6){
return 1;
}
return 0;
}


void func_974(){
if(func_979() && !func_978()){
func_977();
}
func_975();
Global_2635559.f_714=0;
}


void func_975(){
int iVar0;
struct<5> Var1;
Var1.f_4=1065353216;
iVar0=0;
while (iVar0 < 100){
Global_2635559.f_714.f_1[iVar0 /*5*/]={
Var1 
};
iVar0++;
}}


void func_976(){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_714), &(Global_2635559.f_1233), 519);
Global_2635559.f_490={
Global_2635559.f_496 
};
if(SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_714.f_518){
Global_2635559.f_1752=0;
}}


void func_977(){
if(func_978()){
if(Global_2635559.f_714.f_518==Global_2635559.f_1233.f_518){
return;
}}
if(!SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_714.f_518){
MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_1233), &(Global_2635559.f_714), 519);
Global_2635559.f_496={
Global_2635559.f_490 
};
Global_2635559.f_1752=1;
}}

int func_978(){
if((Global_2635559.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_1233.f_518)){
return 1;
}
return 0;
}

int func_979(){
if((Global_2635559.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD()==Global_2635559.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_714.f_518)){
return 1;
}
return 0;
}


void func_980(){
func_885();
if(func_239() !=0){
if(func_981()){
func_904(1);
}}}

int func_981(){
return 1;
if(func_1680(PLAYER::PLAYER_ID(), 1, 1)){
switch (iLocal_213){
case 0:
if(func_606(PLAYER::PLAYER_PED_ID(), 1) && (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())){
func_964(Local_180.f_577, Local_180.f_577.f_3, Local_180.f_577.f_6, 0, 0);
func_955(Local_180.f_563, Local_180.f_563.f_3, Local_180.f_563.f_6, 0, 0);
func_954(Local_180.f_261, 1, 0);
iLocal_213=1;
}else{
return 1;
}
break;
case 1:
if(func_982(0, 1, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0)){
iLocal_213=2;
return 1;
}
break;
case 2:
return 1;
default:
return 1;
}}
return 0;
}

int func_982(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17){
float fVar0;
bool bVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
func_1662();
if(func_533(PLAYER::PLAYER_ID(), 1, 0)){
if(((bParam4 && func_1680(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==1){
}elseif(func_1661()==28){
}else{
return 0;
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, 1);
if(!Global_2635559.f_702==iParam0){
if(bParam15 && Global_2635559.f_702==37){
}elseif(!Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==0){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_703) < func_227(0)){
return 0;
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=0;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==0){
Global_2635559.f_702=iParam0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=2;
if(bParam2){
if(!func_145()){
bParam2=false;
}}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=2;
Global_2635559.f_2478=0;
Global_2635559.f_2479=0;
Global_2635559.f_2477=0;
Global_2635559.f_2878=0;
}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==2){
if(bParam2 || bParam7){
bVar3=true;
}
if(Global_2635559.f_702==11){
Global_2635559.f_706={
Global_2644549 
};
Global_2635559.f_709=Global_2644549.f_5;
Global_2635559.f_2898=Global_2644549.f_26;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=3;
}elseif(func_1456(&(Global_2635559.f_706), &(Global_2635559.f_709), Global_2635559.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=3;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==3){
if(bParam11){
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
func_1451(&iVar2);
}else{
iVar2=func_1450();
func_1449(&iVar2);
}
if(func_145()){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))==Global_2635559.f_45.f_67){
iVar4=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(iVar4==Global_2635559.f_45.f_173){
func_1447();
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}
}}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=4;
}else{
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2)){
func_1430(iVar2);
func_1429(1);
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
}
else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
}}}else{
func_1429(1);
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==4){
if(func_1426()){
if(Global_2635559.f_45.f_65){
if(func_1221(Global_2635559.f_706, Global_2635559.f_706.f_1, func_1422(Global_2635559.f_45.f_67), Global_2635559.f_709, 0)){
Global_2635559.f_704=NETWORK::GET_NETWORK_TIME();
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=5;
}}elseif(func_1220(Global_2635559.f_45.f_67) || Global_2635559.f_45.f_67==0){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==5){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, 1);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=6;
if(Global_2635559.f_45.f_176){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_237=1;
}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_237=0;
}}elseif(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_704) > 5000){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=4;
}elseif(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle"))==7){
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2635559.f_45.f_173, 0)){
func_1038(PLAYER::PLAYER_PED_ID(), Global_2635559.f_45.f_173, -1, 0);
}else{
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=4;
}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==6){
Global_2635559.f_703=NETWORK::GET_NETWORK_TIME();
if(Global_2635559.f_712){
Global_2635559.f_705=NETWORK::GET_NETWORK_TIME();
Global_2635559.f_712=0;
}
if(bParam7){
bVar1=true;
}else{
bVar1=bParam2;
}
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635559.f_705)) >=350){
bVar5=true;
}else{
bVar5=false;
}
if(Global_1836597){
func_1032(Global_2635559.f_706);
}
if(bParam7 && !Global_2672505.f_1024){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar2)){
if((ENTITY::IS_ENTITY_DEAD(iVar2, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0)) || func_273(iVar2)){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
}}}}
if(bVar5){
if(func_1025(Global_2635559.f_706, Global_2635559.f_709, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2635559.f_2898)){
if(bParam15){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=7;
return 0;
}else{
func_1021();
}}}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==7){
if((Global_2635559.f_702==8 && Global_2635559.f_714.f_507) && Global_2635559.f_2878){
func_1021();
}elseif(func_1015(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) || func_1014()){
if(Global_2635559.f_702==8 && !Global_2635559.f_2878){
Global_2635559.f_2878=1;
}else{
Global_2635559.f_702=37;
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=2;
Global_2635559.f_2478=0;
Global_2635559.f_2479=0;
Global_2635559.f_2477=0;
}else{
func_1021();
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==10){
if(vdist(Global_2644549, Global_2635559.f_706) > 0.1f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar2=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2))){
MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2635559.f_706, Global_2635559.f_706.f_1, Global_2635559.f_706.f_2, &fVar0, 0, 0);
if(fVar0==0f || (Global_2635559.f_706.f_2 - fVar0) > 1.5f){
if(vdist(Global_2644549, Global_2635559.f_706) > 15f){
Global_2635559.f_706={
Global_2644549 
};
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2)){
ENTITY::SET_ENTITY_COORDS(iVar2, Global_2635559.f_706, Global_2635559.f_706.f_1, (fVar0 + func_1013(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}else{
Global_2635559.f_706.f_2=(Global_2635559.f_706.f_2 + 1f);
}
}
else{
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2)){
ENTITY::SET_ENTITY_COORDS(iVar2, Global_2635559.f_706, Global_2635559.f_706.f_1, (fVar0 + func_1013(ENTITY::GET_ENTITY_MODEL(iVar2))), 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 1084227584);
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}else{
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}}
if(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==11){
if(!bParam14){
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2635559.f_45.f_173)){
ENTITY::SET_ENTITY_VISIBLE(Global_2635559.f_45.f_173, true, 0);
}}
if(bParam2 || bParam7){
if(iParam9 > 0){
func_1005(iParam9, 0, 0);
}}
func_1003(func_124(PLAYER::PLAYER_ID()), 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_173)){
func_1447();
}
if(!(func_1220(Global_2635559.f_45.f_67) || Global_2635559.f_45.f_67==0) && !Global_2635559.f_490.f_5){
func_1002(0, 0);
}
func_1000(0, 0);
if(bParam10){
func_999();
}
func_998();
func_984();
if(bParam13){
func_983();
}
func_567();
return 1;
}}elseif(!Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217==0){
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
func_1449(&(Global_2635559.f_45.f_173));
func_567();
}
Global_2635559.f_703=NETWORK::GET_NETWORK_TIME();
return 0;
}


void func_983(){
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


void func_984(){
int iVar0;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_272.f_20=-1;
Global_2635559.f_2875=-1f;
iVar0=0;
while (iVar0 < 42){
func_986(iVar0);
iVar0++;
}
if(func_985(PLAYER::PLAYER_ID(), 0)){
Global_2802791.f_89=1;
Global_2802791.f_90=NETWORK::GET_NETWORK_TIME();
}}

int func_985(bool bParam0, bool bParam1){
if(func_1680(bParam0, 0, 1)){
if(!bParam1){
if(!Global_2657589[bParam0 /*466*/].f_272.f_14==-1){
return 1;
}}elseif(!Global_2657589[bParam0 /*466*/].f_272.f_16==-1){
return 1;
}}
return 0;
}


void func_986(int iParam0){
bool bVar0;
float fVar1;
int iVar2;
bVar0=PLAYER::PLAYER_ID();
if(Global_2657589[bVar0 /*466*/].f_272.f_14 !=-1){
if(func_997(Global_2657589[bVar0 /*466*/].f_272.f_14)){
if(!func_993(PLAYER::PLAYER_ID(), Global_2657589[bVar0 /*466*/].f_272.f_14, 0, 0)){
Global_2657589[bVar0 /*466*/].f_272.f_14=-1;
}}else{
Global_2657589[bVar0 /*466*/].f_272.f_14=-1;
}}
if(Global_2657589[bVar0 /*466*/].f_272.f_16 !=-1){
if(func_997(Global_2657589[bVar0 /*466*/].f_272.f_16)){
if(!func_993(PLAYER::PLAYER_ID(), Global_2657589[bVar0 /*466*/].f_272.f_16, 0, 1)){
Global_2657589[bVar0 /*466*/].f_272.f_16=-1;
}}else{
Global_2657589[bVar0 /*466*/].f_272.f_16=-1;
}}
if(Global_2657589[bVar0 /*466*/].f_272.f_15 !=-1){
if(!func_993(PLAYER::PLAYER_ID(), Global_2657589[bVar0 /*466*/].f_272.f_15, 0, 0)){
Global_2657589[bVar0 /*466*/].f_272.f_15=-1;
}}
if(func_997(iParam0)){
if(func_993(PLAYER::PLAYER_ID(), iParam0, 0, 0)){
if(!Global_2657589[bVar0 /*466*/].f_272.f_14==iParam0){
Global_2657589[bVar0 /*466*/].f_272.f_14=iParam0;
}}
if(func_993(PLAYER::PLAYER_ID(), iParam0, 0, 1)){
if(!Global_2657589[bVar0 /*466*/].f_272.f_16==iParam0){
Global_2657589[bVar0 /*466*/].f_272.f_16=iParam0;
}}
iVar2=floor((to_float(iParam0) / 32f));
if(func_988(PLAYER::PLAYER_ID(), iParam0, 1120403456)){
MISC::SET_BIT(&(Global_2657589[bVar0 /*466*/].f_272.f_17[iVar2]), (iParam0 - iVar2 * 32));
}else{
MISC::CLEAR_BIT(&(Global_2657589[bVar0 /*466*/].f_272.f_17[iVar2]), (iParam0 - iVar2 * 32));
}
fVar1=vdist(func_987(iParam0), func_124(PLAYER::PLAYER_ID()));
if(iParam0==Global_2657589[bVar0 /*466*/].f_272.f_20){
Global_2635559.f_2875=fVar1;
}elseif(fVar1 < Global_2635559.f_2875 || Global_2635559.f_2875 <=0f){
Global_2635559.f_2875=fVar1;
Global_2657589[bVar0 /*466*/].f_272.f_20=iParam0;
}}elseif(iParam0==Global_2657589[bVar0 /*466*/].f_272.f_20){
Global_2657589[bVar0 /*466*/].f_272.f_20=-1;
Global_2635559.f_2875=-1f;
}
if(func_993(PLAYER::PLAYER_ID(), iParam0, 0, 0)){
if(!Global_2657589[bVar0 /*466*/].f_272.f_15==iParam0){
Global_2657589[bVar0 /*466*/].f_272.f_15=iParam0;
}}}


Vector3 func__987(int iParam0){
return Global_4280768[iParam0 /*45*/].f_4;
}

int func_988(bool bParam0, int iParam1, float fParam2){
if(func_992()){
return 1;
}
if(func_991(iParam1)){
if(ENTITY::DOES_ENTITY_EXIST(func_990())){
if(func_989(ENTITY::GET_ENTITY_COORDS(func_990(), 1), iParam1, fParam2) && Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_97==8){
return 1;
}}
return func_989(func_124(bParam0), iParam1, fParam2);
}
return 0;
}

int func_989(struct<3> Param0, int iParam1, float fParam2){
if(func_991(iParam1)){
if(vdist2(Param0, func_987(iParam1)) < (fParam2 * fParam2)){
return 1;
}}
return 0;
}

int func_990(){
if(PLAYER::PLAYER_ID() !=-1){
return Global_1962996.f_20;
}
return -1;
}

int func_991(int iParam0){
if(iParam0 > -1 && iParam0 < 42){
return 1;
}
return 0;
}

int func_992(){
if(!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_837(0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_174409[0 /*24*/].f_17, 0)){
return 1;
}
return 0;
}

int func_993(bool bParam0, int iParam1, float fParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
if(func_991(iParam1)){
if(!bParam3){
return func_994(func_124(bParam0), iParam1, fParam2);
}elseif(func_994(func_124(bParam0), iParam1, fParam2)){
return 1;
}elseif(func_994(func_124(bParam0), iParam1, 15f)){
if(func_1680(bParam0, 1, 1)){
iVar0=PLAYER::GET_PLAYER_PED(bParam0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)){
iVar1=PED::GET_VEHICLE_PED_IS_USING(iVar0);
if(ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(DECORATOR::DECOR_EXIST_ON(iVar1, "PYV_Yacht")){
iVar2=DECORATOR::DECOR_GET_INT(iVar1, "PYV_Yacht");
if(iVar2==iParam1){
return 1;
}}
}}}}}}
return 0;
}

int func_994(struct<3> Param0, int iParam1, float fParam2){
struct<3> Var0;
struct<3> Var1;
float fVar2;
if(func_991(iParam1)){
func_995(iParam1, &Var0, &Var1, &fVar2, fParam2);
return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, 0, 1);
}
return 0;
}


void func_995(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4){
struct<3> Var0;
float fVar1;
struct<3> Var2;
Var0={
func_987(iParam0) 
};
fVar1=func_996(iParam0);
Var2={
0f, 1f, 0f 
};
func_66(&Var2, 0f, 0f, fVar1);
Var2={
Var2 / FtoV(vmag(Var2)) 
};
*uParam1={
Var0 + Var2 * FtoV((0.5f * (120f + fParam4))) 
};
uParam1->f_2=(uParam1->f_2 - (0.5f * (34f + fParam4)));
*uParam2={
Var0 - Var2 * FtoV((0.5f * (120f + fParam4))) 
};
uParam2->f_2=(uParam2->f_2 + (0.5f * (34f + fParam4)));
*uParam3=(16.17f + fParam4);
}


var func__996(int iParam0){
return Global_4280768[iParam0 /*45*/].f_7;
}

int func_997(int iParam0){
if(func_991(iParam0)){
return Global_2802791.f_2[iParam0];
}
return 0;
}


void func_998(){
Global_1889711=-1;
Global_1889712=-1;
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_464=-1;
Global_1889717=0;
}


void func_999(){
Global_2635559.f_5=1;
}


void func_1000(float fParam0, int iParam1){
struct<3> Var0;
if(!func_1001() || iParam1){
if(CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
Var0={
func_124(PLAYER::PLAYER_ID()) 
};
if(Var0.f_2 > -80f){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
}}}}}


bool func_1001(){
return Global_1575060;
}


void func_1002(int iParam0, bool bParam1){
struct<3> Var0;
float fVar1;
float fVar2;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
Var0.f_2=(Var0.f_2 + (0.3f * IntToFloat(Global_2635559.f_710)));
if(MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, 0, 0)){
fVar2=(Var0.f_2 - (fVar1 + 1f));
if((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0==1){
if(!bParam1){
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}}
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, 0, 1, 0, 1);
Global_2635559.f_710=0;
}}elseif(Global_2635559.f_710 < 3){
Global_2635559.f_710++;
func_1002(0, 0);
}else{
Global_2635559.f_710=0;
}}}


void func_1003(struct<3> Param0, bool bParam1, int iParam2){
int iVar0;
float fVar1;
bool bVar2;
int iVar3;
var uVar4;
var uVar5;
var uVar6;
var uVar7;
bVar2=true;
if(Global_2764640 && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0))){
bVar2=false;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
fVar1=func_1004(ENTITY::GET_ENTITY_MODEL(iVar0));
fVar1=(fVar1 * 0.5f);
fVar1=(fVar1 + 6f);
if(bVar2){
MISC::CLEAR_AREA(Param0, fVar1, 1, 0, 0, bParam1);
}
MISC::CLEAR_AREA_OF_VEHICLES(Param0, fVar1, 1, 0, 1, 1, bParam1, 0, iParam2);
FIRE::STOP_FIRE_IN_RANGE(Param0, 6f);
}else{
uVar7=SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Param0.f_0, Param0.f_1, (Param0.f_2 - 2f), Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 19, 0, 7);
SHAPETEST::GET_SHAPE_TEST_RESULT(uVar7, &iVar3, &uVar4, &uVar5, &uVar6);
MISC::CLEAR_AREA(Param0, 0.7f, 1, 0, 0, bParam1);
if(!iVar3==0){
MISC::CLEAR_AREA_OF_VEHICLES(Param0, 6f, 1, 0, 1, 1, bParam1, 0, 0);
if(bVar2){
if(bParam1){
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 6f, 17);
}else{
MISC::CLEAR_AREA_OF_OBJECTS(Param0, 6f, 16);
}}}
FIRE::STOP_FIRE_IN_RANGE(Param0, 2.5f);
}}


float func_1004(int iParam0){
struct<2> Var0;
struct<2> Var1;
func_81(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
return MISC::ABSF((Var0.f_1 - Var1.f_1));
}


void func_1005(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_1012()){
iVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_1010(iVar1, &iVar0)){
func_1006(iVar1, iParam0, iParam1);
if(iVar0 && !bParam2){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
}}}}


void func_1006(int iParam0, int iParam1, int iParam2){
var uVar0;
uVar0=NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam0);
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uVar0)){
if(Global_1836590 && VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("rhino"))){
iParam1=1;
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(uVar0, 1, 1, func_1009());
return;
}elseif(func_1008()){
func_1007(iParam0, 0);
return;
}
if(iParam2 > iParam1){
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(uVar0, iParam2, 1, func_1009());
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam2);
}}else{
NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(uVar0, iParam1, 1, func_1009());
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(iParam1);
}}}}

int func_1007(int iParam0, int iParam1){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(bVar1, 1);
if(iParam1 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
NETWORK::SET_REMOTE_PLAYER_AS_GHOST(bVar1, 1);
}}
iVar0++;
}
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
NETWORK::SET_NETWORK_VEHICLE_AS_GHOST(iParam0, 1);
return 1;
}else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
}
return 0;
}


bool func_1008(){
return Global_1836609;
}

int func_1009(){
if(func_103() !=0){
return 0;
}
if(!func_29(PLAYER::PLAYER_ID())){
return 0;
}
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/]==-1){
return 0;
}
return 1;
}

int func_1010(int iParam0, int iParam1){
if(func_1011(iParam0, iParam1)){
return 1;
}
return 0;
}

int func_1011(int iParam0, var uParam1){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0)){
if(NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0)){
if(!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0))){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
*uParam1=1;
}}}
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0)){
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)){
return 1;
}}}
return 0;
}

int func_1012(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}}}
return 0;
}


float func_1013(int iParam0){
struct<3> Var0;
struct<3> Var1;
func_81(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
return MISC::ABSF((Var0.f_2 - Var1.f_2));
}

int func_1014(){
int iVar0;
bool bVar1;
float fVar2;
struct<3> Var3;
Var3={
func_124(PLAYER::PLAYER_ID()) 
};
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_1680(bVar1, 1, 1)){
if(PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(bVar1))){
if(!bVar1==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
fVar2=vmag(func_124(bVar1) - Var3);
if(fVar2 < 0.2f){
return 1;
}}}}}
iVar0++;
}
return 0;
}

int func_1015(struct<3> Param0){
int iVar0;
struct<3> Var1;
float fVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
struct<3> Var7;
float fVar8;
iVar0=VEHICLE::GET_ALL_VEHICLES(&Global_1578029);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar5=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar5, 0)){
iVar6=ENTITY::GET_ENTITY_MODEL(iVar5);
Var7={
ENTITY::GET_ENTITY_COORDS(iVar5, 1) 
};
fVar8=ENTITY::GET_ENTITY_HEADING(iVar5);
}}
iVar4=0;
while (iVar4 < iVar0){
if(ENTITY::DOES_ENTITY_EXIST(Global_1578029[iVar4])){
if(!ENTITY::IS_ENTITY_DEAD(Global_1578029[iVar4], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_1578029[iVar4], 0)){
}elseif(func_1020(Global_1578029[iVar4])){
}elseif(!func_1016(Global_1578029[iVar4])){
Var1={
ENTITY::GET_ENTITY_COORDS(Global_1578029[iVar4], 0) 
};
fVar2=ENTITY::GET_ENTITY_HEADING(Global_1578029[iVar4]);
iVar3=ENTITY::GET_ENTITY_MODEL(Global_1578029[iVar4]);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(func_199(Var1, fVar2, iVar3, Var7, fVar8, iVar6, 0)){
return 1;
}}elseif(func_79(Param0, Var1, fVar2, iVar3, 1036831949)){
return 1;
}}}
iVar4++;
}
return 0;
}

int func_1016(int iParam0){
int iVar0;
int iVar1;
if(!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0)){
iVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(PED::IS_PED_A_PLAYER(iVar0)){
iVar1=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
if(func_1680(iVar1, 0, 0)){
if(func_1017(iVar1)){
return 1;
}}}}}
return 0;
}

int func_1017(bool bParam0){
if(func_1019()){
if(func_1018(NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0), &(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_359.f_4))){
return 1;
}}
return 0;
}

int func_1018(int iParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam1){
if(iParam0==(*uParam1)[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}

int func_1019(){
if(Global_2635559.f_2879 > -1){
return 1;
}
return 0;
}

int func_1020(int iParam0){
int iVar0;
int iVar1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1)){
if(iVar1==iParam0){
return 1;
}}}}
return 0;
}


void func_1021(){
if(!Global_2635559.f_712){
Global_2635559.f_712=1;
}
func_1429(0);
if(Global_2635559.f_2673){
func_1022();
Global_2635559.f_2673=0;
}
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217=11;
}


void func_1022(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
bool bVar3;
float fVar4;
float fVar5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
struct<3> Var14;
struct<3> Var15;
struct<3> Var16;
struct<3> Var17;
var uVar18;
var uVar19;
var uVar20;
var uVar21;
var uVar22;
var uVar23;
int iVar24;
int iVar25;
int iVar26;
int iVar27;
int iVar28;
int iVar29;
var uVar30;
var uVar31;
var uVar32;
int iVar33;
int iVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
int iVar41;
struct<3> Var42;
float fVar43;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if((!Global_2635559.f_45.f_52 && !Global_2635559.f_45.f_53) && !Global_2635559.f_2674){
if(PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var1, &Var2, 1, 1077936128, 0)){
Var2.f_2=(Var2.f_2 + 1f);
bVar3=true;
if(!vdist(Var1, Var2) < 50f || Global_2635559.f_45.f_52){
bVar3=false;
}}}elseif(Global_2635559.f_2674){
Global_2635559.f_2674=0;
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
fVar4=ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
}
fVar5=3f;
Var6={
ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) 
};
Var6={
Var6 / FtoV(vmag(Var6)) 
};
Var6={
Var6 * Vector(fVar5, fVar5, fVar5) 
};
Var7={
Var6 
};
func_66(&Var7, 0f, 0f, -45f);
Var8={
Var6 
};
func_66(&Var8, 0f, 0f, -90f);
Var9={
Var6 
};
func_66(&Var9, 0f, 0f, 45f);
Var10={
Var6 
};
func_66(&Var10, 0f, 0f, 90f);
if(bVar3){
Var11={
Var2 - Var1 
};
Var12={
func_63(Var11, 0f, 0f, 1f) 
};
Var12={
Var12 / FtoV(vmag(Var12)) 
};
Var12={
Var12 * Vector(0.2f, 0.2f, 0.2f) 
};
}
Var13={
Var1 + Var6 
};
Var14={
Var1 + Var7 
};
Var15={
Var1 + Var8 
};
Var16={
Var1 + Var9 
};
Var17={
Var1 + Var10 
};
uVar18=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var13, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar19=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var14, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar20=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var15, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar21=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var16, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
uVar22=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var17, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
if(bVar3){
uVar23=SHAPETEST::START_SHAPE_TEST_CAPSULE(Var1, Var2, 0.2f, 257, PLAYER::PLAYER_PED_ID(), 7);
}
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar18, &iVar24, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar19, &iVar25, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar20, &iVar26, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar21, &iVar27, &uVar30, &uVar31, &uVar32);
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar22, &iVar28, &uVar30, &uVar31, &uVar32);
if(bVar3){
iVar33=SHAPETEST::GET_SHAPE_TEST_RESULT(uVar23, &iVar29, &uVar30, &uVar31, &uVar32);
}
if(iVar33==0){
}
iVar34=(iVar34 + iVar24);
iVar35=(iVar35 + iVar25);
iVar36=(iVar36 + iVar26);
iVar37=(iVar37 + iVar27);
iVar38=(iVar38 + iVar28);
if(bVar3){
iVar39=(iVar39 + iVar29);
}
iVar40=99;
iVar41=-1;
if(iVar34 < iVar40){
iVar40=iVar34;
iVar41=0;
}
if(iVar35 < iVar40){
iVar40=iVar35;
iVar41=1;
}
if(iVar37 < iVar40){
iVar40=iVar37;
iVar41=2;
}
if(iVar36 < iVar40){
iVar40=iVar36;
iVar41=3;
}
if(iVar38 < iVar40){
iVar40=iVar38;
iVar41=4;
}
if(bVar3){
if(iVar39 < iVar40){
iVar40=iVar39;
iVar41=5;
}}
if(bVar3 && iVar39==0){
fVar4=MISC::GET_HEADING_FROM_VECTOR_2D(Var11.f_0, Var11.f_1);
func_1024(fVar4);
return;
}elseif(iVar34==0){
return;
}elseif(Global_2635559.f_45.f_52){
Var42={
Global_2635559.f_45.f_49 - Var1 
};
fVar43=func_62(Var42, Var15);
if(fVar43 <=0f){
if(iVar35==0){
fVar4=(fVar4 + -45f);
func_1024(fVar4);
return;
}elseif(iVar36==0){
fVar4=(fVar4 + -90f);
func_1024(fVar4);
return;
}elseif(iVar37==0){
fVar4=(fVar4 + 45f);
func_1024(fVar4);
return;
}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1024(fVar4);
return;
}else{
func_1023(iVar41, fVar4, Var11);
}}elseif(iVar37==0){
fVar4=(fVar4 + 45f);
func_1024(fVar4);
return;
}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1024(fVar4);
return;
}elseif(iVar35==0){
fVar4=(fVar4 + -45f);
func_1024(fVar4);
return;
}elseif(iVar36==0){
fVar4=(fVar4 + -90f);
func_1024(fVar4);
return;
}else{
func_1023(iVar41, fVar4, Var11);
}}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
if(iVar0==0){
if(iVar36==0){
fVar4=(fVar4 + -90f);
func_1024(fVar4);
return;
}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1024(fVar4);
return;
}else{
func_1023(iVar41, fVar4, Var11);
}}elseif(iVar38==0){
fVar4=(fVar4 + 90f);
func_1024(fVar4);
return;
}elseif(iVar36==0){
fVar4=(fVar4 + -90f);
func_1024(fVar4);
return;
}else{
func_1023(iVar41, fVar4, Var11);
}}}}


void func_1023(int iParam0, float fParam1, struct<2> Param2, var uParam3){
switch (iParam0){
case 0:
return;
break;
case 1:
fParam1=(fParam1 + -45f);
func_1024(fParam1);
return;
break;
case 2:
fParam1=(fParam1 + 45f);
func_1024(fParam1);
return;
break;
case 3:
fParam1=(fParam1 + -90f);
func_1024(fParam1);
return;
break;
case 4:
fParam1=(fParam1 + 90f);
func_1024(fParam1);
return;
break;
case 5:
fParam1=MISC::GET_HEADING_FROM_VECTOR_2D(Param2.f_0, Param2.f_1);
func_1024(fParam1);
return;
break;
}}


void func_1024(float fParam0){
if(!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())){
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam0);
}
func_1000(0f, 1);
}

int func_1025(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10){
int iVar0;
struct<3> Var1;
float fVar2;
Global_23131.f_6=1;
if(Global_2672505.f_1024 && Global_2672505.f_1032){
func_1030(0, bParam7);
return 1;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7){
if(Global_2672505.f_1024){
func_1030(0, bParam7);
}
return 0;
}
if((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
return 0;
}
if(!func_837(0)){
if(func_533(PLAYER::PLAYER_ID(), 1, 0) && !(func_1029() || func_1028())){
if(((bParam7 && func_1680(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==1){
}elseif(func_1661()==28){
}else{
return 0;
}}}
if(fParam1 < 0f){
fParam1=(fParam1 + 360f);
}
if(fParam1 >=360f){
fParam1=(fParam1 + -360f);
}
if(!Global_2672505.f_1024 && !bParam9){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
if((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f){
fVar2=(fParam1 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
if(fVar2 > 180f){
fVar2=(fVar2 + -360f);
}
if(fVar2 < -180f){
fVar2=(fVar2 + 360f);
}
if(MISC::ABSF(fVar2) < 1f){
Global_2672505.f_1024=0;
Global_2672505.f_1025=0;
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
return 1;
}}}
if(((!Param0.f_0==Global_2672505.f_1026 || !Param0.f_1==Global_2672505.f_1026.f_1) || !Param0.f_2==Global_2672505.f_1026.f_2) || !fParam1==Global_2672505.f_1029){
if(Global_2672505.f_1024==1){
if(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672505.f_1030) < func_227(0)){
return 0;
}
PLAYER::STOP_PLAYER_TELEPORT();
Global_2672505.f_1025=1;
}else{
Global_2672505.f_1025=0;
}
Global_2672505.f_1026={
Param0 
};
Global_2672505.f_1029=fParam1;
Global_2672505.f_1024=0;
}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("kosatka")){
bParam2=false;
}}}
if(!Global_2672505.f_1024 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(bParam2){
bParam3=false;
}
bParam5=bParam5;
if(bParam5){
}
if(bParam3){
}
if(bParam6){
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!MISC::IS_BIT_SET(Global_100733.f_1407[44], 16)){
func_1027(0);
}
if(!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635559.f_502))){
Global_2635559.f_502=0;
}}
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0)){
Global_2672505.f_1031=0;
}}}
if(Global_2672505.f_1031 > -1){
Global_2672505.f_1030=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1024=1;
}else{
if(bParam7){
if(bParam2){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)){
ENTITY::SET_ENTITY_COORDS(iVar0, Param0, 0, 1, 1, 1);
ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
if(fParam10 !=0f){
ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
}
}
else{
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
}}else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
}}else{
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 0, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
}
func_1030(bParam4, bParam7);
return 1;
}else{
STREAMING::CLEAR_FOCUS();
PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam1, bParam2, uParam8, 0);
}
Global_2672505.f_1030=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1024=1;
}}
if(Global_2672505.f_1024){
Global_23131.f_6=1;
Global_2672505.f_1030=NETWORK::GET_NETWORK_TIME();
if(Global_2672505.f_1031 > -1){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
}
if(func_1026(&(Global_2672505.f_1031), Param0, fParam1, iVar0)){
func_1030(bParam4, bParam7);
return 1;
}}else{
if(bParam7){
if(vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Global_2672505.f_1026) < 2f){
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
func_1030(bParam4, bParam7);
return 1;
}}
if(!PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
if(fParam10 !=0f){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
ENTITY::SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
Global_2672505.f_1032=1;
return 0;
}}
func_1030(bParam4, bParam7);
return 1;
}}}
return 0;
}

int func_1026(var uParam0, struct<3> Param1, float fParam2, int iParam3){
if(ENTITY::DOES_ENTITY_EXIST(Global_2672505.f_1033) && !ENTITY::IS_ENTITY_DEAD(Global_2672505.f_1033, 0)){
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672505.f_1033);
}
switch (*uParam0){
case 0:
Global_2672505.f_1033=iParam3;
NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672505.f_1033);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2672505.f_1033)){
if(!ENTITY::IS_ENTITY_DEAD(Global_2672505.f_1033, 0)){
ENTITY::SET_ENTITY_HEADING(Global_2672505.f_1033, fParam2);
ENTITY::SET_ENTITY_COORDS(Global_2672505.f_1033, Param1, 0, 1, 1, 1);
return 1;
}}
break;
}
return 0;
}


void func_1027(int iParam0){
int iVar0;
iVar0=Global_2635559.f_2691;
if((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635559.f_2689==0) && iParam0==0){
iVar0=255;
}
if(!iVar0==Global_2635559.f_2688){
if(!AUDIO::IS_RADIO_RETUNING()){
Global_2635559.f_2688=iVar0;
}}}


bool func_1028(){
return ((MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1969892, 12)) && Global_1969891==8);
}


bool func_1029(){
return (MISC::IS_BIT_SET(Global_4718592.f_30, 12) && MISC::IS_BIT_SET(Global_1969892, 0));
}


void func_1030(bool bParam0, bool bParam1){
if(!bParam0){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
}
if(!bParam1){
STREAMING::CLEAR_FOCUS();
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
}
func_566();
if(!MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 14) && !func_992()){
func_1031();
}}


void func_1031(){
Global_2802791.f_92=1;
}


void func_1032(struct<3> Param0){
Global_2635559.f_45.f_302=1;
Global_2635559.f_45.f_299={
Param0 
};
Global_2635559.f_45.f_318=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
func_1033(1);
}


void func_1033(bool bParam0){
float fVar0;
if(Global_1836597 || Global_2635559.f_45.f_303){
if(Global_2635559.f_45.f_302){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_1836601){
fVar0=100f;
}else{
fVar0=36f;
}
if((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) && ((vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Global_2635559.f_45.f_299) < fVar0 || func_1037(PLAYER::PLAYER_ID())) || func_533(PLAYER::PLAYER_ID(), 0, 0))){
if((func_1036() || func_1035()) || func_1034()){
if(PAD::IS_CONTROL_PRESSED(0, 351)){
Global_2635559.f_45.f_318=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_1005(1000, 0, 1);
}
elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2635559.f_45.f_318, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 2000){
func_1005(2500, 0, bParam0);
Global_2635559.f_45.f_318=NETWORK::GET_NETWORK_TIME_ACCURATE();
}}else{
Global_2635559.f_45.f_318=NETWORK::GET_NETWORK_TIME_ACCURATE();
func_1005(1000, 0, bParam0);
}}else{
Global_2635559.f_45.f_299={
0f, 0f, 0f 
};
Global_2635559.f_45.f_302=0;
}}}
if(ENTITY::DOES_ENTITY_EXIST(Global_2635559.f_45.f_174)){
func_1449(&(Global_2635559.f_45.f_174));
}}}

int func_1034(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("thruster")){
return 1;
}}}
return 0;
}

int func_1035(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("ruiner2")){
return 1;
}}}
return 0;
}

int func_1036(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("blazer5")){
return 1;
}}}
return 0;
}

int func_1037(int iParam0){
if(Global_2657589[iParam0 /*466*/].f_217 !=0){
return 1;
}
return 0;
}


void func_1038(int iParam0, int iParam1, int iParam2, bool bParam3){
bool bVar0;
struct<3> Var1;
struct<3> Var2;
bVar0=false;
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)){
bVar0=true;
}
if(!func_1219(iParam0, iParam1, bVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iParam0, 0) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iParam1, 0) 
};
if(!vdist(Var1, Var2) < 5f || !iParam2==-1){
Var2.f_2=(Var2.f_2 + -4f);
Var2.f_0=(Var2.f_0 + -4f);
Var2.f_1=(Var2.f_1 + -4f);
ENTITY::SET_ENTITY_COORDS(iParam0, Var2, 0, 0, 0, 1);
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
ENTITY::SET_ENTITY_COLLISION(iParam0, true, 0);
ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_RESET_FLAG(iParam0, 150, 1);
PED::SET_PED_RESET_FLAG(iParam0, 151, 1);
if(bParam3){
PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
}else{
TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
}
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
PED::SET_PED_RESET_FLAG(iParam0, 150, 1);
if(Global_1836597){
if(func_1216(ENTITY::GET_ENTITY_MODEL(iParam1))){
func_1039(0);
}}}}


void func_1039(bool bParam0){
struct<14> Var0;
int iVar1;
if(!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
if(Global_4718592.f_166335==0){
if((Global_2635559.f_2699==-99 || Global_2635559.f_2699==0) || !func_1215(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2635559.f_2699, -1)){
if(!bParam0){
iVar1=func_304(589, -1, 0);
}}else{
iVar1=Global_2635559.f_2699;
}
Var0={
func_1173(func_1214(), 14, iVar1, -1) 
};
func_1172(PLAYER::PLAYER_PED_ID(), 14, iVar1);
func_1040(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
func_1040(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
}else{
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, 1);
}}}

int func_1040(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13){
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
int iVar10;
int iVar11;
var uVar12;
var uVar13;
var uVar14;
var uVar15;
var uVar16;
int iVar17;
var uVar18;
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
int iVar32;
int iVar33;
int iVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
int iVar41;
int iVar42;
int iVar43;
int iVar44;
int iVar45;
int iVar46;
int iVar47;
int iVar48;
int iVar49;
int iVar50;
int iVar51;
int iVar52;
int iVar53;
int iVar54;
var uVar55;
int iVar56;
int iVar57;
int iVar58;
int iVar59;
int iVar60;
int iVar61;
int iVar62;
int iVar63;
int iVar64;
int iVar65;
int iVar66;
var uVar67;
int iVar68;
int iVar69;
int iVar70;
int iVar71;
int iVar72;
int iVar73;
int iVar74;
int iVar75;
int iVar76;
int iVar77;
int iVar78;
var uVar79;
int iVar80;
int iVar81;
int iVar82;
int iVar83;
int iVar84;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((Global_1574992 !=4 && Global_1574992 !=5) && Global_1574992 !=7){
return 0;
}}
if(PED::IS_PED_INJURED(iParam0) || iParam2==-99){
return 0;
}
if(iParam0==PLAYER::PLAYER_PED_ID() && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_232==2){
if(!bParam12){
return 0;
}}
if(iParam10==-1){
iParam10=Global_78338;
}
Global_78339++;
iVar5=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar6=-99;
iVar7=-99;
iVar8=-99;
iVar9=-99;
iVar10=-1;
iVar11=-1;
if(iParam5==0){
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
if(!func_1171(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
if(iParam1==11 && Global_78339 > 1){
}elseif(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 4)){
func_1166(iVar5, iParam1, iParam2, 1);
}}
if(iParam1==12){
uVar12=Global_2883588;
uVar13=Global_2883589;
PED::CLEAR_ALL_PED_PROPS(iParam0, 1);
uVar14=15;
if(iParam5==1){
uVar14={
Global_78384 
};
}else{
uVar14={
func_1162(iVar5, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar14[iVar0] !=-99){
if(iVar0==10 && uVar14.f_16){
Global_78341[1 /*14*/]={
func_1173(iVar5, 10, 0, -1) 
};
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_559(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1166(iVar5, 10, 0, 1);
}}else{
Global_78341[1 /*14*/]={
func_1173(iVar5, iVar0, uVar14[iVar0], -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) || iVar0==13){
if(iVar0==13){
uVar15=9;
if(iParam5==1){
uVar15={
Global_78401 
};
}else{
uVar15={
func_1159(iVar5, uVar14[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_1173(iVar5, 14, uVar15[iVar1], -1) 
};
func_1158(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1166(iVar5, iVar0, uVar14[iVar0], 1);
}
iVar1++;
}
}
elseif(iVar0 !=14 && iVar0 !=12){
if(iVar0 !=1){
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_559(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}}else{
func_1040(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1166(iVar5, iVar0, uVar14[iVar0], 1);
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_1173(iVar5, iVar0, func_1154(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
uVar16={
func_1162(iVar5, 0) 
};
func_1040(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
iVar0++;
}
PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
Global_2883588=uVar12;
Global_2883589=uVar13;
if(iParam5==0){
iVar17=func_1153();
if(iVar17 !=-1){
func_834(iVar17, 0, iParam10);
}
func_1149(iParam0, 11, uVar14[11], iParam6, 0);
}}elseif(iParam1==13){
uVar18={
func_1159(iVar5, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_1173(iVar5, 14, uVar18[iVar1], -1) 
};
func_1158(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1166(iVar5, 14, uVar18[iVar1], 1);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_1147(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_1040(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}
iVar1++;
}}elseif(iParam1==14){
func_1158(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_1166(iVar5, iParam1, iParam2, 1);
}
if(Global_78341[1 /*14*/].f_12==0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_hair"), 1)){
}elseif(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("hair_shrink"))){
func_1040(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}}
if(Global_78341[1 /*14*/].f_12==0){
func_1141(iParam0);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_1147(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_1040(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
iVar3=func_1147(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_1040(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}else{
if((iParam1==4 || iParam1==11) || iParam1==8){
iVar19=func_559(iParam1);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) !=Global_78341[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) !=Global_78341[1 /*14*/].f_4){
iVar20=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar21=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
if(((iParam1==11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, 307252627, 0)) || (iParam1==8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, -2095729091, 0))){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
}
if((iParam1==11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, 307252627, 0)) || (iParam1==4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, -2095729091, 0))){
if(iVar5==joaat("mp_m_freemode_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}elseif(iVar5==joaat("mp_f_freemode_01")){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
}}}}
if(iParam1==11){
if(iParam5==0){
iVar22=-1;
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11)){
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 0);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 1);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 2);
PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576217, Global_1576218, Global_1576219, 3);
}
iVar23=func_561(iParam0, 11);
iVar24=func_561(iParam0, 8);
iVar25=func_561(iParam0, 4);
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
if(iVar5==joaat("mp_m_freemode_01")){
iVar22=func_557(iVar5, iParam2, 11, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar22=func_557(iVar5, iParam2, 11, 4);
}
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_robe"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("morph_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("gorka_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("cat_suit"), 0)){
}else{
iVar8=func_561(iParam0, 8);
}}
iVar26=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("gloves"), 0)){
iVar27=func_1140(iVar5, iVar24, iVar23, iVar25);
if(iVar27==-99){
iVar27=func_1147(iParam0, iVar5, 11, iVar23, 3, 0);
}
switch (iVar26){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar27=11;
iVar22=func_557(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("dress"), 0)){
iVar27=-99;
}
break;
}
if(iVar27 !=-99){
iVar28=0;
while (iVar28 < 18){
if(func_1139(iVar5, iVar27, iVar28)==iVar26){
iVar10=iVar28;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar28++;
}}}
iVar22=-1;
if((iVar5==joaat("mp_f_freemode_01") && iParam2 >=256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iParam2, 11, 4), joaat("vest"), 0)){
iVar23=func_561(iParam0, 11);
if(iVar23 >=256){
iVar22=func_557(iVar5, iVar23, 11, 4);
}
if(iVar23 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0)){
iVar29=func_1137(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar29 !=-99){
func_1040(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(func_1136(iVar5, iParam2, -1)){
if(iVar5==joaat("mp_m_freemode_01")){
if(iVar23 >=237){
iVar22=func_557(iVar5, iVar23, 11, 3);
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(iVar23 >=256){
iVar22=func_557(iVar5, iVar23, 11, 4);
}}
iVar8=-99;
if(!func_1136(iVar5, iVar23, -1)){
if((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0))){
}
elseif((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("apart_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_9"), 0))){
}
else{
iVar30=func_1135(iParam0, iParam2);
iVar31=func_1137(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar31 !=-99){
func_1040(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
iVar8=-99;
}elseif(iVar30 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
func_1040(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}else{
if(iVar5==joaat("mp_m_freemode_01")){
iVar32=func_1133(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iVar32, -1) 
};
iVar31=func_1137(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
iVar33=func_557(iVar5, iParam2, 11, 3);
if((iVar31==-99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("biker_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("open_short"), 0)){
iVar31=240;
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -1099375697, 0)){
iVar31=80;
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0)){
iVar31=120;
}
else{
iVar31=48;
}}
func_1040(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}
}}else{
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iVar23, -1) 
};
iVar34=Global_78341[1 /*14*/].f_3;
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iParam2, -1) 
};
iVar35=Global_78341[1 /*14*/].f_3;
if(iVar34 !=iVar35){
iVar37=func_1135(iParam0, iParam2);
Global_78341[1 /*14*/]={
func_1173(iVar5, 8, iVar24, -1) 
};
iVar36=Global_78341[1 /*14*/].f_4;
iVar38=func_1132(iVar5, iVar24, iVar36);
if(iVar37 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
iVar39=iVar37;
}elseif(iVar38==-99){
iVar39=iVar24;
if(iVar5==joaat("mp_m_freemode_01")){
iVar40=func_557(iVar5, iParam2, 11, 3);
if(((iParam2 >=96 && iParam2 <=107) || func_556(iVar40)==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("biker_vest"), 0)){
iVar38=func_1133(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iVar38, -1) 
};
iVar39=func_1137(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
if(iVar5==joaat("mp_f_freemode_01") && ((iVar24==32 || iVar24==33) || iVar24==119)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0)){
iVar38=func_1133(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iVar38, -1) 
};
iVar39=func_1137(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
iVar41=-1;
if(iVar5==joaat("mp_m_freemode_01")){
iVar41=func_557(iVar5, iVar24, 8, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar41=func_557(iVar5, iVar24, 8, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("overcoat_accs"), 0)){
iVar38=func_1133(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iVar38, -1) 
};
iVar39=func_1137(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}else{
iVar39=func_1137(iVar5, iVar38, iParam2, iVar36);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0)){
if(!func_1131(iVar5, func_561(iParam0, 4), iVar38)){
iVar39=240;
}
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0)){
if(!func_1131(iVar5, func_561(iParam0, 4), iVar38)){
iVar39=48;
}
}}}
if(iVar39 !=-99){
func_1040(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_m_freemode_01")){
iVar38=func_1133(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_1173(iVar5, 11, iVar38, -1) 
};
iVar39=func_1137(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
if(iVar39==-99){
iVar39=240;
}
func_1040(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_f_freemode_01")){
func_1040(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}}}
func_1128(iVar5, iParam2);
if(!bParam13){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
}}
func_1149(iParam0, iParam1, iParam2, iParam6, 0);
if(iParam5==0){
iVar6=func_1140(iVar5, func_1154(iParam0, 8, -1), iParam2, func_1154(iParam0, 4, -1));
}}elseif(iParam1==2){
if(iParam5==0){
if(iParam8==-1){
iParam8=func_304(2153, iParam10, 0);
}
if(iParam9==-1){
iParam9=func_304(2160, iParam10, 0);
}
PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
}
if(iParam7==0){
if(iParam2 !=-99){
iVar42=-99;
if(iVar5==joaat("mp_m_freemode_01")){
iVar42=func_1126(iParam2);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar42=func_1124(iParam2);
}
if(iVar42 !=-99 && iParam2 !=iVar42){
iParam2=iVar42;
}}
func_1092(iParam0, iParam2, iParam10, bParam11);
}}elseif(iParam1==8){
iVar43=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("gloves"), 0)){
iVar44=func_561(iParam0, 11);
iVar45=func_561(iParam0, 4);
iVar46=func_1140(iVar5, iParam2, iVar44, iVar45);
if(iVar46==-99){
iVar46=func_1147(iParam0, iVar5, 11, iVar44, 3, 0);
}
switch (iVar43){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar46=11;
iVar47=func_557(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("dress"), 0)){
iVar46=-99;
}
break;
}
if(iVar46 !=-99){
iVar48=0;
while (iVar48 < 18){
if(func_1139(iVar5, iVar46, iVar48)==iVar43){
iVar10=iVar48;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar48++;
}}}
func_1149(iParam0, iParam1, iParam2, iParam6, 0);
iVar49=func_561(iParam0, 11);
if(func_1136(iVar5, iVar49, -1)){
iVar50=func_1132(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
func_1128(iVar5, iVar50);
}
if(iParam5==0){
iVar6=func_1140(iVar5, iParam2, func_561(iParam0, 11), func_561(iParam0, 4));
}}elseif(iParam1==9){
if(iParam2 >=1 && iParam2 <=41){
iVar51=func_561(iParam0, 7);
if(!func_1089(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(7), 0, 0, 0);
}}}elseif(iParam1==1){
if(((iVar5==joaat("mp_m_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5==joaat("mp_f_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0))){
iVar52=func_304(2100, iParam10, 0);
iVar53=func_304(2101, iParam10, 0);
iVar54=func_304(2102, iParam10, 0);
uVar55=func_1088(135, iParam10);
if(iVar5==joaat("mp_m_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, uVar55, 0f, false);
}elseif(iVar5==joaat("mp_f_freemode_01")){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
}
iVar56=0;
while (iVar56 < 20){
PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
iVar56++;
}}else{
func_1074(iParam0, iParam10);
}}elseif(iParam1==4){
iVar57=func_561(iParam0, 11);
iVar58=func_561(iParam0, 8);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0)){
if(!func_1131(iVar5, iParam2, func_1132(iVar5, iVar58, 0))){
func_1040(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0)){
if(!func_1131(iVar5, iParam2, func_1132(iVar5, iVar58, 0))){
func_1040(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_1173(iVar5, iParam1, iParam2, -1) 
};
}}}
if(iParam5==0){
iVar6=func_1140(iVar5, func_561(iParam0, 8), func_561(iParam0, 11), iParam2);
}
iVar59=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("gloves"), 0)){
iVar60=func_1140(iVar5, iVar58, iVar57, iParam2);
if(iVar60==-99){
iVar60=func_1147(iParam0, iVar5, 11, iVar57, 3, 0);
}
switch (iVar59){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar60=11;
iVar61=func_557(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("dress"), 0)){
iVar60=-99;
}
break;
}
if(iVar60 !=-99){
iVar62=0;
while (iVar62 < 18){
if(func_1139(iVar5, iVar60, iVar62)==iVar59){
iVar10=iVar62;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar62++;
}}}}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_559(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_559(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_1147(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_1040(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1==10);
if(iVar2==3){
switch (Global_2883588){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar10=-1;
break;
}
}
elseif(iVar2==8){
if(iVar6 !=-99){
iVar6=func_1140(iVar5, iVar3, func_561(iParam0, 11), func_561(iParam0, 4));
}
}}
iVar2++;
}
iVar3=func_1147(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_1040(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if((iParam1==11 || iParam1==8) || iParam1==4){
if(func_1073(iParam0)){
iVar63=func_1071(iParam0, iVar5, iParam1, iParam2);
if(iVar63 > 0){
iVar63=(iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
if(!func_1065(iParam0, 9, iVar63)){
func_1040(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}else{
func_1040(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
func_1040(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==11 || iParam1==8){
iVar64=func_304(2042, -1, 0);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) !=0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_1059(iParam0, iVar64), func_1058(iParam0, iVar64), func_1057(iParam0, iVar64));
}
if(iParam0==PLAYER::PLAYER_PED_ID()){
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_1059(PLAYER::PLAYER_PED_ID(), iVar64), func_1058(PLAYER::PLAYER_PED_ID(), iVar64), 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_1057(PLAYER::PLAYER_PED_ID(), iVar64));
func_1055(PLAYER::PLAYER_ID(), iVar64);
}}
if(iParam1==7){
if((iVar5==joaat("mp_m_freemode_01") && iParam2 >=92) || (iVar5==joaat("mp_f_freemode_01") && iParam2 >=55)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("big_chain"), 0)){
func_1040(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iVar5==joaat("mp_f_freemode_01") && (iParam1==11 || iParam1==4)){
if(iParam1==11){
iVar65=func_1154(iParam0, 4, -1);
iVar66=iParam2;
}else{
iVar65=iParam2;
iVar66=func_1154(iParam0, 11, -1);
}
if(func_1054(iVar5, 11, iVar66, -1)){
if(!func_1053(iVar5, 4, iVar65, -1)){
if(func_1052(iVar5, 4, iVar65, &uVar67)){
func_1040(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}elseif(func_1053(iVar5, 4, iVar65, -1)){
if(func_1051(iVar5, 4, iVar65, &uVar67)){
func_1040(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==4 || iParam1==6){
iVar68=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
iVar69=PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
iVar70=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
iVar71=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
iVar72=PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
iVar73=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
iVar74=func_561(iParam0, 4);
iVar75=func_561(iParam0, 6);
if(func_1050(iVar5, iVar70)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_1049(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_1047(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_1040(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_1047(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_1040(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_1046(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_1047(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_1040(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_1047(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_1040(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}
if(func_1050(iVar5, iVar73)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_1046(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_1047(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_1040(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_1047(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_1040(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_1049(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_1047(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_1040(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_1047(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_1040(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}}
if(iParam1==11 || iParam1==1){
func_1141(iParam0);
iVar81=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
iVar82=PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
iVar83=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("force_prop"), 0)){
iVar3=func_1147(iParam0, iVar5, iParam1, iParam2, 14, 0);
if(iVar3 !=-99){
func_1040(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar3=func_1147(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_1040(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}}
if(iParam1 !=2){
if(func_1041(iParam0, &uVar4)){
func_1040(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if(iVar6 !=-99 && !bParam13){
func_1040(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar8 !=-99){
func_1040(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar7 !=-99){
func_1040(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar10 !=-1){
iVar84=func_1139(iVar5, func_1154(iParam0, 3, -1), iVar10);
if(iVar84 !=-1){
if(iVar5==joaat("mp_m_freemode_01")){
iVar9=func_1047(iVar5, iVar84, 3, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar9=func_1047(iVar5, iVar84, 3, 4);
}
if(iVar9 !=-99){
iVar9=(iVar9 + iVar11);
func_1040(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
Global_78339=(Global_78339 - 1);
return 1;
}

int func_1041(int iParam0, var uParam1){
int iVar0;
int iVar1;
*uParam1=func_1154(PLAYER::PLAYER_PED_ID(), 2, -1);
if(func_304(754, Global_78338, 0) !=-99 && func_1043()){
if(func_1042()==4){
return 1;
}
if(func_304(754, Global_78338, 0)==0 && func_304(755, Global_78338, 0)==0){
if(func_601(161, Global_78338)){
if(func_304(2053, Global_78338, 0)==0){
return 0;
}}elseif(func_304(753, Global_78338, 0)==0){
return 0;
}}
iVar0=func_304(754, Global_78338, 0);
iVar1=func_304(755, Global_78338, 0);
if(!func_1065(iParam0, iVar1, iVar0)){
if(func_601(161, Global_78338)){
*uParam1=func_304(2053, Global_78338, 0);
}else{
*uParam1=func_304(753, Global_78338, 0);
}
func_507(754, -99, Global_78338, 1, 0);
func_507(755, 2, Global_78338, 1, 0);
return 1;
}}
return 0;
}

int func_1042(){
return Global_1574992;
}

int func_1043(){
if(func_1045() && func_1044(0)){
return 1;
}
return 0;
}


var func__1044(int iParam0){
return Global_1574538[iParam0];
}


var func__1045(){
return func_1044(func_8() + 1);
}

int func_1046(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_557(iParam0, iParam1, 6, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0)){
return 1;
}
return 0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("cowboy_boots"), 0)){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("gorka_suit"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("pilot_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("cowboy_boots"), 0)){
return 1;
}}
break;
case joaat("mp_f_freemode_01"):
if(iParam1 >=256){
iVar0=func_557(iParam0, iParam1, 6, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0)){
return 1;
}
return 0;
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if(((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("pilot_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_8"), 0)){
return 1;
}}
break;
}
return 0;
return 0;
}

int func_1047(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_1048(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_560(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_559(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_558(iParam0, func_559(iParam2)) + iVar4);
}}
return -99;
}

int func_1048(int iParam0){
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

int func_1049(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
iVar1=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_557(iParam0, iParam1, 4, 3);
iVar1=func_556(iVar0);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
iVar2=1;
if((((((((((((((((((((((((iParam1 >=32 && iParam1 <=47) || (iParam1 >=64 && iParam1 <=79)) || (iParam1 >=96 && iParam1 <=111)) || (iParam1 >=176 && iParam1 <=191)) || (iParam1 >=192 && iParam1 <=207)) || (iParam1 >=224 && iParam1 <=239)) || (iParam1 >=240 && iParam1 <=255)) || iVar1==2) || iVar1==4) || iVar1==6) || iVar1==11) || iVar1==12) || iVar1==14) || iVar1==15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("skinny"), 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1854729816, 0)){
iVar2=0;
}
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("battle_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("battle_draw_2"), 0)){
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
iVar2=1;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0)){
iVar2=0;
}else{
iVar2=1;
}}
return iVar2;
}
break;
case joaat("mp_f_freemode_01"):
if(iParam1 >=256){
iVar0=func_557(iParam0, iParam1, 4, 4);
iVar1=func_556(iVar0);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("has_alt_version"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0)){
return 0;
}}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gun_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("gorka_suit"), 0)){
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("biker_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("smug_draw_1"), 0)){
return 1;
}
return 0;
}
if(((((((((((((((((((((((((((iParam1 >=16 && iParam1 <=31) || (iParam1 >=48 && iParam1 <=63)) || (iParam1 >=96 && iParam1 <=111)) || iVar1==1) || iVar1==3) || iVar1==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("dungarees"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("h3_draw_5"), 0)){
return 1;
}}
break;
}
return 0;
}

int func_1050(int iParam0, int iParam1){
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("has_alt_version"), 0)){
return 1;
}
break;
case joaat("mp_f_freemode_01"):
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("cowboy_boots"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("has_alt_version"), 0)){
return 1;
}
break;
}
return 0;
}

int func_1051(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_557(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_1047(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_1052(int iParam0, int iParam1, int iParam2, var uParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
iVar0=func_557(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_1047(iParam0, iVar3, iParam1, 4);
return 1;
}
}}
iVar2++;
}
}}
break;
}
break;
}
return 0;
}

int func_1053(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_557(iParam0, iParam2, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress_legs"), 0)){
return 1;
}}
break;
}
break;
}
return 0;
}

int func_1054(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_557(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}


void func_1055(int iParam0, int iParam1){
int iVar0;
iVar0=func_1056(iParam1);
if(iVar0 !=joaat("p_parachute_s")){
PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
}else{
PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
}}

int func_1056(int iParam0){
if(iParam0 > 66){
return joaat("reh_p_para_bag_reh_s_01a");
}elseif(iParam0 > 63){
return joaat("p_para_bag_tr_s_01a");
}elseif(iParam0 > 61){
return joaat("vw_p_para_bag_vine_s");
}elseif(iParam0 > 51){
return joaat("lts_p_para_bag_pilot2_s");
}elseif(iParam0 > 46){
return joaat("p_para_bag_xmas_s");
}elseif(iParam0 > 26){
return joaat("lts_p_para_bag_lts_s");
}elseif(iParam0 > 0){
return joaat("lts_p_para_bag_pilot2_s");
}
return joaat("p_parachute_s");
}

int func_1057(int iParam0, int iParam1){
return 0;
}

int func_1058(int iParam0, int iParam1){
switch (iParam1){
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
return 9;
break;
case 11:
return 10;
break;
case 12:
return 11;
break;
case 13:
return 12;
break;
case 14:
return 13;
break;
case 15:
return 14;
break;
case 16:
return 15;
break;
case 17:
return 16;
break;
case 18:
return 17;
break;
case 19:
return 18;
break;
case 20:
return 19;
break;
case 21:
return 20;
break;
case 22:
return 21;
break;
case 23:
return 22;
break;
case 24:
return 23;
break;
case 25:
return 24;
break;
case 26:
return 25;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 2;
break;
case 30:
return 3;
break;
case 31:
return 4;
break;
case 32:
return 5;
break;
case 33:
return 6;
break;
case 34:
return 7;
break;
case 35:
return 8;
break;
case 36:
return 9;
break;
case 37:
return 10;
break;
case 38:
return 11;
break;
case 39:
return 12;
break;
case 40:
return 13;
break;
case 41:
return 14;
break;
case 42:
return 15;
break;
case 43:
return 16;
break;
case 44:
return 17;
break;
case 45:
return 18;
break;
case 46:
return 19;
break;
case 47:
return 0;
break;
case 48:
return 1;
break;
case 49:
return 2;
break;
case 50:
return 3;
break;
case 51:
return 4;
break;
case 52:
return 0;
break;
case 53:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 2;
break;
case 56:
return 3;
break;
case 57:
return 4;
break;
case 58:
return 5;
break;
case 59:
return 6;
break;
case 60:
return 7;
break;
case 61:
return 8;
break;
case 62:
return 0;
break;
case 63:
return 1;
break;
case 64:
return 0;
break;
case 65:
return 1;
break;
case 66:
return 2;
break;
case 67:
return 0;
break;
}
return 0;
}


var func__1059(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
bVar3=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=false;
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
iVar5=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
iVar6=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
if(((((((bVar3 !=Global_78530 || iParam1 !=Global_78531) || iVar4 !=Global_78532) || iVar5 !=Global_78533) || iVar6 !=Global_78534) || iVar0 !=Global_78535) || iVar1 !=Global_78536) || iVar2 !=Global_78537){
Global_78530=bVar3;
Global_78531=iParam1;
Global_78532=iVar4;
Global_78533=iVar5;
Global_78534=iVar6;
Global_78535=iVar0;
Global_78536=iVar1;
Global_78537=iVar2;
Global_78538=func_1060(iParam0, iParam1);
}
return Global_78538;
}

int func_1060(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0){
bVar1=true;
}
iVar2=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar3=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("over_jacket"), 8)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_1064(iParam0, iParam1, 1);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)){
return func_1064(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_1064(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_1064(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_1064(iParam0, iParam1, 10);
}}else{
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8)){
return func_1064(iParam0, iParam1, 6);
}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_1064(iParam0, iParam1, 7);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_1064(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_1064(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_1064(iParam0, iParam1, 10);
}}
return func_1064(iParam0, iParam1, 9);
}
if(func_1063(iParam0)){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}
if(iVar0 > 15){
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0)){
return func_1064(iParam0, iParam1, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0)){
return func_1064(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0)){
return func_1064(iParam0, iParam1, 2);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0)){
return func_1064(iParam0, iParam1, 3);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0)){
return func_1064(iParam0, iParam1, 4);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0)){
return func_1064(iParam0, iParam1, 5);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0)){
return func_1064(iParam0, iParam1, 6);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0)){
return func_1064(iParam0, iParam1, 7);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0)){
return func_1064(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0)){
return func_1064(iParam0, iParam1, 9);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0)){
return func_1064(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0)){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0)){
return func_1064(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if(bVar1){
return func_1064(iParam0, iParam1, 5);
}else{
return func_1064(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return func_1064(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
return func_1064(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return func_1064(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
return func_1064(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
return func_1064(iParam0, iParam1, 10);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
iVar5=func_1062(iVar4, 0);
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar5){
case 0:
return func_1064(iParam0, iParam1, 1);
break;
case 2:
return func_1064(iParam0, iParam1, 8);
break;
default:
iVar0=func_556(iVar4);
break;
}}else{
switch (iVar5){
case 2:
return func_1064(iParam0, iParam1, 6);
break;
default:
iVar0=func_556(iVar4);
break;
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0)){
iVar6=func_1061(iVar4, 0);
switch (iVar6){
case 4:
return func_1064(iParam0, iParam1, 7);
break;
case 5:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 7);
}
break;
case 6:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 7);
}
break;
case 7:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 7);
}
break;
case 11:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 7);
}
break;
case 12:
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}
break;
case 13:
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 9);
}
break;
case 14:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 9);
}
break;
default:
iVar0=func_556(iVar4);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 2);
}}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 1);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 8);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0)){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 2);
}}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 1);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 5);
}}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 8);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0)){
if(iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 1);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 5);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 2);
}}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 2);
}}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}else{
return func_1064(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 6);
}}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 2);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_22"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 2);
}}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}elseif(bVar1){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_13"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_16"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_27"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_23"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
iVar0=7;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 0);
}else{
return func_1064(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 3);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 9);
}else{
return func_1064(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 10);
}else{
return func_1064(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("vest_shirt"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tails_jacket"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 7);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
return func_1064(iParam0, iParam1, 6);
}else{
iVar7=iVar0;
iVar0=func_556(iVar4);
}}
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar0){
case 0:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 2:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 6);
}
break;
case 3:
if(bVar1){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 2);
}
break;
case 4:
if(bVar1){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 2);
}
break;
case 5:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 1);
}
break;
case 7:
if(bVar1){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 2);
}
break;
case 8:
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 9:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 10:
if(bVar1){
return func_1064(iParam0, iParam1, 2);
}else{
return func_1064(iParam0, iParam1, 2);
}
break;
case 11:
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 1);
}
break;
case 12:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 1);
}
break;
case 14:
if(bVar1){
return func_1064(iParam0, iParam1, 5);
}else{
return func_1064(iParam0, iParam1, 5);
}
break;
case 15:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 4);
}
break;
}}else{
switch (iVar0){
case 0:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 6);
}
break;
case 2:
if(bVar1){
return func_1064(iParam0, iParam1, 3);
}else{
return func_1064(iParam0, iParam1, 2);
}
break;
case 3:
if(bVar1){
return func_1064(iParam0, iParam1, 5);
}else{
return func_1064(iParam0, iParam1, 4);
}
break;
case 4:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 5:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 6);
}
break;
case 7:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 6);
}
break;
case 8:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 6);
}
break;
case 9:
return func_1064(iParam0, iParam1, 1);
break;
case 10:
if(bVar1){
return func_1064(iParam0, iParam1, 6);
}else{
return func_1064(iParam0, iParam1, 6);
}
break;
case 11:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 12:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
case 14:
if(bVar1){
return func_1064(iParam0, iParam1, 7);
}else{
return func_1064(iParam0, iParam1, 3);
}
break;
case 15:
if(bVar1){
return func_1064(iParam0, iParam1, 1);
}else{
return func_1064(iParam0, iParam1, 0);
}
break;
}}
return func_1064(iParam0, iParam1, 0);
return 0;
}

int func_1061(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_12"), iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_13"), iParam1)){
iVar0=13;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_14"), iParam1)){
iVar0=14;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_15"), iParam1)){
iVar0=15;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_16"), iParam1)){
iVar0=16;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("heist_draw_17"), iParam1)){
iVar0=17;
}
return iVar0;
}

int func_1062(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_0"), iParam1)){
iVar0=0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_1"), iParam1)){
iVar0=1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_2"), iParam1)){
iVar0=2;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_3"), iParam1)){
iVar0=3;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_4"), iParam1)){
iVar0=4;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_5"), iParam1)){
iVar0=5;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_6"), iParam1)){
iVar0=6;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_7"), iParam1)){
iVar0=7;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_8"), iParam1)){
iVar0=8;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_9"), iParam1)){
iVar0=9;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_10"), iParam1)){
iVar0=10;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("luxe_draw_11"), iParam1)){
iVar0=11;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1)){
iVar0=12;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1)){
iVar0=13;
}
return iVar0;
}

int func_1063(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("dungarees"))){
return 1;
}
return 0;
}

int func_1064(int iParam0, int iParam1, int iParam2){
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 3;
break;
case 3:
return 4;
break;
case 4:
return 5;
break;
case 5:
return 6;
break;
case 6:
return 7;
break;
case 7:
return 8;
break;
case 8:
return 19;
break;
case 9:
return 48;
break;
case 10:
return 62;
break;
}
break;
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
case 22:
case 23:
case 24:
case 25:
case 26:
switch (iParam2){
case 0:
return 10;
break;
case 1:
return 11;
break;
case 2:
return 12;
break;
case 3:
return 13;
break;
case 4:
return 14;
break;
case 5:
return 15;
break;
case 6:
return 16;
break;
case 7:
return 17;
break;
case 8:
return 18;
break;
case 9:
return 49;
break;
case 10:
return 64;
break;
}
break;
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
case 42:
case 43:
case 44:
case 45:
case 46:
switch (iParam2){
case 0:
return 21;
break;
case 1:
return 22;
break;
case 2:
return 23;
break;
case 3:
return 24;
break;
case 4:
return 25;
break;
case 5:
return 26;
break;
case 6:
return 27;
break;
case 7:
return 28;
break;
case 8:
return 29;
break;
case 9:
return 50;
break;
case 10:
return 65;
break;
}
break;
case 47:
case 48:
case 49:
case 50:
case 51:
switch (iParam2){
case 0:
return 31;
break;
case 1:
return 32;
break;
case 2:
return 33;
break;
case 3:
return 34;
break;
case 4:
return 35;
break;
case 5:
return 36;
break;
case 6:
return 37;
break;
case 7:
return 38;
break;
case 8:
return 39;
break;
case 9:
return 51;
break;
case 10:
return 66;
break;
}
break;
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 60:
case 61:
switch (iParam2){
case 0:
return 52;
break;
case 1:
return 53;
break;
case 2:
return 54;
break;
case 3:
return 55;
break;
case 4:
return 56;
break;
case 5:
return 57;
break;
case 6:
return 58;
break;
case 7:
return 59;
break;
case 8:
return 60;
break;
case 9:
return 61;
break;
case 10:
return 69;
break;
}
break;
case 62:
case 63:
switch (iParam2){
case 0:
return 70;
break;
case 1:
return 71;
break;
case 2:
return 72;
break;
case 3:
return 73;
break;
case 4:
return 74;
break;
case 5:
return 75;
break;
case 6:
return 76;
break;
case 7:
return 77;
break;
case 8:
return 78;
break;
case 9:
return 79;
break;
case 10:
return 80;
break;
}
break;
case 64:
case 65:
case 66:
switch (iParam2){
case 0:
return 89;
break;
case 1:
return 90;
break;
case 2:
return 91;
break;
case 3:
return 92;
break;
case 4:
return 93;
break;
case 5:
return 94;
break;
case 6:
return 95;
break;
case 7:
return 96;
break;
case 8:
return 97;
break;
case 9:
return 98;
break;
case 10:
return 99;
break;
}
break;
case 67:
switch (iParam2){
case 0:
return 100;
break;
case 1:
return 101;
break;
case 2:
return 102;
break;
case 3:
return 103;
break;
case 4:
return 104;
break;
case 5:
return 105;
break;
case 6:
return 106;
break;
case 7:
return 107;
break;
case 8:
return 108;
break;
case 9:
return 109;
break;
case 10:
return 110;
break;
}
break;
}
return 0;
}

int func_1065(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
var uVar8;
var uVar9;
int iVar10;
var uVar11;
int iVar12;
int iVar13;
var uVar14;
var uVar15;
int iVar16;
struct<5> Var17;
var uVar18;
if(PED::IS_PED_INJURED(iParam0)){
return 0;
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
Global_78341[1 /*14*/]={
func_1173(iVar0, iParam1, iParam2, -1) 
};
uVar2=Global_2883588;
uVar3=Global_2883589;
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar8={
func_1162(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 < 7){
switch (iVar7){
case 0:
iVar4=1;
break;
case 1:
iVar4=4;
break;
case 2:
iVar4=6;
break;
case 3:
iVar4=7;
break;
case 4:
iVar4=8;
break;
case 5:
iVar4=11;
break;
case 6:
iVar4=13;
break;
}
if(uVar8[iVar4] !=-99){
if(!func_1065(iParam0, iVar4, uVar8[iVar4])){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
if(iVar4==13){
uVar9={
func_1159(iVar0, uVar8[iVar4]) 
};
iVar5=0;
while (iVar5 <=8){
if(!func_1065(iParam0, 14, uVar9[iVar5])){
iVar6=0;
while (iVar6 <=19){
Global_78341[2 /*14*/]={
func_1173(iVar0, 14, iVar6, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar5){
if(func_1065(iParam0, 14, iVar6)){
if(!func_1066(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}
}
}
iVar6++;
}}
iVar5++;
}}else{
iVar1=func_561(iParam0, iVar4);
Global_78341[2 /*14*/]={
func_1173(iVar0, iVar4, iVar1, -1) 
};
if(!func_1066(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}}}
iVar7++;
}
if((uVar8[10] !=0 && uVar8[10] !=joaat("0")) && uVar8.f_16){
if(func_304(1759, Global_78338, 0) !=uVar8[10]){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}
Global_2883588=uVar2;
Global_2883589=uVar3;
return 1;
}elseif(iParam1==13){
uVar11={
func_1159(iVar0, iParam2) 
};
iVar10=0;
while (iVar10 <=8){
if(!func_1065(iParam0, 14, uVar11[iVar10])){
return 0;
}
iVar10++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}
if(((Global_78341[1 /*14*/].f_12==0 && MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("helmet"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0){
iVar16=FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
iVar12=0;
while (iVar12 < iVar16){
FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
if(iVar13 !=0 && iVar13 !=joaat("0")){
FILES::INIT_SHOP_PED_PROP(&Var17);
FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
if(Var17.f_3==PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1) && Var17.f_4==PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)){
return 1;
}}
iVar12++;
}}}else{
if(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_559(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_559(iParam1))){
return 1;
}
if(iParam1==4){
Global_78340++;
if(Global_78340==1){
if(func_1054(iVar0, 11, func_561(iParam0, 11), -1)){
if(func_1052(iVar0, 4, iParam2, &uVar18)){
return func_1065(iParam0, 4, uVar18);
}}elseif(func_1051(iVar0, 4, iParam2, &uVar18)){
return func_1065(iParam0, 4, uVar18);
}}
Global_78340=(Global_78340 - 1);
}}
return 0;
}

int func_1066(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
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
func_1159(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_1070(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_1069(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_1068(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_1067(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_1069(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_1068(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_1067(iParam0, iParam2, iParam3, -1)){
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
if(func_1069(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_1068(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_1067(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_1067(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_557(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_557(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iParam0, iParam2, 1, 3), -1842686353, 0));
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
iParam3=func_557(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_557(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_557(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_1068(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_557(iParam0, iParam2, 1, 3);
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
iParam3=func_557(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_1069(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_557(iParam0, iParam2, 14, 3);
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
iParam3=func_557(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_1070(int iParam0, int iParam1, int iParam2){
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

int func_1071(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(func_1063(iParam0)){
return -99;
}
if(func_1072(iParam0)){
return -99;
}
if(iParam2==11){
if(iParam1==joaat("mp_m_freemode_01")){
if(((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=16 && iParam3 <=31)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=140 && iParam3 <=155)) || (iParam3 >=188 && iParam3 <=203)){
return 1;
}elseif(iParam3 >=32 && iParam3 <=47){
return 6;
}elseif(((iParam3 >=48 && iParam3 <=63) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=108 && iParam3 <=123)){
return 11;
}elseif(iParam3 >=96 && iParam3 <=107){
return 41;
}elseif(iParam3 >=156 && iParam3 <=171){
return 36;
}elseif(iParam3 >=172 && iParam3 <=187){
return 31;
}elseif(iParam3 >=204 && iParam3 <=219){
return 16;
}elseif((iParam3 >=220 && iParam3 <=235) || (iParam3 >=124 && iParam3 <=139)){
return 26;
}elseif(iParam3==236){
return 21;
}elseif(iParam3 >=237){
iVar0=func_557(iParam1, iParam3, 11, 3);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==9){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_1047(iParam1, iVar3, 9, 3);
}else{
return uVar4;
}
}
iVar2++;
}}
return -99;
}}elseif(iParam1==joaat("mp_f_freemode_01")){
if((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=192 && iParam3 <=207)) || (iParam3 >=208 && iParam3 <=223)) || (iParam3 >=240 && iParam3 <=255)){
return 1;
}elseif(((iParam3 >=16 && iParam3 <=31) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=128 && iParam3 <=143)){
return 16;
}elseif(iParam3 >=32 && iParam3 <=47){
return 6;
}elseif(iParam3 >=48 && iParam3 <=63){
return 11;
}elseif((iParam3 >=96 && iParam3 <=111) || (iParam3 >=160 && iParam3 <=175)){
return 21;
}elseif(iParam3 >=224 && iParam3 <=239){
return 26;
}elseif(iParam3 >=144 && iParam3 <=159){
return 0;
}elseif(iParam3 >=80 && iParam3 <=95){
return 31;
}elseif(iParam3 >=256){
iVar6=func_557(iParam1, iParam3, 11, 4);
if(iVar6 !=-1){
iVar7=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==9){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_1047(iParam1, iVar9, 9, 4);
}else{
return uVar10;
}
}
iVar8++;
}}
return -99;
}}}
return -99;
}

int func_1072(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("x17_draw_6"))){
return 1;
}
return 0;
}

int func_1073(int iParam0){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0 && !FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 9, -138631194)){
return 1;
}}
return 0;
}


void func_1074(int iParam0, int iParam1){
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
if(func_1087()){
return;
}
PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
iVar1=func_304(2097, iParam1, 0);
iVar2=func_304(2098, iParam1, 0);
iVar3=func_304(2099, iParam1, 0);
iVar4=func_304(2100, iParam1, 0);
iVar5=func_304(2101, iParam1, 0);
iVar6=func_304(2102, iParam1, 0);
fVar7=func_1088(134, iParam1);
fVar8=func_1088(135, iParam1);
fVar9=func_1088(136, iParam1);
bVar10=func_601(160, iParam1);
if(((((((((Var0.f_0 !=iVar1 || Var0.f_1 !=iVar2) || Var0.f_2 !=iVar3) || Var0.f_3 !=iVar4) || Var0.f_4 !=iVar5) || Var0.f_5 !=iVar6) || Var0.f_6 !=fVar7) || Var0.f_7 !=fVar8) || Var0.f_8 !=fVar9) || Var0.f_9 !=bVar10){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
iVar11=func_304(2103, iParam1, 0);
if(iVar11 > 0){
func_1075(iParam0, iParam1, 0);
}}}


void func_1075(int iParam0, int iParam1, bool bParam2){
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
int iVar10;
var uVar11;
var uVar12;
int iVar13;
int iVar14;
var uVar15;
iVar0=0;
while (iVar0 < 20){
iVar1=iVar0;
iVar2=func_1086(iVar1);
if(!bParam2){
fVar3=func_1088(iVar2, iParam1);
}else{
fVar3=func_1085(iVar2, iParam1);
}
PED::SET_PED_MICRO_MORPH(iParam0, iVar1, fVar3);
iVar0++;
}
iVar4=0;
while (iVar4 < 13){
iVar5=func_1084(iVar4);
iVar6=func_1083(iVar5);
iVar7=func_1082(iVar5);
if(iVar6 !=-1 && iVar7 !=-1){
if(!bParam2){
iVar10=func_744(iVar6, iParam1);
uVar11=func_1088(iVar7, iParam1);
}else{
iVar10=func_1081(iVar6, iParam1);
uVar11=func_1085(iVar7, iParam1);
}
PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, uVar11);
iVar8=func_1080(iVar5);
iVar9=func_1079(iVar5);
if(iVar8 !=-1){
if(!bParam2){
iVar13=func_304(iVar8, iParam1, 0);
iVar14=func_304(iVar9, iParam1, 0);
}else{
iVar13=func_1078(iVar8, iParam1);
iVar14=func_1078(iVar9, iParam1);
}
func_1077(iVar13, &uVar12, &uVar15);
PED::SET_PED_HEAD_OVERLAY_TINT(iParam0, iVar5, uVar15, uVar12, iVar14);
}}
iVar4++;
}
func_1076(&iParam0, iParam1, bParam2);
}


void func_1076(int iParam0, int iParam1, bool bParam2){
float fVar0;
if(!bParam2){
fVar0=func_1088(157, iParam1);
}else{
fVar0=func_1085(157, iParam1);
}
if(*iParam0==PLAYER::PLAYER_PED_ID()){}
PED::SET_HEAD_BLEND_EYE_COLOR(*iParam0, round(fVar0));
}


void func_1077(int iParam0, var uParam1, var uParam2){
int iVar0;
*uParam1=shift_right(iParam0, 16);
iVar0=iParam0 & 65535;
*uParam2=iVar0;
}

int func_1078(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2805029[iParam0 /*3*/][func_30(iParam1)];
if(HUD::GET_MENU_PED_INT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0;
}

int func_1079(int iParam0){
switch (iParam0){
case 2:
return 2161;
case 1:
return 2162;
case 5:
return 2163;
case 8:
return 2164;
case 10:
return 2159;
default:
}
return -1;
}

int func_1080(int iParam0){
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

int func_1081(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(iParam1==-1){
iParam1=func_8();
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

int func_1082(int iParam0){
switch (iParam0){
case 3:
return 90;
case 7:
return 93;
case 0:
return 87;
case 6:
return 92;
case 2:
return 89;
case 1:
return 88;
case 4:
return 91;
case 8:
return 158;
case 9:
return 159;
case 5:
return 160;
case 10:
return 163;
case 11:
return 161;
case 12:
return 162;
default:
}
return -1;
}

int func_1083(int iParam0){
switch (iParam0){
case 3:
return 450;
case 7:
return 453;
case 0:
return 447;
case 6:
return 452;
case 2:
return 449;
case 1:
return 448;
case 4:
return 451;
case 8:
return 3940;
case 9:
return 3941;
case 5:
return 3942;
case 10:
return 3943;
case 11:
return 3944;
case 12:
return 3945;
default:
}
return -1;
}

int func_1084(int iParam0){
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


float func_1085(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_30(iParam1)];
if(HUD::GET_MENU_PED_FLOAT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0f;
}

int func_1086(int iParam0){
switch (iParam0){
case 0:
return 137;
case 1:
return 138;
case 2:
case 3:
}