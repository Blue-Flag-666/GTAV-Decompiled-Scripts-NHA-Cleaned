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
int iLocal_16=0;
var uLocal_17=0;
var uLocal_18=0;
char* sLocal_19=NULL;
float fLocal_20=0f;
var uLocal_21=0;
var uLocal_22=0;
var uLocal_23=0;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
int iLocal_27=0;
int iLocal_28=0;
int iLocal_29=0;
int iLocal_30=0;
int iLocal_31=0;
int iLocal_32=0;
int iLocal_33=0;
int iLocal_34=0;
int iLocal_35=0;
char cLocal_36[24]="";
var uLocal_37=0;
var uLocal_38=0;
var uLocal_39=0;
char cLocal_40[24]="";
var uLocal_41=0;
var uLocal_42=0;
var uLocal_43=0;
char cLocal_44[64]="";
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
char cLocal_53[24]="";
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
char* sLocal_57=NULL;
char cLocal_58[24]="";
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
char* sLocal_62=NULL;
char* sLocal_63=NULL;
char* sLocal_64=NULL;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
char cLocal_68[24]="";
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
char* sLocal_72=NULL;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
var uLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
var uLocal_79=0;
int iLocal_80=0;
int iLocal_81=0;
var uLocal_82=0;
int iLocal_83=0;
int iLocal_84=0;
int iLocal_85=0;
int iLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
int iLocal_89=0;
int iLocal_90=0;
int iLocal_91=0;
var uLocal_92[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_93[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_94[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
var uLocal_95[30]={
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 
};
int iLocal_96=0;
var uLocal_97=0;
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
sLocal_19="NULL";
fLocal_20=0f;
fLocal_24=-0.0375f;
fLocal_25=0.17f;
iLocal_32=5000;
iLocal_33=5000;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
while (true){
wait(0);
if(MISC::IS_BIT_SET(Global_8371, 1)){
if(!MISC::IS_BIT_SET(Global_8370, 20)){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20443){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::CLEAR_BIT(&Global_8371, 1);
}}}
if(MISC::IS_BIT_SET(Global_20711, 0)){
if(!func_120()){
if(!MISC::IS_BIT_SET(Global_20711, 1)){
MISC::SET_BIT(&Global_20711, 1);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_87=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_83=MISC::GET_GAME_TIMER();
}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_89=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_87);
}else{
iLocal_84=MISC::GET_GAME_TIMER();
iLocal_89=(iLocal_84 - iLocal_83);
}
if(iLocal_89 < 3000){
if(func_113(&Global_21299, &Global_21915, &Global_21835, Global_21848, Global_22830, Global_22831, 0)){
Global_20711=0;
}}else{
Global_20711=0;
}}}
if(((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(Global_4718592.f_17, 4)) && !func_112()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020"))==0){
if(Global_21845 !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
func_111();
}}}
if(iLocal_30==1){
func_107();
}
switch (Global_21845){
case 0:
break;
case 1:
if(Global_21851){
if(Global_21841==0){
func_105();
}else{
func_104();
func_105();
}}elseif(Global_21841==0){
func_92();
}else{
func_104();
func_74();
}
break;
case 2:
func_68();
break;
case 3:
func_64();
break;
case 4:
if(Global_21851){
if(Global_21853){
func_63();
}else{
func_7();
}}else{
func_5();
}
break;
case 5:
func_4();
break;
case 6:
func_1();
break;
default:
break;
}}}


void func_1(){
Global_21855=0;
Global_20499=0;
func_2();
}


void func_2(){
Global_2883585=0;
Global_2883586=0;
Global_21856=0;
Global_21857=0;
Global_21858=0;
Global_21859=0;
Global_21134.f_161=-99;
Global_21134.f_162={
0f, 0f, 0f 
};
Global_21849=0;
Global_21850=0;
Global_21892=0;
Global_21893=0;
Global_21896=0;
Global_21898=0;
Global_21897=0;
Global_21900=0;
Global_21899=0;
Global_22862=0;
Global_21902=0;
if(Global_20500.f_1==10){}elseif(MISC::IS_BIT_SET(Global_8370, 11)){
func_3();
}
Global_21851=0;
Global_21852=0;
Global_21853=0;
Global_21854=0;
Global_22836=0;
Global_22835=0;
Global_22842=0;
Global_22841=0;
Global_22838=0;
Global_22837=0;
Global_22839=0;
Global_22840=0;
Global_21841=0;
Global_21842=0;
Global_21843=0;
Global_21844=0;
Global_22103=0;
Global_22866=5000;
Global_20483=0;
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8370, 24);
MISC::CLEAR_BIT(&Global_8371, 23);
MISC::CLEAR_BIT(&Global_8372, 0);
MISC::CLEAR_BIT(&Global_8371, 9);
MISC::CLEAR_BIT(&Global_8371, 31);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, 5);
Global_22829=0;
Global_22828=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
Global_21845=4;
}else{
Global_21845=0;
Global_22856=0;
Global_22867=MISC::GET_GAME_TIMER();
}}


void func_3(){
if(!Global_78689){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(MISC::IS_BIT_SET(Global_8370, 11)){
if(!Global_20443){
TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
}
if(Global_78689){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
}
MISC::CLEAR_BIT(&Global_8370, 11);
}}}}


void func_4(){
Global_21855=0;
Global_20499=0;
func_2();
}


void func_5(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
if(Global_21901==0){
func_6();
}}}
if(iLocal_31==1){
func_6();
func_6();
}
if(Global_22837==0){
if(iLocal_29==0){
if(Global_22856==1){
AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
iLocal_29=1;
}}elseif(Global_22856==0){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
iLocal_29=0;
}}elseif(Global_22839 > 0){
iLocal_35=MISC::GET_GAME_TIMER();
if((iLocal_35 - iLocal_34) > Global_22839){
AUDIO::START_PRELOADED_CONVERSATION();
Global_22837=0;
}}
if(Global_22856==0){
if(!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
Global_21845=6;
}}}


