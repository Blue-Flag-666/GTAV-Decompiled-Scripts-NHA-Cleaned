//Cleaned With dr NHA's C Script Cleaner V2.8
#region Local Var
int iLocal_0=0;
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
var uLocal_14=0;
var uLocal_15=0;
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
var uLocal_27=0;
var uLocal_28=0;
float fLocal_29=0f;
float fLocal_30=0f;
float fLocal_31=0f;
var uLocal_32=0;
var uLocal_33=0;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
int iLocal_37=0;
int iLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
struct<3> Local_41={
0, 0, 0 
};
var uLocal_42=0;
int iLocal_43=0;
int iLocal_44=0;
struct<5> Local_45[8];
struct<4> Local_46[8];
struct<3> Local_47={
0, 0, 0 
};
struct<3> Local_48={
0, 0, 0 
};
struct<3> Local_49={
0, 0, 0 
};
struct<3> Local_50={
0, 0, 0 
};
struct<3> Local_51={
0, 0, 0 
};
struct<3> Local_52={
0, 0, 0 
};
struct<3> Local_53={
0, 0, 0 
};
var uLocal_54=0;
struct<3> Local_55={
0, 0, 0 
};
var uLocal_56=0;
int iLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
float fLocal_72=0f;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
var uLocal_80=0;
int iLocal_81=0;
struct<2> Local_82={
0, 5 
};
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
var uLocal_98=5;
var uLocal_99=0;
var uLocal_100=0;
var uLocal_101=0;
var uLocal_102=0;
var uLocal_103=0;
#endregion

void __EntryFunction__(){
iLocal_0=3;
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
fLocal_13=0.001f;
iLocal_16=-1;
sLocal_19="NULL";
fLocal_20=0f;
fLocal_24=-0.0375f;
fLocal_25=0.17f;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
Local_47={
0f, 0f, 0f 
};
Local_49={
1064.871f, 2670.857f, 38.5511f 
};
Local_50={
926.3422f, 2708.926f, 39.5394f 
};
Local_51={
1140.03f, 2698.027f, 37.1568f 
};
Local_52={
Local_47 
};
fLocal_72=0f;
iLocal_73=joaat("dukes2");
iLocal_74=joaat("phantom");
iLocal_75=joaat("trailers2");
iLocal_76=joaat("rancherxl");
iLocal_77=joaat("a_m_m_hillbilly_01");
iLocal_78=joaat("a_m_m_hillbilly_02");
iLocal_81=3;
Local_48={
ScriptParam_82.f_1[0 /*3*/] 
};
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11)){
if(func_229(Local_46[0 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[0 /*4*/], 2);
}
func_202(1, 0);
}
if(func_160(Local_48, 31, 0, 0, 0)){
func_157(31);
}else{
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
if((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_156(1)) || iLocal_63 > 2){
if(func_156(13)){
func_125();
}
switch (iLocal_43){
case 0:
func_62();
break;
case 1:
func_1();
break;
}}else{
if(func_229(Local_46[0 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[0 /*4*/], 2);
}
func_202(1, 0);
}
wait(0);
}}


void func_1(){
switch (iLocal_44){
case 0:
iLocal_44=1;
break;
case 1:
switch (iLocal_63){
case 0:
iLocal_44=2;
break;
}
break;
case 2:
func_2();
break;
}}


void func_2(){
func_59(64, 1);
func_59(65, 1);
func_32(Local_46[0 /*4*/], 145);
func_6(-1, 0);
func_3();
func_202(1, 0);
}


void func_3(){
func_4();
}

int func_4(){
if(func_5(0)){
return 0;
}
if(Global_100872.f_8){
if(Global_100872.f_10 > 0){
return 0;
}}elseif(Global_100872.f_10 > 1){
return 0;
}
Global_100872.f_10++;
return 1;
}

int func_5(bool bParam0){
if(!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78938, 0);
}


void func_6(int iParam0, int iParam1){
if(iParam0==-1){
iParam0=func_30();
}
if(iParam0==-1){
return;
}
if(iParam1 <=func_29(iParam0)){
func_28(iParam0, iParam1);
if(!func_27(51)){
func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
func_16(51);
}
if(func_15(iParam0)){
Global_113810.f_24998.f_2=3;
}
if(func_14(iParam0, iParam1) !=322){
func_8(func_14(iParam0, iParam1), Local_41.f_0, Local_41.f_1);
}
Global_113798=iParam1;
if(Global_113796==0){
if(((Global_113799==1 || Global_113799==5) || Global_113799==11) || Global_113799==25){
func_7(2);
}elseif((Global_113799==26 || Global_113799==8) || Global_113799==17){
func_7(7);
}else{
func_7(1);
}}}}


void func_7(int iParam0){
Global_113796=iParam0;
}


void func_8(int iParam0, var uParam1, var uParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_12((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113810.f_10197[iParam0 /*12*/].f_5==1){
if(Global_113810.f_10197[iParam0 /*12*/].f_6==11 || Global_113810.f_10197[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113810.f_10197[iParam0 /*12*/].f_5=1;
Global_113810.f_10197[iParam0 /*12*/].f_10=uParam1;
Global_113810.f_10197[iParam0 /*12*/].f_11=uParam2;
if(iParam0==287){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
}
if(iParam0==286){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
}
if(iParam0==299){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
}}
if(bVar0){
func_9();
}}


void func_9(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
iVar0=0;
Global_113546=0;
Global_113547=0;
Global_113548=0;
Global_113549=0;
Global_113550=0;
Global_113551=0;
Global_113552=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113810.f_10197.f_3853;
Global_113810.f_10197.f_3853=0f;
while (iVar0 < 321){
if(Global_113810.f_10197[iVar0 /*12*/].f_5==1){
switch (Global_113810.f_10197[iVar0 /*12*/].f_6){
case 1:
Global_113546++;
fVar1=(fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 3:
Global_113547++;
fVar2=(fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 5:
Global_113548++;
fVar3=(fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 7:
Global_113549++;
fVar4=(fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 9:
Global_113550++;
fVar5=(fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113551++;
fVar6=(fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
case 13:
Global_113552++;
fVar7=(fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113529 > 0){
if(Global_113546==Global_113529){
fVar1=55f;
}}
if(Global_113530 > 0){
if(Global_113547==Global_113530){
fVar2=10f;
}}
if(Global_113531 > 0){
if(Global_113548==Global_113531){
fVar3=0f;
}}
if(Global_113532 > 0){
if(Global_113549==Global_113532){
fVar4=10f;
}}
if(Global_113533 > 0){
if(((Global_113550==Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550==Global_113536){
if(!MISC::IS_BIT_SET(Global_113810.f_10197.f_3856, 14)){
if(Global_113550==Global_113533){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113533, 0);
MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113534 > 0){
if(Global_113551==Global_113534){
fVar6=15f;
}}
if(Global_113535 > 0){
if(Global_113552==Global_113535){
fVar7=5f;
}}
Global_113810.f_10197.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113550 > Global_113536 || Global_113550==Global_113536){
iVar9=Global_113536;
}else{
iVar9=Global_113550;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113546, 1);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113529, 1);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113547, 1);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113530, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113548, 1);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113531, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113549, 1);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113532, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113536, 1);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113552 + Global_113551), 1);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113535 + Global_113534), 1);
Global_113553=(Global_113546 * 100 / Global_113529);
Global_113555=((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
Global_113554=((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
Global_113556=((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113810.f_10197.f_3853, 1);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113553, 1);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113554, 1);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113555, 1);
if(fVar8 > 0f && floor(fVar8) < floor(Global_113810.f_10197.f_3853)){
func_11(13, floor(Global_113810.f_10197.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78689){
if(func_10()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113544=0;
}
if(!Global_63485){
func_4();
}}}}}

int func_10(){
return Global_32283;
}

int func_11(int iParam0, int iParam1){
int iVar0;
if(iParam0 < 0){
return 0;
}
if(iParam0 > 78){
return 0;
}
if(iParam1 <=0 || iParam1 > 100){
return 0;
}
iVar0=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > iVar0){
return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
}
return 0;
}


void func_12(int iParam0, int iParam1, int iParam2){
if(iParam2==-1){
iParam2=func_13();
}
STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, iParam2);
}

int func_13(){
return Global_1574918;
}

int func_14(int iParam0, int iParam1){
switch (iParam0){
case 0:
return 250;
break;
case 1:
return 226;
break;
case 2:
return 243;
break;
case 3:
return 256;
break;
case 4:
return 259;
break;
case 5:
if(iParam1==1){
return 281;
}
if(iParam1==2){
return 282;
}
break;
case 6:
return 265;
break;
case 7:
return 218;
break;
case 9:
if(iParam1==1){
return 271;
}
if(iParam1==2){
return 272;
}
if(iParam1==3){
return 273;
}
if(iParam1==4){
return 274;
}
if(iParam1==5){
return 275;
}
if(iParam1==6){
return 276;
}
if(iParam1==7){
return 277;
}
if(iParam1==8){
return 278;
}
if(iParam1==9){
return 279;
}
if(iParam1==10){
return 280;
}
break;
case 10:
return 219;
break;
case 11:
if(iParam1==1){
return 246;
}
if(iParam1==2){
return 247;
}
if(iParam1==3){
return 248;
}
if(iParam1==4){
return 249;
}
break;
case 12:
return 254;
break;
case 13:
if(iParam1==1){
return 260;
}
if(iParam1==2){
return 261;
}
if(iParam1==3){
return 262;
}
if(iParam1==4){
return 264;
}
break;
case 14:
return 283;
break;
case 15:
if(iParam1==1){
return 224;
}
if(iParam1==2){
return 225;
}
break;
case 16:
return 252;
break;
case 17:
if(iParam1==1){
return 244;
}
if(iParam1==2){
return 245;
}
break;
case 18:
return 253;
break;
case 19:
return 215;
break;
case 20:
return 216;
break;
case 21:
return 251;
break;
case 22:
if(iParam1==1){
return 221;
}
if(iParam1==2){
return 222;
}
break;
case 23:
if(iParam1==1){
return 213;
}
if(iParam1==2){
return 214;
}
break;
case 24:
return 242;
break;
case 25:
if(iParam1==1){
return 267;
}
if(iParam1==2){
return 268;
}
if(iParam1==3){
return 269;
}
break;
case 8:
return 255;
break;
case 26:
if(iParam1==1){
return 227;
}
if(iParam1==2){
return 228;
}
break;
case 27:
if(iParam1==1){
return 257;
}
if(iParam1==2){
return 258;
}
break;
case 28:
return 217;
break;
case 29:
if(iParam1==1){
return 229;
}
if(iParam1==2){
return 230;
}
if(iParam1==3){
return 231;
}
break;
case 30:
return 285;
break;
case 31:
return 318;
break;
case 32:
return 319;
break;
case 33:
return 320;
break;
}
return 322;
}

int func_15(int iParam0){
switch (iParam0){
case 29:
case 30:
case 2:
case 18:
return 0;
break;
}
return 1;
}


void func_16(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
}}


void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113810.f_20413.f_145 < 9){
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9=iParam5;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11=iParam6;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12=uParam2;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13=iParam7;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14=iParam8;
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10=-1;
}
Global_113810.f_20413.f_145++;
func_19();
}}


void func_19(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113810.f_20413.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113810.f_20413.f_145){
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 0)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0]){
Global_113810.f_20413.f_146[0]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 1)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1]){
Global_113810.f_20413.f_146[1]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113810.f_20413[iVar0 /*16*/].f_11, 2)){
if(Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2]){
Global_113810.f_20413.f_146[2]=Global_113810.f_20413[iVar0 /*16*/].f_12;
}}
iVar0++;
}}

int func_20(){
func_21();
switch (Global_113810.f_2366.f_539.f_4321){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 4;
break;
}
return 0;
}


