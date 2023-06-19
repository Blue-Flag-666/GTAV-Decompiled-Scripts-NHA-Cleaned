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
var uLocal_88=-1;
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
bool bLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
bool bLocal_116=0;
var uLocal_117=0;
int iLocal_118[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_119[10]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
char* sLocal_120=NULL;
int iLocal_121=0;
int iLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
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
var uLocal_135=16;
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
var uLocal_300[9]={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_301[31]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
struct<16> Local_302[31];
int iLocal_303=0;
var uLocal_304=0;
int iLocal_305=0;
var uLocal_306=0;
var uLocal_307=12;
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
var uLocal_1005=1065353216;
var uLocal_1006=0;
var uLocal_1007=0;
var uLocal_1008=0;
var uLocal_1009=0;
var uLocal_1010=0;
var uLocal_1011=0;
var uLocal_1012=0;
var uLocal_1013=0;
var uLocal_1014=0;
bool bLocal_1015=0;
bool bLocal_1016=0;
bool bLocal_1017=0;
bool bLocal_1018=0;
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
iLocal_114=-1;
sLocal_120="";
iLocal_124=8;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("appSmuggler")) > 1){
func_451(0, 1);
}
func_440();
while (func_439()){
func_438();
if(!MISC::IS_BIT_SET(uLocal_112, 5) && func_437()){
func_435();
func_412();
}
if(!MISC::IS_BIT_SET(uLocal_112, 8) && MISC::IS_BIT_SET(uLocal_112, 5)){
func_406();
}
func_398();
if(Global_75986){
Global_75984=1;
func_396();
}else{
func_371();
}
func_328();
func_320();
func_318();
func_280();
if(!MISC::IS_BIT_SET(uLocal_112, 2)){
func_6();
}elseif(!func_5(&uLocal_125)){
func_4(&uLocal_125, 0, 0);
}elseif(func_3(&uLocal_125, 200, 0)){
if(!Global_1950844.f_3432 && CAM::IS_SCREEN_FADED_OUT()){
func_1(1);
Global_1950700=1;
func_451(0, 1);
}}
wait(0);
}}


void func_1(int iParam0){
if(!func_2()){
Global_1950844.f_3432=1;
Global_1950844.f_3433=iParam0;
}}


bool func_2(){
return Global_1950844.f_529;
}

int func_3(var uParam0, int iParam1, bool bParam2){
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


void func_6(){
int iVar0;
func_278();
if(MISC::IS_BIT_SET(uLocal_112, 0)){
if(GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_304)){
iVar0=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_304);
switch (iVar0){
case 0:
func_277();
func_276();
break;
case 1:
func_275();
break;
case 38:
func_223();
break;
case 35:
if(iLocal_122 !=0){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}
iLocal_122=0;
break;
case 36:
if(iLocal_122 !=1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}
iLocal_122=1;
break;
case 37:
if(iLocal_122 !=2){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}
iLocal_122=2;
break;
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
func_205(func_222(iVar0), 0);
break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
if(func_204(15964, -1)){
func_205(func_222(iVar0), 0);
}else{
iLocal_122=2;
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SHOW_SCREEN", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
}
break;
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
func_7(func_222(iVar0));
break;
}
MISC::CLEAR_BIT(&uLocal_112, 0);
}}}


void func_7(bool bParam0){
struct<2> Var0;
struct<4> Var1;
if(func_203(PLAYER::PLAYER_ID())){
func_200("HAPP_STEAL_T", "HAPP_STEAL_D", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}elseif(bParam0 !=8 && func_198(bParam0)){
func_200("HAPP_STEAL_T", "HAPP_STEAL_D1", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}elseif(!func_12(229)){
func_200("HAPP_STEAL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}else{
func_10(bParam0);
StringCopy(&Var0, "HAPP_STEAL_C1", 16);
StringCopy(&Var1, "", 16);
if(bParam0 !=8){
StringCopy(&Var0, "HAPP_STEAL_C0", 16);
Var1={
func_9(bParam0) 
};
}
func_200("HAPP_STEAL_T", &Var0, "HAPP_B_AIR", "WHOUSE_CANC", 0, 1, -1, 2, -1, &Var1, "HAPP_B_LAND");
}
func_8();
}


void func_8(){
sLocal_120="";
}


struct<4> func_9(bool bParam0){
struct<4> Var0;
StringCopy(&Var0, "INVALID", 16);
switch (bParam0){
case 0:
StringCopy(&Var0, "HAPPT_ANIMAL", 16);
break;
case 1:
StringCopy(&Var0, "HAPPT_ART", 16);
break;
case 2:
StringCopy(&Var0, "HAPPT_CHEMS", 16);
break;
case 3:
StringCopy(&Var0, "HAPPT_GOODS", 16);
break;
case 4:
StringCopy(&Var0, "HAPPT_JEWEL", 16);
break;
case 5:
StringCopy(&Var0, "HAPPT_MEDS", 16);
break;
case 6:
StringCopy(&Var0, "HAPPT_NARC", 16);
break;
case 7:
StringCopy(&Var0, "HAPPT_TOBAC", 16);
break;
case 8:
StringCopy(&Var0, "HAPPT_MIXED", 16);
break;
}
return Var0;
}


void func_10(bool bParam0){
iLocal_124=bParam0;
}


char* func_11(){
return sLocal_120;
}

int func_12(int iParam0){
int iVar0;
if(!func_197(PLAYER::PLAYER_ID(), iParam0, 0)){
iVar0=func_22(PLAYER::PLAYER_ID(), iParam0, 0);
if(iVar0==7){
if(func_20(PLAYER::PLAYER_ID())){
func_19("UA_ML_F_GOON1");
}elseif(func_18(PLAYER::PLAYER_ID())){
func_19("UA_ML_F_GOON2");
}else{
func_19("UA_ML_F_GOON3");
}}elseif(iVar0==15){
if(func_20(PLAYER::PLAYER_ID())){
func_19("GENERAL_MLF_G1");
}elseif(func_18(PLAYER::PLAYER_ID())){
func_19("GENERAL_MLF_G2");
}else{
func_19("GENERAL_MLF_G3");
}}elseif(iVar0==16){
if(func_20(PLAYER::PLAYER_ID())){
func_19("GENERAL_MLF_G4");
}elseif(func_18(PLAYER::PLAYER_ID())){
func_19("GENERAL_MLF_G5");
}else{
func_19("GENERAL_MLF_G6");
}}else{
func_19("BKR_TF_R6");
}
return 0;
}
if(!func_15(PLAYER::PLAYER_ID())){
func_19("DBG_BUN_NB");
return 0;
}
if(func_13(PLAYER::PLAYER_ID())){
func_19("BKR_TF_R3");
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_19("BKR_TF_R3");
return 0;
}
return 1;
}

int func_13(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_14(iParam0, 9);
}
return 0;
}


bool func_14(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_15(int iParam0){
if(func_17(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_16()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_16(){
return -1;
}

int func_17(var uParam0){
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

int func_18(int iParam0){
if(!func_17(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 26);
}


void func_19(char* sParam0){
sLocal_120=sParam0;
}


bool func_20(int iParam0){
return func_21(iParam0, 1);
}

int func_21(int iParam0, int iParam1){
if(func_17(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_16()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}

int func_22(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
if(!func_59(func_169(iParam1, -1, -1, -1), func_122(iParam1, -1, 1, -1, -1, iParam0), func_68(iParam1, -1, -1, -1, -1, iParam0), 0, 1)){
return 0;
}
iVar0=iParam1;
if(func_20(iParam0)){
if(iParam1==153){
iVar0=211;
}}
if(func_57(iParam1) >=func_56(iVar0)){
return 5;
}
if(func_55(iParam0)){
return 6;
}
if(func_54(iParam0)){
return 14;
}
if(func_53(iParam0) && !func_50(iParam0)){
return 17;
}
iVar1=func_45(iParam0);
if(iVar1 !=-1){
return iVar1;
}
if(func_44(iParam1)==1){
if((func_43() || func_42()) || ((!bParam2 && func_41() !=0) && func_44(iParam1)==1)){
return 2;
}}elseif(func_44(iParam1)==2){
if(!func_38(iParam1)){
return 3;
}
if(!bParam2){
if(Global_1895156[iParam0 /*609*/].f_10.f_34 !=func_16()){
return 9;
}}
if(func_37(iParam0)){
return 10;
}}elseif(func_35(iParam1)){
if(func_33(iParam0) <=0){
return 4;
}}
if(func_32(iParam1)){
if(func_31()){
return 13;
}
if(func_28()){
return 12;
}}
if(func_33(iParam0) + 1 < func_27(iVar0)){
return 4;
}
switch (iParam1){
case 157:
break;
case 152:
case 164:
case 173:
case 170:
case 201:
case 200:
if(!func_24(iParam0, 0)){
return 1;
}
break;
case 189:
if(func_23(iParam0, 21) || func_23(iParam0, 25)){
return 0;
}
break;
}
return -1;
}


var func__23(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_24(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)){
if(!func_25(iVar1, iParam0, 1)){
if(iParam1 || !func_14(iVar1, 31)){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_25(int iParam0, int iParam1, bool bParam2){
if(func_17(iParam1)){
if(!bParam2){
if(func_26(iParam0, iParam1)){
return 0;
}}
if(Global_1895156[iParam0 /*609*/].f_10 !=func_16()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10;
}}
return 0;
}

int func_26(int iParam0, int iParam1){
if(iParam1 !=func_16()){
if(iParam0 !=func_16()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_16()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}

int func_27(int iParam0){
switch (iParam0){
case 180:
return Global_262145.f_18813;
case 183:
return Global_262145.f_18821;
case 185:
return Global_262145.f_18830;
case 182:
return Global_262145.f_18841;
case 186:
return Global_262145.f_18850;
case 195:
return Global_262145.f_18868;
case 198:
return Global_262145.f_18878;
case 197:
return Global_262145.f_18890;
case 207:
return Global_262145.f_18898;
case 209:
return Global_262145.f_18911;
case 208:
return Global_262145.f_18919;
case 201:
return Global_262145.f_18952;
case 211:
return Global_262145.f_19020;
case 193:
return Global_262145.f_19043;
case 205:
return Global_262145.f_19061;
case 189:
return Global_262145.f_19026;
case 216:
return 2;
case 220:
return 2;
default:
}
return 1;
}

int func_28(){
if(Global_1950705){
return 0;
}
return func_29();
}

int func_29(){
if(func_30()){
return 1;
}
return Global_2683883.f_744;
}


bool func_30(){
return Global_1575021==10;
}


bool func_31(){
return Global_262145.f_15854;
}

int func_32(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}

int func_33(int iParam0){
if(func_34(iParam0)==func_16()){
return 0;
}
return Global_1895156[iParam0 /*609*/].f_10.f_19;
}

int func_34(int iParam0){
if(func_17(iParam0)){
return Global_1895156[iParam0 /*609*/].f_10;
}
return func_16();
}

int func_35(int iParam0){
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
return func_36(iParam0, 0);
return 0;
}

int func_36(int iParam0, int iParam1){
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

int func_37(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)){
if((Global_1895156[iParam0 /*609*/].f_10.f_34 !=func_16() && Global_1895156[iParam0 /*609*/].f_10.f_34==iVar1) && Global_1895156[iVar1 /*609*/].f_10.f_34==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_38(int iParam0){
switch (iParam0){
case 179:
if(func_40() < 2){
return 0;
}
break;
case 148:
if(func_39() < 2){
return 0;
}
break;
default:
if(func_39() < 2){
return 0;
}
break;
}
return 1;
}

int func_39(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)){
if(func_15(iVar2)){
iVar1++;
}}
iVar0++;
}
return iVar1;
}

int func_40(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)){
if(func_20(iVar2)){
iVar1++;
}}
iVar0++;
}
return iVar1;
}

int func_41(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_103;
}


bool func_42(){
return Global_1924276.f_11.f_144 !=-1;
}


bool func_43(){
return Global_1924276.f_11.f_143 !=-1;
}

int func_44(int iParam0){
switch (iParam0){
case 153:
case 154:
case 155:
case 162:
case 160:
case 163:
case 167:
case 168:
case 169:
case 171:
case 172:
case 178:
case 190:
case 191:
case 192:
case 189:
case 193:
case 194:
case 199:
case 205:
case 210:
case 225:
case 226:
case 227:
case 229:
case 230:
case 233:
case 237:
case 238:
case 239:
case 240:
case 249:
case 250:
case 243:
case 158:
case 181:
case 256:
case 258:
case 262:
case 263:
case 264:
case 271:
case 277:
case 291:
case 292:
case 293:
case 294:
case 295:
case 296:
case 297:
case 298:
case 299:
case 300:
case 301:
case 304:
case 305:
case 306:
case 307:
case 308:
case 309:
case 312:
case 313:
case 315:
case 316:
case 317:
return 0;
case 276:
case 267:
case 318:
return 3;
case 152:
case 159:
case 142:
case 164:
case 157:
case 166:
case 170:
case 173:
case 180:
case 183:
case 185:
case 182:
case 186:
case 197:
case 200:
case 201:
case 198:
case 195:
case 207:
case 208:
case 209:
case 214:
case 215:
case 216:
case 217:
case 218:
case 219:
case 220:
case 221:
case 241:
case 242:
case 244:
case 248:
return 1;
case 148:
case 179:
return 2;
default:
}
return -1;
}

int func_45(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < func_47()){
iVar1=Global_1895156[iParam0 /*609*/].f_10.f_11[iVar0];
if(iVar1 !=func_16()){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)){
if(func_55(iVar1)){
return 7;
}
if(func_54(iVar1)){
return 15;
}
if(func_46(iVar1)){
return 16;
}}}
iVar0++;
}
return -1;
}

int func_46(int iParam0){
if(iParam0==func_16()){
return 0;
}
if(((((MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_4, 2) || MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_4, 3)) || MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_4, 5)) || MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_4, 6)) || MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_4, 7)) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_405.f_1, 1)){
return 1;
}
return 0;
}

int func_47(){
return (func_48() - 1);
}

int func_48(){
return func_49(PLAYER::PLAYER_ID());
}

int func_49(int iParam0){
int iVar0;
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_16() && Global_1895156[iVar0 /*609*/].f_10.f_429==1){
return 8;
}
return 4;
}

int func_50(int iParam0){
if(iParam0 !=func_16()){
if(func_52(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_51(Global_2657704[iParam0 /*463*/].f_321.f_7)==23;
}}}
return 0;
}

int func_51(int iParam0){
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

int func_52(int iParam0, bool bParam1, bool bParam2){
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

int func_53(int iParam0){
if(iParam0 !=func_16()){
return MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_321.f_5, 4);
}
return 0;
}

int func_54(int iParam0){
var uVar0;
int iVar1;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
return Global_2765083;
}else{
uVar0=PLAYER::GET_PLAYER_PED(iParam0);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uVar0);
if(iVar1==joaat("mp_m_freemode_01") || iVar1==joaat("mp_f_freemode_01")){
return 0;
}else{
return 1;
}}else{
return 0;
}}
return 0;
}

int func_55(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}

int func_56(int iParam0){
switch (iParam0){
case 162:
return Global_262145.f_13214;
case 155:
return Global_262145.f_13239;
case 153:
return Global_262145.f_13203;
case 163:
return Global_262145.f_13179;
case 160:
return Global_262145.f_13192;
case 154:
return Global_262145.f_13249;
case 169:
return 1;
case 171:
return Global_262145.f_15681;
case 172:
return Global_262145.f_15700;
case 148:
return Global_262145.f_18927;
case 179:
return Global_262145.f_18935;
case 201:
return Global_262145.f_18949;
case 200:
return Global_262145.f_18989;
case 211:
return Global_262145.f_19018;
case 194:
return Global_262145.f_19030;
case 193:
return Global_262145.f_19041;
case 210:
return Global_262145.f_19053;
case 205:
return Global_262145.f_19059;
case 199:
return Global_262145.f_19072;
case 249:
return 1;
case 238:
return 1;
default:
}
return 2147483647;
}

int func_57(int iParam0){
return Global_1924276.f_11.f_147[func_58(iParam0)];
}

