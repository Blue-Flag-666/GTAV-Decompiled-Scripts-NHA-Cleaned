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
int iLocal_48=0;
struct<110> Local_49={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
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
var uLocal_102=3;
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
var uLocal_199=16;
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
var uLocal_364=16;
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
var uLocal_530=3;
var uLocal_531=0;
var uLocal_532=0;
var uLocal_533=0;
var uLocal_534=0;
var uLocal_535=0;
var uLocal_536=1092616192;
var uLocal_537=1101004800;
var uLocal_538=0;
var uLocal_539=0;
var uLocal_540=0;
var uLocal_541=0;
var uLocal_542=0;
var uLocal_543=0;
var uLocal_544=0;
var uLocal_545=0;
var uLocal_546=3;
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
var uLocal_594=5;
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
var uLocal_611=5;
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
var uLocal_671=3;
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
var uLocal_690=13;
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
var uLocal_719=4;
var uLocal_720=0;
var uLocal_721=0;
var uLocal_722=0;
var uLocal_723=0;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=4;
var uLocal_728=0;
var uLocal_729=0;
var uLocal_730=0;
var uLocal_731=0;
var uLocal_732=4;
var uLocal_733=0;
var uLocal_734=0;
var uLocal_735=0;
var uLocal_736=0;
var uLocal_737=4;
var uLocal_738=0;
var uLocal_739=0;
var uLocal_740=0;
var uLocal_741=0;
var uLocal_742=0;
var uLocal_743=4;
var uLocal_744=0;
var uLocal_745=0;
var uLocal_746=0;
var uLocal_747=0;
var uLocal_748=4;
var uLocal_749=0;
var uLocal_750=0;
var uLocal_751=0;
var uLocal_752=0;
var uLocal_753=4;
var uLocal_754=0;
var uLocal_755=0;
var uLocal_756=0;
var uLocal_757=0;
var uLocal_758=0;
var uLocal_759=0;
var uLocal_760=0;
var uLocal_761=0;
var uLocal_762=0;
var uLocal_763=8;
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
int iLocal_800=0;
int iLocal_801=0;
int iLocal_802[8]={
0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_803=0;
var uLocal_804=16;
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
int iLocal_969=0;
int iLocal_970=0;
struct<3> Local_971={
0, 0, 0 
};
int iLocal_972=0;
int iLocal_973=0;
int iLocal_974=0;
int iLocal_975=0;
int iLocal_976=0;
int iLocal_977=0;
int iLocal_978=0;
int iLocal_979=0;
bool bLocal_980=0;
int iLocal_981=0;
int iLocal_982=0;
int iLocal_983=0;
struct<3> Local_984={
0, 0, 0 
};
struct<3> Local_985={
0, 0, 0 
};
struct<2> Local_986={
0, 0 
};
var uLocal_987=0;
struct<2> Local_988={
0, 0 
};
var uLocal_989=0;
int iLocal_990=0;
char[] cLocal_991[8]=0;
var uLocal_992=0;
var uLocal_993=0;
var uLocal_994=0;
char[] cLocal_995[8]=0;
var uLocal_996=0;
var uLocal_997=0;
var uLocal_998=0;
bool bLocal_999=0;
int iLocal_1000=0;
char cLocal_1001[48]="";
int iLocal_1002=0;
int iLocal_1003=0;
int iLocal_1004=0;
var uLocal_1005=0;
#endregion

void __EntryFunction__(){
int iVar0;
int iVar1;
int iVar2;
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
iLocal_48=joaat("p_amb_phone_01");
Local_971={
693.1158f, -1012.418f, 21.72802f 
};
Local_984={
692.8695f, -998.7867f, 22.3201f 
};
Local_985={
693.3784f, -1025.671f, 21.506f 
};
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_111();
func_109();
func_107();
}
func_99();
MISC::SET_MISSION_FLAG(1);
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheAgencyHeistPrep1", 0);
if(!iLocal_974){
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_971, 200f, 200f, 200f, 0, 1, 0) && !CAM::IS_SPHERE_VISIBLE(Local_971, 50f)){
MISC::CLEAR_AREA(Local_971, 50f, 1, 0, 0, 0);
iLocal_974=1;
}}elseif(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_971, 200f, 200f, 200f, 0, 1, 0)){
iLocal_974=0;
}
if(!iLocal_979){
if(Global_97178.f_358==MISC::GET_HASH_KEY("AHP1_TRUCKCALLED") || Global_97108){
func_98(543);
Global_97178.f_358=0;
iLocal_979=1;
}}
func_97();
iVar0=0;
while (iVar0 <=7){
if((ENTITY::DOES_ENTITY_EXIST(iLocal_802[iVar0]) && !PED::IS_PED_INJURED(iLocal_802[iVar0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(iLocal_802[iVar0], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f){
PED::SET_PED_KEEP_TASK(iLocal_802[iVar0], 1);
TASK::TASK_SMART_FLEE_PED(iLocal_802[iVar0], PLAYER::PLAYER_PED_ID(), 300f, 20000, 1, 0);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_802[iVar0]));
}}
iVar0++;
}
if(iLocal_1004 < 8 && iLocal_969 >=0){
func_95();
}
switch (iLocal_969){
case -1:
iVar1=0;
while (iVar1 < iLocal_802){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_802[iVar1])){
if(ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))){
iVar2=PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
if((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0) && vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar2, 1)) < 30f) && VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("firetruk"))){
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_803);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_803, joaat("player"));
PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
}
}}
iVar1++;
}
if(func_94()){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 15f, 4);
AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
iLocal_969++;
}
break;
case 0:
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
func_94();
if((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())==joaat("firetruk")){
iLocal_800=PLAYER::GET_PLAYERS_LAST_VEHICLE();
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_800, 1, 1);
}}else{
func_45();
if(!iLocal_975 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
func_44(iLocal_800, -1);
func_43(iLocal_800, -1);
func_42(541, 0);
iLocal_975=1;
}
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_971) < pow(100f, 2f)){
PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
}
func_94();
if(bLocal_980){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, 0)){
func_36(iLocal_801);
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801) && ENTITY::IS_ENTITY_AT_COORD(iLocal_800, Local_971, Global_19, 1, 1, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_798)){
HUD::REMOVE_BLIP(&uLocal_798);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
iLocal_969++;
}
}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
func_36(iLocal_800);
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800) && ENTITY::IS_ENTITY_AT_COORD(iLocal_800, Local_971, Global_19, 1, 1, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_798)){
HUD::REMOVE_BLIP(&uLocal_798);
}
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
iLocal_969++;
}}}
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
iLocal_969=100;
}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
func_14("AHP_LOSTTRUCK");
}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
if((vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_800, 1)) > 22500f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_800)) || vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_800, 1)) > 90000f){
func_14("AHP_LOSTTRUCK");
}}else{
func_14("AHP_DEADTRUCK");
}
break;
case 1:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
if(func_12(iLocal_800, 1093140480, 1, 1056964608, 0, 1, 0)){
if(!iLocal_978){
func_11("AHP_GETOUT", 7500, 1);
iLocal_978=1;
}
AUDIO::TRIGGER_MUSIC_EVENT("AHP1_STOP");
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
iLocal_969++;
}}
break;
case 2:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
if(!ENTITY::IS_ENTITY_AT_COORD(iLocal_800, Local_971, Global_19 + Vector(2f, 2f, 2f), 1, 1, 0)){
iLocal_969=0;
}elseif(bLocal_980){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_801)){
if(!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_801, iLocal_800)){
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_800, 0, 0);
if(VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_800)){
VEHICLE::SET_VEHICLE_SIREN(iLocal_800, 0);
}
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_800, 2);
HUD::CLEAR_PRINTS();
settimera(0);
iLocal_969++;
}else{
VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_801, iLocal_800);
}
}}elseif(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, 0)){
if(VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_800)){
VEHICLE::SET_VEHICLE_SIREN(iLocal_800, 0);
}
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_800, 2);
HUD::CLEAR_PRINTS();
settimera(0);
iLocal_969++;
}}
break;
case 3:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
if(timera() > 3000){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
func_6();
}}
break;
case 100:
if(HUD::DOES_BLIP_EXIST(uLocal_798)){
HUD::REMOVE_BLIP(&uLocal_798);
}
if(!func_5(13)){
func_4(13, 1);
}
iLocal_969++;
break;
case 101:
func_94();
if(bLocal_980){
func_36(iLocal_801);
}else{
func_36(iLocal_800);
}
if(!iLocal_981){
if((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, 0)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801, 0))){
if((ENTITY::IS_ENTITY_IN_ZONE(PLAYER::PLAYER_PED_ID(), "DAVIS") && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(func_3()){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
}else{
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
}
iLocal_981=1;
}}}
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
func_14("AHP_LOSTTRUCK");
}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
HUD::CLEAR_PRINTS();
iLocal_969=0;
}elseif(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800)){
if(!iLocal_977){
func_11("AHP_LOSECOPS", 7500, 1);
iLocal_977=1;
iLocal_970=MISC::GET_GAME_TIMER();
}}elseif((iLocal_977 && (MISC::GET_GAME_TIMER() - iLocal_970) < 7500) && HUD::IS_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_PRINTS();
}
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_800, 1)) > 22500f){
func_14("AHP_LOSTTRUCK");
}}else{
func_14("AHP_DEADTRUCK");
}
break;
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
if(!func_2(iLocal_800)){
func_1(iLocal_800, 0);
}}
wait(0);
}}


