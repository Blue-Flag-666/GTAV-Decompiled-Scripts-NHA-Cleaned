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
float fLocal_19=0f;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
var uLocal_25=0;
struct<110> Local_26[4];
struct<94> Local_27={
0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 
};
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=-1;
var uLocal_38=0;
var uLocal_39=0;
var uLocal_40=-1;
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
struct<8> Local_44[5];
int iLocal_45[1]={
0 
};
struct<4> Local_46={
0, 0, 0, 0 
};
char cLocal_47[64]="";
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
struct<3> Local_56={
0, 0, 0 
};
char cLocal_57[24]="";
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
bool bLocal_63=0;
bool bLocal_64=0;
int iLocal_65=0;
bool bLocal_66=0;
int iLocal_67=0;
var uLocal_68=30;
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
var uLocal_219=10;
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
var uLocal_270=10;
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
var uLocal_341=20;
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
var uLocal_442=20;
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
var uLocal_543=30;
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
var uLocal_724=5;
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
var uLocal_755=7;
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
var uLocal_805=5;
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
var uLocal_831=3;
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
var uLocal_847=22;
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
var uLocal_977=10;
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
var uLocal_1005=0;
var uLocal_1006=0;
var uLocal_1007=0;
var uLocal_1008=0;
var uLocal_1009=0;
var uLocal_1010=0;
var uLocal_1011=0;
var uLocal_1012=0;
var uLocal_1013=0;
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
var uLocal_1028=5;
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
var uLocal_1053=0;
var uLocal_1054=5;
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
var uLocal_1070=0;
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
var uLocal_1084=3;
var uLocal_1085=0;
var uLocal_1086=0;
var uLocal_1087=0;
var uLocal_1088=0;
var uLocal_1089=0;
var uLocal_1090=1092616192;
var uLocal_1091=1101004800;
var uLocal_1092=0;
var uLocal_1093=0;
var uLocal_1094=0;
var uLocal_1095=0;
var uLocal_1096=0;
var uLocal_1097=0;
var uLocal_1098=0;
var uLocal_1099=0;
var uLocal_1100=3;
var uLocal_1101=0;
var uLocal_1102=0;
var uLocal_1103=0;
var uLocal_1104=0;
var uLocal_1105=0;
var uLocal_1106=0;
var uLocal_1107=0;
struct<8> Local_1108[5];
struct<32> Local_1109[20];
char cLocal_1110[32]="";
var uLocal_1111=0;
var uLocal_1112=0;
var uLocal_1113=0;
var uLocal_1114=0;
var uLocal_1115=16;
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
var uLocal_1154=0;
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
var uLocal_1204=0;
var uLocal_1205=0;
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
var uLocal_1241=0;
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
bool bLocal_1280=0;
int iLocal_1281=0;
int iLocal_1282=0;
var uLocal_1283=0;
int iLocal_1284=0;
int iLocal_1285=0;
int iLocal_1286=0;
struct<2> Local_1287={
0, 0 
};
var uLocal_1288=0;
var uLocal_1289=0;
char cLocal_1290[16]="";
var uLocal_1291=0;
var uLocal_1292=0;
int iLocal_1293=0;
float fLocal_1294=0f;
int iLocal_1295=0;
int iLocal_1296=0;
int iLocal_1297=0;
int iLocal_1298=0;
int iLocal_1299=0;
int iLocal_1300=0;
char cLocal_1301[16]="";
var uLocal_1302=0;
var uLocal_1303=0;
int iLocal_1304=0;
int iLocal_1305=0;
bool bLocal_1306=0;
int iLocal_1307=0;
int iLocal_1308=0;
int iLocal_1309=0;
int iLocal_1310=0;
struct<2> Local_1311={
0, 0 
};
var uLocal_1312=0;
var uLocal_1313=0;
struct<2> Local_1314={
0, 0 
};
var uLocal_1315=0;
var uLocal_1316=0;
int iLocal_1317=0;
bool bLocal_1318=0;
int iLocal_1319=0;
int iLocal_1320=0;
int iLocal_1321=0;
bool bLocal_1322=0;
int iLocal_1323=0;
int iLocal_1324=0;
int iLocal_1325=0;
int iLocal_1326=0;
int iLocal_1327=0;
int iLocal_1328=0;
int iLocal_1329=0;
int iLocal_1330=0;
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
fLocal_19=0f;
fLocal_23=-0.0375f;
fLocal_24=0.17f;
StringCopy(&Local_46, "JHP1ADS", 16);
StringCopy(&cLocal_47, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
Local_56={
154.9478f, -3092.523f, 4.911984f 
};
StringCopy(&cLocal_57, "jhp1a_sec_arrive", 24);
iLocal_61=0;
iLocal_67=6;
iLocal_1281=-1;
iLocal_1285=-1;
iLocal_1286=-1;
StringCopy(&Local_1287, "", 16);
StringCopy(&cLocal_1290, "", 16);
fLocal_1294=1E+08f;
iLocal_1297=1;
iLocal_1300=-1;
StringCopy(&cLocal_1301, "", 16);
iLocal_1304=-1;
iLocal_1305=1;
iLocal_1309=-1;
iLocal_1310=-1;
StringCopy(&Local_1311, "", 16);
StringCopy(&Local_1314, "", 16);
iLocal_1317=1;
iLocal_1319=1;
iLocal_1323=-1;
iLocal_1325=-1;
iLocal_1326=-1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_303(6);
}
MISC::SET_MISSION_FLAG(1);
func_296();
func_255();
while (true){
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_JewelStoreJobPrep1A", 0);
if(bLocal_66){
func_253();
}
func_250(&uLocal_68);
func_190();
if(!bLocal_64){
func_188();
func_177();
func_176(&Local_1108);
}
func_1();
wait(0);
}}


void func_1(){
switch (iLocal_61){
case 0:
if(func_25()){
func_24(1);
}
break;
case 1:
func_2();
break;
}}


void func_2(){
int iVar0;
if((iLocal_1326 !=-1 && ENTITY::DOES_ENTITY_EXIST(Local_44[iLocal_1326 /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iLocal_1326 /*8*/], 0)){
iVar0=ENTITY::GET_ENTITY_HEALTH(Local_44[iLocal_1326 /*8*/]);
func_23(Local_44[iLocal_1326 /*8*/], -1);
}
if(iVar0 >=750 || iVar0 <=0){
Global_97238=1000;
}else{
Global_97238=iVar0;
}
if(!func_22(&(Local_1108[3 /*8*/]))){
func_21(699);
}
func_8(0);
if(func_7(88)){
func_3(0, 1);
}else{
func_3(0, 0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_3(bool bParam0, int iParam1){
int iVar0;
int iVar1;
var uVar2;
if(!Global_63487){
Global_63487=iParam1;
}
if(bParam0){
if((func_6(0) && Global_78936.f_1==1) && func_5(Global_78936)){
}else{
Global_63485=1;
}}
if(Global_113810.f_9088 || func_6(0)){
iVar0=func_4();
iVar1=Global_91565[iVar0 /*5*/];
uVar2=Global_78960.f_109[iVar1 /*4*/];
if(iVar0==-1){
if(Global_113810.f_9088){
}
return;
}
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 4)){
return;
}
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 5)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 4);
MISC::SET_BIT(&Global_78938, true);
Global_78954=uVar2;
Global_78955=MISC::GET_GAME_TIMER();
}}

int func_4(){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(MISC::IS_BIT_SET(Global_91565[iVar0 /*5*/].f_1, 2)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_5(int iParam0){
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

int func_6(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}

int func_7(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113810.f_9088.f_330[iParam0 /*6*/];
}


void func_8(bool bParam0){
int iVar0;
int iVar1;
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
if(bParam0){
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
}else{
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
}
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
PED::SET_CREATE_RANDOM_COPS(1);
func_18(&Local_1108);
func_13(&uLocal_1083, 1, 0);
bLocal_1280=false;
iLocal_1281=-1;
iLocal_1320=0;
iLocal_1321=0;
bLocal_1322=false;
iLocal_1323=-1;
iLocal_1325=-1;
iLocal_1326=-1;
iLocal_1327=0;
iLocal_1328=0;
iLocal_1324=0;
if(bParam0){
func_11();
TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
MISC::CLEAR_AREA_OF_PEDS(158.78f, -3100.44f, 6.0019f, 100f, 0);
MISC::CLEAR_AREA_OF_COPS(158.78f, -3100.44f, 6.0019f, 100f, 0);
MISC::CLEAR_AREA_OF_OBJECTS(158.78f, -3100.44f, 6.0019f, 100f, 0);
MISC::CLEAR_AREA_OF_VEHICLES(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_PROJECTILES(158.78f, -3100.44f, 6.0019f, 100f, 0);
GRAPHICS::REMOVE_DECALS_IN_RANGE(158.78f, -3100.44f, 6.0019f, 100f);
}
iVar0=0;
while (iVar0 < iLocal_45){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_45[iVar0])){
if(bParam0){
OBJECT::DELETE_OBJECT(&(iLocal_45[iVar0]));
}else{
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_45[iVar0]));
}}
iVar0++;
}
iVar0=0;
while (iVar0 < Local_26.f_0){
func_10(&(Local_26[iVar0 /*110*/]), bParam0);
iVar0++;
}
func_10(&Local_27, bParam0);
iVar0=0;
while (iVar0 < Local_44.f_0){
iVar1=0;
while (iVar1 < 4){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/].f_2[iVar1])){
if(bParam0){
PED::DELETE_PED(&(Local_44[iVar0 /*8*/].f_2[iVar1]));
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_44[iVar0 /*8*/].f_2[iVar1]));
}}
iVar1++;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/])){
if(bParam0){
VEHICLE::DELETE_VEHICLE(&(Local_44[iVar0 /*8*/]));
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_44[iVar0 /*8*/]));
}}
iVar0++;
}
if(AUDIO::IS_ALARM_PLAYING(&cLocal_47)){
AUDIO::STOP_ALARM(&cLocal_47, bParam0);
}
if(iLocal_1330 !=0){
PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1330, 0);
}
func_9();
}


void func_9(){
Global_96668=0;
}


void func_10(var uParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(bParam1){
PED::DELETE_PED(uParam0);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
}}
uParam0->f_5=0;
uParam0->f_6=-1;
uParam0->f_7=-1;
uParam0->f_39=0;
uParam0->f_41=0;
uParam0->f_93=1;
uParam0->f_102=0;
uParam0->f_47=0;
uParam0->f_46=0;
uParam0->f_48=0;
uParam0->f_37=-1;
uParam0->f_103=-1;
uParam0->f_40=0;
uParam0->f_92=-1;
uParam0->f_43={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
uParam0->f_91=0;
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_105)){
if(ENTITY::IS_ENTITY_ATTACHED(uParam0->f_105)){
ENTITY::DETACH_ENTITY(uParam0->f_105, 1, 1);
}
if(bParam1){
OBJECT::DELETE_OBJECT(&(uParam0->f_105));
}else{
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_105));
}}
uParam0->f_106=-1;
uParam0->f_107=0;
uParam0->f_109=0;
uParam0->f_104=0;
}


void func_11(){
Global_20711=0;
func_12();
}


void func_12(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_13(var uParam0, bool bParam1, bool bParam2){
int iVar0;
if(MISC::IS_BIT_SET(uParam0->f_13, 30)){
bParam1=true;
}
func_17(uParam0);
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
}
func_16(iVar0, uParam0);
func_15(iVar0, uParam0);
iVar0++;
}
iVar0=0;
while (iVar0 < 31){
if(iVar0 !=8){
MISC::CLEAR_BIT(&(uParam0->f_13), iVar0);
MISC::CLEAR_BIT(&(uParam0->f_14), iVar0);
}
iVar0++;
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
uParam0->f_6=0;
uParam0->f_12=0;
uParam0->f_15=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 1);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 1);
if(bParam2){
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 0);
}
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 0);
if(bParam1){
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()) && uParam0->f_17[iVar0] !=PLAYER::PLAYER_PED_ID()){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}
if(!MISC::IS_BIT_SET(uParam0->f_13, 29)){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
}
uParam0->f_17[iVar0]=0;
}
iVar0++;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(bParam2){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
}}
uParam0->f_21=0;
}


var func__14(){
return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}


void func_15(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(uParam1->f_13), 17);
break;
case 1:
MISC::CLEAR_BIT(&(uParam1->f_13), 18);
break;
case 2:
MISC::CLEAR_BIT(&(uParam1->f_13), 19);
break;
}}


void func_16(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::CLEAR_BIT(&(uParam1->f_13), 14);
break;
case 1:
MISC::CLEAR_BIT(&(uParam1->f_13), 15);
break;
case 2:
MISC::CLEAR_BIT(&(uParam1->f_13), 16);
break;
}}


void func_17(var uParam0){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
}}


void func_18(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_19(uParam0[iVar0 /*8*/]);
iVar0++;
}}


void func_19(var uParam0){
if(!func_20(uParam0)){
*uParam0=0;
}}

int func_20(var uParam0){
if(*uParam0==0){
return 1;
}
return 0;
}


void func_21(int iParam0){
bool bVar0;
int iVar1;
Global_63486=0;
if(!Global_63710[iParam0 /*13*/]==3){
return;
}
bVar0=false;
iVar1=0;
iVar1=0;
while (iVar1 < Global_75580){
if(Global_75581[iVar1 /*9*/]==iParam0){
bVar0=true;
Global_75581[iVar1 /*9*/].f_1=1;
Global_75581[iVar1 /*9*/].f_2=0f;
if(Global_75581[iVar1 /*9*/].f_3==2){
}}
iVar1++;
}
if(!bVar0){}}

int func_22(var uParam0){
if(*uParam0 !=0 && (*uParam0 !=2 || uParam0->f_1 > 0)){
return 1;
}
return 0;
}


void func_23(int iParam0, int iParam1){
int iVar0;
Global_63498=iParam0;
iVar0=0;
while (iVar0 < Global_75580){
if(iParam1==-1 || Global_75581[iVar0 /*9*/]==iParam1){
if(Global_75581[iVar0 /*9*/].f_6 !=iParam0){
Global_75581[iVar0 /*9*/].f_6=iParam0;
Global_75581[iVar0 /*9*/].f_7=1;
Global_75581[iVar0 /*9*/].f_8=0;
}}
iVar0++;
}}


void func_24(int iParam0){
if(iParam0==2){}else{
iLocal_62=0;
bLocal_63=false;
iLocal_61=iParam0;
}}

int func_25(){
bool bVar0;
if(!bLocal_63){
func_175(&uLocal_68, "SCRIPT\JWL_HA_RAID_STORE");
func_174(&uLocal_68, joaat("s_m_m_security_01"));
func_173(&(Local_1108[1 /*8*/]), 0, 0, 1);
func_173(&(Local_1108[0 /*8*/]), 0, 0, 1);
func_173(&(Local_1108[4 /*8*/]), 0, 0, 1);
func_111(0f, 0f, 0f, 0f, 1, func_168());
Global_97238=1000;
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
func_110("JHP1A_STEAL_BSV", 7500, 1);
bLocal_63=true;
}
if(bLocal_63){
switch (iLocal_62){
case 0:
if(func_105(1)==0){
func_13(&uLocal_1083, 1, 0);
func_23(0, -1);
func_104(0, -1);
}elseif((func_103() && ENTITY::DOES_ENTITY_EXIST(Local_44[func_102() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[func_102() /*8*/], 0)){
VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
if(iLocal_1326 !=func_102()){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
func_23(Local_44[func_102() /*8*/], -1);
func_104(Local_44[func_102() /*8*/], -1);
iLocal_1326=func_102();
}
if(func_100(&uLocal_1083, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_44[func_102() /*8*/], "", "", "", 1, 0, 1, -1)){
iLocal_62++;
}}elseif(func_99()){
VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
func_55(&uLocal_1083, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_1327, "", "", "", 1, 0, 1, -1);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_44[func_54() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0)){
iLocal_62++;
}}else{
func_17(&uLocal_1083);
func_23(0, -1);
func_104(0, -1);
}
break;
case 1:
if(func_103()){
if(func_52(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f, 1, 1056964608, 0, 1, 0)){
bVar0=true;
}}elseif(func_99()){
if(func_52(iLocal_1327, 5f, 1, 1056964608, 0, 1, 0)){
bVar0=true;
}}
if(bVar0){
if(func_7(88)){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
func_51(1);
func_50(1, 0);
iLocal_62=1000;
}else{
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
iLocal_62++;
}
if(func_103()){
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_44[iLocal_1326 /*8*/], 0);
}elseif(func_99()){
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_44[func_54() /*8*/], 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_44[func_54() /*8*/], 1);
VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_44[func_54() /*8*/]);
}
TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
}
break;
case 2:
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}
break;
case 1000:
func_50(1, 0);
if(!func_48()){
func_46();
}else{
func_45(&uLocal_1115, 3, 0, "LESTER", 0, 1);
if(func_28(&uLocal_1115, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0)){
iLocal_62++;
}}
break;
case 1001:
func_50(1, 0);
if(func_27()){
RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
iLocal_62++;
}
break;
case 1002:
func_50(1, 0);
if(!func_27()){
func_26();
return 1;
}
break;
}}
return 0;
}


void func_26(){
int iVar0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, 1);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98182[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD(Global_98182[iVar0], 0)){
ENTITY::SET_ENTITY_PROOFS(Global_98182[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Global_98182[iVar0], 0);
}}
iVar0++;
}
if((Global_43377 !=0 && Global_43377 !=3) && Global_43377 !=2){
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}

int func_27(){
if(Global_20500.f_1==10 || Global_20500.f_1==9){
return 1;
}
return 0;
}


bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8){
func_44(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
Global_21893=0;
Global_21852=1;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_22842=0;
Global_21850=0;
Global_21897=0;
Global_21899=0;
if(iParam5==1){
Global_21857=1;
}else{
Global_21857=0;
}
Global_2883585=0;
return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2){
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
func_43();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_42(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_41();
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
MISC::CLEAR_BIT(&Global_8372, 0);
if(bParam2){
func_39();
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
if(func_38()){
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
if(func_37()){
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
func_36();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_35();
func_30();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_43();
}
return 0;
}


void func_30(){
if(!func_31()){
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

int func_31(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_34()){
return 0;
}
if(func_32(PLAYER::PLAYER_ID())){
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


bool func_32(int iParam0){
return func_33(iParam0, 20);
}


var func__33(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_34(){
return -1;
}


void func_35(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}


void func_36(){
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

int func_37(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_38(){
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


void func_39(){
if(func_40(14)){
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
Global_20500=func_168();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


bool func_40(int iParam0){
return Global_43377==iParam0;
}


void func_41(){
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


bool func_42(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_43(){
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


void func_44(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
Global_21299={
*uParam0 
};
Global_7686=iParam1;
StringCopy(&Global_21915, sParam2, 24);
Global_22834=iParam5;
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


void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5){
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


void func_46(){
Global_20711=0;
func_47();
}


void func_47(){
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(1);
Global_21845=6;
return;
}}

int func_48(){
if(func_49()){
return 0;
}
if(HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
return 0;
}}
return 1;
}

int func_49(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_50(bool bParam0, bool bParam1){
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


void func_51(bool bParam0){
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

int func_52(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6){
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
func_53(iParam0);
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


void func_53(int iParam0){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(VEHICLE::GET_HAS_ROCKET_BOOST(iParam0)){
if(VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0)){
VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
}}}}

int func_54(){
int iVar0;
if(func_99()){
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1327, Local_44[iVar0 /*8*/])){
return iVar0;
}}
iVar0++;
}}
return -1;
}

int func_55(var uParam0, struct<3> Param1, struct<3> Param2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11){
return func_56(uParam0, Param1, Param2, func_98(), func_98(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_97(), func_97(), func_97(), func_97(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_56(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28){
int iVar0;
bool bVar1;
int iVar2;
struct<3> Var3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
Var3={
Param1 + Vector(1f, 0f, 0f) 
};
uParam0->f_17[0]=iParam7;
uParam0->f_17[1]=iParam8;
uParam0->f_17[2]=iParam9;
uParam0->f_16=iParam7;
func_96(uParam0);
func_95(uParam0);
func_94();
if(func_78(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, uParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18)){
func_77(sParam12);
func_77(sParam13);
func_77(sParam14);
func_77(sParam15);
if(CAM::IS_SCREEN_FADED_IN()){
bVar1=false;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)){
MISC::SET_BIT(&(uParam0->f_13), 3);
if(!MISC::IS_BIT_SET(uParam0->f_13, 9)){
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 23)){
MISC::CLEAR_BIT(&(uParam0->f_13), 23);
}
MISC::SET_BIT(&(uParam0->f_13), 9);
bVar1=true;
}}elseif(iParam6==4 || iParam6==5){
if(func_75(uParam0, iParam21)){
MISC::SET_BIT(&(uParam0->f_13), 3);
if(!MISC::IS_BIT_SET(uParam0->f_13, 9)){
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
MISC::SET_BIT(&(uParam0->f_13), 9);
bVar1=true;
}}else{
bVar1=true;
}
if(bVar1){
func_77(sParam16);
func_77(sParam19);
func_77("MORE_SEATS");
if(bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_77(sParam11);
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
if((!func_72(uParam0, 1) && !func_71(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0)){
if(bParam22){
func_70(uParam0, "LOSE_WANTED", 0);
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_68(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
}
}
MISC::SET_BIT(&(uParam0->f_13), false);
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
func_77("LOSE_WANTED");
MISC::CLEAR_BIT(&(uParam0->f_13), 0);
MISC::SET_BIT(&(uParam0->f_13), true);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 1)){
if(!func_72(uParam0, 1)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_68(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
}
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}
if(!HUD::DOES_BLIP_EXIST(uParam0->f_5)){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}
uParam0->f_5=func_67(Var3, 0);
if(!iParam23==-1){
HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam23);
}
if(bParam27){
func_66(uParam0->f_5, uParam0);
}}elseif(!func_65(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f, 0)){
HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
if(bParam27){
func_66(uParam0->f_5, uParam0);
}}
if(!func_72(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 2)){
func_70(uParam0, sParam11, 0);
MISC::SET_BIT(&(uParam0->f_13), 2);
}}
if(iParam6==4 || iParam6==5){
if(MISC::IS_BIT_SET(uParam0->f_13, 13)){
iParam5=0;
}}
bVar1=false;
iVar4=0;
iVar5=0;
if((iParam6==1 || iParam6==3) || iParam6==5){
iVar4=1;
}
if(iParam6==2 || iParam6==3){
iVar5=1;
}elseif(iParam6==4 || iParam6==5){
iVar5=2;
}
if(bParam20){
ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, iParam5, iVar4, iVar5);
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, fParam28, 0, iVar4, iVar5)){
bVar1=true;
}}elseif(ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, iParam5, iVar4, iVar5)){
bVar1=true;
}
if(bVar1){
bVar1=true;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar2])){
if(iParam6==4 || iParam6==5){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0)){
bVar1=false;
}}elseif(iParam10 !=0){
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam10, 0)){
bVar1=false;
}}elseif(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], func_14()) || !func_63(uParam0->f_17[iVar2], 1)){
bVar1=false;
}}
iVar2++;
}
if(bVar1){
if(func_60(uParam0)){
func_77(sParam11);
func_77(sParam16);
func_77(sParam12);
func_77(sParam13);
func_77(sParam14);
func_77(sParam15);
func_77("LOSE_WANTED");
func_77("MORE_SEATS");
func_77(sParam19);
func_13(uParam0, 1, 0);
return 1;
}
}}}}elseif(ENTITY::DOES_ENTITY_EXIST(iParam10)){
if((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22))){
func_77(sParam16);
func_77(sParam19);
if(HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
HUD::REMOVE_BLIP(uParam0);
func_77(sParam11);
}
if((!func_72(uParam0, 1) && !func_71(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0)){
if(bParam22){
func_70(uParam0, "LOSE_WANTED", 0);
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_68(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
}
}
MISC::SET_BIT(&(uParam0->f_13), false);
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
func_77("LOSE_WANTED");
MISC::CLEAR_BIT(&(uParam0->f_13), 0);
MISC::SET_BIT(&(uParam0->f_13), true);
}
if(MISC::IS_BIT_SET(uParam0->f_13, 1)){
if(!func_72(uParam0, 1)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_68(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
}
MISC::CLEAR_BIT(&(uParam0->f_13), 1);
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(!HUD::DOES_BLIP_EXIST(*uParam0)){
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_77(sParam11);
}
*uParam0=func_57(iParam10, 0, 0);
HUD::SET_BLIP_DISPLAY(*uParam0, 2);
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_66(*uParam0, uParam0);
}
}
if(!func_72(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_70(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}elseif(MISC::IS_BIT_SET(uParam0->f_13, 9)){
if(!MISC::IS_STRING_NULL(sParam19)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_70(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_70(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}
if(!MISC::IS_BIT_SET(uParam0->f_13, 23)){
if(!PED::IS_PED_INJURED(uParam0->f_17[0])){
func_68(uParam0->f_17[0], "GET_IN_CAR", 3);
}
MISC::SET_BIT(&(uParam0->f_13), 23);
}}
}}}}else{
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
func_77(sParam11);
}
if(iParam6==4 || iParam6==5){
if(iParam21 > 0){
if(!func_72(uParam0, 2)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!MISC::IS_BIT_SET(uParam0->f_13, 13)){
iVar6=0;
iVar7=0;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar2])){
iVar6++;
}
iVar2++;
}
iVar7=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar7])){
func_68(uParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
}
func_70(uParam0, "MORE_SEATS", 0);
MISC::SET_BIT(&(uParam0->f_13), 13);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_70(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
if(MISC::IS_BIT_SET(uParam0->f_13, 9)){
func_70(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}
}}elseif(!func_72(uParam0, 2)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 3)){
func_70(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 3);
MISC::CLEAR_BIT(&(uParam0->f_13), 4);
}
elseif(MISC::IS_BIT_SET(uParam0->f_13, 9)){
if(!MISC::IS_STRING_NULL(sParam19)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_70(uParam0, sParam19, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 4)){
func_70(uParam0, sParam16, 0);
MISC::SET_BIT(&(uParam0->f_13), 4);
}
}}}}}}else{
if(MISC::IS_BIT_SET(uParam0->f_13, 0)){
MISC::CLEAR_BIT(&(uParam0->f_13), 0);
}
func_77(sParam11);
func_77(sParam16);
func_77(sParam19);
func_77(sParam16);
func_77("LOSE_WANTED");
if(HUD::DOES_BLIP_EXIST(uParam0->f_5)){
HUD::REMOVE_BLIP(&(uParam0->f_5));
}
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::REMOVE_BLIP(uParam0);
}}
MISC::CLEAR_BIT(&(uParam0->f_13), 11);
MISC::CLEAR_BIT(&(uParam0->f_13), 12);
return 0;
}

int func_57(int iParam0, bool bParam1, bool bParam2){
return func_58(iParam0, !bParam1, bParam2);
}

int func_58(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_59(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_60(var uParam0){
if(MISC::IS_BIT_SET(uParam0->f_13, 12)){
if(func_62(PLAYER::PLAYER_PED_ID())){
if(func_61(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_13, 7)){
return 1;
}}}elseif(func_61(1, 0, 1) || MISC::IS_BIT_SET(uParam0->f_13, 7)){
return 1;
}
return 0;
}

int func_61(bool bParam0, bool bParam1, bool bParam2){
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

int func_62(int iParam0){
float fVar0;
if(!PED::IS_PED_INJURED(iParam0)){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 > -0.5f && fVar0 < 0.5f){
return 1;
}}
return 0;
}

int func_63(int iParam0, int iParam1){
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1){
if(func_64(PLAYER::PLAYER_PED_ID(), iParam0)){
PED::SET_GROUP_SEPARATION_RANGE(func_14(), 50f);
return 1;
}}elseif(PED::IS_PED_GROUP_MEMBER(iParam0, func_14())){
PED::SET_GROUP_SEPARATION_RANGE(func_14(), 50f);
return 1;
}}else{
return 1;
}
return 0;
}

int func_64(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0)){
return 1;
}}}}}
return 0;
}

int func_65(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


void func_66(var uParam0, var uParam1){
if(HUD::DOES_BLIP_EXIST(uParam0)){
if(HUD::DOES_BLIP_EXIST(uParam1->f_6)){
HUD::SET_BLIP_ROUTE(uParam1->f_6, 0);
}
HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
HUD::CLEAR_GPS_MULTI_ROUTE();
uParam1->f_6=uParam0;
HUD::SET_BLIP_ROUTE(uParam0, 1);
}}


var func__67(struct<3> Param0, int iParam1){
var uVar0;
uVar0=HUD::ADD_BLIP_FOR_COORD(Param0);
HUD::SET_BLIP_SCALE(uVar0, func_59(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
HUD::SET_BLIP_ROUTE(uVar0, iParam1);
return uVar0;
}


void func_68(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_69(iParam2), 1);
}

int func_69(int iParam0){
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


void func_70(var uParam0, char* sParam1, bool bParam2){
if(!bParam2){
if(!MISC::IS_STRING_NULL(sParam1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "")){
func_110(sParam1, 7500, 1);
}}}
uParam0->f_10=MISC::GET_GAME_TIMER();
}

int func_71(var uParam0){
if(!PED::IS_PED_INJURED(uParam0->f_16)){
if(AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_16)){
return 1;
}}
return 0;
}

int func_72(var uParam0, int iParam1){
if(iParam1 !=1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
return 1;
}
if(func_74(uParam0)){
return 1;
}}
if(iParam1 !=2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()){
if(func_49() && !func_73()){
return 1;
}}
return 0;
}

int func_73(){
if(Global_22856==1){
return 1;
}
return 0;
}

int func_74(var uParam0){
int iVar0;
int iVar1;
iVar1=MISC::GET_GAME_TIMER();
iVar0=(iVar1 - uParam0->f_10);
if(iVar0 < 35){
return 1;
}
return 0;
}

int func_75(var uParam0, int iParam1){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_76(iVar0, uParam0, iParam1)){
return 1;
}}
return 0;
}

int func_76(int iParam0, var uParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
iVar2=0;
while (iVar2 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2])){
iVar0++;
}
iVar2++;
}
iVar1=VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
if(iParam2 > 0){
if(iVar1 >=iParam2){
if(iParam2 > 1){
if(!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1)){
return 1;
}}else{
return 1;
}}}elseif(iVar1 >=iVar0){
if(iVar0 > 1){
if(!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1)){
return 1;
}}else{
return 1;
}}}
return 0;
}


void func_77(char* sParam0){
if(!MISC::IS_STRING_NULL(sParam0)){
HUD::CLEAR_THIS_PRINT(sParam0);
}}