void func_6(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_7(){
int iVar0;
int iVar1;
int iVar2;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
if(!MISC::IS_BIT_SET(Global_8370, 11)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_78689==0){
func_61();
}}}}elseif(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(Global_78689==0){
func_3();
}}}}
if(Global_78689==0){
func_60();
}
if(iLocal_31==1){
func_55(0);
}
if(iLocal_29==0){
if(Global_22856==1){
if(Global_22857==1){
AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
iLocal_29=1;
Global_22857=0;
}}}elseif(Global_22856==0){
if(Global_22857==1){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
iLocal_29=0;
Global_22857=0;
}}
if(Global_21898==0){
if(!Global_21858){
if(!MISC::IS_BIT_SET(Global_8371, 31)){
if(!MISC::IS_BIT_SET(Global_8371, 27)){
if(func_54()){
if(Global_20500.f_1 > 6){
MISC::SET_BIT(&Global_8371, 24);
MISC::SET_BIT(&Global_8371, 27);
MISC::CLEAR_BIT(&Global_8371, 26);
MISC::CLEAR_BIT(&Global_8371, 25);
}}}}}}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()==0 && Global_21858==0){
if(Global_21898==1){
MISC::SET_BIT(&Global_8371, 23);
}else{
MISC::CLEAR_BIT(&Global_8371, 23);
}
if(Global_21902){
if(Global_21898==0){
Global_21464={
Global_21903 
};
Global_21921={
Global_21909 
};
Global_21855=0;
Global_22862=6;
func_53();
return;
}}
if(!Global_21900){
while (Global_21898==1){
wait(0);
if(Global_20500.f_1 < 6){
Global_21898=0;
}else{
if(iLocal_28==0){
func_52();
if(Global_21900){
iLocal_28=1;
Global_22860=1;
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21987, &(Global_2058[Global_7685 /*29*/].f_7), &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_3), 0);
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
MISC::SET_BIT(&Global_8370, 17);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8370, 17);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
}
}
else{
iLocal_28=1;
Global_22858=1;
if(func_50(Global_7685, Global_20500)==0){
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21987, "CELL_300", &(Global_117[Global_7685 /*10*/].f_4), "CELL_195", 0);
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}else{
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21987, &(Global_2058[Global_7685 /*29*/].f_7), &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_3), 0);
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}}
if(func_49(2, Global_20469, 0)){
func_47();
Global_20426=0.19f;
Global_21898=0;
func_45();
if(Global_21900){
Global_21464={
Global_21981 
};
Global_22862=5;
}
elseif(Global_21843 > 0){
Global_22103=1;
Global_21845=0;
Global_22866=0;
if(MISC::IS_BIT_SET(Global_8371, 9)){
iVar0=0;
while (iVar0 < Global_22829 + 1){
uLocal_92[iVar0]=func_44(&(Global_22104[iVar0 /*6*/]));
uLocal_93[iVar0]=func_44(&(Global_22466[iVar0 /*6*/]));
iVar0++;
}
func_43(Global_22829, &Global_21134, Global_7685, &Global_21921, &uLocal_92, &uLocal_93, 9, 0, 0, 0, 0);
}elseif(Global_21843==2){
func_25(&Global_21134, Global_7685, &Global_21921, &(Global_21999[0 /*6*/]), &(Global_22051[0 /*6*/]), &(Global_21999[1 /*6*/]), &(Global_22051[1 /*6*/]), 9, 0, 0, 0, 0);
}
Global_22862=1;
Global_22858=0;
Global_22860=0;
Global_21855=0;
func_23();
return;
}
else{
Global_21464={
Global_21939 
};
Global_22862=1;
}
Global_22858=0;
Global_22860=0;
Global_21855=0;
func_23();
func_53();
return;
}
if(func_49(2, Global_20470, 0) || MISC::IS_BIT_SET(Global_8370, 24)){
func_47();
Global_20426=0.19f;
Global_21898=0;
func_45();
if(Global_21900){
Global_21464={
Global_21975 
};
Global_22862=4;
}
elseif(Global_21843 > 0){
Global_22103=1;
Global_21845=0;
Global_22866=0;
if(MISC::IS_BIT_SET(Global_8371, 9)){
iVar1=0;
while (iVar1 < Global_22828 + 1){
uLocal_94[iVar1]=func_44(&(Global_22285[iVar1 /*6*/]));
uLocal_95[iVar1]=func_44(&(Global_22647[iVar1 /*6*/]));
iVar1++;
}
func_43(Global_22828, &Global_21134, Global_7685, &Global_21921, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
}elseif(Global_21843==2){
func_25(&Global_21134, Global_7685, &Global_21921, &(Global_22012[0 /*6*/]), &(Global_22064[0 /*6*/]), &(Global_22012[1 /*6*/]), &(Global_22064[1 /*6*/]), 9, 0, 0, 0, 0);
}
Global_22862=2;
Global_22858=0;
Global_22860=0;
Global_21855=0;
func_23();
return;
}
else{
Global_21464={
Global_21945 
};
Global_22862=2;
}
Global_22858=0;
Global_22860=0;
Global_21855=0;
func_23();
func_53();
return;
}
if(func_49(2, Global_20472, 0)){
if(Global_21900){
Global_20426=0.19f;
Global_21898=0;
func_45();
func_47();
Global_21464={
Global_21969 
};
Global_22862=3;
Global_22858=0;
Global_22860=0;
Global_21855=0;
func_23();
func_53();
return;
}}}}}else{
while (Global_21898){
wait(0);
if(Global_20500.f_1 < 6){
Global_21898=0;
}else{
if(iLocal_28==0){
func_52();
func_51(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_121(Global_20481, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
func_121(Global_20481, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
func_121(Global_20481, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
func_51(Global_20481, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
func_22(Global_20481, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
}
else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
iLocal_96=0;
iLocal_28=1;
}
func_16();
if(func_49(2, Global_20469, 0)){
func_47();
Global_21898=0;
func_45();
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "GET_CURRENT_SELECTION");
uLocal_97=GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uLocal_97)){
wait(0);
}
iVar2=GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uLocal_97);
switch (iVar2){
case 0:
Global_21464={
Global_21975 
};
Global_22862=4;
break;
case 1:
Global_21464={
Global_21969 
};
Global_22862=3;
break;
case 2:
Global_21464={
Global_21981 
};
Global_22862=5;
break;
}
Global_22858=0;
Global_22860=0;
Global_21855=0;
func_23();
func_53();
return;
}
if(func_49(2, Global_20470, 0)){
Global_21898=0;
func_45();
}}}}
if(Global_21846==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
settimera(0);
while (timera() < 900 && Global_20500.f_1==9){
wait(0);
}
Global_21845=6;
}
if(!Global_1574984){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20489, 1);
}
func_15();
Global_20500.f_1=Global_20502;
func_8();
}elseif(Global_20704==0){
if(func_49(2, Global_20468, 0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_8370, 20)){
}else{
Global_20478=1;
func_45();
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21894=1;
Global_21895=1;
Global_21845=6;
func_15();
Global_20500.f_1=Global_20502;
func_8();
}}}}}}


