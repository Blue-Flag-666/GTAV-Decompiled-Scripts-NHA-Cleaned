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
int iLocal_26=0;
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
var uLocal_41=0;
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
int iLocal_112=0;
int iLocal_113=0;
int iLocal_114=0;
int iLocal_115=0;
int iLocal_116=0;
var uLocal_117=0;
var uLocal_118=0;
var uLocal_119=0;
var uLocal_120=0;
var uLocal_121=0;
var uLocal_122=0;
int iLocal_123=0;
int iLocal_124=0;
int iLocal_125=0;
struct<3> Local_126={
0, 0, 0 
};
struct<3> Local_127={
0, 0, 0 
};
char cLocal_128[16]="";
var uLocal_129=0;
var uLocal_130=0;
int iLocal_131=0;
#endregion

void __EntryFunction__(){
bool bVar0;
char* sVar1;
var uVar2[25];
bool bVar3;
struct<3> Var4;
int iVar5;
struct<3> Var6;
bool bVar7;
int iVar8;
int iVar9;
struct<3> Var10;
bool bVar11;
int iVar12;
bool bVar13;
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
iLocal_26=3;
fLocal_29=80f;
fLocal_30=140f;
fLocal_31=180f;
iLocal_37=1;
iLocal_38=65;
iLocal_39=49;
iLocal_40=64;
fLocal_61=((0.05f + 0.275f) - 0.01f);
iLocal_112=-1;
Local_126={
0f, 0f, 0f 
};
iLocal_123=iScriptParam_131;
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
SCRIPT::TERMINATE_THIS_THREAD();
}
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3)){
func_288();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(func_287(13) || func_287(14)){
func_288();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_38714){
func_288();
SCRIPT::TERMINATE_THIS_THREAD();
}
if(Global_75926){
SCRIPT::TERMINATE_THIS_THREAD();
}
bVar0=false;
sVar1="tvscreen";
bVar3=true;
Var4={
ENTITY::GET_ENTITY_COORDS(iScriptParam_131, 1) - ENTITY::GET_ENTITY_FORWARD_VECTOR(iScriptParam_131) * Vector(0.6f, 0.6f, 0.6f) 
};
Var4.f_2=(Var4.f_2 + 0.5f);
Local_127={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_131, Local_126) 
};
Global_1950704=0;
Global_1950700=0;
Global_1950812=0;
while (bVar3){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
if(iLocal_114){
if(!func_285(PLAYER::PLAYER_ID())){
if(!func_284(&uLocal_117)){
func_283(&uLocal_117, 1, 0);
}}}
if(Global_1950700 && (func_282(PLAYER::PLAYER_ID()) || func_281(PLAYER::PLAYER_ID()))){
if(!func_284(&uLocal_121)){
func_283(&uLocal_121, 0, 0);
}elseif(func_280(&uLocal_121, 10000, 0)){
func_279(&uLocal_121);
Global_1950700=0;
}
func_273(0);
}
if(Global_1853837){
if(!bVar0){
iVar5=ENTITY::GET_ENTITY_MODEL(iLocal_123);
if(iVar5==joaat("prop_laptop_01a")){
ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(iScriptParam_131, 1), 1f, joaat("prop_laptop_01a"), 0);
Var6={
ENTITY::GET_ENTITY_ROTATION(iLocal_123, 2) 
};
iLocal_123=OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(iLocal_123, 1), 0, 1, 0);
ENTITY::SET_ENTITY_ROTATION(iLocal_123, Var6, 2, 1);
bVar0=true;
}}}
if(OBJECT::HAS_OBJECT_BEEN_BROKEN(iLocal_123, 0)){
func_288();
SCRIPT::TERMINATE_THIS_THREAD();
}}
if(((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_123)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
if(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_123)){
bVar7=false;
iVar8=PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
iVar9=0;
iVar9=0;
while (iVar9 < iVar8){
if(!ENTITY::IS_ENTITY_DEAD(uVar2[iVar9], 0)){
if(ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar9], "MP_COMMON_MISS", "HACK_INTRO", 3)){
bVar7=true;
}
elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(uVar2[iVar9], "MP_COMMON_MISS", "HACK_LOOP", 3)){
bVar7=true;
}}
iVar9++;
}
if(Global_16){
bVar7=true;
}
Var10={
0.6f, 0.6f, 0.8f 
};
if(((func_272() || func_271(PLAYER::PLAYER_ID())) || func_281(PLAYER::PLAYER_ID())) || func_270()){
Var10={
1f, 1f, 0.9f 
};
}elseif(func_269()){
Var10={
0.75f, 0.55f, 1.25f 
};
}
bVar11=func_268(PLAYER::PLAYER_ID());
iVar12=1;
if(func_269() || func_267()){
iVar12=func_266(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_123), 90f);
}
if((((((((((((((((((((!bVar7 && !Global_32554) && !func_265(0)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && !func_264()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var4, Var10, 0, 1, 1)) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID())==INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iLocal_123)) && !MISC::IS_BIT_SET(Global_2621446, 15)) && !func_263()) && !(Global_78689 && func_262())) && !(!Global_78689 && func_261())) && !((Global_78689 && MISC::IS_BIT_SET(Global_4718592.f_14, 24)) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())) && !((Global_78689 && func_260()) && func_259())) && !(Global_78689 && func_257(PLAYER::PLAYER_ID())==5)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_77458) && !func_254()) && !func_253()) && iVar12) && !func_250()) && !func_249()){
if((!func_248(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33) && !func_247(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33, -1)) && !func_246(PLAYER::PLAYER_ID())){
if(iLocal_115 !=bVar11){
if((func_282(PLAYER::PLAYER_ID()) || func_245(PLAYER::PLAYER_ID())) || func_281(PLAYER::PLAYER_ID())){
if(iLocal_112 !=-1){
func_244(&iLocal_112);
}
if(func_242()){
HUD::CLEAR_HELP(1);
}}
}
iLocal_115=bVar11;
if(iLocal_112==-1){
if(bVar0){
func_241(&iLocal_112, 1, "MPLA_BILL", 0, 0, 0, 0);
}elseif(func_272()){
func_240(bVar11);
}elseif(func_237()){
func_234(bVar11);
}elseif(func_270()){
func_222(bVar11);
}elseif(func_269()){
func_220(bVar11);
}else{
func_241(&iLocal_112, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
}
}}
if(((iLocal_112 !=-1 && func_218(iLocal_112, 1)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_217()){
if(iLocal_112 !=-1){
func_244(&iLocal_112);
}
if(!bVar0){
if((func_216() || func_215()) || func_214()){
func_209();
}
if(func_272()){
func_30(0, bVar11);
func_29(0, 0, 1);
}elseif(func_270()){
func_30(0, bVar11);
func_29(0, 0, 3);
}elseif(func_237()){
func_30(1, bVar11);
func_29(0, 0, 2);
}elseif(func_269()){
func_29(8, 0, 0);
}else{
func_29(0, 0, 0);
}
if(!iLocal_113){
func_22();
iLocal_113=1;
}
bVar13=true;
if((func_216() || func_215()) || func_214()){
func_21(&uLocal_119, 0, 0);
while (!func_280(&uLocal_119, 500, 0)){
func_273(0);
wait(0);
}
func_279(&uLocal_119);
}
while (bVar13){
if(!ENTITY::DOES_ENTITY_EXIST(iLocal_123) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_123, 1), 1.5f, 1.5f, 4f, 0, 1, 1)){
Global_75819=1;
}
if(((func_216() || func_215()) || func_246(PLAYER::PLAYER_ID())) || func_214()){
if(!func_20() && !Global_77458){
bVar13=false;
}}elseif(func_20() || Global_75819){
bVar13=false;
}
if(func_216()){
func_273(0);
}
wait(0);
}
if((func_216() || func_215()) || func_214()){
func_6();
}
func_273(0);
func_279(&uLocal_121);
iLocal_113=0;
}}elseif((((iLocal_112 !=-1 && PAD::IS_CONTROL_JUST_PRESSED(2, 52)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_217()) && func_214()){
if(iLocal_112 !=-1){
func_244(&iLocal_112);
func_5();
}
func_209();
MISC::SET_BIT(&(Global_1950844.f_4), 28);
while (MISC::IS_BIT_SET(Global_1950844.f_4, 28)){
wait(0);
}
func_6();
func_4();
func_273(0);
}}else{
if(iLocal_112 !=-1){
func_244(&iLocal_112);
}
if(func_282(PLAYER::PLAYER_ID()) || func_245(PLAYER::PLAYER_ID())){
if(func_242()){
HUD::CLEAR_HELP(1);
}}
if(ENTITY::DOES_ENTITY_EXIST(iScriptParam_131)){
if(func_1()){
bVar3=false;
}}}}elseif(iLocal_112 !=-1){
func_244(&iLocal_112);
}}else{
if(iLocal_112 !=-1){
func_244(&iLocal_112);
}
bVar3=false;
}
wait(0);
}
if(bVar0){
if(HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar1)){
HUD::RELEASE_NAMED_RENDERTARGET(sVar1);
}}}

int func_1(){
int iVar0;
struct<3> Var1;
struct<3> Var2;
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
iVar0=ENTITY::GET_ENTITY_MODEL(iLocal_123);
if(func_3(iVar0)){
if(func_2(PLAYER::PLAYER_PED_ID())){
Var1={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) 
};
Var2={
ENTITY::GET_ENTITY_COORDS(iLocal_123, 1) 
};
return vdist2(Var1, Var2) > 10000f;
}}else{
return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_123);
}}
return 0;
}

int func_2(int iParam0){
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
if(!ENTITY::IS_ENTITY_DEAD(iParam0, 0)){
return 1;
}}
return 0;
}

int func_3(int iParam0){
if(iParam0==joaat("prop_laptop_lester")){
return 1;
}
return 0;
}


void func_4(){
if(Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=0;
}}


void func_5(){
if(!Global_2672524.f_947.f_10){
Global_2672524.f_947.f_10=1;
}}


void func_6(){
char* sVar0;
if(!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1) && ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)){
if(PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID())){
PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PLAYER::PLAYER_PED_ID());
if(!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1)){
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}}
if(func_7(1, &sVar0)){
STREAMING::REMOVE_ANIM_DICT(&sVar0);
}
if(func_7(2, &sVar0)){
if(iLocal_124 !=0){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_125)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_125);
iLocal_125=-1;
}
iLocal_125=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_127, ENTITY::GET_ENTITY_ROTATION(iLocal_123, 2), 2, 0, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
STREAMING::REMOVE_ANIM_DICT(&sVar0);
}}}}}
Global_1950699=0;
}