int func_78(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7[3];
bool bVar8;
bool bVar9;
int iVar10;
int iVar11;
var uVar12[3];
var uVar13[3];
bool bVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
struct<3> Var19;
int iVar20;
int iVar21;
iVar4=0;
uParam0->f_17[0]=uParam1;
uParam0->f_17[1]=uParam2;
uParam0->f_17[2]=uParam3;
uParam0->f_16=uParam1;
uVar12[0]=uParam4;
uVar12[1]=uParam5;
uVar12[2]=uParam6;
uVar13[0]=uParam13;
uVar13[1]=uParam14;
uVar13[2]=uParam15;
iVar6=1;
iVar1=0;
iVar2=0;
iVar3=0;
iVar7[0]=0;
iVar7[1]=0;
iVar7[2]=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
iVar3++;
}
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 29) && !MISC::IS_BIT_SET(uParam0->f_13, 28)){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 1, -1, 0);
}
if(iVar0==2){
MISC::SET_BIT(&(uParam0->f_13), 28);
}}}elseif(!MISC::IS_BIT_SET(uParam0->f_13, 29) && MISC::IS_BIT_SET(uParam0->f_13, 28)){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], 0, -1, 0);
}
if(iVar0==2){
MISC::CLEAR_BIT(&(uParam0->f_13), 28);
}}
iVar0++;
}
if(iVar3==0){
return 1;
}
if(MISC::IS_BIT_SET(uParam0->f_13, 26)){
bVar14=false;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21)){
iVar16=64;
iVar16 |=65536;
iVar16 |=2048;
iVar16 |=1;
iVar16 |=2;
iVar16 |=4;
iVar16 |=32;
iVar16 |=16;
iVar16 |=8;
iVar15=VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar16);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar15, 0)){
uParam0->f_21=iVar15;
}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, 1)) < 400f){
if(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17){
if(func_76(uParam0->f_21, uParam0, iVar3)){
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}
if(TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"))==7 && !func_93(uParam0->f_17[iVar0], uParam0->f_21)){
if(!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
}
}}
iVar0++;
}
return 1;
}
else{
bVar14=true;
}}else{
bVar14=true;
}}else{
bVar14=true;
}}else{
bVar14=true;
}}else{
bVar14=true;
}
if(bVar14){
MISC::CLEAR_BIT(&(uParam0->f_13), 26);
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if(func_91(uParam0, uParam0->f_17[iVar0], uParam8, 1)){
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
}}}
iVar0++;
}}}
if(!MISC::IS_BIT_SET(uParam0->f_13, 26)){
if((!func_90(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10)){
iVar10=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0)){
if(!MISC::IS_BIT_SET(uParam0->f_13, 13)){
if(iParam16==4 || iParam16==5){
}
if(!func_72(uParam0, 2)){
iVar17=0;
iVar18=0;
iVar0=0;
while (iVar0 < 3){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
iVar17++;
}
iVar0++;
}
iVar18=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar17);
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar18])){
func_68(uParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
}
func_70(uParam0, "MORE_SEATS", 0);
MISC::SET_BIT(&(uParam0->f_13), 13);
}}
bVar9=true;
}}else{
bVar9=false;
MISC::CLEAR_BIT(&(uParam0->f_13), 13);
func_77("MORE_SEATS");
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam10)){
if((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2])){
if(!MISC::IS_BIT_SET(uParam0->f_13, 31)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_72(uParam0, 2)){
iVar10=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_89(iVar10, uParam0)){
func_70(uParam0, "CMN_VEHSUIT", 0);
MISC::SET_BIT(&(uParam0->f_13), 31);
}}}elseif(!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
MISC::CLEAR_BIT(&(uParam0->f_13), 31);
func_77("CMN_VEHSUIT");
}}}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10)){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 75)){
MISC::SET_BIT(&(uParam0->f_13), 21);
}}elseif(MISC::IS_BIT_SET(uParam0->f_13, 21)){
MISC::CLEAR_BIT(&(uParam0->f_13), 21);
}}
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 1);
}else{
PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], 0);
}
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar10=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0)){
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if(!func_90(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(!func_88(uParam0->f_17[iVar0])){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}}
}
if(iVar10 !=iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar10)){
if(ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10)){
Var19={
ENTITY::GET_ENTITY_COORDS(iVar10, 1) 
};
if(Var19.f_2 < -1f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
}}}
}}
bVar8=true;
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
iVar10=PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar10, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(iVar10 !=iParam10){
if(!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar10)){
if(ENTITY::GET_ENTITY_SPEED(iVar10) > 5f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
}else{
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
}
bVar8=false;
}
}}else{
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar20=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar20, 0)){
if(iVar10 !=iVar20){
if(ENTITY::GET_ENTITY_SPEED(iVar10) > 5f){
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 4160);
}else{
TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar10, 64);
}
bVar8=false;
}
}}}
}}
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
iVar21=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar21)){
if(func_76(iVar21, uParam0, 0)){
if(func_87(iVar0, uParam0) || !MISC::IS_BIT_SET(uParam0->f_13, 27)){
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
func_15(iVar0, uParam0);
iVar4++;
if(iVar4 >=iVar3){
MISC::SET_BIT(&(uParam0->f_13), 27);
}}}elseif(!func_87(iVar0, uParam0)){
if(ENTITY::GET_ENTITY_MODEL(iVar21)==joaat("sentinel2")){
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
}else{
PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
}
func_86(iVar0, uParam0);
}
}}
if((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()) && !func_85(uParam0->f_17[iVar0], iParam10)) && !func_84(uParam0->f_17[iVar0], iParam10)){
if(func_91(uParam0, uParam0->f_17[iVar0], uParam8, bParam11)){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if(((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])){
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar11==7){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
bVar8=false;
}}
}
if(bVar8){
if(!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
uParam0->f_11=MISC::GET_GAME_TIMER();
uParam0->f_1[iVar0]=func_57(uParam0->f_17[iVar0], 0, 0);
HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
if(bParam9){
func_66(uParam0->f_1[iVar0], uParam0);
}}
}
iVar6=0;
}elseif(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
if(((func_63(uParam0->f_17[iVar0], 1) || func_85(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_77(uVar12[iVar0]);
}
}
else{
if(bParam9){
func_66(uParam0->f_1[iVar0], uParam0);
}
iVar6=0;
}}elseif(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0)){
if(!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10)){
if((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !MISC::IS_BIT_SET(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
if(!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, 0)){
if(!func_63(uParam0->f_17[iVar0], 1)){
if(func_62(uParam0->f_17[iVar0])){
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_leave_vehicle"));
if(iVar11==7){
TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
}}
}
}}else{
if(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}
}
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar11==7 && !func_93(uParam0->f_17[iVar0], iParam10)){
if(((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_83(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 1);
if(MISC::IS_BIT_SET(uParam0->f_13, 10)){
PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
}
TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
}
}
elseif(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)){
uParam0->f_1[iVar0]=func_57(uParam0->f_17[iVar0], 0, 0);
HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
iVar6=0;
}}}elseif(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if(func_91(uParam0, uParam0->f_17[iVar0], uParam8, bParam11)){
if(!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])){
iVar11=TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("script_task_enter_vehicle"));
if(iVar11==7){
TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
}
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], 0);
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
}}}
}
elseif(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10)){
if(!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14())){
if(!MISC::IS_BIT_SET(uParam0->f_13, 21)){
PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_14());
}}elseif(MISC::IS_BIT_SET(uParam0->f_13, 21)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
MISC::SET_BIT(&(uParam0->f_13), 21);
}
}
elseif(PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_14()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10)){
PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
}}}elseif(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_77(uVar12[iVar0]);
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
iVar7[iVar0]=1;
iVar1++;
}
iVar0++;
}
if(!func_72(uParam0, 2)){
if(iVar1 > 0){
iVar0=0;
while (iVar0 < 3){
if(iVar7[iVar0]){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(func_88(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0)){
iVar1=(iVar1 - 1);
iVar7[iVar0]=0;
}
}}elseif(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_88(uParam0->f_17[iVar0])){
}}
iVar0++;
}}
iVar5=MISC::GET_GAME_TIMER();
if((iVar5 - uParam0->f_11) > 1500 || iVar3==1){
if(iVar1 > 0){
if(uParam0->f_12 < iVar1){
if((iVar1==iVar3 || (iVar2 + iVar1)==iVar3) && iVar3 > 1){
if(!MISC::IS_BIT_SET(uParam0->f_13, 5)){
func_70(uParam0, sParam7, 0);
MISC::SET_BIT(&(uParam0->f_13), 5);
uParam0->f_12=iVar1;
}else{
uParam0->f_12=iVar1;
}
}
else{
iVar0=0;
while (iVar0 < 3){
if(iVar7[iVar0]){
if(!func_82(iVar0, uParam0)){
if(!MISC::IS_STRING_NULL(uVar13[iVar0])){
if(!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], "")){
func_80(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
func_79(iVar0, uParam0);
uParam0->f_12=iVar1;
}
}
if(!func_82(iVar0, uParam0)){
func_70(uParam0, uVar12[iVar0], 0);
func_79(iVar0, uParam0);
uParam0->f_12=iVar1;
}
}
else{
uParam0->f_12=iVar1;
}}
iVar0++;
}
}}}else{
uParam0->f_12=0;
}}}
MISC::CLEAR_BIT(&(uParam0->f_13), 10);
if(iVar6 && !bVar9){
iVar0=0;
while (iVar0 < 3){
if(HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0])){
HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
func_77(uVar12[iVar0]);
}
iVar0++;
}
func_77("MORE_SEATS");
return 1;
}}
return 0;
}


void func_79(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::SET_BIT(&(uParam1->f_13), 14);
break;
case 1:
MISC::SET_BIT(&(uParam1->f_13), 15);
break;
case 2:
MISC::SET_BIT(&(uParam1->f_13), 16);
break;
}}


void func_80(var uParam0, char* sParam1, var uParam2, bool bParam3){
if(!bParam3){
if(!MISC::IS_STRING_NULL(uParam1)){
if(!MISC::ARE_STRINGS_EQUAL(sParam1, "")){
func_81(sParam1, uParam2, 7500, 1);
}}}
uParam0->f_10=MISC::GET_GAME_TIMER();
}


void func_81(var uParam0, var uParam1, int iParam2, int iParam3){
iParam3=iParam3;
HUD::BEGIN_TEXT_COMMAND_PRINT(uParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_82(int iParam0, var uParam1){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(uParam1->f_13, 14);
case 1:
return MISC::IS_BIT_SET(uParam1->f_13, 15);
case 2:
return MISC::IS_BIT_SET(uParam1->f_13, 16);
default:
}
return 0;
}

int func_83(int iParam0, float fParam1){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1){
return 1;
}}}
return 0;
}

int func_84(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(!PED::IS_PED_GROUP_MEMBER(iParam0, func_14())){
iVar0=PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0)){
if(iVar0==iParam1){
return 1;
}}}}}
return 0;
}

int func_85(int iParam0, int iParam1){
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1)){
return 1;
}}}}
return 0;
}


void func_86(int iParam0, var uParam1){
switch (iParam0){
case 0:
MISC::SET_BIT(&(uParam1->f_13), 17);
break;
case 1:
MISC::SET_BIT(&(uParam1->f_13), 18);
break;
case 2:
MISC::SET_BIT(&(uParam1->f_13), 19);
break;
}}

int func_87(int iParam0, var uParam1){
switch (iParam0){
case 0:
return MISC::IS_BIT_SET(uParam1->f_13, 17);
case 1:
return MISC::IS_BIT_SET(uParam1->f_13, 18);
case 2:
return MISC::IS_BIT_SET(uParam1->f_13, 19);
default:
}
return 0;
}

int func_88(int iParam0){
int iVar0;
int iVar1;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(!PED::IS_PED_INJURED(iParam0)){
iVar1=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0)){
if(iVar0==iVar1){
if(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0)){
return 1;
}}}}}}
return 0;
}

int func_89(int iParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("coach")){
iVar0=0;
iVar1=0;
iVar2=0;
iVar2=0;
while (iVar2 < 3){
if(!PED::IS_PED_INJURED(uParam1->f_17[iVar2])){
iVar0++;
}
iVar2++;
}
iVar3=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
if(!PED::IS_PED_INJURED(iVar3)){
if((iVar3==uParam1->f_17[0] || iVar3==uParam1->f_17[1]) || iVar3==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
iVar4=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
if(!PED::IS_PED_INJURED(iVar4)){
if((iVar4==uParam1->f_17[0] || iVar4==uParam1->f_17[1]) || iVar4==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
iVar5=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
if(!PED::IS_PED_INJURED(iVar5)){
if((iVar5==uParam1->f_17[0] || iVar5==uParam1->f_17[1]) || iVar5==uParam1->f_17[2]){
iVar1++;
}}else{
iVar1++;
}
if(iVar1 < iVar0){
return 1;
}}}
return 0;
}

int func_90(var uParam0){
int iVar0;
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(func_76(iVar0, uParam0, 0)){
return 1;
}}
return 0;
}

int func_91(var uParam0, int iParam1, float fParam2, bool bParam3){
int iVar0;
if(!PED::IS_PED_INJURED(iParam1)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
if(!ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0)){
if(func_90(uParam0)){
return 1;
}}elseif(bParam3){
return 1;
}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, uParam2, uParam2, 3f, 0, 1, 0)){
return 1;
}}}elseif(ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)){
if(!bParam3){
iVar0=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
if(func_76(iVar0, uParam0, 0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(func_92(iVar0)){
return 1;
}
}}}else{
return 1;
}}else{
return 1;
}}}
return 0;
}

int func_92(int iParam0){
float fVar0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
fVar0=ENTITY::GET_ENTITY_SPEED(iParam0);
if(fVar0 > -0.5f && fVar0 < 0.5f){
return 1;
}}
return 0;
}

int func_93(int iParam0, int iParam1){
int iVar0;
if(!PED::IS_PED_INJURED(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_USING(iParam0);
if(iVar0==iParam1){
return 1;
}}}
return 0;
}


void func_94(){
int iVar0;
int iVar1;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)){
iVar0=PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
iVar1=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
if(!PED::IS_PED_INJURED(iVar1)){
if(iVar1 !=PLAYER::PLAYER_PED_ID()){
if(ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1)){
if(!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID())){
TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
}}}}}}}


void func_95(var uParam0){
int iVar0;
if(!MISC::IS_BIT_SET(uParam0->f_13, 25)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
}
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, 0);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, 1);
PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, 1);
PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
}}
iVar0++;
}
MISC::SET_BIT(&(uParam0->f_13), 25);
}}


void func_96(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0])){
if(!PED::IS_PED_INJURED(uParam0->f_17[iVar0])){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0])){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 0);
}}}
iVar0++;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
}}}}


var func__97(){
var uVar0;
return uVar0;
}


Vector3 func__98(){
struct<3> Var0;
return Var0;
}

int func_99(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1327) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1327, 0)){
return 1;
}
return 0;
}


bool func_100(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13){
return func_56(uParam0, Param1, func_101(), Param2, Param3, iParam5, 5, 0, 0, 0, iParam6, sParam7, func_97(), func_97(), func_97(), func_97(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, func_97(), func_97(), func_97(), 1, fParam4);
}


Vector3 func__101(){
return 0f, 0f, 2f;
}

int func_102(){
int iVar0;
if(func_103()){
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44[iVar0 /*8*/], 1)){
return iVar0;
}}
iVar0++;
}}
return -1;
}

int func_103(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44[iVar0 /*8*/], 0)){
return 1;
}}
iVar0++;
}}
return 0;
}


void func_104(int iParam0, int iParam1){
Global_63496=iParam0;
Global_63497=iParam1;
}

int func_105(bool bParam0){
int iVar0;
int iVar1;
iVar1=0;
while (iVar1 <=2){
if(((ENTITY::DOES_ENTITY_EXIST(Local_44[iVar1 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar1 /*8*/], 0)) && !func_109(Local_44[iVar1 /*8*/])) && (!bParam0 || func_106(Local_44[iVar1 /*8*/]))){
iVar0++;
}
iVar1++;
}
return iVar0;
}

int func_106(int iParam0){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0)==iLocal_1284){
if(func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) < 500f){
return 1;
}}elseif(func_107(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 300f){
return 1;
}
return 0;
}


float func_107(int iParam0, int iParam1, int iParam2){
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


float func_108(int iParam0, struct<3> Param1, int iParam2){
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

int func_109(int iParam0){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000)){
return 1;
}}
return 0;
}


void func_110(char* sParam0, int iParam1, int iParam2){
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}


void func_111(struct<3> Param0, float fParam1, int iParam2, int iParam3){
struct<3> Var0;
var uVar1;
if(ENTITY::DOES_ENTITY_EXIST(Global_104373.f_4)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104373.f_4, 0)){
if(func_167(24) !=Global_104373.f_4){
if(iParam2==1){
if(func_164(ENTITY::GET_ENTITY_COORDS(Global_104373.f_4, 1), iParam3, &Var0, &uVar1)){
Param0={
Var0 
};
fParam1=uVar1;
}}
func_112(Global_104373.f_4, Param0, fParam1, 24, 0);
}}}}


void func_112(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4){
struct<60> Var0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(iParam3 !=24 && iParam3 !=25){
return;
}
if(iParam3==24){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[25], 0)){
if(Global_77479.f_484[25]==iParam0){
return;
}}}
if(!bParam4){
if((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("tourbus")){
return;
}}
func_163(iParam3);
Var0.f_9=49;
Var0.f_59=2;
func_158(iParam0, &Var0);
if(func_157(Param1, 0f, 0f, 0f, 0)){
Param1={
ENTITY::GET_ENTITY_COORDS(iParam0, 1) 
};
uParam2=ENTITY::GET_ENTITY_HEADING(iParam0);
}
if(iParam3==24){
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=joaat("vehicle_gen_controller")){
Global_78467=MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
}}
func_150(iParam3, &Var0, Param1, uParam2, func_156(iParam0));
func_113(iParam3, iParam0, 0);
}}


void func_113(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(!func_146(&(Global_77479.f_555[0 /*21*/]), iParam0)){
return;
}
if(!MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
if(Global_77479.f_555[0 /*21*/].f_4 !=ENTITY::GET_ENTITY_MODEL(iParam1)){
return;
}}
if(Global_78386 !=-1 && Global_78386 !=iParam0){
return;
}
if(ENTITY::DOES_ENTITY_EXIST(iParam1)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
}
if(iParam0==24){
Global_113810.f_32752.f_4801=func_135();
}
if(iParam1 !=Global_77479.f_139[iParam0]){
if(iParam0==24){
iVar0=func_167(iParam0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 !=iVar0){
func_114(iVar0, 145);
}}
Global_78385=iParam1;
Global_78386=iParam0;
Global_78387=iParam2;
}}}}


void func_114(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_115(iParam0)){
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
iParam1=Global_113810.f_2366.f_539.f_4321;
}}
iVar1=0;
while (iVar1 < 3){
iVar2=0;
while (iVar2 < 2){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1))){
Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66=0;
Global_113810.f_32752.f_5592[iVar1]=iVar2;
}}}
iVar2++;
}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1))){
if(MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1))){
Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66=0;
}}}
iVar1++;
}
Global_113810.f_32752.f_5590=iParam1;
Global_78384=iParam0;
Global_113810.f_32752.f_5588=1;
func_158(iParam0, &(Global_113810.f_32752.f_5510));
}