void func_8(){
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
func_51(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_13(Global_8975);
if(Global_8975==1){
func_51(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20504), -1082130432, -1082130432, -1082130432);
Global_20480=Global_20504;
}else{
func_51(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20505), -1082130432, -1082130432, -1082130432);
Global_20480=Global_20505;
}
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20706==0){
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}elseif(Global_78689){
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}else{
if(Global_20705==1){
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
}}elseif(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
}
MISC::SET_BIT(&Global_8370, 17);
}
if(Global_78689){
func_11();
MISC::CLEAR_BIT(&Global_8372, 9);
func_51(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20504), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
if(MISC::IS_BIT_SET(Global_8370, 20)){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20443){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20499==1){
func_10();
func_51(Global_20481, "SET_THEME", to_float(Global_113810.f_14054[Global_20500 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21858){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21860);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_9("CELL_300");
func_9("CELL_217");
func_9("CELL_217");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_50(Global_7685, Global_20500)==0){
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7685 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
}else{
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_7), "CELL_217", &(Global_2058[Global_7685 /*29*/].f_3), 0);
}
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21845==4 || Global_21845==3){
func_51(Global_20481, "SET_THEME", to_float(Global_113810.f_14054[Global_20500 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_10();
if(Global_21858){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21860);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_9("CELL_300");
func_9("CELL_219");
func_9("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_22103){
StringCopy(&Var0, "CELL_219", 24);
}else{
StringCopy(&Var0, "CELL_211", 24);
}
if(func_50(Global_7685, Global_20500)==0){
func_51(Global_20481, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7685 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
}else{
func_51(Global_20481, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_7), &Var0, &(Global_2058[Global_7685 /*29*/].f_3), 0);
}}
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_23();
break;
default:
break;
}}


void func_9(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_10(){
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


void func_11(){
if(Global_78689){
if(func_12()==0){
return;
}
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8370, 17);
}}

int func_12(){
return 0;
}


void func_13(int iParam0){
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
if(func_14(14)){
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
func_9(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694571){
if(iVar1==14){
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_9(&(Global_8377[iVar1 /*15*/]));
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
func_9(&(Global_8377[iVar1 /*15*/]));
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
func_9(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_9(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8371, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_9(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8377[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890239.f_1;
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8939[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


bool func_14(int iParam0){
return Global_43377==iParam0;
}


void func_15(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return;
}
switch (Global_20502){
case 5:
Global_20502=6;
break;
case 6:
if(MISC::IS_BIT_SET(Global_8371, 5)){
Global_20502=6;
MISC::CLEAR_BIT(&Global_8371, 5);
}else{
Global_20502=3;
}
break;
case 7:
Global_20502=3;
break;
case 3:
if(MISC::IS_BIT_SET(Global_8371, 5)){
Global_20502=6;
MISC::CLEAR_BIT(&Global_8371, 5);
}else{
Global_20502=3;
}
break;
default:
Global_20502=3;
break;
}}


void func_16(){
if(iLocal_96){
if(timera() > 50){
iLocal_96=0;
}}
if(iLocal_96==0){
if(func_49(2, Global_20476, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 181)){
func_20();
iLocal_96=1;
settimera(0);
}
if(func_49(2, Global_20477, 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 180)){
func_17();
iLocal_96=1;
settimera(0);
}}}


void func_17(){
func_51(Global_20481, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
func_18();
}


void func_18(){
if(func_19()){
if(Global_20709==0){
MOBILE::CELL_SET_INPUT(2);
}else{
MOBILE::CELL_SET_INPUT(1);
}}}

int func_19(){
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


void func_20(){
func_51(Global_20481, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, 1);
func_21();
}


void func_21(){
if(func_19()){
if(Global_20709==0){
MOBILE::CELL_SET_INPUT(1);
}else{
MOBILE::CELL_SET_INPUT(2);
}}}


void func_22(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
func_9(sParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam3)){
func_9(sParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
func_9(sParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
func_9(sParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
func_9(sParam6);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_23(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
func_24();
if(Global_20499==1){
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21892){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(MISC::IS_BIT_SET(Global_8370, 20)){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
if(MISC::IS_BIT_SET(Global_8370, 20)){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20443){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}}


void func_24(){
if(Global_78689){
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11){
var uVar0;
var uVar1;
func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
func_41();
if(iParam8==1){
Global_21857=1;
}else{
Global_21857=0;
}
uVar0=10;
uVar1=10;
func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3){
int iVar0;
Global_21846=0;
if(Global_21845==0 || Global_21847==2){
if(Global_21845 !=0){
if(iParam2 > Global_21847){
if(bParam3==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_20500.f_1=3;
Global_21845=0;
Global_21846=1;
Global_21898=0;
Global_21841=0;
Global_21842=0;
}else{
func_111();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_38(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_37();
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
Global_22841=Global_22842;
Global_22837=Global_22838;
Global_22839=Global_22840;
Global_21464.f_368=Global_22832;
Global_21464.f_369=Global_22833;
Global_21464.f_370=Global_22834;
Global_21841=Global_21842;
Global_21843=Global_21844;
if(Global_22103==0){
Global_21999[0 /*6*/]={
Global_22025[0 /*6*/] 
};
Global_21999[1 /*6*/]={
Global_22025[1 /*6*/] 
};
Global_22051[0 /*6*/]={
Global_22077[0 /*6*/] 
};
Global_22051[1 /*6*/]={
Global_22077[1 /*6*/] 
};
Global_22012[0 /*6*/]={
Global_22038[0 /*6*/] 
};
Global_22012[1 /*6*/]={
Global_22038[1 /*6*/] 
};
Global_22064[0 /*6*/]={
Global_22090[0 /*6*/] 
};
Global_22064[1 /*6*/]={
Global_22090[1 /*6*/] 
};
}
if(Global_21851){
MISC::CLEAR_BIT(&Global_8370, 20);
MISC::CLEAR_BIT(&Global_8371, 17);
MISC::CLEAR_BIT(&Global_8372, 0);
if(bParam3){
func_30();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
if(iParam2==13){
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
if(func_29()){
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
if(Global_22103==0){
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
}}}}
if(func_28()){
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
}}
func_27();
Global_21855=bParam3;
}
Global_21847=iParam2;
if(Global_21841 > 0){
iVar0=0;
while (iVar0 < Global_21841){
StringCopy(&(Global_21464.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
StringCopy(&(Global_21464.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
iVar0++;
}}
Global_20711=0;
func_53();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam2 < Global_21847 || iParam2==Global_21847){
return 0;
}
if(iParam2==2){}else{
func_111();
}
return 0;
}


void func_27(){
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

int func_28(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}

int func_29(){
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


void func_30(){
if(func_14(14)){
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
Global_20500=func_31();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__31(){
func_32();
return Global_113810.f_2366.f_539.f_4321;
}


void func_32(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_35(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_34(PLAYER::PLAYER_PED_ID());
if(func_33(iVar0) && (!func_14(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_33(Global_113810.f_2366.f_539.f_4321)){
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


bool func_33(int iParam0){
return iParam0 < 3;
}

int func_34(var uParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(uParam0);
iVar0=0;
while (iVar0 <=2){
if(func_35(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_35(int iParam0){
if(func_33(iParam0)){
return func_36(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__36(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_37(){
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


bool func_38(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16){
func_40(iParam0);
(*uParam1)[0]=uParam3;
(*uParam2)[0]=uParam4;
(*uParam1)[1]=uParam5;
(*uParam2)[1]=uParam6;
(*uParam1)[2]=iParam7;
(*uParam2)[2]=iParam8;
(*uParam1)[3]=iParam9;
(*uParam2)[3]=iParam10;
(*uParam1)[4]=iParam11;
(*uParam2)[4]=iParam12;
(*uParam1)[5]=iParam13;
(*uParam2)[5]=iParam14;
(*uParam1)[6]=iParam15;
(*uParam2)[6]=iParam16;
}


void func_40(var uParam0){
Global_21842=uParam0;
Global_21852=1;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22842=0;
Global_2883585=0;
}


void func_41(){
Global_21893=0;
Global_21852=1;
Global_21859=0;
Global_21854=0;
Global_22836=0;
Global_22838=0;
Global_21859=0;
Global_22842=0;
Global_21850=0;
Global_21897=0;
Global_21899=0;
Global_2883585=0;
}


void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10){
func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
func_41();
if(iParam7==1){
Global_21857=1;
}else{
Global_21857=0;
}
func_40(uParam0);
return func_26(uParam4, uParam5, iParam6, bParam10);
}


var func__44(var uParam0){
return uParam0;
}


void func_45(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20489, 1);
func_46();
}}


void func_46(){
if(func_19()){
MOBILE::CELL_SET_INPUT(5);
}}


void func_47(){
if(func_48()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!Global_20443){
if(!MISC::IS_BIT_SET(Global_8370, 11)){
func_61();
}}}}}}

int func_48(){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20500.f_1==10 || Global_20500.f_1==9){
if(Global_20443==0){
if(Global_7685 !=128){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_21845 !=2){
}}}}}
if(func_14(14)){
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
uVar3=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(uVar3)==joaat("toro")){
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

int func_49(int iParam0, int iParam1, int iParam2){
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

int func_50(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_24[iParam1];
}


void func_51(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


void func_52(){
if(func_48()){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(!Global_20443){
if(MISC::IS_BIT_SET(Global_8370, 11)){
func_3();
}}}}}}


void func_53(){
int iVar0;
iVar0=0;
while (iVar0 <=69){
StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
iVar0++;
}
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=1;
}

int func_54(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_89=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_88);
}else{
iLocal_86=MISC::GET_GAME_TIMER();
iLocal_89=(iLocal_86 - iLocal_85);
}
return 0;
}


void func_55(int iParam0){
if(func_59()){
return;
}
if(Global_20704){
if(func_58()){
func_56(1, 1);
}else{
func_56(0, 0);
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
if(!func_28()){
Global_20500.f_1=3;
}}


void func_56(bool bParam0, bool bParam1){
if(bParam0){
if(func_57(0)){
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

int func_57(int iParam0){
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


bool func_58(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_59(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_60(){
if(func_49(2, Global_20477, 0)){
if(Global_22856==0){
if(Global_21851){
if(MISC::IS_BIT_SET(Global_8371, 17)){
}else{
AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
}}}}}


void func_61(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
iVar1=0;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_62() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)){
iVar1=1;
}}
if(!Global_78689){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1==0){
iVar2=PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
if(Global_78689){
if(((((iVar2==15 || iVar2==16) || iVar2==17) || iVar2==18) || iVar2==19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
iVar0=1;
}}elseif(PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID())){
iVar0=1;
}
if(!Global_20443){
if(Global_7685 !=128){
if(iVar0==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
}else{
if(Global_78689){
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
}
MISC::SET_BIT(&Global_8370, 11);
TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
}
}}}}}}}

int func_62(){
var uVar0;
int iVar1;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
return 1;
}
return 0;
}


void func_63(){
if(Global_78689==0){
func_60();
}
if(iLocal_31==1){
func_55(0);
}
if(iLocal_28==0){
iLocal_28=1;
Global_22858=1;
if(func_50(Global_7685, Global_20500)==0){
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21987, "CELL_300", "CELL_195", "CELL_195", 0);
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}else{
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_21987, &(Global_2058[Global_7685 /*29*/].f_7), &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_3), 0);
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
Global_20426=0.2f;
if(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
}else{
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
}
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
}
if(Global_21898==1){
if(Global_20500.f_1 < 6){
Global_21898=0;
}else{
if(Global_20440==0){
if(func_49(2, Global_20469, 0)){
Global_20426=0.19f;
Global_21898=0;
func_45();
Global_22863=1;
iLocal_30=1;
}}
if(func_49(2, Global_20470, 0)){
Global_20426=0.19f;
Global_21898=0;
func_45();
Global_22863=2;
}}}elseif(Global_22863==2){
if(Global_21846==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}
func_15();
Global_20500.f_1=Global_20502;
func_8();
}elseif(!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
iLocal_30=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20489, 1);
func_15();
Global_20500.f_1=Global_20502;
func_8();
}}


void func_64(){
if(Global_20712==1){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
if(AUDIO::GET_IS_PRELOADED_CONVERSATION_READY()){
Global_20712=0;
}}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Global_20712=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}
if(timerb() > iLocal_33){
if(Global_20712==1){
Global_20712=0;
}}
if(timera() < Global_22866 || Global_20712==1){
if(func_49(2, Global_20468, 0)){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_8370, 20)){
}else{
Global_20478=1;
func_45();
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21894=1;
Global_21845=6;
MISC::CLEAR_BIT(&Global_8370, 27);
if(!Global_21856){
MISC::SET_BIT(&Global_8371, 5);
}
func_15();
Global_20500.f_1=Global_20502;
func_8();
}}}}}else{
MISC::CLEAR_BIT(&Global_8370, 27);
Global_21845=4;
Global_21902=0;
func_67();
func_66();
if(!Global_21858){
if(Global_22862==0){
if(!MISC::IS_BIT_SET(Global_8372, 5)){
AUDIO::START_PRELOADED_CONVERSATION();
}
MISC::CLEAR_BIT(&Global_8372, 5);
}else{
AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21464.f_368, Global_21464.f_369);
}}
func_65();
}}


void func_65(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_88=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_85=MISC::GET_GAME_TIMER();
}}


void func_66(){
if(Global_21858){
if(Global_78689){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
if(!MISC::IS_PC_VERSION()){
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
MISC::SET_BIT(&(Global_2794162.f_1832), 15);
}}}}}


void func_67(){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
if(!Global_21853){
func_121(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_121(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8370, 17);
if(MISC::IS_BIT_SET(Global_8370, 20)){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20488){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
if(Global_20443){
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}else{
func_121(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_21858){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21860);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_9("CELL_300");
func_9("CELL_219");
func_9("CELL_219");
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_50(Global_7685, Global_20500)==0){
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7685 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
}else{
func_121(Global_20481, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_2058[Global_7685 /*29*/].f_3), &(Global_2058[Global_7685 /*29*/].f_7), "CELL_219", &(Global_2058[Global_7685 /*29*/].f_3), 0);
}}
func_51(Global_20481, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}}


void func_68(){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_90=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_76);
iLocal_91=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_79);
}else{
iLocal_75=MISC::GET_GAME_TIMER();
iLocal_90=(iLocal_75 - iLocal_74);
iLocal_78=MISC::GET_GAME_TIMER();
iLocal_91=(iLocal_78 - iLocal_77);
}
if(Global_21892==1){
if(func_48()){
if(iLocal_90 > 4000){
if(MISC::IS_BIT_SET(Global_8370, 14)){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
func_45();
Global_20499=2;
func_67();
func_66();
}}}}elseif(iLocal_90 > 2000){
if(MISC::IS_BIT_SET(Global_8370, 14)){
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20481)){
func_45();
Global_20499=2;
func_67();
func_66();
}}}}
if(iLocal_91 > 10000){
Global_20499=3;
}
if(Global_20499==2){
iLocal_28=0;
Global_21845=4;
func_61();
Global_21902=0;
func_67();
func_66();
if(!Global_21858){
if(Global_22862==0){
AUDIO::START_PRELOADED_CONVERSATION();
}else{
AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21464.f_368, Global_21464.f_369);
}}
func_65();
Global_22861=0;
}
if(Global_21892==0){
if(Global_20499==3){
if(Global_21858){
func_70();
func_55(0);
}else{
func_69();
Global_22861=1;
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
func_15();
Global_20500.f_1=Global_20502;
func_8();
}}}elseif(Global_20499==3){}}


void func_69(){
}


void func_70(){
Global_2801145.f_2=1;
Global_2801145.f_38=1;
if(NETWORK::NETWORK_IS_SIGNED_ONLINE()){
if(NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION()){
while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY()){
wait(0);
}
NETWORK::NETWORK_SESSION_VOICE_LEAVE();
Global_2801145=0;
Global_2801145.f_2=0;
}elseif(func_73(Global_2801145.f_20)){
if(NETWORK::NETWORK_IS_FRIEND(&(Global_2801145.f_20))){
if(!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2801145.f_20))){
func_71();
}}}else{
func_71();
}}else{
func_71();
}
if(Global_2801145.f_37){
func_55(0);
}
Global_2801145.f_37=0;
Global_2801145.f_3=0;
}


void func_71(){
Global_2801145.f_1=0;
Global_2801145=0;
Global_2801145.f_2=0;
Global_2801145.f_33=-1;
Global_2801145.f_34=-1;
StringCopy(&(Global_2801145.f_4), "", 64);
StringCopy(&(Global_2801145.f_39[0 /*16*/]), "", 64);
Global_2801145.f_38=0;
Global_2801145.f_56=0;
Global_2801145.f_57=0;
Global_2801145.f_58=-2;
Global_2801145.f_3=0;
func_72(&(Global_2801145.f_20));
}


void func_72(var uParam0){
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


bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12){
return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}


void func_74(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
var uVar7;
var uVar8;
var uVar9;
var uVar10;
var uVar11;
var uVar12;
int iVar13;
iLocal_73=0;
iVar0=1;
iVar1=1;
iVar2=0;
iLocal_27=0;
iLocal_29=0;
while (iLocal_73 < Global_21841){
func_91();
func_90();
func_89();
iVar13=0;
while (iVar2 < 70 && iLocal_27==0){
cLocal_40={
Global_21464.f_6[iLocal_73 /*6*/] 
};
StringConCat(&cLocal_40, "A", 24);
Global_20713[iVar2 /*6*/]={
Global_21464.f_6[iLocal_73 /*6*/] 
};
StringConCat(&(Global_20713[iVar2 /*6*/]), "_", 24);
StringIntConCat(&(Global_20713[iVar2 /*6*/]), iVar1, 24);
cLocal_36={
Global_20713[iVar2 /*6*/] 
};
StringConCat(&cLocal_36, "A", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_36)){
StringCopy(&cLocal_44, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_36), 64);
iVar3=func_88(iVar13);
iVar4=func_87(iVar13);
uVar5=func_85(iVar13);
uLocal_65=func_84();
uLocal_66=func_83();
uLocal_67=func_82();
uVar6=func_81(iVar13);
uVar7=func_80(iVar13);
uVar8=func_79(iVar13);
uVar12=func_78(iVar13);
uVar9=func_77(iVar13);
uVar10=func_76(iVar13);
uVar11=func_75(iVar13);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar2 /*6*/]))){
if(MISC::ARE_STRINGS_EQUAL(&(Global_20713[iVar2 /*6*/]), &(Global_21464.f_187[iLocal_73 /*6*/]))){
if(iVar3 > 36 || iVar4 > 36){
}
AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_44, &(Global_20713[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
}}
iVar1=(iVar1 + iVar0);
}elseif(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_40)){
StringCopy(&cLocal_44, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_40), 64);
iVar3=func_88(0);
iVar4=func_87(0);
uVar5=func_85(0);
uLocal_65=func_84();
uLocal_66=func_83();
uLocal_67=func_82();
uVar6=func_81(0);
uVar7=func_80(0);
uVar8=func_79(0);
uVar12=func_78(0);
uVar9=func_77(0);
uVar10=func_76(0);
uVar11=func_75(0);
AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_44, &(Global_21464.f_6[iLocal_73 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
StringCopy(&(Global_20713[iVar2 /*6*/]), "END", 24);
iLocal_27=1;
}else{
StringCopy(&(Global_20713[iVar2 /*6*/]), "END", 24);
iLocal_27=1;
}
iVar2++;
iVar13++;
if(iVar2==70){
}}
iLocal_73++;
iLocal_27=0;
iVar1=1;
iVar13=0;
iVar2=0;
}
if(Global_21851==0){
AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(uLocal_66);
AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(uLocal_67);
AUDIO::START_SCRIPT_CONVERSATION(Global_21464.f_368, Global_21464.f_369, Global_21464.f_370, uLocal_65);
Global_21845=4;
}}

int func_75(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7 + 6, iParam0 * 7 + 7);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_76(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7 + 5, iParam0 * 7 + 6);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_77(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7 + 4, iParam0 * 7 + 5);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_78(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7 + 3, iParam0 * 7 + 4);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(uVar0, "1")){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(uVar0, "2")){
return 2;
}
if(MISC::ARE_STRINGS_EQUAL(uVar0, "3")){
return 3;
}
if(MISC::ARE_STRINGS_EQUAL(uVar0, "4")){
return 0;
}
return 0;
}

int func_79(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7 + 2, iParam0 * 7 + 3);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_80(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7 + 1, iParam0 * 7 + 2);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_81(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68), iParam0 * 7, iParam0 * 7 + 1);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_82(){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 2, 3);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_83(){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 1, 2);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_84(){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 0, 1);
if(MISC::ARE_STRINGS_EQUAL(uVar0, "0")){
return 0;
}
return 1;
}

int func_85(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_53), iParam0 * 3 + 2, iParam0 * 3 + 3);
return func_86(uVar0);
}

int func_86(var uParam0){
if(MISC::ARE_STRINGS_EQUAL(uParam0, "0")){
return 0;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "1")){
return 1;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "2")){
return 2;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "3")){
return 3;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "4")){
return 4;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "5")){
return 5;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "6")){
return 6;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "7")){
return 7;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "8")){
return 8;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "9")){
return 9;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "A")){
return 10;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "B")){
return 11;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "C")){
return 12;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "D")){
return 13;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "E")){
return 14;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "F")){
return 15;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "G")){
return 16;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "H")){
return 17;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "I")){
return 18;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "J")){
return 19;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "K")){
return 20;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "L")){
return 21;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "M")){
return 22;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "N")){
return 23;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "O")){
return 24;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "P")){
return 25;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "Q")){
return 26;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "R")){
return 27;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "S")){
return 28;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "T")){
return 29;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "U")){
return 30;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "V")){
return 31;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "W")){
return 32;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "X")){
return 33;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "Y")){
return 34;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "Z")){
return 35;
}
if(MISC::ARE_STRINGS_EQUAL(uParam0, "z")){
return -1;
}
return -1;
}