void func_1(int iParam0, int iParam1){
Global_100681.f_22[iParam1]=iParam0;
}

int func_2(int iParam0){
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

int func_3(){
if(MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0)){
return 1;
}
return 0;
}


void func_4(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113648.f_9087.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113648.f_9087.f_99.f_58[iParam0]=iParam1;
}

int func_5(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}


void func_6(){
CAM::SET_WIDESCREEN_BORDERS(0, 0);
func_7(0, 0);
func_107();
}


void func_7(bool bParam0, int iParam1){
int iVar0;
int iVar1;
var uVar2;
if(!Global_63364){
Global_63364=iParam1;
}
if(bParam0){
if((func_10(0) && Global_78805.f_1==1) && func_9(Global_78805)){
}else{
Global_63362=1;
}}
if(Global_113648.f_9087 || func_10(0)){
iVar0=func_8();
iVar1=Global_91433[iVar0 /*5*/];
uVar2=Global_78828.f_109[iVar1 /*4*/];
if(iVar0==-1){
if(Global_113648.f_9087){
}
return;
}
if(MISC::IS_BIT_SET(Global_91433[iVar0 /*5*/].f_1, 4)){
return;
}
if(MISC::IS_BIT_SET(Global_91433[iVar0 /*5*/].f_1, 5)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 4);
MISC::SET_BIT(&Global_78807, true);
Global_78823=uVar2;
Global_78824=MISC::GET_GAME_TIMER();
}}

int func_8(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(MISC::IS_BIT_SET(Global_91433[iVar0 /*5*/].f_1, 2)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_9(int iParam0){
switch (iParam0){
case 71:
return 1;
break;
case 86:
return 1;
break;
case 91:
return 1;
break;
default:
return 0;
break;
}
return 0;
}

int func_10(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78807, 0);
}


void func_11(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_12(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_13(iParam0);
if((MISC::GET_GAME_TIMER() - Global_29) > 500){
VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, iParam1, iParam2, iParam4);
}
Global_29=MISC::GET_GAME_TIMER();
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <=fParam3){
return 1;
}}
return 0;
}


void func_13(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}


void func_14(char* sParam0){
int iVar0;
CAM::SET_WIDESCREEN_BORDERS(0, 0);
func_20(sParam0);
while (!func_19()){
wait(0);
}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, 0)){
VEHICLE::DELETE_VEHICLE(&iLocal_800);
}}
iVar0=0;
while (iVar0 < iLocal_802){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_802[iVar0])){
PED::DELETE_PED(&(iLocal_802[iVar0]));
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_97178.f_9){
if(ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[iVar0])){
PED::DELETE_PED(&(Global_97178.f_9[iVar0]));
}
iVar0++;
}
MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 1, 0, 0);
AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
if(func_18()){
func_111();
}elseif(func_17()){
func_15(229.1676f, -1614.979f, 28.2892f, 142.5156f);
}
func_107();
}


void func_15(struct<3> Param0, float fParam1){
if(func_16(Global_78799, 0f, 0f, 0f, 0)){
Global_78799={
Param0 
};
Global_78802=fParam1;
}}


bool func_16(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_17(){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.6765f, -1668.942f, 25.46082f, 185.6446f, -1635.836f, 39.29184f, 57.75f, 0, 1, 0)){
return 1;
}}}
return 0;
}

int func_18(){
if(Global_100681==7){
return 1;
}
return 0;
}

int func_19(){
if(Global_3){
return 1;
}
if(Global_100681==7 || Global_100681==8){
return 1;
}
return 0;
}


void func_20(char* sParam0){
func_35(sParam0);
func_21(0);
}