int func_7(int iParam0, char* sParam1){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
StringCopy(sParam1, "", 64);
return 0;
}
if(func_12()){
StringCopy(sParam1, "", 64);
return 0;
}
if((!func_282(PLAYER::PLAYER_ID()) && !func_281(PLAYER::PLAYER_ID())) && !func_8(PLAYER::PLAYER_ID())){
StringCopy(sParam1, "", 64);
return 0;
}
StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
return 1;
}

int func_8(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_9(Global_2657704[iParam0 /*463*/].f_321.f_7)==13;
}}}
return 0;
}

int func_9(int iParam0){
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

int func_10(int iParam0, bool bParam1, bool bParam2){
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

int func_11(){
return -1;
}

int func_12(){
if(Global_1575038==0){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return 1;
}}
if(func_19()){
return 1;
}
if(Global_2696994){
return 1;
}
if(func_18()){
return 1;
}
if(func_17(159)){
if(!func_16()){
return 1;
}}
if(func_17(157)){
return 1;
}
if(!NETWORK::NETWORK_IS_SIGNED_ONLINE()){
return 1;
}
if(func_13() !=0){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_13())==0){
return 1;
}}
return 0;
}

int func_13(){
switch (func_15()){
case 0:
return func_14();
break;
case 2:
return joaat("creator");
break;
}
return 0;
}

int func_14(){
switch (Global_2697098){
case 0:
return joaat("freemode");
default:
}
return joaat("freemode");
}

int func_15(){
return Global_32283;
}


bool func_16(){
return Global_2683883.f_698;
}

int func_17(int iParam0){
if(SCRIPT::GET_EVENT_EXISTS(1, iParam0)){
return 1;
}
return 0;
}


bool func_18(){
return Global_2694576;
}


bool func_19(){
return Global_2683883.f_693;
}


bool func_20(){
return Global_75816;
}


void func_21(var uParam0, bool bParam1, bool bParam2){
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


void func_22(){
if(func_28() || func_27()){
func_26();
func_23();
}}


void func_23(){
if((!func_25() && !func_24()) && Global_2684819){
Global_4718592.f_117591=0;
}}


bool func_24(){
return Global_2683883.f_691;
}


bool func_25(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 !=0;
}


void func_26(){
Global_2683883.f_756=1;
}


var func__27(){
return Global_2683883.f_735;
}


bool func_28(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 11);
}

int func_29(int iParam0, bool bParam1, int iParam2){
bool bVar0;
bool bVar1;
bool bVar2;
Global_75929=iParam0;
bVar0=iParam2==true;
bVar1=iParam2==2;
bVar2=iParam2==3;
switch (Global_75929){
case 3:
Global_75927=0;
break;
case 4:
Global_75927=3;
break;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0){
if(bVar0){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0){
if(bVar1){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0){
if(bVar2){
}
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0){
if((bVar0 || bVar1) || bVar2){
}
return 0;
}
if(Global_78689 && func_262()){
return 0;
}
if(!Global_78689 && func_261()){
return 0;
}
if(bVar0){
if(!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ")){
SCRIPT::REQUEST_SCRIPT("appSecuroServ");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ")){
wait(0);
}
start_new_script("appSecuroServ", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
return 1;
}
if(bVar1){
if(!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness")){
SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness")){
wait(0);
}
start_new_script("appBikerBusiness", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
return 1;
}
if(bVar2){
if(!SCRIPT::HAS_SCRIPT_LOADED("appImportExport")){
SCRIPT::REQUEST_SCRIPT("appImportExport");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport")){
wait(0);
}
start_new_script("appImportExport", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
return 1;
}
if(!SCRIPT::HAS_SCRIPT_LOADED("appInternet")){
SCRIPT::REQUEST_SCRIPT("appInternet");
if(bParam1){
return 0;
}}
while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet")){
wait(0);
}
start_new_script("appInternet", 4592);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
return 1;
}


void func_30(int iParam0, bool bParam1){
if((((!bParam1 && !func_208(PLAYER::PLAYER_ID(), 1)) && func_207() < func_206()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_202(PLAYER::PLAYER_ID())){
func_31(1, iParam0);
}}


void func_31(bool bParam0, int iParam1){
struct<14> Var0;
func_113(1, 1, iParam1);
if(bParam0){
if(func_112(91) || func_112(98)){
func_109();
}
func_94();
func_93(17);
Var0.f_2=514341487;
Var0.f_3=iParam1;
if(func_92(PLAYER::PLAYER_ID()) && iParam1==0){
Var0.f_3=100;
}
func_90(Var0, func_91(0, 1));
func_57();
if(!func_92(PLAYER::PLAYER_ID()) && iParam1 !=1){
func_32(82, "GB_TXTMSG_INIT2", 2, 0, 0, 0, 0, 1, 0, 1);
}}}

int func_32(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
int iVar7;
MISC::CLEAR_BIT(&Global_8370, 10);
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
iVar7=3;
if(func_34(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7)==1){
if(bParam7==1){
Global_9077=iParam6;
Global_8980[3 /*6*/]={
func_33(iParam0) 
};
Global_9057=iParam0;
MISC::SET_BIT(&Global_8370, 1);
MISC::SET_BIT(&Global_8370, 7);
}
return 1;
}
return 0;
}


struct<4> func_33(int iParam0){
return Global_2058[iParam0 /*29*/].f_3;
}

int func_34(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_50();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20500==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20500==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20500==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_113810.f_14054[Global_20500 /*20*/].f_17==1){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0){
return 0;
}}
if(func_49()==0){
func_47();
return 0;
}
func_46(Global_22912);
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/]), sParam1, 64);
Global_113810.f_14144[Global_22912 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113810.f_14144[Global_22912 /*104*/].f_24=iParam2;
}
Global_113810.f_14144[Global_22912 /*104*/].f_25=iParam7;
Global_113810.f_14144[Global_22912 /*104*/].f_26=uParam8;
Global_113810.f_14144[Global_22912 /*104*/].f_29=uParam9;
Global_113810.f_14144[Global_22912 /*104*/].f_30=uParam12;
Global_113810.f_14144[Global_22912 /*104*/].f_31=uParam11;
Global_113810.f_14144[Global_22912 /*104*/].f_28=0;
Global_113810.f_14144[Global_22912 /*104*/].f_32=iParam3;
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_33), sParam4, 64);
Global_113810.f_14144[Global_22912 /*104*/].f_49=iParam6;
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_50), sParam5, 64);
Global_113810.f_14144[Global_22912 /*104*/].f_66=iParam13;
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8370, 10)){
Global_113810.f_14144[Global_22912 /*104*/].f_99[0]=1;
Global_113810.f_14144[Global_22912 /*104*/].f_99[1]=1;
Global_113810.f_14144[Global_22912 /*104*/].f_99[2]=1;
Global_9076=4;
func_45(0);
func_45(2);
func_45(1);
}else{
func_50();
switch (iParam16){
case 3:
Global_113810.f_14144[Global_22912 /*104*/].f_99[Global_20500]=1;
break;
case 0:
Global_113810.f_14144[Global_22912 /*104*/].f_99[0]=1;
break;
case 2:
Global_113810.f_14144[Global_22912 /*104*/].f_99[2]=1;
break;
case 1:
Global_113810.f_14144[Global_22912 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20500){
case 0:
func_45(0);
Global_9076=0;
break;
case 1:
func_45(1);
Global_9076=1;
break;
case 2:
func_45(2);
Global_9076=2;
break;
case 3:
func_45(3);
Global_9076=3;
break;
default:
Global_9076=4;
break;
}}}
if(iParam7==1){
if(MISC::IS_BIT_SET(Global_8370, 10)){
Global_113810.f_14054[0 /*20*/].f_17=1;
Global_113810.f_14054[1 /*20*/].f_17=1;
Global_113810.f_14054[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113810.f_14054[Global_20500 /*20*/].f_17=1;
break;
case 0:
Global_113810.f_14054[0 /*20*/].f_17=1;
break;
case 2:
Global_113810.f_14054[2 /*20*/].f_17=1;
break;
case 1:
Global_113810.f_14054[1 /*20*/].f_17=1;
break;
}}}
Global_22914[Global_22912]=0;
if(bParam10){
func_50();
if(Global_20443){
StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20500){
case 0:
StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259==1){
if(!func_44()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, 1);
}}}
if(!Global_20705){
if(Global_20500.f_1==6){
func_43(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_40(1);
func_43(Global_20481, "DISPLAY_VIEW", 1f, to_float(Global_20480), -1082130432, -1082130432, -1082130432);
}}
if(Global_1978329 !=-1 && iParam0==Global_1978329){
bVar1=true;
}
func_35(iParam0, sParam1, bVar1, func_39(PLAYER::PLAYER_ID()));
return 1;
}


void func_35(int iParam0, char* sParam1, bool bParam2, var uParam3){
struct<14> Var0;
if(!func_36()){
return;
}
Var0.f_0=iParam0;
Var0.f_1=1654525105;
Var0.f_2=MISC::GET_HASH_KEY(sParam1);
Var0.f_3=0;
Var0.f_4=bParam2;
Var0.f_5=uParam3;
Var0.f_6=Global_1978312.f_7;
Var0.f_7=Global_1978312.f_8;
Var0.f_8=Global_1978312.f_9;
Var0.f_9=Global_1978312.f_10;
Var0.f_10=Global_1978312.f_11;
Var0.f_11=Global_1978312.f_12;
Var0.f_12=Global_1978312.f_13;
Var0.f_13=Global_1978312.f_14;
STATS::PLAYSTATS_NPC_PHONE(&Var0);
if(bParam2){
Global_1978329=-1;
}}

