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
char* sLocal_17[13]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
char* sLocal_18[13]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
int iLocal_19=0;
char* sLocal_20[7]={
NULL, NULL, NULL, NULL, NULL, NULL, NULL 
};
int iLocal_21=0;
int iLocal_22=0;
int iLocal_23=0;
int iLocal_24=0;
int iLocal_25=0;
int iLocal_26=0;
bool bLocal_27=0;
bool bLocal_28=0;
int iLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
struct<3> Local_32={
0, 0, 0 
};
struct<3> Local_33={
0, 0, 0 
};
float fLocal_34=0f;
float fLocal_35=0f;
float fLocal_36=0f;
float fLocal_37=0f;
float fLocal_38=0f;
struct<3> Local_39={
0, 0, 0 
};
struct<3> Local_40={
0, 0, 0 
};
struct<3> Local_41={
0, 0, 0 
};
struct<3> Local_42={
0, 0, 0 
};
struct<3> Local_43={
0, 0, 0 
};
struct<3> Local_44={
0, 0, 0 
};
float fLocal_45=0f;
float fLocal_46=0f;
float fLocal_47=0f;
float fLocal_48=0f;
int iLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
int iLocal_52=0;
int iLocal_53=0;
int iLocal_54=0;
int iLocal_55=0;
int iLocal_56=0;
int iLocal_57=0;
int iLocal_58=0;
int iLocal_59=0;
int iLocal_60=0;
int iLocal_61=0;
int iLocal_62=0;
float fLocal_63=0f;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
int iLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
int iLocal_87=0;
int iLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
int iLocal_91=0;
int iLocal_92=0;
int iLocal_93=0;
char cLocal_94[16]="";
var uLocal_95=0;
var uLocal_96=0;
int iLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
int iLocal_101=0;
int iLocal_102=0;
int iLocal_103=0;
int iLocal_104=0;
float fLocal_105=0f;
float fLocal_106=0f;
float fLocal_107=0f;
float fLocal_108=0f;
float fLocal_109=0f;
float fLocal_110=0f;
float fLocal_111=0f;
float fLocal_112=0f;
#endregion

void __EntryFunction__(){
int iVar0;
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
iLocal_24=1;
bLocal_27=true;
bLocal_28=true;
fLocal_34=0f;
fLocal_35=172f;
fLocal_38=0.7f;
iLocal_86=1200;
iLocal_87=1200;
iLocal_88=166;
fLocal_105=0.5f;
fLocal_106=0.85f;
fLocal_107=0.5f;
fLocal_108=-0.25f;
fLocal_109=0.25f;
fLocal_110=0.3f;
fLocal_111=0.3f;
fLocal_112=0.075f;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
if(LOCALIZATION::GET_CURRENT_LANGUAGE()==0){
fLocal_38=1f;
}else{
fLocal_38=0.7f;
}
if(!func_177()){
Global_4541026=99;
Global_4541027=99;
iLocal_22=99;
}else{
Global_4541026=0;
Global_4541027=0;
}
sLocal_17[0]="No_Filter";
sLocal_17[1]="phone_cam1";
sLocal_17[2]="phone_cam2";
sLocal_17[3]="phone_cam3";
sLocal_17[4]="phone_cam4";
sLocal_17[5]="phone_cam5";
sLocal_17[6]="phone_cam6";
sLocal_17[7]="phone_cam7";
sLocal_17[8]="phone_cam8";
sLocal_17[9]="phone_cam9";
sLocal_17[10]="phone_cam10";
sLocal_17[11]="phone_cam11";
sLocal_17[12]="phone_cam12";
sLocal_18[0]="No_Border";
sLocal_18[1]="frame1";
sLocal_18[2]="frame2";
sLocal_18[3]="frame3";
sLocal_18[4]="frame4";
sLocal_18[5]="frame5";
sLocal_18[6]="frame6";
sLocal_18[7]="frame7";
sLocal_18[8]="frame8";
sLocal_18[9]="frame9";
sLocal_18[10]="frame10";
sLocal_18[11]="frame11";
sLocal_18[12]="frame12";
sLocal_20[0]="No_Expression";
sLocal_20[1]="mood_Aiming_1";
sLocal_20[2]="mood_Happy_1";
sLocal_20[3]="mood_smug_1";
sLocal_20[4]="mood_Injured_1";
sLocal_20[5]="mood_sulk_1";
sLocal_20[6]="mood_Angry_1";
func_176();
if(func_175(1, 1, !iLocal_29, 1)){
iLocal_29=1;
}
func_174();
iLocal_61=AUDIO::GET_SOUND_ID();
if(Global_20445==0){
fLocal_45=0.207f;
fLocal_46=0.158f;
fLocal_47=0.207f;
fLocal_48=0.335f;
}else{
fLocal_45=0.24f;
fLocal_46=0.258f;
fLocal_47=0.24f;
fLocal_48=0.435f;
}
Global_22878=0;
Global_22879=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())){
Global_22878=1;
}
if(GRAPHICS::GET_USINGNIGHTVISION()){
Global_22878=1;
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)){
Global_22878=1;
}
if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1)){
Global_22878=1;
}
if(PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())){
Global_22878=1;
}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(iLocal_80==1){
Global_22878=1;
}
uLocal_97=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((ENTITY::GET_ENTITY_MODEL(uLocal_97)==joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_97)==joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_97)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_97)==joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(iLocal_97)==joaat("barrage") && VEHICLE::IS_TURRET_SEAT(iLocal_97, func_173(PLAYER::PLAYER_PED_ID(), 1)))){
Global_22878=1;
}elseif(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_97, -1, 0)==PLAYER::PLAYER_PED_ID()){
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_97) > 0f){
if(!Global_78689){
if(!func_172(0)){
TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_97, 6, 4000);
}}}}}}
if(Global_78689){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
}}
MISC::CLEAR_BIT(&Global_8370, 21);
func_171(0);
MISC::SET_BIT(&Global_8370, 17);
if(Global_20442==0){
func_170();
}else{
uLocal_89=GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
uLocal_90=GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_89) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_90)){
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
}
if(Global_78689){
iLocal_93=2;
}else{
switch (func_169()){
case 0:
iLocal_93=2;
break;
case 2:
iLocal_93=2;
break;
case 3:
iLocal_93=2;
break;
}}
func_168(uLocal_89, "DISPLAY_VIEW", to_float(iLocal_93), -1082130432, -1082130432, -1082130432, -1082130432);
func_167(uLocal_89, "CLOSE_SHUTTER");
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "DISPLAY_VIEW");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
Local_39={
Global_20460 
};
Local_40={
Global_20453[Global_20445 /*3*/] 
};
Global_22879=1;
iLocal_67=1;
iLocal_68=1;
iLocal_69=1;
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
iLocal_73=0;
iLocal_74=0;
if(Global_20500.f_1 > 3){
Global_20500.f_1=8;
}
if(iLocal_80==0){
MISC::CLEAR_BIT(&Global_8372, 3);
}
func_165();
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
if(NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV()){}
if(Global_4718592.f_165275){}
if(Global_4718592.f_165277==1){
iLocal_104=1;
}
if(iLocal_104==1){}
while (true){
wait(0);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20469);
PAD::SET_INPUT_EXCLUSIVE(0, 186);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
if(func_164()){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
MISC::SET_BIT(&Global_4542302, 2);
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(!Global_113810.f_14054.f_81){
if(!MISC::IS_BIT_SET(Global_4542302, 13)){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(!MISC::IS_BIT_SET(Global_8371, 28)){
if((iLocal_77 && iLocal_80==0) && !func_164()){
MISC::SET_BIT(&Global_4542302, 13);
Global_113810.f_14054.f_81=1;
func_163("CELL_FOC_HLP", -1);
}}}}}
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
if(Global_4718592.f_165274==0 && Global_4718592.f_165275==0){
HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
}
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
func_162();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
}
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
if(iLocal_98==0){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20473);
}
PAD::SET_INPUT_EXCLUSIVE(0, Global_20470);
if((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_164()){
iLocal_79=1;
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if(MISC::IS_STUNT_JUMP_IN_PROGRESS()){
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if(MISC::IS_BIT_SET(Global_8371, 3)){
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_154()){
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
if((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())){
if(func_153()){
}else{
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}}
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())){
if(Global_78689==1){
Global_20500.f_1=3;
}}
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
if(ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f){
Global_20500.f_1=3;
}}
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_152();
iLocal_97=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_97) < 0f){
func_149(0);
}
if(iLocal_64==1){
if(iLocal_65==1){
if(!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING()){
func_149(0);
}
}
elseif(!CAM::IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING()){
iLocal_65=1;
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}}}elseif(Global_78689==0){
if(MISC::IS_BIT_SET(Global_8370, 18)){
func_148();
if((Global_20500==0 || Global_20500==1) || Global_20500==2){
if(!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID())){
if(PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
}else{
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}}
}}}}
if(iLocal_91){
func_147();
}
if(Global_20500.f_1 < 4){
}
if(iLocal_101==0){
if(iLocal_52==0){
if(iLocal_53==0){
if(iLocal_60==0){
if(Global_20500.f_1 > 3){
if(iLocal_98){
func_145();
if(Global_22883==0 && Global_22880==6){
HUD::CLEAR_FLOATING_HELP(0, 1);
HUD::BUSYSPINNER_OFF();
iLocal_98=0;
func_144();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_143();
iLocal_58++;
if(func_177()){
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}
else{
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}
iLocal_81=0;
iLocal_82=0;
iLocal_83=0;
iLocal_76=0;
func_129();
}
if(Global_22880==0){
iLocal_98=0;
HUD::BUSYSPINNER_OFF();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_128();
iLocal_81=0;
iLocal_82=0;
iLocal_83=0;
iLocal_76=0;
func_129();
if(func_177()){
if(Global_4541027==0){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
}
elseif(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_127();
func_126(1);
}}elseif(Global_20500.f_1 !=9){
if(Global_22879==1){
if(Global_22878==0){
func_125();
}
}
elseif((Global_8978 - Global_8977) > Global_8979){
if(CAM::IS_SCREEN_FADED_OUT() && func_124()){
if(func_123() && iLocal_76){
}elseif(iLocal_76==0){
MISC::SET_GAME_PAUSED(0);
AUDIO::STOP_SOUND(iLocal_61);
iLocal_92=0;
if(Global_22878==0){
func_143();
Global_22878=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_77=0;
iLocal_67=1;
iLocal_68=1;
iLocal_69=1;
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
iLocal_91=0;
func_115(0, 1);
func_168(Global_20481, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
func_113(1);
}}
}
if(func_112(2, Global_20468, 0)){
if(func_164()){
if(((Global_1935879 || Global_1574964) || Global_22881) || MISC::IS_BIT_SET(Global_8370, 21)){
}elseif(func_123() && iLocal_76){
}elseif(!func_124()){
if(iLocal_76==0){
CAM::DO_SCREEN_FADE_OUT(500);
iLocal_92=0;
func_115(1, 1);
func_111(1);
}}}elseif(func_123() && iLocal_76){
}elseif(iLocal_76==0){
MISC::SET_GAME_PAUSED(0);
AUDIO::STOP_SOUND(iLocal_61);
iLocal_92=0;
if(Global_22878==0){
func_143();
Global_22878=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_77=0;
iLocal_67=1;
iLocal_68=1;
iLocal_69=1;
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
iLocal_91=0;
func_115(0, 1);
func_168(Global_20481, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
}
}
if(iLocal_50==0){
if(HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_110();
iLocal_50=1;
}
}
elseif(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_110();
iLocal_50=0;
}
if(iLocal_51==0){
if(MISC::IS_BIT_SET(Global_8370, 28)){
func_110();
iLocal_51=1;
}
}
elseif(!MISC::IS_BIT_SET(Global_8370, 28)){
func_110();
iLocal_51=0;
}
if(Global_22878==1){
func_99();
}
elseif(Global_20500.f_1 > 4){
if(iLocal_73==1 && iLocal_74==0){
func_95();
}
if(iLocal_73==0 && iLocal_74==1){
func_128();
if(iLocal_85==1 || iLocal_85==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
func_167(uLocal_89, "CLOSE_SHUTTER");
iLocal_84=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_84 + iLocal_86) && Global_20500.f_1 > 3){
func_162();
func_147();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
wait(0);
}
}}
if(func_177()){
if(Global_4541027==0){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
}}elseif(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_147();
func_162();
iLocal_81=0;
iLocal_82=0;
iLocal_83=0;
iLocal_76=0;
func_129();
iLocal_85=0;
func_167(uLocal_89, "OPEN_SHUTTER");
}
func_127();
func_126(1);
func_93();
}
}
if(iLocal_92==1){
func_90();
}
if(iLocal_78){
if(timerb() > 500){
iLocal_77=1;
iLocal_78=0;
MISC::SET_BIT(&Global_8370, 18);
if(Global_22878==0){
func_115(1, 1);
}
}
}
if(iLocal_76==0){
if(iLocal_77 && Global_22878==0){
if((iLocal_79==0 && iLocal_74==0) && Global_22881==0){
func_12();
}
}
else{
func_94();
}
}
elseif(iLocal_73==0){
func_7();
}}}
}}}else{
if(Global_20500.f_1 > 3){
if(Global_22879==1){
if(Global_22878==0){
func_125();
}
}}
func_6();
}}else{
if(iLocal_103==1){
set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_100, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
}
if(iLocal_103==2){
set_warning_message_with_header("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_100, "", false, -1, "", "", true, 0);
}
if(iLocal_103==6){
set_warning_message_with_header("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_100, "", false, -1, "", "", true, 0);
}
if(iLocal_103==3){
set_warning_message_with_header("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_100, "", false, -1, "", "", true, 0);
}
if(iLocal_103==7){
if(MISC::IS_XBOX360_VERSION() || func_5()){
set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_100, "", false, -1, "", "", true, 0);
}
if(MISC::IS_PS3_VERSION() || func_4()){
set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_100, "", false, -1, "", "", true, 0);
}
if(MISC::IS_PC_VERSION()){
set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_100, "", false, -1, "", "", true, 0);
}}
if(iLocal_103==4){
set_warning_message_with_header("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_100, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
}
if(iLocal_103==5){
iVar0=NETWORK::NETWORK_GET_AGE_GROUP();
switch (iVar0){
case -1:
set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_100, "", false, -1, "", "", true, 0);
break;
case 0:
set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_100, "", false, -1, "", "", true, 0);
break;
case 1:
set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_100, "", false, -1, "", "", true, 0);
break;
case 2:
set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_100, "", false, -1, "", "", true, 0);
break;
default:
set_warning_message_with_header("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_100, "", false, -1, "", "", true, 0);
break;
}}
if(iLocal_103==0){
}
if(iLocal_103==2 || iLocal_103==3){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
iLocal_101=0;
iLocal_103=0;
func_115(0, 1);
}
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_102=1;
}
if(iLocal_102==1){
if(PAD::IS_CONTROL_JUST_RELEASED(2, 201)){
iLocal_101=0;
iLocal_103=0;
func_115(0, 1);
iLocal_102=0;
HUD::SET_SOCIAL_CLUB_TOUR("Gallery");
HUD::OPEN_SOCIAL_CLUB_MENU(444471228);
}}}elseif(iLocal_103==7){
if(func_4()){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_101=0;
iLocal_103=0;
func_115(0, 1);
iLocal_60=0;
}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 202)){
iLocal_101=0;
iLocal_103=0;
func_115(0, 1);
iLocal_60=0;
}
if(!func_4()){
if(PAD::IS_CONTROL_JUST_PRESSED(2, Global_20472)){
iLocal_101=0;
iLocal_103=0;
func_115(0, 1);
if(MISC::IS_BIT_SET(Global_8371, 28)){
iLocal_60=0;
}else{
iLocal_60=2;
}
iLocal_56=MISC::GET_GAME_TIMER();
PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
}}}elseif(PAD::IS_CONTROL_JUST_PRESSED(2, 201)){
iLocal_101=0;
iLocal_103=0;
func_115(0, 1);
}}}
iLocal_57=MISC::GET_GAME_TIMER();
if(func_164()){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
MISC::SET_BIT(&Global_4542302, 2);
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(func_3() || iLocal_79){
func_1(0);
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
Global_22878=0;
Global_22879=0;
Global_22881=0;
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_89);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_90);
MISC::SET_GAME_PAUSED(0);
if(Global_20706==1){
MISC::SET_BIT(&Global_8370, 17);
}else{
MISC::CLEAR_BIT(&Global_8370, 17);
}
HUD::CLEAR_FLOATING_HELP(0, 1);
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
MISC::CLEAR_BIT(&Global_8372, 3);
MISC::CLEAR_BIT(&Global_4542302, 3);
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_22882=1;
AUDIO::STOP_SOUND(iLocal_61);
AUDIO::RELEASE_SOUND_ID(iLocal_61);
HUD::BUSYSPINNER_OFF();
func_117(1);
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
if(Global_4541027 > 0 && Global_4541027 < 13){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_18[Global_4541027]);
}
MISC::CLEAR_BIT(&Global_8370, 18);
if(func_164()){
func_115(1, 1);
}else{
func_115(0, 1);
}
if(func_175(0, 1, iLocal_29, 1)){
iLocal_29=0;
}
SCRIPT::TERMINATE_THIS_THREAD();
}}}