int func_87(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_53), iParam0 * 3 + 1, iParam0 * 3 + 2);
return func_86(uVar0);
}

int func_88(int iParam0){
var uVar0;
uVar0=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_53), iParam0 * 3, iParam0 * 3 + 1);
return func_86(uVar0);
}


void func_89(){
cLocal_68={
Global_21464.f_6[iLocal_73 /*6*/] 
};
StringConCat(&cLocal_68, "LF", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_68)){
sLocal_72=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68);
if(MISC::IS_STRING_NULL(sLocal_72)){
}}}


void func_90(){
cLocal_58={
Global_21464.f_6[iLocal_73 /*6*/] 
};
StringConCat(&cLocal_58, "IF", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_58)){
sLocal_62=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 0, 1);
if(MISC::IS_STRING_NULL(sLocal_62)){
}
sLocal_63=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 1, 2);
if(MISC::IS_STRING_NULL(sLocal_63)){
}
sLocal_64=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 2, 3);
if(MISC::IS_STRING_NULL(sLocal_64)){
}}}


void func_91(){
cLocal_53={
Global_21464.f_6[iLocal_73 /*6*/] 
};
StringConCat(&cLocal_53, "SL", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_53)){
sLocal_57=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_53);
if(MISC::IS_STRING_NULL(sLocal_57)){
}}}