int func_36(){
if(!Global_262145.f_29085){
return 0;
}
if(!Global_78689){
return 0;
}
if(PLAYER::PLAYER_ID()==func_11()){
return 0;
}
if(func_37(PLAYER::PLAYER_ID())){
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


bool func_37(int iParam0){
return func_38(iParam0, 20);
}


bool func_38(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}


var func__39(int iParam0){
return Global_1853988[iParam0 /*867*/].f_205.f_6;
}


void func_40(int iParam0){
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
if(func_287(14)){
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
func_42(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694571){
if(iVar1==14){
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8377[iVar1 /*15*/]));
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
func_42(&(Global_8377[iVar1 /*15*/]));
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
func_42(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8371, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_42(&(Global_8377[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8377[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1890239.f_1;
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_41(Global_20481, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_8377[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8939[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_41(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
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
func_42(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_42(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_42(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_42(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_42(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_42(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_43(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
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


bool func_44(){
return Global_1575063;
}


void func_45(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113810.f_14054[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_46(int iParam0){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
var uVar5;
uVar0=CLOCK::GET_CLOCK_SECONDS();
uVar1=CLOCK::GET_CLOCK_MINUTES();
uVar2=CLOCK::GET_CLOCK_HOURS();
uVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
uVar5=CLOCK::GET_CLOCK_YEAR();
Global_113810.f_14144[iParam0 /*104*/].f_18=uVar0;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_1=uVar1;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_2=uVar2;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_3=uVar3;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_4=uVar4;
Global_113810.f_14144[iParam0 /*104*/].f_18.f_5=uVar5;
}


void func_47(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78689){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
Global_22912=34;
Global_113810.f_14144[Global_22912 /*104*/].f_18=-1;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_48(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18)){
Global_22912=iVar2;
}
iVar2++;
}
Global_113810.f_14144[Global_22912 /*104*/].f_24=1;
}

int func_48(struct<6> Param0, struct<6> Param1){
struct<4> Var0;
struct<4> Var1;
int iVar2;
int iVar3;
if(Param0.f_5 < Param1.f_5){
return 0;
}
if(Param0.f_5 > Param1.f_5){
return 1;
}
if(Param0.f_5==Param1.f_5){
if(Param0.f_4 < Param1.f_4){
return 0;
}
if(Param0.f_4 > Param1.f_4){
return 1;
}
if(Param0.f_4==Param1.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar2=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var1.f_0=Param1.f_0;
Var1.f_1=Param1.f_1 * 60;
Var1.f_2=Param1.f_2 * 3600;
Var1.f_3=(Param1.f_3 * 86400);
iVar3=(((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
if(iVar2 > iVar3 || iVar2==iVar3){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_49(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78689){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_113810.f_14144[iVar2 /*104*/].f_24==0){
Global_22912=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_22912=34;
Global_113810.f_14144[Global_22912 /*104*/].f_18=-1;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3=0;
Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_113810.f_14144[iVar2 /*104*/].f_24==0 || Global_113810.f_14144[iVar2 /*104*/].f_24==1){
if(!func_48(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18)){
Global_22912=iVar2;
}}
if(Global_113810.f_14144[iVar2 /*104*/].f_24==2){
}
iVar2++;
}
if(Global_22912==34){
return 0;
}
Global_113810.f_14144[Global_22912 /*104*/].f_99[0]=0;
Global_113810.f_14144[Global_22912 /*104*/].f_99[1]=0;
Global_113810.f_14144[Global_22912 /*104*/].f_99[2]=0;
return 1;
}


void func_50(){
if(func_287(14)){
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
Global_20500=func_51();
if(Global_20500==145){
Global_20500=3;
}
if(Global_78689){
Global_20500=3;
}
if(Global_20500 > 3){
Global_20500=3;
}}}


var func__51(){
func_52();
return Global_113810.f_2366.f_539.f_4321;
}


void func_52(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_55(Global_113810.f_2366.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_54(PLAYER::PLAYER_PED_ID());
if(func_53(iVar0) && (!func_287(14) || Global_112760)){
if(Global_113810.f_2366.f_539.f_4321 !=iVar0 && func_53(Global_113810.f_2366.f_539.f_4321)){
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


bool func_53(int iParam0){
return iParam0 < 3;
}

int func_54(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_55(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_55(int iParam0){
if(func_53(iParam0)){
return func_56(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__56(int iParam0){
return Global_2058[iParam0 /*29*/];
}


void func_57(){
if((!func_87() && func_72()) && func_70(PLAYER::PLAYER_ID())){
if(func_67()){
func_58("GB_INFO_MC_L", 0);
}else{
func_58("GB_INFO_LFG", 0);
}}}

int func_58(char* sParam0, bool bParam1){
int iVar0;
int iVar1;
iVar0=-1;
iVar1=1;
if(bParam1){
iVar1=2;
}
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
iVar0=HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
func_59(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
return iVar0;
}


void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11){
int iVar0;
if((!func_66() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_62(PLAYER::PLAYER_ID(), 0)){
return;
}
iVar0=func_60(iParam2);
if(iVar0 >=0 && iVar0 < 5){
Global_1944768.f_5[iVar0 /*53*/]=iParam0;
Global_1944768.f_5[iVar0 /*53*/].f_1=iParam2;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
Global_1944768.f_5[iVar0 /*53*/].f_2[0]=iParam4;
Global_1944768.f_5[iVar0 /*53*/].f_2[1]=iParam5;
Global_1944768.f_5[iVar0 /*53*/].f_2[2]=iParam6;
Global_1944768.f_5[iVar0 /*53*/].f_7=iParam7;
Global_1944768.f_5[iVar0 /*53*/].f_6=iParam8;
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
}}

int func_60(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 <=(Global_1944768 - 1)){
if(iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1){
func_61(iVar0);
return iVar0;
}
iVar0++;
}
Global_1944768++;
if(Global_1944768 > 5){
Global_1944768=5;
return Global_1944768;
}
return (Global_1944768 - 1);
}


void func_61(int iParam0){
int iVar0;
iVar0=4;
while (iVar0 >=iParam0 + 1){
Global_1944768.f_5[iVar0 /*53*/]={
Global_1944768.f_5[(iVar0 - 1) /*53*/] 
};
iVar0=(iVar0 + -1);
}}


bool func_62(int iParam0, int iParam1){
bool bVar0;
if(!func_65(iParam0)){
return 0;
}
if(iParam0==PLAYER::PLAYER_ID()){
bVar0=func_63(-1, 0)==8;
}else{
bVar0=Global_1853988[iParam0 /*867*/].f_205==8;
}
if(iParam1==1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
bVar0=PLAYER::GET_PLAYER_TEAM(iParam0)==8;
}}
return bVar0;
}

int func_63(int iParam0, bool bParam1){
int iVar0;
int iVar1;
iVar1=iParam0;
if(iVar1==-1){
iVar1=func_64();
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

int func_64(){
return Global_1574918;
}

int func_65(var uParam0){
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


bool func_66(){
return DLC::IS_DLC_PRESENT(-1762644250);
}


bool func_67(){
return func_68(PLAYER::PLAYER_ID());
}


bool func_68(int iParam0){
return func_69(iParam0, 1);
}

int func_69(int iParam0, int iParam1){
if(func_65(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_11()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429==iParam1){
return 1;
}}}
return 0;
}

int func_70(int iParam0){
if(iParam0==func_11()){
return 0;
}
if(!func_10(iParam0, 0, 1)){
return 0;
}
if(func_62(iParam0, 0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_139, 2) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_139, 5)){
return 0;
}
if(func_71(iParam0)){
return 0;
}
return 1;
}

int func_71(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return func_38(iParam0, 9);
}
return 0;
}

int func_72(){
int iVar0;
int iVar1;
iVar0=0;
while (iVar0 < 32){
iVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(func_73(iVar1)){
return 1;
}
iVar0++;
}
return 0;
}

int func_73(int iParam0){
int iVar0;
if(func_10(iParam0, 0, 1)){
if(iParam0 !=PLAYER::PLAYER_ID()){
iVar0=0;
if(func_86(1)){
if(func_85(iParam0, 9)){
iVar0=1;
}}elseif(func_38(iParam0, 15)){
iVar0=1;
}
if(iVar0 && func_74(iParam0, 0, 0)){
return 1;
}}}
return 0;
}

int func_74(int iParam0, int iParam1, bool bParam2){
if(iParam0==func_11()){
return 0;
}
if(!func_10(iParam0, 0, 1)){
return 0;
}
if(func_62(iParam0, 0)){
return 0;
}
if(func_83(iParam0)){
return 0;
}
if(MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_139, 2) || MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_139, 5)){
return 0;
}
if(func_82(iParam0)){
return 0;
}
if(bParam2){
if(func_80(iParam0, iParam1, 1)){
return 0;
}
if(func_37(iParam0)){
return 0;
}
if(func_78(iParam0, 1)){
return 0;
}}elseif(func_208(iParam0, 1)){
return 0;
}
if(func_77(iParam0)){
return 0;
}
if(func_71(iParam0)){
return 0;
}
if(func_202(iParam0)){
return 0;
}
if(func_75(iParam0)){
return 0;
}
return 1;
}

int func_75(int iParam0){
if(func_62(iParam0, 0)){
return 1;
}
if(func_76()){
if(iParam0==PLAYER::PLAYER_ID()){
return 1;
}}
if(MISC::IS_BIT_SET(Global_2657704[iParam0 /*463*/].f_199, 2)){
return 1;
}
return 0;
}


bool func_76(){
return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_77(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return MISC::IS_BIT_SET(Global_1895156[iVar0 /*609*/].f_1, 0);
}
return 0;
}


bool func_78(int iParam0, bool bParam1){
return func_79(iParam0, bParam1, 1);
}

int func_79(int iParam0, bool bParam1, int iParam2){
int iVar0;
if(!func_65(iParam0)){
return 0;
}
if(!bParam1){
if(func_69(iParam0, iParam2)){
return 0;
}}
iVar0=Global_1895156[iParam0 /*609*/].f_10;
if(iVar0 !=func_11() && Global_1895156[iVar0 /*609*/].f_10.f_429==iParam2){
return 1;
}
return 0;
}

int func_80(int iParam0, int iParam1, bool bParam2){
if(func_65(iParam1)){
if(!bParam2){
if(func_81(iParam0, iParam1)){
return 0;
}}
if(Global_1895156[iParam0 /*609*/].f_10 !=func_11()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10;
}}
return 0;
}

int func_81(int iParam0, int iParam1){
if(iParam1 !=func_11()){
if(iParam0 !=func_11()){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_11()){
if(Global_1895156[iParam0 /*609*/].f_10==iParam0){
return iParam1==iParam0;
}}}}
return 0;
}


bool func_82(int iParam0){
return func_38(iParam0, 30);
}

int func_83(int iParam0){
if(!func_38(iParam0, 2)){
return 1;
}
if(func_38(iParam0, 1)){
return 1;
}
if(func_84(iParam0) > 0){
return 1;
}
return 0;
}

int func_84(int iParam0){
return Global_1895156[iParam0 /*609*/].f_10.f_23;
}


bool func_85(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1895156[iParam0 /*609*/].f_10.f_5, iParam1);
}


bool func_86(bool bParam0){
return func_78(PLAYER::PLAYER_ID(), bParam0);
}

int func_87(){
int iVar0;
var uVar1;
struct<16> Var2;
iVar0=0;
while (iVar0 < 7){
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_11[iVar0]==func_11()){
StringCopy(&Var2, "", 64);
Var2={
func_88(func_89(iVar0)) 
};
if(MISC::ARE_STRINGS_EQUAL(&Var2, &uVar1)){
return 0;
}}
iVar0++;
}
return 1;
}
struct<16> func_88(int iParam0){
return Global_2684820.f_3076.f_18[iParam0 /*16*/];
}

int func_89(int iParam0){
switch (iParam0){
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
default:
}
return 0;
}


void func_90(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13){
Param0.f_0=-642704387;
Param0.f_1=PLAYER::PLAYER_ID();
if(!iParam13==0){
SCRIPT::SEND_TU_SCRIPT_EVEN(1, &Param0, 14, iParam13);
}}

int func_91(int iParam0, bool bParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=0;
while (iVar1 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar1);
if(func_10(iVar2, 0, 0)){
if(iVar2 !=PLAYER::PLAYER_ID() || iParam0){
if(bParam1){
MISC::SET_BIT(&uVar0, iVar1);
}elseif(!func_62(iVar2, 0)){
MISC::SET_BIT(&uVar0, iVar1);
}}}
iVar1++;
}
return uVar0;
}

int func_92(int iParam0){
if(!func_65(iParam0)){
return 0;
}
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 26);
}


void func_93(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), iVar1);
}


void func_94(){
struct<8> Var0;
int iVar1;
Var0={
func_108(119, 121, -1) 
};
iVar1=0;
if(func_86(1)){
Var0={
func_108(47, 48, -1) 
};
iVar1=1;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
StringCopy(&Var0, func_106(PLAYER::PLAYER_ID(), 0), 64);
}
func_100(&Var0, iVar1, 0);
if((!func_99() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_97()){
func_96(28);
}else{
func_95(28);
}}


void func_95(int iParam0){
MISC::SET_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}


void func_96(bool bParam0){
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_4), iParam0);
}

int func_97(){
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==0){
return 0;
}
if(func_98()){
if(NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}elseif(func_99()){
if(NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, 1)){
return 1;
}}elseif(MISC::IS_PC_VERSION()){
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1)){
if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()){
return 1;
}}}
return 0;
}


bool func_98(){
return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}


bool func_99(){
return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}


void func_100(char* sParam0, int iParam1, bool bParam2){
if(bParam2){
if(func_86(1) || iParam1==1){
func_103(47, 48, sParam0, -1, 1);
if(func_67() && iParam1==1){
func_102(sParam0, bParam2);
}}else{
func_103(119, 121, sParam0, -1, 1);
if(func_259() && iParam1==0){
func_101(sParam0, bParam2);
}}}
StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_105), sParam0, 64);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_121=LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
if((!func_99() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_97()){
func_96(28);
}else{
func_95(28);
}}


void func_101(char* sParam0, bool bParam1){
struct<16> Var0;
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_103(45, 46, sParam0, -1, 1);
Var0={
func_108(119, 121, -1) 
};
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
func_103(119, 121, sParam0, -1, 1);
}}}
if((!func_99() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_97()){
func_96(28);
}else{
func_95(28);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_339), sParam0, 64);
}}


void func_102(char* sParam0, bool bParam1){
if(bParam1){
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
func_103(49, 50, sParam0, -1, 1);
}}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam0)){
StringCopy(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_355), sParam0, 64);
}
if((!func_99() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_97()){
func_96(28);
}else{
func_95(28);
}}


void func_103(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4){
int iVar0;
int iVar1;
char cVar2[32];
char cVar3[32];
int iVar4;
int iVar5;
iVar0=func_104(iParam0, iParam3);
iVar1=func_104(iParam1, iParam3);
if(iVar0 !=0 && iVar1 !=0){
StringCopy(&cVar2, "", 32);
StringCopy(&cVar3, "", 32);
iVar4=HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
if(iVar4 > 0){
iVar5=10;
if(iVar4 < 10){
iVar5=iVar4;
}
StringCopy(&cVar2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, iVar5, 31), 32);
if(iVar4 > 10){
StringCopy(&cVar3, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, iVar4, 31), 32);
}}
STATS::STAT_SET_STRING(iVar0, &cVar2, iParam4);
STATS::STAT_SET_STRING(iVar1, &cVar3, iParam4);
}}


var func__104(var uParam0, var uParam1){
return unk_0xD69CE161FE614531(3, uParam0, func_105(uParam1));
}

int func_105(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_64();
if(iVar1 > -1){
Global_2805862=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2805862=1;
}}
return iVar0;
}


char* func_106(int iParam0, bool bParam1){
if(!bParam1){
if(func_78(iParam0, 1)){
return func_107();
}}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}


char* func_107(){
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM");
}
struct<16> func_108(int iParam0, int iParam1, int iParam2){
var uVar0;
var uVar1;
struct<16> Var2;
char cVar3[32];
uVar0=func_104(iParam0, iParam2);
uVar1=func_104(iParam1, iParam2);
StringCopy(&Var2, STATS::STAT_GET_STRING(uVar0, -1), 64);
StringCopy(&cVar3, STATS::STAT_GET_STRING(uVar1, -1), 32);
StringConCat(&Var2, &cVar3, 64);
return Var2;
}


void func_109(){
int iVar0;
iVar0=0;
while (iVar0 <=3){
if(Global_2672524.f_2514[iVar0 /*80*/].f_2 !=0){
Global_2672524.f_2514[iVar0 /*80*/].f_2=5;
func_110(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
}
iVar0++;
}}


void func_110(var uParam0, int iParam1){
func_111(uParam0, iParam1);
}


void func_111(var uParam0, var uParam1){
*uParam0=(*uParam0 || uParam1);
}


bool func_112(int iParam0){
return Global_2672524.f_2514[0 /*80*/].f_1==iParam0;
}


void func_113(bool bParam0, bool bParam1, int iParam2){
var uVar0;
int iVar1;
int iVar2;
struct<16> Var3;
var uVar4;
var uVar5;
char* sVar6;
struct<16> Var7;
bool bVar8;
int iVar9;
if(!func_199()){
return;
}
iVar2=1;
if(func_92(PLAYER::PLAYER_ID())){
iVar2=2;
}
if(iParam2==1){
iVar2=3;
}
if(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10 !=PLAYER::PLAYER_ID()){
if(bParam1){
Var3={
func_197(iParam2) 
};
STATS::START_BEING_BOSS(iVar2, &Var3);
func_194(0);
func_191(0);
func_96(21);
func_96(22);
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_467=iVar2;
}
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10=PLAYER::PLAYER_ID();
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_429=iParam2;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_466=iParam2;
STATS::GET_BOSS_GOON_UUID(func_64(), &uVar4, &uVar5);
func_190(uVar4, uVar5);
sVar6=NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
StringCopy(&Var7, sVar6, 64);
func_189(Var7);
func_188();
if(func_187(12554, -1) <=0){
iVar1=NETWORK::GET_CLOUD_TIME_AS_INT();
}else{
iVar1=(func_187(12554, -1) - 43200);
}
func_184(iVar1);
if(DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3)){
DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
}
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_24=-1;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_25=-1;
Global_2794162.f_5231.f_224=-1;
func_178();
func_170(12, 0, 1);
if(bParam0){
func_93(0);
}
if(Global_2794162.f_5231.f_260 !=func_11()){
Global_2794162.f_5231.f_260=func_11();
}
if(MISC::IS_BIT_SET(Global_2794162.f_1838, 15)){
MISC::CLEAR_BIT(&(Global_2794162.f_1838), 15);
}
if(func_169(15)){
func_168(15);
}
if(!func_167() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_166();
func_165(2);
}
func_163(12594, 2, -1, 1);
func_96(31);
func_94();
func_162();
func_161();
func_160();
func_126();
if(iParam2 !=1){
if(!func_125(82, 3)){
bVar8=false;
iVar9=func_187(12551, -1);
if(!MISC::IS_BIT_SET(iVar9, 11)){
MISC::SET_BIT(&iVar9, 11);
func_163(12551, iVar9, -1, 1);
bVar8=true;
}
func_119(82, 3, bVar8);
}}
if(iParam2==1){
STATS::PLAYSTATS_CHANGE_MC_ROLE(func_117(func_118()), func_116(func_118()), func_115(), func_114(), Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_430, 4, Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_468);
}}}

int func_114(){
if(Global_1948440.f_3 !=0){
return Global_1948440.f_3;
}
return -1;
}

int func_115(){
if(Global_1948440.f_2 !=0){
return Global_1948440.f_2;
}
return -1;
}

int func_116(int iParam0){
if(iParam0==func_11()){
return -1;
}
return Global_1895156[iParam0 /*609*/].f_10.f_8[1];
}

int func_117(int iParam0){
if(iParam0==func_11()){
return -1;
}
return Global_1895156[iParam0 /*609*/].f_10.f_8[0];
}

int func_118(){
return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}


void func_119(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_9056=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=172){
func_50();
if(iParam1==4){
func_124(iParam0, 0, 1);
func_124(iParam0, 1, 1);
func_124(iParam0, 2, 1);
func_123(iParam0, 0, 1);
func_123(iParam0, 1, 1);
func_123(iParam0, 2, 1);
}else{
if(func_122(iParam0, iParam1)==1 && func_121(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_124(iParam0, iVar0, 1);
func_123(iParam0, iVar0, 1);
if(iParam0==172 && !MISC::IS_BIT_SET(Global_2794162.f_6892, 4)){
bParam2=false;
}
if(iParam0==171 && !MISC::IS_BIT_SET(Global_2794162.f_6892, 3)){
bParam2=false;
}
if(iParam0==173 && !MISC::IS_BIT_SET(Global_2794162.f_6892, 3)){
bParam2=false;
}}
if(bParam2){
if(!Global_78689){
if(iParam1 !=4){
if(Global_20500 !=iParam1){
Global_9029[iParam1 /*4*/]={
func_33(iParam0) 
};
Global_9046[iParam1]=1;
Global_9051[iParam1]=iParam0;
}elseif(iParam0==Global_20500){
}else{
Global_8980[1 /*6*/]={
func_33(iParam0) 
};
Global_8980[1 /*6*/].f_5=iParam1;
func_120();
}}else{
Global_8980[1 /*6*/]={
func_33(iParam0) 
};
Global_8980[1 /*6*/].f_5=iParam1;
func_120();
}}else{
Global_8980[1 /*6*/]={
func_33(iParam0) 
};
Global_8980[1 /*6*/].f_5=iParam1;
func_120();
}}}}


void func_120(){
char cVar0[64];
char cVar1[64];
char* sVar2;
StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[Global_9056 /*29*/].f_7)), 64);
if(Global_9075==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8980[1 /*6*/])), 64);
sVar2=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8980[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8370, false);
}

int func_121(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_24[iParam1];
}

int func_122(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_2058[iParam0 /*29*/].f_12[iParam1];
}


void func_123(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_124(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_2058[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_125(int iParam0, int iParam1){
if(func_122(iParam0, iParam1)==1){
return 1;
}
return 0;
}


void func_126(){
bool bVar0;
if(func_28()){
if(func_24() || func_159()){
return;
}else{
func_133(0);
if(func_131()){
func_130();
}
func_129();
bVar0=NETWORK::NETWORK_IS_IN_TRANSITION();
if((((bVar0 || NETWORK::NETWORK_IS_TRANSITION_STARTED()) || NETWORK::NETWORK_IS_TRANSITION_BUSY()) || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING()) || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED()){
if(Global_262145.f_33922){
NETWORK::NETWORK_CANCEL_TRANSITION_MATCHMAKING();
}
if(bVar0){
NETWORK::NETWORK_BAIL_TRANSITION(6, 0, 0);
}}
func_128();
func_127();
func_129();
}}}


void func_127(){
Global_1048576.f_10=0;
}


void func_128(){
var uVar0;
var uVar1;
var uVar2;
var uVar3;
var uVar4;
int iVar5;
var uVar6;
int iVar7;
var uVar8;
var uVar9;
var uVar10;
var uVar11;
struct<13> Var12;
struct<16> Var13;
var uVar14;
var uVar15;
var uVar16;
var uVar17;
var uVar18;
var uVar19;
var uVar20;
int iVar21;
var uVar22;
int iVar23;
int iVar24;
int iVar25;
iVar5=-1;
iVar7=-1;
iVar21=-1;
Global_2684820.f_6023={
Var12 
};
iVar23=0;
while (iVar23 <=31){
Global_2684820.f_1.f_845[iVar23 /*57*/]={
Var12 
};
Global_2684820.f_1.f_845[iVar23 /*57*/].f_13={
Var13 
};
StringCopy(&(Global_2684820.f_1.f_845[iVar23 /*57*/].f_29), "", 16);
Global_2684820.f_1.f_845[iVar23 /*57*/].f_44=uVar16;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_45=uVar17;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_46=0;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_47=uVar18;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_50=uVar19;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_55=uVar20;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_48=0;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_49=0;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_54=0;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_56=uVar20;
Global_2684820.f_1.f_845[iVar23 /*57*/].f_53=uVar22;
iVar24=0;
while (iVar24 <=1){
Global_2684820.f_1.f_845[iVar23 /*57*/].f_33[iVar24]=uVar14;
iVar24++;
}
iVar24=0;
while (iVar24 <=6){
Global_2684820.f_1.f_845[iVar23 /*57*/].f_36[iVar24]=uVar15;
iVar24++;
}
iVar23++;
}
iVar23=0;
while (iVar23 <=1){
Global_2684820.f_1.f_2670[iVar23 /*57*/]={
Var12 
};
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_13={
Var13 
};
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_44=uVar16;
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_45=uVar17;
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_47=uVar18;
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_50=uVar19;
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_55=uVar20;
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_56=uVar20;
iVar24=0;
while (iVar24 <=1){
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_33[iVar24]=uVar14;
iVar24++;
}
iVar24=0;
while (iVar24 <=6){
Global_2684820.f_1.f_2670[iVar23 /*57*/].f_36[iVar24]=uVar15;
iVar24++;
}
iVar23++;
}
Global_2684820.f_1.f_2798=uVar0;
Global_2684820.f_1.f_2799=uVar1;
Global_2684820.f_1.f_2800=uVar2;
Global_2684820.f_1.f_2802=uVar3;
Global_2684820.f_1.f_2805=uVar4;
Global_2684820.f_1.f_2806=0;
Global_2684820.f_1.f_2808=iVar5;
Global_2684820.f_1.f_2809=uVar6;
Global_2684820.f_1.f_2810=uVar6;
Global_2684820.f_1.f_2811=iVar7;
Global_2684820.f_1.f_2812=uVar8;
iVar25=0;
while (iVar25 < 8){
Global_2684820.f_1.f_2813[iVar25]=0;
iVar25++;
}
Global_2684820.f_1.f_2825=iVar21;
Global_2684820.f_1.f_2822=uVar9;
Global_2684820.f_1.f_2823=uVar10;
Global_2684820.f_1.f_2824=uVar11;
Global_2683883.f_841=0;
}


void func_129(){
MISC::SET_BIT(&(Global_2683883.f_2), 12);
}


void func_130(){
Global_1057409=-1;
}

int func_131(){
switch (func_132()){
case 21:
case 35:
case 33:
case 37:
case 46:
case 48:
case 50:
case 52:
case 54:
case 56:
case 58:
case 60:
case 62:
case 64:
case 71:
case 73:
case 86:
case 88:
case 109:
return 1;
default:
}
return 0;
}

int func_132(){
return Global_1057409;
}


void func_133(bool bParam0){
var uVar0;
if(func_155() && !func_154()){
func_153();
func_152();
}else{
uVar0=func_151();
func_150();
func_148(1);
func_147();
func_146();
func_145();
if(uVar0 && !bParam0){
func_144();
}}
if(Global_2692776.f_8){
func_143();
}
func_142();
func_141();
func_140();
func_138();
if(!func_137()){
func_136();
func_135(0);
}
func_152();
func_134(0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
NETWORK::NETWORK_REMAIN_IN_GAME_CHAT(0);
}}


void func_134(int iParam0){
Global_2683883.f_889=iParam0;
}


void func_135(int iParam0){
if(iParam0==-1){
Global_2683883.f_890++;
}else{
Global_2683883.f_890=iParam0;
}}


void func_136(){
Global_2683883.f_9=-1;
}


bool func_137(){
return Global_2683883.f_737;
}


void func_138(){
Global_2683883.f_42=func_139();
}

int func_139(){
if(Global_2691837){
return 32;
}
return (32 - Global_2691838);
}


void func_140(){
Global_2683883.f_735=0;
}


void func_141(){
Global_2683883.f_717=0;
}


void func_142(){
MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 15);
}


void func_143(){
Global_2692776.f_8=0;
Global_2692776.f_7=0;
}


void func_144(){
MISC::SET_BIT(&(Global_2683883.f_3), 2);
}


void func_145(){
MISC::CLEAR_BIT(&Global_2683883, 7);
}


void func_146(){
MISC::CLEAR_BIT(&Global_2683883, 6);
}


void func_147(){
Global_2683883=0;
Global_2683883.f_2=0;
Global_2683883.f_3=0;
}


void func_148(bool bParam0){
int iVar0;
struct<57> Var1;
int iVar2;
Global_2684820.f_1.f_2798=0;
Global_2684820.f_1.f_2799=0;
Global_2684820.f_1.f_2824=0;
Global_2684820.f_1.f_2805=0;
Global_2684820.f_1.f_2806=0;
Global_2684820.f_1.f_2809=0;
Global_2684820.f_1.f_2810=0;
Global_2684820.f_1.f_2808=-1;
Global_2684820.f_1.f_2811=-1;
iVar0=0;
while (iVar0 < 8){
Global_2684820.f_1.f_2813[iVar0]=0;
iVar0++;
}
Global_2684820.f_1.f_2825=-1;
if(bParam0){
Global_2684820.f_1.f_2822=-1;
Global_2684820.f_1.f_2823=-1;
}
Global_2684820.f_1.f_2844=0;
func_149();
Var1.f_33=2;
Var1.f_36=7;
iVar2=0;
while (iVar2 <=31){
Global_2684820.f_1.f_845[iVar2 /*57*/]={
Var1 
};
iVar2++;
}
Global_2680268.f_33=-1;
Global_2680268.f_34=-1;
}


void func_149(){
Global_2680268.f_32=0;
}


void func_150(){
struct<13> Var0;
int iVar1;
iVar1=0;
while (iVar1 < 32){
Global_2681636[iVar1 /*37*/]={
Var0 
};
StringCopy(&(Global_2681636[iVar1 /*37*/].f_13), "", 64);
StringCopy(&(Global_2681636[iVar1 /*37*/].f_29), "", 16);
Global_2681636[iVar1 /*37*/].f_33=0;
Global_2681636[iVar1 /*37*/].f_34=0;
Global_2681636[iVar1 /*37*/].f_35=0;
iVar1++;
}
Global_2681636.f_1185=0;
Global_2681636.f_1186=0;
}


var func__151(){
return MISC::IS_BIT_SET(Global_2683883.f_3, 2);
}


void func_152(){
MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 5);
}


void func_153(){
MISC::CLEAR_BIT(&(Global_2683883.f_2), 11);
}


bool func_154(){
return MISC::IS_BIT_SET(Global_2683883.f_2, 27);
}

int func_155(){
if(((func_16() || func_158()) || func_157()) || func_156()){
return 1;
}
return 0;
}


var func__156(){
return MISC::IS_BIT_SET(Global_2683883, 1);
}


var func__157(){
return MISC::IS_BIT_SET(Global_2683883, 2);
}


var func__158(){
return MISC::IS_BIT_SET(Global_2683883, 20);
}


var func__159(){
return MISC::IS_BIT_SET(Global_2684820.f_1.f_2810, 3);
}


void func_160(){
if(!Global_2794162.f_5231.f_339){
Global_2794162.f_5231.f_339=1;
}}


void func_161(){
struct<16> Var0;
Var0={
func_108(49, 50, -1) 
};
func_102(&Var0, 0);
if((!func_99() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_97()){
func_96(28);
}else{
func_95(28);
}}


void func_162(){
struct<16> Var0;
Var0={
func_108(45, 46, -1) 
};
func_101(&Var0, 0);
if((!func_99() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, 1)) || func_97()){
func_96(28);
}else{
func_95(28);
}}


void func_163(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_164(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
}}


var func__164(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(0, iParam0, func_105(uParam1));
}


void func_165(int iParam0){
MISC::SET_BIT(&(Global_4593960.f_2), iParam0);
if(Global_4593960){
return;
}
Global_4593960=1;
Global_4593960.f_1=0;
}


void func_166(){
int iVar0;
iVar0=0;
while (iVar0 < 15){
if(Global_4593886.f_28[iVar0 /*2*/] !=-1 && Global_4593886.f_28[iVar0 /*2*/].f_1 !=0){
if(HUD::DOES_BLIP_EXIST(Global_4593886.f_28[iVar0 /*2*/].f_1)){
HUD::SET_BLIP_AS_SHORT_RANGE(Global_4593886.f_28[iVar0 /*2*/].f_1, 1);
}}
iVar0++;
}}


bool func_167(){
return Global_2683883.f_740;
}


void func_168(int iParam0){
int iVar0;
bool bVar1;
iVar0=(iParam0 / 32);
bVar1=(iParam0 % 32);
MISC::CLEAR_BIT(&(Global_2794162.f_5231.f_7[iVar0]), bVar1);
}


bool func_169(int iParam0){
int iVar0;
int iVar1;
iVar0=(iParam0 / 32);
iVar1=(iParam0 % 32);
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_7[iVar0], iVar1);
}


void func_170(int iParam0, int iParam1, bool bParam2){
if(func_177()){
if(iParam1==1){
if(Global_2794162.f_4499==-1){
Global_2794162.f_4499=Global_262145.f_27370;
}
func_21(&(Global_2794162.f_4497), 0, 0);
if(bParam2){
if(Global_2794162.f_4502==-1){
Global_2794162.f_4502=Global_262145.f_27371;
}
func_21(&(Global_2794162.f_4500), 0, 0);
}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_176(1);
}}else{
Global_1574582=0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8=0;
func_176(1);
}
if((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_175()) && !func_171(PLAYER::PLAYER_ID())){
Global_1057408=0;
}
STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(0, -1, -1, iParam0);
}}

int func_171(int iParam0){
if(func_172(iParam0, 1, 0)){
if(Global_1853988[iParam0 /*867*/] !=6){
return 1;
}}
return 0;
}

int func_172(int iParam0, bool bParam1, bool bParam2){
if(bParam1){
if(func_173(iParam0)){
return 1;
}}
if(!bParam2){}
if(Global_1853988[iParam0 /*867*/]==-1){
return 0;
}
return 1;
}


bool func_173(int iParam0){
return func_174(iParam0);
}


var func__174(int iParam0){
return MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}


bool func_175(){
return Global_2683883.f_841;
}


void func_176(bool bParam0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(!func_177()){
if(func_10(PLAYER::PLAYER_ID(), 1, 0)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
}
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
Global_1574582.f_2=0;
if(bParam0){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(0, 0);
}}}else{
if(func_10(PLAYER::PLAYER_ID(), 1, 1)){
PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
if(Global_1574582.f_1==0 || Global_1574582.f_2==1){
NETWORK::SET_LOCAL_PLAYER_AS_GHOST(1, 0);
}}
NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
}}}


bool func_177(){
return Global_1574582;
}


void func_178(){
int iVar0;
bool bVar1;
iVar0=0;
while (iVar0 < 32){
bVar1=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1)){
func_180(1, bVar1);
if(bVar1 !=PLAYER::PLAYER_ID()){
func_179(bVar1);
}}
iVar0++;
}}


