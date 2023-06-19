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
char* sLocal_16=NULL;
var uLocal_17=0;
var uLocal_18=0;
var uLocal_19=0;
var uLocal_20=0;
float fLocal_21=0f;
float fLocal_22=0f;
float fLocal_23=0f;
var uLocal_24=0;
var uLocal_25=0;
var uLocal_26=0;
var uLocal_27=0;
char cLocal_28[16]="";
var uLocal_29=0;
var uLocal_30=0;
char cLocal_31[16]="";
var uLocal_32=0;
var uLocal_33=0;
char cLocal_34[16]="";
var uLocal_35=0;
var uLocal_36=0;
char cLocal_37[16]="";
var uLocal_38=0;
var uLocal_39=0;
char cLocal_40[16]="";
var uLocal_41=0;
var uLocal_42=0;
char cLocal_43[16]="";
var uLocal_44=0;
var uLocal_45=0;
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
sLocal_16="NULL";
fLocal_21=80f;
fLocal_22=140f;
fLocal_23=180f;
StringCopy(&cLocal_28, "CELL_212", 16);
StringCopy(&cLocal_31, "CELL_213", 16);
StringCopy(&cLocal_34, "CELL_39", 16);
StringCopy(&cLocal_37, "CELL_MP_300", 16);
StringCopy(&cLocal_40, "CELL_MP_301", 16);
StringCopy(&cLocal_43, "CELL_MP_302", 16);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_47(&uLocal_26);
func_38();
while (true){
wait(0);
if(!NETWORK::NETWORK_IS_IN_SESSION()){
func_36(1);
func_35();
}
if(!Global_20500.f_1==9 && Global_20500.f_1 > 3){
func_3();
if(Global_20500.f_1 !=8){
if(func_2()){
func_35();
}}}
if(func_1()){
func_35();
}}}

int func_1(){
if(((Global_20500.f_1==1 || Global_20500.f_1==3) || Global_20500.f_1==0) || Global_20444==1){
Global_20487=1;
return 1;
}
return 0;
}

int func_2(){
if(Global_8976==1 || Global_20500.f_1 < 7){
Global_20487=1;
return 1;
}
return 0;
}


void func_3(){
if(func_31(&uLocal_26)){
if(func_17()){
if(Global_2694515){
NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(0);
func_10(1080503477, func_11(1, 1));
Global_2694515=0;
}else{
NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(1);
func_10(1793940769, func_11(1, 1));
Global_2694515=1;
}
func_4(0);
return;
}}}


void func_4(int iParam0){
if(func_9()){
return;
}
if(Global_20704){
if(func_8()){
func_6(1, 1);
}else{
func_6(0, 0);
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
if(!func_5()){
Global_20500.f_1=3;
}}

int func_5(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_7(0)){
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

int func_7(int iParam0){
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


bool func_8(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_9(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_10(int iParam0, int iParam1){
struct<4> Var0;
Var0.f_0=800157557;
Var0.f_1=PLAYER::PLAYER_ID();
Var0.f_2=iParam0;
Var0.f_3=MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);
if(!iParam1==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Var0, 4, iParam1);
}}}

int func_11(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_16(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_12(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}


bool func_12(int iParam0, int iParam1){
bool bVar0;
if(!func_15(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_13(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_13(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_14();
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

int func_14(){
return Global_1574918;
}

int func_15(var uParam0){
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

int func_16(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0)){
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

int func_17(){
if(!func_25(PLAYER::PLAYER_ID(), 1) && func_18()){
return 1;
}
return 0;
}

int func_18(){
if(!func_19()){
return 0;
}
return 1;
}

int func_19(){
if(Global_1574612){
return 1;
}
if(func_24()){
return 1;
}
if(func_23()){
return 1;
}
return func_20(120, -1);
}

int func_20(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=func_21(iParam0, iParam1);
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}


var func__21(var uParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_22(uParam1));
}

int func_22(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_14();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


bool func_23(){
return Global_1575051;
}


bool func_24(){
return Global_1575053;
}


bool func_25(int iParam0, bool bParam1){
if(func_30() !=0){
return func_29(iParam0) !=0;
}
return func_26(iParam0, bParam1, 0);
}

int func_26(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_27(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_27(int iParam0){
return func_28(iParam0);
}


var func__28(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_29(int iParam0){
if(func_16(iParam0, 0, 1)){
return Global_2657704[iParam0 /*463*/].f_1;
}
return 0;
}

int func_30(){
return Global_32283;
}

int func_31(var uParam0){
if(!MISC::IS_BIT_SET(*uParam0, 0)){
return 0;
}
if(Global_20478){
return 0;
}
if(!CAM::IS_SCREEN_FADED_IN()){
return 0;
}
if(!PAD::IS_CONTROL_JUST_PRESSED(2, Global_20469)){
return 0;
}
func_32();
Global_20478=1;
return 1;
}


void func_32(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20489, 1);
func_33();
}}


void func_33(){
if(func_34()){
MOBILE::CELL_SET_INPUT(5);
}}

int func_34(){
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


void func_35(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_36(bool bParam0){
if(bParam0){
func_37();
if(Global_20500.f_1==10 || Global_20500.f_1==9){
MISC::SET_BIT(&Global_8371, 16);
}
Global_20500.f_1=1;
if(func_7(0)){
func_4(0);
}}elseif(Global_20500.f_1==1){
if(!Global_20500.f_1==0){
Global_20500.f_1=3;
}}}


void func_37(){
if(Global_20500.f_1==9 || Global_20500.f_1==10){
Global_21898=0;
Global_21894=1;
}}


void func_38(){
if(!Global_20500.f_1==7){
Global_20500.f_1=7;
}
func_46(Global_20481, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
if(func_17()){
if(Global_2694515){
func_45(Global_20481, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_40, 0, 0, 0, 0);
}else{
func_45(Global_20481, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_37, 0, 0, 0, 0);
}}else{
func_45(Global_20481, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_43, 0, 0, 0, 0);
}
func_46(Global_20481, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
func_42(&cLocal_34);
if(func_17()){
func_39(13, &cLocal_28, 1, "", 4, &cLocal_31, &uLocal_26);
}else{
func_39(1, "", 1, "", 4, &cLocal_31, &uLocal_26);
}}


void func_39(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6){
func_40(2, iParam0, cParam1, 0, uParam6, -1);
func_40(1, iParam2, cParam3, 1, uParam6, 17);
func_40(3, iParam4, cParam5, 2, uParam6, -1);
}


void func_40(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5){
if(iParam1==1){
func_45(Global_20481, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(uParam4, iParam3);
func_41(iParam5, 0);
return;
}
if(Global_20488){
func_45(Global_20481, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
MISC::SET_BIT(uParam4, iParam3);
func_41(iParam5, 1);
return;
}
func_45(Global_20481, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(uParam4, iParam3);
func_41(iParam5, 1);
}


void func_41(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
MISC::SET_BIT(&Global_8370, iParam0);
return;
}
MISC::CLEAR_BIT(&Global_8370, iParam0);
}


void func_42(char[4] cParam0){
func_43(Global_20481, "SET_HEADER", cParam0, 0, 0, 0, 0);
}


void func_43(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
func_44(uParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam3)){
func_44(iParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam4)){
func_44(iParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam5)){
func_44(iParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam6)){
func_44(iParam6);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_44(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
if(!MISC::IS_STRING_NULL_OR_EMPTY(cParam7)){
func_44(cParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_44(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_44(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_44(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_44(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


void func_47(var uParam0){
*uParam0=0;
}