int func_115(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_133(iParam0, 0, 0)) || func_133(iParam0, 1, 0)) || func_133(iParam0, 2, 0)) || func_156(iParam0) !=145) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || !func_116(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_131(iParam0)){
}
if(func_131(iParam0)){
}
if(func_133(iParam0, 0, 0)){
}
if(func_133(iParam0, 1, 0)){
}
if(func_133(iParam0, 2, 0)){
}
if(func_156(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_116(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_117(iParam0, 0, -1)){
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

int func_117(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_128()){
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
if((((!func_127() && !func_126()) && !func_125()) && !func_124()) && !func_128()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_123() || MISC::IS_PC_VERSION()) || func_122()){
}elseif(!func_125()){
return 0;
}}
if(bParam1){
if(!func_120(iParam0, iParam2)){
return 0;
}}
if(!func_118(iParam0)){
return 0;
}
return 1;
}

int func_118(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_119()){
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

int func_119(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_120(int iParam0, int iParam1){
int iVar0;
int iVar1;
if((!Global_2764417 && iParam1 >=0) && iParam1 <=415){
if(MISC::IS_BIT_SET(Global_1586488[iParam1 /*142*/].f_103, 2)){
return 1;
}}
if(Global_2764416){
return 1;
}
iVar0=1;
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
if(iParam0==joaat("btype3")){
if((!Global_262145.f_7142 && !Global_262145.f_13570) && iVar1 < Global_262145.f_13571){
iVar0=0;
}}
if(iParam0==joaat("faction3")){
if(!Global_262145.f_14912 && iVar1 < Global_262145.f_14924){
iVar0=0;
}}elseif(iParam0==joaat("virgo3") || iParam0==joaat("virgo2")){
if(!Global_262145.f_14908 && iVar1 < Global_262145.f_14920){
iVar0=0;
}}elseif(iParam0==joaat("sabregt2")){
if(!Global_262145.f_14909 && iVar1 < Global_262145.f_14921){
iVar0=0;
}}elseif(iParam0==joaat("tornado5")){
if(!Global_262145.f_14910 && iVar1 < Global_262145.f_14922){
iVar0=0;
}}elseif(iParam0==joaat("minivan2")){
if(!Global_262145.f_14911 && iVar1 < Global_262145.f_14923){
iVar0=0;
}}elseif(iParam0==joaat("slamvan3")){
if(!Global_262145.f_14913 && iVar1 < Global_262145.f_14925){
iVar0=0;
}}
if(iParam0==joaat("prototipo")){
if(!Global_262145.f_14914 && iVar1 < Global_262145.f_14917){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_14915 && iVar1 < Global_262145.f_14918){
iVar0=0;
}}elseif(iParam0==joaat("pfister811")){
if(!Global_262145.f_14916 && iVar1 < Global_262145.f_14919){
iVar0=0;
}}
if(iParam0==joaat("bf400")){
if(!Global_262145.f_17493 && iVar1 < Global_262145.f_17458){
iVar0=0;
}}elseif(iParam0==joaat("brioso")){
if(!Global_262145.f_17488 && iVar1 < Global_262145.f_17453){
iVar0=0;
}}elseif(iParam0==joaat("cliffhanger")){
if(!Global_262145.f_17492 && iVar1 < Global_262145.f_17457){
iVar0=0;
}}elseif(iParam0==joaat("contender")){
if(!Global_262145.f_17491 && iVar1 < Global_262145.f_17456){
iVar0=0;
}}elseif(iParam0==joaat("le7b")){
if(!Global_262145.f_17485 && iVar1 < Global_262145.f_17450){
iVar0=0;
}}elseif(iParam0==joaat("omnis")){
if(!Global_262145.f_17486 && iVar1 < Global_262145.f_17451){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck")){
if(!Global_262145.f_17489 && iVar1 < Global_262145.f_17454){
iVar0=0;
}}elseif(iParam0==joaat("trophytruck2")){
if(!Global_262145.f_17490 && iVar1 < Global_262145.f_17455){
iVar0=0;
}}elseif(iParam0==joaat("tropos")){
if(!Global_262145.f_17487 && iVar1 < Global_262145.f_17452){
iVar0=0;
}}elseif(iParam0==joaat("gargoyle")){
if(!Global_262145.f_17495 && iVar1 < Global_262145.f_17460){
iVar0=0;
}}elseif(iParam0==joaat("rallytruck")){
if(!Global_262145.f_17496 && iVar1 < Global_262145.f_17461){
iVar0=0;
}}elseif(iParam0==joaat("tampa2")){
if(!Global_262145.f_17484 && iVar1 < Global_262145.f_17449){
iVar0=0;
}}elseif(iParam0==joaat("tyrus")){
if(!Global_262145.f_17483 && iVar1 < Global_262145.f_17448){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_17482 && iVar1 < Global_262145.f_17447){
iVar0=0;
}}elseif(iParam0==joaat("lynx")){
if(!Global_262145.f_17494 && iVar1 < Global_262145.f_17459){
iVar0=0;
}}elseif(iParam0==joaat("stalion2")){
if(!Global_262145.f_17497 && iVar1 < Global_262145.f_17462){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet2")){
if(!Global_262145.f_17498 && iVar1 < Global_262145.f_17463){
iVar0=0;
}}elseif(iParam0==joaat("dominator2")){
if(!Global_262145.f_17499 && iVar1 < Global_262145.f_17464){
iVar0=0;
}}elseif(iParam0==joaat("buffalo3")){
if(!Global_262145.f_17500 && iVar1 < Global_262145.f_17465){
iVar0=0;
}}
if(iParam0==joaat("defiler")){
if(!Global_262145.f_17654 && iVar1 < Global_262145.f_17676){
iVar0=0;
}}elseif(iParam0==joaat("nightblade")){
if(!Global_262145.f_17655 && iVar1 < Global_262145.f_17677){
iVar0=0;
}}elseif(iParam0==joaat("zombiea")){
if(!Global_262145.f_17656 && iVar1 < Global_262145.f_17678){
iVar0=0;
}}elseif(iParam0==joaat("esskey")){
if(!Global_262145.f_17657 && iVar1 < Global_262145.f_17679){
iVar0=0;
}}elseif(iParam0==joaat("avarus")){
if(!Global_262145.f_17658 && iVar1 < Global_262145.f_17680){
iVar0=0;
}}elseif(iParam0==joaat("zombieb")){
if(!Global_262145.f_17659 && iVar1 < Global_262145.f_17681){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou2")){
if(!Global_262145.f_17661 && iVar1 < Global_262145.f_17682){
iVar0=0;
}}elseif(iParam0==joaat("vortex")){
if(!Global_262145.f_17662 && iVar1 < Global_262145.f_17683){
iVar0=0;
}}elseif(iParam0==joaat("shotaro")){
if(!Global_262145.f_17663 && iVar1 < Global_262145.f_17684){
iVar0=0;
}}elseif(iParam0==joaat("chimera")){
if(!Global_262145.f_17664 && iVar1 < Global_262145.f_17685){
iVar0=0;
}}elseif(iParam0==joaat("raptor")){
if(!Global_262145.f_17665 && iVar1 < Global_262145.f_17686){
iVar0=0;
}}elseif(iParam0==joaat("daemon2")){
if(!Global_262145.f_17666 && iVar1 < Global_262145.f_17687){
iVar0=0;
}}elseif(iParam0==joaat("blazer4")){
if(!Global_262145.f_17667 && iVar1 < Global_262145.f_17688){
iVar0=0;
}}elseif(iParam0==joaat("tornado6")){
if(!Global_262145.f_17673 && iVar1 < Global_262145.f_17695){
iVar0=0;
}}elseif(iParam0==joaat("youga2")){
if(!Global_262145.f_17670 && iVar1 < Global_262145.f_17691){
iVar0=0;
}}elseif(iParam0==joaat("wolfsbane")){
if(!Global_262145.f_17671 && iVar1 < Global_262145.f_17692){
iVar0=0;
}}elseif(iParam0==joaat("faggio3")){
if(!Global_262145.f_17672 && iVar1 < Global_262145.f_17693){
iVar0=0;
}}elseif(iParam0==joaat("faggio")){
if(!Global_262145.f_17660 && iVar1 < Global_262145.f_17694){
iVar0=0;
}}elseif(iParam0==joaat("bagger")){
if(!Global_262145.f_17674 && iVar1 < Global_262145.f_17696){
iVar0=0;
}}elseif(iParam0==joaat("sanctus")){
if(!Global_262145.f_17668 && iVar1 < Global_262145.f_17689){
iVar0=0;
}}elseif(iParam0==joaat("manchez")){
if(!Global_262145.f_17669 && iVar1 < Global_262145.f_17690){
iVar0=0;
}}elseif(iParam0==joaat("ratbike")){
if(!Global_262145.f_17675 && iVar1 < Global_262145.f_17697){
iVar0=0;
}}
if(iParam0==joaat("voltic2")){
if(!Global_262145.f_19311 && iVar1 < Global_262145.f_19408){
iVar0=0;
}}elseif(iParam0==joaat("ruiner2")){
if(!Global_262145.f_19312 && iVar1 < Global_262145.f_19409){
iVar0=0;
}}elseif(iParam0==joaat("dune4")){
if(!Global_262145.f_19313 && iVar1 < Global_262145.f_19410){
iVar0=0;
}}elseif(iParam0==joaat("dune5")){
if(!Global_262145.f_19314 && iVar1 < Global_262145.f_19411){
iVar0=0;
}}elseif(iParam0==joaat("phantom2")){
if(!Global_262145.f_19315 && iVar1 < Global_262145.f_19412){
iVar0=0;
}}elseif(iParam0==joaat("technical2")){
if(!Global_262145.f_19316 && iVar1 < Global_262145.f_19413){
iVar0=0;
}}elseif(iParam0==joaat("boxville5")){
if(!Global_262145.f_19317 && iVar1 < Global_262145.f_19414){
iVar0=0;
}}elseif(iParam0==joaat("wastelander")){
if(!Global_262145.f_19318 && iVar1 < Global_262145.f_19415){
iVar0=0;
}}elseif(iParam0==joaat("blazer5")){
if(!Global_262145.f_19319 && iVar1 < Global_262145.f_19416){
iVar0=0;
}}elseif(iParam0==joaat("comet2")){
if(!Global_262145.f_19320 && iVar1 < Global_262145.f_19417){
iVar0=0;
}}elseif(iParam0==joaat("comet3")){
if(!Global_262145.f_19321 && iVar1 < Global_262145.f_19418){
iVar0=0;
}}elseif(iParam0==joaat("diablous")){
if(!Global_262145.f_19322 && iVar1 < Global_262145.f_19419){
iVar0=0;
}}elseif(iParam0==joaat("diablous2")){
if(!Global_262145.f_19323 && iVar1 < Global_262145.f_19420){
iVar0=0;
}}elseif(iParam0==joaat("elegy")){
if(!Global_262145.f_19324 && iVar1 < Global_262145.f_19421){
iVar0=0;
}}elseif(iParam0==joaat("elegy2")){
if(!Global_262145.f_19325 && iVar1 < Global_262145.f_19422){
iVar0=0;
}}elseif(iParam0==joaat("fcr")){
if(!Global_262145.f_19326 && iVar1 < Global_262145.f_19423){
iVar0=0;
}}elseif(iParam0==joaat("fcr2")){
if(!Global_262145.f_19327 && iVar1 < Global_262145.f_19424){
iVar0=0;
}}elseif(iParam0==joaat("italigtb")){
if(!Global_262145.f_19328 && iVar1 < Global_262145.f_19425){
iVar0=0;
}}elseif(iParam0==joaat("italigtb2")){
if(!Global_262145.f_19329 && iVar1 < Global_262145.f_19426){
iVar0=0;
}}elseif(iParam0==joaat("nero")){
if(!Global_262145.f_19330 && iVar1 < Global_262145.f_19427){
iVar0=0;
}}elseif(iParam0==joaat("nero2")){
if(!Global_262145.f_19331 && iVar1 < Global_262145.f_19428){
iVar0=0;
}}elseif(iParam0==joaat("penetrator")){
if(!Global_262145.f_19332 && iVar1 < Global_262145.f_19429){
iVar0=0;
}}elseif(iParam0==joaat("specter")){
if(!Global_262145.f_19333 && iVar1 < Global_262145.f_19430){
iVar0=0;
}}elseif(iParam0==joaat("specter2")){
if(!Global_262145.f_19334 && iVar1 < Global_262145.f_19431){
iVar0=0;
}}elseif(iParam0==joaat("tempesta")){
if(!Global_262145.f_19335 && iVar1 < Global_262145.f_19432){
iVar0=0;
}}
if(iParam0==joaat("gp1")){
if(!Global_262145.f_20392 && iVar1 < Global_262145.f_20388){
iVar0=0;
}}elseif(iParam0==joaat("infernus2")){
if(!Global_262145.f_20393 && iVar1 < Global_262145.f_20389){
iVar0=0;
}}elseif(iParam0==joaat("ruston")){
if(!Global_262145.f_20394 && iVar1 < Global_262145.f_20390){
iVar0=0;
}}elseif(iParam0==joaat("turismo2")){
if(!Global_262145.f_20395 && iVar1 < Global_262145.f_20391){
iVar0=0;
}}
if(iParam0==joaat("xa21")){
if(!Global_262145.f_21274 && iVar1 < Global_262145.f_21282){
iVar0=0;
}}elseif(iParam0==joaat("cheetah2")){
if(!Global_262145.f_21275 && iVar1 < Global_262145.f_21283){
iVar0=0;
}}elseif(iParam0==joaat("torero")){
if(!Global_262145.f_21276 && iVar1 < Global_262145.f_21284){
iVar0=0;
}}elseif(iParam0==joaat("vagner")){
if(!Global_262145.f_21277 && iVar1 < Global_262145.f_21285){
iVar0=0;
}}elseif(iParam0==joaat("ardent")){
if(!Global_262145.f_21278 && iVar1 < Global_262145.f_21286){
iVar0=0;
}}elseif(iParam0==joaat("nightshark")){
if(!Global_262145.f_21279 && iVar1 < Global_262145.f_21287){
iVar0=0;
}}
if(iParam0==joaat("microlight")){
if(!Global_262145.f_22073 && iVar1 < Global_262145.f_22093){
iVar0=0;
}}elseif(iParam0==joaat("mogul")){
if(!Global_262145.f_22085 && iVar1 < Global_262145.f_22105){
iVar0=0;
}}elseif(iParam0==joaat("rogue")){
if(!Global_262145.f_22076 && iVar1 < Global_262145.f_22096){
iVar0=0;
}}elseif(iParam0==joaat("starling")){
if(!Global_262145.f_22086 && iVar1 < Global_262145.f_22106){
iVar0=0;
}}elseif(iParam0==joaat("seabreeze")){
if(!Global_262145.f_22074 && iVar1 < Global_262145.f_22094){
iVar0=0;
}}elseif(iParam0==joaat("tula")){
if(!Global_262145.f_22090 && iVar1 < Global_262145.f_22110){
iVar0=0;
}}elseif(iParam0==joaat("pyro")){
if(!Global_262145.f_22088 && iVar1 < Global_262145.f_22108){
iVar0=0;
}}elseif(iParam0==joaat("molotok")){
if(!Global_262145.f_22089 && iVar1 < Global_262145.f_22109){
iVar0=0;
}}elseif(iParam0==joaat("nokota")){
if(!Global_262145.f_22084 && iVar1 < Global_262145.f_22104){
iVar0=0;
}}elseif(iParam0==joaat("bombushka")){
if(!Global_262145.f_22091 && iVar1 < Global_262145.f_22111){
iVar0=0;
}}elseif(iParam0==joaat("hunter")){
if(!Global_262145.f_22087 && iVar1 < Global_262145.f_22107){
iVar0=0;
}}elseif(iParam0==joaat("havok")){
if(!Global_262145.f_22083 && iVar1 < Global_262145.f_22103){
iVar0=0;
}}elseif(iParam0==joaat("howard")){
if(!Global_262145.f_22075 && iVar1 < Global_262145.f_22095){
iVar0=0;
}}elseif(iParam0==joaat("alphaz1")){
if(!Global_262145.f_22077 && iVar1 < Global_262145.f_22097){
iVar0=0;
}}elseif(iParam0==joaat("cyclone")){
if(!Global_262145.f_22078 && iVar1 < Global_262145.f_22098){
iVar0=0;
}}elseif(iParam0==joaat("visione")){
if(!Global_262145.f_22079 && iVar1 < Global_262145.f_22099){
iVar0=0;
}}elseif(iParam0==joaat("vigilante")){
if(!Global_262145.f_22080 && iVar1 < Global_262145.f_22100){
iVar0=0;
}}elseif(iParam0==joaat("retinue")){
if(!Global_262145.f_22081 && iVar1 < Global_262145.f_22101){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt3")){
if(!Global_262145.f_22082 && iVar1 < Global_262145.f_22102){
iVar0=0;
}}
if(iParam0==joaat("deluxo")){
if(!Global_262145.f_23041 && iVar1 < Global_262145.f_23069){
iVar0=0;
}}elseif(iParam0==joaat("stromberg")){
if(!Global_262145.f_23042 && iVar1 < Global_262145.f_23070){
iVar0=0;
}}elseif(iParam0==joaat("riot2")){
if(!Global_262145.f_23043 && iVar1 < Global_262145.f_23071){
iVar0=0;
}}elseif(iParam0==joaat("chernobog")){
if(!Global_262145.f_23044 && iVar1 < Global_262145.f_23072){
iVar0=0;
}}elseif(iParam0==joaat("khanjali")){
if(!Global_262145.f_23045 && iVar1 < Global_262145.f_23073){
iVar0=0;
}}elseif(iParam0==joaat("akula")){
if(!Global_262145.f_23046 && iVar1 < Global_262145.f_23074){
iVar0=0;
}}elseif(iParam0==joaat("thruster")){
if(!Global_262145.f_23047 && iVar1 < Global_262145.f_23075){
iVar0=0;
}}elseif(iParam0==joaat("barrage")){
if(!Global_262145.f_23048 && iVar1 < Global_262145.f_23076){
iVar0=0;
}}elseif(iParam0==joaat("volatol")){
if(!Global_262145.f_23049 && iVar1 < Global_262145.f_23077){
iVar0=0;
}}elseif(iParam0==joaat("comet4")){
if(!Global_262145.f_23050 && iVar1 < Global_262145.f_23078){
iVar0=0;
}}elseif(iParam0==joaat("neon")){
if(!Global_262145.f_23051 && iVar1 < Global_262145.f_23079){
iVar0=0;
}}elseif(iParam0==joaat("streiter")){
if(!Global_262145.f_23052 && iVar1 < Global_262145.f_23080){
iVar0=0;
}}elseif(iParam0==joaat("sentinel3")){
if(!Global_262145.f_23053 && iVar1 < Global_262145.f_23081){
iVar0=0;
}}elseif(iParam0==joaat("yosemite")){
if(!Global_262145.f_23054 && iVar1 < Global_262145.f_23082){
iVar0=0;
}}elseif(iParam0==joaat("sc1")){
if(!Global_262145.f_23055 && iVar1 < Global_262145.f_23083){
iVar0=0;
}}elseif(iParam0==joaat("autarch")){
if(!Global_262145.f_23056 && iVar1 < Global_262145.f_23084){
iVar0=0;
}}elseif(iParam0==joaat("gt500")){
if(!Global_262145.f_23057 && iVar1 < Global_262145.f_23085){
iVar0=0;
}}elseif(iParam0==joaat("hustler")){
if(!Global_262145.f_23058 && iVar1 < Global_262145.f_23086){
iVar0=0;
}}elseif(iParam0==joaat("revolter")){
if(!Global_262145.f_23059 && iVar1 < Global_262145.f_23087){
iVar0=0;
}}elseif(iParam0==joaat("pariah")){
if(!Global_262145.f_23060 && iVar1 < Global_262145.f_23088){
iVar0=0;
}}elseif(iParam0==joaat("raiden")){
if(!Global_262145.f_23061 && iVar1 < Global_262145.f_23089){
iVar0=0;
}}elseif(iParam0==joaat("savestra")){
if(!Global_262145.f_23062 && iVar1 < Global_262145.f_23090){
iVar0=0;
}}elseif(iParam0==joaat("riata")){
if(!Global_262145.f_23063 && iVar1 < Global_262145.f_23091){
iVar0=0;
}}elseif(iParam0==joaat("hermes")){
if(!Global_262145.f_23064 && iVar1 < Global_262145.f_23092){
iVar0=0;
}}elseif(iParam0==joaat("comet5")){
if(!Global_262145.f_23065 && iVar1 < Global_262145.f_23093){
iVar0=0;
}}elseif(iParam0==joaat("z190")){
if(!Global_262145.f_23066 && iVar1 < Global_262145.f_23094){
iVar0=0;
}}elseif(iParam0==joaat("viseris")){
if(!Global_262145.f_23067 && iVar1 < Global_262145.f_23095){
iVar0=0;
}}elseif(iParam0==joaat("kamacho")){
if(!Global_262145.f_23068 && iVar1 < Global_262145.f_23096){
iVar0=0;
}}
if(iParam0==joaat("gb200")){
if(!Global_262145.f_24263 && iVar1 < Global_262145.f_24279){
iVar0=0;
}}elseif(iParam0==joaat("fagaloa")){
if(!Global_262145.f_24264 && iVar1 < Global_262145.f_24280){
iVar0=0;
}}elseif(iParam0==joaat("ellie")){
if(!Global_262145.f_24268 && iVar1 < Global_262145.f_24284){
iVar0=0;
}}elseif(iParam0==joaat("issi3")){
if(!Global_262145.f_24271 && iVar1 < Global_262145.f_24287){
iVar0=0;
}}elseif(iParam0==joaat("michelli")){
if(!Global_262145.f_24276 && iVar1 < Global_262145.f_24292){
iVar0=0;
}}elseif(iParam0==joaat("flashgt")){
if(!Global_262145.f_24270 && iVar1 < Global_262145.f_24286){
iVar0=0;
}}elseif(iParam0==joaat("hotring")){
if(!Global_262145.f_24262 && iVar1 < Global_262145.f_24278){
iVar0=0;
}}elseif(iParam0==joaat("tezeract")){
if(!Global_262145.f_24269 && iVar1 < Global_262145.f_24285){
iVar0=0;
}}elseif(iParam0==joaat("tyrant")){
if(!Global_262145.f_24275 && iVar1 < Global_262145.f_24291){
iVar0=0;
}}elseif(iParam0==joaat("dominator3")){
if(!Global_262145.f_24274 && iVar1 < Global_262145.f_24290){
iVar0=0;
}}elseif(iParam0==joaat("taipan")){
if(!Global_262145.f_24265 && iVar1 < Global_262145.f_24281){
iVar0=0;
}}elseif(iParam0==joaat("entity2")){
if(!Global_262145.f_24267 && iVar1 < Global_262145.f_24283){
iVar0=0;
}}elseif(iParam0==joaat("jester3")){
if(!Global_262145.f_24277 && iVar1 < Global_262145.f_24293){
iVar0=0;
}}elseif(iParam0==joaat("cheburek")){
if(!Global_262145.f_24273 && iVar1 < Global_262145.f_24289){
iVar0=0;
}}elseif(iParam0==joaat("caracara")){
if(!Global_262145.f_24266 && iVar1 < Global_262145.f_24282){
iVar0=0;
}}elseif(iParam0==joaat("seasparrow")){
if(!Global_262145.f_24272 && iVar1 < Global_262145.f_24288){
iVar0=0;
}}
if(iParam0==joaat("terbyte")){
if(!Global_262145.f_24353 && iVar1 < Global_262145.f_24340){
iVar0=0;
}}elseif(iParam0==joaat("pbus2")){
if(!Global_262145.f_24354 && iVar1 < Global_262145.f_24341){
iVar0=0;
}}elseif(iParam0==joaat("mule4")){
if(!Global_262145.f_24359 && iVar1 < Global_262145.f_24346){
iVar0=0;
}}elseif(iParam0==joaat("pounder2")){
if(!Global_262145.f_24358 && iVar1 < Global_262145.f_24345){
iVar0=0;
}}elseif(iParam0==joaat("swinger")){
if(!Global_262145.f_24356 && iVar1 < Global_262145.f_24343){
iVar0=0;
}}elseif(iParam0==joaat("menacer")){
if(!Global_262145.f_24362 && iVar1 < Global_262145.f_24349){
iVar0=0;
}}elseif(iParam0==joaat("scramjet")){
if(!Global_262145.f_24364 && iVar1 < Global_262145.f_24351){
iVar0=0;
}}elseif(iParam0==joaat("strikeforce")){
if(!Global_262145.f_24365 && iVar1 < Global_262145.f_24352){
iVar0=0;
}}elseif(iParam0==joaat("oppressor2")){
if(!Global_262145.f_24363 && iVar1 < Global_262145.f_24350){
iVar0=0;
}}elseif(iParam0==joaat("patriot2")){
if(!Global_262145.f_24355 && iVar1 < Global_262145.f_24342){
iVar0=0;
}}elseif(iParam0==joaat("stafford")){
if(!Global_262145.f_24357 && iVar1 < Global_262145.f_24344){
iVar0=0;
}}elseif(iParam0==joaat("freecrawler")){
if(!Global_262145.f_24361 && iVar1 < Global_262145.f_24348){
iVar0=0;
}}elseif(iParam0==joaat("blimp3")){
if(!Global_262145.f_24360 && iVar1 < Global_262145.f_24347){
iVar0=0;
}}
if(iParam0==joaat("monster3")){}elseif(iParam0==joaat("cerberus")){}elseif(iParam0==joaat("cerberus2")){}elseif(iParam0==joaat("cerberus3")){}elseif(iParam0==joaat("brutus")){}elseif(iParam0==joaat("brutus2")){}elseif(iParam0==joaat("brutus3")){}elseif(iParam0==joaat("scarab")){}elseif(iParam0==joaat("scarab2")){}elseif(iParam0==joaat("scarab3")){}elseif(iParam0==joaat("imperator")){}elseif(iParam0==joaat("imperator2")){}elseif(iParam0==joaat("imperator3")){}elseif(iParam0==joaat("zr380")){}elseif(iParam0==joaat("zr3802")){}elseif(iParam0==joaat("zr3803")){}elseif(iParam0==joaat("impaler")){}elseif(iParam0==joaat("deveste")){
if(!Global_262145.f_26956 && iVar1 < Global_262145.f_26958){
iVar0=0;
}}elseif(iParam0==joaat("toros")){
if(!Global_262145.f_25969 && iVar1 < Global_262145.f_25962){
iVar0=0;
}}elseif(iParam0==joaat("clique")){
if(!Global_262145.f_25970 && iVar1 < Global_262145.f_25963){
iVar0=0;
}}elseif(iParam0==joaat("italigto")){
if(!Global_262145.f_25971 && iVar1 < Global_262145.f_25964){
iVar0=0;
}}elseif(iParam0==joaat("deviant")){
if(!Global_262145.f_25972 && iVar1 < Global_262145.f_25965){
iVar0=0;
}}elseif(iParam0==joaat("vamos")){
if(!Global_262145.f_26957 && iVar1 < Global_262145.f_26959){
iVar0=0;
}}elseif(iParam0==joaat("tulip")){
if(!Global_262145.f_25973 && iVar1 < Global_262145.f_25966){
iVar0=0;
}}elseif(iParam0==joaat("schlagen")){
if(!Global_262145.f_25974 && iVar1 < Global_262145.f_25967){
iVar0=0;
}}elseif(iParam0==joaat("rcbandito")){
if(!Global_262145.f_25975 && iVar1 < Global_262145.f_25968){
iVar0=0;
}}elseif(iParam0==joaat("thrax")){
if(!Global_262145.f_25980 && iVar1 < Global_262145.f_26001){
iVar0=0;
}}elseif(iParam0==joaat("drafter")){
if(!Global_262145.f_25981 && iVar1 < Global_262145.f_26002){
iVar0=0;
}}elseif(iParam0==joaat("locust")){
if(!Global_262145.f_25982 && iVar1 < Global_262145.f_26003){
iVar0=0;
}}elseif(iParam0==joaat("novak")){
if(!Global_262145.f_25983 && iVar1 < Global_262145.f_26004){
iVar0=0;
}}elseif(iParam0==joaat("zorrusso")){
if(!Global_262145.f_25984 && iVar1 < Global_262145.f_26005){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet3")){
if(!Global_262145.f_25985 && iVar1 < Global_262145.f_26006){
iVar0=0;
}}elseif(iParam0==joaat("issi7")){
if(!Global_262145.f_25986 && iVar1 < Global_262145.f_26007){
iVar0=0;
}}elseif(iParam0==joaat("zion3")){
if(!Global_262145.f_25987 && iVar1 < Global_262145.f_26008){
iVar0=0;
}}elseif(iParam0==joaat("nebula")){
if(!Global_262145.f_25988 && iVar1 < Global_262145.f_26009){
iVar0=0;
}}elseif(iParam0==joaat("hellion")){
if(!Global_262145.f_25989 && iVar1 < Global_262145.f_26010){
iVar0=0;
}}elseif(iParam0==joaat("dynasty")){
if(!Global_262145.f_25990 && iVar1 < Global_262145.f_26011){
iVar0=0;
}}elseif(iParam0==joaat("rrocket")){
if(!Global_262145.f_25991 && iVar1 < Global_262145.f_26012){
iVar0=0;
}}elseif(iParam0==joaat("peyote2")){
if(!Global_262145.f_25992 && iVar1 < Global_262145.f_26013){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet4")){
if(!Global_262145.f_25993 && iVar1 < Global_262145.f_26014){
iVar0=0;
}}elseif(iParam0==joaat("caracara2")){
if(!Global_262145.f_25994 && iVar1 < Global_262145.f_26015){
iVar0=0;
}}elseif(iParam0==joaat("jugular")){
if(!Global_262145.f_25995 && iVar1 < Global_262145.f_26016){
iVar0=0;
}}elseif(iParam0==joaat("s80")){
if(!Global_262145.f_25996 && iVar1 < Global_262145.f_26017){
iVar0=0;
}}elseif(iParam0==joaat("krieger")){
if(!Global_262145.f_25997 && iVar1 < Global_262145.f_26018){
iVar0=0;
}}elseif(iParam0==joaat("emerus")){
if(!Global_262145.f_25998 && iVar1 < Global_262145.f_26019){
iVar0=0;
}}elseif(iParam0==joaat("neo")){
if(!Global_262145.f_25999 && iVar1 < Global_262145.f_26020){
iVar0=0;
}}elseif(iParam0==joaat("paragon")){
if(!Global_262145.f_26000 && iVar1 < Global_262145.f_26021){
iVar0=0;
}}elseif(iParam0==joaat("asbo")){
if(!Global_262145.f_28820 && iVar1 < Global_262145.f_28841){
iVar0=0;
}}elseif(iParam0==joaat("kanjo")){
if(!Global_262145.f_28821 && iVar1 < Global_262145.f_28842){
iVar0=0;
}}elseif(iParam0==joaat("everon")){
if(!Global_262145.f_28822 && iVar1 < Global_262145.f_28843){
iVar0=0;
}}elseif(iParam0==joaat("retinue2")){
if(!Global_262145.f_28823 && iVar1 < Global_262145.f_28844){
iVar0=0;
}}elseif(iParam0==joaat("yosemite2")){
if(!Global_262145.f_28824 && iVar1 < Global_262145.f_28845){
iVar0=0;
}}elseif(iParam0==joaat("sugoi")){
if(!Global_262145.f_28825 && iVar1 < Global_262145.f_28846){
iVar0=0;
}}elseif(iParam0==joaat("sultan2")){
if(!Global_262145.f_28826 && iVar1 < Global_262145.f_28847){
iVar0=0;
}}elseif(iParam0==joaat("outlaw")){
if(!Global_262145.f_28827 && iVar1 < Global_262145.f_28848){
iVar0=0;
}}elseif(iParam0==joaat("vagrant")){
if(!Global_262145.f_28828 && iVar1 < Global_262145.f_28849){
iVar0=0;
}}elseif(iParam0==joaat("komoda")){
if(!Global_262145.f_28829 && iVar1 < Global_262145.f_28850){
iVar0=0;
}}elseif(iParam0==joaat("stryder")){
if(!Global_262145.f_28830 && iVar1 < Global_262145.f_28851){
iVar0=0;
}}elseif(iParam0==joaat("furia")){
if(!Global_262145.f_28831 && iVar1 < Global_262145.f_28852){
iVar0=0;
}}elseif(iParam0==joaat("zhaba")){
if(!Global_262145.f_28832 && iVar1 < Global_262145.f_28853){
iVar0=0;
}}elseif(iParam0==joaat("jb7002")){
if(!Global_262145.f_28833 && iVar1 < Global_262145.f_28854){
iVar0=0;
}}elseif(iParam0==joaat("firetruk")){
if(!Global_262145.f_28834 && iVar1 < Global_262145.f_28855){
iVar0=0;
}}elseif(iParam0==joaat("burrito2")){
if(!Global_262145.f_28835 && iVar1 < Global_262145.f_28856){
iVar0=0;
}}elseif(iParam0==joaat("boxville")){
if(!Global_262145.f_28836 && iVar1 < Global_262145.f_28857){
iVar0=0;
}}elseif(iParam0==joaat("stockade")){
if(!Global_262145.f_28837 && iVar1 < Global_262145.f_28858){
iVar0=0;
}}elseif(iParam0==joaat("minitank")){
if(!Global_262145.f_28838 && iVar1 < Global_262145.f_28859){
iVar0=0;
}}elseif(iParam0==joaat("lguard")){
if(!Global_262145.f_28839 && iVar1 < Global_262145.f_28860){
iVar0=0;
}}elseif(iParam0==joaat("blazer2")){
if(!Global_262145.f_28840 && iVar1 < Global_262145.f_28861){
iVar0=0;
}}elseif(iParam0==joaat("formula")){
if((!Global_262145.f_28863 && iVar1 < Global_262145.f_28864) && !Global_262145.f_28818){
iVar0=0;
}}elseif(iParam0==joaat("formula2")){
if((!Global_262145.f_28866 && iVar1 < Global_262145.f_28867) && !Global_262145.f_28819){
iVar0=0;
}}elseif(iParam0==joaat("imorgon")){
if(!Global_262145.f_28871 && iVar1 < Global_262145.f_28874){
iVar0=0;
}}elseif(iParam0==joaat("rebla")){
if(!Global_262145.f_28872 && iVar1 < Global_262145.f_28875){
iVar0=0;
}}elseif(iParam0==joaat("vstr")){
if(!Global_262145.f_28873 && iVar1 < Global_262145.f_28876){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet5")){
if(!Global_262145.f_29889 && iVar1 < Global_262145.f_29554){
iVar0=0;
}}elseif(iParam0==joaat("club")){
if(!Global_262145.f_29540 && iVar1 < Global_262145.f_29561){
iVar0=0;
}}elseif(iParam0==joaat("dukes3")){
if(!Global_262145.f_29541 && iVar1 < Global_262145.f_29547){
iVar0=0;
}}elseif(iParam0==joaat("yosemite3")){
if(!Global_262145.f_29887 && iVar1 < Global_262145.f_29555){
iVar0=0;
}}elseif(iParam0==joaat("peyote3")){
if(!Global_262145.f_29888 && iVar1 < Global_262145.f_29556){
iVar0=0;
}}elseif(iParam0==joaat("glendale2")){
if(!Global_262145.f_29534 && iVar1 < Global_262145.f_29553){
iVar0=0;
}}elseif(iParam0==joaat("penumbra2")){
if(!Global_262145.f_29535 && iVar1 < Global_262145.f_29562){
iVar0=0;
}}elseif(iParam0==joaat("landstalker2")){
if(!Global_262145.f_29536 && iVar1 < Global_262145.f_29552){
iVar0=0;
}}elseif(iParam0==joaat("seminole2")){
if(!Global_262145.f_29537 && iVar1 < Global_262145.f_29550){
iVar0=0;
}}elseif(iParam0==joaat("tigon")){
if(!Global_262145.f_29883 && iVar1 < Global_262145.f_29557){
iVar0=0;
}}elseif(iParam0==joaat("openwheel1")){
if(!Global_262145.f_29884 && iVar1 < Global_262145.f_29558){
iVar0=0;
}}elseif(iParam0==joaat("openwheel2")){
if(!Global_262145.f_29885 && iVar1 < Global_262145.f_29559){
iVar0=0;
}}elseif(iParam0==joaat("coquette4")){
if(!Global_262145.f_29886 && iVar1 < Global_262145.f_29560){
iVar0=0;
}}elseif(iParam0==joaat("manana2")){
if(!Global_262145.f_29538 && iVar1 < Global_262145.f_29549){
iVar0=0;
}}elseif(iParam0==joaat("youga3")){
if(!Global_262145.f_29539 && iVar1 < Global_262145.f_29551){
iVar0=0;
}}elseif(iParam0==joaat("toreador")){
if(!Global_262145.f_30348 && iVar1 < Global_262145.f_30331){
iVar0=0;
}}elseif(iParam0==joaat("annihilator2")){
if(!Global_262145.f_30349 && iVar1 < Global_262145.f_30332){
iVar0=0;
}}elseif(iParam0==joaat("alkonost")){
if(!Global_262145.f_30350 && iVar1 < Global_262145.f_30333){
iVar0=0;
}}elseif(iParam0==joaat("patrolboat")){
if(!Global_262145.f_30351 && iVar1 < Global_262145.f_30334){
iVar0=0;
}}elseif(iParam0==joaat("longfin")){
if(!Global_262145.f_30352 && iVar1 < Global_262145.f_30335){
iVar0=0;
}}elseif(iParam0==joaat("winky")){
if(!Global_262145.f_30353 && iVar1 < Global_262145.f_30336){
iVar0=0;
}}elseif(iParam0==joaat("veto")){
if(!Global_262145.f_30354 && iVar1 < Global_262145.f_30337){
iVar0=0;
}}elseif(iParam0==joaat("veto2")){
if(!Global_262145.f_30355 && iVar1 < Global_262145.f_30338){
iVar0=0;
}}elseif(iParam0==joaat("italirsx")){
if(!Global_262145.f_30356 && iVar1 < Global_262145.f_30339){
iVar0=0;
}}elseif(iParam0==joaat("weevil")){
if(Global_262145.f_30365){
}elseif(!Global_262145.f_30357 && iVar1 < Global_262145.f_30340){
iVar0=0;
}}elseif(iParam0==joaat("manchez2")){
if(!Global_262145.f_30358 && iVar1 < Global_262145.f_30341){
iVar0=0;
}}elseif(iParam0==joaat("slamtruck")){
if(!Global_262145.f_30359 && iVar1 < Global_262145.f_30342){
iVar0=0;
}}elseif(iParam0==joaat("vetir")){
if(!Global_262145.f_30360 && iVar1 < Global_262145.f_30343){
iVar0=0;
}}elseif(iParam0==joaat("squaddie")){
if(!Global_262145.f_30361 && iVar1 < Global_262145.f_30344){
iVar0=0;
}}elseif(iParam0==joaat("brioso2")){
if(Global_262145.f_30366){
}elseif(!Global_262145.f_30362 && iVar1 < Global_262145.f_30345){
iVar0=0;
}}elseif(iParam0==joaat("dinghy5")){
if(!Global_262145.f_30363 && iVar1 < Global_262145.f_30346){
iVar0=0;
}}elseif(iParam0==joaat("verus")){
if(!Global_262145.f_30364 && iVar1 < Global_262145.f_30347){
iVar0=0;
}}elseif(iParam0==joaat("tailgater2")){
if(!Global_262145.f_31216 && iVar1 < Global_262145.f_31199){
iVar0=0;
}}elseif(iParam0==joaat("euros")){
if(!Global_262145.f_31217 && iVar1 < Global_262145.f_31200){
iVar0=0;
}}elseif(iParam0==joaat("sultan3")){
if(!Global_262145.f_31218 && iVar1 < Global_262145.f_31201){
iVar0=0;
}}elseif(iParam0==joaat("rt3000")){
if(!Global_262145.f_31219 && iVar1 < Global_262145.f_31202){
iVar0=0;
}}elseif(iParam0==joaat("vectre")){
if(!Global_262145.f_31220 && iVar1 < Global_262145.f_31203){
iVar0=0;
}}elseif(iParam0==joaat("zr350")){
if(!Global_262145.f_31221 && iVar1 < Global_262145.f_31204){
iVar0=0;
}}elseif(iParam0==joaat("warrener2")){
if(!Global_262145.f_31222 && iVar1 < Global_262145.f_31205){
iVar0=0;
}}elseif(iParam0==joaat("calico")){
if(!Global_262145.f_31223 && iVar1 < Global_262145.f_31206){
iVar0=0;
}}elseif(iParam0==joaat("remus")){
if(!Global_262145.f_31224 && iVar1 < Global_262145.f_31207){
iVar0=0;
}}elseif(iParam0==joaat("cypher")){
if(!Global_262145.f_31225 && iVar1 < Global_262145.f_31208){
iVar0=0;
}}elseif(iParam0==joaat("dominator7")){
if(!Global_262145.f_31226 && iVar1 < Global_262145.f_31209){
iVar0=0;
}}elseif(iParam0==joaat("jester4")){
if(!Global_262145.f_31227 && iVar1 < Global_262145.f_31210){
iVar0=0;
}}elseif(iParam0==joaat("futo2")){
if(!Global_262145.f_31228 && iVar1 < Global_262145.f_31211){
iVar0=0;
}}elseif(iParam0==joaat("dominator8")){
if(!Global_262145.f_31229 && iVar1 < Global_262145.f_31212){
iVar0=0;
}}elseif(iParam0==joaat("previon")){
if(!Global_262145.f_31230 && iVar1 < Global_262145.f_31213){
iVar0=0;
}}elseif(iParam0==joaat("growler")){
if(!Global_262145.f_31231 && iVar1 < Global_262145.f_31214){
iVar0=0;
}}elseif(iParam0==joaat("comet6")){
if(!Global_262145.f_31232 && iVar1 < Global_262145.f_31215){
iVar0=0;
}}elseif(iParam0==joaat("champion")){
if(!Global_262145.f_32099 && iVar1 < Global_262145.f_32084){
iVar0=0;
}}elseif(iParam0==joaat("buffalo4")){
if(!Global_262145.f_32100 && iVar1 < Global_262145.f_32085){
iVar0=0;
}}elseif(iParam0==joaat("deity")){
if(!Global_262145.f_32101 && iVar1 < Global_262145.f_32086){
iVar0=0;
}}elseif(iParam0==joaat("jubilee")){
if(!Global_262145.f_32102 && iVar1 < Global_262145.f_32087){
iVar0=0;
}}elseif(iParam0==joaat("ignus")){
if(!Global_262145.f_32103 && iVar1 < Global_262145.f_32088){
iVar0=0;
}}elseif(iParam0==joaat("cinquemila")){
if(!Global_262145.f_32104 && iVar1 < Global_262145.f_32089){
iVar0=0;
}}elseif(iParam0==joaat("astron")){
if(!Global_262145.f_32105 && iVar1 < Global_262145.f_32090){
iVar0=0;
}}elseif(iParam0==joaat("comet7")){
if(!Global_262145.f_32106 && iVar1 < Global_262145.f_32091){
iVar0=0;
}}elseif(iParam0==joaat("zeno")){
if(!Global_262145.f_32107 && iVar1 < Global_262145.f_32092){
iVar0=0;
}}elseif(iParam0==joaat("reever")){
if(!Global_262145.f_32108 && iVar1 < Global_262145.f_32093){
iVar0=0;
}}elseif(iParam0==joaat("iwagen")){
if(!Global_262145.f_32109 && iVar1 < Global_262145.f_32094){
iVar0=0;
}}elseif(iParam0==joaat("granger2")){
if(!Global_262145.f_32110 && iVar1 < Global_262145.f_32095){
iVar0=0;
}}elseif(iParam0==joaat("patriot3")){
if(!Global_262145.f_32111 && iVar1 < Global_262145.f_32096){
iVar0=0;
}}elseif(iParam0==joaat("shinobi")){
if(!Global_262145.f_32112 && iVar1 < Global_262145.f_32097){
iVar0=0;
}}elseif(iParam0==joaat("baller7")){
if(Global_262145.f_32177){
}elseif(!Global_262145.f_32113 && iVar1 < Global_262145.f_32098){
iVar0=0;
}}elseif(iParam0==joaat("brioso3")){
if(!Global_262145.f_33350 && iVar1 < Global_262145.f_33331){
iVar0=0;
}}elseif(iParam0==joaat("corsita")){
if(!Global_262145.f_33344 && iVar1 < Global_262145.f_33325){
iVar0=0;
}}elseif(iParam0==joaat("draugur")){
if(!Global_262145.f_33348 && iVar1 < Global_262145.f_33329){
iVar0=0;
}}elseif(iParam0==joaat("greenwood")){
if(!Global_262145.f_33342 && iVar1 < Global_262145.f_33323){
iVar0=0;
}}elseif(iParam0==joaat("kanjosj")){
if(!Global_262145.f_33353 && iVar1 < Global_262145.f_33334){
iVar0=0;
}}elseif(iParam0==joaat("lm87")){
if(!Global_262145.f_33345 && iVar1 < Global_262145.f_33326){
iVar0=0;
}}elseif(iParam0==joaat("postlude")){
if(!Global_262145.f_33354 && iVar1 < Global_262145.f_33335){
iVar0=0;
}}elseif(iParam0==joaat("rhinehart")){
if(!Global_262145.f_33356 && iVar1 < Global_262145.f_33337){
iVar0=0;
}}elseif(iParam0==joaat("sm722")){
if(!Global_262145.f_33347 && iVar1 < Global_262145.f_33328){
iVar0=0;
}}elseif(iParam0==joaat("tenf")){
if(!Global_262145.f_33355 && iVar1 < Global_262145.f_33336){
iVar0=0;
}}elseif(iParam0==joaat("tenf2")){
if(!Global_262145.f_33358 && iVar1 < Global_262145.f_33339){
iVar0=0;
}}elseif(iParam0==joaat("torero2")){
if(!Global_262145.f_33343 && iVar1 < Global_262145.f_33324){
iVar0=0;
}}elseif(iParam0==joaat("vigero2")){
if(!Global_262145.f_33351 && iVar1 < Global_262145.f_33332){
iVar0=0;
}}elseif(iParam0==joaat("weevil2")){
if(!Global_262145.f_33357 && iVar1 < Global_262145.f_33338){
iVar0=0;
}}elseif(iParam0==joaat("ruiner4")){
if(!Global_262145.f_33349 && iVar1 < Global_262145.f_33330){
iVar0=0;
}}elseif(iParam0==joaat("sentinel4")){
if(!Global_262145.f_33359 && iVar1 < Global_262145.f_33340){
iVar0=0;
}}elseif(iParam0==joaat("conada")){
if(!Global_262145.f_33346 && iVar1 < Global_262145.f_33327){
iVar0=0;
}}elseif(iParam0==joaat("omnisegt")){
if(!Global_262145.f_33341 && iVar1 < Global_262145.f_33322){
iVar0=0;
}}elseif(iParam0==joaat("manchez3")){
if(!Global_262145.f_34217 && iVar1 < Global_262145.f_34201){
iVar0=0;
}}elseif(iParam0==joaat("brickade2")){
if(!Global_262145.f_34217 && iVar1 < Global_262145.f_34201){
iVar0=0;
}}elseif(iParam0==joaat("eudora")){
if(!Global_262145.f_34226 && iVar1 < Global_262145.f_34209){
iVar0=0;
}}elseif(iParam0==joaat("powersurge")){
if(!Global_262145.f_34220 && iVar1 < Global_262145.f_34204){
iVar0=0;
}}elseif(iParam0==joaat("journey2")){
if(!Global_262145.f_34214 && iVar1 < Global_262145.f_34198){
iVar0=0;
}}elseif(iParam0==joaat("surfer3")){
if(!Global_262145.f_34215 && iVar1 < Global_262145.f_34199){
iVar0=0;
}}elseif(iParam0==joaat("entity3")){
if(!Global_262145.f_34212 && iVar1 < Global_262145.f_34196){
iVar0=0;
}}elseif(iParam0==joaat("panthere")){
if(!Global_262145.f_34223 && iVar1 < Global_262145.f_34207){
iVar0=0;
}}elseif(iParam0==joaat("boor")){
if(!Global_262145.f_34227 && iVar1 < Global_262145.f_34211){
iVar0=0;
}}elseif(iParam0==joaat("everon2")){
if(!Global_262145.f_34224 && iVar1 < Global_262145.f_34208){
iVar0=0;
}}elseif(iParam0==joaat("tulip2")){
if(!Global_262145.f_34213 && iVar1 < Global_262145.f_34197){
iVar0=0;
}}elseif(iParam0==joaat("r300")){
if(!Global_262145.f_34216 && iVar1 < Global_262145.f_34200){
iVar0=0;
}}elseif(iParam0==joaat("virtue")){
if(!Global_262145.f_34225 && iVar1 < Global_262145.f_34210){
iVar0=0;
}}elseif(iParam0==joaat("issi8")){
if(!Global_262145.f_34221 && iVar1 < Global_262145.f_34205){
iVar0=0;
}}elseif(iParam0==joaat("broadway")){
if(!Global_262145.f_34222 && iVar1 < Global_262145.f_34206){
iVar0=0;
}}elseif(iParam0==joaat("tahoma")){
if(!Global_262145.f_34219 && iVar1 < Global_262145.f_34203){
iVar0=0;
}}elseif(iParam0==joaat("taxi")){
if(!Global_262145.f_34218 && iVar1 < Global_262145.f_34202){
iVar0=0;
}}
if(iParam0==joaat("exemplar")){
if(!Global_262145.f_35167 && !Global_262145.f_35168){
iVar0=0;
}}elseif(iParam0==joaat("cogcabrio")){
if(!Global_262145.f_35169 && !Global_262145.f_35170){
iVar0=0;
}}elseif(iParam0==joaat("thrust")){
if(!Global_262145.f_35171 && !Global_262145.f_35172){
iVar0=0;
}}elseif(iParam0==joaat("vindicator")){
if(!Global_262145.f_35173 && !Global_262145.f_35174){
iVar0=0;
}}elseif(iParam0==joaat("coquette3")){
if(!Global_262145.f_35175 && !Global_262145.f_35176){
iVar0=0;
}}elseif(iParam0==joaat("brawler")){
if(!Global_262145.f_35177 && !Global_262145.f_35178){
iVar0=0;
}}elseif(iParam0==joaat("cognoscenti")){
if(!Global_262145.f_35179 && !Global_262145.f_35180){
iVar0=0;
}}elseif(iParam0==joaat("cognoscenti2")){
if(!Global_262145.f_35181 && !Global_262145.f_35182){
iVar0=0;
}}elseif(iParam0==joaat("cog55")){
if(!Global_262145.f_35183 && !Global_262145.f_35184){
iVar0=0;
}}elseif(iParam0==joaat("cog552")){
if(!Global_262145.f_35185 && !Global_262145.f_35186){
iVar0=0;
}}elseif(iParam0==joaat("superd")){
if(!Global_262145.f_35187 && !Global_262145.f_35188){
iVar0=0;
}}elseif(iParam0==joaat("schafter4")){
if(!Global_262145.f_35189 && !Global_262145.f_35190){
iVar0=0;
}}elseif(iParam0==joaat("schafter6")){
if(!Global_262145.f_35191 && !Global_262145.f_35192){
iVar0=0;
}}elseif(iParam0==joaat("alpha")){
if(!Global_262145.f_35193 && !Global_262145.f_35194){
iVar0=0;
}}elseif(iParam0==joaat("feltzer2")){
if(!Global_262145.f_35195 && !Global_262145.f_35196){
iVar0=0;
}}elseif(iParam0==joaat("massacro")){
if(!Global_262145.f_35197 && !Global_262145.f_35198){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt")){
if(!Global_262145.f_35199 && !Global_262145.f_35200){
iVar0=0;
}}elseif(iParam0==joaat("rapidgt2")){
if(!Global_262145.f_35201 && !Global_262145.f_35202){
iVar0=0;
}}elseif(iParam0==joaat("seven70")){
if(!Global_262145.f_35203 && !Global_262145.f_35204){
iVar0=0;
}}elseif(iParam0==joaat("jester")){
if(!Global_262145.f_35205 && !Global_262145.f_35206){
iVar0=0;
}}elseif(iParam0==joaat("bestiagts")){
if(!Global_262145.f_35207 && !Global_262145.f_35208){
iVar0=0;
}}elseif(iParam0==joaat("carbonizzare")){
if(!Global_262145.f_35209 && !Global_262145.f_35210){
iVar0=0;
}}elseif(iParam0==joaat("coquette")){
if(!Global_262145.f_35211 && !Global_262145.f_35212){
iVar0=0;
}}elseif(iParam0==joaat("furoregt")){
if(!Global_262145.f_35213 && !Global_262145.f_35214){
iVar0=0;
}}elseif(iParam0==joaat("ninef")){
if(!Global_262145.f_35215 && !Global_262145.f_35216){
iVar0=0;
}}elseif(iParam0==joaat("ninef2")){
if(!Global_262145.f_35217 && !Global_262145.f_35218){
iVar0=0;
}}elseif(iParam0==joaat("verlierer2")){
if(!Global_262145.f_35219 && !Global_262145.f_35220){
iVar0=0;
}}elseif(iParam0==joaat("btype")){
if(!Global_262145.f_35221 && !Global_262145.f_35222){
iVar0=0;
}}elseif(iParam0==joaat("feltzer3")){
if(!Global_262145.f_35223 && !Global_262145.f_35224){
iVar0=0;
}}elseif(iParam0==joaat("stingergt")){
if(!Global_262145.f_35225 && !Global_262145.f_35226){
iVar0=0;
}}elseif(iParam0==joaat("stinger")){
if(!Global_262145.f_35227 && !Global_262145.f_35228){
iVar0=0;
}}elseif(iParam0==joaat("coquette2")){
if(!Global_262145.f_35229 && !Global_262145.f_35230){
iVar0=0;
}}elseif(iParam0==joaat("jb700")){
if(!Global_262145.f_35231 && !Global_262145.f_35232){
iVar0=0;
}}elseif(iParam0==joaat("mamba")){
if(!Global_262145.f_35233 && !Global_262145.f_35234){
iVar0=0;
}}elseif(iParam0==joaat("monroe")){
if(!Global_262145.f_35235 && !Global_262145.f_35236){
iVar0=0;
}}elseif(iParam0==joaat("btype3")){
if(!Global_262145.f_35237 && !Global_262145.f_35238){
iVar0=0;
}}elseif(iParam0==joaat("ztype")){
if(!Global_262145.f_35239 && !Global_262145.f_35240){
iVar0=0;
}}elseif(iParam0==joaat("voltic")){
if(!Global_262145.f_35241 && !Global_262145.f_35242){
iVar0=0;
}}elseif(iParam0==joaat("sheava")){
if(!Global_262145.f_35243 && !Global_262145.f_35244){
iVar0=0;
}}elseif(iParam0==joaat("cheetah")){
if(!Global_262145.f_35245 && !Global_262145.f_35246){
iVar0=0;
}}elseif(iParam0==joaat("entityxf")){
if(!Global_262145.f_35247 && !Global_262145.f_35248){
iVar0=0;
}}elseif(iParam0==joaat("infernus")){
if(!Global_262145.f_35249 && !Global_262145.f_35250){
iVar0=0;
}}elseif(iParam0==joaat("vacca")){
if(!Global_262145.f_35251 && !Global_262145.f_35252){
iVar0=0;
}}elseif(iParam0==joaat("bullet")){
if(!Global_262145.f_35253 && !Global_262145.f_35254){
iVar0=0;
}}elseif(iParam0==joaat("fmj")){
if(!Global_262145.f_35255 && !Global_262145.f_35256){
iVar0=0;
}}elseif(iParam0==joaat("baller2")){
if(!Global_262145.f_35257 && !Global_262145.f_35258){
iVar0=0;
}}elseif(iParam0==joaat("baller3")){
if(!Global_262145.f_35259 && !Global_262145.f_35260){
iVar0=0;
}}elseif(iParam0==joaat("baller5")){
if(!Global_262145.f_35261 && !Global_262145.f_35262){
iVar0=0;
}}elseif(iParam0==joaat("baller4")){
if(!Global_262145.f_35263 && !Global_262145.f_35264){
iVar0=0;
}}elseif(iParam0==joaat("baller6")){
if(!Global_262145.f_35265 && !Global_262145.f_35266){
iVar0=0;
}}elseif(iParam0==joaat("xls")){
if(!Global_262145.f_35267 && !Global_262145.f_35268){
iVar0=0;
}}elseif(iParam0==joaat("xls2")){
if(!Global_262145.f_35269 && !Global_262145.f_35270){
iVar0=0;
}}elseif(iParam0==joaat("prairie")){
if(!Global_262145.f_35271 && !Global_262145.f_35272){
iVar0=0;
}}elseif(iParam0==joaat("issi2")){
if(!Global_262145.f_35273 && !Global_262145.f_35274){
iVar0=0;
}}elseif(iParam0==joaat("dilettante")){
if(!Global_262145.f_35275 && !Global_262145.f_35276){
iVar0=0;
}}elseif(iParam0==joaat("felon")){
if(!Global_262145.f_35277 && !Global_262145.f_35278){
iVar0=0;
}}elseif(iParam0==joaat("felon2")){
if(!Global_262145.f_35279 && !Global_262145.f_35280){
iVar0=0;
}}elseif(iParam0==joaat("f620")){
if(!Global_262145.f_35281 && !Global_262145.f_35282){
iVar0=0;
}}elseif(iParam0==joaat("jackal")){
if(!Global_262145.f_35283 && !Global_262145.f_35284){
iVar0=0;
}}elseif(iParam0==joaat("oracle2")){
if(!Global_262145.f_35285 && !Global_262145.f_35286){
iVar0=0;
}}elseif(iParam0==joaat("oracle")){
if(!Global_262145.f_35287 && !Global_262145.f_35288){
iVar0=0;
}}elseif(iParam0==joaat("sentinel2")){
if(!Global_262145.f_35289 && !Global_262145.f_35290){
iVar0=0;
}}elseif(iParam0==joaat("zion")){
if(!Global_262145.f_35291 && !Global_262145.f_35292){
iVar0=0;
}}elseif(iParam0==joaat("zion2")){
if(!Global_262145.f_35293 && !Global_262145.f_35294){
iVar0=0;
}}elseif(iParam0==joaat("akuma")){
if(!Global_262145.f_35295 && !Global_262145.f_35296){
iVar0=0;
}}elseif(iParam0==joaat("double")){
if(!Global_262145.f_35297 && !Global_262145.f_35298){
iVar0=0;
}}elseif(iParam0==joaat("enduro")){
if(!Global_262145.f_35299 && !Global_262145.f_35300){
iVar0=0;
}}elseif(iParam0==joaat("hexer")){
if(!Global_262145.f_35301 && !Global_262145.f_35302){
iVar0=0;
}}elseif(iParam0==joaat("innovation")){
if(!Global_262145.f_35303 && !Global_262145.f_35304){
iVar0=0;
}}elseif(iParam0==joaat("sanchez")){
if(!Global_262145.f_35305 && !Global_262145.f_35306){
iVar0=0;
}}elseif(iParam0==joaat("sanchez2")){
if(!Global_262145.f_35307 && !Global_262145.f_35308){
iVar0=0;
}}elseif(iParam0==joaat("bati2")){
if(!Global_262145.f_35309 && !Global_262145.f_35310){
iVar0=0;
}}elseif(iParam0==joaat("faggio2")){
if(!Global_262145.f_35311 && !Global_262145.f_35312){
iVar0=0;
}}elseif(iParam0==joaat("ruffian")){
if(!Global_262145.f_35313 && !Global_262145.f_35314){
iVar0=0;
}}elseif(iParam0==joaat("nemesis")){
if(!Global_262145.f_35315 && !Global_262145.f_35316){
iVar0=0;
}}elseif(iParam0==joaat("hakuchou")){
if(!Global_262145.f_35317 && !Global_262145.f_35318){
iVar0=0;
}}elseif(iParam0==joaat("pcj")){
if(!Global_262145.f_35319 && !Global_262145.f_35320){
iVar0=0;
}}elseif(iParam0==joaat("vader")){
if(!Global_262145.f_35321 && !Global_262145.f_35322){
iVar0=0;
}}elseif(iParam0==joaat("sovereign")){
if(!Global_262145.f_35323 && !Global_262145.f_35324){
iVar0=0;
}}elseif(iParam0==joaat("gauntlet")){
if(!Global_262145.f_35325 && !Global_262145.f_35326){
iVar0=0;
}}elseif(iParam0==joaat("ratloader")){
if(!Global_262145.f_35327 && !Global_262145.f_35328){
iVar0=0;
}}elseif(iParam0==joaat("picador")){
if(!Global_262145.f_35329 && !Global_262145.f_35330){
iVar0=0;
}}elseif(iParam0==joaat("vigero")){
if(!Global_262145.f_35331 && !Global_262145.f_35332){
iVar0=0;
}}elseif(iParam0==joaat("ruiner")){
if(!Global_262145.f_35333 && !Global_262145.f_35334){
iVar0=0;
}}elseif(iParam0==joaat("tampa")){
if(!Global_262145.f_35335 && !Global_262145.f_35336){
iVar0=0;
}}elseif(iParam0==joaat("blade")){
if(!Global_262145.f_35337 && !Global_262145.f_35338){
iVar0=0;
}}elseif(iParam0==joaat("bifta")){
if(!Global_262145.f_35339 && !Global_262145.f_35340){
iVar0=0;
}}elseif(iParam0==joaat("dune")){
if(!Global_262145.f_35341 && !Global_262145.f_35342){
iVar0=0;
}}elseif(iParam0==joaat("bfinjection")){
if(!Global_262145.f_35343 && !Global_262145.f_35344){
iVar0=0;
}}elseif(iParam0==joaat("bodhi2")){
if(!Global_262145.f_35345 && !Global_262145.f_35346){
iVar0=0;
}}elseif(iParam0==joaat("kalahari")){
if(!Global_262145.f_35347 && !Global_262145.f_35348){
iVar0=0;
}}elseif(iParam0==joaat("rancherxl")){
if(!Global_262145.f_35349 && !Global_262145.f_35350){
iVar0=0;
}}elseif(iParam0==joaat("rebel2")){
if(!Global_262145.f_35351 && !Global_262145.f_35352){
iVar0=0;
}}elseif(iParam0==joaat("rebel")){
if(!Global_262145.f_35353 && !Global_262145.f_35354){
iVar0=0;
}}elseif(iParam0==joaat("blazer")){
if(!Global_262145.f_35355 && !Global_262145.f_35356){
iVar0=0;
}}elseif(iParam0==joaat("blazer3")){
if(!Global_262145.f_35357 && !Global_262145.f_35358){
iVar0=0;
}}elseif(iParam0==joaat("sandking2")){
if(!Global_262145.f_35359 && !Global_262145.f_35360){
iVar0=0;
}}elseif(iParam0==joaat("washington")){
if(!Global_262145.f_35361 && !Global_262145.f_35362){
iVar0=0;
}}elseif(iParam0==joaat("schafter2")){
if(!Global_262145.f_35363 && !Global_262145.f_35364){
iVar0=0;
}}elseif(iParam0==joaat("romero")){
if(!Global_262145.f_35365 && !Global_262145.f_35366){
iVar0=0;
}}elseif(iParam0==joaat("fugitive")){
if(!Global_262145.f_35367 && !Global_262145.f_35368){
iVar0=0;
}}elseif(iParam0==joaat("surge")){
if(!Global_262145.f_35369 && !Global_262145.f_35370){
iVar0=0;
}}elseif(iParam0==joaat("asea")){
if(!Global_262145.f_35371 && !Global_262145.f_35372){
iVar0=0;
}}elseif(iParam0==joaat("premier")){
if(!Global_262145.f_35373 && !Global_262145.f_35374){
iVar0=0;
}}elseif(iParam0==joaat("regina")){
if(!Global_262145.f_35375 && !Global_262145.f_35376){
iVar0=0;
}}elseif(iParam0==joaat("asterope")){
if(!Global_262145.f_35377 && !Global_262145.f_35378){
iVar0=0;
}}elseif(iParam0==joaat("intruder")){
if(!Global_262145.f_35379 && !Global_262145.f_35380){
iVar0=0;
}}elseif(iParam0==joaat("tailgater")){
if(!Global_262145.f_35381 && !Global_262145.f_35382){
iVar0=0;
}}elseif(iParam0==joaat("stanier")){
if(!Global_262145.f_35383 && !Global_262145.f_35384){
iVar0=0;
}}elseif(iParam0==joaat("ingot")){
if(!Global_262145.f_35385 && !Global_262145.f_35386){
iVar0=0;
}}elseif(iParam0==joaat("warrener")){
if(!Global_262145.f_35387 && !Global_262145.f_35388){
iVar0=0;
}}elseif(iParam0==joaat("stratum")){
if(!Global_262145.f_35389 && !Global_262145.f_35390){
iVar0=0;
}}elseif(iParam0==joaat("schwarzer")){
if(!Global_262145.f_35391 && !Global_262145.f_35392){
iVar0=0;
}}elseif(iParam0==joaat("surano")){
if(!Global_262145.f_35393 && !Global_262145.f_35394){
iVar0=0;
}}elseif(iParam0==joaat("buffalo")){
if(!Global_262145.f_35395 && !Global_262145.f_35396){
iVar0=0;
}}elseif(iParam0==joaat("buffalo2")){
if(!Global_262145.f_35397 && !Global_262145.f_35398){
iVar0=0;
}}elseif(iParam0==joaat("massacro2")){
if(!Global_262145.f_35399 && !Global_262145.f_35400){
iVar0=0;
}}elseif(iParam0==joaat("jester2")){
if(!Global_262145.f_35401 && !Global_262145.f_35402){
iVar0=0;
}}elseif(iParam0==joaat("futo")){
if(!Global_262145.f_35403 && !Global_262145.f_35404){
iVar0=0;
}}elseif(iParam0==joaat("penumbra")){
if(!Global_262145.f_35405 && !Global_262145.f_35406){
iVar0=0;
}}elseif(iParam0==joaat("fusilade")){
if(!Global_262145.f_35407 && !Global_262145.f_35408){
iVar0=0;
}}elseif(iParam0==joaat("btype2")){
if(!Global_262145.f_35409 && !Global_262145.f_35410){
iVar0=0;
}}elseif(iParam0==joaat("pigalle")){
if(!Global_262145.f_35411 && !Global_262145.f_35412){
iVar0=0;
}}elseif(iParam0==joaat("cavalcade")){
if(!Global_262145.f_35413 && !Global_262145.f_35414){
iVar0=0;
}}elseif(iParam0==joaat("cavalcade2")){
if(!Global_262145.f_35415 && !Global_262145.f_35416){
iVar0=0;
}}elseif(iParam0==joaat("bjxl")){
if(!Global_262145.f_35417 && !Global_262145.f_35418){
iVar0=0;
}}elseif(iParam0==joaat("serrano")){
if(!Global_262145.f_35419 && !Global_262145.f_35420){
iVar0=0;
}}elseif(iParam0==joaat("gresley")){
if(!Global_262145.f_35421 && !Global_262145.f_35422){
iVar0=0;
}}elseif(iParam0==joaat("seminole")){
if(!Global_262145.f_35423 && !Global_262145.f_35424){
iVar0=0;
}}elseif(iParam0==joaat("granger")){
if(!Global_262145.f_35425 && !Global_262145.f_35426){
iVar0=0;
}}elseif(iParam0==joaat("landstalker")){
if(!Global_262145.f_35427 && !Global_262145.f_35428){
iVar0=0;
}}elseif(iParam0==joaat("habanero")){
if(!Global_262145.f_35429 && !Global_262145.f_35430){
iVar0=0;
}}elseif(iParam0==joaat("fq2")){
if(!Global_262145.f_35431 && !Global_262145.f_35432){
iVar0=0;
}}elseif(iParam0==joaat("baller")){
if(!Global_262145.f_35433 && !Global_262145.f_35434){
iVar0=0;
}}elseif(iParam0==joaat("patriot")){
if(!Global_262145.f_35435 && !Global_262145.f_35436){
iVar0=0;
}}elseif(iParam0==joaat("rocoto")){
if(!Global_262145.f_35437 && !Global_262145.f_35438){
iVar0=0;
}}elseif(iParam0==joaat("radi")){
if(!Global_262145.f_35439 && !Global_262145.f_35440){
iVar0=0;
}}elseif(iParam0==joaat("mesa3")){
if(!Global_262145.f_35441 && !Global_262145.f_35442){
iVar0=0;
}}elseif(iParam0==joaat("monster")){
if(!Global_262145.f_35443 && !Global_262145.f_35444){
iVar0=0;
}}elseif(iParam0==1336514315){
if(!Global_262145.f_35473 && iVar1 < Global_262145.f_35460){
iVar0=0;
}}elseif(iParam0==-1659004814){
if(!Global_262145.f_35472 && iVar1 < Global_262145.f_35459){
iVar0=0;
}}elseif(iParam0==-654498607){
if(!Global_262145.f_35474 && iVar1 < Global_262145.f_35461){
iVar0=0;
}}elseif(iParam0==-979292575){
if(!Global_262145.f_35465 && iVar1 < Global_262145.f_35452){
iVar0=0;
}}elseif(iParam0==-1763675285){
if(!Global_262145.f_35462 && iVar1 < Global_262145.f_35449){
iVar0=0;
}}elseif(iParam0==func_121(1)){
iVar0=1;
}elseif(iParam0==-536105557){
if(!Global_262145.f_35463 && iVar1 < Global_262145.f_35450){
iVar0=0;
}}elseif(iParam0==1447690049){
if(!Global_262145.f_35466 && iVar1 < Global_262145.f_35453){
iVar0=0;
}}elseif(iParam0==165968051){
if(!Global_262145.f_35469 && iVar1 < Global_262145.f_35456){
iVar0=0;
}}elseif(iParam0==191916658){
if(!Global_262145.f_35467 && iVar1 < Global_262145.f_35454){
iVar0=0;
}}elseif(iParam0==802856453){
if(!Global_262145.f_35464 && iVar1 < Global_262145.f_35451){
iVar0=0;
}}elseif(iParam0==610429990){
if(!Global_262145.f_35471 && iVar1 < Global_262145.f_35458){
iVar0=0;
}}elseif(iParam0==239897677){
if(!Global_262145.f_35468 && iVar1 < Global_262145.f_35455){
iVar0=0;
}}elseif(iParam0==-897824023){
if(!Global_262145.f_35470 && iVar1 < Global_262145.f_35457){
iVar0=0;
}}elseif(iParam0==-1983622024){
if(!Global_262145.f_35470 && iVar1 < Global_262145.f_35457){
iVar0=0;
}}
return iVar0;
}

int func_121(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__122(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__123(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_124(){
return 0;
}

int func_125(){
return 1;
}

int func_126(){
return 1;
}

int func_127(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_128(){
var uVar0;
if(Global_152686==2){
return 1;
}elseif(Global_152686==3){
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

int func_129(int iParam0){
int iVar0;
var uVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G ")){
return 1;
}
if(!func_117(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_130(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 3){
if(ENTITY::DOES_ENTITY_EXIST(Global_98174[iVar0])){
if(Global_98174[iVar0]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}

int func_131(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], 0)){
if(Global_98144[iVar0]==iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==ENTITY::GET_ENTITY_MODEL(iParam0)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_132(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24])){
if(iParam0==Global_77479.f_484[24]){
return 0;
}}
iVar0=0;
while (iVar0 < 68){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0])){
if((((((((((((iVar0 !=24 && iVar0 !=21) && iVar0 !=22) && iVar0 !=23) && iVar0 !=27) && iVar0 !=30) && iVar0 !=33) && iVar0 !=28) && iVar0 !=31) && iVar0 !=34) && iVar0 !=26) && iVar0 !=29) && iVar0 !=32){
if(iParam0==Global_77479.f_484[iVar0]){
return 1;
}}}
iVar0++;
}
return 0;
}

int func_133(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_134(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_134(int iParam0, int iParam1, char* sParam2, var uParam3){
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


var func__135(){
var uVar0;
func_145(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_144(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_143(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_138(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_137(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_136(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_136(var uParam0, int iParam1){
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


void func_137(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_138(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_142(*uParam0);
iVar1=func_140(*uParam0);
if(iParam1 < 1 || iParam1 > func_139(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}

int func_139(int iParam0, int iParam1){
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


var func__140(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_141(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_141(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_142(var uParam0){
return uParam0 & 15;
}


void func_143(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_144(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_145(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_146(var uParam0, int iParam1){
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
uParam0->f_4=func_147(0, 1);
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
uParam0->f_4=func_147(0, 1);
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
uParam0->f_4=func_147(1, 1);
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
uParam0->f_4=func_147(1, 2);
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
uParam0->f_4=func_147(1, 1);
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
uParam0->f_4=func_147(1, 2);
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
uParam0->f_4=func_147(2, 1);
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
uParam0->f_4=func_147(2, 1);
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
uParam0->f_4=func_147(2, 1);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
if(func_128()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
MISC::SET_BIT(&(uParam0->f_9), 23);
MISC::SET_BIT(&(uParam0->f_9), 21);
iVar0=1;
break;
case 61:
*uParam0={
-806.31f, -2679.65f, 13.9f 
};
uParam0->f_3=150.54f;
if(func_128()){
uParam0->f_4=joaat("blimp2");
}else{
uParam0->f_4=joaat("blimp");
}
uParam0->f_13=401;
MISC::SET_BIT(&(uParam0->f_9), 13);
MISC::SET_BIT(&(uParam0->f_9), 2);
MISC::SET_BIT(&(uParam0->f_9), true);
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
MISC::SET_BIT(&(uParam0->f_9), false);
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
uParam0->f_4=Global_113810.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
if(iParam1==14){
if(((((uParam0->f_4==joaat("miljet") || uParam0->f_4==joaat("besra")) || uParam0->f_4==joaat("luxor")) || uParam0->f_4==joaat("shamal")) || uParam0->f_4==joaat("titan")) || uParam0->f_4==joaat("luxor2")){
*uParam0={
1678.8f, 3229.6f, 41.8f 
};
uParam0->f_3=106.0906f;
}}
if(!func_157(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] 
};
}
if(Global_113810.f_32752.f_1934[uParam0->f_14] !=-1f){
uParam0->f_3=Global_113810.f_32752.f_1934[uParam0->f_14];
}}
if(MISC::IS_BIT_SET(uParam0->f_9, 19)){
if(!func_157(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
}}elseif(MISC::IS_BIT_SET(uParam0->f_9, 20)){
if(!func_157(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)){
*uParam0={
Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] 
};
uParam0->f_3=Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
}}
return iVar0;
}

int func_147(int iParam0, int iParam1){
struct<82> Var0;
if(func_149(iParam0)){
Var0.f_11=12;
Var0.f_31=49;
Var0.f_81=2;
func_148(iParam0, &Var0, iParam1);
return Var0.f_0;
}elseif(iParam0 !=145){}
return 0;
}


void func_148(int iParam0, var uParam1, int iParam2){
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
if(Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131]){
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
if(Global_113810.f_9088.f_99.f_58[119]){
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
}elseif(Global_113810.f_9088.f_99.f_58[118]){
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


bool func_149(int iParam0){
return iParam0 < 3;
}


void func_150(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4){
if(func_146(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 10)){
func_155(iParam0);
func_154(uParam1, &(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]));
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 11)){
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
Param2 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=uParam3;
}else{
Global_113810.f_32752.f_1864[Global_77479.f_555[0 /*21*/].f_14 /*3*/]={
0f, 0f, 0f 
};
Global_113810.f_32752.f_1934[Global_77479.f_555[0 /*21*/].f_14]=-1f;
}
Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14]=iParam4 + 1;
func_151(iParam0, 1);
}}}


void func_151(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_153(iParam0, 0)){
func_152(iParam0, 1, 0);
func_152(iParam0, 2, 0);
func_152(iParam0, 3, 0);
func_152(iParam0, 4, 0);
func_152(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_152(iParam0, 0, 0);
}}


void func_152(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), bParam1);
}}

int func_153(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_154(var uParam0, var uParam1){
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


void func_155(int iParam0){
if(iParam0==-1){
return;
}
if(func_146(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77479.f_139[iParam0]));
Global_77479.f_139[iParam0]=0;
}
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
func_151(iParam0, 0);
}}}

int func_156(int iParam0){
int iVar0;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return 145;
}
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 145;
}
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(Global_98144[iVar0]==iParam0){
return Global_98154[iVar0];
}}
iVar0++;
}
return 145;
}


bool func_157(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_158(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_162(uParam1);
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
if(uParam1->f_65==-1 && !func_161(uParam1->f_66)){
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
func_160(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar0 + 1));
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

int func_159(int iParam0){
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

int func_160(int iParam0, var uParam1, var uParam2){
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

int func_161(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_162(var uParam0){
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


void func_163(int iParam0){
if(iParam0 !=24 && iParam0 !=25){}
func_155(iParam0);
func_151(iParam0, 0);
}

int func_164(struct<3> Param0, int iParam1, var uParam2, var uParam3){
int iVar0;
iVar0=func_165(Param0, iParam1, 1);
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

int func_165(struct<3> Param0, int iParam1, int iParam2){
int iVar0;
float fVar1;
float fVar2;
int iVar3;
fVar2=1000000f;
iVar3=10;
iVar0=0;
while (iVar0 <=(10 - 1)){
if(Global_95851[iVar0 /*10*/].f_7 !=263){
if(Global_95851[iVar0 /*10*/].f_9==iParam1 || iParam1==145){
if(func_166(iVar0) || iParam2==0){
fVar1=MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95851[iVar0 /*10*/].f_3, 1);
if(fVar1 < fVar2){
fVar2=fVar1;
iVar3=iVar0;
}}}}
iVar0++;
}
return iVar3;
}


var func__166(int iParam0){
return MISC::IS_BIT_SET(Global_113810.f_7232[iParam0], 0);
}

int func_167(int iParam0){
if(iParam0==-1){
return 0;
}
return Global_77479.f_139[iParam0];
}

int func_168(){
func_169();
return Global_113810.f_2366.f_539.f_4321;
}


void func_169(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_171(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_170(PLAYER::PLAYER_PED_ID());
if(func_149(iVar0) && (!func_40(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_149(Global_113810.f_2366.f_539.f_4321)){
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

int func_170(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_171(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_171(int iParam0){
if(func_149(iParam0)){
return func_172(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__172(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_173(var uParam0, int iParam1, int iParam2, int iParam3){
if(*uParam0==-1){
return 0;
}elseif(*uParam0==1){
return 1;
}elseif(*uParam0==0 || ((*uParam0==2 && uParam0->f_1==1) && iParam2)){
if(iParam1 > 0){
*uParam0=2;
uParam0->f_6=iParam1;
}else{
*uParam0=1;
uParam0->f_6=0;
}
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_5=MISC::GET_GAME_TIMER();
uParam0->f_1=iParam3;
return 1;
}
return 0;
}

int func_174(var uParam0, int iParam1){
int iVar0;
int iVar1;
if(iParam1==0){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0 /*5*/]){
if((uParam0[iVar0 /*5*/])->f_4==iParam1){
(uParam0[iVar0 /*5*/])->f_2=0;
if(!(uParam0[iVar0 /*5*/])->f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
STREAMING::REQUEST_MODEL(iParam1);
(*uParam0)[iVar1 /*5*/]=1;
(uParam0[iVar1 /*5*/])->f_3=MISC::GET_GAME_TIMER();
(uParam0[iVar1 /*5*/])->f_4=iParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}

int func_175(var uParam0, char* sParam1){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < uParam0->f_737){
if(uParam0->f_737[iVar0 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_737[iVar0 /*5*/].f_4, sParam1)){
uParam0->f_737[iVar0 /*5*/].f_2=0;
if(!uParam0->f_737[iVar0 /*5*/].f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, 0, -1);
uParam0->f_737[iVar1 /*5*/]=1;
uParam0->f_737[iVar1 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_737[iVar1 /*5*/].f_4=sParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}


void func_176(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
switch ((*uParam0)[iVar0 /*8*/]){
case 1:
Stack.Push(uParam0[iVar0 /*8*/]);
Call_Loc((uParam0[iVar0 /*8*/])->f_7);
break;
case 2:
if((MISC::GET_GAME_TIMER() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6){
(*uParam0)[iVar0 /*8*/]=1;
(uParam0[iVar0 /*8*/])->f_6=0;
}
break;
}
iVar0++;
}}


void func_177(){
int iVar0;
int iVar1;
bool bVar2;
bool bVar3;
int iVar4;
bVar2=false;
if(func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) < 70f){
HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
}
if(iLocal_1325==9){
if(!iLocal_1324){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
iLocal_1324=1;
}}
if(ENTITY::DOES_ENTITY_EXIST(Local_27.f_0)){
if(func_107(Local_27.f_0, PLAYER::PLAYER_PED_ID(), 1) > 300f){
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_27);
}}}
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1327) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1327, 0)){
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1327, Local_44[iVar0 /*8*/])){
bVar2=true;
}}
iVar0++;
}
if(!bVar2){
iLocal_1327=0;
}}
if(func_187()){
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_44[iVar0 /*8*/])){
iLocal_1327=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
}}
iVar0++;
}}
func_180();
if(iLocal_61==0){
if(!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0)){
bVar3=true;
}
iVar1=0;
while (iVar1 < Local_26.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_26[iVar1 /*110*/])){
if((Local_26[iVar1 /*110*/].f_5==5 && func_107(PLAYER::PLAYER_PED_ID(), Local_26[iVar1 /*110*/], 1) > 300f) && func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) > 300f){
PED::DELETE_PED(&(Local_26[iVar1 /*110*/]));
}}
iVar1++;
}
iVar4=6;
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/])){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_44[iVar0 /*8*/]));
if(HUD::DOES_BLIP_EXIST(Local_44[iVar0 /*8*/].f_1)){
HUD::REMOVE_BLIP(&(Local_44[iVar0 /*8*/].f_1));
}
if(bVar3){
iVar4=1;
}else{
iVar4=2;
}}elseif(func_109(Local_44[iVar0 /*8*/])){
if(HUD::DOES_BLIP_EXIST(Local_44[iVar0 /*8*/].f_1)){
HUD::REMOVE_BLIP(&(Local_44[iVar0 /*8*/].f_1));
}
iVar4=3;
}elseif(!func_106(Local_44[iVar0 /*8*/])){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_44[iVar0 /*8*/])==iLocal_1284){
if(iVar4 !=4){
iVar4=5;
}}else{
iVar4=4;
}}}
if(((((iLocal_1325==9 && func_102() !=-1) && ENTITY::DOES_ENTITY_EXIST(Local_44[func_102() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[func_102() /*8*/], 0)) && !func_109(Local_44[func_102() /*8*/])) || (((iLocal_1325==10 && func_54() !=-1) && ENTITY::DOES_ENTITY_EXIST(Local_44[func_54() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[func_54() /*8*/], 0))){
if(HUD::DOES_BLIP_EXIST(Local_44[iVar0 /*8*/].f_1)){
HUD::REMOVE_BLIP(&(Local_44[iVar0 /*8*/].f_1));
}}elseif((((ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)) && !func_109(Local_44[iVar0 /*8*/])) && func_106(Local_44[iVar0 /*8*/])) && iLocal_62==0){
if(!HUD::DOES_BLIP_EXIST(Local_44[iVar0 /*8*/].f_1)){
Local_44[iVar0 /*8*/].f_1=func_179(Local_44[iVar0 /*8*/], 0, 0);
HUD::SET_BLIP_PRIORITY(Local_44[iVar0 /*8*/].f_1, 1);
}}
iVar0++;
}
if(iLocal_1325==9 || iLocal_1325==10){
if(func_178("JHP1A_BKIN", 0, 0) || func_178("JHP1A_BKINANY", 0, 0)){
HUD::CLEAR_PRINTS();
}}elseif(iLocal_62==0){
if(!iLocal_1319){
if(func_105(1)==1){
func_110("JHP1A_BKIN", 7500, 1);
}
iLocal_1319=1;
}}
if(func_105(1)==0){
if(iVar4 !=6){
func_303(iVar4);
}}}}


var func__178(char* sParam0, int iParam1, int iParam2){
HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
if(iParam1==1){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
}
return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_179(int iParam0, bool bParam1, bool bParam2){
return func_58(iParam0, !bParam1, bParam2);
}


void func_180(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44[3 /*8*/], 1)){
iLocal_1325=11;
}elseif(func_186()){
iLocal_1325=7;
}elseif(func_185()){
iLocal_1325=6;
}elseif(func_103()){
iLocal_1325=9;
iLocal_1319=0;
}elseif(func_99()){
iLocal_1325=10;
}elseif(func_184()){
iLocal_1325=8;
}elseif(((ENTITY::DOES_ENTITY_EXIST(iLocal_1328) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1328, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1328, 1)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1328, Local_56, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0)){
iLocal_1325=5;
}elseif(((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_183()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_56, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0)){
iLocal_1328=PLAYER::GET_PLAYERS_LAST_VEHICLE();
iLocal_1325=5;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0)){
iLocal_1325=2;
}elseif(((ENTITY::DOES_ENTITY_EXIST(iLocal_1328) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1328, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1328, 1)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1328, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_1328, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))){
iLocal_1325=4;
}elseif(((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_183()) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))){
iLocal_1328=PLAYER::GET_PLAYERS_LAST_VEHICLE();
iLocal_1325=4;
}elseif((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !func_183()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_56, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0)){
iLocal_1328=PLAYER::GET_PLAYERS_LAST_VEHICLE();
iLocal_1325=3;
}elseif((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !func_183()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0)){
iLocal_1328=PLAYER::GET_PLAYERS_LAST_VEHICLE();
iLocal_1325=1;
}elseif(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)){
iLocal_1325=1;
}else{
iLocal_1328=0;
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0)){
iLocal_1325=0;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)){
iLocal_1325=0;
}else{
iLocal_1325=-1;
}}
if(iLocal_1325==1){
if(func_182(Local_26[0 /*110*/])){
func_181(Local_26[0 /*110*/], 120f, 20f, 120f, -90f, 90f, 1101004800, 1125515264);
}}elseif(func_182(Local_26[0 /*110*/])){
func_181(Local_26[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f, 1101004800, 1125515264);
}
if(bLocal_1322){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 155, 1);
}
if((iLocal_1325 !=-1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && PED::IS_COP_PED_IN_AREA_3D(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f))){
}}}


void func_181(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7){
if(!PED::IS_PED_INJURED(uParam0)){
PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
PED::SET_PED_ID_RANGE(iParam0, iParam6);
PED::SET_COMBAT_FLOAT(iParam0, 10, iParam7);
}}

int func_182(int iParam0){
if(iParam0 !=0 && ENTITY::DOES_ENTITY_EXIST(iParam0)){
switch (ENTITY::GET_ENTITY_TYPE(iParam0)){
case 1:
if(!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))){
return 1;
}
break;
case 2:
if(VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0)){
return 1;
}
break;
default:
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}
break;
}}
return 0;
}

int func_183(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(PLAYER::GET_PLAYERS_LAST_VEHICLE()==Local_44[iVar0 /*8*/]){
return 1;
}}
iVar0++;
}
return 0;
}

int func_184(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_44[iVar0 /*8*/], PLAYER::PLAYER_PED_ID(), 1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_185(){
int iVar0;
if(PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=2){
if((ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())==Local_44[iVar0 /*8*/]){
return 1;
}
iVar0++;
}}
return 0;
}

int func_186(){
int iVar0;
if((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())){
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44[iVar0 /*8*/], 1)){
return 1;
}}
iVar0++;
}}
return 0;
}

int func_187(){
int iVar0;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0) && (ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0)==joaat("towtruck2"))){
return 1;
}}
return 0;
}