void func_179(bool bParam0){
var uVar0;
if(MISC::IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_101, bParam0)){
uVar0=PLAYER::GET_PLAYER_PED(bParam0);
PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(uVar0, PLAYER::PLAYER_ID(), 1);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), bParam0, 1);
PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(bParam0, PLAYER::PLAYER_ID(), 1);
func_180(1, bParam0);
MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_101), bParam0);
}}


void func_180(bool bParam0, bool bParam1){
int iVar0;
var uVar1;
int iVar2;
int iVar3;
if(func_10(bParam1, 0, 1)){
uVar1=PLAYER::GET_PLAYER_PED(bParam1);
if(ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)){
if(PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0)){
iVar0=PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar0, bParam0, 1);
if(func_80(bParam1, func_118(), 1)){
if(func_118()==bParam1){
if(Global_2794162.f_5231.f_261[3] !=iVar0){
Global_2794162.f_5231.f_261[3]=iVar0;
}
}
else{
iVar2=func_181(func_118(), bParam1);
if(iVar2 !=-1){
if(Global_2794162.f_5231.f_261[iVar2] !=iVar0){
Global_2794162.f_5231.f_261[iVar2]=iVar0;
}}
}}}}elseif(!bParam0){
if(func_80(bParam1, func_118(), 1)){
if(func_118()==bParam1){
iVar0=Global_2794162.f_5231.f_261[3];
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar0, true, 1);
Global_2794162.f_5231.f_261[3]=0;
}}else{
iVar3=func_181(func_118(), bParam1);
if(iVar3 !=-1){
iVar0=Global_2794162.f_5231.f_261[iVar3];
if((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)){
VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(iVar0, true, 1);
Global_2794162.f_5231.f_261[iVar3]=0;
}
}}}}}}}

