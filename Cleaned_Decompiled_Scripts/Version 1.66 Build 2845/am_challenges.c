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
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
bool bLocal_95=0;
bool bLocal_96=0;
int iLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
struct<3> Local_101={
0, 0, 0 
};
struct<3> Local_102[65];
float fLocal_103=0f;
struct<3> Local_104={
0, 0, 0 
};
struct<3> Local_105={
0, 0, 0 
};
struct<3> Local_106={
0, 0, 0 
};
struct<3> Local_107={
0, 0, 0 
};
float fLocal_108=0f;
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
int iLocal_121=0;
int iLocal_122=0;
var uLocal_123=0;
int iLocal_124=0;
int iLocal_125=0;
int iLocal_126=0;
bool bLocal_127=0;
int iLocal_128=0;
float fLocal_129=0f;
int iLocal_130=0;
int iLocal_131=0;
int iLocal_132=0;
int iLocal_133=0;
bool bLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
bool bLocal_142=0;
struct<3> Local_143[65];
var uLocal_144[65]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_145[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_146=0;
int iLocal_147=0;
var uLocal_148=0;
int iLocal_149[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_150=0;
int iLocal_151=0;
struct<68> Local_152={
0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 
};
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
struct<535> Local_173={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 
};
var uLocal_174=-1;
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
var uLocal_196=-1082130432;
var uLocal_197=3;
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
var uLocal_213=-1;
var uLocal_214=0;
var uLocal_215=-1;
var uLocal_216=-1;
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
var uLocal_238=-1082130432;
var uLocal_239=3;
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
var uLocal_255=-1;
var uLocal_256=0;
var uLocal_257=-1;
var uLocal_258=-1;
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
var uLocal_280=-1082130432;
var uLocal_281=3;
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
var uLocal_297=-1;
var uLocal_298=0;
var uLocal_299=-1;
var uLocal_300=-1;
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
var uLocal_322=-1082130432;
var uLocal_323=3;
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
var uLocal_339=-1;
var uLocal_340=0;
var uLocal_341=-1;
var uLocal_342=-1;
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
var uLocal_364=-1082130432;
var uLocal_365=3;
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
var uLocal_381=-1;
var uLocal_382=0;
var uLocal_383=-1;
var uLocal_384=-1;
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
var uLocal_406=-1082130432;
var uLocal_407=3;
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
var uLocal_423=-1;
var uLocal_424=0;
var uLocal_425=-1;
var uLocal_426=-1;
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
var uLocal_448=-1082130432;
var uLocal_449=3;
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
var uLocal_465=-1;
var uLocal_466=0;
var uLocal_467=-1;
var uLocal_468=-1;
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
var uLocal_490=-1082130432;
var uLocal_491=3;
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
var uLocal_507=-1;
var uLocal_508=0;
var uLocal_509=-1;
var uLocal_510=-1;
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
var uLocal_532=-1082130432;
var uLocal_533=3;
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
var uLocal_549=-1;
var uLocal_550=0;
var uLocal_551=-1;
var uLocal_552=-1;
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
var uLocal_574=-1082130432;
var uLocal_575=3;
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
var uLocal_591=-1;
var uLocal_592=0;
var uLocal_593=-1;
var uLocal_594=-1;
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
var uLocal_616=-1082130432;
var uLocal_617=3;
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
var uLocal_633=-1;
var uLocal_634=0;
var uLocal_635=-1;
var uLocal_636=-1;
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
var uLocal_658=-1082130432;
var uLocal_659=3;
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
var uLocal_675=-1;
var uLocal_676=0;
var uLocal_677=-1;
var uLocal_678=-1;
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
var uLocal_700=-1082130432;
var uLocal_701=3;
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
var uLocal_717=-1;
var uLocal_718=0;
var uLocal_719=-1;
var uLocal_720=-1;
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
var uLocal_742=-1082130432;
var uLocal_743=3;
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
var uLocal_759=-1;
var uLocal_760=0;
var uLocal_761=-1;
var uLocal_762=-1;
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
var uLocal_784=-1082130432;
var uLocal_785=3;
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
var uLocal_801=-1;
var uLocal_802=0;
var uLocal_803=-1;
var uLocal_804=-1;
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
var uLocal_826=-1082130432;
var uLocal_827=3;
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
var uLocal_843=-1;
var uLocal_844=0;
var uLocal_845=-1;
var uLocal_846=-1;
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
var uLocal_868=-1082130432;
var uLocal_869=3;
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
var uLocal_885=-1;
var uLocal_886=0;
var uLocal_887=-1;
var uLocal_888=-1;
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
var uLocal_910=-1082130432;
var uLocal_911=3;
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
var uLocal_927=-1;
var uLocal_928=0;
var uLocal_929=-1;
var uLocal_930=-1;
var uLocal_931=0;
var uLocal_932=0;
var uLocal_933=0;
var uLocal_934=0;
var uLocal_935=0;
var uLocal_936=0;
var uLocal_937=0;
var uLocal_938=0;
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
var uLocal_952=-1082130432;
var uLocal_953=3;
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
var uLocal_969=-1;
var uLocal_970=0;
var uLocal_971=-1;
var uLocal_972=-1;
var uLocal_973=0;
var uLocal_974=0;
var uLocal_975=0;
var uLocal_976=0;
var uLocal_977=0;
var uLocal_978=0;
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
var uLocal_990=0;
var uLocal_991=0;
var uLocal_992=0;
var uLocal_993=0;
var uLocal_994=-1082130432;
var uLocal_995=3;
var uLocal_996=0;
var uLocal_997=0;
var uLocal_998=0;
var uLocal_999=0;
var uLocal_1000=0;
var uLocal_1001=0;
var uLocal_1002=0;
var uLocal_1003=0;
var uLocal_1004=0;
var uLocal_1005=0;
var uLocal_1006=0;
var uLocal_1007=0;
var uLocal_1008=0;
var uLocal_1009=0;
var uLocal_1010=0;
var uLocal_1011=-1;
var uLocal_1012=0;
var uLocal_1013=-1;
var uLocal_1014=-1;
var uLocal_1015=0;
var uLocal_1016=0;
var uLocal_1017=0;
var uLocal_1018=0;
var uLocal_1019=0;
var uLocal_1020=0;
var uLocal_1021=0;
var uLocal_1022=0;
var uLocal_1023=0;
var uLocal_1024=0;
var uLocal_1025=0;
var uLocal_1026=0;
var uLocal_1027=0;
var uLocal_1028=0;
var uLocal_1029=0;
var uLocal_1030=0;
var uLocal_1031=0;
var uLocal_1032=0;
var uLocal_1033=0;
var uLocal_1034=0;
var uLocal_1035=0;
var uLocal_1036=-1082130432;
var uLocal_1037=3;
var uLocal_1038=0;
var uLocal_1039=0;
var uLocal_1040=0;
var uLocal_1041=0;
var uLocal_1042=0;
var uLocal_1043=0;
var uLocal_1044=0;
var uLocal_1045=0;
var uLocal_1046=0;
var uLocal_1047=0;
var uLocal_1048=0;
var uLocal_1049=0;
var uLocal_1050=0;
var uLocal_1051=0;
var uLocal_1052=0;
var uLocal_1053=-1;
var uLocal_1054=0;
var uLocal_1055=-1;
var uLocal_1056=-1;
var uLocal_1057=0;
var uLocal_1058=0;
var uLocal_1059=0;
var uLocal_1060=0;
var uLocal_1061=0;
var uLocal_1062=0;
var uLocal_1063=0;
var uLocal_1064=0;
var uLocal_1065=0;
var uLocal_1066=0;
var uLocal_1067=0;
var uLocal_1068=0;
var uLocal_1069=0;
var uLocal_1070=0;
var uLocal_1071=0;
var uLocal_1072=0;
var uLocal_1073=0;
var uLocal_1074=0;
var uLocal_1075=0;
var uLocal_1076=0;
var uLocal_1077=0;
var uLocal_1078=-1082130432;
var uLocal_1079=3;
var uLocal_1080=0;
var uLocal_1081=0;
var uLocal_1082=0;
var uLocal_1083=0;
var uLocal_1084=0;
var uLocal_1085=0;
var uLocal_1086=0;
var uLocal_1087=0;
var uLocal_1088=0;
var uLocal_1089=0;
var uLocal_1090=0;
var uLocal_1091=0;
var uLocal_1092=0;
var uLocal_1093=0;
var uLocal_1094=0;
var uLocal_1095=-1;
var uLocal_1096=0;
var uLocal_1097=-1;
var uLocal_1098=-1;
var uLocal_1099=0;
var uLocal_1100=0;
var uLocal_1101=0;
var uLocal_1102=0;
var uLocal_1103=0;
var uLocal_1104=0;
var uLocal_1105=0;
var uLocal_1106=0;
var uLocal_1107=0;
var uLocal_1108=0;
var uLocal_1109=0;
var uLocal_1110=0;
var uLocal_1111=0;
var uLocal_1112=0;
var uLocal_1113=0;
var uLocal_1114=0;
var uLocal_1115=0;
var uLocal_1116=0;
var uLocal_1117=0;
var uLocal_1118=0;
var uLocal_1119=0;
var uLocal_1120=-1082130432;
var uLocal_1121=3;
var uLocal_1122=0;
var uLocal_1123=0;
var uLocal_1124=0;
var uLocal_1125=0;
var uLocal_1126=0;
var uLocal_1127=0;
var uLocal_1128=0;
var uLocal_1129=0;
var uLocal_1130=0;
var uLocal_1131=0;
var uLocal_1132=0;
var uLocal_1133=0;
var uLocal_1134=0;
var uLocal_1135=0;
var uLocal_1136=0;
var uLocal_1137=-1;
var uLocal_1138=0;
var uLocal_1139=-1;
var uLocal_1140=-1;
var uLocal_1141=0;
var uLocal_1142=0;
var uLocal_1143=0;
var uLocal_1144=0;
var uLocal_1145=0;
var uLocal_1146=0;
var uLocal_1147=0;
var uLocal_1148=0;
var uLocal_1149=0;
var uLocal_1150=0;
var uLocal_1151=0;
var uLocal_1152=0;
var uLocal_1153=0;
var uLocal_1154=0;
var uLocal_1155=0;
var uLocal_1156=0;
var uLocal_1157=0;
var uLocal_1158=0;
var uLocal_1159=0;
var uLocal_1160=0;
var uLocal_1161=0;
var uLocal_1162=-1082130432;
var uLocal_1163=3;
var uLocal_1164=0;
var uLocal_1165=0;
var uLocal_1166=0;
var uLocal_1167=0;
var uLocal_1168=0;
var uLocal_1169=0;
var uLocal_1170=0;
var uLocal_1171=0;
var uLocal_1172=0;
var uLocal_1173=0;
var uLocal_1174=0;
var uLocal_1175=0;
var uLocal_1176=0;
var uLocal_1177=0;
var uLocal_1178=0;
var uLocal_1179=-1;
var uLocal_1180=0;
var uLocal_1181=-1;
var uLocal_1182=-1;
var uLocal_1183=0;
var uLocal_1184=0;
var uLocal_1185=0;
var uLocal_1186=0;
var uLocal_1187=0;
var uLocal_1188=0;
var uLocal_1189=0;
var uLocal_1190=0;
var uLocal_1191=0;
var uLocal_1192=0;
var uLocal_1193=0;
var uLocal_1194=0;
var uLocal_1195=0;
var uLocal_1196=0;
var uLocal_1197=0;
var uLocal_1198=0;
var uLocal_1199=0;
var uLocal_1200=0;
var uLocal_1201=0;
var uLocal_1202=0;
var uLocal_1203=0;
var uLocal_1204=-1082130432;
var uLocal_1205=3;
var uLocal_1206=0;
var uLocal_1207=0;
var uLocal_1208=0;
var uLocal_1209=0;
var uLocal_1210=0;
var uLocal_1211=0;
var uLocal_1212=0;
var uLocal_1213=0;
var uLocal_1214=0;
var uLocal_1215=0;
var uLocal_1216=0;
var uLocal_1217=0;
var uLocal_1218=0;
var uLocal_1219=0;
var uLocal_1220=0;
var uLocal_1221=-1;
var uLocal_1222=0;
var uLocal_1223=-1;
var uLocal_1224=-1;
var uLocal_1225=0;
var uLocal_1226=0;
var uLocal_1227=0;
var uLocal_1228=0;
var uLocal_1229=0;
var uLocal_1230=0;
var uLocal_1231=0;
var uLocal_1232=0;
var uLocal_1233=0;
var uLocal_1234=0;
var uLocal_1235=0;
var uLocal_1236=0;
var uLocal_1237=0;
var uLocal_1238=0;
var uLocal_1239=0;
var uLocal_1240=0;
var uLocal_1241=0;
var uLocal_1242=0;
var uLocal_1243=0;
var uLocal_1244=0;
var uLocal_1245=0;
var uLocal_1246=-1082130432;
var uLocal_1247=3;
var uLocal_1248=0;
var uLocal_1249=0;
var uLocal_1250=0;
var uLocal_1251=0;
var uLocal_1252=0;
var uLocal_1253=0;
var uLocal_1254=0;
var uLocal_1255=0;
var uLocal_1256=0;
var uLocal_1257=0;
var uLocal_1258=0;
var uLocal_1259=0;
var uLocal_1260=0;
var uLocal_1261=0;
var uLocal_1262=0;
var uLocal_1263=-1;
var uLocal_1264=0;
var uLocal_1265=-1;
var uLocal_1266=-1;
var uLocal_1267=0;
var uLocal_1268=0;
var uLocal_1269=0;
var uLocal_1270=0;
var uLocal_1271=0;
var uLocal_1272=0;
var uLocal_1273=0;
var uLocal_1274=0;
var uLocal_1275=0;
var uLocal_1276=0;
var uLocal_1277=0;
var uLocal_1278=0;
var uLocal_1279=0;
var uLocal_1280=0;
var uLocal_1281=0;
var uLocal_1282=0;
var uLocal_1283=0;
var uLocal_1284=0;
var uLocal_1285=0;
var uLocal_1286=0;
var uLocal_1287=0;
var uLocal_1288=-1082130432;
var uLocal_1289=3;
var uLocal_1290=0;
var uLocal_1291=0;
var uLocal_1292=0;
var uLocal_1293=0;
var uLocal_1294=0;
var uLocal_1295=0;
var uLocal_1296=0;
var uLocal_1297=0;
var uLocal_1298=0;
var uLocal_1299=0;
var uLocal_1300=0;
var uLocal_1301=0;
var uLocal_1302=0;
var uLocal_1303=0;
var uLocal_1304=0;
var uLocal_1305=-1;
var uLocal_1306=0;
var uLocal_1307=-1;
var uLocal_1308=-1;
var uLocal_1309=0;
var uLocal_1310=0;
var uLocal_1311=0;
var uLocal_1312=0;
var uLocal_1313=0;
var uLocal_1314=0;
var uLocal_1315=0;
var uLocal_1316=0;
var uLocal_1317=0;
var uLocal_1318=0;
var uLocal_1319=0;
var uLocal_1320=0;
var uLocal_1321=0;
var uLocal_1322=0;
var uLocal_1323=0;
var uLocal_1324=0;
var uLocal_1325=0;
var uLocal_1326=0;
var uLocal_1327=0;
var uLocal_1328=0;
var uLocal_1329=0;
var uLocal_1330=-1082130432;
var uLocal_1331=3;
var uLocal_1332=0;
var uLocal_1333=0;
var uLocal_1334=0;
var uLocal_1335=0;
var uLocal_1336=0;
var uLocal_1337=0;
var uLocal_1338=0;
var uLocal_1339=0;
var uLocal_1340=0;
var uLocal_1341=0;
var uLocal_1342=0;
var uLocal_1343=0;
var uLocal_1344=0;
var uLocal_1345=0;
var uLocal_1346=0;
var uLocal_1347=-1;
var uLocal_1348=0;
var uLocal_1349=-1;
var uLocal_1350=-1;
var uLocal_1351=0;
var uLocal_1352=0;
var uLocal_1353=0;
var uLocal_1354=0;
var uLocal_1355=0;
var uLocal_1356=0;
var uLocal_1357=0;
var uLocal_1358=0;
var uLocal_1359=0;
var uLocal_1360=0;
var uLocal_1361=0;
var uLocal_1362=0;
var uLocal_1363=0;
var uLocal_1364=0;
var uLocal_1365=0;
var uLocal_1366=0;
var uLocal_1367=0;
var uLocal_1368=0;
var uLocal_1369=0;
var uLocal_1370=0;
var uLocal_1371=0;
var uLocal_1372=-1082130432;
var uLocal_1373=3;
var uLocal_1374=0;
var uLocal_1375=0;
var uLocal_1376=0;
var uLocal_1377=0;
var uLocal_1378=0;
var uLocal_1379=0;
var uLocal_1380=0;
var uLocal_1381=0;
var uLocal_1382=0;
var uLocal_1383=0;
var uLocal_1384=0;
var uLocal_1385=0;
var uLocal_1386=0;
var uLocal_1387=0;
var uLocal_1388=0;
var uLocal_1389=-1;
var uLocal_1390=0;
var uLocal_1391=-1;
var uLocal_1392=-1;
var uLocal_1393=0;
var uLocal_1394=0;
var uLocal_1395=0;
var uLocal_1396=0;
var uLocal_1397=0;
var uLocal_1398=0;
var uLocal_1399=0;
var uLocal_1400=0;
var uLocal_1401=0;
var uLocal_1402=0;
var uLocal_1403=0;
var uLocal_1404=0;
var uLocal_1405=0;
var uLocal_1406=0;
var uLocal_1407=0;
var uLocal_1408=0;
var uLocal_1409=0;
var uLocal_1410=0;
var uLocal_1411=0;
var uLocal_1412=0;
var uLocal_1413=0;
var uLocal_1414=-1082130432;
var uLocal_1415=3;
var uLocal_1416=0;
var uLocal_1417=0;
var uLocal_1418=0;
var uLocal_1419=0;
var uLocal_1420=0;
var uLocal_1421=0;
var uLocal_1422=0;
var uLocal_1423=0;
var uLocal_1424=0;
var uLocal_1425=0;
var uLocal_1426=0;
var uLocal_1427=0;
var uLocal_1428=0;
var uLocal_1429=0;
var uLocal_1430=0;
var uLocal_1431=-1;
var uLocal_1432=0;
var uLocal_1433=-1;
var uLocal_1434=-1;
var uLocal_1435=0;
var uLocal_1436=0;
var uLocal_1437=0;
var uLocal_1438=0;
var uLocal_1439=0;
var uLocal_1440=0;
var uLocal_1441=0;
var uLocal_1442=0;
var uLocal_1443=0;
var uLocal_1444=0;
var uLocal_1445=0;
var uLocal_1446=0;
var uLocal_1447=0;
var uLocal_1448=0;
var uLocal_1449=0;
var uLocal_1450=0;
var uLocal_1451=0;
var uLocal_1452=0;
var uLocal_1453=0;
var uLocal_1454=0;
var uLocal_1455=0;
var uLocal_1456=-1082130432;
var uLocal_1457=3;
var uLocal_1458=0;
var uLocal_1459=0;
var uLocal_1460=0;
var uLocal_1461=0;
var uLocal_1462=0;
var uLocal_1463=0;
var uLocal_1464=0;
var uLocal_1465=0;
var uLocal_1466=0;
var uLocal_1467=0;
var uLocal_1468=0;
var uLocal_1469=0;
var uLocal_1470=0;
var uLocal_1471=0;
var uLocal_1472=0;
var uLocal_1473=-1;
var uLocal_1474=0;
var uLocal_1475=-1;
var uLocal_1476=-1;
var uLocal_1477=0;
var uLocal_1478=0;
var uLocal_1479=0;
var uLocal_1480=0;
var uLocal_1481=0;
var uLocal_1482=0;
var uLocal_1483=0;
var uLocal_1484=0;
var uLocal_1485=0;
var uLocal_1486=0;
var uLocal_1487=0;
var uLocal_1488=0;
var uLocal_1489=0;
var uLocal_1490=0;
var uLocal_1491=0;
var uLocal_1492=0;
var uLocal_1493=0;
var uLocal_1494=0;
var uLocal_1495=0;
var uLocal_1496=0;
var uLocal_1497=0;
var uLocal_1498=-1082130432;
var uLocal_1499=3;
var uLocal_1500=0;
var uLocal_1501=0;
var uLocal_1502=0;
var uLocal_1503=0;
var uLocal_1504=0;
var uLocal_1505=0;
var uLocal_1506=0;
var uLocal_1507=0;
var uLocal_1508=0;
var uLocal_1509=0;
var uLocal_1510=0;
var uLocal_1511=0;
var uLocal_1512=0;
var uLocal_1513=0;
var uLocal_1514=0;
var uLocal_1515=-1;
var uLocal_1516=0;
var uLocal_1517=-1;
struct<12> Local_1518[32];
struct<12> Local_1519={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<21> Local_1520={
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
fLocal_103=40000f;
iLocal_131=AUDIO::GET_SOUND_ID();
iLocal_132=AUDIO::GET_SOUND_ID();
iLocal_133=-1;
bLocal_134=-1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_787(ScriptParam_1520)){
func_749();
}}
while (true){
func_748();
if(func_744() || func_742()){
func_749();
}
if(func_740()){
func_749();
}
func_713();
switch (func_712(PLAYER::NETWORK_PLAYER_ID_TO_INT())){
case 0:
if(func_711()==1){
if(func_710()){
func_709(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
}}
break;
case 1:
if(func_711()==1){
func_147();
func_135();
}elseif(func_711()==3){
func_709(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
}
break;
case 3:
func_749();
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
switch (func_711()){
case 0:
if(func_121()){
func_120(1);
}
break;
case 1:
if(Local_152.f_37==6){
func_120(2);
}else{
func_3();
}
break;
case 2:
if(func_1(&uLocal_109, 1000, 0)){
func_120(3);
}
break;
case 3:
func_749();
break;
}}}}

int func_1(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_2(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_2(var uParam0, bool bParam1, bool bParam2){
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


void func_3(){
bool bVar0;
if(func_44(2, 0, 0, 0, 0)){
if(!MISC::IS_BIT_SET(Local_152.f_2, 0)){
MISC::SET_BIT(&(Local_152.f_2), false);
Local_152.f_1=NETWORK::GET_NETWORK_TIME();
}}
switch (Local_152.f_37){
case 0:
if(func_43()){
if(!func_31()){
bVar0=true;
}}
if(!bVar0){
func_30(1);
}
break;
case 1:
if(func_1(&(Local_152.f_43), func_29(), 0) || MISC::IS_BIT_SET(Local_152.f_2, 0)){
func_30(2);
}
func_31();
break;
case 2:
Local_152.f_38=NETWORK::GET_NETWORK_TIME();
func_30(3);
break;
case 3:
if(func_1(&(Local_152.f_39), func_28(0), 0) || MISC::IS_BIT_SET(Local_152.f_2, 0)){
if(!MISC::IS_BIT_SET(Local_152.f_2, 1)){
Local_152.f_1=NETWORK::GET_NETWORK_TIME();
MISC::SET_BIT(&(Local_152.f_2), true);
func_27(&(Local_152.f_39), 0, 0);
}else{
func_30(4);
}}
func_13();
func_9(&bLocal_134, &iLocal_133);
func_31();
break;
case 4:
if((func_1(&(Local_152.f_41), 20000, 0) || Local_152.f_4[0] < 0) || func_6()){
if(func_5(Local_152.f_3)){
func_27(&(Local_152.f_45), 0, 0);
func_30(5);
}else{
func_30(6);
}}else{
func_31();
}
break;
case 5:
if(func_4()){
func_30(6);
}
break;
case 6:
break;
}}

int func_4(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_152.f_67[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_152.f_67[iVar0 /*2*/].f_1), 0)){
return 0;
}
iVar0++;
}
return 1;
}

int func_5(int iParam0){
switch (iParam0){
case 1:
case 10:
case 6:
case 12:
case 11:
case 14:
return 1;
default:
}
return 0;
}

int func_6(){
int iVar0;
bool bVar1;
bool bVar2;
iVar0=0;
bVar1=false;
while (bVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1));
if(!func_7(bVar2)){
if(!MISC::IS_BIT_SET(Local_1518[bVar1 /*12*/].f_1, 1) || Local_1518[bVar1 /*12*/].f_3 !=6){
return 0;
}elseif(MISC::IS_BIT_SET(Local_1518[bVar1 /*12*/].f_1, 0)){
iVar0=1;
}}else{
iVar0=1;
}}
bVar1++;
}
return iVar0;
}

int func_7(bool bParam0){
if(func_8(bParam0)){
return 1;
}
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 8);
}


bool func_8(bool bParam0){
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 2);
}


void func_9(bool bParam0, int iParam1){
struct<14> Var0;
var uVar1;
if(*bParam0 >=0 && *iParam1 >=0){
uVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*bParam0));
if(*iParam1==0){
Var0.f_2=776366923;
Var0.f_10=uVar1;
func_10(Var0, func_11(1));
}
*bParam0=-1;
*iParam1=-1;
}}


void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=2041805809;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_11(int iParam0){
var uVar0;
bool bVar1;
bool bVar2;
bVar1=false;
while (bVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1))){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar1));
if(func_12(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
MISC::SET_BIT(&uVar0, bVar2);
}}}
bVar1++;
}
return uVar0;
}