void func_21(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_25(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_24(PLAYER::PLAYER_PED_ID());
if(func_23(iVar0) && (!func_22(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_23(Global_113810.f_2366.f_539.f_4321)){
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


bool func_22(int iParam0){
return Global_43377==iParam0;
}


bool func_23(int iParam0){
return iParam0 < 3;
}

int func_24(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(uParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_25(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_25(int iParam0){
if(func_23(iParam0)){
return func_26(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__26(int iParam0){
return Global_2058[iParam0 /*29*/];
}

int func_27(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113810.f_20413.f_150[iVar1], iVar0);
}
return 0;
}


void func_28(int iParam0, int iParam1){
MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}

int func_29(int iParam0){
int iVar0;
iVar0=1;
switch (iParam0){
case 1:
iVar0=5;
break;
case 5:
iVar0=2;
break;
case 9:
iVar0=10;
break;
case 11:
iVar0=4;
break;
case 13:
iVar0=4;
break;
case 15:
iVar0=2;
break;
case 17:
iVar0=2;
break;
case 22:
iVar0=2;
break;
case 23:
iVar0=2;
break;
case 25:
iVar0=3;
break;
case 26:
iVar0=2;
break;
case 27:
iVar0=2;
break;
case 29:
iVar0=3;
break;
}
return iVar0;
}

int func_30(){
struct<16> Var0;
var uVar1;
StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
uVar1=func_31(Var0);
return uVar1;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15){
switch (MISC::GET_HASH_KEY(&cParam0)){
case joaat("re_abandonedcar"):
return 23;
break;
case joaat("re_accident"):
return 0;
break;
case joaat("re_arrests"):
return 15;
break;
case joaat("re_atmrobbery"):
return 1;
break;
case joaat("re_bikethief"):
return 26;
break;
case joaat("re_border"):
return 29;
break;
case joaat("re_burials"):
return 24;
break;
case joaat("re_bus_tours"):
return 2;
break;
case joaat("re_cartheft"):
return 17;
break;
case joaat("re_chasethieves"):
return 11;
break;
case joaat("re_crashrescue"):
return 16;
break;
case joaat("re_cultshootout"):
return 18;
break;
case joaat("re_dealgonewrong"):
return 12;
break;
case joaat("re_domestic"):
return 3;
break;
case joaat("re_drunkdriver"):
return 27;
break;
case joaat("re_gang_intimidation"):
return 20;
break;
case joaat("re_gangfight"):
return 19;
break;
case joaat("re_getaway_driver"):
return 4;
break;
case joaat("re_hitch_lift"):
return 13;
break;
case joaat("re_homeland_security"):
return 28;
break;
case joaat("re_lured"):
return 7;
break;
case joaat("re_muggings"):
return 25;
break;
case joaat("re_paparazzi"):
return 10;
break;
case joaat("re_prisonerlift"):
return 22;
break;
case joaat("re_prisonvanbreak"):
return 21;
break;
case joaat("re_securityvan"):
return 9;
break;
case joaat("re_shoprobbery"):
return 5;
break;
case joaat("re_snatched"):
return 6;
break;
case joaat("re_stag_do"):
return 14;
break;
case joaat("re_yetarian"):
return 30;
break;
case joaat("re_duel"):
return 31;
break;
case joaat("re_seaplane"):
return 32;
break;
case joaat("re_monkey"):
return 33;
break;
}
return -1;
}


void func_32(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
if(!func_38(iParam0)){
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
func_33(iParam0, &(Global_113810.f_32752.f_5510));
}


void func_33(int iParam0, var uParam1){
int iVar0;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
func_37(uParam1);
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
if(uParam1->f_65==-1 && !func_36(uParam1->f_66)){
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
func_35(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
iVar0=0;
while (iVar0 <=11){
if(VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1)){
MISC::SET_BIT(&(uParam1->f_77), func_34(iVar0 + 1));
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

int func_34(int iParam0){
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

int func_35(int iParam0, var uParam1, var uParam2){
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

int func_36(int iParam0){
switch (iParam0){
case joaat("granger"):
case joaat("visione"):
return 1;
default:
}
return 0;
}


void func_37(var uParam0){
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

int func_38(int iParam0){
if((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_57(iParam0, 0, 0)) || func_57(iParam0, 1, 0)) || func_57(iParam0, 2, 0)) || func_56(iParam0) !=145) || func_55(iParam0)) || func_54(iParam0)) || func_53(iParam0)) || func_52(iParam0)) || !func_39(ENTITY::GET_ENTITY_MODEL(iParam0))){
if(func_54(iParam0)){
}
if(func_54(iParam0)){
}
if(func_57(iParam0, 0, 0)){
}
if(func_57(iParam0, 1, 0)){
}
if(func_57(iParam0, 2, 0)){
}
if(func_56(iParam0) !=145){
}
return 0;
}
return 1;
}

int func_39(int iParam0){
if(iParam0==0){
return 0;
}
if(!func_40(iParam0, 0, -1)){
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

int func_40(int iParam0, bool bParam1, int iParam2){
int iVar0;
struct<2> Var1;
if(iParam0==0){
return 0;
}
if(!STREAMING::IS_MODEL_A_VEHICLE(iParam0)){
return 0;
}
if(((((iParam0==joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0==joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0==joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0==joaat("blimp2")) || (iParam0==joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())){
if(!func_51()){
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
if((((!func_50() && !func_49()) && !func_48()) && !func_47()) && !func_51()){
return 0;
}}
if((iParam0==joaat("hotknife") || iParam0==joaat("carbonrs")) || iParam0==joaat("khamelion")){
if((func_46() || MISC::IS_PC_VERSION()) || func_45()){
}elseif(!func_48()){
return 0;
}}
if(bParam1){
if(!func_43(iParam0, iParam2)){
return 0;
}}
if(!func_41(iParam0)){
return 0;
}
return 1;
}

int func_41(int iParam0){
int iVar0;
var uVar1;
char cVar2[64];
if(!func_42()){
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

int func_42(){
if(MISC::IS_PC_VERSION()){
return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
}
return 0;
}

int func_43(int iParam0, int iParam1){
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
}}elseif(iParam0==func_44(1)){
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

int func_44(bool bParam0){
if(bParam0){
return -426933872;
}
return joaat("avenger");
}


var func__45(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


var func__46(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_47(){
return 0;
}

int func_48(){
return 1;
}

int func_49(){
return 1;
}

int func_50(){
if(DLC::IS_DLC_PRESENT(-1226939934)){
return 1;
}
return 0;
}

int func_51(){
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
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, 0);
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

int func_52(int iParam0){
int iVar0;
var uVar1;
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
uVar1=VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
if(iVar0==joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G ")){
return 1;
}
if(!func_40(iVar0, 0, -1)){
return 1;
}
return 0;
}

int func_53(int iParam0){
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

int func_54(int iParam0){
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

int func_55(int iParam0){
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

int func_56(int iParam0){
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

int func_57(int iParam0, int iParam1, bool bParam2){
int iVar0;
char* sVar1;
int iVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)){
return 0;
}
iVar0=0;
while (func_58(iParam1, iVar0, &sVar1, &iVar2)){
if(!bParam2 || MISC::IS_BIT_SET(Global_113810.f_7232[iVar2], 0)){
if(VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0)){
return 1;
}}
iVar0++;
}
return 0;
}

int func_58(int iParam0, int iParam1, char* sParam2, var uParam3){
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


void func_59(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_61(iParam0, 0)){
func_60(iParam0, 1, 0);
func_60(iParam0, 2, 0);
func_60(iParam0, 3, 0);
func_60(iParam0, 4, 0);
func_60(iParam0, 0, 1);
Global_77479[iParam0]=1;
}}else{
func_60(iParam0, 0, 0);
}}


void func_60(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
}}

int func_61(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113810.f_32752[iParam0], iParam1);
}


void func_62(){
struct<3> Var0;
struct<3> Var1;
struct<3> Var2;
struct<3> Var3;
struct<3> Var4;
var uVar5;
var uVar6;
var uVar7;
var uVar8;
int iVar9;
switch (iLocal_44){
case 0:
func_113();
func_112(13);
STREAMING::REQUEST_MODEL(iLocal_73);
iLocal_44=1;
break;
case 1:
switch (iLocal_63){
case 0:
if(STREAMING::HAS_MODEL_LOADED(iLocal_73)){
func_108(0, Local_47, -1f, 1);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_73);
STREAMING::REQUEST_MODEL(iLocal_74);
STREAMING::REQUEST_MODEL(iLocal_77);
STREAMING::REQUEST_MODEL(iLocal_75);
func_98(1);
iLocal_63++;
}
break;
case 1:
if((STREAMING::HAS_MODEL_LOADED(iLocal_74) && STREAMING::HAS_MODEL_LOADED(iLocal_77)) && STREAMING::HAS_MODEL_LOADED(iLocal_75)){
func_112(9);
iLocal_63++;
}
break;
case 2:
if((func_229(Local_46[3 /*4*/]) && func_229(Local_45[0 /*5*/])) && func_97()){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_46[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) 
};
if(Var0.f_0 <=0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, 0, 1, 0)){
if((((func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[3 /*4*/], 0f, 20f, 0f), 2.25f)){
func_91(3, 0, 4, 1);
iLocal_63=4;
}
}}
if(((!func_156(8) && func_229(Local_46[4 /*4*/])) && func_229(Local_45[1 /*5*/])) && func_97()){
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_46[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) 
};
if(Var0.f_0 >=0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, 0, 1, 0)){
if((((func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[4 /*4*/], 0f, 15f, 0f), 2f)) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_96(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[4 /*4*/], 0f, 20f, 0f), 2.5f)){
func_91(4, 1, 3, 0);
iLocal_63=4;
}
}}
if(!func_156(8) && func_89()){
func_112(6);
if(func_229(Local_45[0 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[0 /*5*/], 0);
TASK::TASK_COMBAT_PED(Local_45[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_45[0 /*5*/].f_3=3;
}
if(func_229(Local_45[1 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[1 /*5*/], 0);
TASK::TASK_COMBAT_PED(Local_45[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_45[1 /*5*/].f_3=3;
}
if(func_229(Local_46[3 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[3 /*4*/], 1);
}
if(func_229(Local_46[4 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[4 /*4*/], 1);
}
iLocal_63++;
}
break;
case 3:
if((!func_229(Local_45[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_45[0 /*5*/].f_1)) && (!func_229(Local_45[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_45[1 /*5*/].f_1))){
iLocal_63++;
}
break;
case 4:
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_79);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_79, joaat("player"));
if(func_229(Local_46[3 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[3 /*4*/], 1);
}
if(func_229(Local_46[4 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[4 /*4*/], 1);
}
STREAMING::REQUEST_MODEL(iLocal_76);
settimera(0);
iLocal_63++;
break;
case 5:
if(STREAMING::HAS_MODEL_LOADED(iLocal_76)){
STREAMING::REQUEST_MODEL(iLocal_77);
iLocal_63++;
}
break;
case 6:
if(STREAMING::HAS_MODEL_LOADED(iLocal_77)){
STREAMING::REQUEST_MODEL(iLocal_78);
iLocal_63++;
}
break;
case 7:
if((STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_77)) && STREAMING::HAS_MODEL_LOADED(iLocal_78)){
func_108(5, Local_47, -1082130432, 0);
func_108(6, Local_47, -1082130432, 0);
func_108(7, Local_47, -1082130432, 0);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
func_84(2, 0, Local_47, -1082130432);
func_84(3, 0, Local_47, -1082130432);
func_84(4, 0, Local_47, -1082130432);
func_84(5, 0, Local_47, -1082130432);
func_84(6, 0, Local_47, -1082130432);
func_84(7, 0, Local_47, -1082130432);
if(func_156(10) && func_156(11)){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
}
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_78);
iLocal_63++;
}
break;
case 8:
if(!func_229(Local_45[0 /*5*/]) && !func_229(Local_45[1 /*5*/])){
if(timera() < 16000){
settimera(16000);
}}
if(timera() > 20000 && func_83(PLAYER::PLAYER_PED_ID(), Local_49, 1) >=150f){
iLocal_63++;
}
break;
case 9:
if(func_97() || (func_229(Local_46[0 /*4*/]) && func_82(PLAYER::PLAYER_PED_ID(), Local_46[0 /*4*/], 1) <=35f)){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
uVar5=MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
if(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var1, uVar5, &Var2, 1, 5f, 0)){
PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var2, &uVar7, &uVar8);
if(((uVar8 & 4==0 && (!func_81() || uVar8 & 8==0)) && (func_80() || uVar8 & 1==0)) && !func_79(Var2, 1084227584)){
uVar6=func_78(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
Var3={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, uVar6, 6f, -6f, 0f) 
};
Var4={
OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, uVar6, -6f, -6f, 0f) 
};
if((((!CAM::IS_SPHERE_VISIBLE(Var2, 7f) && !CAM::IS_SPHERE_VISIBLE(Var3, 7f)) && !CAM::IS_SPHERE_VISIBLE(Var4, 7f)) && !func_79(Var3, 1084227584)) && !func_79(Var4, 1084227584)){
func_77(Local_46[5 /*4*/], Var2);
func_77(Local_46[6 /*4*/], Var3);
func_77(Local_46[7 /*4*/], Var4);
iLocal_57=MISC::GET_GAME_TIMER();
iVar9=2;
while (iVar9 <=7){
if(func_229(Local_45[iVar9 /*5*/])){
Local_45[iVar9 /*5*/].f_1=func_74(Local_45[iVar9 /*5*/], 1, 145);
if(PED::IS_PED_IN_ANY_VEHICLE(Local_45[iVar9 /*5*/], 0)){
if(func_73(Local_45[iVar9 /*5*/], 0)==-1){
HUD::SET_BLIP_SCALE(Local_45[iVar9 /*5*/].f_1, 1f);
}else{
HUD::SET_BLIP_ALPHA(Local_45[iVar9 /*5*/].f_1, 0);
HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_45[iVar9 /*5*/].f_1, 1);
}}
}
iVar9++;
}
func_112(2);
func_112(7);
iLocal_67=(MISC::GET_GAME_TIMER() + 60000);
func_72(6);
iLocal_63++;
}}
}}
break;
case 10:
if(((((func_229(Local_45[2 /*5*/]) || func_229(Local_45[3 /*5*/])) || func_229(Local_45[4 /*5*/])) || func_229(Local_45[5 /*5*/])) || func_229(Local_45[6 /*5*/])) || func_229(Local_45[7 /*5*/])){
if(func_156(7)){
if(func_229(Local_46[5 /*4*/])){
func_65(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_58);
}
if(func_229(Local_46[6 /*4*/])){
func_65(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_59);
}
if(func_229(Local_46[7 /*4*/])){
func_65(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_60);
}
}}elseif(!func_229(Local_45[0 /*5*/]) && !func_229(Local_45[1 /*5*/])){
if(func_229(Local_46[0 /*4*/])){
iLocal_44=2;
}
else{
func_64();
}}
break;
}
break;
case 2:
func_63(1);
break;
}}


void func_63(int iParam0){
iLocal_63=0;
iLocal_44=0;
iLocal_43=iParam0;
}


void func_64(){
if(func_229(Local_46[0 /*4*/])){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[0 /*4*/], 2);
}
func_202(1, 0);
}


void func_65(int iParam0, int iParam1, var uParam2){
float fVar0;
float fVar1;
int iVar2;
if(VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iParam0 /*4*/], 0)){
if((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_46[iParam0 /*4*/] !=iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_71(Local_46[iParam0 /*4*/])){
if(iParam0==3 || iParam0==4){
fVar0=50f;
fVar1=35f;
iVar2=1500;
}else{
fVar0=75f;
fVar1=50f;
iVar2=3000;
}
if(func_83(iParam1, Local_53, 1) >=fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)){
Local_55={
Local_53 
};
uLocal_56=uLocal_54;
Local_53={
ENTITY::GET_ENTITY_COORDS(iParam1, 1) 
};
uLocal_54=ENTITY::GET_ENTITY_HEADING(iParam1);
}
if(!ENTITY::IS_ENTITY_OCCLUDED(Local_46[iParam0 /*4*/])){
*uParam2=MISC::GET_GAME_TIMER();
}elseif(((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_57) > 1500) && func_82(Local_46[iParam0 /*4*/], iParam1, 1) > func_83(iParam1, Local_55, 1)) && func_70(iParam0)) && func_83(iParam1, Local_55, 1) >=fVar0) && func_82(Local_46[iParam0 /*4*/], iParam1, 1) >=fVar1) && func_69(Local_46[iParam0 /*4*/], Local_55, 1153138688)) && func_68(Local_46[iParam0 /*4*/], iParam1, Local_55)) && !func_67(Local_55)) && !CAM::IS_SPHERE_VISIBLE(Local_55, 4f)) && !func_79(Local_55, 1084227584)){
MISC::CLEAR_AREA_OF_PEDS(Local_55, 1.5f, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Local_55, 5f, 0, 0, 0, 0, 0, 0, 0);
if(iParam0==3 || iParam0==4){
VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_46[iParam0 /*4*/]);
if(iParam0==3){
func_66(0, 3);
}else{
func_66(1, 3);
}}
ENTITY::SET_ENTITY_COORDS(Local_46[iParam0 /*4*/], Local_55, 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_46[iParam0 /*4*/], 1084227584);
ENTITY::SET_ENTITY_HEADING(Local_46[iParam0 /*4*/], uLocal_56);
VEHICLE::SET_VEHICLE_ENGINE_ON(Local_46[iParam0 /*4*/], 1, 1, 0);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_46[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
*uParam2=MISC::GET_GAME_TIMER();
Local_46[iParam0 /*4*/].f_2=MISC::GET_GAME_TIMER();
iLocal_57=MISC::GET_GAME_TIMER();
}}else{
*uParam2=MISC::GET_GAME_TIMER();
}}}


void func_66(int iParam0, int iParam1){
MISC::SET_BIT(&(Local_45[iParam0 /*5*/].f_2), iParam1);
}

int func_67(struct<3> Param0){
if((Param0.f_0==0f && Param0.f_1==0f) && Param0.f_2==0f){
return 1;
}
return 0;
}

int func_68(int iParam0, int iParam1, struct<3> Param2){
struct<3> Var0;
struct<3> Var1;
Var0={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) 
};
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, Param2) 
};
if((Var0.f_1 > 0f && Var1.f_1 > 0f) || (Var0.f_1 < 0f && Var1.f_1 < 0f)){
return 1;
}
if(iParam0==Local_46[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_45[0 /*5*/].f_1)){
return 1;
}
if(iParam0==Local_46[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_45[1 /*5*/].f_1)){
return 1;
}
return 0;
}

int func_69(int iParam0, struct<3> Param1, float fParam2){
if(func_83(iParam0, Param1, 1) <=fParam2){
return 1;
}
if(iParam0==Local_46[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_45[0 /*5*/].f_1)){
return 1;
}
if(iParam0==Local_46[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_45[1 /*5*/].f_1)){
return 1;
}
return 0;
}

int func_70(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
float fVar5;
int iVar6;
if(func_156(6)){
iVar0=3;
}else{
iVar0=5;
}
if(func_156(7)){
iVar1=7;
}elseif(func_156(6)){
iVar1=4;
}else{
iVar1=5;
}
iVar3=-1;
fVar5=-1f;
iVar2=iVar0;
while (iVar2 <=iVar1){
if(func_229(Local_46[iVar2 /*4*/])){
if(IntToFloat(iVar3)==-1f || (MISC::GET_GAME_TIMER() - Local_46[iVar2 /*4*/].f_2) > iVar3){
iVar3=(MISC::GET_GAME_TIMER() - Local_46[iVar2 /*4*/].f_2);
iVar4=iVar2;
}
if(fVar5==-1f || func_82(Local_46[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5){
fVar5=func_82(Local_46[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
iVar6=iVar2;
}}
iVar2++;
}
if(iParam0==iVar4 || iParam0==iVar6){
return 1;
}
return 0;
}

int func_71(int iParam0){
var uVar0;
if(func_229(uParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0, -1, 0)){
uVar0=VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
if(func_229(uVar0)){
return 1;
}}
return 0;
}


void func_72(int iParam0){
MISC::CLEAR_BIT(&iLocal_64, iParam0);
}

int func_73(int iParam0, int iParam1){
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


var func__74(var uParam0, bool bParam1, int iParam2){
var uVar0;
uVar0=func_75(uParam0, !bParam1, 0);
if((iParam2 !=145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3))){
HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_2058[iParam2 /*29*/].f_3));
}
return uVar0;
}

int func_75(int iParam0, bool bParam1, bool bParam2){
var uVar0;
if(!ENTITY::DOES_ENTITY_EXIST(uParam0)){
return 0;
}
uVar0=HUD::ADD_BLIP_FOR_ENTITY(iParam0);
if(ENTITY::IS_ENTITY_A_VEHICLE(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
if(!bParam2){
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}else{
HUD::SET_BLIP_COLOUR(uVar0, 2);
}}elseif(ENTITY::IS_ENTITY_A_PED(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
}elseif(ENTITY::IS_ENTITY_AN_OBJECT(iParam0)){
HUD::SET_BLIP_SCALE(uVar0, func_76(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
}
return uVar0;
}


float func_76(bool bParam0, float fParam1, float fParam2){
if(bParam0){
return fParam1;
}
return fParam2;
}


void func_77(int iParam0, struct<3> Param1){
if(func_229(iParam0)){
ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
MISC::CLEAR_AREA_OF_PEDS(Param1, 1.5f, 0);
MISC::CLEAR_AREA_OF_VEHICLES(Param1, 3f, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
ENTITY::SET_ENTITY_HEADING(iParam0, func_78(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
if(func_229(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0))){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0), PLAYER::PLAYER_PED_ID());
}else{
TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
}}
VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
}}


var func__78(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3){
return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

int func_79(struct<3> Param0, float fParam1){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
while (iVar1 < 8){
if(ENTITY::DOES_ENTITY_EXIST(Local_46[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_46[iVar1 /*4*/], Param0, fParam1, fParam1, fParam1, 0, 1, 0)){
iVar0=1;
}
iVar1++;
}
return iVar0;
}

int func_80(){
struct<3> Var0;
var uVar1;
var uVar2;
if(PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Var0, 1, 1077936128, 0)){
if(PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar2, &uVar1)){
return uVar1 & 1==1;
}}
return 0;
}

int func_81(){
struct<3> Var0;
var uVar1;
var uVar2;
if(PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Var0, 1, 1077936128, 0)){
if(PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar2, &uVar1)){
return uVar1 & 8==0;
}}
return 0;
}


float func_82(int iParam0, int iParam1, int iParam2){
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


float func_83(int iParam0, struct<3> Param1, int iParam2){
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

int func_84(int iParam0, bool bParam1, struct<3> Param2, float fParam3){
struct<3> Var0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
var uVar6;
struct<3> Var7;
struct<3> Var8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
float fVar20;
int iVar21;
int iVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
bool bVar27;
int iVar28;
int iVar29;
int iVar30;
int iVar31;
int iVar32;
int iVar33;
bool bVar34;
int iVar35;
int iVar36;
int iVar37;
int iVar38;
int iVar39;
int iVar40;
int iVar41;
bool bVar42;
bool bVar43;
int iVar44;
int iVar45;
int iVar46;
int iVar47;
bool bVar48;
int iVar49;
int iVar50;
bool bVar51;
int iVar52;
int iVar53;
bool bVar54;
int iVar55;
int iVar56;
int iVar57;
bool bVar58;
bool bVar59;
int iVar60;
bool bVar61;
int iVar62;
bool bVar63;
bool bVar64;
char* sVar65;
if(!ENTITY::DOES_ENTITY_EXIST(Local_45[iParam0 /*5*/])){
iVar3=joaat("weapon_unarmed");
iVar4=0;
iVar5=-1;
Var7={
Local_47 
};
Var8={
Local_47 
};
iVar9=0;
iVar10=1;
iVar11=0;
iVar12=0;
iVar13=10;
fVar14=0f;
fVar15=0f;
fVar16=60f;
fVar17=5f;
fVar18=120f;
fVar19=-90f;
fVar20=90f;
iVar21=iLocal_79;
iVar22=1;
iVar23=1;
iVar24=0;
iVar25=1;
iVar26=1;
bVar27=true;
iVar28=0;
iVar29=1;
iVar30=0;
iVar31=1;
iVar32=1;
iVar33=0;
bVar34=false;
iVar35=1;
iVar36=0;
iVar37=1;
iVar38=1;
iVar39=0;
iVar40=1;
iVar41=1;
bVar42=true;
bVar43=false;
iVar44=0;
iVar45=0;
iVar46=0;
iVar47=0;
bVar48=false;
iVar49=1;
iVar50=0;
bVar51=false;
iVar52=0;
iVar53=1;
bVar54=true;
iVar55=0;
iVar56=0;
iVar57=0;
bVar58=false;
bVar59=false;
iVar60=0;
bVar61=false;
iVar62=1;
bVar63=true;
bVar64=false;
switch (iParam0){
case 0:
iVar2=iLocal_77;
iVar4=Local_46[3 /*4*/];
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
iVar28=1;
bVar64=true;
break;
case 1:
iVar2=iLocal_77;
iVar4=Local_46[4 /*4*/];
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
iVar28=1;
bVar64=true;
break;
case 2:
iVar2=iLocal_78;
iVar4=Local_46[5 /*4*/];
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
break;
case 3:
iVar2=iLocal_77;
iVar4=Local_46[5 /*4*/];
iVar5=0;
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
break;
case 4:
iVar2=iLocal_77;
iVar4=Local_46[6 /*4*/];
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
break;
case 5:
iVar2=iLocal_78;
iVar4=Local_46[6 /*4*/];
iVar5=0;
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
break;
case 6:
iVar2=iLocal_78;
iVar4=Local_46[7 /*4*/];
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
break;
case 7:
iVar2=iLocal_78;
iVar4=Local_46[7 /*4*/];
iVar5=0;
iVar3=joaat("weapon_pistol");
iVar30=1;
bVar27=false;
break;
default:
break;
}
if(!STREAMING::HAS_MODEL_LOADED(iVar2)){
return 0;
}
if(!func_88(Param2, Local_47, 0)){
if(!ENTITY::DOES_ENTITY_EXIST(uVar6)){
Var0={
Param2 
};
}else{
Var7={
Param2 
};
}}
if(fParam3 !=-1f){
fVar1=fParam3;
}
if(func_229(iVar4)){
Local_45[iParam0 /*5*/]=PED::CREATE_PED_INSIDE_VEHICLE(iVar4, 26, iVar2, iVar5, 1, 1);
}else{
Local_45[iParam0 /*5*/]=PED::CREATE_PED(26, iVar2, Var0, fVar1, 1, 1);
ENTITY::SET_ENTITY_COLLISION(Local_45[iParam0 /*5*/], iVar35, 0);
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_45[iParam0 /*5*/], !bVar59, 0);
}
if(bVar34){
ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_45[iParam0 /*5*/], Var0, 0, 0, 1);
}
if(bParam1){
if(iVar21==iLocal_79){
Local_45[iParam0 /*5*/].f_1=func_74(Local_45[iParam0 /*5*/], 1, 145);
}else{
Local_45[iParam0 /*5*/].f_1=func_74(Local_45[iParam0 /*5*/], 0, 145);
}}
WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_45[iParam0 /*5*/], iVar53);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 213, iVar22);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 212, iVar23);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[iParam0 /*5*/], iVar24);
PED::SET_PED_KEEP_TASK(Local_45[iParam0 /*5*/], iVar25);
PED::SET_PED_DIES_WHEN_INJURED(Local_45[iParam0 /*5*/], iVar26);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 188, iVar49);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 42, !bVar27);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 9, iVar29);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 3, iVar31);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 342, bVar51);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_45[iParam0 /*5*/], iVar30, 1);
PED::SET_PED_ARMOUR(Local_45[iParam0 /*5*/], iVar12);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 8, iVar33);
ENTITY::SET_ENTITY_VISIBLE(Local_45[iParam0 /*5*/], iVar32, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Local_45[iParam0 /*5*/], iVar36);
WEAPON::GIVE_WEAPON_TO_PED(Local_45[iParam0 /*5*/], iVar3, -1, iVar28, iVar28);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 2, iVar37);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 1, iVar38);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 52, iVar39);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 13, iVar62);
PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_45[iParam0 /*5*/], iVar40);
PED::SET_PED_CAN_BE_TARGETTED(Local_45[iParam0 /*5*/], iVar41);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 118, bVar42);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 115, bVar43);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 12, iVar44);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 36, iVar45);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 35, iVar46);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 29, iVar47);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 185, bVar48);
PED::SET_PED_TO_LOAD_COVER(Local_45[iParam0 /*5*/], iVar50);
PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam0 /*5*/], 17, iVar56);
AUDIO::DISABLE_PED_PAIN_AUDIO(Local_45[iParam0 /*5*/], iVar57);
AUDIO::STOP_PED_SPEAKING(Local_45[iParam0 /*5*/], iVar52);
func_87(Local_45[iParam0 /*5*/], fVar16, fVar17, fVar18, fVar19, fVar20, 1101004800, 1125515264);
ENTITY::FREEZE_ENTITY_POSITION(Local_45[iParam0 /*5*/], iVar60);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 203, bVar61);
PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_45[iParam0 /*5*/], !bVar61);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 366, bVar63);
PED::SET_PED_CONFIG_FLAG(Local_45[iParam0 /*5*/], 134, bVar64);
if(!bVar54){
func_66(iParam0, 2);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar65)){
TASK::TASK_START_SCENARIO_IN_PLACE(Local_45[iParam0 /*5*/], sVar65, -1, 0);
}
if(iVar11 > 0){
if(iVar11 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_45[iParam0 /*5*/]) || iVar55){
ENTITY::SET_ENTITY_MAX_HEALTH(Local_45[iParam0 /*5*/], iVar11);
}
ENTITY::SET_ENTITY_HEALTH(Local_45[iParam0 /*5*/], iVar11, 0);
}
if(iVar13 > 0){
PED::SET_PED_ACCURACY(Local_45[iParam0 /*5*/], iVar13);
}
if(fVar14 > 0f || fVar15 > 0f){
WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_45[iParam0 /*5*/], fVar14, fVar15);
}
PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[iParam0 /*5*/], iVar21);
if(ENTITY::DOES_ENTITY_EXIST(iVar6)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_45[iParam0 /*5*/], iVar6, -1, Var7, Var8, 1, 1, 1, 0, 2, 1, 0);
PED::SET_PED_CAN_RAGDOLL(Local_45[iParam0 /*5*/], 0);
func_66(iParam0, 1);
}
func_86(iParam0);
func_85(iParam0);
if(iVar9 !=0){
WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_45[iParam0 /*5*/], iVar3, iVar9);
WEAPON::SET_CURRENT_PED_WEAPON(Local_45[iParam0 /*5*/], iVar3, 1);
}
PED::SET_PED_COMBAT_ABILITY(Local_45[iParam0 /*5*/], iVar10);
if(bVar58){
PED::SET_PED_STEALTH_MOVEMENT(Local_45[iParam0 /*5*/], 1, "DEFAULT_ACTION");
}
return 1;
}
return 0;
}