void func_1(int iParam0){
if(func_2()){
if(iParam0==1){
MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(1);
}elseif(Global_20500.f_1 > 3){
MOBILE::CELL_HORIZONTAL_MODE_TOGGLE(0);
}}}

int func_2(){
var uVar0;
int iVar1;
int iVar2;
if(Global_78689){
return 0;
}
iVar2=0;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
iVar2=1;
}
if(Global_4542580 || iVar2){
return 1;
}
return 1;
}

int func_3(){
if(((Global_20500.f_1==1 || Global_20500.f_1==3) || Global_20500.f_1==0) || Global_20444==1){
Global_20487=1;
return 1;
}
return 0;
}


bool func_4(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__5(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_6(){
iLocal_55=GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
switch (iLocal_55){
case 0:
iLocal_52=0;
iLocal_58=GRAPHICS::GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS();
iLocal_59=GRAPHICS::GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS();
if(iLocal_53==1){
if(iLocal_76==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_89)){
if(func_177()){
if(Global_4541027==0){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}
else{
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_89)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}
iLocal_53=0;
}
HUD::BUSYSPINNER_OFF();
break;
case 1:
if(!HUD::BUSYSPINNER_IS_ON()){
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}
break;
case 2:
if(MISC::IS_BIT_SET(Global_8371, 28)){
iLocal_52=0;
iLocal_58=0;
iLocal_59=0;
}else{
Global_20500.f_1=3;
Global_22882=1;
}
HUD::BUSYSPINNER_OFF();
break;
}}


void func_7(){
if(func_112(2, Global_20469, 0)){
func_1(0);
if(MISC::IS_BIT_SET(Global_8371, 28)){
MISC::SET_GAME_PAUSED(0);
settimerb(0);
func_144();
iLocal_76=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_143();
iLocal_85=1;
}elseif(func_11()){
if(MISC::IS_BIT_SET(Global_8371, 14)){
func_163("CELL_299", -1);
}else{
func_143();
func_10();
}}else{
iLocal_101=1;
func_115(1, 1);
}}
if(MISC::IS_BIT_SET(Global_8370, 22)){
func_1(0);
while (timera() < 2000){
wait(0);
func_162();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_94();
func_152();
func_147();
}
MISC::SET_GAME_PAUSED(0);
func_144();
settimerb(0);
iLocal_76=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_129();
func_143();
}
if(func_112(2, Global_20473, 0)){
func_1(0);
if(func_123() || MISC::IS_BIT_SET(Global_8371, 28)){
}else{
MISC::SET_GAME_PAUSED(0);
settimerb(0);
iLocal_85=1;
func_144();
iLocal_76=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_143();
}}
if(MISC::IS_BIT_SET(Global_8370, 28)){
if(func_112(2, Global_20472, 0)){
func_1(0);
MISC::SET_GAME_PAUSED(0);
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_162();
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_162();
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
Global_22882=1;
iLocal_92=0;
iLocal_75=0;
func_115(0, 1);
Global_22878=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_77=0;
iLocal_67=1;
iLocal_68=1;
iLocal_69=1;
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
func_8();
iLocal_76=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
if(!Global_2794162.f_6750){
MISC::SET_BIT(&Global_8370, 9);
}
iLocal_91=0;
func_168(Global_20481, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}


void func_8(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20489, 1);
func_9();
}}


void func_9(){
if(func_2()){
MOBILE::CELL_SET_INPUT(5);
}}


void func_10(){
iLocal_98=1;
Global_22883=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
}

int func_11(){
if(iLocal_56==iLocal_57){
if(iLocal_54){
iLocal_54=1;
}}
if(Global_20500.f_1 < 4){
return 0;
}
if(iLocal_58==iLocal_59 || iLocal_58 > iLocal_59){
iLocal_103=1;
iLocal_100=2;
return 0;
}
return 1;
}


void func_12(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar0=179;
iVar1=21;
}else{
iVar0=228;
iVar1=229;
}
if(iLocal_80){
func_85();
func_81();
func_80();
fLocal_34=CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
fLocal_35=CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
if(iLocal_82==0){
if(PAD::IS_CONTROL_PRESSED(2, iVar0) && !PAD::IS_CONTROL_PRESSED(2, iVar1)){
iLocal_82=1;
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8370, 28)){
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_66());
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_CAM_SELFIE_2");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_CAM_SELFIE_2");
}
func_65();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}elseif(!PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_CONTROL_PRESSED(2, iVar1)){
iLocal_82=0;
func_129();
}
if(iLocal_83==0){
if(PAD::IS_CONTROL_PRESSED(2, iVar1) && !PAD::IS_CONTROL_PRESSED(2, iVar0)){
iLocal_83=1;
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8370, 28)){
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_66());
}elseif(!func_164()){
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
}
func_64();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}elseif(!PAD::IS_CONTROL_PRESSED(2, iVar1) || PAD::IS_CONTROL_PRESSED(2, iVar0)){
iLocal_83=0;
func_129();
}}else{
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
}
if(PAD::HAVE_CONTROLS_CHANGED(2)){
func_129();
}
func_152();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
}
if(func_164()){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
MISC::SET_BIT(&Global_4542302, 2);
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_104==0) && !func_164()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(MISC::IS_BIT_SET(Global_4542302, 2)){
MISC::CLEAR_BIT(&Global_4542302, 2);
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}else{
MISC::SET_BIT(&Global_4542302, 2);
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}}
if(iLocal_80){
if(iLocal_81==1){
iLocal_81=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_89, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
func_63("CELL_FOCUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(!func_62(14)){
if(MISC::IS_BIT_SET(Global_4542302, 10)){
if((Global_78689==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_89, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543287));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
MISC::CLEAR_BIT(&Global_4542302, 10);
}}}elseif(MISC::IS_BIT_SET(Global_4542302, 10)){
MISC::CLEAR_BIT(&Global_4542302, 10);
}
iLocal_31=MISC::GET_GAME_TIMER();
if((iLocal_31 - iLocal_30) > 1500){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_33={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_33, Local_32, 1) > 5f){
Global_20500.f_1=3;
MISC::SET_GAME_PAUSED(0);
}
iLocal_30=MISC::GET_GAME_TIMER();
}}}elseif(iLocal_81){
if(!PAD::IS_CONTROL_PRESSED(0, 182) && !func_164()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
iLocal_81=0;
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_89, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
func_63("CELL_FOCUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}elseif(PAD::IS_CONTROL_PRESSED(0, 182) && !func_164()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
iLocal_81=1;
if(!func_62(14)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_89, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
func_63("CELL_FOCUS");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
if(func_177()){
if((PAD::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_104==0) && !func_164()){
if(iLocal_80){
iLocal_22++;
if(iLocal_22 > 0 && iLocal_22 < 7){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
if(Global_20500==0){
iVar4=0;
iVar2=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
if(iVar2==20 || iVar2==14){
iVar4=1;
}
iVar3=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 1);
if(iVar3 !=-1){
iVar4=1;
}
if(iVar4==1){
if((((iLocal_22==2 || iLocal_22==3) || iLocal_22==4) || iLocal_22==8) || iLocal_22==9){
if(iVar2==-1 && iVar3 > -1){
if(iLocal_22==3){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_20[iLocal_22], 0);
}
}}else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_20[iLocal_22], 0);
}}else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_20[iLocal_22], 0);
}
}
else{
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_20[iLocal_22], 0);
}}}
if(iLocal_22==7 || iLocal_22 > 7){
iLocal_22=0;
}
if(iLocal_22==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
}}}}
if((PAD::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_104==0) && !func_164()){
if(iLocal_80){
if(bLocal_27==1){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
if(iLocal_26==0){
iLocal_26=1;
iLocal_25=1;
if(MISC::ARE_STRINGS_EQUAL(sLocal_17[Global_4541026], "phone_cam12DUMMY")){
}
else{
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(1);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(1);
}}else{
iLocal_26=0;
iLocal_25=0;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
}}}elseif(bLocal_28==1){
if(iLocal_25==0){
iLocal_25=1;
iLocal_26=1;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(1);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(1);
}else{
iLocal_25=0;
iLocal_26=0;
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
}}}}
if(iLocal_24==1 && !func_164()){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_104==0){
if(func_177()){
Global_4541027++;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
}
if(Global_4541027==13){
func_126(0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_18[(Global_4541027 - 1)]);
Global_4541027=0;
func_60();
if(iLocal_19==1){
MISC::CLEAR_BIT(&Global_4542302, 2);
iLocal_19=0;
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}
if(Global_4541027 > 0 && Global_4541027 < 13){
iLocal_24=0;
iLocal_23=0;
GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_18[Global_4541027], 0);
}}}
if(Global_4541027 > 0){
if(iLocal_24==0){
if(GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_18[Global_4541027])){
iLocal_23=1;
iLocal_24=1;
if(!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
func_126(1);
}
if(iLocal_19==0){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
iLocal_19=1;
}}
MISC::SET_BIT(&Global_4542302, 2);
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_18[Global_4541027], 0);
}}
if(iLocal_23==1){
if(Global_4541027==1 || Global_4541027==3){
}
if(Global_4541027==2 || Global_4541027==4){
}}}
if((PAD::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_104==0) && !func_164()){
if(func_177()){
func_117(0);
Global_4541026++;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
}
if(Global_4541026==13){
Global_4541026=0;
}
if(Global_4541026==0){
if(func_177()){
func_117(0);
}}else{
func_127();
}
func_59();
}
if((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_104==0) && !func_164()){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_167(uLocal_89, "CLOSE_SHUTTER");
iLocal_84=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_84 + iLocal_88) && Global_20500.f_1 > 3){
func_162();
func_147();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
wait(0);
}
if(iLocal_80==0){
AUDIO::STOP_SOUND(iLocal_61);
iLocal_80=1;
func_58(1);
func_57();
MISC::SET_BIT(&Global_8372, 3);
iLocal_30=MISC::GET_GAME_TIMER();
}else{
iLocal_82=0;
iLocal_83=0;
func_58(0);
iLocal_80=0;
MISC::CLEAR_BIT(&Global_8372, 3);
}
iLocal_84=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_84 + iLocal_86) && Global_20500.f_1 > 3){
func_162();
func_147();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
wait(0);
}
func_167(uLocal_89, "OPEN_SHUTTER");
if(func_177()){
if(Global_4541027==0){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}elseif(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_147();
func_162();
if(MISC::IS_BIT_SET(Global_8370, 28)){
StringCopy(&cLocal_94, "CELL_296", 16);
func_55();
}else{
StringCopy(&cLocal_94, "CELL_295", 16);
func_29();
}}}}
if(iLocal_80==0){
if(iLocal_62==0){
if(PAD::IS_CONTROL_JUST_PRESSED(0, 40) || PAD::IS_CONTROL_JUST_PRESSED(0, 41)){
fLocal_63=CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
if(fLocal_63 > 1f && fLocal_63 < 4.5f){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_61)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_61, "Camera_Zoom", &Global_20489, 1);
}}else{
AUDIO::STOP_SOUND(iLocal_61);
}
iLocal_62=1;
}}elseif(PAD::IS_CONTROL_PRESSED(0, 40) || PAD::IS_CONTROL_PRESSED(0, 41)){
fLocal_63=CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
if(fLocal_63 > 1f && fLocal_63 < 4.5f){
if(AUDIO::HAS_SOUND_FINISHED(iLocal_61)){
AUDIO::PLAY_SOUND_FRONTEND(iLocal_61, "Camera_Zoom", &Global_20489, 1);
}}else{
AUDIO::STOP_SOUND(iLocal_61);
}}else{
AUDIO::STOP_SOUND(iLocal_61);
}}
if((func_112(2, Global_20469, 0) && !func_124()) && !func_112(2, Global_20468, 0)){
fLocal_36=CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
fLocal_37=CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
MISC::SET_BIT(&Global_8370, 21);
AUDIO::STOP_SOUND(iLocal_61);
iLocal_76=1;
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_89, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_20489, 1);
func_167(uLocal_89, "CLOSE_SHUTTER");
Local_41={
-90.3f, 0f, 90f 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
if(!func_177()){
func_117(1);
}
Global_22881=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
while (Global_22880 < 6 && Global_20500.f_1 > 3){
func_162();
func_147();
func_94();
func_152();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
wait(0);
}
MOBILE::CELL_CAM_ACTIVATE(0, 0);
if(Global_20442){
func_1(1);
}
iLocal_84=MISC::GET_GAME_TIMER();
while (MISC::GET_GAME_TIMER() < (iLocal_84 + iLocal_87) && Global_20500.f_1 > 3){
func_162();
func_147();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
wait(0);
}
settimera(0);
func_167(uLocal_89, "OPEN_SHUTTER");
MISC::CLEAR_BIT(&Global_8370, 21);
func_129();
if(Global_20500.f_1 > 3){
if(Global_78689){
func_23(1087, 1, -1);
func_22();
func_19(-1492367786, 23, 0);
}else{
switch (func_13()){
case 0:
STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
break;
case 1:
STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
break;
case 2:
STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
break;
}
func_22();
}
func_126(0);
}
func_147();
}
if(MISC::IS_BIT_SET(Global_8370, 28)){
if(func_112(2, Global_20472, 0)){
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_162();
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
func_162();
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
Global_22882=1;
iLocal_92=0;
iLocal_75=1;
Global_22878=1;
HUD::CLEAR_FLOATING_HELP(0, 1);
iLocal_77=0;
iLocal_67=1;
iLocal_68=1;
iLocal_69=1;
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
func_8();
iLocal_76=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
if(!Global_2794162.f_6750){
MISC::SET_BIT(&Global_8370, 9);
}
MISC::SET_GAME_PAUSED(0);
iLocal_91=0;
func_168(Global_20481, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
}}}