void func_92(){
func_93();
AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(uLocal_66);
AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(uLocal_67);
if(Global_22837){
AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_21464.f_368, Global_21464.f_369, Global_21464.f_370, uLocal_65);
iLocal_34=MISC::GET_GAME_TIMER();
}else{
AUDIO::START_SCRIPT_CONVERSATION(Global_21464.f_368, Global_21464.f_369, Global_21464.f_370, uLocal_65);
}
Global_21845=4;
}


void func_93(){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
var uVar5;
var uVar6;
var uVar7;
var uVar8;
var uVar9;
var uVar10;
var uVar11;
var uVar12;
int iVar13;
int iVar14;
iVar0=1;
iVar1=1;
iVar2=0;
iLocal_27=0;
iLocal_29=0;
iLocal_31=0;
if(HUD::DOES_TEXT_BLOCK_EXIST(&Global_21921)){
if(MISC::ARE_STRINGS_EQUAL(&Global_21921, "CT_AUD")){
Global_2883586=1;
}
iVar13=0;
if(func_103() || func_102()){
if(Global_1835499==1){
iVar13=1;
}else{
iVar13=2;
}}
iVar14=0;
if(Global_78689 || func_101(0)){
if(Global_1835499==0){
iVar14=1;
}}elseif(!func_99()){
iVar14=1;
}
if(func_98(MISC::GET_HASH_KEY(&Global_21921))){
iVar14=0;
Global_2883586=0;
iVar13=1;
}
if(((Global_21847 < 5 || Global_21847==10) || Global_21847==12) || Global_21847==13){
if((iVar14==1 || Global_2883586==1) || iVar13==2){
HUD::REQUEST_ADDITIONAL_TEXT(&Global_21921, 7);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7)){
wait(0);
}}else{
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21921, 15);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15)){
wait(0);
}}}elseif((iVar14==1 || Global_2883586==1) || iVar13==2){
HUD::REQUEST_ADDITIONAL_TEXT(&Global_21921, 6);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6)){
wait(0);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020"))==0){
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21921, 14);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14)){
wait(0);
}}}else{
iLocal_31=1;
return;
}
AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
func_97();
func_96();
func_95();
func_94();
Global_22855=0;
while (iVar2 < 70 && iLocal_27==0){
cLocal_40={
Global_21464 
};
StringConCat(&cLocal_40, "A", 24);
Global_20713[iVar2 /*6*/]={
Global_21464 
};
StringConCat(&(Global_20713[iVar2 /*6*/]), "_", 24);
StringIntConCat(&(Global_20713[iVar2 /*6*/]), iVar1, 24);
cLocal_36={
Global_20713[iVar2 /*6*/] 
};
StringConCat(&cLocal_36, "A", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_36)){
StringCopy(&cLocal_44, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_36), 64);
iVar3=func_88(iVar2);
if(iVar3==9){
if(Global_4542490==0){
}}
iVar4=func_87(iVar2);
uVar5=func_85(iVar2);
uLocal_65=func_84();
uLocal_66=func_83();
uLocal_67=func_82();
uVar6=func_81(iVar2);
uVar7=func_80(iVar2);
uVar8=func_79(iVar2);
uVar12=func_78(iVar2);
uVar9=func_77(iVar2);
uVar10=func_76(iVar2);
uVar11=func_75(iVar2);
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar2 /*6*/]))){
if(Global_22835==0 && Global_22841==0){
if(iVar3 > 36 || iVar4 > 36){
}
AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_44, &(Global_20713[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
}elseif(MISC::ARE_STRINGS_EQUAL(&(Global_20713[iVar2 /*6*/]), &Global_22843)){
if(iVar3 > 36 || iVar4 > 36){
}
AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_44, &(Global_20713[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
Global_22855=iVar2;
if(Global_22841==1){
Global_22841=0;
}}}elseif(Global_22841==0 && Global_22835==0){
AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_44, &cLocal_44, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
}
iVar1=(iVar1 + iVar0);
}else{
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_40)){
StringCopy(&cLocal_44, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_40), 64);
iVar3=func_88(iVar2);
iVar4=func_87(iVar2);
uVar5=func_85(iVar2);
uLocal_65=func_84();
uLocal_66=func_83();
uLocal_67=func_82();
uVar6=func_81(iVar2);
uVar7=func_80(iVar2);
uVar8=func_79(iVar2);
uVar12=func_78(iVar2);
uVar9=func_77(iVar2);
uVar10=func_76(iVar2);
uVar11=func_75(iVar2);
AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_44, &Global_21464, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
}
iLocal_27=1;
}
iVar2++;
if(iVar2==70){
}}}