void func_188(){
int iVar0;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_303(6);
}
iVar0=0;
while (iVar0 < Local_26.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_26[iVar0 /*110*/])){
if(Local_26[iVar0 /*110*/].f_93){
if(Local_26[iVar0 /*110*/].f_102){
func_189(Local_26[iVar0 /*110*/], &(Local_26[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}else{
func_189(Local_26[iVar0 /*110*/], &(Local_26[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
}}
if(!func_182(Local_26[iVar0 /*110*/])){
if(Local_26[iVar0 /*110*/].f_103==-1){
Local_26[iVar0 /*110*/].f_103=MISC::GET_GAME_TIMER();
}elseif((MISC::GET_GAME_TIMER() - Local_26[iVar0 /*110*/].f_103) >=5000){
}}}
iVar0++;
}
iVar0=0;
while (iVar0 < Local_44.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && Local_44[iVar0 /*8*/].f_7){
if(!func_182(Local_44[iVar0 /*8*/])){
if(HUD::DOES_BLIP_EXIST(Local_44[iVar0 /*8*/].f_1)){
HUD::REMOVE_BLIP(&(Local_44[iVar0 /*8*/].f_1));
}
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_44[iVar0 /*8*/]));
}}
iVar0++;
}}

int func_189(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12){
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


void func_190(){
struct<3> Var0;
var uVar1;
if(bLocal_64==1){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(1000);
}}else{
if(CUTSCENE::IS_CUTSCENE_ACTIVE()){
CUTSCENE::STOP_CUTSCENE(0);
CUTSCENE::REMOVE_CUTSCENE();
}
func_24(iLocal_65);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
HUD::CLEAR_PRINTS();
HUD::CLEAR_HELP(1);
func_8(1);
if(!func_249()){
func_248(iLocal_61, &Var0, &uVar1);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar1);
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
func_246(&uLocal_68, Var0, 50f, 0);
}
func_245(&uLocal_68);
switch (iLocal_61){
case 0:
func_174(&uLocal_68, joaat("burrito2"));
func_174(&uLocal_68, joaat("s_m_y_pestcont_01"));
func_174(&uLocal_68, joaat("s_m_m_security_01"));
func_174(&uLocal_68, joaat("dilettante2"));
func_174(&uLocal_68, joaat("p_amb_clipboard_01"));
func_244(&uLocal_68, &cLocal_57);
func_243(&uLocal_68, "misslsdhsclipboard@base");
func_243(&uLocal_68, "misslsdhsclipboard@idle_a");
func_243(&uLocal_68, "misstrevor3");
func_242(&uLocal_68, iLocal_1284);
if(((func_241() && !VEHICLE::IS_THIS_MODEL_A_BOAT(func_240())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_240())) && !VEHICLE::IS_THIS_MODEL_A_HELI(func_240())){
func_174(&uLocal_68, func_240());
}
break;
case 1:
func_174(&uLocal_68, joaat("burrito2"));
break;
}
while (!func_239(&uLocal_68)){
wait(0);
func_188();
}
switch (iLocal_61){
case 0:
if(((func_241() && !VEHICLE::IS_THIS_MODEL_A_BOAT(func_240())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_240())) && !VEHICLE::IS_THIS_MODEL_A_HELI(func_240())){
while (!func_238()){
wait(0);
}
Local_44[4 /*8*/]=func_197(189.3979f, -2932.721f, 5.6127f, 180.5455f);
}
if(func_249()){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[4 /*8*/])){
func_194(Local_44[4 /*8*/], -1, 1);
}
else{
func_194(0, -1, 1);
}}else{
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::DOES_ENTITY_EXIST(Local_44[4 /*8*/])){
PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_44[4 /*8*/], -1);
}}
while (!func_191(0)){
wait(0);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
break;
case 1:
if(!func_7(88)){
Local_44[0 /*8*/]=VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_44[0 /*8*/], 0);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_44[0 /*8*/], 1084227584);
}
if(func_249()){
func_194(0, -1, 1);
}else{
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
}
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
break;
}
if(CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN()){
if(!func_7(88) || iLocal_61 !=1){
CAM::DO_SCREEN_FADE_IN(800);
}}
bLocal_64=false;
}}}