int func_181(int iParam0, int iParam1){
int iVar0;
if(func_268(iParam0)){
if(func_80(iParam1, iParam0, 0) || func_183(iParam1, iParam0)){
iVar0=0;
while (iVar0 < 7){
if(func_182(iParam0, iVar0)==iParam1){
return iVar0;
}
iVar0++;
}}}
return -1;
}

int func_182(int iParam0, int iParam1){
if(func_268(iParam0)){
if(iParam1 > -1 && iParam1 < 7){
return Global_1895156[iParam0 /*609*/].f_10.f_11[iParam1];
}}
return func_11();
}

int func_183(int iParam0, int iParam1){
if(iParam1 !=func_11()){
if(Global_1895156[iParam0 /*609*/].f_10.f_26 !=func_11()){
return iParam1==Global_1895156[iParam0 /*609*/].f_10.f_26;
}}
return 0;
}


void func_184(int iParam0){
if(!func_199()){
return;
}
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_1=iParam0;
if(func_187(12554, -1) !=func_185(PLAYER::PLAYER_ID())){
func_163(12554, func_185(PLAYER::PLAYER_ID()), -1, 1);
}}

int func_185(int iParam0){
if(func_186(iParam0)==-1){
return -1;
}
return (func_186(iParam0) + 43200);
}