int func_13(){
func_14();
return Global_113810.f_2366.f_539.f_4321;
}


void func_14(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_17(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_16(PLAYER::PLAYER_PED_ID());
if(func_15(iVar0) && (!func_62(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_15(Global_113810.f_2366.f_539.f_4321)){
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


bool func_15(int iParam0){
return iParam0 < 3;
}

int func_16(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_17(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_17(int iParam0){
if(func_15(iParam0)){
return func_18(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__18(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_19(int iParam0, int iParam1, int iParam2){
int iVar0;
if(func_21(iParam1, iParam2)){
iVar0=func_20();
Global_2694470[iVar0]=iParam1;
Global_2694481[iVar0]=iParam0;
}}

int func_20(){
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

int func_21(int iParam0, var uParam1){
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


void func_22(){
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
iLocal_73=1;
iLocal_74=0;
Global_20437={
Global_20453[Global_20445 /*3*/] 
};
func_115(0, 1);
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
if(!MISC::IS_BIT_SET(Global_8371, 28)){
if(NETWORK::NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV()==0){
if(MISC::IS_XBOX360_VERSION()){
if(iLocal_66==0){
iLocal_66=1;
}}}}}


void func_23(int iParam0, int iParam1, int iParam2){
int iVar0;
iVar0=func_26(iParam0, func_27(iParam2));
iVar0=(iVar0 + iParam1);
func_24(iParam0, iVar0, iParam2, 1);
}


void func_24(int iParam0, int iParam1, var uParam2, int iParam3){
int iVar0;
iVar0=func_25(iParam0, uParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__25(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_27(uParam1));
}

int func_26(int iParam0, var uParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_25(iParam0, uParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_27(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_28();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


var func__28(){
return Global_1574918;
}


void func_29(){
if(iLocal_104==1){
func_54();
return;
}
if(iLocal_82==0 && iLocal_83==0){
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(!func_164()){
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
}
if(iLocal_80){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}}elseif((Global_78689==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61()){
func_52();
}else{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_177()){
func_51(5f);
func_50(6f);
if(func_31(1)){
func_30(7f);
if(bLocal_27){
func_78(uLocal_90, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}
}
elseif(bLocal_27){
func_78(uLocal_90, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_164()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 210, 1), "CELL_284");
}
else{
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, 1), "CELL_284");
}}
if(!func_164()){
if(func_177()){
func_51(6f);
func_50(7f);
if(bLocal_28){
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, 1), "CELL_FOCUS");
}
func_78(uLocal_90, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_177()){
func_51(3f);
func_50(4f);
func_78(uLocal_90, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}else{
if(!func_164()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}}
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_164()){
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(!PAD::IS_USING_KEYBOARD_AND_MOUSE(0)){
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 210, 1), "CELL_284");
}
else{
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 29, 1), "CELL_284");
}}
if(!func_164()){
func_78(uLocal_90, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
}
if(!func_164()){
if(func_177()){
func_51(7f);
func_50(8f);
if(bLocal_28){
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, 1), "CELL_FOCUS");
}
func_78(uLocal_90, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_177()){
func_51(3f);
func_50(4f);
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}


void func_30(float fParam0){
func_78(uLocal_90, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 174, 1), "CELL_ACTION");
}

int func_31(int iParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_49(Global_4456522, Global_4456523)){
if(iParam0==0 || !func_32(Global_4456522, Global_4456523, 0, 1, 0)){
return 1;
}}}
return 0;
}


bool func_32(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
return func_33(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5){
var uVar0;
var uVar1;
var uVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
if(func_48()){
return 0;
}
uVar0=8;
uVar1=8;
uVar2=8;
if(iParam1==0){
iVar6=3;
}elseif(bParam3){
iVar6=1;
}elseif(bParam4){
iVar6=2;
}else{
iVar6=0;
}
func_41(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
if(ENTITY::GET_ENTITY_MODEL(iParam0)==joaat("mp_f_freemode_01")){
iVar3=func_40(iParam0);
if(!iVar3==-1){
if(func_39(&uVar0, iVar3)){
return 1;
}}}else{
iVar4=func_38(iParam0);
if(!iVar4==-1){
if(func_36(&uVar1, iVar4)){
return 1;
}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar5=func_35(iParam0);
if(!iVar5==0){
if(func_34(&uVar2, iVar5)){
return 1;
}}}}
return 0;
}

int func_34(var uParam0, int iParam1){
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


var func__35(int iParam0){
var uVar0;
uVar0=PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
return uVar0;
}


bool func_36(var uParam0, int iParam1){
return func_37(uParam0, iParam1);
}

int func_37(var uParam0, int iParam1){
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


var func__38(int iParam0){
var uVar0;
uVar0=PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
return uVar0;
}


bool func_39(var uParam0, int iParam1){
return func_37(uParam0, iParam1);
}


var func__40(int iParam0){
var uVar0;
uVar0=PED::GET_PED_PROP_INDEX(iParam0, 0, 1);
return uVar0;
}


void func_41(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6){
func_47(uParam4, 91, 1);
switch (iParam0){
case 1:
case 0:
func_46(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
break;
case 2:
switch (iParam1){
case 3:
switch (iParam5){
case 0:
func_45(uParam3, 13, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 1:
func_45(uParam3, 4, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 2:
func_45(uParam3, 13, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 39, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 38, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
}
break;
case 5:
case 24:
switch (iParam5){
case 0:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
func_47(uParam4, 136, 1);
func_47(uParam4, 138, 1);
func_47(uParam4, 139, 1);
func_47(uParam4, 143, 1);
func_47(uParam4, 144, 1);
func_47(uParam4, 145, 1);
func_47(uParam4, 147, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 1:
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 2:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
func_47(uParam4, 136, 1);
func_47(uParam4, 138, 1);
func_47(uParam4, 139, 1);
func_47(uParam4, 143, 1);
func_47(uParam4, 144, 1);
func_47(uParam4, 145, 1);
func_47(uParam4, 147, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
}
break;
case 64:
switch (iParam5){
case 0:
func_45(uParam3, 66, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 77, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 1:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
}
break;
case 65:
case 68:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 66:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 67:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 69:
case 70:
case 71:
switch (iParam5){
case 0:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 1:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 2:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_42(uParam2, uParam3, uParam4);
break;
}
break;
case 10:
switch (iParam5){
case 0:
func_45(uParam3, 3, 1);
func_45(uParam3, 4, 1);
func_45(uParam3, 6, 1);
func_45(uParam3, 10, 1);
func_45(uParam3, 54, 1);
func_45(uParam3, 55, 1);
func_45(uParam3, 56, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 37, 1);
func_45(uParam3, 39, 1);
func_45(uParam3, 55, 1);
func_45(uParam3, 106, 1);
func_45(uParam3, 114, 1);
func_45(uParam3, 116, 1);
func_45(uParam3, 117, 1);
func_45(uParam3, 118, 1);
func_45(uParam3, 119, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 8, 1);
func_43(uParam2, 9, 1);
func_43(uParam2, 10, 1);
func_43(uParam2, 53, 1);
func_43(uParam2, 56, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 26, 1);
func_43(uParam2, 27, 1);
func_43(uParam2, 28, 1);
func_43(uParam2, 32, 1);
func_43(uParam2, 36, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 14, 1);
func_43(uParam2, 105, 1);
func_43(uParam2, 113, 1);
func_43(uParam2, 114, 1);
func_43(uParam2, 115, 1);
func_43(uParam2, 116, 1);
func_43(uParam2, 117, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_45(uParam3, 65, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 76, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 64, 1);
func_43(uParam2, 65, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 75, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 1:
func_45(uParam3, 3, 1);
func_45(uParam3, 4, 1);
func_45(uParam3, 6, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 19, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 37, 1);
func_45(uParam3, 39, 1);
func_45(uParam3, 55, 1);
func_45(uParam3, 106, 1);
func_45(uParam3, 114, 1);
func_45(uParam3, 116, 1);
func_45(uParam3, 117, 1);
func_45(uParam3, 118, 1);
func_45(uParam3, 119, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 8, 1);
func_43(uParam2, 9, 1);
func_43(uParam2, 10, 1);
func_43(uParam2, 53, 1);
func_43(uParam2, 56, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 11, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 22, 1);
func_43(uParam2, 54, 1);
func_43(uParam2, 26, 1);
func_43(uParam2, 27, 1);
func_43(uParam2, 28, 1);
func_43(uParam2, 30, 1);
func_43(uParam2, 31, 1);
func_43(uParam2, 32, 1);
func_43(uParam2, 36, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 14, 1);
func_43(uParam2, 105, 1);
func_43(uParam2, 113, 1);
func_43(uParam2, 114, 1);
func_43(uParam2, 115, 1);
func_43(uParam2, 116, 1);
func_43(uParam2, 117, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_45(uParam3, 65, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 76, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 64, 1);
func_43(uParam2, 65, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 75, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 2:
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 39, 1);
func_45(uParam3, 106, 1);
func_45(uParam3, 114, 1);
func_45(uParam3, 116, 1);
func_45(uParam3, 117, 1);
func_45(uParam3, 118, 1);
func_45(uParam3, 119, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 14, 1);
func_43(uParam2, 105, 1);
func_43(uParam2, 113, 1);
func_43(uParam2, 114, 1);
func_43(uParam2, 115, 1);
func_43(uParam2, 116, 1);
func_43(uParam2, 117, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_45(uParam3, 65, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 76, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 64, 1);
func_43(uParam2, 65, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 75, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_42(uParam2, uParam3, uParam4);
break;
}
break;
case 13:
switch (iParam5){
case 0:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 19, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 1:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
func_42(uParam2, uParam3, uParam4);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 2:
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
func_42(uParam2, uParam3, uParam4);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
}
break;
case 16:
switch (iParam5){
case 0:
func_45(uParam3, 4, 1);
break;
case 1:
func_47(uParam4, 43, 1);
break;
case 2:
break;
}
break;
case 23:
switch (iParam5){
case 0:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 1:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_42(uParam2, uParam3, uParam4);
break;
case 2:
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_42(uParam2, uParam3, uParam4);
break;
}
break;
case 17:
switch (iParam5){
case 0:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 1:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 2:
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
}
break;
case 19:
switch (iParam5){
case 0:
func_45(uParam3, 3, 1);
func_45(uParam3, 7, 1);
func_45(uParam3, 0, 1);
func_45(uParam3, 12, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 15, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 17, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 21, 1);
func_45(uParam3, 25, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 30, 1);
func_45(uParam3, 31, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 39, 1);
func_45(uParam3, 37, 1);
func_43(uParam2, 0, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 7, 1);
func_43(uParam2, 8, 1);
func_43(uParam2, 11, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 15, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 17, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 19, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 22, 1);
func_43(uParam2, 54, 1);
func_43(uParam2, 24, 1);
func_43(uParam2, 26, 1);
func_43(uParam2, 27, 1);
func_43(uParam2, 28, 1);
func_43(uParam2, 30, 1);
func_43(uParam2, 31, 1);
func_43(uParam2, 32, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 36, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 65, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 76, 1);
func_45(uParam3, 77, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 64, 1);
func_43(uParam2, 65, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 75, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 1:
func_45(uParam3, 3, 1);
func_45(uParam3, 7, 1);
func_45(uParam3, 0, 1);
func_45(uParam3, 12, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 15, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 17, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 21, 1);
func_45(uParam3, 25, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 30, 1);
func_45(uParam3, 31, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 39, 1);
func_43(uParam2, 0, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 7, 1);
func_43(uParam2, 11, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 15, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 17, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 19, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 22, 1);
func_43(uParam2, 54, 1);
func_43(uParam2, 24, 1);
func_43(uParam2, 38, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 43, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 65, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 76, 1);
func_45(uParam3, 77, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 64, 1);
func_43(uParam2, 65, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 75, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
case 2:
func_45(uParam3, 1, 1);
func_45(uParam3, 3, 1);
func_45(uParam3, 4, 1);
func_45(uParam3, 5, 1);
func_45(uParam3, 7, 1);
func_45(uParam3, 10, 1);
func_45(uParam3, 54, 1);
func_45(uParam3, 55, 1);
func_45(uParam3, 56, 1);
func_45(uParam3, 0, 1);
func_45(uParam3, 12, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 15, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 17, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 21, 1);
func_45(uParam3, 25, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 30, 1);
func_45(uParam3, 31, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 37, 1);
func_45(uParam3, 39, 1);
func_43(uParam2, 0, 1);
func_43(uParam2, 1, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 5, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 7, 1);
func_43(uParam2, 8, 1);
func_43(uParam2, 9, 1);
func_43(uParam2, 10, 1);
func_43(uParam2, 53, 1);
func_43(uParam2, 56, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 11, 1);
func_43(uParam2, 12, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 14, 1);
func_43(uParam2, 15, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 17, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 19, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 22, 1);
func_43(uParam2, 54, 1);
func_43(uParam2, 23, 1);
func_43(uParam2, 24, 1);
func_43(uParam2, 26, 1);
func_43(uParam2, 27, 1);
func_43(uParam2, 28, 1);
func_43(uParam2, 29, 1);
func_43(uParam2, 30, 1);
func_43(uParam2, 31, 1);
func_43(uParam2, 32, 1);
func_43(uParam2, 33, 1);
func_43(uParam2, 36, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 55, 1);
func_47(uParam4, 1, 1);
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_45(uParam3, 65, 1);
func_45(uParam3, 67, 1);
func_45(uParam3, 68, 1);
func_45(uParam3, 69, 1);
func_45(uParam3, 70, 1);
func_45(uParam3, 71, 1);
func_45(uParam3, 72, 1);
func_45(uParam3, 73, 1);
func_45(uParam3, 74, 1);
func_45(uParam3, 75, 1);
func_45(uParam3, 76, 1);
func_45(uParam3, 77, 1);
func_45(uParam3, 78, 1);
func_45(uParam3, 79, 1);
func_45(uParam3, 80, 1);
func_45(uParam3, 81, 1);
func_45(uParam3, 82, 1);
func_45(uParam3, 91, 1);
func_45(uParam3, 92, 1);
func_43(uParam2, 64, 1);
func_43(uParam2, 65, 1);
func_43(uParam2, 66, 1);
func_43(uParam2, 67, 1);
func_43(uParam2, 68, 1);
func_43(uParam2, 69, 1);
func_43(uParam2, 70, 1);
func_43(uParam2, 71, 1);
func_43(uParam2, 72, 1);
func_43(uParam2, 73, 1);
func_43(uParam2, 74, 1);
func_43(uParam2, 75, 1);
func_43(uParam2, 77, 1);
func_43(uParam2, 78, 1);
func_43(uParam2, 79, 1);
func_43(uParam2, 80, 1);
func_43(uParam2, 81, 1);
func_43(uParam2, 90, 1);
func_43(uParam2, 91, 1);
break;
}
break;
case 18:
switch (iParam5){
case 0:
break;
case 1:
func_43(uParam2, 2, 1);
func_43(uParam2, 20, 1);
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
func_41(2, 64, uParam2, uParam3, uParam4, 0, 0);
break;
case 32:
func_41(2, 65, uParam2, uParam3, uParam4, 0, 0);
break;
case 17:
case 27:
case 31:
break;
}
break;
}}


void func_42(var uParam0, var uParam1, var uParam2){
if((*uParam0)[0]==0 || (*uParam1)[0]==0){}
func_47(uParam2, 124, 1);
func_47(uParam2, 125, 1);
func_47(uParam2, 126, 1);
func_47(uParam2, 127, 1);
func_47(uParam2, 128, 1);
func_47(uParam2, 129, 1);
func_47(uParam2, 130, 1);
func_47(uParam2, 131, 1);
func_47(uParam2, 132, 1);
func_47(uParam2, 133, 1);
func_47(uParam2, 136, 1);
func_47(uParam2, 138, 1);
func_47(uParam2, 139, 1);
func_47(uParam2, 143, 1);
func_47(uParam2, 144, 1);
func_47(uParam2, 145, 1);
func_47(uParam2, 147, 1);
}


void func_43(var uParam0, int iParam1, bool bParam2){
func_44(uParam0, iParam1, bParam2);
}


void func_44(var uParam0, int iParam1, bool bParam2){
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


void func_45(var uParam0, int iParam1, bool bParam2){
func_44(uParam0, iParam1, bParam2);
}


void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6){
func_47(uParam4, 91, 1);
switch (iParam0){
case 1:
switch (iParam1){
case 0:
switch (iParam5){
case 0:
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
break;
case 1:
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
break;
case 2:
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
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
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
}
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 5, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 7, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
break;
case 1:
if(bParam6){
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
}
func_47(uParam4, 9, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
break;
case 10:
func_47(uParam4, 28, 1);
break;
case 12:
if(bParam6){
func_45(uParam3, 3, 1);
func_45(uParam3, 4, 1);
func_45(uParam3, 6, 1);
func_45(uParam3, 10, 1);
func_45(uParam3, 54, 1);
func_45(uParam3, 55, 1);
func_45(uParam3, 56, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 37, 1);
func_45(uParam3, 39, 1);
func_45(uParam3, 106, 1);
func_45(uParam3, 114, 1);
func_45(uParam3, 116, 1);
func_45(uParam3, 117, 1);
func_45(uParam3, 118, 1);
func_45(uParam3, 119, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 8, 1);
func_43(uParam2, 9, 1);
func_43(uParam2, 10, 1);
func_43(uParam2, 53, 1);
func_43(uParam2, 56, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 26, 1);
func_43(uParam2, 27, 1);
func_43(uParam2, 28, 1);
func_43(uParam2, 32, 1);
func_43(uParam2, 36, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 55, 1);
func_43(uParam2, 14, 1);
func_43(uParam2, 105, 1);
func_43(uParam2, 113, 1);
func_43(uParam2, 114, 1);
func_43(uParam2, 115, 1);
func_43(uParam2, 116, 1);
func_43(uParam2, 117, 1);
}
func_47(uParam4, 2, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
break;
case 15:
if(bParam6){
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 19, 1);
}
func_47(uParam4, 3, 1);
func_47(uParam4, 6, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 32, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
func_47(uParam4, 110, 1);
func_47(uParam4, 112, 1);
func_47(uParam4, 115, 1);
func_47(uParam4, 116, 1);
break;
case 18:
if(bParam6){
func_45(uParam3, 4, 1);
}
break;
case 17:
func_47(uParam4, 9, 1);
break;
case 19:
if(bParam6){
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
}
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
break;
case 21:
if(bParam6){
func_45(uParam3, 3, 1);
func_45(uParam3, 7, 1);
func_45(uParam3, 0, 1);
func_45(uParam3, 12, 1);
func_45(uParam3, 13, 1);
func_45(uParam3, 15, 1);
func_45(uParam3, 16, 1);
func_45(uParam3, 48, 1);
func_45(uParam3, 49, 1);
func_45(uParam3, 17, 1);
func_45(uParam3, 18, 1);
func_45(uParam3, 50, 1);
func_45(uParam3, 51, 1);
func_45(uParam3, 52, 1);
func_45(uParam3, 53, 1);
func_45(uParam3, 38, 1);
func_45(uParam3, 47, 1);
func_45(uParam3, 111, 1);
func_45(uParam3, 62, 1);
func_45(uParam3, 20, 1);
func_45(uParam3, 21, 1);
func_45(uParam3, 25, 1);
func_45(uParam3, 26, 1);
func_45(uParam3, 27, 1);
func_45(uParam3, 30, 1);
func_45(uParam3, 31, 1);
func_45(uParam3, 32, 1);
func_45(uParam3, 33, 1);
func_45(uParam3, 39, 1);
func_45(uParam3, 37, 1);
func_45(uParam3, 55, 1);
func_43(uParam2, 0, 1);
func_43(uParam2, 2, 1);
func_43(uParam2, 3, 1);
func_43(uParam2, 4, 1);
func_43(uParam2, 6, 1);
func_43(uParam2, 7, 1);
func_43(uParam2, 8, 1);
func_43(uParam2, 11, 1);
func_43(uParam2, 13, 1);
func_43(uParam2, 15, 1);
func_43(uParam2, 16, 1);
func_43(uParam2, 47, 1);
func_43(uParam2, 48, 1);
func_43(uParam2, 17, 1);
func_43(uParam2, 18, 1);
func_43(uParam2, 49, 1);
func_43(uParam2, 50, 1);
func_43(uParam2, 51, 1);
func_43(uParam2, 52, 1);
func_43(uParam2, 62, 1);
func_43(uParam2, 37, 1);
func_43(uParam2, 46, 1);
func_43(uParam2, 110, 1);
func_43(uParam2, 19, 1);
func_43(uParam2, 20, 1);
func_43(uParam2, 21, 1);
func_43(uParam2, 22, 1);
func_43(uParam2, 54, 1);
func_43(uParam2, 24, 1);
func_43(uParam2, 26, 1);
func_43(uParam2, 27, 1);
func_43(uParam2, 28, 1);
func_43(uParam2, 30, 1);
func_43(uParam2, 31, 1);
func_43(uParam2, 32, 1);
func_43(uParam2, 38, 1);
func_43(uParam2, 36, 1);
}
func_47(uParam4, 3, 1);
func_47(uParam4, 3, 1);
func_47(uParam4, 4, 1);
func_47(uParam4, 14, 1);
func_47(uParam4, 15, 1);
func_47(uParam4, 16, 1);
func_47(uParam4, 8, 1);
func_47(uParam4, 9, 1);
func_47(uParam4, 10, 1);
func_47(uParam4, 12, 1);
func_47(uParam4, 13, 1);
func_47(uParam4, 17, 1);
func_47(uParam4, 18, 1);
func_47(uParam4, 19, 1);
func_47(uParam4, 20, 1);
func_47(uParam4, 59, 1);
func_47(uParam4, 60, 1);
func_47(uParam4, 61, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 62, 1);
func_47(uParam4, 63, 1);
func_47(uParam4, 64, 1);
func_47(uParam4, 65, 1);
func_47(uParam4, 66, 1);
func_47(uParam4, 67, 1);
func_47(uParam4, 68, 1);
func_47(uParam4, 69, 1);
func_47(uParam4, 70, 1);
func_47(uParam4, 71, 1);
func_47(uParam4, 72, 1);
func_47(uParam4, 21, 1);
func_47(uParam4, 22, 1);
func_47(uParam4, 23, 1);
func_47(uParam4, 24, 1);
func_47(uParam4, 25, 1);
func_47(uParam4, 26, 1);
func_47(uParam4, 36, 1);
func_47(uParam4, 46, 1);
func_47(uParam4, 38, 1);
func_47(uParam4, 29, 1);
func_47(uParam4, 28, 1);
func_47(uParam4, 31, 1);
func_47(uParam4, 33, 1);
func_47(uParam4, 34, 1);
func_47(uParam4, 92, 1);
func_47(uParam4, 93, 1);
func_47(uParam4, 94, 1);
func_47(uParam4, 96, 1);
func_47(uParam4, 97, 1);
func_47(uParam4, 98, 1);
func_47(uParam4, 100, 1);
func_47(uParam4, 103, 1);
func_47(uParam4, 104, 1);
func_47(uParam4, 105, 1);
func_47(uParam4, 106, 1);
func_47(uParam4, 107, 1);
func_47(uParam4, 108, 1);
break;
}
break;
}}


void func_47(var uParam0, int iParam1, bool bParam2){
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

int func_48(){
if(Global_4521801.f_943 > -1){
return 1;
}
return 0;
}

int func_49(int iParam0, int iParam1){
switch (iParam0){
case 1:
switch (iParam1){
case 0:
return 1;
break;
}
break;
case 2:
switch (iParam1){
case 1:
case 2:
case 3:
case 4:
case 7:
case 5:
case 10:
case 11:
case 12:
case 13:
case 15:
case 14:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 26:
case 25:
case 24:
case 30:
case 34:
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
return 1;
break;
}
break;
case 3:
switch (iParam1){
case 0:
return 1;
break;
}
break;
}
return 0;
}


void func_50(float fParam0){
func_78(uLocal_90, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 172, 1), "CELL_BORDER");
}


void func_51(float fParam0){
if(Global_1946103){
fParam0=-1f;
}
func_78(uLocal_90, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 173, 1), "CELL_FILTER");
}


void func_52(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_51(5f);
func_50(6f);
func_53(7f);
func_30(8f);
if(bLocal_27){
func_78(uLocal_90, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}
if(!func_62(14)){
if((Global_78689==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61()){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_89, "SET_FOCUS_LOCK");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_4543287));
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}}


void func_53(float fParam0){
func_78(uLocal_90, "SET_DATA_SLOT", fParam0, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 175, 1), "CELL_ACCYC");
}


void func_54(){
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_280");
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_55(){
if(iLocal_104==1){
func_56();
return;
}
if(iLocal_82==0 && iLocal_83==0){
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_66());
if(iLocal_80){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
if(func_177()){
func_51(3f);
func_50(4f);
}}elseif((Global_78689==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pi_menu")) > 0) && func_61()){
func_52();
}else{
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_177()){
func_51(5f);
func_50(6f);
if(func_31(1)){
func_30(7f);
if(bLocal_27){
func_78(uLocal_90, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}
}
elseif(bLocal_27){
func_78(uLocal_90, "SET_DATA_SLOT", 7f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
if(func_177()){
func_51(6f);
func_50(7f);
func_78(uLocal_90, "SET_DATA_SLOT", 8f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_177()){
func_51(3f);
func_50(4f);
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}elseif(!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==2){
if(!func_164()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}}
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 183, 1), "CELL_GRID");
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_90, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
if(func_177()){
if(!func_164()){
func_51(7f);
func_50(8f);
if(bLocal_28){
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 182, 1), "CELL_FOCUS");
}
func_78(uLocal_90, "SET_DATA_SLOT", 9f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}else{
if(!func_164()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}
else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_1NP_XB");
}}
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
if(func_177()){
if(!func_164()){
func_51(4f);
func_50(5f);
func_78(uLocal_90, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 185, 1), "CELL_DEPTH");
}}}}}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}}


void func_56(){
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_284");
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_285");
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_66());
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 177, 1), "CELL_281");
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_57(){
if(iLocal_80){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_34, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_35);
}}


void func_58(int iParam0){
if(iLocal_104==1){
return;
}
if(Global_4718592.f_165274==1){}elseif(Global_4718592.f_165275==1){}else{
MOBILE::CELL_CAM_ACTIVATE_SELFIE_MODE(iParam0);
}}


void func_59(){
if(iLocal_26==1){
if(MISC::ARE_STRINGS_EQUAL(sLocal_17[Global_4541026], "phone_cam12DUMMY")){
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
}else{
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(1);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(1);
}}}


void func_60(){
func_168(uLocal_89, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
if(!func_177()){
if(!Global_1946103){
GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
}}}

int func_61(){
if(func_62(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113810.f_28053[2 /*29*/]){
return 1;
}else{
return 0;
}}else{
return 0;
}}
return 1;
}


bool func_62(int iParam0){
return Global_43377==iParam0;
}


void func_63(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_64(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 30, 1), "CELL_RT_RSTICK");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 1, 1), "CELL_RT_LSTICK");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_RT_RSTICK");
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, 0, 1), "CELL_RT_LSTICK");
}}


void func_65(){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2) || func_4()){
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 3f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 184, 1), "CELL_SP_2NP_XB");
}
func_78(uLocal_90, "SET_DATA_SLOT", 4f, PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(0, 1, 1), "CELL_LT_RSTICK");
if(func_62(14)){
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 30, 1), "CELL_LT_LSTICK");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 5f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 39, 1), "CELL_LT_LSTICKZ");
func_78(uLocal_90, "SET_DATA_SLOT", 6f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 30, 1), "CELL_LT_LSTICK");
}}


char* func_66(){
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1970047)){
return func_77(&Global_1970047);
}
if(func_76()){
return "FHHUD_SENDLES";
}
if(func_74()){
return "CSH_PHONEC";
}
if(func_73(PLAYER::PLAYER_ID(), 275) && Global_1970040){
return "RE_SS_SNDOMG";
}
switch (func_72(PLAYER::PLAYER_ID())){
case 14:
case 3:
case 7:
case 8:
case 12:
case 2:
case 15:
return "TR_SESS_PHTO";
default:
}
switch (func_67(PLAYER::PLAYER_ID())){
case 3:
return "FXR_FRAN_PHTO";
case 2:
return "FXR_IMAN_PHTO";
default:
}
return "CELL_287";
}

int func_67(int iParam0){
if(func_71(iParam0)==264){
return func_68(iParam0);
}
return -1;
}

int func_68(int iParam0){
if(func_69(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_69(int iParam0, int iParam1){
if(func_70(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}

int func_70(var uParam0){
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

int func_71(int iParam0){
if(func_70(iParam0)){
if(func_69(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_72(int iParam0){
if(func_71(iParam0)==271){
return func_68(iParam0);
}
return -1;
}

int func_73(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=iParam0;
if(iVar0==-1){
return 0;
}
iVar1=0;
while (iVar1 < Global_1890669){
if(Global_1890669[iVar1]==iParam1){
if(Global_1890739[iVar0 /*138*/].f_77.f_1[iVar1 /*3*/]==2){
return 1;
}}
iVar1++;
}
return 0;
}

int func_74(){
switch (func_75(PLAYER::PLAYER_ID())){
case 16:
return 1;
case 4:
case 3:
case 2:
case 1:
case 0:
return 1;
default:
}
return 0;
}

int func_75(int iParam0){
if(func_71(iParam0)==256){
return func_68(iParam0);
}
return -1;
}

int func_76(){
switch (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_33){
case 233:
switch (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_182){
case 9:
return 1;
default:
}
break;
case 158:
switch (Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_182){
case 3:
case 1:
case 41:
return 1;
default:
}
break;
}
if(Global_1978237){
return 1;
}
return 0;
}


var func__77(var uParam0){
return uParam0;
}


void func_78(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(round(fParam2));
if(!MISC::IS_STRING_NULL_OR_EMPTY(uParam3)){
func_79(uParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
func_63(sParam4);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_79(var uParam0){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}


void func_80(){
if(Global_78689){
switch (Global_22962){
case 0:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_163("CELL_CAM_SELFIE_0_KM", -1);
}else{
func_163("CELL_CAM_SELFIE_0", -1);
}
Global_22962++;
break;
case 1:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_163("CELL_CAM_SELFIE_1_KM", -1);
}else{
func_163("CELL_CAM_SELFIE_1", -1);
}
Global_22962++;
}
break;
case 2:
break;
}}else{
switch (Global_22961){
case 0:
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_163("CELL_CAM_SELFIE_0_KM", -1);
}else{
func_163("CELL_CAM_SELFIE_0", -1);
}
Global_22961++;
break;
case 1:
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
func_163("CELL_CAM_SELFIE_1_KM", -1);
}else{
func_163("CELL_CAM_SELFIE_1", -1);
}
Global_22961++;
}
break;
case 2:
break;
}}}


void func_81(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
int iVar10;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar9=179;
iVar10=21;
}else{
iVar9=228;
iVar10=229;
}
if(PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar9)){
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
iVar0=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
iVar1=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
iVar2=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
iVar3=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
if(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar6=((IntToFloat(iVar0) / 128f) * fLocal_112);
}}elseif(MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28){
fVar6=((IntToFloat(iVar2) / 128f) * fLocal_112);
}
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
fVar7=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
fVar8=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
if(PAD::IS_MOUSE_LOOK_INVERTED()){
fVar8=(fVar8 * -1f);
}
fVar4=(fVar4 + fVar7);
fVar5=(fVar5 - fVar8);
}elseif(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar4=((IntToFloat(iVar0) / 128f) * fLocal_112);
fVar5=((IntToFloat(-iVar1) / 128f) * fLocal_112);
}
func_84(fVar5);
func_83(fVar6);
func_82(fVar4);
}elseif(!PAD::IS_CONTROL_PRESSED(2, iVar9)){
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
}}


void func_82(float fParam0){
fLocal_109=(fLocal_109 + fParam0);
if(fLocal_109 > 1f){
fLocal_109=1f;
}elseif(fLocal_109 < -1f){
fLocal_109=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_109);
}


void func_83(float fParam0){
fLocal_110=(fLocal_110 + fParam0);
if(fLocal_110 > 1f){
fLocal_110=1f;
}elseif(fLocal_110 < -1f){
fLocal_110=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_110);
}


void func_84(float fParam0){
fLocal_111=(fLocal_111 + fParam0);
if(fLocal_111 > 1f){
fLocal_111=1f;
}elseif(fLocal_111 < -1f){
fLocal_111=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_111);
}


void func_85(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
int iVar10;
int iVar11;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar10=179;
iVar11=178;
if(PAD::IS_CONTROL_PRESSED(2, iVar10)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_164()){
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
fLocal_105=0.5f;
fLocal_106=0.85f;
fLocal_107=0.5f;
fLocal_108=-0.25f;
}}}else{
iVar10=228;
iVar11=229;
}
if(PAD::IS_CONTROL_PRESSED(2, iVar10) && !PAD::IS_CONTROL_PRESSED(2, iVar11)){
if(PAD::IS_CONTROL_JUST_PRESSED(2, 178) && !func_164()){
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(0.85f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(0.5f);
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(-0.25f);
fLocal_105=0.5f;
fLocal_106=0.85f;
fLocal_107=0.5f;
fLocal_108=-0.25f;
}
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
iVar0=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
iVar1=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
iVar2=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 1)) * 127;
iVar3=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 2)) * 127;
if(PAD::IS_USING_KEYBOARD_AND_MOUSE(2)){
iVar1=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 39)) * 127;
fVar8=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290);
fVar9=PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291);
if(PAD::IS_MOUSE_LOOK_INVERTED()){
fVar9=(fVar9 * -1f);
}
fVar6=(fVar6 + fVar8);
fVar7=(fVar7 - fVar9);
}elseif(MISC::ABSI(iVar2) > 15 || MISC::ABSI(iVar3) > 15){
fVar6=((IntToFloat(iVar2) / 128f) * fLocal_112);
fVar7=((IntToFloat(-iVar3) / 128f) * fLocal_112);
}
if(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar4=((IntToFloat(iVar0) / 128f) * fLocal_112);
fVar5=((IntToFloat(iVar1) / 128f) * fLocal_112);
}
func_89(fVar6);
func_88(fVar7);
func_87(fVar4);
if(!func_62(14)){
func_86(fVar5);
}}elseif(!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11)){
PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
}
if(!PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar11)){
iVar0=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 30)) * 127;
iVar1=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 31)) * 127;
iVar2=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290)) * 127;
iVar3=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) * 127;
iVar2=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 294)) * 127;
iVar2=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 295)) * 127;
iVar3=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 292)) * 127;
iVar3=floor(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 293)) * 127;
if(MISC::ABSI(iVar2) > 28 || MISC::ABSI(iVar3) > 28){
fVar6=((IntToFloat(iVar2) / 128f) * fLocal_112);
fVar7=((IntToFloat(-iVar3) / 128f) * fLocal_112);
}
if(MISC::ABSI(iVar0) > 28 || MISC::ABSI(iVar1) > 28){
fVar4=((IntToFloat(iVar0) / 128f) * fLocal_112);
fVar5=((IntToFloat(iVar1) / 128f) * fLocal_112);
}
if(!func_62(14)){
func_86(fVar5);
}}}


