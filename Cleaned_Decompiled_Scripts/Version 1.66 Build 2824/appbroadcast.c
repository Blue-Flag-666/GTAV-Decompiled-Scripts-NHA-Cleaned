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
var uLocal_21=0;
var uLocal_22=0;
float fLocal_23=0f;
float fLocal_24=0f;
float fLocal_25=0f;
var uLocal_26=0;
var uLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
char cLocal_30[16]="";
var uLocal_31=0;
var uLocal_32=0;
char cLocal_33[16]="";
var uLocal_34=0;
var uLocal_35=0;
char cLocal_36[16]="";
var uLocal_37=0;
var uLocal_38=0;
char cLocal_39[16]="";
var uLocal_40=0;
var uLocal_41=0;
char cLocal_42[16]="";
var uLocal_43=0;
var uLocal_44=0;
char cLocal_45[16]="";
var uLocal_46=0;
var uLocal_47=0;
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
fLocal_14=0.001f;
iLocal_17=-1;
sLocal_18="NULL";
fLocal_23=80f;
fLocal_24=140f;
fLocal_25=180f;
StringCopy(&cLocal_30, "CELL_212", 16);
StringCopy(&cLocal_33, "CELL_213", 16);
StringCopy(&cLocal_36, "CELL_39", 16);
StringCopy(&cLocal_39, "CELL_MP_300", 16);
StringCopy(&cLocal_42, "CELL_MP_301", 16);
StringCopy(&cLocal_45, "CELL_MP_302", 16);
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
func_45(&uLocal_28);
func_36();
while (true){
wait(0);
if(!NETWORK::NETWORK_IS_IN_SESSION()){
func_34(1);
func_33();
}
if(!Global_20383.f_1==9 && Global_20383.f_1 > 3){
func_3();
if(Global_20383.f_1 !=8){
if(func_2()){
func_33();
}}}
if(func_1()){
func_33();
}}}

int func_1(){
if(((Global_20383.f_1==1 || Global_20383.f_1==3) || Global_20383.f_1==0) || Global_20327==1){
Global_20370=1;
return 1;
}
return 0;
}

int func_2(){
if(Global_8859==1 || Global_20383.f_1 < 7){
Global_20370=1;
return 1;
}
return 0;
}


void func_3(){
if(func_29(&uLocal_28)){
if(func_16()){
if(Global_2694465){
NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(0);
func_10(1583221826, func_11(1, 1));
Global_2694465=0;
}else{
NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(1);
func_10(1217051745, func_11(1, 1));
Global_2694465=1;
}
func_4(0);
return;
}}}