int func_58(int iParam0){
switch (iParam0){
case 148:
return 0;
case 152:
return 1;
case 151:
return 2;
case 142:
return 3;
case 157:
return 4;
case 159:
return 5;
case 164:
return 6;
case 160:
return 7;
case 162:
return 8;
case 163:
return 9;
case 154:
return 10;
case 155:
return 11;
case 153:
return 12;
case 166:
return 13;
case 167:
return 14;
case 168:
return 15;
case 169:
return 16;
case 170:
return 17;
case 171:
return 18;
case 172:
return 19;
case 173:
return 20;
case 178:
return 21;
case 179:
return 22;
case 180:
return 23;
case 182:
return 24;
case 183:
return 25;
case 185:
return 26;
case 186:
return 27;
case 189:
return 28;
case 190:
return 29;
case 191:
return 30;
case 192:
return 31;
case 193:
return 32;
case 194:
return 33;
case 195:
return 34;
case 197:
return 35;
case 198:
return 36;
case 199:
return 37;
case 200:
return 38;
case 201:
return 39;
case 205:
return 40;
case 207:
return 41;
case 208:
return 42;
case 209:
return 43;
case 210:
return 44;
case 214:
return 45;
case 215:
return 46;
case 216:
return 47;
case 217:
return 48;
case 218:
return 49;
case 219:
return 50;
case 220:
return 51;
case 221:
return 52;
case 188:
return 53;
case 225:
return 54;
case 226:
return 55;
case 227:
return 56;
case 229:
return 57;
case 230:
return 58;
case 233:
return 59;
case 237:
return 60;
case 238:
return 61;
case 239:
return 62;
case 240:
return 63;
case 241:
return 64;
case 242:
return 65;
case 244:
return 66;
case 248:
return 67;
case 249:
return 68;
case 250:
return 69;
case 243:
return 70;
case 158:
return 71;
case 256:
return 72;
case 258:
return 73;
case 271:
return 74;
case 276:
return 75;
case 277:
return 76;
case 262:
return 79;
case 263:
return 78;
case 264:
return 77;
case 267:
return 80;
case 291:
return 81;
case 292:
return 82;
case 293:
return 83;
case 294:
return 84;
case 295:
return 85;
case 296:
return 86;
case 297:
return 87;
case 298:
return 88;
case 299:
return 89;
case 300:
return 90;
case 301:
return 91;
case 304:
return 92;
case 305:
return 93;
case 306:
return 94;
case 307:
return 95;
case 308:
return 96;
case 309:
return 97;
case 312:
return 98;
case 313:
return 99;
case 315:
return 100;
case 316:
return 101;
case 317:
return 102;
case 318:
return 103;
default:
}
return -1;
}

int func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
if((func_67(iParam0, bParam3, bParam4) || func_66(iParam1, bParam3, bParam4)) || func_60(iParam2, bParam3, bParam4)){
return 1;
}
return 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2){
return func_61(2, iParam0, 0, bParam1, bParam2);
}

int func_61(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(Global_1666708, 0)){
return 0;
}
if((bParam2 && !bParam3) && iParam1 <=(func_65(iParam0) - func_64(iParam0, 0))){
return 1;
}else{
if(bParam3){
if(bParam2){
iVar0=(iParam1 - func_64(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_65(iParam0) - func_63(iParam0));
}else{
if(bParam2){
iVar0=(iParam1 - func_64(iParam0, 0));
}else{
iVar0=iParam1;
}
iVar1=(func_65(iParam0) - func_64(iParam0, 1));
}
if(!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] !=3){
iVar1=(iVar1 - func_62(iParam0));
}
if(iVar0 < iVar1){
return 1;
}}
return 0;
}

int func_62(int iParam0){
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

int func_63(int iParam0){
switch (iParam0){
case 0:
return Global_1666708.f_1;
break;
case 1:
return Global_1666708.f_2;
break;
case 2:
return Global_1666708.f_3;
break;
}
return 0;
}

int func_64(int iParam0, bool bParam1){
int iVar0;
iVar0=PLAYER::PLAYER_ID();
switch (iParam0){
case 0:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_219;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
}
break;
case 1:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_220;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
}
break;
case 2:
if(!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
return Global_2657704[iVar0 /*463*/].f_221;
}else{
return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
}
break;
}
return 0;
}

int func_65(int iParam0){
switch (iParam0){
case 0:
return Global_1666716;
break;
case 1:
return Global_1666717;
break;
case 2:
return Global_1666718;
break;
}
return 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2){
return func_61(1, iParam0, 0, bParam1, bParam2);
}