void func_94(){
int iVar0;
iVar0=0;
while (iVar0 <=15){
if(Global_21134[iVar0 /*10*/].f_7==1){
if(ENTITY::DOES_ENTITY_EXIST(Global_21134[iVar0 /*10*/]) || Global_21134[iVar0 /*10*/]==0){
AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_21134[iVar0 /*10*/], &(Global_21134[iVar0 /*10*/].f_1));
}
if(Global_21134.f_161==iVar0){
if((Global_21134.f_162 !=0f && Global_21134.f_162.f_1 !=0f) && Global_21134.f_162.f_2 !=0f){
wait(0);
AUDIO::SET_POSITION_FOR_NULL_CONV_PED(Global_21134.f_161, Global_21134.f_162);
}}}
iVar0++;
}
if(Global_4542490==1){
Global_4542490=0;
iVar0=0;
iVar0=0;
while (iVar0 <=19){
if(Global_4542309[iVar0 /*9*/].f_7==1){
if(ENTITY::DOES_ENTITY_EXIST(Global_4542309[iVar0 /*9*/]) || Global_4542309[iVar0 /*9*/]==0){
AUDIO::ADD_PED_TO_CONVERSATION(Global_4542309[iVar0 /*9*/].f_8, Global_4542309[iVar0 /*9*/], &(Global_4542309[iVar0 /*9*/].f_1));
}}
iVar0++;
}}}


void func_95(){
cLocal_68={
Global_21464 
};
StringConCat(&cLocal_68, "LF", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_68)){
sLocal_72=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_68);
if(MISC::IS_STRING_NULL(sLocal_72)){
}}}


void func_96(){
cLocal_58={
Global_21464 
};
StringConCat(&cLocal_58, "IF", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_58)){
sLocal_62=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 0, 1);
if(MISC::IS_STRING_NULL(sLocal_62)){
}
sLocal_63=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 1, 2);
if(MISC::IS_STRING_NULL(sLocal_63)){
}
sLocal_64=HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_58), 2, 3);
if(MISC::IS_STRING_NULL(sLocal_64)){
}}}