void func_85(int iParam0){
if(func_229(Local_45[iParam0 /*5*/])){
switch (iParam0){
case 2:
break;
}}}


void func_86(int iParam0){
if(func_229(Local_45[iParam0 /*5*/])){
switch (iParam0){
case 0:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 0, 0);
break;
case 1:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 1, 1, 0);
break;
case 2:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 0, 0);
break;
case 3:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 2, 0);
break;
case 4:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 2, 0);
break;
case 5:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 1, 0);
break;
case 6:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 1, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 2, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 1, 0);
break;
case 7:
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 0, 0, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 2, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 3, 1, 2, 0);
PED::SET_PED_COMPONENT_VARIATION(Local_45[iParam0 /*5*/], 4, 0, 0, 0);
break;
}}}


void func_87(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7){
if(!PED::IS_PED_INJURED(uParam0)){
PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
PED::SET_PED_ID_RANGE(iParam0, iParam6);
PED::SET_COMBAT_FLOAT(iParam0, 10, iParam7);
}}


bool func_88(struct<3> Param0, struct<3> Param1, bool bParam2){
if(bParam2){
return (Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1);
}
return ((Param0.f_0==Param1.f_0 && Param0.f_1==Param1.f_1) && Param0.f_2==Param1.f_2);
}

int func_89(){
int iVar0;
int iVar1;
var uVar2;
if((func_229(Local_45[0 /*5*/]) && func_82(PLAYER::PLAYER_PED_ID(), Local_45[0 /*5*/], 1) >=200f) && (func_229(Local_45[1 /*5*/]) && func_82(PLAYER::PLAYER_PED_ID(), Local_45[1 /*5*/], 1) >=200f)){
return 1;
}
if((func_156(10) && !func_229(Local_45[0 /*5*/])) || (func_156(11) && !func_229(Local_45[1 /*5*/]))){
return 1;
}
if((func_229(Local_45[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_45[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_45[0 /*5*/], 0))) || (func_229(Local_45[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_45[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_45[1 /*5*/], 0)))){
return 1;
}
if((func_229(Local_46[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_46[1 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) || (func_229(Local_46[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_46[2 /*4*/], PLAYER::PLAYER_PED_ID(), 1))){
return 1;
}
if(func_90(Local_46[3 /*4*/]) || func_90(Local_46[4 /*4*/])){
return 1;
}
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(func_229(iVar0)){
fLocal_72=ENTITY::GET_ENTITY_SPEED(iVar0);
}else{
fLocal_72=0f;
}
if(PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID())){
uVar2=PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
iVar1=uVar2;
if((iVar1==Local_46[3 /*4*/] && func_229(Local_45[0 /*5*/])) || (iVar1==Local_46[4 /*4*/] && func_229(Local_45[1 /*5*/]))){
return 1;
}}
return 0;
}

int func_90(int iParam0){
int iVar0;
float fVar1;
iVar0=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(((func_229(iParam0) && func_229(iVar0)) && fLocal_72 !=0f) && fLocal_72 >=9f){
fVar1=ENTITY::GET_ENTITY_SPEED(iVar0);
if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <=(fLocal_72 * 0.5f)){
return 1;
}}
return 0;
}


void func_91(int iParam0, int iParam1, int iParam2, int iParam3){
func_112(8);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_46[iParam0 /*4*/], 5f);
Local_45[iParam1 /*5*/].f_1=func_74(Local_45[iParam1 /*5*/], 1, 145);
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[iParam1 /*5*/], 1);
func_95();
TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_46[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_46[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
func_94(Local_45[iParam1 /*5*/]);
func_92(Local_45[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
Local_45[iParam1 /*5*/].f_3=3;
if(func_229(Local_46[iParam2 /*4*/])){
if(iParam0==3){
Local_52={
1031.986f, 2693.441f, 38.6861f 
};
}else{
Local_52={
1027.001f, 2686.89f, 37.8987f 
};
}
iLocal_69=MISC::GET_GAME_TIMER() + 1000;
if(func_229(Local_45[iParam3 /*5*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[iParam3 /*5*/], 1);
TASK::TASK_VEHICLE_MISSION(Local_45[iParam3 /*5*/], Local_46[iParam2 /*4*/], Local_46[0 /*4*/], 2, 30f, 262144, -1f, -1f, 1);
}
Local_45[iParam3 /*5*/].f_3++;
}
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_79);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_79, joaat("player"));
}


void func_92(var uParam0, char* sParam1, int iParam2){
AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_93(iParam2), 1);
}

int func_93(int iParam0){
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


void func_94(var uParam0){
if(func_156(0)){
TASK::CLOSE_SEQUENCE_TASK(uLocal_80);
func_72(0);
}
TASK::TASK_PERFORM_SEQUENCE(uParam0, uLocal_80);
TASK::CLEAR_SEQUENCE_TASK(&uLocal_80);
}


void func_95(){
if(!func_156(0)){
TASK::CLEAR_SEQUENCE_TASK(&uLocal_80);
TASK::OPEN_SEQUENCE_TASK(&uLocal_80);
func_112(0);
}}

int func_96(struct<3> Param0, float fParam1){
float fVar0;
float fVar1;
struct<3> Var2;
struct<3> Var3;
fVar0=ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
fVar1=func_83(PLAYER::PLAYER_PED_ID(), Param0, 1);
Var2={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var3={
Var2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) 
};
if((fVar1 / fVar0) <=fParam1 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param0, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param0, 1)){
return 1;
}
return 0;
}


bool func_97(){
return (func_229(Local_46[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[0 /*4*/], 0));
}

int func_98(int iParam0){
if(func_102()){
Global_113800=1;
Global_113797=MISC::GET_GAME_TIMER();
if(func_15(Global_113799)){
func_99(0);
}
HUD::SET_MISSION_NAME(1, "RE_TITLE");
if(iParam0 && func_15(Global_113799)){
HUD::FLASH_MINIMAP_DISPLAY();
}
return 1;
}
return 0;
}


void func_99(int iParam0){
switch (iParam0){
case 0:
if(Global_113810.f_24998.f_2 < 3){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_100(func_101(iParam0), -1);
Global_113810.f_24998.f_2++;
MISC::SET_BIT(&Global_113806, 0);
}}
break;
case 1:
if(!MISC::IS_BIT_SET(Global_113806, 1)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_100(func_101(iParam0), -1);
Global_113810.f_24998.f_3++;
MISC::SET_BIT(&Global_113806, 1);
}}
break;
case 2:
if(!MISC::IS_BIT_SET(Global_113806, 2)){
if(!HUD::IS_HELP_MESSAGE_ON_SCREEN()){
func_100(func_101(iParam0), -1);
Global_113810.f_24998.f_4++;
MISC::SET_BIT(&Global_113806, 2);
}}
break;
}}


void func_100(var uParam0, int iParam1){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}


char* func_101(int iParam0){
char* sVar0;
sVar0="";
switch (iParam0){
case 0:
sVar0="AM_H_REFS";
break;
case 1:
sVar0="RE_FLASHBLIP";
break;
case 2:
sVar0="RE_HANDOVER";
break;
}
return sVar0;
}

int func_102(){
switch (func_103(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD())){
case 1:
return 1;
break;
case 0:
return 1;
break;
}
return 0;
}

int func_103(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
if(iParam1==7){
return 0;
}
if(!bParam3){
if(Global_98291.f_44==1){
return 2;
}}
if(iParam1==0){
if(func_107(0)){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
Global_23251.f_5=0;
if(iParam2 !=5){
PLAYER::FORCE_CLEANUP(8);
}
Global_43377=iParam2;
Global_43339=*uParam0;
Global_43340=iParam4;
Global_43338=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43338 > 0){
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
return 2;
}
iVar0++;
}}elseif(Global_43339==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!func_105(iParam2)){
return 0;
}
if(Global_43338==8){
return 0;
}
Global_43341++;
*uParam0=Global_43341;
Global_43344[Global_43338 /*4*/]=Global_43341;
Global_43344[Global_43338 /*4*/].f_1=iParam1;
Global_43344[Global_43338 /*4*/].f_2=iParam2;
Global_43344[Global_43338 /*4*/].f_3=0;
Global_43338++;
if(iParam4 !=0){
func_104(uParam0, iParam4);
}}
return 2;
}