int func_191(bool bParam0){
bool bVar0;
int iVar1;
var uVar2;
bVar0=false;
iVar1=1;
if(bParam0){
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[0])){
Local_44[0 /*8*/]=Global_97310[0];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_44[0 /*8*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[1])){
Local_44[1 /*8*/]=Global_97310[1];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_44[1 /*8*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[2])){
Local_44[2 /*8*/]=Global_97310[2];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_44[2 /*8*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[0])){
Local_26[1 /*110*/]=Global_97310.f_9[0];
if(!PED::IS_PED_INJURED(Local_26[1 /*110*/])){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_26[1 /*110*/], 0, 1);
}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26[1 /*110*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_28[0])){
Local_26[1 /*110*/].f_105=Global_97310.f_28[0];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26[1 /*110*/].f_105, 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[2])){
Local_26[0 /*110*/]=Global_97310.f_9[2];
if(!PED::IS_PED_INJURED(Local_26[0 /*110*/])){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_26[0 /*110*/], 0, 1);
}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26[0 /*110*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[3])){
Local_26[2 /*110*/]=Global_97310.f_9[3];
if(!PED::IS_PED_INJURED(Local_26[3 /*110*/])){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_26[2 /*110*/], 0, 1);
}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26[2 /*110*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[4])){
Local_26[3 /*110*/]=Global_97310.f_9[4];
if(!PED::IS_PED_INJURED(Local_26[3 /*110*/])){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_26[3 /*110*/], 0, 1);
}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_26[3 /*110*/], 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[5])){
Local_27.f_0=Global_97310.f_9[5];
if(!PED::IS_PED_INJURED(Local_27.f_0)){
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_27.f_0, 0, 1);
}
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_27.f_0, 1, 1);
}else{
bVar0=true;
}
if(ENTITY::DOES_ENTITY_EXIST(Global_97310[3])){
Local_44[3 /*8*/]=Global_97310[3];
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_44[3 /*8*/], 1, 1);
}else{
bVar0=true;
}}else{
if(!ENTITY::DOES_ENTITY_EXIST(Local_44[0 /*8*/])){
Local_44[0 /*8*/]=VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_44[1 /*8*/])){
Local_44[1 /*8*/]=VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_44[2 /*8*/])){
Local_44[2 /*8*/]=VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_26[1 /*110*/])){
Local_26[1 /*110*/]=PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
ENTITY::SET_ENTITY_HEALTH(Local_26[1 /*110*/], 150, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[1 /*110*/], 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[1 /*110*/], 0, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[1 /*110*/], 3, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[1 /*110*/], 4, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[1 /*110*/], 8, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[1 /*110*/], 10, 1, 0, 0);
PED::SET_PED_PROP_INDEX(Local_26[1 /*110*/], 0, 1, 0, 0, 1);
PED::SET_PED_PROP_INDEX(Local_26[1 /*110*/], 1, 0, 0, 0, 1);
PED::SET_PED_LOD_MULTIPLIER(Local_26[1 /*110*/], 2f);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_26[1 /*110*/].f_105)){
Local_26[1 /*110*/].f_105=OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Local_26[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_26[1 /*110*/].f_105, Local_26[1 /*110*/], PED::GET_PED_BONE_INDEX(Local_26[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1, 0);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_26[0 /*110*/])){
Local_26[0 /*110*/]=PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(Local_26[0 /*110*/], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[0 /*110*/], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[0 /*110*/], 4, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[0 /*110*/], 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[0 /*110*/], 10, 0, 0, 0);
PED::SET_PED_PROP_INDEX(Local_26[0 /*110*/], 0, 0, 0, 0, 1);
PED::SET_PED_LOD_MULTIPLIER(Local_26[0 /*110*/], 2f);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_26[2 /*110*/])){
Local_26[2 /*110*/]=PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(Local_26[2 /*110*/], 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[2 /*110*/], 3, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[2 /*110*/], 4, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[2 /*110*/], 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[2 /*110*/], 10, 1, 0, 0);
PED::SET_PED_PROP_INDEX(Local_26[2 /*110*/], 1, 0, 0, 0, 1);
PED::SET_PED_LOD_MULTIPLIER(Local_26[2 /*110*/], 2f);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_26[3 /*110*/])){
Local_26[3 /*110*/]=PED::CREATE_PED(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
PED::SET_PED_COMPONENT_VARIATION(Local_26[3 /*110*/], 0, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[3 /*110*/], 3, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[3 /*110*/], 4, 0, 3, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[3 /*110*/], 8, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_26[3 /*110*/], 10, 0, 0, 0);
PED::SET_PED_PROP_INDEX(Local_26[3 /*110*/], 0, 0, 0, 0, 1);
PED::SET_PED_LOD_MULTIPLIER(Local_26[3 /*110*/], 2f);
}
if(!ENTITY::DOES_ENTITY_EXIST(Local_27.f_0) && !ENTITY::DOES_ENTITY_EXIST(Local_44[3 /*8*/])){
if(CLOCK::GET_CLOCK_HOURS() >=5 && CLOCK::GET_CLOCK_HOURS() < 21){
Local_44[3 /*8*/]=VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1, 0);
Local_27.f_0=PED::CREATE_PED_INSIDE_VEHICLE(Local_44[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
}else{
Local_44[3 /*8*/]=VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1, 0);
Local_27.f_0=PED::CREATE_PED(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
}}}
if(ENTITY::DOES_ENTITY_EXIST(Local_44[0 /*8*/])){
func_193(Local_44[0 /*8*/], 0);
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_44[0 /*8*/], 7);
VEHICLE::SET_VEHICLE_ALARM(Local_44[0 /*8*/], 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_44[0 /*8*/], 1);
Local_44[0 /*8*/].f_7=0;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_44[1 /*8*/])){
func_193(Local_44[1 /*8*/], 1);
VEHICLE::SET_VEHICLE_ENGINE_ON(Local_44[1 /*8*/], 1, 1, 0);
VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_44[1 /*8*/], 4, 0);
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_44[1 /*8*/], 0, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_44[1 /*8*/], 4, 0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_44[1 /*8*/], 1);
Local_44[1 /*8*/].f_7=0;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_44[2 /*8*/])){
func_193(Local_44[2 /*8*/], 2);
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_44[2 /*8*/], 2, 1, 0);
VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_44[2 /*8*/], 3, 1, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_44[2 /*8*/], 1);
Local_44[2 /*8*/].f_7=0;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_26[1 /*110*/])){
PED::SET_PED_NAME_DEBUG(Local_26[1 /*110*/], &(Local_26[1 /*110*/].f_1));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26[1 /*110*/], 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_26[1 /*110*/], iLocal_1282);
AUDIO::STOP_PED_SPEAKING(Local_26[1 /*110*/], 1);
func_181(Local_26[1 /*110*/], 20f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
PED::SET_PED_HEARING_RANGE(Local_26[1 /*110*/], 50f);
StringCopy(&(Local_26[1 /*110*/].f_1), "foreman2(rear)", 16);
Local_26[1 /*110*/].f_42=20f;
Local_26[1 /*110*/].f_86=1;
Local_26[1 /*110*/].f_87=1;
Local_26[1 /*110*/].f_107=joaat("p_amb_clipboard_01");
Local_26[1 /*110*/].f_106=60309;
Local_26[1 /*110*/].f_108=0;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_26[0 /*110*/])){
PED::SET_PED_NAME_DEBUG(Local_26[0 /*110*/], &(Local_26[0 /*110*/].f_1));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26[0 /*110*/], 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_26[0 /*110*/], iLocal_1282);
AUDIO::STOP_PED_SPEAKING(Local_26[0 /*110*/], 1);
func_181(Local_26[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f, 1101004800, 1125515264);
PED::SET_PED_HEARING_RANGE(Local_26[0 /*110*/], 50f);
StringCopy(&(Local_26[0 /*110*/].f_1), "foreman1(front)", 16);
Local_26[0 /*110*/].f_86=1;
Local_26[0 /*110*/].f_87=1;
Local_26[0 /*110*/].f_42=17.5f;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_26[2 /*110*/])){
PED::SET_PED_NAME_DEBUG(Local_26[2 /*110*/], &(Local_26[2 /*110*/].f_1));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26[2 /*110*/], 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_26[2 /*110*/], iLocal_1282);
func_181(Local_26[2 /*110*/], 20f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
AUDIO::STOP_PED_SPEAKING(Local_26[2 /*110*/], 1);
PED::SET_PED_HEARING_RANGE(Local_26[2 /*110*/], 50f);
StringCopy(&(Local_26[2 /*110*/].f_1), "front 1", 16);
Local_26[2 /*110*/].f_86=0;
Local_26[2 /*110*/].f_87=0;
Local_26[2 /*110*/].f_42=17.5f;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_26[3 /*110*/])){
PED::SET_PED_NAME_DEBUG(Local_26[3 /*110*/], &(Local_26[3 /*110*/].f_1));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_26[3 /*110*/], 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_26[3 /*110*/], iLocal_1282);
PED::SET_PED_HEARING_RANGE(Local_26[3 /*110*/], 50f);
func_181(Local_26[3 /*110*/], 20f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
AUDIO::STOP_PED_SPEAKING(Local_26[3 /*110*/], 1);
StringCopy(&(Local_26[3 /*110*/].f_1), "front 2", 16);
Local_26[3 /*110*/].f_86=0;
Local_26[3 /*110*/].f_87=0;
Local_26[3 /*110*/].f_42=17.5f;
}
if(ENTITY::DOES_ENTITY_EXIST(Local_27.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_44[3 /*8*/])){
PED::SET_PED_NAME_DEBUG(Local_27.f_0, &(Local_27.f_1));
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_27.f_0, 1);
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_27.f_0, iLocal_1282);
PED::SET_PED_TARGET_LOSS_RESPONSE(Local_27.f_0, 2);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_27.f_0, 2, 0);
WEAPON::GIVE_WEAPON_TO_PED(Local_27.f_0, joaat("weapon_nightstick"), -1, 0, 1);
PED::SET_PED_ACCURACY(Local_27.f_0, 5);
func_181(Local_27.f_0, 40f, 5f, 90f, -90f, 90f, 1101004800, 1125515264);
StringCopy(&(Local_27.f_1), "sec", 16);
Local_27.f_86=1;
Local_27.f_87=1;
Local_27.f_93=0;
if(Global_97310.f_357==1){
if(!func_192(Local_27.f_0, joaat("script_task_perform_sequence"), 1)){
if(TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1)){
iLocal_1329=0;
TASK::OPEN_SEQUENCE_TASK(&uVar2);
TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_44[3 /*8*/], &cLocal_57, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
TASK::TASK_LEAVE_VEHICLE(0, Local_44[3 /*8*/], 0);
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
TASK::CLOSE_SEQUENCE_TASK(uVar2);
TASK::TASK_PERFORM_SEQUENCE(Local_27.f_0, uVar2);
TASK::CLEAR_SEQUENCE_TASK(&uVar2);
}else{
iVar1=0;
}}}elseif(!func_192(Local_27.f_0, joaat("script_task_use_nearest_scenario_chain_to_pos"), 1)){
if(TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1)){
iLocal_1329=1;
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Local_27.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
}else{
iVar1=0;
}}}
if(((((((((ENTITY::DOES_ENTITY_EXIST(Local_44[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_44[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_44[2 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_44[3 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_26[1 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_26[0 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_26[2 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_26[3 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_27.f_0)) && iVar1){
return 1;
}elseif(bVar0){
return 0;
}
return 0;
}

int func_192(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1);
if(iVar0==1 || iVar0==0){
return 1;
}elseif(!bParam2){
if(iVar0==2 || iVar0==3){
return 1;
}}
return 0;
}


void func_193(var uParam0, int iParam1){
Global_100833.f_22[iParam1]=uParam0;
}


void func_194(int iParam0, int iParam1, int iParam2){
if(func_196() && func_249()){
while (Global_100828 !=6){
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
func_195(0);
}}


void func_195(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&(Global_100833.f_20), 13);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 13);
}}

int func_196(){
if(Global_100833==10 || Global_100833==9){
return 1;
}
return 0;
}

int func_197(struct<3> Param0, float fParam1){
return func_198(&(Global_107357.f_2890), Param0, fParam1, 0);
}

int func_198(var uParam0, struct<3> Param1, float fParam2, bool bParam3){
int iVar0;
struct<3> Var1;
bool bVar2;
var uVar3;
int iVar4;
if(func_237(uParam0)){
if(func_157(Param1, 0f, 0f, 0f, 0)){
Param1={
*uParam0 
};
fParam2=uParam0->f_6;
}
if(uParam0->f_12.f_66==joaat("monster") || uParam0->f_12.f_66==joaat("marshall")){
if(OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1)){
Param1={
-850.93f, 158.82f, 65.7f 
};
fParam2=89.5f;
}}
if(func_236(uParam0)){
MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
func_235(Param1, 5f, 0);
iVar0=VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
if(ENTITY::DOES_ENTITY_EXIST(iVar0)){
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
if(vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <=3f){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
}
func_207(iVar0, &(uParam0->f_12), 0, 1);
bVar2=true;
if(VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66)){
if(!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3)){
bVar2=false;
}}
if(bVar2){
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
}
if(uParam0->f_7==1){
if(bParam3){
if(VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_206(uParam0->f_11, 1);
}
elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))){
func_206(uParam0->f_11, 2);
}}
VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, 0);
VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
func_205(iVar0, uParam0->f_11);
}elseif((!func_203(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning")){
iVar4=func_202(iVar0);
if(iVar4==-1){
uParam0->f_10=0;
}else{
func_199(iVar4);
}}
if(((Global_100833 !=13 && Global_100833 !=10) && Global_100833 !=11) && Global_100833 !=12){
if(MISC::GET_HASH_KEY(&(Global_100833.f_3))==Global_78467){
if(uParam0->f_12.f_66==Global_113810.f_32752.f_69[21 /*78*/].f_66){
func_151(24, 0);
func_199(24);
}}}
if(uParam0->f_9==1){
func_114(iVar0, uParam0->f_11);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
Var1={
ENTITY::GET_ENTITY_COORDS(iVar0, 1) 
};
}
return iVar0;
}}
return iVar0;
}


void func_199(int iParam0){
bool bVar0;
if(iParam0==-1){
return;
}
if(func_146(&(Global_77479.f_555[0 /*21*/]), iParam0)){
if(ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0])){
bVar0=true;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], 0)){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], 0)){
bVar0=false;
}}}
if(bVar0){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], 1, 1);
VEHICLE::DELETE_VEHICLE(&(Global_77479.f_139[iParam0]));
}}
Global_77479[iParam0]=1;
if(MISC::IS_BIT_SET(Global_77479.f_555[0 /*21*/].f_9, 13)){
if(((((iParam0==24 && func_153(iParam0, 0)) && Global_78388.f_66==0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] !=0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] > 3) && (!func_200(0, Global_77479.f_555[0 /*21*/].f_12) || !func_200(1, Global_77479.f_555[0 /*21*/].f_12))){
func_154(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), &Global_78388);
Global_78466=Global_113810.f_32752.f_5591;
}
func_151(iParam0, 0);
}}}