int func_186(int iParam0){
return Global_1895156[iParam0 /*609*/].f_10.f_1;
}

int func_187(int iParam0, int iParam1){
var uVar0;
var uVar1;
if(iParam0 !=14385){
uVar0=func_164(iParam0, iParam1);
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


void func_188(){
if(MISC::IS_PC_VERSION()){
NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
if(func_86(1)){
HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
}else{
HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
}}}


void func_189(char[64] cParam0){
Global_2684820.f_3076.f_2={
cParam0 
};
}


void func_190(var uParam0, var uParam1){
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_8[0]=uParam0;
Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_8[1]=uParam1;
}


void func_191(int iParam0){
func_192(204, iParam0, -1, 1);
}


void func_192(int iParam0, var uParam1, int iParam2, int iParam3){
int iVar0;
iVar0=func_193(iParam0, iParam2);
if(iVar0 !=0){
STATS::STAT_SET_BOOL(iVar0, uParam1, iParam3);
}}


var func__193(int iParam0, var uParam1){
return unk_0xD69CE161FE614531(2, uParam0, func_105(uParam1));
}


void func_194(bool bParam0){
if(bParam0){
if(func_196(4)){
func_95(21);
func_95(22);
}
func_95(31);
func_195(bParam0);
}else{
if(func_38(PLAYER::PLAYER_ID(), 21)){
func_96(21);
if(!func_196(3) && func_196(4)){
func_95(22);
}}
func_96(31);
func_195(bParam0);
}}


void func_195(bool bParam0){
func_192(424, bParam0, -1, 1);
}


bool func_196(int iParam0){
return MISC::IS_BIT_SET(Global_2794162.f_5231.f_48, iParam0);
}
struct<16> func_197(int iParam0){
struct<16> Var0;
if(iParam0==1){
Var0={
func_108(47, 48, -1) 
};
}else{
Var0={
func_108(119, 121, -1) 
};
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&Var0)){
StringCopy(&Var0, func_198(iParam0), 64);
}
return Var0;
}


char* func_198(int iParam0){
switch (iParam0){
case 1:
return func_107();
default:
}
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC");
}

int func_199(){
if(func_201() && func_200(0)){
return 1;
}
return 0;
}


var func__200(int iParam0){
return Global_1574538[iParam0];
}


var func__201(){
return func_200(func_64() + 1);
}


bool func_202(int iParam0){
return func_203(iParam0) > 0;
}

int func_203(int iParam0){
int iVar0;
int iVar1;
if(func_10(iParam0, 0, 1)){
if(Global_1895156[iParam0 /*609*/].f_10.f_181 !=-1){
iVar0=Global_1895156[iParam0 /*609*/].f_10.f_181;
}else{
iVar0=func_205(joaat("mpply_vipgameplaydisabledtimer"));
}
iVar1=((iVar0 + func_204()) - NETWORK::GET_CLOUD_TIME_AS_INT());
return iVar1;
}
return -1;
}

int func_204(){
return Global_262145.f_15585;
}

int func_205(int iParam0){
var uVar0;
var uVar1;
uVar0=iParam0;
if(STATS::STAT_GET_INT(uVar0, &uVar1, -1)){
return uVar1;
}
return 0;
}

int func_206(){
return Global_262145.f_13014;
}

int func_207(){
int iVar0;
int iVar1;
int iVar2;
iVar0=0;
while (iVar0 < 32){
iVar2=PLAYER::INT_TO_PLAYERINDEX(iVar0);
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)){
if(func_268(bVar2)){
iVar1++;
}}
iVar0++;
}
return iVar1;
}


bool func_208(int iParam0, bool bParam1){
if(!func_65(iParam0)){
return 0;
}
if(!bParam1){
if(func_268(iParam0)){
return 0;
}}
return Global_1895156[iParam0 /*609*/].f_10 !=func_11();
}


void func_209(){
char* sVar0;
struct<3> Var1;
bool bVar2;
Global_1950699=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
Var1={
ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_123, 0.0328f, -0.8f, 0.3f) 
};
bVar2=false;
func_279(&uLocal_119);
if(func_7(0, &sVar0)){
while (!bVar2){
func_273(0);
if(!func_284(&uLocal_119)){
func_283(&uLocal_119, 0, 0);
}elseif(func_280(&uLocal_119, 4000, 0)){
bVar2=true;
}
if(!func_213(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 0.05f, 0) && !func_266(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_123), 5f)){
if(!func_211(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))){
TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, 5000, ENTITY::GET_ENTITY_HEADING(iLocal_123), 0.25f);
}}else{
bVar2=true;
}
GRAPHICS::DRAW_DEBUG_SPHERE(Var1, 0.1f, 255, 0, 0, 255);
GRAPHICS::DRAW_DEBUG_LINE(Var1, ENTITY::GET_ENTITY_COORDS(iLocal_123, 1), 0, 255, 0, 255);
GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 0, 0, 255, 255);
wait(0);
}
func_279(&uLocal_119);
iLocal_124=0;
}}
while (iLocal_124 !=3){
func_210(iLocal_123);
func_273(0);
wait(0);
}}