void func_86(float fParam0){
fLocal_107=(fLocal_107 + fParam0);
if(fLocal_107 > 1f){
fLocal_107=1f;
}elseif(fLocal_107 < 0f){
fLocal_107=0f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_107);
}


void func_87(float fParam0){
fLocal_108=(fLocal_108 + fParam0);
if(fLocal_108 > 1f){
fLocal_108=1f;
}elseif(fLocal_108 < -1f){
fLocal_108=-1f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_108);
}


void func_88(float fParam0){
fLocal_106=(fLocal_106 + fParam0);
if(fLocal_106 > 1.5f){
fLocal_106=1.5f;
}elseif(fLocal_106 < 0.5f){
fLocal_106=0.5f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_106);
}


void func_89(float fParam0){
fLocal_105=(fLocal_105 + fParam0);
if(fLocal_105 > 2f){
fLocal_105=2f;
}elseif(fLocal_105 < -1.7f){
fLocal_105=-1.7f;
}
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_105);
}


void func_90(){
if(Global_78950 || Global_78951){
return;
}
if(iLocal_73==0){
if(!iLocal_98){
if(Global_4718592.f_165274==0 && Global_4718592.f_165275==0){
GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_90, 255, 255, 255, 0, 0);
}}}
if(iLocal_76==0){
if(Global_20442){
if(Global_20704){
if(iLocal_98==0){
if(Global_20500.f_1 > 3){
}}}}else{
func_92(255, 255, 255, 255);
func_91(0.059f, 0.644f, "CELL_284", 0);
func_92(255, 255, 255, 255);
func_91(0.165f, 0.644f, "CELL_285", 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.75f, "CELL_280", 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.83f, "CELL_281", 0);
}}elseif(Global_20442){}else{
func_92(255, 255, 255, 255);
func_91(0.275f, 0.75f, func_66(), 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.79f, "CELL_286", 0);
func_92(255, 255, 255, 255);
func_91(0.275f, 0.83f, "CELL_281", 0);
}}


