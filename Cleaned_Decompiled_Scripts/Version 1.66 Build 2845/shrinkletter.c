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
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
int iLocal_52=0;
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
var uLocal_74=8;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=4;
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
var uLocal_93=4;
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
var uLocal_108=4;
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
var uLocal_123=4;
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
var uLocal_138=4;
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
var uLocal_153=4;
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
var uLocal_168=4;
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
var uLocal_183=4;
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
#endregion

void __EntryFunction__(){
struct<4> Var0;
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
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18)){
func_60();
}
HUD::REQUEST_ADDITIONAL_TEXT("REPORT", 0);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0)){
wait(0);
}
while (true){
switch (iLocal_52){
case 0:
break;
case 1:
func_51(1, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
HUD::DISPLAY_RADAR(0);
HUD::DISPLAY_HUD(0);
uLocal_53=GRAPHICS::REQUEST_SCALEFORM_MOVIE("PSYCHOLOGY_REPORT");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_53)){
func_43();
wait(0);
}
HUD::REQUEST_ADDITIONAL_TEXT("REPORT", 3);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3)){
func_43();
wait(0);
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_53, "SET_PLAYER_NAME");
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("PATIENT");
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("GAMERTAG");
if(NETWORK::NETWORK_IS_SIGNED_IN()){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
}else{
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("ACCNA_MIKE");
}
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_53, "SET_LETTER_TEXT");
func_42("HEADER_1");
func_42("HEADER_2");
Var0={
func_41(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_40(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_39(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_38(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_37(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_35(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_33(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_32(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_31(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_30(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_28(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_24(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_23(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_21(&uLocal_54) 
};
func_42(&Var0);
Var0={
func_20(&uLocal_54) 
};
func_42(&Var0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
while (!func_13(&uLocal_70, &uLocal_71, &uLocal_54)){
func_43();
wait(0);
}
func_12(&uLocal_72);
func_11(&uLocal_72, 0, 0, 0, 1);
func_10(&uLocal_72, "CONTINUE", 2, 201, 1, 1, 0);
func_9(&uLocal_72, 1);
func_8(&uLocal_72, 1);
if(CAM::IS_SCREEN_FADED_OUT()){
if(!CAM::IS_SCREEN_FADING_IN()){
func_43();
CAM::DO_SCREEN_FADE_IN(800);
}
while (!CAM::IS_SCREEN_FADED_IN()){
func_43();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
wait(0);
}}
func_43();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
iLocal_52=2;
break;
case 2:
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
func_1(&uLocal_72, 1128792064, 1, 0, 1, 1065353216);
if(PAD::IS_CONTROL_PRESSED(2, 201)){
iLocal_52=3;
}
break;
case 3:
func_12(&uLocal_72);
CAM::DO_SCREEN_FADE_OUT(3000);
while (CAM::IS_SCREEN_FADING_OUT()){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
func_43();
wait(0);
}
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_53);
func_51(0, 1, 1, 0, 0, 0, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
HUD::DISPLAY_RADAR(1);
HUD::DISPLAY_HUD(1);
func_60();
break;
}
if(iLocal_52 !=0){
func_43();
}
wait(0);
}}


void func_1(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5){
var uVar0;
var uVar1;
int iVar2;
var uVar3;
bool bVar4;
int iVar5;
int iVar6;
bool bVar7;
float fVar8;
if(((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING()){
if(!bParam3){
return;
}}
if(!func_7(uParam0)){
return;
}
HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
if(!func_6(uParam0->f_1, 256) || (func_6(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(2))){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
if(MISC::IS_PC_VERSION()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_6(uParam0->f_1, 4096));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
iVar5=0;
iVar6=0;
while (iVar6 < uParam0->f_123){
switch (uParam0->f_2[iVar6 /*15*/].f_2){
case 0:
bVar4=true;
break;
case 1:
bVar4=PAD::IS_USING_KEYBOARD_AND_MOUSE(2);
break;
case 2:
bVar4=!PAD::IS_USING_KEYBOARD_AND_MOUSE(2);
break;
default:
bVar4=false;
break;
}
if(bVar4){
if(GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT")){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
iVar5++;
bVar7=false;
while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14){
uVar0=uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
uVar1=uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
iVar2=MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
if(!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, bVar7)){
uVar3=PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(uVar0, uVar1, iVar2);
}
else{
uVar3=PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(uVar0, uVar1, iVar2);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uVar3)){
func_5(uVar3);
}
bVar7++;
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/])){
func_42(uParam0->f_2[iVar6 /*15*/]);
}
if(MISC::IS_PC_VERSION()){
if(func_6(uParam0->f_1, 4096)){
if(uParam0->f_2[iVar6 /*15*/].f_1){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
}else{
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
}
}}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
iVar6++;
}
fVar8=func_4(bParam4, func_4(func_6(uParam0->f_1, 32), 1f, 0f), -1f);
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_3(&(uParam0->f_1), 256);
func_2(&(uParam0->f_1), 128);
}
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}


void func_2(var uParam0, int iParam1){
*uParam0=(*uParam0 - (*uParam0 && iParam1));
}


void func_3(var uParam0, int iParam1){
*uParam0=(*uParam0 || iParam1);
}


float func_4(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_5(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


bool func_6(var uParam0, int iParam1){
return (uParam0 && iParam1) !=0;
}

int func_7(var uParam0){
if(*uParam0 !=0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_3(&(uParam0->f_1), 1);
return 1;
}}
return 0;
}


void func_8(var uParam0, bool bParam1){
if(bParam1){
func_3(&(uParam0->f_1), 16);
}else{
func_2(&(uParam0->f_1), 16);
}}


void func_9(var uParam0, bool bParam1){
if(bParam1){
func_3(&(uParam0->f_1), 1024);
}else{
func_2(&(uParam0->f_1), 1024);
}}

int func_10(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
if(*uParam0==0){
return 0;
}
iVar0=0;
if(iParam5==1){
iVar0=1;
}
iVar1=uParam0->f_123;
if(iVar1 < 8){
uParam0->f_2[iVar1 /*15*/]=sParam1;
uParam0->f_2[iVar1 /*15*/].f_1=iVar0;
uParam0->f_2[iVar1 /*15*/].f_2=iParam6;
uParam0->f_2[iVar1 /*15*/].f_12=0;
uParam0->f_2[iVar1 /*15*/].f_13=0;
uParam0->f_2[iVar1 /*15*/].f_14=0;
uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/]=iParam2;
uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1=iParam3;
if(iParam4==1){
MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
}
uParam0->f_2[iVar1 /*15*/].f_14++;
uParam0->f_123++;
return 1;
}
return 0;
}


void func_11(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4){
if(*uParam0==0){
*uParam0=GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
}
uParam0->f_1=0;
uParam0->f_123=0;
if(bParam1){
func_3(&(uParam0->f_1), 32);
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)){
func_3(&(uParam0->f_1), 1);
if(bParam2){
GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
}}
if(MISC::IS_PC_VERSION()){
if(bParam3){
func_3(&(uParam0->f_1), 4096);
}}
if(bParam4){
func_3(&(uParam0->f_1), 8192);
}}


void func_12(var uParam0){
if(*uParam0 !=0){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
*uParam0=0;
}
uParam0->f_1=0;
uParam0->f_123=0;
}

int func_13(var uParam0, var uParam1, var uParam2){
int iVar0;
if(func_17()){
return 1;
}
switch (*uParam0){
case 0:
if(func_16()){
return 0;
}
func_15();
*uParam0++;
break;
case 1:
DATAFILE::DATAFILE_CREATE(0);
iVar0=DATAFILE::DATAFILE_GET_FILE_DICT(0);
DATAFILE::DATADICT_SET_INT(iVar0, "in", *uParam2);
DATAFILE::DATADICT_SET_STRING(iVar0, "st", &(uParam2->f_1));
DATAFILE::DATADICT_SET_STRING(iVar0, "mp", &(uParam2->f_2));
DATAFILE::DATADICT_SET_STRING(iVar0, "ms", &(uParam2->f_3));
DATAFILE::DATADICT_SET_STRING(iVar0, "sc", &(uParam2->f_5));
DATAFILE::DATADICT_SET_STRING(iVar0, "pr", &(uParam2->f_6));
DATAFILE::DATADICT_SET_STRING(iVar0, "fa", &(uParam2->f_7));
DATAFILE::DATADICT_SET_STRING(iVar0, "sm", &(uParam2->f_8));
DATAFILE::DATADICT_SET_STRING(iVar0, "kp", &(uParam2->f_9));
DATAFILE::DATADICT_SET_STRING(iVar0, "sv", &(uParam2->f_10));
DATAFILE::DATADICT_SET_STRING(iVar0, "yo", &(uParam2->f_11));
DATAFILE::DATADICT_SET_STRING(iVar0, "fi", &(uParam2->f_12));
DATAFILE::DATADICT_SET_STRING(iVar0, "rc", &(uParam2->f_13));
DATAFILE::DATADICT_SET_STRING(iVar0, "co", &(uParam2->f_14));
DATAFILE::DATADICT_SET_INT(iVar0, "su", uParam2->f_15);
DATAFILE::DATAFILE_START_SAVE_TO_CLOUD("gta5/psych/index.json", 0);
*uParam0++;
break;
case 2:
if(func_14(uParam1, 1)){
return 1;
}
break;
}
return 0;
}

int func_14(var uParam0, int iParam1){
if(!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(uParam0)){
if(*uParam0){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0 && iParam1){
DATAFILE::DATAFILE_DELETE(0);
}
return 1;
}else{
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0 && iParam1){
DATAFILE::DATAFILE_DELETE(0);
}
return 1;
}}
return 0;
}


void func_15(){
if(DATAFILE::DATAFILE_GET_FILE_DICT(0) !=0){
DATAFILE::DATAFILE_DELETE(0);
}}

int func_16(){
if(NETWORK::UGC_IS_CREATING()){
return 1;
}elseif(NETWORK::UGC_IS_GETTING()){
return 1;
}elseif(NETWORK::UGC_IS_MODIFYING()){
return 1;
}
return 0;
}

int func_17(){
if(!func_18()){
return 1;
}
return 0;
}

int func_18(){
if(func_19()){
return 0;
}
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()==0){
return 0;
}
return 1;
}


bool func_19(){
return Global_2695033;
}


struct<4> func_20(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "SUMMARY_", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 24);
uParam0->f_15=iVar1;
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_21(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "COLLECT_", 16);
if(((func_22(110) || func_22(95)) || func_22(106)) || func_22(107)){
StringCopy(&(uParam0->f_14), "Y", 4);
StringConCat(&Var0, "Y", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
}else{
StringCopy(&(uParam0->f_14), "N", 4);
StringConCat(&Var0, "N", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
}
StringIntConCat(&(uParam0->f_14), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}

int func_22(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113648.f_9087.f_99.f_58[iParam0];
}


struct<4> func_23(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
StringCopy(&Var0, "RAND_", 16);
STATS::STAT_GET_INT(joaat("num_rndpeople_completed"), &iVar2, -1);
STATS::STAT_GET_INT(joaat("num_rndevents_completed"), &iVar3, -1);
iVar4=(iVar2 + iVar3);
if(iVar4 > 10){
StringCopy(&(uParam0->f_13), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_13), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_13), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_24(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "FIT_", 16);
if((((((((func_25(1, 1) > 50 && func_25(1, 2) > 50) && func_25(1, 3) > 50) && func_25(0, 1) > 50) && func_25(0, 2) > 50) && func_25(0, 3) > 50) && func_25(2, 1) > 50) && func_25(2, 2) > 50) && func_25(2, 3) > 50){
StringCopy(&(uParam0->f_12), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_12), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
StringIntConCat(&(uParam0->f_12), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}

int func_25(int iParam0, int iParam1){
var uVar0;
int iVar1;
iVar1=func_26(iParam0, iParam1);
STATS::STAT_GET_INT(iVar1, &uVar0, -1);
return uVar0;
}


var func__26(int iParam0, int iParam1){
var uVar0;
var uVar1;
func_27(iParam0, iParam1, &uVar0, &uVar1);
return uVar0;
}


void func_27(int iParam0, int iParam1, var uParam2, var uParam3){
switch (iParam0){
case 0:
switch (iParam1){
case 0:
*uParam2=joaat("sp0_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp0_stamina");
break;
case 3:
*uParam2=joaat("sp0_lung_capacity");
break;
case 2:
*uParam2=joaat("sp0_strength");
break;
case 4:
*uParam2=joaat("sp0_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp0_flying_ability");
break;
case 6:
*uParam2=joaat("sp0_shooting_ability");
break;
case 7:
*uParam2=joaat("sp0_stealth_ability");
break;
}
break;
case 1:
switch (iParam1){
case 0:
*uParam2=joaat("sp1_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp1_stamina");
break;
case 3:
*uParam2=joaat("sp1_lung_capacity");
break;
case 2:
*uParam2=joaat("sp1_strength");
break;
case 4:
*uParam2=joaat("sp1_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp1_flying_ability");
break;
case 6:
*uParam2=joaat("sp1_shooting_ability");
break;
case 7:
*uParam2=joaat("sp1_stealth_ability");
break;
}
break;
case 2:
switch (iParam1){
case 0:
*uParam2=joaat("sp2_special_ability_unlocked");
break;
case 1:
*uParam2=joaat("sp2_stamina");
break;
case 3:
*uParam2=joaat("sp2_lung_capacity");
break;
case 2:
*uParam2=joaat("sp2_strength");
break;
case 4:
*uParam2=joaat("sp2_wheelie_ability");
break;
case 5:
*uParam2=joaat("sp2_flying_ability");
break;
case 6:
*uParam2=joaat("sp2_shooting_ability");
break;
case 7:
*uParam2=joaat("sp2_stealth_ability");
break;
}
break;
case 3:
switch (iParam1){
case 0:
*uParam3=64;
break;
case 1:
*uParam3=65;
break;
case 3:
*uParam3=67;
break;
case 2:
*uParam3=66;
break;
case 4:
*uParam3=68;
break;
case 5:
*uParam3=69;
break;
case 6:
*uParam3=70;
break;
case 7:
*uParam3=71;
break;
}
break;
}}


struct<4> func_28(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "YOGA_", 16);
if(func_29(300, 1)){
StringCopy(&(uParam0->f_11), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_11), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_11), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}

int func_29(int iParam0, int iParam1){
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(iParam1==1){
}
return 1;
}
return 0;
}


struct<4> func_30(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "VEHS_", 16);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_cop_vehicle"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_cars"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_bikes"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_boats"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_helis"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_quadbikes"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_number_stolen_bicycles"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_cop_vehicle"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_cars"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_bikes"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_boats"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_helis"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_quadbikes"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_number_stolen_bicycles"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_cop_vehicle"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_cars"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_bikes"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_boats"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_helis"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_quadbikes"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_number_stolen_bicycles"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
if(iVar3 >=100){
StringCopy(&(uParam0->f_10), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_10), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_10), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_31(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "PEDS_", 16);
STATS::STAT_GET_INT(joaat("sp0_kills_innocents"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_kills_innocents"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_kills_innocents"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
if(iVar3 >=100){
StringCopy(&(uParam0->f_9), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_9), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_9), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_32(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
StringCopy(&Var0, "STOCK_", 16);
STATS::STAT_GET_INT(joaat("time_spent_on_stockmarket"), &iVar2, 0);
if(iVar2 >=120000){
StringCopy(&(uParam0->f_8), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_8), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_8), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_33(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "FAMILY_", 16);
if(func_34(8) && func_34(5)){
StringCopy(&(uParam0->f_7), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_7), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_7), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}

int func_34(int iParam0){
if(iParam0 < 9){
return MISC::IS_BIT_SET(Global_113648.f_18105.f_175[iParam0 /*19*/].f_18, 0);
}
return 0;
}


struct<4> func_35(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "PROS_", 16);
if((func_36(1) > 0 || func_36(0) > 0) || func_36(2) > 0){
StringCopy(&(uParam0->f_6), "Y", 4);
StringConCat(&Var0, "Y", 16);
}else{
StringCopy(&(uParam0->f_6), "N", 4);
StringConCat(&Var0, "N", 16);
}
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
StringIntConCat(&(uParam0->f_6), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}

int func_36(int iParam0){
switch (iParam0){
case 0:
return Global_113648.f_10051.f_90[0];
break;
case 1:
return Global_113648.f_10051.f_90[1];
break;
case 2:
return Global_113648.f_10051.f_90[2];
break;
}
return 0;
}


struct<4> func_37(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
StringCopy(&Var0, "STRIP_", 16);
STATS::STAT_GET_INT(joaat("sp0_lap_danced_bought"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_lap_danced_bought"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_lap_danced_bought"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp0_money_spent_in_strip_clubs"), &iVar4, 0);
iVar5=(iVar5 + iVar4);
STATS::STAT_GET_INT(joaat("sp1_money_spent_in_strip_clubs"), &iVar4, 1);
iVar5=(iVar5 + iVar4);
STATS::STAT_GET_INT(joaat("sp2_money_spent_in_strip_clubs"), &iVar4, 2);
iVar5=(iVar5 + iVar4);
if(iVar3 >=3 || iVar5 >=100){
StringCopy(&(uParam0->f_5), "Y", 4);
StringConCat(&Var0, "Y", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}else{
StringCopy(&(uParam0->f_5), "N", 4);
StringConCat(&Var0, "N", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
}
StringIntConCat(&(uParam0->f_5), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_38(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
StringCopy(&Var0, "CASH_", 16);
STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar2, 0);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar2, 1);
iVar3=(iVar3 + iVar2);
STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar2, 2);
iVar3=(iVar3 + iVar2);
if(iVar3 >=1000000){
StringCopy(&(uParam0->f_3), "SP", 8);
StringConCat(&Var0, "SP", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
}else{
StringCopy(&(uParam0->f_3), "SA", 8);
StringConCat(&Var0, "SA", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}
StringIntConCat(&(uParam0->f_3), iVar1, 8);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_39(var uParam0){
struct<4> Var0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
StringCopy(&Var0, "CHAR_", 16);
iVar2=0;
iVar4=0;
STATS::STAT_GET_INT(joaat("sp0_total_playing_time"), &iVar4, 0);
STATS::STAT_GET_INT(joaat("sp1_total_playing_time"), &iVar3, 1);
if(iVar3 > iVar4){
iVar4=iVar3;
iVar2=1;
}
STATS::STAT_GET_INT(joaat("sp2_total_playing_time"), &iVar3, 2);
if(iVar3 > iVar4){
iVar4=iVar3;
iVar2=2;
}
if(iVar2==0){
StringCopy(&(uParam0->f_2), "M", 4);
StringConCat(&Var0, "M", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}elseif(iVar2==1){
StringCopy(&(uParam0->f_2), "F", 4);
StringConCat(&Var0, "F", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
}else{
StringCopy(&(uParam0->f_2), "T", 4);
StringConCat(&Var0, "T", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
}
StringIntConCat(&(uParam0->f_2), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_40(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "STORY_", 16);
if(func_22(135)){
StringCopy(&(uParam0->f_1), "M", 4);
StringConCat(&Var0, "M", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
}elseif(func_22(136)){
StringCopy(&(uParam0->f_1), "T", 4);
StringConCat(&Var0, "T", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
}else{
StringCopy(&(uParam0->f_1), "B", 4);
StringConCat(&Var0, "B", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
}
StringIntConCat(&(uParam0->f_1), iVar1, 4);
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


struct<4> func_41(var uParam0){
struct<4> Var0;
int iVar1;
StringCopy(&Var0, "INTRO_", 16);
iVar1=MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
*uParam0=iVar1;
StringIntConCat(&Var0, iVar1, 16);
return Var0;
}


void func_42(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_43(){
PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
func_44(0);
}


void func_44(int iParam0){
if(func_50()){
return;
}
if(!Global_20383.f_1==1){
if(func_49(0)){
func_45(iParam0);
}
MISC::SET_BIT(&Global_8254, 2);
}}


void func_45(int iParam0){
if(func_50()){
return;
}
if(Global_20584){
if(func_48()){
func_47(1, 1);
}else{
func_47(0, 0);
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
if(!func_46()){
Global_20383.f_1=3;
}}

int func_46(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_47(bool bParam0, bool bParam1){
if(bParam0){
if(func_49(0)){
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


bool func_48(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}

int func_49(int iParam0){
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


bool func_50(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_51(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6){
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
func_59(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
}
if(!func_46()){
Global_20383.f_1=3;
}
Global_21725=5;
}
func_58(1, iParam3, iParam2, 0);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_59(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1){
GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
func_58(0, iParam3, iParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID())) && !func_53(PLAYER::PLAYER_ID(), 0)) && !func_52()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}}elseif(((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
}
Global_78556=0;
}}


bool func_52(){
return MISC::IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}


bool func_53(int iParam0, int iParam1){
bool bVar0;
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_54(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_54(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_55();
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

int func_55(){
return Global_1574918;
}

int func_56(int iParam0){
if(func_53(iParam0, 0)){
return 1;
}
if(func_57()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657589[iParam0 /*466*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_57(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_58(int iParam0, var uParam1, var uParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && uParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, uParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_59(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8253, 13);
}else{
MISC::CLEAR_BIT(&Global_8253, 13);
}}


void func_60(){
if(CAM::IS_SCREEN_FADED_OUT()){
CAM::DO_SCREEN_FADE_IN(0);
}
SCRIPT::TERMINATE_THIS_THREAD();
}