int func_12(bool bParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(bParam0)){
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


void func_13(){
bool bVar0;
int iVar1;
int iVar2;
var uVar3;
bool bVar4;
bVar0=false;
while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0))){
MISC::SET_BIT(&uVar3, bVar0);
}else{
func_26(bVar0);
}
bVar0++;
}
bVar0=false;
while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(MISC::IS_BIT_SET(uVar3, bVar0)){
func_23(bVar0);
MISC::SET_BIT(&(Local_152.f_47), bVar0);
iVar1++;
if(func_17(bVar0, 0)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar4) && !func_14(bVar4, 0)){
iVar2++;
}}}
bVar0++;
}
if(iVar1 > Local_152.f_50){
Local_152.f_50=iVar1;
}else{
Local_152.f_66=(Local_152.f_50 - iVar1);
}
if(iVar2 > Local_152.f_51){
Local_152.f_51=iVar2;
}}


bool func_14(bool bParam0, int iParam1){
bool bVar0;
if(bParam0==PLAYER::PLAYER_ID()){
bVar0=func_15(-1, 0)==8;
}else{
bVar0=Global_1853910[bParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(bParam0)==8;
}}
return bVar0;
}

int func_15(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_16();
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

int func_16(){
return Global_1574918;
}

int func_17(bool bParam0, bool bParam1){
float fVar0;
if(bParam0 >=0 && bParam0 < 32){
fVar0=to_float(Local_1518[bParam0 /*12*/].f_4);
}elseif(bParam0==-1){
fVar0=to_float(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4);
}else{
return 0;
}
if(bParam1){
if(func_19()){
return 1;
}}
if(func_18()){
fVar0=(fVar0 / 10f);
}
switch (Local_152.f_3){
case 0:
if(fVar0 >=Global_262145.f_11414){
return 1;
}
break;
case 2:
if(fVar0 >=Global_262145.f_11415){
return 1;
}
break;
case 3:
if(fVar0 >=Global_262145.f_11416){
return 1;
}
break;
case 5:
if(fVar0 >=Global_262145.f_11417){
return 1;
}
break;
case 4:
if(fVar0 >=Global_262145.f_11418){
return 1;
}
break;
case 1:
if(fVar0 >=Global_262145.f_11419){
return 1;
}
break;
case 6:
if(fVar0 <=Global_262145.f_11420 && fVar0 !=0f){
return 1;
}
break;
case 9:
if(fVar0 >=Global_262145.f_11421){
return 1;
}
break;
case 10:
if(fVar0 >=Global_262145.f_11422){
return 1;
}
break;
case 18:
if(fVar0 >=Global_262145.f_11423){
return 1;
}
break;
case 13:
if(fVar0 >=Global_262145.f_11424){
return 1;
}
break;
case 7:
if(fVar0 >=IntToFloat(Global_262145.f_11425)){
return 1;
}
break;
case 8:
if(fVar0 >=IntToFloat(Global_262145.f_11426)){
return 1;
}
break;
case 11:
if(fVar0 >=Global_262145.f_11538){
return 1;
}
break;
case 12:
if(fVar0 >=Global_262145.f_11539){
return 1;
}
break;
case 14:
if(fVar0 >=IntToFloat(Global_262145.f_11429)){
return 1;
}
break;
case 15:
if(fVar0 >=IntToFloat(Global_262145.f_11431)){
return 1;
}
break;
case 16:
if(fVar0 >=IntToFloat(Global_262145.f_11432)){
return 1;
}
break;
case 17:
if(fVar0 >=IntToFloat(Global_262145.f_11433)){
return 1;
}
break;
}
return 0;
}

int func_18(){
switch (Local_152.f_3){
case 0:
case 2:
case 3:
case 5:
case 4:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
return 1;
default:
}
return 0;
}

int func_19(){
if((func_20(0) || func_20(1)) || func_20(2)){
return 1;
}
return 0;
}

int func_20(int iParam0){
if(iParam0 >=0){
if(Local_152.f_4[iParam0]==NETWORK::PARTICIPANT_ID_TO_INT() && func_21(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0)){
return 1;
}}
return 0;
}


bool func_21(int iParam0, int iParam1){
if(!func_22()){
return iParam0 > iParam1;
}
if(iParam0==0){
iParam0=2147483647;
}
if(iParam1==0){
iParam1=2147483647;
}
return iParam0 < iParam1;
}

int func_22(){
switch (Local_152.f_3){
case 6:
return 1;
default:
}
return 0;
}


void func_23(bool bParam0){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
int iVar4;
int iVar5;
iVar0=Local_1518[bParam0 /*12*/].f_4;
iVar1=Local_1518[bParam0 /*12*/].f_4.f_2;
if(!MISC::IS_BIT_SET(Local_152.f_48, bParam0)){
fVar2=to_float(Local_152.f_4[0]);
if((!func_22() && IntToFloat(iVar0) >=(fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <=(fVar2 * 2f))){
Local_152.f_49++;
MISC::SET_BIT(&(Local_152.f_48), bParam0);
}}
iVar3=-1;
iVar4=-2;
iVar3=0;
while (iVar3 < 32){
if(Local_152.f_4[iVar3]==bParam0){
iVar3=32;
}elseif(iVar4 >=-1){
if(iVar4 >=0){
func_25(&(Local_152.f_4[iVar3]), &iVar4);
}}elseif((Local_152.f_4[iVar3] < 0 || func_21(iVar0, Local_1518[Local_152.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1518[Local_152.f_4[iVar3] /*12*/].f_4, iVar1, Local_1518[Local_152.f_4[iVar3] /*12*/].f_4.f_2)){
iVar4=Local_152.f_4[iVar3];
if(func_21(iVar0, 0)){
iLocal_133=iVar3;
bLocal_134=bParam0;
}
Local_152.f_4[iVar3]=bParam0;
iVar5=iVar3 + 1;
while (iVar5 <=31){
if(Local_152.f_4[iVar5]==bParam0){
Local_152.f_4[iVar5]=-1;
}
iVar5++;
}}
iVar3++;
}}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3){
if(Local_152.f_3==2){
if(iParam0==iParam1 && iParam2 > iParam3){
return 1;
}}
return 0;
}


void func_25(var uParam0, int iParam1){
*uParam0=(*uParam0 + *iParam1);
*iParam1=(*uParam0 - *iParam1);
*uParam0=(*uParam0 - *iParam1);
}


void func_26(bool bParam0){
int iVar0;
if(MISC::IS_BIT_SET(Local_152.f_47, bParam0)){
iVar0=0;
while (iVar0 < 32){
if(Local_152.f_4[iVar0]==bParam0){
Local_152.f_4[iVar0]=-1;
iVar0=32;
}
iVar0++;
}
MISC::CLEAR_BIT(&(Local_152.f_48), bParam0);
MISC::CLEAR_BIT(&(Local_152.f_47), bParam0);
}}


void func_27(var uParam0, bool bParam1, bool bParam2){
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

int func_28(bool bParam0){
if(MISC::IS_BIT_SET(Local_152.f_2, 1) && !bParam0){
return 750;
}
switch (Local_152.f_3){
case 0:
return Global_262145.f_10724;
case 8:
return Global_262145.f_10726;
case 3:
return Global_262145.f_10727;
case 1:
return Global_262145.f_11524;
case 6:
return Global_262145.f_11525;
case 10:
return Global_262145.f_11527;
case 11:
return Global_262145.f_11529;
case 12:
return Global_262145.f_11530;
case 15:
return Global_262145.f_11534;
case 16:
return Global_262145.f_11535;
case 17:
return Global_262145.f_11536;
case 18:
return Global_262145.f_11537;
case 13:
return Global_262145.f_11528;
case 14:
return Global_262145.f_11531;
case 2:
return Global_262145.f_10729;
case 7:
return Global_262145.f_11526;
case 9:
return Global_262145.f_11532;
case 5:
return Global_262145.f_10730;
case 4:
return Global_262145.f_10728;
default:
}
return -1;
}

int func_29(){
return Global_262145.f_11494;
}


void func_30(int iParam0){
Local_152.f_37=iParam0;
}

int func_31(){
struct<2> Var0;
struct<3> Var1;
var uVar2;
int iVar3;
if(func_43() && ((Local_152.f_37==0 || func_5(Local_152.f_3)) || Local_152.f_54 < 10)){
Var0={
Local_152.f_67[iLocal_128 /*2*/] 
};
if(func_42(Var0.f_0)){
if(!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1)){
if(func_40(Local_152.f_3, iLocal_128, &Var1, &uVar2)){
Local_152.f_55[iLocal_128]=func_36(iLocal_128);
if(MISC::IS_BIT_SET(Local_1518[Local_152.f_55[iLocal_128] /*12*/].f_2, iLocal_128)){
if(func_33(&(Local_152.f_67[iLocal_128 /*2*/].f_1), Var0.f_0, Var1, uVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0)){
NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_152.f_67[iLocal_128 /*2*/].f_1), 1, 1);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), 1);
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), 1);
VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), 0);
func_32(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), 1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3)){
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
}
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "MPBitset")){
iVar3=DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "MPBitset");
}
MISC::SET_BIT(&iVar3, 10);
MISC::SET_BIT(&iVar3, 11);
DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_128 /*2*/].f_1), "MPBitset", iVar3);
}
Local_152.f_55[iLocal_128]=-1;
Local_152.f_54++;
}}}}}
iLocal_128++;
if(iLocal_128 >=10){
iLocal_128=0;
return 1;
}
return 0;
}
return 1;
}


void func_32(int iParam0, bool bParam1){
var uVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
if(bParam1){
MISC::SET_BIT(&uVar0, 13);
}else{
MISC::CLEAR_BIT(&uVar0, 13);
}
DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", uVar0);
}}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13){
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
func_34(Param2, uParam3, iParam1, iVar1);
return 1;
}}
return 0;
}


void func_34(struct<3> Param0, var uParam1, int iParam2, int iParam3){
int iVar0;
if(func_35(PLAYER::PLAYER_ID(), Param0, iParam2) > -1){
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

int func_35(bool bParam0, struct<3> Param1, int iParam2){
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

int func_36(bool bParam0){
int iVar0;
int iVar1;
float fVar2;
float fVar3;
struct<3> Var4;
var uVar5;
bool bVar6;
fVar2=1000000f;
if(func_39(bParam0, &Var4, &uVar5)){
iVar0=0;
while (iVar0 <=(NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1)){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
bVar6=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
if(func_12(bVar6, 1, 1)){
fVar3=func_37(func_38(bVar6), Var4);
if(fVar3 < fVar2){
fVar2=fVar3;
iVar1=bVar0;
}}}
bVar0++;
}}
return iVar1;
}


float func_37(struct<3> Param0, struct<3> Param1){
Param0.f_2=0f;
Param1.f_2=0f;
return vdist(Param0, Param1);
}


Vector3 func__38(bool bParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), 0);
}

int func_39(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 0:
*uParam1={
-1729.582f, -2943.77f, 12.9443f 
};
*uParam2=300.078f;
break;
case 1:
*uParam1={
677.2984f, 769.7758f, 204.6846f 
};
*uParam2=82.8903f;
break;
case 2:
*uParam1={
1073.972f, 3003.889f, 40.5508f 
};
*uParam2=333.2717f;
break;
case 3:
*uParam1={
1928.635f, 4702.327f, 40.1958f 
};
*uParam2=327.9112f;
break;
case 4:
*uParam1={
1278.65f, 6579.366f, 1.505f 
};
*uParam2=84.26f;
break;
case 5:
*uParam1={
-1700.407f, -829.8932f, 8.2542f 
};
*uParam2=70.1811f;
break;
case 6:
*uParam1={
-2733.589f, 2925.563f, 1.2152f 
};
*uParam2=176.5378f;
break;
case 7:
*uParam1={
1493.418f, -2442.99f, 64.9693f 
};
*uParam2=52.9918f;
break;
case 8:
*uParam1={
569.0449f, -772.5692f, 10.4088f 
};
*uParam2=179.3501f;
break;
case 9:
*uParam1={
-905.1526f, 5548.172f, 5.5251f 
};
*uParam2=95.8361f;
break;
default:
return 0;
}
return 1;
}

int func_40(int iParam0, bool bParam1, var uParam2, var uParam3){
if(func_5(iParam0)){
switch (bParam1){
case 0:
*uParam2={
-1729.582f, -2943.77f, 12.9443f 
};
*uParam3=300.078f;
break;
case 1:
*uParam2={
677.2984f, 769.7758f, 204.6846f 
};
*uParam3=82.8903f;
break;
case 2:
*uParam2={
1073.972f, 3003.889f, 40.5508f 
};
*uParam3=333.2717f;
break;
case 3:
*uParam2={
1928.635f, 4702.327f, 40.1958f 
};
*uParam3=327.9112f;
break;
case 4:
*uParam2={
1278.65f, 6579.366f, 1.505f 
};
*uParam3=84.26f;
break;
case 5:
*uParam2={
-1700.407f, -829.8932f, 8.2542f 
};
*uParam3=70.1811f;
break;
case 6:
*uParam2={
-2733.589f, 2925.563f, 1.2152f 
};
*uParam3=173.6421f;
break;
case 7:
*uParam2={
1493.418f, -2442.99f, 64.9693f 
};
*uParam3=52.9918f;
break;
case 8:
*uParam2={
569.0449f, -772.5692f, 10.4088f 
};
*uParam3=179.3501f;
break;
case 9:
*uParam2={
-905.1526f, 5548.172f, 5.5251f 
};
*uParam3=95.8361f;
break;
default:
return 0;
}}elseif(func_41(iParam0)){
switch (bParam1){
case 0:
*uParam2={
-3132.932f, 1130.534f, 19.683f 
};
*uParam3=168.7723f;
break;
case 1:
*uParam2={
-1008.917f, -1640.027f, 3.4035f 
};
*uParam3=235.1491f;
break;
case 2:
*uParam2={
1075.063f, -2445.105f, 28.2896f 
};
*uParam3=100.2369f;
break;
case 3:
*uParam2={
1101.198f, -266.9387f, 68.3046f 
};
*uParam3=359.2015f;
break;
case 4:
*uParam2={
2658.878f, 1667.581f, 23.4886f 
};
*uParam3=90.4833f;
break;
case 5:
*uParam2={
-399.1095f, 874.6328f, 230.2586f 
};
*uParam3=107.5929f;
break;
case 6:
*uParam2={
156.5429f, 3117.213f, 41.5677f 
};
*uParam3=218.5338f;
break;
case 7:
*uParam2={
-2242.923f, 4315.749f, 46.7647f 
};
*uParam3=236.8359f;
break;
case 8:
*uParam2={
-143.7363f, 6500.573f, 28.7366f 
};
*uParam3=116.1312f;
break;
case 9:
*uParam2={
1939.475f, 4628.652f, 39.3984f 
};
*uParam3=350.0428f;
break;
default:
return 0;
}}
return 1;
}

int func_41(int iParam0){
switch (iParam0){
case 4:
case 3:
return 1;
default:
}
return 0;
}