void func_104(var uParam0, int iParam1){
int iVar0;
if(Global_43338==0){
return;
}
if(*uParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < Global_43338){
if(Global_43344[iVar0 /*4*/]==*uParam0){
Global_43344[iVar0 /*4*/].f_3=iParam1;
}
iVar0++;
}
*uParam0=-1;
}


bool func_105(int iParam0){
return func_106(iParam0, Global_43377);
}

int func_106(int iParam0, int iParam1){
if(iParam1==15){
return 1;
}
if(iParam0==15){
return 0;
}
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
break;
}
return 1;
break;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
break;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
break;
}
break;
case 4:
if(iParam1==17){
return 1;
}
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5){
return 1;
}
break;
case 7:
if(iParam1==6){
return 1;
}
break;
case 9:
if(iParam1==5){
return 1;
}
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
break;
}
break;
case 11:
if(iParam1==5){
return 1;
}
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
break;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
break;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
break;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
break;
}
break;
}
return 0;
}

int func_107(int iParam0){
if(Global_43377==15){
return 0;
}
if(func_105(iParam0)){
return 0;
}
return 1;
}

int func_108(int iParam0, struct<3> Param1, float fParam2, bool bParam3){
struct<3> Var0;
float fVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
bool bVar9;
bool bVar10;
int iVar11;
int iVar12;
int iVar13;
int iVar14;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
int iVar19;
bool bVar20;
float fVar21;
float fVar22;
float fVar23;
var uVar24;
struct<3> Var25;
struct<3> Var26;
char* sVar27;
if(!ENTITY::DOES_ENTITY_EXIST(Local_46[iParam0 /*4*/])){
iVar3=0;
iVar4=1;
iVar5=1;
iVar6=0;
iVar7=0;
iVar8=0;
bVar9=false;
bVar10=true;
iVar11=0;
iVar12=0;
iVar13=0;
iVar14=0;
iVar15=0;
iVar16=1;
iVar17=0;
iVar18=1;
iVar19=0;
bVar20=false;
fVar22=-1f;
fVar23=-1f;
switch (iParam0){
case 0:
Var0={
Local_49 
};
fVar1=89.7263f;
iVar2=iLocal_73;
bVar10=false;
iVar15=1;
iVar16=0;
iVar19=1;
iVar6=1;
iVar18=0;
iVar3=7;
break;
case 3:
Var0={
Local_50 
};
fVar1=175.3714f;
iVar2=iLocal_74;
iVar8=1;
iVar15=1;
iVar16=0;
sVar27="96NWO218";
iVar3=2;
break;
case 4:
Var0={
Local_51 
};
fVar1=171f;
iVar2=iLocal_74;
iVar8=1;
iVar15=1;
iVar16=0;
sVar27="01DTS039";
iVar3=2;
break;
case 1:
Var0={
930.46f, 2719.65f, 42.41f 
};
fVar1=180.53f;
iVar2=iLocal_75;
break;
case 2:
Var0={
1141.17f, 2711.97f, 40.04f 
};
fVar1=176.67f;
iVar2=iLocal_75;
break;
case 5:
Var0={
514.5844f, -649.9937f, 23.7512f 
};
fVar1=182.0097f;
iVar2=iLocal_76;
iVar7=1;
iVar8=1;
iVar18=0;
sVar27="18NJM316";
break;
case 6:
Var0={
507.3959f, -653.6174f, 23.7512f 
};
fVar1=177.8055f;
iVar2=iLocal_76;
iVar7=1;
iVar8=1;
iVar18=0;
sVar27="28HDT291";
break;
case 7:
Var0={
1200.547f, -1553.607f, 38.4019f 
};
fVar1=0.0001f;
iVar2=iLocal_76;
iVar7=1;
iVar8=1;
iVar18=0;
sVar27="23DJT162";
break;
default:
break;
}
if(!STREAMING::HAS_MODEL_LOADED(iVar2)){
return 0;
}
if(!func_88(Param1, Local_47, 0)){
Var0={
Param1 
};
}
if(fParam2 !=-1f){
fVar1=fParam2;
}
Local_46[iParam0 /*4*/]=VEHICLE::CREATE_VEHICLE(iVar2, Var0, fVar1, 1, 1, 0);
func_111(iParam0);
func_110(iParam0);
ENTITY::SET_ENTITY_VISIBLE(Local_46[iParam0 /*4*/], iVar5, 0);
if(ENTITY::DOES_ENTITY_EXIST(uVar24)){
ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_46[iParam0 /*4*/], iVar24, -1, Var25, Var26, 0, 0, 0, 0, 2, 1, 0);
}else{
ENTITY::SET_ENTITY_COLLISION(Local_46[iParam0 /*4*/], iVar4, 0);
}
VEHICLE::SET_VEHICLE_STRONG(Local_46[iParam0 /*4*/], iVar6);
ENTITY::FREEZE_ENTITY_POSITION(Local_46[iParam0 /*4*/], iVar7);
VEHICLE::SET_VEHICLE_ENGINE_ON(Local_46[iParam0 /*4*/], iVar8, 1, 0);
ENTITY::SET_ENTITY_INVINCIBLE(Local_46[iParam0 /*4*/], iVar11);
ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_46[iParam0 /*4*/], iVar12, 1);
VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_46[iParam0 /*4*/], iVar13);
VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Local_46[iParam0 /*4*/], iVar14);
VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_46[iParam0 /*4*/], iVar16, 0);
VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_46[iParam0 /*4*/], iVar15);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_46[iParam0 /*4*/], iVar17);
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_46[iParam0 /*4*/], iVar18);
VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_46[iParam0 /*4*/], iVar19);
ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_46[iParam0 /*4*/], !bVar20, 0);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sVar27)){
VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_46[iParam0 /*4*/], sVar27);
}
if(fVar21 > 0f){
VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_46[iParam0 /*4*/], fVar21);
}
if(bVar9){
VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_46[iParam0 /*4*/]);
}
if(fVar22 >=0f){
VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_46[iParam0 /*4*/], fVar22);
}
if(fVar23 >=0f){
VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_46[iParam0 /*4*/], fVar23);
}
if(iVar3 !=0){
VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[iParam0 /*4*/], iVar3);
}
if(bParam3){
Local_46[iParam0 /*4*/].f_1=func_109(Local_46[iParam0 /*4*/], bVar10, 0);
}}
return 1;
}

int func_109(var uParam0, bool bParam1, bool bParam2){
return func_75(uParam0, !bParam1, bParam2);
}


void func_110(int iParam0){
if(func_229(Local_46[iParam0 /*4*/])){
switch (iParam0){
case 5:
case 6:
case 7:
case 3:
case 4:
VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_46[iParam0 /*4*/], 15f);
break;
}}}