void func_21(int iParam0){
int iVar0;
if(Global_113648.f_9087 || func_10(0)){
iVar0=func_8();
if(!func_22(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
Global_100717=iParam0;
}}

int func_22(int iParam0){
int iVar0;
int iVar1;
func_27();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91433[iParam0 /*5*/];
iVar1=Global_78828.f_109[iVar0 /*4*/];
func_26(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_23(&(Global_113648.f_2365.f_539), iVar1);
if(Global_94856==Global_100718){
Global_113648.f_9087.f_330[iVar1 /*6*/].f_1++;
}
if(!MISC::IS_BIT_SET(Global_91469[iVar1 /*34*/].f_15, 1)){
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
}}
Global_113648.f_9087.f_330[iVar1 /*6*/].f_2++;
Global_94856=Global_100718;
if(iParam0==-1){
if(Global_113648.f_9087){
}
return 0;
}
if(MISC::IS_BIT_SET(Global_91433[iParam0 /*5*/].f_1, 4)){
return 0;
}
if(MISC::IS_BIT_SET(Global_91433[iParam0 /*5*/].f_1, 5)){
return 0;
}
return 1;
}


void func_23(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<3> Var2;
float fVar3;
if(iParam1==94){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=Global_113648.f_18535[iVar0];
if((((iVar1==8 || iVar1==9) || iVar1==10) || (((iVar1==11 || iVar1==34) || iVar1==72) || iVar1==73)) && !MISC::IS_BIT_SET(Global_113648.f_9087.f_99.f_219[0], 9)){
}else{
Var2={
0f, 0f, 0f 
};
fVar3=0f;
if(!func_25(Global_113648.f_18535[iVar0], &Var2, &fVar3)){
Global_113648.f_18535[iVar0]=318;
func_24(&(uParam0->f_2296[iVar0]));
uParam0->f_2300[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2310[iVar0]=0f;
uParam0->f_2314[iVar0]=0;
uParam0->f_2318[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iVar0]=0;
Global_98071[iVar0 /*29*/]={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_9=0f;
Global_98071[iVar0 /*29*/].f_12=0f;
Global_98071[iVar0 /*29*/].f_3={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_10=0f;
Global_98071[iVar0 /*29*/].f_13=0f;
Global_98071[iVar0 /*29*/].f_6={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_11=0f;
Global_98071[iVar0 /*29*/].f_14=0f;
Global_98071[iVar0 /*29*/].f_17={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_26=0f;
Global_98071[iVar0 /*29*/].f_20={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_27=0f;
Global_98071[iVar0 /*29*/].f_23={
0f, 0f, 0f 
};
Global_98071[iVar0 /*29*/].f_28=0f;
}}
iVar0++;
}}


void func_24(var uParam0){
*uParam0=-15;
}

int func_25(int iParam0, var uParam1, float fParam2){
switch (iParam0){
case 11:
*uParam1={
115.1569f, -1286.684f, 28.2613f 
};
*fParam2=111f;
return 1;
break;
case 8:
*uParam1={
-90.0089f, -1324.195f, 28.3203f 
};
*fParam2=194.1887f;
return 1;
break;
case 9:
return func_25(8, uParam1, fParam2);
break;
case 10:
return func_25(8, uParam1, fParam2);
break;
case 13:
*uParam1={
-807.2979f, -48.4004f, 36.8173f 
};
*fParam2=201.6328f;
return 1;
break;
case 14:
*uParam1={
1432.34f, -1887.383f, 70.5768f 
};
*fParam2=350.0509f;
return 1;
break;
case 15:
*uParam1={
1666.204f, 1967.25f, 143.3213f 
};
*fParam2=0.7896f;
return 1;
break;
case 12:
*uParam1={
-1440.22f, -127.02f, 50f 
};
*fParam2=42f;
return 1;
break;
case 16:
*uParam1={
135.055f, -1759.64f, 27.8957f 
};
*fParam2=-129f;
return 1;
break;
case 17:
*uParam1={
687.6992f, -1744.03f, 28.3624f 
};
*fParam2=267.1409f;
return 1;
break;
case 18:
*uParam1={
56.5117f, -744.6122f, 43.1356f 
};
*fParam2=340.0526f;
return 1;
break;
case 19:
*uParam1={
506.485f, -1884.967f, 24.764f 
};
*fParam2=22.9566f;
return 1;
break;
case 20:
*uParam1={
1555.958f, 953.6136f, 77.2063f 
};
*fParam2=152.8118f;
return 1;
break;
case 21:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 22:
*uParam1={
220.72f, -64.4177f, 68.2922f 
};
*fParam2=(250.4535f - 360f);
return 1;
break;
case 74:
*uParam1={
2048.07f, 3840.84f, 34.2238f 
};
*fParam2=119.603f;
return 1;
break;
case 23:
*uParam1={
-464.22f, -1592.98f, 38.73f 
};
*fParam2=168f;
return 1;
break;
case 24:
*uParam1={
(744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f 
};
*fParam2=51.7279f;
return 1;
break;
case 67:
*uParam1={
-9f, 508.1f, 173.6278f 
};
*fParam2=151.2504f;
return 1;
break;
case 25:
*uParam1={
72.2278f, -1464.68f, 28.2915f 
};
*fParam2=156.8827f;
return 1;
break;
case 27:
*uParam1={
763f, -906f, 24.2312f 
};
*fParam2=7.2736f;
return 1;
break;
case 26:
*uParam1={
257.9167f, -1120.786f, 28.3684f 
};
*fParam2=97.2736f;
return 1;
break;
case 28:
*uParam1={
422.5858f, -978.6332f, 69.7073f 
};
*fParam2=4f;
return 1;
break;
case 29:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 30:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 31:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 32:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 33:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 34:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 35:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 36:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 37:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 58:
*uParam1={
294.8521f, 882.9366f, 197.8527f 
};
*fParam2=162.693f;
return 1;
break;
case 59:
*uParam1={
-1771.802f, 794.4316f, 138.4211f 
};
*fParam2=128.9946f;
return 1;
break;
case 60:
*uParam1={
1495.595f, -1848.821f, 70.2075f 
};
*fParam2=32.2721f;
return 1;
break;
case 38:
*uParam1={
2897.554f, 4032.241f, 50.1419f 
};
*fParam2=192.8091f;
return 1;
break;
case 39:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*fParam2=32f;
return 1;
break;
case 40:
*uParam1={
1973.355f, 3818.204f, 32.005f 
};
*fParam2=32f;
return 1;
break;
case 41:
*uParam1={
1397f, 3725.8f, 33.0673f 
};
*fParam2=-3.7534f;
return 1;
break;
case 42:
*uParam1={
Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) 
};
*fParam2=90f;
return 1;
break;
case 43:
*uParam1={
709.0244f, -2916.479f, 5.0589f 
};
*fParam2=355.326f;
return 1;
break;
case 44:
*uParam1={
643.5248f, -2917.325f, 5.1337f 
};
*fParam2=334.1068f;
return 1;
break;
case 45:
*uParam1={
595.2742f, -2819.183f, 5.0559f 
};
*fParam2=46.8853f;
return 1;
break;
case 46:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 47:
*uParam1={
314.4171f, 965.207f, 208.4024f 
};
*fParam2=165.9421f;
return 1;
break;
case 49:
*uParam1={
3321.537f, 4975.455f, 25.9097f 
};
*fParam2=221.228f;
return 1;
break;
case 48:
*uParam1={
-111.1318f, 6316.479f, 30.4904f 
};
*fParam2=(42f + 180f);
return 1;
break;
case 50:
*uParam1={
-731.3261f, 106.68f, 54.7169f 
};
*fParam2=98.9764f;
return 1;
break;
case 51:
*uParam1={
-1257.5f, -526.9999f, 30.2361f 
};
*fParam2=220.9554f;
return 1;
break;
case 52:
*uParam1={
736.9869f, -2050.678f, 28.2718f 
};
*fParam2=83.9922f;
return 1;
break;
case 66:
*uParam1={
262.5499f, -2540.15f, 4.8433f 
};
*fParam2=-64.1366f;
return 1;
break;
case 53:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 55:
*uParam1={
-315.7789f, 6201.355f, 30.4322f 
};
*fParam2=127.7547f;
return 1;
break;
case 56:
*uParam1={
118.0988f, -1264.916f, 32.3637f 
};
*fParam2=-63f;
return 1;
break;
case 57:
*uParam1={
37.5988f, -1351.52f, 28.2954f 
};
*fParam2=90.0339f;
return 1;
break;
case 61:
*uParam1={
-558.2693f, 261.1167f, 82.07f 
};
*fParam2=84.6231f;
return 1;
break;
case 62:
*uParam1={
-196.9999f, 507.9999f, 132.477f 
};
*fParam2=99.6049f;
return 1;
break;
case 63:
*uParam1={
1312.01f, -1645.87f, 51.2f 
};
*fParam2=120f;
return 1;
break;
case 68:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 69:
*uParam1={
-818.7374f, 6.4824f, 41.2432f 
};
*fParam2=211.8223f;
return 1;
break;
case 64:
*uParam1={
2091.258f, 4714.852f, 40.1936f 
};
*fParam2=136.0867f;
return 1;
break;
case 54:
*uParam1={
1762.59f, 3247.212f, 40.735f 
};
*fParam2=27.0648f;
return 1;
break;
case 65:
*uParam1={
1764.013f, 3252.902f, 40.735f 
};
*fParam2=27.0648f;
return 1;
break;
case 70:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 71:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 72:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
case 73:
*uParam1={
0f, 0f, 0f 
};
*fParam2=0f;
return 1;
break;
default:
break;
}
return 0;
}


void func_26(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94666[iParam0 /*2*/]=1;
}}else{
Global_94666[iParam0 /*2*/]=0;
}}


void func_27(){
Global_100716=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791)){
switch (func_28()){
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
switch (func_28()){
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

int func_28(){
func_29();
return Global_113648.f_2365.f_539.f_4321;
}


void func_29(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_33(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_32(PLAYER::PLAYER_PED_ID());
if(func_31(iVar0) && (!func_30(14) || Global_112599)){
if(Global_113648.f_2365.f_539.f_4321 !=iVar0 && func_31(Global_113648.f_2365.f_539.f_4321)){
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


bool func_30(int iParam0){
return Global_43257==iParam0;
}


bool func_31(int iParam0){
return iParam0 < 3;
}

int func_32(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_33(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_33(int iParam0){
if(func_31(iParam0)){
return func_34(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__34(int iParam0){
return Global_2028[iParam0 /*29*/];
}


void func_35(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78791, sParam0, 16);
StringCopy(&Global_78795, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_36(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_799)){
HUD::REMOVE_BLIP(&uLocal_799);
}}elseif(!HUD::DOES_BLIP_EXIST(uLocal_799)){
uLocal_799=func_40(iParam0, 0, 0);
}}}elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0)){
if(HUD::DOES_BLIP_EXIST(uLocal_799)){
HUD::REMOVE_BLIP(&uLocal_799);
}
if(!HUD::DOES_BLIP_EXIST(uLocal_798)){
HUD::CLEAR_PRINTS();
if(!iLocal_973){
func_39("AHP_DROPOFF", 7500, 1);
iLocal_973=1;
}
uLocal_798=func_37(Local_971, 1);
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_798)){
HUD::REMOVE_BLIP(&uLocal_798);
}
if(!HUD::DOES_BLIP_EXIST(uLocal_799)){
HUD::CLEAR_PRINTS();
if(!iLocal_972){
func_39("AHP_GETBAKIN", 7500, 1);
iLocal_972=1;
}
uLocal_799=func_40(iParam0, 0, 0);
}}}else{
if(HUD::DOES_BLIP_EXIST(uLocal_799)){
HUD::REMOVE_BLIP(&uLocal_799);
}
if(HUD::DOES_BLIP_EXIST(uLocal_798)){
HUD::REMOVE_BLIP(&uLocal_798);
}}}


var func__37(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


float func_38(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_39(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_40(int iParam0, bool bParam1, bool bParam2){
return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_38(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


void func_42(int iParam0, bool bParam1){
int iVar0;
Global_63372=iParam0;
if(!Global_63370){
Global_63370=1;
}
if(bParam1){
iVar0=0;
while (iVar0 < Global_75457){
if(Global_75458[iVar0 /*9*/]==iParam0){
Global_75458[iVar0 /*9*/].f_1=0;
}
iVar0++;
}}}


void func_43(int iParam0, int iParam1){
int iVar0;
Global_63375=iParam0;
iVar0=0;
while (iVar0 < Global_75457){
if(iParam1==-1 || Global_75458[iVar0 /*9*/]==iParam1){
if(Global_75458[iVar0 /*9*/].f_6 !=iParam0){
Global_75458[iVar0 /*9*/].f_6=iParam0;
Global_75458[iVar0 /*9*/].f_7=1;
Global_75458[iVar0 /*9*/].f_8=0;
}}
iVar0++;
}}


void func_44(int iParam0, int iParam1){
Global_63373=iParam0;
Global_63374=iParam1;
}


void func_45(){
int iVar0;
int iVar1;
int iVar2;
if(bLocal_980){
iVar0=iLocal_801;
}else{
iVar0=iLocal_800;
}
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
switch (iLocal_982){
case 0:
if((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
iVar1=0;
while (iVar1 < 3){
iVar2=func_92(iVar1);
if((!PED::IS_PED_INJURED(iVar2) && PED::IS_PED_IN_VEHICLE(iVar2, iVar0, 0)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0)==iVar2){
if(!func_91(iVar2) && func_90(iVar2, 0)){
if(func_89(iVar2, 0)){
iLocal_1003=0;
iLocal_983=iVar1;
iLocal_982=1;
}}
}
iVar1++;
}}
break;
case 1:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if((((PED::IS_PED_INJURED(func_92(iLocal_983)) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) !=func_92(iLocal_983)) || !PED::IS_PED_IN_VEHICLE(func_92(iLocal_983), iVar0, 0)) || !func_91(func_92(iLocal_983))) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0)){
func_88(func_92(iLocal_983));
iLocal_982=0;
}else{
switch (iLocal_1003){
case 0:
iLocal_1003=2;
break;
case 1:
if(PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_986.f_0, Local_986.f_1, Local_988.f_0, Local_988.f_1)){
iLocal_1003++;
}
break;
case 2:
TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_92(iLocal_983), iVar0, Local_971, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
if(vdist(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_971) > 250f){
VEHICLE::SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(iVar0, vdist(ENTITY::GET_ENTITY_COORDS(iLocal_800, 1), Local_971));
}
iLocal_1003++;
break;
case 3:
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 697.6884f, -1013.364f, 27.4968f, 688.3482f, -1013.179f, 22.32968f, 29.25f, 0, 1, 0)){
if(vdist(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_984) < vdist(ENTITY::GET_ENTITY_COORDS(iVar0, 1), Local_985)){
if(bLocal_980){
TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_92(iLocal_983), iVar0, Local_985, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
}
else{
TASK::TASK_VEHICLE_PARK(func_92(iLocal_983), iVar0, Local_971, 180f, 1, 15f, 0);
}
}
elseif(bLocal_980){
TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_92(iLocal_983), iVar0, Local_984, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
}
else{
TASK::TASK_VEHICLE_PARK(func_92(iLocal_983), iVar0, Local_971, 0f, 1, 15f, 0);
}
iLocal_1003++;
}
break;
case 4:
break;
}
}}
func_46();
break;
}}elseif(iLocal_982 !=0){
if(func_88(func_92(iLocal_983))){
iLocal_982=0;
}}}


void func_46(){
bool bVar0;
var uVar1;
bVar0=false;
if(!PED::IS_PED_INJURED(func_92(iLocal_983)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID())==0){
if((((ENTITY::DOES_ENTITY_EXIST(iLocal_800) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, 0)) && PED::IS_PED_IN_VEHICLE(func_92(iLocal_983), iLocal_800, 0)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_801) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801, 0)) && PED::IS_PED_IN_VEHICLE(func_92(iLocal_983), iLocal_801, 0))){
bVar0=true;
}}
switch (iLocal_990){
case 0:
uVar1=func_85();
if(func_71(0, 1, 145, 0, uVar1, &cLocal_991, &cLocal_995, 1)){
func_70(&uLocal_804, 0);
func_70(&uLocal_804, 1);
func_70(&uLocal_804, 2);
if(func_28()==1){
func_69(&uLocal_804, 0, func_92(0), "MICHAEL", 0, 1);
func_69(&uLocal_804, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
}else{
func_69(&uLocal_804, 1, func_92(1), "FRANKLIN", 0, 1);
func_69(&uLocal_804, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
}
if(!iLocal_1000){
iLocal_1002=MISC::GET_GAME_TIMER();
}
iLocal_990=1;
}
break;
case 1:
if(bVar0){
if((MISC::GET_GAME_TIMER() - iLocal_1002) > 5000 || iLocal_1000){
if(func_68(&uLocal_804, &cLocal_991, &cLocal_995, 8, 0, 0, 0)){
iLocal_1000=1;
iLocal_990=2;
}}}
break;
case 2:
if(!bLocal_999){
if(!bVar0){
cLocal_1001={
func_67() 
};
func_66();
bLocal_999=true;
}}elseif(bVar0){
if(func_50(&uLocal_804, &cLocal_991, &cLocal_995, &cLocal_1001, 8, 0, 0)){
bLocal_999=false;
}}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (!bLocal_999 && !func_49())){
func_47();
iLocal_990=3;
iLocal_1002=MISC::GET_GAME_TIMER();
}
break;
case 3:
if((MISC::GET_GAME_TIMER() - iLocal_1002) > 10000){
iLocal_990=0;
}
break;
}}


void func_47(){
Global_20591=0;
func_48();
}


void func_48(){
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21725=6;
return;
}}

int func_49(){
if(Global_21725 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


bool func_50(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_65(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21732=0;
Global_21739=0;
Global_21734=0;
Global_22716=0;
Global_22718=0;
Global_22722=1;
StringCopy(&Global_22729, sParam3, 24);
Global_2883585=0;
return func_51(sParam2, iParam4, 0);
}

int func_51(char* sParam0, int iParam1, bool bParam2){
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
func_64();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_63(8, -1)){
return 0;
}
Global_21801={
Global_21795 
};
func_62();
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
func_61();
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
if(func_60()){
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
if(func_59()){
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
func_58();
Global_21735=bParam2;
}
Global_21727=iParam1;
StringCopy(&Global_21344, sParam0, 24);
Global_20591=0;
func_57();
func_52();
return 1;
}
if(Global_21725==5){
return 0;
}
if(iParam1 < Global_21727 || iParam1==Global_21727){
return 0;
}
if(iParam1==2){}else{
func_64();
}
return 0;
}


void func_52(){
if(!func_53()){
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

int func_53(){
if(!Global_262145.f_28878){
return 0;
}
if(!Global_78558){
return 0;
}
if(PLAYER::PLAYER_ID()==func_56()){
return 0;
}
if(func_54(PLAYER::PLAYER_ID())){
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


bool func_54(int iParam0){
return func_55(iParam0, 20);
}


var func__55(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_56(){
return -1;
}


void func_57(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21725=1;
}


void func_58(){
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

int func_59(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}

int func_60(){
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


void func_61(){
if(func_30(14)){
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
Global_20383=func_28();
if(Global_20383==145){
Global_20383=3;
}
if(Global_78558){
Global_20383=3;
}
if(Global_20383 > 3){
Global_20383=3;
}}}


void func_62(){
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


bool func_63(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1653913.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1653913.f_1048, iParam0);
}


void func_64(){
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


void func_65(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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


void func_66(){
Global_20591=0;
func_64();
}


struct<6> func_67(){
struct<6> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "NULL", 24);
if(Global_21725==4){
iVar1=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
iVar1=(iVar1 + Global_22735);
iVar2=iVar1 + 1;
if(iVar2 > -1 && iVar1 > -1){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20593[iVar2 /*6*/]))){
return Global_20593[iVar2 /*6*/];
}else{
iVar3=iVar2;
while (iVar3 < 70){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20593[iVar3 /*6*/]))){
return Global_20593[iVar3 /*6*/];
iVar3=70;
}
iVar3++;
}
return Var0;
}
return Global_20593[iVar1 /*6*/];
}else{
return Var0;
}}
return Var0;
}


bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_65(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_51(sParam2, iParam3, 0);
}


void func_69(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_70(var uParam0, int iParam1){
if((uParam0[iParam1 /*10*/])->f_7==1){
(uParam0[iParam1 /*10*/])->f_7=0;
}}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_82(iParam0);
iVar1=func_82(iParam1);
iVar2=func_82(iParam2);
if((iVar0==7 || iVar1==7) || (iVar2==7 && iParam2 !=145)){
return 0;
}
if(iVar2==7){
iVar5=func_81(iVar0, iVar1);
if(iVar5 >=9){
return 0;
}
if(((iParam0==1 && iParam1==19) && func_5(137)) && iParam3==1){
if(func_80(&(Global_113648.f_18105.f_388), iParam3, &iVar3, &iVar4, uParam4)){
if(bParam7){
func_75(&(Global_113648.f_18105.f_388), iParam3, iVar3);
}
iVar3 +=6;
}else{
return 0;
}}elseif(func_80(&(Global_113648.f_18105.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, uParam4)){
if(bParam7){
func_75(&(Global_113648.f_18105.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
}}else{
return 0;
}}else{
iVar6=func_74(iVar0, iVar1, iVar2);
if(iVar6 >=2){
return 0;
}
if(func_80(&(Global_113648.f_18105.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, uParam4)){
if(bParam7){
func_75(&(Global_113648.f_18105.f_347[iVar6 /*7*/]), iParam3, iVar3);
}}else{
return 0;
}}
*sParam6={
func_72(iVar0, iVar1, iVar2, 2) 
};
*sParam5={
*sParam6 
};
StringConCat(sParam5, "AU", 16);
StringConCat(sParam6, "_", 16);
if(iVar3==0){
StringConCat(sParam6, "A", 16);
}elseif(iVar3==1){
StringConCat(sParam6, "B", 16);
}elseif(iVar3==2){
StringConCat(sParam6, "C", 16);
}elseif(iVar3==3){
StringConCat(sParam6, "D", 16);
}elseif(iVar3==4){
StringConCat(sParam6, "E", 16);
}elseif(iVar3==5){
StringConCat(sParam6, "F", 16);
}elseif(iVar3==6){
StringConCat(sParam6, "G", 16);
}elseif(iVar3==7){
StringConCat(sParam6, "H", 16);
}elseif(iVar3==8){
StringConCat(sParam6, "I", 16);
}elseif(iVar3==9){
StringConCat(sParam6, "J", 16);
}elseif(iVar3==10){
StringConCat(sParam6, "K", 16);
}elseif(iVar3==11){
StringConCat(sParam6, "L", 16);
}else{
StringConCat(sParam6, "X", 16);
return 0;
}
if(iParam3==0){
StringConCat(sParam6, "F", 16);
}elseif(iParam3==1){
StringConCat(sParam6, "M", 16);
}elseif(iParam3==2){
StringConCat(sParam6, "D", 16);
}else{
StringConCat(sParam6, "X", 16);
return 0;
}
StringIntConCat(sParam6, iVar4, 16);
return 1;
}


struct<4> func_72(int iParam0, int iParam1, int iParam2, int iParam3){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "F", 16);
if(iParam3==0){
StringConCat(&Var0, "p", 16);
StringConCat(&Var0, func_73(iParam0), 16);
StringConCat(&Var0, func_73(iParam1), 16);
}elseif(iParam3==1){
StringConCat(&Var0, "a", 16);
StringConCat(&Var0, func_73(iParam0), 16);
StringConCat(&Var0, func_73(iParam1), 16);
}elseif(iParam3==2){
StringConCat(&Var0, "c", 16);
if(iParam2 < iParam1){
iVar1=iParam1;
iParam1=iParam2;
iParam2=iVar1;
}
if(iParam1 < iParam0){
iVar2=iParam0;
iParam0=iParam1;
iParam1=iVar2;
}
if(iParam2 < iParam1){
iVar3=iParam1;
iParam1=iParam2;
iParam2=iVar3;
}
StringConCat(&Var0, func_73(iParam0), 16);
StringConCat(&Var0, func_73(iParam1), 16);
if(iParam2 !=7){
StringConCat(&Var0, func_73(iParam2), 16);
}}else{
StringConCat(&Var0, "x", 16);
StringConCat(&Var0, func_73(iParam0), 16);
StringConCat(&Var0, func_73(iParam1), 16);
if(iParam2 !=7){
StringConCat(&Var0, func_73(iParam2), 16);
}}
return Var0;
}


char* func_73(int iParam0){
switch (iParam0){
case 0:
return "M";
break;
case 1:
return "F";
break;
case 2:
return "T";
break;
case 3:
return "L";
break;
case 4:
return "J";
break;
case 5:
return "A";
break;
}
return "X";
}

int func_74(int iParam0, int iParam1, int iParam2){
if((iParam0==iParam1 || iParam1==iParam2) || iParam2==iParam0){
return 3;
}
if(((iParam0==1 || iParam1==1) || iParam2==1) && ((iParam0==2 || iParam1==2) || iParam2==2)){
if((iParam0==0 || iParam1==0) || iParam2==0){
return 0;
}
if((iParam0==3 || iParam1==3) || iParam2==3){
return 1;
}}
return 3;
}


void func_75(var uParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=0;
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=0;
iVar5=0;
iVar6=0;
func_79((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
func_78((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
func_77((*uParam0)[iParam2], &iVar6);
if(iParam1==0){
iVar0++;
if(iVar0 > iVar3){
iVar0=iVar3;
}}elseif(iParam1==1){
iVar1++;
if(iVar1 > iVar4){
iVar1=iVar4;
}}elseif(iParam1==2){
iVar2++;
if(iVar2 > iVar5){
iVar2=iVar5;
}}
func_76(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}


void func_76(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7){
*uParam0=0;
*uParam0=(*uParam0 || shift_left(iParam1 & 15, 28));
*uParam0=(*uParam0 || shift_left(iParam2 & 15, 24));
*uParam0=(*uParam0 || shift_left(iParam3 & 15, 20));
*uParam0=(*uParam0 || shift_left(iParam4 & 15, 16));
*uParam0=(*uParam0 || shift_left(iParam5 & 15, 12));
*uParam0=(*uParam0 || shift_left(iParam6 & 15, 8));
*uParam0=(*uParam0 || iParam7 & 255);
}


void func_77(var uParam0, int iParam1){
*iParam1=uParam0 & 255;
}


void func_78(int iParam0, int iParam1, int iParam2, int iParam3){
*iParam1=shift_right(iParam0, 16) & 15;
*iParam2=shift_right(iParam0, 12) & 15;
*iParam3=shift_right(iParam0, 8) & 15;
}


void func_79(int iParam0, int iParam1, int iParam2, int iParam3){
*iParam1=shift_right(iParam0, 28) & 15;
*iParam2=shift_right(iParam0, 24) & 15;
*iParam3=shift_right(iParam0, 20) & 15;
}

int func_80(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bool bVar6;
*iParam2=0;
while (*iParam2 < 6){
iVar0=0;
iVar1=0;
iVar2=0;
iVar3=0;
iVar4=0;
iVar5=0;
bVar6=false;
func_77((*uParam0)[*iParam2], &bVar6);
if(MISC::IS_BIT_SET(uParam4, bVar6)){
func_79((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
func_78((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
if(iParam1==0){
if(iVar0 < iVar3){
*uParam3=iVar0;
return 1;
}}elseif(iParam1==1){
if(iVar1 < iVar4){
*uParam3=iVar1;
return 1;
}}elseif(iParam1==2){
if(iVar2 < iVar5){
*uParam3=iVar2;
return 1;
}}}
*iParam2++;
}
*iParam2=0;
*uParam3=0;
return 0;
}

int func_81(int iParam0, int iParam1){
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

int func_82(int iParam0){
if(iParam0==145){
return 7;
}
if(iParam0 < func_84()){
return func_83(iParam0);
}
if(iParam0==144){
return 7;
}
if(iParam0==func_84()){
return 6;
}
if(iParam0==191){
return 6;
}
return 6;
}


var func__83(int iParam0){
return Global_2028[iParam0 /*29*/].f_11;
}

int func_84(){
if(Global_32163==0 || Global_32163==2){
return 190;
}
return 161;
}

int func_85(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, true);
if(Local_49.f_109==0){
MISC::SET_BIT(&iVar0, 2);
}
if(func_5(128)){
MISC::SET_BIT(&iVar0, 4);
if(!func_87(24)){
MISC::SET_BIT(&iVar0, 21);
}}else{
MISC::SET_BIT(&iVar0, 3);
}
if(func_5(131)){
MISC::SET_BIT(&iVar0, 6);
}else{
MISC::SET_BIT(&iVar0, 5);
}
if(func_5(137)){
MISC::SET_BIT(&iVar0, 9);
}elseif(func_5(126)){
MISC::SET_BIT(&iVar0, 8);
}else{
MISC::SET_BIT(&iVar0, 7);
}
if(func_5(137)){
if(!func_5(135) && !func_5(136)){
MISC::SET_BIT(&iVar0, 10);
}
if(func_5(135)){
MISC::SET_BIT(&iVar0, 11);
}else{
MISC::SET_BIT(&iVar0, 13);
}
if(func_5(136)){
MISC::SET_BIT(&iVar0, 12);
}else{
MISC::SET_BIT(&iVar0, 14);
}}
if(!func_87(20)){
MISC::SET_BIT(&iVar0, 15);
}
if(!func_87(46)){
MISC::SET_BIT(&iVar0, 16);
}
if(func_5(129) && !MISC::IS_BIT_SET(iVar0, 9)){
MISC::SET_BIT(&iVar0, 17);
}
if(func_87(40) && !func_87(43)){
MISC::SET_BIT(&iVar0, 18);
}
if(func_87(43) && !func_87(42)){
MISC::SET_BIT(&iVar0, 19);
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_86(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1))){
MISC::SET_BIT(&iVar0, 20);
}}
return iVar0;
}

int func_86(struct<2> Param0, Vector3 vParam1){
if(Param0.f_1 < 400f){
if(Param0.f_0 < 1400f){
if(Param0.f_0 > -1900f){
if(Param0.f_1 > -3500f){
return 1;
}}}}
return 0;
}

int func_87(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_88(int iParam0){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_32(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_92(bVar0) !=iParam0){
return 0;
}
if(!MISC::IS_BIT_SET(Global_96535, bVar0)){
return 0;
}
MISC::CLEAR_BIT(&Global_96535, bVar0);
return 1;
}
return 0;
}

int func_89(int iParam0, int iParam1){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_32(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_92(bVar0) !=iParam0){
return 0;
}
if(MISC::IS_BIT_SET(Global_96535, bVar0)){
return 0;
}
if(iParam1==0){
if(iParam0==PLAYER::PLAYER_PED_ID()){
return 0;
}}
if(MISC::IS_BIT_SET(Global_96534, bVar0)){
WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, 0);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0, 1);
MISC::SET_BIT(&Global_96535, bVar0);
return 1;
}}
return 0;
}

int func_90(int iParam0, int iParam1){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_32(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_92(bVar0) !=iParam0){
return 0;
}
if(iParam1==0){
if(iParam0==PLAYER::PLAYER_PED_ID()){
return 0;
}}
if(MISC::IS_BIT_SET(Global_96534, bVar0)){
return 1;
}}
return 0;
}

int func_91(int iParam0){
bool bVar0;
return 0;
if(!PED::IS_PED_INJURED(iParam0)){
bVar0=func_32(iParam0);
if(bVar0 > 3){
return 0;
}
if(func_92(bVar0) !=iParam0){
return 0;
}
if(MISC::IS_BIT_SET(Global_96535, bVar0)){
return 1;
}}
return 0;
}

int func_92(int iParam0){
if(iParam0 > 3){
return 0;
}
if(iParam0==func_28()){
return PLAYER::PLAYER_PED_ID();
}
return Global_98159[func_93(iParam0)];
}

int func_93(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==2){
return 2;
}elseif(iParam0==1){
return 1;
}elseif(iParam0==145){
return 3;
}
return 4;
}

int func_94(){
if(((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) !=iLocal_800) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) !=iLocal_801){
if(VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("firetruk"))){
iLocal_800=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_800, 1, 1);
iLocal_975=0;
return 1;
}
if(VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2"))){
if(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0)){
iLocal_801=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_801, 1, 1);
if(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_801)) !=iLocal_800){
iLocal_800=ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)));
iLocal_975=0;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_800, 1, 1);
}
return 1;
}}}}
return 0;
}


void func_95(){
bool bVar0;
int iVar1;
bVar0=false;
if(iLocal_1004 < 8){
if(iLocal_1004 < 4){
if(ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[iLocal_1004])){
if(!PED::IS_PED_INJURED(Global_97178.f_9[iLocal_1004])){
if(vdist2(ENTITY::GET_ENTITY_COORDS(Global_97178.f_9[iLocal_1004], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 900f){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[iLocal_1004], 1, 1);
iLocal_802[iLocal_1004]=Global_97178.f_9[iLocal_1004];
bVar0=true;
Global_97178.f_9[iLocal_1004]=0;
}elseif(vdist2(ENTITY::GET_ENTITY_COORDS(Global_97178.f_9[iLocal_1004], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 2500f && ENTITY::IS_ENTITY_OCCLUDED(Global_97178.f_9[iLocal_1004])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[iLocal_1004], 1, 1);
PED::DELETE_PED(&(Global_97178.f_9[iLocal_1004]));
}}}}
if(!bVar0){
if(PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 30f, 1, 1, &iVar1, 0, 1, 21)){
if((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && !func_96(iVar1, &iLocal_802)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
iLocal_802[iLocal_1004]=iVar1;
bVar0=true;
}}}
if(bVar0){
if(!PED::IS_PED_INJURED(iLocal_802[iLocal_1004])){
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_802[iLocal_1004], iLocal_803);
PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_802[iLocal_1004], 17, 0);
PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
}
iLocal_1004++;
}}}

int func_96(int iParam0, int iParam1){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < *iParam1){
if(ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0])){
if(iParam0==(*iParam1)[iVar0]){
return 1;
}}
iVar0++;
}}
return 0;
}