int func_200(int iParam0, int iParam1){
int iVar0;
switch (iParam1){
case 0:
iVar0=0;
break;
case 1:
iVar0=1;
break;
case 2:
iVar0=2;
break;
}
if(iParam0 < 0 || iParam0 >=func_201(&(Global_113810.f_32752.f_5038[iVar0 /*157*/]))){
return 0;
}
return func_117(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_201(var uParam0){
return *uParam0;
}

int func_202(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
iVar0=0;
while (iVar0 < 68){
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[iVar0], 0)){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[iVar0], &iVar3, &iVar4);
if(((ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[iVar0])) && iVar1==iVar2) && iVar3==iVar4){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_203(int iParam0, struct<3> Param1, bool bParam2){
int iVar0;
var uVar1[3];
int iVar2;
int iVar3;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
switch (iVar0){
case joaat("cargobob"):
if(func_204(iParam0, Global_77479.f_139[38], 0)){
func_199(38);
return 1;
}
break;
case joaat("firetruk"):
if(func_204(iParam0, Global_77479.f_139[43], 1)){
func_199(43);
return 1;
}
break;
case joaat("cuban800"):
iVar2=PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
iVar3=0;
while (iVar3 <=(iVar2 - 1)){
if(func_204(iParam0, uVar1[iVar3], 1) && func_65(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)){
if((!bParam2 || func_157(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f){
VEHICLE::DELETE_VEHICLE(&iParam0);
return 1;
}else{
return 0;
}}
iVar3++;
}
break;
case joaat("luxor2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[14], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[14])==joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[14])){
func_199(14);
return 1;
}}
break;
case joaat("swift2"):
if((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], 0)){
if(ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20])==joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0)==VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[20])){
func_199(20);
return 1;
}}
break;
}
return 0;
}

int func_204(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)){
if(bParam2){
VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
if(iVar0==iVar2 && iVar1==iVar3){
return 1;
}}else{
return 1;
}}
return 0;
}


void func_205(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(!ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
Global_98144[iVar0]=iParam0;
Global_98154[iVar0]=iParam1;
Global_98164[iVar0]=ENTITY::GET_ENTITY_MODEL(iParam0);
if(VEHICLE::IS_THIS_MODEL_A_CAR(Global_98164[iVar0])){
Global_98192[iParam1 /*3*/][0]=-1;
}else{
Global_98192[iParam1 /*3*/][1]=-1;
}
iVar0=9;
}
if(iVar0==8){
}
iVar0++;
}}


void func_206(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 9){
if(ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0])){
if(iParam0==145 || Global_98154[iVar0]==iParam0){
if(iParam1==0 || ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0])==func_147(iParam0, iParam1)){
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar0], 0)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98144[iVar0], 0, 1);
VEHICLE::DELETE_VEHICLE(&(Global_98144[iVar0]));
Global_98154[iVar0]=145;
}}}}
iVar0++;
}}