void func_210(int iParam0){
char* sVar0;
char* sVar1;
char* sVar2;
char* sVar3;
int iVar4;
int iVar5;
int iVar6;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
if((!func_282(PLAYER::PLAYER_ID()) && !func_281(PLAYER::PLAYER_ID())) && !func_8(PLAYER::PLAYER_ID())){
return;
}
if(!ENTITY::DOES_ENTITY_EXIST(iParam0)){
return;
}
func_7(0, &sVar0);
func_7(1, &sVar1);
func_7(2, &sVar2);
STREAMING::REQUEST_ANIM_DICT(&sVar2);
STREAMING::REQUEST_ANIM_DICT(&sVar0);
sVar3="idle_a";
iVar4=1;
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==joaat("mp_f_freemode_01")){
iVar4=1;
}
switch (iLocal_124){
case 0:
iLocal_116=0;
GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar0)){
if(TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord"))==7 && STREAMING::HAS_ANIM_DICT_LOADED(&sVar0)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_125)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_125);
iLocal_125=-1;
}
iLocal_125=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_127, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
STREAMING::REMOVE_ANIM_DICT(&sVar0);
iLocal_124=1;
}}
break;
case 1:
GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
STREAMING::REQUEST_ANIM_DICT(&sVar1);
iVar5=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_125);
if(!iLocal_116){
if(PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >=0.93f){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
iLocal_116=1;
}}
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar1) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >=0.96f)){
iVar6=MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
if((((MISC::ARE_STRINGS_EQUAL(&cLocal_128, "idle_a") && iVar6==0) || (MISC::ARE_STRINGS_EQUAL(&cLocal_128, "idle_b") && iVar6==1)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_128, "idle_c") && iVar6==2)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_128, "idle_d") && iVar6==3)){
iVar6++;
if(iVar6 >=iVar4){
iVar6=0;
}}
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_125)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_125);
iLocal_125=-1;
}
iLocal_125=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_127, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
switch (iVar6){
case 0:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar1, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
StringCopy(&cLocal_128, "idle_a", 16);
iLocal_124=3;
break;
case 1:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar1, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
StringCopy(&cLocal_128, "idle_b", 16);
iLocal_124=3;
break;
case 2:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar1, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
StringCopy(&cLocal_128, "idle_c", 16);
iLocal_124=3;
break;
case 3:
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar1, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
StringCopy(&cLocal_128, "idle_d", 16);
iLocal_124=3;
break;
default:
StringCopy(&cLocal_128, "idle_XXX", 16);
break;
}}
break;
case 3:
iLocal_116=0;
if(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_a", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_b", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_c", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}elseif(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar1, "idle_d", 2)){
GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}else{
GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
}
iVar5=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_125);
if(!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_125) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_125)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_125);
iLocal_125=-1;
}
iLocal_125=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_127, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
iVar5=NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_125);
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5)){
PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar5, 0f);
}
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
iLocal_124=3;
return;
}
if(STREAMING::HAS_ANIM_DICT_LOADED(&sVar1) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >=0.99f)){
if(PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_125)){
PED::DETACH_SYNCHRONIZED_SCENE(iLocal_125);
iLocal_125=-1;
}
iLocal_125=NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_127, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_125, &sVar1, sVar3, 4f, -2f, 5, 0, 1148846080, 0);
NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_125);
iLocal_124=3;
return;
}
break;
}}

int func_211(int iParam0, int iParam1){
if(func_212(iParam0)){
if(TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1)==0){
return 1;
}}
return 0;
}

int func_212(int iParam0){
if(func_2(iParam0)){
if(!PED::IS_PED_INJURED(iParam0)){
return 1;
}}
return 0;
}

int func_213(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3){
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

int func_214(){
if(!func_8(PLAYER::PLAYER_ID())){
return 0;
}
return MISC::IS_BIT_SET(Global_1950844.f_516, 30);
}

int func_215(){
if(func_281(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_1950844.f_516, 0) || MISC::IS_BIT_SET(Global_1950844.f_516, 2)){
return 1;
}}
return 0;
}

int func_216(){
if(func_282(PLAYER::PLAYER_ID())){
if(MISC::IS_BIT_SET(Global_1950844.f_516, 0) || MISC::IS_BIT_SET(Global_1950844.f_516, 2)){
return 1;
}}
return 0;
}

int func_217(){
if(func_202(PLAYER::PLAYER_ID())){
return 0;
}
if(func_253()){
return 0;
}
if(func_250()){
return 0;
}
if(func_268(PLAYER::PLAYER_ID())){
return 1;
}elseif(func_207() < func_206()){
return 1;
}
return 0;
}

int func_218(int iParam0, bool bParam1){
int iVar0;
iVar0=func_219(iParam0);
if(iVar0==-1){
return 0;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())){
return 0;
}
if(func_265(0)){
return 0;
}
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return 0;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]==1 && Global_44123[iVar0 /*32*/].f_4==1){
if(bParam1){
if(Global_44123[iVar0 /*32*/].f_29){
return 0;
}}
Global_44123[iVar0 /*32*/].f_5=1;
Global_44123[iVar0 /*32*/].f_29=1;
return 1;
}else{
if(Global_44123[iVar0 /*32*/]==0){
}
if(Global_44123[iVar0 /*32*/].f_7){
}}}
return 0;
}

