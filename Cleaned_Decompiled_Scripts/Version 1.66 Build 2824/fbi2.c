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
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
float fLocal_28=0f;
int iLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33=0;
int iLocal_34=0;
int iLocal_35=0;
int iLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
struct<3> Local_45[6];
int iLocal_46=4;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=4;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=4;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=4;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=4;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=4;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=4;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
var uLocal_85=0;
var uLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
struct<20> Local_90={
8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
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
int iLocal_105=0;
int iLocal_106=0;
int iLocal_107=0;
int iLocal_108[5]={
0, 0, 0, 0, 0 
};
int iLocal_109=0;
int iLocal_110=0;
int iLocal_111=0;
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
int iLocal_116=0;
int iLocal_117[5]={
0, 0, 0, 0, 0 
};
int iLocal_118[2]={
0, 0 
};
int iLocal_119[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_120[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_121[12]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
int iLocal_125[3]={
0, 0, 0 
};
int iLocal_126[4]={
0, 0, 0, 0 
};
int iLocal_127=0;
int iLocal_128[15]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_129=0;
int iLocal_130=0;
int iLocal_131[3]={
0, 0, 0 
};
int iLocal_132=0;
int iLocal_133=0;
int iLocal_134=0;
int iLocal_135=0;
var uLocal_136[3]={
0, 0, 0 
};
var uLocal_137[2]={
0, 0 
};
var uLocal_138[7]={
0, 0, 0, 0, 0, 0, 0 
};
int iLocal_139=0;
int iLocal_140=0;
var uLocal_141[3]={
0, 0, 0 
};
var uLocal_142[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146[6]={
0, 0, 0, 0, 0, 0 
};
var uLocal_147[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_148[4]={
0, 0, 0, 0 
};
var uLocal_149=0;
var uLocal_150=0;
int iLocal_151=0;
int iLocal_152=0;
int iLocal_153=0;
int iLocal_154=0;
int iLocal_155[27]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_156[13]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_157[22]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_158[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_159[1]={
0 
};
int iLocal_160[2]={
0, 0 
};
int iLocal_161[4]={
0, 0, 0, 0 
};
int iLocal_162=0;
bool bLocal_163=0;
int iLocal_164=0;
bool bLocal_165=0;
int iLocal_166=0;
int iLocal_167=0;
bool bLocal_168=0;
bool bLocal_169=0;
int iLocal_170=0;
bool bLocal_171=0;
int iLocal_172=0;
bool bLocal_173=0;
int iLocal_174=0;
int iLocal_175=0;
bool bLocal_176=0;
int iLocal_177=0;
bool bLocal_178=0;
bool bLocal_179=0;
int iLocal_180=0;
int iLocal_181=0;
int iLocal_182=0;
int iLocal_183=0;
int iLocal_184=0;
int iLocal_185=0;
int iLocal_186=0;
int iLocal_187=0;
int iLocal_188=0;
bool bLocal_189=0;
int iLocal_190=0;
int iLocal_191=0;
int iLocal_192=0;
int iLocal_193=0;
int iLocal_194=0;
int iLocal_195=0;
bool bLocal_196=0;
int iLocal_197=0;
int iLocal_198=0;
int iLocal_199[3]={
0, 0, 0 
};
int iLocal_200=0;
bool bLocal_201=0;
int iLocal_202=0;
int iLocal_203=0;
int iLocal_204=0;
bool bLocal_205=0;
int iLocal_206=0;
int iLocal_207=0;
int iLocal_208=0;
int iLocal_209=0;
int iLocal_210=0;
int iLocal_211=0;
int iLocal_212=0;
int iLocal_213=0;
int iLocal_214=0;
int iLocal_215=0;
int iLocal_216=0;
int iLocal_217=0;
bool bLocal_218=0;
int iLocal_219=0;
int iLocal_220=0;
int iLocal_221=0;
int iLocal_222=0;
int iLocal_223=0;
int iLocal_224=0;
int iLocal_225=0;
bool bLocal_226=0;
int iLocal_227=0;
bool bLocal_228=0;
int iLocal_229=0;
int iLocal_230[4]={
0, 0, 0, 0 
};
int iLocal_231[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_232=0;
int iLocal_233=0;
int iLocal_234=0;
int iLocal_235=0;
bool bLocal_236=0;
int iLocal_237=0;
int iLocal_238=0;
int iLocal_239[4]={
0, 0, 0, 0 
};
int iLocal_240=0;
int iLocal_241[4]={
0, 0, 0, 0 
};
bool bLocal_242[4]={
0, 0, 0, 0 
};
int iLocal_243[12]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_244=0;
int iLocal_245=0;
int iLocal_246=0;
int iLocal_247=0;
int iLocal_248=0;
int iLocal_249=0;
int iLocal_250=0;
bool bLocal_251=0;
int iLocal_252=0;
bool bLocal_253=0;
int iLocal_254[4]={
0, 0, 0, 0 
};
int iLocal_255=0;
int iLocal_256=0;
int iLocal_257=0;
int iLocal_258=0;
int iLocal_259=0;
bool bLocal_260=0;
bool bLocal_261=0;
int iLocal_262=0;
bool bLocal_263=0;
int iLocal_264=0;
bool bLocal_265=0;
bool bLocal_266=0;
int iLocal_267=0;
int iLocal_268=0;
bool bLocal_269=0;
int iLocal_270=0;
bool bLocal_271=0;
int iLocal_272=0;
int iLocal_273=0;
int iLocal_274=0;
int iLocal_275=0;
bool bLocal_276=0;
bool bLocal_277=0;
bool bLocal_278=0;
bool bLocal_279=0;
bool bLocal_280=0;
bool bLocal_281=0;
int iLocal_282=0;
int iLocal_283=0;
int iLocal_284=0;
int iLocal_285=0;
int iLocal_286=0;
int iLocal_287=0;
int iLocal_288=0;
int iLocal_289=0;
int iLocal_290=0;
bool bLocal_291=0;
bool bLocal_292=0;
bool bLocal_293=0;
bool bLocal_294=0;
bool bLocal_295=0;
bool bLocal_296=0;
bool bLocal_297=0;
bool bLocal_298=0;
bool bLocal_299=0;
int iLocal_300=0;
bool bLocal_301=0;
int iLocal_302=0;
int iLocal_303=0;
int iLocal_304=0;
bool bLocal_305=0;
int iLocal_306=0;
bool bLocal_307=0;
int iLocal_308=0;
int iLocal_309=0;
bool bLocal_310=0;
bool bLocal_311=0;
bool bLocal_312=0;
bool bLocal_313=0;
bool bLocal_314=0;
int iLocal_315=0;
int iLocal_316=0;
int iLocal_317=0;
int iLocal_318=0;
bool bLocal_319=0;
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
bool bLocal_330=0;
int iLocal_331=0;
int iLocal_332=0;
bool bLocal_333=0;
int iLocal_334=0;
int iLocal_335=0;
int iLocal_336=0;
bool bLocal_337=0;
int iLocal_338=0;
int iLocal_339=0;
int iLocal_340=0;
int iLocal_341=0;
bool bLocal_342=0;
int iLocal_343=0;
int iLocal_344=0;
bool bLocal_345=0;
int iLocal_346=0;
bool bLocal_347=0;
int iLocal_348=0;
int iLocal_349=0;
bool bLocal_350=0;
int iLocal_351=0;
bool bLocal_352=0;
bool bLocal_353=0;
int iLocal_354=0;
int iLocal_355=0;
int iLocal_356=0;
int iLocal_357=0;
bool bLocal_358=0;
int iLocal_359=0;
int iLocal_360=0;
int iLocal_361=0;
int iLocal_362=0;
int iLocal_363=0;
int iLocal_364=0;
int iLocal_365=0;
int iLocal_366=0;
bool bLocal_367=0;
int iLocal_368=0;
bool bLocal_369=0;
int iLocal_370=0;
int iLocal_371=0;
int iLocal_372=0;
int iLocal_373=0;
int iLocal_374=0;
bool bLocal_375=0;
bool bLocal_376=0;
float fLocal_377=0f;
float fLocal_378=0f;
float fLocal_379=0f;
float fLocal_380=0f;
float fLocal_381=0f;
float fLocal_382=0f;
float fLocal_383=0f;
float fLocal_384=0f;
float fLocal_385=0f;
float fLocal_386=0f;
float fLocal_387=0f;
float fLocal_388=0f;
float fLocal_389=0f;
float fLocal_390=0f;
float fLocal_391[3]={
0f, 0f, 0f 
};
float fLocal_392=0f;
float fLocal_393=0f;
float fLocal_394=0f;
int iLocal_395=0;
int iLocal_396=0;
int iLocal_397=0;
int iLocal_398=0;
int iLocal_399=0;
int iLocal_400=0;
int iLocal_401=0;
int iLocal_402=0;
int iLocal_403=0;
int iLocal_404=0;
int iLocal_405=0;
int iLocal_406=0;
int iLocal_407=0;
int iLocal_408=0;
int iLocal_409=0;
int iLocal_410=0;
int iLocal_411=0;
int iLocal_412=0;
int iLocal_413[3]={
0, 0, 0 
};
int iLocal_414[4]={
0, 0, 0, 0 
};
int iLocal_415=0;
int iLocal_416=0;
int iLocal_417=0;
int iLocal_418=0;
int iLocal_419=0;
int iLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_424[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_425[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_426[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_427=0;
int iLocal_428=0;
int iLocal_429=0;
int iLocal_430=0;
int iLocal_431=0;
int iLocal_432=0;
int iLocal_433=0;
int iLocal_434=0;
int iLocal_435=0;
int iLocal_436=0;
int iLocal_437=0;
int iLocal_438=0;
int iLocal_439=0;
int iLocal_440=0;
int iLocal_441=0;
int iLocal_442=0;
int iLocal_443=0;
int iLocal_444=0;
int iLocal_445=0;
int iLocal_446=0;
int iLocal_447=0;
int iLocal_448=0;
int iLocal_449=0;
int iLocal_450=0;
int iLocal_451=0;
int iLocal_452=0;
int iLocal_453=0;
int iLocal_454=0;
int iLocal_455=0;
int iLocal_456=0;
int iLocal_457=0;
int iLocal_458=0;
int iLocal_459=0;
int iLocal_460=0;
int iLocal_461=0;
int iLocal_462=0;
int iLocal_463=0;
int iLocal_464=0;
int iLocal_465=0;
int iLocal_466=0;
int iLocal_467=0;
int iLocal_468=0;
int iLocal_469=0;
int iLocal_470=0;
int iLocal_471=0;
int iLocal_472=0;
int iLocal_473=0;
int iLocal_474=0;
int iLocal_475=0;
int iLocal_476=0;
var uLocal_477=0;
var uLocal_478=0;
var uLocal_479=0;
int iLocal_480=0;
int iLocal_481=0;
int iLocal_482=0;
int iLocal_483=0;
int iLocal_484=0;
int iLocal_485=0;
int iLocal_486=0;
int iLocal_487=0;
int iLocal_488=0;
int iLocal_489=0;
int iLocal_490=0;
int iLocal_491=0;
int iLocal_492=0;
int iLocal_493=0;
int iLocal_494=0;
int iLocal_495=0;
int iLocal_496=0;
int iLocal_497=0;
int iLocal_498=0;
int iLocal_499=0;
int iLocal_500=0;
int iLocal_501=0;
int iLocal_502=0;
struct<3> Local_503={
0, 0, 0 
};
struct<3> Local_504={
0, 0, 0 
};
struct<3> Local_505[3];
struct<3> Local_506={
0, 0, 0 
};
float fLocal_507=0f;
int iLocal_508=0;
struct<92> Local_509={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_510=0;
var uLocal_511=1065353216;
var uLocal_512=1065353216;
var uLocal_513=1036831949;
var uLocal_514=1000593162;
var uLocal_515=0;
var uLocal_516=0;
var uLocal_517=0;
int iLocal_518=0;
var uLocal_519=0;
var uLocal_520=0;
var uLocal_521=0;
var uLocal_522=0;
var uLocal_523=0;
var uLocal_524=0;
var uLocal_525=16;
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
int iLocal_690=0;
struct<5> Local_691={
0, 0, 0, 0, 0 
};
var uLocal_692=0;
var uLocal_693=0;
var uLocal_694=21;
var uLocal_695=6;
var uLocal_696=0;
var uLocal_697=0;
var uLocal_698=0;
var uLocal_699=0;
var uLocal_700=0;
var uLocal_701=-1;
var uLocal_702=0;
var uLocal_703=0;
var uLocal_704=0;
var uLocal_705=0;
var uLocal_706=0;
var uLocal_707=0;
var uLocal_708=1000;
var uLocal_709=1000;
var uLocal_710=0;
var uLocal_711=0;
struct<6> Local_712={
0, 0, 0, 0, 0, 0 
};
char cLocal_713[48]="";
int iLocal_714=0;
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
struct<3> Local_732={
0, 0, 0 
};
struct<3> Local_733={
0, 0, 0 
};
int iLocal_734=0;
int iLocal_735=0;
bool bLocal_736=0;
bool bLocal_737=0;
bool bLocal_738=0;
int iLocal_739=0;
int iLocal_740=0;
var uLocal_741=0;
var uLocal_742=0;
var uLocal_743=0;
var uLocal_744=0;
var uLocal_745=2;
var uLocal_746=0;
var uLocal_747=0;
var uLocal_748=2;
var uLocal_749=0;
var uLocal_750=0;
var uLocal_751=20;
var uLocal_752=0;
var uLocal_753=0;
var uLocal_754=0;
var uLocal_755=-1;
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
var uLocal_785=1065353216;
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
var uLocal_812=-1;
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
var uLocal_842=1065353216;
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
var uLocal_869=-1;
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
var uLocal_899=1065353216;
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
var uLocal_926=-1;
var uLocal_927=0;
var uLocal_928=0;
var uLocal_929=0;
var uLocal_930=0;
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
var uLocal_952=0;
var uLocal_953=0;
var uLocal_954=0;
var uLocal_955=0;
var uLocal_956=1065353216;
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
var uLocal_978=0;
var uLocal_979=0;
var uLocal_980=0;
var uLocal_981=0;
var uLocal_982=0;
var uLocal_983=-1;
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
var uLocal_994=0;
var uLocal_995=0;
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
var uLocal_1011=0;
var uLocal_1012=0;
var uLocal_1013=1065353216;
var uLocal_1014=0;
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
var uLocal_1036=0;
var uLocal_1037=0;
var uLocal_1038=0;
var uLocal_1039=0;
var uLocal_1040=-1;
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
var uLocal_1053=0;
var uLocal_1054=0;
var uLocal_1055=0;
var uLocal_1056=0;
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
var uLocal_1070=1065353216;
var uLocal_1071=0;
var uLocal_1072=0;
var uLocal_1073=0;
var uLocal_1074=0;
var uLocal_1075=0;
var uLocal_1076=0;
var uLocal_1077=0;
var uLocal_1078=0;
var uLocal_1079=0;
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
var uLocal_1095=0;
var uLocal_1096=0;
var uLocal_1097=-1;
var uLocal_1098=0;
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
var uLocal_1120=0;
var uLocal_1121=0;
var uLocal_1122=0;
var uLocal_1123=0;
var uLocal_1124=0;
var uLocal_1125=0;
var uLocal_1126=0;
var uLocal_1127=1065353216;
var uLocal_1128=0;
var uLocal_1129=0;
var uLocal_1130=0;
var uLocal_1131=0;
var uLocal_1132=0;
var uLocal_1133=0;
var uLocal_1134=0;
var uLocal_1135=0;
var uLocal_1136=0;
var uLocal_1137=0;
var uLocal_1138=0;
var uLocal_1139=0;
var uLocal_1140=0;
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
var uLocal_1154=-1;
var uLocal_1155=0;
var uLocal_1156=0;
var uLocal_1157=0;
var uLocal_1158=0;
var uLocal_1159=0;
var uLocal_1160=0;
var uLocal_1161=0;
var uLocal_1162=0;
var uLocal_1163=0;
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
var uLocal_1179=0;
var uLocal_1180=0;
var uLocal_1181=0;
var uLocal_1182=0;
var uLocal_1183=0;
var uLocal_1184=1065353216;
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
var uLocal_1204=0;
var uLocal_1205=0;
var uLocal_1206=0;
var uLocal_1207=0;
var uLocal_1208=0;
var uLocal_1209=0;
var uLocal_1210=0;
var uLocal_1211=-1;
var uLocal_1212=0;
var uLocal_1213=0;
var uLocal_1214=0;
var uLocal_1215=0;
var uLocal_1216=0;
var uLocal_1217=0;
var uLocal_1218=0;
var uLocal_1219=0;
var uLocal_1220=0;
var uLocal_1221=0;
var uLocal_1222=0;
var uLocal_1223=0;
var uLocal_1224=0;
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
var uLocal_1241=1065353216;
var uLocal_1242=0;
var uLocal_1243=0;
var uLocal_1244=0;
var uLocal_1245=0;
var uLocal_1246=0;
var uLocal_1247=0;
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
var uLocal_1263=0;
var uLocal_1264=0;
var uLocal_1265=0;
var uLocal_1266=0;
var uLocal_1267=0;
var uLocal_1268=-1;
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
var uLocal_1288=0;
var uLocal_1289=0;
var uLocal_1290=0;
var uLocal_1291=0;
var uLocal_1292=0;
var uLocal_1293=0;
var uLocal_1294=0;
var uLocal_1295=0;
var uLocal_1296=0;
var uLocal_1297=0;
var uLocal_1298=1065353216;
var uLocal_1299=0;
var uLocal_1300=0;
var uLocal_1301=0;
var uLocal_1302=0;
var uLocal_1303=0;
var uLocal_1304=0;
var uLocal_1305=0;
var uLocal_1306=0;
var uLocal_1307=0;
var uLocal_1308=0;
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
var uLocal_1325=-1;
var uLocal_1326=0;
var uLocal_1327=0;
var uLocal_1328=0;
var uLocal_1329=0;
var uLocal_1330=0;
var uLocal_1331=0;
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
var uLocal_1347=0;
var uLocal_1348=0;
var uLocal_1349=0;
var uLocal_1350=0;
var uLocal_1351=0;
var uLocal_1352=0;
var uLocal_1353=0;
var uLocal_1354=0;
var uLocal_1355=1065353216;
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
var uLocal_1372=0;
var uLocal_1373=0;
var uLocal_1374=0;
var uLocal_1375=0;
var uLocal_1376=0;
var uLocal_1377=0;
var uLocal_1378=0;
var uLocal_1379=0;
var uLocal_1380=0;
var uLocal_1381=0;
var uLocal_1382=-1;
var uLocal_1383=0;
var uLocal_1384=0;
var uLocal_1385=0;
var uLocal_1386=0;
var uLocal_1387=0;
var uLocal_1388=0;
var uLocal_1389=0;
var uLocal_1390=0;
var uLocal_1391=0;
var uLocal_1392=0;
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
var uLocal_1412=1065353216;
var uLocal_1413=0;
var uLocal_1414=0;
var uLocal_1415=0;
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
var uLocal_1431=0;
var uLocal_1432=0;
var uLocal_1433=0;
var uLocal_1434=0;
var uLocal_1435=0;
var uLocal_1436=0;
var uLocal_1437=0;
var uLocal_1438=0;
var uLocal_1439=-1;
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
var uLocal_1456=0;
var uLocal_1457=0;
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
var uLocal_1469=1065353216;
var uLocal_1470=0;
var uLocal_1471=0;
var uLocal_1472=0;
var uLocal_1473=0;
var uLocal_1474=0;
var uLocal_1475=0;
var uLocal_1476=0;
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
var uLocal_1496=-1;
var uLocal_1497=0;
var uLocal_1498=0;
var uLocal_1499=0;
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
var uLocal_1515=0;
var uLocal_1516=0;
var uLocal_1517=0;
var uLocal_1518=0;
var uLocal_1519=0;
var uLocal_1520=0;
var uLocal_1521=0;
var uLocal_1522=0;
var uLocal_1523=0;
var uLocal_1524=0;
var uLocal_1525=0;
var uLocal_1526=1065353216;
var uLocal_1527=0;
var uLocal_1528=0;
var uLocal_1529=0;
var uLocal_1530=0;
var uLocal_1531=0;
var uLocal_1532=0;
var uLocal_1533=0;
var uLocal_1534=0;
var uLocal_1535=0;
var uLocal_1536=0;
var uLocal_1537=0;
var uLocal_1538=0;
var uLocal_1539=0;
var uLocal_1540=0;
var uLocal_1541=0;
var uLocal_1542=0;
var uLocal_1543=0;
var uLocal_1544=0;
var uLocal_1545=0;
var uLocal_1546=0;
var uLocal_1547=0;
var uLocal_1548=0;
var uLocal_1549=0;
var uLocal_1550=0;
var uLocal_1551=0;
var uLocal_1552=0;
var uLocal_1553=-1;
var uLocal_1554=0;
var uLocal_1555=0;
var uLocal_1556=0;
var uLocal_1557=0;
var uLocal_1558=0;
var uLocal_1559=0;
var uLocal_1560=0;
var uLocal_1561=0;
var uLocal_1562=0;
var uLocal_1563=0;
var uLocal_1564=0;
var uLocal_1565=0;
var uLocal_1566=0;
var uLocal_1567=0;
var uLocal_1568=0;
var uLocal_1569=0;
var uLocal_1570=0;
var uLocal_1571=0;
var uLocal_1572=0;
var uLocal_1573=0;
var uLocal_1574=0;
var uLocal_1575=0;
var uLocal_1576=0;
var uLocal_1577=0;
var uLocal_1578=0;
var uLocal_1579=0;
var uLocal_1580=0;
var uLocal_1581=0;
var uLocal_1582=0;
var uLocal_1583=1065353216;
var uLocal_1584=0;
var uLocal_1585=0;
var uLocal_1586=0;
var uLocal_1587=0;
var uLocal_1588=0;
var uLocal_1589=0;
var uLocal_1590=0;
var uLocal_1591=0;
var uLocal_1592=0;
var uLocal_1593=0;
var uLocal_1594=0;
var uLocal_1595=0;
var uLocal_1596=0;
var uLocal_1597=0;
var uLocal_1598=0;
var uLocal_1599=0;
var uLocal_1600=0;
var uLocal_1601=0;
var uLocal_1602=0;
var uLocal_1603=0;
var uLocal_1604=0;
var uLocal_1605=0;
var uLocal_1606=0;
var uLocal_1607=0;
var uLocal_1608=0;
var uLocal_1609=0;
var uLocal_1610=-1;
var uLocal_1611=0;
var uLocal_1612=0;
var uLocal_1613=0;
var uLocal_1614=0;
var uLocal_1615=0;
var uLocal_1616=0;
var uLocal_1617=0;
var uLocal_1618=0;
var uLocal_1619=0;
var uLocal_1620=0;
var uLocal_1621=0;
var uLocal_1622=0;
var uLocal_1623=0;
var uLocal_1624=0;
var uLocal_1625=0;
var uLocal_1626=0;
var uLocal_1627=0;
var uLocal_1628=0;
var uLocal_1629=0;
var uLocal_1630=0;
var uLocal_1631=0;
var uLocal_1632=0;
var uLocal_1633=0;
var uLocal_1634=0;
var uLocal_1635=0;
var uLocal_1636=0;
var uLocal_1637=0;
var uLocal_1638=0;
var uLocal_1639=0;
var uLocal_1640=1065353216;
var uLocal_1641=0;
var uLocal_1642=0;
var uLocal_1643=0;
var uLocal_1644=0;
var uLocal_1645=0;
var uLocal_1646=0;
var uLocal_1647=0;
var uLocal_1648=0;
var uLocal_1649=0;
var uLocal_1650=0;
var uLocal_1651=0;
var uLocal_1652=0;
var uLocal_1653=0;
var uLocal_1654=0;
var uLocal_1655=0;
var uLocal_1656=0;
var uLocal_1657=0;
var uLocal_1658=0;
var uLocal_1659=0;
var uLocal_1660=0;
var uLocal_1661=0;
var uLocal_1662=0;
var uLocal_1663=0;
var uLocal_1664=0;
var uLocal_1665=0;
var uLocal_1666=0;
var uLocal_1667=-1;
var uLocal_1668=0;
var uLocal_1669=0;
var uLocal_1670=0;
var uLocal_1671=0;
var uLocal_1672=0;
var uLocal_1673=0;
var uLocal_1674=0;
var uLocal_1675=0;
var uLocal_1676=0;
var uLocal_1677=0;
var uLocal_1678=0;
var uLocal_1679=0;
var uLocal_1680=0;
var uLocal_1681=0;
var uLocal_1682=0;
var uLocal_1683=0;
var uLocal_1684=0;
var uLocal_1685=0;
var uLocal_1686=0;
var uLocal_1687=0;
var uLocal_1688=0;
var uLocal_1689=0;
var uLocal_1690=0;
var uLocal_1691=0;
var uLocal_1692=0;
var uLocal_1693=0;
var uLocal_1694=0;
var uLocal_1695=0;
var uLocal_1696=0;
var uLocal_1697=1065353216;
var uLocal_1698=0;
var uLocal_1699=0;
var uLocal_1700=0;
var uLocal_1701=0;
var uLocal_1702=0;
var uLocal_1703=0;
var uLocal_1704=0;
var uLocal_1705=0;
var uLocal_1706=0;
var uLocal_1707=0;
var uLocal_1708=0;
var uLocal_1709=0;
var uLocal_1710=0;
var uLocal_1711=0;
var uLocal_1712=0;
var uLocal_1713=0;
var uLocal_1714=0;
var uLocal_1715=0;
var uLocal_1716=0;
var uLocal_1717=0;
var uLocal_1718=0;
var uLocal_1719=0;
var uLocal_1720=0;
var uLocal_1721=0;
var uLocal_1722=0;
var uLocal_1723=0;
var uLocal_1724=-1;
var uLocal_1725=0;
var uLocal_1726=0;
var uLocal_1727=0;
var uLocal_1728=0;
var uLocal_1729=0;
var uLocal_1730=0;
var uLocal_1731=0;
var uLocal_1732=0;
var uLocal_1733=0;
var uLocal_1734=0;
var uLocal_1735=0;
var uLocal_1736=0;
var uLocal_1737=0;
var uLocal_1738=0;
var uLocal_1739=0;
var uLocal_1740=0;
var uLocal_1741=0;
var uLocal_1742=0;
var uLocal_1743=0;
var uLocal_1744=0;
var uLocal_1745=0;
var uLocal_1746=0;
var uLocal_1747=0;
var uLocal_1748=0;
var uLocal_1749=0;
var uLocal_1750=0;
var uLocal_1751=0;
var uLocal_1752=0;
var uLocal_1753=0;
var uLocal_1754=1065353216;
var uLocal_1755=0;
var uLocal_1756=0;
var uLocal_1757=0;
var uLocal_1758=0;
var uLocal_1759=0;
var uLocal_1760=0;
var uLocal_1761=0;
var uLocal_1762=0;
var uLocal_1763=0;
var uLocal_1764=0;
var uLocal_1765=0;
var uLocal_1766=0;
var uLocal_1767=0;
var uLocal_1768=0;
var uLocal_1769=0;
var uLocal_1770=0;
var uLocal_1771=0;
var uLocal_1772=0;
var uLocal_1773=0;
var uLocal_1774=0;
var uLocal_1775=0;
var uLocal_1776=0;
var uLocal_1777=0;
var uLocal_1778=0;
var uLocal_1779=0;
var uLocal_1780=0;
var uLocal_1781=-1;
var uLocal_1782=0;
var uLocal_1783=0;
var uLocal_1784=0;
var uLocal_1785=0;
var uLocal_1786=0;
var uLocal_1787=0;
var uLocal_1788=0;
var uLocal_1789=0;
var uLocal_1790=0;
var uLocal_1791=0;
var uLocal_1792=0;
var uLocal_1793=0;
var uLocal_1794=0;
var uLocal_1795=0;
var uLocal_1796=0;
var uLocal_1797=0;
var uLocal_1798=0;
var uLocal_1799=0;
var uLocal_1800=0;
var uLocal_1801=0;
var uLocal_1802=0;
var uLocal_1803=0;
var uLocal_1804=0;
var uLocal_1805=0;
var uLocal_1806=0;
var uLocal_1807=0;
var uLocal_1808=0;
var uLocal_1809=0;
var uLocal_1810=0;
var uLocal_1811=1065353216;
var uLocal_1812=0;
var uLocal_1813=0;
var uLocal_1814=0;
var uLocal_1815=0;
var uLocal_1816=0;
var uLocal_1817=0;
var uLocal_1818=0;
var uLocal_1819=0;
var uLocal_1820=0;
var uLocal_1821=0;
var uLocal_1822=0;
var uLocal_1823=0;
var uLocal_1824=0;
var uLocal_1825=0;
var uLocal_1826=0;
var uLocal_1827=0;
var uLocal_1828=0;
var uLocal_1829=0;
var uLocal_1830=0;
var uLocal_1831=0;
var uLocal_1832=0;
var uLocal_1833=0;
var uLocal_1834=0;
var uLocal_1835=0;
var uLocal_1836=0;
var uLocal_1837=0;
var uLocal_1838=-1;
var uLocal_1839=0;
var uLocal_1840=0;
var uLocal_1841=0;
var uLocal_1842=0;
var uLocal_1843=0;
var uLocal_1844=0;
var uLocal_1845=0;
var uLocal_1846=0;
var uLocal_1847=0;
var uLocal_1848=0;
var uLocal_1849=0;
var uLocal_1850=0;
var uLocal_1851=0;
var uLocal_1852=0;
var uLocal_1853=0;
var uLocal_1854=0;
var uLocal_1855=0;
var uLocal_1856=0;
var uLocal_1857=0;
var uLocal_1858=0;
var uLocal_1859=0;
var uLocal_1860=0;
var uLocal_1861=0;
var uLocal_1862=0;
var uLocal_1863=0;
var uLocal_1864=0;
var uLocal_1865=0;
var uLocal_1866=0;
var uLocal_1867=0;
var uLocal_1868=1065353216;
var uLocal_1869=0;
var uLocal_1870=0;
var uLocal_1871=0;
var uLocal_1872=0;
var uLocal_1873=0;
var uLocal_1874=0;
var uLocal_1875=0;
var uLocal_1876=0;
var uLocal_1877=0;
var uLocal_1878=0;
var uLocal_1879=0;
var uLocal_1880=0;
var uLocal_1881=0;
var uLocal_1882=0;
var uLocal_1883=0;
var uLocal_1884=0;
var uLocal_1885=0;
var uLocal_1886=0;
var uLocal_1887=0;
var uLocal_1888=0;
var uLocal_1889=0;
var uLocal_1890=0;
var uLocal_1891=0;
var uLocal_1892=16;
var uLocal_1893=0;
var uLocal_1894=-1082130432;
var uLocal_1895=0;
var uLocal_1896=-1082130432;
var uLocal_1897=0;
var uLocal_1898=-1082130432;
var uLocal_1899=0;
var uLocal_1900=-1082130432;
var uLocal_1901=0;
var uLocal_1902=-1082130432;
var uLocal_1903=0;
var uLocal_1904=-1082130432;
var uLocal_1905=0;
var uLocal_1906=-1082130432;
var uLocal_1907=0;
var uLocal_1908=-1082130432;
var uLocal_1909=0;
var uLocal_1910=-1082130432;
var uLocal_1911=0;
var uLocal_1912=-1082130432;
var uLocal_1913=0;
var uLocal_1914=-1082130432;
var uLocal_1915=0;
var uLocal_1916=-1082130432;
var uLocal_1917=0;
var uLocal_1918=-1082130432;
var uLocal_1919=0;
var uLocal_1920=-1082130432;
var uLocal_1921=0;
var uLocal_1922=-1082130432;
var uLocal_1923=0;
var uLocal_1924=-1082130432;
var uLocal_1925=16;
var uLocal_1926=0;
var uLocal_1927=-1082130432;
var uLocal_1928=0;
var uLocal_1929=-1082130432;
var uLocal_1930=0;
var uLocal_1931=-1082130432;
var uLocal_1932=0;
var uLocal_1933=-1082130432;
var uLocal_1934=0;
var uLocal_1935=-1082130432;
var uLocal_1936=0;
var uLocal_1937=-1082130432;
var uLocal_1938=0;
var uLocal_1939=-1082130432;
var uLocal_1940=0;
var uLocal_1941=-1082130432;
var uLocal_1942=0;
var uLocal_1943=-1082130432;
var uLocal_1944=0;
var uLocal_1945=-1082130432;
var uLocal_1946=0;
var uLocal_1947=-1082130432;
var uLocal_1948=0;
var uLocal_1949=-1082130432;
var uLocal_1950=0;
var uLocal_1951=-1082130432;
var uLocal_1952=0;
var uLocal_1953=-1082130432;
var uLocal_1954=0;
var uLocal_1955=-1082130432;
var uLocal_1956=0;
var uLocal_1957=-1082130432;
var uLocal_1958=0;
var uLocal_1959=0;
var uLocal_1960=0;
var uLocal_1961=0;
var uLocal_1962=0;
var uLocal_1963=0;
var uLocal_1964=0;
var uLocal_1965=0;
var uLocal_1966=0;
var uLocal_1967=0;
var uLocal_1968=0;
var uLocal_1969=0;
var uLocal_1970=0;
var uLocal_1971=0;
var uLocal_1972=0;
var uLocal_1973=0;
var uLocal_1974=-1082130432;
var uLocal_1975=-1082130432;
var uLocal_1976=1;
var uLocal_1977=1;
var uLocal_1978=1;
var uLocal_1979=-1;
var uLocal_1980=-1;
var uLocal_1981=-1;
struct<2> Local_1982={
0, 0 
};
var uLocal_1983=0;
var uLocal_1984=0;
var uLocal_1985=2;
var uLocal_1986=0;
var uLocal_1987=0;
var uLocal_1988=2;
var uLocal_1989=0;
var uLocal_1990=0;
var uLocal_1991=20;
var uLocal_1992=0;
var uLocal_1993=0;
var uLocal_1994=0;
var uLocal_1995=-1;
var uLocal_1996=0;
var uLocal_1997=0;
var uLocal_1998=0;
var uLocal_1999=0;
var uLocal_2000=0;
var uLocal_2001=0;
var uLocal_2002=0;
var uLocal_2003=0;
var uLocal_2004=0;
var uLocal_2005=0;
var uLocal_2006=0;
var uLocal_2007=0;
var uLocal_2008=0;
var uLocal_2009=0;
var uLocal_2010=0;
var uLocal_2011=0;
var uLocal_2012=0;
var uLocal_2013=0;
var uLocal_2014=0;
var uLocal_2015=0;
var uLocal_2016=0;
var uLocal_2017=0;
var uLocal_2018=0;
var uLocal_2019=0;
var uLocal_2020=0;
var uLocal_2021=0;
var uLocal_2022=0;
var uLocal_2023=0;
var uLocal_2024=0;
var uLocal_2025=1065353216;
var uLocal_2026=0;
var uLocal_2027=0;
var uLocal_2028=0;
var uLocal_2029=0;
var uLocal_2030=0;
var uLocal_2031=0;
var uLocal_2032=0;
var uLocal_2033=0;
var uLocal_2034=0;
var uLocal_2035=0;
var uLocal_2036=0;
var uLocal_2037=0;
var uLocal_2038=0;
var uLocal_2039=0;
var uLocal_2040=0;
var uLocal_2041=0;
var uLocal_2042=0;
var uLocal_2043=0;
var uLocal_2044=0;
var uLocal_2045=0;
var uLocal_2046=0;
var uLocal_2047=0;
var uLocal_2048=0;
var uLocal_2049=0;
var uLocal_2050=0;
var uLocal_2051=0;
var uLocal_2052=-1;
var uLocal_2053=0;
var uLocal_2054=0;
var uLocal_2055=0;
var uLocal_2056=0;
var uLocal_2057=0;
var uLocal_2058=0;
var uLocal_2059=0;
var uLocal_2060=0;
var uLocal_2061=0;
var uLocal_2062=0;
var uLocal_2063=0;
var uLocal_2064=0;
var uLocal_2065=0;
var uLocal_2066=0;
var uLocal_2067=0;
var uLocal_2068=0;
var uLocal_2069=0;
var uLocal_2070=0;
var uLocal_2071=0;
var uLocal_2072=0;
var uLocal_2073=0;
var uLocal_2074=0;
var uLocal_2075=0;
var uLocal_2076=0;
var uLocal_2077=0;
var uLocal_2078=0;
var uLocal_2079=0;
var uLocal_2080=0;
var uLocal_2081=0;
var uLocal_2082=1065353216;
var uLocal_2083=0;
var uLocal_2084=0;
var uLocal_2085=0;
var uLocal_2086=0;
var uLocal_2087=0;
var uLocal_2088=0;
var uLocal_2089=0;
var uLocal_2090=0;
var uLocal_2091=0;
var uLocal_2092=0;
var uLocal_2093=0;
var uLocal_2094=0;
var uLocal_2095=0;
var uLocal_2096=0;
var uLocal_2097=0;
var uLocal_2098=0;
var uLocal_2099=0;
var uLocal_2100=0;
var uLocal_2101=0;
var uLocal_2102=0;
var uLocal_2103=0;
var uLocal_2104=0;
var uLocal_2105=0;
var uLocal_2106=0;
var uLocal_2107=0;
var uLocal_2108=0;
var uLocal_2109=-1;
var uLocal_2110=0;
var uLocal_2111=0;
var uLocal_2112=0;
var uLocal_2113=0;
var uLocal_2114=0;
var uLocal_2115=0;
var uLocal_2116=0;
var uLocal_2117=0;
var uLocal_2118=0;
var uLocal_2119=0;
var uLocal_2120=0;
var uLocal_2121=0;
var uLocal_2122=0;
var uLocal_2123=0;
var uLocal_2124=0;
var uLocal_2125=0;
var uLocal_2126=0;
var uLocal_2127=0;
var uLocal_2128=0;
var uLocal_2129=0;
var uLocal_2130=0;
var uLocal_2131=0;
var uLocal_2132=0;
var uLocal_2133=0;
var uLocal_2134=0;
var uLocal_2135=0;
var uLocal_2136=0;
var uLocal_2137=0;
var uLocal_2138=0;
var uLocal_2139=1065353216;
var uLocal_2140=0;
var uLocal_2141=0;
var uLocal_2142=0;
var uLocal_2143=0;
var uLocal_2144=0;
var uLocal_2145=0;
var uLocal_2146=0;
var uLocal_2147=0;
var uLocal_2148=0;
var uLocal_2149=0;
var uLocal_2150=0;
var uLocal_2151=0;
var uLocal_2152=0;
var uLocal_2153=0;
var uLocal_2154=0;
var uLocal_2155=0;
var uLocal_2156=0;
var uLocal_2157=0;
var uLocal_2158=0;
var uLocal_2159=0;
var uLocal_2160=0;
var uLocal_2161=0;
var uLocal_2162=0;
var uLocal_2163=0;
var uLocal_2164=0;
var uLocal_2165=0;
var uLocal_2166=-1;
var uLocal_2167=0;
var uLocal_2168=0;
var uLocal_2169=0;
var uLocal_2170=0;
var uLocal_2171=0;
var uLocal_2172=0;
var uLocal_2173=0;
var uLocal_2174=0;
var uLocal_2175=0;
var uLocal_2176=0;
var uLocal_2177=0;
var uLocal_2178=0;
var uLocal_2179=0;
var uLocal_2180=0;
var uLocal_2181=0;
var uLocal_2182=0;
var uLocal_2183=0;
var uLocal_2184=0;
var uLocal_2185=0;
var uLocal_2186=0;
var uLocal_2187=0;
var uLocal_2188=0;
var uLocal_2189=0;
var uLocal_2190=0;
var uLocal_2191=0;
var uLocal_2192=0;
var uLocal_2193=0;
var uLocal_2194=0;
var uLocal_2195=0;
var uLocal_2196=1065353216;
var uLocal_2197=0;
var uLocal_2198=0;
var uLocal_2199=0;
var uLocal_2200=0;
var uLocal_2201=0;
var uLocal_2202=0;
var uLocal_2203=0;
var uLocal_2204=0;
var uLocal_2205=0;
var uLocal_2206=0;
var uLocal_2207=0;
var uLocal_2208=0;
var uLocal_2209=0;
var uLocal_2210=0;
var uLocal_2211=0;
var uLocal_2212=0;
var uLocal_2213=0;
var uLocal_2214=0;
var uLocal_2215=0;
var uLocal_2216=0;
var uLocal_2217=0;
var uLocal_2218=0;
var uLocal_2219=0;
var uLocal_2220=0;
var uLocal_2221=0;
var uLocal_2222=0;
var uLocal_2223=-1;
var uLocal_2224=0;
var uLocal_2225=0;
var uLocal_2226=0;
var uLocal_2227=0;
var uLocal_2228=0;
var uLocal_2229=0;
var uLocal_2230=0;
var uLocal_2231=0;
var uLocal_2232=0;
var uLocal_2233=0;
var uLocal_2234=0;
var uLocal_2235=0;
var uLocal_2236=0;
var uLocal_2237=0;
var uLocal_2238=0;
var uLocal_2239=0;
var uLocal_2240=0;
var uLocal_2241=0;
var uLocal_2242=0;
var uLocal_2243=0;
var uLocal_2244=0;
var uLocal_2245=0;
var uLocal_2246=0;
var uLocal_2247=0;
var uLocal_2248=0;
var uLocal_2249=0;
var uLocal_2250=0;
var uLocal_2251=0;
var uLocal_2252=0;
var uLocal_2253=1065353216;
var uLocal_2254=0;
var uLocal_2255=0;
var uLocal_2256=0;
var uLocal_2257=0;
var uLocal_2258=0;
var uLocal_2259=0;
var uLocal_2260=0;
var uLocal_2261=0;
var uLocal_2262=0;
var uLocal_2263=0;
var uLocal_2264=0;
var uLocal_2265=0;
var uLocal_2266=0;
var uLocal_2267=0;
var uLocal_2268=0;
var uLocal_2269=0;
var uLocal_2270=0;
var uLocal_2271=0;
var uLocal_2272=0;
var uLocal_2273=0;
var uLocal_2274=0;
var uLocal_2275=0;
var uLocal_2276=0;
var uLocal_2277=0;
var uLocal_2278=0;
var uLocal_2279=0;
var uLocal_2280=-1;
var uLocal_2281=0;
var uLocal_2282=0;
var uLocal_2283=0;
var uLocal_2284=0;
var uLocal_2285=0;
var uLocal_2286=0;
var uLocal_2287=0;
var uLocal_2288=0;
var uLocal_2289=0;
var uLocal_2290=0;
var uLocal_2291=0;
var uLocal_2292=0;
var uLocal_2293=0;
var uLocal_2294=0;
var uLocal_2295=0;
var uLocal_2296=0;
var uLocal_2297=0;
var uLocal_2298=0;
var uLocal_2299=0;
var uLocal_2300=0;
var uLocal_2301=0;
var uLocal_2302=0;
var uLocal_2303=0;
var uLocal_2304=0;
var uLocal_2305=0;
var uLocal_2306=0;
var uLocal_2307=0;
var uLocal_2308=0;
var uLocal_2309=0;
var uLocal_2310=1065353216;
var uLocal_2311=0;
var uLocal_2312=0;
var uLocal_2313=0;
var uLocal_2314=0;
var uLocal_2315=0;
var uLocal_2316=0;
var uLocal_2317=0;
var uLocal_2318=0;
var uLocal_2319=0;
var uLocal_2320=0;
var uLocal_2321=0;
var uLocal_2322=0;
var uLocal_2323=0;
var uLocal_2324=0;
var uLocal_2325=0;
var uLocal_2326=0;
var uLocal_2327=0;
var uLocal_2328=0;
var uLocal_2329=0;
var uLocal_2330=0;
var uLocal_2331=0;
var uLocal_2332=0;
var uLocal_2333=0;
var uLocal_2334=0;
var uLocal_2335=0;
var uLocal_2336=0;
var uLocal_2337=-1;
var uLocal_2338=0;
var uLocal_2339=0;
var uLocal_2340=0;
var uLocal_2341=0;
var uLocal_2342=0;
var uLocal_2343=0;
var uLocal_2344=0;
var uLocal_2345=0;
var uLocal_2346=0;
var uLocal_2347=0;
var uLocal_2348=0;
var uLocal_2349=0;
var uLocal_2350=0;
var uLocal_2351=0;
var uLocal_2352=0;
var uLocal_2353=0;
var uLocal_2354=0;
var uLocal_2355=0;
var uLocal_2356=0;
var uLocal_2357=0;
var uLocal_2358=0;
var uLocal_2359=0;
var uLocal_2360=0;
var uLocal_2361=0;
var uLocal_2362=0;
var uLocal_2363=0;
var uLocal_2364=0;
var uLocal_2365=0;
var uLocal_2366=0;
var uLocal_2367=1065353216;
var uLocal_2368=0;
var uLocal_2369=0;
var uLocal_2370=0;
var uLocal_2371=0;
var uLocal_2372=0;
var uLocal_2373=0;
var uLocal_2374=0;
var uLocal_2375=0;
var uLocal_2376=0;
var uLocal_2377=0;
var uLocal_2378=0;
var uLocal_2379=0;
var uLocal_2380=0;
var uLocal_2381=0;
var uLocal_2382=0;
var uLocal_2383=0;
var uLocal_2384=0;
var uLocal_2385=0;
var uLocal_2386=0;
var uLocal_2387=0;
var uLocal_2388=0;
var uLocal_2389=0;
var uLocal_2390=0;
var uLocal_2391=0;
var uLocal_2392=0;
var uLocal_2393=0;
var uLocal_2394=-1;
var uLocal_2395=0;
var uLocal_2396=0;
var uLocal_2397=0;
var uLocal_2398=0;
var uLocal_2399=0;
var uLocal_2400=0;
var uLocal_2401=0;
var uLocal_2402=0;
var uLocal_2403=0;
var uLocal_2404=0;
var uLocal_2405=0;
var uLocal_2406=0;
var uLocal_2407=0;
var uLocal_2408=0;
var uLocal_2409=0;
var uLocal_2410=0;
var uLocal_2411=0;
var uLocal_2412=0;
var uLocal_2413=0;
var uLocal_2414=0;
var uLocal_2415=0;
var uLocal_2416=0;
var uLocal_2417=0;
var uLocal_2418=0;
var uLocal_2419=0;
var uLocal_2420=0;
var uLocal_2421=0;
var uLocal_2422=0;
var uLocal_2423=0;
var uLocal_2424=1065353216;
var uLocal_2425=0;
var uLocal_2426=0;
var uLocal_2427=0;
var uLocal_2428=0;
var uLocal_2429=0;
var uLocal_2430=0;
var uLocal_2431=0;
var uLocal_2432=0;
var uLocal_2433=0;
var uLocal_2434=0;
var uLocal_2435=0;
var uLocal_2436=0;
var uLocal_2437=0;
var uLocal_2438=0;
var uLocal_2439=0;
var uLocal_2440=0;
var uLocal_2441=0;
var uLocal_2442=0;
var uLocal_2443=0;
var uLocal_2444=0;
var uLocal_2445=0;
var uLocal_2446=0;
var uLocal_2447=0;
var uLocal_2448=0;
var uLocal_2449=0;
var uLocal_2450=0;
var uLocal_2451=-1;
var uLocal_2452=0;
var uLocal_2453=0;
var uLocal_2454=0;
var uLocal_2455=0;
var uLocal_2456=0;
var uLocal_2457=0;
var uLocal_2458=0;
var uLocal_2459=0;
var uLocal_2460=0;
var uLocal_2461=0;
var uLocal_2462=0;
var uLocal_2463=0;
var uLocal_2464=0;
var uLocal_2465=0;
var uLocal_2466=0;
var uLocal_2467=0;
var uLocal_2468=0;
var uLocal_2469=0;
var uLocal_2470=0;
var uLocal_2471=0;
var uLocal_2472=0;
var uLocal_2473=0;
var uLocal_2474=0;
var uLocal_2475=0;
var uLocal_2476=0;
var uLocal_2477=0;
var uLocal_2478=0;
var uLocal_2479=0;
var uLocal_2480=0;
var uLocal_2481=1065353216;
var uLocal_2482=0;
var uLocal_2483=0;
var uLocal_2484=0;
var uLocal_2485=0;
var uLocal_2486=0;
var uLocal_2487=0;
var uLocal_2488=0;
var uLocal_2489=0;
var uLocal_2490=0;
var uLocal_2491=0;
var uLocal_2492=0;
var uLocal_2493=0;
var uLocal_2494=0;
var uLocal_2495=0;
var uLocal_2496=0;
var uLocal_2497=0;
var uLocal_2498=0;
var uLocal_2499=0;
var uLocal_2500=0;
var uLocal_2501=0;
var uLocal_2502=0;
var uLocal_2503=0;
var uLocal_2504=0;
var uLocal_2505=0;
var uLocal_2506=0;
var uLocal_2507=0;
var uLocal_2508=-1;
var uLocal_2509=0;
var uLocal_2510=0;
var uLocal_2511=0;
var uLocal_2512=0;
var uLocal_2513=0;
var uLocal_2514=0;
var uLocal_2515=0;
var uLocal_2516=0;
var uLocal_2517=0;
var uLocal_2518=0;
var uLocal_2519=0;
var uLocal_2520=0;
var uLocal_2521=0;
var uLocal_2522=0;
var uLocal_2523=0;
var uLocal_2524=0;
var uLocal_2525=0;
var uLocal_2526=0;
var uLocal_2527=0;
var uLocal_2528=0;
var uLocal_2529=0;
var uLocal_2530=0;
var uLocal_2531=0;
var uLocal_2532=0;
var uLocal_2533=0;
var uLocal_2534=0;
var uLocal_2535=0;
var uLocal_2536=0;
var uLocal_2537=0;
var uLocal_2538=1065353216;
var uLocal_2539=0;
var uLocal_2540=0;
var uLocal_2541=0;
var uLocal_2542=0;
var uLocal_2543=0;
var uLocal_2544=0;
var uLocal_2545=0;
var uLocal_2546=0;
var uLocal_2547=0;
var uLocal_2548=0;
var uLocal_2549=0;
var uLocal_2550=0;
var uLocal_2551=0;
var uLocal_2552=0;
var uLocal_2553=0;
var uLocal_2554=0;
var uLocal_2555=0;
var uLocal_2556=0;
var uLocal_2557=0;
var uLocal_2558=0;
var uLocal_2559=0;
var uLocal_2560=0;
var uLocal_2561=0;
var uLocal_2562=0;
var uLocal_2563=0;
var uLocal_2564=0;
var uLocal_2565=-1;
var uLocal_2566=0;
var uLocal_2567=0;
var uLocal_2568=0;
var uLocal_2569=0;
var uLocal_2570=0;
var uLocal_2571=0;
var uLocal_2572=0;
var uLocal_2573=0;
var uLocal_2574=0;
var uLocal_2575=0;
var uLocal_2576=0;
var uLocal_2577=0;
var uLocal_2578=0;
var uLocal_2579=0;
var uLocal_2580=0;
var uLocal_2581=0;
var uLocal_2582=0;
var uLocal_2583=0;
var uLocal_2584=0;
var uLocal_2585=0;
var uLocal_2586=0;
var uLocal_2587=0;
var uLocal_2588=0;
var uLocal_2589=0;
var uLocal_2590=0;
var uLocal_2591=0;
var uLocal_2592=0;
var uLocal_2593=0;
var uLocal_2594=0;
var uLocal_2595=1065353216;
var uLocal_2596=0;
var uLocal_2597=0;
var uLocal_2598=0;
var uLocal_2599=0;
var uLocal_2600=0;
var uLocal_2601=0;
var uLocal_2602=0;
var uLocal_2603=0;
var uLocal_2604=0;
var uLocal_2605=0;
var uLocal_2606=0;
var uLocal_2607=0;
var uLocal_2608=0;
var uLocal_2609=0;
var uLocal_2610=0;
var uLocal_2611=0;
var uLocal_2612=0;
var uLocal_2613=0;
var uLocal_2614=0;
var uLocal_2615=0;
var uLocal_2616=0;
var uLocal_2617=0;
var uLocal_2618=0;
var uLocal_2619=0;
var uLocal_2620=0;
var uLocal_2621=0;
var uLocal_2622=-1;
var uLocal_2623=0;
var uLocal_2624=0;
var uLocal_2625=0;
var uLocal_2626=0;
var uLocal_2627=0;
var uLocal_2628=0;
var uLocal_2629=0;
var uLocal_2630=0;
var uLocal_2631=0;
var uLocal_2632=0;
var uLocal_2633=0;
var uLocal_2634=0;
var uLocal_2635=0;
var uLocal_2636=0;
var uLocal_2637=0;
var uLocal_2638=0;
var uLocal_2639=0;
var uLocal_2640=0;
var uLocal_2641=0;
var uLocal_2642=0;
var uLocal_2643=0;
var uLocal_2644=0;
var uLocal_2645=0;
var uLocal_2646=0;
var uLocal_2647=0;
var uLocal_2648=0;
var uLocal_2649=0;
var uLocal_2650=0;
var uLocal_2651=0;
var uLocal_2652=1065353216;
var uLocal_2653=0;
var uLocal_2654=0;
var uLocal_2655=0;
var uLocal_2656=0;
var uLocal_2657=0;
var uLocal_2658=0;
var uLocal_2659=0;
var uLocal_2660=0;
var uLocal_2661=0;
var uLocal_2662=0;
var uLocal_2663=0;
var uLocal_2664=0;
var uLocal_2665=0;
var uLocal_2666=0;
var uLocal_2667=0;
var uLocal_2668=0;
var uLocal_2669=0;
var uLocal_2670=0;
var uLocal_2671=0;
var uLocal_2672=0;
var uLocal_2673=0;
var uLocal_2674=0;
var uLocal_2675=0;
var uLocal_2676=0;
var uLocal_2677=0;
var uLocal_2678=0;
var uLocal_2679=-1;
var uLocal_2680=0;
var uLocal_2681=0;
var uLocal_2682=0;
var uLocal_2683=0;
var uLocal_2684=0;
var uLocal_2685=0;
var uLocal_2686=0;
var uLocal_2687=0;
var uLocal_2688=0;
var uLocal_2689=0;
var uLocal_2690=0;
var uLocal_2691=0;
var uLocal_2692=0;
var uLocal_2693=0;
var uLocal_2694=0;
var uLocal_2695=0;
var uLocal_2696=0;
var uLocal_2697=0;
var uLocal_2698=0;
var uLocal_2699=0;
var uLocal_2700=0;
var uLocal_2701=0;
var uLocal_2702=0;
var uLocal_2703=0;
var uLocal_2704=0;
var uLocal_2705=0;
var uLocal_2706=0;
var uLocal_2707=0;
var uLocal_2708=0;
var uLocal_2709=1065353216;
var uLocal_2710=0;
var uLocal_2711=0;
var uLocal_2712=0;
var uLocal_2713=0;
var uLocal_2714=0;
var uLocal_2715=0;
var uLocal_2716=0;
var uLocal_2717=0;
var uLocal_2718=0;
var uLocal_2719=0;
var uLocal_2720=0;
var uLocal_2721=0;
var uLocal_2722=0;
var uLocal_2723=0;
var uLocal_2724=0;
var uLocal_2725=0;
var uLocal_2726=0;
var uLocal_2727=0;
var uLocal_2728=0;
var uLocal_2729=0;
var uLocal_2730=0;
var uLocal_2731=0;
var uLocal_2732=0;
var uLocal_2733=0;
var uLocal_2734=0;
var uLocal_2735=0;
var uLocal_2736=-1;
var uLocal_2737=0;
var uLocal_2738=0;
var uLocal_2739=0;
var uLocal_2740=0;
var uLocal_2741=0;
var uLocal_2742=0;
var uLocal_2743=0;
var uLocal_2744=0;
var uLocal_2745=0;
var uLocal_2746=0;
var uLocal_2747=0;
var uLocal_2748=0;
var uLocal_2749=0;
var uLocal_2750=0;
var uLocal_2751=0;
var uLocal_2752=0;
var uLocal_2753=0;
var uLocal_2754=0;
var uLocal_2755=0;
var uLocal_2756=0;
var uLocal_2757=0;
var uLocal_2758=0;
var uLocal_2759=0;
var uLocal_2760=0;
var uLocal_2761=0;
var uLocal_2762=0;
var uLocal_2763=0;
var uLocal_2764=0;
var uLocal_2765=0;
var uLocal_2766=1065353216;
var uLocal_2767=0;
var uLocal_2768=0;
var uLocal_2769=0;
var uLocal_2770=0;
var uLocal_2771=0;
var uLocal_2772=0;
var uLocal_2773=0;
var uLocal_2774=0;
var uLocal_2775=0;
var uLocal_2776=0;
var uLocal_2777=0;
var uLocal_2778=0;
var uLocal_2779=0;
var uLocal_2780=0;
var uLocal_2781=0;
var uLocal_2782=0;
var uLocal_2783=0;
var uLocal_2784=0;
var uLocal_2785=0;
var uLocal_2786=0;
var uLocal_2787=0;
var uLocal_2788=0;
var uLocal_2789=0;
var uLocal_2790=0;
var uLocal_2791=0;
var uLocal_2792=0;
var uLocal_2793=-1;
var uLocal_2794=0;
var uLocal_2795=0;
var uLocal_2796=0;
var uLocal_2797=0;
var uLocal_2798=0;
var uLocal_2799=0;
var uLocal_2800=0;
var uLocal_2801=0;
var uLocal_2802=0;
var uLocal_2803=0;
var uLocal_2804=0;
var uLocal_2805=0;
var uLocal_2806=0;
var uLocal_2807=0;
var uLocal_2808=0;
var uLocal_2809=0;
var uLocal_2810=0;
var uLocal_2811=0;
var uLocal_2812=0;
var uLocal_2813=0;
var uLocal_2814=0;
var uLocal_2815=0;
var uLocal_2816=0;
var uLocal_2817=0;
var uLocal_2818=0;
var uLocal_2819=0;
var uLocal_2820=0;
var uLocal_2821=0;
var uLocal_2822=0;
var uLocal_2823=1065353216;
var uLocal_2824=0;
var uLocal_2825=0;
var uLocal_2826=0;
var uLocal_2827=0;
var uLocal_2828=0;
var uLocal_2829=0;
var uLocal_2830=0;
var uLocal_2831=0;
var uLocal_2832=0;
var uLocal_2833=0;
var uLocal_2834=0;
var uLocal_2835=0;
var uLocal_2836=0;
var uLocal_2837=0;
var uLocal_2838=0;
var uLocal_2839=0;
var uLocal_2840=0;
var uLocal_2841=0;
var uLocal_2842=0;
var uLocal_2843=0;
var uLocal_2844=0;
var uLocal_2845=0;
var uLocal_2846=0;
var uLocal_2847=0;
var uLocal_2848=0;
var uLocal_2849=0;
var uLocal_2850=-1;
var uLocal_2851=0;
var uLocal_2852=0;
var uLocal_2853=0;
var uLocal_2854=0;
var uLocal_2855=0;
var uLocal_2856=0;
var uLocal_2857=0;
var uLocal_2858=0;
var uLocal_2859=0;
var uLocal_2860=0;
var uLocal_2861=0;
var uLocal_2862=0;
var uLocal_2863=0;
var uLocal_2864=0;
var uLocal_2865=0;
var uLocal_2866=0;
var uLocal_2867=0;
var uLocal_2868=0;
var uLocal_2869=0;
var uLocal_2870=0;
var uLocal_2871=0;
var uLocal_2872=0;
var uLocal_2873=0;
var uLocal_2874=0;
var uLocal_2875=0;
var uLocal_2876=0;
var uLocal_2877=0;
var uLocal_2878=0;
var uLocal_2879=0;
var uLocal_2880=1065353216;
var uLocal_2881=0;
var uLocal_2882=0;
var uLocal_2883=0;
var uLocal_2884=0;
var uLocal_2885=0;
var uLocal_2886=0;
var uLocal_2887=0;
var uLocal_2888=0;
var uLocal_2889=0;
var uLocal_2890=0;
var uLocal_2891=0;
var uLocal_2892=0;
var uLocal_2893=0;
var uLocal_2894=0;
var uLocal_2895=0;
var uLocal_2896=0;
var uLocal_2897=0;
var uLocal_2898=0;
var uLocal_2899=0;
var uLocal_2900=0;
var uLocal_2901=0;
var uLocal_2902=0;
var uLocal_2903=0;
var uLocal_2904=0;
var uLocal_2905=0;
var uLocal_2906=0;
var uLocal_2907=-1;
var uLocal_2908=0;
var uLocal_2909=0;
var uLocal_2910=0;
var uLocal_2911=0;
var uLocal_2912=0;
var uLocal_2913=0;
var uLocal_2914=0;
var uLocal_2915=0;
var uLocal_2916=0;
var uLocal_2917=0;
var uLocal_2918=0;
var uLocal_2919=0;
var uLocal_2920=0;
var uLocal_2921=0;
var uLocal_2922=0;
var uLocal_2923=0;
var uLocal_2924=0;
var uLocal_2925=0;
var uLocal_2926=0;
var uLocal_2927=0;
var uLocal_2928=0;
var uLocal_2929=0;
var uLocal_2930=0;
var uLocal_2931=0;
var uLocal_2932=0;
var uLocal_2933=0;
var uLocal_2934=0;
var uLocal_2935=0;
var uLocal_2936=0;
var uLocal_2937=1065353216;
var uLocal_2938=0;
var uLocal_2939=0;
var uLocal_2940=0;
var uLocal_2941=0;
var uLocal_2942=0;
var uLocal_2943=0;
var uLocal_2944=0;
var uLocal_2945=0;
var uLocal_2946=0;
var uLocal_2947=0;
var uLocal_2948=0;
var uLocal_2949=0;
var uLocal_2950=0;
var uLocal_2951=0;
var uLocal_2952=0;
var uLocal_2953=0;
var uLocal_2954=0;
var uLocal_2955=0;
var uLocal_2956=0;
var uLocal_2957=0;
var uLocal_2958=0;
var uLocal_2959=0;
var uLocal_2960=0;
var uLocal_2961=0;
var uLocal_2962=0;
var uLocal_2963=0;
var uLocal_2964=-1;
var uLocal_2965=0;
var uLocal_2966=0;
var uLocal_2967=0;
var uLocal_2968=0;
var uLocal_2969=0;
var uLocal_2970=0;
var uLocal_2971=0;
var uLocal_2972=0;
var uLocal_2973=0;
var uLocal_2974=0;
var uLocal_2975=0;
var uLocal_2976=0;
var uLocal_2977=0;
var uLocal_2978=0;
var uLocal_2979=0;
var uLocal_2980=0;
var uLocal_2981=0;
var uLocal_2982=0;
var uLocal_2983=0;
var uLocal_2984=0;
var uLocal_2985=0;
var uLocal_2986=0;
var uLocal_2987=0;
var uLocal_2988=0;
var uLocal_2989=0;
var uLocal_2990=0;
var uLocal_2991=0;
var uLocal_2992=0;
var uLocal_2993=0;
var uLocal_2994=1065353216;
var uLocal_2995=0;
var uLocal_2996=0;
var uLocal_2997=0;
var uLocal_2998=0;
var uLocal_2999=0;
var uLocal_3000=0;
var uLocal_3001=0;
var uLocal_3002=0;
var uLocal_3003=0;
var uLocal_3004=0;
var uLocal_3005=0;
var uLocal_3006=0;
var uLocal_3007=0;
var uLocal_3008=0;
var uLocal_3009=0;
var uLocal_3010=0;
var uLocal_3011=0;
var uLocal_3012=0;
var uLocal_3013=0;
var uLocal_3014=0;
var uLocal_3015=0;
var uLocal_3016=0;
var uLocal_3017=0;
var uLocal_3018=0;
var uLocal_3019=0;
var uLocal_3020=0;
var uLocal_3021=-1;
var uLocal_3022=0;
var uLocal_3023=0;
var uLocal_3024=0;
var uLocal_3025=0;
var uLocal_3026=0;
var uLocal_3027=0;
var uLocal_3028=0;
var uLocal_3029=0;
var uLocal_3030=0;
var uLocal_3031=0;
var uLocal_3032=0;
var uLocal_3033=0;
var uLocal_3034=0;
var uLocal_3035=0;
var uLocal_3036=0;
var uLocal_3037=0;
var uLocal_3038=0;
var uLocal_3039=0;
var uLocal_3040=0;
var uLocal_3041=0;
var uLocal_3042=0;
var uLocal_3043=0;
var uLocal_3044=0;
var uLocal_3045=0;
var uLocal_3046=0;
var uLocal_3047=0;
var uLocal_3048=0;
var uLocal_3049=0;
var uLocal_3050=0;
var uLocal_3051=1065353216;
var uLocal_3052=0;
var uLocal_3053=0;
var uLocal_3054=0;
var uLocal_3055=0;
var uLocal_3056=0;
var uLocal_3057=0;
var uLocal_3058=0;
var uLocal_3059=0;
var uLocal_3060=0;
var uLocal_3061=0;
var uLocal_3062=0;
var uLocal_3063=0;
var uLocal_3064=0;
var uLocal_3065=0;
var uLocal_3066=0;
var uLocal_3067=0;
var uLocal_3068=0;
var uLocal_3069=0;
var uLocal_3070=0;
var uLocal_3071=0;
var uLocal_3072=0;
var uLocal_3073=0;
var uLocal_3074=0;
var uLocal_3075=0;
var uLocal_3076=0;
var uLocal_3077=0;
var uLocal_3078=-1;
var uLocal_3079=0;
var uLocal_3080=0;
var uLocal_3081=0;
var uLocal_3082=0;
var uLocal_3083=0;
var uLocal_3084=0;
var uLocal_3085=0;
var uLocal_3086=0;
var uLocal_3087=0;
var uLocal_3088=0;
var uLocal_3089=0;
var uLocal_3090=0;
var uLocal_3091=0;
var uLocal_3092=0;
var uLocal_3093=0;
var uLocal_3094=0;
var uLocal_3095=0;
var uLocal_3096=0;
var uLocal_3097=0;
var uLocal_3098=0;
var uLocal_3099=0;
var uLocal_3100=0;
var uLocal_3101=0;
var uLocal_3102=0;
var uLocal_3103=0;
var uLocal_3104=0;
var uLocal_3105=0;
var uLocal_3106=0;
var uLocal_3107=0;
var uLocal_3108=1065353216;
var uLocal_3109=0;
var uLocal_3110=0;
var uLocal_3111=0;
var uLocal_3112=0;
var uLocal_3113=0;
var uLocal_3114=0;
var uLocal_3115=0;
var uLocal_3116=0;
var uLocal_3117=0;
var uLocal_3118=0;
var uLocal_3119=0;
var uLocal_3120=0;
var uLocal_3121=0;
var uLocal_3122=0;
var uLocal_3123=0;
var uLocal_3124=0;
var uLocal_3125=0;
var uLocal_3126=0;
var uLocal_3127=0;
var uLocal_3128=0;
var uLocal_3129=0;
var uLocal_3130=0;
var uLocal_3131=0;
var uLocal_3132=16;
var uLocal_3133=0;
var uLocal_3134=-1082130432;
var uLocal_3135=0;
var uLocal_3136=-1082130432;
var uLocal_3137=0;
var uLocal_3138=-1082130432;
var uLocal_3139=0;
var uLocal_3140=-1082130432;
var uLocal_3141=0;
var uLocal_3142=-1082130432;
var uLocal_3143=0;
var uLocal_3144=-1082130432;
var uLocal_3145=0;
var uLocal_3146=-1082130432;
var uLocal_3147=0;
var uLocal_3148=-1082130432;
var uLocal_3149=0;
var uLocal_3150=-1082130432;
var uLocal_3151=0;
var uLocal_3152=-1082130432;
var uLocal_3153=0;
var uLocal_3154=-1082130432;
var uLocal_3155=0;
var uLocal_3156=-1082130432;
var uLocal_3157=0;
var uLocal_3158=-1082130432;
var uLocal_3159=0;
var uLocal_3160=-1082130432;
var uLocal_3161=0;
var uLocal_3162=-1082130432;
var uLocal_3163=0;
var uLocal_3164=-1082130432;
var uLocal_3165=16;
var uLocal_3166=0;
var uLocal_3167=-1082130432;
var uLocal_3168=0;
var uLocal_3169=-1082130432;
var uLocal_3170=0;
var uLocal_3171=-1082130432;
var uLocal_3172=0;
var uLocal_3173=-1082130432;
var uLocal_3174=0;
var uLocal_3175=-1082130432;
var uLocal_3176=0;
var uLocal_3177=-1082130432;
var uLocal_3178=0;
var uLocal_3179=-1082130432;
var uLocal_3180=0;
var uLocal_3181=-1082130432;
var uLocal_3182=0;
var uLocal_3183=-1082130432;
var uLocal_3184=0;
var uLocal_3185=-1082130432;
var uLocal_3186=0;
var uLocal_3187=-1082130432;
var uLocal_3188=0;
var uLocal_3189=-1082130432;
var uLocal_3190=0;
var uLocal_3191=-1082130432;
var uLocal_3192=0;
var uLocal_3193=-1082130432;
var uLocal_3194=0;
var uLocal_3195=-1082130432;
var uLocal_3196=0;
var uLocal_3197=-1082130432;
var uLocal_3198=0;
var uLocal_3199=0;
var uLocal_3200=0;
var uLocal_3201=0;
var uLocal_3202=0;
var uLocal_3203=0;
var uLocal_3204=0;
var uLocal_3205=0;
var uLocal_3206=0;
var uLocal_3207=0;
var uLocal_3208=0;
var uLocal_3209=0;
var uLocal_3210=0;
var uLocal_3211=0;
var uLocal_3212=0;
var uLocal_3213=0;
var uLocal_3214=-1082130432;
var uLocal_3215=-1082130432;
var uLocal_3216=1;
var uLocal_3217=1;
var uLocal_3218=1;
var uLocal_3219=-1;
var uLocal_3220=-1;
var uLocal_3221=-1;
var uLocal_3222=0;
var uLocal_3223=0;
var uLocal_3224=0;
var uLocal_3225=0;
var uLocal_3226=2;
var uLocal_3227=0;
var uLocal_3228=0;
var uLocal_3229=2;
var uLocal_3230=0;
var uLocal_3231=0;
var uLocal_3232=20;
var uLocal_3233=0;
var uLocal_3234=0;
var uLocal_3235=0;
var uLocal_3236=-1;
var uLocal_3237=0;
var uLocal_3238=0;
var uLocal_3239=0;
var uLocal_3240=0;
var uLocal_3241=0;
var uLocal_3242=0;
var uLocal_3243=0;
var uLocal_3244=0;
var uLocal_3245=0;
var uLocal_3246=0;
var uLocal_3247=0;
var uLocal_3248=0;
var uLocal_3249=0;
var uLocal_3250=0;
var uLocal_3251=0;
var uLocal_3252=0;
var uLocal_3253=0;
var uLocal_3254=0;
var uLocal_3255=0;
var uLocal_3256=0;
var uLocal_3257=0;
var uLocal_3258=0;
var uLocal_3259=0;
var uLocal_3260=0;
var uLocal_3261=0;
var uLocal_3262=0;
var uLocal_3263=0;
var uLocal_3264=0;
var uLocal_3265=0;
var uLocal_3266=1065353216;
var uLocal_3267=0;
var uLocal_3268=0;
var uLocal_3269=0;
var uLocal_3270=0;
var uLocal_3271=0;
var uLocal_3272=0;
var uLocal_3273=0;
var uLocal_3274=0;
var uLocal_3275=0;
var uLocal_3276=0;
var uLocal_3277=0;
var uLocal_3278=0;
var uLocal_3279=0;
var uLocal_3280=0;
var uLocal_3281=0;
var uLocal_3282=0;
var uLocal_3283=0;
var uLocal_3284=0;
var uLocal_3285=0;
var uLocal_3286=0;
var uLocal_3287=0;
var uLocal_3288=0;
var uLocal_3289=0;
var uLocal_3290=0;
var uLocal_3291=0;
var uLocal_3292=0;
var uLocal_3293=-1;
var uLocal_3294=0;
var uLocal_3295=0;
var uLocal_3296=0;
var uLocal_3297=0;
var uLocal_3298=0;
var uLocal_3299=0;
var uLocal_3300=0;
var uLocal_3301=0;
var uLocal_3302=0;
var uLocal_3303=0;
var uLocal_3304=0;
var uLocal_3305=0;
var uLocal_3306=0;
var uLocal_3307=0;
var uLocal_3308=0;
var uLocal_3309=0;
var uLocal_3310=0;
var uLocal_3311=0;
var uLocal_3312=0;
var uLocal_3313=0;
var uLocal_3314=0;
var uLocal_3315=0;
var uLocal_3316=0;
var uLocal_3317=0;
var uLocal_3318=0;
var uLocal_3319=0;
var uLocal_3320=0;
var uLocal_3321=0;
var uLocal_3322=0;
var uLocal_3323=1065353216;
var uLocal_3324=0;
var uLocal_3325=0;
var uLocal_3326=0;
var uLocal_3327=0;
var uLocal_3328=0;
var uLocal_3329=0;
var uLocal_3330=0;
var uLocal_3331=0;
var uLocal_3332=0;
var uLocal_3333=0;
var uLocal_3334=0;
var uLocal_3335=0;
var uLocal_3336=0;
var uLocal_3337=0;
var uLocal_3338=0;
var uLocal_3339=0;
var uLocal_3340=0;
var uLocal_3341=0;
var uLocal_3342=0;
var uLocal_3343=0;
var uLocal_3344=0;
var uLocal_3345=0;
var uLocal_3346=0;
var uLocal_3347=0;
var uLocal_3348=0;
var uLocal_3349=0;
var uLocal_3350=-1;
var uLocal_3351=0;
var uLocal_3352=0;
var uLocal_3353=0;
var uLocal_3354=0;
var uLocal_3355=0;
var uLocal_3356=0;
var uLocal_3357=0;
var uLocal_3358=0;
var uLocal_3359=0;
var uLocal_3360=0;
var uLocal_3361=0;
var uLocal_3362=0;
var uLocal_3363=0;
var uLocal_3364=0;
var uLocal_3365=0;
var uLocal_3366=0;
var uLocal_3367=0;
var uLocal_3368=0;
var uLocal_3369=0;
var uLocal_3370=0;
var uLocal_3371=0;
var uLocal_3372=0;
var uLocal_3373=0;
var uLocal_3374=0;
var uLocal_3375=0;
var uLocal_3376=0;
var uLocal_3377=0;
var uLocal_3378=0;
var uLocal_3379=0;
var uLocal_3380=1065353216;
var uLocal_3381=0;
var uLocal_3382=0;
var uLocal_3383=0;
var uLocal_3384=0;
var uLocal_3385=0;
var uLocal_3386=0;
var uLocal_3387=0;
var uLocal_3388=0;
var uLocal_3389=0;
var uLocal_3390=0;
var uLocal_3391=0;
var uLocal_3392=0;
var uLocal_3393=0;
var uLocal_3394=0;
var uLocal_3395=0;
var uLocal_3396=0;
var uLocal_3397=0;
var uLocal_3398=0;
var uLocal_3399=0;
var uLocal_3400=0;
var uLocal_3401=0;
var uLocal_3402=0;
var uLocal_3403=0;
var uLocal_3404=0;
var uLocal_3405=0;
var uLocal_3406=0;
var uLocal_3407=-1;
var uLocal_3408=0;
var uLocal_3409=0;
var uLocal_3410=0;
var uLocal_3411=0;
var uLocal_3412=0;
var uLocal_3413=0;
var uLocal_3414=0;
var uLocal_3415=0;
var uLocal_3416=0;
var uLocal_3417=0;
var uLocal_3418=0;
var uLocal_3419=0;
var uLocal_3420=0;
var uLocal_3421=0;
var uLocal_3422=0;
var uLocal_3423=0;
var uLocal_3424=0;
var uLocal_3425=0;
var uLocal_3426=0;
var uLocal_3427=0;
var uLocal_3428=0;
var uLocal_3429=0;
var uLocal_3430=0;
var uLocal_3431=0;
var uLocal_3432=0;
var uLocal_3433=0;
var uLocal_3434=0;
var uLocal_3435=0;
var uLocal_3436=0;
var uLocal_3437=1065353216;
var uLocal_3438=0;
var uLocal_3439=0;
var uLocal_3440=0;
var uLocal_3441=0;
var uLocal_3442=0;
var uLocal_3443=0;
var uLocal_3444=0;
var uLocal_3445=0;
var uLocal_3446=0;
var uLocal_3447=0;
var uLocal_3448=0;
var uLocal_3449=0;
var uLocal_3450=0;
var uLocal_3451=0;
var uLocal_3452=0;
var uLocal_3453=0;
var uLocal_3454=0;
var uLocal_3455=0;
var uLocal_3456=0;
var uLocal_3457=0;
var uLocal_3458=0;
var uLocal_3459=0;
var uLocal_3460=0;
var uLocal_3461=0;
var uLocal_3462=0;
var uLocal_3463=0;
var uLocal_3464=-1;
var uLocal_3465=0;
var uLocal_3466=0;
var uLocal_3467=0;
var uLocal_3468=0;
var uLocal_3469=0;
var uLocal_3470=0;
var uLocal_3471=0;
var uLocal_3472=0;
var uLocal_3473=0;
var uLocal_3474=0;
var uLocal_3475=0;
var uLocal_3476=0;
var uLocal_3477=0;
var uLocal_3478=0;
var uLocal_3479=0;
var uLocal_3480=0;
var uLocal_3481=0;
var uLocal_3482=0;
var uLocal_3483=0;
var uLocal_3484=0;
var uLocal_3485=0;
var uLocal_3486=0;
var uLocal_3487=0;
var uLocal_3488=0;
var uLocal_3489=0;
var uLocal_3490=0;
var uLocal_3491=0;
var uLocal_3492=0;
var uLocal_3493=0;
var uLocal_3494=1065353216;
var uLocal_3495=0;
var uLocal_3496=0;
var uLocal_3497=0;
var uLocal_3498=0;
var uLocal_3499=0;
var uLocal_3500=0;
var uLocal_3501=0;
var uLocal_3502=0;
var uLocal_3503=0;
var uLocal_3504=0;
var uLocal_3505=0;
var uLocal_3506=0;
var uLocal_3507=0;
var uLocal_3508=0;
var uLocal_3509=0;
var uLocal_3510=0;
var uLocal_3511=0;
var uLocal_3512=0;
var uLocal_3513=0;
var uLocal_3514=0;
var uLocal_3515=0;
var uLocal_3516=0;
var uLocal_3517=0;
var uLocal_3518=0;
var uLocal_3519=0;
var uLocal_3520=0;
var uLocal_3521=-1;
var uLocal_3522=0;
var uLocal_3523=0;
var uLocal_3524=0;
var uLocal_3525=0;
var uLocal_3526=0;
var uLocal_3527=0;
var uLocal_3528=0;
var uLocal_3529=0;
var uLocal_3530=0;
var uLocal_3531=0;
var uLocal_3532=0;
var uLocal_3533=0;
var uLocal_3534=0;
var uLocal_3535=0;
var uLocal_3536=0;
var uLocal_3537=0;
var uLocal_3538=0;
var uLocal_3539=0;
var uLocal_3540=0;
var uLocal_3541=0;
var uLocal_3542=0;
var uLocal_3543=0;
var uLocal_3544=0;
var uLocal_3545=0;
var uLocal_3546=0;
var uLocal_3547=0;
var uLocal_3548=0;
var uLocal_3549=0;
var uLocal_3550=0;
var uLocal_3551=1065353216;
var uLocal_3552=0;
var uLocal_3553=0;
var uLocal_3554=0;
var uLocal_3555=0;
var uLocal_3556=0;
var uLocal_3557=0;
var uLocal_3558=0;
var uLocal_3559=0;
var uLocal_3560=0;
var uLocal_3561=0;
var uLocal_3562=0;
var uLocal_3563=0;
var uLocal_3564=0;
var uLocal_3565=0;
var uLocal_3566=0;
var uLocal_3567=0;
var uLocal_3568=0;
var uLocal_3569=0;
var uLocal_3570=0;
var uLocal_3571=0;
var uLocal_3572=0;
var uLocal_3573=0;
var uLocal_3574=0;
var uLocal_3575=0;
var uLocal_3576=0;
var uLocal_3577=0;
var uLocal_3578=-1;
var uLocal_3579=0;
var uLocal_3580=0;
var uLocal_3581=0;
var uLocal_3582=0;
var uLocal_3583=0;
var uLocal_3584=0;
var uLocal_3585=0;
var uLocal_3586=0;
var uLocal_3587=0;
var uLocal_3588=0;
var uLocal_3589=0;
var uLocal_3590=0;
var uLocal_3591=0;
var uLocal_3592=0;
var uLocal_3593=0;
var uLocal_3594=0;
var uLocal_3595=0;
var uLocal_3596=0;
var uLocal_3597=0;
var uLocal_3598=0;
var uLocal_3599=0;
var uLocal_3600=0;
var uLocal_3601=0;
var uLocal_3602=0;
var uLocal_3603=0;
var uLocal_3604=0;
var uLocal_3605=0;
var uLocal_3606=0;
var uLocal_3607=0;
var uLocal_3608=1065353216;
var uLocal_3609=0;
var uLocal_3610=0;
var uLocal_3611=0;
var uLocal_3612=0;
var uLocal_3613=0;
var uLocal_3614=0;
var uLocal_3615=0;
var uLocal_3616=0;
var uLocal_3617=0;
var uLocal_3618=0;
var uLocal_3619=0;
var uLocal_3620=0;
var uLocal_3621=0;
var uLocal_3622=0;
var uLocal_3623=0;
var uLocal_3624=0;
var uLocal_3625=0;
var uLocal_3626=0;
var uLocal_3627=0;
var uLocal_3628=0;
var uLocal_3629=0;
var uLocal_3630=0;
var uLocal_3631=0;
var uLocal_3632=0;
var uLocal_3633=0;
var uLocal_3634=0;
var uLocal_3635=-1;
var uLocal_3636=0;
var uLocal_3637=0;
var uLocal_3638=0;
var uLocal_3639=0;
var uLocal_3640=0;
var uLocal_3641=0;
var uLocal_3642=0;
var uLocal_3643=0;
var uLocal_3644=0;
var uLocal_3645=0;
var uLocal_3646=0;
var uLocal_3647=0;
var uLocal_3648=0;
var uLocal_3649=0;
var uLocal_3650=0;
var uLocal_3651=0;
var uLocal_3652=0;
var uLocal_3653=0;
var uLocal_3654=0;
var uLocal_3655=0;
var uLocal_3656=0;
var uLocal_3657=0;
var uLocal_3658=0;
var uLocal_3659=0;
var uLocal_3660=0;
var uLocal_3661=0;
var uLocal_3662=0;
var uLocal_3663=0;
var uLocal_3664=0;
var uLocal_3665=1065353216;
var uLocal_3666=0;
var uLocal_3667=0;
var uLocal_3668=0;
var uLocal_3669=0;
var uLocal_3670=0;
var uLocal_3671=0;
var uLocal_3672=0;
var uLocal_3673=0;
var uLocal_3674=0;
var uLocal_3675=0;
var uLocal_3676=0;
var uLocal_3677=0;
var uLocal_3678=0;
var uLocal_3679=0;
var uLocal_3680=0;
var uLocal_3681=0;
var uLocal_3682=0;
var uLocal_3683=0;
var uLocal_3684=0;
var uLocal_3685=0;
var uLocal_3686=0;
var uLocal_3687=0;
var uLocal_3688=0;
var uLocal_3689=0;
var uLocal_3690=0;
var uLocal_3691=0;
var uLocal_3692=-1;
var uLocal_3693=0;
var uLocal_3694=0;
var uLocal_3695=0;
var uLocal_3696=0;
var uLocal_3697=0;
var uLocal_3698=0;
var uLocal_3699=0;
var uLocal_3700=0;
var uLocal_3701=0;
var uLocal_3702=0;
var uLocal_3703=0;
var uLocal_3704=0;
var uLocal_3705=0;
var uLocal_3706=0;
var uLocal_3707=0;
var uLocal_3708=0;
var uLocal_3709=0;
var uLocal_3710=0;
var uLocal_3711=0;
var uLocal_3712=0;
var uLocal_3713=0;
var uLocal_3714=0;
var uLocal_3715=0;
var uLocal_3716=0;
var uLocal_3717=0;
var uLocal_3718=0;
var uLocal_3719=0;
var uLocal_3720=0;
var uLocal_3721=0;
var uLocal_3722=1065353216;
var uLocal_3723=0;
var uLocal_3724=0;
var uLocal_3725=0;
var uLocal_3726=0;
var uLocal_3727=0;
var uLocal_3728=0;
var uLocal_3729=0;
var uLocal_3730=0;
var uLocal_3731=0;
var uLocal_3732=0;
var uLocal_3733=0;
var uLocal_3734=0;
var uLocal_3735=0;
var uLocal_3736=0;
var uLocal_3737=0;
var uLocal_3738=0;
var uLocal_3739=0;
var uLocal_3740=0;
var uLocal_3741=0;
var uLocal_3742=0;
var uLocal_3743=0;
var uLocal_3744=0;
var uLocal_3745=0;
var uLocal_3746=0;
var uLocal_3747=0;
var uLocal_3748=0;
var uLocal_3749=-1;
var uLocal_3750=0;
var uLocal_3751=0;
var uLocal_3752=0;
var uLocal_3753=0;
var uLocal_3754=0;
var uLocal_3755=0;
var uLocal_3756=0;
var uLocal_3757=0;
var uLocal_3758=0;
var uLocal_3759=0;
var uLocal_3760=0;
var uLocal_3761=0;
var uLocal_3762=0;
var uLocal_3763=0;
var uLocal_3764=0;
var uLocal_3765=0;
var uLocal_3766=0;
var uLocal_3767=0;
var uLocal_3768=0;
var uLocal_3769=0;
var uLocal_3770=0;
var uLocal_3771=0;
var uLocal_3772=0;
var uLocal_3773=0;
var uLocal_3774=0;
var uLocal_3775=0;
var uLocal_3776=0;
var uLocal_3777=0;
var uLocal_3778=0;
var uLocal_3779=1065353216;
var uLocal_3780=0;
var uLocal_3781=0;
var uLocal_3782=0;
var uLocal_3783=0;
var uLocal_3784=0;
var uLocal_3785=0;
var uLocal_3786=0;
var uLocal_3787=0;
var uLocal_3788=0;
var uLocal_3789=0;
var uLocal_3790=0;
var uLocal_3791=0;
var uLocal_3792=0;
var uLocal_3793=0;
var uLocal_3794=0;
var uLocal_3795=0;
var uLocal_3796=0;
var uLocal_3797=0;
var uLocal_3798=0;
var uLocal_3799=0;
var uLocal_3800=0;
var uLocal_3801=0;
var uLocal_3802=0;
var uLocal_3803=0;
var uLocal_3804=0;
var uLocal_3805=0;
var uLocal_3806=-1;
var uLocal_3807=0;
var uLocal_3808=0;
var uLocal_3809=0;
var uLocal_3810=0;
var uLocal_3811=0;
var uLocal_3812=0;
var uLocal_3813=0;
var uLocal_3814=0;
var uLocal_3815=0;
var uLocal_3816=0;
var uLocal_3817=0;
var uLocal_3818=0;
var uLocal_3819=0;
var uLocal_3820=0;
var uLocal_3821=0;
var uLocal_3822=0;
var uLocal_3823=0;
var uLocal_3824=0;
var uLocal_3825=0;
var uLocal_3826=0;
var uLocal_3827=0;
var uLocal_3828=0;
var uLocal_3829=0;
var uLocal_3830=0;
var uLocal_3831=0;
var uLocal_3832=0;
var uLocal_3833=0;
var uLocal_3834=0;
var uLocal_3835=0;
var uLocal_3836=1065353216;
var uLocal_3837=0;
var uLocal_3838=0;
var uLocal_3839=0;
var uLocal_3840=0;
var uLocal_3841=0;
var uLocal_3842=0;
var uLocal_3843=0;
var uLocal_3844=0;
var uLocal_3845=0;
var uLocal_3846=0;
var uLocal_3847=0;
var uLocal_3848=0;
var uLocal_3849=0;
var uLocal_3850=0;
var uLocal_3851=0;
var uLocal_3852=0;
var uLocal_3853=0;
var uLocal_3854=0;
var uLocal_3855=0;
var uLocal_3856=0;
var uLocal_3857=0;
var uLocal_3858=0;
var uLocal_3859=0;
var uLocal_3860=0;
var uLocal_3861=0;
var uLocal_3862=0;
var uLocal_3863=-1;
var uLocal_3864=0;
var uLocal_3865=0;
var uLocal_3866=0;
var uLocal_3867=0;
var uLocal_3868=0;
var uLocal_3869=0;
var uLocal_3870=0;
var uLocal_3871=0;
var uLocal_3872=0;
var uLocal_3873=0;
var uLocal_3874=0;
var uLocal_3875=0;
var uLocal_3876=0;
var uLocal_3877=0;
var uLocal_3878=0;
var uLocal_3879=0;
var uLocal_3880=0;
var uLocal_3881=0;
var uLocal_3882=0;
var uLocal_3883=0;
var uLocal_3884=0;
var uLocal_3885=0;
var uLocal_3886=0;
var uLocal_3887=0;
var uLocal_3888=0;
var uLocal_3889=0;
var uLocal_3890=0;
var uLocal_3891=0;
var uLocal_3892=0;
var uLocal_3893=1065353216;
var uLocal_3894=0;
var uLocal_3895=0;
var uLocal_3896=0;
var uLocal_3897=0;
var uLocal_3898=0;
var uLocal_3899=0;
var uLocal_3900=0;
var uLocal_3901=0;
var uLocal_3902=0;
var uLocal_3903=0;
var uLocal_3904=0;
var uLocal_3905=0;
var uLocal_3906=0;
var uLocal_3907=0;
var uLocal_3908=0;
var uLocal_3909=0;
var uLocal_3910=0;
var uLocal_3911=0;
var uLocal_3912=0;
var uLocal_3913=0;
var uLocal_3914=0;
var uLocal_3915=0;
var uLocal_3916=0;
var uLocal_3917=0;
var uLocal_3918=0;
var uLocal_3919=0;
var uLocal_3920=-1;
var uLocal_3921=0;
var uLocal_3922=0;
var uLocal_3923=0;
var uLocal_3924=0;
var uLocal_3925=0;
var uLocal_3926=0;
var uLocal_3927=0;
var uLocal_3928=0;
var uLocal_3929=0;
var uLocal_3930=0;
var uLocal_3931=0;
var uLocal_3932=0;
var uLocal_3933=0;
var uLocal_3934=0;
var uLocal_3935=0;
var uLocal_3936=0;
var uLocal_3937=0;
var uLocal_3938=0;
var uLocal_3939=0;
var uLocal_3940=0;
var uLocal_3941=0;
var uLocal_3942=0;
var uLocal_3943=0;
var uLocal_3944=0;
var uLocal_3945=0;
var uLocal_3946=0;
var uLocal_3947=0;
var uLocal_3948=0;
var uLocal_3949=0;
var uLocal_3950=1065353216;
var uLocal_3951=0;
var uLocal_3952=0;
var uLocal_3953=0;
var uLocal_3954=0;
var uLocal_3955=0;
var uLocal_3956=0;
var uLocal_3957=0;
var uLocal_3958=0;
var uLocal_3959=0;
var uLocal_3960=0;
var uLocal_3961=0;
var uLocal_3962=0;
var uLocal_3963=0;
var uLocal_3964=0;
var uLocal_3965=0;
var uLocal_3966=0;
var uLocal_3967=0;
var uLocal_3968=0;
var uLocal_3969=0;
var uLocal_3970=0;
var uLocal_3971=0;
var uLocal_3972=0;
var uLocal_3973=0;
var uLocal_3974=0;
var uLocal_3975=0;
var uLocal_3976=0;
var uLocal_3977=-1;
var uLocal_3978=0;
var uLocal_3979=0;
var uLocal_3980=0;
var uLocal_3981=0;
var uLocal_3982=0;
var uLocal_3983=0;
var uLocal_3984=0;
var uLocal_3985=0;
var uLocal_3986=0;
var uLocal_3987=0;
var uLocal_3988=0;
var uLocal_3989=0;
var uLocal_3990=0;
var uLocal_3991=0;
var uLocal_3992=0;
var uLocal_3993=0;
var uLocal_3994=0;
var uLocal_3995=0;
var uLocal_3996=0;
var uLocal_3997=0;
var uLocal_3998=0;
var uLocal_3999=0;
var uLocal_4000=0;
var uLocal_4001=0;
var uLocal_4002=0;
var uLocal_4003=0;
var uLocal_4004=0;
var uLocal_4005=0;
var uLocal_4006=0;
var uLocal_4007=1065353216;
var uLocal_4008=0;
var uLocal_4009=0;
var uLocal_4010=0;
var uLocal_4011=0;
var uLocal_4012=0;
var uLocal_4013=0;
var uLocal_4014=0;
var uLocal_4015=0;
var uLocal_4016=0;
var uLocal_4017=0;
var uLocal_4018=0;
var uLocal_4019=0;
var uLocal_4020=0;
var uLocal_4021=0;
var uLocal_4022=0;
var uLocal_4023=0;
var uLocal_4024=0;
var uLocal_4025=0;
var uLocal_4026=0;
var uLocal_4027=0;
var uLocal_4028=0;
var uLocal_4029=0;
var uLocal_4030=0;
var uLocal_4031=0;
var uLocal_4032=0;
var uLocal_4033=0;
var uLocal_4034=-1;
var uLocal_4035=0;
var uLocal_4036=0;
var uLocal_4037=0;
var uLocal_4038=0;
var uLocal_4039=0;
var uLocal_4040=0;
var uLocal_4041=0;
var uLocal_4042=0;
var uLocal_4043=0;
var uLocal_4044=0;
var uLocal_4045=0;
var uLocal_4046=0;
var uLocal_4047=0;
var uLocal_4048=0;
var uLocal_4049=0;
var uLocal_4050=0;
var uLocal_4051=0;
var uLocal_4052=0;
var uLocal_4053=0;
var uLocal_4054=0;
var uLocal_4055=0;
var uLocal_4056=0;
var uLocal_4057=0;
var uLocal_4058=0;
var uLocal_4059=0;
var uLocal_4060=0;
var uLocal_4061=0;
var uLocal_4062=0;
var uLocal_4063=0;
var uLocal_4064=1065353216;
var uLocal_4065=0;
var uLocal_4066=0;
var uLocal_4067=0;
var uLocal_4068=0;
var uLocal_4069=0;
var uLocal_4070=0;
var uLocal_4071=0;
var uLocal_4072=0;
var uLocal_4073=0;
var uLocal_4074=0;
var uLocal_4075=0;
var uLocal_4076=0;
var uLocal_4077=0;
var uLocal_4078=0;
var uLocal_4079=0;
var uLocal_4080=0;
var uLocal_4081=0;
var uLocal_4082=0;
var uLocal_4083=0;
var uLocal_4084=0;
var uLocal_4085=0;
var uLocal_4086=0;
var uLocal_4087=0;
var uLocal_4088=0;
var uLocal_4089=0;
var uLocal_4090=0;
var uLocal_4091=-1;
var uLocal_4092=0;
var uLocal_4093=0;
var uLocal_4094=0;
var uLocal_4095=0;
var uLocal_4096=0;
var uLocal_4097=0;
var uLocal_4098=0;
var uLocal_4099=0;
var uLocal_4100=0;
var uLocal_4101=0;
var uLocal_4102=0;
var uLocal_4103=0;
var uLocal_4104=0;
var uLocal_4105=0;
var uLocal_4106=0;
var uLocal_4107=0;
var uLocal_4108=0;
var uLocal_4109=0;
var uLocal_4110=0;
var uLocal_4111=0;
var uLocal_4112=0;
var uLocal_4113=0;
var uLocal_4114=0;
var uLocal_4115=0;
var uLocal_4116=0;
var uLocal_4117=0;
var uLocal_4118=0;
var uLocal_4119=0;
var uLocal_4120=0;
var uLocal_4121=1065353216;
var uLocal_4122=0;
var uLocal_4123=0;
var uLocal_4124=0;
var uLocal_4125=0;
var uLocal_4126=0;
var uLocal_4127=0;
var uLocal_4128=0;
var uLocal_4129=0;
var uLocal_4130=0;
var uLocal_4131=0;
var uLocal_4132=0;
var uLocal_4133=0;
var uLocal_4134=0;
var uLocal_4135=0;
var uLocal_4136=0;
var uLocal_4137=0;
var uLocal_4138=0;
var uLocal_4139=0;
var uLocal_4140=0;
var uLocal_4141=0;
var uLocal_4142=0;
var uLocal_4143=0;
var uLocal_4144=0;
var uLocal_4145=0;
var uLocal_4146=0;
var uLocal_4147=0;
var uLocal_4148=-1;
var uLocal_4149=0;
var uLocal_4150=0;
var uLocal_4151=0;
var uLocal_4152=0;
var uLocal_4153=0;
var uLocal_4154=0;
var uLocal_4155=0;
var uLocal_4156=0;
var uLocal_4157=0;
var uLocal_4158=0;
var uLocal_4159=0;
var uLocal_4160=0;
var uLocal_4161=0;
var uLocal_4162=0;
var uLocal_4163=0;
var uLocal_4164=0;
var uLocal_4165=0;
var uLocal_4166=0;
var uLocal_4167=0;
var uLocal_4168=0;
var uLocal_4169=0;
var uLocal_4170=0;
var uLocal_4171=0;
var uLocal_4172=0;
var uLocal_4173=0;
var uLocal_4174=0;
var uLocal_4175=0;
var uLocal_4176=0;
var uLocal_4177=0;
var uLocal_4178=1065353216;
var uLocal_4179=0;
var uLocal_4180=0;
var uLocal_4181=0;
var uLocal_4182=0;
var uLocal_4183=0;
var uLocal_4184=0;
var uLocal_4185=0;
var uLocal_4186=0;
var uLocal_4187=0;
var uLocal_4188=0;
var uLocal_4189=0;
var uLocal_4190=0;
var uLocal_4191=0;
var uLocal_4192=0;
var uLocal_4193=0;
var uLocal_4194=0;
var uLocal_4195=0;
var uLocal_4196=0;
var uLocal_4197=0;
var uLocal_4198=0;
var uLocal_4199=0;
var uLocal_4200=0;
var uLocal_4201=0;
var uLocal_4202=0;
var uLocal_4203=0;
var uLocal_4204=0;
var uLocal_4205=-1;
var uLocal_4206=0;
var uLocal_4207=0;
var uLocal_4208=0;
var uLocal_4209=0;
var uLocal_4210=0;
var uLocal_4211=0;
var uLocal_4212=0;
var uLocal_4213=0;
var uLocal_4214=0;
var uLocal_4215=0;
var uLocal_4216=0;
var uLocal_4217=0;
var uLocal_4218=0;
var uLocal_4219=0;
var uLocal_4220=0;
var uLocal_4221=0;
var uLocal_4222=0;
var uLocal_4223=0;
var uLocal_4224=0;
var uLocal_4225=0;
var uLocal_4226=0;
var uLocal_4227=0;
var uLocal_4228=0;
var uLocal_4229=0;
var uLocal_4230=0;
var uLocal_4231=0;
var uLocal_4232=0;
var uLocal_4233=0;
var uLocal_4234=0;
var uLocal_4235=1065353216;
var uLocal_4236=0;
var uLocal_4237=0;
var uLocal_4238=0;
var uLocal_4239=0;
var uLocal_4240=0;
var uLocal_4241=0;
var uLocal_4242=0;
var uLocal_4243=0;
var uLocal_4244=0;
var uLocal_4245=0;
var uLocal_4246=0;
var uLocal_4247=0;
var uLocal_4248=0;
var uLocal_4249=0;
var uLocal_4250=0;
var uLocal_4251=0;
var uLocal_4252=0;
var uLocal_4253=0;
var uLocal_4254=0;
var uLocal_4255=0;
var uLocal_4256=0;
var uLocal_4257=0;
var uLocal_4258=0;
var uLocal_4259=0;
var uLocal_4260=0;
var uLocal_4261=0;
var uLocal_4262=-1;
var uLocal_4263=0;
var uLocal_4264=0;
var uLocal_4265=0;
var uLocal_4266=0;
var uLocal_4267=0;
var uLocal_4268=0;
var uLocal_4269=0;
var uLocal_4270=0;
var uLocal_4271=0;
var uLocal_4272=0;
var uLocal_4273=0;
var uLocal_4274=0;
var uLocal_4275=0;
var uLocal_4276=0;
var uLocal_4277=0;
var uLocal_4278=0;
var uLocal_4279=0;
var uLocal_4280=0;
var uLocal_4281=0;
var uLocal_4282=0;
var uLocal_4283=0;
var uLocal_4284=0;
var uLocal_4285=0;
var uLocal_4286=0;
var uLocal_4287=0;
var uLocal_4288=0;
var uLocal_4289=0;
var uLocal_4290=0;
var uLocal_4291=0;
var uLocal_4292=1065353216;
var uLocal_4293=0;
var uLocal_4294=0;
var uLocal_4295=0;
var uLocal_4296=0;
var uLocal_4297=0;
var uLocal_4298=0;
var uLocal_4299=0;
var uLocal_4300=0;
var uLocal_4301=0;
var uLocal_4302=0;
var uLocal_4303=0;
var uLocal_4304=0;
var uLocal_4305=0;
var uLocal_4306=0;
var uLocal_4307=0;
var uLocal_4308=0;
var uLocal_4309=0;
var uLocal_4310=0;
var uLocal_4311=0;
var uLocal_4312=0;
var uLocal_4313=0;
var uLocal_4314=0;
var uLocal_4315=0;
var uLocal_4316=0;
var uLocal_4317=0;
var uLocal_4318=0;
var uLocal_4319=-1;
var uLocal_4320=0;
var uLocal_4321=0;
var uLocal_4322=0;
var uLocal_4323=0;
var uLocal_4324=0;
var uLocal_4325=0;
var uLocal_4326=0;
var uLocal_4327=0;
var uLocal_4328=0;
var uLocal_4329=0;
var uLocal_4330=0;
var uLocal_4331=0;
var uLocal_4332=0;
var uLocal_4333=0;
var uLocal_4334=0;
var uLocal_4335=0;
var uLocal_4336=0;
var uLocal_4337=0;
var uLocal_4338=0;
var uLocal_4339=0;
var uLocal_4340=0;
var uLocal_4341=0;
var uLocal_4342=0;
var uLocal_4343=0;
var uLocal_4344=0;
var uLocal_4345=0;
var uLocal_4346=0;
var uLocal_4347=0;
var uLocal_4348=0;
var uLocal_4349=1065353216;
var uLocal_4350=0;
var uLocal_4351=0;
var uLocal_4352=0;
var uLocal_4353=0;
var uLocal_4354=0;
var uLocal_4355=0;
var uLocal_4356=0;
var uLocal_4357=0;
var uLocal_4358=0;
var uLocal_4359=0;
var uLocal_4360=0;
var uLocal_4361=0;
var uLocal_4362=0;
var uLocal_4363=0;
var uLocal_4364=0;
var uLocal_4365=0;
var uLocal_4366=0;
var uLocal_4367=0;
var uLocal_4368=0;
var uLocal_4369=0;
var uLocal_4370=0;
var uLocal_4371=0;
var uLocal_4372=0;
var uLocal_4373=16;
var uLocal_4374=0;
var uLocal_4375=-1082130432;
var uLocal_4376=0;
var uLocal_4377=-1082130432;
var uLocal_4378=0;
var uLocal_4379=-1082130432;
var uLocal_4380=0;
var uLocal_4381=-1082130432;
var uLocal_4382=0;
var uLocal_4383=-1082130432;
var uLocal_4384=0;
var uLocal_4385=-1082130432;
var uLocal_4386=0;
var uLocal_4387=-1082130432;
var uLocal_4388=0;
var uLocal_4389=-1082130432;
var uLocal_4390=0;
var uLocal_4391=-1082130432;
var uLocal_4392=0;
var uLocal_4393=-1082130432;
var uLocal_4394=0;
var uLocal_4395=-1082130432;
var uLocal_4396=0;
var uLocal_4397=-1082130432;
var uLocal_4398=0;
var uLocal_4399=-1082130432;
var uLocal_4400=0;
var uLocal_4401=-1082130432;
var uLocal_4402=0;
var uLocal_4403=-1082130432;
var uLocal_4404=0;
var uLocal_4405=-1082130432;
var uLocal_4406=16;
var uLocal_4407=0;
var uLocal_4408=-1082130432;
var uLocal_4409=0;
var uLocal_4410=-1082130432;
var uLocal_4411=0;
var uLocal_4412=-1082130432;
var uLocal_4413=0;
var uLocal_4414=-1082130432;
var uLocal_4415=0;
var uLocal_4416=-1082130432;
var uLocal_4417=0;
var uLocal_4418=-1082130432;
var uLocal_4419=0;
var uLocal_4420=-1082130432;
var uLocal_4421=0;
var uLocal_4422=-1082130432;
var uLocal_4423=0;
var uLocal_4424=-1082130432;
var uLocal_4425=0;
var uLocal_4426=-1082130432;
var uLocal_4427=0;
var uLocal_4428=-1082130432;
var uLocal_4429=0;
var uLocal_4430=-1082130432;
var uLocal_4431=0;
var uLocal_4432=-1082130432;
var uLocal_4433=0;
var uLocal_4434=-1082130432;
var uLocal_4435=0;
var uLocal_4436=-1082130432;
var uLocal_4437=0;
var uLocal_4438=-1082130432;
var uLocal_4439=0;
var uLocal_4440=0;
var uLocal_4441=0;
var uLocal_4442=0;
var uLocal_4443=0;
var uLocal_4444=0;
var uLocal_4445=0;
var uLocal_4446=0;
var uLocal_4447=0;
var uLocal_4448=0;
var uLocal_4449=0;
var uLocal_4450=0;
var uLocal_4451=0;
var uLocal_4452=0;
var uLocal_4453=0;
var uLocal_4454=0;
var uLocal_4455=-1082130432;
var uLocal_4456=-1082130432;
var uLocal_4457=1;
var uLocal_4458=1;
var uLocal_4459=1;
var uLocal_4460=-1;
var uLocal_4461=-1;
var uLocal_4462=-1;
var uLocal_4463=0;
var uLocal_4464=0;
var uLocal_4465=0;
var uLocal_4466=0;
var uLocal_4467=2;
var uLocal_4468=0;
var uLocal_4469=0;
var uLocal_4470=2;
var uLocal_4471=0;
var uLocal_4472=0;
var uLocal_4473=20;
var uLocal_4474=0;
var uLocal_4475=0;
var uLocal_4476=0;
var uLocal_4477=-1;
var uLocal_4478=0;
var uLocal_4479=0;
var uLocal_4480=0;
var uLocal_4481=0;
var uLocal_4482=0;
var uLocal_4483=0;
var uLocal_4484=0;
var uLocal_4485=0;
var uLocal_4486=0;
var uLocal_4487=0;
var uLocal_4488=0;
var uLocal_4489=0;
var uLocal_4490=0;
var uLocal_4491=0;
var uLocal_4492=0;
var uLocal_4493=0;
var uLocal_4494=0;
var uLocal_4495=0;
var uLocal_4496=0;
var uLocal_4497=0;
var uLocal_4498=0;
var uLocal_4499=0;
var uLocal_4500=0;
var uLocal_4501=0;
var uLocal_4502=0;
var uLocal_4503=0;
var uLocal_4504=0;
var uLocal_4505=0;
var uLocal_4506=0;
var uLocal_4507=1065353216;
var uLocal_4508=0;
var uLocal_4509=0;
var uLocal_4510=0;
var uLocal_4511=0;
var uLocal_4512=0;
var uLocal_4513=0;
var uLocal_4514=0;
var uLocal_4515=0;
var uLocal_4516=0;
var uLocal_4517=0;
var uLocal_4518=0;
var uLocal_4519=0;
var uLocal_4520=0;
var uLocal_4521=0;
var uLocal_4522=0;
var uLocal_4523=0;
var uLocal_4524=0;
var uLocal_4525=0;
var uLocal_4526=0;
var uLocal_4527=0;
var uLocal_4528=0;
var uLocal_4529=0;
var uLocal_4530=0;
var uLocal_4531=0;
var uLocal_4532=0;
var uLocal_4533=0;
var uLocal_4534=-1;
var uLocal_4535=0;
var uLocal_4536=0;
var uLocal_4537=0;
var uLocal_4538=0;
var uLocal_4539=0;
var uLocal_4540=0;
var uLocal_4541=0;
var uLocal_4542=0;
var uLocal_4543=0;
var uLocal_4544=0;
var uLocal_4545=0;
var uLocal_4546=0;
var uLocal_4547=0;
var uLocal_4548=0;
var uLocal_4549=0;
var uLocal_4550=0;
var uLocal_4551=0;
var uLocal_4552=0;
var uLocal_4553=0;
var uLocal_4554=0;
var uLocal_4555=0;
var uLocal_4556=0;
var uLocal_4557=0;
var uLocal_4558=0;
var uLocal_4559=0;
var uLocal_4560=0;
var uLocal_4561=0;
var uLocal_4562=0;
var uLocal_4563=0;
var uLocal_4564=1065353216;
var uLocal_4565=0;
var uLocal_4566=0;
var uLocal_4567=0;
var uLocal_4568=0;
var uLocal_4569=0;
var uLocal_4570=0;
var uLocal_4571=0;
var uLocal_4572=0;
var uLocal_4573=0;
var uLocal_4574=0;
var uLocal_4575=0;
var uLocal_4576=0;
var uLocal_4577=0;
var uLocal_4578=0;
var uLocal_4579=0;
var uLocal_4580=0;
var uLocal_4581=0;
var uLocal_4582=0;
var uLocal_4583=0;
var uLocal_4584=0;
var uLocal_4585=0;
var uLocal_4586=0;
var uLocal_4587=0;
var uLocal_4588=0;
var uLocal_4589=0;
var uLocal_4590=0;
var uLocal_4591=-1;
var uLocal_4592=0;
var uLocal_4593=0;
var uLocal_4594=0;
var uLocal_4595=0;
var uLocal_4596=0;
var uLocal_4597=0;
var uLocal_4598=0;
var uLocal_4599=0;
var uLocal_4600=0;
var uLocal_4601=0;
var uLocal_4602=0;
var uLocal_4603=0;
var uLocal_4604=0;
var uLocal_4605=0;
var uLocal_4606=0;
var uLocal_4607=0;
var uLocal_4608=0;
var uLocal_4609=0;
var uLocal_4610=0;
var uLocal_4611=0;
var uLocal_4612=0;
var uLocal_4613=0;
var uLocal_4614=0;
var uLocal_4615=0;
var uLocal_4616=0;
var uLocal_4617=0;
var uLocal_4618=0;
var uLocal_4619=0;
var uLocal_4620=0;
var uLocal_4621=1065353216;
var uLocal_4622=0;
var uLocal_4623=0;
var uLocal_4624=0;
var uLocal_4625=0;
var uLocal_4626=0;
var uLocal_4627=0;
var uLocal_4628=0;
var uLocal_4629=0;
var uLocal_4630=0;
var uLocal_4631=0;
var uLocal_4632=0;
var uLocal_4633=0;
var uLocal_4634=0;
var uLocal_4635=0;
var uLocal_4636=0;
var uLocal_4637=0;
var uLocal_4638=0;
var uLocal_4639=0;
var uLocal_4640=0;
var uLocal_4641=0;
var uLocal_4642=0;
var uLocal_4643=0;
var uLocal_4644=0;
var uLocal_4645=0;
var uLocal_4646=0;
var uLocal_4647=0;
var uLocal_4648=-1;
var uLocal_4649=0;
var uLocal_4650=0;
var uLocal_4651=0;
var uLocal_4652=0;
var uLocal_4653=0;
var uLocal_4654=0;
var uLocal_4655=0;
var uLocal_4656=0;
var uLocal_4657=0;
var uLocal_4658=0;
var uLocal_4659=0;
var uLocal_4660=0;
var uLocal_4661=0;
var uLocal_4662=0;
var uLocal_4663=0;
var uLocal_4664=0;
var uLocal_4665=0;
var uLocal_4666=0;
var uLocal_4667=0;
var uLocal_4668=0;
var uLocal_4669=0;
var uLocal_4670=0;
var uLocal_4671=0;
var uLocal_4672=0;
var uLocal_4673=0;
var uLocal_4674=0;
var uLocal_4675=0;
var uLocal_4676=0;
var uLocal_4677=0;
var uLocal_4678=1065353216;
var uLocal_4679=0;
var uLocal_4680=0;
var uLocal_4681=0;
var uLocal_4682=0;
var uLocal_4683=0;
var uLocal_4684=0;
var uLocal_4685=0;
var uLocal_4686=0;
var uLocal_4687=0;
var uLocal_4688=0;
var uLocal_4689=0;
var uLocal_4690=0;
var uLocal_4691=0;
var uLocal_4692=0;
var uLocal_4693=0;
var uLocal_4694=0;
var uLocal_4695=0;
var uLocal_4696=0;
var uLocal_4697=0;
var uLocal_4698=0;
var uLocal_4699=0;
var uLocal_4700=0;
var uLocal_4701=0;
var uLocal_4702=0;
var uLocal_4703=0;
var uLocal_4704=0;
var uLocal_4705=-1;
var uLocal_4706=0;
var uLocal_4707=0;
var uLocal_4708=0;
var uLocal_4709=0;
var uLocal_4710=0;
var uLocal_4711=0;
var uLocal_4712=0;
var uLocal_4713=0;
var uLocal_4714=0;
var uLocal_4715=0;
var uLocal_4716=0;
var uLocal_4717=0;
var uLocal_4718=0;
var uLocal_4719=0;
var uLocal_4720=0;
var uLocal_4721=0;
var uLocal_4722=0;
var uLocal_4723=0;
var uLocal_4724=0;
var uLocal_4725=0;
var uLocal_4726=0;
var uLocal_4727=0;
var uLocal_4728=0;
var uLocal_4729=0;
var uLocal_4730=0;
var uLocal_4731=0;
var uLocal_4732=0;
var uLocal_4733=0;
var uLocal_4734=0;
var uLocal_4735=1065353216;
var uLocal_4736=0;
var uLocal_4737=0;
var uLocal_4738=0;
var uLocal_4739=0;
var uLocal_4740=0;
var uLocal_4741=0;
var uLocal_4742=0;
var uLocal_4743=0;
var uLocal_4744=0;
var uLocal_4745=0;
var uLocal_4746=0;
var uLocal_4747=0;
var uLocal_4748=0;
var uLocal_4749=0;
var uLocal_4750=0;
var uLocal_4751=0;
var uLocal_4752=0;
var uLocal_4753=0;
var uLocal_4754=0;
var uLocal_4755=0;
var uLocal_4756=0;
var uLocal_4757=0;
var uLocal_4758=0;
var uLocal_4759=0;
var uLocal_4760=0;
var uLocal_4761=0;
var uLocal_4762=-1;
var uLocal_4763=0;
var uLocal_4764=0;
var uLocal_4765=0;
var uLocal_4766=0;
var uLocal_4767=0;
var uLocal_4768=0;
var uLocal_4769=0;
var uLocal_4770=0;
var uLocal_4771=0;
var uLocal_4772=0;
var uLocal_4773=0;
var uLocal_4774=0;
var uLocal_4775=0;
var uLocal_4776=0;
var uLocal_4777=0;
var uLocal_4778=0;
var uLocal_4779=0;
var uLocal_4780=0;
var uLocal_4781=0;
var uLocal_4782=0;
var uLocal_4783=0;
var uLocal_4784=0;
var uLocal_4785=0;
var uLocal_4786=0;
var uLocal_4787=0;
var uLocal_4788=0;
var uLocal_4789=0;
var uLocal_4790=0;
var uLocal_4791=0;
var uLocal_4792=1065353216;
var uLocal_4793=0;
var uLocal_4794=0;
var uLocal_4795=0;
var uLocal_4796=0;
var uLocal_4797=0;
var uLocal_4798=0;
var uLocal_4799=0;
var uLocal_4800=0;
var uLocal_4801=0;
var uLocal_4802=0;
var uLocal_4803=0;
var uLocal_4804=0;
var uLocal_4805=0;
var uLocal_4806=0;
var uLocal_4807=0;
var uLocal_4808=0;
var uLocal_4809=0;
var uLocal_4810=0;
var uLocal_4811=0;
var uLocal_4812=0;
var uLocal_4813=0;
var uLocal_4814=0;
var uLocal_4815=0;
var uLocal_4816=0;
var uLocal_4817=0;
var uLocal_4818=0;
var uLocal_4819=-1;
var uLocal_4820=0;
var uLocal_4821=0;
var uLocal_4822=0;
var uLocal_4823=0;
var uLocal_4824=0;
var uLocal_4825=0;
var uLocal_4826=0;
var uLocal_4827=0;
var uLocal_4828=0;
var uLocal_4829=0;
var uLocal_4830=0;
var uLocal_4831=0;
var uLocal_4832=0;
var uLocal_4833=0;
var uLocal_4834=0;
var uLocal_4835=0;
var uLocal_4836=0;
var uLocal_4837=0;
var uLocal_4838=0;
var uLocal_4839=0;
var uLocal_4840=0;
var uLocal_4841=0;
var uLocal_4842=0;
var uLocal_4843=0;
var uLocal_4844=0;
var uLocal_4845=0;
var uLocal_4846=0;
var uLocal_4847=0;
var uLocal_4848=0;
var uLocal_4849=1065353216;
var uLocal_4850=0;
var uLocal_4851=0;
var uLocal_4852=0;
var uLocal_4853=0;
var uLocal_4854=0;
var uLocal_4855=0;
var uLocal_4856=0;
var uLocal_4857=0;
var uLocal_4858=0;
var uLocal_4859=0;
var uLocal_4860=0;
var uLocal_4861=0;
var uLocal_4862=0;
var uLocal_4863=0;
var uLocal_4864=0;
var uLocal_4865=0;
var uLocal_4866=0;
var uLocal_4867=0;
var uLocal_4868=0;
var uLocal_4869=0;
var uLocal_4870=0;
var uLocal_4871=0;
var uLocal_4872=0;
var uLocal_4873=0;
var uLocal_4874=0;
var uLocal_4875=0;
var uLocal_4876=-1;
var uLocal_4877=0;
var uLocal_4878=0;
var uLocal_4879=0;
var uLocal_4880=0;
var uLocal_4881=0;
var uLocal_4882=0;
var uLocal_4883=0;
var uLocal_4884=0;
var uLocal_4885=0;
var uLocal_4886=0;
var uLocal_4887=0;
var uLocal_4888=0;
var uLocal_4889=0;
var uLocal_4890=0;
var uLocal_4891=0;
var uLocal_4892=0;
var uLocal_4893=0;
var uLocal_4894=0;
var uLocal_4895=0;
var uLocal_4896=0;
var uLocal_4897=0;
var uLocal_4898=0;
var uLocal_4899=0;
var uLocal_4900=0;
var uLocal_4901=0;
var uLocal_4902=0;
var uLocal_4903=0;
var uLocal_4904=0;
var uLocal_4905=0;
var uLocal_4906=1065353216;
var uLocal_4907=0;
var uLocal_4908=0;
var uLocal_4909=0;
var uLocal_4910=0;
var uLocal_4911=0;
var uLocal_4912=0;
var uLocal_4913=0;
var uLocal_4914=0;
var uLocal_4915=0;
var uLocal_4916=0;
var uLocal_4917=0;
var uLocal_4918=0;
var uLocal_4919=0;
var uLocal_4920=0;
var uLocal_4921=0;
var uLocal_4922=0;
var uLocal_4923=0;
var uLocal_4924=0;
var uLocal_4925=0;
var uLocal_4926=0;
var uLocal_4927=0;
var uLocal_4928=0;
var uLocal_4929=0;
var uLocal_4930=0;
var uLocal_4931=0;
var uLocal_4932=0;
var uLocal_4933=-1;
var uLocal_4934=0;
var uLocal_4935=0;
var uLocal_4936=0;
var uLocal_4937=0;
var uLocal_4938=0;
var uLocal_4939=0;
var uLocal_4940=0;
var uLocal_4941=0;
var uLocal_4942=0;
var uLocal_4943=0;
var uLocal_4944=0;
var uLocal_4945=0;
var uLocal_4946=0;
var uLocal_4947=0;
var uLocal_4948=0;
var uLocal_4949=0;
var uLocal_4950=0;
var uLocal_4951=0;
var uLocal_4952=0;
var uLocal_4953=0;
var uLocal_4954=0;
var uLocal_4955=0;
var uLocal_4956=0;
var uLocal_4957=0;
var uLocal_4958=0;
var uLocal_4959=0;
var uLocal_4960=0;
var uLocal_4961=0;
var uLocal_4962=0;
var uLocal_4963=1065353216;
var uLocal_4964=0;
var uLocal_4965=0;
var uLocal_4966=0;
var uLocal_4967=0;
var uLocal_4968=0;
var uLocal_4969=0;
var uLocal_4970=0;
var uLocal_4971=0;
var uLocal_4972=0;
var uLocal_4973=0;
var uLocal_4974=0;
var uLocal_4975=0;
var uLocal_4976=0;
var uLocal_4977=0;
var uLocal_4978=0;
var uLocal_4979=0;
var uLocal_4980=0;
var uLocal_4981=0;
var uLocal_4982=0;
var uLocal_4983=0;
var uLocal_4984=0;
var uLocal_4985=0;
var uLocal_4986=0;
var uLocal_4987=0;
var uLocal_4988=0;
var uLocal_4989=0;
var uLocal_4990=-1;
var uLocal_4991=0;
var uLocal_4992=0;
var uLocal_4993=0;
var uLocal_4994=0;
var uLocal_4995=0;
var uLocal_4996=0;
var uLocal_4997=0;
var uLocal_4998=0;
var uLocal_4999=0;
var uLocal_5000=0;
var uLocal_5001=0;
var uLocal_5002=0;
var uLocal_5003=0;
var uLocal_5004=0;
var uLocal_5005=0;
var uLocal_5006=0;
var uLocal_5007=0;
var uLocal_5008=0;
var uLocal_5009=0;
var uLocal_5010=0;
var uLocal_5011=0;
var uLocal_5012=0;
var uLocal_5013=0;
var uLocal_5014=0;
var uLocal_5015=0;
var uLocal_5016=0;
var uLocal_5017=0;
var uLocal_5018=0;
var uLocal_5019=0;
var uLocal_5020=1065353216;
var uLocal_5021=0;
var uLocal_5022=0;
var uLocal_5023=0;
var uLocal_5024=0;
var uLocal_5025=0;
var uLocal_5026=0;
var uLocal_5027=0;
var uLocal_5028=0;
var uLocal_5029=0;
var uLocal_5030=0;
var uLocal_5031=0;
var uLocal_5032=0;
var uLocal_5033=0;
var uLocal_5034=0;
var uLocal_5035=0;
var uLocal_5036=0;
var uLocal_5037=0;
var uLocal_5038=0;
var uLocal_5039=0;
var uLocal_5040=0;
var uLocal_5041=0;
var uLocal_5042=0;
var uLocal_5043=0;
var uLocal_5044=0;
var uLocal_5045=0;
var uLocal_5046=0;
var uLocal_5047=-1;
var uLocal_5048=0;
var uLocal_5049=0;
var uLocal_5050=0;
var uLocal_5051=0;
var uLocal_5052=0;
var uLocal_5053=0;
var uLocal_5054=0;
var uLocal_5055=0;
var uLocal_5056=0;
var uLocal_5057=0;
var uLocal_5058=0;
var uLocal_5059=0;
var uLocal_5060=0;
var uLocal_5061=0;
var uLocal_5062=0;
var uLocal_5063=0;
var uLocal_5064=0;
var uLocal_5065=0;
var uLocal_5066=0;
var uLocal_5067=0;
var uLocal_5068=0;
var uLocal_5069=0;
var uLocal_5070=0;
var uLocal_5071=0;
var uLocal_5072=0;
var uLocal_5073=0;
var uLocal_5074=0;
var uLocal_5075=0;
var uLocal_5076=0;
var uLocal_5077=1065353216;
var uLocal_5078=0;
var uLocal_5079=0;
var uLocal_5080=0;
var uLocal_5081=0;
var uLocal_5082=0;
var uLocal_5083=0;
var uLocal_5084=0;
var uLocal_5085=0;
var uLocal_5086=0;
var uLocal_5087=0;
var uLocal_5088=0;
var uLocal_5089=0;
var uLocal_5090=0;
var uLocal_5091=0;
var uLocal_5092=0;
var uLocal_5093=0;
var uLocal_5094=0;
var uLocal_5095=0;
var uLocal_5096=0;
var uLocal_5097=0;
var uLocal_5098=0;
var uLocal_5099=0;
var uLocal_5100=0;
var uLocal_5101=0;
var uLocal_5102=0;
var uLocal_5103=0;
var uLocal_5104=-1;
var uLocal_5105=0;
var uLocal_5106=0;
var uLocal_5107=0;
var uLocal_5108=0;
var uLocal_5109=0;
var uLocal_5110=0;
var uLocal_5111=0;
var uLocal_5112=0;
var uLocal_5113=0;
var uLocal_5114=0;
var uLocal_5115=0;
var uLocal_5116=0;
var uLocal_5117=0;
var uLocal_5118=0;
var uLocal_5119=0;
var uLocal_5120=0;
var uLocal_5121=0;
var uLocal_5122=0;
var uLocal_5123=0;
var uLocal_5124=0;
var uLocal_5125=0;
var uLocal_5126=0;
var uLocal_5127=0;
var uLocal_5128=0;
var uLocal_5129=0;
var uLocal_5130=0;
var uLocal_5131=0;
var uLocal_5132=0;
var uLocal_5133=0;
var uLocal_5134=1065353216;
var uLocal_5135=0;
var uLocal_5136=0;
var uLocal_5137=0;
var uLocal_5138=0;
var uLocal_5139=0;
var uLocal_5140=0;
var uLocal_5141=0;
var uLocal_5142=0;
var uLocal_5143=0;
var uLocal_5144=0;
var uLocal_5145=0;
var uLocal_5146=0;
var uLocal_5147=0;
var uLocal_5148=0;
var uLocal_5149=0;
var uLocal_5150=0;
var uLocal_5151=0;
var uLocal_5152=0;
var uLocal_5153=0;
var uLocal_5154=0;
var uLocal_5155=0;
var uLocal_5156=0;
var uLocal_5157=0;
var uLocal_5158=0;
var uLocal_5159=0;
var uLocal_5160=0;
var uLocal_5161=-1;
var uLocal_5162=0;
var uLocal_5163=0;
var uLocal_5164=0;
var uLocal_5165=0;
var uLocal_5166=0;
var uLocal_5167=0;
var uLocal_5168=0;
var uLocal_5169=0;
var uLocal_5170=0;
var uLocal_5171=0;
var uLocal_5172=0;
var uLocal_5173=0;
var uLocal_5174=0;
var uLocal_5175=0;
var uLocal_5176=0;
var uLocal_5177=0;
var uLocal_5178=0;
var uLocal_5179=0;
var uLocal_5180=0;
var uLocal_5181=0;
var uLocal_5182=0;
var uLocal_5183=0;
var uLocal_5184=0;
var uLocal_5185=0;
var uLocal_5186=0;
var uLocal_5187=0;
var uLocal_5188=0;
var uLocal_5189=0;
var uLocal_5190=0;
var uLocal_5191=1065353216;
var uLocal_5192=0;
var uLocal_5193=0;
var uLocal_5194=0;
var uLocal_5195=0;
var uLocal_5196=0;
var uLocal_5197=0;
var uLocal_5198=0;
var uLocal_5199=0;
var uLocal_5200=0;
var uLocal_5201=0;
var uLocal_5202=0;
var uLocal_5203=0;
var uLocal_5204=0;
var uLocal_5205=0;
var uLocal_5206=0;
var uLocal_5207=0;
var uLocal_5208=0;
var uLocal_5209=0;
var uLocal_5210=0;
var uLocal_5211=0;
var uLocal_5212=0;
var uLocal_5213=0;
var uLocal_5214=0;
var uLocal_5215=0;
var uLocal_5216=0;
var uLocal_5217=0;
var uLocal_5218=-1;
var uLocal_5219=0;
var uLocal_5220=0;
var uLocal_5221=0;
var uLocal_5222=0;
var uLocal_5223=0;
var uLocal_5224=0;
var uLocal_5225=0;
var uLocal_5226=0;
var uLocal_5227=0;
var uLocal_5228=0;
var uLocal_5229=0;
var uLocal_5230=0;
var uLocal_5231=0;
var uLocal_5232=0;
var uLocal_5233=0;
var uLocal_5234=0;
var uLocal_5235=0;
var uLocal_5236=0;
var uLocal_5237=0;
var uLocal_5238=0;
var uLocal_5239=0;
var uLocal_5240=0;
var uLocal_5241=0;
var uLocal_5242=0;
var uLocal_5243=0;
var uLocal_5244=0;
var uLocal_5245=0;
var uLocal_5246=0;
var uLocal_5247=0;
var uLocal_5248=1065353216;
var uLocal_5249=0;
var uLocal_5250=0;
var uLocal_5251=0;
var uLocal_5252=0;
var uLocal_5253=0;
var uLocal_5254=0;
var uLocal_5255=0;
var uLocal_5256=0;
var uLocal_5257=0;
var uLocal_5258=0;
var uLocal_5259=0;
var uLocal_5260=0;
var uLocal_5261=0;
var uLocal_5262=0;
var uLocal_5263=0;
var uLocal_5264=0;
var uLocal_5265=0;
var uLocal_5266=0;
var uLocal_5267=0;
var uLocal_5268=0;
var uLocal_5269=0;
var uLocal_5270=0;
var uLocal_5271=0;
var uLocal_5272=0;
var uLocal_5273=0;
var uLocal_5274=0;
var uLocal_5275=-1;
var uLocal_5276=0;
var uLocal_5277=0;
var uLocal_5278=0;
var uLocal_5279=0;
var uLocal_5280=0;
var uLocal_5281=0;
var uLocal_5282=0;
var uLocal_5283=0;
var uLocal_5284=0;
var uLocal_5285=0;
var uLocal_5286=0;
var uLocal_5287=0;
var uLocal_5288=0;
var uLocal_5289=0;
var uLocal_5290=0;
var uLocal_5291=0;
var uLocal_5292=0;
var uLocal_5293=0;
var uLocal_5294=0;
var uLocal_5295=0;
var uLocal_5296=0;
var uLocal_5297=0;
var uLocal_5298=0;
var uLocal_5299=0;
var uLocal_5300=0;
var uLocal_5301=0;
var uLocal_5302=0;
var uLocal_5303=0;
var uLocal_5304=0;
var uLocal_5305=1065353216;
var uLocal_5306=0;
var uLocal_5307=0;
var uLocal_5308=0;
var uLocal_5309=0;
var uLocal_5310=0;
var uLocal_5311=0;
var uLocal_5312=0;
var uLocal_5313=0;
var uLocal_5314=0;
var uLocal_5315=0;
var uLocal_5316=0;
var uLocal_5317=0;
var uLocal_5318=0;
var uLocal_5319=0;
var uLocal_5320=0;
var uLocal_5321=0;
var uLocal_5322=0;
var uLocal_5323=0;
var uLocal_5324=0;
var uLocal_5325=0;
var uLocal_5326=0;
var uLocal_5327=0;
var uLocal_5328=0;
var uLocal_5329=0;
var uLocal_5330=0;
var uLocal_5331=0;
var uLocal_5332=-1;
var uLocal_5333=0;
var uLocal_5334=0;
var uLocal_5335=0;
var uLocal_5336=0;
var uLocal_5337=0;
var uLocal_5338=0;
var uLocal_5339=0;
var uLocal_5340=0;
var uLocal_5341=0;
var uLocal_5342=0;
var uLocal_5343=0;
var uLocal_5344=0;
var uLocal_5345=0;
var uLocal_5346=0;
var uLocal_5347=0;
var uLocal_5348=0;
var uLocal_5349=0;
var uLocal_5350=0;
var uLocal_5351=0;
var uLocal_5352=0;
var uLocal_5353=0;
var uLocal_5354=0;
var uLocal_5355=0;
var uLocal_5356=0;
var uLocal_5357=0;
var uLocal_5358=0;
var uLocal_5359=0;
var uLocal_5360=0;
var uLocal_5361=0;
var uLocal_5362=1065353216;
var uLocal_5363=0;
var uLocal_5364=0;
var uLocal_5365=0;
var uLocal_5366=0;
var uLocal_5367=0;
var uLocal_5368=0;
var uLocal_5369=0;
var uLocal_5370=0;
var uLocal_5371=0;
var uLocal_5372=0;
var uLocal_5373=0;
var uLocal_5374=0;
var uLocal_5375=0;
var uLocal_5376=0;
var uLocal_5377=0;
var uLocal_5378=0;
var uLocal_5379=0;
var uLocal_5380=0;
var uLocal_5381=0;
var uLocal_5382=0;
var uLocal_5383=0;
var uLocal_5384=0;
var uLocal_5385=0;
var uLocal_5386=0;
var uLocal_5387=0;
var uLocal_5388=0;
var uLocal_5389=-1;
var uLocal_5390=0;
var uLocal_5391=0;
var uLocal_5392=0;
var uLocal_5393=0;
var uLocal_5394=0;
var uLocal_5395=0;
var uLocal_5396=0;
var uLocal_5397=0;
var uLocal_5398=0;
var uLocal_5399=0;
var uLocal_5400=0;
var uLocal_5401=0;
var uLocal_5402=0;
var uLocal_5403=0;
var uLocal_5404=0;
var uLocal_5405=0;
var uLocal_5406=0;
var uLocal_5407=0;
var uLocal_5408=0;
var uLocal_5409=0;
var uLocal_5410=0;
var uLocal_5411=0;
var uLocal_5412=0;
var uLocal_5413=0;
var uLocal_5414=0;
var uLocal_5415=0;
var uLocal_5416=0;
var uLocal_5417=0;
var uLocal_5418=0;
var uLocal_5419=1065353216;
var uLocal_5420=0;
var uLocal_5421=0;
var uLocal_5422=0;
var uLocal_5423=0;
var uLocal_5424=0;
var uLocal_5425=0;
var uLocal_5426=0;
var uLocal_5427=0;
var uLocal_5428=0;
var uLocal_5429=0;
var uLocal_5430=0;
var uLocal_5431=0;
var uLocal_5432=0;
var uLocal_5433=0;
var uLocal_5434=0;
var uLocal_5435=0;
var uLocal_5436=0;
var uLocal_5437=0;
var uLocal_5438=0;
var uLocal_5439=0;
var uLocal_5440=0;
var uLocal_5441=0;
var uLocal_5442=0;
var uLocal_5443=0;
var uLocal_5444=0;
var uLocal_5445=0;
var uLocal_5446=-1;
var uLocal_5447=0;
var uLocal_5448=0;
var uLocal_5449=0;
var uLocal_5450=0;
var uLocal_5451=0;
var uLocal_5452=0;
var uLocal_5453=0;
var uLocal_5454=0;
var uLocal_5455=0;
var uLocal_5456=0;
var uLocal_5457=0;
var uLocal_5458=0;
var uLocal_5459=0;
var uLocal_5460=0;
var uLocal_5461=0;
var uLocal_5462=0;
var uLocal_5463=0;
var uLocal_5464=0;
var uLocal_5465=0;
var uLocal_5466=0;
var uLocal_5467=0;
var uLocal_5468=0;
var uLocal_5469=0;
var uLocal_5470=0;
var uLocal_5471=0;
var uLocal_5472=0;
var uLocal_5473=0;
var uLocal_5474=0;
var uLocal_5475=0;
var uLocal_5476=1065353216;
var uLocal_5477=0;
var uLocal_5478=0;
var uLocal_5479=0;
var uLocal_5480=0;
var uLocal_5481=0;
var uLocal_5482=0;
var uLocal_5483=0;
var uLocal_5484=0;
var uLocal_5485=0;
var uLocal_5486=0;
var uLocal_5487=0;
var uLocal_5488=0;
var uLocal_5489=0;
var uLocal_5490=0;
var uLocal_5491=0;
var uLocal_5492=0;
var uLocal_5493=0;
var uLocal_5494=0;
var uLocal_5495=0;
var uLocal_5496=0;
var uLocal_5497=0;
var uLocal_5498=0;
var uLocal_5499=0;
var uLocal_5500=0;
var uLocal_5501=0;
var uLocal_5502=0;
var uLocal_5503=-1;
var uLocal_5504=0;
var uLocal_5505=0;
var uLocal_5506=0;
var uLocal_5507=0;
var uLocal_5508=0;
var uLocal_5509=0;
var uLocal_5510=0;
var uLocal_5511=0;
var uLocal_5512=0;
var uLocal_5513=0;
var uLocal_5514=0;
var uLocal_5515=0;
var uLocal_5516=0;
var uLocal_5517=0;
var uLocal_5518=0;
var uLocal_5519=0;
var uLocal_5520=0;
var uLocal_5521=0;
var uLocal_5522=0;
var uLocal_5523=0;
var uLocal_5524=0;
var uLocal_5525=0;
var uLocal_5526=0;
var uLocal_5527=0;
var uLocal_5528=0;
var uLocal_5529=0;
var uLocal_5530=0;
var uLocal_5531=0;
var uLocal_5532=0;
var uLocal_5533=1065353216;
var uLocal_5534=0;
var uLocal_5535=0;
var uLocal_5536=0;
var uLocal_5537=0;
var uLocal_5538=0;
var uLocal_5539=0;
var uLocal_5540=0;
var uLocal_5541=0;
var uLocal_5542=0;
var uLocal_5543=0;
var uLocal_5544=0;
var uLocal_5545=0;
var uLocal_5546=0;
var uLocal_5547=0;
var uLocal_5548=0;
var uLocal_5549=0;
var uLocal_5550=0;
var uLocal_5551=0;
var uLocal_5552=0;
var uLocal_5553=0;
var uLocal_5554=0;
var uLocal_5555=0;
var uLocal_5556=0;
var uLocal_5557=0;
var uLocal_5558=0;
var uLocal_5559=0;
var uLocal_5560=-1;
var uLocal_5561=0;
var uLocal_5562=0;
var uLocal_5563=0;
var uLocal_5564=0;
var uLocal_5565=0;
var uLocal_5566=0;
var uLocal_5567=0;
var uLocal_5568=0;
var uLocal_5569=0;
var uLocal_5570=0;
var uLocal_5571=0;
var uLocal_5572=0;
var uLocal_5573=0;
var uLocal_5574=0;
var uLocal_5575=0;
var uLocal_5576=0;
var uLocal_5577=0;
var uLocal_5578=0;
var uLocal_5579=0;
var uLocal_5580=0;
var uLocal_5581=0;
var uLocal_5582=0;
var uLocal_5583=0;
var uLocal_5584=0;
var uLocal_5585=0;
var uLocal_5586=0;
var uLocal_5587=0;
var uLocal_5588=0;
var uLocal_5589=0;
var uLocal_5590=1065353216;
var uLocal_5591=0;
var uLocal_5592=0;
var uLocal_5593=0;
var uLocal_5594=0;
var uLocal_5595=0;
var uLocal_5596=0;
var uLocal_5597=0;
var uLocal_5598=0;
var uLocal_5599=0;
var uLocal_5600=0;
var uLocal_5601=0;
var uLocal_5602=0;
var uLocal_5603=0;
var uLocal_5604=0;
var uLocal_5605=0;
var uLocal_5606=0;
var uLocal_5607=0;
var uLocal_5608=0;
var uLocal_5609=0;
var uLocal_5610=0;
var uLocal_5611=0;
var uLocal_5612=0;
var uLocal_5613=0;
var uLocal_5614=16;
var uLocal_5615=0;
var uLocal_5616=-1082130432;
var uLocal_5617=0;
var uLocal_5618=-1082130432;
var uLocal_5619=0;
var uLocal_5620=-1082130432;
var uLocal_5621=0;
var uLocal_5622=-1082130432;
var uLocal_5623=0;
var uLocal_5624=-1082130432;
var uLocal_5625=0;
var uLocal_5626=-1082130432;
var uLocal_5627=0;
var uLocal_5628=-1082130432;
var uLocal_5629=0;
var uLocal_5630=-1082130432;
var uLocal_5631=0;
var uLocal_5632=-1082130432;
var uLocal_5633=0;
var uLocal_5634=-1082130432;
var uLocal_5635=0;
var uLocal_5636=-1082130432;
var uLocal_5637=0;
var uLocal_5638=-1082130432;
var uLocal_5639=0;
var uLocal_5640=-1082130432;
var uLocal_5641=0;
var uLocal_5642=-1082130432;
var uLocal_5643=0;
var uLocal_5644=-1082130432;
var uLocal_5645=0;
var uLocal_5646=-1082130432;
var uLocal_5647=16;
var uLocal_5648=0;
var uLocal_5649=-1082130432;
var uLocal_5650=0;
var uLocal_5651=-1082130432;
var uLocal_5652=0;
var uLocal_5653=-1082130432;
var uLocal_5654=0;
var uLocal_5655=-1082130432;
var uLocal_5656=0;
var uLocal_5657=-1082130432;
var uLocal_5658=0;
var uLocal_5659=-1082130432;
var uLocal_5660=0;
var uLocal_5661=-1082130432;
var uLocal_5662=0;
var uLocal_5663=-1082130432;
var uLocal_5664=0;
var uLocal_5665=-1082130432;
var uLocal_5666=0;
var uLocal_5667=-1082130432;
var uLocal_5668=0;
var uLocal_5669=-1082130432;
var uLocal_5670=0;
var uLocal_5671=-1082130432;
var uLocal_5672=0;
var uLocal_5673=-1082130432;
var uLocal_5674=0;
var uLocal_5675=-1082130432;
var uLocal_5676=0;
var uLocal_5677=-1082130432;
var uLocal_5678=0;
var uLocal_5679=-1082130432;
var uLocal_5680=0;
var uLocal_5681=0;
var uLocal_5682=0;
var uLocal_5683=0;
var uLocal_5684=0;
var uLocal_5685=0;
var uLocal_5686=0;
var uLocal_5687=0;
var uLocal_5688=0;
var uLocal_5689=0;
var uLocal_5690=0;
var uLocal_5691=0;
var uLocal_5692=0;
var uLocal_5693=0;
var uLocal_5694=0;
var uLocal_5695=0;
var uLocal_5696=-1082130432;
var uLocal_5697=-1082130432;
var uLocal_5698=1;
var uLocal_5699=1;
var uLocal_5700=1;
var uLocal_5701=-1;
var uLocal_5702=-1;
var uLocal_5703=-1;
var uLocal_5704=0;
var uLocal_5705=0;
var uLocal_5706=0;
var uLocal_5707=0;
var uLocal_5708=2;
var uLocal_5709=0;
var uLocal_5710=0;
var uLocal_5711=2;
var uLocal_5712=0;
var uLocal_5713=0;
var uLocal_5714=20;
var uLocal_5715=0;
var uLocal_5716=0;
var uLocal_5717=0;
var uLocal_5718=-1;
var uLocal_5719=0;
var uLocal_5720=0;
var uLocal_5721=0;
var uLocal_5722=0;
var uLocal_5723=0;
var uLocal_5724=0;
var uLocal_5725=0;
var uLocal_5726=0;
var uLocal_5727=0;
var uLocal_5728=0;
var uLocal_5729=0;
var uLocal_5730=0;
var uLocal_5731=0;
var uLocal_5732=0;
var uLocal_5733=0;
var uLocal_5734=0;
var uLocal_5735=0;
var uLocal_5736=0;
var uLocal_5737=0;
var uLocal_5738=0;
var uLocal_5739=0;
var uLocal_5740=0;
var uLocal_5741=0;
var uLocal_5742=0;
var uLocal_5743=0;
var uLocal_5744=0;
var uLocal_5745=0;
var uLocal_5746=0;
var uLocal_5747=0;
var uLocal_5748=1065353216;
var uLocal_5749=0;
var uLocal_5750=0;
var uLocal_5751=0;
var uLocal_5752=0;
var uLocal_5753=0;
var uLocal_5754=0;
var uLocal_5755=0;
var uLocal_5756=0;
var uLocal_5757=0;
var uLocal_5758=0;
var uLocal_5759=0;
var uLocal_5760=0;
var uLocal_5761=0;
var uLocal_5762=0;
var uLocal_5763=0;
var uLocal_5764=0;
var uLocal_5765=0;
var uLocal_5766=0;
var uLocal_5767=0;
var uLocal_5768=0;
var uLocal_5769=0;
var uLocal_5770=0;
var uLocal_5771=0;
var uLocal_5772=0;
var uLocal_5773=0;
var uLocal_5774=0;
var uLocal_5775=-1;
var uLocal_5776=0;
var uLocal_5777=0;
var uLocal_5778=0;
var uLocal_5779=0;
var uLocal_5780=0;
var uLocal_5781=0;
var uLocal_5782=0;
var uLocal_5783=0;
var uLocal_5784=0;
var uLocal_5785=0;
var uLocal_5786=0;
var uLocal_5787=0;
var uLocal_5788=0;
var uLocal_5789=0;
var uLocal_5790=0;
var uLocal_5791=0;
var uLocal_5792=0;
var uLocal_5793=0;
var uLocal_5794=0;
var uLocal_5795=0;
var uLocal_5796=0;
var uLocal_5797=0;
var uLocal_5798=0;
var uLocal_5799=0;
var uLocal_5800=0;
var uLocal_5801=0;
var uLocal_5802=0;
var uLocal_5803=0;
var uLocal_5804=0;
var uLocal_5805=1065353216;
var uLocal_5806=0;
var uLocal_5807=0;
var uLocal_5808=0;
var uLocal_5809=0;
var uLocal_5810=0;
var uLocal_5811=0;
var uLocal_5812=0;
var uLocal_5813=0;
var uLocal_5814=0;
var uLocal_5815=0;
var uLocal_5816=0;
var uLocal_5817=0;
var uLocal_5818=0;
var uLocal_5819=0;
var uLocal_5820=0;
var uLocal_5821=0;
var uLocal_5822=0;
var uLocal_5823=0;
var uLocal_5824=0;
var uLocal_5825=0;
var uLocal_5826=0;
var uLocal_5827=0;
var uLocal_5828=0;
var uLocal_5829=0;
var uLocal_5830=0;
var uLocal_5831=0;
var uLocal_5832=-1;
var uLocal_5833=0;
var uLocal_5834=0;
var uLocal_5835=0;
var uLocal_5836=0;
var uLocal_5837=0;
var uLocal_5838=0;
var uLocal_5839=0;
var uLocal_5840=0;
var uLocal_5841=0;
var uLocal_5842=0;
var uLocal_5843=0;
var uLocal_5844=0;
var uLocal_5845=0;
var uLocal_5846=0;
var uLocal_5847=0;
var uLocal_5848=0;
var uLocal_5849=0;
var uLocal_5850=0;
var uLocal_5851=0;
var uLocal_5852=0;
var uLocal_5853=0;
var uLocal_5854=0;
var uLocal_5855=0;
var uLocal_5856=0;
var uLocal_5857=0;
var uLocal_5858=0;
var uLocal_5859=0;
var uLocal_5860=0;
var uLocal_5861=0;
var uLocal_5862=1065353216;
var uLocal_5863=0;
var uLocal_5864=0;
var uLocal_5865=0;
var uLocal_5866=0;
var uLocal_5867=0;
var uLocal_5868=0;
var uLocal_5869=0;
var uLocal_5870=0;
var uLocal_5871=0;
var uLocal_5872=0;
var uLocal_5873=0;
var uLocal_5874=0;
var uLocal_5875=0;
var uLocal_5876=0;
var uLocal_5877=0;
var uLocal_5878=0;
var uLocal_5879=0;
var uLocal_5880=0;
var uLocal_5881=0;
var uLocal_5882=0;
var uLocal_5883=0;
var uLocal_5884=0;
var uLocal_5885=0;
var uLocal_5886=0;
var uLocal_5887=0;
var uLocal_5888=0;
var uLocal_5889=-1;
var uLocal_5890=0;
var uLocal_5891=0;
var uLocal_5892=0;
var uLocal_5893=0;
var uLocal_5894=0;
var uLocal_5895=0;
var uLocal_5896=0;
var uLocal_5897=0;
var uLocal_5898=0;
var uLocal_5899=0;
var uLocal_5900=0;
var uLocal_5901=0;
var uLocal_5902=0;
var uLocal_5903=0;
var uLocal_5904=0;
var uLocal_5905=0;
var uLocal_5906=0;
var uLocal_5907=0;
var uLocal_5908=0;
var uLocal_5909=0;
var uLocal_5910=0;
var uLocal_5911=0;
var uLocal_5912=0;
var uLocal_5913=0;
var uLocal_5914=0;
var uLocal_5915=0;
var uLocal_5916=0;
var uLocal_5917=0;
var uLocal_5918=0;
var uLocal_5919=1065353216;
var uLocal_5920=0;
var uLocal_5921=0;
var uLocal_5922=0;
var uLocal_5923=0;
var uLocal_5924=0;
var uLocal_5925=0;
var uLocal_5926=0;
var uLocal_5927=0;
var uLocal_5928=0;
var uLocal_5929=0;
var uLocal_5930=0;
var uLocal_5931=0;
var uLocal_5932=0;
var uLocal_5933=0;
var uLocal_5934=0;
var uLocal_5935=0;
var uLocal_5936=0;
var uLocal_5937=0;
var uLocal_5938=0;
var uLocal_5939=0;
var uLocal_5940=0;
var uLocal_5941=0;
var uLocal_5942=0;
var uLocal_5943=0;
var uLocal_5944=0;
var uLocal_5945=0;
var uLocal_5946=-1;
var uLocal_5947=0;
var uLocal_5948=0;
var uLocal_5949=0;
var uLocal_5950=0;
var uLocal_5951=0;
var uLocal_5952=0;
var uLocal_5953=0;
var uLocal_5954=0;
var uLocal_5955=0;
var uLocal_5956=0;
var uLocal_5957=0;
var uLocal_5958=0;
var uLocal_5959=0;
var uLocal_5960=0;
var uLocal_5961=0;
var uLocal_5962=0;
var uLocal_5963=0;
var uLocal_5964=0;
var uLocal_5965=0;
var uLocal_5966=0;
var uLocal_5967=0;
var uLocal_5968=0;
var uLocal_5969=0;
var uLocal_5970=0;
var uLocal_5971=0;
var uLocal_5972=0;
var uLocal_5973=0;
var uLocal_5974=0;
var uLocal_5975=0;
var uLocal_5976=1065353216;
var uLocal_5977=0;
var uLocal_5978=0;
var uLocal_5979=0;
var uLocal_5980=0;
var uLocal_5981=0;
var uLocal_5982=0;
var uLocal_5983=0;
var uLocal_5984=0;
var uLocal_5985=0;
var uLocal_5986=0;
var uLocal_5987=0;
var uLocal_5988=0;
var uLocal_5989=0;
var uLocal_5990=0;
var uLocal_5991=0;
var uLocal_5992=0;
var uLocal_5993=0;
var uLocal_5994=0;
var uLocal_5995=0;
var uLocal_5996=0;
var uLocal_5997=0;
var uLocal_5998=0;
var uLocal_5999=0;
var uLocal_6000=0;
var uLocal_6001=0;
var uLocal_6002=0;
var uLocal_6003=-1;
var uLocal_6004=0;
var uLocal_6005=0;
var uLocal_6006=0;
var uLocal_6007=0;
var uLocal_6008=0;
var uLocal_6009=0;
var uLocal_6010=0;
var uLocal_6011=0;
var uLocal_6012=0;
var uLocal_6013=0;
var uLocal_6014=0;
var uLocal_6015=0;
var uLocal_6016=0;
var uLocal_6017=0;
var uLocal_6018=0;
var uLocal_6019=0;
var uLocal_6020=0;
var uLocal_6021=0;
var uLocal_6022=0;
var uLocal_6023=0;
var uLocal_6024=0;
var uLocal_6025=0;
var uLocal_6026=0;
var uLocal_6027=0;
var uLocal_6028=0;
var uLocal_6029=0;
var uLocal_6030=0;
var uLocal_6031=0;
var uLocal_6032=0;
var uLocal_6033=1065353216;
var uLocal_6034=0;
var uLocal_6035=0;
var uLocal_6036=0;
var uLocal_6037=0;
var uLocal_6038=0;
var uLocal_6039=0;
var uLocal_6040=0;
var uLocal_6041=0;
var uLocal_6042=0;
var uLocal_6043=0;
var uLocal_6044=0;
var uLocal_6045=0;
var uLocal_6046=0;
var uLocal_6047=0;
var uLocal_6048=0;
var uLocal_6049=0;
var uLocal_6050=0;
var uLocal_6051=0;
var uLocal_6052=0;
var uLocal_6053=0;
var uLocal_6054=0;
var uLocal_6055=0;
var uLocal_6056=0;
var uLocal_6057=0;
var uLocal_6058=0;
var uLocal_6059=0;
var uLocal_6060=-1;
var uLocal_6061=0;
var uLocal_6062=0;
var uLocal_6063=0;
var uLocal_6064=0;
var uLocal_6065=0;
var uLocal_6066=0;
var uLocal_6067=0;
var uLocal_6068=0;
var uLocal_6069=0;
var uLocal_6070=0;
var uLocal_6071=0;
var uLocal_6072=0;
var uLocal_6073=0;
var uLocal_6074=0;
var uLocal_6075=0;
var uLocal_6076=0;
var uLocal_6077=0;
var uLocal_6078=0;
var uLocal_6079=0;
var uLocal_6080=0;
var uLocal_6081=0;
var uLocal_6082=0;
var uLocal_6083=0;
var uLocal_6084=0;
var uLocal_6085=0;
var uLocal_6086=0;
var uLocal_6087=0;
var uLocal_6088=0;
var uLocal_6089=0;
var uLocal_6090=1065353216;
var uLocal_6091=0;
var uLocal_6092=0;
var uLocal_6093=0;
var uLocal_6094=0;
var uLocal_6095=0;
var uLocal_6096=0;
var uLocal_6097=0;
var uLocal_6098=0;
var uLocal_6099=0;
var uLocal_6100=0;
var uLocal_6101=0;
var uLocal_6102=0;
var uLocal_6103=0;
var uLocal_6104=0;
var uLocal_6105=0;
var uLocal_6106=0;
var uLocal_6107=0;
var uLocal_6108=0;
var uLocal_6109=0;
var uLocal_6110=0;
var uLocal_6111=0;
var uLocal_6112=0;
var uLocal_6113=0;
var uLocal_6114=0;
var uLocal_6115=0;
var uLocal_6116=0;
var uLocal_6117=-1;
var uLocal_6118=0;
var uLocal_6119=0;
var uLocal_6120=0;
var uLocal_6121=0;
var uLocal_6122=0;
var uLocal_6123=0;
var uLocal_6124=0;
var uLocal_6125=0;
var uLocal_6126=0;
var uLocal_6127=0;
var uLocal_6128=0;
var uLocal_6129=0;
var uLocal_6130=0;
var uLocal_6131=0;
var uLocal_6132=0;
var uLocal_6133=0;
var uLocal_6134=0;
var uLocal_6135=0;
var uLocal_6136=0;
var uLocal_6137=0;
var uLocal_6138=0;
var uLocal_6139=0;
var uLocal_6140=0;
var uLocal_6141=0;
var uLocal_6142=0;
var uLocal_6143=0;
var uLocal_6144=0;
var uLocal_6145=0;
var uLocal_6146=0;
var uLocal_6147=1065353216;
var uLocal_6148=0;
var uLocal_6149=0;
var uLocal_6150=0;
var uLocal_6151=0;
var uLocal_6152=0;
var uLocal_6153=0;
var uLocal_6154=0;
var uLocal_6155=0;
var uLocal_6156=0;
var uLocal_6157=0;
var uLocal_6158=0;
var uLocal_6159=0;
var uLocal_6160=0;
var uLocal_6161=0;
var uLocal_6162=0;
var uLocal_6163=0;
var uLocal_6164=0;
var uLocal_6165=0;
var uLocal_6166=0;
var uLocal_6167=0;
var uLocal_6168=0;
var uLocal_6169=0;
var uLocal_6170=0;
var uLocal_6171=0;
var uLocal_6172=0;
var uLocal_6173=0;
var uLocal_6174=-1;
var uLocal_6175=0;
var uLocal_6176=0;
var uLocal_6177=0;
var uLocal_6178=0;
var uLocal_6179=0;
var uLocal_6180=0;
var uLocal_6181=0;
var uLocal_6182=0;
var uLocal_6183=0;
var uLocal_6184=0;
var uLocal_6185=0;
var uLocal_6186=0;
var uLocal_6187=0;
var uLocal_6188=0;
var uLocal_6189=0;
var uLocal_6190=0;
var uLocal_6191=0;
var uLocal_6192=0;
var uLocal_6193=0;
var uLocal_6194=0;
var uLocal_6195=0;
var uLocal_6196=0;
var uLocal_6197=0;
var uLocal_6198=0;
var uLocal_6199=0;
var uLocal_6200=0;
var uLocal_6201=0;
var uLocal_6202=0;
var uLocal_6203=0;
var uLocal_6204=1065353216;
var uLocal_6205=0;
var uLocal_6206=0;
var uLocal_6207=0;
var uLocal_6208=0;
var uLocal_6209=0;
var uLocal_6210=0;
var uLocal_6211=0;
var uLocal_6212=0;
var uLocal_6213=0;
var uLocal_6214=0;
var uLocal_6215=0;
var uLocal_6216=0;
var uLocal_6217=0;
var uLocal_6218=0;
var uLocal_6219=0;
var uLocal_6220=0;
var uLocal_6221=0;
var uLocal_6222=0;
var uLocal_6223=0;
var uLocal_6224=0;
var uLocal_6225=0;
var uLocal_6226=0;
var uLocal_6227=0;
var uLocal_6228=0;
var uLocal_6229=0;
var uLocal_6230=0;
var uLocal_6231=-1;
var uLocal_6232=0;
var uLocal_6233=0;
var uLocal_6234=0;
var uLocal_6235=0;
var uLocal_6236=0;
var uLocal_6237=0;
var uLocal_6238=0;
var uLocal_6239=0;
var uLocal_6240=0;
var uLocal_6241=0;
var uLocal_6242=0;
var uLocal_6243=0;
var uLocal_6244=0;
var uLocal_6245=0;
var uLocal_6246=0;
var uLocal_6247=0;
var uLocal_6248=0;
var uLocal_6249=0;
var uLocal_6250=0;
var uLocal_6251=0;
var uLocal_6252=0;
var uLocal_6253=0;
var uLocal_6254=0;
var uLocal_6255=0;
var uLocal_6256=0;
var uLocal_6257=0;
var uLocal_6258=0;
var uLocal_6259=0;
var uLocal_6260=0;
var uLocal_6261=1065353216;
var uLocal_6262=0;
var uLocal_6263=0;
var uLocal_6264=0;
var uLocal_6265=0;
var uLocal_6266=0;
var uLocal_6267=0;
var uLocal_6268=0;
var uLocal_6269=0;
var uLocal_6270=0;
var uLocal_6271=0;
var uLocal_6272=0;
var uLocal_6273=0;
var uLocal_6274=0;
var uLocal_6275=0;
var uLocal_6276=0;
var uLocal_6277=0;
var uLocal_6278=0;
var uLocal_6279=0;
var uLocal_6280=0;
var uLocal_6281=0;
var uLocal_6282=0;
var uLocal_6283=0;
var uLocal_6284=0;
var uLocal_6285=0;
var uLocal_6286=0;
var uLocal_6287=0;
var uLocal_6288=-1;
var uLocal_6289=0;
var uLocal_6290=0;
var uLocal_6291=0;
var uLocal_6292=0;
var uLocal_6293=0;
var uLocal_6294=0;
var uLocal_6295=0;
var uLocal_6296=0;
var uLocal_6297=0;
var uLocal_6298=0;
var uLocal_6299=0;
var uLocal_6300=0;
var uLocal_6301=0;
var uLocal_6302=0;
var uLocal_6303=0;
var uLocal_6304=0;
var uLocal_6305=0;
var uLocal_6306=0;
var uLocal_6307=0;
var uLocal_6308=0;
var uLocal_6309=0;
var uLocal_6310=0;
var uLocal_6311=0;
var uLocal_6312=0;
var uLocal_6313=0;
var uLocal_6314=0;
var uLocal_6315=0;
var uLocal_6316=0;
var uLocal_6317=0;
var uLocal_6318=1065353216;
var uLocal_6319=0;
var uLocal_6320=0;
var uLocal_6321=0;
var uLocal_6322=0;
var uLocal_6323=0;
var uLocal_6324=0;
var uLocal_6325=0;
var uLocal_6326=0;
var uLocal_6327=0;
var uLocal_6328=0;
var uLocal_6329=0;
var uLocal_6330=0;
var uLocal_6331=0;
var uLocal_6332=0;
var uLocal_6333=0;
var uLocal_6334=0;
var uLocal_6335=0;
var uLocal_6336=0;
var uLocal_6337=0;
var uLocal_6338=0;
var uLocal_6339=0;
var uLocal_6340=0;
var uLocal_6341=0;
var uLocal_6342=0;
var uLocal_6343=0;
var uLocal_6344=0;
var uLocal_6345=-1;
var uLocal_6346=0;
var uLocal_6347=0;
var uLocal_6348=0;
var uLocal_6349=0;
var uLocal_6350=0;
var uLocal_6351=0;
var uLocal_6352=0;
var uLocal_6353=0;
var uLocal_6354=0;
var uLocal_6355=0;
var uLocal_6356=0;
var uLocal_6357=0;
var uLocal_6358=0;
var uLocal_6359=0;
var uLocal_6360=0;
var uLocal_6361=0;
var uLocal_6362=0;
var uLocal_6363=0;
var uLocal_6364=0;
var uLocal_6365=0;
var uLocal_6366=0;
var uLocal_6367=0;
var uLocal_6368=0;
var uLocal_6369=0;
var uLocal_6370=0;
var uLocal_6371=0;
var uLocal_6372=0;
var uLocal_6373=0;
var uLocal_6374=0;
var uLocal_6375=1065353216;
var uLocal_6376=0;
var uLocal_6377=0;
var uLocal_6378=0;
var uLocal_6379=0;
var uLocal_6380=0;
var uLocal_6381=0;
var uLocal_6382=0;
var uLocal_6383=0;
var uLocal_6384=0;
var uLocal_6385=0;
var uLocal_6386=0;
var uLocal_6387=0;
var uLocal_6388=0;
var uLocal_6389=0;
var uLocal_6390=0;
var uLocal_6391=0;
var uLocal_6392=0;
var uLocal_6393=0;
var uLocal_6394=0;
var uLocal_6395=0;
var uLocal_6396=0;
var uLocal_6397=0;
var uLocal_6398=0;
var uLocal_6399=0;
var uLocal_6400=0;
var uLocal_6401=0;
var uLocal_6402=-1;
var uLocal_6403=0;
var uLocal_6404=0;
var uLocal_6405=0;
var uLocal_6406=0;
var uLocal_6407=0;
var uLocal_6408=0;
var uLocal_6409=0;
var uLocal_6410=0;
var uLocal_6411=0;
var uLocal_6412=0;
var uLocal_6413=0;
var uLocal_6414=0;
var uLocal_6415=0;
var uLocal_6416=0;
var uLocal_6417=0;
var uLocal_6418=0;
var uLocal_6419=0;
var uLocal_6420=0;
var uLocal_6421=0;
var uLocal_6422=0;
var uLocal_6423=0;
var uLocal_6424=0;
var uLocal_6425=0;
var uLocal_6426=0;
var uLocal_6427=0;
var uLocal_6428=0;
var uLocal_6429=0;
var uLocal_6430=0;
var uLocal_6431=0;
var uLocal_6432=1065353216;
var uLocal_6433=0;
var uLocal_6434=0;
var uLocal_6435=0;
var uLocal_6436=0;
var uLocal_6437=0;
var uLocal_6438=0;
var uLocal_6439=0;
var uLocal_6440=0;
var uLocal_6441=0;
var uLocal_6442=0;
var uLocal_6443=0;
var uLocal_6444=0;
var uLocal_6445=0;
var uLocal_6446=0;
var uLocal_6447=0;
var uLocal_6448=0;
var uLocal_6449=0;
var uLocal_6450=0;
var uLocal_6451=0;
var uLocal_6452=0;
var uLocal_6453=0;
var uLocal_6454=0;
var uLocal_6455=0;
var uLocal_6456=0;
var uLocal_6457=0;
var uLocal_6458=0;
var uLocal_6459=-1;
var uLocal_6460=0;
var uLocal_6461=0;
var uLocal_6462=0;
var uLocal_6463=0;
var uLocal_6464=0;
var uLocal_6465=0;
var uLocal_6466=0;
var uLocal_6467=0;
var uLocal_6468=0;
var uLocal_6469=0;
var uLocal_6470=0;
var uLocal_6471=0;
var uLocal_6472=0;
var uLocal_6473=0;
var uLocal_6474=0;
var uLocal_6475=0;
var uLocal_6476=0;
var uLocal_6477=0;
var uLocal_6478=0;
var uLocal_6479=0;
var uLocal_6480=0;
var uLocal_6481=0;
var uLocal_6482=0;
var uLocal_6483=0;
var uLocal_6484=0;
var uLocal_6485=0;
var uLocal_6486=0;
var uLocal_6487=0;
var uLocal_6488=0;
var uLocal_6489=1065353216;
var uLocal_6490=0;
var uLocal_6491=0;
var uLocal_6492=0;
var uLocal_6493=0;
var uLocal_6494=0;
var uLocal_6495=0;
var uLocal_6496=0;
var uLocal_6497=0;
var uLocal_6498=0;
var uLocal_6499=0;
var uLocal_6500=0;
var uLocal_6501=0;
var uLocal_6502=0;
var uLocal_6503=0;
var uLocal_6504=0;
var uLocal_6505=0;
var uLocal_6506=0;
var uLocal_6507=0;
var uLocal_6508=0;
var uLocal_6509=0;
var uLocal_6510=0;
var uLocal_6511=0;
var uLocal_6512=0;
var uLocal_6513=0;
var uLocal_6514=0;
var uLocal_6515=0;
var uLocal_6516=-1;
var uLocal_6517=0;
var uLocal_6518=0;
var uLocal_6519=0;
var uLocal_6520=0;
var uLocal_6521=0;
var uLocal_6522=0;
var uLocal_6523=0;
var uLocal_6524=0;
var uLocal_6525=0;
var uLocal_6526=0;
var uLocal_6527=0;
var uLocal_6528=0;
var uLocal_6529=0;
var uLocal_6530=0;
var uLocal_6531=0;
var uLocal_6532=0;
var uLocal_6533=0;
var uLocal_6534=0;
var uLocal_6535=0;
var uLocal_6536=0;
var uLocal_6537=0;
var uLocal_6538=0;
var uLocal_6539=0;
var uLocal_6540=0;
var uLocal_6541=0;
var uLocal_6542=0;
var uLocal_6543=0;
var uLocal_6544=0;
var uLocal_6545=0;
var uLocal_6546=1065353216;
var uLocal_6547=0;
var uLocal_6548=0;
var uLocal_6549=0;
var uLocal_6550=0;
var uLocal_6551=0;
var uLocal_6552=0;
var uLocal_6553=0;
var uLocal_6554=0;
var uLocal_6555=0;
var uLocal_6556=0;
var uLocal_6557=0;
var uLocal_6558=0;
var uLocal_6559=0;
var uLocal_6560=0;
var uLocal_6561=0;
var uLocal_6562=0;
var uLocal_6563=0;
var uLocal_6564=0;
var uLocal_6565=0;
var uLocal_6566=0;
var uLocal_6567=0;
var uLocal_6568=0;
var uLocal_6569=0;
var uLocal_6570=0;
var uLocal_6571=0;
var uLocal_6572=0;
var uLocal_6573=-1;
var uLocal_6574=0;
var uLocal_6575=0;
var uLocal_6576=0;
var uLocal_6577=0;
var uLocal_6578=0;
var uLocal_6579=0;
var uLocal_6580=0;
var uLocal_6581=0;
var uLocal_6582=0;
var uLocal_6583=0;
var uLocal_6584=0;
var uLocal_6585=0;
var uLocal_6586=0;
var uLocal_6587=0;
var uLocal_6588=0;
var uLocal_6589=0;
var uLocal_6590=0;
var uLocal_6591=0;
var uLocal_6592=0;
var uLocal_6593=0;
var uLocal_6594=0;
var uLocal_6595=0;
var uLocal_6596=0;
var uLocal_6597=0;
var uLocal_6598=0;
var uLocal_6599=0;
var uLocal_6600=0;
var uLocal_6601=0;
var uLocal_6602=0;
var uLocal_6603=1065353216;
var uLocal_6604=0;
var uLocal_6605=0;
var uLocal_6606=0;
var uLocal_6607=0;
var uLocal_6608=0;
var uLocal_6609=0;
var uLocal_6610=0;
var uLocal_6611=0;
var uLocal_6612=0;
var uLocal_6613=0;
var uLocal_6614=0;
var uLocal_6615=0;
var uLocal_6616=0;
var uLocal_6617=0;
var uLocal_6618=0;
var uLocal_6619=0;
var uLocal_6620=0;
var uLocal_6621=0;
var uLocal_6622=0;
var uLocal_6623=0;
var uLocal_6624=0;
var uLocal_6625=0;
var uLocal_6626=0;
var uLocal_6627=0;
var uLocal_6628=0;
var uLocal_6629=0;
var uLocal_6630=-1;
var uLocal_6631=0;
var uLocal_6632=0;
var uLocal_6633=0;
var uLocal_6634=0;
var uLocal_6635=0;
var uLocal_6636=0;
var uLocal_6637=0;
var uLocal_6638=0;
var uLocal_6639=0;
var uLocal_6640=0;
var uLocal_6641=0;
var uLocal_6642=0;
var uLocal_6643=0;
var uLocal_6644=0;
var uLocal_6645=0;
var uLocal_6646=0;
var uLocal_6647=0;
var uLocal_6648=0;
var uLocal_6649=0;
var uLocal_6650=0;
var uLocal_6651=0;
var uLocal_6652=0;
var uLocal_6653=0;
var uLocal_6654=0;
var uLocal_6655=0;
var uLocal_6656=0;
var uLocal_6657=0;
var uLocal_6658=0;
var uLocal_6659=0;
var uLocal_6660=1065353216;
var uLocal_6661=0;
var uLocal_6662=0;
var uLocal_6663=0;
var uLocal_6664=0;
var uLocal_6665=0;
var uLocal_6666=0;
var uLocal_6667=0;
var uLocal_6668=0;
var uLocal_6669=0;
var uLocal_6670=0;
var uLocal_6671=0;
var uLocal_6672=0;
var uLocal_6673=0;
var uLocal_6674=0;
var uLocal_6675=0;
var uLocal_6676=0;
var uLocal_6677=0;
var uLocal_6678=0;
var uLocal_6679=0;
var uLocal_6680=0;
var uLocal_6681=0;
var uLocal_6682=0;
var uLocal_6683=0;
var uLocal_6684=0;
var uLocal_6685=0;
var uLocal_6686=0;
var uLocal_6687=-1;
var uLocal_6688=0;
var uLocal_6689=0;
var uLocal_6690=0;
var uLocal_6691=0;
var uLocal_6692=0;
var uLocal_6693=0;
var uLocal_6694=0;
var uLocal_6695=0;
var uLocal_6696=0;
var uLocal_6697=0;
var uLocal_6698=0;
var uLocal_6699=0;
var uLocal_6700=0;
var uLocal_6701=0;
var uLocal_6702=0;
var uLocal_6703=0;
var uLocal_6704=0;
var uLocal_6705=0;
var uLocal_6706=0;
var uLocal_6707=0;
var uLocal_6708=0;
var uLocal_6709=0;
var uLocal_6710=0;
var uLocal_6711=0;
var uLocal_6712=0;
var uLocal_6713=0;
var uLocal_6714=0;
var uLocal_6715=0;
var uLocal_6716=0;
var uLocal_6717=1065353216;
var uLocal_6718=0;
var uLocal_6719=0;
var uLocal_6720=0;
var uLocal_6721=0;
var uLocal_6722=0;
var uLocal_6723=0;
var uLocal_6724=0;
var uLocal_6725=0;
var uLocal_6726=0;
var uLocal_6727=0;
var uLocal_6728=0;
var uLocal_6729=0;
var uLocal_6730=0;
var uLocal_6731=0;
var uLocal_6732=0;
var uLocal_6733=0;
var uLocal_6734=0;
var uLocal_6735=0;
var uLocal_6736=0;
var uLocal_6737=0;
var uLocal_6738=0;
var uLocal_6739=0;
var uLocal_6740=0;
var uLocal_6741=0;
var uLocal_6742=0;
var uLocal_6743=0;
var uLocal_6744=-1;
var uLocal_6745=0;
var uLocal_6746=0;
var uLocal_6747=0;
var uLocal_6748=0;
var uLocal_6749=0;
var uLocal_6750=0;
var uLocal_6751=0;
var uLocal_6752=0;
var uLocal_6753=0;
var uLocal_6754=0;
var uLocal_6755=0;
var uLocal_6756=0;
var uLocal_6757=0;
var uLocal_6758=0;
var uLocal_6759=0;
var uLocal_6760=0;
var uLocal_6761=0;
var uLocal_6762=0;
var uLocal_6763=0;
var uLocal_6764=0;
var uLocal_6765=0;
var uLocal_6766=0;
var uLocal_6767=0;
var uLocal_6768=0;
var uLocal_6769=0;
var uLocal_6770=0;
var uLocal_6771=0;
var uLocal_6772=0;
var uLocal_6773=0;
var uLocal_6774=1065353216;
var uLocal_6775=0;
var uLocal_6776=0;
var uLocal_6777=0;
var uLocal_6778=0;
var uLocal_6779=0;
var uLocal_6780=0;
var uLocal_6781=0;
var uLocal_6782=0;
var uLocal_6783=0;
var uLocal_6784=0;
var uLocal_6785=0;
var uLocal_6786=0;
var uLocal_6787=0;
var uLocal_6788=0;
var uLocal_6789=0;
var uLocal_6790=0;
var uLocal_6791=0;
var uLocal_6792=0;
var uLocal_6793=0;
var uLocal_6794=0;
var uLocal_6795=0;
var uLocal_6796=0;
var uLocal_6797=0;
var uLocal_6798=0;
var uLocal_6799=0;
var uLocal_6800=0;
var uLocal_6801=-1;
var uLocal_6802=0;
var uLocal_6803=0;
var uLocal_6804=0;
var uLocal_6805=0;
var uLocal_6806=0;
var uLocal_6807=0;
var uLocal_6808=0;
var uLocal_6809=0;
var uLocal_6810=0;
var uLocal_6811=0;
var uLocal_6812=0;
var uLocal_6813=0;
var uLocal_6814=0;
var uLocal_6815=0;
var uLocal_6816=0;
var uLocal_6817=0;
var uLocal_6818=0;
var uLocal_6819=0;
var uLocal_6820=0;
var uLocal_6821=0;
var uLocal_6822=0;
var uLocal_6823=0;
var uLocal_6824=0;
var uLocal_6825=0;
var uLocal_6826=0;
var uLocal_6827=0;
var uLocal_6828=0;
var uLocal_6829=0;
var uLocal_6830=0;
var uLocal_6831=1065353216;
var uLocal_6832=0;
var uLocal_6833=0;
var uLocal_6834=0;
var uLocal_6835=0;
var uLocal_6836=0;
var uLocal_6837=0;
var uLocal_6838=0;
var uLocal_6839=0;
var uLocal_6840=0;
var uLocal_6841=0;
var uLocal_6842=0;
var uLocal_6843=0;
var uLocal_6844=0;
var uLocal_6845=0;
var uLocal_6846=0;
var uLocal_6847=0;
var uLocal_6848=0;
var uLocal_6849=0;
var uLocal_6850=0;
var uLocal_6851=0;
var uLocal_6852=0;
var uLocal_6853=0;
var uLocal_6854=0;
var uLocal_6855=16;
var uLocal_6856=0;
var uLocal_6857=-1082130432;
var uLocal_6858=0;
var uLocal_6859=-1082130432;
var uLocal_6860=0;
var uLocal_6861=-1082130432;
var uLocal_6862=0;
var uLocal_6863=-1082130432;
var uLocal_6864=0;
var uLocal_6865=-1082130432;
var uLocal_6866=0;
var uLocal_6867=-1082130432;
var uLocal_6868=0;
var uLocal_6869=-1082130432;
var uLocal_6870=0;
var uLocal_6871=-1082130432;
var uLocal_6872=0;
var uLocal_6873=-1082130432;
var uLocal_6874=0;
var uLocal_6875=-1082130432;
var uLocal_6876=0;
var uLocal_6877=-1082130432;
var uLocal_6878=0;
var uLocal_6879=-1082130432;
var uLocal_6880=0;
var uLocal_6881=-1082130432;
var uLocal_6882=0;
var uLocal_6883=-1082130432;
var uLocal_6884=0;
var uLocal_6885=-1082130432;
var uLocal_6886=0;
var uLocal_6887=-1082130432;
var uLocal_6888=16;
var uLocal_6889=0;
var uLocal_6890=-1082130432;
var uLocal_6891=0;
var uLocal_6892=-1082130432;
var uLocal_6893=0;
var uLocal_6894=-1082130432;
var uLocal_6895=0;
var uLocal_6896=-1082130432;
var uLocal_6897=0;
var uLocal_6898=-1082130432;
var uLocal_6899=0;
var uLocal_6900=-1082130432;
var uLocal_6901=0;
var uLocal_6902=-1082130432;
var uLocal_6903=0;
var uLocal_6904=-1082130432;
var uLocal_6905=0;
var uLocal_6906=-1082130432;
var uLocal_6907=0;
var uLocal_6908=-1082130432;
var uLocal_6909=0;
var uLocal_6910=-1082130432;
var uLocal_6911=0;
var uLocal_6912=-1082130432;
var uLocal_6913=0;
var uLocal_6914=-1082130432;
var uLocal_6915=0;
var uLocal_6916=-1082130432;
var uLocal_6917=0;
var uLocal_6918=-1082130432;
var uLocal_6919=0;
var uLocal_6920=-1082130432;
var uLocal_6921=0;
var uLocal_6922=0;
var uLocal_6923=0;
var uLocal_6924=0;
var uLocal_6925=0;
var uLocal_6926=0;
var uLocal_6927=0;
var uLocal_6928=0;
var uLocal_6929=0;
var uLocal_6930=0;
var uLocal_6931=0;
var uLocal_6932=0;
var uLocal_6933=0;
var uLocal_6934=0;
var uLocal_6935=0;
var uLocal_6936=0;
var uLocal_6937=-1082130432;
var uLocal_6938=-1082130432;
var uLocal_6939=1;
var uLocal_6940=1;
var uLocal_6941=1;
var uLocal_6942=-1;
var uLocal_6943=-1;
var uLocal_6944=-1;
var uLocal_6945=0;
var uLocal_6946=0;
var uLocal_6947=0;
var uLocal_6948=0;
var uLocal_6949=2;
var uLocal_6950=0;
var uLocal_6951=0;
var uLocal_6952=2;
var uLocal_6953=0;
var uLocal_6954=0;
var uLocal_6955=20;
var uLocal_6956=0;
var uLocal_6957=0;
var uLocal_6958=0;
var uLocal_6959=-1;
var uLocal_6960=0;
var uLocal_6961=0;
var uLocal_6962=0;
var uLocal_6963=0;
var uLocal_6964=0;
var uLocal_6965=0;
var uLocal_6966=0;
var uLocal_6967=0;
var uLocal_6968=0;
var uLocal_6969=0;
var uLocal_6970=0;
var uLocal_6971=0;
var uLocal_6972=0;
var uLocal_6973=0;
var uLocal_6974=0;
var uLocal_6975=0;
var uLocal_6976=0;
var uLocal_6977=0;
var uLocal_6978=0;
var uLocal_6979=0;
var uLocal_6980=0;
var uLocal_6981=0;
var uLocal_6982=0;
var uLocal_6983=0;
var uLocal_6984=0;
var uLocal_6985=0;
var uLocal_6986=0;
var uLocal_6987=0;
var uLocal_6988=0;
var uLocal_6989=1065353216;
var uLocal_6990=0;
var uLocal_6991=0;
var uLocal_6992=0;
var uLocal_6993=0;
var uLocal_6994=0;
var uLocal_6995=0;
var uLocal_6996=0;
var uLocal_6997=0;
var uLocal_6998=0;
var uLocal_6999=0;
var uLocal_7000=0;
var uLocal_7001=0;
var uLocal_7002=0;
var uLocal_7003=0;
var uLocal_7004=0;
var uLocal_7005=0;
var uLocal_7006=0;
var uLocal_7007=0;
var uLocal_7008=0;
var uLocal_7009=0;
var uLocal_7010=0;
var uLocal_7011=0;
var uLocal_7012=0;
var uLocal_7013=0;
var uLocal_7014=0;
var uLocal_7015=0;
var uLocal_7016=-1;
var uLocal_7017=0;
var uLocal_7018=0;
var uLocal_7019=0;
var uLocal_7020=0;
var uLocal_7021=0;
var uLocal_7022=0;
var uLocal_7023=0;
var uLocal_7024=0;
var uLocal_7025=0;
var uLocal_7026=0;
var uLocal_7027=0;
var uLocal_7028=0;
var uLocal_7029=0;
var uLocal_7030=0;
var uLocal_7031=0;
var uLocal_7032=0;
var uLocal_7033=0;
var uLocal_7034=0;
var uLocal_7035=0;
var uLocal_7036=0;
var uLocal_7037=0;
var uLocal_7038=0;
var uLocal_7039=0;
var uLocal_7040=0;
var uLocal_7041=0;
var uLocal_7042=0;
var uLocal_7043=0;
var uLocal_7044=0;
var uLocal_7045=0;
var uLocal_7046=1065353216;
var uLocal_7047=0;
var uLocal_7048=0;
var uLocal_7049=0;
var uLocal_7050=0;
var uLocal_7051=0;
var uLocal_7052=0;
var uLocal_7053=0;
var uLocal_7054=0;
var uLocal_7055=0;
var uLocal_7056=0;
var uLocal_7057=0;
var uLocal_7058=0;
var uLocal_7059=0;
var uLocal_7060=0;
var uLocal_7061=0;
var uLocal_7062=0;
var uLocal_7063=0;
var uLocal_7064=0;
var uLocal_7065=0;
var uLocal_7066=0;
var uLocal_7067=0;
var uLocal_7068=0;
var uLocal_7069=0;
var uLocal_7070=0;
var uLocal_7071=0;
var uLocal_7072=0;
var uLocal_7073=-1;
var uLocal_7074=0;
var uLocal_7075=0;
var uLocal_7076=0;
var uLocal_7077=0;
var uLocal_7078=0;
var uLocal_7079=0;
var uLocal_7080=0;
var uLocal_7081=0;
var uLocal_7082=0;
var uLocal_7083=0;
var uLocal_7084=0;
var uLocal_7085=0;
var uLocal_7086=0;
var uLocal_7087=0;
var uLocal_7088=0;
var uLocal_7089=0;
var uLocal_7090=0;
var uLocal_7091=0;
var uLocal_7092=0;
var uLocal_7093=0;
var uLocal_7094=0;
var uLocal_7095=0;
var uLocal_7096=0;
var uLocal_7097=0;
var uLocal_7098=0;
var uLocal_7099=0;
var uLocal_7100=0;
var uLocal_7101=0;
var uLocal_7102=0;
var uLocal_7103=1065353216;
var uLocal_7104=0;
var uLocal_7105=0;
var uLocal_7106=0;
var uLocal_7107=0;
var uLocal_7108=0;
var uLocal_7109=0;
var uLocal_7110=0;
var uLocal_7111=0;
var uLocal_7112=0;
var uLocal_7113=0;
var uLocal_7114=0;
var uLocal_7115=0;
var uLocal_7116=0;
var uLocal_7117=0;
var uLocal_7118=0;
var uLocal_7119=0;
var uLocal_7120=0;
var uLocal_7121=0;
var uLocal_7122=0;
var uLocal_7123=0;
var uLocal_7124=0;
var uLocal_7125=0;
var uLocal_7126=0;
var uLocal_7127=0;
var uLocal_7128=0;
var uLocal_7129=0;
var uLocal_7130=-1;
var uLocal_7131=0;
var uLocal_7132=0;
var uLocal_7133=0;
var uLocal_7134=0;
var uLocal_7135=0;
var uLocal_7136=0;
var uLocal_7137=0;
var uLocal_7138=0;
var uLocal_7139=0;
var uLocal_7140=0;
var uLocal_7141=0;
var uLocal_7142=0;
var uLocal_7143=0;
var uLocal_7144=0;
var uLocal_7145=0;
var uLocal_7146=0;
var uLocal_7147=0;
var uLocal_7148=0;
var uLocal_7149=0;
var uLocal_7150=0;
var uLocal_7151=0;
var uLocal_7152=0;
var uLocal_7153=0;
var uLocal_7154=0;
var uLocal_7155=0;
var uLocal_7156=0;
var uLocal_7157=0;
var uLocal_7158=0;
var uLocal_7159=0;
var uLocal_7160=1065353216;
var uLocal_7161=0;
var uLocal_7162=0;
var uLocal_7163=0;
var uLocal_7164=0;
var uLocal_7165=0;
var uLocal_7166=0;
var uLocal_7167=0;
var uLocal_7168=0;
var uLocal_7169=0;
var uLocal_7170=0;
var uLocal_7171=0;
var uLocal_7172=0;
var uLocal_7173=0;
var uLocal_7174=0;
var uLocal_7175=0;
var uLocal_7176=0;
var uLocal_7177=0;
var uLocal_7178=0;
var uLocal_7179=0;
var uLocal_7180=0;
var uLocal_7181=0;
var uLocal_7182=0;
var uLocal_7183=0;
var uLocal_7184=0;
var uLocal_7185=0;
var uLocal_7186=0;
var uLocal_7187=-1;
var uLocal_7188=0;
var uLocal_7189=0;
var uLocal_7190=0;
var uLocal_7191=0;
var uLocal_7192=0;
var uLocal_7193=0;
var uLocal_7194=0;
var uLocal_7195=0;
var uLocal_7196=0;
var uLocal_7197=0;
var uLocal_7198=0;
var uLocal_7199=0;
var uLocal_7200=0;
var uLocal_7201=0;
var uLocal_7202=0;
var uLocal_7203=0;
var uLocal_7204=0;
var uLocal_7205=0;
var uLocal_7206=0;
var uLocal_7207=0;
var uLocal_7208=0;
var uLocal_7209=0;
var uLocal_7210=0;
var uLocal_7211=0;
var uLocal_7212=0;
var uLocal_7213=0;
var uLocal_7214=0;
var uLocal_7215=0;
var uLocal_7216=0;
var uLocal_7217=1065353216;
var uLocal_7218=0;
var uLocal_7219=0;
var uLocal_7220=0;
var uLocal_7221=0;
var uLocal_7222=0;
var uLocal_7223=0;
var uLocal_7224=0;
var uLocal_7225=0;
var uLocal_7226=0;
var uLocal_7227=0;
var uLocal_7228=0;
var uLocal_7229=0;
var uLocal_7230=0;
var uLocal_7231=0;
var uLocal_7232=0;
var uLocal_7233=0;
var uLocal_7234=0;
var uLocal_7235=0;
var uLocal_7236=0;
var uLocal_7237=0;
var uLocal_7238=0;
var uLocal_7239=0;
var uLocal_7240=0;
var uLocal_7241=0;
var uLocal_7242=0;
var uLocal_7243=0;
var uLocal_7244=-1;
var uLocal_7245=0;
var uLocal_7246=0;
var uLocal_7247=0;
var uLocal_7248=0;
var uLocal_7249=0;
var uLocal_7250=0;
var uLocal_7251=0;
var uLocal_7252=0;
var uLocal_7253=0;
var uLocal_7254=0;
var uLocal_7255=0;
var uLocal_7256=0;
var uLocal_7257=0;
var uLocal_7258=0;
var uLocal_7259=0;
var uLocal_7260=0;
var uLocal_7261=0;
var uLocal_7262=0;
var uLocal_7263=0;
var uLocal_7264=0;
var uLocal_7265=0;
var uLocal_7266=0;
var uLocal_7267=0;
var uLocal_7268=0;
var uLocal_7269=0;
var uLocal_7270=0;
var uLocal_7271=0;
var uLocal_7272=0;
var uLocal_7273=0;
var uLocal_7274=1065353216;
var uLocal_7275=0;
var uLocal_7276=0;
var uLocal_7277=0;
var uLocal_7278=0;
var uLocal_7279=0;
var uLocal_7280=0;
var uLocal_7281=0;
var uLocal_7282=0;
var uLocal_7283=0;
var uLocal_7284=0;
var uLocal_7285=0;
var uLocal_7286=0;
var uLocal_7287=0;
var uLocal_7288=0;
var uLocal_7289=0;
var uLocal_7290=0;
var uLocal_7291=0;
var uLocal_7292=0;
var uLocal_7293=0;
var uLocal_7294=0;
var uLocal_7295=0;
var uLocal_7296=0;
var uLocal_7297=0;
var uLocal_7298=0;
var uLocal_7299=0;
var uLocal_7300=0;
var uLocal_7301=-1;
var uLocal_7302=0;
var uLocal_7303=0;
var uLocal_7304=0;
var uLocal_7305=0;
var uLocal_7306=0;
var uLocal_7307=0;
var uLocal_7308=0;
var uLocal_7309=0;
var uLocal_7310=0;
var uLocal_7311=0;
var uLocal_7312=0;
var uLocal_7313=0;
var uLocal_7314=0;
var uLocal_7315=0;
var uLocal_7316=0;
var uLocal_7317=0;
var uLocal_7318=0;
var uLocal_7319=0;
var uLocal_7320=0;
var uLocal_7321=0;
var uLocal_7322=0;
var uLocal_7323=0;
var uLocal_7324=0;
var uLocal_7325=0;
var uLocal_7326=0;
var uLocal_7327=0;
var uLocal_7328=0;
var uLocal_7329=0;
var uLocal_7330=0;
var uLocal_7331=1065353216;
var uLocal_7332=0;
var uLocal_7333=0;
var uLocal_7334=0;
var uLocal_7335=0;
var uLocal_7336=0;
var uLocal_7337=0;
var uLocal_7338=0;
var uLocal_7339=0;
var uLocal_7340=0;
var uLocal_7341=0;
var uLocal_7342=0;
var uLocal_7343=0;
var uLocal_7344=0;
var uLocal_7345=0;
var uLocal_7346=0;
var uLocal_7347=0;
var uLocal_7348=0;
var uLocal_7349=0;
var uLocal_7350=0;
var uLocal_7351=0;
var uLocal_7352=0;
var uLocal_7353=0;
var uLocal_7354=0;
var uLocal_7355=0;
var uLocal_7356=0;
var uLocal_7357=0;
var uLocal_7358=-1;
var uLocal_7359=0;
var uLocal_7360=0;
var uLocal_7361=0;
var uLocal_7362=0;
var uLocal_7363=0;
var uLocal_7364=0;
var uLocal_7365=0;
var uLocal_7366=0;
var uLocal_7367=0;
var uLocal_7368=0;
var uLocal_7369=0;
var uLocal_7370=0;
var uLocal_7371=0;
var uLocal_7372=0;
var uLocal_7373=0;
var uLocal_7374=0;
var uLocal_7375=0;
var uLocal_7376=0;
var uLocal_7377=0;
var uLocal_7378=0;
var uLocal_7379=0;
var uLocal_7380=0;
var uLocal_7381=0;
var uLocal_7382=0;
var uLocal_7383=0;
var uLocal_7384=0;
var uLocal_7385=0;
var uLocal_7386=0;
var uLocal_7387=0;
var uLocal_7388=1065353216;
var uLocal_7389=0;
var uLocal_7390=0;
var uLocal_7391=0;
var uLocal_7392=0;
var uLocal_7393=0;
var uLocal_7394=0;
var uLocal_7395=0;
var uLocal_7396=0;
var uLocal_7397=0;
var uLocal_7398=0;
var uLocal_7399=0;
var uLocal_7400=0;
var uLocal_7401=0;
var uLocal_7402=0;
var uLocal_7403=0;
var uLocal_7404=0;
var uLocal_7405=0;
var uLocal_7406=0;
var uLocal_7407=0;
var uLocal_7408=0;
var uLocal_7409=0;
var uLocal_7410=0;
var uLocal_7411=0;
var uLocal_7412=0;
var uLocal_7413=0;
var uLocal_7414=0;
var uLocal_7415=-1;
var uLocal_7416=0;
var uLocal_7417=0;
var uLocal_7418=0;
var uLocal_7419=0;
var uLocal_7420=0;
var uLocal_7421=0;
var uLocal_7422=0;
var uLocal_7423=0;
var uLocal_7424=0;
var uLocal_7425=0;
var uLocal_7426=0;
var uLocal_7427=0;
var uLocal_7428=0;
var uLocal_7429=0;
var uLocal_7430=0;
var uLocal_7431=0;
var uLocal_7432=0;
var uLocal_7433=0;
var uLocal_7434=0;
var uLocal_7435=0;
var uLocal_7436=0;
var uLocal_7437=0;
var uLocal_7438=0;
var uLocal_7439=0;
var uLocal_7440=0;
var uLocal_7441=0;
var uLocal_7442=0;
var uLocal_7443=0;
var uLocal_7444=0;
var uLocal_7445=1065353216;
var uLocal_7446=0;
var uLocal_7447=0;
var uLocal_7448=0;
var uLocal_7449=0;
var uLocal_7450=0;
var uLocal_7451=0;
var uLocal_7452=0;
var uLocal_7453=0;
var uLocal_7454=0;
var uLocal_7455=0;
var uLocal_7456=0;
var uLocal_7457=0;
var uLocal_7458=0;
var uLocal_7459=0;
var uLocal_7460=0;
var uLocal_7461=0;
var uLocal_7462=0;
var uLocal_7463=0;
var uLocal_7464=0;
var uLocal_7465=0;
var uLocal_7466=0;
var uLocal_7467=0;
var uLocal_7468=0;
var uLocal_7469=0;
var uLocal_7470=0;
var uLocal_7471=0;
var uLocal_7472=-1;
var uLocal_7473=0;
var uLocal_7474=0;
var uLocal_7475=0;
var uLocal_7476=0;
var uLocal_7477=0;
var uLocal_7478=0;
var uLocal_7479=0;
var uLocal_7480=0;
var uLocal_7481=0;
var uLocal_7482=0;
var uLocal_7483=0;
var uLocal_7484=0;
var uLocal_7485=0;
var uLocal_7486=0;
var uLocal_7487=0;
var uLocal_7488=0;
var uLocal_7489=0;
var uLocal_7490=0;
var uLocal_7491=0;
var uLocal_7492=0;
var uLocal_7493=0;
var uLocal_7494=0;
var uLocal_7495=0;
var uLocal_7496=0;
var uLocal_7497=0;
var uLocal_7498=0;
var uLocal_7499=0;
var uLocal_7500=0;
var uLocal_7501=0;
var uLocal_7502=1065353216;
var uLocal_7503=0;
var uLocal_7504=0;
var uLocal_7505=0;
var uLocal_7506=0;
var uLocal_7507=0;
var uLocal_7508=0;
var uLocal_7509=0;
var uLocal_7510=0;
var uLocal_7511=0;
var uLocal_7512=0;
var uLocal_7513=0;
var uLocal_7514=0;
var uLocal_7515=0;
var uLocal_7516=0;
var uLocal_7517=0;
var uLocal_7518=0;
var uLocal_7519=0;
var uLocal_7520=0;
var uLocal_7521=0;
var uLocal_7522=0;
var uLocal_7523=0;
var uLocal_7524=0;
var uLocal_7525=0;
var uLocal_7526=0;
var uLocal_7527=0;
var uLocal_7528=0;
var uLocal_7529=-1;
var uLocal_7530=0;
var uLocal_7531=0;
var uLocal_7532=0;
var uLocal_7533=0;
var uLocal_7534=0;
var uLocal_7535=0;
var uLocal_7536=0;
var uLocal_7537=0;
var uLocal_7538=0;
var uLocal_7539=0;
var uLocal_7540=0;
var uLocal_7541=0;
var uLocal_7542=0;
var uLocal_7543=0;
var uLocal_7544=0;
var uLocal_7545=0;
var uLocal_7546=0;
var uLocal_7547=0;
var uLocal_7548=0;
var uLocal_7549=0;
var uLocal_7550=0;
var uLocal_7551=0;
var uLocal_7552=0;
var uLocal_7553=0;
var uLocal_7554=0;
var uLocal_7555=0;
var uLocal_7556=0;
var uLocal_7557=0;
var uLocal_7558=0;
var uLocal_7559=1065353216;
var uLocal_7560=0;
var uLocal_7561=0;
var uLocal_7562=0;
var uLocal_7563=0;
var uLocal_7564=0;
var uLocal_7565=0;
var uLocal_7566=0;
var uLocal_7567=0;
var uLocal_7568=0;
var uLocal_7569=0;
var uLocal_7570=0;
var uLocal_7571=0;
var uLocal_7572=0;
var uLocal_7573=0;
var uLocal_7574=0;
var uLocal_7575=0;
var uLocal_7576=0;
var uLocal_7577=0;
var uLocal_7578=0;
var uLocal_7579=0;
var uLocal_7580=0;
var uLocal_7581=0;
var uLocal_7582=0;
var uLocal_7583=0;
var uLocal_7584=0;
var uLocal_7585=0;
var uLocal_7586=-1;
var uLocal_7587=0;
var uLocal_7588=0;
var uLocal_7589=0;
var uLocal_7590=0;
var uLocal_7591=0;
var uLocal_7592=0;
var uLocal_7593=0;
var uLocal_7594=0;
var uLocal_7595=0;
var uLocal_7596=0;
var uLocal_7597=0;
var uLocal_7598=0;
var uLocal_7599=0;
var uLocal_7600=0;
var uLocal_7601=0;
var uLocal_7602=0;
var uLocal_7603=0;
var uLocal_7604=0;
var uLocal_7605=0;
var uLocal_7606=0;
var uLocal_7607=0;
var uLocal_7608=0;
var uLocal_7609=0;
var uLocal_7610=0;
var uLocal_7611=0;
var uLocal_7612=0;
var uLocal_7613=0;
var uLocal_7614=0;
var uLocal_7615=0;
var uLocal_7616=1065353216;
var uLocal_7617=0;
var uLocal_7618=0;
var uLocal_7619=0;
var uLocal_7620=0;
var uLocal_7621=0;
var uLocal_7622=0;
var uLocal_7623=0;
var uLocal_7624=0;
var uLocal_7625=0;
var uLocal_7626=0;
var uLocal_7627=0;
var uLocal_7628=0;
var uLocal_7629=0;
var uLocal_7630=0;
var uLocal_7631=0;
var uLocal_7632=0;
var uLocal_7633=0;
var uLocal_7634=0;
var uLocal_7635=0;
var uLocal_7636=0;
var uLocal_7637=0;
var uLocal_7638=0;
var uLocal_7639=0;
var uLocal_7640=0;
var uLocal_7641=0;
var uLocal_7642=0;
var uLocal_7643=-1;
var uLocal_7644=0;
var uLocal_7645=0;
var uLocal_7646=0;
var uLocal_7647=0;
var uLocal_7648=0;
var uLocal_7649=0;
var uLocal_7650=0;
var uLocal_7651=0;
var uLocal_7652=0;
var uLocal_7653=0;
var uLocal_7654=0;
var uLocal_7655=0;
var uLocal_7656=0;
var uLocal_7657=0;
var uLocal_7658=0;
var uLocal_7659=0;
var uLocal_7660=0;
var uLocal_7661=0;
var uLocal_7662=0;
var uLocal_7663=0;
var uLocal_7664=0;
var uLocal_7665=0;
var uLocal_7666=0;
var uLocal_7667=0;
var uLocal_7668=0;
var uLocal_7669=0;
var uLocal_7670=0;
var uLocal_7671=0;
var uLocal_7672=0;
var uLocal_7673=1065353216;
var uLocal_7674=0;
var uLocal_7675=0;
var uLocal_7676=0;
var uLocal_7677=0;
var uLocal_7678=0;
var uLocal_7679=0;
var uLocal_7680=0;
var uLocal_7681=0;
var uLocal_7682=0;
var uLocal_7683=0;
var uLocal_7684=0;
var uLocal_7685=0;
var uLocal_7686=0;
var uLocal_7687=0;
var uLocal_7688=0;
var uLocal_7689=0;
var uLocal_7690=0;
var uLocal_7691=0;
var uLocal_7692=0;
var uLocal_7693=0;
var uLocal_7694=0;
var uLocal_7695=0;
var uLocal_7696=0;
var uLocal_7697=0;
var uLocal_7698=0;
var uLocal_7699=0;
var uLocal_7700=-1;
var uLocal_7701=0;
var uLocal_7702=0;
var uLocal_7703=0;
var uLocal_7704=0;
var uLocal_7705=0;
var uLocal_7706=0;
var uLocal_7707=0;
var uLocal_7708=0;
var uLocal_7709=0;
var uLocal_7710=0;
var uLocal_7711=0;
var uLocal_7712=0;
var uLocal_7713=0;
var uLocal_7714=0;
var uLocal_7715=0;
var uLocal_7716=0;
var uLocal_7717=0;
var uLocal_7718=0;
var uLocal_7719=0;
var uLocal_7720=0;
var uLocal_7721=0;
var uLocal_7722=0;
var uLocal_7723=0;
var uLocal_7724=0;
var uLocal_7725=0;
var uLocal_7726=0;
var uLocal_7727=0;
var uLocal_7728=0;
var uLocal_7729=0;
var uLocal_7730=1065353216;
var uLocal_7731=0;
var uLocal_7732=0;
var uLocal_7733=0;
var uLocal_7734=0;
var uLocal_7735=0;
var uLocal_7736=0;
var uLocal_7737=0;
var uLocal_7738=0;
var uLocal_7739=0;
var uLocal_7740=0;
var uLocal_7741=0;
var uLocal_7742=0;
var uLocal_7743=0;
var uLocal_7744=0;
var uLocal_7745=0;
var uLocal_7746=0;
var uLocal_7747=0;
var uLocal_7748=0;
var uLocal_7749=0;
var uLocal_7750=0;
var uLocal_7751=0;
var uLocal_7752=0;
var uLocal_7753=0;
var uLocal_7754=0;
var uLocal_7755=0;
var uLocal_7756=0;
var uLocal_7757=-1;
var uLocal_7758=0;
var uLocal_7759=0;
var uLocal_7760=0;
var uLocal_7761=0;
var uLocal_7762=0;
var uLocal_7763=0;
var uLocal_7764=0;
var uLocal_7765=0;
var uLocal_7766=0;
var uLocal_7767=0;
var uLocal_7768=0;
var uLocal_7769=0;
var uLocal_7770=0;
var uLocal_7771=0;
var uLocal_7772=0;
var uLocal_7773=0;
var uLocal_7774=0;
var uLocal_7775=0;
var uLocal_7776=0;
var uLocal_7777=0;
var uLocal_7778=0;
var uLocal_7779=0;
var uLocal_7780=0;
var uLocal_7781=0;
var uLocal_7782=0;
var uLocal_7783=0;
var uLocal_7784=0;
var uLocal_7785=0;
var uLocal_7786=0;
var uLocal_7787=1065353216;
var uLocal_7788=0;
var uLocal_7789=0;
var uLocal_7790=0;
var uLocal_7791=0;
var uLocal_7792=0;
var uLocal_7793=0;
var uLocal_7794=0;
var uLocal_7795=0;
var uLocal_7796=0;
var uLocal_7797=0;
var uLocal_7798=0;
var uLocal_7799=0;
var uLocal_7800=0;
var uLocal_7801=0;
var uLocal_7802=0;
var uLocal_7803=0;
var uLocal_7804=0;
var uLocal_7805=0;
var uLocal_7806=0;
var uLocal_7807=0;
var uLocal_7808=0;
var uLocal_7809=0;
var uLocal_7810=0;
var uLocal_7811=0;
var uLocal_7812=0;
var uLocal_7813=0;
var uLocal_7814=-1;
var uLocal_7815=0;
var uLocal_7816=0;
var uLocal_7817=0;
var uLocal_7818=0;
var uLocal_7819=0;
var uLocal_7820=0;
var uLocal_7821=0;
var uLocal_7822=0;
var uLocal_7823=0;
var uLocal_7824=0;
var uLocal_7825=0;
var uLocal_7826=0;
var uLocal_7827=0;
var uLocal_7828=0;
var uLocal_7829=0;
var uLocal_7830=0;
var uLocal_7831=0;
var uLocal_7832=0;
var uLocal_7833=0;
var uLocal_7834=0;
var uLocal_7835=0;
var uLocal_7836=0;
var uLocal_7837=0;
var uLocal_7838=0;
var uLocal_7839=0;
var uLocal_7840=0;
var uLocal_7841=0;
var uLocal_7842=0;
var uLocal_7843=0;
var uLocal_7844=1065353216;
var uLocal_7845=0;
var uLocal_7846=0;
var uLocal_7847=0;
var uLocal_7848=0;
var uLocal_7849=0;
var uLocal_7850=0;
var uLocal_7851=0;
var uLocal_7852=0;
var uLocal_7853=0;
var uLocal_7854=0;
var uLocal_7855=0;
var uLocal_7856=0;
var uLocal_7857=0;
var uLocal_7858=0;
var uLocal_7859=0;
var uLocal_7860=0;
var uLocal_7861=0;
var uLocal_7862=0;
var uLocal_7863=0;
var uLocal_7864=0;
var uLocal_7865=0;
var uLocal_7866=0;
var uLocal_7867=0;
var uLocal_7868=0;
var uLocal_7869=0;
var uLocal_7870=0;
var uLocal_7871=-1;
var uLocal_7872=0;
var uLocal_7873=0;
var uLocal_7874=0;
var uLocal_7875=0;
var uLocal_7876=0;
var uLocal_7877=0;
var uLocal_7878=0;
var uLocal_7879=0;
var uLocal_7880=0;
var uLocal_7881=0;
var uLocal_7882=0;
var uLocal_7883=0;
var uLocal_7884=0;
var uLocal_7885=0;
var uLocal_7886=0;
var uLocal_7887=0;
var uLocal_7888=0;
var uLocal_7889=0;
var uLocal_7890=0;
var uLocal_7891=0;
var uLocal_7892=0;
var uLocal_7893=0;
var uLocal_7894=0;
var uLocal_7895=0;
var uLocal_7896=0;
var uLocal_7897=0;
var uLocal_7898=0;
var uLocal_7899=0;
var uLocal_7900=0;
var uLocal_7901=1065353216;
var uLocal_7902=0;
var uLocal_7903=0;
var uLocal_7904=0;
var uLocal_7905=0;
var uLocal_7906=0;
var uLocal_7907=0;
var uLocal_7908=0;
var uLocal_7909=0;
var uLocal_7910=0;
var uLocal_7911=0;
var uLocal_7912=0;
var uLocal_7913=0;
var uLocal_7914=0;
var uLocal_7915=0;
var uLocal_7916=0;
var uLocal_7917=0;
var uLocal_7918=0;
var uLocal_7919=0;
var uLocal_7920=0;
var uLocal_7921=0;
var uLocal_7922=0;
var uLocal_7923=0;
var uLocal_7924=0;
var uLocal_7925=0;
var uLocal_7926=0;
var uLocal_7927=0;
var uLocal_7928=-1;
var uLocal_7929=0;
var uLocal_7930=0;
var uLocal_7931=0;
var uLocal_7932=0;
var uLocal_7933=0;
var uLocal_7934=0;
var uLocal_7935=0;
var uLocal_7936=0;
var uLocal_7937=0;
var uLocal_7938=0;
var uLocal_7939=0;
var uLocal_7940=0;
var uLocal_7941=0;
var uLocal_7942=0;
var uLocal_7943=0;
var uLocal_7944=0;
var uLocal_7945=0;
var uLocal_7946=0;
var uLocal_7947=0;
var uLocal_7948=0;
var uLocal_7949=0;
var uLocal_7950=0;
var uLocal_7951=0;
var uLocal_7952=0;
var uLocal_7953=0;
var uLocal_7954=0;
var uLocal_7955=0;
var uLocal_7956=0;
var uLocal_7957=0;
var uLocal_7958=1065353216;
var uLocal_7959=0;
var uLocal_7960=0;
var uLocal_7961=0;
var uLocal_7962=0;
var uLocal_7963=0;
var uLocal_7964=0;
var uLocal_7965=0;
var uLocal_7966=0;
var uLocal_7967=0;
var uLocal_7968=0;
var uLocal_7969=0;
var uLocal_7970=0;
var uLocal_7971=0;
var uLocal_7972=0;
var uLocal_7973=0;
var uLocal_7974=0;
var uLocal_7975=0;
var uLocal_7976=0;
var uLocal_7977=0;
var uLocal_7978=0;
var uLocal_7979=0;
var uLocal_7980=0;
var uLocal_7981=0;
var uLocal_7982=0;
var uLocal_7983=0;
var uLocal_7984=0;
var uLocal_7985=-1;
var uLocal_7986=0;
var uLocal_7987=0;
var uLocal_7988=0;
var uLocal_7989=0;
var uLocal_7990=0;
var uLocal_7991=0;
var uLocal_7992=0;
var uLocal_7993=0;
var uLocal_7994=0;
var uLocal_7995=0;
var uLocal_7996=0;
var uLocal_7997=0;
var uLocal_7998=0;
var uLocal_7999=0;
var uLocal_8000=0;
var uLocal_8001=0;
var uLocal_8002=0;
var uLocal_8003=0;
var uLocal_8004=0;
var uLocal_8005=0;
var uLocal_8006=0;
var uLocal_8007=0;
var uLocal_8008=0;
var uLocal_8009=0;
var uLocal_8010=0;
var uLocal_8011=0;
var uLocal_8012=0;
var uLocal_8013=0;
var uLocal_8014=0;
var uLocal_8015=1065353216;
var uLocal_8016=0;
var uLocal_8017=0;
var uLocal_8018=0;
var uLocal_8019=0;
var uLocal_8020=0;
var uLocal_8021=0;
var uLocal_8022=0;
var uLocal_8023=0;
var uLocal_8024=0;
var uLocal_8025=0;
var uLocal_8026=0;
var uLocal_8027=0;
var uLocal_8028=0;
var uLocal_8029=0;
var uLocal_8030=0;
var uLocal_8031=0;
var uLocal_8032=0;
var uLocal_8033=0;
var uLocal_8034=0;
var uLocal_8035=0;
var uLocal_8036=0;
var uLocal_8037=0;
var uLocal_8038=0;
var uLocal_8039=0;
var uLocal_8040=0;
var uLocal_8041=0;
var uLocal_8042=-1;
var uLocal_8043=0;
var uLocal_8044=0;
var uLocal_8045=0;
var uLocal_8046=0;
var uLocal_8047=0;
var uLocal_8048=0;
var uLocal_8049=0;
var uLocal_8050=0;
var uLocal_8051=0;
var uLocal_8052=0;
var uLocal_8053=0;
var uLocal_8054=0;
var uLocal_8055=0;
var uLocal_8056=0;
var uLocal_8057=0;
var uLocal_8058=0;
var uLocal_8059=0;
var uLocal_8060=0;
var uLocal_8061=0;
var uLocal_8062=0;
var uLocal_8063=0;
var uLocal_8064=0;
var uLocal_8065=0;
var uLocal_8066=0;
var uLocal_8067=0;
var uLocal_8068=0;
var uLocal_8069=0;
var uLocal_8070=0;
var uLocal_8071=0;
var uLocal_8072=1065353216;
var uLocal_8073=0;
var uLocal_8074=0;
var uLocal_8075=0;
var uLocal_8076=0;
var uLocal_8077=0;
var uLocal_8078=0;
var uLocal_8079=0;
var uLocal_8080=0;
var uLocal_8081=0;
var uLocal_8082=0;
var uLocal_8083=0;
var uLocal_8084=0;
var uLocal_8085=0;
var uLocal_8086=0;
var uLocal_8087=0;
var uLocal_8088=0;
var uLocal_8089=0;
var uLocal_8090=0;
var uLocal_8091=0;
var uLocal_8092=0;
var uLocal_8093=0;
var uLocal_8094=0;
var uLocal_8095=0;
var uLocal_8096=16;
var uLocal_8097=0;
var uLocal_8098=-1082130432;
var uLocal_8099=0;
var uLocal_8100=-1082130432;
var uLocal_8101=0;
var uLocal_8102=-1082130432;
var uLocal_8103=0;
var uLocal_8104=-1082130432;
var uLocal_8105=0;
var uLocal_8106=-1082130432;
var uLocal_8107=0;
var uLocal_8108=-1082130432;
var uLocal_8109=0;
var uLocal_8110=-1082130432;
var uLocal_8111=0;
var uLocal_8112=-1082130432;
var uLocal_8113=0;
var uLocal_8114=-1082130432;
var uLocal_8115=0;
var uLocal_8116=-1082130432;
var uLocal_8117=0;
var uLocal_8118=-1082130432;
var uLocal_8119=0;
var uLocal_8120=-1082130432;
var uLocal_8121=0;
var uLocal_8122=-1082130432;
var uLocal_8123=0;
var uLocal_8124=-1082130432;
var uLocal_8125=0;
var uLocal_8126=-1082130432;
var uLocal_8127=0;
var uLocal_8128=-1082130432;
var uLocal_8129=16;
var uLocal_8130=0;
var uLocal_8131=-1082130432;
var uLocal_8132=0;
var uLocal_8133=-1082130432;
var uLocal_8134=0;
var uLocal_8135=-1082130432;
var uLocal_8136=0;
var uLocal_8137=-1082130432;
var uLocal_8138=0;
var uLocal_8139=-1082130432;
var uLocal_8140=0;
var uLocal_8141=-1082130432;
var uLocal_8142=0;
var uLocal_8143=-1082130432;
var uLocal_8144=0;
var uLocal_8145=-1082130432;
var uLocal_8146=0;
var uLocal_8147=-1082130432;
var uLocal_8148=0;
var uLocal_8149=-1082130432;
var uLocal_8150=0;
var uLocal_8151=-1082130432;
var uLocal_8152=0;
var uLocal_8153=-1082130432;
var uLocal_8154=0;
var uLocal_8155=-1082130432;
var uLocal_8156=0;
var uLocal_8157=-1082130432;
var uLocal_8158=0;
var uLocal_8159=-1082130432;
var uLocal_8160=0;
var uLocal_8161=-1082130432;
var uLocal_8162=0;
var uLocal_8163=0;
var uLocal_8164=0;
var uLocal_8165=0;
var uLocal_8166=0;
var uLocal_8167=0;
var uLocal_8168=0;
var uLocal_8169=0;
var uLocal_8170=0;
var uLocal_8171=0;
var uLocal_8172=0;
var uLocal_8173=0;
var uLocal_8174=0;
var uLocal_8175=0;
var uLocal_8176=0;
var uLocal_8177=0;
var uLocal_8178=-1082130432;
var uLocal_8179=-1082130432;
var uLocal_8180=1;
var uLocal_8181=1;
var uLocal_8182=1;
var uLocal_8183=-1;
var uLocal_8184=-1;
var uLocal_8185=-1;
struct<2> Local_8186={
0, 0 
};
var uLocal_8187=0;
var uLocal_8188=0;
var uLocal_8189=2;
var uLocal_8190=0;
var uLocal_8191=0;
var uLocal_8192=2;
var uLocal_8193=0;
var uLocal_8194=0;
var uLocal_8195=20;
var uLocal_8196=0;
var uLocal_8197=0;
var uLocal_8198=0;
var uLocal_8199=-1;
var uLocal_8200=0;
var uLocal_8201=0;
var uLocal_8202=0;
var uLocal_8203=0;
var uLocal_8204=0;
var uLocal_8205=0;
var uLocal_8206=0;
var uLocal_8207=0;
var uLocal_8208=0;
var uLocal_8209=0;
var uLocal_8210=0;
var uLocal_8211=0;
var uLocal_8212=0;
var uLocal_8213=0;
var uLocal_8214=0;
var uLocal_8215=0;
var uLocal_8216=0;
var uLocal_8217=0;
var uLocal_8218=0;
var uLocal_8219=0;
var uLocal_8220=0;
var uLocal_8221=0;
var uLocal_8222=0;
var uLocal_8223=0;
var uLocal_8224=0;
var uLocal_8225=0;
var uLocal_8226=0;
var uLocal_8227=0;
var uLocal_8228=0;
var uLocal_8229=1065353216;
var uLocal_8230=0;
var uLocal_8231=0;
var uLocal_8232=0;
var uLocal_8233=0;
var uLocal_8234=0;
var uLocal_8235=0;
var uLocal_8236=0;
var uLocal_8237=0;
var uLocal_8238=0;
var uLocal_8239=0;
var uLocal_8240=0;
var uLocal_8241=0;
var uLocal_8242=0;
var uLocal_8243=0;
var uLocal_8244=0;
var uLocal_8245=0;
var uLocal_8246=0;
var uLocal_8247=0;
var uLocal_8248=0;
var uLocal_8249=0;
var uLocal_8250=0;
var uLocal_8251=0;
var uLocal_8252=0;
var uLocal_8253=0;
var uLocal_8254=0;
var uLocal_8255=0;
var uLocal_8256=-1;
var uLocal_8257=0;
var uLocal_8258=0;
var uLocal_8259=0;
var uLocal_8260=0;
var uLocal_8261=0;
var uLocal_8262=0;
var uLocal_8263=0;
var uLocal_8264=0;
var uLocal_8265=0;
var uLocal_8266=0;
var uLocal_8267=0;
var uLocal_8268=0;
var uLocal_8269=0;
var uLocal_8270=0;
var uLocal_8271=0;
var uLocal_8272=0;
var uLocal_8273=0;
var uLocal_8274=0;
var uLocal_8275=0;
var uLocal_8276=0;
var uLocal_8277=0;
var uLocal_8278=0;
var uLocal_8279=0;
var uLocal_8280=0;
var uLocal_8281=0;
var uLocal_8282=0;
var uLocal_8283=0;
var uLocal_8284=0;
var uLocal_8285=0;
var uLocal_8286=1065353216;
var uLocal_8287=0;
var uLocal_8288=0;
var uLocal_8289=0;
var uLocal_8290=0;
var uLocal_8291=0;
var uLocal_8292=0;
var uLocal_8293=0;
var uLocal_8294=0;
var uLocal_8295=0;
var uLocal_8296=0;
var uLocal_8297=0;
var uLocal_8298=0;
var uLocal_8299=0;
var uLocal_8300=0;
var uLocal_8301=0;
var uLocal_8302=0;
var uLocal_8303=0;
var uLocal_8304=0;
var uLocal_8305=0;
var uLocal_8306=0;
var uLocal_8307=0;
var uLocal_8308=0;
var uLocal_8309=0;
var uLocal_8310=0;
var uLocal_8311=0;
var uLocal_8312=0;
var uLocal_8313=-1;
var uLocal_8314=0;
var uLocal_8315=0;
var uLocal_8316=0;
var uLocal_8317=0;
var uLocal_8318=0;
var uLocal_8319=0;
var uLocal_8320=0;
var uLocal_8321=0;
var uLocal_8322=0;
var uLocal_8323=0;
var uLocal_8324=0;
var uLocal_8325=0;
var uLocal_8326=0;
var uLocal_8327=0;
var uLocal_8328=0;
var uLocal_8329=0;
var uLocal_8330=0;
var uLocal_8331=0;
var uLocal_8332=0;
var uLocal_8333=0;
var uLocal_8334=0;
var uLocal_8335=0;
var uLocal_8336=0;
var uLocal_8337=0;
var uLocal_8338=0;
var uLocal_8339=0;
var uLocal_8340=0;
var uLocal_8341=0;
var uLocal_8342=0;
var uLocal_8343=1065353216;
var uLocal_8344=0;
var uLocal_8345=0;
var uLocal_8346=0;
var uLocal_8347=0;
var uLocal_8348=0;
var uLocal_8349=0;
var uLocal_8350=0;
var uLocal_8351=0;
var uLocal_8352=0;
var uLocal_8353=0;
var uLocal_8354=0;
var uLocal_8355=0;
var uLocal_8356=0;
var uLocal_8357=0;
var uLocal_8358=0;
var uLocal_8359=0;
var uLocal_8360=0;
var uLocal_8361=0;
var uLocal_8362=0;
var uLocal_8363=0;
var uLocal_8364=0;
var uLocal_8365=0;
var uLocal_8366=0;
var uLocal_8367=0;
var uLocal_8368=0;
var uLocal_8369=0;
var uLocal_8370=-1;
var uLocal_8371=0;
var uLocal_8372=0;
var uLocal_8373=0;
var uLocal_8374=0;
var uLocal_8375=0;
var uLocal_8376=0;
var uLocal_8377=0;
var uLocal_8378=0;
var uLocal_8379=0;
var uLocal_8380=0;
var uLocal_8381=0;
var uLocal_8382=0;
var uLocal_8383=0;
var uLocal_8384=0;
var uLocal_8385=0;
var uLocal_8386=0;
var uLocal_8387=0;
var uLocal_8388=0;
var uLocal_8389=0;
var uLocal_8390=0;
var uLocal_8391=0;
var uLocal_8392=0;
var uLocal_8393=0;
var uLocal_8394=0;
var uLocal_8395=0;
var uLocal_8396=0;
var uLocal_8397=0;
var uLocal_8398=0;
var uLocal_8399=0;
var uLocal_8400=1065353216;
var uLocal_8401=0;
var uLocal_8402=0;
var uLocal_8403=0;
var uLocal_8404=0;
var uLocal_8405=0;
var uLocal_8406=0;
var uLocal_8407=0;
var uLocal_8408=0;
var uLocal_8409=0;
var uLocal_8410=0;
var uLocal_8411=0;
var uLocal_8412=0;
var uLocal_8413=0;
var uLocal_8414=0;
var uLocal_8415=0;
var uLocal_8416=0;
var uLocal_8417=0;
var uLocal_8418=0;
var uLocal_8419=0;
var uLocal_8420=0;
var uLocal_8421=0;
var uLocal_8422=0;
var uLocal_8423=0;
var uLocal_8424=0;
var uLocal_8425=0;
var uLocal_8426=0;
var uLocal_8427=-1;
var uLocal_8428=0;
var uLocal_8429=0;
var uLocal_8430=0;
var uLocal_8431=0;
var uLocal_8432=0;
var uLocal_8433=0;
var uLocal_8434=0;
var uLocal_8435=0;
var uLocal_8436=0;
var uLocal_8437=0;
var uLocal_8438=0;
var uLocal_8439=0;
var uLocal_8440=0;
var uLocal_8441=0;
var uLocal_8442=0;
var uLocal_8443=0;
var uLocal_8444=0;
var uLocal_8445=0;
var uLocal_8446=0;
var uLocal_8447=0;
var uLocal_8448=0;
var uLocal_8449=0;
var uLocal_8450=0;
var uLocal_8451=0;
var uLocal_8452=0;
var uLocal_8453=0;
var uLocal_8454=0;
var uLocal_8455=0;
var uLocal_8456=0;
var uLocal_8457=1065353216;
var uLocal_8458=0;
var uLocal_8459=0;
var uLocal_8460=0;
var uLocal_8461=0;
var uLocal_8462=0;
var uLocal_8463=0;
var uLocal_8464=0;
var uLocal_8465=0;
var uLocal_8466=0;
var uLocal_8467=0;
var uLocal_8468=0;
var uLocal_8469=0;
var uLocal_8470=0;
var uLocal_8471=0;
var uLocal_8472=0;
var uLocal_8473=0;
var uLocal_8474=0;
var uLocal_8475=0;
var uLocal_8476=0;
var uLocal_8477=0;
var uLocal_8478=0;
var uLocal_8479=0;
var uLocal_8480=0;
var uLocal_8481=0;
var uLocal_8482=0;
var uLocal_8483=0;
var uLocal_8484=-1;
var uLocal_8485=0;
var uLocal_8486=0;
var uLocal_8487=0;
var uLocal_8488=0;
var uLocal_8489=0;
var uLocal_8490=0;
var uLocal_8491=0;
var uLocal_8492=0;
var uLocal_8493=0;
var uLocal_8494=0;
var uLocal_8495=0;
var uLocal_8496=0;
var uLocal_8497=0;
var uLocal_8498=0;
var uLocal_8499=0;
var uLocal_8500=0;
var uLocal_8501=0;
var uLocal_8502=0;
var uLocal_8503=0;
var uLocal_8504=0;
var uLocal_8505=0;
var uLocal_8506=0;
var uLocal_8507=0;
var uLocal_8508=0;
var uLocal_8509=0;
var uLocal_8510=0;
var uLocal_8511=0;
var uLocal_8512=0;
var uLocal_8513=0;
var uLocal_8514=1065353216;
var uLocal_8515=0;
var uLocal_8516=0;
var uLocal_8517=0;
var uLocal_8518=0;
var uLocal_8519=0;
var uLocal_8520=0;
var uLocal_8521=0;
var uLocal_8522=0;
var uLocal_8523=0;
var uLocal_8524=0;
var uLocal_8525=0;
var uLocal_8526=0;
var uLocal_8527=0;
var uLocal_8528=0;
var uLocal_8529=0;
var uLocal_8530=0;
var uLocal_8531=0;
var uLocal_8532=0;
var uLocal_8533=0;
var uLocal_8534=0;
var uLocal_8535=0;
var uLocal_8536=0;
var uLocal_8537=0;
var uLocal_8538=0;
var uLocal_8539=0;
var uLocal_8540=0;
var uLocal_8541=-1;
var uLocal_8542=0;
var uLocal_8543=0;
var uLocal_8544=0;
var uLocal_8545=0;
var uLocal_8546=0;
var uLocal_8547=0;
var uLocal_8548=0;
var uLocal_8549=0;
var uLocal_8550=0;
var uLocal_8551=0;
var uLocal_8552=0;
var uLocal_8553=0;
var uLocal_8554=0;
var uLocal_8555=0;
var uLocal_8556=0;
var uLocal_8557=0;
var uLocal_8558=0;
var uLocal_8559=0;
var uLocal_8560=0;
var uLocal_8561=0;
var uLocal_8562=0;
var uLocal_8563=0;
var uLocal_8564=0;
var uLocal_8565=0;
var uLocal_8566=0;
var uLocal_8567=0;
var uLocal_8568=0;
var uLocal_8569=0;
var uLocal_8570=0;
var uLocal_8571=1065353216;
var uLocal_8572=0;
var uLocal_8573=0;
var uLocal_8574=0;
var uLocal_8575=0;
var uLocal_8576=0;
var uLocal_8577=0;
var uLocal_8578=0;
var uLocal_8579=0;
var uLocal_8580=0;
var uLocal_8581=0;
var uLocal_8582=0;
var uLocal_8583=0;
var uLocal_8584=0;
var uLocal_8585=0;
var uLocal_8586=0;
var uLocal_8587=0;
var uLocal_8588=0;
var uLocal_8589=0;
var uLocal_8590=0;
var uLocal_8591=0;
var uLocal_8592=0;
var uLocal_8593=0;
var uLocal_8594=0;
var uLocal_8595=0;
var uLocal_8596=0;
var uLocal_8597=0;
var uLocal_8598=-1;
var uLocal_8599=0;
var uLocal_8600=0;
var uLocal_8601=0;
var uLocal_8602=0;
var uLocal_8603=0;
var uLocal_8604=0;
var uLocal_8605=0;
var uLocal_8606=0;
var uLocal_8607=0;
var uLocal_8608=0;
var uLocal_8609=0;
var uLocal_8610=0;
var uLocal_8611=0;
var uLocal_8612=0;
var uLocal_8613=0;
var uLocal_8614=0;
var uLocal_8615=0;
var uLocal_8616=0;
var uLocal_8617=0;
var uLocal_8618=0;
var uLocal_8619=0;
var uLocal_8620=0;
var uLocal_8621=0;
var uLocal_8622=0;
var uLocal_8623=0;
var uLocal_8624=0;
var uLocal_8625=0;
var uLocal_8626=0;
var uLocal_8627=0;
var uLocal_8628=1065353216;
var uLocal_8629=0;
var uLocal_8630=0;
var uLocal_8631=0;
var uLocal_8632=0;
var uLocal_8633=0;
var uLocal_8634=0;
var uLocal_8635=0;
var uLocal_8636=0;
var uLocal_8637=0;
var uLocal_8638=0;
var uLocal_8639=0;
var uLocal_8640=0;
var uLocal_8641=0;
var uLocal_8642=0;
var uLocal_8643=0;
var uLocal_8644=0;
var uLocal_8645=0;
var uLocal_8646=0;
var uLocal_8647=0;
var uLocal_8648=0;
var uLocal_8649=0;
var uLocal_8650=0;
var uLocal_8651=0;
var uLocal_8652=0;
var uLocal_8653=0;
var uLocal_8654=0;
var uLocal_8655=-1;
var uLocal_8656=0;
var uLocal_8657=0;
var uLocal_8658=0;
var uLocal_8659=0;
var uLocal_8660=0;
var uLocal_8661=0;
var uLocal_8662=0;
var uLocal_8663=0;
var uLocal_8664=0;
var uLocal_8665=0;
var uLocal_8666=0;
var uLocal_8667=0;
var uLocal_8668=0;
var uLocal_8669=0;
var uLocal_8670=0;
var uLocal_8671=0;
var uLocal_8672=0;
var uLocal_8673=0;
var uLocal_8674=0;
var uLocal_8675=0;
var uLocal_8676=0;
var uLocal_8677=0;
var uLocal_8678=0;
var uLocal_8679=0;
var uLocal_8680=0;
var uLocal_8681=0;
var uLocal_8682=0;
var uLocal_8683=0;
var uLocal_8684=0;
var uLocal_8685=1065353216;
var uLocal_8686=0;
var uLocal_8687=0;
var uLocal_8688=0;
var uLocal_8689=0;
var uLocal_8690=0;
var uLocal_8691=0;
var uLocal_8692=0;
var uLocal_8693=0;
var uLocal_8694=0;
var uLocal_8695=0;
var uLocal_8696=0;
var uLocal_8697=0;
var uLocal_8698=0;
var uLocal_8699=0;
var uLocal_8700=0;
var uLocal_8701=0;
var uLocal_8702=0;
var uLocal_8703=0;
var uLocal_8704=0;
var uLocal_8705=0;
var uLocal_8706=0;
var uLocal_8707=0;
var uLocal_8708=0;
var uLocal_8709=0;
var uLocal_8710=0;
var uLocal_8711=0;
var uLocal_8712=-1;
var uLocal_8713=0;
var uLocal_8714=0;
var uLocal_8715=0;
var uLocal_8716=0;
var uLocal_8717=0;
var uLocal_8718=0;
var uLocal_8719=0;
var uLocal_8720=0;
var uLocal_8721=0;
var uLocal_8722=0;
var uLocal_8723=0;
var uLocal_8724=0;
var uLocal_8725=0;
var uLocal_8726=0;
var uLocal_8727=0;
var uLocal_8728=0;
var uLocal_8729=0;
var uLocal_8730=0;
var uLocal_8731=0;
var uLocal_8732=0;
var uLocal_8733=0;
var uLocal_8734=0;
var uLocal_8735=0;
var uLocal_8736=0;
var uLocal_8737=0;
var uLocal_8738=0;
var uLocal_8739=0;
var uLocal_8740=0;
var uLocal_8741=0;
var uLocal_8742=1065353216;
var uLocal_8743=0;
var uLocal_8744=0;
var uLocal_8745=0;
var uLocal_8746=0;
var uLocal_8747=0;
var uLocal_8748=0;
var uLocal_8749=0;
var uLocal_8750=0;
var uLocal_8751=0;
var uLocal_8752=0;
var uLocal_8753=0;
var uLocal_8754=0;
var uLocal_8755=0;
var uLocal_8756=0;
var uLocal_8757=0;
var uLocal_8758=0;
var uLocal_8759=0;
var uLocal_8760=0;
var uLocal_8761=0;
var uLocal_8762=0;
var uLocal_8763=0;
var uLocal_8764=0;
var uLocal_8765=0;
var uLocal_8766=0;
var uLocal_8767=0;
var uLocal_8768=0;
var uLocal_8769=-1;
var uLocal_8770=0;
var uLocal_8771=0;
var uLocal_8772=0;
var uLocal_8773=0;
var uLocal_8774=0;
var uLocal_8775=0;
var uLocal_8776=0;
var uLocal_8777=0;
var uLocal_8778=0;
var uLocal_8779=0;
var uLocal_8780=0;
var uLocal_8781=0;
var uLocal_8782=0;
var uLocal_8783=0;
var uLocal_8784=0;
var uLocal_8785=0;
var uLocal_8786=0;
var uLocal_8787=0;
var uLocal_8788=0;
var uLocal_8789=0;
var uLocal_8790=0;
var uLocal_8791=0;
var uLocal_8792=0;
var uLocal_8793=0;
var uLocal_8794=0;
var uLocal_8795=0;
var uLocal_8796=0;
var uLocal_8797=0;
var uLocal_8798=0;
var uLocal_8799=1065353216;
var uLocal_8800=0;
var uLocal_8801=0;
var uLocal_8802=0;
var uLocal_8803=0;
var uLocal_8804=0;
var uLocal_8805=0;
var uLocal_8806=0;
var uLocal_8807=0;
var uLocal_8808=0;
var uLocal_8809=0;
var uLocal_8810=0;
var uLocal_8811=0;
var uLocal_8812=0;
var uLocal_8813=0;
var uLocal_8814=0;
var uLocal_8815=0;
var uLocal_8816=0;
var uLocal_8817=0;
var uLocal_8818=0;
var uLocal_8819=0;
var uLocal_8820=0;
var uLocal_8821=0;
var uLocal_8822=0;
var uLocal_8823=0;
var uLocal_8824=0;
var uLocal_8825=0;
var uLocal_8826=-1;
var uLocal_8827=0;
var uLocal_8828=0;
var uLocal_8829=0;
var uLocal_8830=0;
var uLocal_8831=0;
var uLocal_8832=0;
var uLocal_8833=0;
var uLocal_8834=0;
var uLocal_8835=0;
var uLocal_8836=0;
var uLocal_8837=0;
var uLocal_8838=0;
var uLocal_8839=0;
var uLocal_8840=0;
var uLocal_8841=0;
var uLocal_8842=0;
var uLocal_8843=0;
var uLocal_8844=0;
var uLocal_8845=0;
var uLocal_8846=0;
var uLocal_8847=0;
var uLocal_8848=0;
var uLocal_8849=0;
var uLocal_8850=0;
var uLocal_8851=0;
var uLocal_8852=0;
var uLocal_8853=0;
var uLocal_8854=0;
var uLocal_8855=0;
var uLocal_8856=1065353216;
var uLocal_8857=0;
var uLocal_8858=0;
var uLocal_8859=0;
var uLocal_8860=0;
var uLocal_8861=0;
var uLocal_8862=0;
var uLocal_8863=0;
var uLocal_8864=0;
var uLocal_8865=0;
var uLocal_8866=0;
var uLocal_8867=0;
var uLocal_8868=0;
var uLocal_8869=0;
var uLocal_8870=0;
var uLocal_8871=0;
var uLocal_8872=0;
var uLocal_8873=0;
var uLocal_8874=0;
var uLocal_8875=0;
var uLocal_8876=0;
var uLocal_8877=0;
var uLocal_8878=0;
var uLocal_8879=0;
var uLocal_8880=0;
var uLocal_8881=0;
var uLocal_8882=0;
var uLocal_8883=-1;
var uLocal_8884=0;
var uLocal_8885=0;
var uLocal_8886=0;
var uLocal_8887=0;
var uLocal_8888=0;
var uLocal_8889=0;
var uLocal_8890=0;
var uLocal_8891=0;
var uLocal_8892=0;
var uLocal_8893=0;
var uLocal_8894=0;
var uLocal_8895=0;
var uLocal_8896=0;
var uLocal_8897=0;
var uLocal_8898=0;
var uLocal_8899=0;
var uLocal_8900=0;
var uLocal_8901=0;
var uLocal_8902=0;
var uLocal_8903=0;
var uLocal_8904=0;
var uLocal_8905=0;
var uLocal_8906=0;
var uLocal_8907=0;
var uLocal_8908=0;
var uLocal_8909=0;
var uLocal_8910=0;
var uLocal_8911=0;
var uLocal_8912=0;
var uLocal_8913=1065353216;
var uLocal_8914=0;
var uLocal_8915=0;
var uLocal_8916=0;
var uLocal_8917=0;
var uLocal_8918=0;
var uLocal_8919=0;
var uLocal_8920=0;
var uLocal_8921=0;
var uLocal_8922=0;
var uLocal_8923=0;
var uLocal_8924=0;
var uLocal_8925=0;
var uLocal_8926=0;
var uLocal_8927=0;
var uLocal_8928=0;
var uLocal_8929=0;
var uLocal_8930=0;
var uLocal_8931=0;
var uLocal_8932=0;
var uLocal_8933=0;
var uLocal_8934=0;
var uLocal_8935=0;
var uLocal_8936=0;
var uLocal_8937=0;
var uLocal_8938=0;
var uLocal_8939=0;
var uLocal_8940=-1;
var uLocal_8941=0;
var uLocal_8942=0;
var uLocal_8943=0;
var uLocal_8944=0;
var uLocal_8945=0;
var uLocal_8946=0;
var uLocal_8947=0;
var uLocal_8948=0;
var uLocal_8949=0;
var uLocal_8950=0;
var uLocal_8951=0;
var uLocal_8952=0;
var uLocal_8953=0;
var uLocal_8954=0;
var uLocal_8955=0;
var uLocal_8956=0;
var uLocal_8957=0;
var uLocal_8958=0;
var uLocal_8959=0;
var uLocal_8960=0;
var uLocal_8961=0;
var uLocal_8962=0;
var uLocal_8963=0;
var uLocal_8964=0;
var uLocal_8965=0;
var uLocal_8966=0;
var uLocal_8967=0;
var uLocal_8968=0;
var uLocal_8969=0;
var uLocal_8970=1065353216;
var uLocal_8971=0;
var uLocal_8972=0;
var uLocal_8973=0;
var uLocal_8974=0;
var uLocal_8975=0;
var uLocal_8976=0;
var uLocal_8977=0;
var uLocal_8978=0;
var uLocal_8979=0;
var uLocal_8980=0;
var uLocal_8981=0;
var uLocal_8982=0;
var uLocal_8983=0;
var uLocal_8984=0;
var uLocal_8985=0;
var uLocal_8986=0;
var uLocal_8987=0;
var uLocal_8988=0;
var uLocal_8989=0;
var uLocal_8990=0;
var uLocal_8991=0;
var uLocal_8992=0;
var uLocal_8993=0;
var uLocal_8994=0;
var uLocal_8995=0;
var uLocal_8996=0;
var uLocal_8997=-1;
var uLocal_8998=0;
var uLocal_8999=0;
var uLocal_9000=0;
var uLocal_9001=0;
var uLocal_9002=0;
var uLocal_9003=0;
var uLocal_9004=0;
var uLocal_9005=0;
var uLocal_9006=0;
var uLocal_9007=0;
var uLocal_9008=0;
var uLocal_9009=0;
var uLocal_9010=0;
var uLocal_9011=0;
var uLocal_9012=0;
var uLocal_9013=0;
var uLocal_9014=0;
var uLocal_9015=0;
var uLocal_9016=0;
var uLocal_9017=0;
var uLocal_9018=0;
var uLocal_9019=0;
var uLocal_9020=0;
var uLocal_9021=0;
var uLocal_9022=0;
var uLocal_9023=0;
var uLocal_9024=0;
var uLocal_9025=0;
var uLocal_9026=0;
var uLocal_9027=1065353216;
var uLocal_9028=0;
var uLocal_9029=0;
var uLocal_9030=0;
var uLocal_9031=0;
var uLocal_9032=0;
var uLocal_9033=0;
var uLocal_9034=0;
var uLocal_9035=0;
var uLocal_9036=0;
var uLocal_9037=0;
var uLocal_9038=0;
var uLocal_9039=0;
var uLocal_9040=0;
var uLocal_9041=0;
var uLocal_9042=0;
var uLocal_9043=0;
var uLocal_9044=0;
var uLocal_9045=0;
var uLocal_9046=0;
var uLocal_9047=0;
var uLocal_9048=0;
var uLocal_9049=0;
var uLocal_9050=0;
var uLocal_9051=0;
var uLocal_9052=0;
var uLocal_9053=0;
var uLocal_9054=-1;
var uLocal_9055=0;
var uLocal_9056=0;
var uLocal_9057=0;
var uLocal_9058=0;
var uLocal_9059=0;
var uLocal_9060=0;
var uLocal_9061=0;
var uLocal_9062=0;
var uLocal_9063=0;
var uLocal_9064=0;
var uLocal_9065=0;
var uLocal_9066=0;
var uLocal_9067=0;
var uLocal_9068=0;
var uLocal_9069=0;
var uLocal_9070=0;
var uLocal_9071=0;
var uLocal_9072=0;
var uLocal_9073=0;
var uLocal_9074=0;
var uLocal_9075=0;
var uLocal_9076=0;
var uLocal_9077=0;
var uLocal_9078=0;
var uLocal_9079=0;
var uLocal_9080=0;
var uLocal_9081=0;
var uLocal_9082=0;
var uLocal_9083=0;
var uLocal_9084=1065353216;
var uLocal_9085=0;
var uLocal_9086=0;
var uLocal_9087=0;
var uLocal_9088=0;
var uLocal_9089=0;
var uLocal_9090=0;
var uLocal_9091=0;
var uLocal_9092=0;
var uLocal_9093=0;
var uLocal_9094=0;
var uLocal_9095=0;
var uLocal_9096=0;
var uLocal_9097=0;
var uLocal_9098=0;
var uLocal_9099=0;
var uLocal_9100=0;
var uLocal_9101=0;
var uLocal_9102=0;
var uLocal_9103=0;
var uLocal_9104=0;
var uLocal_9105=0;
var uLocal_9106=0;
var uLocal_9107=0;
var uLocal_9108=0;
var uLocal_9109=0;
var uLocal_9110=0;
var uLocal_9111=-1;
var uLocal_9112=0;
var uLocal_9113=0;
var uLocal_9114=0;
var uLocal_9115=0;
var uLocal_9116=0;
var uLocal_9117=0;
var uLocal_9118=0;
var uLocal_9119=0;
var uLocal_9120=0;
var uLocal_9121=0;
var uLocal_9122=0;
var uLocal_9123=0;
var uLocal_9124=0;
var uLocal_9125=0;
var uLocal_9126=0;
var uLocal_9127=0;
var uLocal_9128=0;
var uLocal_9129=0;
var uLocal_9130=0;
var uLocal_9131=0;
var uLocal_9132=0;
var uLocal_9133=0;
var uLocal_9134=0;
var uLocal_9135=0;
var uLocal_9136=0;
var uLocal_9137=0;
var uLocal_9138=0;
var uLocal_9139=0;
var uLocal_9140=0;
var uLocal_9141=1065353216;
var uLocal_9142=0;
var uLocal_9143=0;
var uLocal_9144=0;
var uLocal_9145=0;
var uLocal_9146=0;
var uLocal_9147=0;
var uLocal_9148=0;
var uLocal_9149=0;
var uLocal_9150=0;
var uLocal_9151=0;
var uLocal_9152=0;
var uLocal_9153=0;
var uLocal_9154=0;
var uLocal_9155=0;
var uLocal_9156=0;
var uLocal_9157=0;
var uLocal_9158=0;
var uLocal_9159=0;
var uLocal_9160=0;
var uLocal_9161=0;
var uLocal_9162=0;
var uLocal_9163=0;
var uLocal_9164=0;
var uLocal_9165=0;
var uLocal_9166=0;
var uLocal_9167=0;
var uLocal_9168=-1;
var uLocal_9169=0;
var uLocal_9170=0;
var uLocal_9171=0;
var uLocal_9172=0;
var uLocal_9173=0;
var uLocal_9174=0;
var uLocal_9175=0;
var uLocal_9176=0;
var uLocal_9177=0;
var uLocal_9178=0;
var uLocal_9179=0;
var uLocal_9180=0;
var uLocal_9181=0;
var uLocal_9182=0;
var uLocal_9183=0;
var uLocal_9184=0;
var uLocal_9185=0;
var uLocal_9186=0;
var uLocal_9187=0;
var uLocal_9188=0;
var uLocal_9189=0;
var uLocal_9190=0;
var uLocal_9191=0;
var uLocal_9192=0;
var uLocal_9193=0;
var uLocal_9194=0;
var uLocal_9195=0;
var uLocal_9196=0;
var uLocal_9197=0;
var uLocal_9198=1065353216;
var uLocal_9199=0;
var uLocal_9200=0;
var uLocal_9201=0;
var uLocal_9202=0;
var uLocal_9203=0;
var uLocal_9204=0;
var uLocal_9205=0;
var uLocal_9206=0;
var uLocal_9207=0;
var uLocal_9208=0;
var uLocal_9209=0;
var uLocal_9210=0;
var uLocal_9211=0;
var uLocal_9212=0;
var uLocal_9213=0;
var uLocal_9214=0;
var uLocal_9215=0;
var uLocal_9216=0;
var uLocal_9217=0;
var uLocal_9218=0;
var uLocal_9219=0;
var uLocal_9220=0;
var uLocal_9221=0;
var uLocal_9222=0;
var uLocal_9223=0;
var uLocal_9224=0;
var uLocal_9225=-1;
var uLocal_9226=0;
var uLocal_9227=0;
var uLocal_9228=0;
var uLocal_9229=0;
var uLocal_9230=0;
var uLocal_9231=0;
var uLocal_9232=0;
var uLocal_9233=0;
var uLocal_9234=0;
var uLocal_9235=0;
var uLocal_9236=0;
var uLocal_9237=0;
var uLocal_9238=0;
var uLocal_9239=0;
var uLocal_9240=0;
var uLocal_9241=0;
var uLocal_9242=0;
var uLocal_9243=0;
var uLocal_9244=0;
var uLocal_9245=0;
var uLocal_9246=0;
var uLocal_9247=0;
var uLocal_9248=0;
var uLocal_9249=0;
var uLocal_9250=0;
var uLocal_9251=0;
var uLocal_9252=0;
var uLocal_9253=0;
var uLocal_9254=0;
var uLocal_9255=1065353216;
var uLocal_9256=0;
var uLocal_9257=0;
var uLocal_9258=0;
var uLocal_9259=0;
var uLocal_9260=0;
var uLocal_9261=0;
var uLocal_9262=0;
var uLocal_9263=0;
var uLocal_9264=0;
var uLocal_9265=0;
var uLocal_9266=0;
var uLocal_9267=0;
var uLocal_9268=0;
var uLocal_9269=0;
var uLocal_9270=0;
var uLocal_9271=0;
var uLocal_9272=0;
var uLocal_9273=0;
var uLocal_9274=0;
var uLocal_9275=0;
var uLocal_9276=0;
var uLocal_9277=0;
var uLocal_9278=0;
var uLocal_9279=0;
var uLocal_9280=0;
var uLocal_9281=0;
var uLocal_9282=-1;
var uLocal_9283=0;
var uLocal_9284=0;
var uLocal_9285=0;
var uLocal_9286=0;
var uLocal_9287=0;
var uLocal_9288=0;
var uLocal_9289=0;
var uLocal_9290=0;
var uLocal_9291=0;
var uLocal_9292=0;
var uLocal_9293=0;
var uLocal_9294=0;
var uLocal_9295=0;
var uLocal_9296=0;
var uLocal_9297=0;
var uLocal_9298=0;
var uLocal_9299=0;
var uLocal_9300=0;
var uLocal_9301=0;
var uLocal_9302=0;
var uLocal_9303=0;
var uLocal_9304=0;
var uLocal_9305=0;
var uLocal_9306=0;
var uLocal_9307=0;
var uLocal_9308=0;
var uLocal_9309=0;
var uLocal_9310=0;
var uLocal_9311=0;
var uLocal_9312=1065353216;
var uLocal_9313=0;
var uLocal_9314=0;
var uLocal_9315=0;
var uLocal_9316=0;
var uLocal_9317=0;
var uLocal_9318=0;
var uLocal_9319=0;
var uLocal_9320=0;
var uLocal_9321=0;
var uLocal_9322=0;
var uLocal_9323=0;
var uLocal_9324=0;
var uLocal_9325=0;
var uLocal_9326=0;
var uLocal_9327=0;
var uLocal_9328=0;
var uLocal_9329=0;
var uLocal_9330=0;
var uLocal_9331=0;
var uLocal_9332=0;
var uLocal_9333=0;
var uLocal_9334=0;
var uLocal_9335=0;
var uLocal_9336=16;
var uLocal_9337=0;
var uLocal_9338=-1082130432;
var uLocal_9339=0;
var uLocal_9340=-1082130432;
var uLocal_9341=0;
var uLocal_9342=-1082130432;
var uLocal_9343=0;
var uLocal_9344=-1082130432;
var uLocal_9345=0;
var uLocal_9346=-1082130432;
var uLocal_9347=0;
var uLocal_9348=-1082130432;
var uLocal_9349=0;
var uLocal_9350=-1082130432;
var uLocal_9351=0;
var uLocal_9352=-1082130432;
var uLocal_9353=0;
var uLocal_9354=-1082130432;
var uLocal_9355=0;
var uLocal_9356=-1082130432;
var uLocal_9357=0;
var uLocal_9358=-1082130432;
var uLocal_9359=0;
var uLocal_9360=-1082130432;
var uLocal_9361=0;
var uLocal_9362=-1082130432;
var uLocal_9363=0;
var uLocal_9364=-1082130432;
var uLocal_9365=0;
var uLocal_9366=-1082130432;
var uLocal_9367=0;
var uLocal_9368=-1082130432;
var uLocal_9369=16;
var uLocal_9370=0;
var uLocal_9371=-1082130432;
var uLocal_9372=0;
var uLocal_9373=-1082130432;
var uLocal_9374=0;
var uLocal_9375=-1082130432;
var uLocal_9376=0;
var uLocal_9377=-1082130432;
var uLocal_9378=0;
var uLocal_9379=-1082130432;
var uLocal_9380=0;
var uLocal_9381=-1082130432;
var uLocal_9382=0;
var uLocal_9383=-1082130432;
var uLocal_9384=0;
var uLocal_9385=-1082130432;
var uLocal_9386=0;
var uLocal_9387=-1082130432;
var uLocal_9388=0;
var uLocal_9389=-1082130432;
var uLocal_9390=0;
var uLocal_9391=-1082130432;
var uLocal_9392=0;
var uLocal_9393=-1082130432;
var uLocal_9394=0;
var uLocal_9395=-1082130432;
var uLocal_9396=0;
var uLocal_9397=-1082130432;
var uLocal_9398=0;
var uLocal_9399=-1082130432;
var uLocal_9400=0;
var uLocal_9401=-1082130432;
var uLocal_9402=0;
var uLocal_9403=0;
var uLocal_9404=0;
var uLocal_9405=0;
var uLocal_9406=0;
var uLocal_9407=0;
var uLocal_9408=0;
var uLocal_9409=0;
var uLocal_9410=0;
var uLocal_9411=0;
var uLocal_9412=0;
var uLocal_9413=0;
var uLocal_9414=0;
var uLocal_9415=0;
var uLocal_9416=0;
var uLocal_9417=0;
var uLocal_9418=-1082130432;
var uLocal_9419=-1082130432;
var uLocal_9420=1;
var uLocal_9421=1;
var uLocal_9422=1;
var uLocal_9423=-1;
var uLocal_9424=-1;
var uLocal_9425=-1;
int iLocal_9426=0;
int iLocal_9427=0;
float fLocal_9428=0f;
int iLocal_9429=0;
int iLocal_9430=0;
float fLocal_9431=0f;
float fLocal_9432=0f;
float fLocal_9433=0f;
float fLocal_9434=0f;
float fLocal_9435=0f;
struct<3> Local_9436={
0, 0, 0 
};
int iLocal_9437=0;
int iLocal_9438=0;
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
sLocal_18="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_28=1f;
iLocal_109=82;
fLocal_394=-1f;
iLocal_441=AUDIO::GET_SOUND_ID();
uLocal_442=AUDIO::GET_SOUND_ID();
iLocal_443=AUDIO::GET_SOUND_ID();
iLocal_444=AUDIO::GET_SOUND_ID();
iLocal_445=AUDIO::GET_SOUND_ID();
iLocal_498=-1;
Local_732={
-136.7f, -592.6f, 211.87f 
};
Local_733={
-1.7f, 0f, -98.1f 
};
bLocal_736=true;
fLocal_9428=0.449f;
fLocal_9431=0f;
fLocal_9432=0f;
fLocal_9433=0f;
fLocal_9434=165f;
fLocal_9435=0.95f;
Local_9436={
0f, 350f, -10f 
};
iLocal_9437=1;
MISC::SET_MISSION_FLAG(1);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_1151();
func_1148();
}
if(Global_3){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0)){
}
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
if(!PED::IS_PED_INJURED(iVar1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
}}}}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_2)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_2, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_3)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_3, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_7)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_7, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_9)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_9, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_8)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_8, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_4)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_4, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_5)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_5, 1, 1);
}
if(ENTITY::DOES_ENTITY_EXIST(Global_100073.f_6)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_100073.f_6, 1, 1);
}}
bLocal_265=false;
bLocal_266=false;
bLocal_266=bLocal_266;
fLocal_384=fLocal_384;
iLocal_438=iLocal_438;
fLocal_383=fLocal_383;
iLocal_270=iLocal_270;
iLocal_398=iLocal_398;
PAD::INIT_PC_SCRIPTED_CONTROLS("Rappelling");
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME(func_1147(), 0);
if(func_1105()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_1103(0);
func_1097();
func_1096();
switch (iLocal_31){
case 0:
func_1087();
break;
case 1:
func_1069();
break;
case 2:
func_1043();
break;
case 3:
func_1024();
break;
case 4:
func_986();
break;
case 5:
func_728();
break;
case 6:
func_1();
break;
}}}
wait(0);
}}


void func_1(){
int iVar0;
int iVar1;
float fVar2;
struct<3> Var3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6;
float fVar7;
int iVar8;
if(!iLocal_164){
if(!iLocal_315){
if(!PED::IS_PED_INJURED(func_727())){
WEAPON::GET_CURRENT_PED_WEAPON(func_727(), &iVar0, 1);
if(iVar0 !=func_726(5)){
WEAPON::SET_CURRENT_PED_WEAPON(func_727(), func_726(5), 1);
if(WEAPON::GET_AMMO_IN_PED_WEAPON(func_727(), func_726(5))==0){
WEAPON::SET_PED_AMMO(func_727(), func_726(5), 1, 0);
}
WEAPON::SET_PED_INFINITE_AMMO(func_727(), 1, func_726(5));
WEAPON::SET_PED_INFINITE_AMMO_CLIP(func_727(), 1);
}}
func_500();
if(!iLocal_255){
iVar1=0;
while (iVar1 < 4){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_126[iVar1])){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_126[iVar1]));
}
iVar1++;
}
iVar1=0;
while (iVar1 < iLocal_121){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_121[iVar1])){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_121[iVar1]));
}
iVar1++;
}
iLocal_255=1;
}
func_499();
if(func_498()){
if(!bLocal_163){
if(iLocal_38==0 || iLocal_38==1){
if(!bLocal_253){
bLocal_253=func_483("FBI2_GOBACK", 1, 0, 0, 1, 0);
}
elseif(!bLocal_171){
bLocal_171=func_483("FBI2_TCONT", 0, 0, 0, 1, 0);
}}}}
if(iLocal_38==0){
func_461(1, 0, 0, 1);
if(func_460(1) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) !=4){
if(!CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_125[0], Local_9436, 1, -1, 600, 600);
CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_9435);
CAM::SET_GAMEPLAY_HINT_FOV(CAM::GET_GAMEPLAY_CAM_FOV());
}}elseif(CAM::IS_GAMEPLAY_HINT_ACTIVE()){
CAM::STOP_GAMEPLAY_HINT(0);
}}elseif(iLocal_38==1){
if(HUD::DOES_BLIP_EXIST(uLocal_144)){
HUD::REMOVE_BLIP(&uLocal_144);
}
if(HUD::DOES_BLIP_EXIST(uLocal_143)){
HUD::REMOVE_BLIP(&uLocal_143);
}
if(!bLocal_168){
if(bLocal_171){
bLocal_168=true;
}}
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_459(39), 12f, 12f, 200f, 0, 0, 0)){
if(!iLocal_257){
TASK::TASK_HELI_MISSION(func_458(), iLocal_125[0], 0, 0, func_459(39), 19, 10f, 2f, -1f, 0, 0, -1082130432, 0);
iLocal_257=1;
}}elseif(iLocal_257){
iLocal_257=0;
}}
if(!bLocal_163){
if(iLocal_38==1 || iLocal_38==0){
if(bLocal_345){
iLocal_285=1;
}
if(!iLocal_285){
if(bLocal_168){
iLocal_285=func_483("FBI2_LEAVE", 0, 0, 0, 1, 0);
}}elseif(!iLocal_283){
iLocal_283=func_483("FBI2_MKTALK", 0, 0, 0, 1, 0);
}elseif(!iLocal_284){
iLocal_284=func_483("FBI2_MKTALK2", 0, 0, 0, 1, 0);
}}}
if(iLocal_285){
if(!PED::IS_PED_INJURED(iLocal_46[1])){
if(!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_46[1], 200f, 200f, 200f, 0, 0, 0)){
PED::DELETE_PED(&(iLocal_46[1]));
}}}
if(!Global_3){
if(iLocal_43==2){
func_457("fbi_2_ext", func_459(39), 100f, 120f);
if(CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY()){
if(!PED::IS_PED_INJURED(func_727())){
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_727(), 0);
}
if(!PED::IS_PED_INJURED(iLocal_118[0])){
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Agent_near_Van", iLocal_118[0], 0);
}
if(!PED::IS_PED_INJURED(iLocal_118[1])){
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Agent_near_heli", iLocal_118[1], 0);
}
if(!PED::IS_PED_INJURED(iLocal_115)){
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("MR_K", iLocal_115, 0);
CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MR_K", 8, 0, 0, 0);
}}}
if(func_498()){
if(func_456()==2){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_125[0], 0)){
ENTITY::IS_ENTITY_AT_COORD(iLocal_125[0], func_459(39), 7f, 7f, 2f, 1, 1, 0);
}}
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_459(39), 100f, 100f, 60f, 0, 1, 0) && func_456()==2){
VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_125[0], 0f);
VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iLocal_125[0], 0f);
}else{
VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_125[0], 1f);
VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iLocal_125[0], 1f);
}
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_125[0])){
if(!bLocal_163){
if(!bLocal_260){
if(!iLocal_262){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_459(39), func_459(40), 0, 1, 0)){
func_454();
iLocal_283=1;
iLocal_284=1;
iLocal_285=1;
iLocal_262=1;
}}else{
bLocal_260=func_483("FBI2_LAN", 0, 0, 0, 1, 0);
}}elseif(!bLocal_261){
if(!func_453()){
bLocal_261=func_452(14);
}}
}
if(func_456()==2){
fVar2=2f;
}
else{
fVar2=2f;
}
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_125[0], 1376.403f, -2083.443f, 50.998f, 1360.366f, -2064.322f, (50.998f + fVar2), 28f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_125[0], 1374.36f, -2059.423f, 50.998f, 1383.849f, -2050.67f, (50.998f + fVar2), 10f, 0, 1, 0)){
if(!bLocal_299){
bLocal_299=func_451("FIB2_COMPLETE");
}
fLocal_382=(fLocal_382 + (1f * timestep()));
}
else{
fLocal_382=0f;
iLocal_167=0;
}
if(!iLocal_167){
if(fLocal_382 >=2f && iLocal_43==2){
func_454();
iLocal_167=1;
}
}
elseif(!func_453()){
if(func_450()){
iLocal_164=1;
}
}}}}else{
switch (iLocal_465){
case 0:
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_125[0]) || iLocal_38==1){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==func_449(2)){
if(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1375.57f, -2072.22f, 51f, 100f, 100f, 100f, 0, 0, 0)){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0)){
Var6={
ENTITY::GET_ENTITY_COORDS(iLocal_125[0], 1) 
};
Var3={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_125[0], 20f, 300f, 0f) 
};
Var5={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_125[0], 0f, 20f, 0f) 
};
Var4={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_125[0], -150f, 100f, 0f) 
};
fVar7=ENTITY::GET_ENTITY_HEADING(iLocal_125[0]);
iVar8=round(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_125[0]));
Var3.f_2=Var6.f_2;
Var5.f_2=(Var6.f_2 + 20f);
Var4.f_2=(Var6.f_2 + 20f);
if(!PED::IS_PED_INJURED(func_458())){
TASK::TASK_HELI_MISSION(func_458(), iLocal_125[0], 0, 0, Var3, 4, 30f, 0f, fVar7, iVar8, 20, -1082130432, 0);
}
else{
TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), iLocal_125[0], 0, 0, Var3, 4, 30f, 0f, fVar7, iVar8, 20, -1082130432, 0);
}
}
iLocal_151=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1, 2);
iLocal_152=CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var5, CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 0, 2);
CAM::SHAKE_CAM(iLocal_151, "HAND_SHAKE", 0.2f);
CAM::SHAKE_CAM(iLocal_152, "HAND_SHAKE", 0.2f);
CAM::POINT_CAM_AT_COORD(iLocal_152, Var4);
CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_152, iLocal_151, 6500, 2, 2);
CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
func_441(1, 1, 1, 0, 0, 0, 0);
HUD::DISPLAY_HUD(0);
HUD::DISPLAY_RADAR(0);
iLocal_304=1;
settimerb(0);
iLocal_465++;
}}elseif(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1375.57f, -2072.22f, 51f, 100f, 100f, 100f, 0, 0, 0)){
func_451("FIB2_COMPLETE");
CAM::DO_SCREEN_FADE_OUT(1000);
while (!CAM::IS_SCREEN_FADED_OUT()){
wait(0);
}
func_438();
func_434();
}
}
break;
case 1:
if(timerb() > 5000){
func_451("FIB2_COMPLETE");
CAM::DO_SCREEN_FADE_OUT(1000);
while (!CAM::IS_SCREEN_FADED_OUT()){
wait(0);
}
CAM::DESTROY_ALL_CAMS(0);
CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
func_441(0, 1, 1, 0, 0, 0, 0);
HUD::DISPLAY_HUD(1);
HUD::DISPLAY_RADAR(1);
func_438();
func_434();
}
break;
}}}elseif(MISC::GET_GAME_TIMER() >=iLocal_472 + 13000){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_46[2])){
func_432(2, 0);
func_431(iLocal_46[2], 1);
PED::DELETE_PED(&(iLocal_46[2]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_46[1])){
PED::DELETE_PED(&(iLocal_46[1]));
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_125[0])){
VEHICLE::DELETE_VEHICLE(&(iLocal_125[0]));
}
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_132, 0)){
VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_132);
}}
func_434();
}}else{
func_2();
}}


void func_2(){
int iVar0;
struct<3> Var1;
PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
switch (iLocal_36){
case 0:
func_430(12);
PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
if(!PED::IS_PED_INJURED(func_727())){
PED::SET_PED_CONFIG_FLAG(func_727(), 101, 0);
}
if(!PED::IS_PED_INJURED(func_727())){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_727(), "Michael", 0, 0, 0);
}
if(!PED::IS_PED_INJURED(func_458())){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_458(), "Trevor", 0, 0, 0);
}
if(!PED::IS_PED_INJURED(iLocal_115)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_115, "MR_K", 1, 0, 0);
}
if(!PED::IS_PED_INJURED(iLocal_118[1])){
TASK::TASK_CLEAR_LOOK_AT(iLocal_118[1]);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_118[1], "FIB_Agent_near_heli", 1, 0, 0);
}
if(!PED::IS_PED_INJURED(iLocal_118[0])){
TASK::TASK_CLEAR_LOOK_AT(iLocal_118[0]);
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_118[0], "FIB_Agent_near_Van", 1, 0, 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_127, 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_127, "FBI_2_Burrito_Van", 1, 0, 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0)){
CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_125[0], "Main_heli", 0, 0, 0);
}
if(func_456()==0){
iVar0=0;
}else{
iVar0=256;
}
CUTSCENE::START_CUTSCENE(iVar0);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 4);
RECORDING::REPLAY_START_EVENT(4);
CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
iLocal_36=1;
break;
case 1:
if(!iLocal_166){
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
func_429();
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(800);
}
if(func_456() !=0){
bLocal_358=true;
func_423(&iLocal_46, 0);
func_355(&iLocal_46, 1, 1, 1);
func_353(1);
}
func_352();
func_349();
MISC::CLEAR_AREA(1373.974f, -2070.953f, 54.1842f, 30f, 1, 0, 0, 0);
FIRE::STOP_FIRE_IN_RANGE(1373.974f, -2070.953f, 54.1842f, 30f);
GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(1373.974f, -2070.953f, 54.1842f, 30f);
if(PHYSICS::DOES_ROPE_EXIST(&(Local_509.f_5))){
func_348(&Local_509);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_133)){
OBJECT::DELETE_OBJECT(&iLocal_133);
}
AUDIO::STOP_SOUND(iLocal_441);
func_347();
if(!PED::IS_PED_INJURED(iLocal_115)){
PED::SET_PED_COMPONENT_VARIATION(iLocal_115, 8, 1, 0, 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0)){
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_125[0], 0, 0, 0);
VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_125[0], 0, 0, 0f);
}
func_346(iLocal_125[0]);
if(!PED::IS_PED_INJURED(func_727())){
PED::REMOVE_PED_HELMET(func_727(), 1);
}
iLocal_166=1;
}}
if(!iLocal_192){
if(CUTSCENE::GET_CUTSCENE_TIME() >=23397){
func_46(func_727());
PED::CLEAR_PED_WETNESS(func_727());
PED::CLEAR_PED_ENV_DIRT(func_727());
PED::CLEAR_PED_BLOOD_DAMAGE(func_727());
PED::RESET_PED_VISIBLE_DAMAGE(func_727());
iLocal_192=1;
}}
if(!iLocal_349){
if(CUTSCENE::GET_CUTSCENE_TIME() >=47617){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0)){
iLocal_124=PED::CREATE_PED_INSIDE_VEHICLE(iLocal_125[0], 26, func_18(12), -1, 1, 1);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_124, 1);
AUDIO::STOP_PED_SPEAKING(iLocal_124, 1);
ENTITY::SET_ENTITY_VISIBLE(iLocal_124, 0, 0);
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_125[0], 1, 0, 0);
iLocal_349=1;
}}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Main_Heli", 0)){
if(!PED::IS_PED_INJURED(iLocal_46[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0)){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_124)){
PED::DELETE_PED(&iLocal_124);
}
PED::SET_PED_INTO_VEHICLE(iLocal_46[2], iLocal_125[0], -1);
Var1={
Var1 
};
Var1={
ENTITY::GET_ENTITY_COORDS(iLocal_125[0], 1) 
};
TASK::CLEAR_SEQUENCE_TASK(&uLocal_520);
TASK::OPEN_SEQUENCE_TASK(&uLocal_520);
TASK::TASK_HELI_MISSION(0, iLocal_125[0], 0, 0, Var1.f_0, Var1.f_1, 65f, 4, 100f, 5f, -1f, 65, 0, -1082130432, 0);
TASK::TASK_HELI_MISSION(0, iLocal_125[0], 0, 0, 1450.547f, -1332.499f, 110f, 4, 100f, 0f, -1f, 110, 0, -1082130432, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_520);
TASK::TASK_PERFORM_SEQUENCE(iLocal_46[2], uLocal_520);
func_17();
VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_125[0], 1, 1, 0);
VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_125[0]);
ENTITY::SET_ENTITY_VELOCITY(iLocal_125[0], 0f, 4f, 5f);
VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_125[0], 1f);
VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iLocal_125[0], 1f);
}}
if(CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0)){
RECORDING::REPLAY_STOP_EVENT();
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 1);
}
if(!CUTSCENE::IS_CUTSCENE_PLAYING()){
if(CUTSCENE::WAS_CUTSCENE_SKIPPED()){
while (!CAM::IS_SCREEN_FADED_OUT()){
wait(0);
}
func_46(func_727());
PED::CLEAR_PED_WETNESS(func_727());
PED::CLEAR_PED_ENV_DIRT(func_727());
PED::CLEAR_PED_BLOOD_DAMAGE(func_727());
PED::RESET_PED_VISIBLE_DAMAGE(func_727());
wait(1500);
}
iLocal_472=MISC::GET_GAME_TIMER();
iLocal_315=1;
PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
func_4(0, 1, 1, 1, 0, 1);
func_3();
if(bLocal_358){
if(CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() !=4){
GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
}}}
break;
case 2:
break;
}}


void func_3(){
var uVar0;
uVar0=func_727();
WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, 0);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), 0);
PED::RESET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID());
PED::CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(PLAYER::PLAYER_PED_ID());
PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
}
if(!PED::IS_PED_INJURED(iVar0)){
WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 0);
PED::RESET_PED_IN_VEHICLE_CONTEXT(iVar0);
PED::CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(iVar0);
PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, 1);
}
if(iLocal_498 >=0){
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_carbinerifle"), 0)){
if(!PED::IS_PED_INJURED(iVar0)){
WEAPON::SET_PED_AMMO(iVar0, joaat("weapon_carbinerifle"), iLocal_498, 0);
}
WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_carbinerifle"));
}
if(WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_assaultrifle"), 0)){
if(!PED::IS_PED_INJURED(iVar0)){
WEAPON::SET_PED_AMMO(iVar0, joaat("weapon_assaultrifle"), iLocal_498, 0);
}
WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_assaultrifle"));
}}}
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0)){
WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, joaat("weapon_carbinerifle"));
}
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0)){
WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, joaat("weapon_assaultrifle"));
}
if(WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_726(5), 0)){
WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, func_726(5));
WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), func_726(5));
}
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_carbinerifle"), 0)){
WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_carbinerifle"));
}
if(WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_assaultrifle"), 0)){
WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_assaultrifle"));
}
if(WEAPON::HAS_PED_GOT_WEAPON(iVar0, func_726(5), 0)){
WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, func_726(5));
WEAPON::REMOVE_WEAPON_FROM_PED(iVar0, func_726(5));
}}}


void func_4(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5){
if(bParam3){
func_16(1, 1, 1, 0);
}
if(bParam0){
func_15();
func_441(1, 1, iParam5, 0, 0, 0, 0);
HUD::DISPLAY_RADAR(0);
HUD::DISPLAY_HUD(0);
iLocal_396=MISC::GET_GAME_TIMER();
}else{
func_441(0, 1, iParam5, 0, 0, 0, 0);
if(bParam1){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
HUD::DISPLAY_RADAR(1);
HUD::DISPLAY_HUD(1);
func_7(0);
CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
if(CAM::DOES_CAM_EXIST(uLocal_153)){
CAM::DESTROY_CAM(uLocal_153, 0);
}
func_6(&iLocal_151);
func_6(&iLocal_152);
if(bParam4){
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}}
iLocal_164=0;
iLocal_166=0;
bLocal_165=false;
iLocal_167=0;
iLocal_36=0;
if(bParam2){
func_5();
}}}


void func_5(){
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(800);
}}


void func_6(var uParam0){
if(CAM::DOES_CAM_EXIST(*uParam0)){
CAM::DESTROY_CAM(*uParam0, 0);
}}


void func_7(bool bParam0){
if(bParam0){
func_14();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_13(0)){
func_8(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_8(int iParam0){
if(func_12()){
return;
}
if(Global_20584){
if(func_11()){
func_10(1, 1);
}else{
func_10(0, 0);
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
if(!func_9()){
Global_20383.f_1=3;
}}

int func_9(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_10(bool bParam0, bool bParam1){
if(bParam0){
if(func_13(0)){
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


bool func_11(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_12(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}

int func_13(int iParam0){
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


void func_14(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_15(){
func_7(1);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}


void func_16(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
if(bParam0){
func_454();
}
if(bParam1){
if(!func_453() || (bParam0 && !bParam3)){
HUD::CLEAR_PRINTS();
}
HUD::CLEAR_REMINDER_MESSAGE();
}
if(bParam2){
HUD::CLEAR_HELP(1);
}}


void func_17(){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0)){
VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_125[0], 1, 1);
VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_125[0], 0, 1);
}}

int func_18(int iParam0){
struct<82> Var0;
switch (iParam0){
case 0:
return func_449(0);
break;
case 1:
return func_449(1);
break;
case 2:
return func_449(2);
break;
case 3:
return func_44(30);
break;
case 4:
return func_44(23);
break;
case 5:
return func_44(67);
break;
case 6:
return joaat("cs_mrk");
break;
case 7:
return joaat("ig_mrk");
break;
case 9:
return joaat("s_m_m_ciasec_01");
break;
case 8:
return joaat("s_m_m_pilot_02");
break;
case 10:
return joaat("cs_michelle");
break;
case 11:
return joaat("ig_fbisuit_01");
break;
case 12:
return joaat("s_m_m_fiboffice_01");
break;
case 13:
return joaat("frogger");
break;
case 14:
return joaat("buzzard");
break;
case 15:
return func_41(30, 0);
break;
case 16:
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_40(1, &Var0, 2);
return Var0.f_0;
break;
case 17:
return joaat("burrito");
break;
case 18:
return joaat("fbi2");
break;
case 19:
return joaat("utillitruck2");
break;
case 20:
return joaat("utillitruck3");
break;
case 21:
if(func_22()){
return func_21();
}else{
return joaat("voltic");
}
break;
case 22:
return func_20();
break;
case 23:
return func_19();
break;
case 24:
return joaat("prop_cs_police_torch");
break;
case 25:
return joaat("v_corp_offchair");
break;
case 26:
return joaat("p_ing_coffeecup_01");
break;
}
return 0;
}

int func_19(){
return joaat("p_rpulley_s");
}

int func_20(){
return joaat("prop_ld_test_01");
}


var func__21(){
return Global_104212.f_2890.f_12.f_66;
}

int func_22(){
if(func_26()){
if(func_23(func_25(), 1)){
return 1;
}}
return 0;
}


bool func_23(struct<3> Param0, int iParam1){
return func_24(Global_104212.f_2890.f_12.f_66, Param0, iParam1);
}

int func_24(int iParam0, struct<3> Param1, int iParam2){
struct<3> Var0;
struct<3> Var1;
if(iParam0==0){
return 0;
}
if(iParam2==1){
Param1={
func_25() 
};
}
MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
if((Var1.f_0 - Var0.f_0) > Param1.f_0){
return 0;
}elseif((Var1.f_1 - Var0.f_1) > Param1.f_1){
return 0;
}elseif((Var1.f_2 - Var0.f_2) > Param1.f_2){
return 0;
}
return 1;
}


Vector3 func__25(){
return 2.55f, 5.665f, 2.55f;
}


bool func_26(){
return func_27(&(Global_104212.f_2890));
}

int func_27(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_29(uParam0->f_12.f_66, 0, -1)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_28(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)){
return 0;
}
return 1;
}

int func_28(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_29(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_39()){
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
if((((!func_38() && !func_37()) && !func_36()) && !func_35()) && !func_39()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_34() || MISC::IS_PC_VERSION()) || func_33()){
}elseif(!func_36()){
return 0;
}}
if(bParam1){
if(!func_32(iParam0, iParam2)){
return 0;
}}
if(!func_30(iParam0)){
return 0;
}
return 1;
}

int func_30(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_31()){
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

int func_31(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_32(int iParam0, int iParam1){
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
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_33962 && iVar1 < Global_262145.f_33946){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_33971 && iVar1 < Global_262145.f_33954){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_33965 && iVar1 < Global_262145.f_33949){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_33959 && iVar1 < Global_262145.f_33943){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_33960 && iVar1 < Global_262145.f_33944){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_33957 && iVar1 < Global_262145.f_33941){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_33968 && iVar1 < Global_262145.f_33952){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_33972 && iVar1 < Global_262145.f_33956){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_33969 && iVar1 < Global_262145.f_33953){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_33958 && iVar1 < Global_262145.f_33942){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_33961 && iVar1 < Global_262145.f_33945){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_33970 && iVar1 < Global_262145.f_33955){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_33966 && iVar1 < Global_262145.f_33950){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_33967 && iVar1 < Global_262145.f_33951){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_33964 && iVar1 < Global_262145.f_33948){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_33963 && iVar1 < Global_262145.f_33947){
iVar0=0;
}}
return iVar0;
}


bool func_33(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__34(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_35(){
return 0;
}

int func_36(){
return 1;
}

int func_37(){
return 1;
}

int func_38(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_39(){
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


void func_40(bool bParam0, var uParam1, int iParam2){
int iVar0;
uParam1->f_88=1;
uParam1->f_84=255;
uParam1->f_85=255;
uParam1->f_86=255;
uParam1->f_97=1;
uParam1->f_3=1000;
uParam1->f_1=0;
switch (bParam0){
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

int func_41(int iParam0, int iParam1){
struct<82> Var0;
if(!func_43(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_42(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_42(bool bParam0, var uParam1, int iParam2){
int iVar0;
struct<98> Var1;
Var1.f_11=12;
Var1.f_31=49;
Var1.f_81=2;
Var1.f_88=1;
Var1.f_84=255;
Var1.f_85=255;
Var1.f_86=255;
Var1.f_3=1000;
Var1.f_1=0;
switch (bParam0){
case 14:
if(iParam2==1){
iVar0=joaat("issi2");
}elseif(iParam2==2){
iVar0=joaat("tribike");
}else{
iVar0=joaat("tribike");
}
switch (iVar0){
case joaat("issi2"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_5=88;
Var1.f_6=7;
Var1.f_9=0;
StringCopy(&(Var1.f_27), "P3RSEUS", 16);
break;
case joaat("tribike"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_4=0;
Var1.f_9=1;
break;
}
break;
case 15:
if(iParam2==1){
iVar0=joaat("issi2");
}elseif(iParam2==2){
iVar0=joaat("sanchez");
}else{
iVar0=joaat("issi2");
}
switch (iVar0){
case joaat("issi2"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_5=88;
Var1.f_6=7;
Var1.f_9=0;
StringCopy(&(Var1.f_27), "P3RSEUS", 16);
break;
case joaat("sanchez"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_4=0;
Var1.f_9=1;
break;
}
break;
case 17:
if(iParam2==1){
iVar0=joaat("sentinel2");
}elseif(iParam2==2){
iVar0=joaat("faggio2");
}else{
iVar0=joaat("sentinel2");
}
switch (iVar0){
case joaat("sentinel2"):
Var1.f_0=iVar0;
Var1.f_5=28;
Var1.f_6=28;
Var1.f_9=0;
StringCopy(&(Var1.f_27), "KRYST4L", 16);
break;
case joaat("faggio2"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_4=0;
Var1.f_9=1;
break;
}
break;
case 19:
if(iParam2==1){
iVar0=joaat("speedo");
}elseif(iParam2==3){
iVar0=joaat("emperor");
}else{
iVar0=joaat("speedo");
}
switch (iVar0){
case joaat("speedo"):
Var1.f_0=iVar0;
Var1.f_4=5;
Var1.f_2=10f;
Var1.f_9=1;
StringCopy(&(Var1.f_27), "LAMAR G", 16);
break;
case joaat("emperor"):
Var1.f_0=iVar0;
Var1.f_2=8f;
Var1.f_5=62;
Var1.f_6=21;
Var1.f_7=0;
Var1.f_8=156;
Var1.f_10=1;
StringCopy(&(Var1.f_27), "07KZF345", 16);
break;
}
break;
case 29:
Var1.f_0=joaat("adder");
Var1.f_5=62;
Var1.f_6=4;
Var1.f_7=68;
Var1.f_8=156;
Var1.f_10=1;
Var1.f_9=0;
StringCopy(&(Var1.f_27), "N4M4ST3", 16);
break;
case 30:
Var1.f_0=joaat("oracle2");
Var1.f_9=1;
Var1.f_4=7;
StringCopy(&(Var1.f_27), "81TDS937", 16);
break;
case 18:
case 20:
case 21:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 31:
case 32:
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
case 60:
case 61:
case 62:
case 63:
case 64:
case 39:
case 40:
case 46:
case 47:
case 65:
if(iParam2==1){
iVar0=joaat("asterope");
}elseif(iParam2==2){
iVar0=joaat("sanchez");
}else{
iVar0=joaat("asterope");
}
switch (iVar0){
case joaat("asterope"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_4=0;
Var1.f_9=1;
break;
case joaat("sanchez"):
Var1.f_0=iVar0;
Var1.f_2=0f;
Var1.f_4=0;
Var1.f_9=1;
break;
}
break;
default:
break;
}
*uParam1={
Var1 
};
}


bool func_43(bool bParam0){
return bParam0 < 3;
}

int func_44(bool bParam0){
if(!func_43(bParam0)){
return func_45(bParam0);
}elseif(bParam0 !=145){}
return 0;
}


var func__45(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_46(int iParam0){
int iVar0;
int iVar1;
bool bVar2;
iVar0=func_345(iParam0);
if(func_43(iVar0)){
if(!Global_100602[iVar0]){
if(Global_113648.f_2365.f_539.f_2391[iVar0] !=0){
if(func_344(iParam0) !=Global_113648.f_2365.f_539.f_2391[iVar0]){
func_343(iVar0);
Global_113648.f_2365.f_539.f_2391[iVar0]=func_344(iParam0);
}}}
func_149(iParam0, &(Global_113648.f_2365.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
if(!Global_100602[iVar0]){
bVar2=false;
if(iVar0==0){
if(!func_148(49)){
iVar1=func_134(iParam0, 12, -1);
if(iVar1==16){
bVar2=true;
}
func_47(func_449(0), 12, 16, 0, 0, 0, 0);
}
if(!func_148(44)){
iVar1=func_134(iParam0, 3, -1);
if(((((iVar1==70 || iVar1==71) || iVar1==72) || iVar1==73) || iVar1==74) || iVar1==75){
bVar2=true;
}
iVar1=func_134(iParam0, 4, -1);
if((((iVar1==41 || iVar1==42) || iVar1==43) || iVar1==44) || iVar1==45){
bVar2=true;
}
func_47(func_449(0), 3, 70, 1, 0, 0, 0);
func_47(func_449(0), 3, 71, 1, 0, 0, 0);
func_47(func_449(0), 3, 72, 1, 0, 0, 0);
func_47(func_449(0), 3, 73, 1, 0, 0, 0);
func_47(func_449(0), 3, 74, 1, 0, 0, 0);
func_47(func_449(0), 3, 75, 1, 0, 0, 0);
func_47(func_449(0), 4, 41, 1, 0, 0, 0);
func_47(func_449(0), 4, 42, 1, 0, 0, 0);
func_47(func_449(0), 4, 43, 1, 0, 0, 0);
func_47(func_449(0), 4, 44, 1, 0, 0, 0);
func_47(func_449(0), 4, 45, 1, 0, 0, 0);
}}elseif(iVar0==2){
iVar1=func_134(iParam0, 4, -1);
if(iVar1==93){
bVar2=true;
}}
if(bVar2){
func_343(iVar0);
func_149(iParam0, &(Global_113648.f_2365.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
}}
Global_100602[iVar0]=1;
}}


void func_47(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6){
func_133(iParam0, iParam1, iParam2, bParam3);
func_121(iParam0, iParam1, iParam2, bParam4, 1);
if(bParam5){
func_120(iParam0, iParam1, iParam2, 0);
}
if(iParam6==1){
func_48(iParam0, iParam1, iParam2, 0);
}}

int func_48(int iParam0, int iParam1, int iParam2, bool bParam3){
Global_78341[1 /*14*/]={
func_50(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_49(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 0, 1);
}else{
func_49(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 2, Global_78341[1 /*14*/].f_1, 1, 0);
}
return 1;
}
return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113648.f_2365[iParam1 /*164*/][iParam3]), iParam4);
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
struct<14> func_50(int iParam0, int iParam1, int iParam2, int iParam3){
func_119();
if(iParam0==joaat("player_zero")){
func_101(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_82(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_51(iParam1, iParam2);
}
return Global_78341[0 /*14*/];
}


void func_51(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_81(iParam1);
break;
case 2:
func_80(iParam1);
break;
case 3:
func_77(iParam1);
break;
case 4:
func_76(iParam1);
break;
case 6:
func_75(iParam1);
break;
case 5:
func_74(iParam1);
break;
case 8:
func_73(iParam1);
break;
case 9:
func_72(iParam1);
break;
case 10:
func_71(iParam1);
break;
case 1:
func_70(iParam1);
break;
case 7:
func_69(iParam1);
break;
case 11:
func_68(iParam1);
break;
case 12:
func_67(iParam1);
break;
case 13:
func_66(iParam1);
break;
case 14:
func_52(iParam1);
break;
}}


void func_52(int iParam0){
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
func_64(iVar7, iParam0, 155, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_53(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_63(iParam8);
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
if(func_62(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_60(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_60(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_60(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_60(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_60(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_60(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_49(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_49(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_49(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_62(14)){
return;
}
uVar0=func_56(func_59(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_56(func_55(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_54(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_56(iVar1, Global_78338, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
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


bool func_54(int iParam0, int iParam1, var uParam2){
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

int func_55(int iParam0, int iParam1){
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

int func_56(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
iVar0=Global_2805029[iParam0 /*3*/][func_57(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_57(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_58();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_58(){
return Global_1574918;
}

int func_59(int iParam0, int iParam1){
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

int func_60(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_61(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_56(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_61(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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


bool func_62(int iParam0){
return Global_43257==iParam0;
}

int func_63(int iParam0){
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


void func_64(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_53(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_53(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_53(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_53(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_65(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_53(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_65(int iParam0){
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


void func_66(int iParam0){
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
func_64(iVar7, iParam0, 9, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_67(int iParam0){
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
func_64(iVar7, iParam0, 48, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_68(int iParam0){
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
func_64(iVar7, iParam0, 1, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_69(int iParam0){
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
func_64(iVar7, iParam0, 1, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_70(int iParam0){
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
func_64(iVar7, iParam0, 6, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_71(int iParam0){
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
func_64(iVar7, iParam0, 33, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_72(int iParam0){
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
func_64(iVar7, iParam0, 17, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_73(int iParam0){
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
func_64(iVar7, iParam0, 18, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_74(int iParam0){
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
func_64(iVar7, iParam0, 7, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_75(int iParam0){
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
func_64(iVar7, iParam0, 84, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_76(int iParam0){
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
func_64(iVar7, iParam0, 104, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_77(int iParam0){
if(iParam0 < 136){
func_79(iParam0);
}else{
func_78(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_64(3, iParam0, 242, -1);
}}


void func_78(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_79(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_80(int iParam0){
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
func_64(iVar7, iParam0, 9, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_81(int iParam0){
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
func_64(iVar7, iParam0, 7, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_82(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_100(iParam1);
break;
case 2:
func_99(iParam1);
break;
case 3:
func_95(iParam1);
break;
case 4:
func_94(iParam1);
break;
case 6:
func_93(iParam1);
break;
case 5:
func_92(iParam1);
break;
case 8:
func_91(iParam1);
break;
case 9:
func_90(iParam1);
break;
case 10:
func_89(iParam1);
break;
case 1:
func_88(iParam1);
break;
case 7:
func_87(iParam1);
break;
case 11:
func_86(iParam1);
break;
case 12:
func_85(iParam1);
break;
case 13:
func_84(iParam1);
break;
case 14:
func_83(iParam1);
break;
}}


void func_83(int iParam0){
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
func_64(iVar7, iParam0, 175, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_84(int iParam0){
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
func_64(iVar7, iParam0, 9, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_85(int iParam0){
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
func_64(iVar7, iParam0, 47, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_86(int iParam0){
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
func_64(iVar7, iParam0, 63, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_87(int iParam0){
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
func_64(iVar7, iParam0, 1, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_88(int iParam0){
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
func_64(iVar7, iParam0, 5, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_89(int iParam0){
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
func_64(iVar7, iParam0, 53, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_90(int iParam0){
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
func_64(iVar7, iParam0, 12, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_91(int iParam0){
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
func_64(iVar7, iParam0, 77, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_92(int iParam0){
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
func_64(iVar7, iParam0, 7, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_93(int iParam0){
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
func_64(iVar7, iParam0, 134, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_94(int iParam0){
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
func_64(iVar7, iParam0, 117, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_95(int iParam0){
if(iParam0 < 107){
func_98(iParam0);
}elseif(iParam0 < 227){
func_97(iParam0);
}else{
func_96(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_64(3, iParam0, 318, -1);
}}


void func_96(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_97(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_98(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_99(int iParam0){
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
func_64(iVar7, iParam0, 21, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_100(int iParam0){
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
func_64(iVar7, iParam0, 10, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_101(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_118(iParam1);
break;
case 2:
func_117(iParam1);
break;
case 3:
func_114(iParam1);
break;
case 4:
func_113(iParam1);
break;
case 6:
func_112(iParam1);
break;
case 5:
func_111(iParam1);
break;
case 8:
func_110(iParam1);
break;
case 9:
func_109(iParam1);
break;
case 10:
func_108(iParam1);
break;
case 1:
func_107(iParam1);
break;
case 7:
func_106(iParam1);
break;
case 11:
func_105(iParam1);
break;
case 12:
func_104(iParam1);
break;
case 13:
func_103(iParam1);
break;
case 14:
func_102(iParam1);
break;
}}


void func_102(int iParam0){
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
func_64(iVar7, iParam0, 113, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_103(int iParam0){
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
func_64(iVar7, iParam0, 10, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_104(int iParam0){
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
func_64(iVar7, iParam0, 53, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_105(int iParam0){
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
func_64(iVar7, iParam0, 45, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_106(int iParam0){
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
func_64(iVar7, iParam0, 1, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_107(int iParam0){
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
func_64(iVar7, iParam0, 5, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_108(int iParam0){
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
func_64(iVar7, iParam0, 48, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_109(int iParam0){
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
func_64(iVar7, iParam0, 20, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_110(int iParam0){
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
func_64(iVar7, iParam0, 24, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


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
func_64(iVar7, iParam0, 14, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_112(int iParam0){
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
func_64(iVar7, iParam0, 99, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_113(int iParam0){
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
func_64(iVar7, iParam0, 113, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_114(int iParam0){
if(iParam0 < 60){
func_116(iParam0);
}else{
func_115(iParam0);
}
if(Global_78341[0 /*14*/].f_2==-1){
func_64(3, iParam0, 181, -1);
}}


void func_115(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_116(int iParam0){
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
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_117(int iParam0){
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
func_64(iVar7, iParam0, 6, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_118(int iParam0){
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
func_64(iVar7, iParam0, 7, -1);
return;
break;
}
func_53(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_119(){
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


void func_120(int iParam0, int iParam1, int iParam2, bool bParam3){
if(iParam2==-99){
return;
}
switch (iParam0){
case joaat("player_zero"):
if(!bParam3 || MISC::IS_BIT_SET(Global_113648.f_7231[1], 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_3816[0 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
}
break;
case joaat("player_two"):
if(!bParam3 || MISC::IS_BIT_SET(Global_113648.f_7231[3], 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_3816[1 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
}
if(!bParam3 || MISC::IS_BIT_SET(Global_113648.f_7231[4], 0)){
MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_3816[2 /*166*/][iParam1 /*11*/][(iParam2 / 32)]), (iParam2 % 32));
}
break;
}}

int func_121(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
var uVar4;
int iVar5;
Global_78341[1 /*14*/]={
func_50(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_49(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 1, Global_78341[1 /*14*/].f_1, 1, 0);
if(iParam1==12){
iVar0=1;
if(iParam0==joaat("player_zero")){
if(iParam2==31){
iVar0=0;
}}
if(iVar0==1){
uVar3={
func_129(iParam0, iParam2) 
};
iVar1=0;
while (iVar1 <=14){
if((uVar3[iVar1] !=-99 && iVar1 !=12) && iVar1 !=14){
if(iVar1 !=13){
func_121(iParam0, iVar1, uVar3[iVar1], 1, 1);
func_133(iParam0, iVar1, uVar3[iVar1], 1);
}else{
uVar4={
func_122(iParam0, uVar3[iVar1]) 
};
iVar2=0;
while (iVar2 <=8){
func_121(iParam0, 14, uVar4[iVar2], 1, 1);
func_133(iParam0, 14, uVar4[iVar2], 1);
iVar2++;
}}
}
iVar1++;
}}}}else{
func_49(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 1, Global_78341[1 /*14*/].f_1, 0, 1);
}
if(iParam4==1 && bParam3==1){
switch (iParam0){
case joaat("player_zero"):
break;
case joaat("player_one"):
switch (iParam1){
case 3:
if(iParam2 >=176 && iParam2 <=191){
iVar5=(227 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 3, iVar5, 1, 0);
}elseif(iParam2 >=227 && iParam2 <=242){
iVar5=(176 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 3, iVar5, 1, 0);
}
break;
case 11:
if(iParam2 >=9 && iParam2 <=24){
iVar5=(25 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 11, iVar5, 1, 0);
}elseif(iParam2 >=25 && iParam2 <=40){
iVar5=(9 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 11, iVar5, 1, 0);
}
break;
case 8:
if(iParam2 >=27 && iParam2 <=42){
iVar5=(43 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 8, iVar5, 1, 0);
iVar5=(59 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 8, iVar5, 1, 0);
}elseif(iParam2 >=43 && iParam2 <=58){
iVar5=(27 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 8, iVar5, 1, 0);
iVar5=(59 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 8, iVar5, 1, 0);
}elseif(iParam2 >=59 && iParam2 <=74){
iVar5=(27 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 8, iVar5, 1, 0);
iVar5=(43 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 8, iVar5, 1, 0);
}
break;
case 14:
if(iParam2 >=64 && iParam2 <=79){
iVar5=(41 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 14, iVar5, 1, 0);
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 4:
if(iParam2 >=81 && iParam2 <=90){
iVar5=(94 + Global_78341[1 /*14*/].f_4);
func_121(iParam0, 4, iVar5, 1, 0);
}
break;
case 12:
if(iParam2==2){
func_121(iParam0, 14, 17, 1, 0);
}
break;
}
break;
}}
return 1;
}
return 0;
}


struct<10> func_122(int iParam0, int iParam1){
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
func_128(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_128(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_128(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_128(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_128(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_128(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_128(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_128(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_128(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_128(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_128(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_123(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_128(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_128(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_128(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_128(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_128(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_128(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_128(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_128(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_128(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_128(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_123(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_128(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_128(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_128(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_128(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_128(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_128(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_128(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_128(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_128(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_128(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_123(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_128(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_128(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_128(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_128(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_128(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_128(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_128(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_128(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_128(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_128(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_128(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_128(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_128(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_128(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_128(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_128(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_128(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_128(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_128(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_128(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_128(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_128(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_128(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_128(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_128(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_128(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_123(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_128(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_128(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_128(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_128(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_128(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_128(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_128(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_128(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_128(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_128(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_128(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_128(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_128(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_128(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_128(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_128(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_128(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_128(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_128(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_128(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_128(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_128(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_128(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_128(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_128(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_123(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_123(int iParam0, int iParam1, int iParam2, int iParam3){
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
(*iParam0)[Var2.f_2]=func_124(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_127(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_126(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_65(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_125(iParam0, func_65(iParam2)) + iVar4);
}}
return -99;
}

int func_125(int iParam0, int iParam1){
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

int func_126(int iParam0){
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

int func_127(int iParam0){
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


void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
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
struct<17> func_129(int iParam0, int iParam1){
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
func_132(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_132(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_132(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_132(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_132(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_132(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_132(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_132(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_132(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_132(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_132(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_132(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_132(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_132(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_132(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_132(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_132(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_132(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_132(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_132(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_132(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_132(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_132(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_132(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_132(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_132(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_132(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_132(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_132(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_132(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_132(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_132(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_132(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_132(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_132(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_132(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_132(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_132(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_132(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_132(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_132(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_132(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_132(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_132(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_132(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_132(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_132(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_132(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_132(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_132(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_132(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_132(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_132(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_132(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_130(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_132(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_132(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_132(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_132(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_132(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_132(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_132(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_132(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_132(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_132(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_132(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_132(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_132(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_132(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_132(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_132(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_132(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_132(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_132(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_132(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_132(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_132(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_132(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_132(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_132(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_132(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_132(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_132(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_132(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_132(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_132(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_132(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_132(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_132(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_132(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_132(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_132(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_132(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_132(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_132(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_132(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_132(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_132(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_132(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_132(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_132(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_132(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_130(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_132(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_132(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_132(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_132(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_132(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_132(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_132(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_132(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_132(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_132(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_132(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_132(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_132(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_132(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_132(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_132(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_132(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_132(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_132(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_132(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_132(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_132(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_132(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_132(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_132(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_132(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_132(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_132(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_132(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_132(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_132(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_132(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_132(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_132(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_132(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_132(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_132(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_132(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_132(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_132(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_132(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_132(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_132(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_132(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_132(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_132(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_132(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_132(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_130(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_132(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_132(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_132(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_132(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_132(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_132(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_132(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_132(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_132(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_132(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_132(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_132(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_132(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_132(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_132(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_132(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_132(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_132(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_132(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_132(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_132(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_132(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_132(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_132(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_132(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_132(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_130(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_132(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_132(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_132(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_132(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_132(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_132(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_132(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_132(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_132(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_132(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_132(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_132(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_132(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_132(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_132(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_132(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_132(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_132(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_132(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_132(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_132(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_132(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_132(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_132(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_132(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_132(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_132(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_132(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_130(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_130(var uParam0, int iParam1, int iParam2, int iParam3){
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
(*uParam0)[func_131(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_131(Var2.f_2)]=func_124(iParam1, Var2.f_0, func_131(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_131(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_131(int iParam0){
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


void func_132(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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

int func_133(int iParam0, int iParam1, int iParam2, bool bParam3){
Global_78341[1 /*14*/]={
func_50(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_49(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 0, Global_78341[1 /*14*/].f_1, 1, 0);
}else{
func_49(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 0, Global_78341[1 /*14*/].f_1, 0, 1);
}
return 1;
}
return 0;
}

int func_134(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
if(!PED::IS_PED_INJURED(iParam0)){
if(iParam1==12){
iVar0=0;
while (iVar0 <=53){
if(func_141(iParam0, iParam1, iVar0)){
return iVar0;
}
iVar0++;
}}elseif(iParam1==13){
iVar1=0;
while (iVar1 <=19){
if(func_141(iParam0, iParam1, iVar1)){
return iVar1;
}
iVar1++;
}
return 31;
}elseif(iParam1==14){
if(iParam2==-1){
}else{
return func_137(iParam0, iParam2);
}}else{
return func_135(iParam0, iParam1);
}}
return -99;
}

int func_135(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_65(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_136(iParam0, iVar1, iVar2, iParam1);
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_65(iParam3);
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

int func_137(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
if(iVar0==-1){
return func_140(iParam1);
}
iVar1=PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
return func_138(iParam0, iVar0, iVar1, iParam1);
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_140(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_124(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_124(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
iVar3=(iVar3 + func_139(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_140(iParam3);
}

int func_139(int iParam0, int iParam1){
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

int func_140(int iParam0){
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

int func_141(int iParam0, int iParam1, int iParam2){
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
func_50(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_129(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_141(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar6={
func_122(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_141(iParam0, 14, uVar6[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78341[2 /*14*/]={
func_50(iVar0, 14, iVar4, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar3){
if(func_141(iParam0, 14, iVar4)){
if(!func_142(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_135(iParam0, iVar2);
Global_78341[2 /*14*/]={
func_50(iVar0, iVar2, iVar1, -1) 
};
if(!func_142(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar8={
func_122(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 <=8){
if(!func_141(iParam0, 14, uVar8[iVar7])){
return 0;
}
iVar7++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_65(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_65(iParam1))){
return 1;
}
return 0;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
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
func_122(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_147(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_146(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_145(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_143(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_146(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_145(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_143(iParam0, iParam2, iParam3, -1)){
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
if(func_146(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_145(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_143(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_144(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_144(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam2, 1, 3), -1842686353, 0));
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
iParam3=func_144(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_144(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_126(iParam0));
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
iVar4=(iParam1 - func_125(iParam0, func_65(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_65(iParam2));
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_144(iParam0, iParam2, 1, 3);
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
iParam3=func_144(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_144(iParam0, iParam2, 14, 3);
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
iParam3=func_144(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_147(int iParam0, int iParam1, int iParam2){
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


bool func_148(int iParam0){
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_149(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
struct<5> Var12;
if(!PED::IS_PED_INJURED(iParam0) || iParam5){
iVar0=func_345(iParam0);
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar3=0;
while (iVar3 < 12){
if(iVar3 !=1 || (iVar3==1 && !bParam2)){
if(bParam4){
if(uParam1->f_13[iVar3] !=0 && uParam1->f_13[iVar3] >=PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3)){
uParam1->f_13[iVar3]=0;
}
if((*uParam1)[iVar3] !=0 && (*uParam1)[iVar3] >=PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3])){
(*uParam1)[iVar3]=0;
}}
PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
}
iVar3++;
}
iVar3=0;
while (iVar3 < 9){
if(bParam4){
if(uParam1->f_39[iVar3] !=-1 && uParam1->f_39[iVar3] !=255){
if(uParam1->f_39[iVar3] >=PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3)){
uParam1->f_39[iVar3]=-1;
}elseif(uParam1->f_49[iVar3] >=PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3])){
uParam1->f_49[iVar3]=0;
}}}
if(uParam1->f_39[iVar3] !=-1 && uParam1->f_39[iVar3] !=255){
PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false, 1);
}else{
PED::CLEAR_PED_PROP(iParam0, iVar3, 1);
}
iVar3++;
}
if(func_43(iVar0)){
Global_113648.f_2365.f_539[iVar0 /*65*/].f_59=uParam1->f_59;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=uParam1->f_60;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=uParam1->f_61;
if(func_342(iParam0, iVar1, &iVar2, 0)){
func_328(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_113648.f_2365.f_539[iVar0 /*65*/].f_62=uParam1->f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=uParam1->f_63;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=uParam1->f_64;
if(func_326(iParam0, iVar1, &iVar2)){
func_328(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
bVar4=func_323(iParam0);
func_322(754, uParam1->f_60, Global_78338, 1, 0);
func_322(755, uParam1->f_61, Global_78338, 1, 0);
iVar5=func_136(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
if(iVar5 !=-99){
iVar6=-99;
if(iVar1==joaat("mp_m_freemode_01")){
iVar6=func_320(iVar5);
}elseif(iVar1==joaat("mp_f_freemode_01")){
iVar6=func_318(iVar5);
}
if(iVar6 !=-99 && iVar5 !=iVar6){
iVar5=iVar6;
}}
func_152(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
if(!bParam2){
iVar7=func_136(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
func_152(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}
if(!bParam3){
iVar8=func_138(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
func_152(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
iVar9=uParam1->f_59;
if(iVar1==joaat("mp_m_freemode_01")){
iVar9=func_320(iVar9);
}else{
iVar9=func_318(iVar9);
}
func_322(753, iVar9, Global_78338, 1, 0);
func_322(2053, iVar9, Global_78338, 1, 0);
func_150(161, 1, -1, 1);
}
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
iVar10=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
iVar11=FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
if(iVar10==joaat("dlc_mp_arena_m_berd_13_0") || iVar10==joaat("dlc_mp_arena_f_berd_13_0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("arena_draw_0"), 1)){
FILES::INIT_SHOP_PED_PROP(&Var12);
if(iVar10==joaat("dlc_mp_arena_m_berd_13_0")){
FILES::GET_SHOP_PED_QUERY_PROP(joaat("dlc_mp_arena_m_peyes_0_0"), &Var12);
}else{
FILES::GET_SHOP_PED_QUERY_PROP(joaat("dlc_mp_arena_f_peyes_0_0"), &Var12);
}
PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("arena_draw_0"), 1)){
PED::CLEAR_PED_PROP(iParam0, 1, 1);
}}}}


void func_150(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_151()){
iVar0=Global_2848282[iParam0 /*3*/][func_57(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_151(){
return 1;
return 0;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13){
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
func_285(iVar5, iParam1, iParam2, -1) 
};
if(!func_284(iParam3)){
Global_78339=(Global_78339 - 1);
return 0;
}
if(iParam1==11 && Global_78339 > 1){
}elseif(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 4)){
func_281(iVar5, iParam1, iParam2, 1);
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
func_129(iVar5, iParam2) 
};
}
iVar0=0;
while (iVar0 <=14){
if(uVar14[iVar0] !=-99){
if(iVar0==10 && uVar14.f_16){
Global_78341[1 /*14*/]={
func_285(iVar5, 10, 0, -1) 
};
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_65(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_281(iVar5, 10, 0, 1);
}}else{
Global_78341[1 /*14*/]={
func_285(iVar5, iVar0, uVar14[iVar0], -1) 
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
func_122(iVar5, uVar14[iVar0]) 
};
}
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_285(iVar5, 14, uVar15[iVar1], -1) 
};
func_280(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_281(iVar5, iVar0, uVar14[iVar0], 1);
}
iVar1++;
}
}
elseif(iVar0 !=14 && iVar0 !=12){
if(iVar0 !=1){
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_65(iVar0)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(iVar0), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}}else{
func_152(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_281(iVar5, iVar0, uVar14[iVar0], 1);
}
}}}}elseif(iVar0 !=12 && iVar0 !=14){
Global_78341[1 /*14*/]={
func_285(iVar5, iVar0, func_279(iParam0, iVar0, -1), -1) 
};
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 3)){
uVar16={
func_129(iVar5, 0) 
};
func_152(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
iVar0++;
}
PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
Global_2883588=uVar12;
Global_2883589=uVar13;
if(iParam5==0){
iVar17=func_278();
if(iVar17 !=-1){
func_275(iVar17, 0, iParam10);
}
func_273(iParam0, 11, uVar14[11], iParam6, 0);
}}elseif(iParam1==13){
uVar18={
func_122(iVar5, iParam2) 
};
iVar1=0;
while (iVar1 <=8){
Global_78341[1 /*14*/]={
func_285(iVar5, 14, uVar18[iVar1], -1) 
};
func_280(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_281(iVar5, 14, uVar18[iVar1], 1);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_271(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
if(iVar3 !=-99){
func_152(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}}}
iVar1++;
}}elseif(iParam1==14){
func_280(iParam0, Global_78341[1 /*14*/].f_12, Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4);
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 1)){
func_281(iVar5, iParam1, iParam2, 1);
}
if(Global_78341[1 /*14*/].f_12==0){
if(MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_hair"), 1)){
}elseif(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("hair_shrink"))){
func_152(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}}
if(Global_78341[1 /*14*/].f_12==0){
func_264(iParam0);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_271(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_152(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar2++;
}
iVar3=func_271(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_152(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}else{
if((iParam1==4 || iParam1==11) || iParam1==8){
iVar19=func_65(iParam1);
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
iVar23=func_135(iParam0, 11);
iVar24=func_135(iParam0, 8);
iVar25=func_135(iParam0, 4);
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
if(iVar5==joaat("mp_m_freemode_01")){
iVar22=func_144(iVar5, iParam2, 11, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar22=func_144(iVar5, iParam2, 11, 4);
}
if((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_robe"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("morph_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("gorka_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("cat_suit"), 0)){
}else{
iVar8=func_135(iParam0, 8);
}}
iVar26=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("gloves"), 0)){
iVar27=func_263(iVar5, iVar24, iVar23, iVar25);
if(iVar27==-99){
iVar27=func_271(iParam0, iVar5, 11, iVar23, 3, 0);
}
switch (iVar26){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar27=11;
iVar22=func_144(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("dress"), 0)){
iVar27=-99;
}
break;
}
if(iVar27 !=-99){
iVar28=0;
while (iVar28 < 18){
if(func_262(iVar5, iVar27, iVar28)==iVar26){
iVar10=iVar28;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar28++;
}}}
iVar22=-1;
if((iVar5==joaat("mp_f_freemode_01") && iParam2 >=256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iParam2, 11, 4), joaat("vest"), 0)){
iVar23=func_135(iParam0, 11);
if(iVar23 >=256){
iVar22=func_144(iVar5, iVar23, 11, 4);
}
if(iVar23 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0)){
iVar29=func_260(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar29 !=-99){
func_152(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(func_259(iVar5, iParam2, -1)){
if(iVar5==joaat("mp_m_freemode_01")){
if(iVar23 >=237){
iVar22=func_144(iVar5, iVar23, 11, 3);
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(iVar23 >=256){
iVar22=func_144(iVar5, iVar23, 11, 4);
}}
iVar8=-99;
if(!func_259(iVar5, iVar23, -1)){
if((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("vest_shirt"), 0))){
}
elseif((iVar5==joaat("mp_f_freemode_01") && iVar23 >=256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("apart_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("stunt_draw_9"), 0))){
}
else{
iVar30=func_258(iParam0, iParam2);
iVar31=func_260(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(iVar31 !=-99){
func_152(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
iVar8=-99;
}elseif(iVar30 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
func_152(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}else{
if(iVar5==joaat("mp_m_freemode_01")){
iVar32=func_257(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iVar32, -1) 
};
iVar31=func_260(iVar5, iVar32, iParam2, Global_78341[1 /*14*/].f_4);
iVar33=func_144(iVar5, iParam2, 11, 3);
if((iVar31==-99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("biker_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("open_short"), 0)){
iVar31=240;
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -1099375697, 0)){
iVar31=80;
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iParam2, 11, 4), joaat("biker_vest"), 0)){
iVar31=120;
}
else{
iVar31=48;
}}
func_152(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}
}}else{
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iVar23, -1) 
};
iVar34=Global_78341[1 /*14*/].f_3;
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iParam2, -1) 
};
iVar35=Global_78341[1 /*14*/].f_3;
if(iVar34 !=iVar35){
iVar37=func_258(iParam0, iParam2);
Global_78341[1 /*14*/]={
func_285(iVar5, 8, iVar24, -1) 
};
iVar36=Global_78341[1 /*14*/].f_4;
iVar38=func_256(iVar5, iVar24, iVar36);
if(iVar37 !=-99 && (iParam0==PLAYER::PLAYER_PED_ID() || iParam0==Global_4539790)){
iVar39=iVar37;
}elseif(iVar38==-99){
iVar39=iVar24;
if(iVar5==joaat("mp_m_freemode_01")){
iVar40=func_144(iVar5, iParam2, 11, 3);
if(((iParam2 >=96 && iParam2 <=107) || func_255(iVar40)==6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("biker_vest"), 0)){
iVar38=func_257(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iVar38, -1) 
};
iVar39=func_260(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
if(iVar5==joaat("mp_f_freemode_01") && ((iVar24==32 || iVar24==33) || iVar24==119)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iParam2, 11, 4), joaat("jacket_only"), 0)){
iVar38=func_257(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iVar38, -1) 
};
iVar39=func_260(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}
iVar41=-1;
if(iVar5==joaat("mp_m_freemode_01")){
iVar41=func_144(iVar5, iVar24, 8, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar41=func_144(iVar5, iVar24, 8, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("overcoat_accs"), 0)){
iVar38=func_257(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iVar38, -1) 
};
iVar39=func_260(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
}}else{
iVar39=func_260(iVar5, iVar38, iParam2, iVar36);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iParam2, 11, 3), joaat("low2_open_check"), 0)){
if(!func_254(iVar5, func_135(iParam0, 4), iVar38)){
iVar39=240;
}
}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iParam2, 11, 4), joaat("low2_open_check"), 0)){
if(!func_254(iVar5, func_135(iParam0, 4), iVar38)){
iVar39=48;
}
}}}
if(iVar39 !=-99){
func_152(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_m_freemode_01")){
iVar38=func_257(iVar5, 11, -1);
Global_78341[1 /*14*/]={
func_285(iVar5, 11, iVar38, -1) 
};
iVar39=func_260(iVar5, iVar38, iParam2, Global_78341[1 /*14*/].f_4);
if(iVar39==-99){
iVar39=240;
}
func_152(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}elseif(iVar5==joaat("mp_f_freemode_01")){
func_152(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}}}
func_251(iVar5, iParam2);
if(!bParam13){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
}}
func_273(iParam0, iParam1, iParam2, iParam6, 0);
if(iParam5==0){
iVar6=func_263(iVar5, func_279(iParam0, 8, -1), iParam2, func_279(iParam0, 4, -1));
}}elseif(iParam1==2){
if(iParam5==0){
if(iParam8==-1){
iParam8=func_56(2153, iParam10, 0);
}
if(iParam9==-1){
iParam9=func_56(2160, iParam10, 0);
}
PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
}
if(iParam7==0){
if(iParam2 !=-99){
iVar42=-99;
if(iVar5==joaat("mp_m_freemode_01")){
iVar42=func_320(iParam2);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar42=func_318(iParam2);
}
if(iVar42 !=-99 && iParam2 !=iVar42){
iParam2=iVar42;
}}
func_199(iParam0, iParam2, iParam10, bParam11);
}}elseif(iParam1==8){
iVar43=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("gloves"), 0)){
iVar44=func_135(iParam0, 11);
iVar45=func_135(iParam0, 4);
iVar46=func_263(iVar5, iParam2, iVar44, iVar45);
if(iVar46==-99){
iVar46=func_271(iParam0, iVar5, 11, iVar44, 3, 0);
}
switch (iVar43){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar46=11;
iVar47=func_144(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("dress"), 0)){
iVar46=-99;
}
break;
}
if(iVar46 !=-99){
iVar48=0;
while (iVar48 < 18){
if(func_262(iVar5, iVar46, iVar48)==iVar43){
iVar10=iVar48;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar48++;
}}}
func_273(iParam0, iParam1, iParam2, iParam6, 0);
iVar49=func_135(iParam0, 11);
if(func_259(iVar5, iVar49, -1)){
iVar50=func_256(iVar5, iParam2, Global_78341[1 /*14*/].f_4);
func_251(iVar5, iVar50);
}
if(iParam5==0){
iVar6=func_263(iVar5, iParam2, func_135(iParam0, 11), func_135(iParam0, 4));
}}elseif(iParam1==9){
if(iParam2 >=1 && iParam2 <=41){
iVar51=func_135(iParam0, 7);
if(!func_196(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(7), 0, 0, 0);
}}}elseif(iParam1==1){
if(((iVar5==joaat("mp_m_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0)) || ((iVar5==joaat("mp_f_freemode_01") && iParam2 >=26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("shrink_head"), 0))){
iVar52=func_56(2100, iParam10, 0);
iVar53=func_56(2101, iParam10, 0);
iVar54=func_56(2102, iParam10, 0);
uVar55=func_195(135, iParam10);
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
func_180(iParam0, iParam10);
}}elseif(iParam1==4){
iVar57=func_135(iParam0, 11);
iVar58=func_135(iParam0, 8);
if(iVar5==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iVar57, 11, 3), joaat("low2_open_check"), 0)){
if(!func_254(iVar5, iParam2, func_256(iVar5, iVar58, 0))){
func_152(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}}}elseif(iVar5==joaat("mp_f_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iVar5, iVar57, 11, 4), joaat("low2_open_check"), 0)){
if(!func_254(iVar5, iParam2, func_256(iVar5, iVar58, 0))){
func_152(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
Global_78341[1 /*14*/]={
func_285(iVar5, iParam1, iParam2, -1) 
};
}}}
if(iParam5==0){
iVar6=func_263(iVar5, func_135(iParam0, 8), func_135(iParam0, 11), iParam2);
}
iVar59=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("gloves"), 0)){
iVar60=func_263(iVar5, iVar58, iVar57, iParam2);
if(iVar60==-99){
iVar60=func_271(iParam0, iVar5, 11, iVar57, 3, 0);
}
switch (iVar59){
case joaat("dlc_mp_val_f_uppr0_0"):
case joaat("dlc_mp_val_f_uppr0_1"):
case joaat("dlc_mp_val_f_uppr0_2"):
case joaat("dlc_mp_val_f_uppr0_3"):
case joaat("dlc_mp_val_f_uppr0_4"):
case joaat("dlc_mp_val_f_uppr0_5"):
iVar60=11;
iVar61=func_144(iVar5, iParam2, 11, 4);
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("dress"), 0)){
iVar60=-99;
}
break;
}
if(iVar60 !=-99){
iVar62=0;
while (iVar62 < 18){
if(func_262(iVar5, iVar60, iVar62)==iVar59){
iVar10=iVar62;
iVar11=PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
}
iVar62++;
}}}}
if(iParam4==-1){
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_65(iParam1)));
}else{
PED::SET_PED_COMPONENT_VARIATION(iParam0, func_65(iParam1), Global_78341[1 /*14*/].f_3, Global_78341[1 /*14*/].f_4, iParam4);
}
if(iParam5==0){
if(Global_78339==1){
iVar2=0;
while (iVar2 < 15){
iVar3=func_271(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
if(iVar3 !=-99){
func_152(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1==10);
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
iVar6=func_263(iVar5, iVar3, func_135(iParam0, 11), func_135(iParam0, 4));
}
}}
iVar2++;
}
iVar3=func_271(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_152(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if((iParam1==11 || iParam1==8) || iParam1==4){
if(func_179(iParam0)){
iVar63=func_177(iParam0, iVar5, iParam1, iParam2);
if(iVar63 > 0){
iVar63=(iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
if(!func_176(iParam0, 9, iVar63)){
func_152(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}else{
func_152(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("over_jacket"))){
func_152(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==11 || iParam1==8){
iVar64=func_56(2042, -1, 0);
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) !=0){
PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_170(iParam0, iVar64), func_169(iParam0, iVar64), func_168(iParam0, iVar64));
}
if(iParam0==PLAYER::PLAYER_PED_ID()){
PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_170(PLAYER::PLAYER_PED_ID(), iVar64), func_169(PLAYER::PLAYER_PED_ID(), iVar64), 0);
PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_168(PLAYER::PLAYER_PED_ID(), iVar64));
func_166(PLAYER::PLAYER_ID(), iVar64);
}}
if(iParam1==7){
if((iVar5==joaat("mp_m_freemode_01") && iParam2 >=92) || (iVar5==joaat("mp_f_freemode_01") && iParam2 >=55)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("big_chain"), 0)){
func_152(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iVar5==joaat("mp_f_freemode_01") && (iParam1==11 || iParam1==4)){
if(iParam1==11){
iVar65=func_279(iParam0, 4, -1);
iVar66=iParam2;
}else{
iVar65=iParam2;
iVar66=func_279(iParam0, 11, -1);
}
if(func_165(iVar5, 11, iVar66, -1)){
if(!func_164(iVar5, 4, iVar65, -1)){
if(func_163(iVar5, 4, iVar65, &uVar67)){
func_152(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}elseif(func_164(iVar5, 4, iVar65, -1)){
if(func_162(iVar5, 4, iVar65, &uVar67)){
func_152(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
if(iParam1==4 || iParam1==6){
iVar68=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
iVar69=PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
iVar70=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
iVar71=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
iVar72=PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
iVar73=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
iVar74=func_135(iParam0, 4);
iVar75=func_135(iParam0, 6);
if(func_161(iVar5, iVar70)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_160(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_124(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_152(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_124(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_152(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_159(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_124(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_152(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_124(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_152(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}
if(func_161(iVar5, iVar73)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("alt_legs"), 0) !=func_159(iVar5, iVar75, iVar73)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==4){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar74=func_124(iVar5, iVar78, 4, 3);
iVar73=iVar78;
func_152(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar74=func_124(iVar5, iVar78, 4, 4);
iVar73=iVar78;
func_152(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("alt_feet"), 0) !=func_160(iVar5, iVar74, iVar70)){
iVar76=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
iVar77=0;
while (iVar77 < iVar76){
FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
if(iVar80==6){
if(iVar78 !=0 && iVar78 !=joaat("0")){
if(iVar5==joaat("mp_m_freemode_01")){
iVar75=func_124(iVar5, iVar78, 6, 3);
iVar70=iVar78;
func_152(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
elseif(iVar5==joaat("mp_f_freemode_01")){
iVar75=func_124(iVar5, iVar78, 6, 4);
iVar70=iVar78;
func_152(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar77=iVar76 + 1;
}}
iVar77++;
}}}}
if(iParam1==11 || iParam1==1){
func_264(iParam0);
iVar81=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
iVar82=PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
iVar83=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("force_prop"), 0)){
iVar3=func_271(iParam0, iVar5, iParam1, iParam2, 14, 0);
if(iVar3 !=-99){
func_152(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
iVar3=func_271(iParam0, iVar5, iParam1, iParam2, 14, 1);
if(iVar3 !=-99){
func_152(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}}}
if(iParam1 !=2){
if(func_153(iParam0, &uVar4)){
func_152(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}
if(iVar6 !=-99 && !bParam13){
func_152(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar8 !=-99){
func_152(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar7 !=-99){
func_152(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
if(iVar10 !=-1){
iVar84=func_262(iVar5, func_279(iParam0, 3, -1), iVar10);
if(iVar84 !=-1){
if(iVar5==joaat("mp_m_freemode_01")){
iVar9=func_124(iVar5, iVar84, 3, 3);
}elseif(iVar5==joaat("mp_f_freemode_01")){
iVar9=func_124(iVar5, iVar84, 3, 4);
}
if(iVar9 !=-99){
iVar9=(iVar9 + iVar11);
func_152(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}}
Global_78339=(Global_78339 - 1);
return 1;
}

int func_153(int iParam0, var uParam1){
int iVar0;
int iVar1;
*uParam1=func_279(PLAYER::PLAYER_PED_ID(), 2, -1);
if(func_56(754, Global_78338, 0) !=-99 && func_156()){
if(func_155()==4){
return 1;
}
if(func_56(754, Global_78338, 0)==0 && func_56(755, Global_78338, 0)==0){
if(func_154(161, Global_78338)){
if(func_56(2053, Global_78338, 0)==0){
return 0;
}}elseif(func_56(753, Global_78338, 0)==0){
return 0;
}}
iVar0=func_56(754, Global_78338, 0);
iVar1=func_56(755, Global_78338, 0);
if(!func_176(iParam0, iVar1, iVar0)){
if(func_154(161, Global_78338)){
*uParam1=func_56(2053, Global_78338, 0);
}else{
*uParam1=func_56(753, Global_78338, 0);
}
func_322(754, -99, Global_78338, 1, 0);
func_322(755, 2, Global_78338, 1, 0);
return 1;
}}
return 0;
}

int func_154(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_57(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_155(){
return Global_1574992;
}

int func_156(){
if(func_158() && func_157(0)){
return 1;
}
return 0;
}


var func__157(int iParam0){
return Global_1574538[iParam0];
}


var func__158(){
return func_157(func_58() + 1);
}

int func_159(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_144(iParam0, iParam1, 6, 3);
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
iVar0=func_144(iParam0, iParam1, 6, 4);
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

int func_160(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=-1;
iVar1=-1;
switch (iParam0){
case joaat("mp_m_freemode_01"):
if(iParam1 >=256){
iVar0=func_144(iParam0, iParam1, 4, 3);
iVar1=func_255(iVar0);
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
iVar0=func_144(iParam0, iParam1, 4, 4);
iVar1=func_255(iVar0);
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

int func_161(int iParam0, int iParam1){
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

int func_162(int iParam0, int iParam1, int iParam2, var uParam3){
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
iVar0=func_144(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_124(iParam0, iVar3, iParam1, 4);
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

int func_163(int iParam0, int iParam1, int iParam2, var uParam3){
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
iVar0=func_144(iParam0, iParam2, iParam1, 4);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==4){
if(iVar3 !=0 && iVar3 !=joaat("0")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("dress_legs"), 0)){
*uParam3=func_124(iParam0, iVar3, iParam1, 4);
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

int func_164(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 4:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_144(iParam0, iParam2, 4, 4);
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

int func_165(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 11:
if(iParam2 >=256){
if(iParam3==-1){
iParam3=func_144(iParam0, iParam2, 11, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("dress"), 0);
}
break;
}
break;
}
return 0;
}


void func_166(int iParam0, int iParam1){
int iVar0;
iVar0=func_167(iParam1);
if(iVar0 !=joaat("p_parachute_s")){
PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
}else{
PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
}}

int func_167(int iParam0){
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

int func_168(int iParam0, int iParam1){
return 0;
}

int func_169(int iParam0, int iParam1){
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


var func__170(int iParam0, int iParam1){
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
Global_78538=func_171(iParam0, iParam1);
}
return Global_78538;
}

int func_171(int iParam0, int iParam1){
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
return func_175(iParam0, iParam1, 1);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)){
return func_175(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_175(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_175(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_175(iParam0, iParam1, 10);
}}else{
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_2"), 8)){
return func_175(iParam0, iParam1, 6);
}
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("h4_draw_1"), 8)){
return func_175(iParam0, iParam1, 7);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_4"), 8)){
return func_175(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_5"), 8)){
return func_175(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("x17_draw_6"), 8)){
return func_175(iParam0, iParam1, 10);
}}
return func_175(iParam0, iParam1, 9);
}
if(func_174(iParam0)){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}
if(iVar0 > 15){
iVar4=FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0)){
return func_175(iParam0, iParam1, 0);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0)){
return func_175(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0)){
return func_175(iParam0, iParam1, 2);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0)){
return func_175(iParam0, iParam1, 3);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0)){
return func_175(iParam0, iParam1, 4);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0)){
return func_175(iParam0, iParam1, 5);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0)){
return func_175(iParam0, iParam1, 6);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0)){
return func_175(iParam0, iParam1, 7);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0)){
return func_175(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0)){
return func_175(iParam0, iParam1, 9);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0)){
return func_175(iParam0, iParam1, 10);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hipster_dress"), 0)){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -405912369, 0)){
return func_175(iParam0, iParam1, 1);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("dress"), 0)){
if(bVar1){
return func_175(iParam0, iParam1, 5);
}else{
return func_175(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return func_175(iParam0, iParam1, 8);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_gear"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("hooded_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
return func_175(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return func_175(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
return func_175(iParam0, iParam1, 10);
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
return func_175(iParam0, iParam1, 10);
}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
iVar5=func_173(iVar4, 0);
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar5){
case 0:
return func_175(iParam0, iParam1, 1);
break;
case 2:
return func_175(iParam0, iParam1, 8);
break;
default:
iVar0=func_255(iVar4);
break;
}}else{
switch (iVar5){
case 2:
return func_175(iParam0, iParam1, 6);
break;
default:
iVar0=func_255(iVar4);
break;
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_gear"), 0)){
iVar6=func_172(iVar4, 0);
switch (iVar6){
case 4:
return func_175(iParam0, iParam1, 7);
break;
case 5:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 7);
}
break;
case 6:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 7);
}
break;
case 7:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 7);
}
break;
case 11:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 7);
}
break;
case 12:
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}
break;
case 13:
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 9);
}
break;
case 14:
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 9);
}
break;
default:
iVar0=func_255(iVar4);
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 2);
}}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 1);
}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 8);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_3"), 0)){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 2);
}}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 1);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_sweat"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_sweat"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 5);
}}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 8);
}elseif(bVar1){
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}elseif(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_7"), 0)){
if(iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 1);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 5);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 2);
}}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 2);
}}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}else{
return func_175(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 6);
}}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 2);
}}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 5);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(bVar1){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_22"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 2);
}}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 6);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}elseif(bVar1){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}elseif(bVar1){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}elseif(bVar1){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_8"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_10"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_13"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_16"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_18"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_21"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 3);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_27"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_30"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_33"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_1"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_19"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_20"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_23"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_24"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
iVar0=7;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_7"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 0);
}else{
return func_175(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_14"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_3"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_4"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_9"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 3);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_12"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ie_draw_15"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_2"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 9);
}else{
return func_175(iParam0, iParam1, 10);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_17"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 10);
}else{
return func_175(iParam0, iParam1, 9);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("vest_shirt"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 0);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tails_jacket"), 0) && iVar2==joaat("mp_f_freemode_01")){
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)){
if(iVar2==joaat("mp_m_freemode_01")){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 7);
}}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)){
return func_175(iParam0, iParam1, 6);
}else{
iVar7=iVar0;
iVar0=func_255(iVar4);
}}
if(iVar2==joaat("mp_m_freemode_01")){
switch (iVar0){
case 0:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 2:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 6);
}
break;
case 3:
if(bVar1){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 2);
}
break;
case 4:
if(bVar1){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 2);
}
break;
case 5:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 1);
}
break;
case 7:
if(bVar1){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 2);
}
break;
case 8:
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 9:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 10:
if(bVar1){
return func_175(iParam0, iParam1, 2);
}else{
return func_175(iParam0, iParam1, 2);
}
break;
case 11:
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 1);
}
break;
case 12:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 1);
}
break;
case 14:
if(bVar1){
return func_175(iParam0, iParam1, 5);
}else{
return func_175(iParam0, iParam1, 5);
}
break;
case 15:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 4);
}
break;
}}else{
switch (iVar0){
case 0:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 1:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 6);
}
break;
case 2:
if(bVar1){
return func_175(iParam0, iParam1, 3);
}else{
return func_175(iParam0, iParam1, 2);
}
break;
case 3:
if(bVar1){
return func_175(iParam0, iParam1, 5);
}else{
return func_175(iParam0, iParam1, 4);
}
break;
case 4:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 5:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 6:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 6);
}
break;
case 7:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 6);
}
break;
case 8:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 6);
}
break;
case 9:
return func_175(iParam0, iParam1, 1);
break;
case 10:
if(bVar1){
return func_175(iParam0, iParam1, 6);
}else{
return func_175(iParam0, iParam1, 6);
}
break;
case 11:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 12:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 13:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
case 14:
if(bVar1){
return func_175(iParam0, iParam1, 7);
}else{
return func_175(iParam0, iParam1, 3);
}
break;
case 15:
if(bVar1){
return func_175(iParam0, iParam1, 1);
}else{
return func_175(iParam0, iParam1, 0);
}
break;
}}
return func_175(iParam0, iParam1, 0);
return 0;
}

int func_172(int iParam0, int iParam1){
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

int func_173(int iParam0, int iParam1){
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

int func_174(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 4, joaat("dungarees"))){
return 1;
}
return 0;
}

int func_175(int iParam0, int iParam1, int iParam2){
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

int func_176(int iParam0, int iParam1, int iParam2){
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
func_285(iVar0, iParam1, iParam2, -1) 
};
uVar2=Global_2883588;
uVar3=Global_2883589;
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar8={
func_129(iVar0, iParam2) 
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
if(!func_176(iParam0, iVar4, uVar8[iVar4])){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
if(iVar4==13){
uVar9={
func_122(iVar0, uVar8[iVar4]) 
};
iVar5=0;
while (iVar5 <=8){
if(!func_176(iParam0, 14, uVar9[iVar5])){
iVar6=0;
while (iVar6 <=19){
Global_78341[2 /*14*/]={
func_285(iVar0, 14, iVar6, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar5){
if(func_176(iParam0, 14, iVar6)){
if(!func_142(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78341[2 /*14*/]))){
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
iVar1=func_135(iParam0, iVar4);
Global_78341[2 /*14*/]={
func_285(iVar0, iVar4, iVar1, -1) 
};
if(!func_142(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78341[2 /*14*/]))){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}}}
iVar7++;
}
if((uVar8[10] !=0 && uVar8[10] !=joaat("0")) && uVar8.f_16){
if(func_56(1759, Global_78338, 0) !=uVar8[10]){
Global_2883588=uVar2;
Global_2883589=uVar3;
return 0;
}}
Global_2883588=uVar2;
Global_2883589=uVar3;
return 1;
}elseif(iParam1==13){
uVar11={
func_122(iVar0, iParam2) 
};
iVar10=0;
while (iVar10 <=8){
if(!func_176(iParam0, 14, uVar11[iVar10])){
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
if(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_65(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_65(iParam1))){
return 1;
}
if(iParam1==4){
Global_78340++;
if(Global_78340==1){
if(func_165(iVar0, 11, func_135(iParam0, 11), -1)){
if(func_163(iVar0, 4, iParam2, &uVar18)){
return func_176(iParam0, 4, uVar18);
}}elseif(func_162(iVar0, 4, iParam2, &uVar18)){
return func_176(iParam0, 4, uVar18);
}}
Global_78340=(Global_78340 - 1);
}}
return 0;
}

int func_177(int iParam0, int iParam1, int iParam2, int iParam3){
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
if(func_174(iParam0)){
return -99;
}
if(func_178(iParam0)){
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
iVar0=func_144(iParam1, iParam3, 11, 3);
if(iVar0 !=-1){
iVar1=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
iVar2=0;
while (iVar2 < iVar1){
FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
if(iVar5==9){
if(iVar3 !=0 && iVar3 !=joaat("0")){
return func_124(iParam1, iVar3, 9, 3);
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
iVar6=func_144(iParam1, iParam3, 11, 4);
if(iVar6 !=-1){
iVar7=FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar6);
iVar8=0;
while (iVar8 < iVar7){
FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
if(iVar11==9){
if(iVar9 !=0 && iVar9 !=joaat("0")){
return func_124(iParam1, iVar9, 9, 4);
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

int func_178(int iParam0){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("x17_draw_6"))){
return 1;
}
return 0;
}

int func_179(int iParam0){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) !=0 && !FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 9, -138631194)){
return 1;
}}
return 0;
}


void func_180(int iParam0, int iParam1){
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
if(func_194()){
return;
}
PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
iVar1=func_56(2097, iParam1, 0);
iVar2=func_56(2098, iParam1, 0);
iVar3=func_56(2099, iParam1, 0);
iVar4=func_56(2100, iParam1, 0);
iVar5=func_56(2101, iParam1, 0);
iVar6=func_56(2102, iParam1, 0);
fVar7=func_195(134, iParam1);
fVar8=func_195(135, iParam1);
fVar9=func_195(136, iParam1);
bVar10=func_154(160, iParam1);
if(((((((((Var0.f_0 !=iVar1 || Var0.f_1 !=iVar2) || Var0.f_2 !=iVar3) || Var0.f_3 !=iVar4) || Var0.f_4 !=iVar5) || Var0.f_5 !=iVar6) || Var0.f_6 !=fVar7) || Var0.f_7 !=fVar8) || Var0.f_8 !=fVar9) || Var0.f_9 !=bVar10){
PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
iVar11=func_56(2103, iParam1, 0);
if(iVar11 > 0){
func_181(iParam0, iParam1, 0);
}}}


void func_181(int iParam0, int iParam1, bool bParam2){
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
var uVar10;
var uVar11;
var uVar12;
int iVar13;
int iVar14;
var uVar15;
iVar0=0;
while (iVar0 < 20){
iVar1=iVar0;
iVar2=func_193(iVar1);
if(!bParam2){
fVar3=func_195(iVar2, iParam1);
}else{
fVar3=func_192(iVar2, iParam1);
}
PED::SET_PED_MICRO_MORPH(iParam0, iVar1, fVar3);
iVar0++;
}
iVar4=0;
while (iVar4 < 13){
iVar5=func_191(iVar4);
iVar6=func_190(iVar5);
iVar7=func_189(iVar5);
if(iVar6 !=-1 && iVar7 !=-1){
if(!bParam2){
uVar10=func_188(iVar6, iParam1);
uVar11=func_195(iVar7, iParam1);
}else{
uVar10=func_187(iVar6, iParam1);
uVar11=func_192(iVar7, iParam1);
}
PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, uVar10, uVar11);
iVar8=func_186(iVar5);
iVar9=func_185(iVar5);
if(iVar8 !=-1){
if(!bParam2){
iVar13=func_56(iVar8, iParam1, 0);
iVar14=func_56(iVar9, iParam1, 0);
}else{
iVar13=func_184(iVar8, iParam1);
iVar14=func_184(iVar9, iParam1);
}
func_183(iVar13, &uVar12, &uVar15);
PED::SET_PED_HEAD_OVERLAY_TINT(iParam0, iVar5, uVar15, uVar12, iVar14);
}}
iVar4++;
}
func_182(&iParam0, iParam1, bParam2);
}


void func_182(int iParam0, int iParam1, bool bParam2){
float fVar0;
if(!bParam2){
fVar0=func_195(157, iParam1);
}else{
fVar0=func_192(157, iParam1);
}
if(*iParam0==PLAYER::PLAYER_PED_ID()){}
PED::SET_HEAD_BLEND_EYE_COLOR(*iParam0, round(fVar0));
}


void func_183(int iParam0, var uParam1, var uParam2){
int iVar0;
*uParam1=shift_right(iParam0, 16);
iVar0=iParam0 & 65535;
*uParam2=iVar0;
}

int func_184(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2805029[iParam0 /*3*/][func_57(iParam1)];
if(HUD::GET_MENU_PED_INT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0;
}

int func_185(int iParam0){
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

int func_186(int iParam0){
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

int func_187(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
if(iParam1==-1){
iParam1=func_58();
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


var func__188(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_58();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_189(int iParam0){
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

int func_190(int iParam0){
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

int func_191(int iParam0){
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


float func_192(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_57(iParam1)];
if(HUD::GET_MENU_PED_FLOAT_STAT(uVar0, &uVar1)){
return uVar1;
}
return 0f;
}

int func_193(int iParam0){
switch (iParam0){
case 0:
return 137;
case 1:
return 138;
case 2:
return 139;
case 3:
return 140;
case 4:
return 141;
case 5:
return 142;
case 6:
return 143;
case 7:
return 144;
case 8:
return 145;
case 9:
return 146;
case 10:
return 147;
case 11:
return 148;
case 12:
return 149;
case 13:
return 150;
case 14:
return 151;
case 15:
return 152;
case 16:
return 153;
case 17:
return 154;
case 18:
return 155;
case 19:
return 156;
default:
}
return -1;
}

int func_194(){
if(SCRIPT::IS_THREAD_ACTIVE(Global_2639783.f_60) && !Global_2639783.f_59==0){
return 1;
}
return 0;
}


float func_195(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2847606[iParam0 /*3*/][func_57(iParam1)];
if(STATS::STAT_GET_FLOAT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0f;
}

int func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
int iVar20;
struct<7> Var21;
int iVar22;
if(iParam0==joaat("mp_m_freemode_01")){
iVar1=-1;
iVar2=-1;
if(Global_4539502==iParam1){
iVar2=Global_4539501;
iVar1=Global_4539500;
}elseif(iParam1 >=92){
iVar2=func_144(iParam0, iParam1, 7, 3);
iVar1=func_255(iVar2);
Global_4539502=iParam1;
Global_4539501=iVar2;
Global_4539500=iVar1;
}
iVar3=-1;
iVar4=-1;
if(Global_4539505==iParam3){
iVar4=Global_4539504;
iVar3=Global_4539503;
}elseif(iParam3 >=237){
iVar4=func_144(iParam0, iParam3, 11, 3);
iVar3=func_255(iVar4);
Global_4539505=iParam3;
Global_4539504=iVar4;
Global_4539503=iVar3;
}
iVar5=-1;
iVar6=-1;
if(Global_4539508==iParam4){
iVar6=Global_4539507;
iVar5=Global_4539506;
}elseif(iParam4 >=241){
iVar6=func_144(iParam0, iParam4, 8, 3);
iVar5=func_255(iVar6);
Global_4539508=iParam4;
Global_4539507=iVar6;
Global_4539506=iVar5;
}
iVar7=-1;
iVar8=-1;
if(Global_4539511==iParam10){
iVar8=Global_4539510;
iVar7=Global_4539509;
}elseif(iParam10 >=26){
iVar8=func_144(iParam0, iParam10, 1, 3);
iVar7=func_255(iVar8);
Global_4539511=iParam10;
Global_4539510=iVar8;
Global_4539509=iVar7;
}
if(iParam3 !=-99){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("morph_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("scuba_gear"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gorka_suit"), 0)){
if(iParam1 !=0){
return 0;
}}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("smug_draw_6"), 0)){
if(iParam1 !=0){
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("hoop_necklace"), 0)){
if(func_259(iParam0, iParam3, -1)){
return 0;
}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
if(iParam1 !=0 && !(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("pilot_suit"), 0))){
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("epsilon_chain_alt"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_0"), 0)){
return 1;
}else{
return 0;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("epsilon_chain"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("arena_draw_0"), 0)){
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("epsilon_chain_alt"), 0)){
if(iParam4==240){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 91564168, 0)){
return 1;
}else{
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 91564168, 0)){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1536943816, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -589305886, 0)){
return 1;
}else{
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -120244486, 0)){
if(iParam9 !=-99){
iVar9=-1;
if(iParam9 >=327){
iVar9=func_144(iParam0, iParam9, 14, 3);
}
if(((iParam9 >=27 && iParam9 <=34) || (iParam9 >=75 && iParam9 <=82)) || (iParam9 >=107 && iParam9 <=114)){
return 0;
}
switch (iVar9){
case 1411612772:
case 1399488226:
case 1103092621:
case 798340921:
case 495850282:
case -1972900644:
case 2016102499:
case 1719477511:
case 288210625:
case -882756821:
case -1242625979:
case -1358792084:
case joaat("dlc_mp_exec_m_phead_1_0"):
case joaat("dlc_mp_beach_m_head0_0"):
case joaat("dlc_mp_beach_m_head0_1"):
case joaat("dlc_mp_beach_m_head0_2"):
case joaat("dlc_mp_beach_m_head0_3"):
case joaat("dlc_mp_beach_m_head0_4"):
case joaat("dlc_mp_beach_m_head0_5"):
case joaat("dlc_mp_stunt_m_phead_10_0"):
case joaat("dlc_mp_stunt_m_phead_10_1"):
case joaat("dlc_mp_stunt_m_phead_10_2"):
case joaat("dlc_mp_stunt_m_phead_10_3"):
case joaat("dlc_mp_stunt_m_phead_10_4"):
case joaat("dlc_mp_stunt_m_phead_10_5"):
case joaat("dlc_mp_stunt_m_phead_10_6"):
case joaat("dlc_mp_stunt_m_phead_10_7"):
case joaat("dlc_mp_stunt_m_phead_10_8"):
case joaat("dlc_mp_stunt_m_phead_10_9"):
case joaat("dlc_mp_stunt_m_phead_10_10"):
case joaat("dlc_mp_stunt_m_phead_10_11"):
case joaat("dlc_mp_stunt_m_phead_10_12"):
case joaat("dlc_mp_stunt_m_phead_10_13"):
case joaat("dlc_mp_stunt_m_phead_10_14"):
case joaat("dlc_mp_stunt_m_phead_10_15"):
case joaat("dlc_mp_stunt_m_phead_10_16"):
case joaat("dlc_mp_stunt_m_phead_10_17"):
case joaat("dlc_mp_stunt_m_phead_10_18"):
case joaat("dlc_mp_stunt_m_phead_10_19"):
case joaat("dlc_mp_stunt_m_phead_10_20"):
case joaat("dlc_mp_gr_m_phead_7_0"):
case joaat("dlc_mp_gr_m_phead_7_1"):
case joaat("dlc_mp_gr_m_phead_7_2"):
case joaat("dlc_mp_gr_m_phead_7_3"):
case joaat("dlc_mp_gr_m_phead_7_4"):
case joaat("dlc_mp_gr_m_phead_7_5"):
case joaat("dlc_mp_gr_m_phead_7_6"):
case joaat("dlc_mp_gr_m_phead_7_7"):
case joaat("dlc_mp_gr_m_phead_7_8"):
case joaat("dlc_mp_gr_m_phead_7_9"):
case joaat("dlc_mp_gr_m_phead_7_10"):
return 0;
break;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0)){
return 0;
}}}
if(iParam3 !=-99){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scarf"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jacket_scarf"), 0)){
if(((((((((((((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("block_scarfs"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
return 0;
}elseif(func_198(iParam0, iParam3)){
}else{
return 0;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("block_scarfs"), 0)){
return 0;
}elseif(func_198(iParam0, iParam3)){
return 0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -120244486, 0)){
if(((((((((((((iParam3 >=188 && iParam3 <=203) || (iParam3 >=220 && iParam3 <=235)) || iVar3==12) || iVar3==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
return 0;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0)){
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("luxe_scarf"), 0)){
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_1"), 0)){
}else{
return 0;
}}}
if((iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scarf"), 0)) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("big_chain"), 0))){
if(iParam11 !=-99){
iVar10=-1;
if(iParam11 >=256){
iVar10=func_144(iParam0, iParam11, 4, 3);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("dungarees"), 0)){
return 0;
}}}
if(iParam3 !=-99){
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("bead_necklace"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)){
return 1;
}else{
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("chain"), 0)){
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("big_chain"), 0)){
if((iParam3 >=96 && iParam3 <=107) || iVar3==6){
return 0;
}}
if(iParam3==236){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("alt_chain"), 0)){
return 0;
}}elseif(((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >=172 && iParam3 <=187) || (iParam3 >=188 && iParam3 <=203)) || (iParam3 >=204 && iParam3 <=219)) || (iParam3 >=220 && iParam3 <=235)) || iVar3==11) || iVar3==12) || iVar3==13) || iVar3==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("block_chains"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tux_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("xmas2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("scruffy_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jacket_only"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)){
return 0;
}elseif(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("alt_chain"), 0)){
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=64 && iParam4 <=79)) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=192 && iParam4 <=207)) || (iParam4 >=208 && iParam4 <=223)) || iVar5==3) || iVar5==4) || iVar5==6) || iVar5==7) || iVar5==12) || iVar5==13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("block_chains"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("stunt_draw_2"), 0)){
return 0;
}}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("big_chain"), 0)){
if(iParam8 !=-99){
return 0;
}}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("pilot_suit"), 0)){
if(iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)){
}elseif(iParam2==14 || (iParam2==1 && iParam10 !=0)){
return 0;
}}elseif((iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam9, 14, 3), joaat("pilot_suit"), 1)) && iParam1 !=0){
return 0;
}
if(iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1119006951, 0)){
if(iParam3 !=-99){
if(((((((((((((((((((((((((((((((((((((((((((iParam3 >=140 && iParam3 <=155) || (iParam3 >=188 && iParam3 <=203)) || (iParam3 >=204 && iParam3 <=219)) || (iParam3 >=220 && iParam3 <=235)) || iVar3==9) || iVar3==12) || iVar3==13) || iVar3==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe_bomb"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("gun_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("smug_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("assault_draw_0"), 0)){
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((((((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=64 && iParam4 <=79)) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=144 && iParam4 <=159)) || (iParam4 >=160 && iParam4 <=175)) || (iParam4 >=176 && iParam4 <=191)) || (iParam4 >=192 && iParam4 <=207)) || (iParam4 >=208 && iParam4 <=223)) || iVar5==3) || iVar5==4) || iVar5==6) || iVar5==7) || iVar5==9) || iVar5==10) || iVar5==11) || iVar5==12) || iVar5==13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("closed_collar"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("open_collar"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0)){
return 0;
}}}
if((iParam1 >=1 && iParam1 <=3) || iVar1==1){
if(iParam5 !=-99){
if(iParam5 !=15){
return 0;
}}
if(iParam3 !=-99){
if(iParam3 !=236){
return 0;
}}
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("outfit_checks"), 0)){
return 0;
}}elseif((iParam1 >=4 && iParam1 <=6) || iVar1==2){
if(iParam3 !=-99){
if((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=16 && iParam3 <=31)) || (iParam3 >=32 && iParam3 <=47)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=124 && iParam3 <=139)) || iVar3==0) || iVar3==1) || iVar3==2) || iVar3==5) || iVar3==8){
}else{
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((iParam4 >=0 && iParam4 <=15) || (iParam4 >=16 && iParam4 <=31)) || (iParam4 >=32 && iParam4 <=47)) || (iParam4 >=80 && iParam4 <=95)) || (iParam4 >=128 && iParam4 <=143)) || iParam4==240) || iVar5==0) || iVar5==1) || iVar5==2) || iVar5==5) || iVar5==8) || iVar5==15){
}else{
return 0;
}}elseif(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=41)){
}else{
return 0;
}}}elseif((iParam1 >=10 && iParam1 <=25) || iVar1==4){
if(iParam3 !=-99){
if((((((((((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=16 && iParam3 <=31)) || (iParam3 >=32 && iParam3 <=47)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=124 && iParam3 <=139)) || (iParam3 >=140 && iParam3 <=155)) || (iParam3 >=172 && iParam3 <=187)) || (iParam3 >=204 && iParam3 <=219)) || iParam3==236) || iVar3==0) || iVar3==1) || iVar3==2) || iVar3==5) || iVar3==8) || iVar3==9) || iVar3==11) || iVar3==13) || iVar3==15){
}else{
return 0;
}}}elseif((iParam1 >=32 && iParam1 <=37) || iVar1==6){
if(iParam3 !=-99){
if((((iParam3 >=96 && iParam3 <=107) || (iParam3 >=156 && iParam3 <=171)) || iVar3==6) || iVar3==10){
}else{
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("high_roller_tie"), 0)){
if(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
}else{
return 0;
}}}elseif(((((iParam1 >=41 && iParam1 <=56) || (iParam1 >=73 && iParam1 <=88)) || iVar1==10) || iVar1==12) || (iVar2 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tie"), 0))){
if(iParam3 !=-99){
if(((iParam3 >=204 && iParam3 <=219) || func_259(iParam0, iParam3, -1)) || iVar3==13){
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0)){
return 0;
}}else{
return 0;
}}elseif(iParam4 !=-99){
if((((((iParam4 >=160 && iParam4 <=175) || (iParam4 >=208 && iParam4 <=223)) || iVar5==10) || iVar5==13) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0))){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
return 0;
}}else{
iVar0=func_135(iParam6, 11);
if((iVar0 >=204 && iVar0 <=219) || (iVar0 >=237 && func_255(func_144(iParam0, iVar0, 11, 3))==13)){
return 1;
}
if(iParam7==1){
if((iParam4 >=176 && iParam4 <=191) || iVar5==11){
return 1;
}}
return 0;
}}}elseif((iParam1 >=57 && iParam1 <=72) || iVar1==11){
if(iParam3 !=-99){
if(((((iParam3 >=204 && iParam3 <=219) || (iParam3 >=172 && iParam3 <=187)) || func_259(iParam0, iParam3, -1)) || iVar3==13) || iVar3==11){
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0)){
return 0;
}}else{
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((((iParam4 >=64 && iParam4 <=79) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=160 && iParam4 <=175)) || (iParam4 >=208 && iParam4 <=223)) || iVar5==4) || iVar5==6) || iVar5==10) || iVar5==13) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("ALLOW_TIES"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0))) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
return 0;
}}else{
iVar0=func_135(iParam6, 11);
if((iVar0 >=204 && iVar0 <=219) || (iVar0 >=237 && func_255(func_144(iParam0, iVar0, 11, 3))==13)){
return 1;
}
if(iParam7==1){
if((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=176 && iParam4 <=191)) || iVar5==3) || iVar5==7) || iVar5==11){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("vest_tie"), 0)){
if(iParam3 !=-99){
if((((((((((((((((((((((iParam3 >=172 && iParam3 <=187) || iVar3==11) || iVar4==-27166014) || iVar4==-273228435) || iVar4==-2118057713) || iVar4==-1809078812) || iVar4==-1522415600) || iVar4==-1212584705) || iVar4==-886664231) || iVar4==-646500230) || iVar4==-290891042) || iVar4==15400801) || iVar4==-485413449) || iVar4==-254359230) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("luxe2_draw_0"), 0)) || iVar4==joaat("dlc_mp_busi_m_jbib4_0")) || iVar4==joaat("dlc_mp_busi_m_jbib4_1")) || iVar4==joaat("dlc_mp_busi_m_jbib4_2")) || iVar4==joaat("dlc_mp_val_m_jbib0_0")) || iVar4==joaat("dlc_mp_val_m_jbib0_1")) || iVar4==joaat("dlc_mp_val_m_jbib0_2")) || iVar4==joaat("dlc_mp_val_m_jbib0_3")){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("sweat_vest"), 0)){
}else{
return 0;
}}else{
return 0;
}}elseif(iParam4 !=-99){
if(((((((((((iParam4 >=64 && iParam4 <=79) || (iParam4 >=96 && iParam4 <=111)) || iVar5==4) || iVar5==6) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("vest_shirt"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CUFFED_SHIRT"), 0)) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0)){
return 0;
}}else{
if(iParam7==1){
if((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=176 && iParam4 <=191)) || iVar5==3) || iVar5==7) || iVar5==11){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_tie"), 0)){
if(iParam3 !=-99){
if(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tux_jacket"), 0)){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(((iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_vest"), 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_tie_alt"), 0)) || (((iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tux_shirt"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("tux_tie_alt"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("high_roller_shirt"), 0))){
}else{
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("loose_bowtie"), 0)){
if(iParam4 !=-99){
if(((((((((((((((((((((((((((((((((((((((((iParam4 >=48 && iParam4 <=63) || (iParam4 >=112 && iParam4 <=127)) || (iParam4 >=176 && iParam4 <=191)) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_0")) || iVar6==joaat("dlc_mp_busi2_m_accs1_1")) || iVar6==joaat("dlc_mp_busi2_m_accs1_2")) || iVar6==joaat("dlc_mp_busi2_m_accs1_3")) || iVar6==joaat("dlc_mp_busi2_m_accs1_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_5")) || iVar6==joaat("dlc_mp_busi2_m_accs1_6")) || iVar6==joaat("dlc_mp_busi2_m_accs1_7")) || iVar6==joaat("dlc_mp_busi2_m_accs1_8")) || iVar6==joaat("dlc_mp_busi2_m_accs1_9")) || iVar6==joaat("dlc_mp_busi2_m_accs1_10")) || iVar6==joaat("dlc_mp_busi2_m_accs1_11")) || iVar6==joaat("dlc_mp_busi2_m_accs1_12")) || iVar6==joaat("dlc_mp_busi2_m_accs1_13")) || iVar6==joaat("dlc_mp_busi2_m_accs1_14")) || iVar6==joaat("dlc_mp_busi2_m_accs1_15")) || iVar6==joaat("dlc_mp_ind_m_special_0_0")) || iVar6==joaat("dlc_mp_ind_m_special_0_1")) || iVar6==joaat("dlc_mp_ind_m_special_2_0")) || iVar6==joaat("dlc_mp_ind_m_special_2_1")) || iVar6==joaat("dlc_mp_ind_m_special_2_2")) || iVar6==joaat("dlc_mp_ind_m_special_2_3")) || iVar6==joaat("dlc_mp_ind_m_special_2_4")) || iVar6==joaat("dlc_mp_ind_m_special_2_5")) || iVar6==joaat("dlc_mp_ind_m_special_2_6")) || iVar6==joaat("dlc_mp_ind_m_special_2_7")) || iVar6==joaat("dlc_mp_ind_m_special_2_8")) || iVar6==joaat("dlc_mp_biker_m_special_9_0")) || iVar6==joaat("dlc_mp_biker_m_special_9_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_11"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
}else{
return 0;
}}else{
if(iParam7==1){
if((((((iParam4 >=64 && iParam4 <=79) || (iParam4 >=96 && iParam4 <=111)) || (iParam4 >=160 && iParam4 <=175)) || iVar5==4) || iVar5==6) || iVar5==10){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("loose_tie"), 0)){
if(iParam3 !=-99){
if(((((iParam3 >=64 && iParam3 <=79) || (iParam3 >=156 && iParam3 <=171)) || iVar3==4) || iVar3==10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("open_jacket"), 0)){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(((((((((((((((((((((((((((iParam4 >=176 && iParam4 <=191) || iVar6==joaat("dlc_mp_val_m_accs0_0")) || iVar6==joaat("dlc_mp_val_m_accs0_1")) || iVar6==joaat("dlc_mp_val_m_accs0_2")) || iVar6==joaat("dlc_mp_val_m_accs0_3")) || iVar6==joaat("dlc_mp_val_m_accs0_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_0")) || iVar6==joaat("dlc_mp_busi2_m_accs1_1")) || iVar6==joaat("dlc_mp_busi2_m_accs1_2")) || iVar6==joaat("dlc_mp_busi2_m_accs1_3")) || iVar6==joaat("dlc_mp_busi2_m_accs1_4")) || iVar6==joaat("dlc_mp_busi2_m_accs1_5")) || iVar6==joaat("dlc_mp_busi2_m_accs1_6")) || iVar6==joaat("dlc_mp_busi2_m_accs1_7")) || iVar6==joaat("dlc_mp_busi2_m_accs1_8")) || iVar6==joaat("dlc_mp_busi2_m_accs1_9")) || iVar6==joaat("dlc_mp_busi2_m_accs1_10")) || iVar6==joaat("dlc_mp_busi2_m_accs1_11")) || iVar6==joaat("dlc_mp_busi2_m_accs1_12")) || iVar6==joaat("dlc_mp_busi2_m_accs1_13")) || iVar6==joaat("dlc_mp_busi2_m_accs1_14")) || iVar6==joaat("dlc_mp_busi2_m_accs1_15")) || iVar6==joaat("dlc_mp_ind_m_special_0_0")) || iVar6==joaat("dlc_mp_ind_m_special_0_1")) || iVar6==joaat("dlc_mp_biker_m_special_9_0")) || iVar6==joaat("dlc_mp_biker_m_special_9_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("heist_draw_5"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
}else{
return 0;
}}else{
if(iParam7==1){
if((iParam4 >=160 && iParam4 <=175) || iVar5==10){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("sweat_vest"), 0)){
return 1;
}
}}
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("slack_tie"), 0)){
if(iParam3 !=-99){
if(((((iParam3 >=64 && iParam3 <=79) || (iParam3 >=188 && iParam3 <=203)) || iVar3==12) || iVar3==4) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("open_jacket"), 0)){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(((iParam4 >=192 && iParam4 <=207) || func_197(iVar6)) || (iVar6 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("draw_12"), 0))){
}else{
return 0;
}}}elseif(iParam1 >=92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("scarf"), 0)){
if(iParam3 !=-99){
if((iParam3 >=172 && iParam3 <=187) || iVar3==11){
return 0;
}elseif((iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_4"), 0)) || (iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_16"), 0))){
return 0;
}elseif(iVar4 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("pilot_suit"), 0)){
return 0;
}}
if(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=41)){
}else{
return 0;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("headscarf"), 0)){
return 0;
}}}}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar11=-1;
iVar12=-1;
if(Global_4539502==iParam1){
iVar12=Global_4539501;
iVar11=Global_4539500;
}elseif(iParam1 >=55){
iVar12=func_144(iParam0, iParam1, 7, 4);
iVar11=func_255(iVar12);
Global_4539502=iParam1;
Global_4539501=iVar12;
Global_4539500=iVar11;
}
iVar13=-1;
iVar14=-1;
if(Global_4539505==iParam3){
iVar14=Global_4539504;
iVar13=Global_4539503;
}elseif(iParam3 >=256){
iVar14=func_144(iParam0, iParam3, 11, 4);
iVar13=func_255(iVar14);
Global_4539505=iParam3;
Global_4539504=iVar14;
Global_4539503=iVar13;
}
iVar15=-1;
iVar16=-1;
if(Global_4539508==iParam4){
iVar16=Global_4539507;
iVar15=Global_4539506;
}elseif(iParam4 >=136){
iVar16=func_144(iParam0, iParam4, 8, 4);
iVar15=func_255(iVar16);
Global_4539508=iParam4;
Global_4539507=iVar16;
Global_4539506=iVar15;
}
iVar17=-1;
iVar18=-1;
if(Global_4539511==iParam10){
iVar18=Global_4539510;
iVar17=Global_4539509;
}elseif(iParam10 >=26){
iVar18=func_144(iParam0, iParam10, 1, 4);
iVar17=func_255(iVar18);
Global_4539511=iParam10;
Global_4539510=iVar18;
Global_4539509=iVar17;
}
iVar19=-1;
if(iParam9 >=327){
iVar19=func_144(iParam0, iParam9, 14, 4);
}
if(iParam3 !=-99){
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("morph_suit"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("scuba_gear"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("cat_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("gorka_suit"), 0)){
if(iParam1 !=0){
return 0;
}}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("smug_draw_6"), 0)){
if(((((((iParam1==0 || (iParam1 >=13 && iParam1 <=18)) || iVar11==3) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("cuff"), 0))) || (iParam1 >=19 && iParam1 <=24)) || iVar11==4) || (iParam1 >=25 && iParam1 <=30)) || iVar11==5){
}else{
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
if((((iParam1 >=1 && iParam1 <=12) || iVar11==1) || iVar11==2) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("earring"), 0))){
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("hoop_necklace"), 0)){
if(func_259(iParam0, iParam3, -1)){
return 0;
}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("pilot_suit"), 0)){
if(iParam1 !=0 && !(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("pilot_suit"), 0))){
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("epsilon_chain_alt"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("arena_draw_0"), 0)){
return 1;
}else{
return 0;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("epsilon_chain"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("arena_draw_0"), 0)){
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("epsilon_chain_alt"), 0)){
if(iParam4==66){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 91564168, 0)){
return 1;
}else{
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 91564168, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 91564168, 0)){
return 1;
}else{
return 0;
}}}
if(iParam3 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1536943816, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -148268191, 0)){
return 1;
}else{
return 0;
}}}
if((iVar12==joaat("DLC_MP_APA_F_TEETH_0_0") || iVar12==653911448) || iVar12==-1519558015){
if(iParam9 !=-99){
switch (iVar19){
case 1446628467:
case -1938048778:
case 2041418586:
case -1342898200:
case 2026483804:
case -1977527541:
case -1670449242:
case -1385031204:
case -1088111295:
case -1530918836:
case -1221415631:
case -629869643:
case joaat("dlc_mp_exec_f_phead_1_0"):
case joaat("dlc_mp_stunt_f_phead_10_0"):
case joaat("dlc_mp_stunt_f_phead_10_1"):
case joaat("dlc_mp_stunt_f_phead_10_2"):
case joaat("dlc_mp_stunt_f_phead_10_3"):
case joaat("dlc_mp_stunt_f_phead_10_4"):
case joaat("dlc_mp_stunt_f_phead_10_5"):
case joaat("dlc_mp_stunt_f_phead_10_6"):
case joaat("dlc_mp_stunt_f_phead_10_7"):
case joaat("dlc_mp_stunt_f_phead_10_8"):
case joaat("dlc_mp_stunt_f_phead_10_9"):
case joaat("dlc_mp_stunt_f_phead_10_10"):
case joaat("dlc_mp_stunt_f_phead_10_11"):
case joaat("dlc_mp_stunt_f_phead_10_12"):
case joaat("dlc_mp_stunt_f_phead_10_13"):
case joaat("dlc_mp_stunt_f_phead_10_14"):
case joaat("dlc_mp_stunt_f_phead_10_15"):
case joaat("dlc_mp_stunt_f_phead_10_16"):
case joaat("dlc_mp_stunt_f_phead_10_17"):
case joaat("dlc_mp_stunt_f_phead_10_18"):
case joaat("dlc_mp_stunt_f_phead_10_19"):
case joaat("dlc_mp_stunt_f_phead_10_20"):
case joaat("dlc_mp_gr_f_phead_7_0"):
case joaat("dlc_mp_gr_f_phead_7_1"):
case joaat("dlc_mp_gr_f_phead_7_2"):
case joaat("dlc_mp_gr_f_phead_7_3"):
case joaat("dlc_mp_gr_f_phead_7_4"):
case joaat("dlc_mp_gr_f_phead_7_5"):
case joaat("dlc_mp_gr_f_phead_7_6"):
case joaat("dlc_mp_gr_f_phead_7_7"):
case joaat("dlc_mp_gr_f_phead_7_8"):
case joaat("dlc_mp_gr_f_phead_7_9"):
case joaat("dlc_mp_gr_f_phead_7_10"):
return 0;
break;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
return 0;
}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("over_jacket"), 0)){
return 0;
}}
if(iParam3 !=-99){
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("scarf"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("jacket_scarf"), 0)){
if((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_scarfs"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)){
return 0;
}elseif(func_198(iParam0, iParam3)){
}else{
return 0;
}}elseif(func_198(iParam0, iParam3) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_scarfs"), 0)){
return 0;
}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
return 0;
}}}
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("luxe_scarf"), 0)){
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe2_draw_1"), 0)){
}else{
return 0;
}}}elseif(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("scarf"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("block_scarfs"), 0)){
return 0;
}}elseif(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("chain"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("block_chains"), 0)){
return 0;
}}
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("pilot_suit"), 0)){
if(iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)){
}elseif(iParam2==14 || (iParam2==1 && iParam10 !=0)){
return 0;
}}elseif((iParam9 >=327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam9, 14, 4), joaat("pilot_suit"), 1)) && iParam1 !=0){
return 0;
}
if((((iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("scarf"), 0)) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("big_chain"), 0))) || (iParam1 >=43 && iParam1 <=48)) || iVar11==8){
if(iParam11 !=-99){
iVar20=-1;
if(iParam11 >=256){
iVar20=func_144(iParam0, iParam11, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("dungarees"), 0)){
return 0;
}}}
if(iVar12 !=-1 && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tie"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("bowtie"), 0))){
if(iParam2==11){
if((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_9"), 0)) || (iParam3 >=112 && iParam3 <=127)) || iVar13==7){
}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 144417099, 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("bowtie"), 0)){
}else{
return 0;
}}else{
return 0;
}}elseif(iParam2==8){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("open_collar"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("closed_collar"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("tie"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_9"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_tie"), 0)){
}else{
return 0;
}
}
elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_tie"), 0)){
return 0;
}}}else{
return 0;
}}}
if(iParam9 !=-99){
if((iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("earring"), 1)) || (iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("block_earrings"), 1))){
if((((iParam1 >=1 && iParam1 <=12) || iVar11==1) || iVar11==2) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("earring"), 0))){
return 0;
}}}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("hoop_necklace"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0)){
return 1;
}}
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("chain"), 0)){
if(iParam3 !=-99){
if(((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_chains"), 0)){
return 0;
}elseif(func_259(iParam0, iParam3, -1)){
}elseif((((((((((((((((((((iParam3 >=32 && iParam3 <=47) || (iParam3 >=176 && iParam3 <=191)) || iVar13==2) || iVar13==11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("exec_draw_14"), 0)) || iVar14==joaat("dlc_mp_ind_f_jbib_1_0")) || iVar14==joaat("dlc_mp_ind_f_jbib_1_1")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smug_draw_5"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}elseif(((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=224 && iParam3 <=239)) || iVar13==3) || iVar13==9) || iVar13==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("pilot_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("COMBAT_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("xmas2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("LOW2_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 891044832, 0)){
return 0;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}elseif(iParam4 !=-99){
if((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >=71 && iParam4 <=86) || iVar15==11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("OFF_SHOULDER_ACCS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("luxe_draw_11"), 0)) || iVar16==joaat("dlc_mp_heist_f_special_12_0")) || iVar16==joaat("dlc_mp_heist_f_special_12_1")) || iVar16==joaat("dlc_mp_hips_f_accs3_0")) || iVar16==joaat("dlc_mp_hips_f_accs3_1")) || iVar16==joaat("dlc_mp_hips_f_accs3_2")) || iVar16==joaat("dlc_mp_hips_f_accs3_3")) || iVar16==joaat("dlc_mp_val_f_accs0_0")) || iVar16==joaat("dlc_mp_val_f_accs0_1")) || iVar16==joaat("dlc_mp_val_f_accs0_2")) || iVar16==joaat("dlc_mp_val_f_accs1_0")) || iVar16==joaat("dlc_mp_val_f_accs1_1")) || iVar16==joaat("dlc_mp_val_f_accs1_2")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("apart_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("apart_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("EXEC_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("biker_draw_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("smug_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("block_chains"), 0)){
if(!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}elseif(((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("vest_shirt"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1353777856, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("apart_draw_1"), 0)){
return 0;
}elseif(func_256(iParam0, iParam4, 0) !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("alt_chain"), 0)){
return 0;
}}}
if(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=31)){
}else{
return 0;
}}}
if(iParam3 !=-99){
if(iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("bead_necklace"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)){
return 1;
}else{
return 0;
}}}
if(((iParam1 >=13 && iParam1 <=18) || iVar11==3) || (iVar12 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("cuff"), 0))){
if(iParam3 !=-99){
if(((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=160 && iParam3 <=175)) || iVar13==3) || iVar13==7) || iVar13==10) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))){
return 0;
}}elseif(iParam4 !=-99){
if(iParam4 >=136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
return 0;
}}}elseif((iParam1 >=19 && iParam1 <=24) || iVar11==4){
if(iParam3 !=-99){
if(((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=160 && iParam3 <=175)) || iVar13==3) || iVar13==7) || iVar13==10) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))){
return 0;
}}elseif(iParam4 !=-99){
if(iParam4 >=136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
FILES::GET_SHOP_PED_PROP(iVar19, &Var21);
if(Var21.f_6==7){
return 0;
}}}}elseif((iParam1 >=25 && iParam1 <=30) || iVar11==5){
if(iParam3 !=-99){
if(((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=112 && iParam3 <=127)) || (iParam3 >=160 && iParam3 <=175)) || iVar13==3) || iVar13==7) || iVar13==10) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))){
return 0;
}}elseif(iParam4 !=-99){
if(iParam4 >=136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_144(iParam0, iParam4, 8, 4), joaat("long_sleeve"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
return 0;
}}}elseif((iParam1 >=31 && iParam1 <=36) || iVar11==6){
if(iParam3 !=-99){
if((((((((((((((((((((((((((((((((((((((((((((((iParam3 >=48 && iParam3 <=63) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=224 && iParam3 <=239)) || iVar13==3) || iVar13==9) || iVar13==14) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest_shirt"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_0"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("exec_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("morph_suit"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("assault_draw_0"), 0)){
return 0;
}}}elseif(((iParam1 >=37 && iParam1 <=42) || iVar11==7) || (iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("long_necklace"), 0))){
if(iParam3 !=-99){
if(((((((((((((((((((((((((((((((((((((((((((((iParam3 >=32 && iParam3 <=47) || (iParam3 >=48 && iParam3 <=63)) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=224 && iParam3 <=239)) || iVar13==2) || iVar13==3) || iVar13==9) || iVar13==14) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_gear"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("heist_draw_3"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("draw_0"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_draw_4"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_0"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_draw_3"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest_shirt"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("exec_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("biker_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("block_chains"), 0)){
return 0;
}elseif(((((((((((iParam3 >=112 && iParam3 <=127) || (iParam3 >=160 && iParam3 <=175)) || (iParam3 >=192 && iParam3 <=207)) || iVar13==7) || iVar13==10) || iVar13==12) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("long_sleeve"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("tails_jacket"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("combat_gear"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)){
if(iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("long_necklace"), 0)){
return 0;
}}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("vest_shirt"), 0)){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("long_necklace"), 0)){
return 0;
}}elseif(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_4"), 0)){
return 0;
}elseif((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("ALT_SPECIAL_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("alt_special_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("alt_special_6"), 0)){
return 0;
}}elseif(iParam9 !=-99){
if(iVar19 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("cuff"), 1)){
return 0;
}}}elseif((iParam1 >=43 && iParam1 <=48) || iVar11==8){
if(iParam3 !=-99){
if((((((((((((((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=32 && iParam3 <=47)) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=144 && iParam3 <=159)) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=192 && iParam3 <=207)) || (iParam3 >=208 && iParam3 <=223)) || (iParam3 >=240 && iParam3 <=255)) || iVar13==0) || iVar13==2) || iVar13==4) || iVar13==5) || iVar13==9) || iVar13==11) || iVar13==12) || iVar13==13) || iVar13==15) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("luxe_sweat"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low_sweat"), 0))){
}else{
return 0;
}}}elseif((iParam1 >=49 && iParam1 <=54) || iVar11==9){
if(iParam3 !=-99){
if((((((((((((((((iParam3 >=0 && iParam3 <=15) || (iParam3 >=64 && iParam3 <=79)) || (iParam3 >=80 && iParam3 <=95)) || (iParam3 >=176 && iParam3 <=191)) || (iParam3 >=192 && iParam3 <=207)) || (iParam3 >=208 && iParam3 <=223)) || (iParam3 >=240 && iParam3 <=255)) || iVar13==0) || iVar13==4) || iVar13==5) || iVar13==11) || iVar13==12) || iVar13==13) || iVar13==15) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("vest"), 0))) || (iParam3 >=256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("dress"), 0))){
}else{
return 0;
}}elseif(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("sweat_vest"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("basic_vest"), 0)){
return 0;
}elseif(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("stunt_draw_4"), 0)){
return 0;
}}
if(iParam8 !=-99){
if(!(iParam8 >=1 && iParam8 <=31)){
}else{
return 0;
}}
if(iParam10 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, joaat("headscarf"), 0)){
return 0;
}}}elseif(iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("high_roller_tie"), 0)){
if(iParam4 !=-99){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("high_roller_shirt"), 0)){
}else{
return 0;
}}}elseif(iParam1 >=55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("braces"), 0)){
if(iParam3 !=-99){
if(iVar14 !=-1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("low2_draw_7"), 0)){
return 1;
}else{
return 0;
}}
if(iParam11 !=-99){
iVar22=-1;
if(iParam11 >=256){
iVar22=func_144(iParam0, iParam11, 4, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("high_waist"), 0)){
return 1;
}else{
return 0;
}}}}
return 1;
}

int func_197(int iParam0){
if(iParam0 !=-1){
return 0;
}
switch (iParam0){
case joaat("dlc_mp_busi_m_accs4_0"):
case joaat("dlc_mp_busi_m_accs5_0"):
case joaat("dlc_mp_busi_m_accs4_1"):
case joaat("dlc_mp_busi_m_accs5_1"):
case joaat("dlc_mp_busi_m_accs4_2"):
case joaat("dlc_mp_busi_m_accs5_2"):
case joaat("dlc_mp_busi_m_accs4_3"):
case joaat("dlc_mp_busi_m_accs5_3"):
case joaat("dlc_mp_busi_m_accs4_4"):
case joaat("dlc_mp_busi_m_accs5_4"):
case joaat("dlc_mp_busi_m_accs4_5"):
case joaat("dlc_mp_busi_m_accs5_5"):
case joaat("dlc_mp_busi_m_accs4_6"):
case joaat("dlc_mp_busi_m_accs5_6"):
case joaat("dlc_mp_busi_m_accs4_7"):
case joaat("dlc_mp_busi_m_accs5_7"):
case joaat("dlc_mp_busi_m_accs4_8"):
case joaat("dlc_mp_busi_m_accs5_8"):
case joaat("dlc_mp_busi_m_accs4_9"):
case joaat("dlc_mp_busi_m_accs5_9"):
case joaat("dlc_mp_busi_m_accs4_10"):
case joaat("dlc_mp_busi_m_accs5_10"):
case joaat("dlc_mp_busi_m_accs4_11"):
case joaat("dlc_mp_busi_m_accs5_11"):
case joaat("dlc_mp_busi_m_accs4_12"):
case joaat("dlc_mp_busi_m_accs5_12"):
case joaat("dlc_mp_busi_m_accs4_13"):
case joaat("dlc_mp_busi_m_accs5_13"):
case joaat("dlc_mp_busi_m_accs4_14"):
case joaat("dlc_mp_busi_m_accs5_14"):
case joaat("dlc_mp_busi_m_accs4_15"):
case joaat("dlc_mp_busi_m_accs5_15"):
return 1;
break;
}
return 0;
}

int func_198(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(iParam0==joaat("mp_m_freemode_01")){
iVar0=func_144(iParam0, iParam1, 11, 3);
if(iVar0 !=-1){
if(((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("jan_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("jan_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("low2_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("apart_draw_14"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("air_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("use_jacket_scarf"), 0)){
return 1;
}}
if(iVar0 !=-1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("silk_pyjamas"), 0)){
return 1;
}}
return func_259(iParam0, iParam1, -1);
}elseif(iParam0==joaat("mp_f_freemode_01")){
iVar1=func_144(iParam0, iParam1, 11, 4);
iVar2=-1;
if(iVar1 !=-1){
iVar2=func_255(iVar1);
}
if(((((((((((((((((((((((((((((((((((((iParam1 >=16 && iParam1 < 32) || (iParam1 >=48 && iParam1 < 64)) || (iParam1 >=96 && iParam1 < 112)) || (iParam1 >=112 && iParam1 < 128)) || (iParam1 >=128 && iParam1 < 144)) || (iParam1 >=144 && iParam1 < 160)) || (iParam1 >=160 && iParam1 < 176)) || (iParam1 >=224 && iParam1 < 240)) || iVar2==1) || iVar2==3) || iVar2==6) || iVar2==7) || iVar2==8) || iVar2==9) || iVar2==10) || iVar2==14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("heist_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("heist_draw_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("smoking_jacket"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("silk_robe"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("silk_pyjamas"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("low2_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("apart_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("apart_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("apart_draw_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("stunt_draw_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("air_draw_0"), 0)){
return 1;
}}
return 0;
}


void func_199(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
func_250(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
iVar1=func_249(iVar0, iParam1);
if(iVar1 !=-1){
if(iParam2==-1){
iParam2=Global_78338;
}
func_275(iVar1, 1, iParam2);
}
func_200(iParam0, bParam3, 0, -1);
}


void func_200(int iParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
struct<9> Var1;
int iVar2;
bool bVar3;
bool bVar4;
bool bVar5;
int iVar6;
int iVar7;
int iVar8;
struct<8> Var9;
int iVar10;
if(!PED::IS_PED_INJURED(iParam0)){
iVar0=Global_78338;
PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
iVar2=func_248(iParam0);
bVar3=func_243(iParam0, 0);
bVar4=func_235(iParam0);
bVar5=func_234(iParam0, iParam3);
if(bParam1){
bVar4=true;
}
if(bParam2){
bVar4=false;
}
iVar6=0;
while (iVar6 < 127){
if(func_231(iVar6, iVar0)){
if(func_226(&Var1, iVar6, iVar2, iParam0, -1)){
if(func_223(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
}}}
iVar6++;
}
if(func_231(123, iVar0)){
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) !=7){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
}}
iVar8=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
iVar7=0;
while (iVar7 < iVar8){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0)){
iVar10=(129 + iVar7);
if(func_231(iVar10, iVar0)){
if(func_223(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5)){
if(!func_202(Var9.f_2, Var9.f_3, iVar10)){
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
func_201(iParam0, Var9.f_2, Var9.f_3);
}
}}}}
iVar7++;
}}}


void func_201(int iParam0, int iParam1, int iParam2){
switch (iParam1){
case 1841427399:
switch (iParam2){
case -507124931:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1841427399, -435695677);
break;
case -2045170715:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1841427399, 1684098164);
break;
}
break;
case joaat("mpsecurity_overlays"):
switch (iParam2){
case -1698823936:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpsecurity_overlays"), -1282588017);
break;
case 543067199:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpsecurity_overlays"), 884393080);
break;
}
break;
case joaat("mptuner_overlays"):
switch (iParam2){
case -129339642:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1959383570);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case 887263619:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -598443208:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -1160700813);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -619123295:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case -2139930425:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -543063956);
break;
case 991513037:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 847416951);
break;
case -675149090:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 847416951);
break;
case 2021781367:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -1625184579);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -436866133:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case 457275657:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 429414924);
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -250832592:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -798760789:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), 1294359428);
break;
case -1634791241:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -2021672848);
break;
case -1227437948:
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mptuner_overlays"), -2021672848);
break;
}
break;
case joaat("mpheist4_overlays"):
switch (iParam2){
case joaat("MP_Heist4_Tee_039_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
break;
case joaat("MP_Heist4_Tee_041_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
break;
case joaat("MP_Heist4_Tee_043_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
break;
case joaat("MP_Heist4_Tee_039_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
break;
case joaat("MP_Heist4_Tee_041_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
break;
case joaat("MP_Heist4_Tee_043_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
break;
case joaat("MP_Heist4_Tee_049_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
break;
case joaat("MP_Heist4_Tee_051_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
break;
case joaat("MP_Heist4_Tee_055_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
break;
case joaat("MP_Heist4_Tee_057_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
break;
case joaat("MP_Heist4_Tee_059_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
break;
case joaat("MP_Heist4_Tee_061_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
break;
case joaat("MP_Heist4_Tee_063_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
break;
case joaat("MP_Heist4_Tee_065_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpheist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
break;
}
break;
case joaat("mpVinewood_overlays"):
switch (iParam2){
case joaat("CasinoTop_M_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
break;
case joaat("CasinoTop_M_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
break;
case joaat("CasinoTop_M_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
break;
case joaat("CasinoTop_M_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
break;
case joaat("CasinoTop_M_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
break;
case joaat("CasinoTop_M_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
break;
case joaat("CasinoTop_M_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
break;
case joaat("CasinoTop_M_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
break;
case joaat("CasinoTop_M_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
break;
case joaat("CasinoTop_M_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
break;
case joaat("CasinoTop_M_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
break;
case joaat("CasinoTop_M_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
break;
case joaat("CasinoTop_M_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
break;
case joaat("CasinoTop_M_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
break;
case joaat("CasinoTop_M_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
break;
case joaat("CasinoTop_M_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
break;
case joaat("CasinoTop_M_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
break;
case joaat("CasinoTop_M_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
break;
case joaat("CasinoTop_M_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
break;
case joaat("CasinoTop_M_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
break;
case joaat("CasinoTop_M_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
break;
case joaat("CasinoTop_M_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
break;
case joaat("CasinoTop_M_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
break;
case joaat("CasinoTop_M_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
break;
case joaat("CasinoTop_M_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
break;
case joaat("CasinoTop_M_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
break;
case joaat("CasinoTop_M_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
break;
case joaat("CasinoTop_M_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
break;
case joaat("CasinoTop_M_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
break;
case joaat("CasinoTop_M_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
case joaat("CasinoTop_M_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
break;
}
switch (iParam2){
case joaat("CasinoTop_F_0"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
break;
case joaat("CasinoTop_F_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_2"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
break;
case joaat("CasinoTop_F_3"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_4"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
break;
case joaat("CasinoTop_F_5"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_6"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
break;
case joaat("CasinoTop_F_7"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
break;
case joaat("CasinoTop_F_8"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
break;
case joaat("CasinoTop_F_9"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_10"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
break;
case joaat("CasinoTop_F_11"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
break;
case joaat("CasinoTop_F_12"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
break;
case joaat("CasinoTop_F_13"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
break;
case joaat("CasinoTop_F_14"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
break;
case joaat("CasinoTop_F_15"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
break;
case joaat("CasinoTop_F_16"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
break;
case joaat("CasinoTop_F_17"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
break;
case joaat("CasinoTop_F_18"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
break;
case joaat("CasinoTop_F_19"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
break;
case joaat("CasinoTop_F_20"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
break;
case joaat("CasinoTop_F_21"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_22"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
break;
case joaat("CasinoTop_F_23"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
break;
case joaat("CasinoTop_F_24"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_25"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
break;
case joaat("CasinoTop_F_26"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
break;
case joaat("CasinoTop_F_27"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_28"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
break;
case joaat("CasinoTop_F_29"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_30"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
break;
case joaat("CasinoTop_F_31"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_32"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
break;
case joaat("CasinoTop_F_33"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_34"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
break;
case joaat("CasinoTop_F_35"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_36"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
break;
case joaat("CasinoTop_F_37"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_38"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
break;
case joaat("CasinoTop_F_39"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_40"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
break;
case joaat("CasinoTop_F_41"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_42"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
break;
case joaat("CasinoTop_F_43"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
case joaat("CasinoTop_F_44"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam2){
case joaat("MP_Battle_Clothing_000_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
break;
}
switch (iParam2){
case joaat("MP_Battle_Clothing_000_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
break;
}
break;
case joaat("mpSmuggler_overlays"):
switch (iParam2){
case joaat("M_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
break;
case joaat("M_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
break;
case joaat("M_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
break;
case joaat("M_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
break;
case joaat("M_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
break;
case joaat("M_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
break;
case joaat("M_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
break;
case joaat("M_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
break;
case joaat("M_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
break;
case joaat("M_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
break;
case joaat("M_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
break;
case joaat("M_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
break;
case joaat("M_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
break;
case joaat("M_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
break;
case joaat("M_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
break;
case joaat("M_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
break;
case joaat("M_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
break;
case joaat("M_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
break;
case joaat("M_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
break;
}
switch (iParam2){
case joaat("F_TankTop_Smug_5_3_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
break;
case joaat("F_TankTop_Smug_5_17_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
break;
case joaat("F_TankTop_Smug_5_10_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
break;
case joaat("F_TankTop_Smug_5_11_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
break;
case joaat("F_TankTop_Smug_5_12_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
break;
case joaat("F_TankTop_Smug_5_13_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
break;
case joaat("F_TankTop_Smug_5_20_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
break;
case joaat("F_TankTop_Smug_5_21_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
break;
case joaat("F_TankTop_Smug_5_23_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
break;
case joaat("F_TankTop_Smug_5_22_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
break;
case joaat("F_TankTop_Smug_5_5_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
break;
case joaat("F_TankTop_Smug_5_18_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
break;
case joaat("F_TankTop_Smug_5_0_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
break;
case joaat("F_TankTop_Smug_5_3_b"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
break;
case joaat("F_TankTop_Smug_5_25_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
break;
case joaat("F_TankTop_Smug_5_7_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
break;
case joaat("F_TankTop_Smug_5_4_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
break;
case joaat("F_TankTop_Smug_5_1_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
break;
case joaat("F_TankTop_Smug_5_9_a"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam2){
case joaat("MP_Gunrunning_Award_020_M_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_F_ALT"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam2){
case joaat("MP_Securoserv_000_Mb"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
break;
case joaat("MP_Securoserv_000_Fb"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam2){
case joaat("MP_Elite_M_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
break;
case joaat("MP_Elite_F_Tshirt_1"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam2){
case joaat("MP_LUXE_TAT_029_M"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_M"));
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_M"));
break;
case joaat("MP_LUXE_TAT_029_F"):
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_030_F"));
PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpLuxe2_overlays"), joaat("MP_LUXE_TAT_031_F"));
break;
}
break;
}}

int func_202(int iParam0, int iParam1, int iParam2){
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
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
switch (iParam0){
case 1841427399:
switch (iParam1){
case -507124931:
case -2045170715:
if(func_222(36717, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-507124931);
break;
case -187038898:
case 524638244:
if(func_222(36767, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-187038898);
break;
case 1797082704:
case -757817895:
if(func_222(36766, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1797082704);
break;
case 1959890413:
case 1506629605:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1959890413);
break;
case 1167984459:
case 568901597:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1167984459);
break;
case 1006005360:
case 1403427788:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1006005360);
break;
case -1295693571:
case -1940685798:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1295693571);
break;
case -1825141795:
case 1441861967:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1825141795);
break;
case 61080464:
case -1941007133:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==61080464);
break;
case -1622071979:
case -1216457341:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1622071979);
break;
case -899024637:
case 141030546:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-899024637);
break;
case -569499773:
case 2065160600:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-569499773);
break;
case -665339429:
case 222569387:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-665339429);
break;
case 858185772:
case -1269669251:
if(Global_262145.f_34056){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==858185772);
break;
}
break;
}
switch (iParam0){
case 987639353:
switch (iParam1){
case 1529075272:
case 28812113:
if(func_222(34505, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1529075272);
break;
case 1769388797:
case 183205348:
if(func_222(34375, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1769388797);
break;
}
break;
}
switch (iParam0){
case joaat("mptuner_overlays"):
switch (iParam1){
case -129339642:
case 2021781367:
if(func_217(116, -1) >=func_216(116, 5, 9) || func_222(31760, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-129339642);
break;
case 887263619:
case -436866133:
if(func_215(123, -1) || func_222(31761, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==887263619);
break;
case -598443208:
case 457275657:
if(func_215(124, -1) || func_222(31762, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-598443208);
break;
case -619123295:
case -250832592:
if(func_215(125, -1) || func_222(31763, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-619123295);
break;
case -2139930425:
case -798760789:
if(func_215(126, -1) || func_222(31764, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-2139930425);
break;
case 991513037:
case -1634791241:
if(func_222(31768, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==991513037);
break;
case -675149090:
case -1227437948:
if(func_222(31769, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-675149090);
break;
case -1686814509:
case -1408179706:
if(func_222(31770, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1686814509);
break;
case 2138708412:
case -1894139601:
if(func_222(31771, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==2138708412);
break;
case 205793848:
case -786254870:
if(func_222(31772, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==205793848);
break;
case 1325175663:
case -773154515:
if(func_222(31773, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1325175663);
break;
case -368088972:
case 1778247767:
if(func_222(31774, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-368088972);
break;
case -1771053026:
case -648092145:
if(func_222(31775, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1771053026);
break;
}
break;
}
switch (iParam0){
case joaat("mpheist4_overlays"):
switch (iParam1){
case joaat("MP_Heist4_Tee_030_M"):
case joaat("MP_Heist4_Tee_030_F"):
if(func_222(30533, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_030_M"));
break;
case joaat("MP_Heist4_Tee_032_M"):
case joaat("MP_Heist4_Tee_032_F"):
if(func_222(30534, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_032_M"));
break;
case joaat("MP_Heist4_Tee_028_M"):
case joaat("MP_Heist4_Tee_028_F"):
if(func_222(30535, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_028_M"));
break;
case joaat("MP_Heist4_Tee_029_M"):
case joaat("MP_Heist4_Tee_029_F"):
if(func_222(30536, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_029_M"));
break;
case joaat("MP_Heist4_Tee_031_M"):
case joaat("MP_Heist4_Tee_031_F"):
if(func_222(30537, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_031_M"));
break;
case joaat("MP_Heist4_Tee_022_M"):
case joaat("MP_Heist4_Tee_022_F"):
if(func_222(30538, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_022_M"));
break;
case joaat("MP_Heist4_Tee_023_M"):
case joaat("MP_Heist4_Tee_023_F"):
if(func_222(30539, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_023_M"));
break;
case joaat("MP_Heist4_Tee_020_M"):
case joaat("MP_Heist4_Tee_020_F"):
if(func_222(30540, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_020_M"));
break;
case joaat("MP_Heist4_Tee_021_M"):
case joaat("MP_Heist4_Tee_021_F"):
if(func_222(30541, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_021_M"));
break;
case joaat("MP_Heist4_Tee_003_M"):
case joaat("MP_Heist4_Tee_003_F"):
if(func_222(30542, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_003_M"));
break;
case joaat("MP_Heist4_Tee_004_M"):
case joaat("MP_Heist4_Tee_004_F"):
if(func_222(30543, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_004_M"));
break;
case joaat("MP_Heist4_Tee_005_M"):
case joaat("MP_Heist4_Tee_005_F"):
if(func_222(30544, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_005_M"));
break;
case joaat("MP_Heist4_Tee_006_M"):
case joaat("MP_Heist4_Tee_006_F"):
if(func_222(30545, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_006_M"));
break;
case joaat("MP_Heist4_Tee_027_M"):
case joaat("MP_Heist4_Tee_027_F"):
if(func_222(30546, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_027_M"));
break;
case joaat("MP_Heist4_Tee_026_M"):
case joaat("MP_Heist4_Tee_026_F"):
if(func_222(30547, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_026_M"));
break;
case joaat("MP_Heist4_Tee_025_M"):
case joaat("MP_Heist4_Tee_025_F"):
if(func_222(30548, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_025_M"));
break;
case joaat("MP_Heist4_Tee_024_M"):
case joaat("MP_Heist4_Tee_024_F"):
if(func_222(30549, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_024_M"));
break;
case joaat("MP_Heist4_Tee_002_M"):
case joaat("MP_Heist4_Tee_002_F"):
if(func_222(30550, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_002_M"));
break;
case joaat("MP_Heist4_Tee_001_M"):
case joaat("MP_Heist4_Tee_001_F"):
if(func_222(30551, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_001_M"));
break;
case joaat("MP_Heist4_Tee_000_M"):
case joaat("MP_Heist4_Tee_000_F"):
if(func_222(30552, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_000_M"));
break;
case joaat("MP_Heist4_Tee_007_M"):
case joaat("MP_Heist4_Tee_007_F"):
if(func_222(30553, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_007_M"));
break;
case joaat("MP_Heist4_Tee_008_M"):
case joaat("MP_Heist4_Tee_008_F"):
if(func_222(30554, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_008_M"));
break;
case joaat("MP_Heist4_Tee_009_M"):
case joaat("MP_Heist4_Tee_009_F"):
if(func_222(30555, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_009_M"));
break;
case joaat("MP_Heist4_Tee_010_M"):
case joaat("MP_Heist4_Tee_010_F"):
if(func_222(30556, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_010_M"));
break;
case joaat("MP_Heist4_Tee_011_M"):
case joaat("MP_Heist4_Tee_011_F"):
if(func_222(30557, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_011_M"));
break;
case joaat("MP_Heist4_Tee_012_M"):
case joaat("MP_Heist4_Tee_012_F"):
if(func_222(30524, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_012_M"));
break;
case joaat("MP_Heist4_Tee_013_M"):
case joaat("MP_Heist4_Tee_013_F"):
if(func_222(30525, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_013_M"));
break;
case joaat("MP_Heist4_Tee_014_M"):
case joaat("MP_Heist4_Tee_014_F"):
if(func_222(30526, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_014_M"));
break;
case joaat("MP_Heist4_Tee_015_M"):
case joaat("MP_Heist4_Tee_015_F"):
if(func_222(30527, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_015_M"));
break;
case joaat("MP_Heist4_Tee_016_M"):
case joaat("MP_Heist4_Tee_016_F"):
if(func_222(30528, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_016_M"));
break;
case joaat("MP_Heist4_Tee_017_M"):
case joaat("MP_Heist4_Tee_017_F"):
if(func_222(30529, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_017_M"));
break;
case joaat("MP_Heist4_Tee_018_M"):
case joaat("MP_Heist4_Tee_018_F"):
if(func_222(30530, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_018_M"));
break;
case joaat("MP_Heist4_Tee_019_M"):
case joaat("MP_Heist4_Tee_019_F"):
if(func_222(30531, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_019_M"));
break;
case joaat("MP_Heist4_Tee_033_M"):
case joaat("MP_Heist4_Tee_033_F"):
if(func_222(30532, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_033_M"));
break;
case joaat("MP_Heist4_Tee_045_M"):
case joaat("MP_Heist4_Tee_045_F"):
if(func_222(30570, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_045_M"));
break;
case joaat("MP_Heist4_Tee_046_M"):
case joaat("MP_Heist4_Tee_046_F"):
if(func_222(30571, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_046_M"));
break;
case joaat("MP_Heist4_Tee_048_M"):
case joaat("MP_Heist4_Tee_048_F"):
if(func_222(30568, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_048_M"));
break;
case joaat("MP_Heist4_Tee_047_M"):
case joaat("MP_Heist4_Tee_047_F"):
if(func_222(30569, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_047_M"));
break;
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_049_F"):
if(func_222(30634, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_049_M"));
break;
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_051_F"):
if(func_222(30635, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_051_M"));
break;
case joaat("MP_Heist4_Tee_053_M"):
case joaat("MP_Heist4_Tee_053_F"):
if(func_222(30636, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_053_M"));
break;
case joaat("MP_Heist4_Tee_054_M"):
case joaat("MP_Heist4_Tee_054_F"):
if(func_222(30637, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_054_M"));
break;
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_055_F"):
if(func_222(30703, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_055_M"));
break;
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_057_F"):
if(func_222(30704, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_057_M"));
break;
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_059_F"):
if(func_222(30700, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_059_M"));
break;
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_061_F"):
if(func_222(30701, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_061_M"));
break;
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_063_F"):
if(func_222(30702, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_063_M"));
break;
case joaat("MP_Heist4_Tee_065_M"):
case joaat("MP_Heist4_Tee_065_F"):
if(func_222(30699, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Heist4_Tee_065_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -1265443416:
case 676807987:
if(func_222(30260, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1265443416);
break;
case 1888753218:
case 272160153:
if(func_222(30261, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1888753218);
break;
case -552467991:
case 1593344440:
if(func_222(30262, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-552467991);
break;
case -1655919948:
case 546222390:
if(func_222(30263, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1655919948);
break;
case -917106601:
case 1983375900:
if(func_222(30264, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-917106601);
break;
case 1595446967:
case -620589387:
if(func_222(30265, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1595446967);
break;
case -530593323:
case 383923929:
if(func_222(30266, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-530593323);
break;
case 561619447:
case -1703406594:
if(func_222(30267, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==561619447);
break;
case -1913656173:
case -398286533:
if(func_222(30268, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1913656173);
break;
case -1766901922:
case -80478106:
if(func_222(30269, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1766901922);
break;
case 2091781849:
case 1835331655:
if(func_222(30270, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==2091781849);
break;
case 1824588341:
case -1650596870:
if(func_222(30271, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1824588341);
break;
case 242597641:
case 1231926496:
if(func_222(30272, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==242597641);
break;
case 566785691:
case -1506181253:
if(func_222(30273, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==566785691);
break;
case -2091312957:
case -1737145605:
if(func_222(30274, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-2091312957);
break;
case -2079214831:
case 1673851512:
if(func_222(30275, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-2079214831);
break;
case 1359156274:
case 1023339598:
if(func_222(30276, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1359156274);
break;
case 1904247246:
case -163738770:
if(func_222(30277, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1904247246);
break;
case -1351518396:
case 1863218823:
if(func_222(30278, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1351518396);
break;
case -797874817:
case 333966447:
if(func_222(30279, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-797874817);
break;
case -385507297:
case 1412626052:
if(func_222(30280, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-385507297);
break;
case 2011910758:
case -39100956:
if(func_222(30281, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==2011910758);
break;
case -1953985443:
case 1631533003:
if(func_222(30282, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1953985443);
break;
case -1124222352:
case 1493430918:
if(func_222(30283, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1124222352);
break;
case -1806994767:
case -196693334:
if(func_222(30284, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1806994767);
break;
case -1445761968:
case 553507495:
if(func_222(30285, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1445761968);
break;
case -89186417:
case 2003474700:
if(func_222(30286, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-89186417);
break;
case -308083083:
case 1121792228:
if(func_222(30287, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-308083083);
break;
case 667714507:
case -1424651669:
if(func_222(30288, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==667714507);
break;
case -1610210252:
case -1454164346:
if(func_222(30289, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1610210252);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case -417116499:
case -779574408:
if(func_222(28255, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-417116499);
break;
}
break;
}
switch (iParam0){
case joaat("mpsum_overlays"):
switch (iParam1){
case 1246110729:
case -1361908447:
if(func_215(89, -1) || func_222(30254, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==1246110729);
break;
case 461575135:
case 1250161120:
if(func_215(90, -1) || func_222(30255, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==461575135);
break;
case -386163163:
case 1288201657:
if(func_215(92, -1) || func_222(30256, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-386163163);
break;
case -1414541879:
case 111412152:
if((((func_215(89, -1) && func_215(90, -1)) && func_215(92, -1)) && func_215(91, -1)) || func_222(30257, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==-1414541879);
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_001_F"):
case joaat("mpHeist3_Tee_001_M"):
if(func_215(78, -1) || func_222(28199, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_001_M"));
break;
case joaat("mpHeist3_Tee_000_F"):
case joaat("mpHeist3_Tee_000_M"):
if(((func_215(77, -1) && func_215(78, -1)) && func_217(92, -1) >=func_216(92, 5, 9)) || func_222(28200, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_000_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_007_F"):
case joaat("mpHeist3_Tee_008_F"):
case joaat("mpHeist3_Tee_009_F"):
case joaat("mpHeist3_Tee_007_M"):
case joaat("mpHeist3_Tee_008_M"):
case joaat("mpHeist3_Tee_009_M"):
if(((func_217(93, -1) >=func_216(93, 5, 9) && func_215(79, -1)) && func_215(80, -1)) || func_222(28204, -1)){
return 0;
}
return !func_218(iParam2, iParam1, ((iParam1==joaat("mpHeist3_Tee_007_M") || iParam1==joaat("mpHeist3_Tee_008_M")) || iParam1==joaat("mpHeist3_Tee_009_M")));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_004_F"):
case joaat("mpHeist3_Tee_004_M"):
if(func_215(81, -1) || func_222(28206, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_004_M"));
break;
case joaat("mpHeist3_Tee_005_F"):
case joaat("mpHeist3_Tee_005_M"):
if(func_217(94, -1) >=func_216(94, 5, 9) || func_222(28207, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_005_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_006_F"):
case joaat("mpHeist3_Tee_006_M"):
if(((func_215(84, -1) && func_215(85, -1)) && func_217(97, -1) >=func_216(97, 5, 9)) || func_222(28212, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_006_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_002_F"):
case joaat("mpHeist3_Tee_002_M"):
if(func_222(28249, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_002_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_013_F"):
case joaat("mpHeist3_Tee_013_M"):
if(func_222(28183, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_013_M"));
break;
case joaat("mpHeist3_Tee_014_F"):
case joaat("mpHeist3_Tee_014_M"):
if(func_222(28182, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_014_M"));
break;
case joaat("mpHeist3_Tee_015_F"):
case joaat("mpHeist3_Tee_015_M"):
if(func_222(28184, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_015_M"));
break;
case joaat("mpHeist3_Tee_016_F"):
case joaat("mpHeist3_Tee_016_M"):
if(func_222(28181, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_016_M"));
break;
case joaat("mpHeist3_Tee_017_F"):
case joaat("mpHeist3_Tee_017_M"):
if(func_222(28178, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_017_M"));
break;
case joaat("mpHeist3_Tee_018_F"):
case joaat("mpHeist3_Tee_018_M"):
if(func_222(28177, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_018_M"));
break;
case joaat("mpHeist3_Tee_019_F"):
case joaat("mpHeist3_Tee_019_M"):
if(func_222(28176, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_019_M"));
break;
case joaat("mpHeist3_Tee_020_F"):
case joaat("mpHeist3_Tee_020_M"):
if(func_222(28180, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_020_M"));
break;
case joaat("mpHeist3_Tee_021_F"):
case joaat("mpHeist3_Tee_021_M"):
if(func_222(28179, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_021_M"));
break;
case joaat("mpHeist3_Tee_022_F"):
case joaat("mpHeist3_Tee_022_M"):
if(((((((((func_222(28176, -1) && func_222(28177, -1)) && func_222(28178, -1)) && func_222(28179, -1)) && func_222(28180, -1)) && func_222(28181, -1)) && func_222(28182, -1)) && func_222(28183, -1)) && func_222(28184, -1)) || func_222(28221, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_022_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_023_F"):
case joaat("mpHeist3_Tee_023_M"):
if(func_222(28191, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_023_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_011_F"):
case joaat("mpHeist3_Tee_011_M"):
if(func_222(28190, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_011_M"));
break;
case joaat("mpHeist3_Tee_012_F"):
case joaat("mpHeist3_Tee_012_M"):
if(func_222(28189, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_012_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_003_F"):
case joaat("mpHeist3_Tee_003_M"):
if(func_211(0, 1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_003_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpHeist3_overlays"):
switch (iParam1){
case joaat("mpHeist3_Tee_010_F"):
case joaat("mpHeist3_Tee_010_M"):
if((((((((((((((((((func_215(77, -1) && func_215(78, -1)) && func_217(92, -1) >=func_216(92, 5, 9)) && func_217(93, -1) >=func_216(93, 5, 9)) && func_215(79, -1)) && func_215(80, -1)) && func_215(81, -1)) && func_217(94, -1) >=func_216(94, 5, 9)) && func_217(95, -1) >=func_216(95, 5, 9)) && func_215(82, -1)) && func_215(83, -1)) && func_217(96, -1) >=func_216(96, 5, 9)) && func_215(84, -1)) && func_215(85, -1)) && func_217(97, -1) >=func_216(97, 5, 9)) && func_215(86, -1)) && func_215(87, -1)) && func_215(88, -1)) || func_222(28222, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("mpHeist3_Tee_010_M"));
break;
}
break;
}
switch (iParam0){
case joaat("mpVinewood_overlays"):
switch (iParam1){
case joaat("MP_Vinewood_Tat_023_M"):
case joaat("MP_Vinewood_Tat_023_F"):
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_023_M"));
break;
case joaat("MP_Vinewood_Tat_030_M"):
case joaat("MP_Vinewood_Tat_030_F"):
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Vinewood_Tat_030_M"));
break;
case joaat("CasinoTop_M_21"):
case joaat("CasinoTop_F_21"):
if(func_222(27109, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_21"));
break;
case joaat("CasinoTop_M_23"):
case joaat("CasinoTop_F_23"):
if(func_222(27110, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_23"));
break;
case joaat("CasinoTop_M_2"):
case joaat("CasinoTop_F_2"):
if(func_222(27111, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_2"));
break;
case joaat("CasinoTop_M_4"):
case joaat("CasinoTop_F_4"):
if(func_222(27112, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_4"));
break;
case joaat("CasinoTop_M_6"):
case joaat("CasinoTop_F_6"):
if(func_222(27113, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_6"));
break;
case joaat("CasinoTop_M_10"):
case joaat("CasinoTop_F_10"):
if(func_222(27114, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_10"));
break;
case joaat("CasinoTop_M_22"):
case joaat("CasinoTop_F_22"):
if(func_222(27115, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("CasinoTop_M_22"));
break;
}
break;
case joaat("mpChristmas2018_overlays"):
switch (iParam1){
case joaat("MP_Christmas2018_Tee_000_M"):
case joaat("MP_Christmas2018_Tee_000_F"):
if(func_222(25032, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_000_M"));
break;
case joaat("MP_Christmas2018_Tee_001_M"):
case joaat("MP_Christmas2018_Tee_001_F"):
if(func_222(25033, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_001_M"));
break;
case joaat("MP_Christmas2018_Tee_002_M"):
case joaat("MP_Christmas2018_Tee_002_F"):
if(func_222(25034, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_002_M"));
break;
case joaat("MP_Christmas2018_Tee_003_M"):
case joaat("MP_Christmas2018_Tee_003_F"):
if(func_222(25035, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_003_M"));
break;
case joaat("MP_Christmas2018_Tee_004_M"):
case joaat("MP_Christmas2018_Tee_004_F"):
if(func_222(25036, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_004_M"));
break;
case joaat("MP_Christmas2018_Tee_005_M"):
case joaat("MP_Christmas2018_Tee_005_F"):
if(func_222(25037, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_005_M"));
break;
case joaat("MP_Christmas2018_Tee_006_M"):
case joaat("MP_Christmas2018_Tee_006_F"):
if(func_222(25038, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_006_M"));
break;
case joaat("MP_Christmas2018_Tee_007_M"):
case joaat("MP_Christmas2018_Tee_007_F"):
if(func_222(25039, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_007_M"));
break;
case joaat("MP_Christmas2018_Tee_008_M"):
case joaat("MP_Christmas2018_Tee_008_F"):
if(func_222(25040, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_008_M"));
break;
case joaat("MP_Christmas2018_Tee_009_M"):
case joaat("MP_Christmas2018_Tee_009_F"):
if(func_222(25041, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_009_M"));
break;
case joaat("MP_Christmas2018_Tee_010_M"):
case joaat("MP_Christmas2018_Tee_010_F"):
if(func_222(25042, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_010_M"));
break;
case joaat("MP_Christmas2018_Tee_011_M"):
case joaat("MP_Christmas2018_Tee_011_F"):
if(func_222(25043, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_011_M"));
break;
case joaat("MP_Christmas2018_Tee_012_M"):
case joaat("MP_Christmas2018_Tee_012_F"):
if(func_222(25044, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_012_M"));
break;
case joaat("MP_Christmas2018_Tee_013_M"):
case joaat("MP_Christmas2018_Tee_013_F"):
if(func_222(25045, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_013_M"));
break;
case joaat("MP_Christmas2018_Tee_014_M"):
case joaat("MP_Christmas2018_Tee_014_F"):
if(func_222(25046, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_014_M"));
break;
case joaat("MP_Christmas2018_Tee_015_M"):
case joaat("MP_Christmas2018_Tee_015_F"):
if(func_222(25047, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_015_M"));
break;
case joaat("MP_Christmas2018_Tee_016_M"):
case joaat("MP_Christmas2018_Tee_016_F"):
if(func_222(25048, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_016_M"));
break;
case joaat("MP_Christmas2018_Tee_017_M"):
case joaat("MP_Christmas2018_Tee_017_F"):
if(func_222(25049, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_017_M"));
break;
case joaat("MP_Christmas2018_Tee_018_M"):
case joaat("MP_Christmas2018_Tee_018_F"):
if(func_222(25050, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_018_M"));
break;
case joaat("MP_Christmas2018_Tee_019_M"):
case joaat("MP_Christmas2018_Tee_019_F"):
if(func_222(25051, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_019_M"));
break;
case joaat("MP_Christmas2018_Tee_020_M"):
case joaat("MP_Christmas2018_Tee_020_F"):
if(func_222(25052, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_020_M"));
break;
case joaat("MP_Christmas2018_Tee_021_M"):
case joaat("MP_Christmas2018_Tee_021_F"):
if(func_222(25053, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_021_M"));
break;
case joaat("MP_Christmas2018_Tee_022_M"):
case joaat("MP_Christmas2018_Tee_022_F"):
if(func_222(25054, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_022_M"));
break;
case joaat("MP_Christmas2018_Tee_023_M"):
case joaat("MP_Christmas2018_Tee_023_F"):
if(func_222(25055, -1)){
return 0;
}
if(func_222(27077, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_023_M"));
break;
case joaat("MP_Christmas2018_Tee_024_M"):
case joaat("MP_Christmas2018_Tee_024_F"):
if(func_222(25056, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_024_M"));
break;
case joaat("MP_Christmas2018_Tee_025_M"):
case joaat("MP_Christmas2018_Tee_025_F"):
if(func_222(25057, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_025_M"));
break;
case joaat("MP_Christmas2018_Tee_026_M"):
case joaat("MP_Christmas2018_Tee_026_F"):
if(func_222(25058, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_026_M"));
break;
case joaat("MP_Christmas2018_Tee_027_M"):
case joaat("MP_Christmas2018_Tee_027_F"):
if(func_222(25059, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_027_M"));
break;
case joaat("MP_Christmas2018_Tee_028_M"):
case joaat("MP_Christmas2018_Tee_028_F"):
if(func_222(25060, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_028_M"));
break;
case joaat("MP_Christmas2018_Tee_029_M"):
case joaat("MP_Christmas2018_Tee_029_F"):
if(func_222(25061, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_029_M"));
break;
case joaat("MP_Christmas2018_Tee_030_M"):
case joaat("MP_Christmas2018_Tee_030_F"):
if(func_222(25062, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_030_M"));
break;
case joaat("MP_Christmas2018_Tee_031_M"):
case joaat("MP_Christmas2018_Tee_031_F"):
if(func_222(25063, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_031_M"));
break;
case joaat("MP_Christmas2018_Tee_032_M"):
case joaat("MP_Christmas2018_Tee_032_F"):
if(func_222(25064, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_032_M"));
break;
case joaat("MP_Christmas2018_Tee_033_M"):
case joaat("MP_Christmas2018_Tee_033_F"):
if(func_222(25065, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_033_M"));
break;
case joaat("MP_Christmas2018_Tee_034_M"):
case joaat("MP_Christmas2018_Tee_034_F"):
if(func_222(25066, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_034_M"));
break;
case joaat("MP_Christmas2018_Tee_035_M"):
case joaat("MP_Christmas2018_Tee_035_F"):
if(func_222(25067, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_035_M"));
break;
case joaat("MP_Christmas2018_Tee_036_M"):
case joaat("MP_Christmas2018_Tee_036_F"):
if(func_222(25068, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_036_M"));
break;
case joaat("MP_Christmas2018_Tee_037_M"):
case joaat("MP_Christmas2018_Tee_037_F"):
if(func_222(25069, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_037_M"));
break;
case joaat("MP_Christmas2018_Tee_038_M"):
case joaat("MP_Christmas2018_Tee_038_F"):
if(func_222(25070, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_038_M"));
break;
case joaat("MP_Christmas2018_Tee_039_M"):
case joaat("MP_Christmas2018_Tee_039_F"):
if(func_222(25071, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_039_M"));
break;
case joaat("MP_Christmas2018_Tee_040_M"):
case joaat("MP_Christmas2018_Tee_040_F"):
if(func_222(25072, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_040_M"));
break;
case joaat("MP_Christmas2018_Tee_041_M"):
case joaat("MP_Christmas2018_Tee_041_F"):
if(func_222(25073, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_041_M"));
break;
case joaat("MP_Christmas2018_Tee_042_M"):
case joaat("MP_Christmas2018_Tee_042_F"):
if(func_222(25074, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_042_M"));
break;
case joaat("MP_Christmas2018_Tee_043_M"):
case joaat("MP_Christmas2018_Tee_043_F"):
if(func_222(25075, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_043_M"));
break;
case joaat("MP_Christmas2018_Tee_044_M"):
case joaat("MP_Christmas2018_Tee_044_F"):
if(func_222(25076, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_044_M"));
break;
case joaat("MP_Christmas2018_Tee_045_M"):
case joaat("MP_Christmas2018_Tee_045_F"):
if(func_222(25077, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_045_M"));
break;
case joaat("MP_Christmas2018_Tee_046_M"):
case joaat("MP_Christmas2018_Tee_046_F"):
if(func_222(25078, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_046_M"));
break;
case joaat("MP_Christmas2018_Tee_047_M"):
case joaat("MP_Christmas2018_Tee_047_F"):
if(func_222(25079, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_047_M"));
break;
case joaat("MP_Christmas2018_Tee_048_M"):
case joaat("MP_Christmas2018_Tee_048_F"):
if(func_222(25080, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_048_M"));
break;
case joaat("MP_Christmas2018_Tee_049_M"):
case joaat("MP_Christmas2018_Tee_049_F"):
if(func_222(25081, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_049_M"));
break;
case joaat("MP_Christmas2018_Tee_050_M"):
case joaat("MP_Christmas2018_Tee_050_F"):
if(func_222(25082, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_050_M"));
break;
case joaat("MP_Christmas2018_Tee_051_M"):
case joaat("MP_Christmas2018_Tee_051_F"):
if(func_222(25083, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_051_M"));
break;
case joaat("MP_Christmas2018_Tee_052_M"):
case joaat("MP_Christmas2018_Tee_052_F"):
if(func_222(25084, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_052_M"));
break;
case joaat("MP_Christmas2018_Tee_053_M"):
case joaat("MP_Christmas2018_Tee_053_F"):
if(func_222(25085, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_053_M"));
break;
case joaat("MP_Christmas2018_Tee_054_M"):
case joaat("MP_Christmas2018_Tee_054_F"):
if(func_222(25086, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_054_M"));
break;
case joaat("MP_Christmas2018_Tee_055_M"):
case joaat("MP_Christmas2018_Tee_055_F"):
if(func_222(25087, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_055_M"));
break;
case joaat("MP_Christmas2018_Tee_056_M"):
case joaat("MP_Christmas2018_Tee_056_F"):
if(func_222(25088, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_056_M"));
break;
case joaat("MP_Christmas2018_Tee_057_M"):
case joaat("MP_Christmas2018_Tee_057_F"):
if(func_222(25089, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_057_M"));
break;
case joaat("MP_Christmas2018_Tee_058_M"):
case joaat("MP_Christmas2018_Tee_058_F"):
if(func_222(25090, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_058_M"));
break;
case joaat("MP_Christmas2018_Tee_059_M"):
case joaat("MP_Christmas2018_Tee_059_F"):
if(func_222(25091, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_059_M"));
break;
case joaat("MP_Christmas2018_Tee_060_M"):
case joaat("MP_Christmas2018_Tee_060_F"):
if(func_222(25092, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_060_M"));
break;
case joaat("MP_Christmas2018_Tee_061_M"):
case joaat("MP_Christmas2018_Tee_061_F"):
if(func_222(25093, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_061_M"));
break;
case joaat("MP_Christmas2018_Tee_062_M"):
case joaat("MP_Christmas2018_Tee_062_F"):
if(func_222(25094, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_062_M"));
break;
case joaat("MP_Christmas2018_Tee_063_M"):
case joaat("MP_Christmas2018_Tee_063_F"):
if(func_222(25095, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_063_M"));
break;
case joaat("MP_Christmas2018_Tee_064_M"):
case joaat("MP_Christmas2018_Tee_064_F"):
if(func_222(25096, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_064_M"));
break;
case joaat("MP_Christmas2018_Tee_065_M"):
case joaat("MP_Christmas2018_Tee_065_F"):
if(func_222(25097, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_065_M"));
break;
case joaat("MP_Christmas2018_Tee_066_M"):
case joaat("MP_Christmas2018_Tee_066_F"):
if(func_222(25098, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_066_M"));
break;
case joaat("MP_Christmas2018_Tee_067_M"):
case joaat("MP_Christmas2018_Tee_067_F"):
if(func_222(25099, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tee_067_M"));
break;
case joaat("MP_Christmas2018_Tat_000_M"):
case joaat("MP_Christmas2018_Tat_000_F"):
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Christmas2018_Tat_000_M"));
break;
}
break;
case joaat("mpBattle_overlays"):
switch (iParam1){
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Battle_Clothing_000_F"):
if(func_222(22108, -1) || func_222(25006, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_000_M"));
break;
case joaat("MP_Battle_Clothing_002_M"):
case joaat("MP_Battle_Clothing_002_F"):
if(func_222(9481, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_002_M"));
break;
case joaat("MP_Battle_Clothing_003_M"):
case joaat("MP_Battle_Clothing_003_F"):
if(func_222(9470, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_003_M"));
break;
case joaat("MP_Battle_Clothing_004_M"):
case joaat("MP_Battle_Clothing_004_F"):
if(func_222(9475, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_004_M"));
break;
case joaat("MP_Battle_Clothing_005_M"):
case joaat("MP_Battle_Clothing_005_F"):
if(func_222(9472, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_005_M"));
break;
case joaat("MP_Battle_Clothing_006_M"):
case joaat("MP_Battle_Clothing_006_F"):
if(func_222(9465, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_006_M"));
break;
case joaat("MP_Battle_Clothing_007_M"):
case joaat("MP_Battle_Clothing_007_F"):
if(func_222(9463, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_007_M"));
break;
case joaat("MP_Battle_Clothing_008_M"):
case joaat("MP_Battle_Clothing_008_F"):
if(func_222(9464, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_008_M"));
break;
case joaat("MP_Battle_Clothing_009_M"):
case joaat("MP_Battle_Clothing_009_F"):
if(func_222(9468, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_009_M"));
break;
case joaat("MP_Battle_Clothing_010_M"):
case joaat("MP_Battle_Clothing_010_F"):
if(func_222(9469, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_010_M"));
break;
case joaat("MP_Battle_Clothing_011_M"):
case joaat("MP_Battle_Clothing_011_F"):
if(func_222(9479, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_011_M"));
break;
case joaat("MP_Battle_Clothing_012_M"):
case joaat("MP_Battle_Clothing_012_F"):
if(func_222(9473, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_012_M"));
break;
case joaat("MP_Battle_Clothing_013_M"):
case joaat("MP_Battle_Clothing_013_F"):
if(func_222(9480, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_013_M"));
break;
case joaat("MP_Battle_Clothing_014_M"):
case joaat("MP_Battle_Clothing_014_F"):
if(func_222(9476, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_014_M"));
break;
case joaat("MP_Battle_Clothing_015_M"):
case joaat("MP_Battle_Clothing_015_F"):
if(func_222(9477, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_015_M"));
break;
case joaat("MP_Battle_Clothing_016_M"):
case joaat("MP_Battle_Clothing_016_F"):
if(func_222(9471, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_016_M"));
break;
case joaat("MP_Battle_Clothing_017_M"):
case joaat("MP_Battle_Clothing_017_F"):
if(func_222(9474, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_017_M"));
break;
case joaat("MP_Battle_Clothing_018_M"):
case joaat("MP_Battle_Clothing_018_F"):
if(func_222(9467, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_018_M"));
break;
case joaat("MP_Battle_Clothing_019_M"):
case joaat("MP_Battle_Clothing_019_F"):
if(func_222(9478, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_019_M"));
break;
case joaat("MP_Battle_Clothing_020_M"):
case joaat("MP_Battle_Clothing_020_F"):
if(func_222(9462, -1)){
return 0;
}
if(iParam1==joaat("MP_Battle_Clothing_020_M")){
if(func_222(27085, -1)){
return 0;
}}elseif(func_222(27084, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_020_M"));
break;
case joaat("MP_Battle_Clothing_021_M"):
case joaat("MP_Battle_Clothing_021_F"):
if(func_222(9466, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_021_M"));
break;
case joaat("MP_Battle_Clothing_022_M"):
case joaat("MP_Battle_Clothing_022_F"):
if(func_222(22126, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_022_M"));
break;
case joaat("MP_Battle_Clothing_023_M"):
case joaat("MP_Battle_Clothing_023_F"):
if(func_222(22127, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_023_M"));
break;
case joaat("MP_Battle_Clothing_024_M"):
case joaat("MP_Battle_Clothing_024_F"):
if(func_222(22128, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_024_M"));
break;
case joaat("MP_Battle_Clothing_025_M"):
case joaat("MP_Battle_Clothing_025_F"):
if(func_222(22124, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_025_M"));
break;
case joaat("MP_Battle_Clothing_026_M"):
case joaat("MP_Battle_Clothing_026_F"):
if(func_222(22130, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_026_M"));
break;
case joaat("MP_Battle_Clothing_027_M"):
case joaat("MP_Battle_Clothing_027_F"):
if(func_222(22125, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_027_M"));
break;
case joaat("MP_Battle_Clothing_028_M"):
case joaat("MP_Battle_Clothing_028_F"):
if(func_222(22129, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_028_M"));
break;
case joaat("MP_Battle_Clothing_029_M"):
case joaat("MP_Battle_Clothing_029_F"):
if(func_222(22131, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_029_M"));
break;
case joaat("MP_Battle_Clothing_030_M"):
case joaat("MP_Battle_Clothing_030_F"):
if(func_222(22132, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_030_M"));
break;
}
switch (iParam1){
case joaat("MP_Battle_Clothing_031_M"):
case joaat("MP_Battle_Clothing_031_F"):
if(func_222(22147, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_031_M"));
break;
case joaat("MP_Battle_Clothing_032_M"):
case joaat("MP_Battle_Clothing_032_F"):
if(func_222(22148, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_032_M"));
break;
case joaat("MP_Battle_Clothing_033_M"):
case joaat("MP_Battle_Clothing_033_F"):
if(func_222(22149, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_033_M"));
break;
case joaat("MP_Battle_Clothing_034_M"):
case joaat("MP_Battle_Clothing_034_F"):
if(func_222(22150, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_034_M"));
break;
case joaat("MP_Battle_Clothing_035_M"):
case joaat("MP_Battle_Clothing_035_F"):
if(func_222(22151, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_035_M"));
break;
case joaat("MP_Battle_Clothing_036_M"):
case joaat("MP_Battle_Clothing_036_F"):
if(func_222(22152, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_036_M"));
break;
case joaat("MP_Battle_Clothing_037_M"):
case joaat("MP_Battle_Clothing_037_F"):
if(func_222(22153, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_037_M"));
break;
case joaat("MP_Battle_Clothing_038_M"):
case joaat("MP_Battle_Clothing_038_F"):
if(func_222(22154, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_038_M"));
break;
case joaat("MP_Battle_Clothing_039_M"):
case joaat("MP_Battle_Clothing_039_F"):
if(func_222(22155, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_039_M"));
break;
case joaat("MP_Battle_Clothing_040_M"):
case joaat("MP_Battle_Clothing_040_F"):
if(func_222(22156, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_040_M"));
break;
case joaat("MP_Battle_Clothing_041_M"):
case joaat("MP_Battle_Clothing_041_F"):
if(func_222(22157, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_041_M"));
break;
case joaat("MP_Battle_Clothing_042_M"):
case joaat("MP_Battle_Clothing_042_F"):
if(func_222(22158, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_042_M"));
break;
case joaat("MP_Battle_Clothing_043_M"):
case joaat("MP_Battle_Clothing_043_F"):
if(func_222(22159, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_043_M"));
break;
case joaat("MP_Battle_Clothing_044_M"):
case joaat("MP_Battle_Clothing_044_F"):
if(func_222(22160, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_044_M"));
break;
case joaat("MP_Battle_Clothing_045_M"):
case joaat("MP_Battle_Clothing_045_F"):
if(func_222(22161, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_045_M"));
break;
case joaat("MP_Battle_Clothing_046_M"):
case joaat("MP_Battle_Clothing_046_F"):
if(func_222(22162, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_046_M"));
break;
case joaat("MP_Battle_Clothing_047_M"):
case joaat("MP_Battle_Clothing_047_F"):
if(func_222(22163, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_047_M"));
break;
case joaat("MP_Battle_Clothing_048_M"):
case joaat("MP_Battle_Clothing_048_F"):
if(func_222(22164, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_048_M"));
break;
case joaat("MP_Battle_Clothing_049_M"):
case joaat("MP_Battle_Clothing_049_F"):
if(func_222(22165, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_049_M"));
break;
case joaat("MP_Battle_Clothing_050_M"):
case joaat("MP_Battle_Clothing_050_F"):
if(func_222(22166, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_050_M"));
break;
case joaat("MP_Battle_Clothing_051_M"):
case joaat("MP_Battle_Clothing_051_F"):
if(func_222(22167, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_051_M"));
break;
case joaat("MP_Battle_Clothing_052_M"):
case joaat("MP_Battle_Clothing_052_F"):
if(func_222(22168, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_052_M"));
break;
case joaat("MP_Battle_Clothing_053_M"):
case joaat("MP_Battle_Clothing_053_F"):
if(func_222(22169, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_053_M"));
break;
case joaat("MP_Battle_Clothing_054_M"):
case joaat("MP_Battle_Clothing_054_F"):
if(func_222(22170, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_054_M"));
break;
case joaat("MP_Battle_Clothing_055_M"):
case joaat("MP_Battle_Clothing_055_F"):
if(func_222(22171, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_055_M"));
break;
case joaat("MP_Battle_Clothing_056_M"):
case joaat("MP_Battle_Clothing_056_F"):
if(func_222(22172, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_056_M"));
break;
case joaat("MP_Battle_Clothing_057_M"):
case joaat("MP_Battle_Clothing_057_F"):
if(func_222(22173, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_057_M"));
break;
case joaat("MP_Battle_Clothing_058_M"):
case joaat("MP_Battle_Clothing_058_F"):
if(func_222(22174, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_058_M"));
break;
case joaat("MP_Battle_Clothing_059_M"):
case joaat("MP_Battle_Clothing_059_F"):
if(func_222(22175, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_059_M"));
break;
case joaat("MP_Battle_Clothing_060_M"):
case joaat("MP_Battle_Clothing_060_F"):
if(func_222(22176, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_060_M"));
break;
case joaat("MP_Battle_Clothing_061_M"):
case joaat("MP_Battle_Clothing_061_F"):
if(func_222(22177, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_061_M"));
break;
case joaat("MP_Battle_Clothing_062_M"):
case joaat("MP_Battle_Clothing_062_F"):
if(func_222(22178, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Battle_Clothing_062_M"));
break;
}
break;
case joaat("mpGunrunning_overlays"):
switch (iParam1){
case joaat("MP_Gunrunning_Award_019_M"):
case joaat("MP_Gunrunning_Award_025_F"):
if(func_222(15426, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_019_M"));
break;
case joaat("MP_Gunrunning_Award_020_M"):
case joaat("MP_Gunrunning_Award_020_F"):
if(func_222(15422, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M"));
break;
case joaat("MP_Gunrunning_Award_020_M_ALT"):
case joaat("MP_Gunrunning_Award_020_F_ALT"):
if(func_222(15423, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_020_M_ALT"));
break;
case joaat("MP_Gunrunning_Award_021_M"):
case joaat("MP_Gunrunning_Award_021_F"):
if(func_222(15421, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_021_M"));
break;
case joaat("MP_Gunrunning_Award_022_M"):
case joaat("MP_Gunrunning_Award_026_F"):
if(func_222(15427, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_022_M"));
break;
case joaat("MP_Gunrunning_Award_023_M"):
case joaat("MP_Gunrunning_Award_023_F"):
if(func_222(15419, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_023_M"));
break;
case joaat("MP_Gunrunning_Award_024_M"):
case joaat("MP_Gunrunning_Award_024_F"):
if(func_222(15420, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_024_M"));
break;
}
switch (iParam1){
case joaat("MP_Gunrunning_Award_000_M"):
case joaat("MP_Gunrunning_Award_000_F"):
if(func_222(15394, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_000_M"));
break;
case joaat("MP_Gunrunning_Award_001_M"):
case joaat("MP_Gunrunning_Award_001_F"):
if(func_154(209, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_001_M"));
break;
case joaat("MP_Gunrunning_Award_002_M"):
case joaat("MP_Gunrunning_Award_002_F"):
if(func_222(15406, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_002_M"));
break;
case joaat("MP_Gunrunning_Award_003_M"):
case joaat("MP_Gunrunning_Award_003_F"):
if(func_222(15395, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_003_M"));
break;
case joaat("MP_Gunrunning_Award_004_M"):
case joaat("MP_Gunrunning_Award_004_F"):
if(func_154(209, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_004_M"));
break;
case joaat("MP_Gunrunning_Award_005_M"):
case joaat("MP_Gunrunning_Award_005_F"):
if(func_222(15410, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_005_M"));
break;
case joaat("MP_Gunrunning_Award_006_M"):
case joaat("MP_Gunrunning_Award_006_F"):
if(func_222(15407, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_006_M"));
break;
case joaat("MP_Gunrunning_Award_007_M"):
case joaat("MP_Gunrunning_Award_007_F"):
if(func_154(209, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_007_M"));
break;
case joaat("MP_Gunrunning_Award_008_M"):
case joaat("MP_Gunrunning_Award_008_F"):
if(func_154(209, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_008_M"));
break;
case joaat("MP_Gunrunning_Award_009_M"):
case joaat("MP_Gunrunning_Award_009_F"):
if(func_222(15414, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_009_M"));
break;
case joaat("MP_Gunrunning_Award_010_M"):
case joaat("MP_Gunrunning_Award_010_F"):
if(func_222(15415, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_010_M"));
break;
case joaat("MP_Gunrunning_Award_011_M"):
case joaat("MP_Gunrunning_Award_011_F"):
if(func_222(15399, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_011_M"));
break;
case joaat("MP_Gunrunning_Award_012_M"):
case joaat("MP_Gunrunning_Award_012_F"):
if(func_222(15404, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_012_M"));
break;
case joaat("MP_Gunrunning_Award_013_M"):
case joaat("MP_Gunrunning_Award_013_F"):
if(func_154(209, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_013_M"));
break;
case joaat("MP_Gunrunning_Award_014_M"):
case joaat("MP_Gunrunning_Award_014_F"):
if(func_222(15392, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_014_M"));
break;
case joaat("MP_Gunrunning_Award_015_M"):
case joaat("MP_Gunrunning_Award_015_F"):
if(func_222(15390, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_015_M"));
break;
case joaat("MP_Gunrunning_Award_016_M"):
case joaat("MP_Gunrunning_Award_016_F"):
if(func_222(15402, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_016_M"));
break;
case joaat("MP_Gunrunning_Award_017_M"):
case joaat("MP_Gunrunning_Award_017_F"):
if(func_222(15416, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_017_M"));
break;
case joaat("MP_Gunrunning_Award_018_M"):
case joaat("MP_Gunrunning_Award_018_F"):
if(func_154(209, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Gunrunning_Award_018_M"));
break;
}
break;
case joaat("mpBiker_overlays"):
switch (iParam1){
case joaat("MP_Biker_Tee_022_M"):
case joaat("MP_Biker_Tee_022_F"):
if(func_222(9366, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_022_M"));
break;
case joaat("MP_Biker_Tee_023_M"):
case joaat("MP_Biker_Tee_023_F"):
if(func_222(9367, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_023_M"));
break;
case joaat("MP_Biker_Tee_024_M"):
case joaat("MP_Biker_Tee_024_F"):
if(func_222(9369, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_024_M"));
break;
case joaat("MP_Biker_Tee_025_M"):
case joaat("MP_Biker_Tee_025_F"):
if(func_222(9368, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_025_M"));
break;
case joaat("MP_Biker_Tee_047_M"):
case joaat("MP_Biker_Tee_047_F"):
if(func_222(9365, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_047_M"));
break;
case joaat("MP_Biker_Tee_048_M"):
case joaat("MP_Biker_Tee_048_F"):
if(func_222(9364, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_048_M"));
break;
case joaat("MP_Biker_Tee_049_M"):
case joaat("MP_Biker_Tee_049_F"):
if(func_222(27078, -1)){
return 0;
}
if(func_222(9363, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_049_M"));
break;
case joaat("MP_Biker_Tee_050_M"):
case joaat("MP_Biker_Tee_050_F"):
if(func_222(9362, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_050_M"));
break;
case joaat("MP_Biker_Tee_051_M"):
case joaat("MP_Biker_Tee_051_F"):
if(func_222(9370, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_051_M"));
break;
case joaat("MP_Biker_Tee_052_M"):
case joaat("MP_Biker_Tee_052_F"):
if(func_222(9371, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_052_M"));
break;
case joaat("MP_Biker_Tee_053_M"):
case joaat("MP_Biker_Tee_053_F"):
if(func_222(9372, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_053_M"));
break;
case joaat("MP_Biker_Tee_054_M"):
case joaat("MP_Biker_Tee_054_F"):
if(func_222(9373, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_054_M"));
break;
case joaat("MP_Biker_Tee_055_M"):
case joaat("MP_Biker_Tee_055_F"):
if(func_222(9374, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Tee_055_M"));
break;
case joaat("MP_Biker_Award_000_M"):
case joaat("MP_Biker_Award_000_F"):
if(func_222(9384, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_000_M"));
break;
case joaat("MP_Biker_Award_001_M"):
case joaat("MP_Biker_Award_001_F"):
if(func_222(9385, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_Biker_Award_001_M"));
break;
}
break;
case joaat("mpExecutive_overlays"):
switch (iParam1){
case joaat("MP_exec_prizes_015_M"):
case joaat("MP_exec_prizes_015_F"):
if(func_222(7551, -1) || func_56(3792, -1, 0) >=Global_262145.f_16768){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_015_M"));
break;
case joaat("MP_exec_prizes_000_M"):
case joaat("MP_exec_prizes_000_F"):
if(func_222(7467, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_000_M"));
break;
case joaat("MP_exec_prizes_001_M"):
case joaat("MP_exec_prizes_001_F"):
if(func_222(7468, -1)){
return 0;
}
if(iParam1==joaat("MP_exec_prizes_001_M")){
if(func_222(27083, -1)){
return 0;
}}elseif(func_222(27086, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_001_M"));
break;
case joaat("MP_exec_prizes_002_M"):
case joaat("MP_exec_prizes_002_F"):
if(func_222(7469, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_002_M"));
break;
case joaat("MP_exec_prizes_003_M"):
case joaat("MP_exec_prizes_003_F"):
if(func_222(7470, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_003_M"));
break;
case joaat("MP_exec_prizes_004_M"):
case joaat("MP_exec_prizes_004_F"):
if(func_222(7471, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_004_M"));
break;
case joaat("MP_exec_prizes_005_M"):
case joaat("MP_exec_prizes_005_F"):
if(func_222(7472, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_005_M"));
break;
case joaat("MP_exec_prizes_006_M"):
case joaat("MP_exec_prizes_006_F"):
if(func_222(7473, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_006_M"));
break;
case joaat("MP_exec_prizes_007_M"):
case joaat("MP_exec_prizes_007_F"):
if(func_222(7474, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_007_M"));
break;
case joaat("MP_exec_prizes_008_M"):
case joaat("MP_exec_prizes_008_F"):
if(func_222(7475, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_008_M"));
break;
case joaat("MP_exec_prizes_009_M"):
case joaat("MP_exec_prizes_009_F"):
if(func_222(7476, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_009_M"));
break;
case joaat("MP_exec_prizes_010_M"):
case joaat("MP_exec_prizes_010_F"):
if(func_222(7477, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_010_M"));
break;
case joaat("MP_exec_prizes_011_M"):
case joaat("MP_exec_prizes_011_F"):
if(func_222(7478, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_011_M"));
break;
case joaat("MP_exec_prizes_012_M"):
case joaat("MP_exec_prizes_012_F"):
if(func_222(7479, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_012_M"));
break;
case joaat("MP_exec_prizes_013_M"):
case joaat("MP_exec_prizes_013_F"):
if(func_222(7480, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_013_M"));
break;
case joaat("MP_exec_prizes_014_M"):
case joaat("MP_exec_prizes_014_F"):
if(func_222(7481, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_exec_prizes_014_M"));
break;
}
break;
case joaat("mpHalloween_overlays"):
switch (iParam1){
case joaat("HW_Tee_000_F"):
case joaat("HW_Tee_000_M"):
if(func_222(4260, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_000_M"));
break;
case joaat("HW_Tee_001_F"):
case joaat("HW_Tee_001_M"):
if(func_222(4257, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_001_M"));
break;
case joaat("HW_Tee_002_F"):
case joaat("HW_Tee_002_M"):
if(func_222(4269, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_002_M"));
break;
case joaat("HW_Tee_003_F"):
case joaat("HW_Tee_003_M"):
if(func_222(4261, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_003_M"));
break;
case joaat("HW_Tee_004_F"):
case joaat("HW_Tee_004_M"):
if(func_222(4259, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_004_M"));
break;
case joaat("HW_Tee_005_F"):
case joaat("HW_Tee_005_M"):
if(func_222(4268, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_005_M"));
break;
case joaat("HW_Tee_006_F"):
case joaat("HW_Tee_006_M"):
if(func_222(4265, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_006_M"));
break;
case joaat("HW_Tee_007_F"):
case joaat("HW_Tee_007_M"):
if(func_222(4258, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_007_M"));
break;
case joaat("HW_Tee_008_F"):
case joaat("HW_Tee_008_M"):
if(func_222(4264, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_008_M"));
break;
case joaat("HW_Tee_009_F"):
case joaat("HW_Tee_009_M"):
if(func_222(4267, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_009_M"));
break;
case joaat("HW_Tee_010_F"):
case joaat("HW_Tee_010_M"):
if(func_222(4262, -1)){
return 0;
}
if(func_222(27079, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_010_M"));
break;
case joaat("HW_Tee_011_F"):
case joaat("HW_Tee_011_M"):
if(func_222(4263, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_011_M"));
break;
case joaat("HW_Tee_012_F"):
case joaat("HW_Tee_012_M"):
if(func_222(4266, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("HW_Tee_012_M"));
break;
}
break;
case joaat("mpLowrider_overlays"):
switch (iParam1){
case joaat("MP_Bennys_000_M"):
case joaat("MP_Bennys_001_M"):
if(func_56(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_M")){
if(func_222(27068, -1)){
return 0;
}}
return !func_218(iParam2, iParam1, 1);
break;
case joaat("MP_Bennys_000_F"):
case joaat("MP_Bennys_001_F"):
if(func_56(2934, -1, 0) > 0){
return 0;
}
if(iParam1==joaat("MP_Bennys_001_F")){
if(func_222(27068, -1)){
return 0;
}}
return !func_218(iParam2, iParam1, 0);
break;
}
break;
case joaat("mpxmas_604490_overlays"):
switch (iParam1){
case joaat("MP_IHeartLC_000_M"):
case joaat("MP_IHeartLC_001_F"):
if(func_222(113, -1)){
return 0;
}
return !func_218(iParam2, iParam1, iParam1==joaat("MP_IHeartLC_000_M"));
break;
}
break;
case joaat("mpHeist_overlays"):
switch (iParam1){
case joaat("MP_Award_M_Tshirt_004"):
case joaat("MP_Award_M_Tshirt_005"):
case joaat("MP_Award_M_Tshirt_006"):
case joaat("MP_Award_M_Tshirt_007"):
case joaat("MP_Award_M_Tshirt_008"):
case joaat("MP_Award_M_Tshirt_009"):
case joaat("MP_Award_M_Tshirt_010"):
case joaat("MP_Award_M_Tshirt_011"):
case joaat("MP_Award_M_Tshirt_012"):
case joaat("MP_Award_M_Tshirt_013"):
if(iParam1==joaat("MP_Award_M_Tshirt_004")){
if(func_222(27082, -1)){
return 0;
}
if(func_222(3770, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_005")){
if(func_222(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_006")){
if(func_222(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_007")){
if(func_222(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_008")){
if(func_222(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_009")){
if(func_222(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_010")){
if(func_222(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_011")){
if(func_222(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_012")){
if(func_222(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_M_Tshirt_013")){
if(func_222(3779, -1) || func_222(27084, -1)){
return 0;
}}
return !func_218(iParam2, iParam1, 1);
break;
case joaat("MP_Award_F_Tshirt_004"):
case joaat("MP_Award_F_Tshirt_005"):
case joaat("MP_Award_F_Tshirt_006"):
case joaat("MP_Award_F_Tshirt_007"):
case joaat("MP_Award_F_Tshirt_008"):
case joaat("MP_Award_F_Tshirt_009"):
case joaat("MP_Award_F_Tshirt_010"):
case joaat("MP_Award_F_Tshirt_011"):
case joaat("MP_Award_F_Tshirt_012"):
case joaat("MP_Award_F_Tshirt_013"):
if(iParam1==joaat("MP_Award_F_Tshirt_004")){
if(func_222(3770, -1)){
return 0;
}
if(func_222(27082, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_005")){
if(func_222(3771, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_006")){
if(func_222(3772, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_007")){
if(func_222(3773, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_008")){
if(func_222(3774, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_009")){
if(func_222(3775, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_010")){
if(func_222(3776, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_011")){
if(func_222(3777, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_012")){
if(func_222(3778, -1)){
return 0;
}}elseif(iParam1==joaat("MP_Award_F_Tshirt_013")){
if(func_222(3779, -1) || func_222(27083, -1)){
return 0;
}}
return !func_218(iParam2, iParam1, 0);
break;
case joaat("MP_Elite_M_Tshirt"):
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Elite_F_Tshirt"):
case joaat("MP_Elite_F_Tshirt_1"):
if((((func_222(3765, -1) && func_222(3766, -1)) && func_222(3767, -1)) && func_222(3768, -1)) && func_222(3769, -1)){
return 0;
}
return 1;
break;
}
break;
case joaat("mpIndependence_overlays"):
switch (iParam1){
case joaat("FM_Ind_M_Award_000"):
case joaat("FM_Ind_F_Award_000"):
return !func_222(3593, -1);
break;
}
if(!Global_262145.f_8259 && !func_218(iParam2, iParam1, 0)){
return 1;
}
break;
case joaat("mpHipster_overlays"):
switch (iParam1){
case 1443536758:
case 1333229624:
case -1665422117:
case 1100930183:
case -1595008258:
case 94055115:
case -627896761:
case 1873477305:
return 1;
break;
case 196632624:
case -1644428107:
case 1108198688:
case 810099095:
return 1;
break;
case 300677115:
case 262692161:
case -1684141219:
case 390655118:
case -479442624:
case -542924311:
case 1696910411:
case -1259058037:
return 1;
break;
case 1980445908:
case -1882429354:
case -1235341889:
case -1544517404:
return 1;
break;
case joaat("FM_Hip_M_Retro_010"):
case joaat("FM_Hip_F_Retro_010"):
return (!func_154(152, -1) && !func_222(9440, -1));
break;
case joaat("FM_Hip_M_Retro_003"):
case joaat("FM_Hip_F_Retro_003"):
return (!func_154(151, -1) && !func_222(9430, -1));
break;
case joaat("FM_Hip_M_Retro_000"):
case joaat("FM_Hip_F_Retro_000"):
return (!func_204(iParam2, -1) && !func_222(9426, -1));
break;
case joaat("FM_Hip_M_Retro_001"):
case joaat("FM_Hip_F_Retro_001"):
return (!func_204(iParam2, -1) && !func_222(9427, -1));
break;
case joaat("FM_Hip_M_Retro_002"):
case joaat("FM_Hip_F_Retro_002"):
return (!func_204(iParam2, -1) && !func_222(9428, -1));
break;
case joaat("FM_Hip_M_Retro_004"):
case joaat("FM_Hip_F_Retro_004"):
return (!func_204(iParam2, -1) && !func_222(9431, -1));
break;
case joaat("FM_Hip_M_Retro_005"):
case joaat("FM_Hip_F_Retro_005"):
return (!func_204(iParam2, -1) && !func_222(9432, -1));
break;
case joaat("FM_Hip_M_Retro_006"):
case joaat("FM_Hip_F_Retro_006"):
return (!func_204(iParam2, -1) && !func_222(9433, -1));
break;
case joaat("FM_Hip_M_Retro_007"):
case joaat("FM_Hip_F_Retro_007"):
return (!func_204(iParam2, -1) && !func_222(9439, -1));
break;
case joaat("FM_Hip_M_Retro_008"):
case joaat("FM_Hip_F_Retro_008"):
return (!func_204(iParam2, -1) && !func_222(9434, -1));
break;
case joaat("FM_Hip_M_Retro_009"):
case joaat("FM_Hip_F_Retro_009"):
return (!func_204(iParam2, -1) && !func_222(9435, -1));
break;
case joaat("FM_Hip_M_Retro_011"):
case joaat("FM_Hip_F_Retro_011"):
return (!func_204(iParam2, -1) && !func_222(9436, -1));
break;
case joaat("FM_Hip_M_Retro_012"):
case joaat("FM_Hip_F_Retro_012"):
return (!func_204(iParam2, -1) && !func_222(9429, -1));
break;
case joaat("FM_Hip_M_Retro_013"):
case joaat("FM_Hip_F_Retro_013"):
return (!func_204(iParam2, -1) && !func_222(9437, -1));
break;
case joaat("FM_Rstar_M_Tshirt_000"):
case joaat("FM_Rstar_M_Tshirt_001"):
case joaat("FM_Rstar_M_Tshirt_002"):
case joaat("FM_Rstar_F_Tshirt_000"):
case joaat("FM_Rstar_F_Tshirt_001"):
case joaat("FM_Rstar_F_Tshirt_002"):
return !func_203();
break;
}
break;
case joaat("mpvalentines_overlays"):
if((!Global_262145.f_7059 && !func_204(iParam2, -1)) && !Global_262145.f_12034){
return 1;
}
break;
case joaat("mpPilot_overlays"):
switch (iParam1){
case joaat("MP_Fli_M_Tshirt_000"):
case joaat("MP_Fli_F_Tshirt_000"):
return !func_222(3608, -1);
break;
}
break;
case joaat("mpLTS_overlays"):
switch (iParam1){
case joaat("FM_LTS_M_Tshirt_000"):
case joaat("FM_LTS_F_Tshirt_000"):
return (!func_222(3615, -1) && !func_222(9438, -1));
break;
}
break;
case joaat("mpLuxe_overlays"):
if(iParam1==joaat("MP_LUXE_VDG_006_F")){
return 1;
}
switch (iParam1){
case joaat("MP_FAKE_DIS_000_M"):
case joaat("MP_FAKE_DIS_000_F"):
return !func_222(3783, -1);
break;
case joaat("MP_FAKE_DIS_001_M"):
case joaat("MP_FAKE_DIS_001_F"):
return !func_222(3784, -1);
break;
case joaat("MP_FAKE_DS_000_M"):
case joaat("MP_FAKE_DS_000_F"):
return !func_222(3785, -1);
break;
case joaat("MP_FAKE_ENEMA_000_M"):
case joaat("MP_FAKE_ENEMA_000_F"):
return !func_222(3786, -1);
break;
case joaat("MP_FAKE_LB_000_M"):
case joaat("MP_FAKE_LB_000_F"):
return !func_222(3787, -1);
break;
case joaat("MP_FAKE_LC_000_M"):
case joaat("MP_FAKE_LC_000_F"):
return !func_222(3788, -1);
break;
case joaat("MP_FAKE_SC_000_M"):
case joaat("MP_FAKE_SC_000_F"):
if(func_222(27081, -1)){
return 0;
}
return !func_222(3789, -1);
break;
case joaat("MP_FAKE_Vap_000_M"):
case joaat("MP_FAKE_Vap_000_F"):
return !func_222(3790, -1);
break;
case joaat("MP_FAKE_Per_000_M"):
case joaat("MP_FAKE_Per_000_F"):
return !func_222(3791, -1);
break;
case joaat("MP_FAKE_SN_000_M"):
case joaat("MP_FAKE_SN_000_F"):
return !func_222(3792, -1);
break;
case joaat("MP_FILM_000_F"):
case joaat("MP_FILM_000_M"):
if(iParam1==joaat("MP_FILM_000_F")){
iVar0=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar0, 0)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_000_M")){
iVar1=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar1, 18)){
return 0;
}}
return !func_222(3793, -1);
break;
case joaat("MP_FILM_001_F"):
case joaat("MP_FILM_001_M"):
if(iParam1==joaat("MP_FILM_001_F")){
iVar2=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar2, 1)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_001_M")){
iVar3=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar3, 19)){
return 0;
}}
return !func_222(3794, -1);
break;
case joaat("MP_FILM_002_F"):
case joaat("MP_FILM_002_M"):
if(iParam1==joaat("MP_FILM_002_F")){
iVar4=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar4, 2)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_002_M")){
iVar5=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar5, 20)){
return 0;
}}
return !func_222(3795, -1);
break;
case joaat("MP_FILM_003_F"):
case joaat("MP_FILM_003_M"):
if(iParam1==joaat("MP_FILM_003_F")){
iVar6=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar6, 3)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_003_M")){
iVar7=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar7, 21)){
return 0;
}}
return !func_222(3796, -1);
break;
case joaat("MP_FILM_004_F"):
case joaat("MP_FILM_004_M"):
if(iParam1==joaat("MP_FILM_004_F")){
iVar8=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar8, 4)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_004_M")){
iVar9=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar9, 22)){
return 0;
}}
return !func_222(3797, -1);
break;
case joaat("MP_FILM_005_F"):
case joaat("MP_FILM_005_M"):
if(iParam1==joaat("MP_FILM_005_F")){
iVar10=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar10, 5)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_005_M")){
iVar11=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar11, 23)){
return 0;
}}
return !func_222(3798, -1);
break;
case joaat("MP_FILM_006_F"):
case joaat("MP_FILM_006_M"):
if(iParam1==joaat("MP_FILM_006_F")){
iVar12=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar12, 6)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_006_M")){
iVar13=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar13, 24)){
return 0;
}}
return !func_222(3799, -1);
break;
case joaat("MP_FILM_007_F"):
case joaat("MP_FILM_007_M"):
if(iParam1==joaat("MP_FILM_007_F")){
iVar14=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar14, 7)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_007_M")){
iVar15=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar15, 25)){
return 0;
}}
return !func_222(3800, -1);
break;
case joaat("MP_FILM_008_F"):
case joaat("MP_FILM_008_M"):
if(iParam1==joaat("MP_FILM_008_F")){
iVar16=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar16, 8)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_008_M")){
iVar17=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar17, 26)){
return 0;
}}
return !func_222(3801, -1);
break;
case joaat("MP_FILM_009_F"):
case joaat("MP_FILM_009_M"):
if(iParam1==joaat("MP_FILM_009_F")){
iVar18=func_56(2444, -1, 0);
if(MISC::IS_BIT_SET(iVar18, 9)){
return 0;
}}elseif(iParam1==joaat("MP_FILM_009_M")){
iVar19=func_56(2424, -1, 0);
if(MISC::IS_BIT_SET(iVar19, 27)){
return 0;
}}
return !func_222(3802, -1);
break;
}
break;
case joaat("mpLuxe2_overlays"):
switch (iParam1){
case joaat("MP_LUXE_TAT_030_M"):
case joaat("MP_LUXE_TAT_031_M"):
return 1;
break;
case joaat("MP_LUXE_TAT_030_F"):
case joaat("MP_LUXE_TAT_031_F"):
return 1;
break;
}
break;
case joaat("multiplayer_overlays"):
switch (iParam1){
case joaat("MP_FM_OGA_000_m"):
case joaat("MP_FM_OGA_001_m"):
case joaat("MP_FM_OGA_002_m"):
case joaat("MP_FM_OGA_003_m"):
case joaat("MP_FM_OGA_000_f"):
case joaat("MP_FM_OGA_001_f"):
case joaat("MP_FM_OGA_002_f"):
case joaat("MP_FM_OGA_003_f"):
return !func_39();
break;
}
break;
}
return 0;
}


bool func_203(){
return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_204(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_207(iParam0)==14192){
return 0;
}
uVar0=func_206(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_205(iVar1));
}

int func_205(int iParam0){
return (iParam0 % 32);
}


var func__206(var uParam0, int iParam1){
var uVar0;
uVar0=func_56(func_207(uParam0), iParam1, 0);
return uVar0;
}

int func_207(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_210(iVar0);
if((func_209()==0 || func_208()==0) || (func_209()==999 && func_208()==999)){
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

int func_208(){
return Global_32164;
}

int func_209(){
return Global_32163;
}

int func_210(int iParam0){
return (iParam0 / 32);
}

int func_211(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=(20 - 1);
if(bParam1){
iVar0=13;
}
iVar1=0;
while (iVar1 < iVar0){
iVar2=iVar1;
if(!func_214(iVar2) || iParam0){
if(!func_212(PLAYER::PLAYER_ID(), iVar2, 0)){
return 0;
}}
iVar1++;
}
return 1;
}

int func_212(int iParam0, int iParam1, int iParam2){
var uVar0;
if(iParam0 !=func_213()){
uVar0=iParam1;
switch (iParam2){
case 0:
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_267.f_434, uVar0);
break;
}}
return 1;
}

int func_213(){
return -1;
}

int func_214(int iParam0){
switch (iParam0){
case 18:
case 17:
case 19:
return 1;
break;
}
return 0;
}

int func_215(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2850651[iParam0 /*3*/][func_57(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_216(int iParam0, int iParam1, int iParam2){
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

int func_217(int iParam0, int iParam1){
int iVar0;
var uVar1;
iVar0=Global_2850194[iParam0 /*3*/][func_57(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


bool func_218(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
if(bParam2){
iParam0=func_221(iParam1, 3);
}else{
iParam0=func_221(iParam1, 4);
}}
return (func_204(iParam0, -1) || func_219(iParam0, -1));
}


bool func_219(int iParam0, int iParam1){
return func_222(func_220(iParam0), iParam1);
}

int func_220(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(iParam0 <=480){
iVar1=iParam0;
iVar0=(3112 + iVar1);
}elseif(iParam0 < 864){
iVar1=(iParam0 - 480);
iVar0=(6029 + iVar1);
}elseif(iParam0 < 1248){
iVar1=(iParam0 - 864);
iVar0=(15562 + iVar1);
}elseif(iParam0 < 1372){
iVar1=(iParam0 - 1248);
iVar0=(28355 + iVar1);
}elseif(iParam0 < 1500){
iVar1=(iParam0 - 1372);
iVar0=(30355 + iVar1);
}elseif(iParam0 < 1564){
iVar1=(iParam0 - 1500);
iVar0=(32411 + iVar1);
}elseif(iParam0 < 1628){
iVar1=(iParam0 - 1564);
iVar0=(41251 + iVar1);
}else{
iVar2=iParam0;
}
return iVar0;
}

int func_221(int iParam0, int iParam1){
int iVar0;
iVar0=FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
if(iVar0 !=-1){
return (129 + iVar0);
}
return -1;
}


bool func_222(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_58();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_223(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8){
int iVar0;
int iVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(iParam4==0){
iVar1=func_225(iVar0, sParam1, iParam4);
iParam4=MISC::GET_HASH_KEY(func_224(iVar1));
}
if(iParam3==449512698){
return 0;
}
switch (iParam4){
case joaat("CHEST_FULL"):
case joaat("CHEST_LEFT"):
case joaat("CHEST_MID"):
case joaat("CHEST_RIGHT"):
case joaat("CHEST_STOM"):
case joaat("CHEST_STOM_FULL"):
case joaat("SIDE_RIGHT"):
case joaat("TORSO_SIDE_LEFT"):
case joaat("TORSO_SIDE_RIGHT"):
case -1238079313:
case joaat("STOMACH_FULL"):
case joaat("STOMACH_LEFT"):
case joaat("STOMACH_LOWER_LEFT"):
case joaat("STOMACH_LOWER_RIGHT"):
case 1361645381:
case joaat("STOMACH_RIGHT"):
if(bParam5){
return 0;
}
if((((iParam4==joaat("CHEST_FULL") || (iParam4==joaat("CHEST_MID") && iVar0==joaat("mp_f_freemode_01"))) || iParam4==joaat("CHEST_RIGHT")) || iParam4==joaat("CHEST_STOM")) || iParam4==joaat("CHEST_STOM_FULL")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
return 0;
}elseif(func_231(14, -1)){
return 0;
}elseif(func_231(15, -1)){
return 0;
}elseif(func_231(16, -1)){
return 0;
}elseif(func_231(71, -1)){
return 0;
}elseif(func_231(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
return 0;
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif(iParam4==joaat("CHEST_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
return 0;
}elseif(func_231(14, -1)){
return 0;
}elseif(func_231(15, -1)){
return 0;
}elseif(func_231(16, -1)){
return 0;
}elseif(func_231(71, -1)){
return 0;
}elseif(func_231(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
return 0;
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif((iParam4==joaat("STOMACH_FULL") || iParam4==1361645381) || iParam4==joaat("STOMACH_LEFT")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
}elseif(func_231(14, -1)){
return 0;
}elseif(func_231(15, -1)){
return 0;
}elseif(func_231(16, -1)){
}elseif(func_231(71, -1)){
return 0;
}elseif(func_231(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
return 0;
}elseif(Global_4540628==72){
}}}elseif(iParam4==joaat("BACK_UPPER")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
}elseif(func_231(14, -1)){
}elseif(func_231(15, -1)){
}elseif(func_231(16, -1)){
}elseif(func_231(71, -1)){
}elseif(func_231(72, -1)){
}
}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case 1484379715:
case joaat("BACK_FULL"):
case joaat("BACK_FULL_ARMS_FULL_BACK"):
case joaat("BACK_FULL_SHORT"):
case joaat("BACK_LOWER"):
case joaat("BACK_MID"):
case joaat("BACK_UPPER"):
case joaat("BACK_UPPER_LEFT"):
case joaat("BACK_UPPER_RIGHT"):
if(bParam8){
return 0;
}
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
}
elseif(func_231(14, -1)){
}
elseif(func_231(15, -1)){
return 0;
}
elseif(func_231(16, -1)){
}
elseif(func_231(71, -1)){
}
elseif(func_231(72, -1)){
return 0;
}}}elseif(Global_4540628==13){
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
return 0;
}}
break;
case 1019352240:
if(bParam8){
if(iVar0==joaat("mp_m_freemode_01")){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(15, -1)){
return 0;
}
}}elseif(Global_4540628==15){
return 0;
}}}
if(bParam6){
return 0;
}
if(bParam5){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
return 0;
}
elseif(func_231(14, -1)){
return 0;
}
elseif(func_231(15, -1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}
}
elseif(func_231(16, -1)){
}
elseif(func_231(71, -1)){
}
elseif(func_231(72, -1)){
}}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
return 0;
}elseif(Global_4540628==15){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB")){
return 0;
}}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}
break;
case 0:
case 2:
case joaat("rank"):
if(bParam5){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
switch (MISC::GET_HASH_KEY(sParam1)){
case joaat("TAT_FM_011"):
case joaat("TAT_FM_012"):
case joaat("TAT_FM_019"):
case joaat("TAT_FM_020"):
case joaat("TAT_FM_021"):
case joaat("TAT_FM_218"):
case joaat("TAT_FM_219"):
case joaat("TAT_FM_220"):
case joaat("TAT_FM_225"):
case joaat("TAT_FM_226"):
case joaat("TAT_FM_230"):
case joaat("TAT_FM_233"):
case joaat("TAT_FM_235"):
case joaat("TAT_FM_237"):
case joaat("TAT_FM_245"):
return 0;
break;
}}}
if(iVar0==joaat("mp_m_freemode_01")){
}elseif(iVar0==joaat("mp_f_freemode_01")){
if(!bParam6){
if(Global_4540628==-1){
if(!Global_100733.f_1570){
if(func_231(13, -1)){
}elseif(func_231(14, -1)){
}elseif(func_231(15, -1)){
}elseif(func_231(16, -1)){
}elseif(func_231(71, -1)){
}elseif(func_231(72, -1)){
}
}}elseif(Global_4540628==13){
return 0;
}elseif(Global_4540628==14){
}elseif(Global_4540628==15){
return 0;
}elseif(Global_4540628==16){
}elseif(Global_4540628==71){
}elseif(Global_4540628==72){
}}}
break;
case joaat("torsoDecal"):
if(bParam7){
return 0;
}
break;
}
return 1;
}


char* func_224(int iParam0){
switch (iParam0){
case 0:
return "ARM_LEFT_FULL_SLEEVE";
break;
case 1:
return "ARM_LEFT_SHORT_SLEEVE";
break;
case 2:
return "ARM_LEFT_LOWER_SLEEVE";
break;
case 3:
return "ARM_LEFT_LOWER_INNER";
break;
case 4:
return "ARM_LEFT_LOWER_OUTER";
break;
case 5:
return "ARM_LEFT_WRIST";
break;
case 6:
return "ARM_LEFT_UPPER_SLEEVE";
break;
case 7:
return "ARM_LEFT_UPPER_TRICEP";
break;
case 8:
return "ARM_LEFT_UPPER_SIDE";
break;
case 9:
return "ARM_LEFT_UPPER_BICEP";
break;
case 10:
return "ARM_LEFT_SHOULDER";
break;
case 11:
return "ARM_LEFT_ELBOW";
break;
case 12:
return "ARM_RIGHT_FULL_SLEEVE";
break;
case 13:
return "ARM_RIGHT_SHORT_SLEEVE";
break;
case 14:
return "ARM_RIGHT_LOWER_SLEEVE";
break;
case 15:
return "ARM_RIGHT_LOWER_INNER";
break;
case 16:
return "ARM_RIGHT_LOWER_OUTER";
break;
case 17:
return "ARM_RIGHT_WRIST";
break;
case 18:
return "ARM_RIGHT_UPPER_SLEEVE";
break;
case 19:
return "ARM_RIGHT_UPPER_TRICEP";
break;
case 20:
return "ARM_RIGHT_UPPER_SIDE";
break;
case 21:
return "ARM_RIGHT_UPPER_BICEP";
break;
case 22:
return "ARM_RIGHT_SHOULDER";
break;
case 23:
return "ARM_RIGHT_ELBOW";
break;
case 24:
return "HAND_LEFT";
break;
case 25:
return "HAND_RIGHT";
break;
case 26:
return "BACK_FULL";
break;
case 27:
return "BACK_FULL_ARMS_FULL_BACK";
break;
case 28:
return "BACK_FULL_SHORT";
break;
case 29:
return "BACK_MID";
break;
case 30:
return "BACK_UPPER";
break;
case 31:
return "BACK_UPPER_LEFT";
break;
case 32:
return "BACK_UPPER_RIGHT";
break;
case 33:
return "BACK_LOWER";
break;
case 34:
return "BACK_LOWER_LEFT";
break;
case 35:
return "BACK_LOWER_MID";
break;
case 36:
return "BACK_LOWER_RIGHT";
break;
case 37:
return "CHEST_FULL";
break;
case 38:
return "CHEST_STOM";
break;
case 39:
return "CHEST_STOM_FULL";
break;
case 40:
return "CHEST_LEFT";
break;
case 41:
return "CHEST_UPPER_LEFT";
break;
case 42:
return "CHEST_RIGHT";
break;
case 43:
return "CHEST_UPPER_RIGHT";
break;
case 44:
return "CHEST_MID";
break;
case 45:
return "TORSO_SIDE_RIGHT";
break;
case 46:
return "TORSO_SIDE_LEFT";
break;
case 47:
return "STOMACH_FULL";
break;
case 48:
return "STOMACH_UPPER";
break;
case 49:
return "STOMACH_UPPER_LEFT";
break;
case 50:
return "STOMACH_UPPER_RIGHT";
break;
case 51:
return "STOMACH_LOWER";
break;
case 52:
return "STOMACH_LOWER_LEFT";
break;
case 53:
return "STOMACH_LOWER_RIGHT";
break;
case 54:
return "STOMACH_LEFT";
break;
case 55:
return "STOMACH_RIGHT";
break;
case 56:
return "FACE";
break;
case 57:
return "HEAD_LEFT";
break;
case 58:
return "HEAD_RIGHT";
break;
case 59:
return "NECK_FRONT";
break;
case 60:
return "NECK_BACK";
break;
case 61:
return "NECK_LEFT_FULL";
break;
case 62:
return "NECK_LEFT_BACK";
break;
case 63:
return "NECK_RIGHT_FULL";
break;
case 64:
return "NECK_RIGHT_BACK";
break;
case 65:
return "LEG_LEFT_FULL_SLEEVE";
break;
case 66:
return "LEG_LEFT_FULL_FRONT";
break;
case 67:
return "LEG_LEFT_FULL_BACK";
break;
case 68:
return "LEG_LEFT_UPPER_SLEEVE";
break;
case 69:
return "LEG_LEFT_UPPER_FRONT";
break;
case 70:
return "LEG_LEFT_UPPER_BACK";
break;
case 71:
return "LEG_LEFT_UPPER_OUTER";
break;
case 72:
return "LEG_LEFT_UPPER_INNER";
break;
case 73:
return "LEG_LEFT_LOWER_SLEEVE";
break;
case 74:
return "LEG_LEFT_LOWER_FRONT";
break;
case 75:
return "LEG_LEFT_LOWER_BACK";
break;
case 76:
return "LEG_LEFT_LOWER_OUTER";
break;
case 77:
return "LEG_LEFT_LOWER_INNER";
break;
case 78:
return "LEG_LEFT_KNEE";
break;
case 79:
return "LEG_LEFT_ANKLE";
break;
case 80:
return "LEG_LEFT_CALF";
break;
case 81:
return "LEG_RIGHT_FULL_SLEEVE";
break;
case 82:
return "LEG_RIGHT_FULL_FRONT";
break;
case 83:
return "LEG_RIGHT_FULL_BACK";
break;
case 84:
return "LEG_RIGHT_UPPER_SLEEVE";
break;
case 85:
return "LEG_RIGHT_UPPER_FRONT";
break;
case 86:
return "LEG_RIGHT_UPPER_BACK";
break;
case 87:
return "LEG_RIGHT_UPPER_OUTER";
break;
case 88:
return "LEG_RIGHT_UPPER_INNER";
break;
case 89:
return "LEG_RIGHT_LOWER_SLEEVE";
break;
case 90:
return "LEG_RIGHT_LOWER_FRONT";
break;
case 91:
return "LEG_RIGHT_LOWER_BACK";
break;
case 92:
return "LEG_RIGHT_LOWER_OUTER";
break;
case 93:
return "LEG_RIGHT_LOWER_INNER";
break;
case 94:
return "LEG_RIGHT_KNEE";
break;
case 95:
return "LEG_RIGHT_ANKLE";
break;
case 96:
return "LEG_RIGHT_CALF";
break;
case 97:
return "FOOT_LEFT";
break;
case 98:
return "FOOT_RIGHT";
break;
}
return "";
}

int func_225(int iParam0, char* sParam1, int iParam2){
switch (iParam2){
case 1019352240:
case 2140335355:
case joaat("torsoDecal"):
return -1;
break;
}
switch (iParam2){
case joaat("ARM_LEFT_FULL_SLEEVE"):
return 0;
break;
case joaat("ARM_LEFT_SHORT_SLEEVE"):
return 1;
break;
case joaat("ARM_LEFT_LOWER_SLEEVE"):
return 2;
break;
case joaat("ARM_LEFT_LOWER_INNER"):
return 3;
break;
case joaat("ARM_LEFT_LOWER_OUTER"):
return 4;
break;
case joaat("ARM_LEFT_WRIST"):
return 5;
break;
case joaat("ARM_LEFT_UPPER_SLEEVE"):
return 6;
break;
case joaat("ARM_LEFT_UPPER_TRICEP"):
return 7;
break;
case joaat("ARM_LEFT_UPPER_SIDE"):
return 8;
break;
case joaat("ARM_LEFT_UPPER_BICEP"):
return 9;
break;
case joaat("ARM_LEFT_SHOULDER"):
return 10;
break;
case joaat("ARM_LEFT_ELBOW"):
return 11;
break;
case joaat("ARM_RIGHT_FULL_SLEEVE"):
return 12;
break;
case joaat("ARM_RIGHT_SHORT_SLEEVE"):
return 13;
break;
case joaat("ARM_RIGHT_LOWER_SLEEVE"):
return 14;
break;
case joaat("ARM_RIGHT_LOWER_INNER"):
return 15;
break;
case joaat("ARM_RIGHT_LOWER_OUTER"):
return 16;
break;
case joaat("ARM_RIGHT_WRIST"):
return 17;
break;
case joaat("ARM_RIGHT_UPPER_SLEEVE"):
return 18;
break;
case joaat("ARM_RIGHT_UPPER_TRICEP"):
return 19;
break;
case joaat("ARM_RIGHT_UPPER_SIDE"):
return 20;
break;
case joaat("ARM_RIGHT_UPPER_BICEP"):
return 21;
break;
case joaat("ARM_RIGHT_SHOULDER"):
return 22;
break;
case joaat("ARM_RIGHT_ELBOW"):
return 23;
break;
case joaat("HAND_LEFT"):
return 24;
break;
case joaat("HAND_RIGHT"):
return 25;
break;
case joaat("BACK_FULL"):
return 26;
break;
case joaat("BACK_FULL_ARMS_FULL_BACK"):
return 27;
break;
case joaat("BACK_FULL_SHORT"):
return 28;
break;
case joaat("BACK_MID"):
return 29;
break;
case joaat("BACK_UPPER"):
return 30;
break;
case joaat("BACK_UPPER_LEFT"):
return 31;
break;
case joaat("BACK_UPPER_RIGHT"):
return 32;
break;
case joaat("BACK_LOWER"):
return 33;
break;
case joaat("BACK_LOWER_LEFT"):
return 34;
break;
case joaat("BACK_LOWER_MID"):
return 35;
break;
case joaat("BACK_LOWER_RIGHT"):
return 36;
break;
case joaat("CHEST_FULL"):
return 37;
break;
case joaat("CHEST_STOM"):
return 38;
break;
case joaat("CHEST_STOM_FULL"):
return 39;
break;
case joaat("CHEST_LEFT"):
return 40;
break;
case joaat("CHEST_UPPER_LEFT"):
return 41;
break;
case joaat("CHEST_RIGHT"):
return 42;
break;
case joaat("CHEST_UPPER_RIGHT"):
return 43;
break;
case joaat("CHEST_MID"):
return 44;
break;
case joaat("TORSO_SIDE_RIGHT"):
return 45;
break;
case joaat("TORSO_SIDE_LEFT"):
return 46;
break;
case joaat("STOMACH_FULL"):
return 47;
break;
case joaat("STOMACH_UPPER"):
return 48;
break;
case joaat("STOMACH_UPPER_LEFT"):
return 49;
break;
case joaat("STOMACH_UPPER_RIGHT"):
return 50;
break;
case joaat("STOMACH_LOWER"):
return 51;
break;
case joaat("STOMACH_LOWER_LEFT"):
return 52;
break;
case joaat("STOMACH_LOWER_RIGHT"):
return 53;
break;
case joaat("STOMACH_LEFT"):
return 54;
break;
case joaat("STOMACH_RIGHT"):
return 55;
break;
case joaat("FACE"):
return 56;
break;
case joaat("HEAD_LEFT"):
return 57;
break;
case joaat("HEAD_RIGHT"):
return 58;
break;
case joaat("NECK_FRONT"):
return 59;
break;
case joaat("NECK_BACK"):
return 60;
break;
case joaat("NECK_LEFT_FULL"):
return 61;
break;
case joaat("NECK_LEFT_BACK"):
return 62;
break;
case joaat("NECK_RIGHT_FULL"):
return 63;
break;
case joaat("NECK_RIGHT_BACK"):
return 64;
break;
case joaat("LEG_LEFT_FULL_SLEEVE"):
return 65;
break;
case joaat("LEG_LEFT_FULL_FRONT"):
return 66;
break;
case joaat("LEG_LEFT_FULL_BACK"):
return 67;
break;
case joaat("LEG_LEFT_UPPER_SLEEVE"):
return 68;
break;
case joaat("LEG_LEFT_UPPER_FRONT"):
return 69;
break;
case joaat("LEG_LEFT_UPPER_BACK"):
return 70;
break;
case joaat("LEG_LEFT_UPPER_OUTER"):
return 71;
break;
case joaat("LEG_LEFT_UPPER_INNER"):
return 72;
break;
case joaat("LEG_LEFT_LOWER_SLEEVE"):
return 73;
break;
case joaat("LEG_LEFT_LOWER_FRONT"):
return 74;
break;
case joaat("LEG_LEFT_LOWER_BACK"):
return 75;
break;
case joaat("LEG_LEFT_LOWER_OUTER"):
return 76;
break;
case joaat("LEG_LEFT_LOWER_INNER"):
return 77;
break;
case joaat("LEG_LEFT_KNEE"):
return 78;
break;
case joaat("LEG_LEFT_ANKLE"):
return 79;
break;
case joaat("LEG_LEFT_CALF"):
return 80;
break;
case joaat("LEG_RIGHT_FULL_SLEEVE"):
return 81;
break;
case joaat("LEG_RIGHT_FULL_FRONT"):
return 82;
break;
case joaat("LEG_RIGHT_FULL_BACK"):
return 83;
break;
case joaat("LEG_RIGHT_UPPER_SLEEVE"):
return 84;
break;
case joaat("LEG_RIGHT_UPPER_FRONT"):
return 85;
break;
case joaat("LEG_RIGHT_UPPER_BACK"):
return 86;
break;
case joaat("LEG_RIGHT_UPPER_OUTER"):
return 87;
break;
case joaat("LEG_RIGHT_UPPER_INNER"):
return 88;
break;
case joaat("LEG_RIGHT_LOWER_SLEEVE"):
return 89;
break;
case joaat("LEG_RIGHT_LOWER_FRONT"):
return 90;
break;
case joaat("LEG_RIGHT_LOWER_BACK"):
return 91;
break;
case joaat("LEG_RIGHT_LOWER_OUTER"):
return 92;
break;
case joaat("LEG_RIGHT_LOWER_INNER"):
return 93;
break;
case joaat("LEG_RIGHT_KNEE"):
return 94;
break;
case joaat("LEG_RIGHT_ANKLE"):
return 95;
break;
case joaat("LEG_RIGHT_CALF"):
return 96;
break;
case joaat("FOOT_LEFT"):
return 97;
break;
case joaat("FOOT_RIGHT"):
return 98;
break;
}
switch (MISC::GET_HASH_KEY(sParam1)){
case 1948764112:
return -1;
break;
case joaat("TAT_FM_204"):
return 12;
break;
case joaat("TAT_FM_205"):
return 12;
break;
case joaat("TAT_FM_209"):
if(iParam0==joaat("mp_m_freemode_01")){
return 75;
}else{
return 65;
}
break;
case joaat("TAT_FM_221"):
return 26;
break;
case joaat("TAT_FM_219"):
return 47;
break;
case joaat("TAT_FM_201"):
return 1;
break;
case joaat("TAT_FM_222"):
return 75;
break;
case joaat("TAT_FM_202"):
return 1;
break;
case joaat("TAT_FM_210"):
return 89;
break;
case joaat("TAT_FM_211"):
return 73;
break;
case joaat("TAT_FM_247"):
return 22;
break;
case joaat("TAT_FM_223"):
return 91;
break;
case joaat("TAT_FM_213"):
return 26;
break;
case joaat("TAT_FM_224"):
return 73;
break;
case joaat("TAT_FM_225"):
return 38;
break;
case joaat("TAT_FM_218"):
if(iParam0==joaat("mp_m_freemode_01")){
return 40;
}else{
return 42;
}
break;
case joaat("TAT_FM_214"):
return 31;
break;
case joaat("TAT_FM_226"):
return 42;
break;
case joaat("TAT_FM_220"):
return 47;
break;
case joaat("TAT_FM_227"):
return 75;
break;
case joaat("TAT_FM_228"):
return 20;
break;
case joaat("TAT_FM_215"):
return 32;
break;
case joaat("TAT_FM_229"):
return 14;
break;
case joaat("TAT_FM_230"):
return 52;
break;
case joaat("TAT_FM_231"):
return 30;
break;
case joaat("TAT_FM_232"):
return 6;
break;
case joaat("TAT_FM_233"):
return 80;
break;
case joaat("TAT_FM_207"):
return 13;
break;
case joaat("TAT_FM_234"):
if(iParam0==joaat("mp_m_freemode_01")){
return 67;
}else{
return 75;
}
break;
case joaat("TAT_FM_235"):
if(iParam0==joaat("mp_m_freemode_01")){
return 40;
}else{
return 42;
}
break;
case joaat("TAT_FM_236"):
return 73;
break;
case joaat("TAT_FM_237"):
return 47;
break;
case joaat("TAT_FM_238"):
return 73;
break;
case joaat("TAT_FM_203"):
return 10;
break;
case joaat("TAT_FM_216"):
return 26;
break;
case joaat("TAT_FM_011"):
return 42;
break;
case joaat("TAT_FM_212"):
return 89;
break;
case joaat("TAT_FM_239"):
return 16;
break;
case joaat("TAT_FM_240"):
return 91;
break;
case joaat("TAT_FM_241"):
return 82;
break;
case joaat("TAT_FM_208"):
return 13;
break;
case joaat("TAT_FM_017"):
return 75;
break;
case joaat("TAT_FM_217"):
return 26;
break;
case joaat("TAT_FM_242"):
return 10;
break;
case joaat("TAT_FM_243"):
return 90;
break;
case joaat("TAT_FM_244"):
return 89;
break;
case joaat("TAT_FM_245"):
return 38;
break;
case joaat("TAT_FM_010"):
return 20;
break;
case joaat("TAT_FM_246"):
return 26;
break;
case joaat("TAT_FM_206"):
return 18;
break;
case joaat("TAT_FM_008"):
return 56;
break;
case joaat("TAT_FM_009"):
return 3;
break;
case joaat("TAT_FM_012"):
return 47;
break;
case joaat("TAT_FM_013"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_014"):
return 89;
break;
case joaat("TAT_FM_015"):
return 6;
break;
case joaat("TAT_FM_016"):
return 33;
break;
case joaat("TAT_FM_018"):
return 16;
break;
case joaat("TAT_FM_019"):
return 40;
break;
case joaat("TAT_FM_020"):
return 40;
break;
case joaat("TAT_FM_021"):
return 40;
break;
case joaat("TAT_FM_022"):
return 33;
break;
case joaat("TAT_FM_023"):
return 6;
break;
case joaat("TAT_FM_024"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_025"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_026"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case joaat("TAT_FM_027"):
if(iParam0==joaat("mp_m_freemode_01")){
return 28;
}else{
return 26;
}
break;
case -1516865571:
return 44;
break;
case 2130586285:
return 32;
break;
case 386521802:
return 3;
break;
case 579924440:
return 33;
break;
case 741770527:
return 31;
break;
case 1173403795:
return 33;
break;
case -569087776:
return 45;
break;
case -1344959389:
return 89;
break;
case -211217527:
return 64;
break;
case 86488838:
return 53;
break;
case 705494964:
return 52;
break;
case -137684175:
return 30;
break;
case -979388709:
return 41;
break;
case 324653646:
return 43;
break;
case -518820414:
return 52;
break;
case -1361737401:
return 20;
break;
case 2010946386:
return 8;
break;
case -894811920:
return 10;
break;
case 165068612:
return 28;
break;
case 1549427782:
return 40;
break;
case -927613913:
return 42;
break;
case 385144996:
return 56;
break;
case -814626401:
return 57;
break;
case -1248225809:
return 52;
break;
case 1910378101:
return 8;
break;
case -2124501642:
return 91;
break;
case -1943747838:
return 20;
break;
case -1570115700:
return 75;
break;
case 931699147:
return 62;
break;
case 1019520067:
return 63;
break;
case joaat("TORSO_P2_4_4"):
return 20;
break;
case joaat("TORSO_P2_4_5"):
return 58;
break;
case joaat("TORSO_P2_4_6"):
return 47;
break;
case -1628534963:
return 37;
break;
case -1051898870:
return 33;
break;
case 1334929540:
return 80;
break;
case 1097124907:
return 64;
break;
case 747545215:
return 62;
break;
case 61892743:
return 96;
break;
case 501548332:
return 15;
break;
case -244169717:
return 48;
break;
case 421886905:
return 37;
break;
case -1398791504:
return 33;
break;
case -106152761:
return 3;
break;
case 125491300:
return 41;
break;
case -1576950557:
return 52;
break;
case -1815115649:
return 53;
break;
case -1043396870:
return 59;
break;
case -1388618285:
return 3;
break;
case -948484638:
return 48;
break;
case 643387405:
return 33;
break;
case 979630098:
return 64;
break;
case 211688583:
return 62;
break;
case 1343791995:
return 60;
break;
case 576309246:
return 20;
break;
case 949154944:
return 40;
break;
case -622511834:
return 42;
break;
case -275651969:
return 11;
break;
case -1256283855:
return 15;
break;
case 955525350:
return 40;
break;
case 1252641873:
return 22;
break;
case -2034766264:
return 40;
break;
case 1748021562:
return 22;
break;
case -657146050:
return 30;
break;
case -955835485:
return 19;
break;
case -1269959119:
return 40;
break;
case -1478763187:
return 4;
break;
case -1881592504:
return 15;
break;
case 2115996117:
return 62;
break;
case 1824417551:
return 45;
break;
case 1502068898:
return 24;
break;
case -2019287742:
return 22;
break;
case -1780827729:
return 80;
break;
case -1966497207:
return 25;
break;
case -2126999769:
return 30;
break;
case 2014772448:
return 30;
break;
case 1705760778:
return 44;
break;
case 497993745:
return 15;
break;
case 1142887665:
return 9;
break;
case 22777707:
return 3;
break;
case 799173624:
return 16;
break;
case -410297401:
return 17;
break;
case 214410819:
return 75;
break;
case -2098342992:
return 23;
break;
case -1280920283:
return 64;
break;
case -1501455653:
return 16;
break;
case 2117454408:
return 25;
break;
case -1945704982:
return 32;
break;
case -1581870771:
return 31;
break;
case -1350521631:
return 10;
break;
case -954508266:
return 5;
break;
case -716244867:
return 4;
break;
case 185361399:
return 52;
break;
case -1208107213:
return 35;
break;
case -812421538:
return 30;
break;
case -566096965:
return 32;
break;
case -316757644:
return 38;
break;
case -103496992:
return 24;
break;
case 391708136:
return 52;
break;
case 616667309:
return 20;
break;
case 870102755:
return 10;
break;
case 1093030262:
return 92;
break;
case 1378218869:
return 0;
break;
case 332555747:
return 80;
break;
case 1077526193:
return 34;
break;
case 1332632858:
return 91;
break;
case 1556379590:
return 10;
break;
case 1780093553:
return 22;
break;
case 2001284303:
return 14;
break;
case -2059941716:
return 30;
break;
case -1759875983:
return 40;
break;
case -1521153818:
return 24;
break;
}
if(iParam2==0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return -1;
}
switch (iParam2){
case joaat("rank"):
return -1;
break;
}
return -1;
}


bool func_226(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
func_230(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam3);
}
switch (iParam2){
case 0:
switch (iParam1){
case 0:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
break;
case 1:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
break;
case 2:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
break;
case 3:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
break;
case 4:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
break;
case 5:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
break;
case 6:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
break;
case 7:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
break;
case 8:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
break;
case 9:
if(func_37() || func_36()){
iVar1=400;
if(func_39() && (func_229() || func_228())){
iVar1=0;
}
func_230(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
}
break;
case 10:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
break;
case 11:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
break;
case 12:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
break;
case 13:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
break;
case 14:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
break;
case 15:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
break;
case 16:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
break;
case 17:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
break;
case 18:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
break;
case 19:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
break;
case 20:
func_230(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
break;
default:
func_227(sParam0, iParam2, iParam1, 21);
break;
}
break;
case 1:
switch (iParam1){
case 0:
if(func_37() || func_36()){
iVar1=450;
if(func_39() && (func_229() || func_228())){
iVar1=0;
}
func_230(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
}
break;
case 1:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
break;
case 2:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
break;
case 3:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
break;
case 4:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
break;
case 5:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
break;
case 6:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
break;
case 7:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
break;
case 8:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
break;
case 9:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
break;
case 10:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
break;
case 11:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
break;
case 12:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
break;
case 13:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
break;
case 14:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
break;
case 15:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
break;
case 16:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
break;
case 17:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
break;
case 18:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
break;
case 19:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
break;
case 20:
break;
case 21:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
break;
case 22:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
break;
case 23:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
break;
case 24:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
break;
case 25:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
break;
case 26:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
break;
case 27:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
break;
case 28:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
break;
case 29:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
break;
case 30:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
break;
case 31:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
break;
case 32:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
break;
case 33:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
break;
case 34:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
break;
case 35:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
break;
case 36:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
break;
case 37:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
break;
case 38:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
break;
case 39:
func_230(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
break;
default:
func_227(sParam0, iParam2, iParam1, 40);
break;
}
break;
case 2:
switch (iParam1){
case 0:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
break;
case 1:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
break;
case 2:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
break;
case 3:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
break;
case 4:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
break;
case 5:
if(func_37() || func_36()){
iVar1=380;
if(func_39() && (func_229() || func_228())){
iVar1=0;
}
func_230(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
}
break;
case 6:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
break;
case 7:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
break;
case 8:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
break;
case 9:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
break;
case 10:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
break;
case 11:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
break;
case 12:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
break;
case 13:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
break;
case 14:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
break;
case 15:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
break;
case 16:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
break;
case 17:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
break;
case 18:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
break;
case 19:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
break;
case 20:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
break;
case 21:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
break;
case 22:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
break;
case 23:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
break;
case 24:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
break;
case 25:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
break;
case 26:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
break;
case 27:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
break;
case 28:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
break;
case 29:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
break;
case 30:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
break;
case 31:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
break;
case 32:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
break;
case 33:
func_230(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
break;
default:
func_227(sParam0, iParam2, iParam1, 34);
break;
}
break;
case 3:
case 4:
switch (iParam1){
case 0:
func_230(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round((to_float(20000) * Global_262145.f_2917)), 0);
break;
case 1:
func_230(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round((to_float(1400) * Global_262145.f_2918)), 2);
break;
case 2:
func_230(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round((to_float(9750) * Global_262145.f_2919)), 3);
break;
case 3:
func_230(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round((to_float(2150) * Global_262145.f_2920)), 0);
break;
case 4:
func_230(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2921)), 0);
break;
case 54:
func_230(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round((to_float(12400) * Global_262145.f_2922)), 1);
break;
case 5:
func_230(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round((to_float(3500) * Global_262145.f_2923)), 0);
break;
case 6:
func_230(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round((to_float(4950) * Global_262145.f_2924)), 2);
break;
case 55:
func_230(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round((to_float(1350) * Global_262145.f_2925)), 1);
break;
case 7:
func_230(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round((to_float(1450) * Global_262145.f_2926)), 0);
break;
case 8:
func_230(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round((to_float(2700) * Global_262145.f_2927)), 7);
break;
case 9:
func_230(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round((to_float(1200) * Global_262145.f_2928)), 0);
break;
case 10:
func_230(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round((to_float(1500) * Global_262145.f_2929)), 0);
break;
case 11:
func_230(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round((to_float(2650) * Global_262145.f_2930)), 0);
break;
case 56:
func_230(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round((to_float(1900) * Global_262145.f_2931)), 1);
break;
case 12:
func_230(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round((to_float(4950) * Global_262145.f_2932)), 2);
break;
case 57:
func_230(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round((to_float(2400) * Global_262145.f_2933)), 1);
break;
case 58:
func_230(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round((to_float(5100) * Global_262145.f_2934)), 1);
break;
case 59:
func_230(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round((to_float(7400) * Global_262145.f_2935)), 1);
break;
case 60:
func_230(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round((to_float(10000) * Global_262145.f_2936)), 1);
break;
case 17:
func_230(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round((to_float(2400) * Global_262145.f_2941)), 2);
break;
case 18:
func_230(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round((to_float(5100) * Global_262145.f_2942)), 2);
break;
case 19:
func_230(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round((to_float(3600) * Global_262145.f_2943)), 2);
break;
case 20:
func_230(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round((to_float(10000) * Global_262145.f_2944)), 3);
break;
case 21:
func_230(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round((to_float(12500) * Global_262145.f_2945)), 3);
break;
case 22:
func_230(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round((to_float(10000) * Global_262145.f_2946)), 3);
break;
case 23:
func_230(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round((to_float(5000) * Global_262145.f_2947)), 3);
break;
case 24:
func_230(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round((to_float(7500) * Global_262145.f_2948)), 3);
break;
case 25:
func_230(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round((to_float(3750) * Global_262145.f_2949)), 2);
break;
case 26:
func_230(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round((to_float(3750) * Global_262145.f_2950)), 3);
break;
case 27:
func_230(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round((to_float(4800) * Global_262145.f_2951)), 3);
break;
case 28:
func_230(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round((to_float(3500) * Global_262145.f_2952)), 3);
break;
case 61:
func_230(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round((to_float(12350) * Global_262145.f_2953)), 1);
break;
case 62:
func_230(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round((to_float(1900) * Global_262145.f_2954)), 1);
break;
case 63:
func_230(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round((to_float(4500) * Global_262145.f_2955)), 1);
break;
case 64:
func_230(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round((to_float(12250) * Global_262145.f_2956)), 1);
break;
case 65:
func_230(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round((to_float(12300) * Global_262145.f_2957)), 1);
break;
case 29:
func_230(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round((to_float(2500) * Global_262145.f_2958)), 0);
break;
case 30:
func_230(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round((to_float(10000) * Global_262145.f_2959)), 0);
break;
case 31:
func_230(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round((to_float(10000) * Global_262145.f_2960)), 0);
break;
case 66:
func_230(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round((to_float(7500) * Global_262145.f_2961)), 1);
break;
case 32:
func_230(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round((to_float(5000) * Global_262145.f_2962)), 2);
break;
case 33:
func_230(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round((to_float(7300) * Global_262145.f_2963)), 3);
break;
case 34:
func_230(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round((to_float(7250) * Global_262145.f_2964)), 2);
break;
case 35:
func_230(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round((to_float(11900) * Global_262145.f_2965)), 0);
break;
case 36:
func_230(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round((to_float(2750) * Global_262145.f_2966)), 0);
break;
case 37:
func_230(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round((to_float(1750) * Global_262145.f_2967)), 0);
break;
case 38:
func_230(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round((to_float(7300) * Global_262145.f_2968)), 3);
break;
case 39:
func_230(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round((to_float(3250) * Global_262145.f_2969)), 2);
break;
case 40:
func_230(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round((to_float(1000) * Global_262145.f_2970)), 0);
break;
case 67:
func_230(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round((to_float(5000) * Global_262145.f_2971)), 1);
break;
case 41:
func_230(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round((to_float(7500) * Global_262145.f_2972)), 2);
break;
case 68:
func_230(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round((to_float(5100) * Global_262145.f_2973)), 1);
break;
case 42:
func_230(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round((to_float(5050) * Global_262145.f_2974)), 0);
break;
case 43:
func_230(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round((to_float(2450) * Global_262145.f_2975)), 2);
break;
case 44:
func_230(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round((to_float(4950) * Global_262145.f_2976)), 0);
break;
case 45:
func_230(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round((to_float(5100) * Global_262145.f_2977)), 0);
break;
case 46:
func_230(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round((to_float(12250) * Global_262145.f_2978)), 0);
break;
case 47:
func_230(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round((to_float(1150) * Global_262145.f_2979)), 3);
break;
case 48:
func_230(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round((to_float(7500) * Global_262145.f_2980)), 3);
break;
case 49:
func_230(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round((to_float(7600) * Global_262145.f_2981)), 3);
break;
case 50:
func_230(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round((to_float(2600) * Global_262145.f_2982)), 2);
break;
case 51:
func_230(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round((to_float(2500) * Global_262145.f_2983)), 3);
break;
case 52:
func_230(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round((to_float(7450) * Global_262145.f_2984)), 3);
break;
case 53:
func_230(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round((to_float(7500) * Global_262145.f_2985)), 0);
break;
case 69:
func_230(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round((to_float(10000) * Global_262145.f_2986)), 1);
break;
case 70:
func_230(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round((to_float(2500) * Global_262145.f_2987)), 2);
break;
}
if(iVar0==joaat("mp_m_freemode_01")){
switch (iParam1){
case 73:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
break;
case 86:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
break;
case 90:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
break;
case 91:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
break;
case 124:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
break;
case 125:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_230(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_230(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2938)), 0);
break;
case 15:
func_230(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_230(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2940)), 0);
break;
case 71:
func_230(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
case 72:
func_230(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}elseif(iVar0==joaat("mp_f_freemode_01")){
switch (iParam1){
case 73:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
break;
case 74:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
break;
case 75:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
break;
case 76:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
break;
case 77:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
break;
case 78:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
break;
case 79:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
break;
case 80:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
break;
case 81:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
break;
case 82:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
break;
case 83:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
break;
case 84:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
break;
case 85:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
break;
case 92:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
break;
case 87:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2988)), 0);
break;
case 88:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2989)), 0);
break;
case 89:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round((to_float(100) * Global_262145.f_2990)), 0);
break;
case 93:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 94:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
break;
case 95:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
break;
case 96:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
break;
case 97:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
break;
case 98:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
break;
case 99:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
break;
case 100:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
break;
case 101:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
break;
case 102:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
break;
case 103:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
break;
case 104:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
break;
case 105:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
break;
case 106:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
break;
case 107:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
break;
case 108:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 109:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 110:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 111:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 112:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 113:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
break;
case 114:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
break;
case 115:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 116:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 117:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 118:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 119:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 120:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 121:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 122:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
break;
case 123:
func_230(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
break;
case 13:
func_230(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2937)), 0);
break;
case 14:
func_230(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round((to_float(5000) * Global_262145.f_2938)), 0);
break;
case 15:
func_230(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2939)), 2);
break;
case 16:
func_230(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round((to_float(10000) * Global_262145.f_2940)), 0);
break;
}}
break;
}
if((iParam2==3 || iParam2==4) && iParam1 >=129){
func_227(sParam0, iParam2, iParam1, 129);
}
if(iParam4==22){
sParam0->f_7 *=2;
}
return sParam0->f_11 !=-1;
}


void func_227(char* sParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
struct<8> Var2;
iVar0=(iParam2 - iParam3);
iVar1=FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
if(iVar1 > 0 && iVar0 < iVar1){
if(FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2)){
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0)){
sParam0->f_11=iParam2;
MemCopy(sParam0,{
Var2.f_7
}
, 4);
sParam0->f_5=Var2.f_3;
sParam0->f_4=Var2.f_2;
sParam0->f_8=Var2.f_6;
sParam0->f_6=iParam1;
sParam0->f_7=Var2.f_4;
sParam0->f_9=(iParam2 / 32);
sParam0->f_10=(iParam2 % 32);
sParam0->f_12=Var2.f_5;
}}}}

int func_228(){
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
uVar4=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&uVar4, true);
MISC::SET_BIT(&uVar4, 3);
STATS::SET_HAS_SPECIALEDITION_CONTENT(uVar4);
}
return 1;
}}}
return 0;
}

int func_229(){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
if(MISC::IS_BIT_SET(Global_25, 6)){
if(MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4)){
return 1;
}else{
return 0;
}}
if(STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1)){
if(MISC::IS_BIT_SET(uVar0, 6)){
if(MISC::IS_BIT_SET(uVar0, 2) || MISC::IS_BIT_SET(uVar0, 4)){
return 1;
}else{
return 0;
}}}
if(STATS::STAT_SLOT_IS_LOADED(0)){
if(Global_152525.f_3){
iVar2=joaat("mpply_plat_up_lb_check");
if(STATS::STAT_GET_INT(iVar2, &uVar1, -1)){
if(MISC::IS_BIT_SET(uVar1, 8)){
return 1;
}}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
uVar3=MISC::GET_PROFILE_SETTING(866);
if(MISC::IS_BIT_SET(uVar3, 2) || MISC::IS_BIT_SET(uVar3, 4)){
return 1;
}}
return 0;
}


void func_230(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9){
char cVar0[32];
sParam0->f_11=iParam1;
StringCopy(sParam0, sParam3, 16);
sParam0->f_4=MISC::GET_HASH_KEY(sParam4);
sParam0->f_5=MISC::GET_HASH_KEY(sParam5);
sParam0->f_8=MISC::GET_HASH_KEY(sParam6);
sParam0->f_6=iParam7;
sParam0->f_7=iParam8;
sParam0->f_9=(iParam1 / 32);
sParam0->f_10=(iParam1 % 32);
sParam0->f_12=iParam9;
if(ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2)){
if((sParam0->f_6==0 || sParam0->f_6==1) || sParam0->f_6==2){
}elseif(sParam0->f_6==3 || sParam0->f_6==4){
StringCopy(&cVar0, "", 32);
if(((((sParam0->f_11==13 || sParam0->f_11==14) || sParam0->f_11==15) || sParam0->f_11==16) || sParam0->f_11==71) || sParam0->f_11==72){
StringConCat(&cVar0, "FM_", 32);
StringConCat(&cVar0, "CREW_", 32);
if(ENTITY::GET_ENTITY_MODEL(iParam2)==joaat("mp_m_freemode_01")){
StringConCat(&cVar0, "M_", 32);
}else{
StringConCat(&cVar0, "F_", 32);
}
StringConCat(&cVar0, sParam5, 32);
}elseif(MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay")){
StringCopy(&cVar0, sParam5, 32);
}else{
if(((((((((((((((((((sParam0->f_11==0 || sParam0->f_11==1) || sParam0->f_11==2) || sParam0->f_11==4) || sParam0->f_11==3) || sParam0->f_11==54) || sParam0->f_11==5) || sParam0->f_11==6) || sParam0->f_11==55) || sParam0->f_11==7) || sParam0->f_11==8) || sParam0->f_11==9) || sParam0->f_11==10) || sParam0->f_11==11) || sParam0->f_11==56) || sParam0->f_11==12) || sParam0->f_11==57) || sParam0->f_11==58) || sParam0->f_11==59) || sParam0->f_11==60){
StringConCat(&cVar0, "FM_Tat_Award_", 32);
}else{
StringConCat(&cVar0, "FM_Tat_", 32);
}
if(ENTITY::GET_ENTITY_MODEL(iParam2)==joaat("mp_m_freemode_01") || sParam0->f_11==20){
StringConCat(&cVar0, "M_", 32);
}else{
StringConCat(&cVar0, "F_", 32);
}
StringConCat(&cVar0, sParam5, 32);
}
sParam0->f_5=MISC::GET_HASH_KEY(&cVar0);
if(PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5)==7){
sParam0->f_11=-1;
}}}}

int func_231(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(iParam0==-1){
return 0;
}
uVar0=func_232(iParam0, iParam1);
iVar1=func_205(iParam0);
if(iVar1 < 0 || iVar1 >=32){
return 0;
}
return MISC::IS_BIT_SET(uVar0, iVar1);
}

int func_232(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_233(iParam0);
if(iVar0==14192){
if(func_209()==2 && func_208()==2){
return 0;
}else{
return 0;
}}
iVar1=func_56(iVar0, iParam1, 0);
return iVar1;
}

int func_233(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=func_210(iVar0);
if((func_209()==0 || func_208()==0) || (func_209()==999 && func_208()==999)){
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
if(func_209()==2 && func_208()==2){
return 14192;
}
return 14192;
}

int func_234(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar2=func_56(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0 > 15){
iVar3=func_279(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_144(joaat("mp_m_freemode_01"), iVar3, 11, 3);
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl_no_save"), 0)){
switch (iVar2){
case joaat("MP_Elite_M_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_M"):
case joaat("MP_Heist4_Tee_039_M"):
case joaat("MP_Heist4_Tee_041_M"):
case joaat("MP_Heist4_Tee_043_M"):
case joaat("MP_Heist4_Tee_049_M"):
case joaat("MP_Heist4_Tee_051_M"):
case joaat("MP_Heist4_Tee_055_M"):
case joaat("MP_Heist4_Tee_057_M"):
case joaat("MP_Heist4_Tee_059_M"):
case joaat("MP_Heist4_Tee_061_M"):
case joaat("MP_Heist4_Tee_063_M"):
case joaat("MP_Heist4_Tee_065_M"):
case -129339642:
case 887263619:
case -598443208:
case -619123295:
case -2139930425:
case 991513037:
case -675149090:
case -507124931:
return 1;
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_vest"), 0)){
return 1;
}
return 0;
}}
return 0;
}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
iVar2=func_56(1759, -1, 0);
if(iParam1 !=-1){
iVar2=iParam1;
}
if(iVar0==3){
if(iVar1==14){
return 1;
}}elseif(iVar0 > 15){
iVar5=func_279(iParam0, 11, -1);
if(iVar5 >=256){
iVar6=func_144(joaat("mp_f_freemode_01"), iVar5, 11, 4);
if((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)){
switch (iVar2){
case joaat("MP_Elite_F_Tshirt_1"):
case joaat("MP_Battle_Clothing_000_F"):
case joaat("MP_Heist4_Tee_039_F"):
case joaat("MP_Heist4_Tee_041_F"):
case joaat("MP_Heist4_Tee_043_F"):
case joaat("MP_Heist4_Tee_049_F"):
case joaat("MP_Heist4_Tee_051_F"):
case joaat("MP_Heist4_Tee_055_F"):
case joaat("MP_Heist4_Tee_057_F"):
case joaat("MP_Heist4_Tee_059_F"):
case joaat("MP_Heist4_Tee_061_F"):
case joaat("MP_Heist4_Tee_063_F"):
case joaat("MP_Heist4_Tee_065_F"):
case 2021781367:
case -436866133:
case 457275657:
case -250832592:
case -798760789:
case -1634791241:
case -1227437948:
case -2045170715:
return 1;
break;
}}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("jacket"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("biker_vest"), 0)){
return 1;
}
return 0;
}}
return 0;
}}
return 0;
}

int func_235(int iParam0){
int iVar0;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
iVar0=Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28;
if(iVar0 !=-1 && iVar0 < 4){
if(func_236(iVar0) !=-1 && func_236(iVar0) !=0){
return 1;
}}}
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11)==15){
return 1;
}}}
return 0;
}

int func_236(int iParam0){
if(func_237(1)){
return Global_1665818;
}
if(iParam0 <=-1 || iParam0 >=4){
return -1;
}
return Global_2684801.f_6316[iParam0];
}

int func_237(bool bParam0){
if((func_241(bParam0) || func_239()) || func_238(Global_4718592.f_166301)){
return 1;
}
return 0;
}


bool func_238(int iParam0){
return iParam0==87;
}

int func_239(){
return func_240(Global_4718592.f_113724);
}

int func_240(int iParam0){
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


var func__241(bool bParam0){
if(bParam0){
return (MISC::IS_BIT_SET(Global_4718592.f_160050, 12) && func_242());
}
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}

int func_242(){
if(Global_4718592.f_114294==1 || Global_4718592.f_114294==2){
return 1;
}
return 0;
}

int func_243(int iParam0, bool bParam1){
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
int iVar13;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 1:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
return 1;
break;
case 1:
case 7:
case 12:
iVar2=func_247(joaat("mp_m_freemode_01"), 11, func_279(iParam0, 11, -1), 0);
if(((iVar1==1 && iVar2==88) || (iVar1==7 && iVar2==89)) || (iVar1==12 && iVar2==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 9:
return 1;
break;
}
break;
case 5:
if(!bParam1){
if(func_231(13, -1)){
return 1;
}
elseif(func_231(14, -1)){
return 1;
}
elseif(func_231(15, -1)){
return 1;
}
elseif(func_231(16, -1)){
return 1;
}
elseif(func_231(71, -1)){
return 1;
}
elseif(func_231(72, -1)){
}
elseif(func_244(PLAYER::PLAYER_ID(), 1) && Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_21 !=0){
return 1;
}}
break;
default:
if(iVar0 > 15){
iVar3=func_279(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_144(joaat("mp_m_freemode_01"), iVar3, 11, 3);
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("heist_draw_12"), 0)){
return 1;
}
}}
break;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 1:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
case 2:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 14:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar5=func_279(iParam0, 8, -1);
if(iVar5 >=241){
iVar6=func_144(joaat("mp_m_freemode_01"), iVar5, 8, 3);
if(((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("combat_top"), 0)){
return 1;
}
}}
break;
}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar7=func_247(joaat("mp_f_freemode_01"), 11, func_279(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar7==88) || (iVar1==4 && iVar7==89)) || (iVar1==9 && iVar7==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 0:
case 1:
case 2:
case 3:
case 4:
return 1;
break;
}
break;
case 3:
switch (iVar1){
case 14:
return 1;
break;
}
break;
case 11:
switch (iVar1){
case 10:
case 11:
case 15:
return 1;
break;
}
break;
default:
if(iVar0 > 15){
iVar8=func_279(iParam0, 11, -1);
if(iVar8 >=256){
iVar9=func_144(joaat("mp_f_freemode_01"), iVar8, 11, 4);
if((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("tat_decl"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("multi_decal"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("tat_decl_no_save"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("combat_top"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("heist_draw_13"), 0)){
return 1;
}
}}
break;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
iVar1=PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
switch (iVar0){
case 0:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar10=func_247(joaat("mp_f_freemode_01"), 11, func_279(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar10==88) || (iVar1==4 && iVar10==89)) || (iVar1==9 && iVar10==87)){
return 1;
}
break;
}
break;
case 1:
switch (iVar1){
case 1:
case 2:
return 1;
break;
case 7:
case 4:
case 9:
iVar11=func_247(joaat("mp_f_freemode_01"), 11, func_279(iParam0, 11, -1), 0);
if(((iVar1==7 && iVar11==88) || (iVar1==4 && iVar11==89)) || (iVar1==9 && iVar11==87)){
return 1;
}
break;
}
break;
case 2:
switch (iVar1){
case 1:
case 3:
case 5:
case 7:
case 4:
case 8:
case 11:
return 1;
break;
}
break;
case 11:
switch (iVar1){
case 10:
case 11:
case 15:
return 1;
break;
}
break;
case 14:
switch (iVar1){
case 3:
case 5:
case 6:
case 8:
case 4:
case 14:
case 1:
case 7:
case 12:
return 1;
break;
}
break;
default:
}
}}