void func_207(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_226(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_159(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_159(iVar6));
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
if(func_224(uParam1->f_5) || func_224(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_223(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_222()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_161(uParam1->f_66)){
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
func_221(iParam0, uParam1->f_69);
}}else{
func_221(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_213(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_159(iVar7 + 1))){
if(!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 0);
}}elseif(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1)){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 1);
}
iVar7++;
}}
if((ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("le7b")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 0)==-1){
VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, 0);
}}
if((((func_208() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_121(1))){
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

int func_208(){
if((((Global_4718592.f_108230==6 || Global_4718592.f_108230==7) || Global_4718592.f_108230==18) || Global_4718592.f_108230==19) && Global_4718592.f_2==20){
return 0;
}
if(func_211(7)){
if(func_210(Global_2672524.f_4.f_16) || func_209(Global_2672524.f_4.f_16)){
return 0;
}}
return 1;
}

int func_209(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890739[iVar0 /*138*/].f_77.f_60 !=0;
}
return 0;
}

int func_210(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_33(iParam0, 9);
}
return 0;
}


bool func_211(int iParam0){
return func_212(&(Global_2672524.f_184), iParam0);
}


var func__212(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_213(int iParam0, var uParam1, var uParam2){
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
}elseif(func_219(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_218(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_216(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_216(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_215(iParam0);
if(func_214(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_214(int iParam0){
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


void func_215(var uParam0){
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

int func_216(int iParam0, int iParam1){
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
iVar0=func_217(iParam0, 38) + 1;
iVar1=func_217(iParam0, 24) + 1;
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

int func_217(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699==iParam1){
return Global_152700;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_219(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_218(int iParam0, int iParam1){
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
if(!Global_262145.f_14909){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14910){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14908){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14911){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14913){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14912){
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
if(Global_262145.f_19321){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19323){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19327){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19324){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19331){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19329){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19334){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21280){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21281){
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

int func_219(var uParam0, int iParam1, int iParam2){
if(!func_220() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_220(){
return 0;
}


void func_221(int iParam0, var uParam1){
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


bool func_222(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_223(int iParam0){
var uVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
uVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
}
return MISC::IS_BIT_SET(uVar0, 4);
}}}
return 0;
}

int func_224(int iParam0){
if(!func_220() && func_225(iParam0)){
return 1;
}
return 0;
}

int func_225(int iParam0){
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

int func_226(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_233(PLAYER::PLAYER_ID(), -1)){
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
if(func_228(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_227(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_227(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_228(int iParam0){
if(func_232(iParam0)==233){
return func_229(iParam0);
}
return -1;
}

int func_229(int iParam0){
if(func_230(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_230(int iParam0, int iParam1){
if(func_231(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_231(var uParam0){
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

int func_232(int iParam0){
if(func_231(iParam0)){
if(func_230(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_233(var uParam0, int iParam1){
var uVar0;
if(func_234(uParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(uParam0), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(uParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}

int func_234(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(uParam0)){
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


void func_235(struct<3> Param0, float fParam1, int iParam2){
int iVar0;
iVar0=0;
while (iVar0 < 68){
if(func_146(&(Global_77479.f_555[0 /*21*/]), iVar0)){
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77479.f_555[0 /*21*/], iParam2) <=fParam1){
func_199(iVar0);
}}
iVar0++;
}}

int func_236(var uParam0){
if(func_237(uParam0)){
if(STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66)){
return 1;
}else{
return 0;
}
return 1;
}else{
return 0;
}
return 1;
}

int func_237(var uParam0){
if(uParam0->f_12.f_66==0){
return 0;
}
if(!func_117(uParam0->f_12.f_66, 0, -1)){
return 0;
}
if(uParam0->f_12.f_66==joaat("stunt") && func_65(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)){
return 0;
}
return 1;
}


bool func_238(){
return func_236(&(Global_107357.f_2890));
}

int func_239(var uParam0){
if(func_250(uParam0)){
return 1;
}
return 0;
}

int func_240(){
return Global_107357.f_2890.f_12.f_66;
}

int func_241(){
return func_237(&(Global_107357.f_2890));
}

int func_242(var uParam0, int iParam1){
int iVar0;
int iVar1;
if(!INTERIOR::IS_VALID_INTERIOR(iParam1)){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < uParam0->f_763){
if(uParam0->f_763[iVar0 /*5*/]){
if(uParam0->f_763[iVar0 /*5*/].f_4==iParam1){
uParam0->f_763[iVar0 /*5*/].f_2=0;
if(!uParam0->f_763[iVar0 /*5*/].f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam1);
uParam0->f_763[iVar1 /*5*/]=1;
uParam0->f_763[iVar1 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_763[iVar1 /*5*/].f_4=iParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}

int func_243(var uParam0, char* sParam1){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < uParam0->f_273){
if(uParam0->f_273[iVar0 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_273[iVar0 /*5*/].f_4, sParam1)){
uParam0->f_273[iVar0 /*5*/].f_2=0;
if(!uParam0->f_273[iVar0 /*5*/].f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
STREAMING::REQUEST_ANIM_DICT(sParam1);
uParam0->f_273[iVar1 /*5*/]=1;
uParam0->f_273[iVar1 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_273[iVar1 /*5*/].f_4=sParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}

int func_244(var uParam0, char[4] cParam1){
int iVar0;
int iVar1;
if(MISC::IS_STRING_NULL_OR_EMPTY(cParam1)){
return 0;
}
iVar1=-1;
iVar0=0;
while (iVar0 < uParam0->f_374){
if(uParam0->f_374[iVar0 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, cParam1)){
uParam0->f_374[iVar0 /*5*/].f_2=0;
if(!uParam0->f_374[iVar0 /*5*/].f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}elseif(iVar1==-1){
iVar1=iVar0;
}
iVar0++;
}
if(iVar1 >=0){
TASK::REQUEST_WAYPOINT_RECORDING(cParam1);
uParam0->f_374[iVar1 /*5*/]=1;
uParam0->f_374[iVar1 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_374[iVar1 /*5*/].f_4=cParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}


void func_245(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 30){
if((*uParam0)[iVar0 /*5*/]){
(uParam0[iVar0 /*5*/])->f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(uParam0->f_151[iVar0 /*5*/]){
uParam0->f_151[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(uParam0->f_202[iVar0 /*7*/]){
uParam0->f_202[iVar0 /*7*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 20){
if(uParam0->f_273[iVar0 /*5*/]){
uParam0->f_273[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 20){
if(uParam0->f_374[iVar0 /*5*/]){
uParam0->f_374[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 30){
if(uParam0->f_475[iVar0 /*6*/]){
uParam0->f_475[iVar0 /*6*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(uParam0->f_656[iVar0 /*6*/]){
uParam0->f_656[iVar0 /*6*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 7){
if(uParam0->f_687[iVar0 /*7*/]){
uParam0->f_687[iVar0 /*7*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(uParam0->f_737[iVar0 /*5*/]){
uParam0->f_737[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 3){
if(uParam0->f_763[iVar0 /*5*/]){
uParam0->f_763[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
if(uParam0->f_909[iVar0 /*5*/]){
uParam0->f_909[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 5){
if(uParam0->f_960[iVar0 /*5*/]){
uParam0->f_960[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 22){
if(uParam0->f_779[iVar0 /*5*/]){
uParam0->f_779[iVar0 /*5*/].f_2=1;
}
iVar0++;
}
if(uParam0->f_898){
uParam0->f_898.f_2=1;
}
if(uParam0->f_890){
uParam0->f_890.f_2=1;
}
if(uParam0->f_894){
uParam0->f_894.f_2=1;
}}

int func_246(var uParam0, struct<3> Param1, float fParam2, int iParam3){
if(func_247(Param1) || fParam2 <=0f){
return 0;
}
if(uParam0->f_898){
if(func_157(uParam0->f_898.f_4, Param1, 0) && uParam0->f_898.f_10==fParam2){
uParam0->f_898.f_2=0;
if(!uParam0->f_898.f_1){
uParam0->f_1012=1;
return 1;
}else{
return 1;
}}}
STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam2, iParam3);
uParam0->f_898=1;
uParam0->f_898.f_3=MISC::GET_GAME_TIMER();
uParam0->f_898.f_4={
Param1 
};
uParam0->f_898.f_7={
0f, 0f, 0f 
};
uParam0->f_898.f_10=fParam2;
uParam0->f_1012=1;
return 1;
}

int func_247(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_248(int iParam0, var uParam1, var uParam2){
switch (iParam0){
case 0:
*uParam1={
183.533f, -2946.199f, 5.5113f 
};
*uParam2=177.8164f;
break;
case 1:
*uParam1={
692.067f, -1004.812f, 21.9059f 
};
*uParam2=359.5735f;
break;
}}


bool func_249(){
return MISC::IS_BIT_SET(Global_100833.f_20, 13);
}

int func_250(var uParam0){
bool bVar0;
int iVar1;
int iVar2;
if(uParam0->f_1012){
bVar0=true;
iVar1=0;
while (iVar1 < 30){
if((*uParam0)[iVar1 /*5*/]){
if(!(uParam0[iVar1 /*5*/])->f_1){
if(STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4)){
(uParam0[iVar1 /*5*/])->f_1=1;
}else{
bVar0=false;
}}
if((uParam0[iVar1 /*5*/])->f_2){
if((uParam0[iVar1 /*5*/])->f_1){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
func_252(uParam0[iVar1 /*5*/]);
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 20){
if(uParam0->f_273[iVar1 /*5*/]){
if(!uParam0->f_273[iVar1 /*5*/].f_1){
if(STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_273[iVar1 /*5*/].f_4)){
uParam0->f_273[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_273[iVar1 /*5*/].f_2){
if(uParam0->f_273[iVar1 /*5*/].f_1){
STREAMING::REMOVE_ANIM_DICT(uParam0->f_273[iVar1 /*5*/].f_4);
func_252(&(uParam0->f_273[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 20){
if(uParam0->f_374[iVar1 /*5*/]){
if(!uParam0->f_374[iVar1 /*5*/].f_1){
if(TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_374[iVar1 /*5*/].f_4)){
uParam0->f_374[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_374[iVar1 /*5*/].f_2){
if(uParam0->f_374[iVar1 /*5*/].f_1){
TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_374[iVar1 /*5*/].f_4);
func_252(&(uParam0->f_374[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_656[iVar1 /*6*/]){
if(!uParam0->f_656[iVar1 /*6*/].f_1){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_656[iVar1 /*6*/].f_5)){
uParam0->f_656[iVar1 /*6*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_656[iVar1 /*6*/].f_2){
if(uParam0->f_656[iVar1 /*6*/].f_1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_656[iVar1 /*6*/].f_5));
func_252(&(uParam0->f_656[iVar1 /*6*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 30){
if(uParam0->f_475[iVar1 /*6*/]){
if(!uParam0->f_475[iVar1 /*6*/].f_1){
if(VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4)){
uParam0->f_475[iVar1 /*6*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_475[iVar1 /*6*/].f_2){
if(uParam0->f_475[iVar1 /*6*/].f_1){
VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
func_252(&(uParam0->f_475[iVar1 /*6*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 10){
if(uParam0->f_202[iVar1 /*7*/]){
if(!uParam0->f_202[iVar1 /*7*/].f_1){
if(WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_202[iVar1 /*7*/].f_4)){
uParam0->f_202[iVar1 /*7*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_202[iVar1 /*7*/].f_2){
if(uParam0->f_202[iVar1 /*7*/].f_1){
WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_202[iVar1 /*7*/].f_4);
func_252(&(uParam0->f_202[iVar1 /*7*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 10){
if(uParam0->f_151[iVar1 /*5*/]){
if(!uParam0->f_151[iVar1 /*5*/].f_1){
if(VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_151[iVar1 /*5*/].f_4)){
uParam0->f_151[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_151[iVar1 /*5*/].f_2){
if(uParam0->f_151[iVar1 /*5*/].f_1){
VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_151[iVar1 /*5*/].f_4);
func_252(&(uParam0->f_151[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_737[iVar1 /*5*/]){
if(!uParam0->f_737[iVar1 /*5*/].f_1){
if(AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1)){
uParam0->f_737[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_737[iVar1 /*5*/].f_2){
if(uParam0->f_737[iVar1 /*5*/].f_1){
AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4);
func_252(&(uParam0->f_737[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 3){
if(uParam0->f_763[iVar1 /*5*/]){
if(!uParam0->f_763[iVar1 /*5*/].f_1){
if(INTERIOR::IS_INTERIOR_READY(uParam0->f_763[iVar1 /*5*/].f_4)){
uParam0->f_763[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_763[iVar1 /*5*/].f_2){
if(uParam0->f_763[iVar1 /*5*/].f_1){
INTERIOR::UNPIN_INTERIOR(uParam0->f_763[iVar1 /*5*/].f_4);
func_252(&(uParam0->f_763[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 7){
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_687[iVar1 /*7*/].f_4)){
if(uParam0->f_687[iVar1 /*7*/]){
iVar2=GRAPHICS::QUERY_MOVIE_MESH_SET_STATE(uParam0->f_687[iVar1 /*7*/].f_5);
if(!uParam0->f_687[iVar1 /*7*/].f_1){
switch (iVar2){
case 1:
case 2:
uParam0->f_687[iVar1 /*7*/].f_1=1;
break;
case 0:
uParam0->f_687[iVar1 /*7*/].f_1=0;
bVar0=false;
break;
case 3:
uParam0->f_687[iVar1 /*7*/].f_1=0;
func_252(&(uParam0->f_687[iVar1 /*7*/]));
break;
case -1:
uParam0->f_687[iVar1 /*7*/].f_1=0;
GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
uParam0->f_687[iVar1 /*7*/]=0;
bVar0=false;
break;
}}}elseif(INTERIOR::IS_INTERIOR_READY(uParam0->f_687[iVar1 /*7*/].f_6)){
uParam0->f_687[iVar1 /*7*/].f_5=GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_4);
uParam0->f_687[iVar1 /*7*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_687[iVar1 /*7*/]=1;
}else{
bVar0=false;
}
if(uParam0->f_687[iVar1 /*7*/].f_2){
if(uParam0->f_687[iVar1 /*7*/]){
if(uParam0->f_687[iVar1 /*7*/].f_1){
GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
func_252(&(uParam0->f_687[iVar1 /*7*/]));
uParam0->f_687[iVar1 /*7*/].f_4="";
}
else{
bVar0=false;
}}else{
func_252(&(uParam0->f_687[iVar1 /*7*/]));
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 10){
if(uParam0->f_909[iVar1 /*5*/]){
if(!uParam0->f_909[iVar1 /*5*/].f_1){
if(TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_909[iVar1 /*5*/].f_4)){
uParam0->f_909[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_909[iVar1 /*5*/].f_2){
if(uParam0->f_909[iVar1 /*5*/].f_1){
TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_909[iVar1 /*5*/].f_4);
func_252(&(uParam0->f_909[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_960[iVar1 /*5*/]){
if(!uParam0->f_960[iVar1 /*5*/].f_1){
if(AUDIO::PREPARE_ALARM(uParam0->f_960[iVar1 /*5*/].f_4)){
uParam0->f_960[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_960[iVar1 /*5*/].f_2){
if(uParam0->f_960[iVar1 /*5*/].f_1){
func_252(&(uParam0->f_960[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
iVar1=0;
while (iVar1 < uParam0->f_779){
if(uParam0->f_779[iVar1 /*5*/]){
if(!uParam0->f_779[iVar1 /*5*/].f_1){
if(HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1)){
uParam0->f_779[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_779[iVar1 /*5*/].f_2){
if(uParam0->f_779[iVar1 /*5*/].f_1){
HUD::CLEAR_ADDITIONAL_TEXT(iVar1, 1);
func_252(&(uParam0->f_779[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
if(uParam0->f_890){
if(!uParam0->f_890.f_1){
if(STREAMING::HAS_PTFX_ASSET_LOADED()){
uParam0->f_890.f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_890.f_2){
if(uParam0->f_890.f_1){
STREAMING::REMOVE_PTFX_ASSET();
func_252(&(uParam0->f_890));
}else{
bVar0=false;
}}}
if(uParam0->f_894){
if(!uParam0->f_894.f_1){
if(PHYSICS::ROPE_ARE_TEXTURES_LOADED()){
uParam0->f_894.f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_894.f_2){
if(uParam0->f_894.f_1){
PHYSICS::ROPE_UNLOAD_TEXTURES();
func_252(&(uParam0->f_894));
}else{
bVar0=false;
}}}
if(uParam0->f_898 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
if(!uParam0->f_898.f_1){
if(STREAMING::IS_NEW_LOAD_SCENE_LOADED()){
uParam0->f_898.f_1=1;
if(uParam0->f_1013){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
func_251(uParam0);
uParam0->f_1013=0;
}}else{
bVar0=false;
}}
if(uParam0->f_898.f_2){
STREAMING::NEW_LOAD_SCENE_STOP();
func_252(&(uParam0->f_898));
}}
iVar1=0;
while (iVar1 < 5){
if(uParam0->f_986[iVar1 /*5*/]){
if(!uParam0->f_986[iVar1 /*5*/].f_1){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_986[iVar1 /*5*/].f_4)){
uParam0->f_986[iVar1 /*5*/].f_1=1;
}else{
bVar0=false;
}}
if(uParam0->f_986[iVar1 /*5*/].f_2){
if(uParam0->f_986[iVar1 /*5*/].f_1){
func_252(&(uParam0->f_986[iVar1 /*5*/]));
}else{
bVar0=false;
}}}
iVar1++;
}
if(bVar0){
uParam0->f_1012=0;
return 1;
}else{
return 0;
}}
return 1;
}


void func_251(var uParam0){
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
func_252(&(uParam0->f_898));
}}


void func_252(var uParam0){
*uParam0=0;
uParam0->f_1=0;
uParam0->f_2=0;
uParam0->f_3=-1;
}


void func_253(){
if(func_254()){
func_8(1);
SCRIPT::TERMINATE_THIS_THREAD();
}}

int func_254(){
if(Global_3){
return 1;
}
if(Global_100833==7 || Global_100833==8){
return 1;
}
return 0;
}


void func_255(){
func_273(&(Local_1108[1 /*8*/]), 77245, "AI Controller");
func_273(&(Local_1108[0 /*8*/]), 75610, "Dialogue");
func_273(&(Local_1108[3 /*8*/]), 74637, "Alarms & Wanted Level");
func_273(&(Local_1108[4 /*8*/]), 74085, "Music Manager");
}


void func_256(var uParam0){
if(!func_259(uParam0)){
if(uParam0->f_1 <=4){
if((AUDIO::IS_ALARM_PLAYING(&cLocal_47) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || func_22(&(Local_1108[3 /*8*/]))){
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_ATTACK");
func_258(uParam0, 5, 0);
}}
switch (uParam0->f_1){
case 1:
if(func_108(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) < 60f){
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_START");
func_258(uParam0, 2, 0);
}
break;
case 2:
if(iLocal_1325==3 || iLocal_1325==2){
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_WAREHOUSE");
func_258(uParam0, 3, 0);
}
break;
case 3:
if(iLocal_1325==6 || iLocal_1325==9){
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_VAN");
func_258(uParam0, 4, 0);
}
break;
case 4:
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(iLocal_1325==9 && func_108(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) >=500f){
if(AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_1")){
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_1");
func_257(uParam0);
}}}
break;
case 5:
if((AUDIO::IS_ALARM_PLAYING(&cLocal_47) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && iLocal_1321){
func_258(uParam0, 6, 0);
}
break;
case 6:
if(!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
if(AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_2")){
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_2");
func_258(uParam0, 6, 0);
func_257(uParam0);
}}
break;
}}
if(func_259(uParam0)){
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
}}


void func_257(var uParam0){
if(*uParam0 !=4){
*uParam0=4;
uParam0->f_4=MISC::GET_GAME_TIMER();
uParam0->f_6=0;
uParam0->f_1=-1;
}}


void func_258(var uParam0, int iParam1, int iParam2){
if(iParam2 > 0){
*uParam0=2;
uParam0->f_5=MISC::GET_GAME_TIMER();
uParam0->f_6=iParam2;
}
uParam0->f_1=iParam1;
}

int func_259(var uParam0){
if(*uParam0==4){
return 1;
}
return 0;
}


void func_260(var uParam0){
if(!func_259(uParam0)){
switch (uParam0->f_1){
case 1:
func_258(uParam0, 2, 2000);
break;
case 2:
if(AUDIO::PREPARE_ALARM(&cLocal_47)){
AUDIO::START_ALARM(&cLocal_47, 0);
func_263(&cLocal_1110, Local_56, 30f, -1, 500, 1, 0);
StringCopy(&cLocal_1110, "", 32);
func_258(uParam0, 3, 5000);
}
break;
case 3:
func_261(&Local_27, 3, 1, "ALARM EVENT SET IT", 1, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_MAX_WANTED_LEVEL(2);
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
PED::SET_CREATE_RANDOM_COPS(0);
PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
uParam0->f_2=MISC::GET_GAME_TIMER() + 15000;
func_258(uParam0, 4, 0);
break;
case 4:
if(MISC::GET_GAME_TIMER() > uParam0->f_2){
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
PED::SET_CREATE_RANDOM_COPS(1);
PLAYER::SET_MAX_WANTED_LEVEL(5);
iLocal_1321=1;
func_257(uParam0);
}
PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
break;
}}}

int func_261(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5){
return func_262(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_262(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, bool bParam5, var uParam6, bool bParam7){
if(func_182(*uParam0)){
if(!bParam5 || iParam1 >=uParam0->f_5){
uParam0->f_38=MISC::GET_GAME_TIMER();
if(iParam1 !=uParam0->f_5 || !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), sParam2)){
uParam0->f_6=uParam0->f_5;
uParam0->f_5=iParam1;
uParam0->f_17={
uParam0->f_9 
};
StringCopy(&(uParam0->f_9), sParam2, 32);
if(bParam7){
uParam0->f_36=1;
uParam0->f_35=0;
}else{
uParam0->f_36=0;
uParam0->f_35=uParam6;
}
uParam0->f_47=0;
uParam0->f_46=0;
uParam0->f_48=0;
uParam0->f_37=MISC::GET_GAME_TIMER();
if(!func_247(Param3)){
uParam0->f_88={
Param3 
};
}
if(iParam4 !=0 && ENTITY::DOES_ENTITY_EXIST(iParam4)){
uParam0->f_91=iParam4;
}
return 1;
}}}
return 0;
}


void func_263(char* sParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6){
struct<32> Var0;
Var0.f_0=-1;
StringCopy(&(Var0.f_1), sParam0, 64);
StringCopy(&(Var0.f_17), "", 24);
Var0.f_28=iParam3;
Var0.f_26=fParam2;
Var0.f_29=iParam4;
Var0.f_30=iParam5;
Var0.f_31=iParam6;
Var0.f_23={
Param1 
};
func_264(&Var0, 0);
}

int func_264(var uParam0, int iParam1){
int iVar0;
int iVar1;
if((MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)) && *uParam0 !=-1) && (!ENTITY::DOES_ENTITY_EXIST(Local_26[*uParam0 /*110*/]) || PED::IS_PED_INJURED(Local_26[*uParam0 /*110*/]))){
return 0;
}
while (iVar0 !=-1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1109[iVar0 /*32*/].f_1))){
iVar0++;
if(iVar0 > (Local_1109.f_0 - 1)){
iVar0=-1;
}}
if(iVar0 !=-1){
if(*uParam0==-1 || (MISC::IS_STRING_NULL_OR_EMPTY(iParam1) || MISC::ARE_STRINGS_EQUAL(iParam1, &(uParam0->f_17)))){
Local_1109[iVar0 /*32*/]=*uParam0;
Local_1109[iVar0 /*32*/].f_1={
uParam0->f_1 
};
if(*uParam0 !=-1){
Local_1109[iVar0 /*32*/].f_23={
ENTITY::GET_ENTITY_COORDS(Local_26[*uParam0 /*110*/], 1) 
};
}else{
Local_1109[iVar0 /*32*/].f_23={
uParam0->f_23 
};
}
Local_1109[iVar0 /*32*/].f_26=uParam0->f_26;
Local_1109[iVar0 /*32*/].f_28=uParam0->f_28;
Local_1109[iVar0 /*32*/].f_29=uParam0->f_29;
Local_1109[iVar0 /*32*/].f_27=MISC::GET_GAME_TIMER();
Local_1109[iVar0 /*32*/].f_30=uParam0->f_30;
Local_1109[iVar0 /*32*/].f_31=uParam0->f_31;
iVar1=1;
}else{
iVar1=0;
}
*uParam0=-1;
StringCopy(&(uParam0->f_1), "", 64);
uParam0->f_23={
0f, 0f, 0f 
};
uParam0->f_26=0f;
uParam0->f_28=0;
uParam0->f_29=0;
uParam0->f_27=0;
uParam0->f_30=0;
uParam0->f_31=0;
return iVar1;
}
return 0;
}


void func_265(var uParam0){
char cVar0[24];
bool bVar1;
struct<3> Var2;
if(!func_259(uParam0)){
if(func_49()){
iLocal_1281=-1;
}elseif(iLocal_1281==-1){
iLocal_1281=MISC::GET_GAME_TIMER();
iLocal_1304=-1;
iLocal_1305=1;
}
if(iLocal_1285 !=-1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1287)){
if(((Local_26[iLocal_1285 /*110*/] !=0 && ENTITY::DOES_ENTITY_EXIST(Local_26[iLocal_1285 /*110*/])) && !PED::IS_PED_INJURED(Local_26[iLocal_1285 /*110*/])) && !PED::IS_CONVERSATION_PED_DEAD(Local_26[iLocal_1285 /*110*/])){
if(!PED::IS_PED_RAGDOLL(Local_26[iLocal_1285 /*110*/])){
if(func_49()){
if(iLocal_1295 && (iLocal_1305 || iLocal_1286 > iLocal_1304)){
if(bLocal_1306){
iLocal_1309=iLocal_1300;
iLocal_1310=iLocal_1304;
MemCopy(&Local_1311,{
func_272()
}
, 4);
MemCopy(&Local_1314,{
func_271()
}
, 4);
iLocal_1317=iLocal_1305;
bLocal_1318=iLocal_1307;
}
if(iLocal_1296){
func_11();
}else{
func_46();
}
}}
if(func_48()){
if((MISC::GET_GAME_TIMER() - iLocal_1281) > iLocal_1293){
if(func_270(iLocal_1285)){
MemCopy(&cVar0,{
Local_46
}
, 6);
}else{
StringCopy(&cVar0, "SOL1AUD", 24);
}
switch (iLocal_1285){
case 0:
func_45(&uLocal_1115, 4, Local_26[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
break;
case 1:
func_45(&uLocal_1115, 5, Local_26[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
break;
case 2:
func_45(&uLocal_1115, 4, Local_26[2 /*110*/], "CONSTRUCTION1", 0, 1);
break;
case 3:
func_45(&uLocal_1115, 3, Local_26[3 /*110*/], "CONSTRUCTION2", 0, 1);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1290)){
if(func_269(&uLocal_1115, &cVar0, &Local_1287, 8, 0, 0, 0)){
bVar1=true;
}}elseif(func_268(&uLocal_1115, &cVar0, &Local_1287, &cLocal_1290, 8, 0, 0)){
bVar1=true;
}
if(bVar1){
func_264(&(Local_26[iLocal_1285 /*110*/].f_50), &Local_1287);
iLocal_1304=iLocal_1286;
iLocal_1305=iLocal_1297;
bLocal_1306=iLocal_1299;
iLocal_1307=iLocal_1298;
iLocal_1285=-1;
iLocal_1286=-1;
StringCopy(&Local_1287, "", 16);
iLocal_1293=0;
fLocal_1294=9999999f;
iLocal_1295=0;
iLocal_1296=0;
iLocal_1297=1;
iLocal_1299=0;
iLocal_1298=0;
}
}}}}else{
iLocal_1285=-1;
iLocal_1286=-1;
StringCopy(&Local_1287, "", 16);
iLocal_1293=0;
fLocal_1294=9999999f;
iLocal_1295=0;
iLocal_1296=0;
iLocal_1297=1;
iLocal_1298=0;
}}
if(((func_49() && iLocal_1300 !=-1) && iLocal_1307) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1301)){
Var2={
ENTITY::GET_ENTITY_COORDS(Local_26[iLocal_1300 /*110*/], 1) 
};
if(func_108(PLAYER::PLAYER_PED_ID(), Var2, 1) >=25f){
iLocal_1309=iLocal_1300;
iLocal_1310=iLocal_1304;
MemCopy(&Local_1311,{
func_272()
}
, 4);
MemCopy(&Local_1314,{
func_271()
}
, 4);
iLocal_1317=iLocal_1305;
bLocal_1318=iLocal_1307;
func_11();
iLocal_1300=-1;
iLocal_1304=-1;
StringCopy(&cLocal_1301, "", 16);
iLocal_1305=0;
iLocal_1307=0;
}}
if(iLocal_1309 !=-1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1311)){
if(Local_26[iLocal_1309 /*110*/].f_5 > iLocal_1310){
iLocal_1309=-1;
iLocal_1310=-1;
StringCopy(&Local_1311, "", 16);
StringCopy(&Local_1314, "", 16);
iLocal_1317=1;
}}
if(iLocal_1285==-1 && MISC::IS_STRING_NULL_OR_EMPTY(&Local_1287)){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 10000){
if(iLocal_1309 !=-1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1311)){
func_267(iLocal_1309, &Local_1311, iLocal_1310, 0, 0, iLocal_1317, 0, 1, &Local_1314, bLocal_1318);
iLocal_1309=-1;
iLocal_1310=-1;
StringCopy(&Local_1311, "", 16);
StringCopy(&Local_1314, "", 16);
iLocal_1317=1;
}}}}
func_266(bLocal_1318);
}


void func_266(bool bParam0){
if(bParam0){}}

int func_267(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9){
float fVar0;
bool bVar1;
fVar0=func_107(Local_26[iParam0 /*110*/], PLAYER::PLAYER_PED_ID(), 1);
if((iParam2 > iLocal_1286 || iParam2==4) || ((iParam2==iLocal_1286 && (fVar0 < fLocal_1294 || (func_270(iParam0) && !func_270(iLocal_1285)))) && iParam2 !=5)){
switch (iParam2){
case 0:
if(fVar0 < 20f){
bVar1=true;
}
break;
default:
if(fVar0 < 40f){
bVar1=true;
}
break;
}
if(bVar1){
iLocal_1285=iParam0;
iLocal_1286=iParam2;
StringCopy(&Local_1287, sParam1, 16);
StringCopy(&cLocal_1290, sParam8, 16);
fLocal_1294=fVar0;
iLocal_1295=iParam3;
iLocal_1296=iParam4;
iLocal_1293=iParam6;
iLocal_1297=iParam5;
iLocal_1299=iParam7;
iLocal_1298=iParam9;
return 1;
}}
return 0;
}


bool func_268(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6){
func_44(uParam0, 145, sParam1, iParam5, iParam6, 0);
if(iParam4 > 7){
if(iParam4 < 12){
iParam4=7;
}}
Global_21852=0;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_22842=1;
StringCopy(&Global_22849, sParam3, 24);
Global_2883585=0;
return func_29(sParam2, iParam4, 0);
}


bool func_269(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_44(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_29(sParam2, iParam3, 0);
}

int func_270(int iParam0){
if(iParam0==0 || iParam0==1){
return 1;
}
return 0;
}


struct<6> func_271(){
struct<6> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "NULL", 24);
if(Global_21845==4){
iVar1=AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
iVar1=(iVar1 + Global_22855);
iVar2=iVar1 + 1;
if(iVar2 > -1 && iVar1 > -1){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar2 /*6*/]))){
return Global_20713[iVar2 /*6*/];
}else{
iVar3=iVar2;
while (iVar3 < 70){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar3 /*6*/]))){
return Global_20713[iVar3 /*6*/];
iVar3=70;
}
iVar3++;
}
return Var0;
}
return Global_20713[iVar1 /*6*/];
}else{
return Var0;
}}
return Var0;
}


struct<6> func_272(){
struct<6> Var0;
StringCopy(&Var0, "NULL", 24);
if(Global_21845==4){
return Global_21464;
}
return Var0;
}

int func_273(var uParam0, int iParam1, char* sParam2){
if(*uParam0 !=-1){
return 0;
}
*uParam0=0;
uParam0->f_3=sParam2;
uParam0->f_7=iParam1;
return 1;
}


void func_274(var uParam0){
int iVar0;
int iVar1;
struct<3> Var2;
bool bVar3;
bool bVar4;
if(!func_259(uParam0)){
bLocal_1322=true;
if(!iLocal_1320){
if(func_184()){
iLocal_1320=1;
iLocal_1323=MISC::GET_GAME_TIMER();
}}elseif((MISC::GET_GAME_TIMER() - iLocal_1323) > 3000){
iLocal_1320=0;
iLocal_1323=-1;
}
iVar0=0;
while (iVar0 < Local_26.f_0){
if(func_182(Local_26[iVar0 /*110*/])){
func_294(&(Local_26[iVar0 /*110*/]));
}
iVar0++;
}
if(func_182(Local_27.f_0)){
func_294(&Local_27);
}
iVar1=0;
while (iVar1 < Local_1109.f_0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1109[iVar1 /*32*/].f_1)) && Local_1109[iVar1 /*32*/].f_27 !=-1){
if(Local_1109[iVar1 /*32*/].f_28==-1 || (MISC::GET_GAME_TIMER() - Local_1109[iVar1 /*32*/].f_27) < Local_1109[iVar1 /*32*/].f_28){
if(Local_1109[iVar1 /*32*/].f_29 <=0 || (MISC::GET_GAME_TIMER() - Local_1109[iVar1 /*32*/].f_27) > Local_1109[iVar1 /*32*/].f_29){
if(Local_1109[iVar1 /*32*/] !=-1 && func_182(Local_26[Local_1109[iVar1 /*32*/] /*110*/])){
Var2={
ENTITY::GET_ENTITY_COORDS(Local_26[Local_1109[iVar1 /*32*/] /*110*/], 1) 
};
Local_1109[iVar1 /*32*/].f_23={
Var2 
};
}
else{
Var2={
Local_1109[iVar1 /*32*/].f_23 
};
}
if(!func_22(&(Local_1108[3 /*8*/]))){
if(Local_1109[iVar1 /*32*/].f_31 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Local_56, 1) < 35f){
func_173(&(Local_1108[3 /*8*/]), 0, 0, 1);
}
}
iVar0=0;
while (iVar0 < Local_26.f_0){
if(Local_1109[iVar1 /*32*/]==-1 || (iVar0 !=Local_1109[iVar1 /*32*/] && Local_26[Local_1109[iVar1 /*32*/] /*110*/].f_5 >=Local_26[iVar0 /*110*/].f_5)){
if(ENTITY::DOES_ENTITY_EXIST(Local_26[iVar0 /*110*/]) && !PED::IS_PED_INJURED(Local_26[iVar0 /*110*/])){
if(func_108(Local_26[iVar0 /*110*/], Var2, 1) < (Local_1109[iVar1 /*32*/].f_26 + Local_26[iVar0 /*110*/].f_42)){
Local_26[iVar0 /*110*/].f_34=iVar1;
if(Local_1109[iVar1 /*32*/].f_30){
if(!func_22(&(Local_1108[3 /*8*/]))){
func_173(&(Local_1108[3 /*8*/]), 0, 0, 1);
MemCopy(&cLocal_1110,{
Local_1109[iVar1 /*32*/].f_1
}
, 8);
}
}
}}}
iVar0++;
}}}elseif((MISC::GET_GAME_TIMER() - Local_1109[iVar1 /*32*/].f_27) > Local_1109[iVar1 /*32*/].f_28 + 2000){
StringCopy(&(Local_1109[iVar1 /*32*/].f_1), "", 64);
Local_1109[iVar1 /*32*/]=-1;
Local_1109[iVar1 /*32*/].f_23={
0f, 0f, 0f 
};
Local_1109[iVar1 /*32*/].f_26=0f;
Local_1109[iVar1 /*32*/].f_27=-1;
Local_1109[iVar1 /*32*/].f_28=-1;
Local_1109[iVar1 /*32*/].f_29=-1;
}}
iVar1++;
}
iVar0=0;
while (iVar0 < Local_26.f_0){
if(func_182(Local_26[iVar0 /*110*/])){
func_288(&(Local_26[iVar0 /*110*/]));
}
iVar0++;
}
if(func_182(Local_27.f_0)){
func_279(&Local_27);
}
iVar0=0;
while (iVar0 < Local_26.f_0){
if(func_182(Local_26[iVar0 /*110*/])){
func_278(&(Local_26[iVar0 /*110*/]));
}
iVar0++;
}
if(func_182(Local_27.f_0)){
func_276(&Local_27);
}
iVar0=0;
while (iVar0 < Local_26.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_26[iVar0 /*110*/].f_105)){
if(((!ENTITY::DOES_ENTITY_EXIST(Local_26[iVar0 /*110*/]) || PED::IS_PED_INJURED(Local_26[iVar0 /*110*/])) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_26[iVar0 /*110*/])) || (Local_26[iVar0 /*110*/].f_108 && Local_26[iVar0 /*110*/].f_5 !=0)){
bVar3=true;
}elseif(Local_26[iVar0 /*110*/].f_5 !=0){
bVar4=true;
}
if(bVar3 || bVar4){
if(ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_26[iVar0 /*110*/].f_105, Local_26[iVar0 /*110*/])){
ENTITY::DETACH_ENTITY(Local_26[iVar0 /*110*/].f_105, 1, 1);
}
if(bVar3){
ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_26[iVar0 /*110*/].f_105));
}elseif(bVar4){
OBJECT::DELETE_OBJECT(&(Local_26[iVar0 /*110*/].f_105));
}
Local_26[iVar0 /*110*/].f_109=0;
}}elseif(Local_26[iVar0 /*110*/].f_107 !=0 && Local_26[iVar0 /*110*/].f_106 !=-1){
if(Local_26[iVar0 /*110*/].f_109 && STREAMING::HAS_MODEL_LOADED(Local_26[iVar0 /*110*/].f_107)){
Local_26[iVar0 /*110*/].f_105=OBJECT::CREATE_OBJECT(Local_26[iVar0 /*110*/].f_107, PED::GET_PED_BONE_COORDS(Local_26[iVar0 /*110*/], Local_26[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_26[iVar0 /*110*/].f_105, Local_26[iVar0 /*110*/], PED::GET_PED_BONE_INDEX(Local_26[iVar0 /*110*/], Local_26[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1, 0);
Local_26[iVar0 /*110*/].f_109=0;
}}
iVar0++;
}
iVar1=0;
while (iVar1 < Local_26.f_0){
if(ENTITY::DOES_ENTITY_EXIST(Local_26[iVar1 /*110*/]) && !PED::IS_PED_INJURED(Local_26[iVar1 /*110*/])){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_26[iVar1 /*110*/]);
WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_26[iVar1 /*110*/]);
}
iVar1++;
}
func_275();
}
if(func_259(uParam0)){}}


void func_275(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
if(func_182(Local_44[iVar0 /*8*/])){
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_44[iVar0 /*8*/]);
}
iVar0++;
}}


void func_276(int iParam0){
int iVar0;
int iVar1;
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
if(func_277(*iParam0)){
Local_27.f_46=0;
}
switch (iParam0->f_5){
case 0:
if(CLOCK::GET_CLOCK_HOURS() >=5 && CLOCK::GET_CLOCK_HOURS() < 21){
if((!func_192(*iParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1) && !func_192(*iParam0, joaat("script_task_perform_sequence"), 1)) || iLocal_1329){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
iLocal_1329=0;
}}}elseif(!func_192(*iParam0, joaat("script_task_use_nearest_scenario_chain_to_pos"), 1) || !iLocal_1329){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, 1f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
iLocal_1329=1;
}}
break;
case 3:
PED::SET_PED_USING_ACTION_MODE(*iParam0, 1, -1, "DEFAULT_ACTION");
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case joaat("fight"):
case 1681313069:
case 1156217463:
if(WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_pistol"));
}
if(!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), 0)){
WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
}
if(WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, 1)){
if(iVar0 !=joaat("weapon_nightstick")){
WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_nightstick"), 0);
}}
break;
case joaat("killed"):
case 1518302817:
case -1298712083:
case 185995093:
case -1645534839:
case 880647822:
case joaat("gunshot"):
case 1921975061:
case 1682434916:
case -924218668:
case 600040296:
if(WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_nightstick"), 0)){
WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("weapon_nightstick"));
}
if(!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("weapon_pistol"), 0)){
WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
}
if(WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, 1)){
if(iVar0 !=joaat("weapon_pistol")){
WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_pistol"), 0);
}}
break;
}
if(!func_192(*iParam0, joaat("script_task_combat"), 1) || func_277(*iParam0)){
TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
TASK::TASK_LOOK_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
}
break;
case 1:
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case 686645495:
if(ENTITY::DOES_ENTITY_EXIST(iParam0->f_91)){
if(!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, ENTITY::GET_ENTITY_COORDS(iParam0->f_91, 1), 180f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000){
if(!func_192(*iParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_277(*iParam0)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
}
}
elseif(!func_192(*iParam0, joaat("script_task_goto_entity_offset"), 1) || func_277(*iParam0)){
TASK::TASK_GOTO_ENTITY_OFFSET_XY(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
}}
break;
case -1225951737:
if(iParam0->f_41 && !func_65(iParam0->f_88, iParam0->f_43, 1f, 0)){
iParam0->f_88={
iParam0->f_43 
};
iVar1=1;
}
if(!func_247(iParam0->f_88)){
if(!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, iParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000){
if((!func_192(*iParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_277(*iParam0)) || iVar1){
TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, 0);
TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
}
}
elseif((!func_192(*iParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1) || func_277(*iParam0)) || iVar1){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
}}
break;
case -1940555668:
break;
case -927541383:
if(!func_247(iParam0->f_88)){
if(!func_192(*iParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_277(*iParam0)){
TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, -1);
TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
}}else{
TASK::TASK_STAND_STILL(*iParam0, -1);
}
break;
case 58299323:
if(ENTITY::DOES_ENTITY_EXIST(iParam0->f_91)){
if(!func_192(*iParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_277(*iParam0)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
}}else{
TASK::TASK_STAND_STILL(*iParam0, -1);
}
break;
}
break;
}}

int func_277(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84){
if(Param0.f_5 !=Param0.f_7 || !MISC::ARE_STRINGS_EQUAL(&(Param0.f_9), &(Param0.f_25))){
return 1;
}
return 0;
}


void func_278(var uParam0){
int iVar0;
int iVar1;
char cVar2[24];
int iVar3;
int iVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
if(func_277(*uParam0)){
uParam0->f_46=0;
}
switch (uParam0->f_5){
case 0:
iVar1=0;
while (iVar1 < Local_26.f_0){
if(Local_26[iVar1 /*110*/]==*uParam0){
iVar0=iVar1;
}
iVar1++;
}
if(iVar0 !=-1){
switch (iVar0){
case 0:
if(!func_192(*uParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1)){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
}
}
break;
case 1:
if((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) || func_277(*uParam0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")){
if(!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misslsdhsclipboard@base", "base", 3)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1283);
if(!func_65(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0)){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
}
TASK::TASK_ACHIEVE_HEADING(0, 264.2812f, 0);
TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1283);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1283);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1283);
}
if(ENTITY::DOES_ENTITY_EXIST(Local_44[2 /*8*/])){
TASK::TASK_LOOK_AT_COORD(*uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_44[2 /*8*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_44[2 /*8*/], "engine")), -1, 0, 2);
}
uParam0->f_46=0;
}
elseif(STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a")){
switch (uParam0->f_46){
case 0:
case 2:
if(uParam0->f_46==0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0)==2){
uParam0->f_109=1;
}
if(((uParam0->f_46==0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0)==2) || uParam0->f_46==2) && MISC::GET_GAME_TIMER() > uParam0->f_37){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1283);
switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3)){
case 0:
StringCopy(&cVar2, "idle_a", 24);
break;
case 1:
StringCopy(&cVar2, "idle_b", 24);
break;
case 2:
StringCopy(&cVar2, "idle_c", 24);
break;
}
TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1283);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1283);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1283);
uParam0->f_46=1;
}
break;
case 1:
if(TASK::GET_SEQUENCE_PROGRESS(*uParam0)==1){
uParam0->f_46++;
}
break;
}
}
break;
case 2:
case 3:
if(!func_192(*uParam0, joaat("script_task_use_nearest_scenario_to_pos"), 1)){
if(TASK::DOES_SCENARIO_EXIST_IN_AREA(159.82f, -3085.93f, 5f, 0.1f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
}elseif(TASK::DOES_SCENARIO_EXIST_IN_AREA(160.15f, -3084.79f, 4.99f, 0.1f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
}elseif(TASK::DOES_SCENARIO_EXIST_IN_AREA(159.09f, -3085.02f, 5.01f, 0.1f, 1)){
TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
}
}
break;
}}
break;
case 1:
switch (MISC::GET_HASH_KEY(&(uParam0->f_9))){
case 2074432461:
case 356486511:
case -414594135:
case 1260350710:
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_91)){
if(!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_91, 1), 180f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000){
if(!func_192(*uParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_277(*uParam0)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
}
}
elseif(!func_192(*uParam0, joaat("script_task_goto_entity_offset"), 1) || func_277(*uParam0)){
TASK::TASK_GOTO_ENTITY_OFFSET_XY(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
}}
break;
case -1225951737:
if(uParam0->f_41 && !func_65(uParam0->f_88, uParam0->f_43, 1f, 0)){
uParam0->f_88={
uParam0->f_43 
};
iVar3=1;
}
if(!func_247(uParam0->f_88)){
if(!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, uParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000){
if((!func_192(*uParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_277(*uParam0)) || iVar3){
TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, 0);
TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
}
}
elseif((!func_192(*uParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1) || func_277(*uParam0)) || iVar3){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
}}
break;
case -1940555668:
break;
case -927541383:
if(!func_247(uParam0->f_88)){
if(!func_192(*uParam0, joaat("script_task_turn_ped_to_face_coord"), 1) || func_277(*uParam0)){
TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, -1);
TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
}}else{
TASK::TASK_STAND_STILL(*uParam0, -1);
}
break;
case 58299323:
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_91)){
if(!func_192(*uParam0, joaat("script_task_turn_ped_to_face_entity"), 1) || func_277(*uParam0)){
TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
}}else{
TASK::TASK_STAND_STILL(*uParam0, -1);
}
break;
}
break;
case 2:
if(((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_FOOT_LEAVE") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_VEH_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_FOOT_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_VEH_LEAVE")){
if((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_277(*uParam0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1283);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_STAND_STILL(0, 2000);
TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1283, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1283);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1283);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1283);
TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
}}else{
if(ENTITY::DOES_ENTITY_EXIST(iLocal_1328) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1328, 0)){
fVar6=func_107(PLAYER::PLAYER_PED_ID(), iLocal_1328, 1);
}
if((iLocal_1325==3 || iLocal_1325==2) || iLocal_1325==8){
iVar4=PLAYER::PLAYER_PED_ID();
fVar7=2f;
}elseif(iLocal_1325==0 || iLocal_1325==1){
iVar4=PLAYER::PLAYER_PED_ID();
fVar7=1f;
}elseif(iLocal_1325==5 && ENTITY::DOES_ENTITY_EXIST(iLocal_1328)){
if(fVar6 > 10f){
iVar4=PLAYER::PLAYER_PED_ID();
fVar7=2f;
}else{
iVar4=iLocal_1328;
fVar7=2f;
}}elseif(iLocal_1325==4 && ENTITY::DOES_ENTITY_EXIST(iLocal_1328)){
iVar4=iLocal_1328;
fVar7=1f;
}
if(ENTITY::DOES_ENTITY_EXIST(iVar4)){
fVar5=func_107(*uParam0, iVar4, 1);
}
if(fVar5 <=7.5f){
if(((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) && !func_192(*uParam0, joaat("script_task_go_to_entity"), 1)) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_277(*uParam0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1283);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_STAND_STILL(0, 2000);
TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1283, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1283);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1283);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1283);
TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
}}elseif(!func_192(*uParam0, joaat("script_task_go_to_entity"), 1) || func_277(*uParam0)){
if(fVar7 > 1f){
fVar8=6f;
}else{
fVar8=3f;
}
TASK::TASK_GO_TO_ENTITY(*uParam0, iVar4, -1, fVar8, fVar7, 1073741824, 0);
TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
}}
break;
case 3:
switch (MISC::GET_HASH_KEY(&(uParam0->f_9))){
case joaat("fight"):
case 1681313069:
case 1156217463:
case 1568162790:
case 1682434916:
case -924218668:
case 2056033185:
case 185995093:
if(WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar9, 1)){
if(iVar9 !=joaat("weapon_unarmed")){
WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), 0);
}}
if(!func_192(*uParam0, joaat("script_task_combat"), 1)){
TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
}
break;
case 1093888274:
if((!func_192(*uParam0, joaat("script_task_perform_sequence"), 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_277(*uParam0)){
TASK::OPEN_SEQUENCE_TASK(&uLocal_1283);
TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
TASK::TASK_STAND_STILL(0, 2000);
TASK::SET_SEQUENCE_TO_REPEAT(uLocal_1283, 1);
TASK::CLOSE_SEQUENCE_TASK(uLocal_1283);
TASK::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_1283);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_1283);
TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
}
break;
}
break;
case 5:
if(func_108(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f){
if(!func_192(*uParam0, joaat("script_task_smart_flee_ped"), 1)){
TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
}}elseif((!func_192(*uParam0, joaat("script_task_smart_flee_ped"), 1) && !func_192(*uParam0, joaat("script_task_follow_nav_mesh_to_coord"), 1)) || func_277(*uParam0)){
TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
}
break;
case 4:
switch (MISC::GET_HASH_KEY(&(uParam0->f_9))){
case -1645534839:
if(!func_192(*uParam0, joaat("script_task_hands_up"), 1) || func_277(*uParam0)){
TASK::TASK_HANDS_UP(*uParam0, -1, PLAYER::PLAYER_PED_ID(), 0, 1);
}
break;
}
break;
}}


void func_279(int iParam0){
var uVar0;
float fVar1;
int iVar2;
int iVar3;
var uVar4;
var uVar5;
bool bVar6;
bool bVar7;
bool bVar8;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
fVar1=func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0)){
iVar3=1;
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1)){
if(WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0)){
iVar2=1;
}}
uVar4=func_286(*iParam0, &uVar5, &bVar6, &bVar7);
if((uVar4 && uVar5) && !bVar7){
if(bVar6){
func_261(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
}else{
func_261(iParam0, 3, 1, "KILLED", 1, 0);
}}elseif(((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 88)){
func_261(iParam0, 3, 1, "GUNSHOT", 1, 0);
}elseif(iParam0->f_39 && func_285(4)){
func_261(iParam0, 3, 1, "GUN_AIMED", 1, 0);
}elseif(iParam0->f_39 && func_284(*iParam0, 2)){
func_261(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
}elseif(((iParam0->f_39 && fVar1 < 8f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5)){
func_261(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
}elseif((iParam0->f_39 || iParam0->f_41) && iLocal_1325==11){
if(iParam0->f_39){
func_261(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
}elseif(iParam0->f_41){
func_283(iParam0, 1, "HEARD_SEC_CAR", Local_44[3 /*8*/], 1, 1, 0);
}}elseif((iParam0->f_39 || iParam0->f_41) && iLocal_1325==6){
if(iParam0->f_39){
func_261(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
}elseif(iParam0->f_41){
func_283(iParam0, 1, "HEARD_VAN", Local_44[func_102() /*8*/], 1, 1, 0);
}}elseif((iParam0->f_39 || iParam0->f_41) && iLocal_1325==10){
if(iParam0->f_39){
func_283(iParam0, 3, "STEALING_VAN", Local_44[func_54() /*8*/], 1, 1, 0);
}elseif(iParam0->f_41){
func_283(iParam0, 1, "HEARD_VAN", Local_44[func_54() /*8*/], 1, 1, 0);
}}elseif(((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 42)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 114)) || func_281(*iParam0, 0)){
func_261(iParam0, 3, 1, "FIGHT", 1, 0);
}elseif((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 103)) || func_281(*iParam0, 1)){
func_261(iParam0, 3, 1, "RAN_OVER", 1, 0);
}elseif(((iParam0->f_5 !=3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) < 40f)){
if(iParam0->f_39){
func_261(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
}elseif(iParam0->f_41){
func_280(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}}elseif(iParam0->f_5 !=5 && uVar4){
if((uVar5 && bVar6) && bVar7){
func_261(iParam0, 3, 1, "PLAYER_KO", 1, 0);
}elseif(!bVar6){
func_261(iParam0, 3, 1, "DEAD_BODY", 1, 0);
}}
if(iParam0->f_34 > -1 && iParam0->f_34 < (Local_1109.f_0 - 1)){
bVar8=Local_1109[iParam0->f_34 /*32*/].f_30;
switch (MISC::GET_HASH_KEY(&(Local_1109[iParam0->f_34 /*32*/].f_1))){
case joaat("killed"):
case 1518302817:
case -1298712083:
case 185995093:
case -1645534839:
case 880647822:
case 1921975061:
case joaat("fight"):
case 1681313069:
case 1156217463:
case 1682434916:
case -924218668:
case joaat("gunshot"):
case 600040296:
func_261(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar8);
break;
case -1225951737:
func_280(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, bVar8);
break;
case 2074432461:
case 686645495:
func_283(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), Local_44[func_102() /*8*/], 1, 0, bVar8);
break;
}}
iParam0->f_34=-1;
if(iParam0->f_7 !=iParam0->f_5){
iParam0->f_8=1;
}else{
iParam0->f_8=0;
}
iParam0->f_7=iParam0->f_5;
if(!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9))){
iParam0->f_33=1;
}else{
iParam0->f_33=0;
}
iParam0->f_25={
iParam0->f_9 
};
switch (iParam0->f_5){
case 0:
break;
case 1:
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case 58299323:
if((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000){
func_261(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
}
break;
case -1225951737:
if(((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && func_108(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0)){
func_261(iParam0, 1, 0, "SOUND_LOST", 1, 0);
}
break;
case -927541383:
if((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
func_261(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
}
break;
}
break;
case 3:
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case joaat("fight"):
case 1681313069:
case 1156217463:
if((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) > 65f) && (func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
func_261(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
}
break;
case joaat("killed"):
case 1518302817:
case -1298712083:
case 185995093:
case -1645534839:
case 880647822:
case joaat("gunshot"):
case 1921975061:
case 1682434916:
case -924218668:
case 600040296:
if(func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) > 300f && func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 150f){
func_261(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
}
break;
}
break;
}}

int func_280(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam4, int iParam5, bool bParam6){
return func_262(iParam0, iParam1, sParam2, Param3, 0, bParam4, iParam5, bParam6);
}

int func_281(struct<110> Param0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Local_26.f_0){
if(func_282(Param0, Local_26[iVar0 /*110*/], iParam1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_282(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220){
if(ENTITY::DOES_ENTITY_EXIST(iParam110) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam110, PLAYER::PLAYER_PED_ID(), iParam220)){
if(func_107(iParam0, iParam110, 1) < 15f){
if(ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam110)){
return 1;
}}}
return 0;
}

int func_283(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6){
return func_262(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_284(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110){
if((iParam0 !=0 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !PED::IS_PED_INJURED(iParam0)){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam110) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))){
return 1;
}}
return 0;
}

int func_285(int iParam0){
if(WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam0) && (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))){
return 1;
}
return 0;
}

int func_286(struct<110> Param0, var uParam1, var uParam2, var uParam3){
int iVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4;
iVar0=0;
while (iVar0 < Local_26.f_0){
if(func_287(Param0, Local_26[iVar0 /*110*/], &bVar2, &bVar3, &bVar4)){
if(bVar2 && bVar4){
Local_26[iVar0 /*110*/].f_85=1;
}
if(!bVar1){
bVar1=true;
*uParam1=bVar2;
*uParam2=bVar3;
*uParam3=bVar4;
}else{
if(bVar2){
*uParam1=1;
}
if(bVar3){
*uParam2=1;
}
if(bVar4){
*uParam3=1;
}}
if(Local_26[iVar0 /*110*/].f_85){
*uParam2=1;
}}
iVar0++;
}
if(bVar1){
return 1;
}
*uParam1=0;
*uParam2=0;
*uParam3=0;
return 0;
}

int func_287(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80){
struct<3> Var0;
int iVar1;
int iVar2;
int iVar3;
if(ENTITY::DOES_ENTITY_EXIST(Param71.f_0) && PED::IS_PED_INJURED(Param71.f_0)){
Var0={
ENTITY::GET_ENTITY_COORDS(Param71.f_0, 0) 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Param0.f_0, 1), Var0, 1) < 10f){
if(ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Param0.f_0, Param71.f_0)){
if((MISC::GET_GAME_TIMER() - Param71.f_103) < 3000){
*uParam78=1;
}else{
*uParam78=0;
}
if(*uParam78){
iVar1=PED::GET_PED_SOURCE_OF_DEATH(Param71.f_0);
if(ENTITY::IS_ENTITY_A_PED(iVar1)){
iVar2=ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
if((iVar2==PLAYER::PLAYER_PED_ID() && !PED::IS_PED_INJURED(iVar2)) && Param0.f_39){
*uParam79=1;
}
else{
*uParam79=0;
}}else{
*uParam79=0;
}}else{
*uParam79=0;
}
iVar3=PED::GET_PED_CAUSE_OF_DEATH(Param71.f_0);
if(iVar3==joaat("weapon_unarmed") || (iVar3 !=joaat("weapon_unarmed") && WEAPON::GET_WEAPON_DAMAGE_TYPE(iVar3)==2)){
*uParam80=1;
}
return 1;
}}}
return 0;
}


void func_288(int iParam0){
var uVar0;
float fVar1;
int iVar2;
int iVar3;
struct<8> Var4;
var uVar5;
var uVar6;
bool bVar7;
bool bVar8;
bool bVar9;
int iVar10;
int iVar11;
struct<6> Var12;
bool bVar13;
var uVar14;
float fVar15;
struct<3> Var16;
struct<3> Var17;
struct<4> Var18;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, 1);
fVar1=func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0)){
iVar3=1;
}
if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1)){
if(WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_unarmed"), 0)){
iVar2=1;
}}
uVar5=func_286(*iParam0, &uVar6, &bVar7, &bVar8);
if(((iParam0->f_5 !=5 && uVar5) && uVar6) && !bVar8){
if(bVar7){
func_261(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
}else{
func_261(iParam0, 5, 1, "KILLED", 1, 0);
}}elseif(((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 88)){
func_261(iParam0, 5, 1, "GUNSHOT", 1, 0);
}elseif((iParam0->f_39 && iParam0->f_5 !=4) && func_285(4)){
func_261(iParam0, 4, 1, "GUN_AIMED", 1, 0);
}elseif(iParam0->f_39 && func_284(*iParam0, 2)){
func_261(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
}elseif((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 !=4) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5)){
func_261(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
}elseif((iParam0->f_39 || iParam0->f_41) && iLocal_1325==7){
if(iParam0->f_39){
func_261(iParam0, 3, 1, "EXIT_VAN", 1, 0);
}elseif(iParam0->f_41){
func_280(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}}elseif((iParam0->f_39 || iParam0->f_41) && iLocal_1325==6){
if(iParam0->f_39){
func_261(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
}elseif(iParam0->f_41){
func_280(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}}elseif((iParam0->f_39 || iParam0->f_41) && iLocal_1325==10){
if(iParam0->f_39){
func_283(iParam0, 3, "STEALING_VAN", Local_44[func_54() /*8*/], 1, 1, 0);
}elseif(iParam0->f_41){
func_283(iParam0, 1, "HEARD_VAN", Local_44[func_54() /*8*/], 1, 1, 0);
}}elseif(((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 42)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 114)) || func_281(*iParam0, 0)){
func_261(iParam0, 3, 1, "FIGHT", 1, 0);
}elseif((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 103)) || func_281(*iParam0, 1)){
func_261(iParam0, 3, 1, "RAN_OVER", 1, 0);
}elseif(((iParam0->f_5 !=3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) < 40f)){
if(iParam0->f_39){
func_261(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
}elseif(iParam0->f_41){
func_280(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}}elseif(iParam0->f_5 !=5 && uVar5){
if((uVar6 && bVar7) && bVar8){
func_261(iParam0, 3, 1, "PLAYER_KO", 1, 0);
}elseif(!bVar7){
func_261(iParam0, 5, 1, "DEAD_BODY", 1, 0);
}}elseif(((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_1325==9) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER")) && func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) < 15f){
if(iParam0->f_39){
func_283(iParam0, 1, "SEE_VAN_LEAVING", Local_44[func_102() /*8*/], 1, 1, 0);
}elseif(iParam0->f_41){
func_283(iParam0, 1, "HEARD_VAN", Local_44[func_102() /*8*/], 1, 1, 0);
}}elseif(iLocal_1325 !=9){
if((iParam0->f_86 && (((iLocal_1325==0 || iLocal_1325==1) || iLocal_1325==4) || iParam0->f_5==1)) || (iParam0->f_87 && ((iLocal_1325==3 || iLocal_1325==2) || iLocal_1325==5))){
if((iLocal_1325==5 || iLocal_1325==4) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam0, iLocal_1328, 19)){
switch (iLocal_1325){
case 5:
StringCopy(&Var4, "WH_DITCH_VEH", 64);
break;
case 4:
StringCopy(&Var4, "ENT_DITCH_VEH", 64);
break;
}
func_261(iParam0, 2, 1, &Var4, 1, 0);
}elseif(iParam0->f_39){
switch (iLocal_1325){
case 0:
StringCopy(&Var4, "ENT_FOOT", 64);
break;
case 1:
StringCopy(&Var4, "ENT_VEH", 64);
break;
case 2:
StringCopy(&Var4, "WH_FOOT", 64);
break;
case 3:
StringCopy(&Var4, "WH_VEH", 64);
break;
case 5:
StringCopy(&Var4, "WH_DITCH_VEH", 64);
break;
case 4:
StringCopy(&Var4, "ENT_DITCH_VEH", 64);
break;
case -1:
if(iParam0->f_5==1){
StringCopy(&Var4, "ENT_FOOT", 64);
}
break;
}
func_261(iParam0, 2, 1, &Var4, 1, 0);
}elseif(iParam0->f_41){
func_280(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
}}}
if(iParam0->f_34 > -1 && iParam0->f_34 < (Local_1109.f_0 - 1)){
bVar9=Local_1109[iParam0->f_34 /*32*/].f_30;
switch (MISC::GET_HASH_KEY(&(Local_1109[iParam0->f_34 /*32*/].f_1))){
case joaat("killed"):
case 1518302817:
case -1298712083:
if(iParam0->f_5 !=4){
func_261(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case 185995093:
if(iParam0->f_5 !=4){
func_261(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -1645534839:
if(iParam0->f_5 !=4){
if(func_108(*iParam0, Local_1109[iParam0->f_34 /*32*/].f_23, 1) < 5f){
func_261(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
}else{
func_261(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
}}
break;
case 880647822:
if(iParam0->f_5 !=4){
func_261(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case 1921975061:
if(iParam0->f_5 !=4){
func_261(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case joaat("fight"):
case 1681313069:
case 1156217463:
case -419867425:
if(iParam0->f_5 !=4){
func_261(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case 1682434916:
case -924218668:
case 2056033185:
if(((iParam0->f_5 !=4 && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "STEALING_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "GET_IN_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "EXIT_VAN")){
func_261(iParam0, 3, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case joaat("gunshot"):
if(iParam0->f_5 !=4){
func_261(iParam0, 5, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -426892158:
if(iParam0->f_86){
func_261(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -1461435341:
if(iParam0->f_86){
func_261(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -972653884:
if(iParam0->f_87){
func_261(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -520621538:
if(iParam0->f_87){
func_261(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -1349994105:
if(iParam0->f_87){
func_261(iParam0, 2, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), 0, bVar9);
}
break;
case -1225951737:
if(iParam0->f_87){
func_280(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, bVar9);
}
break;
case 2074432461:
if(iParam0->f_87){
func_283(iParam0, 1, &(Local_1109[iParam0->f_34 /*32*/].f_1), Local_44[func_102() /*8*/], 1, 0, bVar9);
}
break;
}}
iParam0->f_34=-1;
if(iParam0->f_7 !=iParam0->f_5){
iParam0->f_8=1;
}else{
iParam0->f_8=0;
}
iParam0->f_7=iParam0->f_5;
if(!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9))){
iParam0->f_33=1;
}else{
iParam0->f_33=0;
}
iParam0->f_25={
iParam0->f_9 
};
iVar10=0;
while (iVar10 < Local_26.f_0){
if(Local_26[iVar10 /*110*/]==*iParam0){
iVar11=iVar10;
}
iVar10++;
}
switch (iParam0->f_5){
case 5:
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case joaat("gunshot"):
case 1921975061:
case 880647822:
case joaat("killed"):
case 1518302817:
case -1298712083:
if((func_293(*iParam0) || (iParam0->f_48 % 2)==0) || !func_182(Local_27.f_0)){
if((MISC::GET_HASH_KEY(&(iParam0->f_9))==joaat("gunshot") || MISC::GET_HASH_KEY(&(iParam0->f_9))==1921975061) || MISC::GET_HASH_KEY(&(iParam0->f_9))==880647822){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_GUN1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
}}else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_ARM1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_ARM2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
}}
}
elseif((MISC::GET_HASH_KEY(&(iParam0->f_9))==joaat("killed") || MISC::GET_HASH_KEY(&(iParam0->f_9))==1518302817) || MISC::GET_HASH_KEY(&(iParam0->f_9))==-1298712083){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_KILL") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
}}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
}
}
iParam0->f_48++;
}else{
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_GETSEC") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_SECIN1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_SECIN2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
}
}
iParam0->f_48++;
}
break;
}
break;
case 4:
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case 1224761252:
if(func_284(*iParam0, 4)){
func_261(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
}elseif((MISC::GET_GAME_TIMER() - iParam0->f_37) > 1000){
func_261(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
}
break;
case -1645534839:
if(func_284(*iParam0, 4)){
func_261(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
}
if(((MISC::GET_GAME_TIMER() - iParam0->f_37) > 15000 || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 3000) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
func_261(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
}elseif(func_293(*iParam0) || iParam0->f_48==0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_HND1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_SCAR1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_SCAR2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
}
}
iParam0->f_48++;
}else{
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_HND1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_SCAR1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_SCAR2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
}elseif(iParam0->f_48==0){
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
}
}
iParam0->f_48++;
}
break;
}
break;
case 0:
switch (iVar11){
case 1:
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
switch (iLocal_1308){
case 0:
func_267(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 1:
func_267(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 2:
func_267(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 3:
func_267(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 4:
func_267(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 5:
func_267(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 6:
func_267(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 7:
func_267(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 8:
func_267(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 9:
func_267(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308++;
break;
case 10:
func_267(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iLocal_1308=0;
break;
}}
break;
case 2:
if(!iParam0->f_49){
if(func_267(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1)){
func_45(&uLocal_1115, 4, Local_26[2 /*110*/], "CONSTRUCTION1", 0, 1);
func_45(&uLocal_1115, 3, Local_26[3 /*110*/], "CONSTRUCTION2", 0, 1);
iParam0->f_49=1;
}}
break;
}
break;
case 1:
if(MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER")){
Var16={
func_290(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) 
};
Var17={
func_290(ENTITY::GET_ENTITY_COORDS(Local_26[iVar11 /*110*/], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) 
};
uVar14=func_289(Var16, Var17);
fVar15=MISC::ACOS(uVar14);
if((fVar15 < 90f && fVar1 < 8f) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f){
bVar13=true;
}}
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case -414594135:
case 1260350710:
if(func_293(*iParam0) && MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING")){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_VAN_LVE1") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
}}elseif(bVar13){
func_283(iParam0, 1, "CHECK_DRIVER", Local_44[func_102() /*8*/], 0, 1, 0);
}elseif(func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) >=20f){
if(fVar1 > 5f){
func_261(iParam0, 1, 0, "VAN_LOST", 1, 0);
}}
break;
case 58299323:
if(func_293(*iParam0)){
Var12={
func_292(iVar11, "JS_VAN_LVE2") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
}elseif((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000){
func_261(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
}
break;
case 356486511:
if(bVar13){
if((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
func_261(iParam0, 3, 1, "STEALING_VAN", 1, 0);
}}else{
func_283(iParam0, 1, "SEE_VAN_LEAVING_1", Local_44[func_102() /*8*/], 0, 1, 0);
}
break;
case -1225951737:
if(((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && func_108(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0)){
func_261(iParam0, 1, 0, "SOUND_LOST", 1, 0);
}elseif(func_293(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_SND_INV") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
}
}}
break;
case -927541383:
if((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_SNDLOST2") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
}
func_261(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
}elseif(func_293(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_SNDLOST1") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
}}
break;
}
break;
case 3:
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case joaat("fight"):
case 1681313069:
case 1156217463:
case -419867425:
if((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && func_108(PLAYER::PLAYER_PED_ID(), Local_56, 1) > 65f) && (func_107(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
func_261(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
}elseif(func_293(*iParam0) && iParam0->f_35){
if(!iParam0->f_84){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_MELE_1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
}}else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_FIGHT1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_FIGHT2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
}}
iParam0->f_84=1;
}
elseif(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_MELE_2") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_FIGHT1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_FIGHT2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
}
}}
break;
case 1093888274:
if((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000){
func_261(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
}
if(func_293(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_MELE_ESC") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
}}
break;
case 1682434916:
if(((((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && iParam0->f_39) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)) && iLocal_1325 !=9) && iLocal_1325 !=10){
func_261(iParam0, 3, 0, "EXIT_VAN", 1, 0);
}
if(func_293(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_VAN_IN2") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_VAN1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_VAN2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}}elseif(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 2000){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_VAN_TK") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}
}}
break;
case -924218668:
if(func_293(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_VAN_IN1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_VAN1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_VAN2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}}elseif(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 2000){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_VAN_TK") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}}
break;
case 2056033185:
if(func_293(*iParam0)){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_VAN_IN2") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}
else{
switch (iVar11){
case 2:
StringCopy(&Var12, "SOL1_VAN1", 24);
break;
case 3:
StringCopy(&Var12, "SOL1_VAN2", 24);
break;
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
}else{
func_291(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
}
}}
break;
}
break;
case 2:
if((MISC::GET_GAME_TIMER() - iParam0->f_38) > 5000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
if(iVar11==1){
func_267(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
iLocal_1308=0;
}
func_261(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
}else{
if(iParam0->f_39){
if((MISC::GET_GAME_TIMER() - iParam0->f_38) > 1000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)){
if(((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_VEH")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH")){
Var18={
iParam0->f_9 
};
StringConCat(&Var18, "_LEAVE", 32);
func_261(iParam0, 2, 0, &Var18, 1, 0);
}}
if((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH")) || (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_DITCH_VEH") && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))){
if(((iParam0->f_104 >=6 && iLocal_1281 !=-1) && (MISC::GET_GAME_TIMER() - iLocal_1281) > 7000) && (MISC::GET_GAME_TIMER() - iParam0->f_38)==0){
func_261(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
}}}
switch (MISC::GET_HASH_KEY(&(iParam0->f_9))){
case -426892158:
if(func_293(*iParam0)){
if(!iParam0->f_82){
if(func_270(iVar11)){
if(!iParam0->f_83){
Var12={
func_292(iVar11, "JS_ENT_F1") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
}
else{
Var12={
func_292(iVar11, "JS_ENT_F1_P") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
}}}elseif(func_270(iVar11)){
if(!iParam0->f_83){
Var12={
func_292(iVar11, "JS_ENT_F2") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
}else{
Var12={
func_292(iVar11, "JS_ENT_F2_P") 
};
func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
}}
iParam0->f_82=1;
}
elseif(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
if(func_270(iVar11)){
if(!iParam0->f_83){
Var12={
func_292(iVar11, "JS_ENT_F") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}else{
Var12={
func_292(iVar11, "JS_ENT_F_P") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}}
}
break;
case -1461435341:
if(func_293(*iParam0) || iParam0->f_48==0){
if(!iParam0->f_82){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_ENT_V1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0)){
iParam0->f_48++;
}}
iParam0->f_82=1;
}elseif(MISC::ARE_STRINGS_EQUAL(&(iParam0->f_17), "WH_VEH")){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_ENT_V") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0)){
iParam0->f_48++;
}}}elseif(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_ENT_V3") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0)){
iParam0->f_48++;
}}
}
elseif(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_ENT_V3") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}
}
break;
case -972653884:
if(func_293(*iParam0)){
if(iParam0->f_104==0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_WH1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}elseif(iParam0->f_104 > 0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_WH2") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}
iParam0->f_82=1;
}
elseif(iParam0->f_104 < 6){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
if(func_270(iVar11)){
if(iParam0->f_104 < 5){
Var12={
func_292(iVar11, "JS_WH") 
};
}
else{
Var12={
func_292(iVar11, "JS_WH_F") 
};
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}
}
break;
case -640827668:
if(func_293(*iParam0)){
if(iParam0->f_104==0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_WH1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}elseif(iParam0->f_104 > 0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_WH2") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}
iParam0->f_82=1;
}
elseif(iParam0->f_104 < 6){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
if(func_270(iVar11)){
if(iParam0->f_104 < 5){
if(((iParam0->f_104 - 1) % 2)==0){
Var12={
func_292(iVar11, "JS_ENT_V4") 
};
}
else{
Var12={
func_292(iVar11, "JS_ENT_V3") 
};
}
}
else{
Var12={
func_292(iVar11, "JS_WH_F") 
};
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}
}
break;
case -520621538:
if(func_293(*iParam0)){
if(iParam0->f_104==0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_WH1") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}elseif(iParam0->f_104 > 0){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_WH2") 
};
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}
iParam0->f_82=1;
}
elseif(iParam0->f_104 < 6){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
if(func_270(iVar11)){
if(iParam0->f_104 < 5){
if(((iParam0->f_104 - 1) % 2)==0){
Var12={
func_292(iVar11, "JS_ENT_V3") 
};
}
else{
Var12={
func_292(iVar11, "JS_WH") 
};
}
}
else{
Var12={
func_292(iVar11, "JS_WH_F") 
};
}
if(func_267(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0)){
func_291(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
}
else{
func_291(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
}
iParam0->f_104++;
}}
}
break;
case 778765338:
if(iParam0->f_48==0){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 1000){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_ENT_V4") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}
iParam0->f_48++;
}
}
elseif(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 5000){
if(((iParam0->f_48 - 1) % 3)==0){
Var12={
func_292(iVar11, "JS_ENT_V4") 
};
}else{
Var12={
func_292(iVar11, "JS_ENT_V3") 
};
}
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
iParam0->f_48++;
}
break;
case 1580556320:
if(iParam0->f_48==0){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 1000){
if(func_270(iVar11)){
if(!iParam0->f_83){
Var12={
func_292(iVar11, "JS_ENT_F3") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}
else{
Var12={
func_292(iVar11, "JS_ENT_F3_P") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}}
iParam0->f_48++;
}
}
break;
case -1697689838:
case -628260985:
case -1891358342:
if(iParam0->f_48==0){
if(func_48() && (MISC::GET_GAME_TIMER() - iLocal_1281) > 1000){
if(func_270(iVar11)){
Var12={
func_292(iVar11, "JS_ENT_V5") 
};
func_267(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
}
iParam0->f_48++;
}
}
break;
}}
break;
}}


float func_289(struct<3> Param0, struct<3> Param1){
return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}


Vector3 func__290(struct<3> Param0){
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


void func_291(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < Local_26.f_0){
if(Local_26[iVar0 /*110*/]==*iParam0){
iVar1=iVar0;
}
iVar0++;
}
iParam0->f_50=iVar1;
StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
iParam0->f_50.f_28=iParam4;
iParam0->f_50.f_26=fParam3;
iParam0->f_50.f_29=iParam5;
iParam0->f_50.f_30=iParam7;
iParam0->f_50.f_31=iParam8;
if(bParam6){
func_264(&(iParam0->f_50), 0);
}}


struct<6> func_292(int iParam0, char* sParam1){
struct<6> Var0;
StringCopy(&Var0, sParam1, 24);
if(iParam0==1){
StringConCat(&Var0, "b", 24);
}
return Var0;
}

int func_293(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76){
if(Param0.f_8 || Param0.f_33){
return 1;
}
return 0;
}


void func_294(int iParam0){
if(PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID())){
iParam0->f_40=MISC::GET_GAME_TIMER();
iParam0->f_39=1;
}elseif((MISC::GET_GAME_TIMER() - iParam0->f_40) > 2000 || !PED::IS_PED_FACING_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 90f)){
iParam0->f_40=MISC::GET_GAME_TIMER();
iParam0->f_39=0;
}
if(iParam0->f_39){
bLocal_1322=false;
}
if(bLocal_1322){
PED::SET_PED_RESET_FLAG(*iParam0, 188, 1);
}
if(!func_295()){
iParam0->f_41=PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), *iParam0);
if(iParam0->f_41){
iParam0->f_43={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}}else{
iParam0->f_41=0;
}
switch (iParam0->f_5){
case 5:
case 4:
case 3:
iParam0->f_102=1;
break;
default:
iParam0->f_102=0;
break;
}}

int func_295(){
int iVar0;
iVar0=0;
while (iVar0 <=2){
if(ENTITY::DOES_ENTITY_EXIST(Local_44[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_44[iVar0 /*8*/], 0)){
if(VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_44[iVar0 /*8*/])){
return 1;
}}
iVar0++;
}
return 0;
}


void func_296(){
struct<3> Var0;
var uVar1;
PED::ADD_RELATIONSHIP_GROUP("BUGSTAR", &iLocal_1282);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("player"), iLocal_1282);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1282, joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1282);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1282, joaat("COP"));
VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
if(func_196() || func_6(0)){
iLocal_65=0;
if(func_196()){
if(Global_94990){
iLocal_65++;
}}
if(func_196()){
func_248(iLocal_65, &Var0, &uVar1);
func_302(Var0, uVar1, 1, 0);
}
bLocal_64=true;
}else{
while (!func_191(1)){
wait(0);
func_301(&uLocal_68);
}}
func_300(&uLocal_68, "JHP1A", 0);
func_243(&uLocal_68, "misslsdhsclipboard@base");
func_243(&uLocal_68, "misslsdhsclipboard@idle_a");
func_243(&uLocal_68, "misstrevor3");
func_174(&uLocal_68, joaat("p_amb_clipboard_01"));
func_242(&uLocal_68, iLocal_1284);
func_244(&uLocal_68, &cLocal_57);
PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.15f);
func_298(87);
func_45(&uLocal_1115, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
func_45(&uLocal_1115, 3, 0, "LESTER", 0, 1);
func_266(bLocal_1280);
func_297();
iLocal_1284=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_56, "po1_08_warehouseint1");
AUDIO::PREPARE_ALARM(&cLocal_47);
iLocal_1330=PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}}


void func_297(){
Global_94991=1;
}


void func_298(int iParam0){
Global_96668=0;
switch (iParam0){
case 72:
func_299(2);
func_299(4);
break;
case 73:
func_299(0);
func_299(1);
func_299(7);
break;
case 92:
func_299(10);
func_299(9);
func_299(13);
func_299(6);
break;
case 68:
func_299(11);
break;
case 78:
func_299(14);
break;
case 79:
func_299(3);
break;
default:
break;
}}


void func_299(bool bParam0){
MISC::SET_BIT(&Global_96668, iParam0);
}

int func_300(var uParam0, char* sParam1, int iParam2){
if(uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/]){
if(MISC::ARE_STRINGS_EQUAL(uParam0->f_779[iParam2 /*5*/].f_4, sParam1)){
uParam0->f_779[iParam2 /*5*/].f_2=0;
uParam0->f_1012=1;
return 1;
}else{
return 0;
}}else{
if(iParam2 >=11){
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(sParam1, iParam2);
}else{
HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
}
uParam0->f_779[iParam2 /*5*/]=1;
uParam0->f_779[iParam2 /*5*/].f_3=MISC::GET_GAME_TIMER();
uParam0->f_779[iParam2 /*5*/].f_4=sParam1;
uParam0->f_1012=1;
return 1;
}
return 0;
}


void func_301(var uParam0){
func_250(uParam0);
}


void func_302(struct<3> Param0, var uParam1, int iParam2, int iParam3){
if(func_196()){
MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
MISC::SET_GAME_PAUSED(1);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}
Global_100829={
Param0 
};
Global_100832=uParam1;
Global_100828=1;
if(iParam2==1){
MISC::SET_BIT(&(Global_100833.f_20), 14);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 14);
}
if(iParam3==1){
MISC::SET_BIT(&(Global_100833.f_20), 24);
}else{
MISC::CLEAR_BIT(&(Global_100833.f_20), 24);
}
func_195(1);
}}


void func_303(int iParam0){
struct<3> Var0;
char[] cVar1[8];
if(iParam0==6){
func_315();
func_8(0);
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
SCRIPT::TERMINATE_THIS_THREAD();
}elseif(!bLocal_66){
bLocal_66=true;
iLocal_67=iParam0;
switch (iLocal_67){
case 1:
StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
break;
case 3:
StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
break;
case 2:
StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
break;
case 4:
StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
break;
case 5:
StringCopy(&Var0, "JHP1A_ABAN", 24);
break;
case 0:
default:
StringCopy(&Var0, "JHP1A_FF", 24);
break;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){
func_313(&Var0);
}else{
func_304(&Var0, &cVar1);
}
AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
}}


void func_304(char* sParam0, char* sParam1){
func_312(sParam0, sParam1);
func_305(0);
}


void func_305(int iParam0){
int iVar0;
if(Global_113810.f_9088 || func_6(0)){
iVar0=func_4();
if(!func_306(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
Global_100869=iParam0;
}}

int func_306(int iParam0){
int iVar0;
int iVar1;
func_311();
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::START_FIRING_AMNESTY(5000);
}
iVar0=Global_91565[iParam0 /*5*/];
iVar1=Global_78960.f_109[iVar0 /*4*/];
func_310(iVar1, 1);
PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
func_307(&(Global_113810.f_2366.f_539), iVar1);
if(Global_94988==Global_100870){
Global_113810.f_9088.f_330[iVar1 /*6*/].f_1++;
}
if(!MISC::IS_BIT_SET(Global_91601[iVar1 /*34*/].f_15, 1)){
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
}}
Global_113810.f_9088.f_330[iVar1 /*6*/].f_2++;
Global_94988=Global_100870;
if(iParam0==-1){
if(Global_113810.f_9088){
}
return 0;
}
if(MISC::IS_BIT_SET(Global_91565[iParam0 /*5*/].f_1, 4)){
return 0;
}
if(MISC::IS_BIT_SET(Global_91565[iParam0 /*5*/].f_1, 5)){
return 0;
}
return 1;
}


void func_307(var uParam0, int iParam1){
int iVar0;
int iVar1;
struct<3> Var2;
float fVar3;
if(iParam1==94){
return;
}
iVar0=0;
while (iVar0 < 3){
iVar1=Global_113810.f_18536[iVar0];
if((((iVar1==8 || iVar1==9) || iVar1==10) || (((iVar1==11 || iVar1==34) || iVar1==72) || iVar1==73)) && !MISC::IS_BIT_SET(Global_113810.f_9088.f_99.f_219[0], 9)){
}else{
Var2={
0f, 0f, 0f 
};
fVar3=0f;
if(!func_309(Global_113810.f_18536[iVar0], &Var2, &fVar3)){
Global_113810.f_18536[iVar0]=318;
func_308(&(uParam0->f_2296[iVar0]));
uParam0->f_2300[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2310[iVar0]=0f;
uParam0->f_2314[iVar0]=0;
uParam0->f_2318[iVar0 /*3*/]={
0f, 0f, 0f 
};
uParam0->f_2328[iVar0]=0;
Global_98203[iVar0 /*29*/]={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_9=0f;
Global_98203[iVar0 /*29*/].f_12=0f;
Global_98203[iVar0 /*29*/].f_3={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_10=0f;
Global_98203[iVar0 /*29*/].f_13=0f;
Global_98203[iVar0 /*29*/].f_6={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_11=0f;
Global_98203[iVar0 /*29*/].f_14=0f;
Global_98203[iVar0 /*29*/].f_17={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_26=0f;
Global_98203[iVar0 /*29*/].f_20={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_27=0f;
Global_98203[iVar0 /*29*/].f_23={
0f, 0f, 0f 
};
Global_98203[iVar0 /*29*/].f_28=0f;
}}
iVar0++;
}}


void func_308(var uParam0){
*uParam0=-15;
}

int func_309(int iParam0, var uParam1, float fParam2){
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
return func_309(8, uParam1, fParam2);
break;
case 10:
return func_309(8, uParam1, fParam2);
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


void func_310(int iParam0, bool bParam1){
if(bParam1){
if((iParam0 !=88 && iParam0 !=89) && iParam0 !=92){
Global_94798[iParam0 /*2*/]=1;
}}else{
Global_94798[iParam0 /*2*/]=0;
}}


void func_311(){
Global_100868=1;
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_168()){
case 0:
StringCopy(&Global_78922, "CMN_MARRE", 16);
break;
case 1:
StringCopy(&Global_78922, "CMN_FARRE", 16);
break;
case 2:
StringCopy(&Global_78922, "CMN_TARRE", 16);
break;
}
StringCopy(&Global_78926, "", 16);
}
Global_100868=0;
}elseif(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922)){
switch (func_168()){
case 0:
StringCopy(&Global_78922, "CMN_MDIED", 16);
break;
case 1:
StringCopy(&Global_78922, "CMN_FDIED", 16);
break;
case 2:
StringCopy(&Global_78922, "CMN_TDIED", 16);
break;
}
StringCopy(&Global_78926, "", 16);
}
Global_100868=0;
MISC::SET_BIT(&(Global_100833.f_20), 25);
}}


void func_312(char* sParam0, char* sParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1) <=16){
StringCopy(&Global_78922, sParam0, 16);
StringCopy(&Global_78926, sParam1, 16);
}}}}


void func_313(char* sParam0){
func_314(sParam0);
func_305(0);
}


void func_314(char* sParam0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <=16){
StringCopy(&Global_78922, sParam0, 16);
StringCopy(&Global_78926, "", 16);
if(RECORDING::IS_REPLAY_RECORDING()){
RECORDING::STOP_REPLAY_RECORDING();
}}}}


void func_315(){
int iVar0;
if(SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse")){
start_new_script("buddyDeathResponse", 1424);
}
if(Global_113810.f_9088 || func_6(0)){
if(!func_316()){
iVar0=func_4();
if(iVar0 !=-1){
if(!func_306(iVar0)){
return;
}
MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
return;
}}else{
func_311();
}}}

int func_316(){
if(((Global_100833==13 || Global_100833==10) || Global_100833==11) || Global_100833==12){
return 0;
}
return 1;
}