int func_219(int iParam0){
int iVar0;
if(iParam0 < 0){
return -1;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(Global_44123[iVar0 /*32*/].f_1==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_220(bool bParam0){
if(((func_214() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_221()) && !Global_1950700){
func_241(&iLocal_112, 2, "ARENAWHINPUT", 0, 0, 0, 0);
}}


bool func_221(){
return Global_1950844.f_529;
}


void func_222(bool bParam0){
if((((func_246(PLAYER::PLAYER_ID()) && func_232(PLAYER::PLAYER_ID())==func_231(PLAYER::PLAYER_ID())) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_221()) && !Global_1950700){
if(func_228()){
func_227("WHPRIVSESLAP");
}elseif(!bParam0){
if(func_207() >=func_206()){
func_241(&iLocal_112, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
}elseif(func_202(PLAYER::PLAYER_ID())){
func_241(&iLocal_112, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
}elseif(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_227("WHSECUROBLCK");
}else{
func_241(&iLocal_112, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
}}elseif(func_68(PLAYER::PLAYER_ID())){
func_227("WHBIKERBLCK");
}elseif((func_284(&uLocal_117) && func_280(&uLocal_117, 10000, 1)) || !iLocal_114){
if(func_223(PLAYER::PLAYER_ID()) || Global_1950700==1){
iLocal_114=1;
if(!Global_1950700){
func_227("WHSECUROBLCK");
}}else{
if(func_242()){
HUD::CLEAR_HELP(1);
}
iLocal_114=0;
func_279(&uLocal_117);
func_241(&iLocal_112, 1, "WHSECUROINPUT", 0, 0, 0, 0);
}}elseif(iLocal_114){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_227("WHSECUROBLCK");
}
if(!func_223(PLAYER::PLAYER_ID())){
HUD::CLEAR_HELP(1);
iLocal_114=0;
}}}}


bool func_223(int iParam0){
return func_224(func_225(iParam0));
}

int func_224(int iParam0){
switch (iParam0){
case 178:
case 188:
return 1;
default:
}
return 0;
}

int func_225(int iParam0){
if(func_65(iParam0)){
if(func_226(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_33;
}}
return -1;
}

int func_226(int iParam0, int iParam1){
if(func_65(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10.f_33 !=-1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 !=-1)){
return 1;
}}
return 0;
}


void func_227(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_228(){
if(Global_1950705){
return 0;
}
return func_229();
}

int func_229(){
if(func_230()){
return 1;
}
return Global_2683883.f_744;
}


bool func_230(){
return Global_1575021==10;
}

int func_231(int iParam0){
if(iParam0==func_11()){
return 0;
}
return Global_1853988[iParam0 /*867*/].f_267.f_144;
}

int func_232(int iParam0){
if(func_246(iParam0)){
return func_233(Global_2657704[iParam0 /*463*/].f_321.f_7);
}
return 0;
}

int func_233(int iParam0){
switch (iParam0){
case 60:
return 1;
break;
case 61:
return 2;
break;
case 62:
return 3;
break;
case 63:
return 4;
break;
case 64:
return 5;
break;
case 65:
return 6;
break;
case 66:
return 7;
break;
case 67:
return 8;
break;
case 68:
return 9;
break;
case 69:
return 10;
break;
}
return 0;
}


void func_234(bool bParam0){
if(((((func_245(PLAYER::PLAYER_ID()) || func_215()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_221()) && !Global_1950700) && func_266(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(iLocal_123), 90f)){
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_227("WHSECUROBLCK");
}elseif(func_228()){
if(func_245(PLAYER::PLAYER_ID())){
func_227("BIKERWHBLCKC");
}else{
func_227("BIKERWHBLCKD");
}}elseif(func_68(PLAYER::PLAYER_ID())){
if((func_284(&uLocal_117) && func_280(&uLocal_117, 10000, 1)) || !iLocal_114){
if(func_235(PLAYER::PLAYER_ID()) || Global_1950700==1){
iLocal_114=1;
if(!Global_1950700){
func_227("WHSECUROBLCK");
}}else{
if(func_242()){
HUD::CLEAR_HELP(1);
}
iLocal_114=0;
func_279(&uLocal_117);
func_241(&iLocal_112, 1, "BIKERWHINPUT", 0, 0, 0, 0);
}}elseif(iLocal_114){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_227("WHSECUROBLCK");
}
if(!func_235(PLAYER::PLAYER_ID())){
iLocal_114=0;
HUD::CLEAR_HELP(1);
}}}elseif(!bParam0 && func_207() < func_206()){
func_241(&iLocal_112, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
}else{
func_227("BIKERWHBLCKB");
}}}


bool func_235(int iParam0){
return func_236(func_225(iParam0));
}

int func_236(int iParam0){
switch (iParam0){
case 190:
case 191:
case 192:
return 1;
default:
}
return 0;
}

int func_237(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
if(func_239(PLAYER::PLAYER_ID())){
return 0;
}
if(func_281(PLAYER::PLAYER_ID()) || func_238(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}

int func_238(int iParam0){
if(func_247(Global_1853988[iParam0 /*867*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_239(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1 && Global_2657704[iParam0 /*463*/].f_321.f_10 !=func_11()){
return func_9(Global_2657704[iParam0 /*463*/].f_321.f_7)==25;
}}}
return 0;
}


void func_240(bool bParam0){
if(((func_216() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) && !func_221()) && !Global_1950700){
if(func_228()){
func_227("WHPRIVSESLAP");
}elseif(!bParam0){
if(func_207() >=func_206()){
func_241(&iLocal_112, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
}elseif(func_202(PLAYER::PLAYER_ID())){
func_241(&iLocal_112, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
}elseif(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
func_227("WHSECUROBLCK");
}else{
func_241(&iLocal_112, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
}}elseif(func_68(PLAYER::PLAYER_ID())){
func_227("WHBIKERBLCK");
}elseif((func_284(&uLocal_117) && func_280(&uLocal_117, 10000, 1)) || !iLocal_114){
if(func_285(PLAYER::PLAYER_ID()) || Global_1950700==1){
iLocal_114=1;
if(!Global_1950700){
func_227("WHSECUROBLCK");
}}else{
if(func_242()){
HUD::CLEAR_HELP(1);
}
iLocal_114=0;
func_279(&uLocal_117);
func_241(&iLocal_112, 1, "WHSECUROINPUT", 0, 0, 0, 0);
}}elseif(iLocal_114){
if(!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
func_227("WHSECUROBLCK");
}
if(!func_285(PLAYER::PLAYER_ID())){
HUD::CLEAR_HELP(1);
iLocal_114=0;
}}}}


void func_241(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6){
int iVar0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1){}
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*iParam0==-1){
func_244(iParam0);
}
return;
}
if(!*iParam0==-1){
return;
}
iVar0=0;
iVar0=0;
while (iVar0 < 6){
if(!Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/]=1;
Global_44123[iVar0 /*32*/].f_1=Global_44324;
Global_44324++;
Global_44123[iVar0 /*32*/].f_4=0;
Global_44123[iVar0 /*32*/].f_29=0;
Global_44123[iVar0 /*32*/].f_5=0;
Global_44123[iVar0 /*32*/].f_2=iParam1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
Global_44123[iVar0 /*32*/].f_6=iParam3;
Global_44123[iVar0 /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44123[iVar0 /*32*/].f_7=0;
Global_44123[iVar0 /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44123[iVar0 /*32*/].f_12=1;
StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
Global_44123[iVar0 /*32*/].f_30=iParam6;
}else{
Global_44123[iVar0 /*32*/].f_12=0;
Global_44123[iVar0 /*32*/].f_30=0;
}
*iParam0=Global_44123[iVar0 /*32*/].f_1;
return;
}
iVar0++;
}}

int func_242(){
if((((((((((func_243("MP_OFF_LAP_1") || func_243("WHPRIVSESLAP")) || func_243("WHSECUROBLCK")) || func_243("SECINPUTTREGLAP")) || func_243("BIKERWHINPUT")) || func_243("BIKERWHBLCKA")) || func_243("BIKERWHBLCKB")) || func_243("WHBIKERBLCK")) || func_243("BIKERWHBLCKC")) || func_243("BIKERWHBLCKD")) || func_243("ARENAWHINPUT")){
return 1;
}
return 0;
}


var func__243(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_244(int iParam0){
int iVar0;
if(*iParam0==-1){
return;
}
iVar0=func_219(*iParam0);
if(iVar0==-1){
*iParam0=-1;
return;
}
if(iVar0 > -1 && iVar0 < 6){
if(Global_44123[iVar0 /*32*/]){
Global_44123[iVar0 /*32*/].f_7=1;
*iParam0=-1;
return;
}}
*iParam0=-1;
}

int func_245(int iParam0){
if(func_247(Global_1853988[iParam0 /*867*/].f_267.f_33, -1) && !MISC::IS_BIT_SET(Global_1853988[iParam0 /*867*/].f_267.f_31, 1)){
return 1;
}
return 0;
}

int func_246(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_9(Global_2657704[iParam0 /*463*/].f_321.f_7)==1;
}}}
return 0;
}

int func_247(int iParam0, int iParam1){
if(iParam1==-1){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}elseif(iParam1==91){
switch (iParam0){
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
return 1;
break;
}}elseif(iParam1==97){
switch (iParam0){
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
return 1;
break;
}}
return 0;
}

int func_248(int iParam0){
switch (iParam0){
case 87:
case 88:
case 89:
case 90:
return 1;
break;
}
return 0;
}


bool func_249(){
return Global_77468;
}

int func_250(){
if(((func_2(PLAYER::PLAYER_PED_ID()) && func_208(PLAYER::PLAYER_ID(), 1)) && func_226(PLAYER::PLAYER_ID(), 0)) && func_71(PLAYER::PLAYER_ID())){
if(func_225(PLAYER::PLAYER_ID())==256){
if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, 0, 1, 0)){
return 1;
}}
if(func_225(PLAYER::PLAYER_ID())==271){
if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.88f, -528.8513f, 75.0839f, -1472.63f, -526.5934f, 73.3136f, 0, 1, 0)){
return 1;
}elseif(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.467f, -3167.947f, -37.5246f, 1006.903f, -3171.152f, -39.6192f, 0, 1, 0)){
return 1;
}}
if(func_251(Global_4718592.f_117591)==5){
if(ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 571.1f, -3123.7f, 19.8f, 567.1f, -3128.7f, 17.8f, 0, 1, 0)){
return 1;
}}}
return 0;
}

int func_251(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 6){
if(iParam0==func_252(iVar0)){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_252(int iParam0){
if(iParam0 !=-1){
return Global_262145.f_33923[iParam0];
}
return -1;
}


bool func_253(){
return MISC::IS_BIT_SET(Global_1950844.f_11, 1);
}

int func_254(){
if(func_256(PLAYER::PLAYER_ID())==150 && func_255(PLAYER::PLAYER_PED_ID(), 3084.511f, -4686.664f, 26.2522f, 50f, 1)){
return 1;
}
return 0;
}


bool func_255(int iParam0, struct<3> Param1, float fParam2, int iParam3){
return vdist2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), Param1) <=(fParam2 * fParam2);
}

int func_256(int iParam0){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
return Global_1895156[iVar0 /*609*/];
}
return -1;
}

int func_257(int iParam0){
if(func_225(iParam0)==243){
return func_258(iParam0);
}
return -1;
}

int func_258(int iParam0){
if(func_226(iParam0, 0)){
return Global_1895156[iParam0 /*609*/].f_10.f_182;
}
return -1;
}

int func_259(){
return func_268(PLAYER::PLAYER_ID());
}


bool func_260(){
return Global_1853988[PLAYER::PLAYER_ID() /*867*/]==148;
}


var func__261(){
return Global_75817;
}


var func__262(){
return Global_1936392;
}

int func_263(){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, 0)==PLAYER::PLAYER_PED_ID()){
return 1;
}}
return 0;
}

int func_264(){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0){
return 1;
}
return 0;
}

int func_265(int iParam0){
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

int func_266(float fParam0, float fParam1, float fParam2){
float fVar0;
float fVar1;
fVar1=(fParam1 - fParam2);
if(fVar1 < 0f){
fVar1=(fVar1 + 360f);
}
fVar0=(fParam1 + fParam2);
if(fVar0 >=360f){
fVar0=(fVar0 - 360f);
}
if(fVar0 > fVar1){
if(fParam0 < fVar0 && fParam0 > fVar1){
return 1;
}}elseif(fParam0 < fVar0 || fParam0 > fVar1){
return 1;
}
return 0;
}

int func_267(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
if(func_282(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}

int func_268(int iParam0){
if(func_65(iParam0)){
if(Global_1895156[iParam0 /*609*/].f_10 !=func_11()){
return Global_1895156[iParam0 /*609*/].f_10==iParam0;
}}
return 0;
}

int func_269(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123) && func_8(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_270(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123) && func_246(PLAYER::PLAYER_ID())){
return 1;
}
return 0;
}

int func_271(int iParam0){
if(func_247(Global_1853988[iParam0 /*867*/].f_267.f_33, -1)){
return 1;
}
return 0;
}

int func_272(){
if(ENTITY::DOES_ENTITY_EXIST(iLocal_123)){
if(ENTITY::GET_ENTITY_MODEL(iLocal_123)==joaat("ex_prop_monitor_01_ex") || func_282(PLAYER::PLAYER_ID())){
return 1;
}}
return 0;
}


void func_273(int iParam0){
if(func_278()){
return;
}
if(!Global_20500.f_1==1){
if(func_265(0)){
func_274(iParam0);
}
MISC::SET_BIT(&Global_8371, 2);
}}


void func_274(int iParam0){
if(func_278()){
return;
}
if(Global_20704){
if(func_277()){
func_276(1, 1);
}else{
func_276(0, 0);
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
if(!func_275()){
Global_20500.f_1=3;
}}

int func_275(){
if(Global_20500.f_1==1 || Global_20500.f_1==0){
return 1;
}
return 0;
}


void func_276(bool bParam0, bool bParam1){
if(bParam0){
if(func_265(0)){
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


bool func_277(){
return MISC::IS_BIT_SET(Global_1963795, 5);
}


bool func_278(){
return MISC::IS_BIT_SET(Global_1963795, 19);
}


void func_279(var uParam0){
uParam0->f_1=0;
}

int func_280(var uParam0, int iParam1, bool bParam2){
if(iParam1==-1){
return 1;
}
func_283(uParam0, bParam2, 0);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2){
if(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >=iParam1){
return 1;
}}elseif(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >=iParam1){
return 1;
}
return 0;
}

int func_281(int iParam0){
int iVar0;
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
iVar0=func_9(Global_2657704[iParam0 /*463*/].f_321.f_7);
return (iVar0==2 || iVar0==25);
}}}
return 0;
}

int func_282(int iParam0){
if(iParam0 !=func_11()){
if(func_10(iParam0, 1, 1)){
if(Global_2657704[iParam0 /*463*/].f_321.f_7 !=-1){
return func_9(Global_2657704[iParam0 /*463*/].f_321.f_7)==0;
}}}
return 0;
}


void func_283(var uParam0, bool bParam1, bool bParam2){
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


bool func_284(var uParam0){
return uParam0->f_1;
}


bool func_285(int iParam0){
return func_286(func_225(iParam0));
}

int func_286(int iParam0){
switch (iParam0){
case 167:
case 169:
case 168:
return 1;
default:
}
return 0;
}


bool func_287(int iParam0){
return Global_43377==iParam0;
}


void func_288(){
if(iLocal_112 !=-1){
func_244(&iLocal_112);
}
if(func_242()){
HUD::CLEAR_HELP(1);
}
Global_1950700=0;
Global_1950699=0;
}