int func_42(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


bool func_43(){
return (func_5(Local_152.f_3) || func_41(Local_152.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4){
if(func_119(PLAYER::PLAYER_ID(), 0) || func_116(PLAYER::PLAYER_ID(), 0)){
if(func_115(PLAYER::PLAYER_ID()) || func_113(PLAYER::PLAYER_ID())){
bParam2=false;
}}
if(NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0){
if(bParam2){
func_51(sParam3, sParam4, 1);
}
if(func_50(26, -1)){
func_48(26, -1);
}
return 1;
}
if(func_47(&(Global_1836858.f_18))){
if(!func_1(&(Global_1836858.f_18), 7500, 0)){
return 0;
}
func_46(&(Global_1836858.f_18));
}
if(func_45()){
if(bParam2){
func_51(sParam3, sParam4, 0);
}
if(func_50(26, -1)){
func_48(26, -1);
}
return 1;
}
if(iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0){
if(bParam2){
func_51(sParam3, sParam4, 1);
}
if(func_50(26, -1)){
func_48(26, -1);
}
return 1;
}
return 0;
}


bool func_45(){
return MISC::IS_BIT_SET(Global_1836858.f_1, 0);
}


void func_46(var uParam0){
uParam0->f_1=0;
}


bool func_47(var uParam0){
return uParam0->f_1;
}


void func_48(bool bParam0, int iParam1){
int iVar0;
var uVar1;
if(iParam1==-1){
iParam1=func_16();
}
switch (bParam0){
case 0:
STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
break;
default:
uVar1=func_49(iParam1);
iVar0=MISC::GET_PROFILE_SETTING(uVar1);
if(MISC::IS_BIT_SET(iVar0, bParam0)){
MISC::CLEAR_BIT(&iVar0, bParam0);
STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
}
break;
}}

int func_49(int iParam0){
int iVar0;
if(iParam0==-1){
iParam0=func_16();
}
switch (iParam0){
case 0:
iVar0=909;
break;
case 1:
iVar0=910;
break;
case 2:
iVar0=911;
break;
case 3:
iVar0=912;
break;
case 4:
iVar0=913;
break;
}
return iVar0;
}


bool func_50(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam1==-1){
iParam1=func_16();
}
uVar0=func_49(iParam1);
uVar1=MISC::GET_PROFILE_SETTING(uVar0);
return MISC::IS_BIT_SET(uVar1, iParam0);
}


void func_51(char* sParam0, char* sParam1, bool bParam2){
if((!MISC::IS_BIT_SET(Global_1836858.f_1, 2) && !func_8(PLAYER::PLAYER_ID())) && !func_7(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
sParam0="FMEVEN_NUM1";
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
if(bParam2){
sParam1="FMEVEN_NUM2";
}else{
sParam1="FMEVEN_NUM3";
}}
func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
MISC::SET_BIT(&(Global_1836858.f_1), 2);
}}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
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
func_112(iParam0, &Var0, -1, sParam2, sParam1);
Var0.f_71=iParam3;
Var0.f_6=iParam4;
Var0.f_72=iParam5;
Var0.f_16=iParam6;
if(iParam7 !=0){
func_110(&(Var0.f_69), iParam7);
}
return func_53(&Var0);
}

int func_53(var uParam0){
int iVar0;
if(uParam0->f_1==1){
if(Global_2672505.f_2836){
return 0;
}}
func_68(uParam0, uParam0->f_17);
func_65(uParam0);
if(func_64()){
func_65(uParam0);
}
if(func_63(uParam0->f_1)){
func_56();
if(Global_2672505.f_2514[0 /*80*/].f_2==0){
Global_2672505.f_2514[0 /*80*/]={
*uParam0 
};
if(func_55(uParam0->f_69, 8192)){
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
func_56();
}
return 1;
}else{
if(uParam0->f_1==1){
func_110(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 2);
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
}
if(uParam0->f_1==86 && !func_55(uParam0->f_69, 128)){
if(func_54(Global_2672505.f_2514[iVar0 /*80*/].f_1)){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_110(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}}}
iVar0++;
}
return 0;
}

int func_54(int iParam0){
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


bool func_55(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_56(){
bool bVar0;
if(Global_2672505.f_2837){
return;
}
if(!Global_78827){
Global_78827=1;
bVar0=true;
}
func_57();
if(bVar0){
Global_78827=0;
}}


void func_57(){
Global_2672505.f_2838=0;
Global_2672505.f_2838.f_582=0;
func_61(&(Global_2672505.f_2838.f_1));
Global_2672505.f_2838.f_1.f_1=0;
func_58(&(Global_2672505.f_2838.f_1), 1);
}


void func_58(var uParam0, int iParam1){
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
if(CAM::IS_SCREEN_FADED_OUT() && !func_60(0)){
CAM::DO_SCREEN_FADE_IN(800);
}}}}
func_59(0);
}


void func_59(int iParam0){
Global_78819=iParam0;
Global_78820=iParam0;
}

int func_60(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_61(var uParam0){
func_62(uParam0);
uParam0->f_574=0;
uParam0->f_31=0;
uParam0->f_56=0;
uParam0->f_571=0;
uParam0->f_573=0;
}


void func_62(var uParam0){
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

int func_63(int iParam0){
if((((((((((((((((((((((((iParam0==3 || iParam0==4) || iParam0==5) || iParam0==6) || iParam0==11) || iParam0==12) || iParam0==28) || iParam0==29) || iParam0==30) || iParam0==24) || iParam0==32) || iParam0==31) || iParam0==26) || iParam0==25) || iParam0==56) || iParam0==7) || iParam0==8) || iParam0==9) || iParam0==10) || iParam0==104) || iParam0==100) || iParam0==103) || iParam0==105) || iParam0==110) || iParam0==111){
return 1;
}
return 0;
}


bool func_64(){
return Global_2683864.f_19;
}


void func_65(var uParam0){
if(func_67(uParam0->f_1)){
uParam0->f_72=func_66();
}}

int func_66(){
return 21;
}

int func_67(int iParam0){
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


void func_68(var uParam0, bool bParam1){
if(func_67(uParam0->f_1)){
uParam0->f_73=1;
}
if(bParam1==func_109() || !func_12(bParam1, 0, 1)){
return;
}
if(func_54(uParam0->f_1)){
if(uParam0->f_71==1){
uParam0->f_73=func_69(bParam1, -2, 0, 0, 0);
}}}

int func_69(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
var uVar1;
if(func_107(bParam0) && !bParam4){
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
if(((func_107(PLAYER::PLAYER_ID()) || (func_106() && func_105())) && !MISC::IS_BIT_SET(Global_2793046.f_4690, 31)) && !bParam4){
uVar1=func_104();
if(ENTITY::DOES_ENTITY_EXIST(uVar1)){
if(PED::IS_PED_A_PLAYER(iVar1)){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) !=-1){
if(func_12(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1)){
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_102(iParam1, bParam0, 0);
}else{
return func_84(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}
}
else{
return func_84(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
}}}}elseif((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_102(iParam1, bParam0, 0);
}else{
return func_70(0, -1, 0);
}}else{
return func_70(0, -1, 0);
}}}
if((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4){
if(Global_4718592.f_108449[iParam1] !=-1){
return func_102(iParam1, bParam0, 0);
}else{
return func_84(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}}
return func_84(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2){
return func_71(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_71(bool bParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
if(!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0)){
return 3;
}
iVar0=PLAYER::GET_PLAYER_TEAM(bParam0);
if((func_83() || (func_82() && func_80())) && Global_1665699.f_1){
if(bParam1){
return func_79(iParam2, iVar0);
}else{
return func_79(iVar0, iVar0);
}}
if(bParam1){
if(iParam2 > -1){
if(func_76(iVar0, iParam2, 0, -1) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)){
if(iVar0==iParam2){
return func_75(1);
}else{
return func_75(0);
}}elseif(bParam3){
return 28;
}elseif(MISC::IS_BIT_SET(Global_4718592.f_4, 20)){
return func_72(iVar0, iParam2, 1, 4);
}else{
return func_72(iVar0, iParam2, 0, 4);
}}
return 28;
}
if(iVar0==iParam2 || iParam2==-1){
return func_75(1);
}
return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=func_74(iParam0, iParam1, iParam3);
if(func_73(Global_4718592.f_113724, 1)){
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

int func_73(int iParam0, bool bParam1){
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

int func_74(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < iParam2){
if(iVar0==iParam1){
return iVar1;
}elseif(!iParam0==iVar0){
if(!func_76(iParam0, iVar0, 0, -1)){
iVar1++;
}}
iVar0++;
}
return -1;
}

int func_75(bool bParam0){
if(bParam0){
return 118;
}
return 116;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
}
break;
case 1:
if(!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
}
break;
case 2:
if(!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0)){
return MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
}
break;
case 3:
if(!func_77(iParam0, bVar0, iParam1, bVar1) || !func_77(iParam1, bVar1, iParam0, bVar0)){
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

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3){
int iVar0;
bool bVar1;
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
bVar1=iVar5;
if(((!func_12(bVar1, 1, 1) || func_14(bVar1, 0)) || MISC::IS_BIT_SET(Global_2657589[bVar1 /*466*/].f_199, 2)) || func_78(bVar1)){
}elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam2){
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


var func__78(bool bParam0){
return MISC::IS_BIT_SET(Global_1853910[bParam0 /*862*/].f_36.f_18, 14);
}

int func_79(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_74(iParam1, iParam0, 4);
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

int func_80(){
if(func_81()){
return 1;
}
return MISC::IS_BIT_SET(Global_4718592.f_170488, 4);
}


bool func_81(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}


bool func_82(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return MISC::IS_BIT_SET(Global_4718592.f_170488, 0);
}
return ((MISC::IS_BIT_SET(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_83(){
if(func_81() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 1;
}
return 0;
}

int func_84(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4){
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
if(func_93()){
iVar3=func_89(bParam0);
if(!iVar3==-1){
return func_87(iVar3);
}}
if((func_86(bParam1, bParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_76(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0, -1) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))){
return func_75(1);
}elseif(MISC::IS_BIT_SET(Global_4718592.f_15, 26)){
return func_85(1);
}else{
return func_71(bParam1, 1, iVar0, bParam4);
}}elseif((Global_1836597 || Global_1836587) || Global_1853910[bParam0 /*862*/]==0){
if(bParam0==bParam1 || (Global_1836597==1 && Global_1836607==0)){
return func_75(1);
}else{
return func_71(bParam1, 1, iVar0, bParam4);
}}
if(Global_1836591 && Global_1836078.f_14==bParam0){
return 28;
}}
iVar4=func_89(bParam0);
if(!iVar4==-1){
return func_87(iVar4);
}
if(bParam3){
return 0;
}
return 1;
}

int func_85(bool bParam0){
if(bParam0){
return 119;
}
return 116;
}


bool func_86(bool bParam0, bool bParam1, int iParam2, int iParam3){
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

int func_87(int iParam0){
int iVar0;
if(iParam0 > -1){
iVar0=func_88(iParam0);
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


var func__88(int iParam0){
return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_89(bool bParam0){
if(!bParam0==func_109()){
if(func_91(bParam0, 1)){
return Global_2648605.f_818.f_11[func_90(bParam0)];
}}
return -1;
}

int func_90(bool bParam0){
if(bParam0 !=func_109()){
return Global_1894573[bParam0 /*608*/].f_10;
}
return func_109();
}


bool func_91(bool bParam0, bool bParam1){
if(!bParam1){
if(func_92(bParam0)){
return 0;
}}
return Global_1894573[bParam0 /*608*/].f_10 !=func_109();
}

int func_92(bool bParam0){
if(bParam0 !=func_109()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_109()){
return Global_1894573[bParam0 /*608*/].f_10==bParam0;
}}
return 0;
}

int func_93(){
if((((((func_101() || func_100()) || func_64()) || func_99()) || func_98()) || func_96()) || func_94()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_94(){
return func_95(Global_4718592.f_113724);
}

int func_95(int iParam0){
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

int func_96(){
return func_97(Global_4718592.f_113724);
}

int func_97(int iParam0){
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


var func__98(){
return Global_2683864.f_24;
}


bool func_99(){
return Global_2683864.f_21;
}


var func__100(){
return Global_2683864.f_18;
}


var func__101(){
return Global_2683864.f_17;
}

int func_102(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
iVar1=Global_1058070.f_14[iParam0];
if(func_93()){
iVar2=func_89(bParam1);
if(!iVar2==-1){
return func_87(iVar2);
}}
if(iVar1 > -1 && iVar1 < 17){
if(MISC::IS_BIT_SET(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24)){
return 18;
}}
if(iParam0 > -1 && bParam1 !=func_109()){
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
iVar0=func_71(bParam1, !bParam2, iParam0, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_21, 13)){
iVar0=func_103(iParam0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_24, 29)){
iVar0=0;
}
if(MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_76(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0, -1)){
iVar0=func_85(1);
}}else{
iVar0=1;
}
return iVar0;
}

int func_103(int iParam0){
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


var func__104(){
return Global_2621446.f_2;
}


var func__105(){
return MISC::IS_BIT_SET(Global_2621446, 4);
}


var func__106(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_107(bool bParam0){
if(func_14(bParam0, 0)){
return 1;
}
if(func_108()){
if(bParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_108(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_109(){
return -1;
}


void func_110(var uParam0, int iParam1){
func_111(uParam0, iParam1);
}


void func_111(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_112(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4){
uParam1->f_17=func_109();
uParam1->f_18=func_109();
uParam1->f_19=func_109();
uParam1->f_20=func_109();
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


bool func_113(bool bParam0){
return func_114(bParam0, 20);
}


var func__114(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_10.f_4, iParam1);
}

int func_115(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return func_114(bParam0, 9);
}
return 0;
}

int func_116(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 && func_117(Global_1894573[bParam0 /*608*/].f_10.f_33)){
return 1;
}
if(iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1){
if(func_117(Global_1894573[bParam0 /*608*/].f_10.f_32)){
return 1;
}}
return 0;
}

int func_117(int iParam0){
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
return func_118(iParam0, 0);
return 0;
}

int func_118(int iParam0, int iParam1){
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

int func_119(bool bParam0, int iParam1){
if(Global_1894573[bParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[bParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}


void func_120(int iParam0){
Local_152.f_0=iParam0;
}

int func_121(){
int iVar0;
iVar0=0;
while (iVar0 < 32){
Local_152.f_4[iVar0]=-1;
iVar0++;
}
func_46(&(Local_152.f_39));
func_126();
if(func_43()){
iVar0=0;
while (iVar0 < 10){
Local_152.f_55[iVar0]=func_36(iVar0);
iVar0++;
}
func_122();
}
return 1;
}


void func_122(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(func_41(Local_152.f_3)){
Local_152.f_67[iVar0 /*2*/]=func_125();
}else{
Local_152.f_67[iVar0 /*2*/]=func_123();
}
iVar0++;
}}

int func_123(){
int iVar0;
switch (Local_152.f_3){
case 12:
return func_124();
break;
}
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
switch (iVar0){
case 0:
return joaat("maverick");
case 1:
return joaat("mammatus");
default:
}
return 0;
}

int func_124(){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
switch (iVar0){
case 0:
return joaat("stunt");
case 1:
return joaat("besra");
default:
}
return 0;
}

int func_125(){
int iVar0;
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
switch (iVar0){
case 0:
return joaat("sanchez");
case 1:
return joaat("pcj");
default:
}
return 0;
}


void func_126(){
int iVar0;
iVar0=func_131();
Local_152.f_3=iVar0;
func_127(func_129(133, iVar0, 0, 0));
}


void func_127(int iParam0){
struct<3> Var0;
int iVar1;
Var0.f_0=1134070037;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
iVar1=func_128(1, 1);
if(!iVar1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 3, iVar1);
}}


var func__128(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
bool bVar2;
bVar1=false;
while (bVar1 < 32){
bVar2=PLAYER::INT_TO_PLAYERINDEX(bVar1);
if(func_12(bVar2, 0, 0)){
if(bVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, bVar1);
}elseif(!func_14(bVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case 136:
case 139:
case 141:
case 133:
case 138:
case 144:
case 236:
case 150:
return iParam1;
case 132:
switch (iParam2){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 4;
case 1:
return 5;
case 2:
return 6;
case 3:
return 7;
default:
}
break;
}
break;
case 131:
switch (iParam3){
case 0:
switch (iParam1){
case 0:
switch (iParam2){
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
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 5;
case 1:
return 6;
case 2:
return 7;
case 3:
return 8;
case 4:
return 9;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 10;
case 1:
return 11;
case 2:
return 12;
case 3:
return 13;
case 4:
return 14;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 15;
case 1:
return 16;
case 2:
return 17;
case 3:
return 18;
case 4:
return 19;
default:
}
break;
case 4:
switch (iParam2){
case 0:
return 20;
case 1:
return 21;
case 2:
return 22;
case 3:
return 24;
case 4:
return 25;
default:
}
break;
case 5:
switch (iParam2){
case 0:
return 26;
case 1:
return 27;
case 2:
return 28;
case 3:
return 29;
case 4:
return 30;
default:
}
break;
case 6:
switch (iParam2){
case 0:
return 31;
case 1:
return 32;
case 2:
return 33;
case 3:
return 34;
case 4:
return 35;
default:
}
break;
}
break;
case 1:
switch (iParam1){
case 0:
switch (iParam2){
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
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 5;
case 1:
return 6;
case 2:
return 7;
case 3:
return 8;
case 4:
return 9;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 10;
case 1:
return 11;
case 2:
return 12;
case 3:
return 13;
case 4:
return 14;
default:
}
break;
}
break;
case 2:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 41;
default:
}
break;
case 1:
switch (iParam2){
case 1:
return 42;
default:
}
break;
case 2:
switch (iParam2){
case 2:
return 43;
default:
}
break;
case 3:
switch (iParam2){
case 3:
return 44;
default:
}
break;
case 4:
switch (iParam2){
case 4:
return 45;
default:
}
break;
}
break;
}
break;
case 129:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 4;
case 1:
return 5;
case 2:
return 6;
case 3:
return 7;
case 4:
return 8;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 12;
case 1:
return 13;
case 2:
return 14;
case 3:
return 15;
case 4:
return 16;
default:
}
break;
case 4:
switch (iParam2){
case 0:
return 17;
case 1:
return 18;
case 2:
return 19;
case 3:
return 20;
case 4:
return 21;
default:
}
break;
case 5:
switch (iParam2){
case 0:
return 22;
case 1:
return 24;
case 2:
return 25;
case 3:
return 26;
default:
}
break;
case 6:
switch (iParam2){
case 0:
return 27;
case 1:
return 28;
case 2:
return 29;
default:
}
break;
case 7:
switch (iParam2){
case 0:
return 30;
case 1:
return 31;
case 2:
return 32;
default:
}
break;
case 8:
switch (iParam2){
case 0:
return 33;
case 1:
return 34;
case 2:
return 35;
case 3:
return 36;
default:
}
break;
case 9:
switch (iParam2){
case 0:
return 37;
case 1:
return 38;
case 2:
return 39;
case 3:
return 40;
default:
}
break;
}
break;
case 140:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
default:
}
break;
case 4:
switch (iParam2){
case 0:
return 12;
case 1:
return 13;
case 2:
return 14;
default:
}
break;
}
break;
case 146:
switch (iParam1){
case 0:
switch (iParam2){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
default:
}
break;
case 1:
switch (iParam2){
case 0:
return 3;
case 1:
return 4;
case 2:
return 5;
default:
}
break;
case 2:
switch (iParam2){
case 0:
return 6;
case 1:
return 7;
case 2:
return 8;
default:
}
break;
case 3:
switch (iParam2){
case 0:
return 9;
case 1:
return 10;
case 2:
return 11;
default:
}
break;
}
break;
}
if(func_130(iParam0)==1){
return iParam1;
}
return -1;
}

int func_130(int iParam0){
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

int func_131(){
int iVar0[19];
float fVar1;
int iVar2;
float fVar3;
iVar0[0]=Global_262145.f_11823;
iVar0[1]=Global_262145.f_11496;
iVar0[2]=Global_262145.f_11827;
iVar0[3]=Global_262145.f_11825;
iVar0[4]=Global_262145.f_11826;
iVar0[5]=Global_262145.f_11828;
iVar0[6]=Global_262145.f_11497;
iVar0[7]=Global_262145.f_11498;
iVar0[8]=Global_262145.f_11824;
iVar0[9]=Global_262145.f_11504;
iVar0[10]=Global_262145.f_11499;
iVar0[11]=Global_262145.f_11501;
iVar0[12]=Global_262145.f_11502;
iVar0[13]=Global_262145.f_11500;
iVar0[14]=Global_262145.f_11503;
iVar0[15]=Global_262145.f_11506;
iVar0[16]=Global_262145.f_11507;
iVar0[17]=Global_262145.f_11508;
iVar0[18]=Global_262145.f_11509;
fVar1=0f;
iVar2=0;
while (iVar2 < iVar0){
if(func_134(iVar2) || func_132(133, iVar2, 0, 0)){
iVar0[iVar2]=0f;
}else{
fVar1=(fVar1 + iVar0[iVar2]);
}
iVar2++;
}
fVar3=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
iVar2=0;
while (iVar2 < iVar0){
if(fVar3 <=iVar0[iVar2]){
return iVar2;
}
fVar3=(fVar3 - iVar0[iVar2]);
iVar2++;
}
return func_131();
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
switch (iParam0){
case 132:
case 144:
case 236:
case 150:
return 0;
default:
}
iVar1=func_133(iParam0);
iVar0=0;
while (iVar0 < 21){
if(iVar0 < Global_262145.f_8577){
if(Global_2756259.f_136[iVar0 /*2*/]==iVar1 && Global_2756259.f_136[iVar0 /*2*/].f_1==func_129(iParam0, iParam1, iParam2, iParam3)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_133(int iParam0){
switch (iParam0){
case 136:
return 12;
case 139:
return 14;
case 141:
return 16;
case 133:
return 9;
case 138:
return 13;
case 144:
return 17;
case 132:
return 8;
case 131:
return 10;
case 146:
return 18;
case 129:
return 11;
case 140:
return 15;
case 236:
return 19;
case 150:
return 20;
default:
}
return -1;
}

int func_134(int iParam0){
switch (iParam0){
case 0:
return Global_262145.f_10717;
case 1:
return Global_262145.f_11510;
case 6:
return Global_262145.f_11511;
case 7:
return Global_262145.f_11512;
case 8:
return Global_262145.f_10718;
case 3:
return Global_262145.f_10719;
case 4:
return Global_262145.f_10720;
case 2:
return Global_262145.f_10721;
case 5:
return Global_262145.f_10723;
case 9:
return Global_262145.f_11518;
case 10:
return Global_262145.f_11513;
case 11:
return Global_262145.f_11515;
case 12:
return Global_262145.f_11516;
case 15:
return Global_262145.f_11520;
case 16:
return Global_262145.f_11521;
case 17:
return Global_262145.f_11522;
case 18:
return Global_262145.f_11523;
case 13:
return Global_262145.f_11514;
case 14:
return Global_262145.f_11517;
default:
}
return 1;
}


void func_135(){
bool bVar0;
if(func_43()){
bVar0=false;
while (bVar0 < 10){
if(Local_152.f_55[bVar0]==NETWORK::PARTICIPANT_ID_TO_INT()){
if(func_136(bVar0)){
if(!MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0)){
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
}}elseif(MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0)){
MISC::CLEAR_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
}}elseif(MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, bVar0)){
MISC::CLEAR_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2), bVar0);
}
bVar0++;
}}}

int func_136(int iParam0){
struct<3> Var0;
var uVar1;
if(func_39(iParam0, &Var0, &uVar1)){
if(func_137(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)){
return 1;
}}
return 0;
}

int func_137(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16){
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
if(func_142(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0)){
return 0;
}}
Global_2635559.f_2++;
if(bParam6){
if(fParam4 > 0f){
if(func_138(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15)){
return 0;
}}}
Global_2635559.f_2++;
return 1;
}

int func_138(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8){
int iVar0;
bool bVar1;
float fVar2;
if(iParam2 && !bParam5){
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(!CAM::IS_SCREEN_FADED_OUT()){
fVar2=fParam4;
if(fParam7 > 0f){
fVar2=fParam7;
}
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_140(PLAYER::PLAYER_ID()), Param0, 1) <=(fVar2 + fParam1)){
if(CAM::IS_SPHERE_VISIBLE(Param0, fParam1)){
return 1;
}}}}}
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if(func_12(bVar1, 1, 1)){
if(!func_14(bVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(iParam2==1 || (iParam2==0 && bVar1 !=PLAYER::PLAYER_ID())){
if((func_139(bVar1) || !bParam8) && !Global_2657589[bVar1 /*466*/].f_270){
fVar2=fParam4;
if(fParam7 > 0f){
if(!PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(PLAYER::GET_PLAYER_TEAM(bVar1)==PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())){
fVar2=fParam7;
}}
}
if(!bParam5){
if((iParam3 || (iParam3==0 && PLAYER::GET_PLAYER_TEAM(bVar1) !=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_140(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}}
}
elseif(PLAYER::GET_PLAYER_TEAM(bVar1) !=iParam6 || PLAYER::GET_PLAYER_TEAM(bVar1)==-1){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_140(bVar1), Param0, 1) <=(fVar2 + fParam1)){
if(NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam1)){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_139(bool bParam0){
if(ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2657589[bParam0 /*466*/].f_255){
return 1;
}
return 0;
}


Vector3 func__140(bool bParam0){
int iVar0;
iVar0=bParam0;
if((func_64() && Global_1853910[iVar0 /*862*/].f_832) && !func_141(Global_1853910[iVar0 /*862*/].f_833)){
return Global_1853910[iVar0 /*862*/].f_833;
}
return func_38(bParam0);
}

int func_141(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_142(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=iVar0;
if((iParam6==1 && PLAYER::PLAYER_ID() !=bVar1) || iParam6==0){
if(func_12(bVar1, bParam2, bParam3)){
if(iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1)){
if(!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_139(bVar1))){
if((!bParam4 || (bParam4==1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) !=PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1){
if(((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())==-1 && uParam7) && bParam4) && func_143(bVar1)){
}elseif(ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1))){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(func_38(bVar1), Param0, 1) < fParam1){
return 1;
}}
}}}}}
iVar0++;
}
return 0;
}

int func_143(bool bParam0){
if(func_146(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
Global_2764203={
func_145(bParam0) 
};
if(NETWORK::NETWORK_IS_FRIEND(&Global_2764203)){
return 1;
}
if(func_144(PLAYER::PLAYER_ID(), bParam0)){
return 1;
}
return 0;
}

int func_144(bool bParam0, bool bParam1){
int iVar0;
iVar0=func_90(bParam0);
if(!iVar0==func_109()){
if(iVar0==func_90(bParam1)){
return 1;
}}
return 0;
}
struct<13> func_145(bool bParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
return Var0;
}

int func_146(bool bParam0, bool bParam1){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
Global_2764203={
func_145(bParam0) 
};
Global_2764216={
func_145(bParam1) 
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


void func_147(){
float fVar0;
float fVar1;
func_706();
func_705();
if(func_703()){
func_585();
}
if(!func_7(PLAYER::PLAYER_ID())){
if(func_558(0, 1, 1)){
if(MISC::IS_BIT_SET(uLocal_123, 6)){
MISC::CLEAR_BIT(&uLocal_123, 6);
}
switch (Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3){
case 0:
if(Local_152.f_37 < 2){
if(Local_152.f_37 > 0){
if(Local_152.f_3 !=-1){
func_557(1);
func_556(1);
}
}}else{
func_556(2);
}
break;
case 1:
func_550(9);
if(Local_1519.f_8==0){
Local_1519.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(Local_152.f_37 >=2){
func_556(2);
Local_1519.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(func_43()){
func_550(0);
}
func_548((func_29() - func_549(&(Local_152.f_43), 0, 0)));
func_545(func_547((func_29() - func_549(&(Local_152.f_43), 0, 0)), 0), func_546(Local_152.f_3));
func_475(0, func_544());
func_459();
func_437();
if(func_436()){
func_435();
}
break;
case 2:
if(Local_152.f_37 > 2){
func_557(0);
fVar0=1f;
fVar1=1f;
if(func_434()){
fVar0=0f;
fVar1=0.25f;
}
func_416(133, fVar0, fVar1, 0, 0, 0, 0);
func_415(Local_152.f_3, 1);
func_414(23, 1);
if(Local_1519.f_8==0){
Local_1519.f_8=NETWORK::GET_CLOUD_TIME_AS_INT();
}
if(Local_1519.f_9==0){
Local_1519.f_9=NETWORK::GET_CLOUD_TIME_AS_INT();
}
func_410();
VEHICLE::SET_DISABLE_BMX_EXTRA_TRICK_FORCES(1);
if(func_434()){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
PLAYER::SET_MAX_WANTED_LEVEL(0);
}
if(Local_152.f_3==14){
func_409(&Local_143);
}
func_408();
if(!func_7(PLAYER::PLAYER_ID())){
func_52(63, "AMCH_STARTED", func_407(Local_152.f_3), func_66(), -1, func_66(), 1, 0);
if(func_404("AMCH_WARN", func_406(Local_152.f_3), func_405(Local_152.f_3))){
HUD::CLEAR_HELP(1);
}
}
if(func_43()){
func_386(678f, 794f, 206f, 8f, 0);
func_386(1911.3f, 4714.6f, 41.1f, 8f, 0);
func_386(688.5021f, 735.4581f, 181.296f, 8f, 0);
}
func_556(3);
}
break;
case 3:
if(Local_152.f_37 > 3){
iLocal_125=0;
func_556(4);
}else{
if(!MISC::IS_BIT_SET(Local_152.f_2, 1)){
func_344();
func_341();
func_340();
}
if(func_339(0) && !func_20(0)){
func_338();
}}
if(func_434()){
PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
}
func_337();
func_312();
func_585();
func_475(0, 1);
func_459();
func_437();
func_550(2);
func_550(5);
func_550(7);
break;
case 4:
if(func_300(&uLocal_135, !MISC::IS_BIT_SET(Local_152.f_2, 0)) || MISC::IS_BIT_SET(Local_152.f_2, 0)){
if(func_5(Local_152.f_3)){
if(Local_152.f_37==5){
func_556(5);
}
}
else{
func_556(6);
}}
func_287();
func_179();
func_312();
func_585();
func_475(1, 1);
func_408();
break;
case 5:
if(Local_152.f_37 > 5){
func_556(6);
}
break;
case 6:
break;
}}else{
func_174();
}}else{
func_174();
}
func_154();
func_149();
func_148();
}


void func_148(){
struct<2> Var0;
int iVar1;
if(func_43()){
Var0={
Local_152.f_67[iLocal_142 /*2*/] 
};
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1)){
iVar1=NETWORK::NET_TO_VEH(Var0.f_1);
if(NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
}}}
iLocal_142++;
if(iLocal_142 >=10){
iLocal_142=0;
iLocal_151=iLocal_150;
iLocal_150=0;
}}}


void func_149(){
if(Local_152.f_37==5){
if(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_152.f_67[iLocal_142 /*2*/].f_1)){
if(!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_152.f_67[iLocal_142 /*2*/].f_1), 0)){
if(!MISC::IS_BIT_SET(uLocal_148, iLocal_142)){
MISC::SET_BIT(&uLocal_148, iLocal_142);
iLocal_149[bLocal_142]=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_149[bLocal_142], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_152.f_67[bLocal_142 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_149[bLocal_142], "Time", 30f);
}
if((30000 - func_549(&(Local_152.f_45), 0, 0)) >=0){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_152.f_67[bLocal_142 /*2*/].f_1), 0)){
func_550(1);
iLocal_150=1;
}}elseif(NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_152.f_67[bLocal_142 /*2*/].f_1)){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_152.f_67[bLocal_142 /*2*/].f_1));
NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_152.f_67[bLocal_142 /*2*/].f_1), 1, 0, -1);
}}elseif(MISC::IS_BIT_SET(uLocal_148, bLocal_142) && !AUDIO::HAS_SOUND_FINISHED(iLocal_149[bLocal_142])){
AUDIO::STOP_SOUND(iLocal_149[bLocal_142]);
}}
if(iLocal_151){
if(!func_107(PLAYER::PLAYER_ID())){
func_151(func_547((30000 - func_549(&(Local_152.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
func_150();
}}}}


void func_150(){
Global_1655472.f_1172=1;
}


void func_151(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17){
bool bVar0;
int iVar1;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_153(7, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655472.f_1=1;
func_152(7, bVar0);
Global_1655472.f_4659[bVar0]=iParam0;
StringCopy(&(Global_1655472.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655472.f_4659.f_172[bVar0]=iParam2;
Global_1655472.f_4659.f_216[bVar0]=iParam3;
Global_1655472.f_4659.f_183[bVar0]=iParam4;
Global_1655472.f_4659.f_194[bVar0]=iParam5;
Global_1655472.f_4659.f_249[bVar0]=iParam6;
Global_1655472.f_4659.f_260[bVar0]=iParam7;
Global_1655472.f_4659.f_205[bVar0]=iParam8;
Global_1655472.f_4659.f_314[bVar0]=iParam9;
Global_1655472.f_4659.f_325[bVar0]=iParam10;
Global_1655472.f_4659.f_357[bVar0]=iParam11;
Global_1655472.f_4659.f_238[bVar0]=iParam12;
Global_1655472.f_4659.f_271[bVar0]=iParam13;
Global_1655472.f_4659.f_368[bVar0]=iParam14;
Global_1655472.f_4659.f_379[bVar0]=iParam15;
Global_1655472.f_4659.f_390[bVar0]=iParam16;
Global_1655472.f_4659.f_227[bVar0]=iParam17;
}}


void func_152(int iParam0, bool bParam1){
MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), bParam1);
}

int func_153(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}


void func_154(){
if(((func_12(PLAYER::PLAYER_ID(), 1, 1) && !func_7(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID())) && func_558(0, 1, 1)){
if(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3==1){
func_167(func_169(Local_152.f_3), func_406(Local_152.f_3), 0, 0);
}elseif(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_3==3){
if(!MISC::IS_BIT_SET(uLocal_123, 10)){
func_155(func_405(Local_152.f_3), 0);
}else{
func_155("AMCH_OBJLAND", 0);
}}else{
func_408();
}}else{
func_408();
}}


void func_155(char* sParam0, bool bParam1){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return;
}
if(func_165(sParam0)){
return;
}
func_159();
Global_1574757=0;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
func_158();
func_157(bParam1);
func_156();
}


void func_156(){
MISC::SET_BIT(&(Global_1574757.f_59), true);
}


void func_157(bool bParam0){
if(bParam0){
MISC::SET_BIT(&(Global_1574757.f_59), false);
return;
}
MISC::CLEAR_BIT(&(Global_1574757.f_59), false);
}


void func_158(){
Global_1574757.f_10=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
Global_1574757.f_11=NETWORK::GET_NETWORK_TIME();
}


void func_159(){
func_161();
func_160(0);
}


void func_160(bool bParam0){
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


void func_161(){
if(!func_164()){}
if(func_163()){
HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
func_162();
HUD::END_TEXT_COMMAND_CLEAR_PRINT();
}}


void func_162(){
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

int func_163(){
if(Global_1574757==20){
return 0;
}
return 1;
}

int func_164(){
if(!func_163()){
return 0;
}
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
func_162();
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}


bool func_165(char* sParam0){
if(!func_163()){
return 0;
}
if(Global_1574757==11){
return func_166(sParam0);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}


bool func_166(char* sParam0){
if(!func_163()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
return MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_167(char* sParam0, char* sParam1, bool bParam2, int iParam3){
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(func_168(sParam0, sParam1) && Global_1574757.f_56==Global_1574757.f_58){
return 0;
}
func_159();
Global_1574757=3;
StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574757.f_9=MISC::GET_HASH_KEY(&(Global_1574757.f_1));
StringCopy(&(Global_1574757.f_12), sParam0, 16);
StringCopy(&(Global_1574757.f_16), sParam1, 64);
Global_1574757.f_58=iParam3;
Global_1574757.f_56=iParam3;
func_158();
func_157(bParam2);
func_156();
return 1;
}


bool func_168(char* sParam0, char* sParam1){
if(!func_163()){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
return 0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
if(!MISC::GET_HASH_KEY(sParam0)==MISC::GET_HASH_KEY(&(Global_1574757.f_12))){
return 0;
}
return MISC::GET_HASH_KEY(sParam1)==MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}


char* func_169(int iParam0){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
switch (iParam0){
case 0:
case 2:
case 5:
case 8:
case 13:
if(((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
return "AMCH_PREPLAND";
}
break;
case 9:
if((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())){
return "AMCH_PREPCAR";
}
break;
case 3:
case 4:
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
return "AMCH_PREPBIKE";
}else{
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)){
return "AMCH_PREPBIKE";
}}
break;
case 12:
if(!PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
return "AMCH_PREPPLANE";
}
break;
case 1:
case 6:
case 11:
case 14:
if(!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())){
return "AMCH_PREPAIR";
}
break;
case 18:
if((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 0) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_heavysniper"), 0)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_marksmanrifle"), 0)){
return "AMCH_PREPSNIPER";
}
break;
case 16:
if(((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
return "AMCH_PREPLAND";
}
break;
}}
return "AMCH_PREPARE";
}

int func_170(bool bParam0){
if(bParam0==PLAYER::PLAYER_ID()){
if(((func_173() && !func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25)){
return 1;
}
if(func_47(&(Global_1836858.f_13))){
if(!func_1(&(Global_1836858.f_13), Global_262145.f_14, 0)){
return 1;
}
func_46(&(Global_1836858.f_13));
}}elseif(MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 10)){
return 1;
}
return MISC::IS_BIT_SET(Global_1894573[bParam0 /*608*/].f_1, 9);
}


bool func_171(bool bParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_218, iParam1);
}


bool func_172(){
return Global_1574582.f_1;
}


bool func_173(){
return Global_1574582;
}


void func_174(){
if(!MISC::IS_BIT_SET(uLocal_123, 6)){
HUD::CLEAR_ALL_HELP_MESSAGES();
func_475(1, 1);
AUDIO::STOP_SOUND(iLocal_131);
MISC::CLEAR_BIT(&uLocal_123, 4);
func_178();
func_176();
HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, 0, 21);
MISC::SET_BIT(&uLocal_123, 6);
func_175();
}}


void func_175(){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_7=0;
}


void func_176(){
if(Global_2644549.f_6==SCRIPT::GET_ID_OF_THIS_THREAD()){
func_177();
}}


void func_177(){
struct<28> Var0;
if(SCRIPT::IS_THREAD_ACTIVE(Global_2644549.f_6)){
if(!Global_2644549.f_6==SCRIPT::GET_ID_OF_THIS_THREAD()){
return;
}}
Var0.f_7=1;
Var0.f_8=1;
Var0.f_21=1115815936;
Var0.f_27=-1082130432;
Global_2644549={
Var0 
};
Global_2644549.f_6=-1;
}


void func_178(){
struct<6> Var0;
if(Global_2635559.f_490.f_1==SCRIPT::GET_ID_OF_THIS_THREAD()){
Global_2635559.f_490={
Var0 
};
}}


void func_179(){
int iVar0;
int iVar1;
var uVar2;
var uVar3;
if(!MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 0)){
if(func_7(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), false);
return;
}
if(func_170(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), false);
return;
}
func_248(&iVar0, &iVar1);
if(iVar0 > 0){
Local_1519.f_6=(Local_1519.f_6 + iVar0);
if(!Global_262145.f_11975){
func_247(10, Local_1519.f_6);
}
Global_2696875=iVar0;
if(func_246()){
func_234(-1468524125, iVar0, &uVar3, 0, 1, 0);
}else{
MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
}}
if(iVar1 > 0){
Local_1519.f_7=(Local_1519.f_7 + iVar1);
func_233();
func_180(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
}
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), false);
}}

int func_180(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10){
return func_181(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_181(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10){
int iVar0;
var uVar1;
iVar0=func_191(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19)){
return iVar0;
}
if(iParam4==-592022605 || iParam4==-1915191729){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(ENTITY::IS_ENTITY_A_PED(iParam1)){
uVar1=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
func_187(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
}}}else{
func_182(iParam1, iVar0, sParam8, uParam10);
}
return iVar0;
}


void func_182(int iParam0, int iParam1, char* sParam2, var uParam3){
struct<3> Var0;
Var0={
func_185(iParam0, 1) 
};
if(iParam0==func_184(PLAYER::PLAYER_PED_ID())){
func_183(1);
}
func_187(Var0, iParam1, 0, sParam2, uParam3);
}


void func_183(int iParam0){
Global_2672505.f_1682=iParam0;
}

int func_184(int iParam0){
return iParam0;
}


Vector3 func__185(int iParam0, bool bParam1){
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
if(iParam0==func_186(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT())==4){
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

int func_186(int iParam0){
return iParam0;
}


void func_187(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4){
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
Global_2672505.f_1081[iVar1 /*30*/].f_4=func_190(Global_2672505.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
Global_2672505.f_1081[iVar1 /*30*/].f_7=NETWORK::GET_NETWORK_TIME();
Global_2672505.f_1081[iVar1 /*30*/].f_3=iParam1;
Global_2672505.f_1081[iVar1 /*30*/].f_8=iParam2;
Global_2672505.f_1081[iVar1 /*30*/].f_9=func_189();
Global_2672505.f_1081[iVar1 /*30*/].f_10=func_188();
StringCopy(&(Global_2672505.f_1081[iVar1 /*30*/].f_22), sParam3, 16);
Global_2672505.f_1081[iVar1 /*30*/].f_26=NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam4);
}}}

int func_188(){
if(Global_2672505.f_1682){
Global_2672505.f_1682=0;
return 1;
}
Global_2672505.f_1682=0;
return 0;
}


var func__189(){
var uVar0;
uVar0=Global_2672505.f_1684;
Global_2672505.f_1684=1;
return uVar0;
}


float func_190(struct<3> Param0, var uParam1, var uParam2){
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


var func__191(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7){
var uVar0;
uVar0=func_192(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
return uVar0;
}

int func_192(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
iVar2=func_225();
if(func_224(uParam2)){}
if(func_223()){
if(iParam4 < 1){
iParam4=1;
}
iVar1=round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
iVar1=func_221(iVar1);
fVar3=(to_float(iVar1) * Global_262145.f_1);
iVar1=round(fVar3);
if(bParam10){
iVar1=func_220(&iVar1);
}
if(iParam1==0){
switch (iParam0){
case 2:
func_218(0, &iVar1);
break;
case 3:
func_218(1, &iVar1);
break;
case 1:
func_216(&iVar1);
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
func_213(1165, iVar1, -1);
if(iParam1==0){
func_202((func_212(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
if(iParam8==0){
}
if(iParam9==0){
}
STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
if(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 !=-1){
func_213(1166, iVar1, -1);
}
func_197(iVar1);
}}
if(bParam5){
}
if(bParam7){
if(iParam6==-1){
func_193((func_195(PLAYER::PLAYER_ID()) + iVar1));
}else{
func_193((func_195(PLAYER::PLAYER_ID()) + iParam6));
}}}
return iVar1;
}


void func_193(int iParam0){
if(func_223()){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5=iParam0;
func_194(joaat("mpply_globalxp"), iParam0);
}}


void func_194(int iParam0, var uParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}}

int func_195(bool bParam0){
if(bParam0 > -1){
if(func_12(bParam0, 0, 1)){
if(bParam0==PLAYER::PLAYER_ID()){
return func_196(joaat("mpply_globalxp"));
}else{
return Global_1853910[bParam0 /*862*/].f_205.f_5;
}}else{
return func_196(joaat("mpply_globalxp"));
}}
return 0;
}

int func_196(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


void func_197(int iParam0){
struct<13> Var0;
int iVar1;
Var0={
func_145(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
iVar1=func_200(func_201(&Var0));
if(iVar1==0){
func_199(&Global_1665493, iParam0);
func_198(joaat("mpply_crew_local_xp_0"), Global_1665493);
}elseif(iVar1==1){
func_199(&Global_1665494, iParam0);
func_198(joaat("mpply_crew_local_xp_1"), Global_1665494);
}elseif(iVar1==2){
func_199(&Global_1665495, iParam0);
func_198(joaat("mpply_crew_local_xp_2"), Global_1665495);
}elseif(iVar1==3){
func_199(&Global_1665496, iParam0);
func_198(joaat("mpply_crew_local_xp_3"), Global_1665496);
}elseif(iVar1==4){
func_199(&Global_1665497, iParam0);
func_198(joaat("mpply_crew_local_xp_4"), Global_1665497);
}}}}


void func_198(int iParam0, var uParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, 1);
}
switch (iParam0){
case joaat("mpply_crew_0_id"):
Global_1665488=uParam1;
break;
case joaat("mpply_crew_1_id"):
Global_1665490=uParam1;
break;
case joaat("mpply_crew_2_id"):
Global_1665490=uParam1;
break;
case joaat("mpply_crew_3_id"):
Global_1665491=uParam1;
break;
case joaat("mpply_crew_4_id"):
Global_1665492=uParam1;
break;
case joaat("mpply_crew_local_xp_0"):
Global_1665493=uParam1;
break;
case joaat("mpply_crew_local_xp_1"):
Global_1665494=uParam1;
break;
case joaat("mpply_crew_local_xp_2"):
Global_1665495=uParam1;
break;
case joaat("mpply_crew_local_xp_3"):
Global_1665496=uParam1;
break;
case joaat("mpply_crew_local_xp_4"):
Global_1665497=uParam1;
break;
case joaat("mpply_became_cheater_num"):
Global_1665498=uParam1;
break;
case joaat("mpply_friendly"):
Global_1665499=uParam1;
break;
case joaat("mpply_offensive_language"):
Global_1665500=uParam1;
break;
case joaat("mpply_griefing"):
Global_1665501=uParam1;
break;
case joaat("mpply_helpful"):
Global_1665502=uParam1;
break;
case joaat("mpply_offensive_tagplate"):
Global_1665503=uParam1;
break;
case joaat("mpply_offensive_ugc"):
Global_1665504=uParam1;
break;
default:
break;
}}


void func_199(var uParam0, int iParam1){
*uParam0=(*uParam0 + iParam1);
}

int func_200(int iParam0){
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

int func_201(var uParam0){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return Global_2694468;
}}
return Global_2694468;
}


void func_202(int iParam0, int iParam1, int iParam2){
if(func_223()){
if(iParam0 >=1787576850){
iParam0=1787576850;
}
if(Global_262145.f_10070==0 && iParam1 !=-1076930708){
if(iParam2==0){
if(iParam0 < Global_1665638[func_211(-1)]){
STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
return;
}elseif(iParam0==Global_1665638[func_211(-1)]){
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
if(func_210(PLAYER::PLAYER_ID())){
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1=iParam0;
Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6=func_208(iParam0, 1);
}
func_207(640, iParam0, -1, 1);
func_206(641, func_208(iParam0, 1), -1, 1, 0);
Global_1665638[func_211(-1)]=iParam0;
func_203(-1109644434, 7, 0);
}}


void func_203(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_205(iParam1, iParam2)){
iVar0=func_204();
Global_2694420[iVar0]=iParam1;
Global_2694431[iVar0]=iParam0;
}}

int func_204(){
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

int func_205(int iParam0, var uParam1){
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


void func_206(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_211(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_207(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=Global_2805029[iParam0 /*3*/][func_211(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}
switch (iParam0){
case 788:
Global_1665566[func_211(iParam2)]=iParam1;
break;
case 789:
Global_1665572[func_211(iParam2)]=iParam1;
break;
case 790:
Global_1665578[func_211(iParam2)]=iParam1;
break;
case 791:
Global_1665584[func_211(iParam2)]=iParam1;
break;
case 8729:
Global_1665590[func_211(iParam2)]=iParam1;
break;
case 778:
Global_1665536[func_211(iParam2)]=iParam1;
break;
case 779:
Global_1665542[func_211(iParam2)]=iParam1;
break;
case 780:
Global_1665548[func_211(iParam2)]=iParam1;
break;
case 781:
Global_1665554[func_211(iParam2)]=iParam1;
break;
case 8731:
Global_1665560[func_211(iParam2)]=iParam1;
break;
case 768:
Global_1665506[func_211(iParam2)]=iParam1;
break;
case 769:
Global_1665512[func_211(iParam2)]=iParam1;
break;
case 770:
Global_1665518[func_211(iParam2)]=iParam1;
break;
case 771:
Global_1665524[func_211(iParam2)]=iParam1;
break;
case 8733:
Global_1665530[func_211(iParam2)]=iParam1;
break;
case 758:
Global_1665596[func_211(iParam2)]=iParam1;
break;
case 759:
Global_1665602[func_211(iParam2)]=iParam1;
break;
case 760:
Global_1665608[func_211(iParam2)]=iParam1;
break;
case 761:
Global_1665614[func_211(iParam2)]=iParam1;
break;
case 8735:
Global_1665620[func_211(iParam2)]=iParam1;
break;
case 1304:
Global_1665626[func_211(iParam2)]=iParam1;
break;
case 7236:
Global_1665632[func_211(iParam2)]=iParam1;
break;
case 640:
Global_1665638[func_211(iParam2)]=iParam1;
break;
case 1279:
Global_1665644[func_211(iParam2)]=iParam1;
break;
case 1878:
Global_2851325[0 /*3*/][func_211(iParam2)]=iParam1;
break;
case 2269:
Global_2851325[1 /*3*/][func_211(iParam2)]=iParam1;
break;
case 2932:
Global_2851325[2 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3061:
Global_2851325[3 /*3*/][func_211(iParam2)]=iParam1;
break;
case 12424:
Global_2851504[func_211(iParam2)]=iParam1;
break;
case 765:
Global_1665650[func_211(iParam2)]=iParam1;
break;
case 766:
Global_1665656[func_211(iParam2)]=iParam1;
break;
case 767:
Global_1665662[func_211(iParam2)]=iParam1;
break;
case 8734:
Global_1665668[func_211(iParam2)]=iParam1;
break;
case 9538:
Global_1665674[func_211(iParam2)]=iParam1;
break;
case 11803:
Global_1665680[func_211(iParam2)]=iParam1;
break;
case 1237:
Global_1665686[func_211(iParam2)]=iParam1;
break;
case 3056:
Global_2851413[0 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3057:
Global_2851413[1 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3058:
Global_2851413[2 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3059:
Global_2851413[3 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3060:
Global_2851413[4 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3639:
Global_2851507[0 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3640:
Global_2851507[1 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3641:
Global_2851507[2 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3642:
Global_2851507[3 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3643:
Global_2851507[4 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3644:
Global_2851523[0 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3645:
Global_2851523[1 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3646:
Global_2851523[2 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3647:
Global_2851523[3 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3648:
Global_2851523[4 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3224:
Global_2851413[5 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3230:
Global_2851325[4 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3666:
Global_2851539[func_211(iParam2)]=iParam1;
break;
case 3667:
Global_2851548[func_211(iParam2)]=iParam1;
break;
case 3668:
Global_2851542[func_211(iParam2)]=iParam1;
break;
case 3669:
Global_2851551[func_211(iParam2)]=iParam1;
break;
case 3670:
Global_2851545[func_211(iParam2)]=iParam1;
break;
case 3671:
Global_2851554[func_211(iParam2)]=iParam1;
break;
case 3692:
Global_2851557[func_211(iParam2)]=iParam1;
break;
case 3232:
Global_2851413[6 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3233:
Global_2851325[5 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3237:
Global_2851413[7 /*3*/][func_211(iParam2)]=iParam1;
break;
case 3235:
Global_2851325[6 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4022:
Global_2851413[8 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4023:
Global_2851325[7 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4025:
Global_2851413[9 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4026:
Global_2851325[8 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4028:
Global_2851413[10 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4029:
Global_2851325[9 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4031:
Global_2851413[11 /*3*/][func_211(iParam2)]=iParam1;
break;
case 4032:
Global_2851325[10 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6112:
Global_2851413[12 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6113:
Global_2851325[11 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6170:
Global_2851413[13 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6171:
Global_2851325[12 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6548:
Global_2851413[14 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6549:
Global_2851325[13 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6561:
Global_2851413[15 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6562:
Global_2851325[14 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6564:
Global_2851413[16 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6565:
Global_2851325[15 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6567:
Global_2851413[17 /*3*/][func_211(iParam2)]=iParam1;
break;
case 6568:
Global_2851325[16 /*3*/][func_211(iParam2)]=iParam1;
break;
case 7286:
Global_2851325[17 /*3*/][func_211(iParam2)]=iParam1;
break;
case 7288:
Global_2851325[18 /*3*/][func_211(iParam2)]=iParam1;
break;
case 7290:
Global_2851325[19 /*3*/][func_211(iParam2)]=iParam1;
break;
case 8013:
Global_2851325[20 /*3*/][func_211(iParam2)]=iParam1;
break;
case 8285:
Global_2851560[func_211(iParam2)]=iParam1;
break;
case 8286:
Global_2851563[func_211(iParam2)]=iParam1;
break;
case 8287:
Global_2851566[func_211(iParam2)]=iParam1;
break;
case 8288:
Global_2851569[func_211(iParam2)]=iParam1;
break;
case 8289:
Global_2851572[func_211(iParam2)]=iParam1;
break;
case 8290:
Global_2851575[func_211(iParam2)]=iParam1;
break;
case 8291:
Global_2851578[func_211(iParam2)]=iParam1;
break;
case 8292:
Global_2851581[func_211(iParam2)]=iParam1;
break;
case 8293:
Global_2851584[func_211(iParam2)]=iParam1;
break;
case 8294:
Global_2851587[func_211(iParam2)]=iParam1;
break;
case 8295:
Global_2851590[func_211(iParam2)]=iParam1;
break;
case 8296:
Global_2851593[func_211(iParam2)]=iParam1;
break;
case 8297:
Global_2851596[func_211(iParam2)]=iParam1;
break;
case 8905:
Global_2851599[func_211(iParam2)]=iParam1;
break;
case 8537:
Global_2851325[21 /*3*/][func_211(iParam2)]=iParam1;
break;
case 8982:
Global_2851413[23 /*3*/][func_211(iParam2)]=iParam1;
break;
case 8980:
Global_2851325[22 /*3*/][func_211(iParam2)]=iParam1;
break;
case 8985:
Global_2851413[24 /*3*/][func_211(iParam2)]=iParam1;
break;
case 8983:
Global_2851325[23 /*3*/][func_211(iParam2)]=iParam1;
break;
case 9624:
Global_2851325[24 /*3*/][func_211(iParam2)]=iParam1;
break;
case 9913:
Global_2851325[25 /*3*/][func_211(iParam2)]=iParam1;
break;
case 10443:
Global_2851413[27 /*3*/][func_211(iParam2)]=iParam1;
break;
case 10441:
Global_2851325[26 /*3*/][func_211(iParam2)]=iParam1;
break;
case 10446:
Global_2851413[28 /*3*/][func_211(iParam2)]=iParam1;
break;
case 10444:
Global_2851325[27 /*3*/][func_211(iParam2)]=iParam1;
break;
default:
break;
}}

int func_208(int iParam0, bool bParam1){
if(bParam1){}
return func_209(iParam0, 0);
}

int func_209(int iParam0, int iParam1){
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
if(Global_297011[iVar3]==iParam0){
iVar1=iVar3;
iVar2=iVar3;
}elseif(Global_297011[iVar3] < iParam0){
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

int func_210(bool bParam0){
if(bParam0==-1){
return 0;
}else{
return MISC::IS_BIT_SET(Global_2672505.f_1, bParam0);
}
return 1;
}

int func_211(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_16();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_212(bool bParam0){
if(Global_1574632.f_9==0){
if(bParam0 > -1){
if(bParam0==PLAYER::PLAYER_ID()){
return Global_1665638[func_211(-1)];
}elseif(func_210(bParam0)){
return Global_1853910[bParam0 /*862*/].f_205.f_1;
}}}else{
return Global_1665638[func_211(-1)];
}
return 0;
}


void func_213(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_215(iParam0, func_211(iParam2), 0);
iVar0=(iVar0 + iParam1);
if(!func_214(iParam0)){
func_206(iParam0, iVar0, iParam2, 1, 0);
}else{
func_207(iParam0, iVar0, iParam2, 1);
}}

int func_214(int iParam0){
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

int func_215(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_211(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_216(int iParam0){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
int iVar6;
int iVar7;
iVar1=PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar4=PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)){
bVar5=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
if(PLAYER::GET_PLAYER_TEAM(bVar5) !=-1){
if(PLAYER::GET_PLAYER_TEAM(bVar5)==iVar1 || func_76(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0, -1)){
iVar2++;
if(bVar5 !=PLAYER::PLAYER_ID()){
if(func_146(PLAYER::PLAYER_ID(), bVar5)){
bVar3=true;
}}}}}
bVar0++;
}
if(bVar3){
iVar6=round((func_217(*iParam0, 100) * (10f * Global_262145.f_4228)));
}
if(iVar2 > 4){
iVar2=4;
}
if(iVar2 >=2){
iVar7=round((func_217(*iParam0, 100) * (20f * Global_262145.f_4221)));
}
*iParam0=(*iParam0 + iVar6);
*iParam0=(*iParam0 + iVar7);
}


float func_217(int iParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=to_float(iParam0);
fVar1=to_float(iParam1);
fVar2=(fVar0 / fVar1);
return fVar2;
}


void func_218(bool bParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
if(bParam0){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar3=iVar0;
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(func_12(bVar4, 0, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
iVar1++;
if(func_146(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 32){
bVar4=iVar0;
if(func_12(bVar4, 1, 1)){
if(bVar4 !=PLAYER::PLAYER_ID()){
if(func_219(PLAYER::PLAYER_ID(), bVar4) <=20f){
iVar1++;
if(func_146(PLAYER::PLAYER_ID(), bVar4)){
bVar2=true;
}}}}
iVar0++;
}}
if(bVar2){
iVar5=round((func_217(*iParam1, 100) * (10f * Global_262145.f_4228)));
}
if(iVar1 > 4){
iVar1=4;
}
if(iVar1 >=1){
iVar6=round((func_217(*iParam1, 100) * (20f * Global_262145.f_4221)));
}
*iParam1=(*iParam1 + iVar5);
*iParam1=(*iParam1 + iVar6);
}


float func_219(bool bParam0, bool bParam1){
return vdist(func_38(bParam0), func_38(bParam1));
return 0f;
}

int func_220(int iParam0){
int iVar0;
if(PAD::GET_LOCAL_PLAYER_AIM_STATE() !=3){
return *iParam0;
}
iVar0=round((func_217(*iParam0, 100) * 25f));
*iParam0=(*iParam0 + iVar0);
return *iParam0;
}

int func_221(int iParam0){
if(iParam0 < 0){
if(MISC::ABSI(iParam0) > func_212(PLAYER::PLAYER_ID())){
iParam0=-func_212(PLAYER::PLAYER_ID());
}}
if(func_222(8000, 0, 0) > 0){
if(func_222(8000, 0, 0) < (iParam0 + func_212(PLAYER::PLAYER_ID()))){
iParam0=(func_222(8000, 0, 0) - func_212(PLAYER::PLAYER_ID()));
}}
return iParam0;
}

int func_222(int iParam0, bool bParam1, int iParam2){
if(iParam2==0){}
if(bParam1){}
if(iParam0 >=8000){
iParam0=8000;
}
return Global_297011[iParam0];
}

int func_223(){
return 1;
}

int func_224(var uParam0){
if(MISC::IS_STRING_NULL(uParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 1;
}
return 0;
}

int func_225(){
int iVar0;
if(func_232(PLAYER::PLAYER_ID()) || func_231(PLAYER::PLAYER_ID())){
if(Global_262145.f_10102 > 16000){
iVar0=16000;
}else{
iVar0=Global_262145.f_10102;
}}elseif(func_229() || func_226(PLAYER::PLAYER_ID())){
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

int func_226(bool bParam0){
return func_227(func_228(bParam0));
}

int func_227(int iParam0){
switch (iParam0){
case 233:
return 1;
default:
}
return 0;
}

int func_228(bool bParam0){
if(func_119(bParam0, 0)){
return Global_1894573[bParam0 /*608*/].f_10.f_33;
}
return -1;
}


bool func_229(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_64();
}
return func_230(Global_4718592.f_113724);
}

int func_230(int iParam0){
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


bool func_231(bool bParam0){
return Global_2657589[bParam0 /*466*/].f_121==2;
}


bool func_232(bool bParam0){
return Global_2657589[bParam0 /*466*/].f_121==7;
}


void func_233(){
Global_2696212=1;
}


void func_234(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5){
int iVar0;
if(!func_246()){
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
func_235(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_235(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_235(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
func_235(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
break;
}}

int func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
bool bVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
bool bVar5;
bVar0=false;
if(!func_246()){
bVar0=true;
}
iVar1=1;
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_16()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
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
*uParam0=func_242(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
func_241(1, iParam4);
Global_4536673=0;
}
if(iParam7 & 4 !=0){
func_236(-1, iParam4, iParam6, iParam5, -1);
}}
return 0;
}


void func_236(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (iParam1){
case 1704445500:
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), false);
break;
}
if(iParam0 !=-1){
func_237(iParam0);
}}


void func_237(int iParam0){
bool bVar0;
bVar0=false;
if(!func_246()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_240(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_238(&(Global_4535172[iParam0 /*85*/]));
}}


void func_238(var uParam0){
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
func_239(&(uParam0->f_14));
func_239(&(uParam0->f_14.f_13));
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


void func_239(var uParam0){
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

int func_240(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}


void func_241(int iParam0, var uParam1){
Global_2697015=uParam1;
Global_2697014=iParam0;
}

int func_242(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_246()){
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
func_243(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}


void func_243(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
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
iVar1=func_245(Var0.f_1);
if((Global_262145.f_24076 && !Global_262145.f_24077) && !Global_262145.f_24078){
return;
}
if(!iVar1==0){
func_244();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_244(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__245(bool bParam0){
var uVar0;
if(bParam0 !=-1){
MISC::SET_BIT(&uVar0, bParam0);
}
return uVar0;
}

int func_246(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}


void func_247(int iParam0, int iParam1){
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


void func_248(var uParam0, var uParam1){
int iVar0;
int iVar1;
float fVar2;
int iVar3;
int iVar4;
if(func_17(NETWORK::PARTICIPANT_ID_TO_INT(), 1)){
iVar1=floor(((to_float((Local_152.f_1 - iLocal_121)) / 60f) / 1000f));
if(iVar1 > Global_262145.f_11910){
iVar1=Global_262145.f_11910;
}elseif(iVar1 < 1){
iVar1=1;
}
iVar0=(func_286() * iVar1);
*uParam1=(func_285() * iVar1);
fVar2=func_284();
if(fVar2 > 0f && !MISC::IS_BIT_SET(Local_152.f_2, 0)){
iVar3=round(((to_float(func_28(1)) / 60f) / 1000f));
if(iVar3 > func_283()){
iVar3=func_283();
}
iVar4=Local_152.f_51;
if(iVar4 > func_282()){
iVar4=func_282();
}
*uParam0=(*uParam0 + round((IntToFloat(func_275(func_281(), func_280(), iVar3, fVar2, func_279(), func_278(), func_277(), iVar4)) * Global_262145.f_11923)));
*uParam1=(*uParam1 + round((IntToFloat(func_275(func_274(), func_273(), iVar3, fVar2, func_279(), func_278(), func_277(), iVar4)) * Global_262145.f_11924)));
}else{
func_271(1);
}}else{
func_271(0);
}
func_249(uParam0, 1);
*uParam0=(*uParam0 + iVar0);
}


void func_249(var uParam0, int iParam1){
int iVar0;
if(*uParam0 > 0){
if(!func_270()){
if(func_269(0)){
if(!func_265(0)){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_264())){
if(func_263()==100){
iVar0=*uParam0;
*uParam0=0;
}
else{
iVar0=((*uParam0 / 100) * func_263());
*uParam0=(*uParam0 - iVar0);
}
func_261(&iVar0, 0);
if(iParam1==1){
func_254("GB_BCUT_TICK1", func_264(), iVar0, 0, 0, 1);
}
func_253(20);
func_250(func_264(), iVar0, 1);
}}}}}}


void func_250(bool bParam0, int iParam1, int iParam2){
struct<8> Var0;
if(func_12(bParam0, 0, 1)){
Var0.f_0=1810976828;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam1;
Var0.f_4=iParam2;
Var0.f_5=func_252(bParam0);
func_251(&(Var0.f_6), &(Var0.f_7));
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 8, func_245(bParam0));
}}


void func_251(var uParam0, var uParam1){
*uParam0=Global_1923597.f_9;
*uParam1=Global_1923597.f_10;
}


var func__252(bool bParam0){
return Global_1894573[bParam0 /*608*/].f_510;
}


void func_253(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2793046.f_5225.f_7[iVar0]), bVar1);
}

int func_254(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5){
int iVar0;
struct<8> Var1;
iVar0=-1;
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5){
if(!bParam4){
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}else{
StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var1)){
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_69(bParam1, -2, 1, 0, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_259(&Var1));
if(!iParam3==0){
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_255(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
}
return iVar0;
}


void func_255(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_258() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_14(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_256(iParam2);
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

int func_256(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944061 - 1)){
if(iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1){
func_257(iVar0);
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


void func_257(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944061.f_5[iVar0 /*53*/]={
Global_1944061.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_258(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


var func__259(char* sParam0){
char cVar0[64];
StringCopy(&cVar0, "<C>", 64);
StringConCat(&cVar0, sParam0, 64);
StringConCat(&cVar0, "</C>~s~", 64);
return func_260(&cVar0);
}


var func__260(char[4] cParam0){
return cParam0;
}


void func_261(int iParam0, bool bParam1){
int iVar0;
int iVar1;
if(bParam1){
iVar1=func_262(1);
}else{
iVar1=func_262(0);
}
iVar0=((*iParam0 / 100) * iVar1);
*iParam0=(*iParam0 - iVar0);
}

int func_262(bool bParam0){
if(bParam0){
return round((0.05f * 100f));
}
return Global_262145.f_12865;
}

int func_263(){
return Global_262145.f_12864;
}


bool func_264(){
return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}


bool func_265(bool bParam0){
return func_266(PLAYER::PLAYER_ID(), bParam0);
}

int func_266(bool bParam0, bool bParam1){
return func_267(bParam0, bParam1, 1);
}

int func_267(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_109()){
return 0;
}
if(!bParam1){
if(func_268(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_109() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_268(bool bParam0, int iParam1){
if(bParam0 !=func_109()){
if(Global_1894573[bParam0 /*608*/].f_10 !=func_109()){
if(Global_1894573[bParam0 /*608*/].f_10==bParam0 && Global_1894573[bParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}


bool func_269(bool bParam0){
return func_91(PLAYER::PLAYER_ID(), bParam0);
}


bool func_270(){
return func_92(PLAYER::PLAYER_ID());
}


void func_271(bool bParam0){
if(bParam0){
if(func_272(1)){
MISC::SET_BIT(&Global_1836883, true);
}}elseif(func_272(2)){
MISC::SET_BIT(&Global_1836883, 2);
}}

int func_272(int iParam0){
var uVar0;
uVar0=func_215(2537, -1, 0);
if(iParam0==0){
if((MISC::IS_BIT_SET(uVar0, 0) && MISC::IS_BIT_SET(uVar0, 1)) && MISC::IS_BIT_SET(uVar0, 2)){
return 0;
}}elseif(iParam0==1){
if((MISC::IS_BIT_SET(uVar0, 3) && MISC::IS_BIT_SET(uVar0, 4)) && MISC::IS_BIT_SET(uVar0, 5)){
return 0;
}}elseif(iParam0==2){
if((MISC::IS_BIT_SET(uVar0, 6) && MISC::IS_BIT_SET(uVar0, 7)) && MISC::IS_BIT_SET(uVar0, 8)){
return 0;
}}elseif(iParam0==3){
if((MISC::IS_BIT_SET(uVar0, 9) && MISC::IS_BIT_SET(uVar0, 10)) && MISC::IS_BIT_SET(uVar0, 11)){
return 0;
}}
return 1;
}

int func_273(){
return Global_262145.f_11410;
}

int func_274(){
return Global_262145.f_11408;
}

int func_275(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7){
return func_276(round(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_276(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=(iParam0 / iParam1);
iVar0=(iVar0 * iParam1);
iVar1=(iVar0 + iParam1);
iVar2=(iParam0 - iVar0);
iVar3=(iVar1 - iParam0);
if(iVar2 >=iVar3){
if(iParam2==1){
}
return iVar1;
}
if(iParam2==1){}
return iVar0;
}


float func_277(){
return Global_262145.f_11413;
}


float func_278(){
return Global_262145.f_11412;
}


float func_279(){
return Global_262145.f_11411;
}

int func_280(){
return Global_262145.f_11409;
}

int func_281(){
return Global_262145.f_11407;
}

int func_282(){
return Global_262145.f_11815;
}

int func_283(){
return Global_262145.f_11814;
}


var func__284(){
if(func_20(0)){
return Global_262145.f_11434;
}
if(func_20(1)){
return Global_262145.f_11435;
}
if(func_20(2)){
return Global_262145.f_11436;
}
return Global_262145.f_11437;
}

int func_285(){
return Global_262145.f_11406;
}

int func_286(){
return Global_262145.f_11405;
}


void func_287(){
int iVar0;
float fVar1;
int iVar2;
var uVar3;
bool bVar4;
char* sVar5;
if(!MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 1) && (func_299() || MISC::IS_BIT_SET(Local_152.f_2, 0))){
if(func_67(func_298())){
func_297();
}
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(!MISC::IS_BIT_SET(Local_152.f_2, 0)){
if(func_339(0)){
iVar2=Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4;
func_293(&iVar0, &fVar1, iVar2, 1);
if(func_20(0)){
if(func_18()){
func_291(64, func_292(Local_152.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_406(Local_152.f_3), 1, 2, 0);
}
elseif(func_290()){
func_291(69, func_292(Local_152.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
}
else{
func_291(64, func_292(Local_152.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
}}elseif(func_20(1)){
if(func_18()){
func_291(67, func_292(Local_152.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_406(Local_152.f_3), 1, 2, 0);
}
elseif(func_290()){
func_291(75, func_292(Local_152.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
}
else{
func_291(67, func_292(Local_152.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
}}elseif(func_20(2)){
if(func_18()){
func_291(67, func_292(Local_152.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_406(Local_152.f_3), 1, 2, 0);
}
elseif(func_290()){
func_291(75, func_292(Local_152.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
}
else{
func_291(67, func_292(Local_152.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_406(Local_152.f_3), 1, 2, 0);
}}else{
uVar3=PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_4[0]);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar3)){
bVar4=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(Local_1518[Local_152.f_4[0] /*12*/].f_3 < 4){
return;
}
iVar2=Local_1518[Local_152.f_4[0] /*12*/].f_4;
func_293(&iVar0, &fVar1, iVar2, 1);
sVar5="AMCH_LOSE";
if(func_18()){
func_289(76, func_109(), func_292(Local_152.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_406(Local_152.f_3), -1, fVar1, 1, 2, PLAYER::GET_PLAYER_NAME(bVar4));
}elseif(func_290()){
func_289(77, func_109(), func_292(Local_152.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_406(Local_152.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(bVar4));
}else{
func_289(76, func_109(), func_292(Local_152.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_406(Local_152.f_3), iVar0, -1082130432, 1, 2, PLAYER::GET_PLAYER_NAME(bVar4));
}
}}}else{
func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
}}else{
func_51("", "", 1);
}
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), true);
func_288(133);
}}}


void func_288(int iParam0){
if(iParam0==iParam0){}}

int func_289(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11){
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
func_112(iParam0, &Var0, iParam7, sParam3, sParam4);
Var0.f_17=iParam1;
StringCopy(&(Var0.f_57), sParam2, 16);
StringCopy(&(Var0.f_61), sParam6, 16);
StringCopy(&(Var0.f_25), sParam11, 64);
Var0.f_6=iParam5;
Var0.f_7=fParam8;
Var0.f_71=iParam9;
Var0.f_72=iParam10;
return func_53(&Var0);
}

int func_290(){
return 0;
}

int func_291(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10){
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
func_112(iParam0, &Var0, iParam5, sParam2, sParam3);
StringCopy(&(Var0.f_57), sParam1, 16);
StringCopy(&(Var0.f_61), sParam7, 16);
Var0.f_6=iParam4;
Var0.f_7=fParam6;
Var0.f_71=iParam8;
Var0.f_72=iParam9;
if(iParam10 !=0){
func_110(&(Var0.f_69), iParam10);
}
return func_53(&Var0);
}


char* func_292(int iParam0, bool bParam1, bool bParam2, int iParam3){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_M_LB";
}elseif(bParam2){
return "AMCH_M";
}else{
return "AMCH_METRES";
}}elseif(bParam1){
return "AMCH_FT_LB";
}elseif(bParam2){
return "AMCH_FT";
}else{
return "AMCH_FEET";
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(bParam1){
return "AMCH_KMH_LB";
}elseif(bParam2){
return "AMCH_KMHN";
}else{
return "AMCH_KMH";
}}elseif(bParam1){
return "AMCH_MPH_LB";
}elseif(bParam2){
return "AMCH_MPHN";
}else{
return "AMCH_MPH";
}
break;
case 7:
if(bParam1 || bParam2){
return "";
}else{
return "AMCH_VEH";
}
break;
case 15:
case 16:
case 17:
case 18:
if(bParam1 || bParam2){
return "";
}elseif(iParam3 !=1){
return "AMCH_KILLS";
}else{
return "AMCH_KILL";
}
break;
}
if(bParam1 || bParam2){
return "";
}
return "AMCH_EMPTY";
}

int func_293(int iParam0, float fParam1, int iParam2, bool bParam3){
if(func_18()){
if(bParam3){
*fParam1=(func_294(Local_152.f_3, iParam2) / 10f);
}else{
*fParam1=(to_float(iParam2) / 10f);
}
return 1;
}
*iParam0=iParam2;
return 0;
}


float func_294(int iParam0, int iParam1){
switch (iParam0){
case 0:
case 3:
case 4:
case 5:
case 1:
case 6:
case 9:
case 10:
case 13:
case 11:
case 12:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_296(to_float(iParam1));
}
break;
case 2:
if(MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
return to_float(iParam1);
}else{
return func_295(to_float(iParam1));
}
break;
}
return to_float(iParam1);
}


float func_295(float fParam0){
return (fParam0 / 1.609344f);
}


float func_296(float fParam0){
return (fParam0 / 0.3048f);
}


void func_297(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672505.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672505.f_2514[iVar0 /*80*/].f_2=5;
func_110(&(Global_2672505.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}

int func_298(){
return Global_2672505.f_2514[0 /*80*/].f_1;
}


var func__299(){
return MISC::IS_BIT_SET(Global_1836858.f_1, 25);
}

int func_300(var uParam0, bool bParam1){
bool bVar0;
if((((*uParam0 > 0 && !func_311()) && !(func_119(PLAYER::PLAYER_ID(), 0) && (func_115(PLAYER::PLAYER_ID()) || func_310(PLAYER::PLAYER_ID())))) && !func_308(PLAYER::PLAYER_ID())) && !func_307(PLAYER::PLAYER_ID())){
func_306();
}
switch (*uParam0){
case 0:
if(!func_47(&(uParam0->f_3))){
func_2(&(uParam0->f_3), 0, 0);
}elseif(func_1(&(uParam0->f_3), 1000, 0)){
MISC::SET_BIT(&(Global_1836858.f_1), 25);
if(bParam1){
MISC::SET_BIT(&(Global_2793046.f_4687), false);
func_2(&(uParam0->f_5), 0, 0);
}
func_2(&(uParam0->f_1), 0, 0);
func_305(uParam0, 1);
}
break;
case 1:
if(func_47(&(uParam0->f_5))){
if(func_1(&(uParam0->f_5), 3000, 0)){
bVar0=true;
}}else{
bVar0=true;
}
if(bVar0){
func_302();
func_305(uParam0, 2);
}
break;
case 2:
func_302();
if(func_1(&(uParam0->f_1), 15000, 0)){
if(func_301("AMEV_LBD_HELP")){
HUD::CLEAR_HELP(1);
}
func_305(uParam0, 3);
}
break;
case 3:
if(func_1(&(uParam0->f_1), 23500, 0)){
MISC::CLEAR_BIT(&(Global_2793046.f_4687), true);
func_305(uParam0, 4);
return 1;
}
break;
case 4:
MISC::CLEAR_BIT(&(Global_2793046.f_4687), true);
return 1;
}
return 0;
}


bool func_301(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_302(){
if(MISC::IS_BIT_SET(Global_2793046.f_4687, 0)){
if(((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2793046.f_848, 2)) && func_12(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75693) && !Global_60543) && !CAM::IS_SCREEN_FADED_OUT()){
MISC::SET_BIT(&(Global_2793046.f_4687), true);
func_304("AMEV_LBD_HELP", -1);
func_303(1);
MISC::CLEAR_BIT(&(Global_2793046.f_4687), false);
}}}


void func_303(int iParam0){
HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
if(iParam0 && !func_311()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
}}


void func_304(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}


void func_305(var uParam0, int iParam1){
*uParam0=iParam1;
}


void func_306(){
Global_2696213=1;
}

int func_307(bool bParam0){
if(bParam0 !=func_109()){
return MISC::IS_BIT_SET(Global_2657589[bParam0 /*466*/].f_321.f_5, 4);
}
return 0;
}

int func_308(bool bParam0){
int iVar0;
if(bParam0 !=func_109()){
if(func_12(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
iVar0=func_309(Global_2657589[bParam0 /*466*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_309(int iParam0){
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


bool func_310(bool bParam0){
return func_114(bParam0, 19);
}


bool func_311(){
return Global_2672505.f_2514[0 /*80*/].f_1 !=0;
}


void func_312(){
bool bVar0[3];
bool bVar1;
var uVar2[3];
var uVar3[3];
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
float fVar9;
float fVar10;
int iVar11;
bool bVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
var uVar17[3];
var uVar18;
var uVar19;
bool bVar20;
int iVar21;
int iVar22;
int iVar23;
if(Local_152.f_4[0] > -1){
iVar11=0;
bVar12=(func_336() && !func_107(PLAYER::PLAYER_ID()));
iVar7=0;
while (iVar7 < 3){
bVar0[iVar7]=func_109();
iVar7++;
}
iVar7=0;
while (iVar7 < 3){
if(Local_152.f_4[iVar7] > -1){
uVar18=PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_4[iVar7]);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar18)){
bVar1=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar18);
if(func_12(bVar1, 0, 1)){
if(!func_14(bVar1, 0)){
if(Local_1518[Local_152.f_4[iVar7] /*12*/].f_4 !=0){
bVar0[iVar15]=bVar1;
func_293(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1518[Local_152.f_4[iVar7] /*12*/].f_4, 1);
iVar15++;
if(func_269(1)){
if(func_91(bVar1, 1)){
uVar17[iVar7]=func_69(bVar1, -2, 0, 0, 0);
}}}
}}}}
iVar7++;
}
iVar8=NETWORK::PARTICIPANT_ID_TO_INT();
if(func_107(PLAYER::PLAYER_ID())){
uVar19=func_334();
bVar20=NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar19);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar20)){
iVar21=NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar20);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar21)){
iVar8=iVar21;
}}}
func_293(&iVar4, &fVar9, iLocal_125, 1);
func_293(&iVar5, &fVar10, Local_1518[iVar8 /*12*/].f_4, 1);
iVar22=func_28(0);
iVar23=func_549(&(Local_152.f_39), 0, 0);
iVar6=func_547(0, (iVar22 - iVar23));
if(func_17(-1, 0)){
func_331(iVar6);
}
if(iVar6 > 30000){
iVar13=1;
}else{
iVar13=6;
}
if(MISC::IS_BIT_SET(uLocal_123, 2)){
iVar14=2000;
}else{
iVar14=0;
}
if(func_336() || Local_152.f_3==6){
iVar16=2;
}else{
iVar16=1;
}
if(Local_152.f_37 >=4){
iVar6=0;
}
if(func_18()){
func_327(bVar0[0], bVar0[1], bVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_292(Local_152.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_328(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
}elseif(func_290()){
func_326(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_328(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
}else{
func_317(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_292(Local_152.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_328(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
}
func_313();
}}


void func_313(){
float fVar0;
int iVar1;
float fVar2;
fVar0=func_316();
if(fVar0 >=0f){
if(Local_152.f_37==3){
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())){
iVar1=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
func_315(iVar1, &fLocal_129);
fVar2=(fVar0 + fLocal_129);
HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(fVar2, 1, 21);
func_314(fVar0);
return;
}}}}
if(func_301("AMCH_FLYLOW")){
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(uLocal_123, 4)){
AUDIO::STOP_SOUND(iLocal_131);
MISC::CLEAR_BIT(&uLocal_123, 4);
}
HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, 0, 21);
}}


void func_314(float fParam0){
float fVar0;
if(STATS::STAT_GET_FLYING_ALTITUDE(&fVar0)){
if(fVar0 > fParam0){
func_550(6);
if(!MISC::IS_BIT_SET(uLocal_123, 4)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_131, "Altitude_Warning", "EXILE_1", 1);
MISC::SET_BIT(&uLocal_123, 4);
}}else{
if(func_301("AMCH_FLYLOW")){
HUD::CLEAR_HELP(1);
}
if(MISC::IS_BIT_SET(uLocal_123, 4)){
AUDIO::STOP_SOUND(iLocal_131);
MISC::CLEAR_BIT(&uLocal_123, 4);
}}}}


float func_315(int iParam0, var uParam1){
float fVar0;
struct<3> Var1;
var uVar2;
Var1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, uParam1, 1, 0);
MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar2, 0, 0);
if(STATS::STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN()){
func_550(3);
MISC::SET_BIT(&uLocal_123, 10);
func_27(&uLocal_119, 0, 0);
}elseif(MISC::IS_BIT_SET(uLocal_123, 10)){
if(func_1(&uLocal_119, 2000, 0)){
MISC::CLEAR_BIT(&uLocal_123, 10);
}}
if(*uParam1 < 0f){
*uParam1=0f;
}
fVar0=(Var1.f_2 - *uParam1);
if(fVar0 < 0f){
fVar0=(fVar0 * -1f);
}
return fVar0;
}


float func_316(){
switch (Local_152.f_3){
case 11:
return 20f;
case 12:
return 100f;
default:
}
return -1f;
}


void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18){
char* sVar0;
int iVar1;
char* sVar2;
if(func_323(0)==0){
return;
}
func_322();
iVar1=0;
if(((Global_2695729[0] !=iParam0 || Global_2695729[1] !=iParam1) || Global_2695729[2] !=iParam2) || *iParam10){
iVar1=1;
}
Global_2695729[0]=iParam0;
Global_2695729[1]=iParam1;
Global_2695729[2]=iParam2;
Global_2695729[3]=0;
Global_2695729[4]=0;
if(Global_2695729[0] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[0]);
Global_2695735[0 /*16*/]={
func_321(1, sVar0) 
};
}
if(iParam3 > 0){
func_318(iParam3, &(Global_2695735[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
}}
if(Global_2695729[1] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[1]);
Global_2695735[1 /*16*/]={
func_321(2, sVar0) 
};
}
if(iParam4 > 0){
func_318(iParam4, &(Global_2695735[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
}}
if(Global_2695729[2] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[2]);
Global_2695735[2 /*16*/]={
func_321(3, sVar0) 
};
}
if(iParam5 > 0){
func_318(iParam5, &(Global_2695735[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
}}
if(bParam12){
func_318(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
switch (iParam15){
case 0:
if(PLAYER::PLAYER_ID() !=func_109()){
if(func_170(PLAYER::PLAYER_ID())==0){
func_318(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}}
break;
case 1:
if(func_170(PLAYER::PLAYER_ID())==0){
func_318(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
break;
case 2:
if(func_170(PLAYER::PLAYER_ID())==0){
func_318(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
break;
case 3:
break;
}
sVar2="HUD_COUNTDOWN";
if(!func_224(sParam14)){
sVar2=sParam14;
}
func_151(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
*iParam10=0;
func_150();
}


void func_318(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
bVar0=-1;
iVar1=0;
while (iVar1 <=9){
if(bVar0==-1){
if(func_153(6, iVar1)==0){
bVar0=iVar1;
}}
iVar1++;
}
if(bVar0 > -1){
Global_1655472.f_1=1;
func_152(6, bVar0);
Global_1655472.f_4041[bVar0]=iParam0;
StringCopy(&(Global_1655472.f_4041.f_11[bVar0 /*16*/]), sParam1, 64);
Global_1655472.f_4041.f_183[bVar0]=iParam3;
Global_1655472.f_4041.f_172[bVar0]=iParam2;
Global_1655472.f_4041.f_260[bVar0]=iParam4;
Global_1655472.f_4041.f_271[bVar0]=iParam5;
StringCopy(&(Global_1655472.f_4041.f_282[bVar0 /*16*/]), sParam6, 64);
Global_1655472.f_4041.f_443[bVar0]=iParam7;
Global_1655472.f_4041.f_454[bVar0]=fParam8;
Global_1655472.f_4041.f_497[bVar0]=iParam9;
Global_1655472.f_4041.f_508[bVar0]=iParam10;
Global_1655472.f_4041.f_205[bVar0]=iParam11;
Global_1655472.f_4041.f_216[bVar0]=iParam12;
Global_1655472.f_4041.f_227[bVar0]=iParam13;
Global_1655472.f_4041.f_238[bVar0]=iParam14;
Global_1655472.f_4041.f_249[bVar0]=iParam15;
Global_1655472.f_4041.f_519[bVar0]=iParam16;
Global_1655472.f_4041.f_530[bVar0]=iParam17;
Global_1655472.f_4041.f_541[bVar0]=iParam18;
Global_1655472.f_4041.f_552[bVar0]=iParam19;
Global_1655472.f_4041.f_563[bVar0]=iParam20;
Global_1655472.f_4041.f_574[bVar0]=iParam21;
Global_1655472.f_4041.f_585[bVar0]=iParam22;
Global_1655472.f_4041.f_596[bVar0]=iParam23;
Global_1655472.f_4041.f_607[bVar0]=iParam24;
Global_1655472.f_4041.f_194[bVar0]=iParam25;
if(iParam15==5 && func_320()){
Global_1655472.f_1172=1;
}
if(MISC::IS_PC_VERSION()){
iVar2=0;
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
if(iVar3==1280 && iVar4 >=960){
iVar2=1;
}
if(iParam0 > 99999999){
Global_1655472.f_1176=1;
}elseif(iParam0 > 9999999 || iVar2){
Global_1655472.f_1175=1;
}elseif(iParam0 > 999){
Global_1655472.f_1172=1;
}
if(func_319()){
Global_1655472.f_1176=1;
}}}}

int func_319(){
int iVar0;
var uVar1;
if(MISC::IS_PC_VERSION()){
GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
if(iVar0 <=1024){
return 1;
}}
return 0;
}

int func_320(){
if(((LOCALIZATION::GET_CURRENT_LANGUAGE()==8 || LOCALIZATION::GET_CURRENT_LANGUAGE()==9) || LOCALIZATION::GET_CURRENT_LANGUAGE()==10) || LOCALIZATION::GET_CURRENT_LANGUAGE()==12){
return 1;
}
return 0;
}
struct<16> func_321(int iParam0, char* sParam1){
struct<16> Var0;
switch (iParam0){
case 0:
StringCopy(&Var0, sParam1, 64);
return Var0;
break;
case 1:
StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIRST"), 64);
break;
case 2:
StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSSECOND"), 64);
break;
case 3:
StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSTHIRD"), 64);
break;
case 4:
StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFOURTH"), 64);
break;
case 5:
StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIFTH"), 64);
break;
}
StringConCat(&Var0, " ", 64);
StringConCat(&Var0, sParam1, 64);
return Var0;
}


void func_322(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
Global_2696216=1;
}

int func_323(bool bParam0){
if(func_325()){
return 0;
}
if(func_324()){
return 0;
}
if(!bParam0){
if(func_12(PLAYER::PLAYER_ID(), 1, 1)==0){
return 0;
}}
return 1;
}


bool func_324(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}


bool func_325(){
return MISC::IS_BIT_SET(Global_2621446, 12);
}


void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17){
char* sVar0;
int iVar1;
char* sVar2;
if(func_323(0)==0){
return;
}
func_322();
iVar1=0;
if(((Global_2695729[0] !=iParam0 || Global_2695729[1] !=iParam1) || Global_2695729[2] !=iParam2) || *iParam9){
iVar1=1;
}
Global_2695729[0]=iParam0;
Global_2695729[1]=iParam1;
Global_2695729[2]=iParam2;
Global_2695729[3]=0;
Global_2695729[4]=0;
if(Global_2695729[0] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[0]);
Global_2695735[0 /*16*/]={
func_321(1, sVar0) 
};
}
if(iParam3 > 0){
func_151(iParam3, &(Global_2695735[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
}}
if(Global_2695729[1] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[1]);
Global_2695735[1 /*16*/]={
func_321(2, sVar0) 
};
}
if(iParam4 > 0){
func_151(iParam4, &(Global_2695735[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
}}
if(Global_2695729[2] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[2]);
Global_2695735[2 /*16*/]={
func_321(3, sVar0) 
};
}
if(iParam5 > 0){
func_151(iParam5, &(Global_2695735[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
}}
if(bParam11){
func_151(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
}
switch (iParam14){
case 0:
if(PLAYER::PLAYER_ID() !=func_109()){
if(func_170(PLAYER::PLAYER_ID())==0){
func_151(iParam7, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}}
break;
case 1:
if(func_170(PLAYER::PLAYER_ID())==0){
func_151(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}
break;
case 2:
if(func_170(PLAYER::PLAYER_ID())==0){
func_151(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}
break;
case 3:
break;
}
sVar2="HUD_COUNTDOWN";
if(!func_224(sParam13)){
sVar2=sParam13;
}
func_151(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
*iParam9=0;
func_150();
}


void func_327(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18){
char* sVar0;
int iVar1;
char* sVar2;
if(func_323(0)==0){
return;
}
func_322();
iVar1=0;
if(((Global_2695729[0] !=iParam0 || Global_2695729[1] !=iParam1) || Global_2695729[2] !=iParam2) || *iParam10){
iVar1=1;
}
Global_2695729[0]=iParam0;
Global_2695729[1]=iParam1;
Global_2695729[2]=iParam2;
Global_2695729[3]=0;
Global_2695729[4]=0;
if(Global_2695729[0] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[0]);
Global_2695735[0 /*16*/]={
func_321(1, sVar0) 
};
}
if(fParam3 > 0f){
func_318(-1, &(Global_2695735[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
}}
if(Global_2695729[1] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[1]);
Global_2695735[1 /*16*/]={
func_321(2, sVar0) 
};
}
if(fParam4 > 0f){
func_318(-1, &(Global_2695735[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
}}
if(Global_2695729[2] !=func_109()){
if(iVar1==1){
sVar0=PLAYER::GET_PLAYER_NAME(Global_2695729[2]);
Global_2695735[2 /*16*/]={
func_321(3, sVar0) 
};
}
if(fParam5 > 0f){
func_318(-1, &(Global_2695735[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
}}
if(bParam12){
func_318(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
switch (iParam15){
case 0:
if(PLAYER::PLAYER_ID() !=func_109()){
if(func_170(PLAYER::PLAYER_ID())==0){
func_318(-1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}}
break;
case 1:
if(func_170(PLAYER::PLAYER_ID())==0){
func_318(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
break;
case 2:
if(func_170(PLAYER::PLAYER_ID())==0){
func_318(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
}
break;
case 3:
break;
}
sVar2="HUD_COUNTDOWN";
if(!func_224(sParam14)){
sVar2=sParam14;
}
if(iParam8 !=-10){
func_151(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
}
*iParam10=0;
func_150();
}


char* func_328(){
return "HUD_COUNTDOWN";
switch (func_330(PLAYER::PLAYER_ID())){
case 131:
return "AET_HOT_TARG";
case 132:
return "AET_CHK_COLL";
case 133:
switch (func_329()){
case 0:
return "AET_CHALL_LJ";
case 1:
return "AET_CHALL_LS";
case 2:
return "AET_CHALL_HS";
case 3:
return "AET_CHALL_LST";
case 4:
return "AET_CHALL_LW";
case 5:
return "AET_CHALL_NC";
case 6:
return "AET_CHALL_LP";
case 7:
return "AET_CHALL_VS";
case 8:
return "AET_CHALL_NM";
case 9:
return "AET_CHALL_RD";
case 10:
return "AET_CHALL_LF";
case 11:
return "AET_CHALL_LFL";
case 12:
return "AET_CHALL_LFI";
case 13:
return "AET_CHALL_LB";
case 14:
return "AET_CHALL_MB";
case 15:
return "AET_CHALL_HSH";
case 16:
return "AET_CHALL_DB";
case 17:
return "AET_CHALL_ML";
case 18:
return "AET_CHALL_LSN";
default:
}
break;
case 136:
return "AET_PENNED";
case 138:
return "AET_PARCEL";
case 139:
return "AET_PROPERTY";
case 140:
return "AET_DDROP";
case 141:
return "AET_KCASTLE";
case 144:
return "AET_BLAST";
case 129:
return "AET_UWARF";
case 146:
return "AET_BEAST";
}
return "";
}

int func_329(){
if(func_330(PLAYER::PLAYER_ID())==133){
return Global_2793046.f_5146;
}
return -1;
}

int func_330(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}


void func_331(int iParam0){
if(func_333(PLAYER::PLAYER_ID()) || func_332(PLAYER::PLAYER_ID())==146){
return;
}
if(IntToFloat(iParam0) < MISC::GET_FRAME_TIME()){
if(MISC::IS_BIT_SET(Global_2793046.f_5062, 0)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2793046.f_5064))){
AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2793046.f_5064));
}
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
if(Global_2793046.f_5072 > -1){
AUDIO::RELEASE_SOUND_ID(Global_2793046.f_5072);
Global_2793046.f_5072=-1;
}
Global_2793046.f_5062=0;
}}elseif(iParam0 < 30000){
if(MISC::IS_BIT_SET(Global_2793046.f_5062, 0)){
if(MISC::IS_BIT_SET(Global_2793046.f_5062, 4)){
if(!MISC::IS_BIT_SET(Global_2793046.f_5062, 2)){
if(AUDIO::DOES_PLAYER_VEH_HAVE_RADIO()){
if((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2793046.f_5064))){
StringCopy(&(Global_2793046.f_5064), "", 32);
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
MISC::SET_BIT(&(Global_2793046.f_5062), 2);
}}}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && MISC::IS_BIT_SET(Global_2793046.f_5062, 5)){
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
}}elseif(!MISC::IS_BIT_SET(Global_2793046.f_5062, 1)){
if(iParam0 < 10000){
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
}elseif(iParam0 < 20000){
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
}else{
AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
}
AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
MISC::SET_BIT(&(Global_2793046.f_5062), true);
}elseif(!MISC::IS_BIT_SET(Global_2793046.f_5062, 4)){
if(iParam0 < 27500){
if(AUDIO::GET_PLAYER_RADIO_STATION_GENRE() !=0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::IS_RADIO_FADED_OUT()){
StringCopy(&(Global_2793046.f_5064), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
}
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
MISC::SET_BIT(&(Global_2793046.f_5062), 4);
}}}
if(iParam0 < 10000){
if(!MISC::IS_BIT_SET(Global_2793046.f_5062, 3)){
Global_2793046.f_5072=AUDIO::GET_SOUND_ID();
AUDIO::PLAY_SOUND_FRONTEND(Global_2793046.f_5072, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
MISC::SET_BIT(&(Global_2793046.f_5062), 3);
}}}elseif(iParam0 > 10000){
if(!MISC::IS_BIT_SET(Global_2793046.f_5062, 0)){
Global_2793046.f_5062=0;
Global_2793046.f_5072=-1;
AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
MISC::SET_BIT(&(Global_2793046.f_5062), false);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::IS_BIT_SET(Global_2793046.f_5062, 2)){
MISC::SET_BIT(&(Global_2793046.f_5062), 2);
MISC::SET_BIT(&(Global_2793046.f_5062), 5);
}else{
MISC::CLEAR_BIT(&(Global_2793046.f_5062), 5);
MISC::CLEAR_BIT(&(Global_2793046.f_5062), 2);
}}}}elseif(iParam0 < 40000 && iParam0 > 30000){
if(!MISC::IS_BIT_SET(Global_2793046.f_5062, 0)){
Global_2793046.f_5062=0;
Global_2793046.f_5072=-1;
AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
MISC::SET_BIT(&(Global_2793046.f_5062), false);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
MISC::SET_BIT(&(Global_2793046.f_5062), 2);
MISC::SET_BIT(&(Global_2793046.f_5062), 5);
}else{
MISC::CLEAR_BIT(&(Global_2793046.f_5062), 2);
MISC::CLEAR_BIT(&(Global_2793046.f_5062), 5);
}}}}

int func_332(bool bParam0){
if(bParam0 !=func_109() && func_12(bParam0, 1, 1)){
return Global_2657589[bParam0 /*466*/].f_321.f_17;
}
return -1;
}

int func_333(bool bParam0){
if(bParam0 !=func_109()){
if(func_12(bParam0, 1, 1)){
if(Global_2657589[bParam0 /*466*/].f_321.f_7 !=-1){
return func_309(Global_2657589[bParam0 /*466*/].f_321.f_7)==19;
}}}
return 0;
}


var func__334(){
if(ENTITY::DOES_ENTITY_EXIST(func_335())){
return func_335();
}
return func_104();
}


var func__335(){
return Global_2621446.f_3;
}

int func_336(){
switch (Local_152.f_3){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 8:
case 9:
case 11:
case 12:
case 13:
return 1;
default:
}
return 0;
}


void func_337(){
int iVar0;
struct<42> Var1;
bool bVar2;
var uVar3;
Var1=-1;
Var1.f_22=-1082130432;
Var1.f_23=3;
Var1.f_39=-1;
Var1.f_41=-1;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
Local_173.f_534[iVar0 /*42*/]={
Var1 
};
Local_173.f_534[iVar0 /*42*/].f_1=func_109();
if(Local_152.f_4[iVar0] > -1){
uVar3=PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_4[iVar0]);
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar3)){
bVar2=NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
if(!func_14(bVar2, 0)){
Local_173.f_534[iVar0 /*42*/]=Local_152.f_4[iVar0];
Local_173.f_534[iVar0 /*42*/].f_1=bVar2;
Local_173.f_534[iVar0 /*42*/].f_9=Local_1518[Local_152.f_4[iVar0] /*12*/].f_4;
Local_173.f_534[iVar0 /*42*/].f_31=-1;
Local_173.f_1.f_108=8;
}}}
iVar0++;
}}


void func_338(){
MISC::SET_BIT(&(Global_2793046.f_1827), 19);
}

int func_339(int iParam0){
int iVar0;
if(iParam0 >=0){
iVar0=Local_152.f_4[iParam0];
if(iVar0 >=0){
if(func_21(Local_1518[iVar0 /*12*/].f_4, 0)){
return 1;
}}}
return 0;
}


void func_340(){
}


void func_341(){
char* sVar0;
int iVar1;
float fVar2;
bool bVar3;
float fVar4;
func_293(&iVar1, &fVar2, iLocal_125, 1);
switch (Local_152.f_3){
case 2:
sVar0="MP_Highest_Speed_Vehicle_Boost_Scene";
func_343(sVar0, fVar2 >=70f);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0)){
fVar2=func_342(fVar2, 110f);
fVar2=((fVar2 - 70f) / 40f);
AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
}
break;
case 8:
sVar0="MP_Near_Miss_High_Score_Boost_Scene";
fVar4=STATS::STAT_GET_CURRENT_SPEED();
bVar3=(iVar1 >=30 && fVar4 >=40f);
func_343(sVar0, bVar3);
if(AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0)){
fVar2=to_float(iVar1);
fVar2=func_342(fVar2, 30f);
fVar2=((fVar2 - 15f) / 15f);
fVar4=func_342(fVar4, 70f);
fVar4=((fVar4 - 40f) / 30f);
AUDIO::SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
}
if(iLocal_130 !=iLocal_125){
if(iLocal_125 > 0){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_132, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
AUDIO::SET_VARIABLE_ON_SOUND(iLocal_132, "Count", to_float(iVar1));
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
}}
iLocal_130=iLocal_125;
break;
}
if(func_20(0)){
if(!MISC::IS_BIT_SET(uLocal_123, 3)){
if(func_265(1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
}
MISC::SET_BIT(&uLocal_123, 3);
}}elseif(MISC::IS_BIT_SET(uLocal_123, 3)){
if(func_265(1)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
}else{
AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
}
MISC::CLEAR_BIT(&uLocal_123, 3);
}}


float func_342(float fParam0, float fParam1){
if(fParam0 > fParam1){
return fParam1;
}
return fParam0;
}


void func_343(char* sParam0, bool bParam1){
if(bParam1){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0)){
AUDIO::START_AUDIO_SCENE(sParam0);
}}elseif(AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0)){
AUDIO::STOP_AUDIO_SCENE(sParam0);
}}


void func_344(){
int iVar0;
if((!func_170(PLAYER::PLAYER_ID()) && !func_14(PLAYER::PLAYER_ID(), 0)) && func_12(PLAYER::PLAYER_ID(), 1, 1)){
iVar0=func_370();
if(iVar0 !=Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4){
if(func_21(iVar0, iLocal_122) || func_369(iVar0, iLocal_122)){
if(!func_368() || func_1(&uLocal_111, 1000, 0)){
func_27(&uLocal_111, 0, 0);
iLocal_122=iVar0;
Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4=iVar0;
func_347();
if(iLocal_121==0){
iLocal_121=NETWORK::GET_NETWORK_TIME();
}
if(Local_1519.f_11==0){
Local_1519.f_11=NETWORK::GET_CLOUD_TIME_AS_INT();
}}}}
iLocal_125=func_345();
}}

int func_345(){
int iVar0;
float fVar1;
int iVar2;
iVar0=-1;
switch (Local_152.f_3){
case 0:
fVar1=STATS::STAT_GET_CURRENT_JUMP_DISTANCE();
break;
case 1:
fVar1=STATS::STAT_GET_CURRENT_SKYDIVING_DISTANCE();
break;
case 2:
fVar1=STATS::STAT_GET_CURRENT_SPEED();
break;
case 3:
fVar1=STATS::STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE();
break;
case 4:
fVar1=STATS::STAT_GET_CURRENT_REAR_WHEEL_DISTANCE();
break;
case 5:
fVar1=STATS::STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE();
break;
case 8:
iVar0=STATS::STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE();
break;
case 9:
fVar1=STATS::STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE();
break;
case 11:
fVar1=STATS::STAT_GET_CHALLENGE_FLYING_DIST();
break;
case 12:
fVar1=STATS::STAT_GET_CHALLENGE_FLYING_DIST();
break;
case 13:
fVar1=STATS::STAT_GET_VEHICLE_BAIL_DISTANCE();
break;
}
if(func_18()){
fVar1=(fVar1 * 10f);
iVar0=round(fVar1);
}
iVar2=MISC::ABSI(iVar0);
func_346(&iVar2);
if(iVar2==iLocal_124){
if(func_21(iVar2, 0)){
if(!MISC::IS_BIT_SET(uLocal_123, 1)){
func_27(&uLocal_113, 0, 0);
Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2=func_549(&uLocal_113, 0, 0);
MISC::SET_BIT(&uLocal_123, true);
}elseif((func_549(&uLocal_113, 0, 0) % 1000)==0){
Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2=func_549(&uLocal_113, 0, 0);
}}}else{
MISC::CLEAR_BIT(&uLocal_123, true);
}
if((func_21(iLocal_124, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_115, 2000, 0)){
iVar2=iLocal_124;
MISC::SET_BIT(&uLocal_123, 2);
}else{
iLocal_124=iVar2;
func_46(&uLocal_115);
MISC::CLEAR_BIT(&uLocal_123, 2);
}
return iVar2;
}


void func_346(int iParam0){
switch (Local_152.f_3){
case 2:
if(*iParam0 > 0){
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
*iParam0=0;
}}else{
*iParam0=0;
}}}
break;
}}


void func_347(){
if(!MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1, 2)){
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_1), 2);
func_348(1);
}}


void func_348(bool bParam0){
var uVar0;
if(bParam0){
if(!MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
if(((!func_113(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID())) && !func_367(PLAYER::PLAYER_ID())){
if(func_173()){
func_360(2, 0, 1);
func_359();
}
if(func_357(func_358(func_330(PLAYER::PLAYER_ID())))){
uVar0=func_215(2483, -1, 0);
MISC::CLEAR_BIT(&uVar0, func_358(func_330(PLAYER::PLAYER_ID())));
func_359();
}
if(func_356()){
func_359();
}
if(func_330(PLAYER::PLAYER_ID()) > -1){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 7);
if(func_355(PLAYER::PLAYER_ID())){
func_354();
}
func_351(func_353(func_330(PLAYER::PLAYER_ID())));
}}}}elseif(MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 7);
func_349();
}}


void func_349(){
if(func_350()){
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 17);
}}


bool func_350(){
return MISC::IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 17);
}


void func_351(int iParam0){
int iVar0;
if(Global_262145.f_9036){
return;
}
iVar0=0;
while (iVar0 < 3){
if(Global_2359296[func_352() /*5568*/].f_681.f_4242[iVar0 /*3*/]==iParam0){
if(Global_1574742.f_1[iVar0]==-1){
Global_1574742.f_1[iVar0]=iParam0;
Global_1574742=1;
return;
}}
iVar0++;
}}

int func_352(){
int iVar0;
iVar0=0;
return iVar0;
}

int func_353(int iParam0){
switch (iParam0){
case 150:
return 67;
case 236:
return 67;
case 133:
return 69;
default:
}
return 68;
}


void func_354(){
if(!func_350()){
Global_2793046.f_6866=NETWORK::GET_NETWORK_TIME();
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 17);
}}

int func_355(bool bParam0){
if(func_330(bParam0)==236 || func_330(bParam0)==150){
return 1;
}
return 0;
}

int func_356(){
if(Global_2672505.f_947.f_5==-1){
return 0;
}
return 1;
}


bool func_357(var uParam0){
var uVar0;
uVar0=func_215(2483, -1, 0);
return MISC::IS_BIT_SET(uVar0, uParam0);
}

int func_358(int iParam0){
switch (iParam0){
case 132:
return 11;
case 133:
return 12;
case 136:
return 19;
case 138:
return 14;
case 139:
return 15;
case 129:
return 17;
case 141:
return 18;
case 144:
return 13;
case 146:
return 16;
case 236:
return 20;
case 150:
return 20;
default:
}
return Global_262145.f_24142;
}


void func_359(){
if(func_356()){
Global_2672505.f_947.f_16=1;
}}


void func_360(int iParam0, int iParam1, bool bParam2){
if(func_173()){
if(iParam1==1){
if(Global_2793046.f_4492==-1){
Global_2793046.f_4492=Global_262145.f_27184;
}
func_27(&(Global_2793046.f_4490), 0, 0);
if(bParam2){
if(Global_2793046.f_4495==-1){
Global_2793046.f_4495=Global_262145.f_27185;
}
func_27(&(Global_2793046.f_4493), 0, 0);
}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_366(1);
}}else{
Global_1574582=0;
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8=0;
func_366(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_365()) && !func_361(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_361(bool bParam0){
if(func_362(bParam0, 1, 0)){
if(Global_1853910[bParam0 /*862*/] !=6){
return 1;
}}
return 0;
}

int func_362(bool bParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_363(bParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[bParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_363(bool bParam0){
return func_364(bParam0);
}


var func__364(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}


bool func_365(){
return Global_2683864.f_841;
}


void func_366(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_173()){
if(func_12(PLAYER::PLAYER_ID(), 1, 0)){
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
if(func_12(PLAYER::PLAYER_ID(), 1, 1)){
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

int func_367(bool bParam0){
var uVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(bParam0==PLAYER::PLAYER_ID()){
return Global_2764907;
}else{
uVar0=PLAYER::GET_PLAYER_PED(bParam0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iVar0);
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
return 0;
}else{
return 1;
}}else{
return 0;
}}
return 0;
}

int func_368(){
switch (Local_152.f_3){
case 2:
case 3:
case 5:
case 4:
case 8:
case 1:
case 6:
case 9:
case 10:
case 11:
case 12:
case 13:
return 1;
default:
}
return 0;
}

int func_369(int iParam0, int iParam1){
if(Local_152.f_3==17){
if(iParam0 < iParam1){
return 1;
}}
return 0;
}

int func_370(){
int iVar0;
float fVar1;
int iVar2;
int iVar3;
if(!func_385()){
if(Local_152.f_3==14){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_384(PLAYER::PLAYER_PED_ID(), 0)==-1){
iVar2=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if((!func_383(&iVar2, 0) || ENTITY::GET_ENTITY_MODEL(iVar2) !=joaat("dodo")) && ENTITY::IS_ENTITY_IN_AIR(iVar2)){
func_376(Local_152.f_3 !=14, 1, 0);
if(func_375()){
iVar3=func_374();
if(iVar3 >=0){
if(!MISC::IS_BIT_SET(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_373(iVar3)], func_372(iVar3))){
iLocal_126++;
MISC::SET_BIT(&(Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_8[func_373(iVar3)]), func_372(iVar3));
}
}}
iVar0=iLocal_126;
}}}else{
iVar0=func_371();
}}else{
STATS::STAT_GET_RECORDED_VALUE(&fVar1);
if(func_18()){
fVar1=(fVar1 * 10f);
}
iVar0=round(fVar1);
}
return MISC::ABSI(iVar0);
}

int func_371(){
switch (Local_152.f_3){
case 14:
return 0;
case 4:
return 0;
default:
}
return -1;
}

int func_372(int iParam0){
if(iParam0 < 31){
return iParam0;
}elseif(iParam0 < 62){
return (iParam0 - 31);
}
return (iParam0 - func_373(iParam0) * 31);
}

int func_373(int iParam0){
if(iParam0 < 31){
return 0;
}elseif(iParam0 < 62){
return 1;
}
return (iParam0 / 31);
}

int func_374(){
return iLocal_93;
}

int func_375(){
if(iLocal_100==1){
iLocal_100=0;
return 1;
}
return 0;
}


void func_376(bool bParam0, bool bParam1, int iParam2){
func_378(bParam0, iParam2);
if(bParam1){
if(Local_104.f_2 < Local_105.f_2){
Local_104.f_2=0f;
}else{
Local_105.f_2=0f;
}
if(Local_106.f_2 < Local_107.f_2){
Local_106.f_2=0f;
}else{
Local_107.f_2=0f;
}}
switch (iLocal_94){
case 0:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_102[iLocal_93 /*3*/]) < fLocal_103){
if(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0)){
bLocal_95=true;
iLocal_94=1;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
bLocal_96=true;
iLocal_94=1;
}
}}}}
break;
case 1:
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())){
func_377();
}elseif(!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)){
func_377();
}elseif(!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && !bParam1){
func_377();
}
if(bLocal_95){
if(iLocal_99){
if(iLocal_98){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
func_377();
iLocal_100=1;
}
}
elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
iLocal_98=1;
}
elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
func_377();
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
iLocal_99=1;
}elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
func_377();
}}elseif(bLocal_96){
if(iLocal_99){
if(iLocal_97){
if(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
func_377();
iLocal_100=1;
}
}
elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
iLocal_97=1;
}
elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
func_377();
}}elseif(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
iLocal_99=1;
}elseif(!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_104, Local_105, fLocal_108, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_106, Local_107, fLocal_108, 0, 1, 0)){
func_377();
}}}
break;
}}


void func_377(){
bLocal_95=false;
bLocal_96=false;
iLocal_97=0;
iLocal_98=0;
iLocal_99=0;
iLocal_94=0;
}


void func_378(var uParam0, var uParam1){
int iVar0;
float fVar1;
float fVar2;
Local_101={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
fVar1=1E+07f;
iVar0=0;
while (iVar0 < 65){
if((uParam0 || !func_382(iVar0)) && (uParam1 || !func_381(iVar0))){
if(func_380(Local_101, Local_102[iVar0 /*3*/], 100f, 0)){
fVar2=vdist(Local_101, Local_102[iVar0 /*3*/]);
if(fVar2 < fVar1){
fVar1=fVar2;
iLocal_93=iVar0;
}}}
iVar0++;
}
func_379(iLocal_93);
}


void func_379(int iParam0){
switch (iParam0){
case 0:
Local_104={
1103.014f, -233.0374f, 56.13004f 
};
Local_105={
1073.191f, -214.8478f, 66.0593f 
};
fLocal_108=30f;
Local_106={
1093.589f, -248.5926f, 56.88639f 
};
Local_107={
1063.774f, -230.1425f, 66.67847f 
};
break;
case 1:
Local_104={
1044.182f, -324.5904f, 49.33408f 
};
Local_105={
1016.71f, -307.7383f, 64.81343f 
};
fLocal_108=30f;
Local_106={
1007.983f, -320.6159f, 48.4543f 
};
Local_107={
1036.007f, -337.4204f, 64.4808f 
};
break;
case 2:
Local_104={
916.599f, -419.8782f, 35.62748f 
};
Local_105={
910.3793f, -383.8826f, 47.54339f 
};
fLocal_108=7f;
Local_106={
912.1362f, -420.5161f, 35.38034f 
};
Local_107={
906.8952f, -384.6779f, 47.24926f 
};
break;
case 3:
Local_104={
757.7189f, -472.924f, 19.2535f 
};
Local_105={
696.5936f, -420.2115f, 35.46084f 
};
fLocal_108=20.75f;
Local_106={
744.9114f, -480.7373f, 19.06514f 
};
Local_107={
682.5614f, -429.5533f, 37.0266f 
};
break;
case 4:
Local_104={
680.3677f, -581.1792f, 14.2145f 
};
Local_105={
599.8101f, -528.3059f, 33.40958f 
};
fLocal_108=45f;
Local_106={
667.3692f, -610.5356f, 13.85401f 
};
Local_107={
582.8433f, -556.7818f, 33.40335f 
};
break;
case 5:
Local_104={
644.2497f, -844.7504f, 12.36707f 
};
Local_105={
526.8608f, -845.2521f, 35.9896f 
};
fLocal_108=25f;
Local_106={
644.3659f, -859.3878f, 12.59677f 
};
Local_107={
526.8615f, -857.5208f, 36.32857f 
};
break;
case 6:
Local_104={
634.972f, -1011.64f, 10.92594f 
};
Local_105={
539.6501f, -1024.017f, 35.95852f 
};
fLocal_108=25f;
Local_106={
634.9612f, -1029.123f, 10.61846f 
};
Local_107={
543.4893f, -1038.261f, 35.9593f 
};
break;
case 7:
Local_104={
645.7223f, -1191.215f, 10.45198f 
};
Local_105={
524.3018f, -1197.167f, 39.61172f 
};
fLocal_108=50f;
Local_106={
645.7223f, -1228.966f, 10.98015f 
};
Local_107={
521.9379f, -1217.607f, 39.47172f 
};
break;
case 8:
Local_104={
642.1216f, -1295.73f, 9.005976f 
};
Local_105={
568.1702f, -1375.351f, 20.12989f 
};
fLocal_108=7f;
Local_106={
644.7772f, -1298.168f, 9.128529f 
};
Local_107={
571.6342f, -1378.644f, 20.35802f 
};
break;
case 9:
Local_104={
686.5675f, -1444.71f, 9.065001f 
};
Local_105={
598.9328f, -1444.438f, 25.68846f 
};
fLocal_108=25f;
Local_106={
682.3027f, -1429.872f, 9.890836f 
};
Local_107={
593.8217f, -1432.995f, 25.60072f 
};
break;
case 10:
Local_104={
718.7617f, -1734.313f, 9.082874f 
};
Local_105={
615.0017f, -1725.897f, 27.54585f 
};
fLocal_108=30f;
Local_106={
717.5355f, -1748.646f, 9.363478f 
};
Local_107={
614.218f, -1734.848f, 27.35708f 
};
break;
case 11:
Local_104={
694.3165f, -2049.806f, 0.009695f 
};
Local_105={
618.6845f, -2040.014f, 25.83412f 
};
fLocal_108=30f;
Local_106={
693.1836f, -2063.225f, 0.429037f 
};
Local_107={
607.5944f, -2055.326f, 26.91816f 
};
break;
case 12:
Local_104={
642.6671f, -2494.551f, 0.468485f 
};
Local_105={
570.1807f, -2513.959f, 11.78794f 
};
fLocal_108=20f;
Local_106={
647.0339f, -2506.202f, 0.583701f 
};
Local_107={
571.1415f, -2522.975f, 10.45045f 
};
break;
case 13:
Local_104={
691.8235f, -2558.219f, 0.363352f 
};
Local_105={
645.8863f, -2600.311f, 9.898791f 
};
fLocal_108=10.25f;
Local_106={
695.7928f, -2561.034f, 0.346731f 
};
Local_107={
656.3919f, -2601.972f, 9.643657f 
};
break;
case 14:
Local_104={
723.6254f, -2562.171f, 0.255647f 
};
Local_105={
720.752f, -2619.77f, 15.73211f 
};
fLocal_108=15f;
Local_106={
735.765f, -2561.935f, 0.311182f 
};
Local_107={
736.1214f, -2618.767f, 15.79061f 
};
break;
case 15:
Local_104={
891.4387f, -2603.12f, 0f 
};
Local_105={
704.4932f, -2634.793f, 45f 
};
fLocal_108=20f;
Local_106={
893.2578f, -2616.235f, 0f 
};
Local_107={
707.7261f, -2647.696f, 45f 
};
break;
case 16:
Local_104={
-2669.587f, 2491.96f, 2.043799f 
};
Local_105={
-2617.765f, 2841.595f, 14.0822f 
};
fLocal_108=26.5f;
Local_106={
-2687.606f, 2494.868f, 2.608733f 
};
Local_107={
-2637.085f, 2846.875f, 14.15988f 
};
break;
case 17:
Local_104={
-1986.173f, 4521.799f, 0f 
};
Local_105={
-1809.903f, 4699.551f, 53.5088f 
};
fLocal_108=17f;
Local_106={
-1995.668f, 4531.259f, 0f 
};
Local_107={
-1817.543f, 4708.395f, 53.50917f 
};
break;
case 18:
Local_104={
-526.0265f, 4472.442f, 0f 
};
Local_105={
-505.5714f, 4335.725f, 86.73311f 
};
fLocal_108=10f;
Local_106={
-519.9281f, 4476.346f, 0f 
};
Local_107={
-500.7313f, 4336.389f, 86.71289f 
};
break;
case 19:
Local_104={
98.1615f, 3384.489f, 45.45169f 
};
Local_105={
154.974f, 3350.694f, 30.03358f 
};
fLocal_108=8f;
Local_106={
152.6802f, 3346.793f, 45.02156f 
};
Local_107={
95.57188f, 3380.091f, 30.43284f 
};
break;
case 20:
Local_104={
147.8606f, 3406.796f, 38.03672f 
};
Local_105={
126.1329f, 3416.927f, 30.02987f 
};
fLocal_108=14.5f;
Local_106={
130.0916f, 3425.417f, 38.05672f 
};
Local_107={
151.8703f, 3415.391f, 30.0578f 
};
break;
case 21:
Local_104={
2830.972f, 4967.14f, 34.56013f 
};
Local_105={
2818.719f, 4992.298f, 51.2909f 
};
fLocal_108=10f;
Local_106={
2826.767f, 4964.185f, 34.10636f 
};
Local_107={
2814.216f, 4989.983f, 51.21849f 
};
break;
case 22:
Local_104={
-151.5764f, 4264.417f, 31.04735f 
};
Local_105={
-193.1962f, 4224.604f, 43.87255f 
};
fLocal_108=10f;
Local_106={
-148.3842f, 4261.071f, 31.57409f 
};
Local_107={
-190.4719f, 4222.076f, 43.95443f 
};
break;
case 23:
Local_104={
-426.6919f, 2964.272f, 14.848f 
};
Local_105={
-396.2298f, 2959.278f, 23.50637f 
};
fLocal_108=7f;
Local_106={
-425.0283f, 2967.861f, 15.22699f 
};
Local_107={
-395.6073f, 2962.607f, 24.38079f 
};
break;
case 24:
Local_104={
-192.3414f, 2864.916f, 30.72595f 
};
Local_105={
-170.1509f, 2857.128f, 43.94182f 
};
fLocal_108=10f;
Local_106={
-192.0129f, 2871.603f, 29.99943f 
};
Local_107={
-169.5957f, 2863.838f, 44.03251f 
};
break;
case 25:
Local_104={
2539.185f, 2228.772f, 18.6102f 
};
Local_105={
2574.373f, 2169.401f, 27.26598f 
};
fLocal_108=10f;
Local_106={
2543.708f, 2231.402f, 18.331f 
};
Local_107={
2578.079f, 2171.584f, 27.26057f 
};
break;
case 26:
Local_104={
2954.087f, 815.7209f, 0.037901f 
};
Local_105={
2933.189f, 796.4688f, 12.98392f 
};
fLocal_108=35f;
Local_106={
2966.123f, 806.8889f, 0.544056f 
};
Local_107={
2950.801f, 786.7816f, 11.74596f 
};
break;
case 27:
Local_104={
2329.673f, -459.6648f, 70.24277f 
};
Local_105={
2413.384f, -361.2188f, 91.77886f 
};
fLocal_108=12f;
Local_106={
2324.752f, -455.5238f, 70.25145f 
};
Local_107={
2407.409f, -356.2003f, 91.43083f 
};
break;
case 28:
Local_104={
1943.428f, -753.251f, 80.17905f 
};
Local_105={
1850.365f, -760.9587f, 93.02522f 
};
fLocal_108=7f;
Local_106={
1943.366f, -758.287f, 80.32291f 
};
Local_107={
1851.354f, -765.1807f, 92.93546f 
};
break;
case 29:
Local_104={
-271.2849f, -2414.993f, -10f 
};
Local_105={
-542.9096f, -2225.856f, 52.65004f 
};
fLocal_108=30f;
Local_106={
-279.8399f, -2427.212f, -10f 
};
Local_107={
-551.2656f, -2237.791f, 52.64634f 
};
break;
case 30:
Local_104={
-1483f, 2691.428f, -10f 
};
Local_105={
-1377.168f, 2600.769f, 15.95528f 
};
fLocal_108=12f;
Local_106={
-1478.152f, 2696.688f, -10f 
};
Local_107={
-1378.503f, 2608.698f, 15.60924f 
};
break;
case 31:
Local_104={
222.1519f, -2343.487f, 0.039199f 
};
Local_105={
222.6849f, -2297.407f, 7.088753f 
};
fLocal_108=12f;
Local_106={
216.959f, -2343.487f, 0.207734f 
};
Local_107={
216.602f, -2295.445f, 7.424279f 
};
break;
case 32:
Local_104={
346.4622f, -2244.374f, 0.159779f 
};
Local_105={
346.8347f, -2389.591f, 7.852059f 
};
fLocal_108=20f;
Local_106={
359.609f, -2244.468f, 0.129684f 
};
Local_107={
355.4054f, -2390.258f, 7.080691f 
};
break;
case 33:
Local_104={
-1859.68f, -322.6357f, 56.16368f 
};
Local_105={
-1836.614f, -335.4141f, 96.1161f 
};
fLocal_108=7.5f;
Local_106={
-1860.27f, -327.8634f, 57.543f 
};
Local_107={
-1837.271f, -339.2227f, 95.69325f 
};
break;
case 34:
Local_104={
-680.2632f, -600.818f, 69.11289f 
};
Local_105={
-706.6613f, -600.7515f, 30.47604f 
};
fLocal_108=31.5f;
Local_106={
-680.6077f, -618.3658f, 69.27496f 
};
Local_107={
-706.3596f, -618.2385f, 30.31235f 
};
break;
case 35:
Local_104={
-1468.096f, -591.7158f, 67.05518f 
};
Local_105={
-1454.7f, -573.4518f, 29.56736f 
};
fLocal_108=11.75f;
Local_106={
-1474.903f, -591.1215f, 67.08091f 
};
Local_107={
-1457.173f, -568.1316f, 29.44059f 
};
break;
case 36:
Local_104={
-1544.958f, -537.1475f, 72.44347f 
};
Local_105={
-1564.616f, -551.1829f, 32.86163f 
};
fLocal_108=11.75f;
Local_106={
-1541.008f, -541.5494f, 71.61972f 
};
Local_107={
-1561.219f, -555.868f, 32.9279f 
};
break;
case 37:
Local_104={
333.2108f, -2727.274f, 20.71663f 
};
Local_105={
333.4297f, -2791.609f, 41.99023f 
};
fLocal_108=20f;
Local_106={
343.1127f, -2727.236f, 20.23613f 
};
Local_107={
343.6678f, -2791.602f, 41.37928f 
};
break;
case 38:
Local_104={
1928.071f, 6228.355f, 43.49398f 
};
Local_105={
2039.882f, 6167.397f, 55.46405f 
};
fLocal_108=13f;
Local_106={
1931.82f, 6235.634f, 43.37382f 
};
Local_107={
2039.598f, 6176.525f, 55.25597f 
};
break;
case 39:
Local_104={
-736.4309f, -1590.921f, 10.80892f 
};
Local_105={
-710.811f, -1516.349f, -0.098598f 
};
fLocal_108=15f;
Local_106={
-727.2307f, -1585.221f, 11.78027f 
};
Local_107={
-700.0201f, -1511.783f, -0.341655f 
};
break;
case 40:
Local_104={
-676.3775f, -1548.553f, 12.33747f 
};
Local_105={
-659.329f, -1507.063f, -0.788618f 
};
fLocal_108=25f;
Local_106={
-654.203f, -1536.146f, 9.191055f 
};
Local_107={
-645.9954f, -1500.219f, -2.406948f 
};
break;
case 41:
Local_104={
-624.2344f, -1537.045f, 12.60193f 
};
Local_105={
-622.1749f, -1472.877f, -0.292606f 
};
fLocal_108=8f;
Local_106={
-615.4003f, -1536.65f, 12.40271f 
};
Local_107={
-619.7385f, -1472.937f, -0.243267f 
};
break;
case 42:
Local_104={
-492.5057f, -1632.457f, 24.3307f 
};
Local_105={
-418.2088f, -1487.452f, 0f 
};
fLocal_108=25f;
Local_106={
-486.2016f, -1636.095f, 24.20805f 
};
Local_107={
-398.7648f, -1490.44f, 0f 
};
break;
case 43:
Local_104={
-359.3541f, -1639.693f, 13.13455f 
};
Local_105={
-388.4955f, -1690.945f, -0.183164f 
};
fLocal_108=25f;
Local_106={
-378.1518f, -1705.66f, 12.47196f 
};
Local_107={
-348.9591f, -1654.411f, 0.193478f 
};
break;
case 44:
Local_104={
-243.4436f, -1814.623f, 25.69465f 
};
Local_105={
-183.9987f, -1780.645f, -0.085802f 
};
fLocal_108=25f;
Local_106={
-235.1319f, -1822.094f, 25.86542f 
};
Local_107={
-175.5105f, -1788.275f, -0.506062f 
};
break;
case 45:
Local_104={
84.55537f, -2046.159f, 13.30767f 
};
Local_105={
17.93164f, -2045.152f, -0.031946f 
};
fLocal_108=25f;
Local_106={
17.90788f, -2035.773f, 12.62706f 
};
Local_107={
84.57207f, -2034.184f, 0.048385f 
};
break;
case 46:
Local_104={
221.5029f, -2232.766f, 9.88676f 
};
Local_105={
221.6825f, -2244.081f, 4.479149f 
};
fLocal_108=8f;
Local_106={
218.583f, -2232.766f, 9.886198f 
};
Local_107={
218.729f, -2244.081f, 4.535046f 
};
break;
case 47:
Local_104={
221.6518f, -2184.635f, 11.66457f 
};
Local_105={
221.6139f, -2208.137f, 5.876424f 
};
fLocal_108=8f;
Local_106={
217.8995f, -2184.635f, 11.5405f 
};
Local_107={
218.3327f, -2208.137f, 5.864793f 
};
break;
case 48:
Local_104={
2326.57f, 1096.031f, 76.31458f 
};
Local_105={
2290.332f, 1136.131f, 58.85706f 
};
fLocal_108=21f;
Local_106={
2334.453f, 1103.067f, 76.26603f 
};
Local_107={
2297.846f, 1142.897f, 58.84243f 
};
break;
case 49:
Local_104={
2379.442f, 1150.776f, 58.79632f 
};
Local_105={
2327.658f, 1212.366f, 72.8333f 
};
fLocal_108=12f;
Local_106={
2374.064f, 1146.282f, 58.83331f 
};
Local_107={
2320.895f, 1209.596f, 72.79299f 
};
break;
case 50:
Local_104={
-1179.405f, -355.2554f, 56.53003f 
};
Local_105={
-1198.064f, -357.8363f, 35.35551f 
};
fLocal_108=12.5f;
Local_106={
-1178.385f, -361.8784f, 56.15081f 
};
Local_107={
-1197.104f, -364.7004f, 36.49475f 
};
break;
case 51:
Local_104={
-921.3846f, -384.94f, 137.0181f 
};
Local_105={
-912.4324f, -429.229f, 36.70113f 
};
fLocal_108=16f;
Local_106={
-914.1658f, -387.9444f, 137.0794f 
};
Local_107={
-906.2534f, -424.691f, 47.11882f 
};
break;
case 52:
Local_104={
-740.2564f, 246.4529f, 132.2922f 
};
Local_105={
-718.3602f, 201.0042f, 80.95571f 
};
fLocal_108=22f;
Local_106={
-726.6429f, 253.0676f, 132.3319f 
};
Local_107={
-705.5858f, 210.4336f, 78.70573f 
};
break;
case 53:
Local_104={
-771.2068f, 268.2729f, 132.1689f 
};
Local_105={
-778.3417f, 313.1148f, 84.27054f 
};
fLocal_108=16f;
Local_106={
-770.8035f, 310.8625f, 137.4161f 
};
Local_107={
-763.0681f, 269.044f, 83.31474f 
};
break;
case 54:
Local_104={
259.2205f, 135.4146f, 136.7083f 
};
Local_105={
279.2396f, 128.1379f, 100.8233f 
};
fLocal_108=16f;
Local_106={
261.9694f, 142.9676f, 136.6889f 
};
Local_107={
281.7203f, 134.9551f, 100.7704f 
};
break;
case 55:
Local_104={
393.548f, -30.87166f, 152.6635f 
};
Local_105={
369.9622f, -23.88461f, 88.35776f 
};
fLocal_108=8f;
Local_106={
390.5358f, -36.08882f, 152.7813f 
};
Local_107={
368.1275f, -28.81888f, 88.69447f 
};
break;
case 56:
Local_104={
114.3139f, -648.4297f, 261.8488f 
};
Local_105={
131.0782f, -733.7684f, 39.34393f 
};
fLocal_108=20f;
Local_106={
124.8467f, -646.6575f, 261.8488f 
};
Local_107={
140.0502f, -737.427f, 39.3493f 
};
break;
case 57:
Local_104={
-215.919f, -823.8436f, 126.0224f 
};
Local_105={
-193.2237f, -761.7781f, 27.91382f 
};
fLocal_108=20f;
Local_106={
-225.397f, -820.3937f, 126.0812f 
};
Local_107={
-202.9433f, -758.257f, 27.47734f 
};
break;
case 58:
Local_104={
-296.4725f, -802.0815f, 95.40108f 
};
Local_105={
-278.1352f, -747.7841f, 50.40046f 
};
fLocal_108=20f;
Local_106={
-305.4602f, -798.8369f, 95.48194f 
};
Local_107={
-285.7376f, -745.0959f, 49.57651f 
};
break;
case 59:
Local_104={
-292.3034f, -823.3569f, 95.37621f 
};
Local_105={
-258.5991f, -835.5632f, 27.97946f 
};
fLocal_108=20f;
Local_106={
-288.9206f, -814.022f, 95.37556f 
};
Local_107={
-255.2116f, -826.256f, 27.7375f 
};
break;
case 60:
Local_104={
-256.3589f, -714.7838f, 110.1617f 
};
Local_105={
-212.9054f, -730.532f, 32.21946f 
};
fLocal_108=20f;
Local_106={
-253.7723f, -705.6632f, 110.1736f 
};
Local_107={
-210.0588f, -722.6748f, 32.46536f 
};
break;
case 61:
Local_104={
1808.214f, 1949.246f, 71.73707f 
};
Local_105={
1837.906f, 2127.283f, 52.80491f 
};
fLocal_108=9.75f;
Local_106={
1802.786f, 1950.262f, 71.74002f 
};
Local_107={
1831.994f, 2127.433f, 52.83893f 
};
break;
case 62:
Local_104={
2388.733f, 2931.941f, 46.62681f 
};
Local_105={
2426.681f, 2883.066f, 36.21524f 
};
fLocal_108=10f;
Local_106={
2392.547f, 2934.867f, 46.6268f 
};
Local_107={
2430.333f, 2885.908f, 36.28148f 
};
break;
case 63:
Local_104={
2700.056f, 4836.381f, 42.07854f 
};
Local_105={
2685.673f, 4893.38f, 30.90867f 
};
fLocal_108=20.75f;
Local_106={
2685.672f, 4821.653f, 42.18471f 
};
Local_107={
2672.812f, 4880.356f, 31.13311f 
};
break;
case 64:
Local_104={
-1053.446f, 4766.245f, 234.3251f 
};
Local_105={
-1040.263f, 4737.157f, 204.4916f 
};
fLocal_108=5f;
Local_106={
-1051.414f, 4767.193f, 234.4293f 
};
Local_107={
-1037.954f, 4738.354f, 204.5282f 
};
break;
}}

int func_380(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_381(int iParam0){
switch (iParam0){
case 0:
case 1:
case 8:
case 12:
case 13:
case 20:
case 31:
case 32:
case 46:
case 47:
return 1;
break;
}
return 0;
}

int func_382(int iParam0){
switch (iParam0){
case 33:
case 34:
case 35:
case 36:
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
case 60:
return 1;
break;
}
return 0;
}

int func_383(var uParam0, int iParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam0, 0) || iParam1){
if(ENTITY::IS_ENTITY_IN_WATER(*uParam0)){
return 1;
}}}
return 0;
}

int func_384(int iParam0, int iParam1){
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

int func_385(){
switch (Local_152.f_3){
case 0:
case 2:
case 3:
case 5:
case 4:
case 8:
case 1:
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
case 18:
return 1;
default:
}
return 0;
}

int func_386(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=-1;
if(func_403() < 10){
iVar0=func_402();
func_387(Param0, fParam1, iVar0, iParam2);
}
return iVar0;
}


void func_387(struct<3> Param0, var uParam1, int iParam2, var uParam3){
func_388(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}


void func_388(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5){
struct<12> Var0;
if(func_397(PLAYER::PLAYER_ID()) || uParam5){
if(Var0.f_10==1){
func_396(&Param0, &Param1);
}
Var0={
Param0 
};
Var0.f_3={
Param1 
};
Var0.f_6=uParam2;
Var0.f_10=iParam3;
if(func_391(Var0)){
Global_2635559.f_45.f_64=func_390(PLAYER::PLAYER_ID());
func_389(Var0, iParam4);
}}}


void func_389(struct<12> Param0, int iParam1){
Global_2635559.f_368[iParam1 /*12*/]={
Param0 
};
Global_2635559.f_368[iParam1 /*12*/].f_9=1;
}

int func_390(bool bParam0){
if(func_12(bParam0, 0, 1)){
return Global_2657589[bParam0 /*466*/].f_1;
}
return 0;
}

int func_391(struct<12> Param0){
struct<12> Var0[1];
int iVar1;
Var0[0 /*12*/]={
Param0 
};
Var0[0 /*12*/].f_9=1;
iVar1=0;
while (iVar1 < 4){
if(Global_2635559.f_45[iVar1 /*12*/].f_9==1){
if(!func_392(Global_2635559.f_45[iVar1 /*12*/], &Var0)){
return 0;
}}
iVar1++;
}
return 1;
}

int func_392(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10){
int iVar0;
iVar0=0;
while (iVar0 < *uParam10){
if((uParam10[iVar0 /*12*/])->f_9){
switch ((uParam10[iVar0 /*12*/])->f_10){
case 0:
switch (Param0.f_10){
case 0:
if(func_395(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
return 0;
}
break;
case 1:
if(func_393(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
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
if(func_395(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
return 0;
}
break;
case 1:
if(func_393(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6)){
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


bool func_393(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3){
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
return func_394(Param0, Param1, Var0, Var1);
}

int func_394(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3){
if(((((Param0.f_0 >=Param2.f_0 && Param0.f_1 >=Param2.f_1) && Param0.f_2 >=Param2.f_2) && Param1.f_0 <=Param3.f_0) && Param1.f_1 <=Param3.f_1) && Param1.f_2 <=Param3.f_2){
return 1;
}
return 0;
}

int func_395(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3){
struct<3> Var0;
Var0={
Param2 - Param0 
};
if((vmag(Var0) + fParam1) < fParam3){
return 1;
}
return 0;
}


void func_396(var uParam0, var uParam1){
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

int func_397(bool bParam0){
if(((func_400(bParam0, 1) || func_399(bParam0)) || func_119(bParam0, 0)) || func_398(bParam0)){
return 1;
}
return 0;
}

int func_398(bool bParam0){
if(!func_12(bParam0, 0, 1)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_399(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}


bool func_400(int iParam0, bool bParam1){
if(func_401() !=0){
return func_390(iParam0) !=0;
}
return func_362(iParam0, bParam1, 0);
}

int func_401(){
return Global_32163;
}

int func_402(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(!Global_2635559.f_368[iVar0 /*12*/].f_9){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_403(){
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


bool func_404(char* sParam0, char* sParam1, char* sParam2){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


char* func_405(int iParam0){
switch (iParam0){
case 0:
return "AMCH_0";
case 1:
return "AMCH_1";
case 2:
return "AMCH_2";
case 3:
return "AMCH_3";
case 4:
return "AMCH_4";
case 5:
return "AMCH_5";
case 6:
return "AMCH_6";
case 7:
return "AMCH_7";
case 8:
return "AMCH_8";
case 14:
return "AMCH_9";
case 9:
return "AMCH_12";
case 10:
return "AMCH_13";
case 11:
return "AMCH_15";
case 12:
return "AMCH_16";
case 15:
return "AMCH_19";
case 16:
return "AMCH_20";
case 17:
return "AMCH_21";
case 18:
return "AMCH_22";
case 13:
return "AMCH_23";
default:
}
return "";
}


char* func_406(int iParam0){
switch (iParam0){
case 0:
return "AMCH_0SLC";
case 1:
return "AMCH_1SLC";
case 2:
return "AMCH_2SLC";
case 3:
return "AMCH_3SLC";
case 4:
return "AMCH_4SLC";
case 5:
return "AMCH_5SLC";
case 6:
return "AMCH_6SLC";
case 7:
return "AMCH_7SLC";
case 8:
return "AMCH_8SLC";
case 14:
return "AMCH_9SLC";
case 9:
return "AMCH_12SLC";
case 10:
return "AMCH_13SLC";
case 11:
return "AMCH_15SLC";
case 12:
return "AMCH_16SLC";
case 15:
return "AMCH_19SLC";
case 16:
return "AMCH_20SLC";
case 17:
return "AMCH_21SLC";
case 18:
return "AMCH_22SLC";
case 13:
return "AMCH_23SLC";
default:
}
return "";
}


char* func_407(int iParam0){
switch (iParam0){
case 0:
return "AMCH_BIG_0";
case 1:
return "AMCH_BIG_1";
case 2:
return "AMCH_BIG_2";
case 3:
return "AMCH_BIG_3";
case 4:
return "AMCH_BIG_4";
case 5:
return "AMCH_BIG_5";
case 6:
return "AMCH_BIG_6";
case 7:
return "AMCH_BIG_7";
case 8:
return "AMCH_BIG_8";
case 14:
return "AMCH_BIG_9";
case 9:
return "AMCH_BIG_12";
case 10:
return "AMCH_BIG_13";
case 11:
return "AMCH_BIG_15";
case 12:
return "AMCH_BIG_16";
case 15:
return "AMCH_BIG_19";
case 16:
return "AMCH_BIG_20";
case 17:
return "AMCH_BIG_21";
case 18:
return "AMCH_BIG_22";
case 13:
return "AMCH_BIG_23";
default:
}
return "";
}


void func_408(){
if(!func_163()){
return;
}
if(!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==Global_1574757.f_9){
return;
}
func_159();
}


void func_409(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 65){
if(!func_382(iVar0) && !func_381(iVar0)){
*(uParam0[iVar0 /*3*/])={
Local_102[iVar0 /*3*/] 
};
}
iVar0++;
}}


void func_410(){
if(!func_385()){
if(Local_152.f_3==14){
func_413();
}
Local_1518[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1=func_371();
}elseif((!MISC::IS_BIT_SET(Global_1836858.f_1, 4) && !MISC::IS_BIT_SET(Global_1836858.f_1, 5)) && !func_412(PLAYER::PLAYER_ID())){
func_411();
}}


void func_411(){
switch (Local_152.f_3){
case 0:
STATS::STAT_START_RECORD_STAT(8, 2);
break;
case 1:
STATS::STAT_START_RECORD_STAT(13, 2);
break;
case 2:
STATS::STAT_START_RECORD_STAT(4, 2);
break;
case 4:
STATS::STAT_START_RECORD_STAT(1, 2);
break;
case 3:
STATS::STAT_START_RECORD_STAT(2, 2);
break;
case 5:
STATS::STAT_START_RECORD_STAT(3, 2);
break;
case 6:
STATS::STAT_START_RECORD_STAT(11, 3);
break;
case 7:
STATS::STAT_START_RECORD_STAT(14, 1);
break;
case 8:
STATS::STAT_START_RECORD_STAT(29, 2);
break;
case 9:
STATS::STAT_START_RECORD_STAT(12, 2);
break;
case 10:
STATS::STAT_START_RECORD_STAT(10, 2);
break;
case 11:
STATS::STAT_START_RECORD_STAT(18, 2);
break;
case 12:
STATS::STAT_START_RECORD_STAT(20, 2);
break;
case 13:
STATS::STAT_START_RECORD_STAT(27, 2);
break;
case 15:
STATS::STAT_START_RECORD_STAT(26, 1);
break;
case 16:
STATS::STAT_START_RECORD_STAT(25, 1);
break;
case 17:
STATS::STAT_START_RECORD_STAT(22, 1);
break;
case 18:
STATS::STAT_START_RECORD_STAT(24, 1);
break;
}
MISC::SET_BIT(&uLocal_123, 8);
}


bool func_412(bool bParam0){
return func_14(bParam0, 0);
}


void func_413(){
Local_102[0 /*3*/]={
1083f, -231f, 60f 
};
Local_102[1 /*3*/]={
1024f, -325f, 60f 
};
Local_102[2 /*3*/]={
910f, -401f, 43f 
};
Local_102[3 /*3*/]={
721f, -457f, 26f 
};
Local_102[4 /*3*/]={
643f, -579f, 26f 
};
Local_102[5 /*3*/]={
590f, -851f, 26f 
};
Local_102[6 /*3*/]={
590f, -1023f, 16f 
};
Local_102[7 /*3*/]={
582f, -1205f, 24f 
};
Local_102[8 /*3*/]={
608f, -1335f, 16f 
};
Local_102[9 /*3*/]={
640f, -1434f, 16f 
};
Local_102[10 /*3*/]={
671f, -1742f, 20f 
};
Local_102[11 /*3*/]={
651f, -2046f, 16f 
};
Local_102[12 /*3*/]={
603f, -2505f, 9f 
};
Local_102[13 /*3*/]={
673f, -2582f, 4f 
};
Local_102[14 /*3*/]={
728f, -2594f, 10f 
};
Local_102[15 /*3*/]={
794f, -2624f, 27f 
};
Local_102[16 /*3*/]={
-2663f, 2594f, 7.5f 
};
Local_102[17 /*3*/]={
-1902f, 4617f, 30f 
};
Local_102[18 /*3*/]={
-513f, 4427f, 40f 
};
Local_102[19 /*3*/]={
126f, 3366f, 40f 
};
Local_102[20 /*3*/]={
143f, 3418f, 36f 
};
Local_102[21 /*3*/]={
2822f, 4978f, 40f 
};
Local_102[22 /*3*/]={
-162f, 4249f, 40f 
};
Local_102[23 /*3*/]={
-408f, 2964f, 20f 
};
Local_102[24 /*3*/]={
-181f, 2862f, 38f 
};
Local_102[25 /*3*/]={
2558f, 2201f, 24f 
};
Local_102[26 /*3*/]={
2950f, 803f, 8f 
};
Local_102[27 /*3*/]={
2369f, -409f, 80f 
};
Local_102[28 /*3*/]={
1906f, -755f, 84f 
};
Local_102[29 /*3*/]={
-403f, -2333f, 40f 
};
Local_102[30 /*3*/]={
-1429f, 2649f, 10f 
};
Local_102[31 /*3*/]={
219f, -2315f, 5f 
};
Local_102[32 /*3*/]={
350f, -2315f, 5f 
};
Local_102[33 /*3*/]={
-1848f, -333f, 75f 
};
Local_102[34 /*3*/]={
-693f, -608f, 69f 
};
Local_102[35 /*3*/]={
-1461f, -582f, 53f 
};
Local_102[36 /*3*/]={
-1553f, -546f, 59f 
};
Local_102[37 /*3*/]={
338f, -2758f, 23f 
};
Local_102[38 /*3*/]={
1985f, 6201f, 53f 
};
Local_102[39 /*3*/]={
-713f, -1538f, 13f 
};
Local_102[40 /*3*/]={
-659f, -1518f, 13f 
};
Local_102[41 /*3*/]={
-620f, -1502f, 16f 
};
Local_102[42 /*3*/]={
-445f, -1575f, 26f 
};
Local_102[43 /*3*/]={
-373f, -1680f, 19f 
};
Local_102[44 /*3*/]={
-212f, -1805f, 29f 
};
Local_102[45 /*3*/]={
47f, -2040f, 18f 
};
Local_102[46 /*3*/]={
223f, -2240f, 6f 
};
Local_102[47 /*3*/]={
218f, -2189f, 6f 
};
Local_102[48 /*3*/]={
2308f, 1124f, 78f 
};
Local_102[49 /*3*/]={
2349f, 1174f, 79f 
};
Local_102[50 /*3*/]={
-1186f, -365f, 46f 
};
Local_102[51 /*3*/]={
-916f, -407f, 93f 
};
Local_102[52 /*3*/]={
-726f, 235f, 105f 
};
Local_102[53 /*3*/]={
-774f, 286f, 112f 
};
Local_102[54 /*3*/]={
271f, 134f, 125f 
};
Local_102[55 /*3*/]={
377f, -28f, 125f 
};
Local_102[56 /*3*/]={
121f, -703f, 150f 
};
Local_102[57 /*3*/]={
-204f, -784f, 74f 
};
Local_102[58 /*3*/]={
-287f, -774f, 72f 
};
Local_102[59 /*3*/]={
-272f, -824f, 71f 
};
Local_102[60 /*3*/]={
-230f, -723f, 80f 
};
Local_102[61 /*3*/]={
1822f, 2044f, 62f 
};
Local_102[62 /*3*/]={
2410f, 2907f, 44f 
};
Local_102[63 /*3*/]={
2686f, 4858f, 36f 
};
Local_102[64 /*3*/]={
-1046f, 4751f, 244f 
};
}


void func_414(bool bParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0)){
MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0)){
MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
}}


void func_415(var uParam0, int iParam1){
if(func_330(PLAYER::PLAYER_ID())==133 && iParam1){
Global_2793046.f_5146=uParam0;
}else{
Global_2793046.f_5146=-1;
}}


void func_416(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6){
bool bVar0;
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
if(iParam0 !=133){
AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
}
Global_2793046.f_5072=-1;
bVar0=(func_119(PLAYER::PLAYER_ID(), 0) && func_115(PLAYER::PLAYER_ID()));
if(bParam6){
func_414(func_433(iParam0), 1);
}else{
func_432(iParam0, -1);
if(func_8(PLAYER::PLAYER_ID())){
Global_1836858.f_3=iParam0;
}else{
func_431(iParam0);
}
Global_1836858.f_4=-1;
if(func_8(PLAYER::PLAYER_ID())){
MISC::SET_BIT(&(Global_1836858.f_1), 5);
}
if(((func_173() && !func_172()) || func_171(PLAYER::PLAYER_ID(), 21)) || func_171(PLAYER::PLAYER_ID(), 25)){
MISC::SET_BIT(&(Global_1836858.f_1), 4);
}
MISC::CLEAR_BIT(&(Global_1836858.f_1), 17);
MISC::SET_BIT(&(Global_1836858.f_1), 20);
if(func_430(iParam0)){
func_429();
}}
if(!bVar0){
if(fParam1 !=1f){
func_426(fParam1);
}
if(fParam2 !=1f){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
if(iParam0==146){
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
}}
if(func_424(iParam0)){
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
MISC::SET_BIT(&(Global_1836858.f_1), 8);
}
if(bParam3){
if(!Global_4585348){
func_422(1);
if(func_272(0)){
MISC::SET_BIT(&(Global_1836858.f_1), 9);
}
if(!bParam6){
MISC::SET_BIT(&(Global_1836858.f_1), 14);
}}}
if(bParam4){
func_420(1);
MISC::SET_BIT(&(Global_1836858.f_1), 12);
}
if(bParam5){
func_419();
MISC::SET_BIT(&(Global_1836858.f_1), 12);
}
if(!bParam6){
if(func_417(iParam0)){
MISC::SET_BIT(&(Global_1836858.f_1), 21);
}}}
Global_2764094=1;
}

int func_417(int iParam0){
switch (iParam0){
case 129:
case 131:
case 141:
case 136:
case 138:
case 139:
case 140:
case 144:
case 146:
case 236:
case 150:
return 1;
default:
}
if(func_130(iParam0)==1){
return 1;
}
if(func_418()){
return 1;
}
return 0;
}

int func_418(){
switch (func_329()){
case 15:
case 16:
case 17:
case 18:
return 1;
default:
}
return 0;
}


void func_419(){
MISC::SET_BIT(&(Global_2793046.f_5063), false);
}


void func_420(bool bParam0){
int iVar0;
if(bParam0){
Global_100733.f_8=1;
}else{
Global_100733.f_8=0;
}
iVar0=0;
while (iVar0 < 60){
func_421(iVar0);
iVar0++;
}}


void func_421(int iParam0){
Global_100733.f_202[iParam0]=1;
Global_100733.f_201=1;
}


void func_422(int iParam0){
if(func_423() && iParam0){
return;
}
if(iParam0==Global_4585348){
return;
}
Global_4585348=iParam0;
Global_4585350=0;
Global_4585351=0;
}

int func_423(){
if((((Global_1057409 !=-1 && Global_1057409 !=33) && Global_1057409 !=35) && Global_1057409 !=37) && Global_1057409 !=21){
return 1;
}
return 0;
}

int func_424(int iParam0){
switch (iParam0){
case 136:
case 144:
case 129:
return 1;
case 141:
if(func_425(PLAYER::PLAYER_ID())){
return 1;
}
break;
}
return 0;
}

int func_425(bool bParam0){
int iVar0;
iVar0=bParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 0);
}
return 0;
}


void func_426(float fParam0){
float fVar0;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME())==func_427()){
return;
}
fVar0=(Global_2793046.f_5220 - fParam0);
if(SCRIPT::IS_THREAD_ACTIVE(Global_2793046.f_5221)){
if(!Global_2793046.f_5221==SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f){
return;
}}
Global_2793046.f_5220=fParam0;
Global_2793046.f_5221=SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_427(){
switch (func_401()){
case 0:
return func_428();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_428(){
switch (Global_2697021){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}


void func_429(){
Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_210=0;
MISC::CLEAR_BIT(&(Global_2793046.f_4660), true);
}

int func_430(int iParam0){
switch (iParam0){
case 136:
return 1;
default:
}
return 0;
}


void func_431(int iParam0){
Global_1894573[PLAYER::PLAYER_ID() /*608*/]=iParam0;
}


void func_432(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=-1 || iParam1 !=-1){
iVar0=iParam0;
if(iVar0==-1){
iVar0=iParam1;
}
if(func_357(func_358(iVar0))){
MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 2);
}else{
MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1), 2);
}}}

int func_433(int iParam0){
switch (iParam0){
case 134:
return 21;
case 254:
return 25;
default:
}
return 0;
}

int func_434(){
switch (Local_152.f_3){
case 18:
case 16:
case 15:
case 17:
return 1;
default:
}
return 0;
}


void func_435(){
Global_1945089=1;
if(!MISC::IS_BIT_SET(Global_2802660, 0)){
MISC::SET_BIT(&Global_2802660, false);
MISC::SET_BIT(&Global_1945090, false);
}
if(!MISC::IS_BIT_SET(Global_2802660, 1)){
MISC::SET_BIT(&Global_2802660, true);
MISC::SET_BIT(&Global_1945090, true);
}
if(!MISC::IS_BIT_SET(Global_2802660, 5)){
MISC::SET_BIT(&Global_2802660, 5);
MISC::SET_BIT(&Global_1945090, 5);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, 0, 0);
}
if(OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997)){
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, 0, 0);
}}

int func_436(){
switch (Local_152.f_3){
case 1:
case 6:
case 11:
case 12:
case 14:
return 1;
default:
}
return 0;
}


void func_437(){
int iVar0;
int iVar1;
if(func_5(Local_152.f_3)){
if(Local_152.f_3==1 || Local_152.f_3==6){
iVar0=func_458(PLAYER::PLAYER_ID(), 1);
iVar1=func_208(iVar0, 1);
if(iVar1 < 11){
if(PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())){
WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
func_438(1);
}}else{
PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), 1);
}}}}


void func_438(bool bParam0){
int iVar0;
if(PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) !=0){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
func_456(PLAYER::PLAYER_ID(), func_215(586, -1, 0), 0);
if(func_455(3610, -1)){
}
iVar0=func_215(2042, -1, 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_454(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
if(func_269(0)){
func_456(PLAYER::PLAYER_ID(), func_215(586, -1, 0), 0);
}else{
func_456(PLAYER::PLAYER_ID(), func_453(Global_2802973), 0);
}
func_451(PLAYER::PLAYER_ID(), iVar0);
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_444(PLAYER::PLAYER_PED_ID(), iVar0), func_443(PLAYER::PLAYER_PED_ID(), iVar0), 0);
func_442(func_215(2042, -1, 0), 1);
Global_2793046.f_287=1;
func_439(PLAYER::PLAYER_ID(), -1, -1);
if(bParam0){
}}}


void func_439(bool bParam0, int iParam1, int iParam2){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_441();
if(iParam2==-1){
iParam2=func_215(2042, -1, 0);
}
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(bParam0, 5, func_444(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_443(PLAYER::GET_PLAYER_PED(bParam0), iParam2), 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(bParam0, func_454(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(bParam0), 5, func_444(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_443(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_454(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
if(iParam1==-1){
iParam1=func_215(586, -1, 0);
}
if(func_269(1) && func_440(bParam0)){
func_456(bParam0, func_453(Global_2802973), 0);
}else{
func_456(bParam0, iParam1, 0);
}
if(MISC::IS_BIT_SET(Global_4718592.f_28, 4)){
func_456(bParam0, Global_1836625, 1);
}
func_451(bParam0, iParam2);
PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(bParam0), 177, 1);
}}


var func__440(bool bParam0){
return func_114(bParam0, 10);
}


void func_441(){
Global_78530=0;
Global_78531=-1;
Global_78532=-1;
Global_78533=-1;
Global_78534=-1;
Global_78538=-1;
}


void func_442(int iParam0, int iParam1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_441();
func_206(2042, iParam0, -1, 1, 0);
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_444(PLAYER::PLAYER_PED_ID(), iParam0), func_443(PLAYER::PLAYER_PED_ID(), iParam0), 0);
func_451(PLAYER::PLAYER_ID(), iParam0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_454(PLAYER::PLAYER_PED_ID(), iParam0));
if((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) !=0){
func_439(PLAYER::PLAYER_ID(), -1, -1);
}}}

int func_443(var uParam0, int iParam1){
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


var func__444(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
bool bVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(uParam0, 8);
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
Global_78538=func_445(iParam0, iParam1);
}
return Global_78538;
}

int func_445(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
var uVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(uParam0, 11);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0){
bVar1=true;
}
iVar2=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar3=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uVar3, joaat("over_jacket"), 8)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_450(iParam0, iParam1, 1);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)){
return func_450(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_450(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_450(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_450(iParam0, iParam1, 10);
}}else{
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8)){
return func_450(iParam0, iParam1, 6);
}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_450(iParam0, iParam1, 7);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_450(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_450(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_450(iParam0, iParam1, 10);
}}
return func_450(iParam0, iParam1, 9);
}
if(func_449(iParam0)){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}
if(iVar0 > 15){
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0)){
return func_450(iParam0, iParam1, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0)){
return func_450(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0)){
return func_450(iParam0, iParam1, 2);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0)){
return func_450(iParam0, iParam1, 3);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0)){
return func_450(iParam0, iParam1, 4);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0)){
return func_450(iParam0, iParam1, 5);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0)){
return func_450(iParam0, iParam1, 6);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0)){
return func_450(iParam0, iParam1, 7);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0)){
return func_450(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0)){
return func_450(iParam0, iParam1, 9);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0)){
return func_450(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0)){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0)){
return func_450(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if(bVar1){
return func_450(iParam0, iParam1, 5);
}else{
return func_450(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return func_450(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
return func_450(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return func_450(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
return func_450(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
return func_450(iParam0, iParam1, 10);
}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
iVar5=func_448(iVar4, 0);
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar5){
case 0:
return func_450(iParam0, iParam1, 1);
break;
case 2:
return func_450(iParam0, iParam1, 8);
break;
default:
iVar0=func_447(iVar4);
break;
}}else{
switch (iVar5){
case 2:
return func_450(iParam0, iParam1, 6);
break;
default:
iVar0=func_447(iVar4);
break;
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0)){
iVar6=func_446(iVar4, 0);
switch (iVar6){
case 4:
return func_450(iParam0, iParam1, 7);
break;
case 5:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 7);
}
break;
case 6:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 7);
}
break;
case 7:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 7);
}
break;
case 11:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 7);
}
break;
case 12:
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}
break;
case 13:
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 9);
}
break;
case 14:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 9);
}
break;
default:
iVar0=func_447(iVar4);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 2);
}}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 1);
}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 8);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0)){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 2);
}}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 1);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 5);
}}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 8);
}elseif(bVar1){
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}elseif(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0)){
if(iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 1);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 5);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 2);
}}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 2);
}}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}else{
return func_450(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 6);
}}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 2);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_22"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 2);
}}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}elseif(bVar1){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}elseif(bVar1){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}elseif(bVar1){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_13"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_16"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_27"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_23"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
iVar0=7;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 0);
}else{
return func_450(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 3);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 9);
}else{
return func_450(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 10);
}else{
return func_450(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("vest_shirt"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tails_jacket"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 7);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
return func_450(iParam0, iParam1, 6);
}else{
iVar7=iVar0;
iVar0=func_447(iVar4);
}}
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar0){
case 0:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 2:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 6);
}
break;
case 3:
if(bVar1){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 2);
}
break;
case 4:
if(bVar1){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 2);
}
break;
case 5:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 1);
}
break;
case 7:
if(bVar1){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 2);
}
break;
case 8:
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 9:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 10:
if(bVar1){
return func_450(iParam0, iParam1, 2);
}else{
return func_450(iParam0, iParam1, 2);
}
break;
case 11:
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 1);
}
break;
case 12:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 1);
}
break;
case 14:
if(bVar1){
return func_450(iParam0, iParam1, 5);
}else{
return func_450(iParam0, iParam1, 5);
}
break;
case 15:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 4);
}
break;
}}else{
switch (iVar0){
case 0:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 6);
}
break;
case 2:
if(bVar1){
return func_450(iParam0, iParam1, 3);
}else{
return func_450(iParam0, iParam1, 2);
}
break;
case 3:
if(bVar1){
return func_450(iParam0, iParam1, 5);
}else{
return func_450(iParam0, iParam1, 4);
}
break;
case 4:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 5:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 6);
}
break;
case 7:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 6);
}
break;
case 8:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 6);
}
break;
case 9:
return func_450(iParam0, iParam1, 1);
break;
case 10:
if(bVar1){
return func_450(iParam0, iParam1, 6);
}else{
return func_450(iParam0, iParam1, 6);
}
break;
case 11:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 12:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
case 14:
if(bVar1){
return func_450(iParam0, iParam1, 7);
}else{
return func_450(iParam0, iParam1, 3);
}
break;
case 15:
if(bVar1){
return func_450(iParam0, iParam1, 1);
}else{
return func_450(iParam0, iParam1, 0);
}
break;
}}
return func_450(iParam0, iParam1, 0);
return 0;
}

int func_446(int iParam0, int iParam1){
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

int func_447(int iParam0){
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

int func_448(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uParam0, joaat("luxe_draw_0"), iParam1)){
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

int func_449(var uParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(uParam0, 4, joaat("dungarees"))){
return 1;
}
return 0;
}

int func_450(var uParam0, int iParam1, int iParam2){
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
case 39aram0, joaat("heist_draw_12"), iParam1)){
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

int func_447(int iParam0){
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

int func_448(int iParam0, int iParam1){
int iVar0;
iVar0=-1;
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(uParam0, joaat("luxe_draw_0"), iParam1)){
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

int func_449(var uParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(uParam0, 4, joaat("dungarees"))){
return 1;
}
return 0;
}

int func_450(var uParam0, int iParam1, int iParam2){
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
case 39