void func_111(int iParam0){
if(func_229(Local_46[iParam0 /*4*/])){
switch (iParam0){
case 5:
VEHICLE::SET_VEHICLE_COLOURS(Local_46[iParam0 /*4*/], 48, 48);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_46[iParam0 /*4*/], 8, 156);
break;
case 6:
VEHICLE::SET_VEHICLE_COLOURS(Local_46[iParam0 /*4*/], 58, 58);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_46[iParam0 /*4*/], 8, 156);
break;
case 7:
VEHICLE::SET_VEHICLE_COLOURS(Local_46[iParam0 /*4*/], 94, 94);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_46[iParam0 /*4*/], 8, 156);
break;
case 3:
case 4:
VEHICLE::SET_VEHICLE_COLOURS(Local_46[iParam0 /*4*/], 0, 0);
VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_46[iParam0 /*4*/], 61, 156);
break;
}}}


void func_112(int iParam0){
MISC::SET_BIT(&iLocal_64, iParam0);
}


void func_113(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
}
func_124(1);
AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_79);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("player"), joaat("player"));
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("player"), iLocal_79);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_79, iLocal_79);
PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_79, joaat("player"));
PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("player"));
func_114(1);
}


void func_114(bool bParam0){
func_115(39, bParam0);
func_115(40, bParam0);
func_115(41, bParam0);
func_115(42, bParam0);
func_115(43, bParam0);
func_115(44, bParam0);
}


void func_115(int iParam0, bool bParam1){
if(bParam1){
if(!func_123(iParam0, 2, 1)){
func_122(iParam0, 2, 1);
}}elseif(func_123(iParam0, 2, 1)){
func_116(iParam0, 2, 1);
}}


void func_116(int iParam0, int iParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_10()==0){
uVar0=func_120(func_121(iParam0), -1);
MISC::CLEAR_BIT(&uVar0, iParam1);
func_117(func_121(iParam0), uVar0, -1, 1);
}}else{
MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
}}


void func_117(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_118(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
}}


var func__118(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_119(uParam1));
}

int func_119(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_13();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}

int func_120(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_118(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}

int func_121(int iParam0){
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
return 12514;
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
case 60:
return 11901;
break;
default:
break;
}
return 14385;
}


void func_122(int iParam0, int iParam1, bool bParam2){
var uVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_10()==0){
uVar0=func_120(func_121(iParam0), -1);
MISC::SET_BIT(&uVar0, iParam1);
func_117(func_121(iParam0), uVar0, -1, 1);
}}else{
MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
}}

int func_123(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100885.f_1414[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_10()==0){
return MISC::IS_BIT_SET(func_120(func_121(iParam0), -1), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113810.f_668[iParam0], iParam1);
}
return 0;
}


void func_124(int iParam0){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_76, iParam0);
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_74, iParam0);
}


void func_125(){
if(!func_155()){
if(func_142()){
func_202(1, 0);
}}
RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DUEL", 0);
func_140();
func_135();
func_131();
func_126();
if((func_156(5) && func_229(Local_46[iLocal_81 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_65){
AUDIO::SET_HORN_PERMANENTLY_ON(Local_46[iLocal_81 /*4*/]);
}
if(func_156(6)){
if(iLocal_66==0){
if(func_83(PLAYER::PLAYER_PED_ID(), Local_49, 1) >=150f){
iLocal_66=MISC::GET_GAME_TIMER() + 30000;
}}elseif(MISC::GET_GAME_TIMER() >=iLocal_66){
func_72(6);
}}
if(func_156(7)){
if(MISC::GET_GAME_TIMER() >=iLocal_67){
func_72(7);
}}
if((func_156(9) && func_229(Local_46[0 /*4*/])) && func_82(PLAYER::PLAYER_PED_ID(), Local_46[0 /*4*/], 1) <=35f){
if(!func_156(10)){
if(!CAM::IS_SPHERE_VISIBLE(Local_50, 7f)){
if(((MISC::GET_GAME_TIMER() - iLocal_70) >=1000 && !func_79(Local_50, 7f)) && func_83(PLAYER::PLAYER_PED_ID(), Local_50, 1) >=50f){
MISC::CLEAR_AREA(Local_50, 7f, 1, 0, 0, 0);
func_108(3, Local_47, -1082130432, 0);
func_108(1, Local_47, -1082130432, 0);
VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_46[3 /*4*/], Local_46[1 /*4*/], 1065353216);
func_84(0, 0, Local_47, -1082130432);
func_112(10);
if(iLocal_63 > 2){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[0 /*5*/], 0);
TASK::TASK_COMBAT_PED(Local_45[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_45[0 /*5*/].f_3=3;
}}}else{
iLocal_70=MISC::GET_GAME_TIMER();
}}
if(!func_156(11)){
if(!CAM::IS_SPHERE_VISIBLE(Local_51, 7f)){
if(((MISC::GET_GAME_TIMER() - iLocal_71) >=1000 && !func_79(Local_51, 7f)) && func_83(PLAYER::PLAYER_PED_ID(), Local_51, 1) >=50f){
MISC::CLEAR_AREA(Local_51, 7f, 1, 0, 0, 0);
func_108(4, Local_47, -1082130432, 0);
func_108(2, Local_47, -1082130432, 0);
VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_46[4 /*4*/], Local_46[2 /*4*/], 1065353216);
func_84(1, 0, Local_47, -1082130432);
func_112(11);
if(iLocal_63 > 2){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[1 /*5*/], 0);
TASK::TASK_COMBAT_PED(Local_45[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_45[1 /*5*/].f_3=3;
}}}else{
iLocal_71=MISC::GET_GAME_TIMER();
}}
if(func_156(10) && func_156(11)){
func_72(9);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_74);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
}}
if(func_156(8)){
if(iLocal_68==0){
iLocal_68=MISC::GET_GAME_TIMER() + 3500;
}elseif(MISC::GET_GAME_TIMER() >=iLocal_68){
func_72(8);
func_112(6);
}}}


void func_126(){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_45[iVar0 /*5*/].f_1)){
if(PED::IS_PED_IN_ANY_VEHICLE(Local_45[iVar0 /*5*/], 0)){
if(!func_130(iVar0, 0)){
HUD::SET_BLIP_SCALE(Local_45[iVar0 /*5*/].f_1, 1f);
func_66(iVar0, 0);
}
if(func_73(Local_45[iVar0 /*5*/], 0) !=-1){
if(func_129(iVar0)){
if(HUD::GET_BLIP_ALPHA(Local_45[iVar0 /*5*/].f_1) > 0){
HUD::SET_BLIP_ALPHA(Local_45[iVar0 /*5*/].f_1, 0);
HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_45[iVar0 /*5*/].f_1, 1);
}}elseif(HUD::GET_BLIP_ALPHA(Local_45[iVar0 /*5*/].f_1)==0){
HUD::SET_BLIP_ALPHA(Local_45[iVar0 /*5*/].f_1, 255);
HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_45[iVar0 /*5*/].f_1, 0);
}}}elseif(func_130(iVar0, 0)){
HUD::SET_BLIP_SCALE(Local_45[iVar0 /*5*/].f_1, 0.7f);
func_128(iVar0, 0);
if(HUD::GET_BLIP_ALPHA(Local_45[iVar0 /*5*/].f_1)==0){
HUD::SET_BLIP_ALPHA(Local_45[iVar0 /*5*/].f_1, 255);
HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_45[iVar0 /*5*/].f_1, 0);
}}
if(PED::IS_PED_INJURED(Local_45[iVar0 /*5*/])){
func_127(&(Local_45[iVar0 /*5*/].f_1));
}}
iVar0++;
}
iVar0=0;
while (iVar0 < 8){
if(ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*4*/].f_1)){
if(!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*4*/], 0)){
func_127(&(Local_46[iVar0 /*4*/].f_1));
}}
iVar0++;
}}


void func_127(var uParam0){
if(HUD::DOES_BLIP_EXIST(*uParam0)){
HUD::SET_BLIP_ROUTE(*uParam0, 0);
HUD::REMOVE_BLIP(uParam0);
}}


void func_128(int iParam0, int iParam1){
MISC::CLEAR_BIT(&(Local_45[iParam0 /*5*/].f_2), iParam1);
}

int func_129(int iParam0){
if(iParam0==3){
if(!func_229(Local_45[2 /*5*/])){
return 0;
}}
if(iParam0==5){
if(!func_229(Local_45[4 /*5*/])){
return 0;
}}
if(iParam0==7){
if(!func_229(Local_45[6 /*5*/])){
return 0;
}}
return 1;
}


bool func_130(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Local_45[iParam0 /*5*/].f_2, iParam1);
}


void func_131(){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*4*/])){
func_132(iVar0);
}
iVar0++;
}}


void func_132(int iParam0){
if(func_229(Local_46[iParam0 /*4*/])){
switch (iParam0){
case 5:
if((!func_229(Local_45[2 /*5*/]) && !func_229(Local_45[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iParam0 /*4*/], 0)){
func_133(iParam0, 0);
}
break;
case 6:
if((!func_229(Local_45[4 /*5*/]) && !func_229(Local_45[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iParam0 /*4*/], 0)){
func_133(iParam0, 0);
}
break;
case 7:
if((!func_229(Local_45[6 /*5*/]) && !func_229(Local_45[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iParam0 /*4*/], 0)){
func_133(iParam0, 0);
}
break;
case 3:
if(!func_229(Local_45[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iParam0 /*4*/], 0)){
if(func_82(PLAYER::PLAYER_PED_ID(), Local_46[iParam0 /*4*/], 1) >=50f){
func_133(iParam0, 0);
}}
if(func_156(6)){
func_65(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_61);
}
break;
case 4:
if(!func_229(Local_45[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iParam0 /*4*/], 0)){
if(func_82(PLAYER::PLAYER_PED_ID(), Local_46[iParam0 /*4*/], 1) >=50f){
func_133(iParam0, 0);
}}
if(func_156(6)){
func_65(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_62);
}
break;
case 1:
if(!func_229(Local_46[3 /*4*/]) || func_82(Local_46[3 /*4*/], Local_46[iParam0 /*4*/], 1) >=150f){
func_133(iParam0, 0);
}
break;
case 2:
if(!func_229(Local_46[4 /*4*/]) || func_82(Local_46[4 /*4*/], Local_46[iParam0 /*4*/], 1) >=150f){
func_133(iParam0, 0);
}
break;
case 0:
switch (Local_46[iParam0 /*4*/].f_3){
case 0:
if(func_97()){
func_112(1);
func_127(&(Local_46[iParam0 /*4*/].f_1));
Local_46[iParam0 /*4*/].f_3++;
}
break;
}
break;
}}elseif(ENTITY::IS_ENTITY_VISIBLE(Local_46[iParam0 /*4*/])){
func_133(iParam0, 0);
}else{
func_133(iParam0, 1);
}}


void func_133(int iParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(Local_46[iParam0 /*4*/])){
func_127(&(Local_46[iParam0 /*4*/].f_1));
if(VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_46[iParam0 /*4*/])){
VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_46[iParam0 /*4*/]);
}
if(func_134(&(Local_46[iParam0 /*4*/]))){
if(bParam1){
VEHICLE::DELETE_VEHICLE(&(Local_46[iParam0 /*4*/]));
}else{
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iParam0 /*4*/]));
}}
Local_46[iParam0 /*4*/]=0;
Local_46[iParam0 /*4*/].f_2=0;
Local_46[iParam0 /*4*/].f_3=0;
}}

int func_134(var uParam0){
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0)){
return 0;
}
return 1;
}


void func_135(){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(ENTITY::DOES_ENTITY_EXIST(Local_45[iVar0 /*5*/])){
func_136(iVar0);
}
iVar0++;
}}