void func_97(){
if(bLocal_980){
if(((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, 0) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_800, iLocal_801))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, 0))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_801) && vdist(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_801, 1)) > 250f)){
bLocal_980=false;
}}elseif((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801, 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_800, iLocal_801)){
bLocal_980=true;
}}


void func_98(int iParam0){
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


void func_99(){
struct<3> Var0;
int iVar1;
if((ENTITY::DOES_ENTITY_EXIST(Global_97178[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[0], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97178[0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[0], 1, 1);
iLocal_800=Global_97178[0];
Global_97178[0]=0;
}
if((ENTITY::DOES_ENTITY_EXIST(Global_97178[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[1], 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_97178[1], 0)){
if(ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))), 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[1], 1, 1);
iLocal_801=Global_97178[1];
Global_97178[1]=0;
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[0], 1, 1);
iLocal_800=Global_97178[0];
Global_97178[0]=0;
bLocal_980=true;
}}
HUD::REQUEST_ADDITIONAL_TEXT("AHPREP1", 0);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}
PED::ADD_RELATIONSHIP_GROUP("FireMen", &iLocal_803);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_803);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_803, joaat("player"));
if(func_10(0)){
STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
while (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01"))){
wait(0);
}
Var0={
202.0504f, -1655.773f, 28.8031f 
};
uLocal_1005=PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), 0, 1, 1, 1);
MISC::CLEAR_AREA(Var0, 20f, 1, 0, 0, 0);
iLocal_802[0]=PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, 1, 1);
iLocal_802[1]=PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 214.4446f, -1643.72f, 28.7776f, 279.1055f, 1, 1);
iLocal_802[2]=PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), 217.0826f, -1644.117f, 28.7155f, 72.8262f, 1, 1);
iVar1=0;
while (iVar1 <=(iLocal_802 - 1)){
if(!PED::IS_PED_INJURED(iLocal_802[iVar1])){
TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_802[iVar1], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_802[iVar1], 17, 0);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_802[iVar1], iLocal_803);
}
iVar1++;
}
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("player"), iLocal_803);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_803, joaat("player"));
iLocal_969=-1;
if(func_106()){
func_105(354.3055f, -1722.206f, 28.259f, 109.6154f, 1, 0);
func_102(0, -1, 1);
}}
if(!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()){
CAM::DO_SCREEN_FADE_IN(500);
}
if(func_17()){
iLocal_976=1;
}
if(!func_10(0)){
AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
}
iLocal_975=0;
func_100(68);
}