void func_91(float fParam0, float fParam1, char* sParam2, int iParam3){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}


void func_92(int iParam0, int iParam1, int iParam2, int iParam3){
HUD::SET_TEXT_SCALE(0.4f, 0.4f);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
HUD::SET_TEXT_PROPORTIONAL(1);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}


void func_93(){
CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1065353216);
CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_37);
}


void func_94(){
PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
PAD::DISABLE_CONTROL_ACTION(0, 3, 1);
PAD::DISABLE_CONTROL_ACTION(0, 4, 1);
PAD::DISABLE_CONTROL_ACTION(0, 5, 1);
PAD::DISABLE_CONTROL_ACTION(0, 6, 1);
PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
PAD::DISABLE_CONTROL_ACTION(0, 39, 1);
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
}


void func_95(){
Local_42={
Global_20453[Global_20445 /*3*/] 
};
if(Global_20442){
if(func_98()){
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_44);
Local_42={
Local_44 
};
iLocal_70=0;
iLocal_71=0;
iLocal_72=0;
}
func_1(1);
if(iLocal_70){
Local_40.f_0=(Local_40.f_0 + 12f);
}
if(Local_40.f_0 > Local_42.f_0 || Local_40.f_0==Local_42.f_0){
Local_40.f_0=Local_42.f_0;
iLocal_70=0;
}
if(iLocal_71){
Local_40.f_1=(Local_40.f_1 - 6f);
}
if(MISC::IS_BIT_SET(Global_8372, 4)){
if(Local_40.f_1 < (Local_42.f_1 + 15f) || Local_40.f_1==(Local_42.f_1 + 15f)){
Local_40.f_1=(Local_42.f_1 + 15f);
iLocal_71=0;
}}elseif(Local_40.f_1 < (Local_42.f_1 + 10f) || Local_40.f_1==(Local_42.f_1 + 10f)){
Local_40.f_1=(Local_42.f_1 + 10f);
iLocal_71=0;
}
if(iLocal_72){
Local_40.f_2=(Local_40.f_2 - 10f);
}
if(Local_40.f_2 < Local_42.f_2 || Local_40.f_2==Local_42.f_2){
Local_40.f_2=Local_42.f_2;
iLocal_72=0;
}
if(func_98()==0){
if(MISC::IS_BIT_SET(Global_8372, 4)){
Local_42.f_1=(Local_42.f_1 + 15f);
}else{
Local_42.f_1=(Local_42.f_1 + 10f);
}
Local_42.f_0=(Local_42.f_0 - 14f);
}else{
Local_42={
Global_20446[Global_20445 /*3*/] 
};
}
Local_40={
Local_42 
};
iLocal_72=0;
iLocal_71=0;
iLocal_70=0;
MOBILE::SET_MOBILE_PHONE_POSITION(Local_40);
if((iLocal_70==0 && iLocal_71==0) && iLocal_72==0){
iLocal_73=0;
Local_41={
-90.3f, 0f, 90f 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_41, 0);
if(!MISC::IS_BIT_SET(Global_8370, 22)){
if(MISC::IS_BIT_SET(Global_8370, 28)){
StringCopy(&cLocal_94, "CELL_294", 16);
func_97();
}else{
StringCopy(&cLocal_94, "CELL_293", 16);
func_96();
}
iLocal_49=2;
}}}}