int func_67(int iParam0, bool bParam1, bool bParam2){
return func_61(0, iParam0, 0, bParam1, bParam2);
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 159:
case 142:
return 1;
case 167:
return func_121(iParam1);
case 170:
return 2;
case 171:
return 0;
case 172:
return 9;
case 173:
return 0;
case 168:
return 5;
case 178:
case 188:
return func_119(iParam1, iParam2, iParam3);
case 225:
case 226:
return func_113(iParam1, iParam2, iParam3, iParam4);
case 227:
return 0;
case 229:
case 230:
return func_101(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
case 233:
return func_94(iParam1, iParam2, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
case 179:
return 0;
case 182:
return 7;
case 185:
return 6;
case 186:
return 2;
case 180:
return 9;
case 190:
return 8;
case 191:
return 0;
case 192:
return func_85(iParam1, iParam2);
case 193:
return 0;
case 194:
return 0;
case 199:
return 0;
case 195:
return 9;
case 201:
return 16;
case 198:
return 12;
case 205:
return 8;
case 207:
return 0;
case 208:
return 15;
case 209:
return 0;
case 210:
return 0;
case 214:
return 9;
case 215:
return 0;
case 216:
return 16;
case 217:
return 0;
case 218:
return 0;
case 219:
return 0;
case 220:
return 30;
case 221:
return 30;
case 237:
case 250:
return func_82(iParam1, iParam2, iParam3);
case 238:
case 249:
return func_81(iParam1);
case 239:
return 4;
case 240:
return 1;
case 241:
return 1;
case 242:
return 1;
case 244:
return 4;
case 248:
return 5;
case 243:
return func_77(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
case 158:
return func_72(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
case 181:
return func_69(iParam1, iParam2, PLAYER::INT_TO_PLAYERINDEX(iParam5), iParam4);
default:
}
return 0;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_71(iParam0, iParam1, iParam3);
iVar0=(iVar0 + func_70(iParam0, iParam2));
return iVar0;
}

int func_70(int iParam0, var uParam1){
switch (iParam0){
case 2:
return 5;
default:
}
return 1;
}

int func_71(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 0:
return 1;
default:
}
return 0;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_76(iParam0, iParam1, iParam3);
iVar0=(iVar0 + func_73(iParam0, iParam2));
return iVar0;
}

int func_73(int iParam0, int iParam1){
struct<3> Var0;
Var0=-1;
Var0.f_1=-1;
Var0.f_2=-1;
switch (iParam0){
case 4:
case 2:
case 1:
case 3:
case 30:
case 31:
case 32:
case 28:
case 29:
case 52:
case 37:
return 0;
case 19:
case 20:
return 1;
case 38:
case 8:
case 14:
case 17:
case 11:
case 18:
case 21:
case 22:
case 7:
case 34:
case 23:
case 41:
case 49:
case 48:
case 27:
case 15:
case 50:
case 24:
case 6:
case 9:
case 10:
case 47:
case 42:
case 26:
case 25:
return 2;
case 43:
return 3;
case 16:
return 4;
case 12:
case 13:
if(func_75(iParam1, 1)){
Var0={
func_74(iParam1) 
};
}
if(Var0.f_1==4){
return 4;
}else{
return 2;
}
break;
case 33:
return 5;
}
return 1;
}


Vector3 func__74(int iParam0){
return Global_1895156[iParam0 /*609*/].f_10.f_306;
}


bool func_75(int iParam0, bool bParam1){
if(!func_17(iParam0)){
return 0;
}
if(!bParam1){
if(func_15(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_16();
}

int func_76(int iParam0, int iParam1, var uParam2){
switch (iParam0){
case 0:
return 5;
case 24:
return 1;
case 10:
switch (iParam1){
case 30:
return 11;
case 31:
case 32:
return 9;
default:
}
break;
case 36:
return 0;
case 38:
return 3;
case 40:
return 4;
case 41:
return 4;
case 8:
return 13;
case 13:
switch (iParam1){
case 38:
case 39:
return 10;
case 40:
return 11;
default:
}
break;
case 35:
return 5;
case 46:
return 2;
case 9:
return 8;
case 4:
return 7;
case 14:
return 11;
case 17:
return 8;
case 47:
return 11;
case 11:
return 9;
case 18:
return 13;
case 6:
return 17;
case 48:
return 21;
case 33:
return 5;
case 44:
return 2;
case 21:
return 22;
case 22:
return 12;
case 7:
return 10;
case 2:
return 0;
case 34:
switch (iParam1){
case 91:
return 16;
case 92:
return 14;
default:
}
break;
case 27:
return 12;
case 23:
return 17;
case 31:
return 3;
case 12:
return 4;
case 3:
return 2;
case 49:
return 15;
case 19:
return 14;
case 50:
return 12;
case 20:
return 12;
case 32:
return 15;
case 30:
return 6;
case 16:
return 12;
case 39:
return 5;
case 42:
return 3;
case 37:
return 19;
case 52:
return 6;
case 15:
return 2;
case 25:
switch (iParam1){
case 69:
return 11;
case 70:
return 12;
default:
}
break;
}
return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_80(iParam0, iParam1, iParam3);
if(!func_79(iParam0)){
iVar0=(iVar0 + func_78(iParam0, iParam2));
}
return iVar0;
}

int func_78(int iParam0, int iParam1){
switch (iParam0){
case 14:
case 5:
case 0:
case 3:
case 2:
return 0;
case 6:
if(func_33(iParam1) + 1==1){
return 1;
}else{
return 2;
}
break;
}
return 1;
}

int func_79(int iParam0){
return 0;
}

int func_80(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 13:
return 3;
case 5:
switch (iParam1){
case 15:
return 17;
case 16:
return 12;
case 17:
return 12;
default:
}
break;
case 11:
switch (iParam1){
case 35:
case 36:
return 1;
default:
}
break;
case 6:
switch (iParam1){
case 18:
return 3;
default:
}
break;
case 12:
return 15;
case 0:
return 1;
case 9:
switch (iParam1){
case 28:
switch (iParam2){
case 0:
return 1;
case 1:
return 0;
case 2:
return 3;
default:
}
break;
case 29:
switch (iParam2){
case 0:
return 1;
case 1:
return 2;
case 2:
return 0;
default:
}
break;
case 30:
switch (iParam2){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
default:
}
break;
}
break;
case 3:
switch (iParam1){
case 10:
return 6;
default:
}
return 5;
case 2:
switch (iParam1){
case 6:
return 22;
case 7:
return 23;
case 8:
return 25;
default:
}
break;
case 8:
switch (iParam1){
case 25:
return 3;
case 26:
return 8;
case 27:
return 4;
default:
}
break;
}
return 0;
}

int func_81(int iParam0){
switch (iParam0){
case 0:
return 3;
case 1:
return 3;
case 2:
return 4;
case 3:
return 0;
case 4:
return 3;
case 5:
return 0;
default:
}
return 0;
}

int func_82(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_84(iParam0, iParam1);
if(func_83(iParam0)){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_83(int iParam0){
return 1;
}

int func_84(int iParam0, int iParam1){
switch (iParam0){
case 12:
return 3;
case 9:
switch (iParam1){
case 71:
case 72:
case 73:
return 3;
default:
}
break;
case 11:
switch (iParam1){
case 77:
return 2;
default:
}
break;
case 17:
switch (iParam1){
case 102:
case 103:
case 104:
return 4;
default:
}
break;
case 23:
switch (iParam1){
case 133:
case 135:
return 1;
case 136:
return 2;
default:
}
break;
case 1:
return 10;
case 18:
return 3;
case 3:
return 4;
case 21:
return 2;
case 0:
switch (iParam1){
case 0:
return 9;
case 1:
return 9;
case 2:
return 8;
case 3:
return 6;
case 4:
return 8;
case 5:
return 8;
case 6:
return 8;
case 7:
return 8;
case 8:
return 8;
case 9:
return 6;
default:
}
break;
}
return 0;
}

int func_85(int iParam0, int iParam1){
int iVar0;
iVar0=func_93(iParam0, iParam1);
if(!func_92(iParam0)){
iVar0=(iVar0 + func_86(iParam0, func_90() + 1));
}
if(iParam0==14 || ((((func_92(iParam0) && iParam0 !=9) && iParam0 !=16) && iParam0 !=7) && iParam0 !=17)){
iVar0=(iVar0 + func_86(iParam0, func_90() + 1));
}
if(iParam0==7){
iVar0 +=6;
}
if(iParam0==17){
iVar0 +=2;
}
return iVar0;
}

int func_86(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(func_89(iParam0)){
iVar0=1;
}else{
if(iVar0==0){
iVar0=iParam1;
iVar1=func_88(iParam0, iParam1);
iVar2=func_87(iParam0);
if(iVar0 > iVar1){
iVar0=iVar1;
}elseif(iVar0 < iVar2){
iVar0=iVar2;
}}
if(func_92(iParam0)){
if(iVar0 > Global_262145.f_18564){
iVar0=Global_262145.f_18564;
}}else{
if(iVar0 < Global_262145.f_18563){
iVar0=Global_262145.f_18563;
}
if(iVar0 > Global_262145.f_18562){
iVar0=Global_262145.f_18562;
}}}
return iVar0;
}

int func_87(int iParam0){
switch (iParam0){
case 5:
return Global_262145.f_18601;
case 10:
return Global_262145.f_18626;
default:
}
return 1;
}

int func_88(int iParam0, int iParam1){
if(func_92(iParam0)){
if(iParam1 >=Global_262145.f_18565){
return 2;
}
return 1;
}
switch (iParam0){
case 5:
return Global_262145.f_18602;
case 10:
return Global_262145.f_18627;
default:
}
return 8;
}

int func_89(int iParam0){
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

int func_90(){
if(func_91()==func_16()){
return 0;
}
return func_33(func_91());
}

int func_91(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

int func_92(int iParam0){
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

int func_93(int iParam0, int iParam1){
switch (iParam0){
case 32:
switch (iParam1){
case 195:
return 3;
case 196:
return 3;
case 197:
return 3;
case 198:
return 3;
case 199:
return 3;
default:
}
break;
case 37:
switch (iParam1){
case 231:
return 2;
default:
}
break;
case 1:
switch (iParam1){
case 7:
return 9;
case 8:
return 8;
case 9:
return 7;
case 10:
return 4;
case 11:
return 5;
case 12:
return 6;
default:
}
break;
case 0:
switch (iParam1){
case 1:
return 10;
case 2:
return 10;
case 3:
return 8;
case 4:
return 10;
case 5:
return 10;
case 6:
return 10;
default:
}
break;
case 2:
switch (iParam1){
case 13:
return 10;
case 14:
return 8;
case 15:
return 8;
case 16:
return 8;
case 17:
return 10;
case 18:
return 9;
default:
}
break;
case 4:
switch (iParam1){
case 19:
return 5;
case 20:
return 8;
case 21:
return 4;
case 22:
return 0;
case 23:
return 10;
case 24:
return 1;
default:
}
break;
case 6:
switch (iParam1){
case 25:
return 20;
case 26:
return 15;
case 27:
return 13;
case 28:
return 16;
case 29:
return 14;
case 30:
return 14;
default:
}
break;
case 3:
switch (iParam1){
case 74:
return 7;
case 75:
return 5;
case 76:
return 5;
case 77:
return 4;
default:
}
break;
case 8:
switch (iParam1){
case 64:
return 1;
case 67:
return 1;
default:
}
break;
case 14:
switch (iParam1){
case 38:
return 6;
case 39:
return 6;
case 40:
return 7;
case 41:
return 6;
default:
}
break;
}
return 0;
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
iVar0=func_100(iParam0, iParam1, iParam2, iParam4);
if(!func_99(iParam0)){
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_96(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
}}
if(func_95(iParam0)){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_95(int iParam0){
switch (iParam0){
case 2:
case 5:
case 7:
return 1;
default:
}
return 0;
}

int func_96(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4){
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
if(func_99(iParam0)){
iVar0=2;
}else{
iVar0=1;
}
break;
}
if(iVar0 > func_98(iParam0)){
iVar0=func_98(iParam0);
}elseif(iVar0 < func_97(iParam0)){
iVar0=func_97(iParam0);
}
return iVar0;
}

int func_97(int iParam0){
return 1;
}

int func_98(int iParam0){
return 4;
}

int func_99(int iParam0){
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

int func_100(int iParam0, int iParam1, var uParam2, var uParam3){
int iVar0;
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 5;
case 3:
iVar0=1;
switch (iParam1){
case 26:
return iVar0 + 1;
case 34:
return iVar0 + 1;
default:
}
return iVar0;
break;
case 4:
return 1;
case 5:
return 1;
case 8:
return 7;
case 12:
switch (iParam1){
case 125:
return 6;
default:
}
return 2;
break;
case 9:
return 0;
case 13:
return 1;
case 10:
return 12;
}
return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
iVar0=func_112(iParam0, iParam1, iParam2, iParam4);
if(!func_111(iParam0)){
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_103(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
}}
if(func_102(iParam0)){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_102(int iParam0){
switch (iParam0){
case 23:
return 1;
default:
}
return 0;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
if(iParam4 > 0){
return iParam4;
}
if(func_110(iParam0)){
iVar1=func_109(iParam3);
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
}elseif(func_108(iParam0)){
iVar0=1;
return iVar0;
}else{
iVar0=iParam1;
if(iVar0 > func_107(iParam2)){
iVar0=func_107(iParam2);
}}
if(iVar0 > func_105(iParam0)){
iVar0=func_105(iParam0);
}elseif(iVar0 < func_104(iParam0)){
iVar0=func_104(iParam0);
}
return iVar0;
}

int func_104(int iParam0){
switch (iParam0){
case 15:
return 3;
default:
}
return 1;
}

int func_105(int iParam0){
if(!func_110(iParam0)){
if(func_111(iParam0)){
if(func_106(iParam0)){
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

int func_106(int iParam0){
switch (iParam0){
case 12:
return 1;
default:
}
return 0;
}

int func_107(int iParam0){
if(iParam0==func_16() || Global_1853988[iParam0 /*867*/].f_267.f_293==0){
return 50;
}
return (50 - Global_1853988[iParam0 /*867*/].f_267.f_293.f_3);
}

int func_108(int iParam0){
switch (iParam0){
case 26:
return 1;
default:
}
return 0;
}

int func_109(int iParam0){
if(iParam0 > 25){
return 3;
}elseif(iParam0 > 10){
return 2;
}
return 1;
}

int func_110(int iParam0){
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

int func_111(int iParam0){
if(func_110(iParam0) || func_108(iParam0)){
return 1;
}
return 0;
}

int func_112(int iParam0, int iParam1, int iParam2, var uParam3){
switch (iParam0){
case 1:
return 1;
case 2:
return 12;
case 11:
return 1;
case 5:
return 10;
case 12:
switch (iParam1){
case 0:
return 3;
case 1:
return 3;
case 2:
return 10;
default:
}
break;
case 10:
switch (iParam1){
case 34:
return 17;
case 35:
return 20;
case 36:
return 22;
default:
}
break;
case 9:
switch (iParam1){
case 6:
return 9;
case 7:
return 0;
case 8:
return 5;
default:
}
break;
case 0:
switch (iParam2){
case 1:
return 7;
case 2:
return 14;
case 3:
return 14;
case 4:
return 14;
default:
}
break;
case 8:
return 2;
case 23:
return (2 * iParam2);
case 24:
return (2 * iParam2);
case 26:
return 2;
}
return 0;
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_118(iParam0, iParam1, iParam2, iParam3);
if(!func_117(iParam0)){
iVar0=(iVar0 + func_115(iParam0, func_90() + 1, -1, iParam2));
}
if(func_114(iParam0)){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_114(int iParam0){
switch (iParam0){
case 0:
case 12:
case 6:
case 14:
case 15:
case 16:
case 17:
case 7:
return 1;
default:
}
return 0;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(iParam3 > 0){
return iParam3;
}
if(func_116(iParam0)){
if(iParam2 <=Global_262145.f_21863){
iVar0=1;
if(iParam0==15){
iVar0=2;
}}elseif(iParam2 <=Global_262145.f_21864){
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
}elseif(func_117(iParam0)){
if(iParam1 < Global_262145.f_21823){
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

int func_116(int iParam0){
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

int func_117(int iParam0){
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

int func_118(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case 0:
return 0;
case 1:
switch (iParam1){
case 0:
return 3;
case 1:
return 6;
case 2:
return 8;
default:
}
break;
case 2:
switch (iParam1){
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 7:
return 0;
case 8:
return 0;
default:
}
break;
case 3:
switch (iParam1){
case 9:
return 0;
case 10:
return 0;
case 11:
return 0;
case 12:
return 0;
default:
}
break;
case 4:
switch (iParam1){
case 14:
return 10;
case 15:
return 12;
case 13:
return 2;
default:
}
break;
case 5:
switch (iParam1){
case 16:
return 0;
case 17:
return 0;
case 18:
return 0;
default:
}
break;
case 6:
switch (iParam1){
case 19:
return 15;
case 20:
return 15;
case 21:
return 11;
default:
}
break;
case 7:
switch (iParam1){
case 22:
return 10;
case 23:
return 7;
case 24:
return 6;
default:
}
break;
case 8:
switch (iParam1){
case 25:
return (6 + iParam2 * 2);
case 26:
return (7 + iParam2 * 2);
default:
}
break;
case 9:
switch (iParam1){
case 27:
return 9;
case 28:
return 10;
default:
}
break;
case 10:
switch (iParam1){
case 29:
return 6;
case 30:
return 6;
case 31:
return 6;
default:
}
break;
case 11:
switch (iParam1){
case 32:
return 8;
case 33:
return 8;
case 34:
return 8;
default:
}
break;
case 12:
return 0;
case 13:
switch (iParam1){
case 35:
return 18;
case 36:
return 9;
case 37:
return 0;
default:
}
break;
case 14:
switch (iParam3){
case 0:
return 9;
case 1:
return 16;
case 2:
return 6;
case 3:
return 3;
case 4:
return 9;
case 5:
return 6;
case 6:
return 6;
case 7:
return 3;
case 8:
return 3;
case 9:
return 3;
case 10:
return 0;
case 11:
return 9;
case 12:
return 3;
default:
}
break;
case 15:
return iParam2;
case 16:
return 0;
case 17:
return 0;
case 18:
return 0;
case 19:
return 0;
case 20:
return 13;
}
return 0;
}

int func_119(int iParam0, int iParam1, var uParam2){
int iVar0;
iVar0=func_120(iParam0, iParam1);
if(iParam0==15){
iVar0++;
}
return iVar0;
}

int func_120(int iParam0, int iParam1){
switch (iParam0){
case 6:
switch (iParam1){
case 18:
return 9;
case 19:
return 7;
case 20:
return 8;
default:
}
break;
case 9:
switch (iParam1){
case 27:
return 1;
case 28:
return 1;
case 29:
return 1;
default:
}
break;
case 10:
switch (iParam1){
case 21:
return 2;
case 22:
return 2;
case 23:
return 2;
default:
}
break;
case 14:
switch (iParam1){
case 36:
return 8;
case 37:
return 7;
case 38:
return 8;
default:
}
break;
case 2:
switch (iParam1){
case 39:
return 8;
case 40:
return 6;
case 41:
return 2;
default:
}
break;
case 4:
switch (iParam1){
case 1:
return 5;
case 2:
return 5;
case 3:
return 5;
default:
}
break;
case 17:
switch (iParam1){
case 42:
return 1;
case 43:
return 1;
case 44:
return 1;
default:
}
break;
case 15:
switch (iParam1){
case 45:
return 12;
case 46:
return 12;
case 47:
return 12;
default:
}
break;
case 16:
switch (iParam1){
case 48:
return 7;
case 49:
return 7;
case 50:
return 7;
default:
}
break;
case 12:
return 3;
}
return 0;
}

int func_121(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 7:
return 0;
case 8:
return 0;
case 9:
return 0;
case 10:
return 0;
case 11:
return 0;
case 12:
return 3;
case 13:
return 0;
case 14:
return 0;
case 15:
return 0;
case 16:
return 1;
case 17:
return 3;
case 19:
return 0;
case 18:
return 0;
default:
}
return 1;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5){
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
return func_168(iParam1);
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
return func_164(iParam1, iParam3, iParam4);
case 225:
case 226:
return func_160(iParam1, iParam3, iParam4, 0, 0);
case 227:
return 0;
case 229:
case 230:
return func_154(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
case 233:
return func_144(iParam1, iParam3, iParam4, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, 0, 0);
return 6;
case 190:
return 18;
case 191:
return 0;
case 192:
return func_143(iParam1, iParam3);
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
return func_142(iParam1, iParam3, iParam4);
case 238:
case 249:
return func_141(iParam1);
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
return func_135(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
case 158:
return func_129(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
case 181:
return func_123(iParam1, iParam3, PLAYER::INT_TO_PLAYERINDEX(iParam5), 0, -1, 0, 0);
default:
}
return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
int iVar0;
switch (iParam0){
case 0:
iVar0=iVar0;
break;
}
if(!bParam5){
iVar0=(iVar0 + func_128(iParam0, -1));
}
if(!bParam6){
if(func_127(0, iParam1) !=-1){
iVar0=(iVar0 + func_126(func_33(iParam2) + 1, iParam0, iParam2));
}}
if(!bParam3){
if(func_125(iParam0, iParam1)){
iVar0=(iVar0 + func_124(iParam0, iParam1));
}}
return iVar0;
}

int func_124(int iParam0, int iParam1){
switch (iParam0){
case 2:
return 2;
default:
}
return 0;
}


bool func_125(int iParam0, int iParam1){
return func_124(iParam0, iParam1) > 0;
}

int func_126(var uParam0, int iParam1, int iParam2){
switch (iParam1){
case 2:
return 3;
default:
}
return 1;
}

int func_127(int iParam0, int iParam1){
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

int func_128(int iParam0, int iParam1){
switch (iParam0){
case 2:
return 0;
default:
}
return 0;
}

int func_129(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
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
iVar0=(iVar0 + func_134(iParam0, -1));
}
if(!bParam6){
if(func_133(0, iParam1) !=-1){
iVar0=(iVar0 + func_132(func_33(iParam2) + 1, iParam0, iParam2));
}}
if(!bParam3){
if(func_131(iParam0, iParam1)){
iVar0=(iVar0 + func_130(iParam0, iParam1));
}}
return iVar0;
}

int func_130(int iParam0, int iParam1){
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


bool func_131(int iParam0, int iParam1){
return func_130(iParam0, iParam1) > 0;
}

int func_132(int iParam0, int iParam1, int iParam2){
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
if(iParam2 !=func_16()){
if(func_75(iParam2, 1)){
Var0={
func_74(iParam2) 
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

int func_133(int iParam0, int iParam1){
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

int func_134(int iParam0, int iParam1){
switch (iParam0){
case 53:
return 0;
default:
}
return 0;
}

int func_135(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
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
if(func_79(iParam0)){
iVar0=(iVar0 + func_78(iParam0, iParam2));
}
iVar0=(iVar0 + func_140(iParam0, -1));
}
if(!bParam6){
if(func_139(0, iParam1) !=-1){
iVar0=(iVar0 + func_138(func_33(iParam2) + 1, iParam0));
}}
if(!bParam3){
if(func_137(iParam0, iParam1)){
iVar0=(iVar0 + func_136(iParam0, iParam1));
}}
return iVar0;
}

int func_136(int iParam0, int iParam1){
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


bool func_137(int iParam0, int iParam1){
return func_136(iParam0, iParam1) > 0;
}

int func_138(int iParam0, int iParam1){
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

int func_139(int iParam0, int iParam1){
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

int func_140(int iParam0, int iParam1){
switch (iParam0){
case 16:
return 0;
default:
}
return 0;
}

int func_141(int iParam0){
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

int func_142(int iParam0, int iParam1, int iParam2){
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
if(func_83(iParam0)){
iVar0=(iVar0 + iParam2);
}
return iVar0;
}

int func_143(int iParam0, int iParam1){
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
if((func_92(iParam0) && iParam0 !=7) || iParam0==12){
iVar0=(iVar0 + func_86(iParam0, func_90() + 1));
}
return iVar0;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
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
if(func_99(iParam0)){
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_96(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
}}
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_149(iParam0, func_33(iParam3) + 1));
}}
if(!bParam6){
if(func_148(0, iParam1) !=-1){
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_147(func_33(iParam3) + 1, iParam0));
}}}
if(!bParam4){
if(func_146(iParam0)){
iVar0=(iVar0 + func_145(iParam0));
}}
return iVar0;
}

int func_145(int iParam0){
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


bool func_146(int iParam0){
return func_145(iParam0) > 0;
}

int func_147(var uParam0, int iParam1){
return 2;
}

int func_148(int iParam0, int iParam1){
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

int func_149(int iParam0, int iParam1){
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
uVar0=func_150(5329, -1);
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

int func_150(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_151(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


var func__151(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_152(uParam1));
}

int func_152(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_153();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_153(){
return Global_1574918;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
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
if(func_111(iParam0)){
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_103(iParam0, func_33(iParam3) + 1, iParam3, -1, iParam2));
}}
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_159(iParam0, func_33(iParam3) + 1));
}}
if(!bParam6){
if(func_158(0, iParam1) !=-1){
if(iParam3 !=func_16()){
iVar0=(iVar0 + func_157(func_33(iParam3) + 1, iParam0));
}}}
if(!bParam4){
if(func_156(iParam0)){
iVar0=(iVar0 + func_155(iParam0));
}}
return iVar0;
}

int func_155(int iParam0){
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


bool func_156(int iParam0){
return func_155(iParam0) > 0;
}

int func_157(int iParam0, int iParam1){
switch (iParam0){
case 1:
if(func_106(iParam1)){
return 1;
}else{
return 1;
}
break;
case 2:
if(func_106(iParam1)){
return 1;
}else{
return 1;
}
break;
case 3:
if(func_106(iParam1)){
return 2;
}else{
return 2;
}
break;
case 4:
if(func_106(iParam1)){
return 2;
}else{
return 2;
}
break;
case 5:
if(func_106(iParam1)){
return 2;
}else{
return 2;
}
break;
case 6:
if(func_106(iParam1)){
return 2;
}else{
return 2;
}
break;
case 7:
if(func_106(iParam1)){
return 2;
}else{
return 2;
}
break;
case 8:
if(func_106(iParam1)){
return 2;
}else{
return 2;
}
break;
}
return 1;
}

int func_158(int iParam0, int iParam1){
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

int func_159(int iParam0, int iParam1){
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

int func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
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
if(func_115(iParam0, func_90() + 1, -1, iParam2)==1){
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
if(func_117(iParam0)){
iVar0=(iVar0 + func_115(iParam0, func_90() + 1, -1, iParam2));
}
iVar0=(iVar0 + func_163(iParam0, func_90() + 1));
}
if(!bParam3){
if(func_162(iParam0)){
iVar0=(iVar0 + func_161(iParam0));
}}
return iVar0;
}

int func_161(int iParam0){
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


bool func_162(int iParam0){
return func_161(iParam0) > 0;
}

int func_163(int iParam0, int iParam1){
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

int func_164(int iParam0, int iParam1, int iParam2){
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
iVar0=(iVar0 + func_167(iParam0, func_90() + 1, iParam2));
iVar0=(iVar0 + func_165(iParam0));
return iVar0;
}

int func_165(int iParam0){
if(func_166(iParam0)){
return 2;
}
return 0;
}

int func_166(int iParam0){
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

int func_167(int iParam0, var uParam1, int iParam2){
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

int func_168(int iParam0){
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

int func_169(int iParam0, int iParam1, int iParam2, int iParam3){
switch (iParam0){
case 148:
case 152:
case 162:
case 160:
case 163:
return 0;
case 167:
return func_196(iParam1);
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
return func_193(iParam1, iParam2, iParam3);
case 225:
case 226:
return func_190(iParam1, iParam2, iParam3, 0);
case 227:
return 0;
case 229:
case 230:
return func_187(iParam1, iParam2, iParam3, 0);
case 233:
return func_184(iParam1, iParam2, iParam3, 0);
case 190:
return 20;
case 191:
return 4;
case 192:
return func_183(iParam1, iParam2);
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
return func_182();
case 218:
return func_181();
case 219:
return 0;
case 220:
return 0;
case 221:
return 0;
case 237:
case 250:
return func_180(iParam1, iParam2, iParam3);
case 238:
case 249:
return func_179(iParam1, iParam2);
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
return func_176(iParam1, iParam2, 0, -1);
case 158:
return func_173(iParam1, iParam2, 0, -1);
case 181:
return func_170(iParam1, iParam2, 0, -1);
default:
}
return 0;
}

int func_170(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
switch (iParam0){
case 2:
iVar0 +=6;
break;
}
if(!bParam2){
if(func_125(iParam0, iParam1)){
iVar0=(iVar0 + func_171(iParam0, iParam1));
}}
return iVar0;
}

int func_171(int iParam0, var uParam1){
if(func_125(iParam0, uParam1)){
return (func_124(iParam0, uParam1) + func_172(iParam0, uParam1));
}
return 0;
}

int func_172(int iParam0, var uParam1){
switch (iParam0){
case 2:
return 2;
default:
}
return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2, int iParam3){
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
if(func_131(iParam0, iParam1)){
iVar0=(iVar0 + func_174(iParam0, iParam1));
}}
return iVar0;
}

int func_174(int iParam0, int iParam1){
if(func_131(iParam0, iParam1)){
return (func_130(iParam0, iParam1) + func_175(iParam0, iParam1));
}
return 0;
}

int func_175(int iParam0, int iParam1){
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

int func_176(int iParam0, int iParam1, bool bParam2, int iParam3){
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
if(func_137(iParam0, iParam1)){
iVar0=(iVar0 + func_177(iParam0, iParam1));
}}
return iVar0;
}

int func_177(int iParam0, int iParam1){
if(func_137(iParam0, iParam1)){
return (func_136(iParam0, iParam1) + func_178(iParam0, iParam1));
}
return 0;
}

int func_178(int iParam0, int iParam1){
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

int func_179(int iParam0, int iParam1){
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

int func_180(int iParam0, int iParam1, int iParam2){
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

int func_181(){
int iVar0;
iVar0=32;
return iVar0;
}

int func_182(){
int iVar0;
iVar0=8;
return iVar0;
}

int func_183(int iParam0, int iParam1){
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
iVar0=(iVar0 + func_86(iParam0, func_90() + 1));
}
return iVar0;
}

int func_184(int iParam0, int iParam1, int iParam2, bool bParam3){
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
if(func_146(iParam0)){
iVar0=(iVar0 + func_185(iParam0, iParam1));
}}
return iVar0;
}

int func_185(int iParam0, var uParam1){
if(func_146(iParam0)){
return (func_145(iParam0) + func_186(iParam0, uParam1));
}
return 0;
}

int func_186(int iParam0, var uParam1){
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

int func_187(int iParam0, int iParam1, int iParam2, bool bParam3){
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
if(func_156(iParam0)){
iVar0=(iVar0 + func_188(iParam0, iParam1));
}}
return iVar0;
}

int func_188(int iParam0, int iParam1){
if(func_156(iParam0)){
return (func_155(iParam0) + func_189(iParam0, iParam1));
}
return 0;
}

int func_189(int iParam0, int iParam1){
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

int func_190(int iParam0, int iParam1, int iParam2, bool bParam3){
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
if(func_162(iParam0)){
iVar0=(iVar0 + func_191(iParam0));
}}
return iVar0;
}

int func_191(int iParam0){
if(func_162(iParam0)){
return (func_161(iParam0) + func_192(iParam0));
}
return 0;
}

int func_192(int iParam0){
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

int func_193(int iParam0, int iParam1, var uParam2){
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
iVar0=(iVar0 + func_194(iParam0));
return iVar0;
}

int func_194(int iParam0){
if(func_166(iParam0)){
if(func_195(iParam0)){
return 4;
}
return 2;
}
return 0;
}

int func_195(int iParam0){
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

int func_196(int iParam0){
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


bool func_197(int iParam0, int iParam1, bool bParam2){
return func_22(iParam0, iParam1, bParam2)==-1;
}

int func_198(int iParam0){
if(func_5(&(Global_2766257[iParam0 /*2*/])) && func_3(&(Global_2766257[iParam0 /*2*/]), Global_2766257.f_17[iParam0], 0)){
func_199(&(Global_2766257[iParam0 /*2*/]));
return 0;
}
return func_5(&(Global_2766257[iParam0 /*2*/]));
}


void func_199(var uParam0){
uParam0->f_1=0;
}


void func_200(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SHOW_OVERLAY");
func_202(sParam0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
if(iParam6 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam9);
if(iParam8 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam8);
}}elseif(iParam6 !=-1){
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_202(sParam2);
func_202(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_202(iParam10);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(bParam5){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}elseif(bParam4){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}
MISC::SET_BIT(&uLocal_112, 1);
func_201(iParam7);
}


void func_201(int iParam0){
if(iLocal_123 !=iParam0){
iLocal_123=iParam0;
}}


void func_202(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


bool func_203(int iParam0){
return 0==func_107(iParam0);
}


bool func_204(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_153();
}
return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}


void func_205(bool bParam0, bool bParam1){
int iVar0;
struct<2> Var1;
struct<4> Var2;
struct<2> Var3;
struct<4> Var4;
int iVar5;
int iVar6;
float fVar7;
iVar0=func_220(PLAYER::PLAYER_ID());
if(bParam0 !=8){
iVar0=uLocal_300[func_219(bParam0)];
}
if(!func_217(bParam0)){
StringCopy(&Var1, "HAPP_SELL_D1", 16);
StringCopy(&Var2, "", 16);
if(bParam0 !=8){
StringCopy(&Var1, "HAPP_SELL_D0", 16);
Var2={
func_9(bParam0) 
};
}
func_200("HAPP_SELL_T", &Var1, "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, &Var2, 0);
}elseif(func_216()){
func_200("HAPP_SELL_T", "HAPP_SELL_C3", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}elseif(!func_12(230)){
func_200("HAPP_SELL_T", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}elseif(func_109(iVar0) !=1 && !bParam1){
func_10(bParam0);
func_200("HAPP_SELL_T", "HAPP_SELL_GDB", "OR_OVRLY_OK", "", 0, 1, -1, 4, -1, 0, 0);
}else{
StringCopy(&Var3, "HAPP_SELL_C2", 16);
StringCopy(&Var4, "", 16);
iVar5=-1;
iVar6=-1;
if((func_215() && func_213() !=-1) || bParam0 !=8){
if(func_215()){
bParam0=func_213();
iVar0=uLocal_300[func_219(bParam0)];
}
iVar6=func_211(bParam0, iVar0);
StringCopy(&Var3, "HAPP_SELL_C0", 16);
fVar7=(func_210(bParam0, iVar0) * 100f);
if(fVar7 > 0f){
iVar5=func_209(bParam0, iVar0);
iVar6=(iVar6 + iVar5);
StringCopy(&Var3, "HAPP_SELL_C1", 16);
iVar5=round(fVar7);
}
Var4={
func_9(bParam0) 
};
}elseif(bParam0==8){
MISC::SET_BIT(&uLocal_112, 11);
}
func_10(bParam0);
if(func_29()){
if(!func_204(34710, -1)){
if(!func_208("APP_SG_HELP", 0, 0)){
func_207("APP_SG_HELP", -1);
}
func_206(34710, 1, -1);
}}
if(iVar5 > 0){
MISC::SET_BIT(&uLocal_112, 12);
func_200("HAPP_SELL_T", &Var3, "HAPP_B_AIR", "WHOUSE_CANC", 0, 1, iVar5, 1, iVar6, &Var4, "HAPP_B_LAND");
}else{
func_200("HAPP_SELL_T", &Var3, "HAPP_B_AIR", "WHOUSE_CANC", 0, 1, iVar6, 1, iVar5, &Var4, "HAPP_B_LAND");
}}
func_8();
}


void func_206(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_153();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}


void func_207(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


bool func_208(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
if(iParam1==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
}
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_209(bool bParam0, int iParam1){
float fVar0;
float fVar1;
fVar0=func_210(bParam0, iParam1);
fVar1=(to_float(func_211(bParam0, iParam1)) * fVar0);
return round(fVar1);
}


float func_210(bool bParam0, int iParam1){
float fVar0;
float fVar1;
int iVar2;
fVar0=0f;
fVar1=to_float(Global_262145.f_23000);
switch (bParam0){
case -1:
case 8:
return 0f;
case 7:
fVar0=Global_262145.f_23002;
fVar1=to_float(Global_262145.f_22999);
break;
case 3:
fVar0=Global_262145.f_23002;
fVar1=to_float(Global_262145.f_22999);
break;
case 0:
fVar0=Global_262145.f_23003;
break;
case 1:
fVar0=Global_262145.f_23003;
break;
case 4:
fVar0=Global_262145.f_23003;
break;
case 6:
fVar0=Global_262145.f_23004;
fVar1=to_float(Global_262145.f_23001);
break;
case 2:
fVar0=Global_262145.f_23004;
fVar1=to_float(Global_262145.f_23001);
break;
case 5:
fVar0=Global_262145.f_23004;
fVar1=to_float(Global_262145.f_23001);
break;
}
iVar2=floor((to_float(iParam1) / fVar1));
return (to_float(iVar2) * fVar0);
}

int func_211(bool bParam0, int iParam1){
return (func_212(bParam0) * iParam1);
}

int func_212(int iParam0){
switch (iParam0){
case 8:
return Global_262145.f_22990;
case 0:
return Global_262145.f_22991;
case 1:
return Global_262145.f_22992;
case 2:
return Global_262145.f_22993;
case 3:
return Global_262145.f_22994;
case 4:
return Global_262145.f_22995;
case 5:
return Global_262145.f_22996;
case 6:
return Global_262145.f_22997;
case 7:
return Global_262145.f_22998;
default:
}
return 0;
}

int func_213(){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(uLocal_300[iVar0] > 0 && iVar0 !=0){
return func_214(iVar0);
}
iVar0++;
}
return -1;
}

int func_214(int iParam0){
switch (iParam0){
case 0:
return 8;
case 1:
return 6;
case 2:
return 2;
case 3:
return 5;
case 4:
return 0;
case 5:
return 1;
case 6:
return 4;
case 7:
return 7;
case 8:
return 3;
default:
}
return -1;
}


bool func_215(){
return MISC::IS_BIT_SET(uLocal_112, 10);
}

int func_216(){
if(func_5(&(Global_2766257.f_26)) && func_3(&(Global_2766257.f_26), Global_2766257.f_28, 0)){
func_199(&(Global_2766257.f_26));
return 0;
}
return func_5(&(Global_2766257.f_26));
}

int func_217(int iParam0){
switch (iParam0){
case 8:
return !func_218(PLAYER::PLAYER_ID());
default:
}
return uLocal_300[func_219(iParam0)] > 0;
return 0;
}


bool func_218(int iParam0){
return func_220(iParam0)==0;
}

int func_219(bool bParam0){
switch (bParam0){
case 8:
return 0;
case 6:
return 1;
case 2:
return 2;
case 5:
return 3;
case 0:
return 4;
case 1:
return 5;
case 4:
return 6;
case 7:
return 7;
case 3:
return 8;
default:
}
return 0;
}

int func_220(int iParam0){
if(iParam0 !=func_16() && func_221(iParam0)){
return Global_1853988[iParam0 /*867*/].f_267.f_293.f_3;
}
return 0;
}

int func_221(int iParam0){
if(iParam0 !=func_16()){
return Global_1853988[iParam0 /*867*/].f_267.f_293 !=0;
}
return 0;
}

int func_222(int iParam0){
switch (iParam0){
case 2:
case 13:
return 8;
break;
case 3:
case 14:
case 22:
return 6;
break;
case 4:
case 15:
case 23:
return 2;
break;
case 5:
case 16:
case 24:
return 5;
break;
case 6:
case 17:
case 25:
return 0;
break;
case 7:
case 18:
case 26:
return 1;
break;
case 8:
case 19:
case 27:
return 4;
break;
case 9:
case 20:
case 28:
return 7;
break;
case 10:
case 21:
case 29:
return 3;
break;
}
return -1;
}


void func_223(){
switch (func_274()){
case 2:
if(func_253(0)){
func_252();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
func_227(316, 0);
}else{
func_200("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}
break;
case 1:
if(func_253(1)){
func_224();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
func_227(315, 0);
}else{
func_200("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}
break;
}}


void func_224(){
func_225(6117, -1);
}


void func_225(int iParam0, int iParam1){
int iVar0;
iVar0=func_150(iParam0, func_152(iParam1));
iVar0++;
func_226(iParam0, iVar0, iParam1, 1);
}


void func_226(int iParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
iVar0=func_151(iParam0, uParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


void func_227(int iParam0, bool bParam1){
bool bVar0;
bVar0=func_251();
if(bVar0==8 && func_250(iParam0)){
bVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
func_249(18);
}else{
func_248(18);
}
if(bParam1){
func_247(26);
}
if((func_246(iParam0) && func_215()) && bVar0==8){
bVar0=func_213();
}
Global_1948624.f_53=0;
MISC::SET_BIT(&Global_1984726, 16);
if(func_245(iParam0)){
func_244(iParam0, 0, bVar0);
}else{
func_243(0, bVar0);
func_228(iParam0, -1, -1);
}
func_1(1);
Global_1950700=1;
MISC::SET_BIT(&uLocal_112, 2);
}


void func_228(int iParam0, int iParam1, int iParam2){
if(iParam1 !=-1){
func_247(iParam1);
}
if(iParam2 !=-1){
func_242(iParam2);
}
func_229(iParam0, -1);
}


void func_229(int iParam0, int iParam1){
if((func_241() || !func_240(1)) || func_44(iParam0)==3){
if(!func_238(PLAYER::PLAYER_ID(), 0) && !func_238(PLAYER::PLAYER_ID(), 3)){
func_237(iParam0);
func_230(iParam0, func_234(1, 1), func_233(), func_232(), func_231(), iParam1);
}}}


void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5){
struct<7> Var0;
Var0.f_0=1613825825;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=uParam2;
Var0.f_4=uParam3;
Var0.f_5=uParam4;
Var0.f_6=uParam5;
if(!iParam1==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 7, iParam1);
}}


var func__231(){
return Global_2794162.f_5231.f_347;
}


var func__232(){
return Global_2794162.f_5231.f_346;
}


var func__233(){
return Global_2794162.f_5231.f_345;
}

int func_234(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_52(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_235(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}


bool func_235(int iParam0, int iParam1){
bool bVar0;
if(!func_17(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_236(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_236(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_153();
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


void func_237(int iParam0){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_32=iParam0;
}

int func_238(int iParam0, int iParam1){
if(func_239(iParam0, 0)){
return func_44(Global_1895156[iParam0 /*609*/].f_10.f_33)==iParam1;
}
return 0;
}

int func_239(int iParam0, int iParam1){
if(func_17(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}


bool func_240(bool bParam0){
return func_75(PLAYER::PLAYER_ID(), bParam0);
}

int func_241(){
return func_15(PLAYER::PLAYER_ID());
}


void func_242(int iParam0){
if(Global_2794162.f_5231.f_346 !=iParam0){
Global_2794162.f_5231.f_346=iParam0;
}}


void func_243(int iParam0, bool bParam1){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235=iParam0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_235.f_22=bParam1;
}


void func_244(int iParam0, int iParam1, bool bParam2){
var uVar0;
uVar0=bParam2;
if(iParam0 !=229 && iParam0 !=230){}
func_243(iParam1, uVar0);
func_229(iParam0, -1);
}

int func_245(int iParam0){
if(iParam0==229 || iParam0==230){
return 1;
}
return 0;
}

int func_246(int iParam0){
if(iParam0==230 || iParam0==315){
return 1;
}
return 0;
}


void func_247(int iParam0){
if(Global_2794162.f_5231.f_345 !=iParam0){
Global_2794162.f_5231.f_345=iParam0;
}}


void func_248(int iParam0){
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_48), iParam0);
}


void func_249(int iParam0){
MISC::SET_BIT(&(Global_2794162.f_5231.f_48), iParam0);
}

int func_250(int iParam0){
if(iParam0==229 || iParam0==316){
return 1;
}
return 0;
}

int func_251(){
return iLocal_124;
}


void func_252(){
func_225(6115, -1);
}


bool func_253(bool bParam0){
int iVar0;
if(!func_273()){
return 1;
}
while (!func_254(&iVar0, bParam0, 0, 0)){
func_371();
wait(0);
}
func_371();
return iVar0==2;
}


bool func_254(var uParam0, bool bParam1, bool bParam2, int iParam3){
int iVar0;
var uVar1;
int iVar2;
if(*uParam0 !=0 && *uParam0 !=1){
*uParam0=0;
}
if(bParam1){
iVar0=244232650;
}elseif(bParam2){
iVar0=1091517361;
uVar1=Global_262145.f_16063;
}else{
iVar0=357925343;
}
switch (*uParam0){
case 0:
if(func_272() !=-1){
return 0;
}
iVar2=MISC::GET_HASH_KEY("MP_STAT_HANGAR_CONTRABAND_MISSION_v0");
if(func_268(78225582, -1799524201, iVar0, -1018905335, 1, uVar1, 1, 4, iVar2, 3)){
*uParam0=1;
}else{
*uParam0=3;
}
if(*uParam0==1 && func_263()){
}else{
*uParam0=3;
func_259(func_272());
}
break;
case 1:
if(func_258(func_272())){
if(func_257(func_272())==2){
*uParam0=2;
if(bParam2){
NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEE(func_256(func_272()));
unk_0xED1B407BADA42CEC(Global_262145.f_16063, 0, 1, iParam3);
}
func_259(func_272());
func_255(iVar0);
}else{
*uParam0=3;
func_259(func_272());
}}
break;
}
return *uParam0 !=1;
}


void func_255(int iParam0){
Global_4536664=iParam0;
}

int func_256(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66;
}
return -1;
}

int func_257(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2;
}
return 0;
}

int func_258(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_2 !=1;
}
return 0;
}


void func_259(int iParam0){
bool bVar0;
bVar0=false;
if(!func_273()){
bVar0=true;
}
if(iParam0 !=-1){
if(func_262(iParam0)){
if(!bVar0){
NETSHOPPING::NET_GAMESERVER_BASKET_END();
}}elseif(!bVar0){
NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
}
func_260(&(Global_4535172[iParam0 /*85*/]));
}}


void func_260(var uParam0){
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
func_261(&(uParam0->f_14));
func_261(&(uParam0->f_14.f_13));
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


void func_261(var uParam0){
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

int func_262(int iParam0){
if(iParam0 >=0 && iParam0 < 15){
return Global_4535172[iParam0 /*85*/].f_66.f_5==1;
}
return 0;
}

int func_263(){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
bVar0=false;
if(!func_273()){
bVar0=true;
}
iVar1=1;
iVar2=func_272();
if(iVar2==-1){
return 0;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_153()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
if(func_267(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1)==1){
Global_4536678=1;
}
return 0;
}
if(Global_2695872){
if(Global_4535172[iVar2 /*85*/].f_66.f_6==1067618600 || Global_4535172[iVar2 /*85*/].f_66.f_6==-1303831698){
Global_4536679=1;
return 0;
}}}
iVar3=func_256(iVar2);
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
func_264(Global_4535172[iVar2 /*85*/], iVar2);
}
Global_4536659=1;
return 1;
}}
return 0;
}


void func_264(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19){
struct<3> Var0;
int iVar1;
if(iParam19 < 0){
return;
}
Var0.f_2=2147483647;
Var0.f_0=-710178565;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2={
Param0.f_66 
};
Var0.f_2.f_33=iParam19;
iVar1=func_266(Var0.f_1);
if((Global_262145.f_24258 && !Global_262145.f_24259) && !Global_262145.f_24260){
return;
}
if(!iVar1==0){
func_265();
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 36, iVar1);
}}


void func_265(){
SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}


var func__266(int iParam0){
var uVar0;
if(func_17(iParam0)){
MISC::SET_BIT(&uVar0, iParam0);
}
return uVar0;
}

int func_267(int iParam0, int iParam1, int iParam2){
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
case 2063456538:
case -728008329:
case 119239868:
case -456458353:
case 1900048468:
case 333526332:
case -2091351051:
case -373571001:
case -367430800:
case 1823444356:
if(iParam2==0){
return 0;
}
return 1;
break;
case 1775876058:
case -518651910:
return 2;
break;
}
return 0;
}elseif((iParam0==-1134853190 || iParam0==925407197) || iParam0==-1589378882){
return 0;
}
return 1;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
bool bVar0;
int iVar1;
struct<4> Var2;
bVar0=false;
if(!func_273()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_153()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536678=1;
return 0;
}
if(Global_2695872){
if(iParam1==1067618600 || iParam1==-1303831698){
Global_4536679=1;
return 0;
}}}
if(iParam2==0){
return 0;
}
iVar1=func_272();
if(iVar1==-1){
if(!func_270(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)){
return 0;
}}
if(iVar1 !=-1){
if(iParam8 !=0 && func_269(iParam1)){
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

int func_269(int iParam0){
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

int func_270(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5){
bool bVar0;
int iVar1;
bool bVar2;
var uVar3;
bVar0=false;
if(!func_273()){
bVar0=true;
}
if(!bVar0){
if(!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_153()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING()){
Global_4536678=1;
return 0;
}
if(Global_2695872){
if(iParam2==1067618600 || iParam2==-1303831698){
Global_4536679=1;
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
*iParam0=func_271(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
return 1;
}
return 0;
}

int func_271(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(Global_4535172[iVar0 /*85*/].f_66.f_2==0){
if(!func_273()){
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
func_264(Global_4535172[iVar0 /*85*/], iVar0);
}
return iVar0;
}
iVar0++;
}
return -1;
}

int func_272(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 15){
if(func_256(iVar0) !=2147483647){
if(func_262(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_273(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_274(){
return iLocal_123;
}


void func_275(){
switch (func_274()){
case 2:
if(func_253(0)){
func_252();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
func_227(229, 0);
}else{
func_200("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}
break;
case 1:
if(func_253(1)){
func_224();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
func_227(230, 0);
}else{
func_200("", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}
break;
case 3:
break;
case 4:
func_276();
func_205(func_251(), 1);
return;
case 5:
if(!func_12(229)){
func_200("HAPP_T1", func_11(), "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}elseif(func_253(0)){
func_252();
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "GTAO_SMG_Hangar_Computer_Sounds", 1);
func_227(229, 1);
return;
}else{
func_200("HAPP_T1", "BKR_TF_R6", "OR_OVRLY_OK", "", 1, 0, -1, 0, -1, 0, 0);
}
break;
case 6:
break;
default:
func_277();
break;
}
func_276();
}


void func_276(){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "HIDE_OVERLAY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_201(0);
MISC::CLEAR_BIT(&uLocal_112, 1);
}


void func_277(){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Link", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}


void func_278(){
if(func_279()){
if(!MISC::IS_BIT_SET(uLocal_112, 0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "GET_CURRENT_SELECTION");
uLocal_304=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
MISC::SET_BIT(&uLocal_112, 0);
}}}

int func_279(){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
return 1;
}
return 0;
}


void func_280(){
if(iLocal_116 !=func_317()){
if(!func_5(&uLocal_133)){
func_4(&uLocal_133, 0, 0);
}elseif(func_3(&uLocal_133, 750, 0)){
func_199(&uLocal_133);
func_281();
}}}


void func_281(){
int iVar0;
func_309();
if(func_308()){
MISC::SET_BIT(&uLocal_112, 10);
}else{
MISC::CLEAR_BIT(&uLocal_112, 10);
}
func_287();
iVar0=0;
while (iVar0 < 9){
func_286(iVar0);
iVar0++;
}
func_285();
func_282();
func_4(&uLocal_129, 0, 0);
}


void func_282(){
if(func_216()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "UPDATE_SELL_COOLDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_284(Global_2766257.f_26, Global_2766257.f_28));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_283(Global_2766257.f_28));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "UPDATE_SELL_COOLDOWN");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_283(int iParam0){
return (iParam0 / 1000);
}

int func_284(var uParam0, var uParam1, int iParam2){
int iVar0;
iVar0=(iParam2 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)));
iVar0=(iVar0 / 1000);
return iVar0;
}


void func_285(){
int iVar0;
int iVar1;
int iVar2;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "UPDATE_STEAL_COOLDOWN");
iVar0=1;
while (iVar0 <=8){
iVar1=func_214(iVar0);
iVar2=iVar1;
if(func_198(iVar1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_284(Global_2766257[iVar2 /*2*/], Global_2766257.f_17[iVar2]));
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
}
iVar0++;
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_286(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=uLocal_300[iParam0];
iVar1=50;
iVar2=func_211(func_214(iParam0), iVar0);
iVar3=round((func_210(func_214(iParam0), iVar0) * 100f));
if(IntToFloat(iVar3) > 0f){
iVar4=func_209(func_214(iParam0), iVar0);
iVar2=(iVar2 + iVar4);
MISC::SET_BIT(&uLocal_112, 14);
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "ADD_CARGO");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(to_float(iVar3));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_287(){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
float fVar9;
float fVar10;
int iVar11;
float fVar12;
int iVar13;
uVar0=func_298(PLAYER::PLAYER_ID());
iVar1=0;
iVar2=func_297();
iVar3=func_296();
iVar4=func_295();
iVar5=func_294();
iVar6=func_293();
iLocal_116=func_317();
iVar7=50;
iVar8=(iLocal_116 * func_212(8));
fVar9=func_291(iVar2, func_292());
fVar10=func_291(iVar3, func_290());
fVar9=func_289(fVar9, 0f, 100f);
fVar10=func_289(fVar10, 0f, 100f);
if(func_288(iLocal_121)){
iVar1=1;
}
if(func_215()){
iVar11=func_213();
iVar8=(iLocal_116 * func_212(iVar11));
fVar12=(func_210(iVar11, iLocal_116) * 100f);
if(fVar12 > 0f){
iVar13=func_209(iVar11, iLocal_116);
iVar8=(iVar8 + iVar13);
}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_STATS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(uVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar9);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_116);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_288(int iParam0){
switch (iParam0){
case 4:
case 5:
case 3:
return 1;
default:
}
return 0;
}


float func_289(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}

int func_290(){
return func_150(6117, -1);
}


float func_291(int iParam0, int iParam1){
return ((to_float(iParam0) / to_float(iParam1)) * 100f);
}

int func_292(){
return func_150(6115, -1);
}

int func_293(){
return func_150(6120, -1);
}

int func_294(){
return func_150(6119, -1);
}

int func_295(){
return func_150(6121, -1);
}

int func_296(){
return func_150(6118, -1);
}

int func_297(){
return func_150(6116, -1);
}


char* func_298(int iParam0){
var uVar0;
int iVar1;
if(!func_17(iParam0)){
uVar0=func_304(iParam0, 0);
return uVar0;
}
if(iParam0==PLAYER::PLAYER_ID()){
uVar0=func_303(&(Global_1895156[iParam0 /*609*/].f_10.f_105));
return uVar0;
}
if(Global_1895156[iParam0 /*609*/].f_10.f_121 !=Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121){
uVar0=func_304(iParam0, 0);
return uVar0;
}
if(((func_14(iParam0, 28) || func_14(PLAYER::PLAYER_ID(), 28)) || func_302(iParam0)) && !func_300(iParam0)){
return func_304(iParam0, 0);
}
iVar1=func_34(iParam0);
if(iVar1 !=func_16()){
if(iVar1 !=PLAYER::PLAYER_ID()){
if(!func_299() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)){
return func_304(iVar1, 0);
}}}
if(iVar1 !=func_16()){
uVar0=func_303(&(Global_1895156[iVar1 /*609*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar0)){
return func_304(iVar1, 0);
}else{
return iVar0;
}}
return "";
}


bool func_299(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_300(int iParam0){
struct<13> Var0;
Var0={
func_301(iParam0) 
};
if(func_299()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}elseif(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_301(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_302(int iParam0){
struct<13> Var0;
if(iParam0 !=func_16()){
Var0={
func_301(iParam0) 
};
if((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return 0;
}}elseif(func_299() || MISC::IS_PROSPERO_VERSION()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
if(NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0)){
return 0;
}}}}
return 1;
}


var func__303(var uParam0){
return uParam0;
}


var func__304(int iParam0, bool bParam1){
if(!bParam1){
if(func_306(iParam0, 1)){
return func_305();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


var func__305(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}


bool func_306(int iParam0, bool bParam1){
return func_307(iParam0, bParam1, 1);
}

int func_307(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_17(iParam0)){
return 0;
}
if(!bParam1){
if(func_21(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_16() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}


bool func_308(){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < 9){
if(uLocal_300[iVar0] > 0){
iVar1++;
if(iVar1 > 2){
return 0;
}}
iVar0++;
}
return iVar1 <=2;
}


void func_309(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 9){
iVar1=func_214(iVar0);
uLocal_300[iVar0]=func_310(iVar1);
iVar0++;
}}

int func_310(int iParam0){
int iVar0;
int iVar1;
int iVar2;
if(!func_315()){
return 0;
}
if(iParam0==8){
return func_220(PLAYER::PLAYER_ID());
}
iVar0=0;
while (iVar0 < 50){
iVar2=func_312(func_313(func_314(iVar0), -1));
if(func_311(iVar2)==iParam0){
iVar1++;
}
iVar0++;
}
return iVar1;
}

int func_311(int iParam0){
switch (iParam0){
case joaat("sm_prop_smug_crate_l_medical"):
return 5;
case joaat("sm_prop_smug_crate_m_medical"):
return 5;
case joaat("sm_prop_smug_crate_l_tobacco"):
return 7;
case joaat("sm_prop_smug_crate_m_tobacco"):
return 7;
case joaat("sm_prop_smug_crate_l_antiques"):
return 1;
case joaat("sm_prop_smug_crate_m_antiques"):
return 1;
case joaat("sm_prop_smug_crate_l_narc"):
return 6;
case joaat("sm_prop_smug_crate_m_narc"):
return 6;
case joaat("sm_prop_smug_crate_l_jewellery"):
return 4;
case joaat("sm_prop_smug_crate_m_jewellery"):
return 4;
case joaat("sm_prop_smug_crate_l_bones"):
return 0;
case joaat("sm_prop_smug_crate_m_bones"):
return 0;
case joaat("sm_prop_smug_crate_l_fake"):
return 3;
case joaat("sm_prop_smug_crate_m_fake"):
return 3;
case joaat("sm_prop_smug_crate_l_hazard"):
return 2;
case joaat("sm_prop_smug_crate_m_hazard"):
return 2;
default:
}
return -1;
}

int func_312(int iParam0){
switch (iParam0){
case 1:
return joaat("sm_prop_smug_crate_l_medical");
case 2:
return joaat("sm_prop_smug_crate_m_medical");
case 3:
return joaat("sm_prop_smug_crate_l_tobacco");
case 4:
return joaat("sm_prop_smug_crate_m_tobacco");
case 5:
return joaat("sm_prop_smug_crate_l_antiques");
case 6:
return joaat("sm_prop_smug_crate_m_antiques");
case 7:
return joaat("sm_prop_smug_crate_l_narc");
case 8:
return joaat("sm_prop_smug_crate_m_narc");
case 9:
return joaat("sm_prop_smug_crate_l_jewellery");
case 10:
return joaat("sm_prop_smug_crate_m_jewellery");
case 11:
return joaat("sm_prop_smug_crate_l_bones");
case 12:
return joaat("sm_prop_smug_crate_m_bones");
case 13:
return joaat("sm_prop_smug_crate_l_fake");
case 14:
return joaat("sm_prop_smug_crate_m_fake");
case 15:
return joaat("sm_prop_smug_crate_l_hazard");
case 16:
return joaat("sm_prop_smug_crate_m_hazard");
default:
}
return 0;
}

int func_313(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_153();
}
return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_314(int iParam0){
switch (iParam0){
case 0:
return 16011;
case 1:
return 16012;
case 2:
return 16013;
case 3:
return 16014;
case 4:
return 16015;
case 5:
return 16016;
case 6:
return 16017;
case 7:
return 16018;
case 8:
return 16019;
case 9:
return 16020;
case 10:
return 16021;
case 11:
return 16022;
case 12:
return 16023;
case 13:
return 16024;
case 14:
return 16025;
case 15:
return 16026;
case 16:
return 16027;
case 17:
return 16028;
case 18:
return 16029;
case 19:
return 16030;
case 20:
return 16031;
case 21:
return 16032;
case 22:
return 16033;
case 23:
return 16034;
case 24:
return 16035;
case 25:
return 16036;
case 26:
return 16037;
case 27:
return 16038;
case 28:
return 16039;
case 29:
return 16040;
case 30:
return 16041;
case 31:
return 16042;
case 32:
return 16043;
case 33:
return 16044;
case 34:
return 16045;
case 35:
return 16046;
case 36:
return 16047;
case 37:
return 16048;
case 38:
return 16049;
case 39:
return 16050;
case 40:
return 16051;
case 41:
return 16052;
case 42:
return 16053;
case 43:
return 16054;
case 44:
return 16055;
case 45:
return 16056;
case 46:
return 16057;
case 47:
return 16058;
case 48:
return 16059;
case 49:
return 16060;
default:
}
return 16011;
}


bool func_315(){
return func_316() !=0;
}

int func_316(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293;
}

int func_317(){
return func_220(PLAYER::PLAYER_ID());
}


void func_318(){
if(func_5(&uLocal_129)){
if(func_3(&uLocal_129, 1000, 0)){
func_285();
func_282();
func_319(&uLocal_129, 0, 0);
}}else{
func_4(&uLocal_129, 0, 0);
}}


void func_319(var uParam0, bool bParam1, bool bParam2){
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


void func_320(){
int iVar0;
bLocal_113++;
if(bLocal_113==32){
bLocal_113=false;
}
iVar0=bLocal_113;
if(iVar0==PLAYER::PLAYER_ID()){
return;
}
if(((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && func_221(iVar0)) && !func_75(iVar0, 0)) && !func_327()){
if(!func_326()){
func_323(iVar0, bLocal_113);
}}elseif(func_326()){
func_321();
}
if(MISC::IS_BIT_SET(uLocal_117, bLocal_113)){
if(!func_15(iVar0) && func_326()){
func_321();
}}elseif(func_15(iVar0) && func_326()){
func_321();
}}


void func_321(){
int iVar0;
int iVar1;
iVar0=0;
iVar1=-1;
iVar0=0;
while (iVar0 < 31){
if(iLocal_301[iVar0]==bLocal_113){
iLocal_301[iVar0]=-1;
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 !=-1 && iVar1 < 31){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "REMOVE_ACTIVE_ORGANISATION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&(Local_302[iVar1 /*16*/]));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
StringCopy(&(Local_302[iVar1 /*16*/]), "", 64);
MISC::CLEAR_BIT(&uLocal_117, bLocal_113);
func_322(PLAYER::INT_TO_PLAYERINDEX(bLocal_113));
}}


void func_322(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(iLocal_119[iVar0]==iParam0){
iLocal_118[iVar0]=0;
iLocal_119[iVar0]=-1;
return;
}
iVar0++;
}}


void func_323(int iParam0, int iParam1){
int iVar0;
char* sVar1;
int iVar2;
int iVar3;
struct<16> Var4[7];
int iVar5;
int iVar6;
iVar0=0;
sVar1=PLAYER::GET_PLAYER_NAME(iParam0);
if(MISC::ARE_STRINGS_EQUAL(sVar1, "**Invalid**")){
return;
}
iVar3=7;
if(func_15(iParam0)){
iVar2=0;
while (iVar2 < iVar3){
iVar5=Global_1895156[iParam1 /*609*/].f_10.f_11[iVar2];
if(iVar5 !=func_16()){
StringCopy(&(Var4[iVar2 /*16*/]), PLAYER::GET_PLAYER_NAME(iVar5), 64);
}else{
StringCopy(&(Var4[iVar2 /*16*/]), "", 64);
}
iVar2++;
}
iVar2=0;
while (iVar2 < iVar3){
if(MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar2 /*16*/]))){
if(iVar2 !=iVar3){
iVar6=iVar2;
while (iVar6 <=(iVar3 - 1)){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar6 /*16*/]))){
Var4[iVar2 /*16*/]={
Var4[iVar6 /*16*/] 
};
StringCopy(&(Var4[iVar6 /*16*/]), "", 64);
iVar6=(iVar3 - 1);
}
iVar6++;
}}}
iVar2++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "ADD_ACTIVE_ORGANISATION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(func_325(iParam0));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar1);
iVar2=0;
while (iVar2 < iVar3){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&(Var4[iVar2 /*16*/]));
iVar2++;
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
sVar1=func_325(iParam0);
func_324(iParam0, func_33(iParam0));
MISC::SET_BIT(&uLocal_117, iParam1);
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "ADD_ACTIVE_ORGANISATION");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(sVar1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar0=0;
while (iVar0 < 31){
if(iLocal_301[iVar0]==-1){
iLocal_301[iVar0]=iParam1;
StringCopy(&(Local_302[iVar0 /*16*/]), sVar1, 64);
return;
}
iVar0++;
}}


void func_324(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(iLocal_119[iVar0]==-1){
iLocal_118[iVar0]=iParam1;
iLocal_119[iVar0]=iParam0;
return;
}
iVar0++;
}}

int func_325(int iParam0){
int iVar0;
var uVar1;
if(iParam0==PLAYER::PLAYER_ID()){
iVar0=func_34(iParam0);
if(iVar0 !=func_16()){
uVar1=func_303(&(Global_1895156[iVar0 /*609*/].f_10.f_105));
if(MISC::IS_STRING_NULL_OR_EMPTY(uVar1)){
return func_304(iVar0, 0);
}else{
return iVar1;
}}}
return func_298(iParam0);
}

int func_326(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 31){
if(iLocal_301[iVar0]==bLocal_113){
return 1;
}
iVar0++;
}
return 0;
}

int func_327(){
int iVar0;
iVar0=0;
while (iVar0 < 10){
if(iLocal_119[iVar0]==bLocal_113){
if(!func_15(PLAYER::INT_TO_PLAYERINDEX(bLocal_113))){
return 1;
}else{
return iLocal_118[iVar0] !=func_33(PLAYER::INT_TO_PLAYERINDEX(bLocal_113));
}}
iVar0++;
}
return 0;
}


void func_328(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
if(Global_75986){
func_370();
return;
}elseif(MISC::IS_BIT_SET(uLocal_112, 15)){
func_334();
return;
}
func_332(2, 205, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 205)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(205), -1082130432, -1082130432, -1082130432, -1082130432);
if(iLocal_122==1){
iLocal_122=0;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}elseif(iLocal_122==2){
iLocal_122=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}}
func_332(2, 206, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 206)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(206), -1082130432, -1082130432, -1082130432, -1082130432);
if(iLocal_122==0){
iLocal_122=1;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Source_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}elseif(iLocal_122==1){
iLocal_122=2;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Sell_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}}
if(PAD::IS_USING_CURSOR(2)){
func_332(2, 188, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_332(2, 187, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 187)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 187)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_RELEASE_EVENT", to_float(300), -1082130432, -1082130432, -1082130432, -1082130432);
}
if(PAD::IS_CONTROL_JUST_RELEASED(2, 188)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_RELEASE_EVENT", to_float(301), -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
func_332(2, 188, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 188)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(188), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_332(2, 187, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 187)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(187), -1082130432, -1082130432, -1082130432, -1082130432);
}}
func_332(2, 189, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 189)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(189), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_332(2, 190, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 190)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(190), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_332(2, 201, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_332(2, 202, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
func_330();
}
func_332(2, 203, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 203)){
if(func_329()){
MISC::SET_BIT(&uLocal_112, 15);
}else{
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(203), -1082130432, -1082130432, -1082130432, -1082130432);
}}
func_332(2, 204, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 204)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(204), -1082130432, -1082130432, -1082130432, -1082130432);
}
if(PAD::IS_USING_CURSOR(2)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_MOUSE_INPUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_332(2, 237, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(201), -1082130432, -1082130432, -1082130432, -1082130432);
}
func_332(2, 238, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 238)){
func_330();
}}else{
func_332(2, 195, 1);
func_332(2, 196, 1);
iVar0=PAD::GET_CONTROL_VALUE(2, 195);
iVar1=PAD::GET_CONTROL_VALUE(2, 196);
if(((iVar0 !=127 || bLocal_1015 !=127) || iVar1 !=127) || bLocal_1016 !=127){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_ANALOG_STICK_INPUT");
bLocal_1015=iVar0;
bLocal_1016=iVar1;
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bLocal_1015);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bLocal_1016);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
func_332(2, 197, 1);
func_332(2, 198, 1);
iVar2=PAD::GET_CONTROL_VALUE(2, 197);
iVar3=PAD::GET_CONTROL_VALUE(2, 198);
if(((iVar2 !=127 || bLocal_1017 !=127) || iVar3 !=127) || bLocal_1018 !=127){
bVar4=(PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 242));
if(!bVar4){
bVar4=(PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 241));
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_303, "SET_ANALOG_STICK_INPUT");
bLocal_1017=iVar2;
bLocal_1018=iVar3;
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bLocal_1017);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bLocal_1018);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_451(0, 1);
}}


bool func_329(){
if(func_274()==6){
return 0;
}
return iLocal_305 !=0;
}


void func_330(){
if(!func_437()){
func_451(0, 1);
}
if(iLocal_122==0){
if(!func_331()){
func_451(0, 1);
}}elseif(!func_331()){
iLocal_122=0;
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SHOW_SCREEN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
return;
}
if(func_331()){
func_276();
}else{
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(uLocal_303, "SET_INPUT_EVENT", to_float(202), -1082130432, -1082130432, -1082130432, -1082130432);
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Back", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}


bool func_331(){
return MISC::IS_BIT_SET(uLocal_112, 1);
}


void func_332(int iParam0, int iParam1, int iParam2){
if(!func_333()){
PAD::SET_INPUT_EXCLUSIVE(iParam0, iParam1);
PAD::ENABLE_CONTROL_ACTION(iParam0, iParam1, iParam2);
}}


bool func_333(){
return HUD::GET_PAUSE_MENU_STATE() !=0;
}


void func_334(){
bool bVar0;
int iVar1;
int iVar2;
bVar0=false;
set_warning_message_with_header("HAPP_SKP_W_T", "HAPP_SKP_W_M", 36, 0, true, Global_262145.f_16063, 0, 0, true, 0);
func_332(2, 202, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
MISC::CLEAR_BIT(&uLocal_112, 15);
}
func_332(2, 201, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
if(MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_16063, 0, 1, 0, -1, 0)){
bVar0=true;
}else{
Global_75986=1;
MISC::CLEAR_BIT(&uLocal_112, 15);
}}
if(bVar0){
while (!func_341(&iVar2, &iVar1)){
func_371();
func_340();
wait(0);
}
func_340();
func_371();
func_276();
if(iVar1==2){
MISC::SET_BIT(&uLocal_112, 9);
func_339(15966, 1);
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_5=1;
func_281();
func_336(-457999121, 10, 0);
func_335();
}elseif(iVar1==3){
if(iVar2==1){
MISC::SET_BIT(&uLocal_112, 9);
func_339(15966, 1);
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_5=1;
func_281();
func_336(-457999121, 10, 0);
func_335();
}else{
func_200("HAPP_SKP_F_T", "HAPP_SKP_F_D", "OR_OVRLY_OK", "", 1, 0, -1, 6, -1, 0, 0);
}}
MISC::CLEAR_BIT(&uLocal_112, 15);
}}


void func_335(){
if(func_329()){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_305);
}}


void func_336(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_338(iParam1, iParam2)){
iVar0=func_337();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_337(){
int iVar0;
int iVar1;
iVar0=9;
iVar1=0;
while (iVar1 <=9){
if(Global_2694470[iVar1]==0){
iVar0=iVar1;
iVar1=10;
}
iVar1++;
}
return iVar0;
}

int func_338(int iParam0, var uParam1){
if(Global_1575051){
return 0;
}
if(iParam0==22){
return 1;
}
if((((((((uParam1 || !Global_1575063) || iParam0==3) || iParam0==10) || iParam0==11) || iParam0==27) || iParam0==28) || iParam0==29) || iParam0==30){
return 1;
}else{
return 0;
}
return 1;
}


void func_339(int iParam0, int iParam1){
func_206(iParam0, iParam1, -1);
}


void func_340(){
if(func_273()){
set_warning_message_with_header("BRSCRWTEX", "WEB_PROCESSINGTRANSACTION", 134217728, 0, false, -1, 0, 0, true, 0);
}}

int func_341(var uParam0, var uParam1){
switch (*uParam0){
case 0:
if(func_273()){
if(func_254(uParam1, 0, 1, iLocal_121)){
if(*uParam1==2){
*uParam1=0;
*uParam0=1;
}else{
return 1;
}}}else{
unk_0xED1B407BADA42CEC(Global_262145.f_16063, 0, 1, iLocal_121);
*uParam0=1;
}
break;
case 1:
func_342(3, uParam1, 0);
return *uParam1 !=1;
break;
}
return 0;
}


void func_342(int iParam0, var uParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
if(iParam0 <=0){
if(iParam0==0){
}
*uParam1=3;
return;
}
if(*uParam1 !=0 && *uParam1 !=1){
*uParam1=0;
}
iVar0=func_107(PLAYER::PLAYER_ID());
if(!func_273()){
if(iVar0 >=iParam0){
iVar1=(func_317() + iParam0);
func_368(iVar1);
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3=iVar1;
func_367(18090, 0, -1);
func_364(iParam0, bParam2);
*uParam1=2;
}else{
*uParam1=3;
}}elseif(iVar0 >=iParam0){
if(func_363(iParam0, uParam1)){
if(*uParam1==2){
iVar2=(func_317() + iParam0);
func_368(iVar2);
Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_293.f_3=iVar2;
*uParam1=2;
func_364(iParam0, bParam2);
}elseif(*uParam1==3){
func_343();
*uParam1=3;
}
func_367(18090, 0, -1);
}}else{
*uParam1=3;
}}


void func_343(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
int iVar7;
int iVar8;
int iVar9;
iVar0=func_150(6104, -1);
iVar1=func_362();
iVar2=0;
if(iVar1 > iVar0){
iVar3=0;
while (iVar3 < 50){
iVar4=0;
while (iVar4 < 4){
if(iVar3==func_313(func_361(iVar4), -1)){
if(func_313(func_314(iVar3), -1) !=0){
func_367(func_314(iVar3), 0, -1);
func_367(func_361(iVar3), 100, -1);
Global_1963639[iVar3]=0;
iVar2++;
}}
iVar4++;
}
iVar3++;
}
iVar1=(iVar1 - iVar2);
if(iVar1 > iVar0){
iVar5=(iVar1 - iVar0);
iVar2=0;
iVar3=0;
while (iVar3 < 50){
if(func_313(func_314(iVar3), -1) !=0){
func_367(func_314(iVar3), 0, -1);
func_367(func_361(iVar3), 100, -1);
Global_1963639[iVar3]=0;
iVar2++;
if(iVar2==iVar5){
}else{
iVar3++;
}
iVar1=(iVar1 - iVar2);
Jump @345;
//curOff=254if(iVar1 < iVar0){
bVar6=func_313(18090, -1);
iVar7=(iVar0 - iVar1);
iVar8=func_360(bVar6);
if(bVar6==-1 || bVar6==8){
bVar6=MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
}
iVar9=0;
while (iVar9 < iVar7){
func_348(iVar8);
iVar9++;
}
func_344();
}}


void func_344(){
bool bVar0;
var uVar1;
int iVar2;
int iVar3;
var uVar4;
if(func_346(PLAYER::PLAYER_ID())){
uVar1=Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_8;
if(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", uVar1, 0)==PLAYER::PLAYER_ID()){
Global_1963690=1;
Global_1963638=0;
}else{
bVar0=true;
}}else{
bVar0=true;
}
if(bVar0){
iVar2=0;
while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2))){
iVar3=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
if(func_52(iVar3, 1, 1)){
if(func_346(iVar3)){
uVar4=Global_2657704[iVar3 /*463*/].f_321.f_8;
if(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_MP_HANGAR", uVar4, 0)==iVar3){
if(Global_1963638 > 0){
if(!func_5(&Global_1963701)){
func_345(iVar3, &Global_1963639);
func_4(&Global_1963701, 0, 0);
Global_1963638=(Global_1963638 - 1);
}}
}}}}
iVar2++;
}
bVar0=false;
}}


void func_345(int iParam0, var uParam1){
struct<3> Var0;
int iVar1;
Var0.f_2=50;
Var0.f_0=-1544003568;
Var0.f_1=PLAYER::PLAYER_ID();
iVar1=0;
while (iVar1 < *uParam1){
Var0.f_2[iVar1]=(*uParam1)[iVar1];
iVar1++;
}
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 53, func_266(iParam0));
}

int func_346(int iParam0){
if(func_315()){
if(iParam0 !=func_16()){
if(func_347(iParam0)){
return Global_2657704[iParam0 /*463*/].f_321.f_10==PLAYER::PLAYER_ID();
}}}
return 0;
}

int func_347(int iParam0){
if(iParam0 !=func_16()){
if(func_52(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_51(Global_2657704[iParam0 /*463*/].f_321.f_7)==7;
}}}
return 0;
}


void func_348(int iParam0){
int iVar0;
var uVar1;
int iVar2;
iVar0=func_359();
if(func_358(iVar0)){
uVar1=func_357(iParam0);
iVar2=func_350(uVar1, iVar0);
func_367(func_314(iVar0), func_349(iVar2), -1);
Global_1963639[iVar0]=func_349(iVar2);
}}

int func_349(int iParam0){
switch (iParam0){
case joaat("sm_prop_smug_crate_l_medical"):
return 1;
case joaat("sm_prop_smug_crate_m_medical"):
return 2;
case joaat("sm_prop_smug_crate_l_tobacco"):
return 3;
case joaat("sm_prop_smug_crate_m_tobacco"):
return 4;
case joaat("sm_prop_smug_crate_l_antiques"):
return 5;
case joaat("sm_prop_smug_crate_m_antiques"):
return 6;
case joaat("sm_prop_smug_crate_l_narc"):
return 7;
case joaat("sm_prop_smug_crate_m_narc"):
return 8;
case joaat("sm_prop_smug_crate_l_jewellery"):
return 9;
case joaat("sm_prop_smug_crate_m_jewellery"):
return 10;
case joaat("sm_prop_smug_crate_l_bones"):
return 11;
case joaat("sm_prop_smug_crate_m_bones"):
return 12;
case joaat("sm_prop_smug_crate_l_fake"):
return 13;
case joaat("sm_prop_smug_crate_m_fake"):
return 14;
case joaat("sm_prop_smug_crate_l_hazard"):
return 15;
case joaat("sm_prop_smug_crate_m_hazard"):
return 16;
default:
}
return 0;
}

int func_350(var uParam0, int iParam1){
struct<2> Var0;
var uVar1;
if(iParam1 > 0){
func_356(&Var0, uParam0);
func_354(&uVar1, iParam1);
if(func_352(&Var0, &uVar1, iParam1)){
return func_351(Var0);
}}elseif(iParam1==0){
func_356(&Var0, uParam0);
return func_351(Var0);
}
return 0;
}

int func_351(struct<2> Param0){
switch (Param0.f_0){
case 5:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_medical");
break;
case 0:
return joaat("sm_prop_smug_crate_m_medical");
break;
}
break;
case 7:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_tobacco");
break;
case 0:
return joaat("sm_prop_smug_crate_m_tobacco");
break;
}
break;
case 1:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_antiques");
break;
case 0:
return joaat("sm_prop_smug_crate_m_antiques");
break;
}
break;
case 6:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_narc");
break;
case 0:
return joaat("sm_prop_smug_crate_m_narc");
break;
}
break;
case 4:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_jewellery");
break;
case 0:
return joaat("sm_prop_smug_crate_m_jewellery");
break;
}
break;
case 0:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_bones");
break;
case 0:
return joaat("sm_prop_smug_crate_m_bones");
break;
}
break;
case 3:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_fake");
break;
case 0:
return joaat("sm_prop_smug_crate_m_fake");
break;
}
break;
case 2:
switch (Param0.f_1){
case 1:
return joaat("sm_prop_smug_crate_l_hazard");
break;
case 0:
return joaat("sm_prop_smug_crate_m_hazard");
break;
}
break;
}
return 0;
}

int func_352(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
if(*uParam0 !=*uParam1){
return 1;
}elseif(uParam0->f_1==uParam1->f_1){
iVar0=func_353(uParam0, iParam2);
if(iVar0 <=2){
return 1;
}else{
iVar1=0;
while (uParam0->f_1==uParam1->f_1 && iVar1 < 10){
func_356(uParam0, *uParam0);
iVar1++;
}
return 1;
}}else{
return 1;
}
return 0;
}

int func_353(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<2> Var2;
iVar1=0;
iVar0=iParam1;
while (iVar0 >=(iParam1 - 2)){
if(iVar0 >=0){
func_354(&Var2, iParam1);
if(*uParam0==Var2.f_0 && uParam0->f_1==Var2.f_1){
iVar1++;
}}
iVar0=(iVar0 + -1);
}
return iVar1;
}


void func_354(var uParam0, int iParam1){
int iVar0;
iVar0=func_312(Global_1963639[iParam1]);
*uParam0=func_311(iVar0);
uParam0->f_1=func_355(iVar0);
}

int func_355(int iParam0){
switch (iParam0){
case joaat("sm_prop_smug_crate_l_medical"):
return 1;
case joaat("sm_prop_smug_crate_m_medical"):
return 0;
case joaat("sm_prop_smug_crate_l_tobacco"):
return 1;
case joaat("sm_prop_smug_crate_m_tobacco"):
return 0;
case joaat("sm_prop_smug_crate_l_antiques"):
return 1;
case joaat("sm_prop_smug_crate_m_antiques"):
return 0;
case joaat("sm_prop_smug_crate_l_narc"):
return 1;
case joaat("sm_prop_smug_crate_m_narc"):
return 0;
case joaat("sm_prop_smug_crate_l_jewellery"):
return 1;
case joaat("sm_prop_smug_crate_m_jewellery"):
return 0;
case joaat("sm_prop_smug_crate_l_bones"):
return 1;
case joaat("sm_prop_smug_crate_m_bones"):
return 0;
case joaat("sm_prop_smug_crate_l_fake"):
return 1;
case joaat("sm_prop_smug_crate_m_fake"):
return 0;
case joaat("sm_prop_smug_crate_l_hazard"):
return 1;
case joaat("sm_prop_smug_crate_m_hazard"):
return 0;
default:
}
return 0;
}


void func_356(var uParam0, var uParam1){
var uVar0;
uVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
*uParam0=uParam1;
uParam0->f_1=uVar0;
}

int func_357(int iParam0){
switch (iParam0){
case 5:
return 0;
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
case 11:
return 6;
case 12:
return 7;
default:
}
return -1;
}


bool func_358(int iParam0){
return (iParam0 >=0 && iParam0 < 50);
}

int func_359(){
int iVar0;
iVar0=0;
while (iVar0 < 50){
if(Global_1963639[iVar0]==0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_360(bool bParam0){
switch (bParam0){
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
case 5:
return 10;
case 6:
return 11;
case 7:
return 12;
default:
}
return 0;
}

int func_361(int iParam0){
switch (iParam0){
case 0:
return 18086;
case 1:
return 18087;
case 2:
return 18088;
case 3:
return 18089;
default:
}
return 18086;
}

int func_362(){
int iVar0;
int iVar1;
if(!func_315()){
return 0;
}
iVar0=0;
while (iVar0 < 50){
if(func_313(func_314(iVar0), -1) !=0){
iVar1++;
}
iVar0++;
}
return iVar1;
}


bool func_363(int iParam0, var uParam1){
int iVar0;
if(*uParam1 !=0 && *uParam1 !=1){
*uParam1=0;
}
switch (*uParam1){
case 0:
iVar0=1673236337;
if(func_268(78225582, 69656641, iVar0, -886368739, iParam0, 0, 1, 4, 0, 3)){
*uParam1=1;
}else{
*uParam1=3;
}
if(*uParam1==1 && func_263()){
}else{
*uParam1=3;
func_259(func_272());
}
break;
case 1:
if(func_258(func_272())){
if(func_257(func_272())==2){
*uParam1=2;
func_259(func_272());
}else{
*uParam1=3;
func_259(func_272());
}}
break;
}
return *uParam1 !=1;
}


void func_364(int iParam0, bool bParam1){
var uVar0;
bool bVar1;
int iVar2;
var uVar3[8];
int iVar4;
int iVar5;
int iVar6;
if(iParam0 <=0){
return;
}elseif(iParam0 > 50){
return;
}
iVar4=iParam0;
while (iVar4 > 0){
iVar5=MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
uVar3[iVar5]++;
MISC::SET_BIT(&uVar0, iVar5);
iVar4=(iVar4 - 1);
}
bVar1=false;
while (bVar1 < 8){
if(MISC::IS_BIT_SET(uVar0, bVar1)){
iVar2=0;
while (iVar2 < uVar3[bVar1]){
iVar6=func_360(bVar1);
func_348(iVar6);
iVar2++;
}}
bVar1++;
}
if(bParam1){
func_365(uVar0, &uVar3);
}
func_344();
}


void func_365(var uParam0, var uParam1){
bool bVar0;
int iVar1;
char cVar2[16];
struct<4> Var3;
StringCopy(&cVar2, "HNG_MLR_TCK_", 16);
bVar0=false;
while (bVar0 < 8){
if(MISC::IS_BIT_SET(uParam0, bVar0)){
iVar1++;
}
bVar0++;
}
StringIntConCat(&cVar2, iVar1, 16);
if(iVar1 > 0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar2);
bVar0=false;
while (bVar0 < 8){
if((*uParam1)[bVar0] > 0){
Var3={
func_366(bVar0) 
};
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var3);
HUD::ADD_TEXT_COMPONENT_INTEGER((*uParam1)[bVar0]);
}
bVar0++;
}
HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
}}


struct<4> func_366(bool bParam0){
struct<4> Var0;
StringCopy(&Var0, "INVALID", 16);
switch (bParam0){
case 0:
StringCopy(&Var0, "TTYPE_ANIMAL", 16);
break;
case 1:
StringCopy(&Var0, "TTYPE_ART", 16);
break;
case 2:
StringCopy(&Var0, "TTYPE_CHEMS", 16);
break;
case 3:
StringCopy(&Var0, "TTYPE_GOODS", 16);
break;
case 4:
StringCopy(&Var0, "TTYPE_JEWEL", 16);
break;
case 5:
StringCopy(&Var0, "TTYPE_MEDS", 16);
break;
case 6:
StringCopy(&Var0, "TTYPE_NARC", 16);
break;
case 7:
StringCopy(&Var0, "TTYPE_TOBAC", 16);
break;
case 8:
StringCopy(&Var0, "TTYPE_MIXED", 16);
break;
}
return Var0;
}


void func_367(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_153();
}
if(iParam1 < 0){
iParam1=255;
}
STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}


void func_368(int iParam0){
func_369(6104, iParam0, -1);
if(iParam0==50){
func_206(41987, 1, -1);
}}


void func_369(int iParam0, var uParam1, int iParam2){
func_226(iParam0, uParam1, iParam2, 1);
}


void func_370(){
if(Global_75984){
func_332(2, 201, 1);
func_332(2, 202, 1);
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (PAD::IS_CONTROL_JUST_PRESSED(2, 237) && !HUD::IS_WARNING_MESSAGE_ACTIVE())){
Global_75984=0;
Global_75986=0;
NETWORK::SET_LAST_VIEWED_SHOP_ITEM(Global_75987, Global_75988, 0);
NETWORK::OPEN_COMMERCE_STORE("", "", 4);
while (NETWORK::IS_COMMERCE_STORE_OPEN()){
func_371();
wait(0);
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 202) || (PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !HUD::IS_WARNING_MESSAGE_ACTIVE())){
AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
Global_75984=0;
Global_75986=0;
}}}


void func_371(){
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
func_393();
if(Global_78689){
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
}
HUD::THEFEED_HIDE_THIS_FRAME();
func_332(2, 199, 1);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
func_392(0f, 0f, 1f, 1f, 0, 0, 0, 255);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_303, 255, 255, 255, 255, 0);
if(func_329() && !HUD::IS_WARNING_MESSAGE_ACTIVE()){
HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
func_391(1);
func_390(1);
func_384(&iLocal_305, &uLocal_1006, &uLocal_306, func_389(&uLocal_306));
}
func_382();
func_375(0);
func_372(1);
Global_1969858.f_5=MISC::GET_FRAME_COUNT();
}


void func_372(bool bParam0){
if(bParam0){
func_374();
}
func_373(4, -1);
func_373(6, -1);
func_373(7, -1);
func_373(3, -1);
func_373(1, -1);
func_373(2, -1);
func_373(11, -1);
func_373(13, -1);
func_373(14, -1);
func_373(16, -1);
}


void func_373(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_1654054.f_1047), iParam0);
switch (iParam0){
case 5:
if(iParam1 > -1){
Global_1654054.f_170[iParam1]=1;
}
break;
}}


void func_374(){
Global_2794162.f_4636=0;
}


void func_375(int iParam0){
if(func_381()){
return;
}
if(!Global_20500.f_1==1){
if(func_380(0)){
func_376(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_376(int iParam0){
if(func_381()){
return;
}
if(Global_20704){
if(func_379()){
func_378(1, 1);
}else{
func_378(0, 0);
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
if(!func_377()){
Global_20500.f_1=3;
}}

int func_377(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_378(bool bParam0, bool bParam1){
if(bParam0){
if(func_380(0)){
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


bool func_379(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}

int func_380(int iParam0){
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


bool func_381(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_382(){
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_383();
}


void func_383(){
Global_23251.f_134=1;
}


void func_384(int iParam0, var uParam1, var uParam2, int iParam3){
bool bVar0;
var uVar1;
var uVar2;
int iVar3;
var uVar4;
var uVar5;
if(iParam3==1 || PAD::HAVE_CONTROLS_CHANGED(2)){
*uParam2=0;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
func_388(uParam2);
}
if(Global_1577917 < 2){
func_390(1);
}
if(*uParam2==0){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
*iParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar0=false;
bVar0=false;
while (bVar0 < uParam2->f_693){
if(MISC::IS_BIT_SET(uParam2->f_689, bVar0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
if(!MISC::IS_BIT_SET(uParam2->f_690, bVar0)){
uVar1=uParam2->f_1[bVar0 /*57*/].f_54;
uVar2=uParam2->f_1[bVar0 /*57*/].f_55;
iVar3=uParam2->f_1[bVar0 /*57*/].f_56;
func_387(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(uVar1, uVar2, 1));
if(iVar3 < 363){
func_387(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(uVar1, iVar3, 1));
}}else{
uVar4=uParam2->f_1[bVar0 /*57*/].f_54;
uVar5=uParam2->f_1[bVar0 /*57*/].f_55;
func_387(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(uVar4, uVar5, 1));
}
if(MISC::IS_BIT_SET(uParam2->f_686, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
if(uParam2->f_694==bVar0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
if(MISC::IS_BIT_SET(uParam2->f_687, bVar0)){
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
}
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(MISC::IS_BIT_SET(uParam2->f_688, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_202(&(uParam2->f_1[bVar0 /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
if(MISC::IS_BIT_SET(uParam2->f_691, bVar0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
}
else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
func_387(&(uParam2->f_1[bVar0 /*57*/]));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16))){
func_387(&(uParam2->f_1[bVar0 /*57*/].f_16));
}
if(MISC::IS_BIT_SET(uParam2->f_686, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
if(uParam2->f_694==bVar0){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
}
else{
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
if(MISC::IS_BIT_SET(uParam2->f_687, bVar0)){
HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
}
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(MISC::IS_BIT_SET(uParam2->f_688, bVar0)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_202(&(uParam2->f_1[bVar0 /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar0++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam2=1;
}}
uParam2->f_695=0.05f;
uParam2->f_696=0.045f;
uParam2->f_697=0f;
uParam2->f_698=0f;
if(*uParam2==1){
func_386(*iParam0, uParam1);
}
func_385();
}


void func_385(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}


void func_386(var uParam0, var uParam1){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}


void func_387(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


void func_388(var uParam0){
uParam0->f_692=0;
}

int func_389(var uParam0){
return uParam0->f_692;
}


void func_390(int iParam0){
Global_1577917=iParam0;
}


void func_391(int iParam0){
Global_1655612.f_1163=iParam0;
}


void func_392(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7){
GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}


void func_393(){
func_394(1);
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE()){
PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
}}


void func_394(bool bParam0){
if(bParam0){
if(func_395()){
Global_2683883.f_41=1;
}}else{
Global_2683883.f_41=0;
}}


bool func_395(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 11);
}


void func_396(){
char* sVar0;
char* sVar1;
int iVar2;
int iVar3;
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
PAD::DISABLE_CONTROL_ACTION(2, 189, 1);
PAD::DISABLE_CONTROL_ACTION(2, 190, 1);
PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
iVar2=18;
iVar3=0;
sVar0="BRSCRWTEX";
if(!func_397()){
switch (Global_4540957){
case 0:
sVar1="BRDISTEX";
break;
case 1:
sVar1="BRDISDLC";
break;
}
iVar3="BRSHETEX";
}else{
switch (Global_4540957){
case 0:
sVar1="BRDISTES";
break;
case 1:
sVar1="BRDISDLC";
break;
}
iVar3="BRSHETES";
}
set_warning_message_with_header(sVar0, sVar1, iVar2, iVar3, false, -1, 0, 0, true, 0);
Global_1969858.f_5=MISC::GET_FRAME_COUNT();
}


bool func_397(){
return Global_1575051;
}


void func_398(){
if(!MISC::IS_BIT_SET(uLocal_112, 9)){
if(!func_331()){
if(!func_437()){
MISC::SET_BIT(&uLocal_112, 13);
func_200("HAPP_T1", "HAPP_D1", "HAPP_SU", "", 0, 0, -1, 5, -1, 0, 0);
func_404();
if((!func_402(2) && !MISC::IS_BIT_SET(Global_1950694, 2)) && MISC::IS_BIT_SET(uLocal_112, 13)){
func_401("HAPP_HELP_3", 14000);
MISC::SET_BIT(&Global_1950694, 2);
func_399(2);
}}else{
MISC::SET_BIT(&uLocal_112, 9);
}}}}


void func_399(int iParam0){
switch (iParam0){
case 0:
func_400(15967);
break;
case 1:
func_400(15970);
break;
case 2:
func_400(15973);
break;
case 3:
func_400(15976);
break;
case 4:
func_400(15979);
break;
case 5:
func_400(15982);
break;
case 6:
func_400(15985);
break;
case 7:
func_400(15988);
break;
case 8:
func_400(15991);
break;
}}


void func_400(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 3){
iVar1=(iParam0 + iVar0);
if(!func_204(iVar1, -1)){
func_206(iVar1, 1, -1);
return;
}
iVar0++;
}}


void func_401(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_402(int iParam0){
switch (iParam0){
case 0:
return func_403(15967);
case 1:
return func_403(15970);
case 2:
return func_403(15973);
case 3:
return func_403(15976);
case 4:
return func_403(15979);
case 5:
return func_403(15982);
case 6:
return func_403(15985);
case 7:
return func_403(15988);
case 8:
return func_403(15991);
default:
}
return 0;
}

int func_403(int iParam0){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 3){
iVar1=(iParam0 + iVar0);
if(!func_204(iVar1, -1)){
return 0;
}
iVar0++;
}
return 1;
}


void func_404(){
func_405(2, 193, "HAPP_SU_B", &uLocal_306, 0, 363);
}


void func_405(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5){
int iVar0;
if(uParam3->f_693 >=12){
return;
}
iVar0=uParam3->f_693;
StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
MISC::SET_BIT(&(uParam3->f_689), iVar0);
uParam3->f_1[iVar0 /*57*/].f_54=iParam0;
uParam3->f_1[iVar0 /*57*/].f_55=iParam1;
uParam3->f_1[iVar0 /*57*/].f_56=iParam5;
if(bParam4){
MISC::SET_BIT(&(uParam3->f_691), iVar0);
if(iParam5 < 363){
}}
uParam3->f_693++;
}


void func_406(){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
iVar2=8 + 1;
if(!MISC::IS_BIT_SET(uLocal_112, 7) && !func_411()){
iVar1=0;
while (iVar1 < iVar2){
iVar3=iVar1;
if(func_410(iVar3)){
Var0={
func_409(iVar3) 
};
iLocal_115=func_408(iVar3);
MISC::SET_BIT(&Global_1950694, iVar1);
func_399(iVar3);
}else{
iVar1++;
}}}
if(!MISC::IS_BIT_SET(uLocal_112, 7) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_401(&Var0, iLocal_115);
MISC::SET_BIT(&uLocal_112, 7);
}elseif(MISC::IS_BIT_SET(uLocal_112, 7)){
if(!func_5(&uLocal_131)){
func_4(&uLocal_131, 0, 0);
}elseif(func_3(&uLocal_131, iLocal_115, 0)){
MISC::CLEAR_BIT(&uLocal_112, 7);
iLocal_115=0;
func_199(&uLocal_131);
if(func_407()){
MISC::SET_BIT(&uLocal_112, 8);
}}}}

int func_407(){
if(((((((func_402(0) && func_402(1)) && func_402(2)) && func_402(3)) && func_402(4)) && func_402(6)) && func_402(7)) && func_402(8)){
return 1;
}
return 0;
}

int func_408(int iParam0){
switch (iParam0){
case 0:
return 14000;
case 1:
return 15000;
case 2:
return 14000;
case 3:
return 14500;
case 4:
return 14000;
case 5:
return 14000;
case 6:
return 14000;
case 7:
return 15000;
case 8:
return 14500;
default:
}
return 0;
}


struct<4> func_409(int iParam0){
struct<4> Var0;
StringCopy(&Var0, "", 16);
switch (iParam0){
case 0:
StringCopy(&Var0, "HAPP_HELP_1", 16);
break;
case 1:
StringCopy(&Var0, "HAPP_HELP_2", 16);
break;
case 2:
StringCopy(&Var0, "HAPP_HELP_3", 16);
break;
case 3:
StringCopy(&Var0, "HAPP_HELP_4", 16);
break;
case 4:
StringCopy(&Var0, "HAPP_HELP_5", 16);
break;
case 5:
StringCopy(&Var0, "HAPP_HELP_6", 16);
break;
case 6:
StringCopy(&Var0, "HAPP_HELP_7", 16);
break;
case 7:
StringCopy(&Var0, "HAPP_HELP_8", 16);
break;
case 8:
StringCopy(&Var0, "HAPP_HELP_9", 16);
break;
}
return Var0;
}

int func_410(int iParam0){
bool bVar0;
bVar0=iParam0;
if(!MISC::IS_BIT_SET(uLocal_112, 9) && iParam0 !=2){
return 0;
}
switch (iParam0){
case 0:
if((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && MISC::IS_BIT_SET(uLocal_112, 11)){
return 1;
}
break;
case 1:
if((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && MISC::IS_BIT_SET(uLocal_112, 12)){
return 1;
}
break;
case 2:
if((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && MISC::IS_BIT_SET(uLocal_112, 13)){
return 1;
}
break;
case 3:
if(((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && MISC::IS_BIT_SET(uLocal_112, 9)) && iLocal_122==0){
return 1;
}
break;
case 4:
if((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && iLocal_122==1){
return 1;
}
break;
case 5:
if(((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && iLocal_122==1) && (MISC::IS_BIT_SET(Global_1950694, 4) || func_402(4))){
return 1;
}
break;
case 6:
if((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && iLocal_122==2){
return 1;
}
break;
case 7:
if(((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && iLocal_122==2) && (MISC::IS_BIT_SET(Global_1950694, 6) || func_402(6))){
return 1;
}
break;
case 8:
if(((((!func_402(iParam0) && !MISC::IS_BIT_SET(Global_1950694, bVar0)) && MISC::IS_BIT_SET(uLocal_112, 14)) && iLocal_122==2) && (MISC::IS_BIT_SET(Global_1950694, 6) || func_402(6))) && (MISC::IS_BIT_SET(Global_1950694, 7) || func_402(7))){
return 1;
}
break;
}
return 0;
}

int func_411(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_412(){
if(iLocal_114 !=-1){
func_413(iLocal_114);
}}


void func_413(int iParam0){
if(func_414(&uLocal_135, "SMGCAUD", func_434(iParam0), 8, 0, 0, 0)){
iLocal_114=-1;
}}


bool func_414(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_433(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7){
if(iParam3 < 12){
iParam3=7;
}}
Global_21852=0;
Global_21854=0;
Global_21859=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_2883585=0;
return func_415(sParam2, iParam3, 0);
}

int func_415(char* sParam0, int iParam1, bool bParam2){
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam1 > Global_21847){
if(Global_21852==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
Global_21856=0;
Global_21855=0;
Global_20499=0;
}else{
func_432();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_431(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_430();
Global_21134={
Global_21299 
};
Global_21851=Global_21852;
Global_21858=Global_21859;
Global_2883586=Global_2883585;
Global_21860={
Global_21876 
};
Global_21853=Global_21854;
Global_22835=Global_22836;
Global_22843={
Global_22849 
};
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_22841=Global_22842;
Global_21464.f_370=Global_22834;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21841=Global_21842;
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, false);
if(bParam2){
func_422();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20500.f_1 > 3){
return 0;
}}
if(Global_20466==1){
return 0;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())){
return 0;
}
if(func_421()){
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
if(!Global_78689){
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
if(func_377()){
return 0;
}else{
switch (Global_20500.f_1){
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
if(MISC::IS_BIT_SET(Global_8370, 9)){
return 0;
}}
func_420();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_419();
func_416();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_432();
}
return 0;
}


void func_416(){
if(!func_417()){
return;
}
if(Global_21851){
MemCopy(&(Global_1978312.f_1),{
Global_21464
}
, 4);
Global_1978312=Global_7685;
Global_1978312.f_6=Global_21855;
}}

int func_417(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_16()){
return 0;
}
if(func_418(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_418(int iParam0){
return func_14(iParam0, 20);
}


void func_419(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_420(){
Global_21898=Global_21897;
Global_21892=Global_21893;
Global_21939={
Global_21927 
};
Global_21945={
Global_21933 
};
Global_21900=Global_21899;
Global_21969={
Global_21951 
};
Global_21975={
Global_21957 
};
Global_21981={
Global_21963 
};
Global_21987={
Global_21993 
};
Global_7685=Global_7686;
Global_7687=Global_7688;
Global_21856=Global_21857;
Global_21858=Global_21859;
Global_21860={
Global_21876 
};
Global_21849=Global_21850;
Global_22861=0;
Global_21894=0;
Global_21895=0;
MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_421(){
int iVar0;
int iVar1;
if(Global_78689){
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


void func_422(){
if(func_429(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[0 /*29*/]){
Global_20500=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[1 /*29*/]){
Global_20500=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[2 /*29*/]){
Global_20500=2;
}else{
Global_20500=0;
}}}else{
Global_20500=func_423();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__423(){
func_424();
return Global_113810.f_2366.f_539.f_4321;
}


void func_424(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_427(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_426(PLAYER::PLAYER_PED_ID());
if(func_425(iVar0) && (!func_429(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_425(Global_113810.f_2366.f_539.f_4321)){
Global_113810.f_2366.f_539.f_4322=Global_113810.f_2366.f_539.f_4321;
}
Global_113810.f_2366.f_539.f_4323=iVar0;
Global_113810.f_2366.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113810.f_2366.f_539.f_4321 !=145){
Global_113810.f_2366.f_539.f_4323=Global_113810.f_2366.f_539.f_4321;
}
return;
}}
Global_113810.f_2366.f_539.f_4321=145;
}


bool func_425(int iParam0){
return iParam0 < 3;
}

int func_426(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_427(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_427(int iParam0){
if(func_425(iParam0)){
return func_428(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__428(int iParam0){
return Global_2058[iParam0 /*29*/];
}


bool func_429(int iParam0){
return Global_43377==iParam0;
}


void func_430(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
Global_21134[iVar0 /*10*/]=0;
StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
Global_21134[iVar0 /*10*/].f_7=0;
Global_21134[iVar0 /*10*/].f_8=0;
iVar0++;
}
Global_21134.f_161=-99;
Global_21134.f_162={
0f, 0f, 0f 
};
}


bool func_431(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_432(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1==9) || Global_20499==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
Global_20500.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21845=6;
return;
}}


void func_433(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=uParam5;
if(iParam3==0){
Global_22832=1;
Global_22830=0;
}else{
Global_22832=0;
Global_22830=1;
}
if(iParam4==0){
Global_22833=1;
Global_22831=0;
}else{
Global_22833=0;
Global_22831=1;
}}


char* func_434(int iParam0){
switch (iParam0){
case 0:
return "SMGC_LAPTUT1";
case 1:
return "SMGC_LAPTUT2";
case 2:
return "SMGC_LAPTUT3";
default:
}
return "SMGC_LAPTUT1";
}


void func_435(){
bool bVar0;
if(!MISC::IS_BIT_SET(uLocal_112, 4) && !func_411()){
if(iLocal_122==0){
if(!func_204(15963, -1)){
bVar0=true;
iLocal_115=9000;
iLocal_114=0;
func_206(15963, 1, -1);
}}elseif(iLocal_122==2){
if(!func_204(15964, -1)){
bVar0=true;
iLocal_115=9000;
iLocal_114=2;
func_206(15964, 1, -1);
}}elseif(iLocal_122==1){
if(!func_204(15965, -1)){
bVar0=true;
iLocal_115=9000;
iLocal_114=1;
func_206(15965, 1, -1);
}}}
if(bVar0){
MISC::SET_BIT(&uLocal_112, 4);
}elseif(MISC::IS_BIT_SET(uLocal_112, 4)){
if(!func_5(&uLocal_127)){
func_4(&uLocal_127, 0, 0);
}elseif(func_3(&uLocal_127, iLocal_115, 0)){
MISC::CLEAR_BIT(&uLocal_112, 4);
iLocal_115=0;
func_199(&uLocal_127);
if(func_436()){
MISC::SET_BIT(&uLocal_112, 5);
}}}}

int func_436(){
if((func_204(15963, -1) && func_204(15964, -1)) && func_204(15965, -1)){
return 1;
}
return 0;
}


bool func_437(){
return func_204(15966, -1);
}


void func_438(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
func_451(0, 1);
}elseif(func_333()){
func_451(0, 1);
}elseif(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
func_451(0, 1);
}}


bool func_439(){
return Global_75816;
}


void func_440(){
func_438();
uLocal_303=GRAPHICS::REQUEST_SCALEFORM_MOVIE("HANGAR_CARGO");
if(!func_437()){
iLocal_305=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
}
while (!func_450()){
wait(0);
}
func_376(1);
func_448(1);
func_447();
HUD::THEFEED_PAUSE();
func_446(1);
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3) || Global_2794162.f_1954){
if(Global_2794162.f_1954){
}
func_451(0, 1);
}
func_446(1);
iLocal_121=func_316();
func_281();
func_443();
if(func_407()){
MISC::SET_BIT(&uLocal_112, 8);
}
func_442();
if(func_437()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Show_Overview_Menu", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}
if(MISC::IS_PC_VERSION()){
func_441(1, 1, 1, 1);
}
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene")){
AUDIO::START_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
}}

int func_441(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_442(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 31){
iLocal_301[iVar0]=-1;
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 10){
iLocal_119[iVar0]=-1;
iLocal_118[iVar0]=0;
iVar0++;
}}


void func_443(){
if(func_436()){
MISC::SET_BIT(&uLocal_112, 5);
}else{
MISC::SET_BIT(&uLocal_112, 4);
iLocal_115=800;
func_445(1);
func_444(&uLocal_135, 2, 0, "NERVOUSRON", 0, 1);
}}


void func_444(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
if((uParam0[iParam1 /*10*/])->f_7==1){}
(*uParam0)[iParam1 /*10*/]=iParam2;
StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
(uParam0[iParam1 /*10*/])->f_7=1;
(uParam0[iParam1 /*10*/])->f_8=iParam4;
(uParam0[iParam1 /*10*/])->f_9=iParam5;
if(!Global_78689){
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


void func_445(bool bParam0){
if(bParam0){
Global_1835499=1;
}else{
Global_1835499=0;
}}


void func_446(int iParam0){
if(Global_75816 !=iParam0){
Global_75816=iParam0;
}}


void func_447(){
Global_1574747=1;
StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
Global_1574747.f_9=MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}


void func_448(bool bParam0){
if(bParam0){
func_449();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_380(0)){
func_376(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_449(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}

int func_450(){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_303)){
return 0;
}
if(func_329()){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_305)){
return 0;
}}
return 1;
}


void func_451(int iParam0, bool bParam1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_303);
func_335();
func_446(iParam0);
func_448(0);
func_452();
AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
if(bParam1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Exit", "GTAO_SMG_Hangar_Computer_Sounds", 1);
}
if(MISC::IS_PC_VERSION()){
func_441(0, 1, 1, 1);
}
HUD::THEFEED_RESUME();
if(AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Computer_Screen_Active_Scene")){
AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
}
Global_1969858.f_5=-1;
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_452(){
if(!Global_1574747){
return;
}
func_453();
}


void func_453(){
Global_1574747=0;
StringCopy(&(Global_1574747.f_1), "", 32);
Global_1574747.f_9=0;
}