void func_97(){
cLocal_53={
Global_21464 
};
StringConCat(&cLocal_53, "SL", 24);
if(HUD::DOES_TEXT_LABEL_EXIST(&cLocal_53)){
sLocal_57=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_53);
if(MISC::IS_STRING_NULL(sLocal_57)){
}}}

int func_98(int iParam0){
switch (iParam0){
case joaat("apcutau"):
case joaat("apair"):
case joaat("apcalau"):
case joaat("pbpau"):
case joaat("pbbau"):
case joaat("expowau"):
case joaat("excalau"):
case joaat("excpaau"):
case joaat("exhelau"):
case joaat("bplesau"):
case joaat("bpmalau"):
case joaat("lowreau"):
case 1566303118:
case 1220013368:
case 71115730:
case -251854137:
case -243052328:
case -1417718107:
case joaat("impaaud"):
case joaat("imdunau"):
case joaat("imruiau"):
case joaat("immecau"):
case joaat("imarmau"):
case joaat("imblzau"):
case joaat("imphaau"):
case joaat("imtecau"):
case joaat("imvolau"):
case joaat("imwasau"):
case joaat("gnrcaud"):
case joaat("gnrweau"):
case joaat("grapcau"):
case joaat("grhalau"):
case joaat("grdunau"):
case joaat("grmocau"):
case joaat("groppau"):
case joaat("grop2au"):
case joaat("grtamau"):
case joaat("grtrsau"):
case joaat("smgcaud"):
case joaat("smgfzau"):
case joaat("iaafiau"):
case joaat("iaamoau"):
case joaat("iaasfau"):
case joaat("iaadeau"):
case joaat("silprau"):
case joaat("subbmau"):
case joaat("subfiau"):
case joaat("subfoau"):
case joaat("subosau"):
case joaat("subcaau"):
case joaat("xmfmaud"):
case joaat("tufin"):
case joaat("subriau"):
case joaat("silbcau"):
case joaat("silspau"):
case joaat("siltaau"):
case joaat("silfiau"):
case joaat("h2cutau"):
case joaat("batfmau"):
case joaat("lazfmau"):
case joaat("paifmau"):
case joaat("arintau"):
case joaat("arannau"):
case joaat("arasau"):
case 1931750438:
case joaat("cagtau"):
case joaat("ctomau"):
case joaat("caspaud"):
case joaat("cas1aud"):
case joaat("cas2aud"):
case joaat("cas3aud"):
case joaat("cas4aud"):
case joaat("cas5aud"):
case joaat("cas6aud"):
case joaat("casuiau"):
case joaat("casinau"):
case 365230037:
case joaat("casbkau"):
case joaat("hs3faau"):
case joaat("hs3prau"):
case joaat("hs3cwau"):
case joaat("hs3leau"):
case -342942601:
case joaat("hs3ceau"):
case joaat("hs3reau"):
case joaat("hs3fiau"):
case joaat("hs3mnau"):
case joaat("hs3vnau"):
case joaat("ccycaud"):
return 1;
default:
}
switch (iParam0){
case 1971768146:
case joaat("hs4paau"):
case -519616352:
case 718322585:
case joaat("hs4edau"):
case joaat("hs4bpau"):
case joaat("hs4moau"):
case joaat("hs4piau"):
case joaat("hs4fiau"):
case joaat("h4scpau"):
case joaat("hs4faud"):
case joaat("hs4csau"):
case joaat("hs4psau"):
case joaat("tnssaud"):
case joaat("tnmmaud"):
case joaat("tnrpaud"):
case joaat("tnfudau"):
case joaat("tnfmcau"):
case joaat("tnfiaau"):
case joaat("tnfftau"):
case joaat("tnfboau"):
case joaat("tnfflau"):
case joaat("tnfbkau"):
case joaat("tnfmhau"):
case joaat("tnfbbau"):
case joaat("tncutau"):
case joaat("tnheaud"):
case joaat("tnaraud"):
case joaat("tumsaud"):
case joaat("tncsbau"):
case joaat("lowcaau"):
case joaat("lcau"):
case joaat("fxdl0au"):
case joaat("fxdl1au"):
case joaat("fxdl2au"):
case joaat("fxdl3au"):
case joaat("fxdl4au"):
case joaat("fxdl5au"):
case joaat("fxflaud"):
case joaat("fxfraud"):
case joaat("fximaud"):
case joaat("fxlmaud"):
case joaat("fxbaaud"):
case joaat("fxfaaud"):
case joaat("fxcutau"):
case joaat("fxigaud"):
case -1018917633:
case 1332392277:
case -1889985881:
case -1536828534:
case -580715848:
case -947428706:
case -790967848:
case 1475512972:
case -9119060:
case 1748914928:
case -105714609:
case -1463539315:
case 1194496889:
case -147438928:
case 494169967:
case 549653660:
case 39587133:
case 1013082963:
case 952237143:
case 1073149438:
case 391502992:
case -1192647115:
case 1657711155:
case 1404758415:
case -675588129:
case -1333870039:
case -266249619:
case 1616674547:
case -1250679862:
case -158239083:
case -1990606476:
case 979781164:
case 438323893:
case -959327640:
case 690539531:
case -1415949907:
case -664409440:
case 1563674548:
case 384471949:
case 505411200:
return 1;
default:
}
return 0;
}

int func_99(){
if(Global_2883694){
if(func_14(0)){
if(Global_3407872 || func_100(0)){
return 1;
}}}
if(Global_2883693){
if(func_14(0)){
if(Global_3932160 || func_100(0)){
return 1;
}}}
return 0;
}

int func_100(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


var func__101(bool bParam0){
if(bParam0){}
return Global_1575038;
}


var func__102(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


var func__103(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


void func_104(){
int iVar0;
int iVar1;
iVar0=0;
if(func_103() || func_102()){
if(Global_1835499==1){
iVar0=1;
}else{
iVar0=2;
}}
iVar1=0;
if(Global_78689){
if(Global_1835499==0){
iVar1=1;
}}elseif(!func_99()){
iVar1=1;
}
if(HUD::DOES_TEXT_BLOCK_EXIST(&Global_21921)){
if(MISC::ARE_STRINGS_EQUAL(&Global_21921, "CT_AUD")){
Global_2883586=1;
}}
if(func_98(MISC::GET_HASH_KEY(&Global_21921))){
iVar1=0;
Global_2883586=0;
iVar0=1;
}
if(((Global_21847 < 5 || Global_21847==10) || Global_21847==12) || Global_21847==13){
if((iVar1==1 || Global_2883586==1) || iVar0==2){
HUD::REQUEST_ADDITIONAL_TEXT(&Global_21921, 7);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7)){
wait(0);
}}else{
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21921, 15);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15)){
wait(0);
}}}elseif((iVar1==1 || Global_2883586==1) || iVar0==2){
HUD::REQUEST_ADDITIONAL_TEXT(&Global_21921, 6);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6)){
wait(0);
}}else{
HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_21921, 14);
while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14)){
wait(0);
}}
AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
func_94();
}