void func_96(){
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8371, 28)){
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_286");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_277");
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_GALSAVE");
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}


void func_97(){
func_168(uLocal_90, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_90, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
if(MISC::IS_BIT_SET(Global_8371, 28)){
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_66());
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_286");
}else{
func_78(uLocal_90, "SET_DATA_SLOT", 2f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 179, 1), func_66());
func_78(uLocal_90, "SET_DATA_SLOT", 1f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 178, 1), "CELL_277");
func_78(uLocal_90, "SET_DATA_SLOT", 0f, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 176, 1), "CELL_GALSAVE");
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_90, "SET_MAX_WIDTH");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_38);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
func_168(uLocal_90, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_98(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20500.f_1==10 || Global_20500.f_1==9){
if(Global_20443==0){
if(Global_7685 !=128){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_21845 !=2){
}}}}}
if(func_62(14)){
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
if(((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(MISC::IS_BIT_SET(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1927335)))){
return 0;
}
if(Global_112858){
return 0;
}}
if(Global_78689){
return 0;
}
iVar2=0;
iVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
if(iVar1==4 && (iVar0==0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())){
iVar2=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
iVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3)==joaat("toro")){
iVar2=0;
}}}}
if(Global_4542580 || iVar2==1){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113810.f_14054.f_89){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0){
return 1;
}else{
return 0;
}}else{
return 1;
}}
return 0;
}