void func_100(int iParam0){
Global_96536=0;
switch (iParam0){
case 72:
func_101(2);
func_101(4);
break;
case 73:
func_101(0);
func_101(1);
func_101(7);
break;
case 92:
func_101(10);
func_101(9);
func_101(13);
func_101(6);
break;
case 68:
func_101(11);
break;
case 78:
func_101(14);
break;
case 79:
func_101(3);
break;
default:
break;
}}


void func_101(bool bParam0){
MISC::SET_BIT(&Global_96536, iParam0);
}


void func_102(int iParam0, int iParam1, int iParam2){
if(func_106() && func_104()){
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
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}}
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_103(0);
}}


void func_103(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100681.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100681.f_20), 13);
}}


var func__104(){
return MISC::IS_BIT_SET(Global_100681.f_20, 13);
}


void func_105(struct<3> Param0, float fParam1, int iParam2, int iParam3){
if(func_106()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
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
func_103(1);
}}

int func_106(){
if(Global_100681==10 || Global_100681==9){
return 1;
}
return 0;
}


void func_107(){
func_108();
if(ENTITY::DOES_ENTITY_EXIST(iLocal_800)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_800);
}
PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1005, 0);
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_108(){
Global_96536=0;
}


void func_109(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113648.f_9087 || func_10(0)){
if(!func_110()){
iVar0=func_8();
if(iVar0 !=-1){
if(!func_22(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_27();
}}}

int func_110(){
if(((Global_100681==13 || Global_100681==10) || Global_100681==11) || Global_100681==12){
return 0;
}
return 1;
}


void func_111(){
if(iLocal_976==1){
func_15(354.3055f, -1722.206f, 28.259f, 109.6154f);
}}