void func_4(int iParam0){
if(func_9()){
return;
}
if(Global_20584){
if(func_8()){
func_6(1, 1);
}else{
func_6(0, 0);
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
if(!func_5()){
Global_20383.f_1=3;
}}

int func_5(){
if(Global_20383.f_1==1 || Global_20383.f_1==0){
return 1;
}
return 0;
}


void func_6(bool bParam0, bool bParam1){
if(bParam0){
if(func_7(0)){
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

int func_7(int iParam0){
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


bool func_8(){
return MISC::IS_BIT_SET(Global_1962996, 5);
}


bool func_9(){
return MISC::IS_BIT_SET(Global_1962996, 19);
}


void func_10(int iParam0, int iParam1){
struct<4> Var0;
Var0.f_0=-1428749433;
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
if(func_15(iVar2, 0, 0)){
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
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_13(-1, 0)==8;
}else{
bVar0=Global_1853910[iParam0 /*862*/].f_205==8;
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

int func_14(){
return Global_1574918;
}

int func_15(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=uParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0)){
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

int func_16(){
if(!func_23(PLAYER::PLAYER_ID(), 1) && func_17()){
return 1;
}
return 0;
}

int func_17(){
if(!func_18()){
return 0;
}
return 1;
}

int func_18(){
if(Global_1574612){
return 1;
}
if(func_22()){
return 1;
}
if(func_21()){
return 1;
}
return func_19(120, -1);
}

int func_19(int iParam0, int iParam1){
var uVar0;
var uVar1;
uVar0=Global_2848282[iParam0 /*3*/][func_20(iParam1)];
if(STATS::STAT_GET_BOOL(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_20(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_14();
if(iVar1 > -1){
Global_2804741=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2804741=1;
}}
return iVar0;
}


bool func_21(){
return Global_1575048;
}


bool func_22(){
return Global_1575050;
}


bool func_23(int iParam0, bool bParam1){
if(func_28() !=0){
return func_27(iParam0) !=0;
}
return func_24(iParam0, bParam1, 0);
}

int func_24(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_25(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853910[iParam0 /*862*/]==-1){
return 0;
}
return 1;
}


bool func_25(int iParam0){
return func_26(iParam0);
}


var func__26(int iParam0){
return MISC::IS_BIT_SET(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_27(int iParam0){
if(func_15(iParam0, 0, 1)){
return Global_2657589[iParam0 /*466*/].f_1;
}
return 0;
}

int func_28(){
return Global_32163;
}

int func_29(var uParam0){
if(!MISC::IS_BIT_SET(*uParam0, 0)){
return 0;
}
if(Global_20361){
return 0;
}
if(!CAM::IS_SCREEN_FADED_IN()){
return 0;
}
if(!PAD::IS_CONTROL_JUST_PRESSED(2, Global_20352)){
return 0;
}
func_30();
Global_20361=1;
return 1;
}


void func_30(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20372, 1);
func_31();
}}


void func_31(){
if(func_32()){
MOBILE::CELL_SET_INPUT(5);
}}

int func_32(){
var uVar0;
int iVar1;
int iVar2;
if(Global_78558){
return 0;
}
iVar2=0;
uVar0=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
iVar1=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(uVar0);
if(iVar1==4){
iVar2=1;
}
if(Global_4542575 || iVar2){
return 1;
}
return 1;
}


void func_33(){
SCRIPT::TERMINATE_THIS_THREAD();
}


void func_34(bool bParam0){
if(bParam0){
func_35();
if(Global_20383.f_1==10 || Global_20383.f_1==9){
MISC::SET_BIT(&Global_8254, 16);
}
Global_20383.f_1=1;
if(func_7(0)){
func_4(0);
}}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0){
Global_20383.f_1=3;
}}}


void func_35(){
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}}


void func_36(){
if(!Global_20383.f_1==7){
Global_20383.f_1=7;
}
func_44(Global_20364, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
if(func_16()){
if(Global_2694465){
func_43(Global_20364, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_42, 0, 0, 0, 0);
}else{
func_43(Global_20364, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_39, 0, 0, 0, 0);
}}else{
func_43(Global_20364, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &cLocal_45, 0, 0, 0, 0);
}
func_44(Global_20364, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
func_40(&cLocal_36);
if(func_16()){
func_37(13, &cLocal_30, 1, "", 4, &cLocal_33, &uLocal_28);
}else{
func_37(1, "", 1, "", 4, &cLocal_33, &uLocal_28);
}}


void func_37(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6){
func_38(2, iParam0, cParam1, 0, uParam6, -1);
func_38(1, iParam2, cParam3, 1, uParam6, 17);
func_38(3, iParam4, cParam5, 2, uParam6, -1);
}


void func_38(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5){
if(iParam1==1){
func_43(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(uParam4, iParam3);
func_39(iParam5, 0);
return;
}
if(Global_20371){
func_43(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
MISC::SET_BIT(uParam4, iParam3);
func_39(iParam5, 1);
return;
}
func_43(Global_20364, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(uParam4, iParam3);
func_39(iParam5, 1);
}


void func_39(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
MISC::SET_BIT(&Global_8253, iParam0);
return;
}
MISC::CLEAR_BIT(&Global_8253, iParam0);
}


void func_40(char[4] cParam0){
func_41(Global_20364, "SET_HEADER", cParam0, 0, 0, 0, 0);
}


void func_41(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
func_42(uParam2);
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam3)){
func_42(iParam3);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam4)){
func_42(iParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam5)){
func_42(iParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam6)){
func_42(iParam6);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_42(var uParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11){
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
func_42(cParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam8)){
func_42(iParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam9)){
func_42(iParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam10)){
func_42(iParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(iParam11)){
func_42(iParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_44(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


void func_45(var uParam0){
*uParam0=0;
}