void func_99(){
PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20470);
Local_41={
Global_20460 
};
Local_42={
Global_20453[Global_20445 /*3*/] 
};
if(func_98()){
MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_43, 0);
Local_41={
Local_43 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_44);
Local_42={
Local_44 
};
iLocal_67=0;
iLocal_68=0;
iLocal_69=0;
iLocal_70=0;
iLocal_71=0;
iLocal_72=0;
}
if(Global_20442){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_58(0);
iLocal_80=0;
if(MISC::IS_BIT_SET(Global_8370, 30)){
iLocal_67=0;
iLocal_68=0;
iLocal_69=0;
func_100();
}
if(iLocal_70){
if(MISC::IS_BIT_SET(Global_8370, 9)){
Local_40.f_0=(Local_40.f_0 + 2f);
}else{
Local_40.f_0=(Local_40.f_0 + 12f);
}}
if(Local_40.f_0 > Local_42.f_0 || Local_40.f_0==Local_42.f_0){
Local_40.f_0=Local_42.f_0;
iLocal_70=0;
}
if(iLocal_71){
Local_40.f_1=(Local_40.f_1 - 6f);
}
if(Local_40.f_1 < Local_42.f_1 || Local_40.f_1==Local_42.f_1){
Local_40.f_1=Local_42.f_1;
iLocal_71=0;
}
if(iLocal_72){
Local_40.f_2=(Local_40.f_2 - 10f);
}
if(Local_40.f_2 < Local_42.f_2 || Local_40.f_2==Local_42.f_2){
Local_40.f_2=Local_42.f_2;
iLocal_72=0;
}
if(iLocal_72==0){
if(iLocal_67){
Local_39.f_0=(Local_39.f_0 + 1f);
}
if(Local_39.f_0 > Local_41.f_0 || Local_39.f_0==Local_41.f_0){
Local_39.f_0=Local_41.f_0;
iLocal_67=0;
}
if(iLocal_68){
Local_39.f_1=(Local_39.f_1 - 2f);
}
if(Local_39.f_1 < Local_41.f_1 || Local_39.f_1==Local_41.f_1){
Local_39.f_1=Local_41.f_1;
iLocal_68=0;
}
if(iLocal_69){
Local_39.f_2=(Local_39.f_2 - 14f);
}
if(Local_39.f_2 < Local_41.f_2 || Local_39.f_2==Local_41.f_2){
Local_39.f_2=Local_41.f_2;
iLocal_69=0;
}}
if(iLocal_75){
Local_39={
Local_41 
};
Local_40={
Local_42 
};
iLocal_67=0;
iLocal_68=0;
iLocal_69=0;
if(func_98()==0){
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(Local_40);
}
func_115(0, 1);
}elseif(func_98()==0){
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(Local_40);
}
if((iLocal_67==0 && iLocal_68==0) && iLocal_69==0){
func_100();
}}else{
if(iLocal_67){
Local_39.f_0=(Local_39.f_0 + 1f);
}
if(Local_39.f_0 > Local_41.f_0 || Local_39.f_0==Local_41.f_0){
iLocal_67=0;
}
if(iLocal_68){
Local_39.f_1=(Local_39.f_1 - 2f);
}
if(Local_39.f_1 < Local_41.f_1 || Local_39.f_1==Local_41.f_1){
iLocal_68=0;
}
if(iLocal_69){
Local_39.f_2=(Local_39.f_2 - 7f);
}
if(Local_39.f_2 < Local_41.f_2 || Local_39.f_2==Local_41.f_2){
iLocal_69=0;
}
if((iLocal_67==0 && iLocal_68==0) && iLocal_69==0){
func_100();
}}
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
}