void func_136(int iParam0){
int iVar0;
int iVar1;
struct<3> Var2;
var uVar3;
float fVar4;
if(func_229(Local_45[iParam0 /*5*/])){
switch (iParam0){
case 0:
case 1:
if(iParam0==0){
iVar0=3;
iVar1=4;
}else{
iVar0=4;
iVar1=3;
}
switch (Local_45[iParam0 /*5*/].f_3){
case 0:
Local_45[iParam0 /*5*/].f_4=MISC::GET_GAME_TIMER();
if(func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <=15f){
PED::SET_IK_TARGET(Local_45[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, Local_47, 0, -1, -1);
}
break;
case 1:
if(func_229(Local_46[iVar0 /*4*/])){
VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_46[iVar0 /*4*/], 1);
if(func_229(Local_46[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_46[iVar0 /*4*/], Local_46[0 /*4*/])){
if((((((MISC::GET_GAME_TIMER() >=iLocal_69 && !func_156(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_46[iVar0 /*4*/], Local_52, 7f, 7f, 7f, 0, 1, 0)) && func_83(PLAYER::PLAYER_PED_ID(), Local_52, 1) < func_82(Local_46[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(Local_52, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_46[iVar0 /*4*/], 1), 7f)) && !func_79(Local_52, 8f)){
uVar3=func_78(Local_52, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
MISC::CLEAR_AREA_OF_VEHICLES(Local_52, 8f, 0, 0, 0, 0, 0, 0, 0);
MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_52, uVar3, 0f, -8f, 0f), 8f, 0, 0, 0, 0, 0, 0, 0);
ENTITY::SET_ENTITY_COORDS(Local_46[iVar0 /*4*/], Local_52, 1, 0, 0, 1);
VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_46[iVar0 /*4*/], 1084227584);
ENTITY::SET_ENTITY_HEADING(Local_46[iVar0 /*4*/], uVar3);
VEHICLE::SET_VEHICLE_ENGINE_ON(Local_46[iVar0 /*4*/], 1, 1, 0);
VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_46[iVar0 /*4*/], 30f);
func_112(5);
iLocal_81=iVar0;
iLocal_65=MISC::GET_GAME_TIMER() + 5000;
}
if(!func_156(12) && ENTITY::IS_ENTITY_AT_COORD(Local_46[iVar0 /*4*/], Local_52, 7f, 7f, 7f, 0, 1, 0)){
func_112(12);
}
if(((MISC::GET_GAME_TIMER() >=iLocal_69 && ENTITY::IS_ENTITY_OCCLUDED(Local_46[iVar0 /*4*/])) && func_229(Local_46[iVar1 /*4*/])) && func_82(Local_46[iVar0 /*4*/], Local_46[iVar1 /*4*/], 1) >=20f){
Var2={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_46[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) 
};
if(Var2.f_0 < -3.5f || Var2.f_0 > 3.5f){
fVar4=ENTITY::GET_ENTITY_SPEED(Local_46[iVar0 /*4*/]);
fVar4=func_139(fVar4, 20f, 50f);
ENTITY::SET_ENTITY_HEADING(Local_46[iVar0 /*4*/], func_78(ENTITY::GET_ENTITY_COORDS(Local_46[iVar0 /*4*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_46[iVar0 /*4*/], fVar4);
}}
if((func_130(iParam0, 3) || func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <=15f) || (func_229(Local_46[iVar1 /*4*/]) && func_82(Local_46[iVar0 /*4*/], Local_46[iVar1 /*4*/], 1) <=15f)){
if(func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <=15f){
if(!HUD::DOES_BLIP_EXIST(Local_45[iParam0 /*5*/].f_1)){
Local_45[iParam0 /*5*/].f_1=func_74(Local_45[iParam0 /*5*/], 1, 145);
func_92(Local_45[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
}
}
Local_45[iParam0 /*5*/].f_3++;
}}else{
if(!HUD::DOES_BLIP_EXIST(Local_45[iParam0 /*5*/].f_1)){
Local_45[iParam0 /*5*/].f_1=func_74(Local_45[iParam0 /*5*/], 1, 145);
func_92(Local_45[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
}
Local_45[iParam0 /*5*/].f_3++;
}
}
break;
case 2:
if(func_229(Local_46[iVar0 /*4*/])){
PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[iParam0 /*5*/], 0);
TASK::TASK_COMBAT_PED(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
Local_45[iParam0 /*5*/].f_3++;
}
break;
case 3:
if(!HUD::DOES_BLIP_EXIST(Local_45[iParam0 /*5*/].f_1)){
if(func_82(PLAYER::PLAYER_PED_ID(), Local_45[iParam0 /*5*/], 1) <=85f){
Local_45[iParam0 /*5*/].f_1=func_74(Local_45[iParam0 /*5*/], 1, 145);
}
}
if(func_156(6) || func_156(8)){
if(!PED::IS_PED_IN_ANY_VEHICLE(Local_45[iParam0 /*5*/], 0) && func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >=250f){
func_138(iParam0, 0);
}
}
elseif(func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >=250f){
func_138(iParam0, 0);
}
break;
}
break;
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
if(func_156(7)){
if(!PED::IS_PED_IN_COMBAT(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !func_137(Local_45[iParam0 /*5*/], joaat("script_task_vehicle_chase"), 1)){
TASK::TASK_COMBAT_PED(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
}}
if(func_156(7)){
if(!PED::IS_PED_IN_ANY_VEHICLE(Local_45[iParam0 /*5*/], 0) && func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >=250f){
func_138(iParam0, 0);
}}elseif(func_156(2) && func_82(Local_45[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >=250f){
func_138(iParam0, 0);
}
break;
}}else{
if(func_130(iParam0, 1)){
PED::SET_PED_CAN_RAGDOLL(Local_45[iParam0 /*5*/], 1);
ENTITY::DETACH_ENTITY(Local_45[iParam0 /*5*/], 1, 0);
func_128(iParam0, 1);
}
if(!func_130(iParam0, 2)){
if(ENTITY::IS_ENTITY_VISIBLE(Local_45[iParam0 /*5*/])){
func_138(iParam0, 0);
}else{
func_138(iParam0, 1);
}}}}

int func_137(var uParam0, int iParam1, bool bParam2){
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


void func_138(int iParam0, bool bParam1){
if(ENTITY::DOES_ENTITY_EXIST(Local_45[iParam0 /*5*/])){
func_127(&(Local_45[iParam0 /*5*/].f_1));
if((((func_229(Local_45[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_45[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_45[iParam0 /*5*/], 1)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_45[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_45[iParam0 /*5*/])){
ENTITY::DETACH_ENTITY(Local_45[iParam0 /*5*/], 1, 1);
}
if(bParam1){
PED::DELETE_PED(&(Local_45[iParam0 /*5*/]));
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_45[iParam0 /*5*/]));
}
Local_45[iParam0 /*5*/].f_2=0;
}}


float func_139(float fParam0, float fParam1, float fParam2){
if(fParam0 > fParam2){
return fParam2;
}elseif(fParam0 < fParam1){
return fParam1;
}
return fParam0;
}


void func_140(){
if((func_156(1) || iLocal_63 > 2) && func_141()){
if(func_229(Local_46[0 /*4*/]) && func_82(PLAYER::PLAYER_PED_ID(), Local_46[0 /*4*/], 1) >=250f){
func_64();
}}
if(func_141()){
if(ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*4*/]) && !func_229(Local_46[0 /*4*/])){
func_64();
}}}

int func_141(){
int iVar0;
int iVar1;
iVar0=1;
iVar1=0;
while (iVar1 < 8){
if(func_229(Local_45[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_45[iVar1 /*5*/].f_1)){
iVar0=0;
iVar1=8;
}
iVar1++;
}
return iVar0;
}

int func_142(){
if(!func_105(5)){
return 1;
}
if(func_151()){
return 1;
}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_150()){
return 0;
}}
if(func_143(100f, 1) !=-1){
return 1;
}
return 0;
}

int func_143(float fParam0, bool bParam1){
struct<27> Var0;
int iVar1;
int iVar2;
float fVar3;
float fVar4;
int iVar5;
int iVar6;
bool bVar7;
iVar2=-1;
fVar3=fParam0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(func_23(func_149())){
iVar5=func_20();
iVar6=0;
iVar6=0;
while (iVar6 < 63){
iVar1=iVar6;
if(MISC::IS_BIT_SET(Global_113810.f_18577[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_113810.f_18577[iVar1 /*6*/], 3)){
func_144(iVar1, &Var0);
fVar4=MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
if(fVar4 < fVar3){
bVar7=true;
if(bParam1){
if(iVar5 !=Var0.f_26){
bVar7=false;
}
}
if(bVar7){
iVar2=iVar1;
fVar3=fVar4;
}}}
iVar6++;
}}}
return iVar2;
}


void func_144(int iParam0, var uParam1){
switch (iParam0){
case 0:
func_145(uParam1, "Abigail1", func_147(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
break;
case 1:
func_145(uParam1, "Abigail2", func_147(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
break;
case 2:
func_145(uParam1, "Barry1", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
break;
case 3:
func_145(uParam1, "Barry2", func_147(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
break;
case 4:
func_145(uParam1, "Barry3", func_147(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 5:
func_145(uParam1, "Barry3A", func_147(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 6:
func_145(uParam1, "Barry3C", func_147(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 7:
func_145(uParam1, "Barry4", func_147(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_146(iParam0), 0, 0);
break;
case 8:
func_145(uParam1, "Dreyfuss1", func_147(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 9:
func_145(uParam1, "Epsilon1", func_147(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
break;
case 10:
func_145(uParam1, "Epsilon2", func_147(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
break;
case 11:
func_145(uParam1, "Epsilon3", func_147(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
break;
case 12:
func_145(uParam1, "Epsilon4", func_147(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
break;
case 13:
func_145(uParam1, "Epsilon5", func_147(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
break;
case 14:
func_145(uParam1, "Epsilon6", func_147(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_146(iParam0), 0, 1);
break;
case 15:
func_145(uParam1, "Epsilon7", func_147(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_146(iParam0), 0, 0);
break;
case 16:
func_145(uParam1, "Epsilon8", func_147(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_146(iParam0), 1, 0);
break;
case 17:
func_145(uParam1, "Extreme1", func_147(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 18:
func_145(uParam1, "Extreme2", func_147(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 19:
func_145(uParam1, "Extreme3", func_147(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 20:
func_145(uParam1, "Extreme4", func_147(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 21:
func_145(uParam1, "Fanatic1", func_147(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_146(iParam0), 1, 0);
break;
case 22:
func_145(uParam1, "Fanatic2", func_147(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_146(iParam0), 1, 0);
break;
case 23:
func_145(uParam1, "Fanatic3", func_147(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_146(iParam0), 0, 1);
break;
case 24:
func_145(uParam1, "Hao1", func_147(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_146(iParam0), 0, 1);
break;
case 25:
func_145(uParam1, "Hunting1", func_147(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
break;
case 26:
func_145(uParam1, "Hunting2", func_147(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
break;
case 27:
func_145(uParam1, "Josh1", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
break;
case 28:
func_145(uParam1, "Josh2", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
break;
case 29:
func_145(uParam1, "Josh3", func_147(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
break;
case 30:
func_145(uParam1, "Josh4", func_147(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
break;
case 31:
func_145(uParam1, "Maude1", func_147(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
break;
case 32:
func_145(uParam1, "Minute1", func_147(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
break;
case 33:
func_145(uParam1, "Minute2", func_147(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
break;
case 34:
func_145(uParam1, "Minute3", func_147(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 1);
break;
case 35:
func_145(uParam1, "MrsPhilips1", func_147(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
break;
case 36:
func_145(uParam1, "MrsPhilips2", func_147(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
break;
case 37:
func_145(uParam1, "Nigel1", func_147(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_146(iParam0), 1, 0);
break;
case 38:
func_145(uParam1, "Nigel1A", func_147(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
break;
case 39:
func_145(uParam1, "Nigel1B", func_147(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
break;
case 40:
func_145(uParam1, "Nigel1C", func_147(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
break;
case 41:
func_145(uParam1, "Nigel1D", func_147(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_146(iParam0), 1, 1);
break;
case 42:
func_145(uParam1, "Nigel2", func_147(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
break;
case 43:
func_145(uParam1, "Nigel3", func_147(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 1);
break;
case 44:
func_145(uParam1, "Omega1", func_147(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 45:
func_145(uParam1, "Omega2", func_147(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 46:
func_145(uParam1, "Paparazzo1", func_147(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 47:
func_145(uParam1, "Paparazzo2", func_147(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 48:
func_145(uParam1, "Paparazzo3", func_147(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 49:
func_145(uParam1, "Paparazzo3A", func_147(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 50:
func_145(uParam1, "Paparazzo3B", func_147(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 51:
func_145(uParam1, "Paparazzo4", func_147(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 0);
break;
case 52:
func_145(uParam1, "Rampage1", func_147(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
break;
case 54:
func_145(uParam1, "Rampage3", func_147(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
break;
case 55:
func_145(uParam1, "Rampage4", func_147(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
break;
case 56:
func_145(uParam1, "Rampage5", func_147(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_146(iParam0), 0, 0);
break;
case 53:
func_145(uParam1, "Rampage2", func_147(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_146(iParam0), 1, 0);
break;
case 57:
func_145(uParam1, "TheLastOne", func_147(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 58:
func_145(uParam1, "Tonya1", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 59:
func_145(uParam1, "Tonya2", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 60:
func_145(uParam1, "Tonya3", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 61:
func_145(uParam1, "Tonya4", func_147(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
case 62:
func_145(uParam1, "Tonya5", func_147(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_146(iParam0), 0, 1);
break;
default:
break;
}}


void func_145(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21){
uParam0->f_4=iParam4;
*uParam0=sParam1;
uParam0->f_1={
Param2 
};
uParam0->f_3=iParam3;
uParam0->f_5=iParam5;
uParam0->f_6={
Param6 
};
uParam0->f_9=iParam7;
StringCopy(&(uParam0->f_10), sParam8, 16);
uParam0->f_14=iParam9;
uParam0->f_15=iParam10;
StringCopy(&(uParam0->f_16), sParam11, 24);
uParam0->f_22=iParam12;
uParam0->f_23=iParam13;
uParam0->f_24=iParam14;
uParam0->f_25=iParam15;
uParam0->f_26=iParam16;
uParam0->f_27=iParam17;
uParam0->f_28=iParam18;
uParam0->f_29=uParam19;
uParam0->f_30=iParam20;
uParam0->f_31=iParam21;
}

int func_146(int iParam0){
switch (iParam0){
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
return 1;
break;
case 4:
return 0;
break;
case 5:
return 1;
break;
case 6:
return 1;
break;
case 7:
return 0;
break;
case 8:
return 1;
break;
case 9:
return 0;
break;
case 10:
return 0;
break;
case 11:
return 0;
break;
case 12:
return 1;
break;
case 13:
return 0;
break;
case 14:
return 1;
break;
case 15:
return 0;
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
return 1;
break;
case 23:
return 1;
break;
case 24:
return 1;
break;
case 25:
return 1;
break;
case 26:
return 1;
break;
case 27:
return 0;
break;
case 28:
return 1;
break;
case 29:
return 1;
break;
case 30:
return 1;
break;
case 31:
return 0;
break;
case 32:
return 1;
break;
case 33:
return 1;
break;
case 34:
return 1;
break;
case 35:
return 0;
break;
case 36:
return 0;
break;
case 37:
return 0;
break;
case 38:
return 1;
break;
case 39:
return 1;
break;
case 40:
return 1;
break;
case 41:
return 1;
break;
case 42:
return 1;
break;
case 43:
return 1;
break;
case 44:
return 0;
break;
case 45:
return 0;
break;
case 46:
return 1;
break;
case 47:
return 1;
break;
case 48:
return 0;
break;
case 49:
return 1;
break;
case 50:
return 1;
break;
case 51:
return 1;
break;
case 52:
return 1;
break;
case 54:
return 1;
break;
case 55:
return 1;
break;
case 56:
return 1;
break;
case 53:
return 1;
break;
case 57:
return 1;
break;
case 58:
return 1;
break;
case 59:
return 1;
break;
case 60:
return 1;
break;
case 61:
return 1;
break;
case 62:
return 1;
break;
default:
break;
}
return 0;
}


struct<2> func_147(int iParam0){
struct<2> Var0;
char[] cVar1[8];
StringCopy(&Var0, "", 8);
cVar1={
func_148(iParam0) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&cVar1)){}else{
StringCopy(&Var0, "RC_", 8);
StringConCat(&Var0, &cVar1, 8);
}
return Var0;
}


struct<2> func_148(int iParam0){
struct<2> Var0;
StringCopy(&Var0, "", 8);
switch (iParam0){
case 0:
StringCopy(&Var0, "ABI1", 8);
break;
case 1:
StringCopy(&Var0, "ABI2", 8);
break;
case 2:
StringCopy(&Var0, "BA1", 8);
break;
case 3:
StringCopy(&Var0, "BA2", 8);
break;
case 4:
StringCopy(&Var0, "BA3", 8);
break;
case 5:
StringCopy(&Var0, "BA3A", 8);
break;
case 6:
StringCopy(&Var0, "BA3C", 8);
break;
case 7:
StringCopy(&Var0, "BA4", 8);
break;
case 8:
StringCopy(&Var0, "DRE1", 8);
break;
case 9:
StringCopy(&Var0, "EPS1", 8);
break;
case 10:
StringCopy(&Var0, "EPS2", 8);
break;
case 11:
StringCopy(&Var0, "EPS3", 8);
break;
case 12:
StringCopy(&Var0, "EPS4", 8);
break;
case 13:
StringCopy(&Var0, "EPS5", 8);
break;
case 14:
StringCopy(&Var0, "EPS6", 8);
break;
case 15:
StringCopy(&Var0, "EPS7", 8);
break;
case 16:
StringCopy(&Var0, "EPS8", 8);
break;
case 17:
StringCopy(&Var0, "EXT1", 8);
break;
case 18:
StringCopy(&Var0, "EXT2", 8);
break;
case 19:
StringCopy(&Var0, "EXT3", 8);
break;
case 20:
StringCopy(&Var0, "EXT4", 8);
break;
case 21:
StringCopy(&Var0, "FAN1", 8);
break;
case 22:
StringCopy(&Var0, "FAN2", 8);
break;
case 23:
StringCopy(&Var0, "FAN3", 8);
break;
case 24:
StringCopy(&Var0, "HAO1", 8);
break;
case 25:
StringCopy(&Var0, "HUN1", 8);
break;
case 26:
StringCopy(&Var0, "HUN2", 8);
break;
case 27:
StringCopy(&Var0, "JOS1", 8);
break;
case 28:
StringCopy(&Var0, "JOS2", 8);
break;
case 29:
StringCopy(&Var0, "JOS3", 8);
break;
case 30:
StringCopy(&Var0, "JOS4", 8);
break;
case 31:
StringCopy(&Var0, "MAU1", 8);
break;
case 32:
StringCopy(&Var0, "MIN1", 8);
break;
case 33:
StringCopy(&Var0, "MIN2", 8);
break;
case 34:
StringCopy(&Var0, "MIN3", 8);
break;
case 35:
StringCopy(&Var0, "MRS1", 8);
break;
case 36:
StringCopy(&Var0, "MRS2", 8);
break;
case 37:
StringCopy(&Var0, "NI1", 8);
break;
case 38:
StringCopy(&Var0, "NI1A", 8);
break;
case 39:
StringCopy(&Var0, "NI1B", 8);
break;
case 40:
StringCopy(&Var0, "NI1C", 8);
break;
case 41:
StringCopy(&Var0, "NI1D", 8);
break;
case 42:
StringCopy(&Var0, "NI2", 8);
break;
case 43:
StringCopy(&Var0, "NI3", 8);
break;
case 44:
StringCopy(&Var0, "OME1", 8);
break;
case 45:
StringCopy(&Var0, "OME2", 8);
break;
case 46:
StringCopy(&Var0, "PA1", 8);
break;
case 47:
StringCopy(&Var0, "PA2", 8);
break;
case 48:
StringCopy(&Var0, "PA3", 8);
break;
case 49:
StringCopy(&Var0, "PA3A", 8);
break;
case 50:
StringCopy(&Var0, "PA3B", 8);
break;
case 51:
StringCopy(&Var0, "PA4", 8);
break;
case 52:
StringCopy(&Var0, "RAM1", 8);
break;
case 53:
StringCopy(&Var0, "RAM2", 8);
break;
case 54:
StringCopy(&Var0, "RAM3", 8);
break;
case 55:
StringCopy(&Var0, "RAM4", 8);
break;
case 56:
StringCopy(&Var0, "RAM5", 8);
break;
case 57:
StringCopy(&Var0, "SAS1", 8);
break;
case 58:
StringCopy(&Var0, "TON1", 8);
break;
case 59:
StringCopy(&Var0, "TON2", 8);
break;
case 60:
StringCopy(&Var0, "TON3", 8);
break;
case 61:
StringCopy(&Var0, "TON4", 8);
break;
case 62:
StringCopy(&Var0, "TON5", 8);
break;
default:
break;
}
return Var0;
}

int func_149(){
func_21();
return Global_113810.f_2366.f_539.f_4321;
}

int func_150(){
if(MISC::IS_PC_VERSION()){
if(MISC::GET_CITY_DENSITY()==1f){
return 1;
}}
return 0;
}

int func_151(){
if(func_154() && !func_150()){
return 1;
}
if(func_153() && func_152()){
return 1;
}
return 0;
}


bool func_152(){
return Global_113528 > 0;
}

int func_153(){
if(Global_97735 !=-1){
return 1;
}
return 0;
}

int func_154(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);
}
return 0;
}

int func_155(){
if((Global_113799==func_30() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800){
return 1;
}
return 0;
}


bool func_156(int iParam0){
return MISC::IS_BIT_SET(iLocal_64, iParam0);
}


void func_157(int iParam0){
if(iParam0==-1){
iParam0=func_30();
}
if(iParam0==-1){
return;
}
func_159(iParam0);
MISC::SET_SCRIPT_HIGH_PRIO(0);
MISC::SET_RANDOM_EVENT_FLAG(1);
Global_113796=0;
func_158();
}


void func_158(){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
}
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
}}


void func_159(int iParam0){
Global_113799=iParam0;
}

int func_160(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
bool bVar0;
struct<3> Var1;
int iVar2;
struct<3> Var3;
int iVar4;
if(!Global_152397){
return 0;
}
if(iParam1==-1){
iParam1=func_30();
}
if(iParam1==-1){
return 0;
}
if(iParam1==31 || iParam1==32){
if(!func_51()){
return 0;
}}
Local_41={
Param0 
};
bVar0=false;
if(!bVar0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
if(vmag2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_150()){
return 0;
}}
if(!Global_113810.f_9088){
return 0;
}
if(func_5(0)){
return 0;
}
if(func_151()){
return 0;
}
if(func_201()){
return 0;
}
if(Global_113799 !=-1){
return 0;
}
if(func_23(func_149())){
if(func_143(100f, 1) !=-1){
return 0;
}}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4){
if((Var1.f_2 - Local_41.f_2) > 50f){
return 0;
}}
if(!func_200(iParam1)){
return 0;
}
if(func_23(func_149())){
if(func_199(func_149())==4 || func_199(func_149())==5){
return 0;
}}
if(func_23(func_149())){
if(!func_198(iParam1, bParam2, 145)){
return 0;
}}
if(!func_197(Global_113810.f_24998.f_43[iParam1])){
return 0;
}
if((MISC::GET_GAME_TIMER() - Global_113801) < 150000){
if(iParam1 !=30){
return 0;
}}
if(func_195()){
return 0;
}
if(MISC::GET_MISSION_FLAG()){
return 0;
}
if(MISC::GET_RANDOM_EVENT_FLAG()){
return 0;
}
if(!func_185(4)){
return 0;
}
if(!func_105(5)){
return 0;
}
if(func_184(iParam1, bParam2) && !bParam3){
return 0;
}
if(Global_3 && iParam1 !=10){
return 0;
}
if(INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))){
if((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f)){
return 0;
}}
if((iParam1==9 && (bParam2==2 || bParam2==5)) && !func_184(0, 0)){
return 0;
}
if(Global_32430){
return 0;
}
if(func_200(30) && !func_184(30, 0)){
if(iParam1 !=30){
if(vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f){
return 0;
}}}
if(func_23(func_149())){
iVar2=0;
while (iVar2 < 3){
Var3={
Global_113810.f_2366.f_539.f_2300[iVar2 /*3*/] 
};
iVar4=Global_113810.f_2366.f_539.f_2296[iVar2];
if(func_183(iVar4)){
if(func_161(iVar2)){
if(!func_88(Var3, 0f, 0f, 0f, 0)){
if(vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f)){
if(func_149() !=iVar2){
return 0;
}}
}}}
iVar2++;
}}}
return 1;
}


bool func_161(int iParam0){
int iVar0;
iVar0=Global_113810.f_2366.f_539.f_2296[iParam0];
return func_162(iVar0);
}

int func_162(int iParam0){
return func_163(iParam0, 1);
}

int func_163(int iParam0, int iParam1){
var uVar0;
var uVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(!func_183(iParam0)){
return 0;
}
func_164(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
if(((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >=iParam1){
return 1;
}
return 0;
}


void func_164(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6){
func_165(func_176(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}


void func_165(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
if(func_175(iParam0, iParam1)){
iVar0=func_174(iParam1);
iVar1=func_172(iParam0);
iVar2=(func_172(iParam0) - func_172(iParam1));
iVar3=(func_174(iParam0) - func_174(iParam1));
iVar4=(func_171(iParam0) - func_171(iParam1));
iVar5=(func_170(iParam0) - func_170(iParam1));
iVar6=(func_169(iParam0) - func_169(iParam1));
iVar7=(func_168(iParam0) - func_168(iParam1));
}else{
iVar0=func_174(iParam0);
iVar1=func_172(iParam1);
iVar2=(func_172(iParam1) - func_172(iParam0));
iVar3=(func_174(iParam1) - func_174(iParam0));
iVar4=(func_171(iParam1) - func_171(iParam0));
iVar5=(func_170(iParam1) - func_170(iParam0));
iVar6=(func_169(iParam1) - func_169(iParam0));
iVar7=(func_168(iParam1) - func_168(iParam0));
}
while (iVar7 < 0){
iVar7 +=60;
iVar6=(iVar6 - 1);
}
while (iVar7 > 59){
iVar7=(iVar7 - 60);
iVar6++;
}
while (iVar6 < 0){
iVar6 +=60;
iVar5=(iVar5 - 1);
}
while (iVar6 > 59){
iVar6=(iVar6 - 60);
iVar5++;
}
while (iVar5 < 0){
iVar5 +=24;
iVar4=(iVar4 - 1);
}
while (iVar5 > 23){
iVar5=(iVar5 - 24);
iVar4++;
}
while (iVar4 < 0){
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
iVar4=(iVar4 + func_167(iVar0, iVar1));
iVar3=(iVar3 - 1);
iVar0=round(func_166(to_float(iVar0 + 1), 0f, 12f));
}
while (iVar3 < 0){
iVar3 +=12;
iVar2=(iVar2 - 1);
}
while (iVar3 > 12){
iVar3=(iVar3 - 12);
iVar2++;
}
*uParam2=iVar7;
*uParam3=iVar6;
*uParam4=iVar5;
*uParam5=iVar4;
*uParam6=iVar3;
*uParam7=iVar2;
}


float func_166(float fParam0, float fParam1, float fParam2){
float fVar0;
if(fParam1==fParam2){
return fParam1;
}
fVar0=(fParam2 - fParam1);
fParam0=(fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
if(fParam0 < fParam1){
fParam0=(fParam0 + fVar0);
}
return fParam0;
}

int func_167(int iParam0, int iParam1){
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

int func_168(int iParam0){
return shift_right(iParam0, 20) & 63;
}

int func_169(int iParam0){
return shift_right(iParam0, 14) & 63;
}

int func_170(int iParam0){
return shift_right(iParam0, 9) & 31;
}

int func_171(int iParam0){
return shift_right(iParam0, 4) & 31;
}

int func_172(int iParam0){
return (shift_right(iParam0, 26) & 31 * func_173(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_173(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_174(int iParam0){
return iParam0 & 15;
}

int func_175(int iParam0, int iParam1){
int iVar0;
int iVar1;
if(!func_183(iParam1) || !func_183(iParam0)){
return 1;
}
iVar0=func_172(iParam0);
iVar1=func_172(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_174(iParam0);
iVar1=func_174(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_171(iParam0);
iVar1=func_171(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_170(iParam0);
iVar1=func_170(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_169(iParam0);
iVar1=func_169(iParam1);
if(iVar0 > iVar1){
return 1;
}elseif(iVar0 < iVar1){
return 0;
}
iVar0=func_168(iParam0);
iVar1=func_168(iParam1);
if(iVar0 > iVar1){
return 1;
}
return 0;
}

int func_176(){
var uVar0;
func_182(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_181(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_180(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_179(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_178(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_177(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_177(var uParam0, int iParam1){
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


void func_178(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_179(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_174(*uParam0);
iVar1=func_172(*uParam0);
if(iParam1 < 1 || iParam1 > func_167(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || shift_left(iParam1, 4));
}


void func_180(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || shift_left(iParam1, 9));
}


void func_181(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || shift_left(iParam1, 14));
}


void func_182(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || shift_left(iParam1, 20));
}

int func_183(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
if(iParam0==-15){
return 0;
}
iVar0=func_168(iParam0);
if(iVar0 < 0 || iVar0 >=60){
return 0;
}
iVar1=func_169(iParam0);
if(iVar1 < 0 || iVar1 >=60){
return 0;
}
iVar2=func_170(iParam0);
if(iVar2 < 0 || iVar2 > 23){
return 0;
}
iVar3=func_172(iParam0);
if((iVar3 <=0 || iVar3 > 2043) || iVar3 < 1979){
return 0;
}
iVar4=func_174(iParam0);
if(iVar4 < 0 || iVar4 > 11){
return 0;
}
iVar5=func_171(iParam0);
if(iVar5 < 1 || iVar5 > func_167(iVar4, iVar3)){
return 0;
}
return 1;
}

int func_184(int iParam0, bool bParam1){
if(MISC::IS_BIT_SET(Global_113810.f_24998.f_8[iParam0], bParam1)){
return 1;
}
return 0;
}

int func_185(int iParam0){
int iVar0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
iVar0=func_149();
if(!func_23(iVar0)){
return 0;
}
switch (iParam0){
case 9:
case 0:
if(((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_194()) || Global_112857) || Global_32286) || func_193()) || func_192(8, -1)) || func_191()) || func_190()) || func_189()) || func_188()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 1:
if(((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_194()) || Global_32286) || func_193()) || func_192(8, -1)) || func_189()) || func_191()) || func_190()) || func_188()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 2:
if((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_194()) || Global_112857) || Global_32286) || func_193()) || func_192(8, -1)) || func_189()) || func_191()) || func_190()) || func_188()) || Global_113810.f_7691.f_919[iVar0]==5) || Global_43924 !=-1){
return 0;
}
break;
case 3:
if((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_194()) || Global_112857) || Global_32286) || func_193()) || func_192(8, -1)) || func_191()) || func_190()) || func_188()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 4:
if(((((func_194() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_192(8, -1)) || func_188()) || func_187()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 5:
if((((func_192(8, -1) || func_191()) || func_190()) || func_187()) || func_186()){
return 0;
}
if((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8){
return 0;
}
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_194()) || Global_32286) || func_193()) || func_192(8, -1)) || func_190()) || func_189()) || func_188()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
}
break;
case 7:
if((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_194()) || func_190()) || Global_112857) || Global_32286) || func_193()) || Global_44569) || func_192(8, -1)) || func_189()) || func_187()) || func_188()) || Global_113810.f_7691.f_919[iVar0]==5){
return 0;
}
break;
case 8:
if(((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_194()) || Global_112857) || Global_32286) || func_193()) || func_192(8, -1)) || func_189()) || func_187()) || func_191()) || func_190()) || func_188()){
return 0;
}
break;
}}else{
return 0;
}}else{
return 0;
}}else{
return 0;
}
return 1;
}


var func__186(){
return Global_100872.f_1;
}

int func_187(){
if(Global_97735 !=-1){
return MISC::IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);
}
return 0;
}

int func_188(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_189(){
if(Global_78950){
return 1;
}elseif(Global_63479 && !Global_63485){
return 1;
}
return 0;
}


bool func_190(){
return Global_100885.f_394 > 0;
}


bool func_191(){
return Global_100885.f_393 > 0;
}


var func__192(int iParam0, int iParam1){
switch (iParam0){
case 5:
if(iParam1 > -1){
return Global_1654054.f_203[iParam1];
}
break;
}
return MISC::IS_BIT_SET(Global_1654054.f_1048, iParam0);
}


var func__193(){
return Global_1575063;
}

int func_194(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_98291.f_44==1;
}
return 0;
}

int func_195(){
func_196();
if(Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==2){
return 1;
}
return 0;
}


void func_196(){
if(func_22(14)){
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
Global_20500=func_149();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


bool func_197(int iParam0){
return func_175(func_176(), iParam0);
}

int func_198(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=0;
iVar1=func_149();
if(iParam2 !=145 && ((iParam2==0 || iParam2==1) || iParam2==2)){
iVar1=iParam2;
}
switch (iParam0){
case 18:
if(iVar1==2){
iVar0=1;
}
break;
case 19:
if(iVar1 !=2){
iVar0=1;
}
break;
case 20:
if(iVar1 !=1){
iVar0=1;
}
break;
case 28:
if(iVar1 !=2){
iVar0=1;
}
break;
case 13:
if(iVar1==0){
if(iParam1==2){
iVar0=0;
}else{
iVar0=1;
}}else{
iVar0=1;
}
break;
case 22:
if(iParam1==2 || iVar1 !=2){
iVar0=1;
}
break;
case 30:
if(iVar1 !=2){
iVar0=1;
}
break;
default:
iVar0=1;
break;
}
return iVar0;
}

int func_199(int iParam0){
if(!func_23(iParam0)){
return 7;
}
return Global_113810.f_7691.f_919[iParam0];
}

int func_200(int iParam0){
int iVar0;
int iVar1;
if(iParam0==31 || iParam0==32){
if(!func_51()){
return 0;
}}
iVar0=iParam0;
if(iVar0 < 31){
iVar1=MISC::IS_BIT_SET(Global_113810.f_24998, iVar0);
}else{
iVar0=(iVar0 - 31);
iVar1=MISC::IS_BIT_SET(Global_113810.f_24998.f_1, iVar0);
}
return iVar1;
}

int func_201(){
var uVar0;
if(Global_32435){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
uVar0=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
if(VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0)){
if(!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0))){
return 1;
}}}}
return 0;
}


void func_202(bool bParam0, bool bParam1){
func_228();
func_227();
func_124(0);
func_225(1, 1, 1, 0);
func_223(0);
GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
HUD::DISPLAY_RADAR(1);
PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
func_222();
func_221();
func_220();
if(func_229(Local_46[0 /*4*/])){
VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_46[0 /*4*/], 1);
}
func_219(bParam1);
func_218(bParam1);
PED::REMOVE_RELATIONSHIP_GROUP(iLocal_79);
func_216();
func_214();
func_114(0);
CAM::DESTROY_ALL_CAMS(0);
CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
VEHICLE::SET_RANDOM_TRAINS(1);
if(bParam0){
func_203(-1);
SCRIPT::TERMINATE_THIS_THREAD();
}}


void func_203(int iParam0){
char cVar0[64];
if(iParam0==-1){
iParam0=func_30();
}
if(iParam0==-1){
return;
}
if(func_155()){
func_207(iParam0);
HUD::SET_MISSION_NAME(0, 0);
Global_113801=MISC::GET_GAME_TIMER();
func_206(30000);
StringCopy(&cVar0, func_205(Global_113799, 1), 64);
if(func_29(Global_113799) > 0){
StringConCat(&cVar0, " Variation ", 64);
StringIntConCat(&cVar0, Global_113798, 64);
}
STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
}elseif(MISC::IS_BIT_SET(Global_113806, 0) && Global_113810.f_24998.f_2 < 3){
MISC::CLEAR_BIT(&Global_113806, 0);
}
func_204(&Global_32343);
Global_113800=0;
func_159(-1);
}


void func_204(var uParam0){
if(*uParam0==-1){
return;
}
if(!*uParam0==Global_43339){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43338=0;
Global_43340=0;
Global_43377=15;
Global_63482=0;
Global_63483=0;
}


char* func_205(int iParam0, bool bParam1){
switch (iParam0){
case 0:
return "RE_ACCIDENT";
break;
case 1:
return "RE_ATMROBBERY";
break;
case 2:
return "RE_BUSTOUR";
break;
case 3:
return "RE_DOMESTIC";
break;
case 4:
return "RE_GETAWAYDRIVER";
break;
case 5:
return "RE_SHOPROBBERY";
break;
case 6:
return "RE_SNATCHED";
break;
case 7:
return "RE_LURED";
break;
case 8:
return "RE_BIKETHIEFSTAMP";
break;
case 9:
return "RE_SECURITYVAN";
break;
case 10:
return "RE_PAPARAZZI";
break;
case 11:
return "RE_CHASETHIEVES";
break;
case 12:
return "RE_DEALGONEWRONG";
break;
case 13:
return "RE_HITCHLIFT";
break;
case 14:
return "RE_STAG";
break;
case 15:
return "RE_ARREST";
break;
case 16:
return "RE_CRASHRESCUE";
break;
case 17:
return "RE_CARTHEFT";
break;
case 18:
return "RE_CULTSHOOTOUT";
break;
case 19:
return "RE_GANGFIGHT";
break;
case 20:
return "RE_GANGINTIMIDATION";
break;
case 21:
return "RE_PRISONVANBREAK";
break;
case 22:
return "RE_PRISONERLIFT";
break;
case 23:
return "RE_ABANDONEDCAR";
break;
case 24:
return "RE_BURIAL";
break;
case 25:
return "RE_MUGGING";
break;
case 26:
return "RE_BIKETHIEF";
break;
case 27:
return "RE_DRUNKDRIVER";
break;
case 28:
return "RE_HOMELANDSECURITY";
break;
case 29:
return "RE_BORDERPATROL";
break;
case 30:
return "RE_SIMEONYETARIAN";
break;
case 31:
return "RE_DUEL";
break;
case 32:
return "RE_SEAPLANE";
break;
case 33:
return "RE_MONKEYPHOTO";
break;
case -1:
return "RE_NONE";
break;
}
if(!bParam1){}
return "UNKNOWN";
}


void func_206(int iParam0){
Global_43928=(MISC::GET_GAME_TIMER() + iParam0);
}


void func_207(int iParam0){
func_208(iParam0, 0, func_213(iParam0));
}


void func_208(int iParam0, int iParam1, int iParam2){
var uVar0;
struct<16> Var1;
uVar0=func_176();
func_211(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
func_210(iParam0, &uVar0);
Var1={
func_209(&uVar0) 
};
}
struct<16> func_209(var uParam0){
struct<16> Var0;
int iVar1;
StringCopy(&Var0, "", 64);
iVar1=func_170(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_169(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, ":", 64);
iVar1=func_168(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, " ", 64);
iVar1=func_171(*uParam0);
if(iVar1 < 10){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1, 64);
StringConCat(&Var0, "/", 64);
iVar1=func_174(*uParam0);
if(iVar1 < 9){
StringIntConCat(&Var0, 0, 64);
}
StringIntConCat(&Var0, iVar1 + 1, 64);
StringConCat(&Var0, "/", 64);
StringIntConCat(&Var0, func_172(*uParam0), 64);
return Var0;
}


void func_210(int iParam0, var uParam1){
Global_113810.f_24998.f_43[iParam0]=*uParam1;
}


void func_211(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
iVar0=func_172(*uParam0);
iVar1=func_174(*uParam0);
iVar2=func_171(*uParam0);
iVar3=func_170(*uParam0);
iVar4=func_169(*uParam0);
iVar5=func_168(*uParam0);
if(((((iParam6==0 && iParam5==0) && iParam4==0) && iParam3==0) && iParam2==0) && iParam1==0){
return;
}
if(iParam1 < 0){
return;
}
if(iParam2 < 0){
return;
}
if(iParam3 < 0){
return;
}
if(iParam4 < 0){
return;
}
if(iParam5 < 0){
return;
}
if(iParam6 < 0){
return;
}
iVar5=(iVar5 + iParam1);
while (iVar5 >=60){
iParam2++;
iVar5=(iVar5 - 60);
}
iVar4=(iVar4 + iParam2);
while (iVar4 >=60){
iParam3++;
iVar4=(iVar4 - 60);
}
iVar3=(iVar3 + iParam3);
while (iVar3 >=24){
iParam4++;
iVar3=(iVar3 - 24);
}
iVar2=(iVar2 + iParam4);
iVar6=func_167(iVar1, iVar0);
while (iVar2 > iVar6){
iVar1++;
iVar2=(iVar2 - iVar6);
if(iVar1 > 11){
iVar0++;
iVar1=(iVar1 - 12);
}
iVar6=func_167(iVar1, iVar0);
}
iVar1=(iVar1 + iParam5);
while (iVar1 > 11){
iParam6++;
iVar1=(iVar1 - 12);
}
iVar0=(iVar0 + iParam6);
func_212(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}


void func_212(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6){
func_182(uParam0, iParam1);
func_181(uParam0, iParam2);
func_180(uParam0, iParam3);
func_178(uParam0, iParam5);
func_179(uParam0, iParam4);
func_177(uParam0, iParam6);
}

int func_213(int iParam0){
int iVar0;
switch (iParam0){
case 23:
iVar0=30;
break;
case 0:
iVar0=30;
break;
case 15:
iVar0=30;
break;
case 1:
iVar0=200;
break;
case 26:
iVar0=30;
break;
case 8:
iVar0=30;
break;
case 29:
iVar0=30;
break;
case 24:
iVar0=30;
break;
case 2:
iVar0=0;
break;
case 17:
iVar0=30;
break;
case 11:
iVar0=30;
break;
case 16:
iVar0=30;
break;
case 18:
iVar0=30;
break;
case 12:
iVar0=120;
break;
case 3:
iVar0=60;
break;
case 27:
iVar0=60;
break;
case 19:
iVar0=30;
break;
case 20:
iVar0=30;
break;
case 4:
iVar0=60;
break;
case 28:
iVar0=30;
break;
case 13:
iVar0=35;
break;
case 7:
iVar0=30;
break;
case 25:
iVar0=40;
break;
case 10:
iVar0=30;
break;
case 22:
iVar0=30;
break;
case 21:
iVar0=30;
break;
case 5:
iVar0=30;
break;
case 30:
iVar0=60;
break;
case 9:
iVar0=60;
break;
case 6:
iVar0=40;
break;
case 14:
iVar0=40;
break;
}
return iVar0;
}


void func_214(){
Global_20711=0;
func_215();
}


void func_215(){
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


void func_216(){
Global_20711=0;
func_217();
}


void func_217(){
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22856=0;
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(0);
Global_21845=6;
}}


void func_218(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
func_133(iVar0, bParam0);
iVar0++;
}}


void func_219(bool bParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
func_138(iVar0, bParam0);
iVar0++;
}}


void func_220(){
}


void func_221(){
}


void func_222(){
}


void func_223(bool bParam0){
if(bParam0){
PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
PLAYER::SET_MAX_WANTED_LEVEL(0);
PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
PED::SET_CREATE_RANDOM_COPS(0);
MISC::ENABLE_DISPATCH_SERVICE(3, 0);
MISC::ENABLE_DISPATCH_SERVICE(1, 0);
MISC::ENABLE_DISPATCH_SERVICE(8, 0);
MISC::ENABLE_DISPATCH_SERVICE(2, 0);
MISC::ENABLE_DISPATCH_SERVICE(6, 0);
MISC::ENABLE_DISPATCH_SERVICE(4, 0);
MISC::ENABLE_DISPATCH_SERVICE(12, 0);
MISC::ENABLE_DISPATCH_SERVICE(5, 0);
func_224(9, 1);
func_224(8, 1);
}else{
PLAYER::SET_MAX_WANTED_LEVEL(5);
PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
PED::SET_CREATE_RANDOM_COPS(1);
MISC::ENABLE_DISPATCH_SERVICE(3, 1);
MISC::ENABLE_DISPATCH_SERVICE(1, 1);
MISC::ENABLE_DISPATCH_SERVICE(8, 1);
MISC::ENABLE_DISPATCH_SERVICE(2, 1);
MISC::ENABLE_DISPATCH_SERVICE(6, 1);
MISC::ENABLE_DISPATCH_SERVICE(4, 1);
MISC::ENABLE_DISPATCH_SERVICE(12, 1);
MISC::ENABLE_DISPATCH_SERVICE(5, 1);
func_224(9, 0);
func_224(8, 0);
}}


void func_224(int iParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_32532, iParam0);
}else{
MISC::CLEAR_BIT(&Global_32532, iParam0);
}}


void func_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3){
if(bParam0){
func_214();
}
if(bParam1){
if(!func_226() || (bParam0 && !bParam3)){
HUD::CLEAR_PRINTS();
}
HUD::CLEAR_REMINDER_MESSAGE();
}
if(bParam2){
HUD::CLEAR_HELP(1);
}}

int func_226(){
if(Global_21845 !=0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
return 1;
}
return 0;
}


void func_227(){
int iVar0;
iVar0=0;
while (iVar0 < 8){
func_127(&(Local_45[iVar0 /*5*/].f_1));
iVar0++;
}
iVar0=0;
while (iVar0 < 8){
func_127(&(Local_46[iVar0 /*4*/].f_1));
iVar0++;
}}


void func_228(){
iLocal_43=0;
iLocal_44=0;
iLocal_63=0;
iLocal_64=0;
}

int func_229(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}