void func_105(){
while (Global_20483==1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0){
wait(0);
}
Global_20483=0;
if(MISC::IS_BIT_SET(Global_8370, 20)){
MISC::SET_BIT(&Global_8371, 1);
}else{
MISC::CLEAR_BIT(&Global_8371, 1);
}
Global_20484=0;
if(Global_21841==0){
if(!Global_21858){
func_93();
}}else{
func_74();
}
Global_20712=0;
if(Global_21855){
if(Global_22862==0){
if(Global_21858==0){
iLocal_32=5000;
AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_21464.f_368, Global_21464.f_369);
}else{
iLocal_32=0;
}}else{
iLocal_32=0;
}
Global_20712=1;
settimerb(0);
while ((Global_20712==1 && Global_21845==1) && timerb() < iLocal_32){
wait(0);
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Global_20712=0;
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
if(AUDIO::GET_IS_PRELOADED_CONVERSATION_READY()){
Global_20712=0;
}}}
if(timerb() > iLocal_32){
}
if(Global_21845 !=1){
}
if(Global_20712==0){
}}
Global_20712=0;
if(((Global_20500.f_1==1 || Global_20500.f_1==0) || Global_21845 !=1) || Global_20466==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}else{
if(Global_21853){
Global_22863=0;
iLocal_30=0;
}
if(Global_21855==0){
if(Global_21896==0){
Global_20502=Global_20500.f_1;
Global_21896=1;
}
iLocal_28=0;
if(Global_22862==0){
AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_21464.f_368, Global_21464.f_369);
wait(0);
Global_21845=3;
Global_20712=1;
settimerb(0);
MISC::SET_BIT(&Global_8370, 27);
settimera(0);
}else{
Global_20712=0;
Global_21845=4;
}
Global_20499=0;
if(Global_21856==1){
if(Global_20500.f_1==10){
}
if(!Global_20500.f_1==9){
if(Global_20500.f_1 > 4){
if(Global_20483==0){
Global_20500.f_1=9;
func_8();
}}else{
Global_20500.f_1=4;
}}else{
func_8();
}}else{
while (Global_20500.f_1==4){
wait(0);
if(Global_20712==1){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
if(AUDIO::GET_IS_PRELOADED_CONVERSATION_READY()){
Global_20712=0;
}
}}}
if(Global_20500.f_1==6){
}
if(Global_20500.f_1==10){
}
if(Global_20500.f_1==3){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
Global_20484=1;
return;
}
Global_20500.f_1=9;
func_8();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_82=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_80=MISC::GET_GAME_TIMER();
}
while (Global_20500.f_1 !=9 && Global_20483==0){
wait(0);
if(Global_20712==1){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()){
if(AUDIO::GET_IS_PRELOADED_CONVERSATION_READY()){
Global_20712=0;
}}}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_89=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_82);
}else{
iLocal_81=MISC::GET_GAME_TIMER();
iLocal_89=(iLocal_81 - iLocal_80);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(iLocal_89 > 15000){
Global_22861=1;
Global_20483=1;
}}}
if(!MISC::IS_BIT_SET(Global_8370, 11)){
if(func_48()==0){
func_61();
}}
if(Global_20483==0){
if(!Global_22862==0){
Global_21902=0;
func_67();
func_66();
if(!Global_21858){
if(Global_22862==0){
AUDIO::START_PRELOADED_CONVERSATION();
}
else{
AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21464.f_368, Global_21464.f_369);
}}
func_65();
}}else{
func_106();
Global_20484=1;
}}else{
Global_20499=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(Global_20500.f_1==3){
}}else{
MISC::CLEAR_BIT(&Global_8371, 21);
}}
if(Global_21896==0){
Global_20502=Global_20500.f_1;
Global_21896=1;
}
if(Global_20500.f_1==3){
Global_20500.f_1=4;
}else{
while (Global_20500.f_1==4){
wait(0);
}
if(Global_20500.f_1==6){
}
Global_20500.f_1=9;
func_8();
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_82=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_80=MISC::GET_GAME_TIMER();
}
while (Global_20500.f_1 !=9 && Global_20483==0){
wait(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_89=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_82);
}else{
iLocal_81=MISC::GET_GAME_TIMER();
iLocal_89=(iLocal_81 - iLocal_80);
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(iLocal_89 > 20000){
Global_22861=1;
Global_20483=1;
MISC::CLEAR_BIT(&Global_8371, 21);
}}}
if(Global_20483==0){
Global_21845=2;
}else{
func_106();
Global_20484=1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_76=NETWORK::GET_NETWORK_TIME();
uLocal_79=NETWORK::GET_NETWORK_TIME();
}else{
iLocal_74=MISC::GET_GAME_TIMER();
iLocal_77=MISC::GET_GAME_TIMER();
}}}}


void func_106(){
Global_20711=0;
func_111();
}


void func_107(){
float fVar0;
fVar0=func_108(Global_20453[Global_20445 /*3*/], Global_20446[Global_20445 /*3*/], Global_20460, Global_20431, 350f, 0);
if(fVar0 >=1f){
if(Global_22859==0){
HUD::DISPLAY_RADAR(1);
}
iLocal_30=0;
}}


float func_108(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5){
struct<2> Var0;
float fVar1;
float fVar2;
float fVar3;
if(Global_4542581==0){
if(MISC::IS_BIT_SET(Global_8370, 14) && Global_20500.f_1 < 4){
MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
if(Global_20453[Global_20445 /*3*/].f_1==Var0.f_1){
Global_4542581=1;
}}}
if(func_48() && Global_4542581==0){
return 2f;
}
if(iLocal_16==0){
iLocal_16=MISC::GET_GAME_TIMER();
}
fVar1=func_110((to_float((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam4), 0f, 1f);
if(fVar1 < 1f){
fVar2=fVar1;
if(bParam5){
fVar2=(fVar2 - 1f);
fVar3=0.670158f;
fVar2=(((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
}else{
fVar2=sin((fVar1 * 90f));
}
Global_20428={
func_109(Param0, Param1, fVar2) 
};
Global_20431={
func_109(Param2, Param3, fVar2) 
};
}else{
Global_20428={
Param1 
};
Global_20431={
Param3 
};
}
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20431, 0);
return fVar1;
}


Vector3 func__109(struct<3> Param0, struct<3> Param1, float fParam2){
return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}


float func_110(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_111(){
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


bool func_112(){
return MISC::IS_BIT_SET(Global_4718592.f_164769, 12);
}


bool func_113(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
return func_114(sParam2, iParam3, 0);
}

int func_114(char* sParam0, int iParam1, bool bParam2){
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
func_111();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 0;
}
if(func_38(8, -1)){
return 0;
}
Global_21921={
Global_21915 
};
func_37();
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
func_30();
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
if(func_29()){
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
if(func_28()){
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
func_27();
Global_21855=bParam2;
}
Global_21847=iParam1;
StringCopy(&Global_21464, sParam0, 24);
Global_20711=0;
func_53();
func_115();
return 1;
}
if(Global_21845==5){
return 0;
}
if(iParam1 < Global_21847 || iParam1==Global_21847){
return 0;
}
if(iParam1==2){}else{
func_111();
}
return 0;
}


void func_115(){
if(!func_116()){
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

int func_116(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_119()){
return 0;
}
if(func_117(PLAYER::PLAYER_ID())){
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


bool func_117(int iParam0){
return func_118(iParam0, 20);
}


var func__118(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_119(){
return -1;
}

int func_120(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_121(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
func_9(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_9(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_9(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_9(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_9(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}