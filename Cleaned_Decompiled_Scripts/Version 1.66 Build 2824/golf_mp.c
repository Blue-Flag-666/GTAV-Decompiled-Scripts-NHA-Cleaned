//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
bool bLocal_0=0;
var uLocal_1=0;
var uLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
int iLocal_12=0;
float fLocal_13=0f;
float fLocal_14=0f;
float fLocal_15=0f;
var uLocal_16=0;
var uLocal_17=0;
int iLocal_18=0;
char* sLocal_19=NULL;
var uLocal_20=0;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
float fLocal_25=0f;
float fLocal_26=0f;
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
var uLocal_30=0;
var uLocal_31=0;
var uLocal_32=0;
float fLocal_33=0f;
float fLocal_34=0f;
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
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
float fLocal_65=0f;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=17;
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
var uLocal_91=17;
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
var uLocal_136=-1;
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
int iLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
int iLocal_164[2]={
0, 0 
};
int iLocal_165=0;
int iLocal_166=0;
int iLocal_167=0;
var uLocal_168=0;
bool bLocal_169=0;
int iLocal_170=0;
int iLocal_171=0;
bool bLocal_172=0;
var uLocal_173=-1;
var uLocal_174=32;
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
var uLocal_207=3;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=-1;
var uLocal_214=0;
int iLocal_215=0;
var uLocal_216[13]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_217=0;
var uLocal_218=0;
struct<3> Local_219={
0, 0, 0 
};
var uLocal_220=0;
int iLocal_221=0;
bool bLocal_222=0;
float fLocal_223=0f;
float fLocal_224=0f;
float fLocal_225=0f;
int iLocal_226=0;
struct<3> Local_227={
0, 0, 0 
};
float fLocal_228=0f;
bool bLocal_229=0;
bool bLocal_230=0;
bool bLocal_231=0;
bool bLocal_232=0;
int iLocal_233=0;
var uLocal_234=3;
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
var uLocal_282=4;
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
var uLocal_347=2;
var uLocal_348=0;
var uLocal_349=4;
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
var uLocal_415=4;
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
var uLocal_486=12;
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
var uLocal_667=3;
var uLocal_668=0;
var uLocal_669=0;
var uLocal_670=0;
int iLocal_671=0;
int iLocal_672=0;
int iLocal_673[9]={
0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_674=0;
int iLocal_675=0;
int iLocal_676[6]={
0, 0, 0, 0, 0, 0 
};
int iLocal_677=0;
int iLocal_678=0;
struct<3> Local_679={
0, 0, 0 
};
float fLocal_680=0f;
struct<3> Local_681={
0, 0, 0 
};
int iLocal_682=0;
int iLocal_683=0;
int iLocal_684=0;
var uLocal_685=0;
var uLocal_686=0;
var uLocal_687=0;
var uLocal_688=0;
int iLocal_689=0;
int iLocal_690=0;
int iLocal_691=0;
int iLocal_692=0;
int iLocal_693=0;
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
var uLocal_722=-1;
var uLocal_723=0;
var uLocal_724=0;
var uLocal_725=0;
var uLocal_726=0;
var uLocal_727=0;
var uLocal_728=0;
var uLocal_729=0;
var uLocal_730=1;
var uLocal_731=0;
var uLocal_732=32;
var uLocal_733=0;
var uLocal_734=-1;
var uLocal_735=0;
var uLocal_736=-1;
var uLocal_737=0;
var uLocal_738=-1;
var uLocal_739=0;
var uLocal_740=-1;
var uLocal_741=0;
var uLocal_742=-1;
var uLocal_743=0;
var uLocal_744=-1;
var uLocal_745=0;
var uLocal_746=-1;
var uLocal_747=0;
var uLocal_748=-1;
var uLocal_749=0;
var uLocal_750=-1;
var uLocal_751=0;
var uLocal_752=-1;
var uLocal_753=0;
var uLocal_754=-1;
var uLocal_755=0;
var uLocal_756=-1;
var uLocal_757=0;
var uLocal_758=-1;
var uLocal_759=0;
var uLocal_760=-1;
var uLocal_761=0;
var uLocal_762=-1;
var uLocal_763=0;
var uLocal_764=-1;
var uLocal_765=0;
var uLocal_766=-1;
var uLocal_767=0;
var uLocal_768=-1;
var uLocal_769=0;
var uLocal_770=-1;
var uLocal_771=0;
var uLocal_772=-1;
var uLocal_773=0;
var uLocal_774=-1;
var uLocal_775=0;
var uLocal_776=-1;
var uLocal_777=0;
var uLocal_778=-1;
var uLocal_779=0;
var uLocal_780=-1;
var uLocal_781=0;
var uLocal_782=-1;
var uLocal_783=0;
var uLocal_784=-1;
var uLocal_785=0;
var uLocal_786=-1;
var uLocal_787=0;
var uLocal_788=-1;
var uLocal_789=0;
var uLocal_790=-1;
var uLocal_791=0;
var uLocal_792=-1;
var uLocal_793=0;
var uLocal_794=-1;
var uLocal_795=0;
var uLocal_796=-1;
var uLocal_797=-1;
var uLocal_798=0;
var uLocal_799=0;
var uLocal_800=0;
var uLocal_801=0;
var uLocal_802=0;
var uLocal_803=-1;
var uLocal_804=-1;
var uLocal_805=-1;
var uLocal_806=-1;
var uLocal_807=-1;
var uLocal_808=-1;
var uLocal_809=0;
struct<21> Local_810={
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 
};
#endregion

void __EntryFunction__(){
struct<470> Var0;
var uVar1;
var uVar2;
struct<40> Var3;
struct<476> Var4;
struct<44> Var5;
var uVar6;
struct<743> Var7;
var uVar8;
var uVar9;
var uVar10;
var uVar11;
var uVar12;
var uVar13;
struct<6> Var14;
int iVar15;
int iVar16;
int iVar17;
struct<1220> Var18;
int iVar19;
int iVar20;
int iVar21;
int iVar22;
var uVar23;
bool bVar24;
bool bVar25;
int iVar26;
int iVar27;
int iVar28;
var uVar29;
int iVar30;
bool bVar31;
bool bVar32;
bool bVar33;
bool bVar34;
bool bVar35;
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
iLocal_3=1;
iLocal_4=134;
iLocal_5=134;
iLocal_6=1;
iLocal_7=1;
iLocal_8=1;
iLocal_9=134;
iLocal_10=1;
iLocal_11=12;
iLocal_12=12;
fLocal_15=0.001f;
iLocal_18=-1;
sLocal_19="NULL";
fLocal_24=80f;
fLocal_25=140f;
fLocal_26=180f;
fLocal_29=0f;
fLocal_33=-0.0375f;
fLocal_34=0.17f;
iLocal_36=3;
iLocal_40=1;
iLocal_41=65;
iLocal_42=49;
iLocal_43=64;
fLocal_65=((0.05f + 0.275f) - 0.01f);
iLocal_161=-1;
iLocal_221=-1;
bLocal_222=true;
fLocal_223=-1213f;
fLocal_224=118.179f;
fLocal_225=1f;
Local_227={
0.57f, 0.03f, 0f 
};
fLocal_228=50f;
iLocal_684=1;
iLocal_690=-1;
iLocal_691=-1;
iLocal_692=200;
Var0.f_4=6;
Var0.f_4.f_1=18;
Var0.f_4.f_1.f_74=18;
Var0.f_4.f_1.f_74.f_74=18;
Var0.f_4.f_1.f_74.f_74.f_74=18;
Var0.f_4.f_1.f_74.f_74.f_74.f_74=18;
Var0.f_4.f_1.f_74.f_74.f_74.f_74.f_74=18;
Var0.f_449=6;
Var0.f_465=-1;
Var0.f_469.f_4=1;
uVar1=6;
uVar2=11;
Var3=6;
Var3.f_1.f_1=9;
Var3.f_1.f_39=-1;
Var3.f_1.f_40.f_1=9;
Var3.f_1.f_40.f_39=-1;
Var3.f_1.f_40.f_40.f_1=9;
Var3.f_1.f_40.f_40.f_39=-1;
Var3.f_1.f_40.f_40.f_40.f_1=9;
Var3.f_1.f_40.f_40.f_40.f_39=-1;
Var3.f_1.f_40.f_40.f_40.f_40.f_1=9;
Var3.f_1.f_40.f_40.f_40.f_40.f_39=-1;
Var3.f_1.f_40.f_40.f_40.f_40.f_40.f_1=9;
Var3.f_1.f_40.f_40.f_40.f_40.f_40.f_39=-1;
Var4.f_15=6;
Var4.f_15.f_1.f_34=-1;
Var4.f_15.f_1.f_74.f_34=-1;
Var4.f_15.f_1.f_74.f_74.f_34=-1;
Var4.f_15.f_1.f_74.f_74.f_74.f_34=-1;
Var4.f_15.f_1.f_74.f_74.f_74.f_74.f_34=-1;
Var4.f_15.f_1.f_74.f_74.f_74.f_74.f_74.f_34=-1;
Var4.f_460=2;
Var4.f_475=2;
Var5=9;
Var5.f_30=4;
Var5.f_43=4;
uVar6=14;
Var7.f_3.f_2=8;
Var7.f_3.f_11=32;
Var7.f_3.f_44=32;
Var7.f_3.f_77=32;
Var7.f_167=12;
Var7.f_167.f_13=12;
Var7.f_167.f_26=12;
Var7.f_167.f_39=9;
Var7.f_167.f_49=9;
Var7.f_232=12;
Var7.f_232.f_13=12;
Var7.f_232.f_26=12;
Var7.f_232.f_39=9;
Var7.f_232.f_49=9;
Var7.f_297=12;
Var7.f_297.f_13=12;
Var7.f_297.f_26=12;
Var7.f_297.f_39=9;
Var7.f_297.f_49=9;
Var7.f_366=16;
Var7.f_532=-1;
Var7.f_578=-1;
Var7.f_586=6;
Var7.f_628=6;
Var7.f_639=1;
Var7.f_643.f_9=49;
Var7.f_643.f_59=2;
Var7.f_738=-1;
Var7.f_742=-99;
uVar8=6;
uVar9=6;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(1)){
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 1);
}
iVar16=-1;
iVar17=0;
Var18.f_3=16;
Var18.f_23=16;
Var18.f_42.f_9=49;
Var18.f_42.f_59=2;
Var18.f_42.f_78=-1;
Var18.f_42.f_79=-1;
Var18.f_42.f_96=-1;
Var18.f_42.f_97=1;
Var18.f_42.f_99=132;
Var18.f_42.f_100=-1;
Var18.f_145=16;
Var18.f_402=16;
Var18.f_440=-1;
Var18.f_442=3;
Var18.f_447=-1;
Var18.f_452=-1;
Var18.f_458=16;
Var18.f_478.f_1=12;
Var18.f_478.f_699=1065353216;
Var18.f_1179=16;
Var18.f_1219=3;
bVar25=false;
iVar26=0;
iVar28=0;
iVar30=0;
bVar31=true;
bVar32=false;
bVar33=false;
bVar34=false;
bVar35=false;
iVar36=0;
iLocal_233=iLocal_233;
func_2193();
if(!func_2129(ScriptParam_810, &Var0, &uVar1)){
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 1);
}
Var7.f_640=Global_4718592.f_114141;
Var7.f_641=(Global_4718592.f_114142 - 1);
if(Var7.f_641 > 8){
Var7.f_641=8;
}
if(Var7.f_640 > Var7.f_641){
Var7.f_640=0;
Var7.f_641=8;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
Var0.f_467=Var7.f_640;
Var0.f_468=Var7.f_641;
Var0.f_459=Global_4718592.f_114136;
}
if(!func_2128()){
if(Global_4718592.f_114136==1){
MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
}elseif(Global_4718592.f_114136==2){
MISC::SET_OVERRIDE_WEATHER("RAIN");
}}
if(func_2127(PLAYER::PLAYER_PED_ID())){
Var7.f_742=func_2126(PLAYER::PLAYER_PED_ID(), 6, -1);
func_2022(PLAYER::PLAYER_PED_ID(), 6, 161, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
}
iVar37=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
func_2021(iVar37);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
if(PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), 0);
}}
if(func_2020(24, -1)){
func_2019(&Var7, 16777216);
func_2018(24, 0, -1);
func_2006();
}
func_2005(&Var7);
Var7.f_624=5;
GRAPHICS::ANIMPOSTFX_STOP_ALL();
func_2004(0);
MISC::SET_MINIGAME_IN_PROGRESS(1);
NETWORK::NETWORK_SET_LOOK_AT_TALKERS(0);
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(1);
NETWORK::NETWORK_SET_TALKER_PROXIMITY(0f);
func_2003(23, 1);
PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), 0);
HUD::TOGGLE_STEALTH_RADAR(0);
func_2002(4, 1, -1);
func_2001(32);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("caddy"), 1);
func_2000();
Var7.f_365=func_1999(1);
func_1998(1);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
while (!STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Var0.f_464), &(Var0.f_465))){
wait(0);
}}else{
while (Var0.f_465==-1){
wait(0);
}}
CAM::DO_SCREEN_FADE_OUT(250);
if(func_2128() || func_1996(PLAYER::PLAYER_ID(), 0)){
bLocal_222=false;
bVar32=true;
func_1995(&Var0, &uVar1, &uVar8, &uVar6, &Var4, &Var5, &Var7, &Var3);
if(func_1994()){
func_1984(0, 0);
}
func_1983();
func_1998(0);
}else{
func_1978(PLAYER::PLAYER_ID(), 0, 49156, 0);
}
func_1977(&uVar10);
MISC::CLEAR_AREA_OF_PEDS(func_1976(&Var5), 400f, 0);
Var7.f_741=PED::ADD_SCENARIO_BLOCKING_AREA(-1383.306f, 195.574f, 57.64289f, -886.4026f, -117.1844f, 36.96122f, 0, 1, 1, 1);
while (true){
wait(0);
if(func_1975()){
NETWORK::NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT();
}
if((func_2128() || func_1996(PLAYER::PLAYER_ID(), 0)) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <=1){
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 0);
}}else{
func_1973(&Var18);
if(((func_1966() || func_1965(1)) || func_1964()) || (((func_1994() || func_1963()) || func_1962()) && Var18.f_436==0)){
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 0);
}else{
if(!func_2128() && !func_1996(PLAYER::PLAYER_ID(), 0)){
if((func_1961(&Var0) > 1 && func_1961(&Var0) !=13) && iVar30==0){
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 1);
}}
if(!func_1960()){
func_1959();
}
func_1956(func_1958(func_1961(&Var0), &Var4), func_1957(&Var4) !=5);
func_1955(1);
if(HUD::IS_WAYPOINT_ACTIVE()){
HUD::SET_WAYPOINT_OFF();
}
if(PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
}
if(CAM::IS_SCREEN_FADED_OUT()){
GRAPHICS::RESET_ADAPTATION(6);
}
func_1954();
if(((func_1961(&Var0) >=6 && func_1961(&Var0) !=11) && func_1961(&Var0) !=12) && func_1961(&Var0) !=13){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(Var0.f_458 > -1){
if(func_1953(&Var4, &uVar1, &Var3, 512)){
Var0.f_458=-1;
}
}
elseif(!func_1952(&Var4, &uVar1, &Var3, 512)){
Var0.f_458=func_1951(&Var4, &Var3);
}}
if(func_1950(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 512) && Var0.f_458 < 0){
func_1949(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 512);
}}
switch (func_1948(&Var0)){
case 0:
break;
case 2:
if(bLocal_0){
}
if(((func_1961(&Var0) > 1 && func_1961(&Var0) !=13) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() !=func_1947(&Var4)) && !bVar32){
func_1939(&Var3, &Var4);
bVar32=true;
}
if(bVar32 && bLocal_0){
iVar38=0;
while (iVar38 < 4){
if(!ENTITY::DOES_ENTITY_EXIST(func_1938(&Var4, iVar38))){
}
iVar38++;
}
}
if(func_1961(&Var0)==7 || func_1961(&Var0)==6){
func_1937(&uVar6, &Var4, &Var7, &uVar1, &Var3);
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_1957(&Var4)==3){
func_1936(&(Var0.f_3), 2);
}}
}
if(func_1961(&Var0) < 3){
func_1935(&uVar12);
if(func_1934(&uVar12, 120f) && !func_1933(&Var7, 4096)){
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 1);
}
}
switch (func_1961(&Var0)){
case 0:
if(!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_OUT(250);
}
if(Var7.f_582){
func_1932(&uVar1, 1);
}
break;
case 1:
func_1935(&uVar11);
iVar30=1;
if(CAM::IS_SCREEN_FADED_OUT()){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1370.668f, 172.609f, 56.895f, 1, 0, 0, 1);
}
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
HUD::CLEAR_PRINTS();
if(func_1930(&uVar11, 2f)){
func_1932(&uVar1, 2);
}}
break;
case 2:
func_1927(&Var5);
func_1923(&uVar2);
func_1921(&Var7);
HUD::REQUEST_ADDITIONAL_TEXT("SP_GOLF", 3);
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()){
STREAMING::NEW_LOAD_SCENE_STOP();
}
func_1920();
func_1932(&uVar1, 3);
break;
case 3:
func_1935(&uVar13);
if(func_1917(&Var7, &uVar2)){
if(HUD::HAS_ADDITIONAL_TEXT_LOADED(3)){
if(STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1370.668f, 172.609f, 56.895f, 30f, 1) || func_1930(&uVar13, 10f)){
if(func_1916(&uVar13)){
func_1915(&uVar13);
}
if(func_1914(&Var4, &Var3)){
func_1932(&uVar1, 5);
func_1915(&uVar12);
if(!func_1933(&Var7, 4096)){
GRAPHICS::REMOVE_DECALS_IN_RANGE(func_1976(&Var5), 400f);
MISC::CLEAR_AREA_OF_VEHICLES(func_1976(&Var5), 400f, 0, 0, 0, 0, 0, 0, 0);
func_1911(&uVar6);
func_1910(&Var7);
func_1909(&Var7);
func_1908(&Var7, 4096);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
WEAPON::SET_CURRENT_PED_WEAPON(func_1907(&Var4), joaat("weapon_unarmed"), 1);
ENTITY::SET_ENTITY_LOD_DIST(func_1907(&Var4), 500);
if(!ENTITY::DOES_ENTITY_EXIST(func_1906(&Var5, 0))){
iVar39=0;
while (iVar39 < func_1905(&Var5)){
func_1903(&Var5, iVar39);
iVar39++;
}
}
bVar31=true;
func_1902(&Var4, Var7.f_640);
}}
}
}}
break;
case 5:
if(func_1914(&Var4, &Var3)){
if(iVar26 < 6){
if(func_1901(iVar26, &Var4, &Var3, &uVar29, &iVar28) || iVar27 > 10){
iVar26++;
iVar28=0;
iVar27=0;
}
else{
iVar27++;
}
}
else{
func_1900(&Var5, &Var4);
func_1899(&Var5, &Var4);
func_1897(&uVar1, func_1898(&Var4));
func_1895(&uVar1, func_1896(&Var4));
func_1893(&uVar1, func_1894(&Var4));
func_1887(&uVar8, &Var7, &Var5, &Var4, &Var3, !bVar34, 0);
func_1886(&Var4, 0);
func_1885(&Var4, &Var5);
func_1908(&Var7, 25);
func_1932(&uVar1, 6);
AUDIO::TRIGGER_MUSIC_EVENT("MGGF_START");
func_1884(1);
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
Var7.f_585=1;
func_1883(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 128);
bVar34=true;
func_1998(0);
if(!bVar33){
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_1882(&Var0, &uVar6, &Var4, Global_4718592.f_114136);
}
HUD::CLEAR_HELP(1);
STREAMING::NEW_LOAD_SCENE_STOP();
func_1978(PLAYER::PLAYER_ID(), 1, 0, 0);
Var7.f_580=Var0.f_465;
func_1713(11, Var0.f_465, Var0.f_464, 0, 0);
func_1712();
bVar33=true;
}
}}
break;
case 6:
func_1711(&Var0, &uVar6);
func_1710(&Var3);
func_1709(&uVar6, &Var7);
func_1705(&uVar6, &Var5, &Var4, &Var7);
HUD::DISPLAY_AREA_NAME(0);
func_1932(&uVar1, 6);
if(iVar36 || func_1950(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 4096)){
if(!func_1704(&Var4, 16777216)){
if(func_1947(&Var4) > 1 && func_1702(&Var4)==1){
if(Global_2672505.f_3421.f_72 > 0){
func_1701();
}
}
}
func_1675(6, 0f, 0f, 0f, Var14);
func_1908(&Var7, 16384);
func_2194(1, &uVar6, &Var5, &Var4, &Var3, &Var7, 3, 0, 1);
}elseif(func_1914(&Var4, &Var3)){
if(func_1674(&Var0, &Var4)){
func_1671(&Var0, &uVar1, &Var4, &uVar6, &Var7, &Var3, &iVar16, &bVar35, &iVar36);
}
func_1670(&uVar6, 8);
func_1670(&uVar6, 32);
if(bVar35){
func_1667(&uVar1, &Var5, &Var4, &Var3, &Var7, 0, func_1669(&Var4));
bVar35=false;
}
if((func_1666(&Var0, 16384) && func_1665(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 2)) || ((func_1666(&Var0, 32768) || func_1664(&Var0, 64)) && !func_1665(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 32768))){
func_1660(&Var0, &uVar1, &Var5, &Var4, &Var3, &Var7, &uVar6);
Var7.f_585=1;
}
if(func_1957(&Var4)==3){
func_1659(&uVar1);
func_1658(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 4096);
func_1670(&uVar6, 64);
func_1670(&uVar6, 33554432);
func_1657(&Var7, 134217728);
if(func_1656(&Var7) || func_1655(&(Var7.f_536))){
func_1883(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 1048576);
}
if(func_1704(&Var4, 16777216)){
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 2);
}
iVar40=func_1652(&Var3, func_1653(&Var4));
if(func_1651(iVar40)){
if(!func_1950(&uVar1, iVar40, 128) || !func_1650(&Var4)){
if(func_1656(&Var7)){
CAM::SET_CAM_SPLINE_PHASE(Var7.f_541, 0f);
}}
}
if(func_1649(&Var4)==func_1653(&Var4)){
if(func_1953(&Var4, &uVar1, &Var3, 1048576)){
if(func_1648(&uVar6, &Var4)){
func_1883(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 128);
}}
if(func_1647(&Var4)==8){
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 4);
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 2);
}
}
}
elseif(func_1957(&Var4) > 5){
func_1949(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 128);
}
else{
func_1949(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 1048576);
}
if(func_1646(&Var0) !=func_1652(&Var3, func_1653(&Var4)) && func_1645(&Var4) !=4){
func_1643(&Var0, &uVar1, &Var7, &Var5, &Var4, &Var3);
Var7.f_585=1;
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_1882(&Var0, &uVar6, &Var4, Global_4718592.f_114136);
}
}
if(func_1666(&Var0, 8192)){
if(!func_1665(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 8192)){
if(func_1665(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 4)){
func_1641(&Var0, &uVar1, &Var7, &Var4);
MISC::CLEAR_AREA_OF_PEDS(func_1640(&Var4), 20f, 0);
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
func_1882(&Var0, &uVar6, &Var4, Global_4718592.f_114136);
}
Var7.f_585=1;
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 8192);
}
func_1658(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 4);
}
else{
func_1658(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 8192);
}
if(((Var7.f_585 && func_1645(&Var4) !=3) && func_1645(&Var4) !=4) && func_1953(&Var4, &uVar1, &Var3, 1048576)){
Var7.f_585=0;
if(!func_1704(&Var4, 16777216)){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
}
func_1639(&Var0, &uVar6, &Var5, &Var4, &Var7, &Var3);
func_1883(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 128);
}
elseif(Var7.f_585){
Var7.f_584=0;
}
if((!func_1933(&Var7, 1073741824) || func_1638(&Var4) !=1) || func_1669(&Var4)){
func_1932(&uVar1, func_1111(&uVar6, &Var5, &Var4, &Var3, &Var7));
}
if(func_1110(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT())==9 || func_1110(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT())==11){
func_1654(&uVar1, func_1652(&Var3, func_1649(&Var4)), 8388608);
}
if(func_1638(&Var4)==2){
func_1108(&Var0, &uVar1, &Var7, &Var4, &uVar6);
}
func_1103(&Var0, &uVar1, &Var4, &Var5, &Var7, &Var3);
func_1100(&uVar1, &Var4, &Var7, &Var3, 0);
func_1071(&uVar1, &Var4, &Var7, &uVar6, &Var5, &Var3);
func_1070(&Var0, &Var4);
iVar15=0;
while (iVar15 < func_1947(&Var4)){
if(func_1652(&Var3, iVar15) !=NETWORK::PARTICIPANT_ID_TO_INT() && !func_1069(&Var4, iVar15, 16777216)){
func_1036(&Var0, &uVar1, &uVar6, &Var4, &Var7, &Var3, iVar15);
}
else{
func_1021(&uVar1, &Var4, &uVar6);
}
iVar15++;
}
func_1019(&uVar9, &Var4, &Var7, &Var3);
func_997(&Var0, &uVar1, &Var4, &Var5, &uVar6, &Var7, &Var3);
func_996(&Var4);
if(func_1638(&Var4)==3){
func_987(&uVar1, &uVar6, &Var4, &Var5, &Var3);
func_977(&uVar1, &Var4, &uVar6, &Var3, &Var5);
func_975(&uVar1, &Var4, &Var3);
}
func_969(&Var4, &Var7, &uVar1, &Var3);
if(((!func_1669(&Var4) && !CAM::IS_SCREEN_FADED_OUT()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_1665(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 8388608)){
if(((PAD::IS_CONTROL_JUST_PRESSED(2, 227) && !func_966(&Var0, &Var4, &Var7)) && !func_1933(&Var7, 1073741824)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()){
HUD::CLEAR_HELP(1);
HUD::DISPLAY_RADAR(0);
func_965(&Var7, 1);
GRAPHICS::GOLF_TRAIL_SET_ENABLED(0);
AUDIO::PLAY_SOUND_FRONTEND(-1, "HIGHLIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
func_963(&Var7, Var7.f_0, 0, 0, 0, 0, 0, 1036831949);
func_962(&Var7);
}
elseif(func_1933(&Var7, 1073741824)){
if(func_1638(&Var4)==3 && func_1957(&Var4) <=4){
func_949(&Var4, &(Var4.f_15[func_1653(&Var4) /*74*/]), &Var7, func_960(&Var4));
}
GRAPHICS::GOLF_TRAIL_SET_ENABLED(0);
if(func_948() || func_966(&Var0, &Var4, &Var7)){
if(Var7.f_571 !=2 || func_947(&Var4)){
HUD::DISPLAY_RADAR(1);
}
func_965(&Var7, 0);
func_1657(&Var7, 2);
if(Var7.f_574==0){
func_1908(&Var7, 32);
func_1908(&Var7, 2048);
}}
if(func_1957(&Var4) <=4){
func_935(&Var5, &Var4, &Var7, &uVar6, &(Var3[func_1653(&Var4) /*40*/]));
func_933(&Var7, &uVar6);
}
func_922(&Var7, 1);
}
}
if(func_1665(&uVar1, func_1652(&Var3, func_1649(&Var4)), 2048)){
set_warning_message_with_header("QUIT", "QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
PAD::DISABLE_CONTROL_ACTION(2, 217, 1);
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
if(HUD::IS_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_PRINTS();
}
if(!HUD::IS_RADAR_HIDDEN()){
HUD::DISPLAY_RADAR(0);
}
GRAPHICS::GOLF_TRAIL_SET_ENABLED(0);
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
HUD::SET_FRONTEND_ACTIVE(0);
iVar36=1;
func_920();
}
elseif(((PAD::IS_CONTROL_JUST_RELEASED(2, 202) || func_1645(&Var4)==4) || func_1933(&Var7, 32768)) || (func_947(&Var4) && func_918(&Var4, 131072))){
if(func_947(&Var4)){
func_1908(&Var7, 2048);
}
func_1658(&uVar1, func_1652(&Var3, func_1649(&Var4)), 2048);
func_1670(&uVar6, 2048);
func_1670(&uVar6, 256);
if(!func_1669(&Var4) && !func_1933(&Var7, 1073741824)){
HUD::DISPLAY_RADAR(1);
}
}
}}
if(CAM::IS_SCREEN_FADED_OUT() && ((func_1645(&Var4)==3 || (func_1645(&Var4)==4 && !func_1933(&Var7, 65536))) || (func_1957(&Var4) > 3 && (func_1957(&Var4) < 6 || func_1957(&Var4)==8)))){
func_1935(&(Var7.f_596));
if(func_1934(&(Var7.f_596), 0.75f)){
CAM::DO_SCREEN_FADE_IN(250);
func_914(&Var7, 0, 0, 0, -1, 4000);
func_1657(&Var7, 65536);
}}
break;
case 11:
func_1932(&uVar1, 11);
func_911(&(Var7.f_593));
func_1658(&uVar1, func_1652(&Var3, func_1649(&Var4)), 8388608);
func_1658(&uVar1, func_1652(&Var3, func_1649(&Var4)), 4194304);
func_910(&Var7, 8);
func_908(&Var4, 0);
func_1886(&Var4, 2);
func_906();
func_898(&Var7, 7, 0, 1);
func_1100(&uVar1, &Var4, &Var7, &Var3, 1);
if(NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
func_895(0, iVar17, 1);
}
if(!func_1933(&Var7, 134217728) && func_888(&Var18)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
func_887();
func_880(&Var18, 1);
if(!func_1704(&Var4, 16777216)){
iVar22=0;
iVar21=func_879(&Var4, &Var3, &bVar25);
iVar19=func_878(&Var4, &Var3);
iVar20=func_1652(&Var3, iVar19);
if(!func_877(&Var7, 4)){
if(func_1947(&Var4) > 1){
func_785(&Var4, &Var3, &iVar22, iVar21);
}
if(func_1702(&Var4)==1){
if(func_1947(&Var4) > 1){
Var7.f_642=(Var7.f_642 + func_747(0, "XPT_GOLF", -1636175450, 239241683, round((Global_262145.f_4241 * 500f)), 1, -1, 0));
}}elseif(func_744(&Var4, &Var3)){
}elseif(iVar19==func_1649(&Var4)){
Var7.f_642=(Var7.f_642 + func_747(0, "XPT_GOLF", -1636175450, 239241683, round((Global_262145.f_4241 * 500f)), 1, -1, 0));
}
func_2019(&Var7, 4);
}
func_1908(&Var7, 134217728);
iVar41=(Var7.f_641 - Var7.f_640);
if(iVar41 <=3){
iVar42=1;
}
elseif(iVar41 <=7){
iVar42=2;
}
else{
iVar42=3;
}
func_742(iVar42);
func_740(38);
if(func_1702(&Var4)==1){
}
elseif(func_744(&Var4, &Var3)){
bVar24=true;
}
elseif(iVar19==func_1649(&Var4)){
func_736(1);
}
else{
func_712(1);
}
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 131072);
func_711();
}
else{
iVar22=0;
iVar21=0;
bVar25=false;
iVar19=func_878(&Var4, &Var3);
iVar20=func_1652(&Var3, iVar19);
bVar24=func_744(&Var4, &Var3);
func_1908(&Var7, 134217728);
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 131072);
func_711();
}}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
if(func_710(&Var4, &uVar1, &Var3, 131072)){
func_1932(&uVar1, 12);
func_709(&Var0, 12);
}}
break;
case 12:
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
func_1932(&uVar1, 12);
func_1908(&Var7, 16384);
if(func_708(&uVar1, &Var3, &Var4, 12)){
if(func_175(&Var18, &uVar23, &uVar10, iVar21, bVar25, Var7.f_642, func_1947(&Var4) > 1, bVar24, iVar20, iVar22, func_1704(&Var4, 16777216), &uLocal_694)){
func_1654(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT(), 1024);
func_1675(1, 0f, 0f, 0f, Var14);
func_2194(0, &uVar6, &Var5, &Var4, &Var3, &Var7, 0, 0, 0);
}}
break;
case 13:
break;
case 7:
break;
case 9:
break;
}
if(func_174() && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
HUD::CLEAR_HELP(1);
}
func_173(&Var7);
if((func_1110(&uVar1, NETWORK::PARTICIPANT_ID_TO_INT()) >=6 && !func_1665(&uVar1, func_1652(&Var3, func_1649(&Var4)), 2048)) && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())){
if(func_172(&uVar6, 67108864) && iVar16 > -1){
func_168(&uVar8, iVar16);
iVar16=-1;
GRAPHICS::GOLF_TRAIL_SET_ENABLED(0);
HUD::DISPLAY_RADAR(0);
}
if((!func_1933(&Var7, 16384) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_1994()){
if(func_167(&Var4, &Var7)){
func_62(&(Var7.f_2));
func_53(&Var4, &Var7);
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Var7.f_0, 255, 255, 255, 0, 0);
}}
if(HUD::IS_PAUSE_MENU_ACTIVE()){
func_711();
}
func_48();
if(func_172(&uVar6, 67108864) && !func_174()){
func_1908(&Var7, 2048);
func_1908(&Var7, 16);
func_1670(&uVar6, 67108864);
HUD::DISPLAY_RADAR(1);
}
}
iVar43=func_47(&Var4);
func_46(iVar43);
break;
}
if(NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()){
iVar44=-1;
iVar45=-1;
iVar44=func_44(&uVar1);
if(iVar44 !=-1 && iVar44 > func_1948(&Var0)){
if(bLocal_0){
}
func_43(&Var0, iVar44);
}
iVar45=func_42(&Var0, &uVar1);
if(iVar45 !=-1 && iVar45 > func_1961(&Var0)){
if(bLocal_0){
}
func_709(&Var0, iVar45);
}
switch (func_1948(&Var0)){
case 0:
func_41(&Var0, Var7.f_640);
Var0.f_458=-1;
iVar37=NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
func_1935(&(Var7.f_596));
if(func_1934(&(Var7.f_596), 7.5f)){
func_40();
func_38(&Var0, func_39());
func_43(&Var0, 2);
func_709(&Var0, 1);
}
break;
case 2:
if(bLocal_0){
}
switch (func_1961(&Var0)){
case 0:
break;
case 6:
if(bLocal_0){
}
func_2(&Var0, &uVar1, &Var4, &Var3, &Var5);
if(func_1(&Var4, &uVar1, &Var3, 8388608)){
func_709(&Var0, 11);
}
break;
}
break;
}}
if(bVar31){
NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(12, 0, 0);
}
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}}}}}}

int func_1(var uParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < *uParam1){
iVar1=func_1652(uParam2, iVar0);
if(func_1651(iVar1)){
if(func_1665(uParam1, iVar1, iParam3)){
return 1;
}}
iVar0++;
}
return 0;
}


void func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4){
bool bVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
bVar0=false;
bVar1=true;
iVar2=1;
iVar3=1;
iVar5=-1;
iVar4=0;
while (iVar4 < *uParam1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4))){
if(!func_1069(uParam2, func_37(uParam3, iVar4), 16777216)){
if(func_1665(uParam1, iVar4, 4)){
bVar0=true;
iVar5=iVar4;
}
if(func_1665(uParam1, iVar4, 2)){
iVar2=0;
iVar3=0;
}else{
bVar1=false;
}}elseif(func_1665(uParam1, iVar4, 2)){
iVar3=0;
}}elseif(func_1646(uParam0)==iVar4){
if(!func_1666(uParam0, 8192) && func_1645(uParam2) !=3){
bVar0=true;
iVar5=iVar4;
}}
iVar4++;
}
if(func_37(uParam3, func_1646(uParam0)) < 0 || PED::IS_PED_INJURED(func_35(uParam2))){
func_38(uParam0, func_20(uParam1, uParam2, uParam3, uParam4, iVar2, 0));
}elseif(bVar1 && !func_1666(uParam0, 16384)){
if(iVar5 !=-1){
}
iVar4=0;
while (iVar4 < *uParam1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4))){
func_18(uParam0, iVar4, func_19(uParam2, func_37(uParam3, iVar4)));
func_17(uParam0, iVar4, func_19(uParam2, func_37(uParam3, iVar4)));
}
iVar4++;
}
func_16(uParam0, 16384);
func_12(uParam2, uParam3, func_15(uParam0));
func_38(uParam0, func_20(uParam1, uParam2, uParam3, uParam4, 1, 1));
func_11(uParam0);
func_10(&(uParam0->f_3), 2);
}elseif(!bVar1){
if(iVar3 && func_1666(uParam0, 16384)){
func_9(uParam0, 16384);
}
if(bVar0 && !func_1666(uParam0, 8192)){
if(iVar5 !=-1){
}
if(func_5(uParam2, -1)){
func_4(uParam2);
}
if(!func_3(uParam0->f_3, 2)){
func_38(uParam0, func_20(uParam1, uParam2, uParam3, uParam4, iVar2, 0));
}
func_1936(&(uParam0->f_3), 2);
func_10(&(uParam0->f_2), 8192);
}elseif(!bVar0 && func_1666(uParam0, 8192)){
if(func_710(uParam2, uParam1, uParam3, 8192)){
func_9(uParam0, 8192);
}}elseif(bVar0){
}}}


bool func_3(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_4(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < func_1947(uParam0)){
uParam0->f_15[iVar0 /*74*/].f_32=0;
iVar0++;
}}

int func_5(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < func_1947(uParam0)){
if(iParam1 < 0 || iParam1 !=iVar0){
if(func_8(&(uParam0->f_15[iVar0 /*74*/])) < 1 && func_6(uParam0, iVar0) !=10){
return 0;
}}
iVar0++;
}
return 1;
}

int func_6(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=uParam0->f_15){
return -1;
}
return func_7(&(uParam0->f_15[iParam1 /*74*/]));
}

int func_7(var uParam0){
return *uParam0;
}

int func_8(var uParam0){
return uParam0->f_18;
}


void func_9(var uParam0, int iParam1){
uParam0->f_2=(uParam0->f_2 - (uParam0->f_2 && iParam1));
}


void func_10(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


void func_11(var uParam0){
uParam0->f_457++;
if(uParam0->f_457 > 8){
uParam0->f_457=0;
}}


void func_12(var uParam0, var uParam1, int iParam2){
int iVar0;
int iVar1[6];
int iVar2;
int iVar3;
int iVar4;
int iVar5;
iVar3=0;
iVar4=100;
iVar0=0;
while (iVar0 < func_1947(uParam0)){
iVar1[iVar0]=iVar0;
iVar0++;
}
iVar5=1;
while (iVar5 && iVar3 < iVar4){
iVar5=0;
iVar3++;
iVar2=1;
while (iVar2 < func_1947(uParam0)){
if(func_19(uParam0, iVar1[iVar2]) < func_19(uParam0, iVar1[(iVar2 - 1)])){
func_14(&(iVar1[iVar2]), &(iVar1[(iVar2 - 1)]));
iVar5=1;
}elseif(func_19(uParam0, iVar1[iVar2])==func_19(uParam0, iVar1[(iVar2 - 1)])){
if(iParam2 > 0){
if(func_13(uParam1[iVar1[iVar2] /*40*/], (iParam2 - 1)) < func_13(uParam1[iVar1[(iVar2 - 1)] /*40*/], (iParam2 - 1))){
func_14(&(iVar1[iVar2]), &(iVar1[(iVar2 - 1)]));
iVar5=1;
}elseif(func_13(uParam1[iVar1[iVar2] /*40*/], (iParam2 - 1))==func_13(uParam1[iVar1[(iVar2 - 1)] /*40*/], (iParam2 - 1))){
if(iVar1[iVar2] < iVar1[(iVar2 - 1)]){
func_14(&(iVar1[iVar2]), &(iVar1[(iVar2 - 1)]));
iVar5=1;
}}}elseif(iVar1[iVar2] < iVar1[(iVar2 - 1)]){
func_14(&(iVar1[iVar2]), &(iVar1[(iVar2 - 1)]));
iVar5=1;
}}
iVar2++;
}}
iVar0=0;
while (iVar0 < func_1947(uParam0)){
uParam0->f_15[iVar1[iVar0] /*74*/].f_32=((func_1947(uParam0) - 1) - iVar0);
iVar0++;
}}

int func_13(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=uParam0->f_1){
return 0;
}
return uParam0->f_1[iParam1 /*4*/];
}


void func_14(var uParam0, var uParam1){
var uVar0;
uVar0=*uParam0;
*uParam0=*uParam1;
*uParam1=uVar0;
}

int func_15(var uParam0){
return uParam0->f_457;
}


void func_16(var uParam0, int iParam1){
uParam0->f_2=(uParam0->f_2 || iParam1);
}


void func_17(var uParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 >=uParam0->f_4){
return;
}
uParam0->f_4[iParam1 /*74*/].f_73=(uParam0->f_4[iParam1 /*74*/].f_73 + iParam2);
}


void func_18(var uParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 >=uParam0->f_4){
return;
}
if(uParam0->f_457 < 0 || uParam0->f_457 >=uParam0->f_4.f_1){
return;
}
uParam0->f_4[iParam1 /*74*/][uParam0->f_457 /*4*/]=iParam2;
}

int func_19(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=uParam0->f_15){
return 0;
}
return func_8(&(uParam0->f_15[iParam1 /*74*/]));
}

int func_20(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
struct<3> Var6;
struct<3> Var7;
fVar0=0f;
iVar1=-1;
iVar2=0;
while (iVar2 < func_1947(uParam1)){
if(func_1638(uParam1) !=0){
iVar5=func_1652(uParam2, iVar2);
if(func_1651(iVar5) && !func_33(iVar5)){
if(((!func_1665(uParam0, iVar5, 2) || iParam4) || bParam5) && !func_1069(uParam1, iVar2, 16777216)){
if(!bParam5){
Var6={
func_32(uParam0, iVar5) 
};
Var7={
func_30(uParam3, func_31(uParam1)) 
};
}else{
Var6={
func_28(uParam3, func_31(uParam1)) 
};
Var7={
func_30(uParam3, func_31(uParam1)) 
};
}
fVar4=vdist(Var6, Var7);
Var6.f_2=0f;
Var7.f_2=0f;
fVar3=vdist(Var6, Var7);
fVar3=(fVar3 * func_25(func_26(uParam0, iVar5)==3, 1f, 99999f));
fVar3=(fVar3 * func_25(func_26(uParam0, iVar5)==5, 100f, 1f));
fVar3=(fVar3 * ((IntToFloat(uParam1->f_15[iVar2 /*74*/].f_32) * 0.1f) + 1f));
if(fVar4 < 0.7f && func_21(uParam1, uParam3)){
fVar3=(fVar3 * 100f);
}
if(fVar3 > fVar0){
iVar1=iVar2;
fVar0=fVar3;
}}}}
iVar2++;
}
if(iVar1==-1){
iVar1=0;
}
return func_1652(uParam2, iVar1);
}

int func_21(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < func_1947(uParam0)){
if(((((func_24(&(uParam0->f_15[iVar0 /*74*/])) !=3 && func_24(&(uParam0->f_15[iVar0 /*74*/])) !=8) && func_6(uParam0, iVar0) !=10) && !func_1069(uParam0, iVar0, 16384)) && !func_22(uParam0, uParam1, iVar0, 0)) && !func_1069(uParam0, iVar0, 16777216)){
return 0;
}
iVar0++;
}
return 1;
}


bool func_22(var uParam0, var uParam1, int iParam2, int iParam3){
if(iParam2==-1){
iParam2=func_1653(uParam0);
}
return func_19(uParam0, iParam2) >=(func_23(uParam1, func_31(uParam0)) + (5 + iParam3));
}

int func_23(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=uParam0->f_28){
return 0;
}
return (uParam0[iParam1 /*3*/])->f_1;
}

int func_24(var uParam0){
return uParam0->f_23;
}


float func_25(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}

int func_26(var uParam0, int iParam1){
if(!func_27(iParam1)){
return -1;
}
return (uParam0[iParam1 /*17*/])->f_12;
}


bool func_27(int iParam0){
return (iParam0 >=0 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS());
}


Vector3 func__28(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=uParam0->f_28){
return 0f, 0f, 0f;
}
return func_29(iParam1);
}


Vector3 func__29(int iParam0){
switch (iParam0){
case 0:
return -1370.93f, 173.98f, 57.01f;
break;
case 1:
return -1107.26f, 157.15f, 62.04f;
break;
case 2:
return -1312.97f, 125.64f, 56.39f;
break;
case 3:
return -1218.56f, 107.48f, 57.04f;
break;
case 4:
return -1098.15f, 69.5f, 53.09f;
break;
case 5:
return -987.7f, -105.42f, 39.59f;
break;
case 6:
return -1117.793f, -104.069f, 40.8406f;
break;
case 7:
return -1272.63f, 38.4f, 48.75f;
break;
case 8:
return -1138.381f, 0.60467f, 47.98225f;
break;
}
return 0f, 0f, 0f;
}


Vector3 func__30(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=uParam0->f_28){
return 0f, 0f, 0f;
}
switch (iParam1){
case 0:
return -1114.121f, 220.789f, 63.78f;
break;
case 1:
return -1322.07f, 158.77f, 56.69f;
break;
case 2:
return -1237.419f, 112.988f, 56.086f;
break;
case 3:
return -1096.541f, 7.848f, 49.63f;
break;
case 4:
return -957.386f, -90.412f, 39.161f;
break;
case 5:
return -1103.516f, -115.163f, 40.444f;
break;
case 6:
return -1290.633f, 2.771f, 49.219f;
break;
case 7:
return -1034.944f, -83.144f, 42.919f;
break;
case 8:
return -1294.775f, 83.51f, 53.804f;
break;
}
return 0f, 0f, 0f;
}

int func_31(var uParam0){
return uParam0->f_466;
}


Vector3 func__32(var uParam0, int iParam1){
if(!func_27(iParam1)){
return 0f, 0f, 0f;
}
return (uParam0[iParam1 /*17*/])->f_6;
}

int func_33(int iParam0){
if(iParam0 > -1){
return (func_34(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))) || func_1996(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 0));
}
return 0;
}


bool func_34(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_35(var uParam0){
if(uParam0->f_465 < 0){
return 0;
}
return func_36(&(uParam0->f_15[uParam0->f_465 /*74*/]));
}

int func_36(var uParam0){
return uParam0->f_2;
}

int func_37(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((uParam0[iVar0 /*40*/])->f_39==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_38(var uParam0, var uParam1){
uParam0->f_456=uParam1;
}

int func_39(){
int iVar0;
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))){
if(!func_33(iVar0)){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_40(){
MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18), 7);
}


void func_41(var uParam0, var uParam1){
uParam0->f_457=uParam1;
}

int func_42(var uParam0, var uParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < *uParam1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(func_1961(uParam0) < 6 && (func_34(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))) || func_1996(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))){
}else{
if(iVar0==-1){
iVar0=func_1110(uParam1, iVar1);
}
if(iVar0 !=func_1110(uParam1, iVar1)){
return -1;
}}}
iVar1++;
}
return iVar0;
}


void func_43(var uParam0, int iParam1){
*uParam0=iParam1;
}

int func_44(var uParam0){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=0;
while (iVar1 < *uParam0){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1))){
if(iVar0==-1){
iVar0=func_45(uParam0, iVar1);
}
if(iVar0 !=func_45(uParam0, iVar1)){
return -1;
}}
iVar1++;
}
return iVar0;
}

int func_45(var uParam0, int iParam1){
if(!func_27(iParam1)){
return -1;
}
return (*uParam0)[iParam1 /*17*/];
}


void func_46(int iParam0){
Global_1655472.f_1163=iParam0;
}

int func_47(var uParam0){
if(!GRAPHICS::GET_IS_WIDESCREEN()){
if(!func_1669(uParam0) && func_1649(uParam0)==func_1653(uParam0)){
if((((((LOCALIZATION::GET_CURRENT_LANGUAGE()==3 || LOCALIZATION::GET_CURRENT_LANGUAGE()==2) || LOCALIZATION::GET_CURRENT_LANGUAGE()==4) || LOCALIZATION::GET_CURRENT_LANGUAGE()==11) || LOCALIZATION::GET_CURRENT_LANGUAGE()==5) || LOCALIZATION::GET_CURRENT_LANGUAGE()==6) || LOCALIZATION::GET_CURRENT_LANGUAGE()==7){
return 2;
}
if(GRAPHICS::GET_ASPECT_RATIO(1) <=1.7f){
return 2;
}}}
return 1;
}


void func_48(){
if(iLocal_165 > MISC::GET_GAME_TIMER()){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_164[iLocal_167], 255, 255, 255, 255, 0);
}elseif(func_52(uLocal_168, 2)){
func_51();
func_49(&uLocal_168, 2);
}
if(iLocal_166 > MISC::GET_GAME_TIMER()){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_164[iLocal_167], 255, 255, 255, 255, 0);
}}


void func_49(var uParam0, int iParam1){
func_50(uParam0, iParam1);
}


void func_50(var uParam0, var uParam1){
*uParam0=(*uParam0 - (*uParam0 && uParam1));
}


void func_51(){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_164[iLocal_167], "SHARD_ANIM_OUT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_169);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iLocal_166=MISC::GET_GAME_TIMER() + 330;
}


bool func_52(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}


void func_53(var uParam0, var uParam1){
bool bVar0;
bVar0=func_61(&uLocal_234);
func_1908(uParam1, 16777216);
if(!func_1933(uParam1, 33554432)){
func_60(uParam1, func_1645(uParam0) !=4, bVar0);
func_1908(uParam1, 33554432);
}
if(bVar0 !=func_52(uParam1->f_122, 64)){
func_60(uParam1, func_1645(uParam0) !=4, bVar0);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
func_1657(uParam1, 16777216);
func_54(uParam1);
}}


void func_54(var uParam0){
func_1657(uParam0, 33554432);
func_55(uParam0, func_52(uParam0->f_122, 4), func_52(uParam0->f_122, 16), func_52(uParam0->f_122, 8), func_52(uParam0->f_122, 32), func_52(uParam0->f_122, 2));
}


void func_55(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
int iVar4;
uVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 235, 1);
uVar1=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 223, 1);
uVar2=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 227, 1);
uVar3=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 224, 1);
if(bParam1){
func_59(&(uParam0->f_3), "GOLF_CONTINUE", uVar1, 0, 0, 0, 363);
iVar4++;
func_57(&(uParam0->f_122), 4);
}else{
func_49(&(uParam0->f_122), 4);
}
if(bParam4){
if(iVar4==0){
func_59(&(uParam0->f_3), "REPLAY_TITLE", uVar3, 0, 0, 0, 363);
}else{
func_56(&(uParam0->f_3), "REPLAY_TITLE", uVar3, iVar4, 363);
}
iVar4++;
func_57(&(uParam0->f_122), 32);
}else{
func_49(&(uParam0->f_122), 32);
}
if(bParam2){
if(iVar4==0){
func_59(&(uParam0->f_3), "GOLF_QUIT", uVar0, 0, 0, 0, 363);
}else{
func_56(&(uParam0->f_3), "GOLF_QUIT", uVar0, iVar4, 363);
}
iVar4++;
func_57(&(uParam0->f_122), 16);
}else{
func_49(&(uParam0->f_122), 16);
}
if(bParam5){
if(iVar4==0){
func_59(&(uParam0->f_3), "GOLF_SC_INST", uVar2, 0, 0, 0, 363);
}else{
func_56(&(uParam0->f_3), "GOLF_SC_INST", uVar2, iVar4, 363);
}
iVar4++;
func_57(&(uParam0->f_122), 2);
}else{
func_49(&(uParam0->f_122), 2);
}
if(bParam3){
func_57(&(uParam0->f_122), 8);
}else{
func_49(&(uParam0->f_122), 8);
}
uParam0->f_739=2;
}


void func_56(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4){
if(iParam3 < 0){
return;
}
if(HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1)==0){
return;
}
uParam0->f_2[iParam3]=sParam1;
switch (iParam3){
case 0:
uParam0->f_11[0]=uParam2;
uParam0->f_11[1]=0;
uParam0->f_11[2]=0;
uParam0->f_11[3]=0;
uParam0->f_44[0]=iParam4;
uParam0->f_44[1]=363;
uParam0->f_44[2]=363;
uParam0->f_44[3]=363;
break;
case 1:
uParam0->f_11[4]=uParam2;
uParam0->f_11[5]=0;
uParam0->f_11[6]=0;
uParam0->f_11[7]=0;
uParam0->f_44[4]=iParam4;
uParam0->f_44[5]=363;
uParam0->f_44[6]=363;
uParam0->f_44[7]=363;
break;
case 2:
uParam0->f_11[8]=uParam2;
uParam0->f_11[9]=0;
uParam0->f_11[10]=0;
uParam0->f_11[11]=0;
uParam0->f_44[8]=iParam4;
uParam0->f_44[9]=363;
uParam0->f_44[10]=363;
uParam0->f_44[11]=363;
break;
case 3:
uParam0->f_11[12]=uParam2;
uParam0->f_11[13]=0;
uParam0->f_11[14]=0;
uParam0->f_11[15]=0;
uParam0->f_44[12]=iParam4;
uParam0->f_44[13]=363;
uParam0->f_44[14]=363;
uParam0->f_44[15]=363;
break;
case 4:
uParam0->f_11[16]=uParam2;
uParam0->f_11[17]=0;
uParam0->f_11[18]=0;
uParam0->f_11[19]=0;
uParam0->f_44[16]=iParam4;
uParam0->f_44[17]=363;
uParam0->f_44[18]=363;
uParam0->f_44[19]=363;
break;
case 5:
uParam0->f_11[20]=uParam2;
uParam0->f_11[21]=0;
uParam0->f_11[22]=0;
uParam0->f_11[23]=0;
uParam0->f_44[20]=iParam4;
uParam0->f_44[21]=363;
uParam0->f_44[22]=363;
uParam0->f_44[23]=363;
break;
case 6:
uParam0->f_11[24]=uParam2;
uParam0->f_11[25]=0;
uParam0->f_11[26]=0;
uParam0->f_11[27]=0;
uParam0->f_44[24]=iParam4;
uParam0->f_44[25]=363;
uParam0->f_44[26]=363;
uParam0->f_44[27]=363;
break;
case 7:
uParam0->f_11[28]=uParam2;
uParam0->f_11[29]=0;
uParam0->f_11[30]=0;
uParam0->f_11[31]=0;
uParam0->f_44[28]=iParam4;
uParam0->f_44[29]=363;
uParam0->f_44[30]=363;
uParam0->f_44[31]=363;
break;
}}


void func_57(var uParam0, int iParam1){
func_58(uParam0, iParam1);
}


void func_58(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


void func_59(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6){
int iVar0;
if(*uParam0==0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
}
iVar0=0;
while (iVar0 < 32){
uParam0->f_11[iVar0]=0;
uParam0->f_77[iVar0]="";
uParam0->f_44[iVar0]=363;
iVar0++;
}
iVar0=0;
while (iVar0 < 8){
uParam0->f_2[iVar0]="";
iVar0++;
}
uParam0->f_2[0]=sParam1;
uParam0->f_11[0]=uParam2;
uParam0->f_44[0]=iParam6;
uParam0->f_1=0;
if(bParam3){
func_10(&(uParam0->f_1), 32);
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_10(&(uParam0->f_1), 1);
if(bParam4){
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
}}
if(MISC::IS_PC_VERSION()){
uParam0->f_111=iParam5;
}}


void func_60(var uParam0, bool bParam1, bool bParam2){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
uVar0=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 202, 1);
uVar1=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 235, 1);
uVar2=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 217, 1);
iVar3=235;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
uVar1=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 211, 1);
iVar3=211;
}
func_59(&(uParam0->f_3), "GOLF_BACK", uVar0, 0, 0, 1, 202);
iVar4++;
if(bParam2){
func_56(&(uParam0->f_3), "SCLB_PROFILE", uVar2, iVar4, 217);
iVar4++;
func_57(&(uParam0->f_122), 64);
}else{
func_49(&(uParam0->f_122), 64);
}
if(bParam1){
func_56(&(uParam0->f_3), "GOLF_QUIT", uVar1, iVar4, iVar3);
iVar4++;
func_57(&(uParam0->f_122), 16);
}else{
func_49(&(uParam0->f_122), 16);
}
uParam0->f_739=3;
}

int func_61(var uParam0){
if((MISC::IS_BIT_SET(uParam0->f_42, 1) && Global_2097536.f_2704[0] > 0) && uParam0->f_246.f_1 >=0){
return 1;
}
return 0;
}


void func_62(var uParam0){
func_156();
func_63(uParam0, &uLocal_234);
}


void func_63(var uParam0, var uParam1){
int iVar0;
bool bVar1;
var uVar2[3];
bool bVar3;
bool bVar4;
bool bVar5;
struct<8> Var6;
char[] cVar7[8];
int iVar8[3];
bool bVar9;
struct<13> Var10;
var uVar11;
struct<3> Var12;
struct<3> Var13;
bool bVar14;
func_155(&(Global_2103068.f_49), 1, 0);
HUD::HIDE_HELP_TEXT_THIS_FRAME();
func_154();
func_147(0);
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
func_145(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
func_46(1);
func_144(1);
if(!func_141()){
if(!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE")){
AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
}}
if(!MISC::IS_BIT_SET(uParam1->f_42, 3)){
*uParam0=func_140();
MISC::SET_BIT(&(uParam1->f_42), 3);
}
Var10={
func_139(PLAYER::PLAYER_ID()) 
};
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 !=0){
if(!PLAYER::IS_PLAYER_ONLINE()){
if(Global_2097536.f_2829 !=2){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=2;
}}elseif(!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()){
if(Global_2097536.f_2829 !=3){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=3;
}}elseif(!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(Global_2097536.f_2829 !=4){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=4;
}}elseif(Global_2097536.f_2832 !=0){
if(Global_2097536.f_2829 !=5){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=5;
}}
if(!MISC::IS_BIT_SET(uParam1->f_42, 1)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_138(*uParam0, Global_2097536.f_2780);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1))){
if(!func_137(uParam1->f_44)){
if(Global_2097536.f_2780.f_26 > 0){
Var6={
Global_2097536.f_2780.f_9 
};
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}
else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}}elseif(!Global_2097536.f_2780.f_27){
StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}
else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}}else{
StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}
else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}}
func_135(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
}
bVar9=false;
MISC::SET_BIT(&bVar9, 4);
func_134(*uParam0, &bVar3, bVar9, 1, 1);
bVar9=false;
MISC::SET_BIT(&bVar9, 5);
func_134(*uParam0, &bVar3, bVar9, 1, 1);
bVar9=false;
MISC::SET_BIT(&bVar9, 6);
func_134(*uParam0, &bVar3, bVar9, 1, 1);
MISC::SET_BIT(&(uParam1->f_42), true);
func_133(*uParam0);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
HUD::CLEAR_HELP(1);
}else{
func_133(*uParam0);
}}else{
if(Global_2097536.f_2829 !=1){
MISC::CLEAR_BIT(&(uParam1->f_42), true);
Global_2097536.f_2829=1;
}
if(!func_94(uParam1)){
uParam1->f_246.f_1=-1;
MISC::CLEAR_BIT(&(uParam1->f_42), true);
if(!MISC::IS_BIT_SET(uParam1->f_42, 0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_138(*uParam0, Global_2097536.f_2780);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1))){
if(!func_137(uParam1->f_44)){
if(Global_2097536.f_2780.f_26 > 0){
Var6={
Global_2097536.f_2780.f_9 
};
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
}else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
elseif(!Global_2097536.f_2780.f_27){
StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
else{
StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
func_135(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
}
MISC::SET_BIT(&(uParam1->f_42), false);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
}
bVar3=false;
iVar0=0;
if(Global_2097536.f_2825==-1){
StringCopy(&Var12, "SC_LB_DL0", 24);
iVar0=0;
while (iVar0 < 3){
if(iVar0==0){
bVar9=false;
MISC::SET_BIT(&bVar9, 4);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
elseif(iVar0==1){
bVar9=false;
MISC::SET_BIT(&bVar9, 5);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
elseif(iVar0==2){
bVar9=false;
MISC::SET_BIT(&bVar9, 6);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
bVar9=false;
MISC::SET_BIT(&bVar9, 7);
func_93(*uParam0, bVar3, bVar9, &Var12);
bVar3++;
iVar0++;
}
Global_2097536.f_2825=1;
func_92(&(Global_2097536.f_2823));
}elseif(func_90(&(Global_2097536.f_2823), 300, 0)){
StringCopy(&Var13, "SC_LB_DL", 24);
StringIntConCat(&Var13, Global_2097536.f_2825, 24);
iVar0=0;
while (iVar0 < 3){
if(iVar0==0){
bVar9=false;
MISC::SET_BIT(&bVar9, 4);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
elseif(iVar0==1){
bVar9=false;
MISC::SET_BIT(&bVar9, 5);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
elseif(iVar0==2){
bVar9=false;
MISC::SET_BIT(&bVar9, 6);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
bVar9=false;
MISC::SET_BIT(&bVar9, 7);
func_93(*uParam0, bVar3, bVar9, &Var13);
bVar3++;
iVar0++;
}
Global_2097536.f_2825++;
if(Global_2097536.f_2825 > 3){
Global_2097536.f_2825=0;
}
func_92(&(Global_2097536.f_2823));
}
func_133(*uParam0);
}else{
MISC::CLEAR_BIT(&(uParam1->f_42), false);
if(!MISC::IS_BIT_SET(uParam1->f_42, 1)){
iVar0=0;
while (iVar0 < 3){
uParam1->f_246.f_187[iVar0]=0;
iVar0++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_138(*uParam0, Global_2097536.f_2780);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1))){
if(!func_137(uParam1->f_44)){
if(Global_2097536.f_2780.f_26 > 0){
Var6={
Global_2097536.f_2780.f_9 
};
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
}else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
elseif(!Global_2097536.f_2780.f_27){
StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
else{
StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
if(Global_2097536.f_2780.f_26 > 0){
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
}else{
func_136(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
}
}
func_135(*uParam0, "SCLB_C_RANK", &(Global_2097536.f_2717), Global_2097536.f_2708);
}
if(!MISC::IS_BIT_SET(uParam1->f_42, 6)){
func_89(&Global_2101867);
func_85(uParam1, &Global_2101867);
func_84(uParam1, &Global_2101867);
}
bVar3=false;
uParam1->f_246.f_2=0;
if((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] !=-1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && func_137(uParam1->f_44)) && Global_2097536.f_2775[0] !=-1)){
uParam1->f_246.f_1=-1;
iVar0=0;
iVar0=0;
while (iVar0 < 12){
bVar14=false;
if(Global_2101867[iVar0 /*100*/].f_75==1){
if(!iVar8[0]){
bVar9=false;
MISC::SET_BIT(&bVar9, 4);
func_134(*uParam0, &bVar3, bVar9, 0, 0);
iVar8[0]=1;
}}elseif(Global_2101867[iVar0 /*100*/].f_75==2){
if(!iVar8[1]){
bVar9=false;
MISC::SET_BIT(&bVar9, 5);
if((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1]==-1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && func_137(uParam1->f_44)) && Global_2097536.f_2775[1] !=-1)){
func_134(*uParam0, &bVar3, bVar9, 1, 0);
bVar14=true;
}
else{
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
iVar8[1]=1;
}}elseif(Global_2101867[iVar0 /*100*/].f_75==3){
if(!iVar8[2]){
bVar9=false;
MISC::SET_BIT(&bVar9, 6);
if(!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
bVar14=true;
}
elseif(!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT()){
bVar14=true;
}
if((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2]==-1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && func_137(uParam1->f_44)) && Global_2097536.f_2775[2] !=-1)){
bVar14=true;
}
if(bVar14){
func_134(*uParam0, &bVar3, bVar9, 1, 0);
}
else{
func_134(*uParam0, &bVar3, bVar9, 0, 0);
}
iVar8[2]=1;
}}
if(func_83(Global_2101867[iVar0 /*100*/].f_32)){
if(func_137(uParam1->f_44)){
NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
if(!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11)){
bVar14=true;
}}
if(!bVar14){
bVar9=false;
if(!Global_2097536.f_2780.f_27){
if(func_82(&(Global_2101867[iVar0 /*100*/].f_32), &Var10)){
MISC::SET_BIT(&bVar9, true);
if(uParam1->f_246.f_1==-1){
bVar4=true;
uParam1->f_246.f_1=iVar0;
MISC::SET_BIT(&bVar9, 3);
}
}
}
if(func_137(uParam1->f_44)){
Var6={
Global_2101867[iVar0 /*100*/] 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), "")){
StringConCat(&Var6, "/", 64);
StringConCat(&Var6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
}
func_81(*uParam0, bVar3, bVar9, Global_2101867[iVar0 /*100*/].f_59, &Var6, &(Global_2101867[iVar0 /*100*/].f_80));
uParam1->f_246.f_6[iVar0 /*15*/]=bVar3;
uParam1->f_246.f_6[iVar0 /*15*/].f_1=bVar9;
uParam1->f_246.f_6[iVar0 /*15*/].f_2={
Global_2101867[iVar0 /*100*/].f_32 
};
uParam1->f_246.f_2++;
}
else{
func_81(*uParam0, bVar3, bVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
uParam1->f_246.f_6[iVar0 /*15*/]=bVar3;
uParam1->f_246.f_6[iVar0 /*15*/].f_1=bVar9;
uParam1->f_246.f_6[iVar0 /*15*/].f_2={
Global_2101867[iVar0 /*100*/].f_32 
};
uParam1->f_246.f_2++;
}
bVar1=false;
while (bVar1 < Global_2097536.f_2708){
bVar5=false;
if(MISC::IS_BIT_SET(Global_2097536.f_2770, bVar1)){
if(MISC::IS_BIT_SET(Global_2097536.f_2768, bVar1)){
if(Global_2097536.f_2754[bVar1]==Global_2101867[iVar0 /*100*/].f_67[bVar1]){
bVar5=true;
}}
if(bVar5){
func_72(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
}else{
func_72(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
}
}
else{
if(MISC::IS_BIT_SET(Global_2097536.f_2768, bVar1)){
if(Global_2097536.f_2761[bVar1]==Global_2101867[iVar0 /*100*/].f_67[bVar1]){
bVar5=true;
}}
if(bVar5){
func_69(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
}else{
func_69(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
}
}
bVar1++;
}
func_68();
uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
if(uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]==2){
if(Global_2101867[iVar0 /*100*/].f_59 > 2){
MISC::SET_BIT(&bVar9, 2);
MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
func_67(*uParam0, (bVar3 - 1), bVar9);
}
}
bVar3++;
}}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 3){
uParam1->f_246.f_187[iVar0]=uVar2[iVar0];
iVar0++;
}}else{
bVar9=false;
MISC::SET_BIT(&bVar9, 4);
func_134(*uParam0, &bVar3, bVar9, 1, 0);
bVar9=false;
MISC::SET_BIT(&bVar9, 5);
func_134(*uParam0, &bVar3, bVar9, 1, 0);
bVar9=false;
MISC::SET_BIT(&bVar9, 6);
func_134(*uParam0, &bVar3, bVar9, 1, 0);
}
MISC::SET_BIT(&(uParam1->f_42), true);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
func_133(*uParam0);
HUD::CLEAR_HELP(1);
if(uParam1->f_246.f_1==-1 && !bVar4==1){
if(Global_2097536.f_2704[0] > 1){
uParam1->f_246.f_1=0;
MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
func_67(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
}}}else{
func_133(*uParam0);
func_64(uParam0, uParam1);
}}}}}


void func_64(var uParam0, var uParam1){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
var uVar5;
int iVar6;
var uVar7;
var uVar8;
iVar1=uParam1->f_246.f_1;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
PAD::SET_INPUT_EXCLUSIVE(2, 239);
PAD::SET_INPUT_EXCLUSIVE(2, 240);
PAD::SET_INPUT_EXCLUSIVE(2, 237);
PAD::SET_INPUT_EXCLUSIVE(2, 238);
PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 241)){
PAD::SET_CONTROL_VALUE_NEXT_FRAME(2, 188, 1f);
}
if(PAD::IS_DISABLED_CONTROL_PRESSED(2, 242)){
PAD::SET_CONTROL_VALUE_NEXT_FRAME(2, 187, 1f);
}
if(HUD::GET_MOUSE_EVENT(*uParam0, &iVar2, &iVar3, &uVar4)){
if(iVar2==5){
if(iVar3 > uParam1->f_246.f_187[0]){
if(iVar3 <=(uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2){
iVar3=(iVar3 - 2);
}else{
iVar3=(iVar3 - 4);
}}
iVar3=(iVar3 - 1);
if(uParam1->f_246.f_1 !=iVar3){
uParam1->f_246.f_1=iVar3;
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
bVar0=true;
}else{
PAD::SET_CONTROL_VALUE_NEXT_FRAME(2, 217, 1f);
}}}}
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_66(&uVar5, &iVar6, &uVar7, &uVar8, 0);
}
if(uParam1->f_246.f_2 > 0){
if(!MISC::IS_BIT_SET(uParam1->f_246, 0)){
if((PAD::IS_CONTROL_PRESSED(2, 188) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
uParam1->f_246.f_1=(uParam1->f_246.f_1 + -1);
MISC::SET_BIT(&(uParam1->f_246), false);
func_92(&(uParam1->f_246.f_3));
bVar0=true;
}}elseif(func_65(uParam1, 188)){
MISC::CLEAR_BIT(&(uParam1->f_246), false);
}
if(!MISC::IS_BIT_SET(uParam1->f_246, 1)){
if((PAD::IS_CONTROL_PRESSED(2, 187) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100){
AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
uParam1->f_246.f_1++;
MISC::SET_BIT(&(uParam1->f_246), true);
func_92(&(uParam1->f_246.f_3));
bVar0=true;
}}elseif(func_65(uParam1, 187)){
MISC::CLEAR_BIT(&(uParam1->f_246), true);
}}
if(bVar0){
if(uParam1->f_246.f_1 < 0){
uParam1->f_246.f_1=(uParam1->f_246.f_2 - 1);
}
if(uParam1->f_246.f_1 >=uParam1->f_246.f_2){
uParam1->f_246.f_1=0;
}}
if(!MISC::IS_BIT_SET(uParam1->f_246, 3)){
if((PAD::IS_CONTROL_PRESSED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237)){
MISC::SET_BIT(&(uParam1->f_246), 3);
func_92(&(uParam1->f_246.f_3));
bVar0=true;
}}elseif(func_65(uParam1, 204)){
MISC::CLEAR_BIT(&(uParam1->f_246), 3);
}
if(uParam1->f_246.f_1 >=0){
if(uParam1->f_246.f_1 !=iVar1){
if(iVar1 >=0){
MISC::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
func_67(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
}
MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
func_67(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
MISC::CLEAR_BIT(&(uParam1->f_42), 2);
}
if(func_83(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2)){
if(!MISC::IS_BIT_SET(uParam1->f_246, 2)){
if(PAD::IS_CONTROL_PRESSED(2, 217) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217)){
if(!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
MISC::SET_BIT(&(uParam1->f_246), 2);
NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
}}}elseif(!PAD::IS_CONTROL_PRESSED(2, 217)){
MISC::CLEAR_BIT(&(uParam1->f_246), 2);
}}}}

int func_65(var uParam0, int iParam1){
var uVar0;
int iVar1;
var uVar2;
var uVar3;
if(iParam1==188 || iParam1==187){
func_66(&uVar0, &iVar1, &uVar2, &uVar3, 0);
if(((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_90(&(uParam0->f_246.f_3), 250, 0)){
return 1;
}}elseif((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_90(&(uParam0->f_246.f_3), 250, 0)){
return 1;
}
return 0;
}


void func_66(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4){
*uParam0=floor((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
*uParam2=floor((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
if(bParam4){
if(IntToFloat(*uParam0)==0f && IntToFloat(*uParam1)==0f){
*uParam0=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
*uParam1=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
}
if(IntToFloat(*uParam2)==0f && IntToFloat(*uParam3)==0f){
*uParam2=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
*uParam3=floor((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
}}}


void func_67(var uParam0, bool bParam1, bool bParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT_STATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_68(){
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_69(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, float fParam15, bool bParam16){
switch (Param0.f_29[bParam14]){
case 4:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 12:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(floor(fParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 17:
case 19:
case 18:
case 20:
if(bParam16){
if(Param0.f_29[bParam14]==18 || Param0.f_29[bParam14]==20){
fParam15=(fParam15 * -1f);
}
if(!MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(Param0.f_29[bParam14]==19 || Param0.f_29[bParam14]==20){
fParam15=func_71(fParam15);
}else{
fParam15=func_70(fParam15);
}}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 0:
break;
}}


float func_70(float fParam0){
return (fParam0 / 0.3048f);
}


float func_71(float fParam0){
return (fParam0 / 1609.344f);
}


void func_72(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17){
struct<4> Var0;
if(iParam15==2147483647 || iParam15==-2147483647){
bParam16=false;
}
StringCopy(&Var0, "", 16);
switch (Param0.f_29[bParam14]){
case 5:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 7:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 1:
case 9:
case 11:
if(bParam16){
if(Param0.f_29[bParam14]==11 && iParam15 < 0){
iParam15=(iParam15 * -1);
}
if(iParam15 >=3600000 || iParam15 <=-3600000){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(Param0.f_29[bParam14]==9){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 6:
if(bParam16){
if(iParam15==2147483647){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(iParam15 >=3600000 || iParam15 <=-3600000){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 2:
case 10:
if(bParam16){
iParam15=(iParam15 * -1);
if(iParam15 >=3600000 || iParam15 <=-3600000){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(Param0.f_29[bParam14]==10){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 3:
if(bParam17){
if(STREAMING::IS_MODEL_IN_CDIMAGE(iParam15)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(STREAMING::IS_MODEL_IN_CDIMAGE(iParam15)){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 8:
if(func_80(iParam15) !=0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_77(func_80(iParam15), 0));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 13:
case 15:
case 14:
case 16:
if(bParam16){
if(Param0.f_29[bParam14]==14 || Param0.f_29[bParam14]==16){
iParam15=(iParam15 * -1);
}
if(!MISC::SHOULD_USE_METRIC_MEASUREMENTS()){
if(Param0.f_29[bParam14]==15 || Param0.f_29[bParam14]==16){
iParam15=floor(func_71(to_float(iParam15)));
}else{
iParam15=floor(func_70(to_float(iParam15)));
}}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 21:
if(iParam15 > 20){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
Var0={
func_76(iParam15) 
};
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 22:
if(bParam16){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(func_73(iParam15));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
break;
case 0:
break;
}}

int func_73(int iParam0){
int iVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
iVar0=func_75(199);
if(iParam0 < 100){
return 1;
}elseif(iParam0 > iVar0){
fVar1=(to_float(iParam0) - to_float(iVar0));
iVar2=floor((fVar1 / to_float(Global_262145.f_31089)));
return (199 + iVar2);
}
fVar3=(to_float(Global_262145.f_31088) / 2f);
fVar4=(-(fVar3 * 3f) + fVar3);
fVar5=fVar3;
fVar6=((-(fVar3 * 3f) + fVar4) + 100f);
fVar7=((-3f * fVar4) - 100f);
fVar7=(IntToFloat(iParam0) - fVar7);
return floor(func_74(-fVar5, -fVar6, fVar7, 1));
}


float func_74(float fParam0, float fParam1, float fParam2, bool bParam3){
if(bParam3){
return ((-fParam1 - sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}
return ((-fParam1 + sqrt(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_75(int iParam0){
float fVar0;
float fVar1;
fVar0=to_float(iParam0);
fVar1=(to_float(Global_262145.f_31088) / 2f);
return round((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}


struct<4> func_76(int iParam0){
struct<4> Var0;
StringCopy(&Var0, "ARENA_C_SL", 16);
if(iParam0 > 20){
StringCopy(&Var0, "**INVALID**", 16);
return Var0;
}
if(iParam0 < 0){
iParam0=0;
}
StringIntConCat(&Var0, iParam0, 16);
return Var0;
}


char* func_77(int iParam0, bool bParam1){
struct<32> Var0;
switch (iParam0){
case 0:
if(bParam1){
return "WTU_INVALID";
}else{
return "WT_INVALID";
}
break;
case joaat("weapon_unarmed"):
if(bParam1){
return "WTU_UNARMED";
}else{
return "WT_UNARMED";
}
break;
case joaat("weapon_pistol"):
if(bParam1){
return "WTU_PIST";
}else{
return "WT_PIST";
}
break;
case joaat("weapon_combatpistol"):
if(bParam1){
return "WTU_PIST_CBT";
}else{
return "WT_PIST_CBT";
}
break;
case joaat("weapon_appistol"):
if(bParam1){
return "WTU_PIST_AP";
}else{
return "WT_PIST_AP";
}
break;
case joaat("weapon_smg"):
if(bParam1){
return "WTU_SMG";
}else{
return "WT_SMG";
}
break;
case joaat("weapon_microsmg"):
if(bParam1){
return "WTU_SMG_MCR";
}else{
return "WT_SMG_MCR";
}
break;
case joaat("weapon_assaultrifle"):
if(bParam1){
return "WTU_RIFLE_ASL";
}else{
return "WT_RIFLE_ASL";
}
break;
case joaat("weapon_carbinerifle"):
if(bParam1){
return "WTU_RIFLE_CBN";
}else{
return "WT_RIFLE_CBN";
}
break;
case joaat("weapon_advancedrifle"):
if(bParam1){
return "WTU_RIFLE_ADV";
}else{
return "WT_RIFLE_ADV";
}
break;
case joaat("weapon_mg"):
if(bParam1){
return "WTU_MG";
}else{
return "WT_MG";
}
break;
case joaat("weapon_combatmg"):
if(bParam1){
return "WTU_MG_CBT";
}else{
return "WT_MG_CBT";
}
break;
case joaat("weapon_pumpshotgun"):
if(bParam1){
return "WTU_SG_PMP";
}else{
return "WT_SG_PMP";
}
break;
case joaat("weapon_sawnoffshotgun"):
if(bParam1){
return "WTU_SG_SOF";
}else{
return "WT_SG_SOF";
}
break;
case joaat("weapon_assaultshotgun"):
if(bParam1){
return "WTU_SG_ASL";
}else{
return "WT_SG_ASL";
}
break;
case joaat("weapon_heavysniper"):
if(bParam1){
return "WTU_SNIP_HVY";
}else{
return "WT_SNIP_HVY";
}
break;
case joaat("weapon_remotesniper"):
if(bParam1){
return "WTU_SNIP_RMT";
}else{
return "WT_SNIP_RMT";
}
break;
case joaat("weapon_sniperrifle"):
if(bParam1){
return "WTU_SNIP_RIF";
}else{
return "WT_SNIP_RIF";
}
break;
case joaat("weapon_grenadelauncher"):
if(bParam1){
return "WTU_GL";
}else{
return "WT_GL";
}
break;
case joaat("weapon_rpg"):
if(bParam1){
return "WTU_RPG";
}else{
return "WT_RPG";
}
break;
case joaat("weapon_minigun"):
if(bParam1){
return "WTU_MINIGUN";
}else{
return "WT_MINIGUN";
}
break;
case joaat("weapon_grenade"):
if(bParam1){
return "WTU_GNADE";
}else{
return "WT_GNADE";
}
break;
case joaat("weapon_smokegrenade"):
if(bParam1){
return "WTU_GNADE_SMK";
}else{
return "WT_GNADE_SMK";
}
break;
case joaat("weapon_stickybomb"):
if(bParam1){
return "WTU_GNADE_STK";
}else{
return "WT_GNADE_STK";
}
break;
case joaat("weapon_molotov"):
if(bParam1){
return "WTU_MOLOTOV";
}else{
return "WT_MOLOTOV";
}
break;
case joaat("weapon_stungun"):
if(bParam1){
return "WTU_STUN";
}else{
return "WT_STUN";
}
break;
case joaat("weapon_petrolcan"):
if(bParam1){
return "WTU_PETROL";
}else{
return "WT_PETROL";
}
break;
case joaat("weapon_electric_fence"):
if(bParam1){
return "WTU_ELCFEN";
}else{
return "WT_ELCFEN";
}
break;
case joaat("vehicle_weapon_tank"):
if(bParam1){
return "WTU_V_TANK";
}else{
return "WT_V_TANK";
}
break;
case joaat("vehicle_weapon_space_rocket"):
if(bParam1){
return "WTU_V_SPACERKT";
}else{
return "WT_V_SPACERKT";
}
break;
case joaat("vehicle_weapon_player_laser"):
if(bParam1){
return "WTU_V_PLRLSR";
}else{
return "WT_V_PLRLSR";
}
break;
case joaat("object"):
if(bParam1){
return "WTU_OBJECT";
}else{
return "WT_OBJECT";
}
break;
case joaat("gadget_parachute"):
if(bParam1){
return "WTU_PARA";
}else{
return "WT_PARA";
}
break;
case joaat("AMMO_RPG"):
if(bParam1){
return "WTU_A_RPG";
}else{
return "WT_A_RPG";
}
break;
case joaat("AMMO_TANK"):
if(bParam1){
return "WTU_A_TANK";
}else{
return "WT_A_TANK";
}
break;
case joaat("AMMO_SPACE_ROCKET"):
if(bParam1){
return "WTU_A_SPACERKT";
}else{
return "WT_A_SPACERKT";
}
break;
case joaat("AMMO_PLAYER_LASER"):
if(bParam1){
return "WTU_A_PLRLSR";
}else{
return "WT_A_PLRLSR";
}
break;
case joaat("AMMO_ENEMY_LASER"):
if(bParam1){
return "WTU_A_ENMYLSR";
}else{
return "WT_A_ENMYLSR";
}
break;
case joaat("weapon_knife"):
if(bParam1){
return "WTU_KNIFE";
}else{
return "WT_KNIFE";
}
break;
case joaat("weapon_nightstick"):
if(bParam1){
return "WTU_NGTSTK";
}else{
return "WT_NGTSTK";
}
break;
case joaat("weapon_hammer"):
if(bParam1){
return "WTU_HAMMER";
}else{
return "WT_HAMMER";
}
break;
case joaat("weapon_bat"):
if(bParam1){
return "WTU_BAT";
}else{
return "WT_BAT";
}
break;
case joaat("weapon_crowbar"):
if(bParam1){
return "WTU_CROWBAR";
}else{
return "WT_CROWBAR";
}
break;
case joaat("weapon_golfclub"):
if(bParam1){
return "WTU_GOLFCLUB";
}else{
return "WT_GOLFCLUB";
}
break;
case joaat("weapon_rammed_by_car"):
if(bParam1){
return "WTU_PIST";
}else{
return "WT_PIST";
}
break;
case joaat("weapon_run_over_by_car"):
if(bParam1){
return "WTU_PIST";
}else{
return "WT_PIST";
}
break;
case joaat("weapon_assaultsmg"):
if(bParam1){
return "WTU_SMG_ASL";
}else{
return "WT_SMG_ASL";
}
break;
case joaat("weapon_bullpupshotgun"):
if(bParam1){
return "WTU_SG_BLP";
}else{
return "WT_SG_BLP";
}
break;
case joaat("weapon_pistol50"):
if(bParam1){
return "WTU_PIST_50";
}else{
return "WT_PIST_50";
}
break;
case joaat("weapon_bottle"):
if(bParam1){
return "WTU_BOTTLE";
}else{
return "WT_BOTTLE";
}
break;
case joaat("weapon_gusenberg"):
if(bParam1){
return "WTU_GUSENBERG";
}else{
return "WT_GUSENBERG";
}
break;
case joaat("weapon_snspistol"):
if(bParam1){
return "WTU_SNSPISTOL";
}else{
return "WT_SNSPISTOL";
}
break;
case joaat("weapon_vintagepistol"):
if(bParam1){
return "WTU_VPISTOL";
}else{
return "WT_VPISTOL";
}
break;
case joaat("weapon_dagger"):
if(bParam1){
return "WTU_DAGGER";
}else{
return "WT_DAGGER";
}
break;
case joaat("weapon_flaregun"):
if(bParam1){
return "WTU_FLAREGUN";
}else{
return "WT_FLAREGUN";
}
break;
case joaat("weapon_heavypistol"):
if(bParam1){
return "WTU_HEAVYPSTL";
}else{
return "WT_HEAVYPSTL";
}
break;
case joaat("weapon_specialcarbine"):
if(bParam1){
return "WTU_RIFLE_SCBN";
}else{
return "WT_RIFLE_SCBN";
}
break;
case joaat("weapon_musket"):
if(bParam1){
return "WTU_MUSKET";
}else{
return "WT_MUSKET";
}
break;
case joaat("weapon_firework"):
if(bParam1){
return "WTU_FWRKLNCHR";
}else{
return "WT_FWRKLNCHR";
}
break;
case joaat("weapon_marksmanrifle"):
if(bParam1){
return "WTU_MKRIFLE";
}else{
return "WT_MKRIFLE";
}
break;
case joaat("weapon_heavyshotgun"):
if(bParam1){
return "WTU_HVYSHOT";
}else{
return "WT_HVYSHOT";
}
break;
case joaat("weapon_proxmine"):
if(bParam1){
return "WTU_PRXMINE";
}else{
return "WT_PRXMINE";
}
break;
case joaat("weapon_hominglauncher"):
if(bParam1){
return "WTU_HOMLNCH";
}else{
return "WT_HOMLNCH";
}
break;
case joaat("weapon_hatchet"):
if(bParam1){
return "WTU_HATCHET";
}else{
return "WT_HATCHET";
}
break;
case joaat("weapon_railgun"):
if(bParam1){
return "WTU_RAILGUN";
}else{
return "WT_RAILGUN";
}
break;
case joaat("weapon_combatpdw"):
if(bParam1){
return "WTU_COMBATPDW";
}else{
return "WT_COMBATPDW";
}
break;
case joaat("weapon_knuckle"):
if(bParam1){
return "WTU_KNUCKLE";
}else{
return "WT_KNUCKLE";
}
break;
case joaat("weapon_marksmanpistol"):
if(bParam1){
return "WTU_MKPISTOL";
}else{
return "WT_MKPISTOL";
}
break;
case joaat("weapon_bullpuprifle"):
if(bParam1){
return "WTU_BULLRIFLE";
}else{
return "WT_BULLRIFLE";
}
break;
case joaat("weapon_machete"):
if(bParam1){
return "WTU_MACHETE";
}else{
return "WT_MACHETE";
}
break;
case joaat("weapon_machinepistol"):
if(bParam1){
return "WTU_MCHPIST";
}else{
return "WT_MCHPIST";
}
break;
case joaat("weapon_flashlight"):
if(bParam1){
return "WTU_FLASHLIGHT";
}else{
return "WT_FLASHLIGHT";
}
break;
case joaat("weapon_dbshotgun"):
if(bParam1){
return "WTU_DBSHGN";
}else{
return "WT_DBSHGN";
}
break;
case joaat("weapon_compactrifle"):
if(bParam1){
return "WTU_CMPRIFLE";
}else{
return "WT_CMPRIFLE";
}
break;
case joaat("weapon_switchblade"):
if(bParam1){
return "WTU_SWBLADE";
}else{
return "WT_SWBLADE";
}
break;
case joaat("weapon_revolver"):
if(bParam1){
return "WTU_REVOLVER";
}else{
return "WT_REVOLVER";
}
break;
case joaat("weapon_autoshotgun"):
if(bParam1){
return "WTU_AUTOSHGN";
}else{
return "WT_AUTOSHGN";
}
break;
case joaat("weapon_battleaxe"):
if(bParam1){
return "WTU_BATTLEAXE";
}else{
return "WT_BATTLEAXE";
}
break;
case joaat("weapon_compactlauncher"):
if(bParam1){
return "WTU_CMPGL";
}else{
return "WT_CMPGL";
}
break;
case joaat("weapon_minismg"):
if(bParam1){
return "WTU_MINISMG";
}else{
return "WT_MINISMG";
}
break;
case joaat("weapon_pipebomb"):
if(bParam1){
return "WTU_PIPEBOMB";
}else{
return "WT_PIPEBOMB";
}
break;
case joaat("weapon_poolcue"):
if(bParam1){
return "WTU_POOLCUE";
}else{
return "WT_POOLCUE";
}
break;
case joaat("weapon_wrench"):
if(bParam1){
return "WTU_WRENCH";
}else{
return "WT_WRENCH";
}
break;
case joaat("weapon_cougar"):
return "WT_RAGE";
break;
case -159960575:
return "WT_VEH_WEP";
break;
case joaat("weapon_pistol_mk2"):
if(bParam1){
return "WTU_PIST2";
}else{
return "WT_PIST2";
}
break;
case joaat("weapon_smg_mk2"):
if(bParam1){
return "WTU_SMG2";
}else{
return "WT_SMG2";
}
break;
case joaat("weapon_heavysniper_mk2"):
if(bParam1){
return "WTU_SNIP_HVY2";
}else{
return "WT_SNIP_HVY2";
}
break;
case joaat("weapon_combatmg_mk2"):
if(bParam1){
return "WTU_MG_CBT2";
}else{
return "WT_MG_CBT2";
}
break;
case joaat("weapon_assaultrifle_mk2"):
if(bParam1){
return "WTU_RIFLE_ASL2";
}else{
return "WT_RIFLE_ASL2";
}
break;
case joaat("weapon_carbinerifle_mk2"):
if(bParam1){
return "WTU_RIFLE_CBN2";
}else{
return "WT_RIFLE_CBN2";
}
break;
case joaat("weapon_pumpshotgun_mk2"):
if(bParam1){
return "WTU_SG_PMP2";
}else{
return "WT_SG_PMP2";
}
break;
case joaat("weapon_specialcarbine_mk2"):
if(bParam1){
return "WTU_SPCARBINE2";
}else{
return "WT_SPCARBINE2";
}
break;
case joaat("weapon_snspistol_mk2"):
if(bParam1){
return "WTU_SNSPISTOL2";
}else{
return "WT_SNSPISTOL2";
}
break;
case joaat("weapon_marksmanrifle_mk2"):
if(bParam1){
return "WTU_MKRIFLE2";
}else{
return "WT_MKRIFLE2";
}
break;
case joaat("weapon_revolver_mk2"):
if(bParam1){
return "WTU_REVOLVER2";
}else{
return "WT_REVOLVER2";
}
break;
case joaat("weapon_bullpuprifle_mk2"):
if(bParam1){
return "WTU_BULLRIFLE2";
}else{
return "WT_BULLRIFLE2";
}
break;
case joaat("weapon_doubleaction"):
if(bParam1){
return "WTU_REV_DA";
}else{
return "WT_REV_DA";
}
break;
case joaat("weapon_stone_hatchet"):
if(bParam1){
return "WTU_SHATCHET";
}else{
return "WT_SHATCHET";
}
break;
case joaat("weapon_raypistol"):
if(bParam1){
return "WTU_RAYPISTOL";
}else{
return "WT_RAYPISTOL";
}
break;
case joaat("weapon_raycarbine"):
if(bParam1){
return "WTU_RAYCARBINE";
}else{
return "WT_RAYCARBINE";
}
break;
case joaat("weapon_rayminigun"):
if(bParam1){
return "WTU_RAYMINIGUN";
}else{
return "WT_RAYMINIGUN";
}
break;
case joaat("weapon_navyrevolver"):
if(bParam1){
return "WTU_REV_NV";
}else{
return "WT_REV_NV";
}
break;
case joaat("weapon_ceramicpistol"):
if(bParam1){
return "WTU_CERPST";
}else{
return "WT_CERPST";
}
break;
case joaat("weapon_gadgetpistol"):
if(bParam1){
return "WTU_GDGTPST";
}else{
return "WT_GDGTPST";
}
break;
case joaat("weapon_militaryrifle"):
if(bParam1){
return "WTU_MLTRYRFL";
}else{
return "WT_MLTRYRFL";
}
break;
case joaat("weapon_combatshotgun"):
if(bParam1){
return "WTU_CMBSHGN";
}else{
return "WT_CMBSHGN";
}
break;
case joaat("vehicle_weapon_turret_dinghy5_50cal"):
if(bParam1){
return "WTU_VEH_DINGHY_50C";
}else{
return "WTU_VEH_DINGHY_50C";
}
break;
case joaat("weapon_fertilizercan"):
if(bParam1){
return "WTU_FERTCAN";
}else{
return "WT_FERTCAN";
}
break;
case joaat("weapon_heavyrifle"):
if(bParam1){
return "WTU_HEAVYRIFLE";
}else{
return "WT_HEAVYRIFLE";
}
break;
case joaat("weapon_emplauncher"):
if(bParam1){
return "WTU_EMPL";
}else{
return "WT_EMPL";
}
break;
case joaat("weapon_stungun_mp"):
if(bParam1){
return "WTU_STNGUNMP";
}else{
return "WT_STNGUNMP";
}
break;
case joaat("weapon_tacticalrifle"):
if(bParam1){
return "WTU_TACRIFLE";
}else{
return "WT_TACRIFLE";
}
break;
case joaat("weapon_precisionrifle"):
if(bParam1){
return "WTU_PRCSRIFLE";
}else{
return "WT_PRCSRIFLE";
}
break;
case joaat("weapon_bzgas"):
if(bParam1){
return "WTU_BZGAS";
}else{
return "WTU_BZGAS";
}
break;
case joaat("weapon_stinger"):
if(bParam1){
return "WTU_STINGER";
}else{
return "WTU_STINGER";
}
break;
case joaat("weapon_grenadelauncher_smoke"):
if(bParam1){
return "WTU_GR_LAUN_SM";
}else{
return "WTU_GR_LAUN_SM";
}
break;
case joaat("weapon_pistolxm3"):
if(bParam1){
return "WTU_PISTOLXM3";
}else{
return "WT_PISTOLXM3";
}
break;
case joaat("weapon_candycane"):
if(bParam1){
return "WTU_CANDYCANE";
}else{
return "WT_CANDYCANE";
}
break;
case joaat("weapon_railgunxm3"):
if(bParam1){
return "WTU_RAILGUNXM3";
}else{
return "WT_RAILGUNXM3";
}
break;
default:
if(func_79(iParam0, &Var0) !=-1){
if(bParam1){
return func_78(&(Var0.f_31));
}else{
return func_78(&(Var0.f_7));
}}
break;
}
return "WT_INVALID";
}


var func__78(var uParam0){
return uParam0;
}

int func_79(int iParam0, var uParam1){
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

int func_80(int iParam0){
if(iParam0==600){
return joaat("weapon_railgun");
}elseif(iParam0==500){
return joaat("weapon_minigun");
}elseif(iParam0==400){
return joaat("weapon_mg");
}elseif(iParam0==401){
return joaat("weapon_combatmg");
}elseif(iParam0==402){
return -572349828;
}elseif(iParam0==300){
return joaat("weapon_assaultrifle");
}elseif(iParam0==301){
return joaat("weapon_carbinerifle");
}elseif(iParam0==302){
return joaat("weapon_advancedrifle");
}elseif(iParam0==303){
return joaat("weapon_heavyrifle");
}elseif(iParam0==200){
return joaat("weapon_pumpshotgun");
}elseif(iParam0==201){
return joaat("weapon_sawnoffshotgun");
}elseif(iParam0==202){
return joaat("weapon_assaultshotgun");
}elseif(iParam0==203){
return joaat("weapon_bullpupshotgun");
}elseif(iParam0==100){
return joaat("weapon_microsmg");
}elseif(iParam0==101){
return joaat("weapon_smg");
}elseif(iParam0==102){
return joaat("weapon_assaultsmg");
}elseif(iParam0==0){
return joaat("weapon_pistol");
}elseif(iParam0==1){
return joaat("weapon_combatpistol");
}elseif(iParam0==2){
return joaat("weapon_appistol");
}elseif(iParam0==3){
return joaat("weapon_pistol50");
}
return 0;
}


void func_81(var uParam0, bool bParam1, bool bParam2, int iParam3, char* sParam4, char* sParam5){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
if(iParam3 > 0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam5);
}

int func_82(var uParam0, var uParam1){
if(!func_83(*uParam0)){
return 0;
}
if(!func_83(*uParam1)){
return 0;
}
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1)){
return 1;
}
return 0;
}


bool func_83(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_84(var uParam0, var uParam1){
int iVar0;
int iVar1;
struct<75> Var2;
var uVar3;
Var2.f_60=6;
Var2.f_67=6;
if(!MISC::IS_BIT_SET(uParam0->f_42, 5) && !MISC::IS_BIT_SET(uParam0->f_42, 6)){
iVar0=0;
while (iVar0 < 12){
if((uParam1[iVar0 /*100*/])->f_75 !=0){
iVar1=iVar0 + 1;
while (iVar1 <=11){
if((uParam1[iVar1 /*100*/])->f_75 !=0){
if((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75){
uVar3=(uParam1[iVar1 /*100*/])->f_75;
(uParam1[iVar1 /*100*/])->f_75=(uParam1[iVar0 /*100*/])->f_75;
(uParam1[iVar0 /*100*/])->f_75=uVar3;
Var2={
*(uParam1[iVar1 /*100*/]) 
};
*(uParam1[iVar1 /*100*/])={
*(uParam1[iVar0 /*100*/]) 
};
*(uParam1[iVar0 /*100*/])={
Var2 
};
}
elseif((uParam1[iVar1 /*100*/])->f_75==(uParam1[iVar0 /*100*/])->f_75){
if((uParam1[iVar1 /*100*/])->f_59 !=-1){
if((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59==-1){
uVar3=(uParam1[iVar1 /*100*/])->f_75;
(uParam1[iVar1 /*100*/])->f_75=(uParam1[iVar0 /*100*/])->f_75;
(uParam1[iVar0 /*100*/])->f_75=uVar3;
Var2={
*(uParam1[iVar1 /*100*/]) 
};
*(uParam1[iVar1 /*100*/])={
*(uParam1[iVar0 /*100*/]) 
};
*(uParam1[iVar0 /*100*/])={
Var2 
};
}}
}}
iVar1++;
}}
iVar0++;
}}}


void func_85(var uParam0, var uParam1){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
if(!MISC::IS_BIT_SET(uParam0->f_42, 5) && !MISC::IS_BIT_SET(uParam0->f_42, 6)){
iVar4=0;
while (iVar4 < 12){
if(func_88(uParam1, iVar3, &uVar0, 0)){
(uParam1[iVar3 /*100*/])->f_75=1;
iVar3++;
if(iVar3 >=12){
return;
}}
if(func_88(uParam1, iVar3, &uVar1, 1)){
(uParam1[iVar3 /*100*/])->f_75=2;
iVar3++;
if(iVar3 >=12){
return;
}}
if(func_88(uParam1, iVar3, &uVar2, 2)){
(uParam1[iVar3 /*100*/])->f_75=3;
iVar3++;
if(iVar3 >=12){
return;
}}
iVar4++;
}}else{
func_86(uParam1);
}}


void func_86(var uParam0){
int iVar0;
bool bVar1;
int iVar2;
struct<13> Var3;
int iVar4;
iVar0=0;
while (iVar0 < 3){
Global_2097536.f_2704[iVar0]=0;
Global_2097536.f_2775[iVar0]=-1;
iVar0++;
}
Var3={
func_139(PLAYER::PLAYER_ID()) 
};
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826)){
iVar4=STATS::LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Global_2097536.f_2826);
iVar0=0;
iVar0=0;
while (iVar0 < iVar4){
if(iVar0 < 12){
func_87(&Global_2101737);
iVar2=0;
STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_2097536.f_2826, iVar0, &Global_2101737);
*(uParam0[iVar0 /*100*/])={
Global_2101737.f_1 
};
(uParam0[iVar0 /*100*/])->f_16={
Global_2101737.f_17 
};
(uParam0[iVar0 /*100*/])->f_32={
Global_2101737.f_33 
};
(uParam0[iVar0 /*100*/])->f_45={
Global_2101737.f_46 
};
(uParam0[iVar0 /*100*/])->f_58=Global_2101737.f_59;
(uParam0[iVar0 /*100*/])->f_59=Global_2101737.f_60;
Global_2097536.f_2708=Global_2101737.f_62;
Global_2097536.f_2769=Global_2101737.f_63;
iVar2=0;
if(MISC::IS_BIT_SET(Global_2101737.f_61, 1)){
iVar2=1;
}elseif(MISC::IS_BIT_SET(Global_2101737.f_61, 2)){
iVar2=2;
}elseif(MISC::IS_BIT_SET(Global_2101737.f_61, 3)){
iVar2=3;
}
Global_2097536.f_2704[(iVar2 - 1)]++;
(uParam0[iVar0 /*100*/])->f_75=iVar2;
if((uParam0[iVar0 /*100*/])->f_59 !=-1){
if(MISC::IS_BIT_SET(Global_2101737.f_61, 0)){
(uParam0[iVar0 /*100*/])->f_74=1;
}else{
(uParam0[iVar0 /*100*/])->f_74=0;
}
if(func_82(&((uParam0[iVar0 /*100*/])->f_32), &Var3)){
Global_2097536.f_2775[(iVar2 - 1)]=0;
}}
bVar1=false;
while (bVar1 < Global_2101737.f_62){
if(MISC::IS_BIT_SET(Global_2101737.f_63, bVar1)){
(uParam0[iVar0 /*100*/])->f_67[bVar1]=Global_2101737.f_97[bVar1];
}else{
(uParam0[iVar0 /*100*/])->f_60[bVar1]=Global_2101737.f_64[bVar1];
}
bVar1++;
}}
iVar0++;
}}}


void func_87(var uParam0){
struct<13> Var0;
int iVar1;
*uParam0=0;
StringCopy(&(uParam0->f_1), "", 64);
StringCopy(&(uParam0->f_17), "", 64);
uParam0->f_33={
Var0 
};
uParam0->f_46={
Var0 
};
uParam0->f_59=0;
uParam0->f_60=0;
uParam0->f_61=0;
uParam0->f_62=0;
uParam0->f_63=0;
iVar1=0;
while (iVar1 < 32){
uParam0->f_64[iVar1]=0f;
uParam0->f_97[iVar1]=0;
iVar1++;
}}

int func_88(var uParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
if(*uParam2==0){
if(Global_2097536[iParam3 /*901*/][0 /*75*/].f_59 > 0){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][0 /*75*/] 
};
Global_2101680[iParam3 /*16*/]={
Global_2097536[iParam3 /*901*/][0 /*75*/] 
};
Global_2101680.f_49[iParam3]=Global_2097536[iParam3 /*901*/][0 /*75*/].f_67[Global_2097536.f_2779];
Global_2101680.f_53[iParam3]=Global_2097536[iParam3 /*901*/][0 /*75*/].f_60[Global_2097536.f_2779];
*uParam2++;
return 1;
}}elseif(*uParam2==1){
if(Global_2097536.f_2775[iParam3] > 0){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][Global_2097536.f_2775[iParam3] /*75*/] 
};
*uParam2++;
return 1;
}else{
if(Global_2097536.f_2775[iParam3] < 0){
StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
(uParam0[iParam1 /*100*/])->f_32={
func_139(PLAYER::PLAYER_ID()) 
};
(uParam0[iParam1 /*100*/])->f_59=-1;
(uParam0[iParam1 /*100*/])->f_67[0]=-1;
(uParam0[iParam1 /*100*/])->f_67[1]=-1;
(uParam0[iParam1 /*100*/])->f_67[2]=-1;
(uParam0[iParam1 /*100*/])->f_67[3]=-1;
(uParam0[iParam1 /*100*/])->f_60[0]=-1f;
(uParam0[iParam1 /*100*/])->f_60[1]=-1f;
(uParam0[iParam1 /*100*/])->f_60[2]=-1f;
(uParam0[iParam1 /*100*/])->f_60[3]=-1f;
*uParam2++;
return 1;
}
*uParam2++;
}}elseif((*uParam2 % 2)==0){
iVar0=(*uParam2 / 2);
if((Global_2097536.f_2775[iParam3] - iVar0) >=1){
if(Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] - iVar0) /*75*/] 
};
*uParam2++;
return 1;
}}}else{
iVar0=floor(to_float((*uParam2 / 2)));
if((Global_2097536.f_2775[iParam3] + iVar0) < 12 && (Global_2097536.f_2775[iParam3] + iVar0) > 0){
if(Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1){
*(uParam0[iParam1 /*100*/])={
Global_2097536[iParam3 /*901*/][(Global_2097536.f_2775[iParam3] + iVar0) /*75*/] 
};
*uParam2++;
return 1;
}}}
*uParam2++;
return 0;
}


void func_89(var uParam0){
struct<13> Var0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 12){
StringCopy(uParam0[iVar1 /*100*/], "", 64);
StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
(uParam0[iVar1 /*100*/])->f_32={
Var0 
};
(uParam0[iVar1 /*100*/])->f_45={
Var0 
};
(uParam0[iVar1 /*100*/])->f_58=0;
(uParam0[iVar1 /*100*/])->f_59=0;
iVar2=0;
while (iVar2 < 6){
(uParam0[iVar1 /*100*/])->f_60[iVar2]=0f;
(uParam0[iVar1 /*100*/])->f_67[iVar2]=0;
iVar2++;
}
(uParam0[iVar1 /*100*/])->f_75=0;
(uParam0[iVar1 /*100*/])->f_74=0;
(uParam0[iVar1 /*100*/])->f_76=0;
(uParam0[iVar1 /*100*/])->f_77=0;
(uParam0[iVar1 /*100*/])->f_78=0;
(uParam0[iVar1 /*100*/])->f_79=0;
StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
iVar1++;
}
func_92(&(Global_2097536.f_2830));
}

int func_90(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_91(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}


void func_91(var uParam0, bool bParam1, bool bParam2){
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


void func_92(var uParam0){
uParam0->f_1=0;
}


void func_93(var uParam0, bool bParam1, bool bParam2, char* sParam3){
MISC::SET_BIT(&bParam2, 7);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_94(var uParam0){
if(!Global_2097532){
if(!func_132(&(Global_2097536.f_2827))){
func_91(&(Global_2097536.f_2827), 1, 0);
return 0;
}elseif(!func_90(&(Global_2097536.f_2827), 1000, 1)){
return 0;
}}
if(((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 !=0){
MISC::CLEAR_BIT(&(uParam0->f_42), 4);
return 1;
}
if(!MISC::IS_BIT_SET(uParam0->f_42, 4)){
func_131(uParam0);
MISC::SET_BIT(&(uParam0->f_42), 4);
return 0;
}elseif(MISC::IS_BIT_SET(uParam0->f_42, 5)){
(*uParam0)[0]=2;
(*uParam0)[1]=1;
(*uParam0)[2]=3;
return 1;
}
if(!func_129(uParam0)){
return 0;
}
if(!func_127(uParam0)){
return 0;
}
if(!func_113(uParam0)){
return 0;
}
if(!MISC::IS_BIT_SET(uParam0->f_42, 6)){
func_89(&Global_2101867);
func_85(uParam0, &Global_2101867);
func_84(uParam0, &Global_2101867);
MISC::SET_BIT(&(uParam0->f_42), 6);
}
if(!MISC::IS_BIT_SET(uParam0->f_42, 7)){
if(!func_132(&(Global_2097536.f_2830))){
func_91(&(Global_2097536.f_2830), 1, 0);
}elseif(func_90(&(Global_2097536.f_2830), 30000, 1)){
MISC::SET_BIT(&(uParam0->f_42), 7);
}
if(func_110(&Global_2101867)){
}else{
return 0;
}
if(func_107(&Global_2101867)){
}else{
return 0;
}
if(func_99(&Global_2101867)){
func_95(&Global_2101867);
MISC::SET_BIT(&(uParam0->f_42), 7);
func_95(&Global_2101867);
}else{
return 0;
}}
return 1;
}


void func_95(var uParam0){
int iVar0;
bool bVar1;
int iVar2;
iVar2=func_98(Global_2097536.f_2826);
if(Global_2100721.f_81[iVar2] !=0){
func_97(-1, iVar2);
}
iVar0=0;
while (iVar0 < 12){
func_87(&Global_2101737);
if((uParam0[iVar0 /*100*/])->f_75 !=0){
Global_2101737=Global_2097536.f_2826;
Global_2101737.f_1={
*(uParam0[iVar0 /*100*/]) 
};
if(MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), "")){
Global_2101737.f_17={
*(uParam0[iVar0 /*100*/]) 
};
}else{
Global_2101737.f_17={
(uParam0[iVar0 /*100*/])->f_16 
};
}
Global_2101737.f_33={
(uParam0[iVar0 /*100*/])->f_32 
};
if(func_83((uParam0[iVar0 /*100*/])->f_45)){
Global_2101737.f_46={
(uParam0[iVar0 /*100*/])->f_45 
};
}else{
Global_2101737.f_46={
(uParam0[iVar0 /*100*/])->f_32 
};
}
Global_2101737.f_59=(uParam0[iVar0 /*100*/])->f_58;
Global_2101737.f_60=(uParam0[iVar0 /*100*/])->f_59;
Global_2101737.f_62=Global_2097536.f_2708;
Global_2101737.f_63=Global_2097536.f_2770;
if((uParam0[iVar0 /*100*/])->f_74){
MISC::SET_BIT(&(Global_2101737.f_61), false);
}else{
MISC::CLEAR_BIT(&(Global_2101737.f_61), false);
}
MISC::SET_BIT(&(Global_2101737.f_61), (uParam0[iVar0 /*100*/])->f_75);
bVar1=false;
while (bVar1 < Global_2101737.f_62){
if(MISC::IS_BIT_SET(Global_2101737.f_63, bVar1)){
Global_2101737.f_97[bVar1]=(uParam0[iVar0 /*100*/])->f_67[bVar1];
}else{
Global_2101737.f_64[bVar1]=(uParam0[iVar0 /*100*/])->f_60[bVar1];
}
bVar1++;
}
Global_2100721.f_81[iVar2]=Global_2097536.f_2826;
STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_2101737);
}
iVar0++;
}
Global_2100721.f_87[iVar2 /*3*/]={
func_96(PLAYER::PLAYER_ID()) 
};
}


Vector3 func__96(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}


void func_97(int iParam0, int iParam1){
int iVar0;
if(iParam1 !=-1){
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iParam1])){
STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(Global_2100721.f_81[iParam1]);
}
Global_2100721.f_81[iParam1]=0;
}elseif(iParam0 !=-1){
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0)){
STATS::LEADERBOARDS_CLEAR_CACHE_DATA_ID(iParam0);
}
iVar0=0;
while (iVar0 < 5){
if(Global_2100721.f_81[iVar0]==iParam0){
Global_2100721.f_81[iVar0]=0;
}
iVar0++;
}}}

int func_98(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=0;
while (iVar0 < 5){
if(Global_2100721.f_81[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}
iVar0=0;
iVar0=0;
while (iVar0 < 5){
if(Global_2100721.f_81[iVar0]==0){
return iVar0;
}elseif(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2100721.f_81[iVar0])){
iVar3=STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2100721.f_81[iVar0]);
if(iVar3 > iVar2){
iVar1=iVar0;
iVar2=iVar3;
}}else{
return iVar0;
}
iVar0++;
}
return iVar1;
}

int func_99(var uParam0){
int iVar0;
int iVar1;
switch ((uParam0[0 /*100*/])->f_76){
case 0:
func_105(uParam0);
if((func_104() || func_103()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
(uParam0[0 /*100*/])->f_76=3;
return 0;
}
iVar0=0;
while (iVar0 < 12){
if(func_83((uParam0[iVar0 /*100*/])->f_32)){
if(!func_102(&((uParam0[iVar0 /*100*/])->f_32), &Global_2103169)){
Global_2103169[Global_2103169.f_206 /*13*/]={
(uParam0[iVar0 /*100*/])->f_32 
};
Global_2103169.f_206++;
}}
iVar0++;
}
if(Global_2103169.f_206 > 0){
(uParam0[0 /*100*/])->f_76=1;
}else{
(uParam0[0 /*100*/])->f_76=3;
}
break;
case 1:
if(func_100(&((uParam0[1 /*100*/])->f_76), &(Global_2103169.f_206), &Global_2103169, &(Global_2103169.f_157))){
(uParam0[0 /*100*/])->f_76=2;
}
break;
case 2:
if(Global_2103169.f_206 > 12){
Global_2103169.f_206=12;
}
iVar0=0;
while (iVar0 < 12){
iVar1=0;
while (iVar1 < Global_2103169.f_206){
if(func_83((uParam0[iVar0 /*100*/])->f_32) && func_83(Global_2103169[iVar1 /*13*/])){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_2103169[iVar1 /*13*/]))){
(uParam0[iVar0 /*100*/])->f_80={
Global_2103169.f_157[iVar1 /*4*/] 
};
}}
iVar1++;
}
iVar0++;
}
(uParam0[0 /*100*/])->f_76=3;
break;
case 3:
return 1;
break;
}
return 0;
}

int func_100(var uParam0, var uParam1, var uParam2, var uParam3){
var uVar0;
int iVar1;
switch (*uParam0){
case 0:
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
}else{
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
*uParam0=1;
}
break;
case 1:
if(!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS()){
*uParam0=2;
}else{
*uParam0=3;
}}
break;
case 2:
iVar1=0;
while (iVar1 < *uParam1){
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0)){
func_101(&uVar0, uParam3[iVar1 /*4*/]);
}
iVar1++;
}
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
}else{
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
}
*uParam0=3;
break;
case 3:
return 1;
break;
}
return 0;
}


void func_101(var uParam0, char* sParam1){
NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

int func_102(var uParam0, var uParam1){
int iVar0;
iVar0=0;
while (iVar0 < 12){
if(func_83(*(uParam1[iVar0 /*13*/]))){
if(NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/])){
return 1;
}}
iVar0++;
}
return 0;
}


bool func_103(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


bool func_104(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_105(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < 12){
func_106(&(Global_2103169[iVar0 /*13*/]));
StringCopy(&(Global_2103169.f_157[iVar0 /*4*/]), "", 16);
iVar0++;
}
if((uParam0[0 /*100*/])->f_76 > 0){
(uParam0[0 /*100*/])->f_76=0;
(uParam0[1 /*100*/])->f_76=0;
if(!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
}}
if(NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING()){
NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
}
Global_2103169.f_206=0;
}


void func_106(var uParam0){
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

int func_107(var uParam0){
int iVar0;
if(MISC::IS_PC_VERSION()){
return 1;
}elseif(func_103() || func_104()){
if(!func_109(uParam0)){
return 0;
}}else{
iVar0=0;
while (iVar0 < 12){
if(!func_108(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/])){
return 0;
}
iVar0++;
}}
return 1;
}

int func_108(var uParam0, var uParam1, char* sParam2){
if(*uParam0==2){
return 1;
}
switch (*uParam0){
case 0:
if(func_83(*uParam1)){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
if(func_103() || func_104()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1)){
*uParam0=1;
}}elseif(MISC::IS_XBOX360_VERSION()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1)){
*uParam0=1;
}}else{
StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
if(MISC::IS_PS3_VERSION()){
}
elseif(func_104()){
}
elseif(MISC::IS_PC_VERSION()){
}
*uParam0=2;
}}else{
StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
*uParam0=2;
}}else{
*uParam0=2;
}
break;
case 1:
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
if(!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED()){
StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
}
*uParam0=2;
return 1;
}}else{
StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
*uParam0=2;
}
break;
case 2:
return 1;
break;
}
return 0;
}

int func_109(var uParam0){
int iVar0;
int iVar1;
int iVar2;
if(!func_103() && !func_104()){
return 1;
}
if((uParam0[0 /*100*/])->f_78==2){
return 1;
}
switch ((uParam0[0 /*100*/])->f_78){
case 0:
Global_2097536.f_3183=0;
iVar1=0;
while (iVar1 < 12){
StringCopy(&(Global_2097536.f_2833[iVar1 /*16*/]), "", 64);
func_106(&(Global_2097536.f_3026[iVar1 /*13*/]));
if(func_83((uParam0[iVar1 /*100*/])->f_32)){
Global_2097536.f_3026[Global_2097536.f_3183 /*13*/]={
(uParam0[iVar1 /*100*/])->f_32 
};
Global_2097536.f_3183++;
}
iVar1++;
}
if(Global_2097536.f_3183 > 0){
(uParam0[0 /*100*/])->f_79=NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&(Global_2097536.f_3026), Global_2097536.f_3183);
(uParam0[0 /*100*/])->f_78=1;
}else{
(uParam0[0 /*100*/])->f_78=2;
}
break;
case 1:
iVar0=NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES((uParam0[0 /*100*/])->f_79, &(Global_2097536.f_2833), Global_2097536.f_3183);
if(iVar0==0){
iVar1=0;
while (iVar1 < 12){
if(func_83((uParam0[iVar1 /*100*/])->f_32)){
*(uParam0[iVar1 /*100*/])={
Global_2097536.f_2833[iVar2 /*16*/] 
};
iVar2++;
}
iVar1++;
}
(uParam0[0 /*100*/])->f_78=2;
}elseif(iVar0==-1){
(uParam0[0 /*100*/])->f_78=2;
}else{
return 0;
}
break;
case 2:
(uParam0[0 /*100*/])->f_79=-1;
return 1;
break;
}
return 0;
}

int func_110(var uParam0){
int iVar0;
if(func_103() || func_104()){
iVar0=0;
while (iVar0 < 12){
if(!func_112(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_2097536.f_2833), &((uParam0[iVar0 /*100*/])->f_79))){
return 0;
}
iVar0++;
}}else{
iVar0=0;
while (iVar0 < 12){
if(!func_111(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84))){
return 0;
}
iVar0++;
}}
return 1;
}

int func_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17){
struct<13> Var0;
if(*uParam0==2){
return 1;
}elseif(MISC::IS_STRING_NULL_OR_EMPTY(&uParam1)){
*uParam0=2;
return 1;
}
NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
switch (*uParam0){
case 0:
if(func_83(Var0)){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0)){
if((MISC::IS_XBOX360_VERSION() || func_103()) || func_104()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0)){
*uParam0=1;
}}else{
StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
if(MISC::IS_PS3_VERSION()){
}
elseif(func_104()){
}
elseif(MISC::IS_PC_VERSION()){
}
*uParam0=2;
}}else{
StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
*uParam0=2;
}}else{
*uParam0=2;
}
break;
case 1:
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0)){
if(!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING()){
if(NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED()){
StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
}
*uParam0=2;
return 1;
}}else{
StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
*uParam0=2;
}
break;
case 2:
return 1;
break;
}
return 0;
}

int func_112(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4){
int iVar0;
struct<13> Var1[1];
if(!func_103() && !func_104()){
return 1;
}
if(*uParam0==2){
return 1;
}elseif(MISC::IS_STRING_NULL_OR_EMPTY(sParam1)){
*uParam0=2;
return 1;
}
NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
switch (*uParam0){
case 0:
StringCopy(uParam3[0 /*16*/], "", 64);
if(func_83(Var1[0 /*13*/])){
if(!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/]))){
*uParam4=NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var1, 1);
*uParam0=1;
}else{
StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
*uParam0=2;
}}else{
*uParam0=2;
}
break;
case 1:
iVar0=NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(*uParam4, uParam3, 1);
if(iVar0==0){
*sParam2={
*(uParam3[0 /*16*/]) 
};
*uParam0=2;
}elseif(iVar0==-1){
*uParam0=2;
}else{
return 0;
}
break;
case 2:
*uParam4=-1;
return 1;
break;
}
return 0;
}

int func_113(var uParam0){
struct<97> Var0;
struct<6> Var1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
bool bVar9;
bool bVar10;
int iVar11;
struct<13> Var12;
Var0.f_19.f_1=4;
iVar5=-1;
bVar9=2;
Var12={
func_139(PLAYER::PLAYER_ID()) 
};
switch ((*uParam0)[bVar9]){
case 0:
Global_2097536.f_2775[bVar9]=-1;
Global_2097536.f_2704[bVar9]=0;
Global_2097157.f_374=-1;
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12)){
if(NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12)){
uParam0->f_44.f_2=uParam0->f_7;
uParam0->f_44.f_1=3;
(*uParam0)[bVar9]=1;
return 0;
}}else{
(*uParam0)[bVar9]=3;
return 1;
}}else{
(*uParam0)[bVar9]=3;
return 1;
}
break;
case 1:
uParam0->f_44.f_1=3;
Var1.f_0=uParam0->f_44;
Var1.f_1=uParam0->f_44.f_1;
if(func_125(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_126(), 0, 0, 0)){
func_124(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(Var1.f_3 > 0){
iVar7=0;
iVar2=0;
if(func_126()){
iVar7=0;
while (iVar7 < Var1.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar7, &Var0);
if(Global_2097157.f_374 < 0){
if(func_82(&Var0, &Var12) || func_82(&Var0, &(Global_2097157.f_361))){
Global_2097157.f_374=Var0.f_96;
}}
if(iVar5 < 0){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(Global_2097157.f_211.f_36[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar7, 0)){
iVar5=iVar7;
}
}
elseif(Global_2097157.f_211.f_3[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar7, 0)){
iVar5=iVar7;
}}
func_123(&Var0);
iVar7++;
}
if(iVar5 < 0){
iVar5=Var1.f_3;
}
}
iVar7=0;
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
if(Var0.f_96 <=1){
if(Global_2097536.f_2704[bVar9] < 11){
if(func_126() && iVar5==0){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Var0.f_96);
Global_2097536.f_2775[bVar9]=0;
Global_2097536.f_2704[bVar9]++;
}
if(func_126() && (func_82(&Var0, &Var12) || func_82(&Var0, &(Global_2097157.f_361)))){
}else{
if(func_82(&Var0, &Var12)){
iVar5=0;
Global_2097536.f_2775[bVar9]=0;
}
MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32={
Var0 
};
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59=Var0.f_96;
if(func_121(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=1;
}
else{
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74=1;
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
Global_2097536.f_2704[bVar9]++;
}
bVar8=true;
}
}
if(!bVar8){
Global_2097536.f_2704[bVar9]++;
}
if(!func_126()){
iVar5=Var1.f_5;
}
if(iVar5 > 6){
iVar6=(iVar5 - 6);
}
elseif(bVar8){
iVar6=1;
}
else{
iVar6=0;
}
iVar7=iVar6;
func_123(&Var0);
iVar7=iVar6;
while (iVar7 <=(Var1.f_3 - 1)){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar7, &Var0);
if(Global_2097536.f_2704[bVar9] < 11 && Var0.f_96 > 1){
if(func_126() && iVar5==iVar7){
if(!func_82(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32), &Var12)){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Var0.f_96);
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}}
if(func_126() && (func_82(&Var0, &Var12) || func_82(&Var0, &(Global_2097157.f_361)))){
}elseif(Global_2097536.f_2704[bVar9] < 11){
if(func_83(Var0) && !func_82(&Var0, &(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32))){
if(func_82(&Var0, &Var12)){
if(Global_2097536.f_2775[bVar9] < 0){
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
}
}
MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32={
Var0 
};
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59=Var0.f_96;
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74=1;
if(func_121(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar7, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=1;
}else{
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
iVar2=0;
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar7, Global_2097536.f_2710[iVar2]);
}else{
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar7, Global_2097536.f_2710[iVar2]);
}
iVar2++;
}
Global_2097536.f_2704[bVar9]++;
}}}
func_123(&Var0);
iVar7++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
if(bVar8){
if(Global_2097536.f_2775[bVar9]==-1 && func_126()){
if(Global_2097536.f_2704[bVar9] >=1){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
}else{
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
}
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}
(*uParam0)[bVar9]=3;
}
else{
(*uParam0)[bVar9]=2;
}}else{
if(!bVar8){
Global_2097536.f_2704[bVar9]++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[bVar9]=-1;
(*uParam0)[bVar9]=2;
}}else{
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[bVar9]=-1;
(*uParam0)[bVar9]=2;
MISC::SET_BIT(&(Global_2097536.f_2832), bVar9);
}}
break;
case 2:
if(Global_2097536.f_2775[bVar9]==-1){
iVar11=11;
}else{
iVar11=1;
}
uParam0->f_44.f_1=3;
Var1.f_0=uParam0->f_44;
Var1.f_1=uParam0->f_44.f_1;
if(func_115(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11)){
func_124(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(Var1.f_3 > 0){
iVar2=0;
while (iVar2 < Var1.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar2, &Var0);
bVar10=false;
if(Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[bVar9 /*901*/][0 /*75*/].f_59 <=0){
bVar10=true;
}
if(Global_2097536.f_2704[bVar9] < 11 || bVar10){
if(func_126() && (func_82(&Var0, &Var12) || func_82(&Var0, &(Global_2097157.f_361)))){
}elseif(iVar2==0 || bVar10){
MemCopy(&(Global_2097536[bVar9 /*901*/][0 /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[bVar9 /*901*/][0 /*75*/].f_32={
Var0 
};
Global_2097536[bVar9 /*901*/][0 /*75*/].f_59=Var0.f_96;
if(func_121(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[bVar9 /*901*/][0 /*75*/].f_58=1;
}
else{
Global_2097536[bVar9 /*901*/][0 /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[bVar9 /*901*/][0 /*75*/].f_74=1;
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[bVar9 /*901*/][0 /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[bVar9 /*901*/][0 /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
if(Global_2097536.f_2704[bVar9]==0){
if(bVar10){
}
else{
Global_2097536.f_2704[bVar9]++;
}
}}elseif(Global_2097536.f_2704[bVar9] < 11){
MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32={
Var0 
};
if(func_121(uParam0->f_44)){
iVar4=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar2, Global_2097536.f_2709);
if(iVar4==1){
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=1;
}
else{
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59=Var0.f_96;
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74=1;
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar2, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar2, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
if(iVar2 !=0){
Global_2097536.f_2704[bVar9]++;
}}}
func_123(&Var0);
iVar2++;
}}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
(*uParam0)[bVar9]=3;
}else{
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
MISC::SET_BIT(&(Global_2097536.f_2832), bVar9);
Global_2097536.f_2704[bVar9]=0;
(*uParam0)[bVar9]=3;
}
if(Global_2097536.f_2775[bVar9]==-1 && func_126()){
if(Global_2097536.f_2704[bVar9] >=1){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
}else{
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
}
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}}
break;
case 3:
func_114(bVar9, Global_2097157.f_374);
(*uParam0)[bVar9]=4;
break;
case 4:
return 1;
break;
}
return 0;
}


void func_114(bool bParam0, int iParam1){
int iVar0;
if((func_126() && Global_2097536.f_2704[bParam0] > Global_2097536.f_2775[bParam0]) && Global_2097536.f_2775[bParam0] >=0){
if(iParam1 !=Global_2097536[bParam0 /*901*/][Global_2097536.f_2775[bParam0] /*75*/].f_59){
iVar0=0;
while (iVar0 < Global_2097536.f_2704[bParam0]){
if(iVar0 !=Global_2097536.f_2775[bParam0]){
if(Global_2097536[bParam0 /*901*/][iVar0 /*75*/].f_59 >=Global_2097536[bParam0 /*901*/][Global_2097536.f_2775[bParam0] /*75*/].f_59){
if(Global_2097536[bParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1==-1){
Global_2097536[bParam0 /*901*/][iVar0 /*75*/].f_59++;
}}}
iVar0++;
}}}else{
if(!func_126()){
}
if(Global_2097536.f_2704[bParam0] <=Global_2097536.f_2775[bParam0]){
}
if(Global_2097536.f_2775[bParam0] < 0){
}}}

int func_115(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4){
switch (*uParam0){
case 0:
if(!func_118() && !func_117()){
func_116(*uParam2);
if(STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}


void func_116(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67){
Global_2097152=1;
func_155(&(Global_2097152.f_1), 1, 0);
Global_2097152.f_3=Param0.f_0;
Global_2097152.f_4=Param0.f_1;
}

int func_117(){
if(HUD::IS_PAUSE_MENU_ACTIVE() && !func_141()){
return 1;
}
return 0;
}

int func_118(){
if(STATS::LEADERBOARDS_READ_ANY_PENDING() || Global_2097152){
func_119();
return 1;
}
return 0;
}


void func_119(){
if(func_90(&(Global_2097152.f_1), 120000, 1)){
STATS::LEADERBOARDS_READ_CLEAR(Global_2097152.f_3, Global_2097152.f_4, -1);
Global_2097152=0;
func_92(&(Global_2097152.f_1));
}}


void func_120(var uParam0, var uParam1, var uParam2){
*uParam0=0;
*uParam1=0;
Global_2097152=0;
func_92(&(Global_2097152.f_1));
STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_121(int iParam0){
if((((((iParam0==815 || iParam0==824) || iParam0==825) || iParam0==826) || iParam0==827) || iParam0==828) || iParam0==849){
return 1;
}
return 0;
}


void func_122(var uParam0, char* sParam1, int iParam2){
int iVar0;
int iVar1;
if(func_137(uParam0->f_44)){
MemCopy(sParam1,{
Global_2097157.f_355
}
, 16);
sParam1->f_32={
Global_2097157.f_361 
};
MemCopy(&(sParam1->f_16),{
Global_2097157.f_349
}
, 16);
}else{
StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
sParam1->f_32={
func_139(PLAYER::PLAYER_ID()) 
};
}
sParam1->f_59=iParam2;
if(func_121(uParam0->f_44)){
iVar0=Global_2097157.f_211.f_36[Global_2097536.f_2709];
if(iVar0==1){
sParam1->f_58=1;
}else{
sParam1->f_58=0;
}}
sParam1->f_74=1;
iVar1=0;
while (iVar1 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, Global_2097536.f_2710[iVar1])){
sParam1->f_67[iVar1]=Global_2097157.f_211.f_36[Global_2097536.f_2710[iVar1]];
}else{
sParam1->f_60[iVar1]=Global_2097157.f_211.f_3[Global_2097536.f_2710[iVar1]];
}
iVar1++;
}}


void func_123(var uParam0){
int iVar0;
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
StringCopy(&(uParam0->f_13), "", 24);
uParam0->f_19=0;
iVar0=0;
while (iVar0 < 4){
StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
iVar0++;
}
uParam0->f_85=0;
StringCopy(&(uParam0->f_86), "", 32);
StringCopy(&(uParam0->f_94), "", 8);
uParam0->f_96=0;
uParam0->f_97=0;
}


void func_124(var uParam0, var uParam1){
*uParam0=*uParam1;
uParam0->f_1=uParam1->f_1;
uParam0->f_2=0;
}

int func_125(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8){
var uVar0;
var uVar1;
uVar0=Global_2097157.f_211.f_36[0];
uVar1=Global_2097157.f_211.f_3[0];
if(bParam6){
uVar0=iParam7;
uVar1=iParam8;
}
switch (*uParam0){
case 0:
if(!func_118() && !func_117()){
func_116(*uParam2);
if(bParam5){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3)){
*uParam0++;
}
else{
*uParam1=0;
*uParam0=3;
}}elseif(STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}elseif(STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}

int func_126(){
if(Global_2097532 && Global_2097533){
return 1;
}
return 0;
}

int func_127(var uParam0){
struct<20> Var0;
struct<6> Var1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
bool bVar8;
bool bVar9;
struct<13> Var10;
Var0.f_19.f_1=4;
iVar4=-1;
bVar9=true;
Var10={
func_139(PLAYER::PLAYER_ID()) 
};
switch ((*uParam0)[1]){
case 0:
iVar3=NETWORK::NETWORK_GET_FRIEND_COUNT();
Global_2097536.f_2775[1]=-1;
Global_2097157.f_374=-1;
Global_2097536.f_2704[bVar9]=0;
if(iVar3 > 0){
if(func_126()){
bVar8=false;
}else{
bVar8=true;
}
if(func_128(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100)){
func_124(&Var1, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var1)){
if(func_126()){
iVar6=0;
iVar6=0;
while (iVar6 < Var1.f_3){
if(iVar4 < 0){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar6, &Var0);
if(func_137(uParam0->f_44)){
if(Global_2097157.f_374 < 0){
if(func_82(&Var0, &(Global_2097157.f_361))){
Global_2097157.f_374=Var0.f_96;
}
}
}
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(Global_2097157.f_211.f_36[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar6, 0)){
iVar4=iVar6;
}
}
elseif(Global_2097157.f_211.f_3[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar6, 0)){
iVar4=iVar6;
}
func_123(&Var0);
}
iVar6++;
}
if(iVar4 < 0){
iVar4=Var1.f_3;
}
}
iVar6=0;
if(func_126() && iVar4==0){
if(Global_2097536.f_2704[bVar9] < 11){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
Global_2097536.f_2775[bVar9]=0;
Global_2097536.f_2704[bVar9]++;
}
}
if(Var1.f_3 > 0){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var0);
if(func_126() && (func_82(&Var0, &Var10) || func_82(&Var0, &(Global_2097157.f_361)))){
}elseif(func_83(Var0) && Global_2097536.f_2704[bVar9] < 11){
if(func_82(&Var0, &Var10)){
iVar4=0;
Global_2097536.f_2775[1]=0;
}
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_32={
Var0 
};
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_59=1;
if(func_121(uParam0->f_44)){
iVar7=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar7==1){
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=1;
}
else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_58=0;
}}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_74=1;
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_67[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar2]);
}
else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[bVar9] /*75*/].f_60[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar2]);
}
iVar2++;
}
Global_2097536.f_2704[1]++;
}else{
func_123(&Var0);
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
if(Global_2097536.f_2775[bVar9]==-1 && func_126()){
if(Global_2097536.f_2704[bVar9] >=1){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
}
else{
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
}
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}
return 0;
}
func_123(&Var0);
}
else{
Global_2097536.f_2704[1]=0;
func_123(&Var0);
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
if(Global_2097536.f_2775[bVar9]==-1 && func_126()){
if(Global_2097536.f_2704[bVar9] >=1){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
}else{
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
}
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}
(*uParam0)[1]=1;
return 0;
}
if(!func_126()){
iVar4=Var1.f_5;
}
if(iVar4 > 6){
iVar5=(iVar4 - 6);
}
else{
iVar5=1;
}
iVar6=iVar5;
iVar6=iVar5;
while (iVar6 <=(Var1.f_3 - 1)){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar6, &Var0);
if(Global_2097536.f_2704[bVar9] < 11 && Var0.f_96 > 1){
if(func_126() && iVar4==iVar6){
if(!func_82(&(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32), &Var10)){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Var0.f_96);
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59=iVar6 + 1;
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}}
if(func_126() && (func_82(&Var0, &Var10) || func_82(&Var0, &(Global_2097157.f_361)))){
}elseif(Global_2097536.f_2704[1] < 12){
if(func_83(Var0) && !func_82(&Var0, &(Global_2097536[bVar9 /*901*/][0 /*75*/].f_32))){
if(func_82(&Var0, &Var10)){
if(Global_2097536.f_2775[1] < 0){
Global_2097536.f_2775[1]=Global_2097536.f_2704[1];
}
}
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/]),{
Var0.f_13
}
, 16);
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_32={
Var0 
};
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_59=iVar6 + 1;
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_74=1;
if(func_121(uParam0->f_44)){
iVar7=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar6, Global_2097536.f_2709);
if(iVar7==1){
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58=1;
}else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_16),{
Var0.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_67[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar6, Global_2097536.f_2710[iVar2]);
}else{
Global_2097536[1 /*901*/][Global_2097536.f_2704[1] /*75*/].f_60[iVar2]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar6, Global_2097536.f_2710[iVar2]);
}
iVar2++;
}
Global_2097536.f_2704[1]++;
}}}
func_123(&Var0);
iVar6++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
(*uParam0)[1]=1;
if(Global_2097536.f_2775[bVar9]==-1 && func_126()){
if(Global_2097536.f_2704[bVar9] >=1){
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), Global_2097536[bVar9 /*901*/][(Global_2097536.f_2704[bVar9] - 1) /*75*/].f_59 + 1);
}else{
func_122(uParam0, &(Global_2097536[bVar9 /*901*/][Global_2097536.f_2704[bVar9] /*75*/]), 1);
}
Global_2097536.f_2775[bVar9]=Global_2097536.f_2704[bVar9];
Global_2097536.f_2704[bVar9]++;
}
return 0;
}else{
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
MISC::SET_BIT(&(Global_2097536.f_2832), true);
return 0;
}}}else{
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
return 0;
}
break;
case 1:
func_114(bVar9, Global_2097157.f_374);
(*uParam0)[1]=2;
break;
case 2:
return 1;
break;
}
return 0;
}

int func_128(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7){
switch (*uParam0){
case 0:
if(!func_118() && !func_117()){
func_116(*uParam2);
if(leaderboards2_read_friends_by_row(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7)){
*uParam0++;
}else{
*uParam1=0;
*uParam0=3;
}}
break;
case 1:
if(!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1)){
*uParam0++;
}
break;
case 2:
if(STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0)){
*uParam1=1;
*uParam0++;
}else{
*uParam1=0;
*uParam0++;
}
break;
case 3:
return 1;
break;
}
return 0;
}

int func_129(var uParam0){
struct<13> Var0;
struct<97> Var1;
struct<6> Var2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
bool bVar10;
bool bVar11;
int iVar12;
Var1.f_19.f_1=4;
iVar6=-1;
bVar10=false;
Var0={
func_139(PLAYER::PLAYER_ID()) 
};
switch ((*uParam0)[bVar10]){
case 0:
Global_2097536.f_2775[bVar10]=-1;
Global_2097536.f_2704[bVar10]=0;
Global_2097157.f_374=-1;
Global_2097533=0;
if(func_130(uParam0->f_44)){
if(!Global_2097533){
Global_2097533=1;
}}elseif(Global_2097533){
Global_2097533=0;
}
if(!Global_2097533){
}
if(func_125(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_126(), 0, 0, 0)){
func_124(&Var2, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var2)){
if(Var2.f_3 > 0){
iVar8=0;
iVar3=0;
if(func_126()){
iVar8=0;
while (iVar8 < Var2.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar8, &Var1);
if(Global_2097157.f_374 < 0){
if(func_82(&Var1, &Var0) || func_82(&Var1, &(Global_2097157.f_361))){
Global_2097157.f_374=Var1.f_96;
}}
if(iVar6 < 0){
if(MISC::IS_BIT_SET(Global_2097157.f_142.f_2, 0)){
if(Global_2097157.f_211.f_36[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar8, 0)){
iVar6=iVar8;
}
}
elseif(Global_2097157.f_211.f_3[0] >=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar8, 0)){
iVar6=iVar8;
}}
func_123(&Var1);
iVar8++;
}
if(iVar6 < 0){
iVar6=Var2.f_3;
}
}
iVar8=0;
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var1);
if(Var1.f_96 <=1){
if(Global_2097536.f_2704[bVar10] < 11){
if(func_126() && iVar6==0){
func_122(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Var1.f_96);
Global_2097536.f_2775[bVar10]=0;
Global_2097536.f_2704[bVar10]++;
}
if(func_126() && (func_82(&Var1, &Var0) || func_82(&Var1, &(Global_2097157.f_361)))){
}else{
if(func_82(&Var1, &Var0)){
iVar6=0;
Global_2097536.f_2775[bVar10]=0;
}
MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32={
Var1 
};
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59=Var1.f_96;
if(func_121(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58=1;
}
else{
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74=1;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2710[iVar3]);
}
else{
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(0, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
Global_2097536.f_2704[bVar10]++;
}
bVar9=true;
}
}
if(!bVar9){
Global_2097536.f_2704[bVar10]++;
}
if(!func_126()){
iVar6=Var2.f_5;
}
if(iVar6 > 6){
iVar7=(iVar6 - 6);
}
elseif(bVar9){
iVar7=1;
}
else{
iVar7=0;
}
iVar8=iVar7;
func_123(&Var1);
iVar8=iVar7;
while (iVar8 <=(Var2.f_3 - 1)){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar8, &Var1);
if(Global_2097536.f_2704[bVar10] < 11 && Var1.f_96 > 1){
if(func_126() && iVar6==iVar8){
if(!func_82(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_32), &Var1)){
func_122(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Var1.f_96);
Global_2097536.f_2775[bVar10]=Global_2097536.f_2704[bVar10];
Global_2097536.f_2704[bVar10]++;
}}
if(func_126() && (func_82(&Var1, &Var0) || func_82(&Var1, &(Global_2097157.f_361)))){
}elseif(Global_2097536.f_2704[bVar10] < 11){
if(func_83(Var1) && !func_82(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_32), &Var1)){
if(func_82(&Var1, &Var0)){
if(Global_2097536.f_2775[bVar10] < 0){
Global_2097536.f_2775[bVar10]=Global_2097536.f_2704[bVar10];
}
}
MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32={
Var1 
};
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59=Var1.f_96;
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74=1;
if(func_121(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar8, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58=1;
}else{
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
iVar3=0;
iVar3=0;
while (iVar3 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar3])){
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar8, Global_2097536.f_2710[iVar3]);
}else{
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar3]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar8, Global_2097536.f_2710[iVar3]);
}
iVar3++;
}
Global_2097536.f_2704[bVar10]++;
}}}
func_123(&Var1);
iVar8++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
if(bVar9){
if(Global_2097536.f_2775[bVar10]==-1 && func_126()){
if(Global_2097536.f_2704[bVar10] >=1){
func_122(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Global_2097536[bVar10 /*901*/][(Global_2097536.f_2704[bVar10] - 1) /*75*/].f_59 + 1);
}else{
func_122(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), 1);
}
Global_2097536.f_2775[bVar10]=Global_2097536.f_2704[bVar10];
Global_2097536.f_2704[bVar10]++;
}
(*uParam0)[bVar10]=2;
}
else{
(*uParam0)[bVar10]=1;
}}else{
if(!bVar9){
Global_2097536.f_2704[bVar10]++;
}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[bVar10]=-1;
(*uParam0)[bVar10]=1;
}}else{
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2775[bVar10]=-1;
(*uParam0)[bVar10]=1;
MISC::SET_BIT(&(Global_2097536.f_2832), bVar10);
}}
break;
case 1:
if(Global_2097536.f_2775[bVar10]==-1){
iVar12=11;
}else{
iVar12=1;
}
if(func_115(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12)){
func_124(&Var2, &(uParam0->f_44));
if(uParam0->f_5 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var2)){
if(Var2.f_3 > 0){
iVar3=0;
while (iVar3 < Var2.f_3){
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(iVar3, &Var1);
if(func_126() && (func_82(&Var1, &Var0) || func_82(&Var1, &(Global_2097157.f_361)))){
}else{
bVar11=false;
if(Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_2097536[bVar10 /*901*/][0 /*75*/].f_59 <=0){
bVar11=true;
}
if(Global_2097536.f_2704[bVar10] < 11 || bVar11){
if(iVar3==0 || bVar11){
MemCopy(&(Global_2097536[bVar10 /*901*/][0 /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[bVar10 /*901*/][0 /*75*/].f_32={
Var1 
};
Global_2097536[bVar10 /*901*/][0 /*75*/].f_59=Var1.f_96;
if(func_121(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[bVar10 /*901*/][0 /*75*/].f_58=1;
}else{
Global_2097536[bVar10 /*901*/][0 /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar10 /*901*/][0 /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[bVar10 /*901*/][0 /*75*/].f_74=1;
iVar4=0;
iVar4=0;
while (iVar4 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar4])){
Global_2097536[bVar10 /*901*/][iVar3 /*75*/].f_67[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar3, Global_2097536.f_2710[iVar4]);
}else{
Global_2097536[bVar10 /*901*/][iVar3 /*75*/].f_60[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar3, Global_2097536.f_2710[iVar4]);
}
iVar4++;
}
if(Global_2097536.f_2704[bVar10]==0){
if(bVar11){
}else{
Global_2097536.f_2704[bVar10]++;
}
}
elseif(Global_2097536.f_2704[bVar10]==1 && Global_2097536.f_2775[bVar10]==-1){
Global_2097536.f_2704[bVar10]++;
}
}
elseif(Global_2097536.f_2704[bVar10] < 11){
MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]),{
Var1.f_13
}
, 16);
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_32={
Var1 
};
if(func_121(uParam0->f_44)){
iVar5=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar3, Global_2097536.f_2709);
if(iVar5==1){
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58=1;
}else{
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_58=0;
}
}
if(func_137(uParam0->f_44)){
MemCopy(&(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_16),{
Var1.f_19.f_1[1 /*16*/].f_8
}
, 16);
}
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_59=Var1.f_96;
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_74=1;
iVar4=0;
iVar4=0;
while (iVar4 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar4])){
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_67[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(iVar3, Global_2097536.f_2710[iVar4]);
}else{
Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/].f_60[iVar4]=STATS::LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(iVar3, Global_2097536.f_2710[iVar4]);
}
iVar4++;
}
if(iVar3 !=0){
Global_2097536.f_2704[bVar10]++;
}
}}}
func_123(&Var1);
iVar3++;
}}
STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
(*uParam0)[bVar10]=2;
}else{
MISC::SET_BIT(&(Global_2097536.f_2832), bVar10);
func_120(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
Global_2097536.f_2704[bVar10]=0;
(*uParam0)[bVar10]=2;
Global_2097536.f_2704[1]=0;
(*uParam0)[1]=1;
Global_2097536.f_2704[2]=0;
(*uParam0)[2]=3;
}}
if(Global_2097536.f_2775[bVar10]==-1 && func_126()){
if(Global_2097536.f_2704[bVar10] >=1){
func_122(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), Global_2097536[bVar10 /*901*/][(Global_2097536.f_2704[bVar10] - 1) /*75*/].f_59 + 1);
}else{
func_122(uParam0, &(Global_2097536[bVar10 /*901*/][Global_2097536.f_2704[bVar10] /*75*/]), 1);
}
Global_2097536.f_2775[bVar10]=Global_2097536.f_2704[bVar10];
Global_2097536.f_2704[bVar10]++;
}
break;
case 2:
func_114(bVar10, Global_2097157.f_374);
(*uParam0)[bVar10]=3;
break;
case 3:
return 1;
break;
}
return 0;
}

int func_130(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65){
int iVar0;
if(Global_2097532){
if(Global_2097157.f_5 !=0){
if(Global_2097157.f_5==Param0.f_0){
if(Global_2097157.f_5.f_2==Param0.f_3){
iVar0=0;
while (iVar0 < Param0.f_3){
if(!MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8))){
return 0;
}
iVar0++;
}
return 1;
}}}}
return 0;
}


void func_131(var uParam0){
int iVar0;
if(STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_2097536.f_2826)){
iVar0=STATS::LEADERBOARDS_GET_CACHE_TIME(Global_2097536.f_2826);
if(iVar0 < 300000){
MISC::SET_BIT(&(uParam0->f_42), 5);
}else{
MISC::CLEAR_BIT(&(uParam0->f_42), 5);
func_97(Global_2097536.f_2826, -1);
}}}


bool func_132(var uParam0){
return uParam0->f_1;
}


void func_133(var uParam0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0)){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
}}


void func_134(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
char* sVar0;
struct<2> Var1;
struct<16> Var2;
bool bVar3;
struct<13> Var4;
bool bVar5;
struct<13> Var6;
bool bVar7;
sVar0="";
if(MISC::IS_BIT_SET(bParam2, 4)){
sVar0="SCLB_GLOBAL";
}elseif(MISC::IS_BIT_SET(bParam2, 5)){
*bParam1++;
sVar0="SCLB_FRIENDS";
}elseif(MISC::IS_BIT_SET(bParam2, 6)){
*bParam1++;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if((func_104() || func_103()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
sVar0="SCLB_CREW";
}else{
Var4={
func_139(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1))){
sVar0="STRING";
Var2={
Var1.f_1 
};
bVar3=true;
}else{
sVar0="SCLB_CREW";
}}else{
sVar0="SCLB_CREW";
}}}else{
sVar0="SCLB_CREW";
}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam2);
if(bVar3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*bParam1++;
if(bParam4){
bVar5=false;
MISC::SET_BIT(&bVar5, 7);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar5);
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
sVar0="SCLB_NOT_ONL";
}elseif(!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
sVar0="SCLB_NO_ROS";
}elseif(Global_2097536.f_2832 !=0){
sVar0="SCLB_READ_FAIL";
}else{
sVar0="HUD_PERM";
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*bParam1++;
}elseif(bParam3){
if(MISC::IS_BIT_SET(bParam2, 4)){
sVar0="SCLB_NO_GLOBAL";
}elseif(MISC::IS_BIT_SET(bParam2, 5)){
if(NETWORK::NETWORK_GET_FRIEND_COUNT() > 0){
sVar0="SCLB_NO_FRNDS";
}else{
sVar0="SCLB_NO_FRNDSb";
}}elseif(MISC::IS_BIT_SET(bParam2, 6)){
if(NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
if(NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT()){
if(NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()){
if((func_104() || func_103()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
sVar0="SCLB_NO_CREWc";
}
else{
Var6={
func_139(PLAYER::PLAYER_ID()) 
};
if(NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6)){
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1))){
sVar0="SCLB_NO_CREWb";
Var2={
Var1.f_1 
};
bVar3=true;
}else{
sVar0="SCLB_NO_CREWc";
}}else{
sVar0="SCLB_NO_CREWa";
}
}}else{
sVar0="SCLB_NO_CREWa";
}}else{
sVar0="SCLB_NO_CREWe";
}}else{
sVar0="SCLB_NO_CREWd";
}}
bVar7=false;
MISC::SET_BIT(&bVar7, 7);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*bParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar7);
if(bVar3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*bParam1++;
}}


void func_135(var uParam0, char* sParam1, var uParam2, int iParam3){
int iVar0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
iVar0=0;
while (iVar0 < iParam3){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
iVar0++;
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_136(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_MULTIPLAYER_TITLE");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
}
if(iParam5==-1){
if(bParam4){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
}}else{
if(bParam4){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
}
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_137(int iParam0){
if(iParam0==825 || iParam0==828){
return 1;
}
return 0;
}


void func_138(var uParam0, bool bParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
struct<13> func_139(int iParam0){
struct<13> Var0;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
return Var0;
}

int func_140(){
return GRAPHICS::REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}


bool func_141(){
return func_142(PLAYER::PLAYER_ID());
}

int func_142(int iParam0){
switch (func_143(iParam0)){
case 0:
case 1:
case 2:
case 3:
case 4:
case 6:
case 5:
case 7:
case 42:
case 37:
case 40:
case 43:
return 0;
default:
}
return 1;
}

int func_143(int iParam0){
return Global_1853910[iParam0 /*862*/].f_192;
}


void func_144(int iParam0){
Global_1577898=iParam0;
}


void func_145(bool bParam0){
if(bParam0){
func_154();
}
func_146(4, -1);
func_146(6, -1);
func_146(7, -1);
func_146(3, -1);
func_146(1, -1);
func_146(2, -1);
func_146(11, -1);
func_146(13, -1);
func_146(14, -1);
func_146(16, -1);
}


void func_146(bool bParam0, int iParam1){
MISC::SET_BIT(&(Global_1653913.f_1047), bParam0);
switch (bParam0){
case 5:
if(iParam1 > -1){
Global_1653913.f_170[iParam1]=1;
}
break;
}}


void func_147(int iParam0){
if(func_153()){
return;
}
if(!Global_20383.f_1==1){
if(func_152(0)){
func_148(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_148(int iParam0){
if(func_153()){
return;
}
if(Global_20584){
if(func_151()){
func_150(1, 1);
}else{
func_150(0, 0);
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
if(!func_149()){
Global_20383.f_1=3;
}}

int func_149(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_150(bool bParam0, bool bParam1){
if(bParam0){
if(func_152(0)){
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


bool func_151(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_152(int iParam0){
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


bool func_153(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_154(){
Global_2793046.f_4629=0;
}


void func_155(var uParam0, bool bParam1, bool bParam2){
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


void func_156(){
func_157(&uLocal_234, 11, "", "", -1, -1, 0, 0);
}


void func_157(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7){
struct<8> Var0;
struct<8> Var1;
int iVar2;
struct<6> Var3;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam2)){
StringCopy(&Var0, sParam2, 32);
}
if(bParam7){}
Global_2097536.f_2769=0;
Global_2097536.f_2770=0;
Global_2097536.f_2768=0;
switch (iParam1){
case 2:
if(iParam4==0){
if(iParam5 > 0 && !func_166()){
uParam0->f_44=826;
}else{
uParam0->f_44=815;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_166()){
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
}}else{
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
}
Global_2097536.f_2780.f_26=-1;
}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_166()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==1){
if(iParam5 > 0 && !func_166()){
uParam0->f_44=827;
}else{
uParam0->f_44=824;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_166()){
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
}}else{
Global_2097536.f_2780.f_26=-1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_GRCE_NN", 32);
}}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_166()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=6;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=5;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
Global_2097536.f_2709=6;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==2){
if(iParam5 > 0 && !func_166()){
uParam0->f_44=828;
}else{
uParam0->f_44=825;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(!bParam6){
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
}else{
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var3);
MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8),{
Var3
}
, 8);
Global_2097536.f_2780.f_27=1;
}
if(iParam5 > 0 && !func_166()){
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[2 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
}}else{
Global_2097536.f_2780.f_26=-1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RRCE_NN", 32);
}}
if(iParam5 <=0 || func_166()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
Global_2097536.f_2709=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==10 || iParam4==11){
if(iParam5 > 0 && !func_166()){
uParam0->f_44=928;
}else{
uParam0->f_44=849;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_166()){
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
StringCopy(&Var1, "", 32);
StringIntConCat(&Var1, iParam5, 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var1 
};
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
}}else{
Global_2097536.f_2780.f_26=-1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_FRCE_NN", 32);
}}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_166()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=0;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=0;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=5;
}
Global_2097536.f_2779=0;
}elseif(iParam4==3){
if(iParam5 > 0 && !func_166()){
uParam0->f_44=(998 + (iParam5 - 1));
}else{
uParam0->f_44=975;
}
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
if(iParam5 > 0 && !func_166()){
Global_2097536.f_2780.f_26=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_L1", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}
else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_LM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}}elseif(iParam5==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
}}else{
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_RCE_NN", 32);
}
Global_2097536.f_2780.f_26=-1;
}
Global_2097536.f_2780=1;
if(iParam5 <=0 || func_166()){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780.f_29[3]=5;
}
Global_2097536.f_2779=0;
}
break;
case 1:
if(iParam4==0 || iParam4==3){
uParam0->f_44=762;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(iParam4==3){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_KOTH_NN", 32);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_DM_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=6;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2710[4]=1;
Global_2097536.f_2710[5]=2;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
}elseif(iParam4==1 || iParam4==4){
uParam0->f_44=822;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(iParam4==4){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TKOTH_NN", 32);
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_TDM_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=6;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2710[4]=1;
Global_2097536.f_2710[5]=2;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
}elseif(iParam4==2){
uParam0->f_44=823;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_VEHDM_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=6;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2710[4]=1;
Global_2097536.f_2710[5]=2;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
}
break;
case 11:
uParam0->f_44=193;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=7;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 94:
uParam0->f_44=193;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_GOLF", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=7;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 92:
uParam0->f_44=811;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_HUNTING", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "CMSW", 64);
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=0;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=4;
Global_2097536.f_2710[4]=6;
Global_2097536.f_2708=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=6;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=6;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
break;
case 15:
uParam0->f_44=749;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_ARM", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=4;
Global_2097536.f_2780.f_29[3]=5;
break;
case 14:
uParam0->f_44=190;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
if(iParam4==-1){
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
}else{
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
}
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_DARTS", 32);
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=7;
Global_2097536.f_2710[2]=5;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 12:
uParam0->f_44=283;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
if(MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_TENNIS", 64);
StringIntConCat(&(Global_2097536.f_2780.f_9), iParam4 + 1, 64);
}
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=9;
Global_2097536.f_2710[2]=7;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=2;
Global_2097536.f_2708=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
break;
case 87:
uParam0->f_44=283;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TENNIS", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=9;
Global_2097536.f_2710[2]=7;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=2;
Global_2097536.f_2708=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
break;
case 13:
uParam0->f_44=912;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=2;
switch (iParam4){
case 0:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
break;
case 1:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEb", 32);
break;
case 2:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEc", 32);
break;
default:
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGEa", 32);
break;
}
switch (iParam5){
case 0:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
break;
case 1:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SMG", 64);
break;
case 2:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_ASSAULT", 64);
break;
case 3:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
break;
case 4:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_LMG", 64);
break;
case 5:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_HEAVY", 64);
break;
default:
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
StringCopy(&(Global_2097536.f_2780.f_9), "HUD_MG_PISTOL", 64);
break;
}
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_HITS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_ACC", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=1;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=4;
break;
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
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
case 206:
case 207:
case 208:
case 209:
uParam0->f_44=203;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_RANGE", 32);
MemCopy(&(Global_2097536.f_2780.f_9),{
func_165(iParam1)
}
, 16);
Global_2097536.f_2780.f_25=0;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=7;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=8;
break;
case 69:
case 71:
case 70:
uParam0->f_44=202;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "HUD_MG_TRI", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
Global_2097536.f_2780.f_25=0;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=0;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=0;
Global_2097536.f_2780.f_29[3]=0;
break;
case 80:
uParam0->f_44=817;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var0 
};
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
Global_2097536.f_2780.f_25=0;
Global_2097536.f_2780=1;
StringCopy(&(Global_2097536.f_2780.f_1), "OFFR_TITLE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
Global_2097536.f_2710[0]=3;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=1;
break;
case 3:
uParam0->f_44=791;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HRD_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 0:
if(iParam4==7 || iParam4==1){
uParam0->f_44=1200;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(iParam4==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTP", 32);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}elseif(iParam4==1){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEIST_NN", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_HEISTPNN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=4;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=6;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
Global_2097536.f_2780.f_28=6;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=11;
Global_2097536.f_2780.f_29[2]=4;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
}elseif(Global_4718592.f_1221==1){
uParam0->f_44=777;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}elseif(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
}else{
uParam0->f_44=780;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
if(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS", 32);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}elseif(Global_4718592.f_2==5){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_LTS_NN", 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
if(func_164(Global_4718592.f_166301) || func_161(Global_4718592.f_166301)){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
}elseif(func_160(Global_4718592.f_166301)){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=0;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
}}
break;
case 8:
uParam0->f_44=795;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
MISC::SET_BIT(&(Global_2097536.f_2768), true);
Global_2097536.f_2754[1]=-1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=11;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 85:
uParam0->f_44=274;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_BJ_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_CASH", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
break;
case 122:
switch (iParam4){
case 0:
case 9:
case 4:
case 8:
switch (iParam4){
case 0:
uParam0->f_44=965;
break;
case 9:
uParam0->f_44=966;
break;
case 4:
uParam0->f_44=967;
break;
case 8:
uParam0->f_44=968;
break;
}
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 1:
case 2:
case 3:
switch (iParam4){
case 1:
uParam0->f_44=969;
break;
case 2:
uParam0->f_44=970;
break;
case 3:
uParam0->f_44=973;
break;
}
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 7:
uParam0->f_44=971;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=1;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 6:
case 5:
switch (iParam4){
case 6:
uParam0->f_44=972;
break;
case 5:
uParam0->f_44=974;
break;
}
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=3;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=1;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=12;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
}
break;
case 83:
uParam0->f_44=192;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_DIST", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2710[1]=5;
Global_2097536.f_2710[2]=4;
Global_2097536.f_2710[3]=3;
Global_2097536.f_2708=4;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=17;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 82:
uParam0->f_44=850;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=2;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_29[0]=10;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 84:
uParam0->f_44=820;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), "PS_TITLE", 32);
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_MIS_NN", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_ACC", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
StringCopy(&(Global_2097536.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=5;
Global_2097536.f_2710[4]=4;
Global_2097536.f_2710[5]=3;
Global_2097536.f_2708=6;
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[4]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[5]);
Global_2097536.f_2780.f_29[0]=4;
Global_2097536.f_2780.f_29[1]=9;
Global_2097536.f_2780.f_29[2]=4;
Global_2097536.f_2780.f_29[3]=5;
Global_2097536.f_2780.f_29[4]=5;
Global_2097536.f_2780.f_29[5]=5;
break;
case 86:
uParam0->f_44=817;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var0 
};
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
Global_2097536.f_2780=1;
Global_2097536.f_2780.f_25=0;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
StringCopy(&(Global_2097536.f_2780.f_1), sParam3, 32);
}else{
StringCopy(&(Global_2097536.f_2780.f_1), "SPR_TITLE", 32);
}
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
Global_2097536.f_2710[0]=2;
Global_2097536.f_2708=1;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=1;
break;
case 91:
uParam0->f_44=817;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=3;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
Global_2097536.f_2780=1;
if(iParam5 <=0){
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=3;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=1;
Global_2097536.f_2710[3]=0;
Global_2097536.f_2709=6;
Global_2097536.f_2708=2;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=3;
}else{
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "", 24);
Global_2097536.f_2710[0]=3;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=4;
Global_2097536.f_2710[3]=1;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=1;
Global_2097536.f_2780.f_29[1]=1;
Global_2097536.f_2780.f_29[2]=3;
}
Global_2097536.f_2779=0;
switch (iParam4){
case 0:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 1:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 2:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 3:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_5", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 4:
StringCopy(&(Global_2097536.f_2780.f_1), "MGCR_6", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
break;
case 5:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
case 6:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
case 7:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_3", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
case 8:
StringCopy(&(Global_2097536.f_2780.f_1), "MGSR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
break;
default:
break;
}
break;
case 888:
uParam0->f_44=1201;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=2;
Global_2097536.f_2710[3]=3;
MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8),{
func_159(iParam4)
}
, 8);
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
switch (iParam4){
case 1:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
Global_2097536.f_2780.f_29[3]=9;
break;
case 2:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CARN", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
break;
case 3:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
break;
case 4:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_WRECK", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
break;
case 5:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
break;
case 6:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
break;
case 7:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
break;
case 8:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_HOTB", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
Global_2097536.f_2780.f_29[3]=9;
break;
case 9:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_TAGT", 32);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
break;
}
Global_2097536.f_2780=1;
Global_2097536.f_2708=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=5;
break;
case 889:
uParam0->f_44=1202;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_ARN_CAREER", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
StringCopy(&(Global_2097536.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=1;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2710[3]=4;
Global_2097536.f_2780=1;
Global_2097536.f_2708=4;
Global_2097536.f_2780.f_28=5;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[3]);
Global_2097536.f_2780.f_28=5;
Global_2097536.f_2780.f_29[0]=5;
Global_2097536.f_2780.f_29[1]=4;
Global_2097536.f_2780.f_29[2]=5;
Global_2097536.f_2780.f_29[3]=21;
break;
case 890:
uParam0->f_44=1203;
uParam0->f_44.f_1=1;
uParam0->f_44.f_3=0;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_CCM_CAREER", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_CCMLVL", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_RACES", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=4;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2780=1;
Global_2097536.f_2708=3;
Global_2097536.f_2780.f_28=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::CLEAR_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=22;
Global_2097536.f_2780.f_29[1]=4;
Global_2097536.f_2780.f_29[2]=5;
break;
case 276:
uParam0->f_44=1204;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=1;
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&Var0, "TUNER_SANDB_SVAR", 32);
if(iParam4==2 || iParam4==3){
StringIntConCat(&Var0, 2, 32);
}else{
StringIntConCat(&Var0, iParam4, 32);
}
uParam0->f_44.f_3.f_1[0 /*16*/].f_8={
Var0 
};
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2709=4;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2708=3;
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=3;
switch (iParam4){
case 0:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_TT", 32);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=3;
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "", 24);
Global_2097536.f_2708=2;
Global_2097536.f_2780.f_28=3;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=3;
break;
case 1:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_CD", 32);
break;
case 2:
case 3:
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_HH1", 32);
break;
}
break;
case 278:
case 279:
uParam0->f_44=1204;
uParam0->f_44.f_1=5;
uParam0->f_44.f_3=2;
StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Mission", 32);
uParam0->f_44.f_3.f_1[1 /*16*/].f_8={
Var0 
};
if(iParam1==278){
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_SRS", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_SRS", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
}else{
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "TUNER_PS", 32);
StringCopy(&(Global_2097536.f_2780.f_1), "SCLB_T_PURS", 32);
StringCopy(&(Global_2097536.f_2717[0 /*6*/]), "SCLB_C_BESTT", 24);
}
StringCopy(&(Global_2097536.f_2780.f_9), sParam3, 64);
StringCopy(&(Global_2097536.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
StringCopy(&(Global_2097536.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
Global_2097536.f_2710[0]=0;
Global_2097536.f_2710[1]=2;
Global_2097536.f_2710[2]=3;
Global_2097536.f_2709=4;
Global_2097536.f_2708=3;
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[0]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[1]);
MISC::SET_BIT(&(Global_2097536.f_2769), Global_2097536.f_2710[2]);
Global_2097536.f_2780.f_28=4;
Global_2097536.f_2780.f_29[0]=2;
Global_2097536.f_2780.f_29[1]=5;
Global_2097536.f_2780.f_29[2]=3;
Global_2097536.f_2780=1;
break;
}
iVar2=0;
iVar2=0;
while (iVar2 < Global_2097536.f_2708){
if(MISC::IS_BIT_SET(Global_2097536.f_2769, Global_2097536.f_2710[iVar2])){
MISC::SET_BIT(&(Global_2097536.f_2770), iVar2);
}
bVar2++;
}
Global_2097536.f_2826=func_158(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_158(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5){
char cVar0[64];
MemCopy(&cVar0,{
Param0
}
, 16);
StringIntConCat(&cVar0, iParam1, 64);
StringConCat(&cVar0, "_", 64);
if(func_137(iParam1)){
if(bParam5){
StringConCat(&cVar0, "CoDri", 64);
}else{
StringConCat(&cVar0, "Dri", 64);
}
StringConCat(&cVar0, "_", 64);
}
StringIntConCat(&cVar0, iParam2, 64);
StringConCat(&cVar0, "_", 64);
StringIntConCat(&cVar0, iParam3, 64);
StringConCat(&cVar0, "_", 64);
StringIntConCat(&cVar0, iParam4, 64);
return MISC::GET_HASH_KEY(&cVar0);
}


struct<6> func_159(int iParam0){
struct<6> Var0;
switch (iParam0){
case 1:
StringCopy(&Var0, "BuzzerBeater", 24);
break;
case 2:
StringCopy(&Var0, "Carnage", 24);
break;
case 3:
StringCopy(&Var0, "FlagWar", 24);
break;
case 4:
StringCopy(&Var0, "WreckIt", 24);
break;
case 5:
StringCopy(&Var0, "BombBall", 24);
break;
case 6:
StringCopy(&Var0, "GamesMasters", 24);
break;
case 7:
StringCopy(&Var0, "Monsters", 24);
break;
case 8:
StringCopy(&Var0, "HotBomb", 24);
break;
case 9:
StringCopy(&Var0, "TagTeam", 24);
break;
default:
break;
}
return Var0;
}


bool func_160(int iParam0){
return iParam0==74;
}


var func__161(int iParam0){
return (func_163(iParam0) || func_162(iParam0));
}


bool func_162(int iParam0){
return iParam0==44;
}


bool func_163(int iParam0){
return iParam0==45;
}


bool func_164(int iParam0){
return iParam0==12;
}


struct<6> func_165(int iParam0){
struct<6> Var0;
switch (iParam0){
case 38:
StringCopy(&Var0, "HUD_MG_RANGE0", 24);
break;
case 39:
StringCopy(&Var0, "HUD_MG_RANGE1", 24);
break;
case 40:
StringCopy(&Var0, "HUD_MG_RANGE2", 24);
break;
case 41:
StringCopy(&Var0, "HUD_MG_RANGE3", 24);
break;
case 42:
StringCopy(&Var0, "HUD_MG_RANGE4", 24);
break;
case 43:
StringCopy(&Var0, "HUD_MG_RANGE5", 24);
break;
case 44:
StringCopy(&Var0, "HUD_MG_RANGE6", 24);
break;
case 45:
StringCopy(&Var0, "HUD_MG_RANGE7", 24);
break;
case 46:
StringCopy(&Var0, "HUD_MG_RANGE8", 24);
break;
case 47:
StringCopy(&Var0, "HUD_MG_RANGE9", 24);
break;
case 48:
StringCopy(&Var0, "HUD_MG_RANGE10", 24);
break;
case 49:
StringCopy(&Var0, "HUD_MG_RANGE11", 24);
break;
case 50:
StringCopy(&Var0, "HUD_MG_RANGE12", 24);
break;
case 51:
StringCopy(&Var0, "HUD_MG_RANGE13", 24);
break;
case 52:
StringCopy(&Var0, "HUD_MG_RANGE14", 24);
break;
case 53:
StringCopy(&Var0, "HUD_MG_RANGE15", 24);
break;
case 54:
StringCopy(&Var0, "HUD_MG_RANGE16", 24);
break;
case 55:
StringCopy(&Var0, "HUD_MG_RANGE17", 24);
break;
case 206:
StringCopy(&Var0, "HUD_MG_RANGE18", 24);
break;
case 207:
StringCopy(&Var0, "HUD_MG_RANGE19", 24);
break;
case 208:
StringCopy(&Var0, "HUD_MG_RANGE20", 24);
break;
case 209:
StringCopy(&Var0, "HUD_MG_RANGE21", 24);
break;
}
return Var0;
}

int func_166(){
if((((((((((((Global_4718592.f_104427==1 || Global_4718592.f_104427==3) || Global_4718592.f_104427==5) || Global_4718592.f_104427==7) || Global_4718592.f_104427==19) || Global_4718592.f_104427==8) || Global_4718592.f_104427==9) || Global_4718592.f_104427==11) || Global_4718592.f_104427==13) || Global_4718592.f_104427==21) || Global_4718592.f_104427==23) || Global_4718592.f_104427==25) || Global_4718592.f_104427==26){
return 1;
}
return 0;
}


bool func_167(var uParam0, var uParam1){
return ((func_1645(uParam0)==4 && !func_877(uParam1, 262144)) && (PAD::IS_CONTROL_PRESSED(2, 227) || func_1933(uParam1, 16777216)));
}


void func_168(var uParam0, int iParam1){
struct<8> Var0;
StringCopy(&Var0, "", 64);
StringCopy(&Var0, "<C>", 64);
StringConCat(&Var0, "~HUD_COLOUR_WHITE~", 64);
StringConCat(&Var0, uParam0[iParam1 /*16*/], 64);
StringConCat(&Var0, "</C>", 64);
StringConCat(&Var0, "~s~", 64);
func_169("PARTNER_QUIT_MP", "PARTNER_QUIT_ST", &Var0, 2, 1);
}


void func_169(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4){
char* sVar0;
func_171(iParam3, &sVar0, &iLocal_167);
func_170(&iParam4, iParam3 !=1);
iLocal_165=MISC::GET_GAME_TIMER() + 4000;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_164[iLocal_167], &sVar0);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_170(var uParam0, bool bParam1){
if(*uParam0==12){
bLocal_169=true;
}elseif(*uParam0==6){
bLocal_169=6;
}else{
bLocal_169=2;
}
if(bParam1){
*uParam0=1;
}}


void func_171(int iParam0, char* sParam1, int iParam2){
*iParam2=0;
if(iParam0==1){
StringCopy(sParam1, "SHOW_CENTERED_MP_MESSAGE", 32);
}elseif(iParam0==2){
StringCopy(sParam1, "SHOW_SHARD_CENTERED_MP_MESSAGE", 32);
func_57(&uLocal_168, 2);
}elseif(iParam0==3){
StringCopy(sParam1, "SHOW_MIDSIZED_MESSAGE", 32);
*iParam2=1;
}elseif(iParam0==4){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
StringCopy(sParam1, "SHOW_COND_SHARD_MESSAGE", 32);
}else{
StringCopy(sParam1, "SHOW_SHARD_MIDSIZED_MESSAGE", 32);
}
*iParam2=1;
func_57(&uLocal_168, 2);
}else{
StringCopy(sParam1, "SHOW_MISSION_PASSED_MESSAGE", 32);
}}


bool func_172(var uParam0, int iParam1){
return (uParam0->f_22 && iParam1) !=0;
}


void func_173(var uParam0){
bool bVar0;
bVar0=uParam0->f_115;
if(!HUD::IS_MINIMAP_RENDERING()){
bVar0=(bVar0 - (bVar0 && 1));
}
if(bVar0 !=uParam0->f_116){
if(uParam0->f_115 & 1 !=0){
}
if(uParam0->f_115 & 2 !=0){
}
if(uParam0->f_115 & 4 !=0){
}
if(uParam0->f_115 & 8 !=0){
}
if(uParam0->f_115 & 16 !=0){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DISPLAY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DISPLAY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
uParam0->f_116=bVar0;
}}


bool func_174(){
return iLocal_165 > MISC::GET_GAME_TIMER();
}

int func_175(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, var uParam11){
char* sVar0;
char* sVar1;
char* sVar2;
bool bVar3;
char cVar4[64];
char cVar5[128];
int iVar6;
int iVar7;
int iVar8;
char* sVar9;
char[] cVar10[8];
func_698(0);
sVar0="GOLF_END_SCREEN";
sVar1="GOLF_END_WINNER_SCREEN";
sVar2="HUD_COLOUR_BLACK";
bVar3=false;
StringCopy(&cVar4, "", 64);
StringCopy(&cVar5, "", 64);
iVar7=0;
if(MISC::IS_MINIGAME_IN_PROGRESS()){
MISC::SET_MINIGAME_IN_PROGRESS(0);
}
HUD::SET_FRONTEND_ACTIVE(0);
if(iParam8 > -1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam8))){
iVar7=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam8));
iVar8=PLAYER::GET_PLAYER_PED(iVar7);
StringCopy(&cVar4, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam8))), 64);
cVar5={
func_697(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam8))) 
};
}}
func_696(uParam0, &sVar9, &cVar10, PED::IS_PED_MALE(iVar8));
STREAMING::REQUEST_ANIM_DICT(&sVar9);
switch (uParam0->f_436){
case 0:
if(bParam10){
if(func_689(uParam0)){
AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
func_687(1, 1, 1, 0, 0, 0, 0);
func_686(uParam0, 0.25f, 0.25f, 0.25f);
uParam0->f_419=MISC::GET_GAME_TIMER() + 300;
uParam0->f_436=2;
}}elseif(func_682(uParam0, uParam1, &bVar3, 0, 0)){
if(bVar3){
CAM::SET_CAM_ACTIVE(*uParam1, 1);
}
func_680(uParam0, sVar0, sVar2, 1, 0);
uParam0->f_419=MISC::GET_GAME_TIMER() + 6000;
iLocal_170=MISC::GET_GAME_TIMER() + 1000;
func_679(iParam3, 1);
if(bParam4){
func_678(uParam0, sVar0, iParam3, "CELEB_YOU_TIED");
}else{
func_678(uParam0, sVar0, iParam3, 0);
}
if(iParam5 > 0){
func_677(uParam0, sVar0, iParam5, *uParam2, uParam2->f_3, uParam2->f_4, uParam2->f_1, uParam2->f_2);
uParam0->f_419 +=2333;
if((*uParam2 + iParam5) > uParam2->f_4){
uParam0->f_419 +=2333;
}}
func_675(uParam0, sVar0, -1, 0);
uParam0->f_436=1;
}
break;
case 1:
if(func_689(uParam0) && STREAMING::HAS_ANIM_DICT_LOADED(&sVar9)){
if(MISC::GET_GAME_TIMER() > iLocal_170){
func_674(uParam0, sVar0);
AUDIO::START_AUDIO_SCENE("MP_JOB_CHANGE_RADIO_MUTE");
func_671(0);
func_687(1, 1, 1, 0, 0, 0, 0);
AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
uParam0->f_436=4;
}}
break;
case 4:
if(MISC::GET_GAME_TIMER() > uParam0->f_419){
if(bParam6){
func_670(uParam0, 1);
func_686(uParam0, 0.25f, 0.75f, 0.25f);
uParam0->f_419=MISC::GET_GAME_TIMER() + 250;
uParam0->f_436=2;
}else{
func_494(0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0);
AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
if(STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED()){
return 1;
}}}else{
func_670(uParam0, 1);
}
break;
case 2:
if(MISC::GET_GAME_TIMER() > (uParam0->f_419 - 100)){
func_493(uParam0);
if(func_492(PLAYER::PLAYER_ID(), 1, 1)){
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
}}
if(MISC::GET_GAME_TIMER() > uParam0->f_419){
if(func_308(uParam0, sVar1, iVar7, iVar6, sVar2, &cVar5, &cVar4, iParam9, Global_2657589[iVar7 /*466*/].f_261)){
if(CAM::IS_CAM_RENDERING(*uParam1)){
CAM::RENDER_SCRIPT_CAMS(0, false, 3000, 1, 0, 0);
}
if(CAM::IS_CAM_ACTIVE(*uParam1)){
CAM::SET_CAM_ACTIVE(*uParam1, 0);
}
if(CAM::DOES_CAM_EXIST(*uParam1)){
CAM::DESTROY_CAM(*uParam1, 1);
}
func_300(&uLocal_173, uParam0, uParam1, 1, iVar7, 0, 0);
if(bParam7){
iParam8=-1;
iVar6=2;
sVar2="HUD_COLOUR_GREY";
}elseif(iParam8==NETWORK::PARTICIPANT_ID_TO_INT()){
iVar6=0;
sVar2="HUD_COLOUR_BLUEDARK";
}else{
iVar6=0;
sVar2="HUD_COLOUR_RED";
}
func_296(1, 1);
func_295(uParam0);
func_294(uParam0);
uParam0->f_419=MISC::GET_GAME_TIMER() + 6000;
iLocal_170=MISC::GET_GAME_TIMER() + 1000;
HUD::MP_TEXT_CHAT_DISABLE(1);
uParam0->f_436=3;
}}
func_670(uParam0, 1);
break;
case 3:
if(iParam8 > -1){
if(NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam8))){
iVar7=NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam8));
}}
if(uParam0->f_1204){
func_293();
func_232(uParam11);
func_216(uParam0, 1, 1);
if(MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()){
func_207(&(uParam0->f_23), &(uParam0->f_145), uParam0->f_436, uParam0->f_2);
}else{
func_199(uParam0, &(uParam0->f_451), &(uParam0->f_452), &(uParam0->f_23), &(uParam0->f_145), uParam0->f_436, &(uParam0->f_2), &(uParam0->f_3), &(uParam0->f_475));
}}
func_198(uParam0);
if(MISC::GET_GAME_TIMER() >=iLocal_170){
func_197(uParam0, 0f, -0.5f, 0f, 0f, 0f, 0f, 10f, 5f, 5f);
func_196(MISC::GET_GAME_TIMER(), (uParam0->f_419 - 400), 333);
}
if(MISC::GET_GAME_TIMER() > uParam0->f_419){
if(!bLocal_172){
}
func_296(0, 1);
AUDIO::STOP_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
if(iLocal_171==0){
if(!bParam10){
func_494(1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0);
}else{
func_494(0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0);
}
iLocal_171=MISC::GET_GAME_TIMER() + 3000;
}
if(MISC::GET_GAME_TIMER() > iLocal_171){
uParam0->f_1204=0;
if(func_1996(PLAYER::PLAYER_ID(), 0)){
func_194();
}
HUD::MP_TEXT_CHAT_DISABLE(0);
return 1;
}}else{
uParam0->f_1204=1;
}
break;
case 5:
if(func_1996(PLAYER::PLAYER_ID(), 0)){
func_194();
}
HUD::MP_TEXT_CHAT_DISABLE(0);
return 1;
break;
}
if(uParam0->f_436==3){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0])){
if(!ENTITY::IS_ENTITY_DEAD(uParam0->f_23[0], 0)){
if(CAM::DOES_CAM_EXIST(*uParam1)){
if(CAM::IS_CAM_RENDERING(*uParam1)){
func_176(uParam0, &(uParam0->f_23[0]), uParam0->f_424, 0, 0, 0, 0, 0, -1, -1, 200, 0, 0, -1);
}}}}}
return 0;
}


void func_176(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13){
if(iParam8==iParam8){
iParam8=iParam8;
}
if(iParam11==iParam11){
iParam11=iParam11;
}
func_177(uParam0, uParam1, bParam2, bParam3, bParam4, bParam5, bParam6, iParam7, iParam9, iParam10, bParam12, iParam13);
}


void func_177(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11){
struct<41> Var0;
struct<8> Var1;
char cVar2[64];
int iVar3;
int iVar4;
int iVar5;
struct<8> Var6;
char cVar7[64];
struct<3> Var8;
struct<3> Var9;
struct<3> Var10;
struct<3> Var11;
struct<3> Var12;
struct<3> Var13;
Var0=-1;
Var0.f_1=32;
Var0.f_34=3;
Var0.f_40=-1;
if(!PED::IS_PED_INJURED(*uParam1) && (bParam2 >=0 || bParam4)){
PED::SET_PED_RESET_FLAG(*uParam1, 150, 1);
StringCopy(&Var1, "", 64);
StringCopy(&cVar2, "", 64);
StringCopy(&Var6, "", 64);
StringCopy(&cVar7, "", 64);
if(iParam8 > -1){
iVar3=iParam8;
}else{
iVar3=Global_2657589[bParam2 /*466*/].f_261;
iVar4=Global_2657589[bParam2 /*466*/].f_260;
iVar5=Global_2657589[bParam2 /*466*/].f_262;
}
if(iParam9==iParam9){
iParam9=iParam9;
}
if(!bParam5){
func_192(iVar3, PED::IS_PED_MALE(*uParam1), bParam4, &Var1, &cVar2, iVar4, iVar5, bParam10, iParam11);
}else{
func_191(iParam7, Global_2657589[bParam2 /*466*/].f_263, *uParam1, bParam6, &Var1, &cVar2);
}
func_696(uParam0, &Var6, &cVar7, PED::IS_PED_MALE(*uParam1));
if(uParam0->f_449 !=0){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var1) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var6)){
STREAMING::REQUEST_ANIM_DICT(&Var1);
STREAMING::REQUEST_ANIM_DICT(&Var6);
if(((STREAMING::HAS_ANIM_DICT_LOADED(&Var1) && STREAMING::HAS_ANIM_DICT_LOADED(&Var6)) && func_190(iVar3, bParam5)) && func_189(iVar3, bParam5)){
switch (uParam0->f_450){
case 0:
if(bParam2 > -1 && ((bParam5 && bParam3 > -1) || !bParam5)){
if(!MISC::IS_BIT_SET(uParam0->f_426, bParam2) || (bParam5 && !MISC::IS_BIT_SET(uParam0->f_426, bParam3))){
if(bParam5){
func_181(&Var0, 0, &Var8, &Var9, 1, 0, 1);
Var9.f_2=(Var9.f_2 + 90f);
uParam0->f_438=PED::CREATE_SYNCHRONIZED_SCENE(Var8, Var9, 2);
Var10={
PED::GET_ANIM_INITIAL_OFFSET_POSITION(&Var1, &cVar2, Var8, Var9, 0, 2) 
};
Var11={
PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&Var1, &cVar2, Var8, Var9, 0, 2) 
};
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
if(!ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, Var10, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(*uParam1, Var11, 2, 1);
}
}
}
else{
Var12={
ENTITY::GET_ENTITY_COORDS(*uParam1, 1) 
};
Var13={
Var12 
};
func_180(&(uParam0->f_441), iVar3, bParam5, Var13);
uParam0->f_438=PED::CREATE_SYNCHRONIZED_SCENE(Var12, ENTITY::GET_ENTITY_ROTATION(*uParam1, 2), 2);
}
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_441)){
ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_441, uParam0->f_438, &cVar2, &Var1, 1000f, -1000f, 0, 1148846080);
}
TASK::TASK_SYNCHRONIZED_SCENE(*uParam1, uParam0->f_438, &Var1, &cVar2, 1000f, -8f, 0, 0, 1000f, 31);
if(bParam5){
if(bParam6){
if(bParam2 >=0 && bParam2 < 32){
MISC::SET_BIT(&(uParam0->f_426), bParam2);
}
}
elseif(bParam3 >=0 && bParam3 < 32){
MISC::SET_BIT(&(uParam0->f_426), bParam3);
}
}
elseif(bParam2 >=0 && bParam2 < 32){
MISC::SET_BIT(&(uParam0->f_426), bParam2);
}}else{
uParam0->f_450++;
}}else{
uParam0->f_450=2;
}
break;
case 1:
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438)){
if(!bParam5){
if(iVar3==8){
func_179(uParam0, uParam1);
}
if(iVar3==9){
func_178(uParam0, uParam1);
}}
if(uParam0->f_1196){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438) < 0.98f){
if(iVar3==8){
func_179(uParam0, uParam1);
}
if(iVar3==9){
func_178(uParam0, uParam1);
}
}
else{
TASK::TASK_PLAY_ANIM_ADVANCED(*uParam1, &Var6, &cVar7, ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_ROTATION(*uParam1, 2), 2f, -8f, -1, 0, 0f, 2, 31);
uParam0->f_450++;
}}}
break;
case 2:
break;
}}else{
if(!STREAMING::HAS_ANIM_DICT_LOADED(&Var1)){
}
if(!func_190(iVar3, bParam5)){
}
if(!STREAMING::HAS_ANIM_DICT_LOADED(&Var6)){
}
if(!func_189(iVar3, bParam5)){
}}}}}else{
if(PED::IS_PED_INJURED(*uParam1)){
}
if(bParam2 < 0){
}}}


void func_178(var uParam0, var uParam1){
float fVar0;
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438)){
fVar0=PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return;
}
if(ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
return;
}
if(uParam0->f_440==-1){
uParam0->f_440=AUDIO::GET_SOUND_ID();
}elseif(fVar0 >=0.595f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 0)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), false);
}}elseif(fVar0 >=0.371f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 1)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), true);
}}elseif(fVar0 >=0.152f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 2)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), 2);
}}}}


void func_179(var uParam0, var uParam1){
float fVar0;
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438)){
fVar0=PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
if(!ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return;
}
if(ENTITY::IS_ENTITY_DEAD(*uParam1, 0)){
return;
}
if(uParam0->f_440==-1){
uParam0->f_440=AUDIO::GET_SOUND_ID();
}
if(!PED::IS_PED_MALE(*uParam1)){
if(fVar0 >=0.622f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 0)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), false);
}}elseif(fVar0 >=0.495f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 1)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), true);
}}elseif(fVar0 >=0.333f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 2)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), 2);
}}elseif(fVar0 >=0.162f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 3)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), 3);
}}elseif(fVar0 >=0.131f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 4)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), 4);
}}}elseif(fVar0 >=0.595f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 0)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), false);
}}elseif(fVar0 >=0.445f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 1)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), true);
}}elseif(fVar0 >=0.282f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 2)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), 2);
}}elseif(fVar0 >=0.141f){
if(!MISC::IS_BIT_SET(uParam0->f_439, 3)){
AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", 1);
MISC::SET_BIT(&(uParam0->f_439), 3);
}}}}


bool func_180(var uParam0, int iParam1, bool bParam2, struct<3> Param3){
int iVar0;
float fVar1;
fVar1=-1f;
if(bParam2){
return 1;
}
if(iParam1==59){
iVar0=joaat("prop_cs_ciggy_01");
}else{
return 1;
}
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 1;
}
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 0) + 1);
if(func_189(iParam1, bParam2)){
*uParam0=OBJECT::CREATE_OBJECT(iVar0, Param3, 0, 0, 0);
if(fVar1 !=-1f){
ENTITY::SET_ENTITY_HEADING(*uParam0, fVar1);
}}}else{
return 1;
}
return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}


void func_181(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6){
if(func_188() || func_187()){
func_182(uParam0, iParam1, uParam2, uParam3, iParam1);
return;
}
if(bParam5){
*uParam2={
414.4f, -977.6f, -100.0042f 
};
uParam2->f_2=(uParam2->f_2 - 1f);
*uParam3={
0f, 0f, 200f 
};
return;
}elseif(bParam6){
*uParam2={
414.65f, -978.46f, -99.004f 
};
uParam2->f_2=(uParam2->f_2 - 1f);
*uParam3={
0f, 0f, 200f 
};
return;
}
switch (iParam1){
case 0:
*uParam2={
414.4f, -977.6f, -100.0042f 
};
*uParam3={
0f, 0f, 200f 
};
break;
case 1:
if(bParam4){
*uParam2={
412.5202f, -977.6f, -100.0042f 
};
*uParam3={
0f, 0f, 225.375f 
};
}else{
*uParam2={
413.0202f, -976.6559f, -100.0042f 
};
*uParam3={
0f, 0f, 225.375f 
};
}
break;
case 2:
*uParam2={
414.9879f, -975.4411f, -100.0042f 
};
*uParam3={
0f, 0f, 183.625f 
};
break;
case 3:
*uParam2={
416.2123f, -975.5722f, -100.0042f 
};
*uParam3={
0f, 0f, 155.3f 
};
break;
case 4:
*uParam2={
410.7824f, -976.5933f, -100.0042f 
};
*uParam3={
0f, 0f, 240.9f 
};
break;
case 5:
*uParam2={
411.1806f, -975.819f, -100.0042f 
};
*uParam3={
0f, 0f, 227.5f 
};
break;
case 6:
*uParam2={
414.0178f, -974.6259f, -100.0042f 
};
*uParam3={
0f, 0f, 206.65f 
};
break;
case 7:
*uParam2={
415.7338f, -972.9619f, -100.0042f 
};
*uParam3={
0f, 0f, 170.775f 
};
break;
case 8:
*uParam2={
412.1275f, -974.0275f, -100.0042f 
};
*uParam3={
0f, 0f, 200f 
};
break;
case 9:
*uParam2={
417.3252f, -970.7984f, -100.0042f 
};
*uParam3={
0f, 0f, 160.025f 
};
break;
case 10:
*uParam2={
409.805f, -975.0361f, -100.0042f 
};
*uParam3={
0f, 0f, 240.65f 
};
break;
case 11:
*uParam2={
410.6598f, -974.3722f, -100.0042f 
};
*uParam3={
0f, 0f, 222.15f 
};
break;
case 12:
*uParam2={
407.5374f, -974.3933f, -100.0042f 
};
*uParam3={
0f, 0f, 258.175f 
};
break;
case 13:
*uParam2={
413.1881f, -969.019f, -100.0042f 
};
*uParam3={
0f, 0f, 204.025f 
};
break;
case 14:
*uParam2={
415.0103f, -969.1959f, -100.0042f 
};
*uParam3={
0f, 0f, 182.35f 
};
break;
}
uParam2->f_2=(uParam2->f_2 - 1f);
}


void func_182(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4){
switch (*uParam0){
case 0:
*uParam2={
2956.984f, -3866.815f, 140f 
};
switch (Global_4718592.f_160097){
case 3:
uParam2->f_2=(uParam2->f_2 + 0.05f);
break;
}
*uParam3={
0f, 0f, 48f 
};
break;
case 1:
if(iParam4==0 || (func_186(uParam0->f_1[iParam4]) && iParam4==1)){
*uParam2={
2966.769f, -3874.841f, 140.0011f 
};
*uParam3={
0f, 0f, 48f 
};
}else{
*uParam2={
func_184(uParam0, iParam1) 
};
uParam2->f_2=(uParam2->f_2 - 1f);
*uParam3={
0f, 0f, func_183(iParam1) 
};
}
break;
default:
*uParam2={
func_184(uParam0, iParam1) 
};
uParam2->f_2=(uParam2->f_2 - 1f);
*uParam3={
0f, 0f, func_183(iParam1) 
};
break;
}}


float func_183(int iParam0){
if(func_187()){
switch (iParam0){
case 0:
return 68f;
case 1:
return 122.599f;
case 2:
return 92.199f;
case 3:
return 137.598f;
case 4:
return 139.799f;
case 5:
return 56.799f;
case 6:
return 23.599f;
case 7:
return 66.399f;
case 8:
return 109.598f;
case 9:
return 85.199f;
case 10:
return 91.998f;
case 11:
return 82.798f;
case 12:
return 94.598f;
case 13:
return 41.198f;
case 14:
return 104.597f;
case 15:
return 15.997f;
default:}
return 68f;
}
if(func_188()){
switch (iParam0){
case 0:
return 203.6f;
case 1:
return 214.6f;
case 2:
return 256.8f;
case 3:
return 247.1997f;
case 4:
return 188.6f;
case 5:
return 229.199f;
case 6:
return 203.799f;
case 7:
return 212.599f;
case 8:
return 247.999f;
case 9:
return 247.999f;
case 10:
return 189.199f;
case 11:
return 213.599f;
case 12:
return 242.399f;
case 13:
return 269.599f;
case 14:
return 218.199f;
case 15:
return 266.6238f;
default:}
return 306.5976f;
}
return 0f;
}


Vector3 func__184(var uParam0, int iParam1){
if(func_187()){
switch (iParam1){
case 0:
return 4523f, -4488.264f, 3.1814f;
case 1:
return 4525.786f, -4485.819f, 3.166f;
case 2:
return 4526.7f, -4487.269f, 3.158f;
case 3:
return 4527.203f, -4484.359f, 3.17f;
case 4:
return 4525.744f, -4484.242f, 3.175f;
case 5:
return 4526.483f, -4490.852f, 3.169f;
case 6:
return 4526.028f, -4491.967f, 3.177f;
case 7:
return 4526.876f, -4491.695f, 3.171f;
case 8:
return 4527.959f, -4484.871f, 3.166f;
case 9:
return 4527.785f, -4488.536f, 3.154f;
case 10:
return 4528.447f, -4486.53f, 3.156f;
case 11:
return 4528.621f, -4489.301f, 3.152f;
case 12:
return 4528.693f, -4487.89f, 3.148f;
case 13:
return 4527.085f, -4493.315f, 3.178f;
case 14:
return 4527.154f, -4485.98f, 3.162f;
case 15:
return 4526.244f, -4493.404f, 3.181f;
default:}
return 4523f, -4488.264f, 3.1814f;
}
if(func_188()){
if(func_185(uParam0)){
switch (iParam1){
case 0:
return 2828.92f, -3901.475f, 139.3957f;
break;
case 1:
return 2829.51f, -3902.015f, 139.2491f;
break;
case 2:
return 2828.365f, -3900.967f, 139.2491f;
break;
}
return 2828.92f, -3901.475f, 139.3957f;
}
switch (iParam1){
case 0:
return 2963.925f, -3870.137f, 140.082f;
case 1:
return 2963.068f, -3870.597f, 140.082f;
case 2:
return 2960.217f, -3874.703f, 140.082f;
case 3:
return 2960.612f, -3873.702f, 140.0732f;
case 4:
return 2965.272f, -3869.305f, 140.082f;
case 5:
return 2959.643f, -3871.999f, 140.082f;
case 6:
return 2964.449f, -3869.2f, 140.082f;
case 7:
return 2963.433f, -3868.566f, 140.082f;
case 8:
return 2959.914f, -3872.786f, 140.082f;
case 9:
return 2959.735f, -3873.895f, 140.075f;
case 10:
return 2965.66f, -3868.658f, 140.082f;
case 11:
return 2962.806f, -3869.486f, 140.082f;
case 12:
return 2960.431f, -3871.78f, 140.082f;
case 13:
return 2959.737f, -3875.456f, 140.082f;
case 14:
return 2961.832f, -3870.305f, 140.082f;
case 15:
return 2957.675f, -3874.198f, 140.0816f;
default:}
return 2828.286f, -3904.493f, 139.01f;
}
return 418.9326f, -979.3876f, -100.0042f;
}


bool func_185(var uParam0){
return *uParam0==0;
}

int func_186(int iParam0){
switch (iParam0){
case 25:
case 52:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
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
case 65:
case 66:
case 80:
case 100:
case 81:
case 101:
case 82:
case 102:
case 83:
case 103:
case 84:
case 104:
case 85:
case 105:
case 86:
case 106:
case 67:
case 87:
case 68:
case 88:
case 69:
case 89:
case 70:
case 90:
case 71:
case 91:
case 72:
case 92:
case 73:
case 93:
case 74:
case 94:
case 75:
case 95:
case 76:
case 96:
case 77:
case 97:
case 78:
case 98:
case 79:
case 99:
return 1;
default:
}
return 0;
}


bool func_187(){
return MISC::IS_BIT_SET(Global_4718592.f_160048, 19);
}


bool func_188(){
return MISC::IS_BIT_SET(Global_4718592.f_160050, 12);
}

int func_189(int iParam0, bool bParam1){
int iVar0;
if(!bParam1){
if(iParam0==59){
iVar0=joaat("prop_cs_ciggy_01");
}else{
return 1;
}
STREAMING::REQUEST_MODEL(iVar0);
if(!STREAMING::HAS_MODEL_LOADED(iVar0)){
return 0;
}}
return 1;
}


bool func_190(int iParam0, bool bParam1){
if(bParam1){
return 1;
}
if(iParam0 !=8 && iParam0 !=9){
return 1;
}
return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_GTAO/SNACKS", 0, -1);
}


void func_191(int iParam0, int iParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5){
bool bVar0;
switch (iParam0){
case 2:
if(PED::IS_PED_MALE(iParam2)){
bVar0=false;
}else{
bVar0=true;
}
break;
case 1:
if(bParam3){
bVar0=true;
}else{
bVar0=false;
}
break;
case 3:
if(bParam3){
bVar0=true;
}else{
bVar0=false;
}
break;
}
switch (iParam1){
case 0:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_manly_handshake", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_manly_handshake", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_manly_handshake", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "MANLY_HANDSHAKE_LEFT", 64);
}else{
StringCopy(sParam5, "MANLY_HANDSHAKE_RIGHT", 64);
}
break;
case 1:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_fist_bump", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_fist_bump", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_fist_bump", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "FIST_BUMP_LEFT", 64);
}else{
StringCopy(sParam5, "FIST_BUMP_RIGHT", 64);
}
break;
case 2:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_backslap", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_backslap", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_backslap", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "BACKSLAP_LEFT", 64);
}else{
StringCopy(sParam5, "BACKSLAP_RIGHT", 64);
}
break;
case 3:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_high_five", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_high_five", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_high_five", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "HIGH_FIVE_LEFT", 64);
}else{
StringCopy(sParam5, "HIGH_FIVE_RIGHT", 64);
}
break;
case 4:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_cowering", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_cowering", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_cowering", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "COWERING_LEFT", 64);
}else{
StringCopy(sParam5, "COWERING_RIGHT", 64);
}
break;
case 5:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_sarcastic", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_sarcastic", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_sarcastic", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "SARCASTIC_LEFT", 64);
}else{
StringCopy(sParam5, "SARCASTIC_RIGHT", 64);
}
break;
case 6:
switch (iParam0){
case 1:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_bro_hug", 64);
break;
case 2:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_bro_hug", 64);
break;
case 3:
StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_bro_hug", 64);
break;
}
if(bVar0){
StringCopy(sParam5, "BRO_HUG_LEFT", 64);
}else{
StringCopy(sParam5, "BRO_HUG_RIGHT", 64);
}
break;
}}


void func_192(int iParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, bool bParam7, int iParam8){
if(bParam2){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
StringCopy(sParam4, "finger", 64);
return;
}
if(bParam7){
StringCopy(sParam3, "ANIM@MP_JUGGERNAUT@", 64);
StringCopy(sParam4, "Idle_Intro", 64);
return;
}
if(iParam8 !=-1){
func_193(iParam8, sParam3, sParam4);
return;
}
switch (iParam5){
case 1:
switch (iParam6){
case 0:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bro_love", 64);
StringCopy(sParam4, "bro_love", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bro_love", 64);
StringCopy(sParam4, "bro_love", 64);
}
break;
case 1:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
StringCopy(sParam4, "finger", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
StringCopy(sParam4, "finger", 64);
}
break;
case 2:
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
StringCopy(sParam4, "wank", 64);
break;
case 3:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
StringCopy(sParam4, "finger", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
StringCopy(sParam4, "finger", 64);
}
break;
}
break;
case 2:
switch (iParam0){
case 5:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@blow_kiss", 64);
StringCopy(sParam4, "blow_kiss", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@blow_kiss", 64);
StringCopy(sParam4, "blow_kiss", 64);
}
break;
case 1:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger", 64);
StringCopy(sParam4, "finger", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger", 64);
StringCopy(sParam4, "finger", 64);
}
break;
case 2:
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@rock", 64);
StringCopy(sParam4, "rock", 64);
break;
case 3:
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
StringCopy(sParam4, "salute", 64);
break;
case 4:
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wank", 64);
StringCopy(sParam4, "wank", 64);
break;
case 6:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_shagging", 64);
StringCopy(sParam4, "air_shagging", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_shagging", 64);
StringCopy(sParam4, "air_shagging", 64);
}
break;
case 7:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dock", 64);
StringCopy(sParam4, "dock", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dock", 64);
StringCopy(sParam4, "dock", 64);
}
break;
case 8:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
StringCopy(sParam4, "knuckle_crunch", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@knuckle_crunch", 64);
StringCopy(sParam4, "knuckle_crunch", 64);
}
break;
case 9:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@slow_clap", 64);
StringCopy(sParam4, "slow_clap", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@slow_clap", 64);
StringCopy(sParam4, "slow_clap", 64);
}
break;
case 10:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@face_palm", 64);
StringCopy(sParam4, "face_palm", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@face_palm", 64);
StringCopy(sParam4, "face_palm", 64);
}
break;
case 11:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumbs_up", 64);
StringCopy(sParam4, "thumbs_up", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumbs_up", 64);
StringCopy(sParam4, "thumbs_up", 64);
}
break;
case 12:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@jazz_hands", 64);
StringCopy(sParam4, "jazz_hands", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@jazz_hands", 64);
StringCopy(sParam4, "jazz_hands", 64);
}
break;
case 13:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@nose_pick", 64);
StringCopy(sParam4, "nose_pick", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@nose_pick", 64);
StringCopy(sParam4, "nose_pick", 64);
}
break;
case 59:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@smoke_flick", 64);
StringCopy(sParam4, "smoke_flick", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@smoke_flick", 64);
StringCopy(sParam4, "smoke_flick", 64);
}
break;
case 14:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_guitar", 64);
StringCopy(sParam4, "air_guitar", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_guitar", 64);
StringCopy(sParam4, "air_guitar", 64);
}
break;
case 15:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@wave", 64);
StringCopy(sParam4, "wave", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@wave", 64);
StringCopy(sParam4, "wave", 64);
}
break;
case 16:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@surrender", 64);
StringCopy(sParam4, "surrender", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@surrender", 64);
StringCopy(sParam4, "surrender", 64);
}
break;
case 17:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shush", 64);
StringCopy(sParam4, "shush", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shush", 64);
StringCopy(sParam4, "shush", 64);
}
break;
case 18:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@photography", 64);
StringCopy(sParam4, "photography", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@photography", 64);
StringCopy(sParam4, "photography", 64);
}
break;
case 19:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@dj", 64);
StringCopy(sParam4, "dj", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@dj", 64);
StringCopy(sParam4, "dj", 64);
}
break;
case 20:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_synth", 64);
StringCopy(sParam4, "air_synth", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_synth", 64);
StringCopy(sParam4, "air_synth", 64);
}
break;
case 21:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@no_way", 64);
StringCopy(sParam4, "no_way", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@no_way", 64);
StringCopy(sParam4, "no_way", 64);
}
break;
case 22:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chicken_taunt", 64);
StringCopy(sParam4, "chicken_taunt", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chicken_taunt", 64);
StringCopy(sParam4, "chicken_taunt", 64);
}
break;
case 23:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@chin_brush", 64);
StringCopy(sParam4, "chin_brush", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@chin_brush", 64);
StringCopy(sParam4, "chin_brush", 64);
}
break;
case 26:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@you_loco", 64);
StringCopy(sParam4, "you_loco", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@you_loco", 64);
StringCopy(sParam4, "you_loco", 64);
}
break;
case 24:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@finger_kiss", 64);
StringCopy(sParam4, "finger_kiss", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@finger_kiss", 64);
StringCopy(sParam4, "finger_kiss", 64);
}
break;
case 25:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@peace", 64);
StringCopy(sParam4, "peace", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@peace", 64);
StringCopy(sParam4, "peace", 64);
}
break;
case 27:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@freakout", 64);
StringCopy(sParam4, "freakout", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@freakout", 64);
StringCopy(sParam4, "freakout", 64);
}
break;
case 28:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@thumb_on_ears", 64);
StringCopy(sParam4, "thumb_on_ears", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@thumb_on_ears", 64);
StringCopy(sParam4, "thumb_on_ears", 64);
}
break;
case 30:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes", 64);
StringCopy(sParam4, "banging_tunes", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes", 64);
StringCopy(sParam4, "banging_tunes", 64);
}
break;
case 29:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_left", 64);
StringCopy(sParam4, "banging_tunes", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_left", 64);
StringCopy(sParam4, "banging_tunes", 64);
}
break;
case 31:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@banging_tunes_right", 64);
StringCopy(sParam4, "banging_tunes", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@banging_tunes_right", 64);
StringCopy(sParam4, "banging_tunes", 64);
}
break;
case 32:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@oh_snap", 64);
StringCopy(sParam4, "oh_snap", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@oh_snap", 64);
StringCopy(sParam4, "oh_snap", 64);
}
break;
case 33:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cats_cradle", 64);
StringCopy(sParam4, "cats_cradle", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cats_cradle", 64);
StringCopy(sParam4, "cats_cradle", 64);
}
break;
case 34:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raise_the_roof", 64);
StringCopy(sParam4, "raise_the_roof", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raise_the_roof", 64);
StringCopy(sParam4, "raise_the_roof", 64);
}
break;
case 35:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@find_the_fish", 64);
StringCopy(sParam4, "find_the_fish", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@find_the_fish", 64);
StringCopy(sParam4, "find_the_fish", 64);
}
break;
case 36:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salsa_roll", 64);
StringCopy(sParam4, "salsa_roll", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@salsa_roll", 64);
StringCopy(sParam4, "salsa_roll", 64);
}
break;
case 37:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@heart_pumping", 64);
StringCopy(sParam4, "heart_pumping", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@heart_pumping", 64);
StringCopy(sParam4, "heart_pumping", 64);
}
break;
case 38:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@uncle_disco", 64);
StringCopy(sParam4, "uncle_disco", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@uncle_disco", 64);
StringCopy(sParam4, "uncle_disco", 64);
}
break;
case 39:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@raining_cash", 64);
StringCopy(sParam4, "raining_cash", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@raining_cash", 64);
StringCopy(sParam4, "raining_cash", 64);
}
break;
case 40:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cry_baby", 64);
StringCopy(sParam4, "cry_baby", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cry_baby", 64);
StringCopy(sParam4, "cry_baby", 64);
}
break;
case 41:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@cut_throat", 64);
StringCopy(sParam4, "cut_throat", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@cut_throat", 64);
StringCopy(sParam4, "cut_throat", 64);
}
break;
case 42:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@karate_chops", 64);
StringCopy(sParam4, "karate_chops", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@karate_chops", 64);
StringCopy(sParam4, "karate_chops", 64);
}
break;
case 43:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shadow_boxing", 64);
StringCopy(sParam4, "shadow_boxing", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shadow_boxing", 64);
StringCopy(sParam4, "shadow_boxing", 64);
}
break;
case 44:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@the_woogie", 64);
StringCopy(sParam4, "the_woogie", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@the_woogie", 64);
StringCopy(sParam4, "the_woogie", 64);
}
break;
case 45:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@stinker", 64);
StringCopy(sParam4, "stinker", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@stinker", 64);
StringCopy(sParam4, "stinker", 64);
}
break;
case 46:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@air_drums", 64);
StringCopy(sParam4, "air_drums", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@air_drums", 64);
StringCopy(sParam4, "air_drums", 64);
}
break;
case 47:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@call_me", 64);
StringCopy(sParam4, "call_me", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@call_me", 64);
StringCopy(sParam4, "call_me", 64);
}
break;
case 48:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@coin_roll_and_toss", 64);
StringCopy(sParam4, "coin_roll_and_toss", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@coin_roll_and_toss", 64);
StringCopy(sParam4, "coin_roll_and_toss", 64);
}
break;
case 49:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@bang_bang", 64);
StringCopy(sParam4, "bang_bang", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@bang_bang", 64);
StringCopy(sParam4, "bang_bang", 64);
}
break;
case 50:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@respect", 64);
StringCopy(sParam4, "respect", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@respect", 64);
StringCopy(sParam4, "respect", 64);
}
break;
case 51:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@mind_blown", 64);
StringCopy(sParam4, "mind_blown", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@mind_blown", 64);
StringCopy(sParam4, "mind_blown", 64);
}
break;
case 62:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@spray_champagne", 64);
StringCopy(sParam4, "spray_champagne", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@spray_champagne", 64);
StringCopy(sParam4, "spray_champagne", 64);
}
break;
case 52:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@crowd_invitation", 64);
StringCopy(sParam4, "crowd_invitation", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@crowd_invitation", 64);
StringCopy(sParam4, "crowd_invitation", 64);
}
break;
case 53:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@driver", 64);
StringCopy(sParam4, "driver", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@driver", 64);
StringCopy(sParam4, "driver", 64);
}
break;
case 54:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@runner", 64);
StringCopy(sParam4, "runner", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@runner", 64);
StringCopy(sParam4, "runner", 64);
}
break;
case 55:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@shooting", 64);
StringCopy(sParam4, "shooting", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@shooting", 64);
StringCopy(sParam4, "shooting", 64);
}
break;
case 56:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@suck_it", 64);
StringCopy(sParam4, "suck_it", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@suck_it", 64);
StringCopy(sParam4, "suck_it", 64);
}
break;
case 57:
if(bParam1){
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@take_selfie", 64);
StringCopy(sParam4, "take_selfie", 64);
}else{
StringCopy(sParam3, "anim@mp_player_intcelebrationfemale@take_selfie", 64);
StringCopy(sParam4, "take_selfie", 64);
}
break;
default:
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
StringCopy(sParam4, "salute", 64);
break;
}
break;
default:
StringCopy(sParam3, "anim@mp_player_intcelebrationmale@salute", 64);
StringCopy(sParam4, "salute", 64);
break;
}}


void func_193(int iParam0, char* sParam1, char* sParam2){
switch (iParam0){
case 0:
StringCopy(sParam1, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
StringCopy(sParam2, "knuckle_crunch", 64);
break;
case 1:
StringCopy(sParam1, "anim@mp_player_intcelebrationmale@finger", 64);
StringCopy(sParam2, "finger", 64);
break;
}}


void func_194(){
if(!func_195(Global_2621446.f_83)){
STREAMING::CLEAR_FOCUS();
Global_2621446.f_83={
0f, 0f, 0f 
};
Global_2621443=1;
}}

int func_195(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}


void func_196(int iParam0, int iParam1, int iParam2){
float fVar0;
int iVar1;
if(iParam0 > iParam1){
iParam0=iParam1;
}elseif(iParam0 < (iParam1 - iParam2)){
iParam0=(iParam1 - iParam2);
}
fVar0=(to_float((iParam0 - (iParam1 - iParam2))) / to_float((iParam1 - (iParam1 - iParam2))));
iVar1=round((fVar0 * 255f));
if(iVar1 !=0){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 0, 0, 0, iVar1, 0);
}}


void func_197(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3){
if(Param1.f_2==Param3.f_2 || Param1.f_2==Param2.f_2){}
if(CAM::IS_SCREEN_FADED_OUT() && uParam0->f_1209 >=10){
CAM::DO_SCREEN_FADE_IN(100);
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
}


void func_198(var uParam0){
int iVar0;
int iVar1;
if(uParam0->f_1206){
iVar0=0;
while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS()){
iVar1=iVar0;
if(func_492(iVar1, 0, 1)){
NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, 0);
}
iVar0++;
}}}


void func_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, var uParam8){
int iVar0;
int iVar1;
char cVar2[64];
bool bVar3;
struct<3> Var4;
struct<3> Var5;
struct<3> Var6;
struct<3> Var7;
struct<3> Var8;
struct<3> Var9;
if(MISC::IS_PS3_VERSION() || MISC::IS_XBOX360_VERSION()){
return;
}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
return;
}
if(iParam5==iParam5){
iParam5=iParam5;
}
if(*uParam6==0){
return;
}
switch (*uParam1){
case 0:
if(*uParam2==-1){
iVar0=0;
while (iVar0 < *uParam3){
if(iVar0 <=7){
if(ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0], 0)){
iVar1++;
}
}}
iVar0++;
}
if(iVar1 > 0){
*uParam2=iVar1;
}}else{
bVar3=true;
iVar0=0;
while (iVar0 < *uParam2){
if(iVar0 <=7){
StringCopy(&cVar2, "PLAYER_NAME_0", 64);
StringIntConCat(&cVar2, iVar0 + 1, 64);
(*uParam7)[iVar0]=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&cVar2);
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam7)[iVar0])){
bVar3=false;
}}
iVar0++;
}
if(bVar3){
*uParam1++;
}}
break;
case 1:
iVar0=0;
while (iVar0 < *uParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam7)[iVar0], "SET_PLAYER_NAME");
func_206(uParam4[iVar0 /*16*/]);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
iVar0++;
}
*uParam1++;
break;
case 2:
if(PAD::IS_CONTROL_JUST_RELEASED(2, 204) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 204)){
if(*uParam8){
*uParam8=0;
}else{
*uParam8=1;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "TOGGLE_ON", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
}
if(*uParam8){
iVar0=0;
while (iVar0 < *uParam2){
if(iVar0 <=7){
if(ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0])){
if(!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0], 0)){
if(MISC::IS_PS3_VERSION() || MISC::IS_XBOX360_VERSION()){
Var5={
PED::GET_PED_BONE_COORDS((*uParam3)[iVar0], 24818, 0f, 0f, 0f) 
};
func_205(uParam3[iVar0], &Var5, iVar0);
Var4={
func_204(Var5, CAM::GET_FINAL_RENDERED_CAM_COORD()) 
};
GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam7)[iVar0], Var5, Var4, 0.75f, 0.5f, 0.375f, 0.75f, 0.5f, 0.375f, 2);
}else{
Var6={
func_203(uParam3[iVar0], iVar0) 
};
Var5={
PED::GET_PED_BONE_COORDS((*uParam3)[iVar0], 24818, 0f, 0f, 0f) 
};
Var8={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam3)[iVar0], Var6) - ENTITY::GET_ENTITY_COORDS((*uParam3)[iVar0], 1) 
};
Var9={
Var5 + Var8 
};
Var4={
func_204(Var5, CAM::GET_FINAL_RENDERED_CAM_COORD()) 
};
Var7={
func_202(iVar0) 
};
GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam7)[iVar0], Var9, Var4, Var7, Var7, 2);
func_200(uParam0, iVar0);
}}
}}
iVar0++;
}}
break;
}}


void func_200(var uParam0, int iParam1){
int iVar0;
struct<13> Var1;
int iVar2;
if(iParam1 > -1 && iParam1 < 16){
if(uParam0->f_402[iParam1] > -1 && uParam0->f_402[iParam1] < 32){
iVar0=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_402[iParam1]);
if(func_492(iVar0, 0, 1)){
Var1={
func_139(iVar0) 
};
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var1)){
if(NETWORK::NETWORK_IS_GAMER_TALKING(&Var1)){
iVar2=2;
}else{
iVar2=3;
}}elseif(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var1)){
iVar2=1;
}else{
iVar2=0;
}
if(uParam0->f_1179[iParam1] !=iVar2){
switch (iVar2){
case 0:
func_201(uParam0, 1, iParam1);
break;
case 1:
func_201(uParam0, 4, iParam1);
break;
case 2:
func_201(uParam0, 3, iParam1);
break;
case 3:
func_201(uParam0, 2, iParam1);
break;
}
uParam0->f_1179[iParam1]=iVar2;
}}}}}


void func_201(var uParam0, bool bParam1, int iParam2){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_3[iParam2], "SET_SPEAKER_STATE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


Vector3 func__202(int iParam0){
switch (iParam0){
case 0:
return 0.9f, 0.6f, 2f;
case 1:
return 1.2f, 0.7f, 2f;
case 2:
return 1.3f, 0.7f, 2f;
case 3:
return 1.2f, 0.7f, 2f;
case 4:
return 1.3f, 0.8f, 2f;
case 5:
return 1.4f, 0.8f, 2f;
case 6:
return 1.6f, 0.8f, 2f;
case 7:
return 1.7f, 0.9f, 2f;
default:
}
return 1.4f, 0.8f, 2f;
}


Vector3 func__203(var uParam0, int iParam1){
float fVar0;
float fVar1;
float fVar2;
fVar0=0f;
fVar1=0.5f;
if(iParam1==5){
if(func_2127(*uParam0)){
fVar2=0.1f;
}else{
fVar2=0.05f;
}}elseif(func_2127(*uParam0)){
fVar2=0.1f;
}else{
fVar2=0.05f;
}
return fVar0, fVar1, fVar2;
}


Vector3 func__204(struct<2> Param0, var uParam1, struct<3> Param2){
struct<3> Var0;
if(func_195(Param2)){
return 0f, 0f, 0f;
}
Var0.f_2=(180f - MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1)));
Var0.f_0=0f;
Var0.f_1=0f;
return Var0;
}


void func_205(var uParam0, var uParam1, int iParam2){
if(iParam2==5){
if(func_2127(*uParam0)){
uParam1->f_2=(uParam1->f_2 + 0.15f);
}else{
uParam1->f_2=(uParam1->f_2 + 0.1f);
}}elseif(func_2127(*uParam0)){
uParam1->f_2=(uParam1->f_2 + 0.15f);
}else{
uParam1->f_2=(uParam1->f_2 + 0.1f);
}
if(!MISC::IS_PS3_VERSION() && !MISC::IS_XBOX360_VERSION()){
uParam1->f_1=(uParam1->f_1 - 0.5f);
}}


void func_206(char[4] cParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(cParam0);
}


void func_207(var uParam0, var uParam1, int iParam2, int iParam3){
struct<3> Var0;
int iVar1;
struct<3> Var2;
float fVar3;
float fVar4;
char cVar5[128];
struct<2> Var6;
struct<3> Var7;
if(!MISC::IS_PS3_VERSION() && !MISC::IS_XBOX360_VERSION()){
return;
}
Var0={
CAM::GET_FINAL_RENDERED_CAM_ROT(2) 
};
if(MISC::ABSF(Var0.f_0) >=45f){
return;
}
if(!(iParam2 > 2 && iParam2 < 5)){
return;
}
if(iParam3==0){
return;
}
fVar3=-1f;
fVar4=-1f;
iVar1=0;
while (iVar1 < 8){
func_215(&Var7, 3);
Var7.f_0=1;
switch (iVar1){
case 0:
Var7.f_1=0.55f;
Var7.f_2=0.55f;
break;
case 1:
Var7.f_1=0.475f;
Var7.f_2=0.475f;
break;
case 2:
Var7.f_1=0.475f;
Var7.f_2=0.475f;
break;
case 3:
Var7.f_1=0.4f;
Var7.f_2=0.4f;
break;
case 4:
Var7.f_1=0.4f;
Var7.f_2=0.4f;
break;
case 5:
Var7.f_1=0.475f;
Var7.f_2=0.475f;
break;
case 6:
Var7.f_1=0.4f;
Var7.f_2=0.4f;
break;
case 7:
Var7.f_1=0.4f;
Var7.f_2=0.4f;
break;
}
cVar5={
*(uParam1[iVar1 /*16*/]) 
};
if(ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1])){
if(!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar1], 0)){
Var2={
PED::GET_PED_BONE_COORDS((*uParam0)[iVar1], 24818, 0f, 0f, 0f) 
};
if(iVar1==5){
if(func_2127((*uParam0)[iVar1])){
Var2.f_2=(Var2.f_2 + 0.25f);
}else{
Var2.f_2=(Var2.f_2 + 0.22f);
}}elseif(func_2127((*uParam0)[iVar1])){
Var2.f_2=(Var2.f_2 + 0.25f);
}else{
Var2.f_2=(Var2.f_2 + 0.22f);
}
GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var2, &fVar3, &fVar4);
if(fVar3 !=-1f && fVar4 !=-1f){
Var6.f_0=fVar3;
Var6.f_1=fVar4;
}
func_208(&Var6, &Var7, &cVar5, "", 1, 0);
}}
iVar1++;
}}


void func_208(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5){
char* sVar0;
if(!func_214(sParam2)){
if(func_212()){
func_211(uParam1, 0);
HUD::SET_TEXT_JUSTIFICATION(iParam5);
if(func_214(sParam3)){
sVar0="STRING";
}else{
sVar0=sParam3;
}
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_210(*uParam0), func_209(uParam0->f_1), 0);
}}}


float func_209(float fParam0){
return (fParam0 + fLocal_14);
}


float func_210(float fParam0){
return (fParam0 + fLocal_13);
}


void func_211(var uParam0, bool bParam1){
HUD::SET_TEXT_FONT(*uParam0);
if(!uParam0->f_8==0f || !uParam0->f_9==0f){
HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
}
HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
switch (uParam0->f_7){
case 0:
break;
case 1:
HUD::SET_TEXT_OUTLINE();
HUD::SET_TEXT_DROP_SHADOW();
break;
case 3:
HUD::SET_TEXT_DROP_SHADOW();
break;
case 2:
HUD::SET_TEXT_OUTLINE();
break;
}
if(bParam1){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}

int func_212(){
if(func_213()){
return 1;
}
if(CAM::IS_SCREEN_FADED_OUT()){
return 0;
}
if(CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()){
return 0;
}
if(MISC::IS_FRONTEND_FADING()){
return 0;
}
return 1;
}


bool func_213(){
return Global_1574604;
}

int func_214(char* sParam0){
if(MISC::IS_STRING_NULL(sParam0)){
return 1;
}elseif(MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0")){
return 1;
}
return 0;
}


void func_215(var uParam0, int iParam1){
*uParam0=0;
uParam0->f_1=0.332f;
uParam0->f_2=(((0.5f + 0.004f) - 0.01f) - 0.11f);
uParam0->f_3=255;
uParam0->f_4=255;
uParam0->f_5=255;
uParam0->f_6=255;
uParam0->f_7=iParam1;
uParam0->f_8=0f;
uParam0->f_9=0f;
uParam0->f_10=19;
}


void func_216(var uParam0, bool bParam1, bool bParam2){
struct<9> Var0;
Var0={
func_231() 
};
switch (uParam0->f_477){
case 0:
if(func_228(0, -1, 0)){
func_226(&(uParam0->f_478));
if(bParam1){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_225(2, 203, "CELEB_LIST_TTL", &(uParam0->f_478), 1, 363);
}else{
func_224(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 187, 1), "CELEB_LIST_TTL", &(uParam0->f_478), 0);
}}
if(bParam2){
func_225(2, 204, "CELEB_NAMES", &(uParam0->f_478), 1, 363);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
uParam0->f_477++;
}else{
uParam0->f_477=2;
}}
break;
case 1:
func_217(&(uParam0->f_476), &Var0, &(uParam0->f_478), func_223(&(uParam0->f_478)));
HUD::SET_MOUSE_CURSOR_THIS_FRAME();
PAD::SET_INPUT_EXCLUSIVE(2, 239);
PAD::SET_INPUT_EXCLUSIVE(2, 240);
PAD::SET_INPUT_EXCLUSIVE(2, 237);
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
uParam0->f_477=0;
}
break;
case 2:
func_217(&(uParam0->f_476), &Var0, &(uParam0->f_478), func_223(&(uParam0->f_478)));
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
uParam0->f_477=0;
}
break;
}}


void func_217(var uParam0, var uParam1, var uParam2, int iParam3){
bool bVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam3==1 || PAD::HAVE_CONTROLS_CHANGED(2)){
*uParam2=0;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
func_222(uParam2);
}
if(Global_1577898 < 2){
func_144(1);
}
if(*uParam2==0){
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar0=false;
bVar0=false;
while (bVar0 < uParam2->f_693){
if(MISC::IS_BIT_SET(uParam2->f_689, bVar0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
if(!MISC::IS_BIT_SET(uParam2->f_690, bVar0)){
iVar1=uParam2->f_1[bVar0 /*57*/].f_54;
iVar2=uParam2->f_1[bVar0 /*57*/].f_55;
iVar3=uParam2->f_1[bVar0 /*57*/].f_56;
func_221(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, 1));
if(iVar3 < 363){
func_221(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, 1));
}}else{
iVar4=uParam2->f_1[bVar0 /*57*/].f_54;
iVar5=uParam2->f_1[bVar0 /*57*/].f_55;
func_221(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, 1));
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
func_220(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
func_221(&(uParam2->f_1[bVar0 /*57*/]));
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16))){
func_221(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
func_220(&(uParam2->f_1[bVar0 /*57*/].f_32));
}
if(MISC::IS_PC_VERSION()){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
bVar0++;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
*uParam2=1;
}}
uParam2->f_695=0.05f;
uParam2->f_696=0.045f;
uParam2->f_697=0f;
uParam2->f_698=0f;
if(*uParam2==1){
func_219(*uParam0, uParam1);
}
func_218();
}


void func_218(){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}


void func_219(var uParam0, var uParam1){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}


void func_220(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_221(char* sParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}


void func_222(var uParam0){
uParam0->f_692=0;
}

int func_223(var uParam0){
return uParam0->f_692;
}


void func_224(char* sParam0, char* sParam1, var uParam2, char* sParam3){
int iVar0;
if(uParam2->f_693 >=12){
return;
}
iVar0=uParam2->f_693;
StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
uParam2->f_693++;
}


void func_225(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5){
bool bVar0;
if(uParam3->f_693 >=12){
return;
}
bVar0=uParam3->f_693;
StringCopy(&(uParam3->f_1[bVar0 /*57*/].f_32), sParam2, 16);
MISC::SET_BIT(&(uParam3->f_689), bVar0);
uParam3->f_1[bVar0 /*57*/].f_54=iParam0;
uParam3->f_1[bVar0 /*57*/].f_55=iParam1;
uParam3->f_1[bVar0 /*57*/].f_56=iParam5;
if(bParam4){
MISC::SET_BIT(&(uParam3->f_691), bVar0);
if(iParam5 < 363){
}}
uParam3->f_693++;
}


void func_226(var uParam0){
func_227(uParam0);
uParam0->f_692=1;
}


void func_227(var uParam0){
int iVar0;
*uParam0=0;
iVar0=0;
iVar0=0;
while (iVar0 < 12){
StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
uParam0->f_1[iVar0 /*57*/].f_36=0;
uParam0->f_1[iVar0 /*57*/].f_37=0;
StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
uParam0->f_1[iVar0 /*57*/].f_54=2;
uParam0->f_1[iVar0 /*57*/].f_55=363;
uParam0->f_1[iVar0 /*57*/].f_56=363;
iVar0++;
}
uParam0->f_686=0;
uParam0->f_687=0;
uParam0->f_688=0;
uParam0->f_689=0;
uParam0->f_691=0;
uParam0->f_690=0;
uParam0->f_692=0;
uParam0->f_693=0;
uParam0->f_695=0f;
uParam0->f_696=0f;
uParam0->f_697=0f;
uParam0->f_698=0f;
uParam0->f_699=1f;
}


bool func_228(char* sParam0, int iParam1, bool bParam2){
int iVar0;
bool bVar1;
bool bVar2;
if(!func_230(&iVar0, 1, iParam1)){
return 0;
}
bVar1=true;
StringCopy(&(Global_23270.f_6078[iVar0 /*4*/]), sParam0, 16);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_6078[iVar0 /*4*/]))){
HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23270.f_6078[iVar0 /*4*/]), 9);
Global_23270.f_6071[iVar0]=1;
if(!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23270.f_6078[iVar0 /*4*/]), 9)){
bVar1=false;
}}
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
Global_23270.f_6057[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")){
bVar1=false;
}
if(bParam2){
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
Global_23270.f_6064[iVar0]=1;
if(!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale")){
bVar1=false;
}}
bVar2=false;
StringCopy(&(Global_23270.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
bVar2=func_229(&(Global_23270.f_6103[iVar0 /*10*/]));
if(!bVar1 || !bVar2){}
return (bVar1 && bVar2);
}


bool func_229(var uParam0){
switch (uParam0->f_9){
case 0:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
uParam0->f_9=1;
if(uParam0->f_7){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}}}else{
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 1:
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_8=MISC::GET_GAME_TIMER();
uParam0->f_9=2;
}
break;
case 2:
if(!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
uParam0->f_9=0;
}
break;
}
return uParam0->f_9==2;
}

int func_230(var uParam0, bool bParam1, int iParam2){
char cVar0[64];
int iVar1;
int iVar2;
int iVar3;
if(iParam2==-1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()){
iParam2=NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
}}
StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
StringIntConCat(&cVar0, iParam2, 64);
iVar1=MISC::GET_HASH_KEY(&cVar0);
iVar3=-1;
iVar2=0;
while (iVar2 < 6){
if(Global_23270.f_6164[iVar2]==iVar1){
*uParam0=iVar2;
return 1;
}elseif(Global_23270.f_6164[iVar2]==0){
iVar3=iVar2;
}
iVar2++;
}
if(bParam1){
if(iVar3 !=-1){
Global_23270.f_6164[iVar3]=iVar1;
*uParam0=iVar3;
return 1;
}}
return 0;
}


struct<9> func_231(){
struct<9> Var0;
Var0.f_0=0.5f;
Var0.f_1=0.5f;
Var0.f_2=1f;
Var0.f_3=1f;
Var0.f_4=255;
Var0.f_5=255;
Var0.f_6=255;
Var0.f_7=200;
Var0.f_8=0f;
return Var0;
}


void func_232(var uParam0){
int iVar0;
char* sVar1;
int iVar2;
struct<4> Var3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
uParam0->f_36=0;
if(func_285(uParam0)){
GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
if(uParam0->f_27==0){
iVar8=0;
while (iVar8 < 32){
if(func_492(PLAYER::INT_TO_PLAYERINDEX(iVar8), 0, 1)){
iVar0=PLAYER::INT_TO_PLAYERINDEX(iVar8);
if(!func_1996(iVar0, 0)){
if(NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iVar0, PLAYER::PLAYER_ID())){
iVar6=iVar0;
iVar4=Global_1853910[iVar6 /*862*/].f_205.f_6;
iVar5=-1;
Var3={
func_281(iVar0) 
};
StringCopy(&(uParam0->f_1), PLAYER::GET_PLAYER_NAME(iVar0), 64);
iVar2=func_275(iVar0);
sVar1="";
if(iVar2 !=0){
sVar1=PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
}
func_241(20, &(uParam0->f_17), uParam0, iVar9, Var3, sVar1, iVar4, iVar5, 116, 0, -1, 0, 0, -1082130432, -1, -1);
iVar7=func_240(uParam0->f_38[iVar8 /*2*/], 0, 43);
func_239(&(uParam0->f_17), iVar9, iVar7, iVar4);
iVar9++;
}}}
iVar8++;
}
uParam0->f_27=2;
}
if(uParam0->f_27==2){
if(!MISC::IS_BIT_SET(uParam0->f_33, 1)){
func_238(&(uParam0->f_17), 0, 1);
MISC::SET_BIT(&(uParam0->f_33), true);
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_17)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_17, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}
if(func_234(uParam0)){
uParam0->f_27=0;
}}}else{
uParam0->f_27=0;
func_233();
}
GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}


void func_233(){
if(Global_1836592 !=0){
Global_1836592=0;
}}

int func_234(var uParam0){
int iVar0;
int iVar1;
struct<13> Var2;
int iVar3;
int iVar4;
iVar4=0;
iVar0=uParam0->f_37;
iVar3=PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
if(iVar3 !=func_237() && func_492(iVar3, 0, 1)){
Var2={
func_139(iVar3) 
};
iVar1=func_236(uParam0, uParam0->f_37);
if(func_83(Var2)){
switch (iVar1){
case 0:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_235(uParam0, iVar0, 2);
}}elseif(NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_235(uParam0, iVar0, 1);
}
break;
case 2:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2)){
iVar4=1;
func_235(uParam0, iVar0, 0);
}}else{
iVar4=1;
func_235(uParam0, iVar0, 0);
}
break;
case 1:
if(NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2)){
if(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_235(uParam0, iVar0, 0);
}}elseif(!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2)){
iVar4=1;
func_235(uParam0, iVar0, 0);
}
break;
}}}
uParam0->f_37++;
if(uParam0->f_37 >=32){
uParam0->f_37=0;
}
return iVar4;
}


void func_235(var uParam0, int iParam1, int iParam2){
uParam0->f_38[iParam1 /*2*/]=iParam2;
}


var func__236(var uParam0, int iParam1){
return uParam0->f_38[iParam1 /*2*/];
}

int func_237(){
return -1;
}


void func_238(var uParam0, bool bParam1, int iParam2){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(iParam2==1){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW")){
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_239(var uParam0, bool bParam1, bool bParam2, bool bParam3){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
if(bParam2==65){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}

int func_240(int iParam0, bool bParam1, int iParam2){
int iVar0;
iVar0=65;
switch (iParam2){
case 21:
iVar0=0;
break;
}
if(bParam1){
iVar0=116;
}
switch (iParam0){
case 2:
return 47;
case 1:
return 49;
default:
}
return iVar0;
}


void func_241(int iParam0, var uParam1, var uParam2, bool bParam3, char[16] cParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, char* sParam11, bool bParam12, float fParam13, int iParam14, int iParam15){
char* sVar0;
bool bVar1;
bool bVar2;
bool bVar3;
bool bVar4;
if(iParam8==194){
iParam8=12;
}
if(iParam3 >=func_274() && iParam3 < func_273()){
iParam3=(iParam3 % 16);
if(func_272(iParam0)){
func_252(iParam0, uParam1, uParam2, iParam3, cParam4, sParam5, iParam6, iParam7, iParam8, iParam9, fParam13, iParam14, iParam15);
}else{
sVar0="SET_DATA_SLOT";
if(Global_1836592==1){
sVar0="UPDATE_SLOT";
}
bVar1=iParam0==20;
bVar2=iParam0==21;
bVar3=func_251(iParam0);
bVar4=func_250(iParam0);
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
if(MISC::IS_BIT_SET(uParam2->f_33, 8)){
func_206("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
func_206(&(uParam2->f_1));
if(MISC::IS_BIT_SET(uParam2->f_33, 1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(28);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam8);
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_115);
if(MISC::IS_BIT_SET(uParam2->f_33, 8)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(116);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
}
if(iParam9==1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
func_245(iParam0, uParam2, bParam3, iParam7, sParam5, sParam11, bParam12, bParam10);
if(bVar1 || bVar2){
if(!MISC::IS_BIT_SET(Global_4718592.f_27, 15)){
func_206(&cParam4);
}else{
func_206("");
}}elseif(!bVar3){
func_220("");
}
if(!bVar3 && !bVar4){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL((bVar1 || bVar2));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
if(iParam9==1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
func_206("");
func_206("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
}
if(bVar1 || bVar2){
if(func_244(uParam2)){
func_220("DPAD_FRIEND");
}
elseif(func_243(uParam2)){
func_220("DPAD_FRIEND");
}
elseif(func_242(uParam2)){
func_220("DPAD_CREW");
}
else{
func_220("");
}}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}}


bool func_242(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 6);
}


bool func_243(var uParam0){
return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

int func_244(var uParam0){
if(func_243(uParam0) && func_242(uParam0)){
return 1;
}
return 0;
}


void func_245(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5, bool bParam6, int iParam7){
switch (iParam0){
case 4:
case 26:
case 5:
case 6:
case 8:
case 9:
case 10:
case 30:
case 33:
func_248(uParam1, iParam3, iParam2);
break;
case 11:
if(iParam7==-2){
func_220("");
}elseif(bParam6){
func_206(sParam5);
}else{
func_220(sParam5);
}
break;
case 3:
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("DPAD_SURV");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
break;
case 13:
case 12:
case 14:
case 15:
case 16:
case 17:
case 18:
case 29:
case 32:
case 34:
case 35:
case 36:
case 37:
case 39:
if(func_247()){
if(iParam3 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_220("");
}}elseif(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
if((iParam3 !=0 && !MISC::IS_BIT_SET(uParam1->f_33, 2)) && iParam0==29){
if(uParam1->f_26==1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING("v");
}elseif(uParam1->f_26==0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_246(iParam3, 0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam3, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}}elseif(iParam0 !=29){
if(!MISC::IS_BIT_SET(Global_4718592.f_27, 15)){
if(bParam6){
func_206(sParam5);
}
else{
func_220(sParam5);
}}else{
func_220("");
}}}elseif(MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
if(iParam3 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_220("");
}}else{
func_220("");
}
break;
case 31:
case 38:
case 41:
if(MISC::IS_BIT_SET(Global_4718592.f_31, 6)){
func_220("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
}
break;
default:
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam3);
break;
}}


char* func_246(int iParam0, bool bParam1){
if(!bParam1 && iParam0 > 0){
return "SPLIT_BEHIND";
}
return "STRING";
}


bool func_247(){
return MISC::IS_BIT_SET(Global_4718592.f_16, 29);
}


void func_248(var uParam0, int iParam1, int iParam2){
bool bVar0;
bool bVar1;
bVar0=MISC::IS_BIT_SET(uParam0->f_33, 4);
if(MISC::IS_BIT_SET(uParam0->f_33, 1)){
if(uParam0->f_30 !=0){
bVar1=MISC::IS_BIT_SET(uParam0->f_33, 3);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_246(uParam0->f_30, bVar1));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_30, 7);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_220("");
}}elseif(!MISC::IS_BIT_SET(uParam0->f_33, 2) || func_249(iParam2)){
if(iParam1 !=0){
if(!MISC::IS_BIT_SET(uParam0->f_33, 9)){
switch (uParam0->f_26){
case 1:
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING("v");
break;
case 2:
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING("^");
break;
default:
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_246(iParam1, bVar0));
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam1, 2055);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
break;
}}else{
func_220("");
}}else{
func_220("");
}}else{
func_220("");
}}

int func_249(int iParam0){
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 8:
case 10:
case 12:
case 14:
return 1;
break;
}
return 0;
}

int func_250(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 40:
case 42:
return 1;
default:
}
return 0;
}

int func_251(int iParam0){
switch (iParam0){
case 4:
case 5:
case 6:
case 7:
case 8:
case 26:
case 11:
return 1;
default:
}
return 0;
}


void func_252(int iParam0, var uParam1, var uParam2, bool bParam3, char[4] cParam4, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, float fParam13, int iParam14, int iParam15){
char* sVar0;
int iVar1;
sVar0="SET_DATA_SLOT";
if(Global_1836592==1){
sVar0="UPDATE_SLOT";
}
iVar1=PLAYER::INT_TO_PLAYERINDEX(iParam15);
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
if(MISC::IS_BIT_SET(uParam2->f_33, 8)){
func_206("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
}
func_206(&(uParam2->f_1));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
if(iParam12==1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam3 + 1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
if(iParam14 !=-1){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(fParam13 !=-1f){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}elseif(iParam10 !=-1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
}else{
func_206("");
}
if(iParam0==40){
func_206("");
}else{
func_206(&cParam4);
}
func_253(uParam2, iVar1);
if(iParam12==1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_206("");
func_206("");
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
}
if(func_244(uParam2)){
func_220("DPAD_FRIEND");
}elseif(func_243(uParam2)){
func_220("DPAD_FRIEND");
}elseif(func_242(uParam2)){
func_220("DPAD_CREW");
}else{
func_220("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


void func_253(var uParam0, int iParam1){
if(func_270(iParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
}elseif(func_258(iParam1)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
}elseif(((MISC::IS_BIT_SET(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2657589[iParam1 /*466*/].f_436, 0)){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
}else{
if(func_254()){
uParam0->f_36=0;
}
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
}}

int func_254(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
if(func_256() || func_255()){
return 1;
}}
return 0;
}


bool func_255(){
return Global_2683864.f_17;
}


bool func_256(){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return func_255();
}
return func_257(Global_4718592.f_113724);
}

int func_257(int iParam0){
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

int func_258(int iParam0){
if((func_492(iParam0, 0, 1) && func_262()) && func_259(iParam0, 1)){
return 1;
}
return 0;
}

int func_259(int iParam0, bool bParam1){
return func_260(iParam0, bParam1, 1);
}

int func_260(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(iParam0==func_237()){
return 0;
}
if(!bParam1){
if(func_261(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1894573[iParam0 /*608*/].f_10;
if(iVar0 !=func_237() && Global_1894573[iVar0 /*608*/].f_10.f_428==iParam2){
return 1;
}
return 0;
}

int func_261(int iParam0, int iParam1){
if(iParam0 !=func_237()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_237()){
if(Global_1894573[iParam0 /*608*/].f_10==iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428==iParam1){
return 1;
}}}
return 0;
}

int func_262(){
if(func_269(PLAYER::PLAYER_ID()) || func_266()){
if(!func_263(PLAYER::PLAYER_ID())){
return 0;
}}
return 1;
}

int func_263(int iParam0){
if(func_265(iParam0)==236 || func_265(iParam0)==150){
return func_264(iParam0);
}
return 0;
}

int func_264(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1894573[iVar0 /*608*/].f_1, 7);
}
return 0;
}

int func_265(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/];
}
return -1;
}

int func_266(){
switch (func_267(PLAYER::PLAYER_ID())){
case 193:
case 194:
case 199:
case 205:
case 210:
case 188:
return 1;
default:
}
return 0;
}

int func_267(int iParam0){
if(func_268(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_33;
}
return -1;
}

int func_268(int iParam0, int iParam1){
if(Global_1894573[iParam0 /*608*/].f_10.f_33 !=-1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 !=-1)){
return 1;
}
return 0;
}

int func_269(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1894573[iVar0 /*608*/] !=-1;
}
return 0;
}

int func_270(int iParam0){
if(func_254()){
if(func_492(iParam0, 0, 1)){
return func_271(iParam0);
}}
if((func_492(iParam0, 0, 1) && func_262()) && func_261(iParam0, 0)){
return 1;
}
return 0;
}

int func_271(int iParam0){
if(iParam0 !=func_237()){
if(Global_1894573[iParam0 /*608*/].f_10 !=func_237()){
return Global_1894573[iParam0 /*608*/].f_10==iParam0;
}}
return 0;
}

int func_272(int iParam0){
switch (iParam0){
case 20:
case 21:
case 27:
case 28:
case 40:
return 1;
default:
}
return 0;
}

int func_273(){
int iVar0;
if(Global_1836370){
iVar0=32;
}else{
iVar0=16;
}
return iVar0;
}

int func_274(){
int iVar0;
iVar0=0;
if(Global_1836370){
iVar0=16;
}
return iVar0;
}

int func_275(int iParam0){
int iVar0;
iVar0=func_278(iParam0);
if(iVar0==-1){
func_276(iParam0, 1);
return 0;
}
Global_1666668[iVar0 /*5*/].f_4=1;
return Global_1666668[iVar0 /*5*/].f_2;
}


void func_276(int iParam0, bool bParam1){
if(!func_492(iParam0, 0, 1)){
return;
}
if(func_278(iParam0) !=-1){
return;
}
if(Global_1666831){
if(iParam0==Global_1666831.f_1){
return;
}}
if(func_277(iParam0)){
return;
}
if(Global_1666869 >=32){
return;
}
Global_1666836[Global_1666869]=iParam0;
Global_1666869++;
if(bParam1){}}

int func_277(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666869){
if(Global_1666836[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_278(int iParam0){
int iVar0;
if(!func_492(iParam0, 0, 1)){
return -1;
}
if(Global_1666829==0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_1666829){
if(Global_1666668[iVar0 /*5*/].f_1==iParam0){
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666668[iVar0 /*5*/].f_2)){
return iVar0;
}
func_279(iVar0);
return -1;
}
iVar0++;
}
return -1;
}


void func_279(int iParam0){
char cVar0[64];
char cVar1[64];
int iVar2;
int iVar3;
if(iParam0 >=Global_1666829){
return;
}
if(PED::IS_PEDHEADSHOT_VALID(Global_1666668[iParam0 /*5*/].f_2)){
StringCopy(&cVar0, "CHAR_DEFAULT", 64);
if(Global_1666668[iParam0 /*5*/].f_2 !=0){
StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666668[iParam0 /*5*/].f_2), 64);
HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
}
PED::UNREGISTER_PEDHEADSHOT(Global_1666668[iParam0 /*5*/].f_2);
}
iVar2=iParam0;
iVar3=iVar2 + 1;
while (iVar3 < Global_1666829){
Global_1666668[iVar2 /*5*/]={
Global_1666668[iVar3 /*5*/] 
};
iVar2++;
iVar3++;
}
func_280(&(Global_1666668[iVar2 /*5*/]));
Global_1666829=(Global_1666829 - 1);
}


void func_280(var uParam0){
*uParam0=0;
uParam0->f_1=func_237();
uParam0->f_2=0;
uParam0->f_4=0;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uParam0->f_3=NETWORK::GET_NETWORK_TIME();
}}


struct<4> func_281(int iParam0){
char cVar0[32];
if(func_492(iParam0, 0, 1)){
Global_2764203={
func_139(iParam0) 
};
if(func_103()){
if(func_83(Global_2764203)){
if(!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2764203)){
return cVar0;
}}}elseif(!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)){
return cVar0;
}
if(func_284(&Global_2764203)){
Global_2764133={
func_282(iParam0) 
};
func_101(&Global_2764133, &cVar0);
}}
return cVar0;
}
struct<35> func_282(int iParam0){
struct<13> Var0;
struct<35> Var1;
if(func_283(iParam0)){
return Global_1575092[PLAYER::PLAYER_ID() /*35*/];
}
Var0={
func_139(iParam0) 
};
NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
return Var1;
}

int func_283(int iParam0){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}
return 0;
}

int func_284(var uParam0){
if(PLAYER::IS_PLAYER_ONLINE()){
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0)){
return 1;
}}
return 0;
}

int func_285(var uParam0){
func_292();
if(!func_132(&(uParam0->f_19))){
if(PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 187) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203))){
func_291(&(uParam0->f_17));
func_91(&(uParam0->f_19), 0, 0);
func_290(uParam0, 0);
}}elseif(func_132(&(uParam0->f_19))){
if((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 187) && !func_289()) || ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203)) && !func_289())){
func_290(uParam0, 1);
return 0;
}elseif(MISC::IS_BIT_SET(uParam0->f_33, 0)){
return 1;
}elseif(func_291(&(uParam0->f_17))){
func_288(&(uParam0->f_17), 0, 0);
func_286(&(uParam0->f_17), "CELEB_LIST", 1);
MISC::SET_BIT(&(uParam0->f_33), false);
}}
return 0;
}


void func_286(var uParam0, char* sParam1, int iParam2){
int iVar0;
int iVar1;
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
func_220(sParam1);
if(func_287() && iParam2){
if(func_289()){
iVar0=2;
iVar1=2;
}else{
iVar0=1;
iVar1=2;
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}else{
func_220("");
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}

int func_287(){
if(Global_1836369 > 16){
return 1;
}
return 0;
}


void func_288(var uParam0, bool bParam1, bool bParam2){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}


bool func_289(){
return Global_1836370;
}


void func_290(var uParam0, bool bParam1){
MISC::CLEAR_BIT(&(uParam0->f_33), true);
uParam0->f_27=0;
if(bParam1){
if(func_132(&(uParam0->f_19))){
func_92(&(uParam0->f_19));
}}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_17)){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_17));
}
if(MISC::IS_BIT_SET(uParam0->f_33, 0)){
MISC::CLEAR_BIT(&(uParam0->f_33), false);
}}


bool func_291(var uParam0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0);
}


void func_292(){
int iVar0;
Global_1653913.f_1047=0;
iVar0=0;
while (iVar0 <=31){
Global_1653913.f_170[iVar0]=0;
iVar0++;
}
Global_2793046.f_4629=1;
}


void func_293(){
int iVar0;
NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(1);
iVar0=0;
while (iVar0 < 32){
if(func_492(iVar0, 0, 1)){
NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, 1);
}
iVar0++;
}}


void func_294(var uParam0){
int iVar0;
int iVar1;
iVar1=uParam0->f_419;
iVar0=ceil(uParam0->f_448);
iVar0 *=1000;
if(uParam0->f_419 < iVar0){
uParam0->f_419=(iVar0 - 1500);
}
if(uParam0->f_419 < iVar1){
uParam0->f_419=iVar1;
}
if(iVar0 < uParam0->f_419){
uParam0->f_1196=1;
}}


void func_295(var uParam0){
uParam0->f_453=0;
Global_1574971=0;
func_92(&(uParam0->f_454));
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade")){
GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
}}


void func_296(bool bParam0, bool bParam1){
if(bParam0){
func_299();
func_298(1, 0, 1, 0);
CAM::SET_WIDESCREEN_BORDERS(1, 0);
}else{
if(bParam1){
func_297();
func_298(0, 0, 1, 0);
}
CAM::SET_WIDESCREEN_BORDERS(0, 0);
}
Global_1935176=bParam0;
if(bParam0==0){
Global_1935178=0;
}}


void func_297(){
if(Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=0;
}}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && iParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_299(){
if(!Global_2672505.f_947.f_10){
Global_2672505.f_947.f_10=1;
}}

int func_300(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6){
struct<3> Var0;
struct<3> Var1;
float fVar2;
struct<16> Var3;
var uVar4;
if(uParam1->f_420==uParam1->f_420){
uParam1->f_420=uParam1->f_420;
}
if(iParam4==iParam4){
iParam4=iParam4;
}
if(bParam5){
bParam5=bParam5;
}
if(bParam6){
bParam6=bParam6;
}
Var0={
func_307() 
};
Var1={
func_306() 
};
fVar2=func_305();
Var3={
func_304(uParam0) 
};
uVar4=func_302(uParam0);
if(func_188()){
func_182(uParam0, 0, &Var0, &Var1, 0);
if(!CAM::DOES_CAM_EXIST(uParam1->f_1224)){
uParam1->f_1224=CAM::CREATE_CAMERA(964613260, 1);
}
CAM::PLAY_CAM_ANIM(uParam1->f_1224, uVar4, &Var3, Var0, Var1, 0, 2);
if(!CAM::IS_CAM_ACTIVE(uParam1->f_1224)){
CAM::SET_CAM_ACTIVE(uParam1->f_1224, 1);
}
if(!CAM::IS_CAM_RENDERING(uParam1->f_1224)){
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
}}else{
if(!CAM::DOES_CAM_EXIST(*uParam2)){
*uParam2=CAM::CREATE_CAMERA(26379945, 1);
}
if(bParam6){
CAM::SET_CAM_COORD(*uParam2, 415.2375f, -979.8f, -99.0575f);
CAM::SET_CAM_ROT(*uParam2, 6.9325f, -1.35f, 21.34f, 2);
CAM::SET_CAM_FOV(*uParam2, 47.27f);
}else{
CAM::SET_CAM_COORD(*uParam2, Var0);
CAM::SET_CAM_ROT(*uParam2, Var1, 2);
CAM::SET_CAM_FOV(*uParam2, fVar2);
}
CAM::SET_CAM_NEAR_CLIP(*uParam2, 0.01f);
func_301(uParam2, 0.3f);
CAM::SET_CAM_DOF_FNUMBER_OF_LENS(*uParam2, 250f);
CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(*uParam2, 0f);
CAM::SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(*uParam2, 1f);
if(!CAM::IS_CAM_ACTIVE(*uParam2)){
CAM::SET_CAM_ACTIVE(*uParam2, 1);
}
if(!CAM::IS_CAM_RENDERING(*uParam2)){
CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
}}
if(bParam3){
func_687(1, 1, 1, 0, 0, 0, 0);
}
return 1;
}


void func_301(var uParam0, float fParam1){
if(func_188()){
return;
}
CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam1);
}


char* func_302(var uParam0){
char* sVar0;
sVar0="PODIUM_CAM_1";
if(func_303(uParam0)){
sVar0="FLAT_CAM_1";
}
return sVar0;
}


bool func_303(var uParam0){
return *uParam0==1;
}
struct<16> func_304(var uParam0){
struct<16> Var0;
StringCopy(&Var0, "anim@arena@celeb@podium@no_prop@", 64);
if(func_303(uParam0)){
StringCopy(&Var0, "anim@arena@celeb@flat@paired@no_props@", 64);
}
return Var0;
}


float func_305(){
if(func_187()){
return 45f;
}
if(func_188()){
return 51.4505f;
}
return 39f;
}


Vector3 func__306(){
if(func_187()){
return 0.1831f, 0.0223f, -99.9511f;
}
if(func_188()){
return 6.1166f, -0.1429f, 44.3658f;
}
return 2.5875f, -0.2f, 21.82f;
}


Vector3 func__307(){
if(func_187()){
return 4519.42f, -4486.819f, 4.1106f;
}
if(func_188()){
return 2968.062f, -3879.586f, 141.3566f;
}
return 416.0675f, -981.35f, -99.0175f;
}

int func_308(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char[4] cParam5, char* sParam6, int iParam7, int iParam8){
int iVar0;
int iVar1[8];
iVar0=0;
while (iVar0 < iVar1){
iVar1[iVar0]=func_237();
iVar0++;
}
iVar1[0]=iParam2;
if(func_312(&uLocal_173, uParam0, &iVar1, 0, 0, 0, 0, 0, 0, 0, 0, iParam8, 0)){
func_680(uParam0, sParam1, sParam4, 1, 0);
uParam0->f_419=MISC::GET_GAME_TIMER() + 3500;
func_309(uParam0, sParam1, iParam3, cParam5, sParam6, "", iParam7, 0, 0, 0, 0);
uParam0->f_419 +=2333;
if(MISC::ABSI(iParam7) > 0){
uParam0->f_419 +=2333;
}
func_675(uParam0, sParam1, -1, 0);
func_674(uParam0, sParam1);
AUDIO::START_AUDIO_SCENE("MP_JOB_CHANGE_RADIO_MUTE");
uParam0->f_424=iParam2;
return 1;
}
return 0;
}


void func_309(var uParam0, char* sParam1, int iParam2, char[4] cParam3, char* sParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10){
char[] cVar0[8];
if(iParam2==0){
if(bParam9){
cVar0="CELEB_FINCOMP";
}elseif(bParam8){
cVar0="CELEB_WINNERS";
}else{
cVar0="CELEB_WINNER";
}}elseif(iParam2==1){
cVar0="CELEB_LOSER";
}elseif(iParam2==3){
cVar0="CELEB_PASSED";
}elseif(iParam2==4){
cVar0="CELEB_FAILED";
}else{
cVar0="CELEB_DRAW";
cParam3="";
sParam4="";
}
if(!func_311() || !func_310(PLAYER::PLAYER_ID())){
sParam4="";
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_WINNER_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(!bParam9){
func_206(cVar0);
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2684801.f_3480.f_60));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
func_206(cParam3);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(bParam10){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_WINNER_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(!bParam9){
func_206(cVar0);
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2684801.f_3480.f_60));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(cParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(bParam10){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_WINNER_TO_WALL");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(!bParam9){
func_206(cVar0);
}else{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cVar0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2684801.f_3480.f_60));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(cParam3);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bParam6);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
if(bParam10){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_310(int iParam0){
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
if(MISC::IS_PS3_VERSION() || func_104()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
if(MISC::IS_XBOX360_VERSION() || func_103()){
if(iParam0==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, 1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)){
return 1;
}}else{
Var1={
func_139(iParam0) 
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

int func_311(){
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
if(func_104()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}elseif(func_103()){
if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1)){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}


bool func_312(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12){
bool bVar0;
bool bVar1;
bool bVar2;
struct<3> Var3;
struct<3> Var4;
int iVar5;
char* sVar6;
char[] cVar7[8];
int iVar8;
bool bVar9;
var uVar10;
char* sVar11;
char[] cVar12[8];
struct<16> Var13;
bool bVar14;
int iVar15;
bool bVar16;
int iVar17;
int iVar18;
struct<3> Var19;
struct<3> Var20;
int iVar21;
struct<3> Var22;
bVar0=true;
if(iParam4==iParam4){
iParam4=iParam4;
}
if(iParam4==iParam4){
iParam4=iParam4;
}
if(func_188()){
bParam6=false;
bVar14=true;
func_491(uParam0, &sVar11, &cVar12, 0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(&sVar11)){
STREAMING::REQUEST_ANIM_DICT(&sVar11);
}
Var13={
func_304(uParam0) 
};
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Var13)){
STREAMING::REQUEST_ANIM_DICT(&Var13);
}}
if(!ENTITY::DOES_ENTITY_EXIST(uParam1->f_21)){
if(bParam6){
if(iParam3==0){
if(bParam8){
if(uParam1->f_42.f_66 !=0){
if(func_490(uParam1->f_42.f_66)){
iVar5=1;
}}else{
iVar5=1;
}}else{
iVar5=1;
}}elseif(iParam10 !=0){
uParam1->f_42.f_66=iParam10;
if(func_490(uParam1->f_42.f_66)){
iVar5=1;
}}else{
iVar5=1;
}}else{
iVar5=1;
}
if(bParam7){
bVar2=true;
}else{
bVar2=true;
}
bVar9=func_486(0);
if((bVar9 && bVar2) && iVar5){
if(iParam3 !=0){
func_181(uParam0, 0, &Var3, &Var4, bParam6, 1, bParam9);
func_433(&(uParam1->f_23[0]), iParam3, Var3, Var4.f_2, -1, 1, 1);
}else{
iVar15=0;
iVar17=0;
while (iVar17 < *iParam2){
if(*iParam2)[iVar17]==func_237(){
}
iVar17++;
}
bVar1=false;
while (bVar1 < *iParam2){
if(*iParam2)[bVar1] !=func_237(){
if(func_492((*iParam2)[bVar1], 0, 1)){
StringCopy(&(uParam1->f_145[bVar1 /*16*/]), PLAYER::GET_PLAYER_NAME((*iParam2)[bVar1]), 64);
uParam1->f_402[bVar1]=(*iParam2)[bVar1];
if((iParam5 !=0 && bVar1 < 2) || iParam5==0){
iVar18=PLAYER::GET_PLAYER_PED((*iParam2)[bVar1]);
if(ENTITY::DOES_ENTITY_EXIST(iVar18)){
bVar16=false;
if(!bParam12){
if(bVar1==0){
bVar16=func_417(iVar18, Global_2657589[(*iParam2)[bVar1] /*466*/].f_260, Global_2657589[(*iParam2)[bVar1] /*466*/].f_261, 1, 0, 0);
}
}
func_181(uParam0, bVar1, &Var3, &Var4, bParam6, 0, bParam9);
func_433(&(uParam1->f_23[iVar15]), iVar18, Var3, 0f, (*iParam2)[bVar1], bVar16, bVar1==0);
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_23[bVar1])){
if(!ENTITY::IS_ENTITY_DEAD(uParam1->f_23[bVar1], 0)){
ENTITY::SET_ENTITY_ROTATION(uParam1->f_23[bVar1], Var4, 2, 1);
uVar10=func_416(Global_1853910[(*iParam2)[bVar1] /*862*/].f_266);
if(!bVar14){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam1->f_23[bVar1], uVar10, 0);
}
}
}
iVar15++;
}}
}}
bVar1++;
}
if(iVar15==0){
bVar16=func_417(uParam1->f_23[0], Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_260, Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_261, 1, 0, 0);
func_181(uParam0, 0, &Var3, &Var4, bParam6, 0, bParam9);
func_433(&(uParam1->f_23[0]), PLAYER::PLAYER_PED_ID(), Var3, Var4.f_2, PLAYER::PLAYER_ID(), bVar16, 1);
if(!PED::IS_PED_INJURED(uParam1->f_23[0]) && !bVar14){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam1->f_23[0], func_416(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_266), 0);
}}}
if(bParam6){
if(bParam8 || iParam3 !=0){
if(uParam1->f_42.f_66 !=0 && uParam1->f_42.f_66 !=joaat("rallytruck")){
if(!ENTITY::DOES_ENTITY_EXIST(uParam1->f_40)){
func_411(uParam1->f_42.f_66, &Var19, &(Var20.f_2), bParam9);
uParam1->f_40=VEHICLE::CREATE_VEHICLE(uParam1->f_42.f_66, Var19, Var20.f_2, 0, 0, 0);
func_338(uParam1->f_40, &(uParam1->f_42), 1, 1, 0);
if(!ENTITY::IS_ENTITY_DEAD(uParam1->f_40, 0)){
ENTITY::SET_ENTITY_COORDS(uParam1->f_40, Var19, 1, 0, 0, 1);
ENTITY::SET_ENTITY_ROTATION(uParam1->f_40, Var20, 2, 1);
ENTITY::SET_ENTITY_DYNAMIC(uParam1->f_40, 0);
ENTITY::SET_ENTITY_COLLISION(uParam1->f_40, false, 0);
ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_40, true);
}
}}else{
if(uParam1->f_42.f_66==0){
}
if(uParam1->f_42.f_66==joaat("rallytruck")){
}}}}
iVar21=uParam1->f_23;
bVar1=false;
while (bVar1 < iVar21){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_23[bVar1])){
if(!PED::IS_PED_INJURED(uParam1->f_23[bVar1])){
if(!MISC::IS_BIT_SET(uParam1->f_1205, bVar1)){
ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_23[bVar1], true);
PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam1->f_23[bVar1], 0);
PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam1->f_23[bVar1], 0);
func_336(&sVar6, &cVar7, &iVar8, 0);
TASK::TASK_PLAY_ANIM(uParam1->f_23[bVar1], &sVar6, &cVar7, 8f, -8f, -1, 2057, iVar8, 0, 0, 0);
MISC::SET_BIT(&(uParam1->f_1205), bVar1);
if(!uParam1->f_458[bVar1]){
PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->f_23[bVar1], 0, 0);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_23[bVar1], 1);
uParam1->f_458[bVar1]=1;
}
}}}
bVar1++;
}}else{
if(bVar9){
}
if(bVar2){
}
bVar0=false;
}}
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_23[0])){
Var22={
ENTITY::GET_ENTITY_COORDS(uParam1->f_23[0], 1) 
};
if(func_188()){
if(func_185(uParam0)){
if(!ENTITY::DOES_ENTITY_EXIST(uParam1->f_446)){
func_332(&(uParam1->f_446));
bVar0=false;
}}
func_331(uParam1);
if(uParam0->f_39 > 0){
bVar1=false;
while (bVar1 < uParam0->f_39){
if(!func_322(uParam0, &(uParam1->f_442[bVar1]), func_330(bVar1), func_325(uParam0, bVar1), func_324(bVar1))){
bVar0=false;
}
bVar1++;
}
bVar1=false;
while (bVar1 < uParam0->f_39){
if(func_318(uParam0, uParam0->f_1[bVar1])){
func_314(uParam0->f_1[bVar1], uParam1->f_23[bVar1], uParam1->f_442[bVar1]);
}
bVar1++;
}}}else{
if(func_187()){
func_313(uParam1);
}
if(!func_180(&(uParam1->f_441), iParam11, bParam9, Var22)){
bVar0=false;
}}}
bVar1=false;
while (bVar1 < uParam1->f_23){
if(ENTITY::DOES_ENTITY_EXIST(uParam1->f_23[bVar1])){
if(!PED::IS_PED_INJURED(uParam1->f_23[bVar1])){
if(!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_23[bVar1])){
bVar0=false;
}
if(!PED::HAS_PED_HEAD_BLEND_FINISHED(uParam1->f_23[bVar1])){
bVar0=false;
}}}
bVar1++;
}
if(bVar0){
MISC::CLEAR_AREA(Var3, 20f, 1, 0, 0, 0);
MISC::CLEAR_AREA_OF_OBJECTS(Var3, 20f, 0);
MISC::CLEAR_AREA_OF_PROJECTILES(Var3, 20f, 0);
GRAPHICS::REMOVE_DECALS_IN_RANGE(Var3, 20f);
uParam1->f_1197=1;
}
return bVar0;
}


void func_313(var uParam0){
int iVar0;
struct<3> Var1;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1226)){
iVar0=joaat("reh_prop_celebration_lp");
if(func_490(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0])){
Var1={
ENTITY::GET_ENTITY_COORDS(uParam0->f_23[0], 1) 
};
Var1.f_2=(Var1.f_2 - 1.05f);
uParam0->f_1226=OBJECT::CREATE_OBJECT(iVar0, Var1, 0, 1, 0);
ENTITY::SET_ENTITY_HEADING(uParam0->f_1226, 255f);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}}


void func_314(int iParam0, int iParam1, int iParam2){
if(ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam2, iParam1, PED::GET_PED_BONE_INDEX(iParam1, func_315(iParam0)), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
}}

int func_315(int iParam0){
if(func_317(iParam0) || func_316(iParam0)){
return 60309;
}
return 28422;
}

int func_316(int iParam0){
switch (iParam0){
case 127:
return 1;
default:
}
return 0;
}

int func_317(int iParam0){
switch (iParam0){
case 30:
case 31:
case 32:
case 57:
case 58:
case 59:
case 64:
case 65:
case 66:
return 1;
default:
}
return 0;
}

int func_318(var uParam0, int iParam1){
if(func_321(iParam1)){
return 0;
}
if(func_320(iParam1)){
return 1;
}
if(func_319(iParam1)){
return 1;
}
if(func_317(iParam1)){
return 1;
}
return 0;
}

int func_319(int iParam0){
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 84:
case 85:
case 86:
return 1;
default:
}
return 0;
}

int func_320(int iParam0){
switch (iParam0){
case 107:
case 108:
case 127:
case 128:
return 1;
default:
}
return 0;
}

int func_321(int iParam0){
switch (iParam0){
case 80:
case 81:
case 82:
case 83:
case 100:
case 101:
case 102:
case 103:
case 84:
case 85:
case 86:
case 104:
case 105:
case 106:
return 1;
default:
}
return 0;
}


bool func_322(var uParam0, var uParam1, struct<3> Param2, int iParam3, float fParam4){
if(ENTITY::DOES_ENTITY_EXIST(*uParam1)){
return 1;
}
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 0) + 1);
if(func_323(uParam0)){
*uParam1=OBJECT::CREATE_OBJECT(iParam3, Param2, 0, 0, 0);
ENTITY::SET_ENTITY_HEADING(*uParam1, fParam4);
}}else{
return 1;
}
return ENTITY::DOES_ENTITY_EXIST(*uParam1);
}

int func_323(var uParam0){
bool bVar0;
var uVar1[3];
if(uParam0->f_39 > 0){
bVar0=false;
while (bVar0 < uParam0->f_39){
uVar1[bVar0]=func_325(uParam0, bVar0);
STREAMING::REQUEST_MODEL(uVar1[bVar0]);
if(!STREAMING::HAS_MODEL_LOADED(uVar1[bVar0])){
return 0;
}
bVar0++;
}}
return 1;
}


float func_324(bool bParam0){
switch (bParam0){
case 0:
return 48f;
case 1:
return 48f;
default:
}
return 48f;
}

int func_325(var uParam0, bool bParam1){
if(func_329(uParam0->f_1[bParam1])){
return joaat("prop_beer_logger");
}elseif(func_316(uParam0->f_1[bParam1])){
return joaat("prop_cash_pile_02");
}elseif(func_328(uParam0->f_1[bParam1])){
return joaat("prop_cs_ciggy_01b");
}
if(func_319(uParam0->f_1[bParam1])){
return func_327(uParam0->f_1[bParam1]);
}
if(func_326(uParam0->f_1[bParam1])){
return joaat("prop_champ_01b");
}
if(func_317(uParam0->f_1[0])){
return joaat("xs_prop_arena_confetti_cannon");
}
return 0;
}

int func_326(int iParam0){
switch (iParam0){
case 26:
case 27:
case 28:
case 29:
case 53:
case 54:
case 55:
case 56:
case 60:
case 61:
case 62:
case 63:
case 80:
case 100:
case 81:
case 101:
case 82:
case 102:
case 83:
case 103:
return 1;
default:
}
return 0;
}

int func_327(int iParam0){
switch (iParam0){
case 0:
case 3:
case 1:
case 4:
case 2:
case 5:
switch (Global_4718592.f_160097){
case 3:
return joaat("xs_prop_arena_trophy_single_01a");
case 1:
return joaat("xs_prop_arena_trophy_single_01b");
case 2:
return joaat("xs_prop_arena_trophy_single_01c");
default:
}
break;
case 84:
case 85:
case 86:
switch (Global_4718592.f_160097){
case 1:
return joaat("xs_prop_arena_trophy_double_01a");
case 2:
return joaat("xs_prop_arena_trophy_double_01b");
case 3:
return joaat("xs_prop_arena_trophy_double_01c");
default:
}
break;
}
return joaat("xs_prop_arena_trophy_single_01a");
}

int func_328(int iParam0){
switch (iParam0){
case 128:
return 1;
default:
}
return 0;
}

int func_329(int iParam0){
switch (iParam0){
case 107:
case 108:
return 1;
default:
}
return 0;
}


Vector3 func__330(bool bParam0){
switch (bParam0){
case 0:
return 2967.028f, -3875.953f, 139.9974f;
case 1:
return 2967.028f, -3875.953f, 139.9974f;
default:
}
return 0f, 0f, 0f;
}


void func_331(var uParam0){
int iVar0;
struct<3> Var1;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1225)){
iVar0=joaat("exile1_lightrig");
if(func_490(iVar0)){
if(ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0])){
Var1={
ENTITY::GET_ENTITY_COORDS(uParam0->f_23[0], 1) 
};
uParam0->f_1225=OBJECT::CREATE_OBJECT(iVar0, Var1, 0, 1, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
}}}}


bool func_332(var uParam0){
struct<3> Var0;
int iVar1;
float fVar2;
Var0={
func_335() 
};
iVar1=func_334();
fVar2=func_333();
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
return 1;
}
STREAMING::REQUEST_MODEL(iVar1);
if(STREAMING::HAS_MODEL_LOADED(iVar1)){
if(NETWORK::CAN_REGISTER_MISSION_OBJECTS(1)){
NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 0) + 1);
*uParam0=OBJECT::CREATE_OBJECT(iVar1, Var0, 0, 0, 0);
ENTITY::SET_ENTITY_HEADING(*uParam0, fVar2);
}else{
return 1;
}}
return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}


float func_333(){
return 43.504f;
}

int func_334(){
int iVar0;
switch (Global_4718592.f_160097){
case 1:
return joaat("xs_prop_arena_podium_01a");
case 2:
return joaat("xs_prop_arena_podium_02a");
case 3:
iVar0=joaat("xs_prop_arena_podium_03a");
if(iVar0 !=0){
return iVar0;
}
break;
}
return joaat("xs_prop_arena_podium_01a");
}


Vector3 func__335(){
return 2957.002f, -3866.864f, 140.0026f;
}

int func_336(char* sParam0, char* sParam1, var uParam2, bool bParam3){
int iVar0;
int iVar1;
if(bParam3){
if(func_337(PLAYER::PLAYER_ID())){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
if(iVar0==0){
iVar1=0;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0==1){
iVar1=1;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0==2){
iVar1=2;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0==3){
iVar1=3;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}else{
iVar1=4;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
if(iVar0==0){
iVar1=0;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0==1){
iVar1=1;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}else{
iVar1=2;
StringCopy(sParam0, "anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}}}elseif(func_337(PLAYER::PLAYER_ID())){
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
if(iVar0 <=1){
iVar1=0;
StringCopy(sParam0, "MP_CORONA_IDLES@MALE_A@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=3){
iVar1=1;
StringCopy(sParam0, "MP_CORONA_IDLES@MALE_B@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=4){
iVar1=2;
StringCopy(sParam0, "MP_CORONA_IDLES@MALE_C@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=5){
iVar1=3;
StringCopy(sParam0, "MP_CORONA_IDLES@MALE_D@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=6){
iVar1=4;
StringCopy(sParam0, "MP_CORONA_IDLES@MALE_E@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=7){
iVar1=5;
StringCopy(sParam0, "MP_CORONA@SINGLE_TEAM", 64);
StringCopy(sParam1, "Single_Team_Loop_two", 32);
}elseif(iVar0 <=8){
iVar1=6;
StringCopy(sParam0, "MP_CORONA@TEAM_IDLES@MALE_A", 64);
StringCopy(sParam1, "idle", 32);
}elseif(iVar0 <=9){
iVar1=7;
StringCopy(sParam0, "MP_CORONA@TEAM_IDLES@MALE_B", 64);
StringCopy(sParam1, "idle", 32);
}else{
iVar1=8;
StringCopy(sParam0, "MP_CORONA@TEAM_IDLES@MALE_C", 64);
StringCopy(sParam1, "idle", 32);
}}else{
iVar0=MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
if(iVar0 <=1){
iVar1=0;
StringCopy(sParam0, "MP_CORONA_IDLES@FEMALE_A@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=2){
iVar1=1;
StringCopy(sParam0, "MP_CORONA_IDLES@FEMALE_B@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=3){
iVar1=2;
StringCopy(sParam0, "MP_CORONA_IDLES@FEMALE_C@BASE", 64);
StringCopy(sParam1, "BASE", 32);
}elseif(iVar0 <=4){
iVar1=3;
StringCopy(sParam0, "MP_CORONA@SINGLE_TEAM", 64);
StringCopy(sParam1, "Single_Team_Loop_three", 32);
}else{
iVar1=4;
StringCopy(sParam0, "MP_CORONA@TEAM_IDLES@FEMALE_A", 64);
StringCopy(sParam1, "idle", 32);
}}
*uParam2=MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
return iVar1;
}

int func_337(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
return Global_2657589[iParam0 /*466*/].f_240;
}


void func_338(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
float fVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if(PLAYER::PLAYER_ID() !=func_237()){
uParam1->f_100=PLAYER::PLAYER_ID();
}
if(uParam1->f_70==0){
uParam1->f_70=1;
}
func_387(iParam0, uParam1, bParam2, bParam3);
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
if(func_386(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_385(uParam1->f_66, &fVar1) && uParam1->f_80 !=fVar1){
uParam1->f_80=fVar1;
}
VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
if(uParam1->f_99 >=0){
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
}
if(func_384(iParam0)){
func_378(iParam0, func_381(uParam1->f_74, uParam1->f_75, uParam1->f_76));
}
if(VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >=0){
VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
}
if(MISC::IS_BIT_SET(uParam1->f_95, 0)){
func_354(iParam0, &(uParam1->f_81));
}
if((!func_344(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_341(iParam0);
}
if(func_340(iVar0)){
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
if(func_339(ENTITY::GET_ENTITY_MODEL(iParam0))){
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
if(func_83(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81))){
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


bool func_339(int iParam0){
return func_386(iParam0);
}

int func_340(int iParam0){
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


void func_341(int iParam0){
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
func_342(Var0);
}}}}


void func_342(struct<3> Param0){
struct<3> Var0;
Var0.f_0=-1745262668;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=Param0.f_0;
Var0.f_2.f_1=Param0.f_1;
Var0.f_2.f_2=Param0.f_2;
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 5, func_343(1, 1));
}


var func__343(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_492(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_1996(iVar2, 0)){
MISC::SET_BIT(&uVar0, bVar1);
}}}
bVar1++;
}
return uVar0;
}

int func_344(int iParam0){
int iVar0;
if(func_353()){
iVar0=0;
while (iVar0 < 60){
if(func_352(iVar0)==iParam0){
if(func_345(iVar0)){
return 1;
}}
iVar0++;
}}
return 0;
}


bool func_345(int iParam0){
return func_346(iParam0, 6, 1);
}

int func_346(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_351()==0){
return MISC::IS_BIT_SET(func_347(func_350(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
}
return 0;
}

int func_347(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
if(iParam0 !=14192){
if(iParam2==0){
}
uVar0=Global_2805029[iParam0 /*3*/][func_348(iParam1)];
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_348(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
iVar1=func_349();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}

int func_349(){
return Global_1574918;
}

int func_350(int iParam0){
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

int func_351(){
return Global_32163;
}

int func_352(int iParam0){
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


bool func_353(){
return Global_100733.f_388 > 0;
}

int func_354(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(!func_364(iParam0, uParam1)){
return 1;
}
iVar0=0;
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
iVar0=GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
}
if(iVar0==0){
if(!func_362(iParam0)){
iVar1=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
if(func_357(&iParam0, iVar1)){
}else{
return 1;
}}else{
return 1;
}}elseif(iVar0 >=3){
return 1;
}elseif(func_355(iParam0)){}
return 0;
}

int func_355(int iParam0){
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
func_356(iParam0);
return 0;
}}
return 1;
}
return 0;
}


void func_356(int iParam0){
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

int func_357(int iParam0, int iParam1){
func_361();
if(Global_1574632.f_18 !=0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0)){
Global_1949998.f_11=VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
if(Global_1949998.f_11 < 0f){
Global_1949998.f_11=0f;
}}
func_359(*iParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
Global_1949998.f_1.f_2=(Global_1949998.f_1.f_2 - Global_1949998.f_11);
if(Global_1949998.f_4.f_2 < 0f){
Global_1949998.f_12=1;
}
Global_1949998.f_13=200;
if(ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0)==joaat("comet4")){
Global_1949998.f_13=255;
}
if(Global_1949998.f_12){
if(func_358(iParam0, iParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)){
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
if(((Global_1949998.f_23==0 && func_358(iParam0, iParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13)) || Global_1949998.f_23 !=0) && ((Global_1949998.f_24==0 && func_358(iParam0, iParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13)) || Global_1949998.f_24 !=0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_1577913=NETWORK::GET_NETWORK_TIME();
}else{
Global_1577913=MISC::GET_GAME_TIMER();
}
return 1;
}}
return 0;
}


bool func_358(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8){
return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_359(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
*uParam1=ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
if(((!func_360(Global_1950024, 0f, 0f, 0f, 0) && !func_360(Global_1950027, 0f, 0f, 0f, 0)) && !func_360(Global_1950030, 0f, 0f, 0f, 0)) && !Global_1950033==0f){
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


bool func_360(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}


void func_361(){
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

int func_362(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_363(iParam0)){
return 1;
}}
return 0;
}

int func_363(int iParam0){
int iVar0;
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3)){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset")){
iVar0=DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
return MISC::IS_BIT_SET(iVar0, 16);
}}}
return 0;
}

int func_364(int iParam0, var uParam1){
int iVar0;
bool bVar1;
if(NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1)){
iVar0=NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
}else{
iVar0=func_237();
}
bVar1=false;
if(iVar0==PLAYER::PLAYER_ID()){
if(func_370(15, 0)){
bVar1=true;
}elseif(func_369(1)){
bVar1=true;
}}else{
bVar1=true;
}
if(((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0==func_237()) || !func_492(iVar0, 0, 0)) || !bVar1) || func_365(iParam0)){
return 0;
}
return 1;
}

int func_365(int iParam0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}
if(func_367(PLAYER::PLAYER_ID())==3){
if(func_366(iParam0) !=-1){
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

int func_366(int iParam0){
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3)){
if(DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID")){
return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
}}
return -1;
}

int func_367(int iParam0){
if(func_267(iParam0)==233){
return func_368(iParam0);
}
return -1;
}

int func_368(int iParam0){
if(func_268(iParam0, 0)){
return Global_1894573[iParam0 /*608*/].f_10.f_182;
}
return -1;
}


bool func_369(bool bParam0){
return func_259(PLAYER::PLAYER_ID(), bParam0);
}

int func_370(int iParam0, bool bParam1){
var uVar0;
int iVar1;
if(bParam1){
if(iParam0==15){
return 1;
}}
if(func_375(PLAYER::PLAYER_ID())){
switch (iParam0){
case 4:
case 5:
case 12:
case 15:
return 1;
break;
}}
uVar0=func_372(iParam0);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_371(iVar1));
}

int func_371(int iParam0){
return (iParam0 % 32);
}

int func_372(int iParam0){
int iVar0;
iVar0=func_347(func_373(iParam0), -1, 0);
return iVar0;
}

int func_373(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_374(iVar0);
switch (iVar1){
case 0:
return 1291;
break;
}
return 1291;
}

int func_374(int iParam0){
return (iParam0 / 32);
}

int func_375(int iParam0){
if(iParam0 !=func_237()){
if(func_376(iParam0) && Global_2657589[iParam0 /*466*/].f_321.f_10==iParam0){
return 1;
}}
return 0;
}

int func_376(int iParam0){
if(iParam0 !=func_237()){
if(func_492(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_377(Global_2657589[iParam0 /*466*/].f_321.f_7)==22;
}}}
return 0;
}

int func_377(int iParam0){
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


void func_378(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_380(iParam1);
func_379(iVar1, &uVar0);
VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uVar0);
}


bool func_379(int iParam0, var uParam1){
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

int func_380(int iParam0){
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

int func_381(int iParam0, int iParam1, int iParam2){
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
if((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_382()) && Global_1576216){
if((iParam0==Global_1576217 && iParam1==Global_1576218) && iParam2==Global_1576219){
return 13;
}}
return 0;
}

int func_382(){
struct<13> Var0;
if(PLAYER::IS_PLAYER_ONLINE()){
if((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()){
Var0={
func_383() 
};
if(NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0)){
return 1;
}}}
return 0;
}
struct<13> func_383(){
struct<13> Var0;
NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
return Var0;
}

int func_384(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("deathbike2"):
return 1;
break;
}
return 0;
}


bool func_385(int iParam0, var uParam1){
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

int func_386(int iParam0){
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


void func_387(int iParam0, var uParam1, bool bParam2, bool bParam3){
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
if(!func_409(iParam0)){
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
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar0 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar0 + 1));
}}elseif(uParam1->f_66==joaat("sandking") || uParam1->f_66==joaat("sandking2")){
iVar1=1;
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar1 + 1))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar1 + 1));
}}elseif(uParam1->f_66==joaat("formula") || uParam1->f_66==joaat("formula2")){
iVar2=1;
while (iVar2 <=9){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar2))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar2));
}
iVar2++;
}}elseif(uParam1->f_66==joaat("openwheel1")){
iVar3=1;
while (iVar3 <=6){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar3))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar3));
}
iVar3++;
}}elseif(uParam1->f_66==joaat("openwheel2")){
iVar4=1;
while (iVar4 <=11){
if(iVar4 !=9 && iVar4 !=10){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar4));
}}
iVar4++;
}}elseif(uParam1->f_66==joaat("surfer3")){
iVar5=1;
while (iVar5 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar5))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar5));
}
iVar5++;
}}elseif(uParam1->f_66==joaat("dinghy5")){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(4))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(4));
}}elseif(uParam1->f_66==joaat("coquette4")){
if(VEHICLE::GET_VEHICLE_MOD(iParam0, 10) !=0){
MISC::SET_BIT(&(uParam1->f_77), false);
}}elseif(uParam1->f_66==joaat("yosemite2")){
MISC::SET_BIT(&(uParam1->f_77), func_408(1));
}elseif(uParam1->f_66==joaat("hotknife")){
iVar6=1;
while (iVar6 <=2){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar6))){
}else{
MISC::SET_BIT(&(uParam1->f_77), func_408(iVar6));
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
if(func_406(uParam1->f_5) || func_406(uParam1->f_6)){
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
if(((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_405(iParam0)) || (((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0) && uParam1->f_9[20] > 0)) && func_404()){
uParam1->f_62=0;
uParam1->f_63=0;
uParam1->f_64=0;
}elseif((uParam1->f_62==0 && uParam1->f_63==0) && uParam1->f_64==0){
uParam1->f_62=255;
uParam1->f_63=255;
uParam1->f_64=255;
}
VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
if(uParam1->f_65==-1 && !func_403(uParam1->f_66)){
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
func_402(iParam0, uParam1->f_69);
}}else{
func_402(iParam0, uParam1->f_69);
}}}
if(VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0)){
if((uParam1->f_68==0 || uParam1->f_68==3) || uParam1->f_68==5){
VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
}else{
VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
}}
if(bParam3){
func_394(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
}
if(!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66)){
iVar7=0;
while (iVar7 <=11){
if(MISC::IS_BIT_SET(uParam1->f_77, func_408(iVar7 + 1))){
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
if(((func_388() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))){
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

int func_388(){
if((((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19) && Global_4718592.f_2==20){
return 0;
}
if(func_392(7)){
if(func_390(Global_2672505.f_4.f_16) || func_389(Global_2672505.f_4.f_16)){
return 0;
}}
return 1;
}

int func_389(var uParam0){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
return Global_1890444[iVar0 /*129*/].f_77.f_51 !=0;
}
return 0;
}

int func_390(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_391(iParam0, 9);
}
return 0;
}


var func__391(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}


bool func_392(int iParam0){
return func_393(&(Global_2672505.f_184), iParam0);
}


var func__393(var uParam0, var uParam1){
int iVar0;
int iVar1;
int iVar2;
iVar0=uParam1;
iVar1=(iVar0 / 32);
iVar2=(iVar0 % 32);
return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_394(int iParam0, var uParam1, var uParam2){
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
}elseif(func_400(*iParam0, iVar1, ((*uParam1)[iVar0] - 1))){
}else{
VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
}}}
iVar0++;
}
if(func_399(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) !=func_397(*iParam0, ((*uParam1)[38] - 1))){
VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_397(*iParam0, ((*uParam1)[38] - 1)), false);
}
func_396(iParam0);
if(func_395(*iParam0)){
VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
}
return 1;
}

int func_395(int iParam0){
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


void func_396(var uParam0){
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

int func_397(int iParam0, int iParam1){
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
iVar0=func_398(iParam0, 38) + 1;
iVar1=func_398(iParam0, 24) + 1;
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

int func_398(int iParam0, int iParam1){
int iVar0;
if((STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536==iParam1){
return Global_152537;
}
iVar0=(VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
while (iVar0 >=0 && func_400(iParam0, iParam1, iVar0)){
iVar0=(iVar0 - 1);
}
return iVar0;
}

int func_399(int iParam0, int iParam1){
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

int func_400(var uParam0, int iParam1, int iParam2){
if(!func_401() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2)){
return 1;
}
return 0;
}

int func_401(){
return 0;
}


void func_402(int iParam0, var uParam1){
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

int func_403(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


var func__404(){
return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_405(int iParam0){
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

int func_406(int iParam0){
if(!func_401() && func_407(iParam0)){
return 1;
}
return 0;
}

int func_407(int iParam0){
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

int func_408(int iParam0){
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

int func_409(int iParam0){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!func_410(PLAYER::PLAYER_ID(), -1)){
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
if(func_367(PLAYER::PLAYER_ID())==3){
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
if(func_366(iParam0) !=-1){
return 1;
}}}
return 0;
}

int func_410(int iParam0, int iParam1){
int iVar0;
if(func_492(iParam0, 1, 1)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)){
if(PLAYER::PLAYER_PED_ID()==VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0)){
return 1;
}}}}
return 0;
}


void func_411(int iParam0, var uParam1, var uParam2, bool bParam3){
if(func_188()){
*uParam1={
func_415(iParam0) 
};
*uParam2=func_414(iParam0);
return;
}
if(func_187()){
*uParam1={
func_413() 
};
*uParam2=func_412();
return;
}
if(iParam0==joaat("monster")){
*uParam1={
413.179f, -974.422f, -100.004f 
};
*uParam2=158.368f;
return;
}elseif(VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
if(bParam3){
*uParam1={
413.2641f, -975.4441f, -100.0042f 
};
*uParam2=247.8625f;
}else{
*uParam1={
415.1816f, -976.0641f, -100.0042f 
};
*uParam2=139.734f;
}
return;
}elseif(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)){
if(bParam3){
*uParam1={
413.2641f, -975.4441f, -100.0042f 
};
*uParam2=247.8625f;
}else{
*uParam1={
414.7016f, -975.6291f, -100.0042f 
};
*uParam2=237.305f;
}
return;
}else{
*uParam1={
413.859f, -974.61f, -100.0042f 
};
*uParam2=149.8085f;
return;
}}


float func_412(){
return 52.07f;
}


Vector3 func__413(){
return 4525.934f, -4487.33f, 3.74f;
}


float func_414(int iParam0){
switch (iParam0){
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
return 9.8f;
default:
}
return 323.6979f;
}


Vector3 func__415(int iParam0){
switch (iParam0){
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
return 2823.86f, -3909.308f, 139.0008f;
default:
}
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)){
return 2824.369f, -3904.218f, 139.4829f;
}
return 2824.369f, -3904.218f, 139.0015f;
}


char* func_416(int iParam0){
switch (iParam0){
case 0:
return "mood_Aiming_1";
case 1:
return "mood_Angry_1";
case 2:
return "mood_Happy_1";
case 3:
return "mood_Injured_1";
case 4:
return "mood_Normal_1";
case 5:
return "mood_stressed_1";
case 6:
return "mood_smug_1";
case 7:
return "mood_sulk_1";
default:
}
return "mood_Normal_1";
}

int func_417(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(func_432()){
return 0;
}
uVar0=6;
uVar1=6;
uVar2=7;
if(iParam1==0){
iVar6=3;
}elseif(bParam3){
iVar6=1;
}elseif(bParam4){
iVar6=2;
}else{
iVar6=0;
}
func_425(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar3=func_424(iParam0);
if(!iVar3==-1){
if(func_423(&uVar0, iVar3)){
return 1;
}}}else{
iVar4=func_422(iParam0);
if(!iVar4==-1){
if(func_420(&uVar1, iVar4)){
return 1;
}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar5=func_419(iParam0);
if(!iVar5==0){
if(func_418(&uVar2, iVar5)){
return 1;
}}}}
return 0;
}

int func_418(var uParam0, int iParam1){
int iVar0;
iVar0=floor((to_float(iParam1) / 32f));
if(!iVar0 < *uParam0){
return 0;
}
if(MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32))){
return 1;
}
return 0;
}

int func_419(int iParam0){
int iVar0;
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
return iVar0;
}


bool func_420(var uParam0, int iParam1){
return func_421(uParam0, iParam1);
}

int func_421(var uParam0, int iParam1){
int iVar0;
iVar0=floor((to_float(iParam1) / 32f));
if(!iVar0 < *uParam0){
return 0;
}
if(MISC::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32))){
return 1;
}
return 0;
}

int func_422(int iParam0){
int iVar0;
iVar0=PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
return iVar0;
}


bool func_423(var uParam0, int iParam1){
return func_421(uParam0, iParam1);
}

int func_424(int iParam0){
int iVar0;
iVar0=PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
return iVar0;
}


void func_425(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6){
func_431(uParam4, 91, 1);
switch (iParam0){
case 1:
case 0:
func_430(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
break;
case 2:
switch (iParam1){
case 3:
switch (iParam5){
case 0:
func_429(uParam3, 13, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 1:
func_429(uParam3, 4, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 2:
func_429(uParam3, 13, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 39, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 38, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
}
break;
case 5:
case 24:
switch (iParam5){
case 0:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
func_431(uParam4, 136, 1);
func_431(uParam4, 138, 1);
func_431(uParam4, 139, 1);
func_431(uParam4, 143, 1);
func_431(uParam4, 144, 1);
func_431(uParam4, 145, 1);
func_431(uParam4, 147, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 1:
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 2:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
func_431(uParam4, 136, 1);
func_431(uParam4, 138, 1);
func_431(uParam4, 139, 1);
func_431(uParam4, 143, 1);
func_431(uParam4, 144, 1);
func_431(uParam4, 145, 1);
func_431(uParam4, 147, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
}
break;
case 59:
switch (iParam5){
case 0:
func_429(uParam3, 66, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 77, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 1:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
}
break;
case 60:
case 63:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 61:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 62:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 64:
case 65:
case 66:
switch (iParam5){
case 0:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 1:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 2:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_426(uParam2, uParam3, uParam4);
break;
}
break;
case 10:
switch (iParam5){
case 0:
func_429(uParam3, 3, 1);
func_429(uParam3, 4, 1);
func_429(uParam3, 6, 1);
func_429(uParam3, 10, 1);
func_429(uParam3, 54, 1);
func_429(uParam3, 55, 1);
func_429(uParam3, 56, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 37, 1);
func_429(uParam3, 39, 1);
func_429(uParam3, 55, 1);
func_429(uParam3, 106, 1);
func_429(uParam3, 114, 1);
func_429(uParam3, 116, 1);
func_429(uParam3, 117, 1);
func_429(uParam3, 118, 1);
func_429(uParam3, 119, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 8, 1);
func_427(uParam2, 9, 1);
func_427(uParam2, 10, 1);
func_427(uParam2, 53, 1);
func_427(uParam2, 56, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 26, 1);
func_427(uParam2, 27, 1);
func_427(uParam2, 28, 1);
func_427(uParam2, 32, 1);
func_427(uParam2, 36, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 14, 1);
func_427(uParam2, 105, 1);
func_427(uParam2, 113, 1);
func_427(uParam2, 114, 1);
func_427(uParam2, 115, 1);
func_427(uParam2, 116, 1);
func_427(uParam2, 117, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_429(uParam3, 65, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 76, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 64, 1);
func_427(uParam2, 65, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 75, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 1:
func_429(uParam3, 3, 1);
func_429(uParam3, 4, 1);
func_429(uParam3, 6, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 19, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 37, 1);
func_429(uParam3, 39, 1);
func_429(uParam3, 55, 1);
func_429(uParam3, 106, 1);
func_429(uParam3, 114, 1);
func_429(uParam3, 116, 1);
func_429(uParam3, 117, 1);
func_429(uParam3, 118, 1);
func_429(uParam3, 119, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 8, 1);
func_427(uParam2, 9, 1);
func_427(uParam2, 10, 1);
func_427(uParam2, 53, 1);
func_427(uParam2, 56, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 11, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 22, 1);
func_427(uParam2, 54, 1);
func_427(uParam2, 26, 1);
func_427(uParam2, 27, 1);
func_427(uParam2, 28, 1);
func_427(uParam2, 30, 1);
func_427(uParam2, 31, 1);
func_427(uParam2, 32, 1);
func_427(uParam2, 36, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 14, 1);
func_427(uParam2, 105, 1);
func_427(uParam2, 113, 1);
func_427(uParam2, 114, 1);
func_427(uParam2, 115, 1);
func_427(uParam2, 116, 1);
func_427(uParam2, 117, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_429(uParam3, 65, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 76, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 64, 1);
func_427(uParam2, 65, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 75, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 2:
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 39, 1);
func_429(uParam3, 106, 1);
func_429(uParam3, 114, 1);
func_429(uParam3, 116, 1);
func_429(uParam3, 117, 1);
func_429(uParam3, 118, 1);
func_429(uParam3, 119, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 14, 1);
func_427(uParam2, 105, 1);
func_427(uParam2, 113, 1);
func_427(uParam2, 114, 1);
func_427(uParam2, 115, 1);
func_427(uParam2, 116, 1);
func_427(uParam2, 117, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_429(uParam3, 65, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 76, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 64, 1);
func_427(uParam2, 65, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 75, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_426(uParam2, uParam3, uParam4);
break;
}
break;
case 13:
switch (iParam5){
case 0:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 19, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 1:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
func_426(uParam2, uParam3, uParam4);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 2:
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
func_426(uParam2, uParam3, uParam4);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
}
break;
case 16:
switch (iParam5){
case 0:
func_429(uParam3, 4, 1);
break;
case 1:
func_431(uParam4, 43, 1);
break;
case 2:
break;
}
break;
case 23:
switch (iParam5){
case 0:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 1:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_426(uParam2, uParam3, uParam4);
break;
case 2:
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_426(uParam2, uParam3, uParam4);
break;
}
break;
case 17:
switch (iParam5){
case 0:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 1:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 2:
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
}
break;
case 19:
switch (iParam5){
case 0:
func_429(uParam3, 3, 1);
func_429(uParam3, 7, 1);
func_429(uParam3, 0, 1);
func_429(uParam3, 12, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 15, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 17, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 21, 1);
func_429(uParam3, 25, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 30, 1);
func_429(uParam3, 31, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 39, 1);
func_429(uParam3, 37, 1);
func_427(uParam2, 0, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 7, 1);
func_427(uParam2, 8, 1);
func_427(uParam2, 11, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 15, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 17, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 19, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 22, 1);
func_427(uParam2, 54, 1);
func_427(uParam2, 24, 1);
func_427(uParam2, 26, 1);
func_427(uParam2, 27, 1);
func_427(uParam2, 28, 1);
func_427(uParam2, 30, 1);
func_427(uParam2, 31, 1);
func_427(uParam2, 32, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 36, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 65, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 76, 1);
func_429(uParam3, 77, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 64, 1);
func_427(uParam2, 65, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 75, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 1:
func_429(uParam3, 3, 1);
func_429(uParam3, 7, 1);
func_429(uParam3, 0, 1);
func_429(uParam3, 12, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 15, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 17, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 21, 1);
func_429(uParam3, 25, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 30, 1);
func_429(uParam3, 31, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 39, 1);
func_427(uParam2, 0, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 7, 1);
func_427(uParam2, 11, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 15, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 17, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 19, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 22, 1);
func_427(uParam2, 54, 1);
func_427(uParam2, 24, 1);
func_427(uParam2, 38, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 43, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 65, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 76, 1);
func_429(uParam3, 77, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 64, 1);
func_427(uParam2, 65, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 75, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
case 2:
func_429(uParam3, 1, 1);
func_429(uParam3, 3, 1);
func_429(uParam3, 4, 1);
func_429(uParam3, 5, 1);
func_429(uParam3, 7, 1);
func_429(uParam3, 10, 1);
func_429(uParam3, 54, 1);
func_429(uParam3, 55, 1);
func_429(uParam3, 56, 1);
func_429(uParam3, 0, 1);
func_429(uParam3, 12, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 15, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 17, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 21, 1);
func_429(uParam3, 25, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 30, 1);
func_429(uParam3, 31, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 37, 1);
func_429(uParam3, 39, 1);
func_427(uParam2, 0, 1);
func_427(uParam2, 1, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 5, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 7, 1);
func_427(uParam2, 8, 1);
func_427(uParam2, 9, 1);
func_427(uParam2, 10, 1);
func_427(uParam2, 53, 1);
func_427(uParam2, 56, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 11, 1);
func_427(uParam2, 12, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 14, 1);
func_427(uParam2, 15, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 17, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 19, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 22, 1);
func_427(uParam2, 54, 1);
func_427(uParam2, 23, 1);
func_427(uParam2, 24, 1);
func_427(uParam2, 26, 1);
func_427(uParam2, 27, 1);
func_427(uParam2, 28, 1);
func_427(uParam2, 29, 1);
func_427(uParam2, 30, 1);
func_427(uParam2, 31, 1);
func_427(uParam2, 32, 1);
func_427(uParam2, 33, 1);
func_427(uParam2, 36, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 55, 1);
func_431(uParam4, 1, 1);
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_429(uParam3, 65, 1);
func_429(uParam3, 67, 1);
func_429(uParam3, 68, 1);
func_429(uParam3, 69, 1);
func_429(uParam3, 70, 1);
func_429(uParam3, 71, 1);
func_429(uParam3, 72, 1);
func_429(uParam3, 73, 1);
func_429(uParam3, 74, 1);
func_429(uParam3, 75, 1);
func_429(uParam3, 76, 1);
func_429(uParam3, 77, 1);
func_429(uParam3, 78, 1);
func_429(uParam3, 79, 1);
func_429(uParam3, 80, 1);
func_429(uParam3, 81, 1);
func_429(uParam3, 82, 1);
func_429(uParam3, 91, 1);
func_429(uParam3, 92, 1);
func_427(uParam2, 64, 1);
func_427(uParam2, 65, 1);
func_427(uParam2, 66, 1);
func_427(uParam2, 67, 1);
func_427(uParam2, 68, 1);
func_427(uParam2, 69, 1);
func_427(uParam2, 70, 1);
func_427(uParam2, 71, 1);
func_427(uParam2, 72, 1);
func_427(uParam2, 73, 1);
func_427(uParam2, 74, 1);
func_427(uParam2, 75, 1);
func_427(uParam2, 77, 1);
func_427(uParam2, 78, 1);
func_427(uParam2, 79, 1);
func_427(uParam2, 80, 1);
func_427(uParam2, 81, 1);
func_427(uParam2, 90, 1);
func_427(uParam2, 91, 1);
break;
}
break;
case 18:
switch (iParam5){
case 0:
break;
case 1:
func_427(uParam2, 2, 1);
func_427(uParam2, 20, 1);
break;
case 2:
break;
}
break;
case 0:
break;
}
break;
case 3:
switch (iParam1){
case 0:
break;
case 9:
case 11:
case 13:
case 15:
case 19:
case 23:
case 26:
case 30:
case 34:
case 20:
case 22:
func_425(2, 59, uParam2, uParam3, uParam4, 0, 0);
break;
case 32:
func_425(2, 60, uParam2, uParam3, uParam4, 0, 0);
break;
case 17:
case 27:
case 31:
break;
}
break;
}}


void func_426(var uParam0, var uParam1, var uParam2){
if((*uParam0)[0]==0 || (*uParam1)[0]==0){}
func_431(uParam2, 124, 1);
func_431(uParam2, 125, 1);
func_431(uParam2, 126, 1);
func_431(uParam2, 127, 1);
func_431(uParam2, 128, 1);
func_431(uParam2, 129, 1);
func_431(uParam2, 130, 1);
func_431(uParam2, 131, 1);
func_431(uParam2, 132, 1);
func_431(uParam2, 133, 1);
func_431(uParam2, 136, 1);
func_431(uParam2, 138, 1);
func_431(uParam2, 139, 1);
func_431(uParam2, 143, 1);
func_431(uParam2, 144, 1);
func_431(uParam2, 145, 1);
func_431(uParam2, 147, 1);
}


void func_427(var uParam0, int iParam1, bool bParam2){
func_428(uParam0, iParam1, bParam2);
}


void func_428(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=floor((to_float(iParam1) / 32f));
if(!iVar0 < *uParam0){
return;
}
if(bParam2){
MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
}else{
MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
}}


void func_429(var uParam0, int iParam1, bool bParam2){
func_428(uParam0, iParam1, bParam2);
}


void func_430(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6){
func_431(uParam4, 91, 1);
switch (iParam0){
case 1:
switch (iParam1){
case 0:
switch (iParam5){
case 0:
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
break;
case 1:
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
break;
case 2:
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
break;
}
break;
}
break;
case 0:
switch (iParam1){
case 6:
case 26:
if(bParam6){
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
}
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 5, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 7, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
break;
case 1:
if(bParam6){
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
}
func_431(uParam4, 9, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
break;
case 10:
func_431(uParam4, 28, 1);
break;
case 12:
if(bParam6){
func_429(uParam3, 3, 1);
func_429(uParam3, 4, 1);
func_429(uParam3, 6, 1);
func_429(uParam3, 10, 1);
func_429(uParam3, 54, 1);
func_429(uParam3, 55, 1);
func_429(uParam3, 56, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 37, 1);
func_429(uParam3, 39, 1);
func_429(uParam3, 106, 1);
func_429(uParam3, 114, 1);
func_429(uParam3, 116, 1);
func_429(uParam3, 117, 1);
func_429(uParam3, 118, 1);
func_429(uParam3, 119, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 8, 1);
func_427(uParam2, 9, 1);
func_427(uParam2, 10, 1);
func_427(uParam2, 53, 1);
func_427(uParam2, 56, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 26, 1);
func_427(uParam2, 27, 1);
func_427(uParam2, 28, 1);
func_427(uParam2, 32, 1);
func_427(uParam2, 36, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 55, 1);
func_427(uParam2, 14, 1);
func_427(uParam2, 105, 1);
func_427(uParam2, 113, 1);
func_427(uParam2, 114, 1);
func_427(uParam2, 115, 1);
func_427(uParam2, 116, 1);
func_427(uParam2, 117, 1);
}
func_431(uParam4, 2, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
break;
case 15:
if(bParam6){
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 19, 1);
}
func_431(uParam4, 3, 1);
func_431(uParam4, 6, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 32, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
func_431(uParam4, 110, 1);
func_431(uParam4, 112, 1);
func_431(uParam4, 115, 1);
func_431(uParam4, 116, 1);
break;
case 18:
if(bParam6){
func_429(uParam3, 4, 1);
}
break;
case 17:
func_431(uParam4, 9, 1);
break;
case 19:
if(bParam6){
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
}
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
break;
case 21:
if(bParam6){
func_429(uParam3, 3, 1);
func_429(uParam3, 7, 1);
func_429(uParam3, 0, 1);
func_429(uParam3, 12, 1);
func_429(uParam3, 13, 1);
func_429(uParam3, 15, 1);
func_429(uParam3, 16, 1);
func_429(uParam3, 48, 1);
func_429(uParam3, 49, 1);
func_429(uParam3, 17, 1);
func_429(uParam3, 18, 1);
func_429(uParam3, 50, 1);
func_429(uParam3, 51, 1);
func_429(uParam3, 52, 1);
func_429(uParam3, 53, 1);
func_429(uParam3, 38, 1);
func_429(uParam3, 47, 1);
func_429(uParam3, 111, 1);
func_429(uParam3, 62, 1);
func_429(uParam3, 20, 1);
func_429(uParam3, 21, 1);
func_429(uParam3, 25, 1);
func_429(uParam3, 26, 1);
func_429(uParam3, 27, 1);
func_429(uParam3, 30, 1);
func_429(uParam3, 31, 1);
func_429(uParam3, 32, 1);
func_429(uParam3, 33, 1);
func_429(uParam3, 39, 1);
func_429(uParam3, 37, 1);
func_429(uParam3, 55, 1);
func_427(uParam2, 0, 1);
func_427(uParam2, 2, 1);
func_427(uParam2, 3, 1);
func_427(uParam2, 4, 1);
func_427(uParam2, 6, 1);
func_427(uParam2, 7, 1);
func_427(uParam2, 8, 1);
func_427(uParam2, 11, 1);
func_427(uParam2, 13, 1);
func_427(uParam2, 15, 1);
func_427(uParam2, 16, 1);
func_427(uParam2, 47, 1);
func_427(uParam2, 48, 1);
func_427(uParam2, 17, 1);
func_427(uParam2, 18, 1);
func_427(uParam2, 49, 1);
func_427(uParam2, 50, 1);
func_427(uParam2, 51, 1);
func_427(uParam2, 52, 1);
func_427(uParam2, 62, 1);
func_427(uParam2, 37, 1);
func_427(uParam2, 46, 1);
func_427(uParam2, 110, 1);
func_427(uParam2, 19, 1);
func_427(uParam2, 20, 1);
func_427(uParam2, 21, 1);
func_427(uParam2, 22, 1);
func_427(uParam2, 54, 1);
func_427(uParam2, 24, 1);
func_427(uParam2, 26, 1);
func_427(uParam2, 27, 1);
func_427(uParam2, 28, 1);
func_427(uParam2, 30, 1);
func_427(uParam2, 31, 1);
func_427(uParam2, 32, 1);
func_427(uParam2, 38, 1);
func_427(uParam2, 36, 1);
}
func_431(uParam4, 3, 1);
func_431(uParam4, 3, 1);
func_431(uParam4, 4, 1);
func_431(uParam4, 14, 1);
func_431(uParam4, 15, 1);
func_431(uParam4, 16, 1);
func_431(uParam4, 8, 1);
func_431(uParam4, 9, 1);
func_431(uParam4, 10, 1);
func_431(uParam4, 12, 1);
func_431(uParam4, 13, 1);
func_431(uParam4, 17, 1);
func_431(uParam4, 18, 1);
func_431(uParam4, 19, 1);
func_431(uParam4, 20, 1);
func_431(uParam4, 59, 1);
func_431(uParam4, 60, 1);
func_431(uParam4, 61, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 62, 1);
func_431(uParam4, 63, 1);
func_431(uParam4, 64, 1);
func_431(uParam4, 65, 1);
func_431(uParam4, 66, 1);
func_431(uParam4, 67, 1);
func_431(uParam4, 68, 1);
func_431(uParam4, 69, 1);
func_431(uParam4, 70, 1);
func_431(uParam4, 71, 1);
func_431(uParam4, 72, 1);
func_431(uParam4, 21, 1);
func_431(uParam4, 22, 1);
func_431(uParam4, 23, 1);
func_431(uParam4, 24, 1);
func_431(uParam4, 25, 1);
func_431(uParam4, 26, 1);
func_431(uParam4, 36, 1);
func_431(uParam4, 46, 1);
func_431(uParam4, 38, 1);
func_431(uParam4, 29, 1);
func_431(uParam4, 28, 1);
func_431(uParam4, 31, 1);
func_431(uParam4, 33, 1);
func_431(uParam4, 34, 1);
func_431(uParam4, 92, 1);
func_431(uParam4, 93, 1);
func_431(uParam4, 94, 1);
func_431(uParam4, 96, 1);
func_431(uParam4, 97, 1);
func_431(uParam4, 98, 1);
func_431(uParam4, 100, 1);
func_431(uParam4, 103, 1);
func_431(uParam4, 104, 1);
func_431(uParam4, 105, 1);
func_431(uParam4, 106, 1);
func_431(uParam4, 107, 1);
func_431(uParam4, 108, 1);
break;
}
break;
}}


void func_431(var uParam0, int iParam1, bool bParam2){
int iVar0;
iVar0=floor((to_float(iParam1) / 32f));
if(!iVar0 < *uParam0){
return;
}
if(bParam2){
MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
}else{
MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
}}

int func_432(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}


void func_433(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, bool bParam6){
Param2.f_2=(Param2.f_2 + 1f);
func_435(uParam0, iParam1, Param2, fParam3, iParam4, bParam5);
if(ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(func_434(*uParam0) && bParam6){
WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("weapon_minigun"), -1, 1, 1);
}
if(func_188()){
if(func_2127(*uParam0)){
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 6, 3, 0, 0);
}}}}

int func_434(int iParam0){
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 0;
}
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("jugg_suit"))){
return 1;
}
return 0;
}


void func_435(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5){
struct<14> Var0;
if(!ENTITY::DOES_ENTITY_EXIST(*uParam0)){
if(!PED::IS_PED_INJURED(iParam1)){
}
*uParam0=PED::CLONE_PED(iParam1, 0, 0, 0);
if(PED::IS_PED_INJURED(*uParam0)){
PED::REVIVE_INJURED_PED(*uParam0);
}
PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, 1, 0, 0, 1);
ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
ENTITY::SET_ENTITY_COLLISION(*uParam0, false, 0);
ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, 1);
ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), 1);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 0, 0, 0);
if(bParam5){
PED::SET_PED_HELMET(*uParam0, 0);
PED::REMOVE_PED_HELMET(*uParam0, 1);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
PED::CLEAR_PED_PROP(*uParam0, 0, 1);
if(iParam4 > -1 && iParam4 < 32){
Var0={
func_437(ENTITY::GET_ENTITY_MODEL(*uParam0), 2, Global_2657589[iParam4 /*466*/].f_250, -1) 
};
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, Var0.f_3, Var0.f_4, 0);
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
}}
if(func_436(*uParam0, 11)){
PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
}
TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
PED::FINALIZE_HEAD_BLEND(*uParam0);
}}

int func_436(int iParam0, int iParam1){
if(FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, iParam1, joaat("pilot_suit"))){
return 1;
}
return 0;
}
struct<14> func_437(int iParam0, int iParam1, int iParam2, int iParam3){
func_485();
if(iParam0==joaat("mp_m_freemode_01")){
func_469(iParam1, iParam2, iParam3);
}elseif(iParam0==joaat("mp_f_freemode_01")){
func_438(iParam1, iParam2, iParam3);
}
return Global_78341[0 /*14*/];
}


void func_438(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_468(iParam1, iParam2);
break;
case 11:
func_467(iParam1, iParam2);
break;
case 8:
func_462(iParam1, iParam2);
break;
case 9:
func_461(iParam1, iParam2);
break;
case 3:
func_460(iParam1, iParam2);
break;
case 4:
func_459(iParam1, iParam2);
break;
case 6:
func_458(iParam1, iParam2);
break;
case 1:
func_457(iParam1, iParam2);
break;
case 7:
func_456(iParam1, iParam2);
break;
case 10:
func_455(iParam1, iParam2);
break;
case 14:
func_454(iParam1, iParam2);
break;
case 12:
func_453(iParam1, iParam2);
break;
case 5:
func_452(iParam1, iParam2);
break;
case 0:
func_449(iParam1, iParam2);
break;
case 13:
func_439(iParam1);
break;
}}


void func_439(int iParam0){
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_440(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
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
uParam0->f_12=func_448(iParam8);
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
if(func_447(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("rebreather"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_445(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_445(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_445(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_445(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_445(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_445(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_444(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_444(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_444(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_447(14)){
return;
}
uVar0=func_347(func_443(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_347(func_442(iParam1, uParam0->f_2), Global_78338, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_441(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_347(iVar1, Global_78338, 0);
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


bool func_441(int iParam0, int iParam1, var uParam2){
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

int func_442(int iParam0, int iParam1){
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

int func_443(int iParam0, int iParam1){
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

int func_444(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
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

int func_445(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78338;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_446(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_347(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_446(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
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


bool func_447(int iParam0){
return Global_43257==iParam0;
}

int func_448(int iParam0){
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


void func_449(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=4;
func_450(iVar0, iParam0, 0, iParam1);
}


void func_450(int iParam0, int iParam1, int iParam2, int iParam3){
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
func_440(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_440(&(Global_78341[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
func_440(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var9);
if(iParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_440(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}
iVar10=(iParam1 - iParam2);
if(iVar10 >=0){
iVar11=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, 0, -1, func_451(iParam0));
if(iVar11 > iVar10){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar10, &Var9);
Global_2883588=Var9.f_1;
Global_2883589=Var9.f_0;
func_440(&(Global_78341[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 !=0);
return;
}}}}

int func_451(int iParam0){
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


void func_452(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_453(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 28, iParam1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_454(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_26));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_56));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_28));
}}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_455(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 6, iParam1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_456(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 55, iParam1);
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_457(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 26, iParam1);
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_458(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_25));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_459(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_23));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_460(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 16, iParam1);
return;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_461(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 36, iParam1);
return;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_462(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 136, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}
return;
break;
}
if(iParam0==4 || iParam0==20){
if(func_463(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(40) * Global_262145.f_1513[4]));
}}elseif(iParam0==7 || iParam0==23){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==9 || iParam0==25){
if(func_463(87, -1)){
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_463(int iParam0, int iParam1){
var uVar0;
int iVar1;
if(func_465(iParam0)==14192){
return 0;
}
uVar0=func_464(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_371(iVar1));
}


var func__464(var uParam0, int iParam1){
var uVar0;
uVar0=func_347(func_465(uParam0), iParam1, 0);
return uVar0;
}

int func_465(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_374(iVar0);
if((func_351()==0 || func_466()==0) || (func_351()==999 && func_466()==999)){
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

int func_466(){
return Global_32164;
}


void func_467(int iParam0, int iParam1){
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
if(func_463(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_24));
}else{
iVar1=round(((to_float(40) * Global_262145.f_1513[4]) * Global_296940.f_24));
}}elseif(iParam0==7){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_24));
}elseif(iParam0==9){
if(func_463(87, -1)){
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
func_450(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_24));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_468(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 92, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMF_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_469(int iParam0, int iParam1, int iParam2){
switch (iParam0){
case 2:
func_484(iParam1, iParam2);
break;
case 11:
func_483(iParam1, iParam2);
break;
case 8:
func_482(iParam1, iParam2);
break;
case 9:
func_481(iParam1, iParam2);
break;
case 3:
func_480(iParam1, iParam2);
break;
case 4:
func_479(iParam1, iParam2);
break;
case 6:
func_478(iParam1, iParam2);
break;
case 1:
func_477(iParam1, iParam2);
break;
case 7:
func_476(iParam1, iParam2);
break;
case 10:
func_475(iParam1, iParam2);
break;
case 14:
func_474(iParam1, iParam2);
break;
case 12:
func_473(iParam1, iParam2);
break;
case 5:
func_472(iParam1, iParam2);
break;
case 0:
func_471(iParam1, iParam2);
break;
case 13:
func_470(iParam1);
break;
}}


void func_470(int iParam0){
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_471(int iParam0, int iParam1){
int iVar0;
iVar0=0;
Global_78341[0 /*14*/].f_5=3;
func_450(iVar0, iParam0, 0, iParam1);
}


void func_472(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 9, iParam1);
return;
break;
}
StringCopy(&Var2, "HA_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_473(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 26, iParam1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_474(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 327, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("hat"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_18));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("glasses"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_20));
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("watch"), 1)){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_21));
}}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_475(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 7, iParam1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_476(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 92, iParam1);
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_477(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 26, iParam1);
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
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_478(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_17));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_479(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 256, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_15));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_480(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 16, iParam1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_481(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 46, iParam1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_482(int iParam0, int iParam1){
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
if(func_463(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round((to_float(1250) * Global_262145.f_2990));
}else{
iVar1=round((to_float(45) * Global_262145.f_443[23]));
}}elseif(iParam0==17 || iParam0==225){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round((to_float(450) * Global_262145.f_2989));
}elseif(iParam0==28 || iParam0==236){
if(func_463(87, -1)){
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
func_450(iVar7, iParam0, 241, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_483(int iParam0, int iParam1){
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
if(func_463(89, -1)){
StringCopy(&Var2, "REW_RS", 16);
iVar1=round(((to_float(1250) * Global_262145.f_2990) * Global_296940.f_16));
}else{
iVar1=round(((to_float(45) * Global_262145.f_443[23]) * Global_296940.f_16));
}}elseif(iParam0==17){
StringCopy(&Var2, "REW_LSB", 16);
iVar1=round(((to_float(450) * Global_262145.f_2989) * Global_296940.f_16));
}elseif(iParam0==28){
if(func_463(87, -1)){
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
func_450(iVar7, iParam0, 237, iParam1);
if(Global_78341[0 /*14*/].f_7 > 0){
Global_78341[0 /*14*/].f_7=round((to_float(Global_78341[0 /*14*/].f_7) * Global_296940.f_16));
}}else{
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}}


void func_484(int iParam0, int iParam1){
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
func_450(iVar7, iParam0, 91, iParam1);
return;
break;
}
StringCopy(&Var2, "H_FMM_", 16);
StringIntConCat(&Var2, iVar3, 16);
StringConCat(&Var2, "_", 16);
StringIntConCat(&Var2, iVar4, 16);
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_485(){
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

int func_486(bool bParam0){
if(bParam0){
return 1;
}
STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group1");
STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group2");
STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group3");
STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group4");
STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@player");
if(func_488()){
STREAMING::REQUEST_ANIM_DICT("MP_INTRO_SEQ@IG_4_CAR_SELECT@");
}
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_B@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_C@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_A@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_B@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_C@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_D@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_E@BASE");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_A@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_B@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA@SINGLE_TEAM");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@FEMALE_A");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_A");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_B");
STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_C");
if(func_487(Global_4718592.f_166301)){
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE");
STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A");
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group1")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group2")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group3")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group4")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@player")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_A@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_B@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_C@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_A@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_B@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_C@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_D@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_E@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_A@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_A@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_B@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@SINGLE_TEAM")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@FEMALE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@MALE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@MALE_B")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@MALE_C")){
return 0;
}
if(func_487(Global_4718592.f_166301)){
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE")){
return 0;
}
if(!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A")){
return 0;
}}
return 1;
}


bool func_487(int iParam0){
return iParam0==15;
}

int func_488(){
if((func_489() || MISC::IS_BIT_SET(Global_1935007, 0)) && Global_4718592==2){
return 1;
}
return 0;
}


var func__489(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 0);
}


bool func_490(int iParam0){
if(iParam0==0){
return 1;
}
STREAMING::REQUEST_MODEL(iParam0);
return STREAMING::HAS_MODEL_LOADED(iParam0);
}


void func_491(var uParam0, char* sParam1, char* sParam2, int iParam3){
switch (uParam0->f_1[iParam3]){
case default:
break;
case 0:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "trophy_a_1st", 64);
break;
case 1:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "trophy_b_1st", 64);
break;
case 2:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "trophy_c_1st", 64);
break;
case 3:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "trophy_d_1st", 64);
break;
case 4:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "trophy_e_1st", 64);
break;
case 5:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "trophy_f_1st", 64);
break;
case 6:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "cheer_a_1st", 64);
break;
case 7:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "clapping_a_1st", 64);
break;
case 8:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "cocky_a_1st", 64);
break;
case 9:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "crowd_point_a_1st", 64);
break;
case 10:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "dance_a_1st", 64);
break;
case 11:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "dance_b_1st", 64);
break;
case 12:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "finger_guns_a_1st", 64);
break;
case 13:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "finger_guns_b_1st", 64);
break;
case 14:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "fist_pump_a_1st", 64);
break;
case 15:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "flip_off_a_1st", 64);
break;
case 16:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "flip_off_b_1st", 64);
break;
case 17:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "flip_off_c_1st", 64);
break;
case 18:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "hands_air_b_1st", 64);
break;
case 19:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "hands_air_c_1st", 64);
break;
case 20:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "make_noise_a_1st", 64);
break;
case 21:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "regal_a_1st", 64);
break;
case 22:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "regal_b_1st", 64);
break;
case 23:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "regal_c_1st", 64);
break;
case 24:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "shrug_off_a_1st", 64);
break;
case 33:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "cheer_a_2nd", 64);
break;
case 34:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "cocky_a_2nd", 64);
break;
case 35:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "crowd_point_a_2nd", 64);
break;
case 36:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "finger_guns_a_2nd", 64);
break;
case 37:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "finger_guns_b_2nd", 64);
break;
case 38:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "flip_off_a_2nd", 64);
break;
case 39:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "flip_off_b_2nd", 64);
break;
case 40:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "flip_off_c_2nd", 64);
break;
case 41:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "make_noise_a_2nd", 64);
break;
case 42:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "shrug_off_a_2nd", 64);
break;
case 43:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "clapping_a_3rd", 64);
break;
case 44:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "dance_a_3rd", 64);
break;
case 45:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "dance_b_3rd", 64);
break;
case 46:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "fist_pump_a_3rd", 64);
break;
case 47:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "hands_air_b_3rd", 64);
break;
case 48:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "hands_air_c_3rd", 64);
break;
case 49:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "regal_a_3rd", 64);
break;
case 50:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "regal_b_3rd", 64);
break;
case 51:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "regal_c_3rd", 64);
break;
case 25:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "air_slap_a_1st", 64);
break;
case 52:
StringCopy(sParam1, "anim@arena@celeb@podium@no_prop@", 64);
StringCopy(sParam2, "air_slap_a_2nd", 64);
break;
case 26:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_chug_a_1st", 64);
break;
case 27:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_a_1st", 64);
break;
case 28:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_b_1st", 64);
break;
case 29:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_c_1st", 64);
break;
case 30:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_a_1st", 64);
break;
case 31:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_c_1st", 64);
break;
case 32:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_d_1st", 64);
break;
case 53:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_chug_a_2nd", 64);
break;
case 54:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_a_2nd", 64);
break;
case 55:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_b_2nd", 64);
break;
case 56:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_c_2nd", 64);
break;
case 57:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_a_2nd", 64);
break;
case 58:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_c_2nd", 64);
break;
case 59:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_d_2nd", 64);
break;
case 60:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_chug_a_3rd", 64);
break;
case 61:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_a_3rd", 64);
break;
case 62:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_b_3rd", 64);
break;
case 63:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "cham_spray_c_3rd", 64);
break;
case 64:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_a_3rd", 64);
break;
case 65:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_c_3rd", 64);
break;
case 66:
StringCopy(sParam1, "anim@arena@celeb@podium@prop@", 64);
StringCopy(sParam2, "confetti_canon_d_3rd", 64);
break;
case 109:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "angry_clap_a_player_a", 64);
break;
case 110:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "angry_clap_b_player_a", 64);
break;
case 129:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "angry_clap_b_player_b", 64);
break;
case 111:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "cap_a_player_a", 64);
break;
case 112:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "flip_a_player_a", 64);
break;
case 113:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "giggle_a_player_a", 64);
break;
case 130:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "giggle_a_player_b", 64);
break;
case 114:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "jump_a_player_a", 64);
break;
case 115:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "jump_b_player_a", 64);
break;
case 116:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "jump_c_player_a", 64);
break;
case 117:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "jump_d_player_a", 64);
break;
case 118:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "pageant_a_player_a", 64);
break;
case 131:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "pageant_a_player_b", 64);
break;
case 119:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "slide_a_player_a", 64);
break;
case 120:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "slide_b_player_a", 64);
break;
case 121:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "slide_c_player_a", 64);
break;
case 122:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "slugger_a_player_a", 64);
break;
case 123:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "smug_a_player_a", 64);
break;
case 132:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "smug_a_player_b", 64);
break;
case 124:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "smug_b_player_a", 64);
break;
case 133:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "smug_b_player_b", 64);
break;
case 125:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "taunt_b_player_a", 64);
break;
case 134:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "taunt_b_player_b", 64);
break;
case 135:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "taunt_c_player_b", 64);
break;
case 136:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "taunt_d_player_b", 64);
break;
case 137:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "taunt_e_player_b", 64);
break;
case 126:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "thumbs_down_a_player_a", 64);
break;
case 138:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "thumbs_down_a_player_b", 64);
break;
case 139:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "wave_a_player_b", 64);
break;
case 140:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "wow_a_player_b", 64);
break;
case 141:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@no_props@", 64);
StringCopy(sParam2, "wow_b_player_b", 64);
break;
case 80:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_a_player_a", 64);
break;
case 100:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_a_player_b", 64);
break;
case 81:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_b_player_a", 64);
break;
case 101:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_b_player_b", 64);
break;
case 82:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_c_player_a", 64);
break;
case 102:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_c_player_b", 64);
break;
case 83:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_d_player_a", 64);
break;
case 103:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "cham_d_player_b", 64);
break;
case 84:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "trophy_a_player_a", 64);
break;
case 104:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "trophy_a_player_b", 64);
break;
case 85:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "trophy_b_player_a", 64);
break;
case 105:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "trophy_b_player_b", 64);
break;
case 86:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "trophy_c_player_a", 64);
break;
case 106:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@props@", 64);
StringCopy(sParam2, "trophy_c_player_b", 64);
break;
case 67:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "baseball_a_player_a", 64);
break;
case 87:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "baseball_a_player_b", 64);
break;
case 68:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "daps_b_player_a", 64);
break;
case 88:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "daps_b_player_b", 64);
break;
case 69:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "did_you_see_a_player_a", 64);
break;
case 89:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "did_you_see_a_player_b", 64);
break;
case 70:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "high_five_b_player_a", 64);
break;
case 90:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "high_five_b_player_b", 64);
break;
case 71:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "high_five_c_player_a", 64);
break;
case 91:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "high_five_c_player_b", 64);
break;
case 72:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "hype_a_player_a", 64);
break;
case 92:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "hype_a_player_b", 64);
break;
case 73:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "laugh_a_player_a", 64);
break;
case 93:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "laugh_a_player_b", 64);
break;
case 74:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "laugh_b_player_a", 64);
break;
case 94:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "laugh_b_player_b", 64);
break;
case 75:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "piggyback_b_player_a", 64);
break;
case 95:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "piggyback_b_player_b", 64);
break;
case 76:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "piggyback_c_player_a", 64);
break;
case 96:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "piggyback_c_player_b", 64);
break;
case 77:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "the_bird_a_player_a", 64);
break;
case 97:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "the_bird_a_player_b", 64);
break;
case 78:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "this_guy_a_player_a", 64);
break;
case 98:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "this_guy_a_player_b", 64);
break;
case 79:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "this_guy_b_player_a", 64);
break;
case 99:
StringCopy(sParam1, "anim@arena@celeb@flat@paired@no_props@", 64);
StringCopy(sParam2, "this_guy_b_player_b", 64);
break;
case 107:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
StringCopy(sParam2, "chug_beer_a_player_a", 64);
break;
case 108:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
StringCopy(sParam2, "chug_beer_b_player_a", 64);
break;
case 127:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
StringCopy(sParam2, "make_it_rain_b_player_b", 64);
break;
case 128:
StringCopy(sParam1, "anim@arena@celeb@flat@solo@props@", 64);
StringCopy(sParam2, "smoking_b_player_b", 64);
break;
}}

int func_492(int iParam0, bool bParam1, bool bParam2){
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


void func_493(var uParam0){
if(!uParam0->f_1206){
uParam0->f_1206=1;
}}

int func_494(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14){
int iVar0;
struct<3> Var1;
int iVar2;
struct<3> Var3;
Global_2696915=MISC::GET_GAME_TIMER();
if(((((!func_669() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !DLC::GET_IS_LOADING_SCREEN_ACTIVE()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_2697018) && !func_668()==63){
return 0;
}
if(PLAYER::IS_PLAYER_TELEPORT_ACTIVE()){
PLAYER::STOP_PLAYER_TELEPORT();
return 0;
}
if(!STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()){
func_547();
func_540(1, 0);
MISC::PREVENT_ARREST_STATE_THIS_FRAME();
if(bParam10){
func_539(0);
func_537(0);
}
return 0;
}
if(!func_1996(PLAYER::PLAYER_ID(), 0)){
if(func_536()){
if(func_668()==58){
func_535(1);
}
if(func_534()){
if(MISC::IS_BIT_SET(Global_2621446, 3)){
MISC::CLEAR_BIT(&Global_2621446, 3);
}}
return 0;
}}
if(func_533()==4){
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()==0){
func_532(0);
}}
if(PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_540(1, 0);
if(bParam10){
func_539(0);
func_537(0);
}
return 0;
}
func_530();
func_528();
if(iParam9==0){}
if(!bParam11){
if(!func_527()){
func_526();
}}
if(!func_1962()){
if(HUD::IS_PAUSE_MENU_ACTIVE()==1){
if(bParam1){
HUD::SET_FRONTEND_ACTIVE(0);
}}
if(Global_1585922){
if(DLC::GET_IS_LOADING_SCREEN_ACTIVE()){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(0);
}}}}
if(HUD::IS_ONLINE_POLICIES_MENU_ACTIVE()==0){
if(HUD::GET_PAUSE_MENU_STATE()==25){
HUD::CLOSE_SOCIAL_CLUB_MENU();
}}
if((func_1996(PLAYER::PLAYER_ID(), 0) && func_351()==0) && !func_525(CAM::GET_FINAL_RENDERED_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 10f, 0)){
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), 0, 0, 0, 0);
bParam4=true;
}
iVar0=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(iVar0 !=0){
bParam4=true;
if(func_524()){
bParam2=false;
}}
if(Global_2694446){
if((Global_2684801.f_6618 || func_523(-1046478848)) || func_520()){
if(func_515(0)){
bParam12=true;
if(func_514() > 800 || (func_512() && !func_511())){
if(func_510() && !func_509()){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
CAM::DO_SCREEN_FADE_OUT(800);
}}
}}
func_508();
}}}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && (((Global_4718592.f_104427==6 || Global_4718592.f_104427==7) || Global_4718592.f_104427==18) || Global_4718592.f_104427==19)){
bParam4=true;
func_537(1);
bParam2=false;
}
if(PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())){
bParam4=true;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::IS_CUTSCENE_ACTIVE()){
bParam4=true;
}
if(bParam2 && !func_1996(PLAYER::PLAYER_ID(), 0)){
func_506(1, 0, 1);
}
if(((func_510() && ((HUD::IS_PAUSE_MENU_ACTIVE()==0 || bParam1==0) || (HUD::IS_SOCIAL_CLUB_ACTIVE() && HUD::IS_WARNING_MESSAGE_ACTIVE()))) && STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH()) && func_505()){
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(STREAMING::IS_SRL_LOADED()){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
STREAMING::END_SRL();
}}
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) 
};
HUD::CLEAR_PRINTS();
iVar2=0;
if(bParam4){
iVar2=1;
}
Var3={
iParam5, iParam6, iParam7 
};
if(iParam3==3){
if(func_195(Var3)){
iParam3=1;
}elseif(STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) !=3){
iParam3=1;
}}elseif(iParam3==2){
if(func_195(Var3)){
iParam3=1;
}elseif(STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) !=2 || STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Var1, Var3) !=3){
iParam3=1;
}}
GRAPHICS::DONT_RENDER_IN_GAME_UI(1);
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
if(bParam12){
GRAPHICS::ANIMPOSTFX_STOP_ALL();
}
func_504();
func_503();
if(func_502()){
if(func_501()){
iVar2=1;
iVar2 +=32;
iVar2 +=16384;
STREAMING::SWITCH_TO_MULTI_FIRSTPART(Global_1577843, iVar2, func_500());
}else{
return 0;
}}elseif(bParam0){
if(iParam13 || func_524()){
STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 | 16384 || iParam14), iParam3);
}else{
STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 128 || iParam14), iParam3);
}}elseif(iParam13 || func_524()){
STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 | 16384 || iParam14), iParam3);
}else{
STREAMING::SWITCH_TO_MULTI_FIRSTPART(PLAYER::PLAYER_PED_ID(), (iVar2 | 32 || iParam14), iParam3);
}
StringCopy(&Global_2694494, "", 32);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
StringCopy(&Global_2694494, AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
}}
func_532(1);
HUD::SET_BIGMAP_ACTIVE(0, 0);
if(bParam2 && !func_1996(PLAYER::PLAYER_ID(), 0)){
func_506(1, 0, 1);
}}
if(func_533()==1){
if(func_502()){
if(STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED()){
if(Global_2694453){
Global_2694453=0;
}
if(Global_2793046.f_6901 !=-1){
func_499();
}
if(ENTITY::DOES_ENTITY_EXIST(Global_1577843)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577843, 0, 1);
PED::DELETE_PED(&Global_1577843);
}
func_506(0, 0, 1);
if(!CAM::IS_SCREEN_FADING_IN()){
if(func_188()){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
}
CAM::DO_SCREEN_FADE_IN(800);
}
func_532(2);
return 1;
}else{
return 0;
}}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(STREAMING::GET_PLAYER_SWITCH_TYPE() !=3){
if(STREAMING::GET_PLAYER_SWITCH_STATE() > 2){
func_496();
func_506(0, 0, 1);
if(((func_495() && LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()==0) && NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA()==0) && NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT()==0){
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(0);
}
}}}elseif(bParam2){
if(bParam8){
func_496();
}
func_506(0, 0, 1);
}}
if(STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED()){
if(bParam8==0 || func_496()){
if(bParam2){
if(bParam8){
func_496();
}
func_506(0, 0, 1);
}
func_532(2);
return 1;
}}}}else{
return 1;
}
return 0;
}


var func__495(){
return Global_1575027;
}

int func_496(){
if(CAM::IS_SCREEN_FADED_OUT()){
func_498(0);
GRAPHICS::DISABLE_SCREENBLUR_FADE();
return 1;
}
if(func_497()==3){
func_498(2);
GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
}
if(GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >=250f){
GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
}
if(GRAPHICS::IS_SCREENBLUR_FADE_RUNNING()==0){
GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
}
if(GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() <=0f){
func_498(0);
return 1;
}
return 0;
}

int func_497(){
return Global_1574632.f_19;
}


void func_498(int iParam0){
if(Global_1574632.f_19 !=iParam0){
Global_1574632.f_19=iParam0;
}}


void func_499(){
Global_2793046.f_6901=-1;
}

int func_500(){
return 1;
}

int func_501(){
if(!ENTITY::DOES_ENTITY_EXIST(Global_1577843)){
Global_1577843=PED::CREATE_PED(25, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), Global_2684801.f_6619, 0f, 0, 0);
ENTITY::SET_ENTITY_VISIBLE(Global_1577843, false, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Global_1577843, 1);
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577843, 0, 0);
TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1577843);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_DESIRED_HEADING(Global_1577843, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
}
ENTITY::SET_ENTITY_COLLISION(Global_1577843, false, 0);
ENTITY::SET_ENTITY_VISIBLE(Global_1577843, false, 0);
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
STREAMING::SET_FOCUS_ENTITY(Global_1577843);
}}
if(ENTITY::DOES_ENTITY_EXIST(Global_1577843) && !ENTITY::IS_ENTITY_DEAD(Global_1577843, 0)){
ENTITY::SET_ENTITY_VISIBLE(Global_1577843, false, 0);
ENTITY::FREEZE_ENTITY_POSITION(Global_1577843, true);
TASK::CLEAR_PED_TASKS(Global_1577843);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1577843, 1);
if(!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
STREAMING::SET_FOCUS_ENTITY(Global_1577843);
}
return 1;
}
return 0;
}

int func_502(){
if(Global_2694446){
return Global_2694445;
}
return 0;
}


void func_503(){
if(ENTITY::DOES_ENTITY_EXIST(Global_2695825)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_2695825, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2695825)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2695825, 0, 0);
}
PED::DELETE_PED(&Global_2695825);
}}}


void func_504(){
if(ENTITY::DOES_ENTITY_EXIST(Global_1577842)){
if(ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1577842, 0)){
if(!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1577842)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577842, 0, 0);
}
PED::DELETE_PED(&Global_1577842);
}}}

int func_505(){
if(func_502()){
if(!CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_OUT()){
if(func_514() >=1600){
CAM::DO_SCREEN_FADE_OUT(0);
return 1;
}}
return 0;
}}
return 1;
}


void func_506(int iParam0, bool bParam1, bool bParam2){
if(func_511()){
return;
}
if((func_507()==1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0){
func_539(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
if(!bParam1){
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
}
if(bParam2){
GRAPHICS::RESET_PAUSED_RENDERPHASES();
}}}

int func_507(){
return Global_1574632.f_20;
}


void func_508(){
if(Global_2694446){
if(!Global_2694445){
Global_2694445=1;
Global_2694454=MISC::GET_GAME_TIMER();
Global_2694453=1;
}}}


bool func_509(){
return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 !=0;
}

int func_510(){
if(func_533()==0){
return 1;
}
return 0;
}

int func_511(){
if(func_502()){
return Global_2694453;
}
return 0;
}

int func_512(){
int iVar0;
if(Global_2684801.f_6618 && Global_2694446){
if(func_515(0)){
if(func_510() && !CAM::IS_SCREEN_FADED_OUT()){
if((((Global_2684801.f_6640==122 || Global_2684801.f_6640==123) || Global_2684801.f_6640==124) || Global_2684801.f_6640==125) || Global_2684801.f_6640==154){
return 1;
}
if(Global_2684801.f_6640 > -1){
iVar0=func_377(Global_2684801.f_6640);
if(iVar0==24){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2, 26)){
return 1;
}
if(MISC::IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_73.f_2, 27)){
return 1;
}
if(func_513()){
return 1;
}
if(Global_1963026){
return 1;
}
if(MISC::IS_BIT_SET(Global_4718592.f_37, 23)){
if(!func_1996(PLAYER::PLAYER_ID(), 0) && !func_536()){
return 1;
}}}}}
return 0;
}


bool func_513(){
return Global_2683864.f_24;
}

int func_514(){
int iVar0;
if(func_502()){
iVar0=MISC::ABSI((MISC::GET_GAME_TIMER() - Global_2694454));
return iVar0;
}
return 0;
}

int func_515(int iParam0){
if(func_519(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_1950108.f_4, 22)){
return 0;
}
if(Global_1577872){
return 0;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 0;
}
if(func_518()){
return 0;
}
if((Global_2694447 && func_188()) || Global_2694447==0){
return 1;
}
if(Global_2684801.f_6640==123 && Global_2694450){
return 1;
}
if(Global_2694448){
if(Global_2684801.f_6640==122){
return 1;
}}
if(MISC::IS_BIT_SET(Global_4718592.f_37, 23)){
if(!func_1996(PLAYER::PLAYER_ID(), 0) && !func_536()){
return 1;
}}
if(Global_2694451){
if(iParam0==0){
if((Global_2684801.f_6640==123 || (Global_2684801.f_6640==124 && func_516()==1)) || Global_2684801.f_6640==125){
return 1;
}}}
if((Global_2684801.f_6618 || func_523(-1046478848)) && Global_2694452){
if(iParam0==0){
return 1;
}}
if(MISC::IS_BIT_SET(Global_4718592.f_37, 23)){
return 1;
}
if(func_520() || func_513()){
return 1;
}
return 0;
}

int func_516(){
return func_517(PLAYER::PLAYER_ID());
}


var func__517(int iParam0){
return MISC::GET_BITS_IN_RANGE(Global_2657589[iParam0 /*466*/].f_321.f_3, 28, 31);
}


bool func_518(){
return MISC::IS_BIT_SET(Global_2683864.f_2, 11);
}

int func_519(int iParam0){
if(iParam0 !=func_237()){
if(func_492(iParam0, 1, 1)){
if(Global_2657589[iParam0 /*466*/].f_321.f_7 !=-1){
return func_377(Global_2657589[iParam0 /*466*/].f_321.f_7)==13;
}}}
return 0;
}


var func__520(){
return func_521(PLAYER::PLAYER_ID());
}


var func__521(int iParam0){
return func_522(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}


var func__522(var uParam0, int iParam1){
return MISC::IS_BIT_SET(*uParam0, iParam1);
}

int func_523(float fParam0){
struct<3> Var0;
Var0={
func_96(PLAYER::PLAYER_ID()) 
};
if(Var0.f_2 < fParam0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 1;
}}}else{
return 1;
}}
return 0;
}


bool func_524(){
return Global_1935725.f_1767;
}

int func_525(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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


void func_526(){
if(!MISC::IS_BIT_SET(Global_2621446, 27)){
MISC::SET_BIT(&Global_2621446, 27);
}}


bool func_527(){
return MISC::IS_BIT_SET(Global_2621446, 27);
}


void func_528(){
if(func_529()){}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTrevorIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGTrevorIn");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGMichaelIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGMichaelIn");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGFranklinIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGFranklinIn");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTrevorOut")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGTrevorOut");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGMichaelOut")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGMichaelOut");
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGFranklinOut")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGFranklinOut");
}}

int func_529(){
int iVar0;
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGIn");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGSelectionIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGSelectionIn");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGSelectionTint")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGSelectionTint");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTournamentIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGTournamentIn");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGHeistIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGHeistIn");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGHeistTint")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGHeistTint");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGHeistIntro")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGHeistIntro");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTournamentTint")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGTournamentTint");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGRemixIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGRemixIn");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuSurvivalAlienIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuSurvivalAlienIn");
iVar0=1;
}
if(GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGIslandHeistIn")){
GRAPHICS::ANIMPOSTFX_STOP("MenuMGIslandHeistIn");
iVar0=1;
}
return iVar0;
}


void func_530(){
bool bVar0;
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
func_218();
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
if(!Global_1653913.f_1556){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
}
bVar0=false;
bVar0=func_531("HQRHELP");
if(!bVar0){
HUD::HIDE_HELP_TEXT_THIS_FRAME();
}
func_147(0);
PAD::STOP_CONTROL_SHAKE(0);
func_147(0);
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
}


bool func_531(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_532(int iParam0){
if(iParam0==0){
Global_2696913=0;
}
Global_1574632.f_18=iParam0;
}

int func_533(){
return Global_1574632.f_18;
}


bool func_534(){
return Global_2695025;
}


void func_535(int iParam0){
Global_2695025=iParam0;
}


bool func_536(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}


void func_537(int iParam0){
func_538();
if(iParam0==0){
if(LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE()){
return;
}}
if(func_507()==0 || HUD::IS_PAUSE_MENU_ACTIVE()){
func_539(1);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(0);
}}


void func_538(){
Global_2696217=1;
}


void func_539(int iParam0){
if(Global_1574632.f_20 !=iParam0){
Global_1574632.f_20=iParam0;
}}


void func_540(int iParam0, bool bParam1){
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1)){
if(func_351()==0){
NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 0f, 0, (func_542(PLAYER::PLAYER_ID(), 1) && !bParam1), iParam0, -1, -1);
func_541();
}elseif(PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1)){
PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
}else{
PED::REVIVE_INJURED_PED(PLAYER::PLAYER_PED_ID());
}}
PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
MISC::FORCE_GAME_STATE_PLAYING();
}


void func_541(){
Global_2635559.f_45.f_320=1;
}


bool func_542(int iParam0, bool bParam1){
if(func_351() !=0){
return func_546(iParam0) !=0;
}
return func_543(iParam0, bParam1, 0);
}

int func_543(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_544(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_544(int iParam0){
return func_545(iParam0);
}


var func__545(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_546(int iParam0){
if(func_492(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}


void func_547(){
int iVar0;
struct<62> Var1;
int iVar2;
if(PLAYER::PLAYER_ID() !=func_237()){
if(func_666(PLAYER::PLAYER_ID())){
Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_585=0;
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 1048576000);
PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(PLAYER::PLAYER_PED_ID(), joaat("DEFAULT"));
iVar0=2600;
PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), 0);
GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false, 1);
PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1);
if(PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
}
PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID(), 1);
Var1=12;
Var1.f_13=12;
Var1.f_26=12;
Var1.f_39=9;
Var1.f_49=9;
iVar2=-1;
Var1[0]=func_665(387, iVar2);
Var1[1]=func_665(388, iVar2);
Var1[2]=func_665(389, iVar2);
Var1[3]=func_665(390, iVar2);
Var1[4]=func_665(391, iVar2);
Var1[5]=func_665(392, iVar2);
Var1[6]=func_665(393, iVar2);
Var1[7]=func_665(394, iVar2);
Var1[8]=func_665(395, iVar2);
Var1[9]=func_665(396, iVar2);
Var1[10]=func_665(397, iVar2);
Var1[11]=func_665(398, iVar2);
Var1.f_13[0]=func_665(399, iVar2);
Var1.f_13[1]=(func_665(400, iVar2) + func_665(18092, iVar2));
Var1.f_13[2]=func_665(401, iVar2);
Var1.f_13[3]=(func_665(402, iVar2) + func_665(18093, iVar2));
Var1.f_13[4]=func_665(403, iVar2);
Var1.f_13[5]=func_665(404, iVar2);
Var1.f_13[6]=func_665(405, iVar2);
Var1.f_13[7]=func_665(406, iVar2);
Var1.f_13[8]=(func_665(407, iVar2) + func_665(18094, iVar2));
Var1.f_13[9]=func_665(408, iVar2);
Var1.f_13[10]=func_665(409, iVar2);
Var1.f_13[11]=(func_665(410, iVar2) + func_665(18095, iVar2));
Var1.f_26[0]=func_665(411, iVar2);
Var1.f_26[1]=func_665(412, iVar2);
Var1.f_26[2]=func_665(413, iVar2);
Var1.f_26[3]=func_665(414, iVar2);
Var1.f_26[4]=func_665(415, iVar2);
Var1.f_26[5]=func_665(416, iVar2);
Var1.f_26[6]=func_665(417, iVar2);
Var1.f_26[7]=func_665(418, iVar2);
Var1.f_26[8]=func_665(419, iVar2);
Var1.f_26[9]=func_665(420, iVar2);
Var1.f_26[10]=func_665(421, iVar2);
Var1.f_26[11]=func_665(422, iVar2);
Var1.f_39[0]=func_665(423, iVar2);
Var1.f_39[1]=func_665(424, iVar2);
Var1.f_39[2]=func_665(425, iVar2);
Var1.f_39[3]=func_665(426, iVar2);
Var1.f_39[4]=func_665(427, iVar2);
Var1.f_39[5]=func_665(428, iVar2);
Var1.f_39[6]=func_665(429, iVar2);
Var1.f_39[7]=func_665(430, iVar2);
Var1.f_39[8]=func_665(431, iVar2);
Var1.f_49[0]=func_665(432, iVar2);
Var1.f_49[1]=func_665(433, iVar2);
Var1.f_49[2]=func_665(434, iVar2);
Var1.f_49[3]=func_665(435, iVar2);
Var1.f_49[4]=func_665(436, iVar2);
Var1.f_49[5]=func_665(437, iVar2);
Var1.f_49[6]=func_665(438, iVar2);
Var1.f_49[7]=func_665(439, iVar2);
Var1.f_49[8]=func_665(440, iVar2);
if(func_664(161, -1)){
Var1.f_59=func_347(2053, iVar2, 0);
}else{
Var1.f_59=func_347(753, iVar2, 0);
}
Var1.f_60=func_347(754, iVar2, 0);
Var1.f_61=func_347(755, iVar2, 0);
func_548(PLAYER::PLAYER_PED_ID(), &Var1, 0, 0, 1, 1);
}}}


void func_548(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5){
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
iVar0=func_661(iParam0);
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
if(func_660(iVar0)){
Global_113648.f_2365.f_539[iVar0 /*65*/].f_59=uParam1->f_59;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_60=uParam1->f_60;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_61=uParam1->f_61;
if(func_659(iParam0, iVar1, &iVar2, 0)){
func_639(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}
Global_113648.f_2365.f_539[iVar0 /*65*/].f_62=uParam1->f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=uParam1->f_63;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=uParam1->f_64;
if(func_567(iParam0, iVar1, &iVar2)){
func_639(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0)==ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
bVar4=func_564(iParam0);
func_563(754, uParam1->f_60, Global_78338, 1, 0);
func_563(755, uParam1->f_61, Global_78338, 1, 0);
iVar5=func_562(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
if(iVar5 !=-99){
iVar6=-99;
if(iVar1==joaat("mp_m_freemode_01")){
iVar6=func_560(iVar5);
}elseif(iVar1==joaat("mp_f_freemode_01")){
iVar6=func_558(iVar5);
}
if(iVar6 !=-99 && iVar5 !=iVar6){
iVar5=iVar6;
}}
func_2022(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
if(!bParam2){
iVar7=func_562(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
func_2022(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}
if(!bParam3){
iVar8=func_551(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
func_2022(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78338, bVar4, 0, 0);
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0==PLAYER::PLAYER_PED_ID()){
iVar9=uParam1->f_59;
if(iVar1==joaat("mp_m_freemode_01")){
iVar9=func_560(iVar9);
}else{
iVar9=func_558(iVar9);
}
func_563(753, iVar9, Global_78338, 1, 0);
func_563(2053, iVar9, Global_78338, 1, 0);
func_549(161, 1, -1, 1);
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


void func_549(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_550()){
iVar0=Global_2848282[iParam0 /*3*/][func_348(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
}}}

int func_550(){
return 1;
return 0;
}

int func_551(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(iParam1==-1){
return func_557(iParam3);
}
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar1=FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
if(iVar1 !=-1 && iVar1 !=0){
if(iVar0==joaat("mp_m_freemode_01")){
return func_553(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
}elseif(iVar0==joaat("mp_f_freemode_01")){
return func_553(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
iVar3=(iVar3 + func_552(iParam0, iParam3));
return iVar3;
}else{
iVar3++;
}
iVar5++;
}}
iVar4++;
}
return func_557(iParam3);
}

int func_552(int iParam0, int iParam1){
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

int func_553(int iParam0, int iParam1, int iParam2, int iParam3){
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
return (func_556(iParam0) + iVar1);
}
iVar1++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 1, -1, -1);
iVar3=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar3 !=-1){
return (func_555(iParam0) + iVar3);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_451(iParam2));
iVar4=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar4 !=-1){
return (func_554(iParam0, func_451(iParam2)) + iVar4);
}}
return -99;
}

int func_554(int iParam0, int iParam1){
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

int func_555(int iParam0){
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

int func_556(int iParam0){
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

int func_557(int iParam0){
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

int func_558(int iParam0){
if(Global_103222){
return func_559(iParam0);
}
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 148;
break;
case 7:
return 149;
break;
case 13:
return 150;
break;
case 18:
return 151;
break;
case 24:
return 152;
break;
case 30:
return 153;
break;
case 35:
return 154;
break;
case 41:
return 155;
break;
case 47:
return 156;
break;
case 53:
return 157;
break;
case 60:
return 158;
break;
case 67:
return 159;
break;
case 73:
return 160;
break;
case 79:
return 161;
break;
case 85:
return 162;
break;
case 92:
return 163;
break;
case 97:
return 164;
break;
case 102:
return 165;
break;
case 108:
return 166;
break;
case 113:
return 167;
break;
case 118:
return 168;
break;
case 123:
return 169;
break;
case 128:
return 170;
break;
case 134:
return 171;
break;
case 135:
return 172;
break;
case 136:
return 173;
break;
case 137:
return 174;
break;
case 138:
return 175;
break;
case 139:
return 176;
break;
case 140:
return 177;
break;
case 141:
return 178;
break;
case 142:
return 179;
break;
case 143:
return 180;
break;
case 144:
return 181;
break;
case 145:
return 182;
break;
case 146:
return 183;
break;
case 147:
return 184;
break;
}
return iParam0;
}

int func_559(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==1){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_0_0"), 2, 4);
}elseif(iParam0==7){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_1_0"), 2, 4);
}elseif(iParam0==13){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_2_0"), 2, 4);
}elseif(iParam0==18){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_3_0"), 2, 4);
}elseif(iParam0==24){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_4_0"), 2, 4);
}elseif(iParam0==30){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_5_0"), 2, 4);
}elseif(iParam0==35){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_6_0"), 2, 4);
}elseif(iParam0==41){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_7_0"), 2, 4);
}elseif(iParam0==47){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_8_0"), 2, 4);
}elseif(iParam0==53){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_9_0"), 2, 4);
}elseif(iParam0==60){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_10_0"), 2, 4);
}elseif(iParam0==67){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_11_0"), 2, 4);
}elseif(iParam0==73){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_12_0"), 2, 4);
}elseif(iParam0==79){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_13_0"), 2, 4);
}elseif(iParam0==85){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_14_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_beach_f_hair00"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_15_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_beach_f_hair05"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_16_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_busi_f_hair0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_18_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_busi_f_hair1_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_19_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_val_f_hair0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_17_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_hips_f_hair0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_20_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_hips_f_hair1_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_21_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_ind_f_hair0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_22_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_23_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair1_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_24_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair2_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_25_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low_f_hair3_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_26_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_27_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair1_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_28_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_low2_f_hair2_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_29_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_0_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_30_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_1_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_31_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_2_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_32_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_3_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_33_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_4_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_34_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_5_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_35_0"), 2, 4);
}elseif(iParam0==func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_biker_f_hair_6_0"), 2, 4)){
return func_553(joaat("mp_f_freemode_01"), joaat("dlc_mp_gr_f_hair_36_0"), 2, 4);
}
return iParam0;
}

int func_560(int iParam0){
if(Global_103222){
return func_561(iParam0);
}
switch (iParam0){
case 0:
return 0;
break;
case 1:
return 140;
break;
case 7:
return 141;
break;
case 13:
return 142;
break;
case 19:
return 143;
break;
case 26:
return 144;
break;
case 32:
return 145;
break;
case 38:
return 146;
break;
case 45:
return 147;
break;
case 50:
return 148;
break;
case 57:
return 149;
break;
case 63:
return 150;
break;
case 69:
return 151;
break;
case 74:
return 152;
break;
case 80:
return 153;
break;
case 85:
return 154;
break;
case 91:
return 155;
break;
case 96:
return 156;
break;
case 101:
return 157;
break;
case 106:
return 158;
break;
case 111:
return 159;
break;
case 116:
return 160;
break;
case 121:
return 161;
break;
case 126:
return 126;
break;
case 127:
return 162;
break;
case 128:
return 163;
break;
case 129:
return 164;
break;
case 130:
return 165;
break;
case 131:
return 166;
break;
case 132:
return 167;
break;
case 133:
return 168;
break;
case 134:
return 169;
break;
case 135:
return 170;
break;
case 136:
return 171;
break;
case 137:
return 172;
break;
case 138:
return 173;
break;
case 139:
return 174;
break;
}
return iParam0;
}

int func_561(int iParam0){
if(iParam0==0){
return 0;
}elseif(iParam0==1){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_0_0"), 2, 3);
}elseif(iParam0==7){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_1_0"), 2, 3);
}elseif(iParam0==13){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_2_0"), 2, 3);
}elseif(iParam0==19){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_3_0"), 2, 3);
}elseif(iParam0==26){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_4_0"), 2, 3);
}elseif(iParam0==32){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_5_0"), 2, 3);
}elseif(iParam0==38){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_6_0"), 2, 3);
}elseif(iParam0==45){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_7_0"), 2, 3);
}elseif(iParam0==50){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_8_0"), 2, 3);
}elseif(iParam0==57){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_9_0"), 2, 3);
}elseif(iParam0==63){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_10_0"), 2, 3);
}elseif(iParam0==69){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_11_0"), 2, 3);
}elseif(iParam0==74){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_12_0"), 2, 3);
}elseif(iParam0==80){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_13_0"), 2, 3);
}elseif(iParam0==85){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_14_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_beach_m_hair00"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_15_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_beach_m_hair05"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_16_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_busi_m_hair0_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_17_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_busi_m_hair1_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_18_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_hips_m_hair0_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_19_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_hips_m_hair1_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_20_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_ind_m_hair0_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_21_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair0_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_22_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair1_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_23_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair2_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_24_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low_m_hair3_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_25_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair0_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_26_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair1_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_27_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_low2_m_hair2_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_28_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_0_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_29_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_1_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_30_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_2_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_31_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_3_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_32_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_4_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_33_0"), 2, 3);
}elseif(iParam0==func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_biker_m_hair_5_0"), 2, 3)){
return func_553(joaat("mp_m_freemode_01"), joaat("dlc_mp_gr_m_hair_34_0"), 2, 3);
}
return iParam0;
}

int func_562(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=func_451(iParam3);
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


void func_563(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2805029[iParam0 /*3*/][func_348(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}

int func_564(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(!PED::IS_PED_INJURED(iParam0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_m_freemode_01")){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) !=func_237() && func_566(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0))){
return 1;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(iVar0 > 15){
iVar1=func_2126(iParam0, 11, -1);
if(iVar1 >=237){
iVar2=func_565(joaat("mp_m_freemode_01"), iVar1, 11, 3);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_11"), 0)){
return 1;
}elseif((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 83294665, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("biker_draw_27"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("stunt_draw_1"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("x17_draw_6"), 0)){
return 1;
}}}}elseif(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
if(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) !=func_237() && func_566(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0))){
return 1;
}
iVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
if(iVar0 > 15){
iVar3=func_2126(iParam0, 11, -1);
if(iVar3 >=237){
iVar4=func_565(joaat("mp_f_freemode_01"), iVar3, 11, 4);
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_11"), 0)){
return 1;
}elseif((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("biker_draw_32"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("stunt_draw_1"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("jugg_suit"), 0)){
return 1;
}elseif(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("x17_draw_6"), 0)){
return 1;
}}}}}
return 0;
}

int func_565(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar1;
int iVar2;
struct<2> Var3;
int iVar4;
int iVar5;
if(iParam2==12){}elseif(iParam2==13){}elseif(iParam2==14){
FILES::INIT_SHOP_PED_PROP(&Var0);
iVar1=(iParam1 - func_555(iParam0));
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
iVar4=(iParam1 - func_554(iParam0, func_451(iParam2)));
if(iVar4 < 0){
return -1;
}
if((iParam0==Global_78491.f_26[iParam2] && iParam1==Global_78491[iParam2]) && Global_78491.f_13[iParam2] !=0){
return Global_78491.f_13[iParam2];
}
iVar5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, 0, -1, func_451(iParam2));
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


var func__566(int iParam0){
return func_391(iParam0, 10);
}

int func_567(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_638(iParam1);
if(Global_113648.f_2365.f_539[iVar0 /*65*/].f_63 !=-99){
if(!func_568(iParam0, Global_113648.f_2365.f_539[iVar0 /*65*/].f_64, Global_113648.f_2365.f_539[iVar0 /*65*/].f_63)){
*iParam2=Global_113648.f_2365.f_539[iVar0 /*65*/].f_62;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_63=-99;
Global_113648.f_2365.f_539[iVar0 /*65*/].f_64=1;
return 1;
}}
return 0;
}

int func_568(int iParam0, int iParam1, int iParam2){
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
func_582(iVar0, iParam1, iParam2, -1) 
};
if(!MISC::IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0)){
return 0;
}
if(iParam1==12){
uVar5={
func_578(iVar0, iParam2) 
};
iVar2=0;
while (iVar2 <=14){
if((uVar5[iVar2] !=-99 && iVar2 !=12) && iVar2 !=14){
if(!func_568(iParam0, iVar2, uVar5[iVar2])){
if(iVar2==13){
uVar6={
func_575(iVar0, uVar5[iVar2]) 
};
iVar3=0;
while (iVar3 <=8){
if(!func_568(iParam0, 14, uVar6[iVar3])){
iVar4=0;
while (iVar4 <=19){
Global_78341[2 /*14*/]={
func_582(iVar0, 14, iVar4, -1) 
};
if(Global_78341[2 /*14*/].f_12==iVar3){
if(func_568(iParam0, 14, iVar4)){
if(!func_570(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}
}
}
iVar4++;
}}
iVar3++;
}}else{
iVar1=func_569(iParam0, iVar2);
Global_78341[2 /*14*/]={
func_582(iVar0, iVar2, iVar1, -1) 
};
if(!func_570(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78341[2 /*14*/]))){
return 0;
}}}}
iVar2++;
}
return 1;
}elseif(iParam1==13){
uVar8={
func_575(iVar0, iParam2) 
};
iVar7=0;
while (iVar7 <=8){
if(!func_568(iParam0, 14, uVar8[iVar7])){
return 0;
}
iVar7++;
}
return 1;
}elseif(iParam1==14){
if(PED::GET_PED_PROP_INDEX(iParam0, Global_78341[1 /*14*/].f_12, 1)==Global_78341[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78341[1 /*14*/].f_12)==Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3==-1)){
return 1;
}}elseif(Global_78341[1 /*14*/].f_3==PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_451(iParam1)) && Global_78341[1 /*14*/].f_4==PED::GET_PED_TEXTURE_VARIATION(iParam0, func_451(iParam1))){
return 1;
}
return 0;
}

int func_569(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(((iParam1==12 || iParam1==13) || iParam1==14) || PED::IS_PED_INJURED(iParam0)){
return -99;
}
iVar0=func_451(iParam1);
iVar1=PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
iVar2=PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
return func_562(iParam0, iVar1, iVar2, iParam1);
}

int func_570(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5){
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
func_575(iParam0, (*uParam4)[13]) 
};
iVar1=0;
while (iVar1 <=8){
if(uVar0[iVar1]==iParam3){
return 1;
}
iVar1++;
}}
if(func_574(iParam0, iParam2, iParam3)){
return 1;
}
if(iParam0==joaat("player_zero")){
if(func_573(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}elseif(func_572(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_571(iParam0, iParam2, iParam3, -1)){
if(((((((((iParam1==1 || iParam1==2) || iParam1==4) || iParam1==5) || iParam1==10) || iParam1==11) || iParam1==12) || iParam1==14) || iParam1==18) || iParam1==50){
return 0;
}
return 1;
}}elseif(iParam0==joaat("player_one")){
if(func_573(iParam0, iParam2, iParam3, -1)){
if((iParam1==3 || iParam1==5) || iParam1==7){
return 0;
}
return 1;
}elseif(func_572(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_571(iParam0, iParam2, iParam3, -1)){
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
if(func_573(iParam0, iParam2, iParam3, -1)){
if(((((iParam1==1 || iParam1==2) || iParam1==6) || iParam1==8) || iParam1==45) || iParam1==12){
return 0;
}
return 1;
}elseif(func_572(iParam0, iParam2, iParam3, -1)){
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
}elseif(func_571(iParam0, iParam2, iParam3, -1)){
if((((((iParam1==1 || iParam1==2) || iParam1==3) || iParam1==6) || iParam1==8) || iParam1==11) || iParam1==12){
return 0;
}
return 1;
}}
return 0;
}

int func_571(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_565(iParam0, iParam2, 14, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_565(iParam0, iParam2, 14, 3), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_565(iParam0, iParam2, 1, 3);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_565(iParam0, iParam2, 1, 3), -1842686353, 0));
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
iParam3=func_565(iParam0, iParam2, 14, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_565(iParam0, iParam2, 14, 4), -1842686353, 1));
}
break;
case 1:
if(iParam2 >=26){
if(iParam3==-1){
iParam3=func_565(iParam0, iParam2, 1, 4);
}
return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_565(iParam0, iParam2, 1, 4), -1842686353, 0));
}
break;
}
break;
}
return 0;
}

int func_572(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_565(iParam0, iParam2, 1, 3);
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
iParam3=func_565(iParam0, iParam2, 1, 4);
}
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hat"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("hair_shrink"), 0)){
return 0;
}}
return 1;
}}}
return 0;
}

int func_573(int iParam0, int iParam1, int iParam2, int iParam3){
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
iParam3=func_565(iParam0, iParam2, 14, 3);
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
iParam3=func_565(iParam0, iParam2, 14, 4);
}
return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("glasses"), 1);
}}
break;
}
return 0;
}

int func_574(int iParam0, int iParam1, int iParam2){
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


struct<10> func_575(int iParam0, int iParam1){
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
func_577(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_577(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_577(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_577(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_577(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_577(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_577(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_577(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_577(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_577(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_577(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_576(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_577(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_577(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_577(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_577(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_577(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_577(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_577(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_577(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_577(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_577(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_576(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_577(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_577(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_577(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_577(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_577(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_577(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_577(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_577(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_577(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_577(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_576(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_577(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_577(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_577(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_577(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_577(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_577(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_577(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_577(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_577(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_577(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_577(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_577(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_577(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_577(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_577(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_577(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_577(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_577(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_577(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_577(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_577(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_577(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_577(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_577(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_577(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_577(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_576(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_577(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_577(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_577(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_577(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_577(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_577(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_577(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_577(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_577(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_577(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_577(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_577(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_577(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_577(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_577(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_577(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_577(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_577(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_577(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_577(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_577(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_577(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_577(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_577(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_577(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_576(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_576(int iParam0, int iParam1, int iParam2, int iParam3){
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
(*iParam0)[Var2.f_2]=func_553(iParam1, Var2.f_0, 14, iVar0);
}elseif(Var2.f_1 !=-1){
(*iParam0)[Var2.f_2]=Var2.f_1;
}}
iVar3++;
}}}}


void func_577(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
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
struct<17> func_578(int iParam0, int iParam1){
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
func_581(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_581(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_581(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_581(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_581(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_581(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_581(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_581(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_581(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_581(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_581(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_581(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_581(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_581(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_581(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_581(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_581(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_581(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_581(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_581(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_581(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_581(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_581(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_581(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_581(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_581(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_581(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_581(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_581(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_581(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_581(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_581(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_581(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_581(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_581(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_581(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_581(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_581(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_581(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_581(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_581(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_581(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_581(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_581(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_581(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_581(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_581(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_581(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_581(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_581(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_581(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_581(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_581(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_581(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_579(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_581(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_581(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_581(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_581(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_581(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_581(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_581(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_581(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_581(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_581(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_581(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_581(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_581(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_581(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_581(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_581(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_581(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_581(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_581(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_581(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_581(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_581(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_581(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_581(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_581(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_581(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_581(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_581(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_581(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_581(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_581(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_581(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_581(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_581(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_581(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_581(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_581(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_581(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_581(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_581(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_581(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_581(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_581(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_581(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_581(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_581(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_581(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_579(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_581(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_581(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_581(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_581(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_581(&Var1, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_581(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_581(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_581(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_581(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_581(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_581(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_581(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_581(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_581(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_581(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_581(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_581(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_581(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_581(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_581(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_581(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_581(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_581(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_581(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_581(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_581(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_581(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_581(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_581(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_581(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_581(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_581(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_581(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_581(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_581(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_581(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_581(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_581(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_581(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_581(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_581(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_581(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_581(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_581(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_581(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_581(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_581(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_581(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_579(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_581(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_581(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_581(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_581(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_581(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_581(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_581(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_581(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_581(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_581(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_581(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_581(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_581(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_581(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_581(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_581(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_581(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_581(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_581(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_581(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_581(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_581(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_581(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_581(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_581(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_581(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_579(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_581(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_581(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_581(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_581(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_581(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_581(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_581(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_581(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_581(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_581(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_581(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_581(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_581(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_581(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_581(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_581(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_581(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_581(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_581(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_581(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_581(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_581(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_581(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_581(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_581(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_581(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_581(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_581(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_579(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_579(var uParam0, int iParam1, int iParam2, int iParam3){
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
(*uParam0)[func_580(Var2.f_2)]=Var2.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_580(Var2.f_2)]=func_553(iParam1, Var2.f_0, func_580(Var2.f_2), iVar0);
}}elseif(Var2.f_1 !=-1){
(*uParam0)[func_580(Var2.f_2)]=Var2.f_1;
}}
iVar4++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_580(int iParam0){
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


void func_581(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
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
struct<14> func_582(int iParam0, int iParam1, int iParam2, int iParam3){
func_485();
if(iParam0==joaat("player_zero")){
func_620(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_601(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_583(iParam1, iParam2);
}
return Global_78341[0 /*14*/];
}


void func_583(int iParam0, int iParam1){
switch (iParam0){
case 0:
func_600(iParam1);
break;
case 2:
func_599(iParam1);
break;
case 3:
func_596(iParam1);
break;
case 4:
func_595(iParam1);
break;
case 6:
func_594(iParam1);
break;
case 5:
func_593(iParam1);
break;
case 8:
func_592(iParam1);
break;
case 9:
func_591(iParam1);
break;
case 10:
func_590(iParam1);
break;
case 1:
func_589(iParam1);
break;
case 7:
func_588(iParam1);
break;
case 11:
func_587(iParam1);
break;
case 12:
func_586(iParam1);
break;
case 13:
func_585(iParam1);
break;
case 14:
func_584(iParam1);
break;
}}


void func_584(int iParam0){
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
func_450(iVar7, iParam0, 155, -1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_585(int iParam0){
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
func_450(iVar7, iParam0, 9, -1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_586(int iParam0){
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
func_450(iVar7, iParam0, 48, -1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_587(int iParam0){
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
func_450(iVar7, iParam0, 1, -1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_588(int iParam0){
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
func_450(iVar7, iParam0, 1, -1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_589(int iParam0){
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
func_450(iVar7, iParam0, 6, -1);
return;
break;
}
func_440(&(Global_78341[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}


void func_590(int iParam0){
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