void func_100(){
func_1(0);
if(func_98()==0){
if(MISC::IS_BIT_SET(Global_8370, 30)){
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20446[Global_20445 /*3*/]);
}else{
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20453[Global_20445 /*3*/]);
}
Local_39={
Local_41 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
}
Global_22878=0;
func_122(0, 0);
func_126(0);
iLocal_64=0;
func_117(1);
Global_20487=1;
Global_22881=0;
if(Global_20500.f_1 > 4){
Global_20500.f_1=6;
Global_20478=1;
func_101();
}
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_89)){
func_167(uLocal_89, "SHUTDOWN_MOVIE");
}
wait(0);
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_90);
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_89);
if(Global_20706==1){
MISC::SET_BIT(&Global_8370, 17);
}else{
MISC::CLEAR_BIT(&Global_8370, 17);
}
MISC::CLEAR_BIT(&Global_8370, 18);
MISC::CLEAR_BIT(&Global_8370, 21);
HUD::CLEAR_FLOATING_HELP(0, 1);
MISC::CLEAR_BIT(&Global_8372, 3);
MISC::CLEAR_BIT(&Global_4542302, 3);
MISC::SET_GAME_PAUSED(0);
PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
HUD::RESET_HUD_COMPONENT_VALUES(15);
Global_22882=1;
AUDIO::STOP_SOUND(iLocal_61);
AUDIO::RELEASE_SOUND_ID(iLocal_61);
HUD::BUSYSPINNER_OFF();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
}
func_117(1);
MOBILE::CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(0);
MOBILE::SET_MOBILE_PHONE_DOF_STATE(0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(1f);
if(Global_4541027 > 0 && Global_4541027 < 13){
GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_18[Global_4541027]);
}
func_115(0, 1);
if(func_175(0, 1, iLocal_29, 1)){
iLocal_29=0;
}
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_101(){
struct<3> Var0;
if(Global_20483==1){
return;
}
if(Global_20500.f_1 < 4){
return;
}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
if(Global_78689){
return;
}
wait(0);
}
switch (Global_20500.f_1){
case 6:
func_168(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_109(Global_8975);
if(Global_8975==1){
func_168(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20504), -1082130432, -1082130432, -1082130432);
Global_20480=Global_20504;
}else{
func_168(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20505), -1082130432, -1082130432, -1082130432);
Global_20480=Global_20505;
}
if(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_108(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20706==0){
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}elseif(Global_78689){
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}else{
if(Global_20705==1){
if(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8370, 17);
}
if(Global_78689){
func_106();
MISC::CLEAR_BIT(&Global_8372, 9);
func_168(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20504), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_168(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
if(MISC::IS_BIT_SET(Global_8370, 20)){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20443){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20499==1){
func_105();
func_168(Global_20481, "SET_THEME", to_float(Global_113810.f_14054[Global_20500 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21858){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21860);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_63("CELL_300");
func_63("CELL_217");
func_63("CELL_217");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_104(Global_7685, Global_20500)==0){
func_108(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7685 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
}else{
func_108(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_7), "CELL_217", &(Global_2058[Global_7685 /*29*/].f_3), 0);
}
func_168(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21845==4 || Global_21845==3){
func_168(Global_20481, "SET_THEME", to_float(Global_113810.f_14054[Global_20500 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_105();
if(Global_21858){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21860);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_63("CELL_300");
func_63("CELL_219");
func_63("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_22103){
StringCopy(&Var0, "CELL_219", 24);
}else{
StringCopy(&Var0, "CELL_211", 24);
}
if(func_104(Global_7685, Global_20500)==0){
func_168(Global_20481, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7685 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
}else{
func_168(Global_20481, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_108(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_7), &Var0, &(Global_2058[Global_7685 /*29*/].f_3), 0);
}}
func_168(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_102();
break;
default:
break;
}}


void func_102(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
func_103();
if(Global_20499==1){
if(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
}else{
func_108(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21892){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_8370, 20)){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
}else{
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}else{
func_108(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
if(MISC::IS_BIT_SET(Global_8370, 20)){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20443){
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_108(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_103(){
if(Global_78689){
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}}

int func_104(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_24[iParam1];
}


void func_105(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20500==0){
switch (Global_113810.f_14054[Global_20500 /*20*/].f_6){
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
if(Global_20500==1){
switch (Global_113810.f_14054[Global_20500 /*20*/].f_6){
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
if(Global_20500==2){
switch (Global_113810.f_14054[Global_20500 /*20*/].f_6){
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
if(Global_20500==3){
switch (Global_4542578){
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
if(Global_78689){
if(func_107()==0){
return;
}
func_108(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8370, 17);
}}

int func_107(){
return 0;
}


void func_108(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
func_63(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_63(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_63(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_63(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_63(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_109(int iParam0){
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
Global_22913=0;
Global_8975=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8939[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_62(14)){
while (iVar1 < 34){
if(iParam0==Global_8377[iVar1 /*15*/].f_11){
if(iVar0==Global_8377[iVar1 /*15*/].f_4){
if(Global_8939[iVar0]==0){
Global_8903[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8371, 3)){
iVar2=42;
Global_20708=1;
}else{
iVar2=255;
Global_20708=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_63(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694571){
if(iVar1==14){
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8939[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8377[iVar1 /*15*/].f_11){
if(iVar0==Global_8377[iVar1 /*15*/].f_4){
if(Global_8939[iVar0]==0){
Global_8903[iVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113810.f_14144[iVar3 /*104*/].f_24 !=0){
if(Global_113810.f_14144[iVar3 /*104*/].f_28==0){
if(Global_113810.f_14144[iVar3 /*104*/].f_99[Global_20500]==1){
Global_22913++;
}
}
}
iVar3++;
}
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78689){
iVar4=0;
iVar4=Global_4541036;
iVar5=0;
while (iVar5 < 12){
if(Global_4541037[iVar5 /*104*/].f_24 !=0){
if(Global_4541037[iVar5 /*104*/].f_28==0){
if(Global_4541037[iVar5 /*104*/].f_99[Global_20500]==1){
iVar4++;
}}
}
iVar5++;
}
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20500){
case 0:
iVar6=Global_44580;
break;
case 1:
iVar6=Global_44581;
break;
case 2:
iVar6=Global_44582;
break;
default:
break;
}
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_63(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8376);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8371, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_63(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8371, 3)){
iVar8=42;
Global_20708=1;
}else{
iVar8=255;
Global_20708=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_63(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_63(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8371, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_63(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8377[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890239.f_1;
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_108(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8939[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_110(){
switch (iLocal_49){
case 1:
HUD::CLEAR_FLOATING_HELP(0, 1);
if(MISC::IS_BIT_SET(Global_8370, 28)){
StringCopy(&cLocal_94, "CELL_296", 16);
func_55();
}else{
StringCopy(&cLocal_94, "CELL_295", 16);
func_29();
}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_8370, 22)){
HUD::CLEAR_FLOATING_HELP(0, 1);
if(MISC::IS_BIT_SET(Global_8370, 28)){
StringCopy(&cLocal_94, "CELL_294", 16);
func_97();
}else{
StringCopy(&cLocal_94, "CELL_293", 16);
func_96();
}
iLocal_49=2;
}
break;
default:
break;
}}


void func_111(bool bParam0){
if(bParam0){
if(!func_124()){
MISC::SET_BIT(&Global_1963795, 17);
}}elseif(func_124()){
MISC::CLEAR_BIT(&Global_1963795, 17);
}}

int func_112(int iParam0, int iParam1, int iParam2){
if(PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1))){
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


void func_113(bool bParam0){
if(bParam0){
if(!func_114()){
MISC::SET_BIT(&Global_1963795, 18);
}}elseif(func_114()){
MISC::CLEAR_BIT(&Global_1963795, 18);
}}


bool func_114(){
return MISC::IS_BIT_SET(Global_1963795, 18);
}


void func_115(bool bParam0, bool bParam1){
if(bParam0){
if(func_116(0)){
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

int func_116(int iParam0){
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


void func_117(int iParam0){
if((Global_4718592.f_165274==0 && Global_4718592.f_165275==0) && !Global_1946103){
if(func_118(PLAYER::PLAYER_ID()) && iParam0){
Global_1978310=1;
}else{
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
}}}

int func_118(int iParam0){
if(iParam0 !=func_121()){
if(func_120(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_119(Global_2657704[iParam0 /*463*/].f_321.f_7)==17;
}}}
return 0;
}

int func_119(int iParam0){
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

int func_120(int iParam0, bool bParam1, bool bParam2){
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

int func_121(){
return -1;
}


void func_122(int iParam0, int iParam1){
if(Global_4718592.f_165274==1){}elseif(Global_4718592.f_165275==1){}else{
MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
}}

int func_123(){
if(MISC::IS_BIT_SET(Global_8370, 15)){
return 1;
}
return 0;
}


bool func_124(){
return MISC::IS_BIT_SET(Global_1963795, 17);
}


void func_125(){
if(Global_20442){
Local_41={
-90.3f, 0f, 90f 
};
Local_42={
1.5f, 0f, -17f 
};
if(func_98()){
MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_43, 0);
Local_41={
Local_43 
};
MOBILE::GET_MOBILE_PHONE_POSITION(&Local_44);
Local_42={
Local_44 
};
iLocal_67=0;
iLocal_68=0;
iLocal_69=0;
iLocal_70=0;
iLocal_71=0;
iLocal_72=0;
}
if(iLocal_69==0){
if(iLocal_70){
Local_40.f_0=(Local_40.f_0 - 14f);
}
if(Local_40.f_0 < Local_42.f_0 || Local_40.f_0==Local_42.f_0){
iLocal_70=0;
}
if(iLocal_71){
Local_40.f_1=(Local_40.f_1 + 7f);
}
if(Local_40.f_1 > Local_42.f_1 || Local_40.f_1==Local_42.f_1){
iLocal_71=0;
}
if(iLocal_72){
Local_40.f_2=(Local_40.f_2 + 12f);
}
if(Local_40.f_2 > Local_42.f_2 || Local_40.f_2==Local_42.f_2){
iLocal_72=0;
}}
if(iLocal_67){
Local_39.f_0=(Local_39.f_0 - 1f);
}
if(Local_39.f_0 < Local_41.f_0 || Local_39.f_0==Local_41.f_0){
Local_39.f_0=Local_41.f_0;
iLocal_67=0;
}
if(iLocal_68){
Local_39.f_1=(Local_39.f_1 - 0.5f);
}
if(Local_39.f_1 < Local_41.f_1 || Local_39.f_1==Local_41.f_1){
Local_39.f_1=Local_41.f_1;
iLocal_68=0;
}
if(iLocal_69){
Local_39.f_2=(Local_39.f_2 + 11f);
}
if(Local_39.f_2 > Local_41.f_2 || Local_39.f_2==Local_41.f_2){
Local_39.f_2=Local_41.f_2;
iLocal_69=0;
}
if(func_98()==0){
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
MOBILE::SET_MOBILE_PHONE_POSITION(Local_40);
}}else{
Local_41={
-93.9f, 4.9f, 90.7f 
};
if(iLocal_67){
Local_39.f_0=(Local_39.f_0 - 1f);
}
if(Local_39.f_0 < Local_41.f_0 || Local_39.f_0==Local_41.f_0){
iLocal_67=0;
}
if(iLocal_68){
Local_39.f_1=(Local_39.f_1 + 2f);
}
if(Local_39.f_1 > Local_41.f_1 || Local_39.f_1==Local_41.f_1){
iLocal_68=0;
}
if(iLocal_69){
Local_39.f_2=(Local_39.f_2 + 7f);
}
if(Local_39.f_2 > Local_41.f_2 || Local_39.f_2==Local_41.f_2){
iLocal_69=0;
}
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
}
if(Global_20442){
if(((((iLocal_67==0 && iLocal_68==0) && iLocal_69==0) && iLocal_70==0) && iLocal_71==0) && iLocal_72==0){
if(func_98()){
}else{
Local_39={
Local_41 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
Local_40={
Local_42 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Local_40);
}
if(iLocal_52==0){
Global_22879=0;
func_122(1, 1);
iLocal_64=1;
func_126(1);
func_60();
func_127();
func_58(0);
settimera(0);
iLocal_91=1;
iLocal_92=1;
func_147();
func_168(uLocal_89, "DISPLAY_VIEW", to_float(iLocal_93), -1082130432, -1082130432, -1082130432, -1082130432);
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
func_170();
}}}elseif((iLocal_67==0 && iLocal_68==0) && iLocal_69==0){
Local_39={
Local_41 
};
MOBILE::SET_MOBILE_PHONE_ROTATION(Local_39, 0);
Global_22879=0;
}}


void func_126(bool bParam0){
if(func_177()){
if(bParam0){
if(!GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(1);
if(Global_4541027 > 0 && Global_4541027 < 99){
GRAPHICS::PHONEPHOTOEDITOR_SET_FRAME_TXD(sLocal_18[Global_4541027], 0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(0.25f);
}}}elseif(GRAPHICS::PHONEPHOTOEDITOR_IS_ACTIVE()){
GRAPHICS::PHONEPHOTOEDITOR_TOGGLE(0);
}}}


void func_127(){
if(Global_4541026 > 0 && Global_4541026 < 99){
if(!Global_1946103){
GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_17[Global_4541026]);
}}}


void func_128(){
if(Global_20442){
iLocal_74=0;
func_60();
func_115(1, 1);
func_122(1, 1);
iLocal_64=1;
Global_22882=1;
}}


void func_129(){
if(Global_4718592.f_165274==1 && func_130()){
return;
}
if(iLocal_76==0){
if(MISC::IS_BIT_SET(Global_8370, 28)){
StringCopy(&cLocal_94, "CELL_296", 16);
func_55();
}else{
StringCopy(&cLocal_94, "CELL_295", 16);
func_29();
}
if(MISC::ARE_STRINGS_EQUAL(&cLocal_94, "DUMMYCOMPARISON")){
fLocal_47=fLocal_48;
fLocal_45=fLocal_46;
fLocal_48=fLocal_47;
fLocal_46=fLocal_45;
}
iLocal_49=1;
}}

int func_130(){
if(((((((func_142() || func_141()) || func_140()) || func_139()) || func_138()) || func_136()) || func_134()) || func_131()){
return 1;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1)){
return 1;
}
return 0;
}

int func_131(){
return func_132(Global_4718592.f_117591);
}

int func_132(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_133(iVar0)){
return 1;
}
iVar0++;
}
return 0;
}

int func_133(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}

int func_134(){
return func_135(Global_4718592.f_117591);
}

int func_135(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(Global_262145.f_31922[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}

int func_136(){
return func_137(Global_4718592.f_117591);
}

int func_137(int iParam0){
int iVar0;
if(iParam0==0){
return 0;
}
iVar0=0;
while (iVar0 < 8){
if(Global_262145.f_31258[iVar0]==iParam0){
return 1;
}
iVar0++;
}
return 0;
}


var func__138(){
return Global_2683883.f_24;
}


var func__139(){
return Global_2683883.f_21;
}


var func__140(){
return Global_2683883.f_19;
}


var func__141(){
return Global_2683883.f_18;
}


var func__142(){
return Global_2683883.f_17;
}


void func_143(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20489, 1);
}}


void func_144(){
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(0, 0);
iLocal_70=1;
iLocal_71=1;
iLocal_72=1;
iLocal_73=0;
iLocal_74=1;
}


void func_145(){
func_146();
}


void func_146(){
if(iLocal_99){
if(timera() > 50){
iLocal_99=0;
}}
if(iLocal_99==0){}}


void func_147(){
if(Global_20500.f_1 > 3){
if(!HUD::IS_PAUSE_MENU_ACTIVE()){
GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_89, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
}}}


void func_148(){
if(func_62(14)){
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
Global_20500=func_13();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


void func_149(int iParam0){
if(func_151()){
return;
}
if(Global_20704){
if(func_164()){
func_115(1, 1);
}else{
func_115(0, 0);
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
if(!func_150()){
Global_20500.f_1=3;
}}

int func_150(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


bool func_151(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_152(){
PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
PAD::DISABLE_CONTROL_ACTION(0, 56, 1);
if(iLocal_98==0){
PAD::SET_INPUT_EXCLUSIVE(0, Global_20473);
PAD::SET_INPUT_EXCLUSIVE(0, Global_20470);
PAD::DISABLE_CONTROL_ACTION(0, 278, 1);
PAD::DISABLE_CONTROL_ACTION(0, 279, 1);
PAD::DISABLE_CONTROL_ACTION(0, 280, 1);
PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
PAD::DISABLE_CONTROL_ACTION(0, 282, 1);
PAD::DISABLE_CONTROL_ACTION(0, 284, 1);
PAD::DISABLE_CONTROL_ACTION(0, 285, 1);
PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
PAD::DISABLE_CONTROL_ACTION(0, 77, 1);
PAD::DISABLE_CONTROL_ACTION(0, 78, 1);
PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
PAD::DISABLE_CONTROL_ACTION(0, 61, 1);
PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
PAD::DISABLE_CONTROL_ACTION(0, 63, 1);
PAD::DISABLE_CONTROL_ACTION(0, 64, 1);
PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
PAD::DISABLE_CONTROL_ACTION(0, 90, 1);
PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
PAD::DISABLE_CONTROL_ACTION(0, 108, 1);
PAD::DISABLE_CONTROL_ACTION(0, 109, 1);
PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
PAD::DISABLE_CONTROL_ACTION(0, 111, 1);
PAD::DISABLE_CONTROL_ACTION(0, 112, 1);
PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
PAD::DISABLE_CONTROL_ACTION(0, 137, 1);
PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
PAD::DISABLE_CONTROL_ACTION(0, 139, 1);
PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
}}

int func_153(){
var uVar0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, -1, 0)){
return 1;
}elseif(!VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}}
return 0;
}

int func_154(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_161()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_160()){
return 1;
}
if(func_159(159)){
if(!func_158()){
return 1;
}}
if(func_159(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_155() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_155())==0){
return 1;
}}
return 0;
}

int func_155(){
switch (func_157()){
case 0:
return func_156();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_156(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_157(){
return Global_32283;
}


bool func_158(){
return Global_2683883.f_698;
}

int func_159(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_160(){
return Global_2694576;
}


bool func_161(){
return Global_2683883.f_693;
}


void func_162(){
if(iLocal_104==1){
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
}else{
HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
}}


void func_163(char* sParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


bool func_164(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


void func_165(){
if(func_166()){
GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
if(GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0)){
iLocal_52=1;
iLocal_60=0;
}else{
Global_22882=1;
Global_20500.f_1=3;
HUD::BUSYSPINNER_OFF();
}}else{
iLocal_58=0;
iLocal_59=0;
if(iLocal_53==1){
if(iLocal_76==0){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_89)){
if(func_177()){
if(Global_4541027==0){
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
}
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}else{
if(!MISC::IS_BIT_SET(Global_4542302, 2)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}}}elseif(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_89)){
func_168(uLocal_89, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
func_168(uLocal_89, "SET_REMAINING_PHOTOS", to_float(iLocal_58), to_float(iLocal_59), -1082130432, -1082130432, -1082130432);
}
iLocal_53=0;
}
iLocal_60=0;
HUD::BUSYSPINNER_OFF();
}}

int func_166(){
if(Global_4718592.f_165274==1){
if(Global_78689){
return 0;
}}
if(Global_4718592.f_165275==1){
if(Global_78689){
return 0;
}}
if(MISC::IS_XBOX360_VERSION() || MISC::IS_PS3_VERSION()){
if(MISC::IS_BIT_SET(Global_8371, 28)){
return 0;
}}
return 1;
}


void func_167(var uParam0, char* sParam1){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_168(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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

int func_169(){
if(Global_78689){
Global_20500=3;
}else{
Global_20500=func_13();
}
if(Global_20500 > 3){
Global_20500=3;
}
return Global_113810.f_14054[Global_20500 /*20*/].f_7;
}


void func_170(){
if(Global_20500.f_1 > 3){
Global_20500.f_1=8;
}
Global_22881=0;
iLocal_76=0;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
Local_32={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
}
if(Global_20442){
while (timera() < iLocal_86){
wait(0);
func_147();
func_94();
RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
}
func_167(uLocal_89, "OPEN_SHUTTER");
func_162();
func_129();
iLocal_78=1;
settimerb(0);
}else{
func_122(1, 1);
func_126(1);
func_60();
func_127();
func_58(0);
iLocal_64=1;
}}


void func_171(int iParam0){
if(iParam0==1){
MISC::SET_BIT(&Global_8370, 15);
}else{
MISC::CLEAR_BIT(&Global_8370, 15);
}}


bool func_172(bool bParam0){
if(bParam0){}
return Global_1575038;
}

int func_173(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
if(!PED::IS_PED_INJURED(iParam0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar0)){
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


void func_174(){
}

int func_175(int iParam0, int iParam1, bool bParam2, int iParam3){
int iVar0;
iVar0=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=iParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
iVar0=1;
}}
return iVar0;
}


void func_176(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_105);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_106);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_107);
}else{
MOBILE::CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(fLocal_105);
MOBILE::CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(fLocal_106);
MOBILE::CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(fLocal_107);
}}
MOBILE::CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(fLocal_108);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(fLocal_109);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(fLocal_110);
MOBILE::CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(fLocal_111);
func_57();
}

int func_177(){
if(iLocal_21==0){
iLocal_21=1;
}
return 1;
}